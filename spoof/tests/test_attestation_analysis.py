import base64
import importlib.util
from pathlib import Path
import tempfile
import unittest

spec = importlib.util.spec_from_file_location('analysis', Path(__file__).parents[1] / 'analyze_attestation.py')
analysis = importlib.util.module_from_spec(spec)
spec.loader.exec_module(analysis)


class RawAnalysisTests(unittest.TestCase):
    def test_standard_parser_structure_without_values(self):
        # varint, texte, message candidat, bytes binaires, fixed32, groupe.
        value = bytes.fromhex('08960112026f6b1a0208072202ff002d0100000033380134')
        report = analysis.analyze(value)
        self.assertTrue(report['protoc_accepted'])
        self.assertTrue(report['parser_agreement'])
        self.assertEqual([f['number'] for f in report['fields']], [1, 2, 3, 4, 5, 6])
        self.assertEqual(report['fields'][0]['minimum_varint_bytes'], 2)
        self.assertTrue(report['fields'][1]['printable_text_candidate'])
        self.assertTrue(report['fields'][2]['embedded_message_candidate'])
        self.assertFalse(report['fields'][3]['valid_utf8'])
        self.assertEqual(report['fields'][4]['value_bytes'], 4)
        self.assertNotIn('"ok"', str(report))

    def test_invalid_protobuf_does_not_imply_encryption(self):
        for value in (b'\x00', b'\x12\x05ab', b'\x08\x80'):
            report = analysis.analyze(value)
            self.assertFalse(report['protoc_accepted'])
            self.assertFalse(report['unknown_field_set_accepted'])
            self.assertFalse(report['format_confirmed'])

    def test_byte_comparison_catches_same_size_differences_and_tail(self):
        self.assertTrue(analysis.compare(b'abc', b'abc')['identical'])
        same_size = analysis.compare(b'abc', b'axc')
        self.assertFalse(same_size['identical'])
        self.assertEqual(same_size['different_positions_including_extra_bytes'], 1)
        result = analysis.compare(b'abc', b'axcd')
        self.assertFalse(result['identical'])
        self.assertEqual(result['different_positions_including_extra_bytes'], 2)
        self.assertEqual(result['first_difference_offset'], 1)
        self.assertEqual(result['difference_ranges_start_inclusive_end_exclusive'], [[1, 2], [3, 4]])
        self.assertTrue(analysis.compare(b'', b'')['identical'])

    def test_capture_extraction_validates_lengths(self):
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / 'history.txt'
            encoded = base64.b64encode(b'\x08\x01').decode()
            prefix = '[SS06LogOnly] 2026-10-06T12:00:00.000Z dump=attestation_payload call=1 requestPath=/snapchat.janus.api.LoginService/AppLogin pathSource=argument requestType=1 '
            path.write_text(prefix + 'bytes=2 base64=' + encoded + '\n')
            self.assertEqual(analysis.history_captures(path)['login'][0][0], b'\x08\x01')
            self.assertFalse(analysis.history_captures(path)['registration'])
            path.write_text(prefix + 'bytes=1421 base64=' + encoded + '\n')
            with self.assertRaises(ValueError):
                analysis.history_captures(path)
        with self.assertRaises(ValueError):
            analysis.decode_base64('not base64!')


if __name__ == '__main__':
    unittest.main()
