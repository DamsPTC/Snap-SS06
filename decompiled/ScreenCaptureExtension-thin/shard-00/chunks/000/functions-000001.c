/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100015114; end: 100015213;  */

/* WARNING: Removing unreachable block (ram,0x000100015208) */

undefined1  [16] FUN_100015114(undefined8 ***param_1,ulong param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_40;
  ulong uStack_38;
  
  ppuStack_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  pppuVar1 = &ppuStack_40;
  puVar3 = PTR___sSSN_100024300;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (pppuVar1,PTR___sSSN_100024300,PTR___sSSs25LosslessStringConvertiblesWP_100024320,
             PTR___sSSSTsWP_100024310);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    FUN_100015490();
    _swift_bridgeObjectRelease(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    FUN_100015214(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_38 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_40;
    ppuStack_40 = pppuVar1;
    FUN_100015214(pppuVar2,puVar4,param_3);
  }
  _swift_bridgeObjectRelease(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}



/* Entry: 100015214; end: 10001548f;  */

undefined1  [16] FUN_100015214(byte *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  char cVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  iVar8 = (int)param_3;
  uVar7 = param_2;
  if (*param_1 == 0x2b) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100015490);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) goto LAB_100015480;
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_100015480;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 + (ulong)(byte)(bVar3 + cVar12),
         SCARRY8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_100015464;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  else {
    if (*param_1 != 0x2d) {
      if (param_2 != 0) {
        uVar1 = iVar8 + 0x30;
        uVar2 = 0x61;
        if (10 < param_3) {
          uVar2 = iVar8 + 0x57;
        }
        uVar5 = 0x41;
        if (10 < param_3) {
          uVar1 = 0x3a;
          uVar5 = iVar8 + 0x37;
        }
        if (param_1 == (byte *)0x0) {
          return ZEXT816(0);
        }
        uVar9 = 0;
        do {
          bVar3 = *param_1;
          if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
            uVar10 = (uint)bVar3;
            if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
              uVar7 = 1;
              if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_100015480;
              cVar12 = -0x57;
            }
            else {
              cVar12 = -0x37;
            }
          }
          else {
            cVar12 = -0x30;
          }
          lVar11 = uVar9 * param_3;
          if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar11 >> 0x3f) ||
             (uVar9 = lVar11 + (ulong)(byte)(bVar3 + cVar12),
             SCARRY8(lVar11,(ulong)(byte)(bVar3 + cVar12)))) break;
          param_1 = param_1 + 1;
          param_2 = param_2 - 1;
          if (param_2 == 0) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar9;
            return auVar15;
          }
        } while( true );
      }
LAB_100015464:
      return ZEXT816(1) << 0x40;
    }
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10001548c);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) {
LAB_100015480:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar7;
      return auVar4 << 0x40;
    }
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_100015480;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 - (ulong)(byte)(bVar3 + cVar12),
         SBORROW8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_100015464;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar9;
  return auVar14;
}



/* Entry: 100015490; end: 1000154df;  */

undefined1  [16]
FUN_100015490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_1000154e0(0xf,param_1,param_2);
  FUN_10001552c();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 1000154e0; end: 10001552b;  */

void FUN_1000154e0(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (param_1 >> 0xe <= uVar1 << 2) {
    uVar4 = (uint)(param_2 >> 0x3b) & 1;
    if ((param_3 & 0x1000000000000000) == 0) {
      uVar4 = 1;
    }
    uVar2 = 7;
    if (uVar4 == 0) {
      uVar2 = 0xb;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001cfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSSySsSnySS5IndexVGcig_100024330)(param_1,uVar2 | uVar1 << 0x10,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10001552c);
  (*pcVar3)();
}



/* Entry: 10001552c; end: 10001566f;  */

void FUN_10001552c(ulong *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_50;
  
  if ((param_4 >> 0x3c & 1) == 0) {
    if ((param_4 >> 0x3d & 1) == 0) {
      if ((param_3 >> 0x3c & 1) == 0) {
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_3,param_4);
      }
                    /* WARNING: Could not recover jumptable at 0x00010001cf58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ_1000242c0)();
      return;
    }
    uStack_60 = param_4 & 0xffffffffffffff;
    uStack_68 = param_3;
    __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ
              ((long)&uStack_68 + ((ulong)param_1 >> 0x10),
               (param_2 >> 0x10) - ((ulong)param_1 >> 0x10));
  }
  else {
    puVar2 = param_1;
    __sSs8UTF8ViewV8distance4from2toSiSS5IndexV_AGtF(param_1,param_2,param_1,param_2);
    puVar3 = (ulong *)PTR___swiftEmptyArrayStorage_100024458;
    if (puVar2 != (ulong *)0x0) {
      puVar3 = puVar2;
      FUN_100015670();
      puVar4 = &uStack_68;
      FUN_1000156e0(puVar4,puVar3 + 4,puVar2,param_1,param_2,param_3,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(uStack_50);
      if (puVar4 != puVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10001562c);
        (*pcVar1)();
      }
    }
    __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ(puVar3 + 4,puVar3[2]);
    _swift_release(puVar3);
  }
  return;
}



/* Entry: 100015670; end: 1000156df;  */

undefined * FUN_100015670(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100024458;
  if (param_2 != 0) {
    puVar1 = (undefined *)0x100029a28;
    FUN_100012244(0x100029a28,&UNK_10001e9a8);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Entry: 1000156e0; end: 1000158d7;  */

long FUN_1000156e0(ulong *param_1,undefined1 *param_2,long param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 uVar11;
  ulong uVar12;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar3 = param_4;
  if (param_2 != (undefined1 *)0x0) {
    lVar7 = param_3;
    if (param_3 == 0) goto LAB_100015734;
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000158d8);
      (*pcVar2)();
    }
    uVar12 = param_5 >> 0xe;
    if (param_4 >> 0xe != uVar12) {
      uVar6 = (uint)(param_6 >> 0x3b) & 1;
      if ((param_7 & 0x1000000000000000) == 0) {
        uVar6 = 1;
      }
      uVar9 = 4L << uVar6;
      uVar1 = param_6 & 0xffffffffffff;
      if ((param_7 & 0x2000000000000000) != 0) {
        uVar1 = param_7 >> 0x38 & 0xf;
      }
      lVar10 = 1;
      do {
        uVar8 = uVar3 & 0xc;
        uVar4 = uVar3;
        if (uVar8 == uVar9) {
          FUN_1000158d8(uVar3,param_6,param_7);
        }
        if ((uVar4 >> 0xe < param_4 >> 0xe) || (uVar12 <= uVar4 >> 0xe)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000158d0);
          (*pcVar2)();
        }
        if ((param_7 >> 0x3c & 1) == 0) {
          if ((param_7 >> 0x3d & 1) != 0) {
            uStack_70 = param_6;
            uStack_68 = param_7 & 0xffffffffffffff;
            uVar11 = *(undefined1 *)((long)&uStack_70 + (uVar4 >> 0x10));
            goto joined_r0x000100015810;
          }
          uVar5 = (param_7 & 0xfffffffffffffff) + 0x20;
          if ((param_6 >> 0x3c & 1) == 0) {
            uVar5 = param_6;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_6,param_7);
          }
          uVar11 = *(undefined1 *)(uVar5 + (uVar4 >> 0x10));
          if (uVar8 == uVar9) goto LAB_100015844;
LAB_100015814:
          if ((param_7 >> 0x3c & 1) == 0) goto LAB_100015818;
LAB_10001585c:
          if (uVar1 <= uVar3 >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000158d4);
            (*pcVar2)();
          }
          __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar3,param_6,param_7);
        }
        else {
          __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
          uVar11 = (undefined1)uVar4;
joined_r0x000100015810:
          if (uVar8 != uVar9) goto LAB_100015814;
LAB_100015844:
          FUN_1000158d8(uVar3,param_6,param_7);
          if ((param_7 >> 0x3c & 1) != 0) goto LAB_10001585c;
LAB_100015818:
          uVar3 = (uVar3 & 0xffffffffffff0000) + 0x10004;
        }
        *param_2 = uVar11;
        lVar7 = param_3;
        if ((param_3 == lVar10) || (lVar7 = lVar10, uVar12 == uVar3 >> 0xe)) goto LAB_100015734;
        lVar10 = lVar10 + 1;
        param_2 = param_2 + 1;
      } while( true );
    }
  }
  lVar7 = 0;
LAB_100015734:
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  param_1[3] = param_7;
  param_1[4] = uVar3;
  return lVar7;
}



/* Entry: 1000158d8; end: 10001594f;  */

ulong FUN_1000158d8(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1 >> 0xe & 3;
  if (((param_3 >> 0x3c & 1) == 0) || ((param_2 >> 0x3b & 1) != 0)) {
    uVar1 = 0xf;
    __sSS9UTF16ViewV5index_8offsetBySS5IndexVAF_SitF(0xf,param_1 >> 0x10);
    uVar2 = uVar1 + uVar3 * 0x10000 & 0xffffffffffff0000;
    if (uVar3 == 0) {
      uVar2 = uVar1 & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar2 = uVar2 | 4;
  }
  else {
    uVar1 = 0xf;
    __sSS8UTF8ViewV13_foreignIndex_8offsetBySS0D0VAF_SitF(0xf);
    uVar2 = uVar1 + uVar3 * 0x10000 & 0xffffffffffff0000;
    if (uVar3 == 0) {
      uVar2 = uVar1 & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar2 = uVar2 | 8;
  }
  return uVar2;
}



/* Entry: 100015950; end: 100015cbb;  */

void FUN_100015950(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  
  uVar6 = param_2;
  _CVPixelBufferGetWidth();
  uVar2 = param_2;
  _CVPixelBufferGetHeight();
  _CVPixelBufferGetPixelFormatType();
  uStack_58 = CONCAT44(uStack_58._4_4_,(int)param_2);
  func_0x000100016cec();
  _objc_retain(&PTR____CFConstantStringClassReference_100025500);
  puVar3 = &uStack_58;
  uVar5 = 10;
  __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(puVar3,10,0,PTR___ss6UInt32VN_100024440,param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar5);
  _CFHTTPMessageSetHeaderFieldValue(param_1,&PTR____CFConstantStringClassReference_100025500,puVar3)
  ;
  _objc_release(&PTR____CFConstantStringClassReference_100025500);
  _objc_release(puVar3);
  uStack_58 = uVar6;
  func_0x000100016c2c();
  _objc_retain(&PTR____CFConstantStringClassReference_1000254e0);
  puVar1 = PTR___sSiN_100024348;
  puVar4 = &uStack_58;
  uVar6 = 10;
  __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(puVar4,10,0,PTR___sSiN_100024348,puVar3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar6);
  _CFHTTPMessageSetHeaderFieldValue(param_1,&PTR____CFConstantStringClassReference_1000254e0,puVar4)
  ;
  _objc_release(&PTR____CFConstantStringClassReference_1000254e0);
  _objc_release(puVar4);
  uStack_58 = uVar2;
  _objc_retain(&PTR____CFConstantStringClassReference_1000254c0);
  puVar4 = &uStack_58;
  uVar6 = 10;
  __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(puVar4,10,0,puVar1,puVar3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar6);
  _CFHTTPMessageSetHeaderFieldValue(param_1,&PTR____CFConstantStringClassReference_1000254c0,puVar4)
  ;
  _objc_release(&PTR____CFConstantStringClassReference_1000254c0);
  _objc_release(puVar4);
  return;
}



/* Entry: 100015cbc; end: 1000162db;  */

undefined1  [16] FUN_100015cbc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  ulong uStack_68;
  
  uVar3 = param_1;
  _CMSampleBufferGetImageBuffer();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x8000000100020710);
  }
  else {
    _CVPixelBufferLockBaseAddress();
    uVar4 = uVar3;
    _CVPixelBufferGetBaseAddress();
    if (uVar4 == 0) {
      pcVar1 = "unable to retrieve buffer base address";
      uVar18 = 0xd000000000000026;
    }
    else {
      uVar5 = uVar3;
      _CVPixelBufferGetDataSize();
      if (0 < (long)uVar5) {
        lVar6 = 0;
        _CFHTTPMessageCreateResponse(0,200,0,*(undefined8 *)PTR__kCFHTTPVersion1_1_100024228);
        uVar7 = uVar3;
        _CVPixelBufferGetPlaneCount();
        if (uVar7 == 0) {
          uVar4 = uVar3;
          _CVPixelBufferGetBytesPerRow();
          uStack_68 = uVar4;
          FUN_100016c2c();
          _objc_retain(&PTR____CFConstantStringClassReference_100025440);
          puVar14 = &uStack_68;
          uVar18 = 10;
          __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(puVar14,10,0,PTR___sSiN_100024348,uVar4);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(uVar18);
          _CFHTTPMessageSetHeaderFieldValue
                    (lVar6,&PTR____CFConstantStringClassReference_100025440,puVar14);
          _objc_release(&PTR____CFConstantStringClassReference_100025440);
          _objc_release(puVar14);
        }
        else {
          if (3 < uVar7) {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd000000000000013,0x8000000100020790);
            _objc_release(uVar3);
            _objc_release(lVar6);
            goto LAB_100016068;
          }
          uVar8 = uVar7;
          uStack_68 = uVar7;
          FUN_100016c2c();
          _objc_retain(&PTR____CFConstantStringClassReference_1000253e0);
          puVar16 = PTR___sSiN_100024348;
          puVar14 = &uStack_68;
          uVar18 = 10;
          __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(puVar14,10,0,PTR___sSiN_100024348,uVar8);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(uVar18);
          _CFHTTPMessageSetHeaderFieldValue
                    (lVar6,&PTR____CFConstantStringClassReference_1000253e0,puVar14);
          _objc_release(&PTR____CFConstantStringClassReference_1000253e0);
          _objc_release(puVar14);
          uVar21 = 0;
          do {
            uVar9 = uVar3;
            _CVPixelBufferGetBaseAddressOfPlane(uVar3,uVar21);
            if (uVar9 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1000162cc);
              (*pcVar2)();
            }
            uVar10 = uVar3;
            _CVPixelBufferGetWidthOfPlane(uVar3,uVar21);
            uVar11 = uVar3;
            _CVPixelBufferGetHeightOfPlane(uVar3,uVar21);
            uVar12 = uVar3;
            _CVPixelBufferGetBytesPerRowOfPlane(uVar3,uVar21);
            uVar13 = uVar21;
            FUN_10001bf2c();
            _objc_retainAutoreleasedReturnValue();
            if (uVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1000162d0);
              (*pcVar2)();
            }
            uStack_68 = uVar9 - uVar4;
            puVar14 = &uStack_68;
            uVar18 = 10;
            __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(puVar14,10,0,puVar16,uVar8);
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
            _swift_bridgeObjectRelease(uVar18);
            _CFHTTPMessageSetHeaderFieldValue(lVar6,uVar13,puVar14);
            _objc_release(uVar13);
            _objc_release(puVar14);
            uVar9 = uVar21;
            func_0x00010001bf60();
            _objc_retainAutoreleasedReturnValue();
            if (uVar9 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1000162d4);
              (*pcVar2)();
            }
            puVar14 = &uStack_68;
            uVar18 = 10;
            uStack_68 = uVar10;
            __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(puVar14,10,0,puVar16,uVar8);
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
            _swift_bridgeObjectRelease(uVar18);
            _CFHTTPMessageSetHeaderFieldValue(lVar6,uVar9,puVar14);
            _objc_release(uVar9);
            _objc_release(puVar14);
            uVar9 = uVar21;
            func_0x00010001bf94();
            _objc_retainAutoreleasedReturnValue();
            if (uVar9 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1000162d8);
              (*pcVar2)();
            }
            puVar14 = &uStack_68;
            uVar18 = 10;
            uStack_68 = uVar11;
            __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(puVar14,10,0,puVar16,uVar8);
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
            _swift_bridgeObjectRelease(uVar18);
            _CFHTTPMessageSetHeaderFieldValue(lVar6,uVar9,puVar14);
            _objc_release(uVar9);
            _objc_release(puVar14);
            uVar9 = uVar21;
            func_0x00010001bfc8();
            _objc_retainAutoreleasedReturnValue();
            if (uVar9 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1000162dc);
              (*pcVar2)();
            }
            uVar21 = uVar21 + 1;
            puVar14 = &uStack_68;
            uVar18 = 10;
            uStack_68 = uVar12;
            __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(puVar14,10,0,puVar16,uVar8);
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
            _swift_bridgeObjectRelease(uVar18);
            _CFHTTPMessageSetHeaderFieldValue(lVar6,uVar9,puVar14);
            _objc_release(uVar9);
            _objc_release(puVar14);
          } while (uVar7 != uVar21);
        }
        uStack_68 = uVar5;
        FUN_100016c2c();
        _objc_retain(&PTR____CFConstantStringClassReference_100025420);
        puVar16 = PTR___sSiN_100024348;
        puVar15 = &uStack_68;
        uVar18 = 10;
        __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(puVar15,10,0,PTR___sSiN_100024348,puVar14);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(uVar18);
        _CFHTTPMessageSetHeaderFieldValue
                  (lVar6,&PTR____CFConstantStringClassReference_100025420,puVar15);
        _objc_release(&PTR____CFConstantStringClassReference_100025420);
        _objc_release(puVar15);
        uStack_68 = param_2;
        _objc_retain(&PTR____CFConstantStringClassReference_100025400);
        puVar15 = &uStack_68;
        uVar18 = 10;
        __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(puVar15,10,0,puVar16,puVar14);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(uVar18);
        _CFHTTPMessageSetHeaderFieldValue
                  (lVar6,&PTR____CFConstantStringClassReference_100025400,puVar15);
        _objc_release(&PTR____CFConstantStringClassReference_100025400);
        _objc_release(puVar15);
        FUN_100015950(lVar6,uVar3);
        func_0x000100015aec(lVar6,param_1);
        puVar16 = PTR__OBJC_CLASS___NSData_100028ff8;
        _objc_allocWithZone(PTR__OBJC_CLASS___NSData_100028ff8);
        func_0x00010001d7c0();
        puVar20 = puVar16;
        _CFHTTPMessageSetBody(lVar6,puVar16);
        _objc_release(puVar16);
        lVar17 = lVar6;
        _CFHTTPMessageCopySerializedMessage();
        if (lVar17 == 0) {
          lVar19 = 0;
          puVar20 = (undefined *)0xf000000000000000;
        }
        else {
          lVar19 = lVar17;
          __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
          _objc_release(lVar17);
        }
        _CVPixelBufferUnlockBaseAddress(uVar3,1);
        _objc_release(uVar3);
        _objc_release(lVar6);
        goto LAB_100016074;
      }
      pcVar1 = "buffer is empty or not contiguous";
      uVar18 = 0xd000000000000021;
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (uVar18,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    _objc_release(uVar3);
  }
LAB_100016068:
  _objc_release();
  lVar19 = 0;
  puVar20 = (undefined *)0xf000000000000000;
LAB_100016074:
  auVar22._8_8_ = puVar20;
  auVar22._0_8_ = lVar19;
  return auVar22;
}



/* Entry: 1000162dc; end: 100016377;  */

void FUN_1000162dc(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  
  if (param_1 != 0) {
    if ((long)param_1 < 0xf) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100016378);
        (*pcVar1)();
      }
    }
    else {
      __s10Foundation13__DataStorageCMa();
      _swift_allocObject();
      __s10Foundation13__DataStorageC6lengthACSi_tcfc(param_1);
      if (0x7ffffffe < param_1) {
        lVar2 = 0;
        __s10Foundation4DataV14RangeReferenceCMa();
        _swift_allocObject();
        *(undefined8 *)(lVar2 + 0x10) = 0;
        *(ulong *)(lVar2 + 0x18) = param_1;
      }
    }
  }
  return;
}



/* Entry: 100016378; end: 100016b37;  */

void FUN_100016378(double *param_1,double *param_2)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  double dVar6;
  code *pcVar7;
  double *pdVar8;
  double *pdVar9;
  long lVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  double **ppdVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  ulong uVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  undefined *puVar28;
  double **ppdVar29;
  double dVar30;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  double *pdStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100024078;
  pdVar8 = param_1;
  _CMSampleBufferGetDataBuffer();
  _objc_retainAutoreleasedReturnValue();
  if (pdVar8 == (double *)0x0) {
LAB_100016748:
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x80000001000207c0);
  }
  else {
    pdVar9 = param_1;
    _CMSampleBufferGetFormatDescription();
    _objc_retainAutoreleasedReturnValue();
    if (pdVar9 == (double *)0x0) {
      _objc_release(pdVar8);
      goto LAB_100016748;
    }
    lVar10 = 0;
    _CFHTTPMessageCreateResponse(0,200,0,*(undefined8 *)PTR__kCFHTTPVersion1_1_100024228);
    pdVar11 = pdVar8;
    _CMBlockBufferGetDataLength();
    pdVar12 = pdVar9;
    _CMAudioFormatDescriptionGetStreamBasicDescription();
    if (pdVar12 != (double *)0x0) {
      dVar30 = *pdVar12;
      if (0x7fefffffffffffff < (ulong)ABS(dVar30)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100016b10);
        (*pcVar7)();
      }
      if (dVar30 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100016b14);
        (*pcVar7)();
      }
      if (9.223372036854776e+18 <= dVar30) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100016b18);
        (*pcVar7)();
      }
      uVar25 = *(uint *)((long)pdVar12 + 0xc);
      uVar3 = *(uint *)((long)pdVar12 + 0x1c);
      uVar20 = (ulong)uVar3;
      dVar6 = pdVar12[4];
      pdStack_78 = (double *)(long)dVar30;
      FUN_100016c2c();
      ppuVar19 = &PTR____CFConstantStringClassReference_100025520;
      _objc_retain(&PTR____CFConstantStringClassReference_100025520);
      ppdVar29 = &pdStack_78;
      uVar18 = 10;
      __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(ppdVar29,10,0,PTR___sSiN_100024348,pdVar12);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(uVar18);
      _CFHTTPMessageSetHeaderFieldValue
                (lVar10,&PTR____CFConstantStringClassReference_100025520,ppdVar29);
      _objc_release(&PTR____CFConstantStringClassReference_100025520);
      _objc_release(ppdVar29);
      if (((ulong)dVar6 & 0xfffffff8) == 0x10) {
        if (uVar3 != 0) {
          pdVar13 = pdVar11;
          FUN_1000162dc();
          pdStack_78 = pdVar13;
          ppuStack_70 = ppuVar19;
          _objc_retain();
          ppdVar29 = &pdStack_78;
          FUN_100014a00(ppdVar29,pdVar8,pdVar11);
          if (((uVar25 >> 1 & 1) != 0) && (0 < (long)pdVar11)) {
            lVar17 = 0;
            do {
              pdVar13 = pdStack_78;
              lVar27 = 0x7fffffffffffffff;
              if (!SCARRY8(lVar17,2)) {
                lVar27 = lVar17 + 2;
              }
              uVar25 = (uint)((ulong)ppuStack_70 >> 0x20);
              uVar21 = uVar25 >> 0x1e;
              if (uVar25 >> 0x1e < 2) {
                iVar22 = (int)pdStack_78;
                if (uVar21 != 0) {
                  lVar26 = (long)pdStack_78 >> 0x20;
                  if (lVar26 <= lVar17 || lVar17 < iVar22) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100016aec);
                    (*pcVar7)();
                  }
                  __s10Foundation13__DataStorageC6_bytesSvSgvg();
                  if (ppdVar29 == (double **)0x0) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100016b2c);
                    (*pcVar7)();
                  }
                  ppdVar14 = ppdVar29;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar17,(long)ppdVar14)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100016af8);
                    (*pcVar7)();
                  }
                  lVar1 = lVar17 + 1;
                  if ((lVar26 <= lVar1) || (lVar1 < iVar22)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100016b00);
                    (*pcVar7)();
                  }
                  bVar4 = *(byte *)((long)ppdVar29 + (lVar17 - (long)ppdVar14));
                  __s10Foundation13__DataStorageC6_bytesSvSgvg();
                  if (ppdVar14 == (double **)0x0) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100016b34);
                    (*pcVar7)();
                  }
                  ppdVar29 = ppdVar14;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  lVar23 = lVar1 - (long)ppdVar29;
                  if (SBORROW8(lVar1,(long)ppdVar29)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100016740);
                    (*pcVar7)();
                  }
                  goto LAB_100016538;
                }
                uVar24 = (ulong)ppuStack_70 >> 0x30 & 0xff;
                if ((long)uVar24 <= lVar17) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100016ae4);
                  (*pcVar7)();
                }
                uStack_90 = pdStack_78;
                uStack_88 = (char)ppuStack_70;
                uStack_87 = (undefined1)((ulong)ppuStack_70 >> 8);
                uStack_86 = (undefined1)((ulong)ppuStack_70 >> 0x10);
                uStack_85 = (undefined1)((ulong)ppuStack_70 >> 0x18);
                uStack_84 = (undefined1)((ulong)ppuStack_70 >> 0x20);
                uStack_83 = (undefined1)((ulong)ppuStack_70 >> 0x28);
                if ((long)uVar24 <= lVar17 + 1) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100016af0);
                  (*pcVar7)();
                }
                bVar4 = *(byte *)((long)&uStack_90 + lVar17);
                uVar5 = *(undefined1 *)((long)&uStack_90 + lVar17 + 1);
              }
              else {
                if (uVar21 != 2) goto LAB_100016b24;
                if (lVar17 < (long)pdStack_78[2]) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100016ae8);
                  (*pcVar7)();
                }
                if ((long)pdStack_78[3] <= lVar17) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100016af4);
                  (*pcVar7)();
                }
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (ppdVar29 == (double **)0x0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100016b30);
                  (*pcVar7)();
                }
                ppdVar14 = ppdVar29;
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar17,(long)ppdVar14)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100016afc);
                  (*pcVar7)();
                }
                lVar26 = lVar17 + 1;
                if (lVar26 < (long)pdVar13[2]) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100016b04);
                  (*pcVar7)();
                }
                if ((long)pdVar13[3] <= lVar26) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100016b08);
                  (*pcVar7)();
                }
                bVar4 = *(byte *)((long)ppdVar29 + (lVar17 - (long)ppdVar14));
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (ppdVar14 == (double **)0x0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100016b38);
                  (*pcVar7)();
                }
                ppdVar29 = ppdVar14;
                __s10Foundation13__DataStorageC7_offsetSivg();
                lVar23 = lVar26 - (long)ppdVar29;
                if (SBORROW8(lVar26,(long)ppdVar29)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100016b0c);
                  (*pcVar7)();
                }
LAB_100016538:
                uVar5 = *(undefined1 *)((long)ppdVar14 + lVar23);
              }
              ppdVar29 = (double **)(ulong)bVar4;
              __s10Foundation4DataV15_RepresentationOys5UInt8VSicis(uVar5,lVar17);
              __s10Foundation4DataV15_RepresentationOys5UInt8VSicis(ppdVar29,lVar17 + 1);
              lVar17 = lVar27;
            } while (lVar27 < (long)pdVar11);
          }
          if (uVar3 == 2) {
            FUN_100014df0(&pdStack_78);
            uVar3 = (uint)((ulong)ppuStack_70 >> 0x20);
            uVar25 = uVar3 >> 0x1e;
            if (uVar3 >> 0x1e < 2) {
              if (uVar25 == 0) {
                uVar20 = (ulong)ppuStack_70 >> 0x30 & 0xff;
              }
              else {
                iVar22 = (int)((ulong)pdStack_78 >> 0x20);
                if (SBORROW4(iVar22,(int)pdStack_78)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100016b20);
                  (*pcVar7)();
                }
                uVar20 = (ulong)(iVar22 - (int)pdStack_78);
LAB_100016860:
                if ((long)uVar20 < 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100016868);
                  (*pcVar7)();
                }
              }
            }
            else {
              if (uVar25 == 2) {
                uVar20 = (long)pdStack_78[3] - (long)pdStack_78[2];
                if (SBORROW8((long)pdStack_78[3],(long)pdStack_78[2])) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100016850);
                  (*pcVar7)();
                }
                goto LAB_100016860;
              }
              uVar20 = 0;
            }
            __s10Foundation4DataV15_RepresentationO15replaceSubrange_4with5countySnySiG_SVSgSitF
                      (uVar20 >> 1,uVar20,0,0);
            uVar20 = 1;
          }
          func_0x000100015aec(lVar10,param_1);
          uStack_90 = (double *)uVar20;
          _objc_retain(&PTR____CFConstantStringClassReference_100025540);
          puVar15 = &uStack_90;
          uVar18 = 10;
          __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(puVar15,10,0,PTR___sSiN_100024348,pdVar12);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(uVar18);
          _CFHTTPMessageSetHeaderFieldValue
                    (lVar10,&PTR____CFConstantStringClassReference_100025540,puVar15);
          _objc_release(&PTR____CFConstantStringClassReference_100025540);
          _objc_release(puVar15);
          ppuVar19 = ppuStack_70;
          pdVar11 = pdStack_78;
          uVar3 = (uint)((ulong)ppuStack_70 >> 0x20);
          uVar25 = uVar3 >> 0x1e;
          if (uVar3 >> 0x1e < 2) {
            if (uVar25 == 0) {
              uVar20 = (ulong)ppuStack_70 >> 0x30 & 0xff;
            }
            else {
              iVar22 = (int)((ulong)pdStack_78 >> 0x20);
              if (SBORROW4(iVar22,(int)pdStack_78)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100016b1c);
                (*pcVar7)();
              }
              uVar20 = (ulong)(iVar22 - (int)pdStack_78);
            }
          }
          else if (uVar25 == 2) {
            uVar20 = (long)pdStack_78[3] - (long)pdStack_78[2];
            if (SBORROW8((long)pdStack_78[3],(long)pdStack_78[2])) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100016930);
              (*pcVar7)();
            }
          }
          else {
            uVar20 = 0;
          }
          uStack_90 = (double *)uVar20;
          _objc_retain(&PTR____CFConstantStringClassReference_100025420);
          puVar16 = PTR___sSiN_100024348;
          puVar15 = &uStack_90;
          uVar18 = 10;
          __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(puVar15,10,0,PTR___sSiN_100024348,pdVar12);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(uVar18);
          _CFHTTPMessageSetHeaderFieldValue
                    (lVar10,&PTR____CFConstantStringClassReference_100025420,puVar15);
          _objc_release(&PTR____CFConstantStringClassReference_100025420);
          _objc_release(puVar15);
          uStack_90 = param_2;
          _objc_retain(&PTR____CFConstantStringClassReference_100025400);
          puVar15 = &uStack_90;
          uVar18 = 10;
          __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(puVar15,10,0,puVar16,pdVar12);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(uVar18);
          _CFHTTPMessageSetHeaderFieldValue
                    (lVar10,&PTR____CFConstantStringClassReference_100025400,puVar15);
          _objc_release(&PTR____CFConstantStringClassReference_100025400);
          _objc_release(puVar15);
          puVar16 = PTR__OBJC_CLASS___NSData_100028ff8;
          _objc_allocWithZone(PTR__OBJC_CLASS___NSData_100028ff8);
          pdVar12 = pdVar11;
          __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(pdVar11,ppuVar19);
          func_0x00010001d7e0(puVar16);
          _objc_release(pdVar12);
          puVar28 = puVar16;
          _CFHTTPMessageSetBody(lVar10,puVar16);
          lVar17 = lVar10;
          _CFHTTPMessageCopySerializedMessage();
          if (lVar17 == 0) {
            _objc_release(puVar16);
            _objc_release(pdVar9);
            _objc_release(lVar10);
            _objc_release(pdVar8);
            lVar27 = 0;
            puVar28 = (undefined *)0xf000000000000000;
          }
          else {
            lVar27 = lVar17;
            __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
            _objc_release(lVar17);
            _objc_release(puVar16);
            _objc_release(pdVar9);
            _objc_release(lVar10);
            _objc_release(pdVar8);
          }
          FUN_100016d2c(pdVar11,ppuVar19);
          goto LAB_100016800;
        }
        pcVar2 = "Invalid number of audio channels";
        uVar18 = 0xd000000000000020;
      }
      else {
        pcVar2 = "WebRTC only supports 16-bit samples";
        uVar18 = 0xd000000000000023;
      }
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                (uVar18,(ulong)(pcVar2 + -0x20) | 0x8000000000000000);
      _objc_release();
    }
    _objc_release(pdVar9);
    _objc_release(lVar10);
  }
  _objc_release();
  lVar27 = 0;
  puVar28 = (undefined *)0xf000000000000000;
LAB_100016800:
  if (*(long *)PTR____stack_chk_guard_100024078 == lStack_68) {
    return;
  }
  ___stack_chk_fail(lVar27,puVar28);
LAB_100016b24:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100016b28);
  (*pcVar7)();
}



/* Entry: 100016b38; end: 100016c2b;  */

undefined1  [16] FUN_100016b38(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar1 = param_1;
  _CMSampleBufferGetFormatDescription();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x80000001000206d0);
LAB_100016c10:
    _objc_release();
    param_1 = 0;
    param_2 = 0xf000000000000000;
  }
  else {
    lVar2 = lVar1;
    _CMFormatDescriptionGetMediaType();
    if ((int)lVar2 == 0x736f756e) {
      FUN_100016378(param_1,param_2);
    }
    else {
      if ((int)lVar2 != 0x76696465) {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x80000001000206f0)
        ;
        _objc_release(lVar1);
        goto LAB_100016c10;
      }
      FUN_100015cbc(param_1,param_2);
    }
    _objc_release(lVar1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 100016c2c; end: 100016d2b;  */

void FUN_100016c2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000100029a08 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSiSzsMc_100024350;
  _swift_getWitnessTable(PTR___sSiSzsMc_100024350,PTR___sSiN_100024348);
  puRam0000000100029a08 = puVar1;
  return;
}



/* Entry: 100016d2c; end: 100016dab;  */

void FUN_100016d2c(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release();
  }
                    /* WARNING: Could not recover jumptable at 0x00010001d57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024528)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 100016dac; end: 10001722f;  */

undefined1  [16] FUN_100016dac(byte *param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte **ppbVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  byte *pbStack_60;
  ulong uStack_58;
  
  pbVar11 = param_1;
  if (param_1 != (byte *)0x0) {
    _objc_retain();
    uVar12 = param_2;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
    pbVar11 = param_1;
    uVar4 = uVar12;
    _CFHTTPMessageCopyHeaderFieldValue();
    _objc_release(uVar12);
    if (pbVar11 != (byte *)0x0) {
      pbVar3 = pbVar11;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(pbVar11);
      uVar5 = (ulong)pbVar3 & 0xffffffffffff;
      uVar6 = uVar4 >> 0x38 & 0xf;
      uVar12 = uVar5;
      if ((uVar4 & 0x2000000000000000) != 0) {
        uVar12 = uVar6;
      }
      if (uVar12 == 0) goto LAB_1000170e8;
      if ((uVar4 >> 0x3c & 1) == 0) {
        if ((uVar4 >> 0x3d & 1) != 0) {
          pbStack_60 = pbVar3;
          uStack_58 = uVar4 & 0xffffffffffffff;
          uVar1 = (uint)pbVar3 & 0xff;
          if (uVar1 == 0x2b) {
            if (uVar6 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100017230);
              (*pcVar2)();
            }
            lVar9 = uVar6 - 1;
            if (lVar9 == 0) goto LAB_1000170d4;
            pbVar11 = (byte *)0x0;
            pbVar7 = (byte *)((ulong)&pbStack_60 | 1);
            do {
              if (((9 < *pbVar7 - 0x30) ||
                  (lVar10 = (long)pbVar11 * 10,
                  SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                 (uVar12 = (ulong)(byte)(*pbVar7 - 0x30), pbVar11 = (byte *)(lVar10 + uVar12),
                 SCARRY8(lVar10,uVar12))) goto LAB_1000170d4;
              uVar12 = 0;
              lVar9 = lVar9 + -1;
              pbVar7 = pbVar7 + 1;
            } while (lVar9 != 0);
          }
          else if (uVar1 == 0x2d) {
            if (uVar6 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100017228);
              (*pcVar2)();
            }
            lVar9 = uVar6 - 1;
            if (lVar9 == 0) {
LAB_1000170d4:
              pbVar11 = (byte *)0x0;
              uVar12 = 1;
            }
            else {
              pbVar11 = (byte *)0x0;
              pbVar7 = (byte *)((ulong)&pbStack_60 | 1);
              do {
                if (((9 < *pbVar7 - 0x30) ||
                    (lVar10 = (long)pbVar11 * 10,
                    SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                   (uVar12 = (ulong)(byte)(*pbVar7 - 0x30), pbVar11 = (byte *)(lVar10 - uVar12),
                   SBORROW8(lVar10,uVar12))) goto LAB_1000170d4;
                uVar12 = 0;
                lVar9 = lVar9 + -1;
                pbVar7 = pbVar7 + 1;
              } while (lVar9 != 0);
            }
          }
          else {
            if (uVar6 == 0) goto LAB_1000170d4;
            pbVar11 = (byte *)0x0;
            ppbVar8 = &pbStack_60;
            do {
              if (((9 < *(byte *)ppbVar8 - 0x30) ||
                  (lVar9 = (long)pbVar11 * 10,
                  SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
                 (uVar12 = (ulong)(byte)(*(byte *)ppbVar8 - 0x30),
                 pbVar11 = (byte *)(lVar9 + uVar12), SCARRY8(lVar9,uVar12))) goto LAB_1000170d4;
              uVar12 = 0;
              uVar6 = uVar6 - 1;
              ppbVar8 = (byte **)((long)ppbVar8 + 1);
            } while (uVar6 != 0);
          }
          goto LAB_1000170dc;
        }
        if (((ulong)pbVar3 >> 0x3c & 1) == 0) {
          pbVar7 = pbVar3;
          uVar5 = uVar4;
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
        }
        else {
          pbVar7 = (byte *)((uVar4 & 0xfffffffffffffff) + 0x20);
        }
        if (*pbVar7 != 0x2b) {
          if (*pbVar7 != 0x2d) {
            if (uVar5 == 0) goto LAB_1000170e8;
            if (pbVar7 == (byte *)0x0) {
              uVar12 = 0;
              pbVar11 = (byte *)0x0;
            }
            else {
              pbVar11 = (byte *)0x0;
              do {
                if (((9 < *pbVar7 - 0x30) ||
                    (lVar9 = (long)pbVar11 * 10,
                    SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
                   (uVar12 = (ulong)(byte)(*pbVar7 - 0x30), pbVar11 = (byte *)(lVar9 + uVar12),
                   SCARRY8(lVar9,uVar12))) goto LAB_1000170e8;
                uVar12 = 0;
                uVar5 = uVar5 - 1;
                pbVar7 = pbVar7 + 1;
              } while (uVar5 != 0);
            }
            goto LAB_1000171c8;
          }
          lVar9 = uVar5 - 1;
          if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100017224);
            (*pcVar2)();
          }
          if (lVar9 != 0) {
            pbVar11 = (byte *)0x0;
            do {
              pbVar7 = pbVar7 + 1;
              if (((9 < *pbVar7 - 0x30) ||
                  (lVar10 = (long)pbVar11 * 10,
                  SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                 (uVar12 = (ulong)(byte)(*pbVar7 - 0x30), pbVar11 = (byte *)(lVar10 - uVar12),
                 SBORROW8(lVar10,uVar12))) goto LAB_1000170e8;
              uVar12 = 0;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            goto LAB_1000171c8;
          }
          goto LAB_1000170e8;
        }
        lVar9 = uVar5 - 1;
        if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10001722c);
          (*pcVar2)();
        }
        if (lVar9 == 0) goto LAB_1000170e8;
        pbVar11 = (byte *)0x0;
        do {
          pbVar7 = pbVar7 + 1;
          if (((9 < *pbVar7 - 0x30) ||
              (lVar10 = (long)pbVar11 * 10,
              SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
             (uVar12 = (ulong)(byte)(*pbVar7 - 0x30), pbVar11 = (byte *)(lVar10 + uVar12),
             SCARRY8(lVar10,uVar12))) goto LAB_1000170e8;
          uVar12 = 0;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      else {
        _swift_bridgeObjectRetain(uVar4);
        pbVar11 = pbVar3;
        uVar12 = uVar4;
        FUN_100015114(pbVar3,uVar4,10);
        _swift_bridgeObjectRelease(uVar4);
LAB_1000170dc:
        if (((uint)uVar12 & 0xff) == 1) {
LAB_1000170e8:
          pbStack_60 = (byte *)0x0;
          uStack_58 = 0xe000000000000000;
          __ss11_StringGutsV4growyySiF(0x1c);
          _swift_bridgeObjectRelease(uStack_58);
          pbStack_60 = (byte *)0x617020726f727265;
          uStack_58 = 0xee0020676e697372;
          __sSS6appendyySSF(param_2,param_3);
          __sSS6appendyySSF(0x6e49206f746e6920,0xea00000000002074);
          __sSS6appendyySSF(pbVar3,uVar4);
          _swift_bridgeObjectRelease(uVar4);
          goto LAB_100017174;
        }
      }
LAB_1000171c8:
      _swift_bridgeObjectRelease(uVar4);
      _objc_release(param_1);
      goto LAB_1000171a4;
    }
    pbStack_60 = (byte *)0x0;
    uStack_58 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x16);
    _swift_bridgeObjectRelease(uStack_58);
    pbStack_60 = (byte *)0x657220726f727265;
    uStack_58 = 0xee0020676e696461;
    __sSS6appendyySSF(param_2,param_3);
    __sSS6appendyySSF(0x646c65696620,0xe600000000000000);
LAB_100017174:
    uVar12 = uStack_58;
    pbVar11 = pbStack_60;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(pbStack_60,uStack_58);
    _objc_release(param_1);
    _objc_release(pbVar11);
    _swift_bridgeObjectRelease(uVar12);
    pbVar11 = (byte *)0x0;
  }
  uVar12 = 1;
LAB_1000171a4:
  auVar13._8_8_ = uVar12;
  auVar13._0_8_ = pbVar11;
  return auVar13;
}



/* Entry: 100017230; end: 100017243;  */

void FUN_100017230(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_100024db8;
  if (lRam0000000100029a30 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000100029a30 = param_1;
  }
  return;
}



/* Entry: 100017244; end: 100017287;  */

void FUN_100017244(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 100017288; end: 1000172db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017288(void)

{
  long unaff_x20;
  
  FUN_1000172dc(0,0);
  _swift_slowDealloc(*(undefined8 *)(unaff_x20 + _DAT_100029aa8),0xffffffffffffffff,
                     0xffffffffffffffff);
  func_0x000100018530();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_100028de8);
  return;
}



/* Entry: 1000172dc; end: 1000173db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000172dc(code *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = _DAT_100029a90;
  if (*(long *)(unaff_x20 + _DAT_100029a90) != 0) {
    func_0x00010001d6e0();
    uVar3 = 0;
    if (*(long *)(unaff_x20 + lVar2) != 0) {
      func_0x00010001d920();
      uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
    }
    _CFReadStreamSetDispatchQueue(uVar3,0);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    _objc_release(uVar3);
  }
  lVar2 = _DAT_100029a98;
  if (*(long *)(unaff_x20 + _DAT_100029a98) != 0) {
    func_0x00010001d6e0();
    uVar3 = 0;
    if (*(long *)(unaff_x20 + lVar2) != 0) {
      func_0x00010001d920();
      uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
    }
    _CFWriteStreamSetDispatchQueue(uVar3,0);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    _objc_release(uVar3);
  }
  lVar2 = _DAT_100029a68;
  if (*(int *)(unaff_x20 + _DAT_100029a68) != -1) {
    _close();
    *(undefined4 *)(unaff_x20 + lVar2) = 0xffffffff;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_100029a70);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x62) = 0;
  *(undefined8 *)((long)puVar1 + 0x5a) = 0;
  *(undefined1 *)((long)puVar1 + 0x6a) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_100029a78) = 0;
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 1000173dc; end: 10001743f; -[_TtC19SCVideoSocketSender21VideoSocketConnection dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000173dc(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  FUN_1000172dc(0,0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_100029aa8);
  _swift_slowDealloc(uVar1,0xffffffffffffffff,0xffffffffffffffff);
  func_0x000100018530();
  lStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_100028de8);
  return;
}



/* Entry: 100017440; end: 10001752f; -[_TtC19SCVideoSocketSender21VideoSocketConnection .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017440(long param_1)

{
  func_0x000100018c58(*(undefined8 *)(param_1 + _DAT_100029a38),
                      ((undefined8 *)(param_1 + _DAT_100029a38))[1]);
  func_0x000100018c58(*(undefined8 *)(param_1 + _DAT_100029a40),
                      ((undefined8 *)(param_1 + _DAT_100029a40))[1]);
  func_0x000100018c58(*(undefined8 *)(param_1 + _DAT_100029a48),
                      ((undefined8 *)(param_1 + _DAT_100029a48))[1]);
  func_0x000100018c58(*(undefined8 *)(param_1 + _DAT_100029a50),
                      ((undefined8 *)(param_1 + _DAT_100029a50))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_100029a58 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_100029a60 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_100029a80));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_100029a88));
  _objc_release(*(undefined8 *)(param_1 + _DAT_100029a90));
  _objc_release(*(undefined8 *)(param_1 + _DAT_100029a98));
  _objc_release(*(undefined8 *)(param_1 + _DAT_100029ab0));
                    /* WARNING: Could not recover jumptable at 0x00010001d3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000241d0)(*(undefined8 *)(param_1 + _DAT_100029ab8));
  return;
}



/* Entry: 100017530; end: 1000179df;  */

/* WARNING: Possible PIC construction at 0x0001000179bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000179c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017530(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 auStack_130 [4];
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  lVar2 = 0;
  uStack_c8 = param_1;
  uStack_b8 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar14 = *(long *)(lVar2 + -8);
  lStack_f0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = (long)auStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lStack_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar7 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_c0 = lVar7;
  __s8Dispatch0A12TimeIntervalOMa();
  lStack_d8 = *(long *)(lVar2 + -8);
  lStack_d0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(lStack_d8 + 0x40));
  puVar16 = (undefined8 *)(lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100024068)();
  puVar10 = (undefined8 *)((long)puVar16 - extraout_x12);
  lVar2 = 0;
  __s8Dispatch0A4TimeVMa();
  lStack_e8 = *(long *)(lVar2 + -8);
  lStack_e0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(lStack_e8 + 0x40));
  lVar9 = (long)puVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSo18OS_dispatch_sourceC8DispatchE10TimerFlagsVMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(lVar11 + 0x40));
  lVar7 = lVar9 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uStack_a0 = *(undefined8 *)(unaff_x20 + _DAT_100029a80);
  func_0x00010001d840();
  if (*(long *)(unaff_x20 + _DAT_100029a88) == 0) {
    uVar3 = 0;
    lStack_f8 = _DAT_100029a88;
    FUN_10001942c(0,0x100029af0,&PTR__OBJC_CLASS___OS_dispatch_source_100029008);
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_100029ab8);
    puStack_98 = PTR___swiftEmptyArrayStorage_100024458;
    uVar8 = 0x100029af8;
    auStack_130[2] = uVar13;
    uStack_110 = uVar3;
    FUN_100018d4c(0x100029af8,PTR___sSo18OS_dispatch_sourceC8DispatchE10TimerFlagsVMa_100024680,
                  PTR___sSo18OS_dispatch_sourceC8DispatchE10TimerFlagsVs10SetAlgebraACMc_100024690);
    auStack_130[1] = uVar8;
    _objc_retain();
    uVar8 = 0x100029b00;
    auStack_130[3] = uVar13;
    lStack_100 = lVar14;
    FUN_100012244(0x100029b00,&UNK_10001ea60);
    uVar3 = 0x100029b08;
    lStack_108 = lVar15;
    func_0x000100018d8c(0x100029b08,0x100029b00,&UNK_10001ea60);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar7,&puStack_98,uVar8,uVar3,lVar2,auStack_130[1]);
    lVar14 = lVar7;
    __sSo18OS_dispatch_sourceC8DispatchE15makeTimerSource5flags5queueSo0a1_b1_C6_timer_pAbCE0F5FlagsV_So0a1_b1_I0CSgtFZ
              (lVar7,auStack_130[2]);
    _objc_release(auStack_130[3]);
    (**(code **)(lVar11 + 8))(lVar7,lVar2);
    lVar11 = lVar14;
    _swift_getObjectType(lVar14);
    __s8Dispatch0A4TimeV3nowACyFZ(lVar9);
    *puVar10 = 100;
    lVar7 = lStack_d0;
    lVar2 = lStack_d8;
    uVar1 = *(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO12millisecondsyACSicACmFWC_1000245d0;
    pcVar12 = *(code **)(lStack_d8 + 0x68);
    (*pcVar12)(puVar10,uVar1,lStack_d0);
    *puVar16 = 500;
    (*pcVar12)(puVar16,uVar1,lVar7);
    __sSo24OS_dispatch_source_timerP8DispatchE8schedule8deadline9repeating6leewayyAC0E4TimeV_AC0eJ8IntervalOAKtF
              (lVar9,puVar10,puVar16,lVar11);
    pcVar12 = *(code **)(lVar2 + 8);
    (*pcVar12)(puVar16,lVar7);
    (*pcVar12)(puVar10,lVar7);
    (**(code **)(lStack_e8 + 8))(lVar9,lStack_e0);
    puVar4 = &UNK_100024e78;
    _swift_allocObject(&UNK_100024e78,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10);
    puVar5 = &UNK_100024ea0;
    _swift_allocObject(&UNK_100024ea0,0x28,7);
    uVar3 = uStack_b8;
    uVar8 = uStack_c8;
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = uStack_c8;
    *(undefined8 *)(puVar5 + 0x20) = uStack_b8;
    uStack_78 = 0x100018d14;
    puStack_98 = PTR___NSConcreteStackBlock_100024060;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_100012ef8;
    puStack_80 = &UNK_100024eb8;
    ppuVar6 = &puStack_98;
    puStack_70 = puVar5;
    __Block_copy(ppuVar6);
    _swift_retain(puVar4);
    func_0x000100018d3c(uVar8,uVar3);
    lVar7 = lStack_c0;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lStack_c0);
    lVar2 = lStack_108;
    FUN_100017ee8(lStack_108,lVar11);
    __sSo18OS_dispatch_sourceP8DispatchE15setEventHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtF
              (lVar7,lVar2,ppuVar6,lVar11);
    __Block_release(ppuVar6);
    (**(code **)(lStack_100 + 8))(lVar2,lStack_f0);
    (**(code **)(lStack_b0 + 8))(lVar7,lStack_a8);
    puVar5 = puStack_70;
    _swift_release(puVar4);
    _swift_release(puVar5);
    uVar8 = *(undefined8 *)(unaff_x20 + lStack_f8);
    *(long *)(unaff_x20 + lStack_f8) = lVar14;
    _swift_unknownObjectRetain(lVar14);
    _swift_unknownObjectRelease(uVar8);
    __sSo18OS_dispatch_sourceP8DispatchE6resumeyyF(lVar11);
    _swift_unknownObjectRelease(lVar14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010001da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000241b8)(uStack_a0,PTR_s_unlock_100028ee8);
  return;
}



/* Entry: 1000179e0; end: 100017ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000179e0(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _DAT_100029a80;
  if (param_1 != 0) {
    func_0x00010001d840(*(undefined8 *)(param_1 + _DAT_100029a80));
    lVar2 = _DAT_100029a88;
    if ((*(long *)(param_1 + _DAT_100029a88) != 0) &&
       (FUN_100017ac4(param_2,param_3), (param_2 & 1) != 0)) {
      lVar5 = *(long *)(param_1 + lVar2);
      if (lVar5 == 0) {
        uVar4 = 0;
      }
      else {
        lVar3 = lVar5;
        _swift_getObjectType(lVar5);
        _swift_unknownObjectRetain(lVar5);
        __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar3);
        _swift_unknownObjectRelease(lVar5);
        uVar4 = *(undefined8 *)(param_1 + lVar2);
      }
      *(undefined8 *)(param_1 + lVar2) = 0;
      _swift_unknownObjectRelease(uVar4);
    }
    func_0x00010001da20(*(undefined8 *)(param_1 + lVar1));
    _objc_release(param_1);
  }
  return;
}



/* Entry: 100017ac4; end: 100017ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100017ac4(code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = _DAT_100029a78;
  if ((*(byte *)(unaff_x20 + _DAT_100029a78) & 1) == 0) {
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x1e);
    _swift_bridgeObjectRelease(uStack_88);
    puStack_90 = (undefined *)0x5b;
    uStack_88 = 0xe100000000000000;
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_100029a60);
    uVar1 = ((undefined8 *)(unaff_x20 + _DAT_100029a60))[1];
    __sSS6appendyySSF(uVar13,uVar1);
    __sSS6appendyySSF(0xd00000000000001b,0x8000000100020930);
    uVar4 = uStack_88;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_90,uStack_88);
    _objc_release();
    _swift_bridgeObjectRelease(uVar4);
    puVar7 = PTR__OBJC_CLASS___NSFileManager_100029010;
    _objc_opt_self();
    func_0x00010001d720();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(ulong *)(unaff_x20 + _DAT_100029a58);
    uVar12 = ((ulong *)(unaff_x20 + _DAT_100029a58))[1];
    uVar8 = uVar6;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar12);
    puVar9 = puVar7;
    func_0x00010001d740();
    _objc_release(puVar7);
    _objc_release();
    if ((int)puVar9 != 0) {
      FUN_100018dd0();
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      FUN_100018fd4();
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      FUN_1000191c8();
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      FUN_10001930c();
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      FUN_10001942c(0,0x100029870,&PTR__OBJC_CLASS___NSObject_100028fd0);
      lVar3 = _DAT_100029ab0;
      uVar12 = *(ulong *)(unaff_x20 + _DAT_100029ab8);
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_100029ab0);
      _objc_retain();
      _objc_retain(uVar13);
      uVar6 = uVar12;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar12,uVar13);
      _objc_release(uVar12);
      _objc_release(uVar13);
      if ((uVar6 & 1) == 0) {
        uVar13 = *(undefined8 *)(unaff_x20 + lVar3);
        puVar7 = &UNK_100024ef0;
        _swift_allocObject(&UNK_100024ef0,0x28,7);
        *(long *)(puVar7 + 0x10) = unaff_x20;
        *(code **)(puVar7 + 0x18) = param_1;
        *(undefined8 *)(puVar7 + 0x20) = param_2;
        puVar9 = &UNK_100024f18;
        _swift_allocObject(&UNK_100024f18,0x20,7);
        *(code **)(puVar9 + 0x10) = FUN_1000194d8;
        *(undefined **)(puVar9 + 0x18) = puVar7;
        pcStack_70 = FUN_1000194f4;
        puStack_90 = PTR___NSConcreteStackBlock_100024060;
        uStack_88 = 0x42000000;
        pcStack_80 = FUN_1000184e4;
        puStack_78 = &UNK_100024f30;
        ppuVar10 = &puStack_90;
        puStack_68 = puVar9;
        __Block_copy(ppuVar10);
        puVar11 = puStack_68;
        _objc_retain(uVar13);
        _objc_retain();
        func_0x000100018d3c(param_1,param_2);
        _swift_retain(puVar9);
        _swift_release(puVar11);
        _dispatch_sync(uVar13,ppuVar10);
        __Block_release(ppuVar10);
        _objc_release(uVar13);
        puVar11 = puVar9;
        _swift_isEscapingClosureAtFileLocation(puVar9,"",0x47,0xc4,0x1d,1);
        _swift_release(puVar9);
        _swift_release(puVar7);
        if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100017ee8);
          (*pcVar5)();
        }
        return 1;
      }
      if (*(long *)(unaff_x20 + _DAT_100029a90) != 0) {
        func_0x00010001d8a0();
      }
      if (*(long *)(unaff_x20 + _DAT_100029a98) != 0) {
        func_0x00010001d8a0();
      }
      *(undefined1 *)(unaff_x20 + lVar2) = 1;
      if (param_1 != (code *)0x0) {
        (*param_1)();
        return 1;
      }
      return 1;
    }
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x22);
    _swift_bridgeObjectRelease(uStack_88);
    puStack_90 = (undefined *)0x5b;
    uStack_88 = 0xe100000000000000;
    __sSS6appendyySSF(uVar13,uVar1);
    __sSS6appendyySSF(0xd00000000000001d,0x8000000100020950);
  }
  else {
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x16);
    _swift_bridgeObjectRelease(uStack_88);
    puStack_90 = (undefined *)0x5b;
    uStack_88 = 0xe100000000000000;
    __sSS6appendyySSF(*(undefined8 *)(unaff_x20 + _DAT_100029a60),
                      ((undefined8 *)(unaff_x20 + _DAT_100029a60))[1]);
    uVar12 = 0x8000000100020970;
    uVar6 = 0xd000000000000013;
  }
  __sSS6appendyySSF(uVar6,uVar12);
  uVar13 = uStack_88;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_90,uStack_88);
  _objc_release();
  _swift_bridgeObjectRelease(uVar13);
  return 0;
}



/* Entry: 100017ee8; end: 100017fa3;  */

void FUN_100017ee8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_48;
  
  uVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa(0);
  puStack_48 = PTR___swiftEmptyArrayStorage_100024458;
  uVar2 = 0x100029b10;
  FUN_100018d4c(0x100029b10,PTR___s8Dispatch0A13WorkItemFlagsVMa_1000245e0,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_1000245f0);
  uVar3 = 0x100029b18;
  FUN_100012244(0x100029b18,&UNK_10001ea68);
  uVar4 = 0x100029b20;
  func_0x000100018d8c(0x100029b20,0x100029b18,&UNK_10001ea68);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (param_1,&puStack_48,uVar3,uVar4,uVar1,uVar2);
  return;
}



/* Entry: 100017fa4; end: 100018307;  */

/* WARNING: Possible PIC construction at 0x00010001823c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100018240) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017fa4(code *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lStack_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar13 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_a0 = *(undefined8 *)(unaff_x20 + _DAT_100029a80);
  func_0x00010001d840();
  lVar2 = _DAT_100029a88;
  lVar9 = *(long *)(unaff_x20 + _DAT_100029a88);
  if (lVar9 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = lVar9;
    _swift_getObjectType(lVar9);
    _swift_unknownObjectRetain(lVar9);
    __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar3);
    _swift_unknownObjectRelease(lVar9);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  _swift_unknownObjectRelease(uVar4);
  if (*(char *)(unaff_x20 + _DAT_100029a78) == '\x01') {
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_100029ab8);
    puVar5 = &UNK_100024f68;
    _swift_allocObject(&UNK_100024f68,0x28,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(code **)(puVar5 + 0x18) = param_1;
    *(undefined8 *)(puVar5 + 0x20) = param_2;
    uStack_70 = 0x100019574;
    puStack_90 = PTR___NSConcreteStackBlock_100024060;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1000198f0;
    puStack_78 = &UNK_100024f80;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar5;
    __Block_copy(ppuVar6);
    _objc_retain(uVar10);
    _objc_retain();
    func_0x000100018d3c(param_1,param_2);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
    puStack_98 = PTR___swiftEmptyArrayStorage_100024458;
    uVar4 = 0x100029b10;
    FUN_100018d4c(0x100029b10,PTR___s8Dispatch0A13WorkItemFlagsVMa_1000245e0,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_1000245f0);
    uVar7 = 0x100029b18;
    FUN_100012244(0x100029b18,&UNK_10001ea68);
    uVar8 = 0x100029b20;
    func_0x000100018d8c(0x100029b20,0x100029b18,&UNK_10001ea68);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar11,&puStack_98,uVar7,uVar8,lVar1,uVar4);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar13,lVar11,ppuVar6);
    __Block_release(ppuVar6);
    _objc_release(uVar10);
    (**(code **)(lVar12 + 8))(lVar11,lVar1);
    (**(code **)(lStack_b0 + 8))(lVar13,lStack_a8);
    _swift_release(puStack_68);
  }
  else {
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x12);
    _swift_bridgeObjectRelease(uStack_88);
    puStack_90 = (undefined *)0x5b;
    uStack_88 = 0xe100000000000000;
    __sSS6appendyySSF(*(undefined8 *)(unaff_x20 + _DAT_100029a60),
                      ((undefined8 *)(unaff_x20 + _DAT_100029a60))[1]);
    __sSS6appendyySSF(0x6f6320746f6e205d,0xef64657463656e6e);
    uVar4 = uStack_88;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_90,uStack_88);
    _objc_release();
    _swift_bridgeObjectRelease(uVar4);
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010001da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000241b8)(uStack_a0,PTR_s_unlock_100028ee8);
  return;
}



/* Entry: 100018308; end: 1000184e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100018308(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  FUN_10001942c(0,0x100029870,&PTR__OBJC_CLASS___NSObject_100028fd0);
  lVar1 = _DAT_100029ab0;
  uVar3 = *(ulong *)(param_1 + _DAT_100029ab8);
  uVar9 = *(undefined8 *)(param_1 + _DAT_100029ab0);
  _objc_retain();
  _objc_retain(uVar9);
  uVar4 = uVar3;
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar3,uVar9);
  _objc_release(uVar3);
  _objc_release(uVar9);
  if ((uVar4 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_1 + lVar1);
    puVar5 = &UNK_100024fb8;
    _swift_allocObject(&UNK_100024fb8,0x28,7);
    *(long *)(puVar5 + 0x10) = param_1;
    *(undefined8 *)(puVar5 + 0x18) = param_2;
    *(undefined8 *)(puVar5 + 0x20) = param_3;
    puVar6 = &UNK_100024fe0;
    _swift_allocObject(&UNK_100024fe0,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_1000195b4;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    uStack_60 = 0x1000198e0;
    puStack_80 = PTR___NSConcreteStackBlock_100024060;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1000184e4;
    puStack_68 = &UNK_100024ff8;
    puStack_58 = puVar6;
    __Block_copy(&puStack_80);
    puVar8 = puStack_58;
    _objc_retain(uVar9);
    _objc_retain(param_1);
    func_0x000100018d3c(param_2,param_3);
    _swift_retain(puVar6);
    _swift_release(puVar8);
    _dispatch_sync(uVar9,ppuVar7);
    __Block_release(ppuVar7);
    _objc_release(uVar9);
    puVar8 = puVar6;
    _swift_isEscapingClosureAtFileLocation(puVar6,"",0x47,0x60,0x21,1);
    _swift_release(puVar6);
    _swift_release(puVar5);
    if (((ulong)puVar8 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000184e4);
      (*pcVar2)();
    }
  }
  else {
    FUN_1000172dc(param_2,param_3);
  }
  return;
}



/* Entry: 1000184e4; end: 100018503;  */

void FUN_1000184e4(long param_1)

{
  (**(code **)(param_1 + 0x20))();
  return;
}



/* Entry: 100018504; end: 10001854f; -[_TtC19SCVideoSocketSender21VideoSocketConnection init] */

void FUN_100018504(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCVideoSocketSender.VideoSocketConnection",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100018530);
  (*pcVar1)();
}



/* Entry: 100018550; end: 100018b83;  */

/* WARNING: Possible PIC construction at 0x000100018908: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010001890c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100018550(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = _DAT_100029a90;
  if (*(char *)(unaff_x20 + _DAT_100029a78) != '\x01') {
    return;
  }
  if ((long)param_2 < 4) {
    if (param_2 == 1) {
      lVar5 = *(long *)(unaff_x20 + _DAT_100029a98);
      if (lVar5 == 0) {
        return;
      }
      FUN_10001942c(0,0x100029ae8,&PTR__OBJC_CLASS___NSStream_100029000);
      _objc_retain();
      _objc_retain(lVar5);
      uVar1 = param_1;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_1,lVar5);
      _objc_release(param_1);
      _objc_release(lVar5);
      if ((uVar1 & 1) == 0) {
        return;
      }
      uStack_50 = 0;
      uStack_48 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x21);
      _swift_bridgeObjectRelease(uStack_48);
      uStack_50 = 0x5b;
      uStack_48 = 0xe100000000000000;
      __sSS6appendyySSF(*(undefined8 *)(unaff_x20 + _DAT_100029a60),
                        ((undefined8 *)(unaff_x20 + _DAT_100029a60))[1]);
      __sSS6appendyySSF(0xd00000000000001e,0x80000001000208d0);
      uVar2 = uStack_48;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_50,uStack_48);
      _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010001d48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_100024488)(uVar2);
      return;
    }
    if (param_2 != 2) {
LAB_100018a10:
      uStack_50 = 0;
      uStack_48 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x1d);
      __sSS6appendyySSF(0x5b,0xe100000000000000);
      __sSS6appendyySSF(*(undefined8 *)(unaff_x20 + _DAT_100029a60),
                        ((undefined8 *)(unaff_x20 + _DAT_100029a60))[1]);
      __sSS6appendyySSF(0xd000000000000018,0x8000000100020840);
      uVar2 = 0;
      uStack_58 = param_2;
      FUN_100017230(0);
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (&uStack_58,&uStack_50,uVar2,PTR___ss26DefaultStringInterpolationVN_1000243c8,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000243d0);
LAB_100018aa8:
      uVar2 = uStack_48;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_50,uStack_48);
      _objc_release();
      _swift_bridgeObjectRelease(uVar2);
      return;
    }
    lVar4 = *(long *)(unaff_x20 + _DAT_100029a90);
    if (lVar4 == 0) {
      return;
    }
    FUN_10001942c(0,0x100029ae8,&PTR__OBJC_CLASS___NSStream_100029000);
    _objc_retain();
    _objc_retain(lVar4);
    uVar1 = param_1;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_1,lVar4);
    _objc_release(param_1);
    _objc_release(lVar4);
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar1 = *(ulong *)(unaff_x20 + lVar5);
    if (uVar1 == 0) {
      return;
    }
    func_0x00010001d8e0();
    if ((long)uVar1 < 1) {
      if (-1 < (long)uVar1) {
        return;
      }
      uStack_50 = 0;
      uStack_48 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x1e);
      _swift_bridgeObjectRelease(uStack_48);
      uStack_50 = 0x5b;
      uStack_48 = 0xe100000000000000;
      __sSS6appendyySSF(*(undefined8 *)(unaff_x20 + _DAT_100029a60),
                        ((undefined8 *)(unaff_x20 + _DAT_100029a60))[1]);
      __sSS6appendyySSF(0xd000000000000019,0x80000001000208b0);
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_100024358;
      uStack_58 = uVar1;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100024348,PTR___sSis23CustomStringConvertiblesWP_100024358);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar6);
      goto LAB_100018aa8;
    }
    pcVar3 = *(code **)(unaff_x20 + _DAT_100029a50);
    if (pcVar3 == (code *)0x0) {
      return;
    }
    puVar6 = (undefined *)((undefined8 *)(unaff_x20 + _DAT_100029a50))[1];
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_100029aa8);
    _swift_retain(puVar6);
    (*pcVar3)(uVar2,uVar1);
  }
  else if (param_2 == 4) {
    lVar5 = *(long *)(unaff_x20 + _DAT_100029a98);
    if (lVar5 == 0) {
      return;
    }
    FUN_10001942c(0,0x100029ae8,&PTR__OBJC_CLASS___NSStream_100029000);
    _objc_retain();
    _objc_retain(lVar5);
    uVar1 = param_1;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_1,lVar5);
    _objc_release(param_1);
    _objc_release(lVar5);
    if ((uVar1 & 1) == 0) {
      return;
    }
    pcVar3 = *(code **)(unaff_x20 + _DAT_100029a48);
    if (pcVar3 == (code *)0x0) {
      return;
    }
    puVar6 = (undefined *)((undefined8 *)(unaff_x20 + _DAT_100029a48))[1];
    _swift_retain(puVar6);
    (*pcVar3)();
  }
  else {
    if (param_2 != 8) {
      if (param_2 == 0x10) {
        uStack_50 = 0;
        uStack_48 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x24);
        _swift_bridgeObjectRelease(uStack_48);
        uStack_50 = 0x5b;
        uStack_48 = 0xe100000000000000;
        __sSS6appendyySSF(*(undefined8 *)(unaff_x20 + _DAT_100029a60),
                          ((undefined8 *)(unaff_x20 + _DAT_100029a60))[1]);
        __sSS6appendyySSF(0xd000000000000021,0x8000000100020860);
        uVar2 = uStack_48;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_50,uStack_48);
        _objc_release();
        _swift_bridgeObjectRelease(uVar2);
        puVar6 = &UNK_100024e50;
        _swift_allocObject(&UNK_100024e50,0x18,7);
        *(long *)(puVar6 + 0x10) = unaff_x20;
        _objc_retain();
        FUN_100017fa4(0x100018c50,puVar6);
        goto _swift_release;
      }
      goto LAB_100018a10;
    }
    func_0x00010001d9c0();
    _objc_retainAutoreleasedReturnValue();
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    _swift_bridgeObjectRelease(uStack_48);
    uStack_50 = 0x5b;
    uStack_48 = 0xe100000000000000;
    __sSS6appendyySSF(*(undefined8 *)(unaff_x20 + _DAT_100029a60),
                      ((undefined8 *)(unaff_x20 + _DAT_100029a60))[1]);
    __sSS6appendyySSF(0xd000000000000010,0x8000000100020890);
    uStack_58 = param_1;
    _swift_errorRetain(param_1);
    uVar2 = 0x1000297b8;
    FUN_100012244(0x1000297b8,&UNK_10001e5f8);
    __sSS10describingSSx_tclufC(&uStack_58,uVar2);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = uStack_48;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_50,uStack_48);
    _objc_release();
    _swift_bridgeObjectRelease(uVar2);
    pcVar3 = *(code **)(unaff_x20 + _DAT_100029a40);
    if (pcVar3 == (code *)0x0) {
      _objc_release(param_1);
      return;
    }
    puVar6 = (undefined *)((undefined8 *)(unaff_x20 + _DAT_100029a40))[1];
    _swift_retain(puVar6);
    (*pcVar3)(param_1);
    _objc_release(param_1);
  }
  if (pcVar3 == (code *)0x0) {
    return;
  }
_swift_release:
                    /* WARNING: Could not recover jumptable at 0x00010001d57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024528)(puVar6);
  return;
}



/* Entry: 100018b84; end: 100018bd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100018b84(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_100029a38);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_100029a38))[1];
  _swift_retain(uVar2);
  (*pcVar1)();
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010001d57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_100024528)(uVar2);
    return;
  }
  return;
}



/* Entry: 100018bd4; end: 100018c2b; -[_TtC19SCVideoSocketSender21VideoSocketConnection stream:handleEvent:] */

void FUN_100018bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_100018550(param_3,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001d3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000241d0)(param_1);
  return;
}



/* Entry: 100018c2c; end: 100018c4f;  */

void FUN_100018c2c(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010001d4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000244a8)();
  return;
}



/* Entry: 100018c50; end: 100018c67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100018c50(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_100029a38);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 == (code *)0x0) {
    return;
  }
  uVar3 = puVar1[1];
  _swift_retain(uVar3);
  (*pcVar2)();
  if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010001d57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_100024528)(uVar3);
    return;
  }
  return;
}



/* Entry: 100018c68; end: 100018cbb;  */

ulong FUN_100018c68(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 != 0) {
    return *param_1 & 0xfffffffffffffffe;
  }
  uVar1 = 0xff;
  _swift_getTypeByMangledNameInContextInMetadataState
            (0xff,(long)param_2 + (long)(int)*param_2,*param_2 >> 0x20,0,0);
  *param_1 = uVar1 | 1;
  return uVar1 & 0xfffffffffffffffe;
}



/* Entry: 100018cbc; end: 100018d13;  */

void FUN_100018cbc(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010001d4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000244a8)();
  return;
}



/* Entry: 100018d14; end: 100018d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100018d14(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(ulong *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_beginAccess(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _DAT_100029a80;
  if (lVar3 != 0) {
    func_0x00010001d840(*(undefined8 *)(lVar3 + _DAT_100029a80));
    lVar2 = _DAT_100029a88;
    if ((*(long *)(lVar3 + _DAT_100029a88) != 0) && (FUN_100017ac4(uVar4,uVar6), (uVar4 & 1) != 0))
    {
      lVar7 = *(long *)(lVar3 + lVar2);
      if (lVar7 == 0) {
        uVar6 = 0;
      }
      else {
        lVar5 = lVar7;
        _swift_getObjectType(lVar7);
        _swift_unknownObjectRetain(lVar7);
        __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar5);
        _swift_unknownObjectRelease(lVar7);
        uVar6 = *(undefined8 *)(lVar3 + lVar2);
      }
      *(undefined8 *)(lVar3 + lVar2) = 0;
      _swift_unknownObjectRelease(uVar6);
    }
    func_0x00010001da20(*(undefined8 *)(lVar3 + lVar1));
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 100018d4c; end: 100018dcf;  */

void FUN_100018d4c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 100018dd0; end: 100018fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100018dd0(undefined8 param_1,ulong *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  ulong *puVar11;
  ulong *unaff_x20;
  ulong *puVar12;
  ulong *unaff_x21;
  ulong unaff_x22;
  ulong *unaff_x23;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_288;
  ulong uStack_280;
  long lStack_278;
  long lStack_270;
  ulong *puStack_268;
  ulong *puStack_260;
  ulong *puStack_258;
  undefined8 **ppuStack_250;
  code *pcStack_248;
  int iStack_234;
  ulong uStack_230;
  ulong *puStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined2 uStack_1c8;
  undefined6 uStack_1c6;
  undefined2 uStack_1c0;
  undefined8 uStack_1be;
  long lStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined4 uStack_174;
  undefined8 uStack_170;
  ulong uStack_168;
  ulong *puStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  ulong *puStack_148;
  ulong uStack_140;
  ulong *puStack_138;
  ulong *puStack_130;
  ulong *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined2 uStack_a8;
  undefined6 uStack_a6;
  undefined2 uStack_a0;
  undefined8 uStack_9e;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  
  lVar10 = *(long *)PTR____stack_chk_guard_100024078;
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_100029a70);
  if (*(char *)((long)puVar1 + 0x6a) == '\x01') {
    uStack_9e = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_a6 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    unaff_x22 = *(ulong *)((long)unaff_x20 + _DAT_100029a58);
    unaff_x21 = (ulong *)((ulong *)((long)unaff_x20 + _DAT_100029a58))[1];
    uVar8 = unaff_x22;
    __sSS5countSivg(unaff_x22,unaff_x21);
    puVar11 = (ulong *)(ulong)((long)uVar8 < 0x68);
    if ((long)uVar8 < 0x68) {
      unaff_x23 = (ulong *)((ulong)&uStack_100 | 2);
      puStack_70 = unaff_x23;
      if (((ulong)unaff_x21 >> 0x3c & 1) == 0) {
        uVar8 = unaff_x22;
        if (((ulong)unaff_x21 >> 0x3d & 1) == 0) {
          if ((unaff_x22 >> 0x3c & 1) == 0) goto LAB_100018f94;
          unaff_x20 = (ulong *)((ulong)unaff_x21 & 0xfffffffffffffff);
          __sSS5countSivg(unaff_x22,unaff_x21);
          param_2 = unaff_x20 + 4;
        }
        else {
          uStack_88 = (ulong)unaff_x21 & 0xffffffffffffff;
          uStack_90 = unaff_x22;
          __sSS5countSivg(unaff_x22,unaff_x21);
          param_2 = &uStack_90;
        }
        _strncpy(unaff_x23,param_2,uVar8);
        puVar6 = unaff_x21;
      }
      else {
LAB_100018f94:
        uVar7 = 0x100029b28;
        FUN_100012244(0x100029b28,&UNK_10001ea70);
        param_2 = &uStack_80;
        puVar6 = (ulong *)0x0;
        __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
                  (&uStack_90,FUN_100019514,param_2,unaff_x22,unaff_x21,uVar7);
      }
      puVar1[9] = uStack_b8;
      puVar1[8] = uStack_c0;
      puVar1[0xb] = CONCAT62(uStack_a6,uStack_a8);
      puVar1[10] = uStack_b0;
      *(undefined8 *)((long)puVar1 + 0x62) = uStack_9e;
      *(ulong *)((long)puVar1 + 0x5a) = CONCAT26(uStack_a0,uStack_a6);
      puVar1[1] = uStack_f8;
      *puVar1 = uStack_100;
      puVar1[3] = uStack_e8;
      puVar1[2] = uStack_f0;
      puVar1[5] = uStack_d8;
      puVar1[4] = uStack_e0;
      puVar1[7] = uStack_c8;
      puVar1[6] = uStack_d0;
      *(undefined1 *)((long)puVar1 + 0x6a) = 0;
      puVar12 = unaff_x20;
      unaff_x21 = puVar6;
    }
    else {
      uStack_80 = 0;
      puStack_78 = (ulong *)0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x22);
      _swift_bridgeObjectRelease(puStack_78);
      uStack_80 = 0x5b;
      puStack_78 = (ulong *)0xe100000000000000;
      __sSS6appendyySSF(*(undefined8 *)((long)unaff_x20 + _DAT_100029a60),
                        ((undefined8 *)((long)unaff_x20 + _DAT_100029a60))[1]);
      __sSS6appendyySSF(0xd00000000000001d,0x80000001000209e0);
      __sSS6appendyySSF(unaff_x22,unaff_x21);
      puVar12 = puStack_78;
      param_2 = puStack_78;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_80,puStack_78);
      _objc_release();
      _swift_bridgeObjectRelease(puVar12);
      unaff_x23 = unaff_x20;
    }
  }
  else {
    puVar11 = (ulong *)0x1;
    puVar12 = unaff_x20;
  }
  if (*(long *)PTR____stack_chk_guard_100024078 == lVar10) {
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = puVar11;
    return auVar13;
  }
  ___stack_chk_fail();
  lVar10 = _DAT_100029a68;
  pcStack_118 = FUN_100018fd4;
  lStack_158 = *(long *)PTR____stack_chk_guard_100024078;
  puVar5 = (ulong *)0x1;
  puVar6 = puVar5;
  puStack_150 = puVar1;
  puStack_148 = unaff_x23;
  uStack_140 = unaff_x22;
  puStack_138 = unaff_x21;
  puStack_130 = puVar12;
  puStack_128 = puVar11;
  puStack_120 = &stack0xfffffffffffffff0;
  if (*(int *)((long)puVar12 + _DAT_100029a68) == -1) {
    _socket(1,1,0);
    if ((int)puVar5 == -1) {
      uStack_168 = 0;
      puStack_160 = (ulong *)0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x1c);
      _swift_bridgeObjectRelease(puStack_160);
      uStack_168 = 0x5b;
      puStack_160 = (ulong *)0xe100000000000000;
      __sSS6appendyySSF(*(undefined8 *)((long)puVar12 + _DAT_100029a60),
                        ((undefined8 *)((long)puVar12 + _DAT_100029a60))[1]);
      puVar12 = &uStack_168;
      __sSS6appendyySSF(0xd000000000000019,0x8000000100020990);
      puVar11 = puStack_160;
      param_2 = puStack_160;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_168,puStack_160);
      _objc_release();
      _swift_bridgeObjectRelease(puVar11);
      puVar6 = (ulong *)0x0;
    }
    else {
      uStack_170 = 1;
      param_2 = (ulong *)0xffff;
      puVar11 = puVar5;
      _setsockopt();
      if ((int)puVar11 == -1) {
        uStack_168 = 0;
        puStack_160 = (ulong *)0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x2d);
        _swift_bridgeObjectRelease(puStack_160);
        uStack_168 = 0x5b;
        puStack_160 = (ulong *)0xe100000000000000;
        __sSS6appendyySSF(*(undefined8 *)((long)puVar12 + _DAT_100029a60),
                          ((undefined8 *)((long)puVar12 + _DAT_100029a60))[1]);
        uVar3 = 0x28;
        __sSS6appendyySSF(0xd000000000000028,0x80000001000209b0);
        __s6Darwin5errnos5Int32Vvg();
        puVar9 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100024408;
        uStack_174 = uVar3;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___ss5Int32VN_1000243f8,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100024408
                  );
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar9);
        unaff_x21 = puStack_160;
        param_2 = puStack_160;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_168,puStack_160);
        _objc_release();
        _swift_bridgeObjectRelease(unaff_x21);
      }
      *(int *)((long)puVar12 + lVar10) = (int)puVar5;
      puVar6 = (ulong *)0x1;
      puVar11 = puVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100024078 == lStack_158) {
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = puVar6;
    return auVar14;
  }
  ___stack_chk_fail(puVar6);
  pcStack_188 = FUN_1000191c8;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_100024078;
  puVar6 = (ulong *)((long)puVar12 + _DAT_100029a70);
  puStack_1a0 = puVar12;
  puStack_198 = puVar11;
  ppuStack_190 = &puStack_120;
  if (*(char *)((long)puVar6 + 0x6a) != '\x01') {
    uStack_1d8 = puVar6[9];
    uStack_1e0 = puVar6[8];
    uStack_1d0 = puVar6[10];
    uStack_1c8 = (undefined2)puVar6[0xb];
    uStack_1be = *(undefined8 *)((long)puVar6 + 0x62);
    uStack_1c6 = (undefined6)*(undefined8 *)((long)puVar6 + 0x5a);
    uStack_1c0 = (undefined2)((ulong)*(undefined8 *)((long)puVar6 + 0x5a) >> 0x30);
    uStack_218 = puVar6[1];
    uStack_220 = *puVar6;
    uStack_208 = puVar6[3];
    uStack_210 = puVar6[2];
    uStack_1f8 = puVar6[5];
    uStack_200 = puVar6[4];
    uStack_1e8 = puVar6[7];
    uStack_1f0 = puVar6[6];
    iVar4 = *(int *)((long)puVar12 + _DAT_100029a68);
    if (iVar4 != -1) {
      param_2 = &uStack_220;
      _connect(iVar4,param_2,0x6a);
      if (iVar4 == 0) {
        uVar7 = 1;
        goto LAB_1000192d8;
      }
      uStack_230 = 0x5b;
      puStack_228 = (ulong *)0xe100000000000000;
      __sSS6appendyySSF(*(undefined8 *)((long)puVar12 + _DAT_100029a60),
                        ((undefined8 *)((long)puVar12 + _DAT_100029a60))[1]);
      __sSS6appendyySSF(0x3a726f727265205d,0xe900000000000020);
      puVar9 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100024408;
      iStack_234 = iVar4;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___ss5Int32VN_1000243f8,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100024408);
      puVar12 = &uStack_230;
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar9);
      puVar11 = puStack_228;
      param_2 = puStack_228;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_230,puStack_228);
      _objc_release();
      _swift_bridgeObjectRelease(puVar11);
    }
  }
  uVar7 = 0;
LAB_1000192d8:
  if (*(long *)PTR____stack_chk_guard_100024078 == lStack_1a8) {
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = uVar7;
    return auVar15;
  }
  ___stack_chk_fail(uVar7);
  lStack_270 = lVar10;
  pcStack_248 = FUN_10001930c;
  lStack_278 = *(long *)PTR____stack_chk_guard_100024078;
  uStack_280 = 0;
  uStack_288 = 0;
  puVar5 = (ulong *)(ulong)*(uint *)((long)puVar12 + _DAT_100029a68);
  puVar6 = &uStack_280;
  puStack_268 = unaff_x21;
  puStack_260 = puVar12;
  puStack_258 = puVar11;
  ppuStack_250 = &ppuStack_190;
  _CFStreamCreatePairWithSocket
            (*(undefined8 *)PTR__kCFAllocatorDefault_100024140,puVar5,puVar6,&uStack_288);
  lVar10 = _DAT_100029a90;
  uVar7 = *(undefined8 *)((long)puVar12 + _DAT_100029a90);
  *(ulong *)((long)puVar12 + _DAT_100029a90) = uStack_280;
  _objc_release(uVar7);
  lVar2 = _DAT_100029a98;
  uVar7 = *(undefined8 *)((long)puVar12 + _DAT_100029a98);
  *(undefined8 *)((long)puVar12 + _DAT_100029a98) = uStack_288;
  _objc_release(uVar7);
  if ((*(long *)((long)puVar12 + lVar10) == 0) || (*(long *)((long)puVar12 + lVar2) == 0)) {
    *(undefined8 *)((long)puVar12 + lVar10) = 0;
    _objc_release();
    uVar7 = *(undefined8 *)((long)puVar12 + lVar2);
    *(undefined8 *)((long)puVar12 + lVar2) = 0;
    _objc_release(uVar7);
    uVar7 = 0;
  }
  else {
    puVar6 = puVar12;
    func_0x00010001d920();
    if (*(long *)((long)puVar12 + lVar2) != 0) {
      puVar6 = puVar12;
      func_0x00010001d920();
    }
    _CFReadStreamSetDispatchQueue
              (*(undefined8 *)((long)puVar12 + lVar10),
               *(undefined8 *)((long)puVar12 + _DAT_100029ab0));
    puVar5 = *(ulong **)((long)puVar12 + _DAT_100029ab8);
    _CFWriteStreamSetDispatchQueue(*(undefined8 *)((long)puVar12 + lVar2));
    uVar7 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_100024078 == lStack_278) {
    auVar16._8_8_ = puVar5;
    auVar16._0_8_ = uVar7;
    return auVar16;
  }
  ___stack_chk_fail(uVar7);
  auVar17._0_8_ = *puVar5;
  if (auVar17._0_8_ != 0) {
    auVar17._8_8_ = 0;
    return auVar17;
  }
  uVar8 = *puVar6;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *puVar5 = uVar8;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar8;
  return auVar18;
}



/* Entry: 100018fd4; end: 1000191c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100018fd4(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  int iStack_124;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined8 uStack_ae;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined4 uStack_64;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar7 = _DAT_100029a68;
  lStack_48 = *(long *)PTR____stack_chk_guard_100024078;
  uVar5 = 1;
  uVar6 = uVar5;
  if (*(int *)((long)unaff_x20 + _DAT_100029a68) == -1) {
    _socket(1,1,0);
    if ((int)uVar5 == -1) {
      lStack_58 = 0;
      uStack_50 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x1c);
      _swift_bridgeObjectRelease(uStack_50);
      lStack_58 = 0x5b;
      uStack_50 = 0xe100000000000000;
      __sSS6appendyySSF(*(undefined8 *)((long)unaff_x20 + _DAT_100029a60),
                        ((undefined8 *)((long)unaff_x20 + _DAT_100029a60))[1]);
      unaff_x20 = &lStack_58;
      __sSS6appendyySSF(0xd000000000000019,0x8000000100020990);
      unaff_x19 = uStack_50;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_58,uStack_50);
      _objc_release();
      _swift_bridgeObjectRelease(unaff_x19);
      uVar6 = 0;
    }
    else {
      uStack_60 = 1;
      uVar6 = uVar5;
      _setsockopt();
      if ((int)uVar6 == -1) {
        lStack_58 = 0;
        uStack_50 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x2d);
        _swift_bridgeObjectRelease(uStack_50);
        lStack_58 = 0x5b;
        uStack_50 = 0xe100000000000000;
        __sSS6appendyySSF(*(undefined8 *)((long)unaff_x20 + _DAT_100029a60),
                          ((undefined8 *)((long)unaff_x20 + _DAT_100029a60))[1]);
        uVar3 = 0x28;
        __sSS6appendyySSF(0xd000000000000028,0x80000001000209b0);
        __s6Darwin5errnos5Int32Vvg();
        puVar8 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100024408;
        uStack_64 = uVar3;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___ss5Int32VN_1000243f8,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100024408
                  );
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar8);
        unaff_x21 = uStack_50;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_58,uStack_50);
        _objc_release();
        _swift_bridgeObjectRelease(unaff_x21);
      }
      *(int *)((long)unaff_x20 + lVar7) = (int)uVar5;
      uVar6 = 1;
      unaff_x19 = uVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100024078 == lStack_48) {
    return;
  }
  ___stack_chk_fail(uVar6);
  plStack_90 = unaff_x20;
  uStack_88 = unaff_x19;
  puStack_80 = &stack0xfffffffffffffff0;
  pcStack_78 = FUN_1000191c8;
  lStack_98 = *(long *)PTR____stack_chk_guard_100024078;
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_100029a70);
  if (*(char *)((long)puVar1 + 0x6a) != '\x01') {
    uStack_c8 = puVar1[9];
    uStack_d0 = puVar1[8];
    uStack_b8 = (undefined2)puVar1[0xb];
    uStack_b6 = (undefined6)((ulong)puVar1[0xb] >> 0x10);
    uStack_c0 = puVar1[10];
    uStack_ae = *(undefined8 *)((long)puVar1 + 0x62);
    uStack_b6 = (undefined6)*(undefined8 *)((long)puVar1 + 0x5a);
    uStack_b0 = (undefined2)((ulong)*(undefined8 *)((long)puVar1 + 0x5a) >> 0x30);
    uStack_108 = puVar1[1];
    uStack_110 = *puVar1;
    uStack_f8 = puVar1[3];
    uStack_100 = puVar1[2];
    uStack_e8 = puVar1[5];
    uStack_f0 = puVar1[4];
    uStack_d8 = puVar1[7];
    uStack_e0 = puVar1[6];
    iVar4 = *(int *)((long)unaff_x20 + _DAT_100029a68);
    if (iVar4 != -1) {
      _connect(iVar4,&uStack_110,0x6a);
      if (iVar4 == 0) {
        uVar6 = 1;
        goto LAB_1000192d8;
      }
      lStack_120 = 0x5b;
      uStack_118 = 0xe100000000000000;
      __sSS6appendyySSF(*(undefined8 *)((long)unaff_x20 + _DAT_100029a60),
                        ((undefined8 *)((long)unaff_x20 + _DAT_100029a60))[1]);
      __sSS6appendyySSF(0x3a726f727265205d,0xe900000000000020);
      puVar8 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100024408;
      iStack_124 = iVar4;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___ss5Int32VN_1000243f8,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100024408);
      unaff_x20 = &lStack_120;
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar8);
      unaff_x19 = uStack_118;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_120,uStack_118);
      _objc_release();
      _swift_bridgeObjectRelease(unaff_x19);
    }
  }
  uVar6 = 0;
LAB_1000192d8:
  if (*(long *)PTR____stack_chk_guard_100024078 == lStack_98) {
    return;
  }
  ___stack_chk_fail(uVar6);
  lStack_160 = lVar7;
  uStack_158 = unaff_x21;
  plStack_150 = unaff_x20;
  uStack_148 = unaff_x19;
  ppuStack_140 = &puStack_80;
  pcStack_138 = FUN_10001930c;
  lStack_168 = *(long *)PTR____stack_chk_guard_100024078;
  lStack_170 = 0;
  uStack_178 = 0;
  plVar9 = (long *)(ulong)*(uint *)((long)unaff_x20 + _DAT_100029a68);
  plVar10 = &lStack_170;
  _CFStreamCreatePairWithSocket
            (*(undefined8 *)PTR__kCFAllocatorDefault_100024140,plVar9,plVar10,&uStack_178);
  lVar7 = _DAT_100029a90;
  uVar6 = *(undefined8 *)((long)unaff_x20 + _DAT_100029a90);
  *(long *)((long)unaff_x20 + _DAT_100029a90) = lStack_170;
  _objc_release(uVar6);
  lVar2 = _DAT_100029a98;
  uVar6 = *(undefined8 *)((long)unaff_x20 + _DAT_100029a98);
  *(undefined8 *)((long)unaff_x20 + _DAT_100029a98) = uStack_178;
  _objc_release(uVar6);
  if ((*(long *)((long)unaff_x20 + lVar7) == 0) || (*(long *)((long)unaff_x20 + lVar2) == 0)) {
    *(undefined8 *)((long)unaff_x20 + lVar7) = 0;
    _objc_release();
    uVar6 = *(undefined8 *)((long)unaff_x20 + lVar2);
    *(undefined8 *)((long)unaff_x20 + lVar2) = 0;
    _objc_release(uVar6);
    uVar6 = 0;
  }
  else {
    plVar10 = unaff_x20;
    func_0x00010001d920();
    if (*(long *)((long)unaff_x20 + lVar2) != 0) {
      plVar10 = unaff_x20;
      func_0x00010001d920();
    }
    _CFReadStreamSetDispatchQueue
              (*(undefined8 *)((long)unaff_x20 + lVar7),
               *(undefined8 *)((long)unaff_x20 + _DAT_100029ab0));
    plVar9 = *(long **)((long)unaff_x20 + _DAT_100029ab8);
    _CFWriteStreamSetDispatchQueue(*(undefined8 *)((long)unaff_x20 + lVar2));
    uVar6 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_100024078 == lStack_168) {
    return;
  }
  ___stack_chk_fail(uVar6);
  if (*plVar9 != 0) {
    return;
  }
  lVar7 = *plVar10;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *plVar9 = lVar7;
  return;
}



/* Entry: 1000191c8; end: 10001930b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000191c8(void)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x20;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_100024078;
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_100029a70);
  if (*(char *)((long)puVar1 + 0x6a) != '\x01') {
    uStack_58 = puVar1[9];
    uStack_60 = puVar1[8];
    uStack_50 = puVar1[10];
    uStack_48 = (undefined2)puVar1[0xb];
    uStack_3e = *(undefined8 *)((long)puVar1 + 0x62);
    uStack_46 = (undefined6)*(undefined8 *)((long)puVar1 + 0x5a);
    uStack_40 = (undefined2)((ulong)*(undefined8 *)((long)puVar1 + 0x5a) >> 0x30);
    uStack_98 = puVar1[1];
    uStack_a0 = *puVar1;
    uStack_88 = puVar1[3];
    uStack_90 = puVar1[2];
    uStack_78 = puVar1[5];
    uStack_80 = puVar1[4];
    uStack_68 = puVar1[7];
    uStack_70 = puVar1[6];
    iVar3 = *(int *)((long)unaff_x20 + _DAT_100029a68);
    if (iVar3 != -1) {
      _connect(iVar3,&uStack_a0,0x6a);
      if (iVar3 == 0) {
        uVar4 = 1;
        goto LAB_1000192d8;
      }
      lStack_b0 = 0x5b;
      uStack_a8 = 0xe100000000000000;
      __sSS6appendyySSF(*(undefined8 *)((long)unaff_x20 + _DAT_100029a60),
                        ((undefined8 *)((long)unaff_x20 + _DAT_100029a60))[1]);
      __sSS6appendyySSF(0x3a726f727265205d,0xe900000000000020);
      puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100024408;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___ss5Int32VN_1000243f8,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100024408);
      unaff_x20 = &lStack_b0;
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar6);
      uVar4 = uStack_a8;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_b0,uStack_a8);
      _objc_release();
      _swift_bridgeObjectRelease(uVar4);
    }
  }
  uVar4 = 0;
LAB_1000192d8:
  if (*(long *)PTR____stack_chk_guard_100024078 == lStack_28) {
    return;
  }
  ___stack_chk_fail(uVar4);
  lStack_f8 = *(long *)PTR____stack_chk_guard_100024078;
  lStack_100 = 0;
  uStack_108 = 0;
  plVar7 = (long *)(ulong)*(uint *)((long)unaff_x20 + _DAT_100029a68);
  plVar8 = &lStack_100;
  _CFStreamCreatePairWithSocket
            (*(undefined8 *)PTR__kCFAllocatorDefault_100024140,plVar7,plVar8,&uStack_108);
  lVar5 = _DAT_100029a90;
  uVar4 = *(undefined8 *)((long)unaff_x20 + _DAT_100029a90);
  *(long *)((long)unaff_x20 + _DAT_100029a90) = lStack_100;
  _objc_release(uVar4);
  lVar2 = _DAT_100029a98;
  uVar4 = *(undefined8 *)((long)unaff_x20 + _DAT_100029a98);
  *(undefined8 *)((long)unaff_x20 + _DAT_100029a98) = uStack_108;
  _objc_release(uVar4);
  if ((*(long *)((long)unaff_x20 + lVar5) == 0) || (*(long *)((long)unaff_x20 + lVar2) == 0)) {
    *(undefined8 *)((long)unaff_x20 + lVar5) = 0;
    _objc_release();
    uVar4 = *(undefined8 *)((long)unaff_x20 + lVar2);
    *(undefined8 *)((long)unaff_x20 + lVar2) = 0;
    _objc_release(uVar4);
    uVar4 = 0;
  }
  else {
    plVar8 = unaff_x20;
    func_0x00010001d920();
    if (*(long *)((long)unaff_x20 + lVar2) != 0) {
      plVar8 = unaff_x20;
      func_0x00010001d920();
    }
    _CFReadStreamSetDispatchQueue
              (*(undefined8 *)((long)unaff_x20 + lVar5),
               *(undefined8 *)((long)unaff_x20 + _DAT_100029ab0));
    plVar7 = *(long **)((long)unaff_x20 + _DAT_100029ab8);
    _CFWriteStreamSetDispatchQueue(*(undefined8 *)((long)unaff_x20 + lVar2));
    uVar4 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_100024078 == lStack_f8) {
    return;
  }
  ___stack_chk_fail(uVar4);
  if (*plVar7 != 0) {
    return;
  }
  lVar5 = *plVar8;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *plVar7 = lVar5;
  return;
}



/* Entry: 10001930c; end: 10001942b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001930c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *unaff_x20;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_100024078;
  lStack_40 = 0;
  uStack_48 = 0;
  plVar4 = (long *)(ulong)*(uint *)((long)unaff_x20 + _DAT_100029a68);
  plVar5 = &lStack_40;
  _CFStreamCreatePairWithSocket
            (*(undefined8 *)PTR__kCFAllocatorDefault_100024140,plVar4,plVar5,&uStack_48);
  lVar3 = _DAT_100029a90;
  uVar2 = *(undefined8 *)((long)unaff_x20 + _DAT_100029a90);
  *(long *)((long)unaff_x20 + _DAT_100029a90) = lStack_40;
  _objc_release(uVar2);
  lVar1 = _DAT_100029a98;
  uVar2 = *(undefined8 *)((long)unaff_x20 + _DAT_100029a98);
  *(undefined8 *)((long)unaff_x20 + _DAT_100029a98) = uStack_48;
  _objc_release(uVar2);
  if ((*(long *)((long)unaff_x20 + lVar3) == 0) || (*(long *)((long)unaff_x20 + lVar1) == 0)) {
    *(undefined8 *)((long)unaff_x20 + lVar3) = 0;
    _objc_release();
    uVar2 = *(undefined8 *)((long)unaff_x20 + lVar1);
    *(undefined8 *)((long)unaff_x20 + lVar1) = 0;
    _objc_release(uVar2);
    uVar2 = 0;
  }
  else {
    plVar5 = unaff_x20;
    func_0x00010001d920();
    if (*(long *)((long)unaff_x20 + lVar1) != 0) {
      plVar5 = unaff_x20;
      func_0x00010001d920();
    }
    _CFReadStreamSetDispatchQueue
              (*(undefined8 *)((long)unaff_x20 + lVar3),
               *(undefined8 *)((long)unaff_x20 + _DAT_100029ab0));
    plVar4 = *(long **)((long)unaff_x20 + _DAT_100029ab8);
    _CFWriteStreamSetDispatchQueue(*(undefined8 *)((long)unaff_x20 + lVar1));
    uVar2 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_100024078 == lStack_38) {
    return;
  }
  ___stack_chk_fail(uVar2);
  if (*plVar4 != 0) {
    return;
  }
  lVar3 = *plVar5;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *plVar4 = lVar3;
  return;
}



/* Entry: 10001942c; end: 10001946b;  */

void FUN_10001942c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 10001946c; end: 1000194d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001946c(long param_1,code *param_2)

{
  if (*(long *)(param_1 + _DAT_100029a90) != 0) {
    func_0x00010001d8a0();
  }
  if (*(long *)(param_1 + _DAT_100029a98) != 0) {
    func_0x00010001d8a0();
  }
  *(undefined1 *)(param_1 + _DAT_100029a78) = 1;
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 1000194d8; end: 1000194f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000194d8(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  if (*(long *)(lVar1 + _DAT_100029a90) != 0) {
    func_0x00010001d8a0(*(long *)(lVar1 + _DAT_100029a90),pcVar2,*(undefined8 *)(unaff_x20 + 0x20));
  }
  if (*(long *)(lVar1 + _DAT_100029a98) != 0) {
    func_0x00010001d8a0();
  }
  *(undefined1 *)(lVar1 + _DAT_100029a78) = 1;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  return;
}



/* Entry: 1000194f4; end: 100019513;  */

void FUN_1000194f4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100019514; end: 10001956f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100019514(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_100029a58);
  uVar3 = *puVar1;
  __sSS5countSivg(uVar3,puVar1[1]);
  _strncpy(uVar2,param_2,uVar3);
  *param_1 = uVar2;
  return;
}



/* Entry: 100019570; end: 10001957f;  */

void FUN_100019570(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010001d4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000244a8)();
  return;
}



/* Entry: 100019580; end: 1000195b3;  */

void FUN_100019580(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010001d4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000244a8)();
  return;
}



/* Entry: 1000195b4; end: 1000195db;  */

void FUN_1000195b4(void)

{
  long unaff_x20;
  
  FUN_1000172dc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1000195dc; end: 10001982f;  */

undefined1  [16] FUN_1000195dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(lVar10 + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x100029b30;
  puVar7 = &UNK_10001ea78;
  FUN_100012244(0x100029b30,&UNK_10001ea78);
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100024068)();
  lVar5 = lVar6 - extraout_x12;
  puVar9 = PTR__OBJC_CLASS___NSBundle_100029018;
  _objc_opt_self();
  func_0x00010001d860();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar9;
  func_0x00010001d900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  if (puVar2 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    puVar7 = (undefined *)0xe000000000000000;
  }
  else {
    puVar9 = puVar2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar2);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSFileManager_100029010;
  _objc_opt_self();
  func_0x00010001d720();
  _objc_retainAutoreleasedReturnValue();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar9,puVar7);
  _swift_bridgeObjectRelease(puVar7);
  puVar7 = puVar2;
  func_0x00010001d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar9);
  if (puVar7 != (undefined *)0x0) {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar5,puVar7);
    _objc_release(puVar7);
  }
  (**(code **)(lVar10 + 0x38))(lVar5,puVar7 == (undefined *)0x0,1,lVar1);
  FUN_100019830(lVar5,lVar6);
  lVar3 = lVar6;
  (**(code **)(lVar10 + 0x30))(lVar6,1,lVar1);
  if ((int)lVar3 == 1) {
    func_0x000100019880(lVar6);
    lVar6 = 0;
    lVar10 = -0x2000000000000000;
  }
  else {
    __s10Foundation3URLV22appendingPathComponentyACSSF(puVar4,param_1,param_2);
    pcVar8 = *(code **)(lVar10 + 8);
    lVar10 = lVar1;
    (*pcVar8)(lVar6,lVar1);
    __s10Foundation3URLV4pathSSvg();
    (*pcVar8)(puVar4,lVar1);
  }
  func_0x000100019880(lVar5);
  auVar11._8_8_ = lVar10;
  auVar11._0_8_ = lVar6;
  return auVar11;
}



/* Entry: 100019830; end: 1000198c7;  */

undefined8 FUN_100019830(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x100029b30;
  FUN_100012244(0x100029b30,&UNK_10001ea78);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000198c8; end: 1000198ef;  */

void FUN_1000198c8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010001d594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100024538)(uVar1);
  return;
}



/* Entry: 1000198f0; end: 100019967;  */

void FUN_1000198f0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010001d57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024528)(uVar2);
  return;
}



/* Entry: 100019968; end: 1000199b7;  */

void FUN_100019968(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_100019a98(uVar1,uVar2);
  return;
}



/* Entry: 1000199b8; end: 1000199e7;  */

undefined1  [16] FUN_1000199b8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x10,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = FUN_1000199e8;
  return auVar1;
}



/* Entry: 1000199e8; end: 1000199eb;  */

void FUN_1000199e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001d4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_1000244b0)();
  return;
}



/* Entry: 1000199ec; end: 100019a37;  */

undefined1  [16] FUN_1000199ec(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  FUN_100019a38(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 100019a38; end: 100019a47;  */

void FUN_100019a38(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010001d594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_100024538)(param_2);
    return;
  }
  return;
}



/* Entry: 100019a48; end: 100019a97;  */

void FUN_100019a48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  FUN_100019a98(uVar1,uVar2);
  return;
}



/* Entry: 100019a98; end: 100019aa7;  */

void FUN_100019a98(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010001d57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_100024528)(param_2);
    return;
  }
  return;
}



/* Entry: 100019aa8; end: 100019ad7;  */

undefined1  [16] FUN_100019aa8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x20,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x10001bd88;
  return auVar1;
}



/* Entry: 100019ad8; end: 100019b23;  */

undefined1  [16] FUN_100019ad8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x30,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  FUN_100019a38(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 100019b24; end: 100019b73;  */

void FUN_100019b24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x30,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  FUN_100019a98(uVar1,uVar2);
  return;
}



/* Entry: 100019b74; end: 100019ba3;  */

undefined1  [16] FUN_100019b74(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x30,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x10001bd8c;
  return auVar1;
}



/* Entry: 100019ba4; end: 100019bb7;  */

bool FUN_100019ba4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100019bb8; end: 100019c63;  */

void FUN_100019bb8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100019c64; end: 100019cdf;  */

undefined8
FUN_100019c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_100019ce0(param_1,param_2,param_3,param_4,param_5,param_6);
  return unaff_x20;
}



/* Entry: 100019ce0; end: 10001a30f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100019ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  code *pcStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  lVar5 = 0;
  uStack_d0 = param_5;
  uStack_c4 = param_6;
  uStack_c0 = param_1;
  uStack_b8 = param_2;
  uStack_98 = param_3;
  uStack_90 = param_4;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  pcStack_e0 = *(code **)(lVar5 + -8);
  lStack_d8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)((long)pcStack_e0 + 0x40));
  lVar6 = 0;
  puStack_e8 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar15 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar14 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  *(undefined1 *)(unaff_x20 + 0x61) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  uStack_a8 = 0xf000000000000000;
  uStack_b0 = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  puVar7 = PTR__OBJC_CLASS___NSLock_100028ff0;
  _objc_allocWithZone();
  func_0x00010001d7a0();
  *(undefined **)(unaff_x20 + 0x90) = puVar7;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_b0;
  *(undefined1 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  puVar7 = PTR__OBJC_CLASS___NSLock_100028ff0;
  _objc_allocWithZone();
  func_0x00010001d7a0();
  *(undefined **)(unaff_x20 + 0xe0) = puVar7;
  uVar8 = 0;
  FUN_10001a310();
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  puStack_78 = (undefined *)0x0;
  uStack_70 = 0xe000000000000000;
  uStack_b0 = uVar8;
  __ss11_StringGutsV4growyySiF(0x2d);
  _swift_bridgeObjectRelease(uStack_70);
  uStack_f0 = 0x8000000100020a00;
  puStack_78 = (undefined *)0xd000000000000012;
  uStack_70 = 0x8000000100020a00;
  __sSS6appendyySSF(param_3,param_4);
  __sSS6appendyySSF(0xd000000000000019,0x8000000100020a20);
  uVar13 = uStack_70;
  puVar7 = puStack_78;
  __s8Dispatch0A3QoSV13userInitiatedACvgZ(lVar14);
  puStack_78 = PTR___swiftEmptyArrayStorage_100024458;
  uVar8 = 0x100029b40;
  FUN_10001bae8(0x100029b40,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100024640,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100024650);
  uVar9 = 0x100029b48;
  uStack_100 = uVar8;
  FUN_100012244(0x100029b48,&UNK_10001eac0);
  uVar11 = 0x100029b50;
  uStack_108 = uVar9;
  func_0x00010001bb28(0x100029b50,0x100029b48,&UNK_10001eac0);
  uStack_f8 = uVar11;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar15,&puStack_78,uVar9,uVar11,lVar6,uVar8);
  lVar5 = lStack_d8;
  puVar4 = puStack_e8;
  uVar3 = *(undefined4 *)
           PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100024660;
  pcStack_e0 = *(code **)((long)pcStack_e0 + 0x68);
  (*pcStack_e0)(puStack_e8,uVar3,lStack_d8);
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (puVar7,uVar13,lVar14,lVar15,puVar4,0);
  *(undefined **)(unaff_x20 + 0x50) = puVar7;
  puStack_78 = (undefined *)0x0;
  uStack_70 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x2e);
  _swift_bridgeObjectRelease(uStack_70);
  puStack_78 = (undefined *)0xd000000000000012;
  uStack_70 = uStack_f0;
  __sSS6appendyySSF(uStack_98,uStack_90);
  __sSS6appendyySSF(0xd00000000000001a,0x8000000100020a40);
  uVar8 = uStack_70;
  puVar7 = puStack_78;
  __s8Dispatch0A3QoSV13userInitiatedACvgZ(lVar14);
  puStack_78 = PTR___swiftEmptyArrayStorage_100024458;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar15,&puStack_78,uStack_108,uStack_f8,lVar6,uStack_100);
  (*pcStack_e0)(puVar4,uVar3,lVar5);
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (puVar7,uVar8,lVar14,lVar15,puVar4,0);
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_d0;
  *(undefined **)(unaff_x20 + 0x48) = puVar7;
  *(char *)(unaff_x20 + 0x60) = (char)uStack_c4;
  uVar13 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar14 = 0;
  func_0x000100018530();
  lVar6 = lVar14;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar6 + _DAT_100029a38);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_100029a40);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_100029a48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_100029a50);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar6 + _DAT_100029a68) = 0xffffffff;
  puVar1 = (undefined8 *)(lVar6 + _DAT_100029a70);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x62) = 0;
  *(undefined8 *)((long)puVar1 + 0x5a) = 0;
  *(undefined1 *)((long)puVar1 + 0x6a) = 1;
  *(undefined1 *)(lVar6 + _DAT_100029a78) = 0;
  lVar5 = _DAT_100029a80;
  puVar10 = PTR__OBJC_CLASS___NSLock_100028ff0;
  _objc_allocWithZone();
  _objc_retain();
  _objc_retain();
  func_0x00010001d7a0();
  uVar8 = uStack_b8;
  *(undefined **)(lVar6 + lVar5) = puVar10;
  *(undefined8 *)(lVar6 + _DAT_100029a88) = 0;
  *(undefined8 *)(lVar6 + _DAT_100029a90) = 0;
  *(undefined8 *)(lVar6 + _DAT_100029a98) = 0;
  uVar9 = uStack_c0;
  uVar11 = uStack_b8;
  FUN_1000195dc();
  _swift_bridgeObjectRelease(uVar8);
  puVar1 = (undefined8 *)(lVar6 + _DAT_100029a58);
  *puVar1 = uVar9;
  puVar1[1] = uVar11;
  *(undefined8 *)(lVar6 + _DAT_100029aa0) = 0x100;
  uVar11 = 0x100;
  _swift_slowAlloc(0x100,0xffffffffffffffff);
  uVar9 = uStack_90;
  uVar8 = uStack_98;
  *(undefined8 *)(lVar6 + _DAT_100029aa8) = uVar11;
  *(undefined8 *)(lVar6 + _DAT_100029ab0) = uVar13;
  *(undefined **)(lVar6 + _DAT_100029ab8) = puVar7;
  puVar2 = (undefined8 *)(lVar6 + _DAT_100029a60);
  *puVar2 = uStack_98;
  puVar2[1] = uStack_90;
  puStack_78 = (undefined *)0x0;
  uStack_70 = 0xe000000000000000;
  _objc_retain();
  _objc_retain();
  _swift_bridgeObjectRetain(uVar9);
  __ss11_StringGutsV4growyySiF(0x1e);
  _swift_bridgeObjectRelease(uStack_70);
  puStack_78 = (undefined *)0x5b;
  uStack_70 = 0xe100000000000000;
  __sSS6appendyySSF(uVar8,uVar9);
  _swift_bridgeObjectRelease(uVar9);
  __sSS6appendyySSF(0xd000000000000019,0x8000000100020a60);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  _swift_bridgeObjectRetain(uVar9);
  __sSS6appendyySSF(uVar8,uVar9);
  _swift_bridgeObjectRelease(uVar9);
  uVar8 = uStack_70;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_78,uStack_70);
  _objc_release();
  _swift_bridgeObjectRelease(uVar8);
  plVar12 = &lStack_88;
  lStack_88 = lVar6;
  lStack_80 = lVar14;
  _objc_msgSendSuper2(plVar12,PTR_s_init_100028e48);
  _objc_release(uVar13);
  _objc_release(puVar7);
  *(long **)(unaff_x20 + 0x58) = plVar12;
  lVar6 = 0;
  FUN_100014704();
  lVar5 = lVar6;
  _swift_allocObject();
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(long *)(unaff_x20 + 0xd0) = lVar6;
  *(undefined ***)(unaff_x20 + 0xd8) = &PTR_DAT_100024d80;
  *(long *)(unaff_x20 + 0xb8) = lVar5;
  FUN_10001a354();
  return;
}



/* Entry: 10001a310; end: 10001a353;  */

void FUN_10001a310(void)

{
  undefined *puVar1;
  
  if (puRam0000000100029b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___OS_dispatch_queue_100029020;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000100029b38 = puVar1;
  return;
}



/* Entry: 10001a354; end: 10001a4f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001a354(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  
  lVar6 = *(long *)(unaff_x20 + 0x58);
  puVar5 = &UNK_100025030;
  puVar4 = puVar5;
  _swift_allocObject(&UNK_100025030,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  puVar1 = (undefined8 *)(lVar6 + _DAT_100029a48);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0x10001bd60;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100019a98(uVar2,uVar3);
  _swift_release(puVar4);
  puVar4 = puVar5;
  _swift_allocObject(&UNK_100025030,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  puVar1 = (undefined8 *)(lVar6 + _DAT_100029a50);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0x10001bd68;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100019a98(uVar2,uVar3);
  _swift_release(puVar4);
  puVar4 = puVar5;
  _swift_allocObject(&UNK_100025030,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  puVar1 = (undefined8 *)(lVar6 + _DAT_100029a38);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0x10001bd70;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100019a98(uVar2,uVar3);
  _swift_release(puVar4);
  _swift_allocObject(&UNK_100025030,0x18,7);
  _swift_weakInit(puVar5 + 0x10);
  puVar1 = (undefined8 *)(lVar6 + _DAT_100029a40);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0x10001bd78;
  puVar1[1] = puVar5;
  _swift_retain(puVar5);
  FUN_100019a98(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010001d57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024528)(puVar5);
  return;
}



/* Entry: 10001a4f4; end: 10001a593;  */

void FUN_10001a4f4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  _objc_retain(uVar1);
  FUN_100017fa4(0,0);
  _objc_release(uVar1);
  FUN_100019a98(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100019a98(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100019a98(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x48));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x50));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x58));
  FUN_10001ba48(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x90));
  FUN_10001ba48(*(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0));
  _objc_release(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x00010001ba5c(unaff_x20 + 0xb8);
  _objc_release(*(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 10001a594; end: 10001a5b3;  */

void FUN_10001a594(void)

{
  FUN_10001a4f4();
                    /* WARNING: Could not recover jumptable at 0x00010001d4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000244a0)();
  return;
}



/* Entry: 10001a5b4; end: 10001a6e3;  */

void FUN_10001a5b4(void)

{
  undefined *puVar1;
  
  puVar1 = &UNK_100025030;
  _swift_allocObject(&UNK_100025030,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  _swift_retain(puVar1);
  FUN_100017530(FUN_10001baa0,puVar1);
  _swift_release_n(puVar1,2);
  return;
}



/* Entry: 10001a6e4; end: 10001a987;  */

void FUN_10001a6e4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  code *pcStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_1000245e0;
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar9 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lStack_b0 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar11 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar10 = *(long *)(lVar3 + -8);
  lStack_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(lVar10 + 0x40));
  lVar13 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100024068)();
  lVar12 = lVar13 - extraout_x12;
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x48);
  __s8Dispatch0A4TimeV3nowACyFZ(lVar13);
  __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar12,0x4000000000000000,lVar13);
  pcStack_c0 = *(code **)(lVar10 + 8);
  (*pcStack_c0)(lVar13,lVar3);
  puVar4 = &UNK_100025030;
  _swift_allocObject(&UNK_100025030,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  uStack_70 = 0x10001bd58;
  puStack_90 = PTR___NSConcreteStackBlock_100024060;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1000198f0;
  puStack_78 = &UNK_100025100;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  __Block_copy(ppuVar5);
  _swift_retain(puVar4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  puStack_98 = PTR___swiftEmptyArrayStorage_100024458;
  uVar6 = 0x100029b10;
  FUN_10001bae8(0x100029b10,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_1000245f0);
  uVar7 = 0x100029b18;
  FUN_100012244(0x100029b18,&UNK_10001ea68);
  uVar8 = 0x100029b20;
  func_0x00010001bb28(0x100029b20,0x100029b18,&UNK_10001ea68);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar9,&puStack_98,uVar7,uVar8,lVar2,uVar6);
  __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (lVar12,lVar11,puVar9,ppuVar5);
  __Block_release(ppuVar5);
  (**(code **)(lStack_a0 + 8))(puVar9,lVar2);
  (**(code **)(lStack_b0 + 8))(lVar11,lStack_a8);
  (*pcStack_c0)(lVar12,lStack_b8);
  puVar1 = puStack_68;
  _swift_release(puVar4);
  _swift_release(puVar1);
  return;
}



/* Entry: 10001a988; end: 10001a9ff;  */

undefined8 FUN_10001a988(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf0);
  puVar1 = &UNK_100025030;
  _swift_allocObject(&UNK_100025030,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  _swift_retain(puVar1);
  FUN_100017fa4(0x10001baa8,puVar1);
  _swift_release_n(puVar1,2);
  return uVar2;
}



/* Entry: 10001aa00; end: 10001aa53;  */

void FUN_10001aa00(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_10001aa54();
    _swift_release(param_1);
  }
  return;
}



/* Entry: 10001aa54; end: 10001ab2f;  */

void FUN_10001aa54(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_48 [24];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x90);
  func_0x00010001d840(uVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xe0);
  func_0x00010001d840(uVar5);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x70) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  FUN_10001ba48(uVar3,uVar1);
  plVar2 = (long *)(unaff_x20 + 0xb8);
  func_0x00010001bd34(plVar2,*(undefined8 *)(unaff_x20 + 0xd0));
  uVar3 = *(undefined8 *)(*plVar2 + 0x10);
  *(undefined8 *)(*plVar2 + 0x10) = 0;
  _objc_release(uVar3);
  *(undefined1 *)(unaff_x20 + 0x61) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  uVar3 = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  _objc_release(uVar3);
  *(undefined1 *)(unaff_x20 + 0xa8) = 0;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  pcVar6 = *(code **)(unaff_x20 + 0x10);
  if (pcVar6 != (code *)0x0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    _swift_retain(uVar3);
    (*pcVar6)(0);
    FUN_100019a98(pcVar6,uVar3);
  }
  func_0x00010001da20(uVar5);
  func_0x00010001da20(uVar4);
  return;
}



/* Entry: 10001ab30; end: 10001af37;  */

undefined8 FUN_10001ab30(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar6 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar16 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(lVar16 + 0x40));
  lVar12 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar13 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x90);
  func_0x00010001d840(uVar11);
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    uVar15 = *(undefined8 *)(unaff_x20 + 0xb0);
    *(undefined8 *)(unaff_x20 + 0xb0) = param_1;
    _objc_retain(param_1);
    _objc_release(uVar15);
  }
  if (*(char *)(unaff_x20 + 0xa8) == '\x01') {
    uVar15 = *(undefined8 *)(unaff_x20 + 0x98);
    uVar2 = *(ulong *)(unaff_x20 + 0xa0);
    lStack_a0 = lVar7;
    func_0x00010001bab0(uVar15,uVar2);
    FUN_10001ba48(uVar15,uVar2);
    if (uVar2 >> 0x3c < 0xf) {
      FUN_10001ba48(0,0xf000000000000000);
      func_0x00010001da20(uVar11);
      uVar11 = 1;
    }
    else {
      uVar15 = *(undefined8 *)(unaff_x20 + 0xe0);
      lStack_a8 = lVar16;
      func_0x00010001d840(uVar15);
      lVar7 = *(long *)(unaff_x20 + 0xe8);
      lVar16 = *(long *)(unaff_x20 + 0xf0);
      if (SBORROW8(lVar7,lVar16)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10001af34);
        (*pcVar5)();
      }
      lVar1 = lVar7 + 1;
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10001af38);
        (*pcVar5)();
      }
      func_0x00010001da20(uVar15);
      if (*(long *)(unaff_x20 + 0x40) < lVar7 - lVar16) {
        func_0x00010001da20(uVar11);
        uVar11 = 2;
      }
      else {
        lVar7 = lVar1;
        FUN_100016b38();
        uVar10 = *(undefined8 *)(unaff_x20 + 0x98);
        uVar3 = *(undefined8 *)(unaff_x20 + 0xa0);
        *(undefined8 *)(unaff_x20 + 0x98) = param_1;
        *(long *)(unaff_x20 + 0xa0) = lVar7;
        FUN_10001ba48(uVar10,uVar3);
        uVar10 = *(undefined8 *)(unaff_x20 + 0x98);
        uVar2 = *(ulong *)(unaff_x20 + 0xa0);
        func_0x00010001bab0(uVar10,uVar2);
        FUN_10001ba48(uVar10,uVar2);
        if (uVar2 >> 0x3c < 0xf) {
          FUN_10001ba48(0,0xf000000000000000);
          func_0x00010001d840(uVar15);
          *(long *)(unaff_x20 + 0xe8) = lVar1;
          if (lVar1 < 1) {
            *(undefined8 *)(unaff_x20 + 0xf0) = 0;
            *(undefined8 *)(unaff_x20 + 0xe8) = 1;
          }
          func_0x00010001da20(uVar15);
          uStack_b0 = *(undefined8 *)(unaff_x20 + 0x48);
          puVar8 = &UNK_100025030;
          _swift_allocObject(&UNK_100025030,0x18,7);
          _swift_weakInit(puVar8 + 0x10);
          uStack_70 = 0x10001bac4;
          puStack_90 = PTR___NSConcreteStackBlock_100024060;
          uStack_88 = 0x42000000;
          pcStack_80 = FUN_1000198f0;
          puStack_78 = &UNK_100025048;
          ppuVar9 = &puStack_90;
          puStack_68 = puVar8;
          __Block_copy();
          ppuStack_b8 = ppuVar9;
          _swift_retain(puVar8);
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar14);
          puStack_98 = PTR___swiftEmptyArrayStorage_100024458;
          uVar15 = 0x100029b10;
          FUN_10001bae8(0x100029b10,PTR___s8Dispatch0A13WorkItemFlagsVMa_1000245e0,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_1000245f0);
          uVar10 = 0x100029b18;
          uStack_c0 = uVar15;
          FUN_100012244(0x100029b18,&UNK_10001ea68);
          uVar15 = 0x100029b20;
          func_0x00010001bb28(0x100029b20,0x100029b18,&UNK_10001ea68);
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (lVar12,&puStack_98,uVar10,uVar15,lVar6,uStack_c0);
          ppuVar9 = ppuStack_b8;
          __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (0,lVar14,lVar12,ppuStack_b8);
          __Block_release(ppuVar9);
          (**(code **)(lStack_a8 + 8))(lVar12,lVar6);
          (**(code **)(lVar13 + 8))(lVar14,lStack_a0);
          puVar4 = puStack_68;
          _swift_release(puVar8);
          _swift_release(puVar4);
          puStack_90 = (undefined *)0x0;
          uStack_88 = 0xe000000000000000;
          __ss11_StringGutsV4growyySiF(0x10);
          _swift_bridgeObjectRelease(uStack_88);
          puStack_90 = (undefined *)0x20676e69646e6553;
          uStack_88 = 0xee0020656d617266;
          puStack_98 = *(undefined **)(unaff_x20 + 0xe8);
          puVar8 = PTR___sSis23CustomStringConvertiblesWP_100024358;
          __ss23CustomStringConvertibleP11descriptionSSvgTj
                    (PTR___sSiN_100024348,PTR___sSis23CustomStringConvertiblesWP_100024358);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(puVar8);
          _swift_bridgeObjectRelease(uStack_88);
          func_0x00010001da20(uVar11);
          uVar11 = 4;
        }
        else {
          func_0x00010001da20(uVar11);
          uVar11 = 3;
        }
      }
    }
  }
  else {
    func_0x00010001da20(uVar11);
    uVar11 = 0;
  }
  return uVar11;
}



/* Entry: 10001af38; end: 10001afc3;  */

void FUN_10001af38(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  lVar2 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar2 != 0) {
    FUN_10001afc4();
    _swift_release(lVar2);
  }
  _swift_beginAccess(param_1 + 0x10,auStack_50,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    if (SCARRY8(*(long *)(param_1 + 0x80),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10001afc4);
      (*pcVar1)();
    }
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
    _swift_release();
  }
  return;
}



/* Entry: 10001afc4; end: 10001b37f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001afc4(long param_1)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong unaff_x19;
  long unaff_x20;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_b8 [32];
  ulong uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  
  lVar11 = *(long *)PTR____stack_chk_guard_100024078;
  if (*(char *)(unaff_x20 + 0x61) != '\x01') goto LAB_10001b31c;
  uVar14 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar12 = *(ulong *)(unaff_x20 + 0x70);
  func_0x00010001bab0(uVar14,uVar12);
  FUN_10001ba48(uVar14,uVar12);
  if (uVar12 >> 0x3c < 0xf) {
    param_1 = 0;
    FUN_10001ba48(0,0xf000000000000000);
  }
  else {
    param_1 = *(long *)(unaff_x20 + 0x90);
    func_0x00010001d840(param_1);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined8 *)(unaff_x20 + 0x70) = *(undefined8 *)(unaff_x20 + 0xa0);
    *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x20 + 0x98);
    *(undefined8 *)(unaff_x20 + 0xa0) = uVar15;
    *(undefined8 *)(unaff_x20 + 0x98) = uVar14;
    func_0x00010001da20();
  }
  unaff_x19 = *(ulong *)(unaff_x20 + 0x70);
  if (0xe < unaff_x19 >> 0x3c) goto LAB_10001b31c;
  param_1 = *(long *)(unaff_x20 + 0x68);
  uVar1 = (uint)(unaff_x19 >> 0x20);
  uVar9 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar9 == 0) {
      uVar12 = unaff_x19 >> 0x30 & 0xff;
    }
    else {
      iVar10 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar10,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10001b36c);
        (*pcVar2)();
      }
      uVar12 = (ulong)(iVar10 - (int)param_1);
LAB_10001b0b0:
      func_0x000100016d6c(param_1,unaff_x19);
    }
  }
  else {
    if (uVar9 == 2) {
      uVar12 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
      if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10001b0a0);
        (*pcVar2)();
      }
      goto LAB_10001b0b0;
    }
    uVar12 = 0;
  }
  lVar3 = *(long *)(unaff_x20 + 0x78);
  lVar7 = uVar12 - lVar3;
  if (SBORROW8(uVar12,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10001b358);
    (*pcVar2)();
  }
  lVar6 = lVar7;
  if (0x3fff < lVar7) {
    lVar6 = 0x4000;
  }
  lVar8 = lVar3 + lVar6;
  if (SCARRY8(lVar3,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10001b35c);
    (*pcVar2)();
  }
  if (lVar8 < lVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10001b360);
    (*pcVar2)();
  }
  __s10Foundation4DataV15_RepresentationOyACSnySiGcig(lVar3,lVar8,param_1,unaff_x19);
  uVar1 = (uint)((ulong)lVar8 >> 0x20);
  uVar9 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar9 == 0) {
LAB_10001b234:
      lVar6 = *(long *)(*(long *)(unaff_x20 + 0x58) + _DAT_100029a98);
      if (lVar6 != 0) goto LAB_10001b24c;
      FUN_100016d2c(lVar3,lVar8);
    }
    else {
      lVar13 = (long)(int)lVar3;
      if (lVar3 >> 0x20 < lVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10001b370);
        (*pcVar2)();
      }
      lVar6 = lVar3;
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (lVar6 != 0) {
        lVar5 = lVar6;
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar13,lVar5)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10001b37c);
          (*pcVar2)();
        }
        lVar6 = (lVar13 - lVar5) + lVar6;
        __s10Foundation13__DataStorageC7_lengthSivg();
        goto joined_r0x00010001b1c4;
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
LAB_10001b2d8:
      FUN_100016d2c(lVar3,lVar8);
    }
LAB_10001b2e4:
    lVar7 = -0x2fffffffffffffe5;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x8000000100020a80);
    FUN_10001ba48(param_1,unaff_x19);
    _objc_release();
    param_1 = lVar7;
  }
  else {
    if (uVar9 != 2) goto LAB_10001b234;
    lVar13 = *(long *)(lVar3 + 0x10);
    lVar5 = *(long *)(lVar3 + 0x18);
    lVar6 = lVar3;
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (lVar6 != 0) {
      lVar4 = lVar6;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar13,lVar4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10001b378);
        (*pcVar2)();
      }
      lVar6 = (lVar13 - lVar4) + lVar6;
    }
    if (SBORROW8(lVar5,lVar13)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10001b374);
      (*pcVar2)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
joined_r0x00010001b1c4:
    if ((lVar6 == 0) ||
       (lVar6 = *(long *)(*(long *)(unaff_x20 + 0x58) + _DAT_100029a98), lVar6 == 0))
    goto LAB_10001b2d8;
LAB_10001b24c:
    func_0x00010001da40();
    FUN_100016d2c(lVar3,lVar8);
    if (lVar6 < 1) goto LAB_10001b2e4;
    FUN_10001ba48(param_1,unaff_x19);
    if (SCARRY8(*(long *)(unaff_x20 + 0x78),lVar6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10001b364);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + 0x78) = *(long *)(unaff_x20 + 0x78) + lVar6;
    if (SBORROW8(lVar7,lVar6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10001b368);
      (*pcVar2)();
    }
    if (lVar7 == lVar6) {
      *(undefined8 *)(unaff_x20 + 0x78) = 0;
      param_1 = *(long *)(unaff_x20 + 0x68);
      uVar14 = *(undefined8 *)(unaff_x20 + 0x70);
      *(undefined8 *)(unaff_x20 + 0x70) = 0xf000000000000000;
      *(undefined8 *)(unaff_x20 + 0x68) = 0;
      FUN_10001ba48(param_1,uVar14);
    }
  }
  *(undefined1 *)(unaff_x20 + 0x61) = 0;
LAB_10001b31c:
  if (*(long *)PTR____stack_chk_guard_100024078 != lVar11) {
    ___stack_chk_fail();
    pcStack_88 = FUN_10001b380;
    uStack_98 = unaff_x19;
    puStack_90 = &stack0xfffffffffffffff0;
    _swift_beginAccess(param_1 + 0x10,auStack_b8,0,0);
    param_1 = param_1 + 0x10;
    _swift_weakLoadStrong();
    if (param_1 != 0) {
      *(undefined1 *)(param_1 + 0x61) = 1;
      FUN_10001afc4();
      _swift_release(param_1);
    }
    return;
  }
  return;
}



/* Entry: 10001b380; end: 10001b3db;  */

void FUN_10001b380(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x61) = 1;
    FUN_10001afc4();
    _swift_release(param_1);
  }
  return;
}



/* Entry: 10001b3dc; end: 10001b60f;  */

void FUN_10001b3dc(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 != 0) {
    if (0 < param_2) {
      func_0x00010001bd34(param_3 + 0xb8,*(undefined8 *)(param_3 + 0xd0));
      FUN_100014610(param_1,param_2);
      plVar1 = (long *)(param_3 + 0xb8);
      func_0x00010001bd34(plVar1,*(undefined8 *)(param_3 + 0xd0));
      lVar2 = *(long *)(*plVar1 + 0x10);
      if ((lVar2 != 0) && (_CFHTTPMessageIsHeaderComplete(), (int)lVar2 != 0)) {
        FUN_10001b610();
        plVar1 = (long *)(param_3 + 0xb8);
        func_0x00010001bd34(plVar1,*(undefined8 *)(param_3 + 0xd0));
        uVar3 = *(undefined8 *)(*plVar1 + 0x10);
        *(undefined8 *)(*plVar1 + 0x10) = 0;
        _swift_release(param_3);
        _objc_release(uVar3);
        return;
      }
    }
    _swift_release(param_3);
  }
  return;
}



/* Entry: 10001b610; end: 10001b86f;  */

void FUN_10001b610(void)

{
  char *pcVar1;
  long *plVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0xd0);
  plVar2 = (long *)(unaff_x20 + 0xb8);
  func_0x00010001bd34(plVar2,uVar5);
  lVar9 = *(long *)(*plVar2 + 0x10);
  ppuVar3 = &PTR____CFConstantStringClassReference_100025400;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar4 = lVar9;
  _objc_retain(lVar9);
  FUN_100016dac(lVar9,ppuVar3,uVar5);
  _objc_release(lVar4);
  _swift_bridgeObjectRelease(uVar5);
  if (((uint)ppuVar3 & 0xff) == 1) {
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x20 + 0xe0);
  func_0x00010001d840(uVar5);
  if (lVar9 < 1 || *(long *)(unaff_x20 + 0xe8) < lVar9) {
    __ss11_StringGutsV4growyySiF(0x14);
    _swift_bridgeObjectRelease(0xe000000000000000);
    pcVar1 = "invalid frame ack ";
    uStack_50 = 0xd000000000000012;
LAB_10001b724:
    uStack_48 = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_100024358;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100024348,PTR___sSis23CustomStringConvertiblesWP_100024358);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar6);
  }
  else {
    if (lVar9 == *(long *)(unaff_x20 + 0xf0)) {
      __ss11_StringGutsV4growyySiF(0x1f);
      _swift_bridgeObjectRelease(0xe000000000000000);
      pcVar1 = "received duplicate frame ack ";
      uStack_50 = 0xd00000000000001d;
      goto LAB_10001b724;
    }
    if (*(long *)(unaff_x20 + 0xf0) <= lVar9) {
      *(long *)(unaff_x20 + 0xf0) = lVar9;
      goto LAB_10001b770;
    }
    __ss11_StringGutsV4growyySiF(0x2c);
    _swift_bridgeObjectRelease(0xe000000000000000);
    puVar8 = PTR___sSis23CustomStringConvertiblesWP_100024358;
    puVar6 = PTR___sSiN_100024348;
    uStack_50 = 0xd000000000000020;
    uStack_48 = 0x8000000100020ae0;
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_100024358;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100024348,PTR___sSis23CustomStringConvertiblesWP_100024358);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar7);
    __sSS6appendyySSF(0x3a7473616c2820,0xe700000000000000);
    __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar6,puVar8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar8);
    __sSS6appendyySSF(0x29,0xe100000000000000);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_50,uStack_48);
  _objc_release();
  _swift_bridgeObjectRelease(uStack_48);
LAB_10001b770:
  func_0x00010001da20(uVar5);
  return;
}



/* Entry: 10001b870; end: 10001b903;  */

void FUN_10001b870(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  uVar1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    FUN_10001b904();
    _swift_release(uVar1);
    if ((uVar2 & 1) != 0) {
      _swift_beginAccess(param_1 + 0x10,auStack_60,0,0);
      param_1 = param_1 + 0x10;
      _swift_weakLoadStrong();
      if (param_1 != 0) {
        FUN_10001a6e4();
        _swift_release(param_1);
      }
    }
  }
  return;
}



/* Entry: 10001b904; end: 10001ba47;  */

char FUN_10001b904(void)

{
  undefined8 uVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
  func_0x00010001d840(uVar5);
  cVar3 = *(char *)(unaff_x20 + 0xa8);
  if ((cVar3 == '\x01') && (lVar4 = *(long *)(unaff_x20 + 0xb0), lVar4 != 0)) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
    uVar2 = *(ulong *)(unaff_x20 + 0xa0);
    if (0xe < uVar2 >> 0x3c) {
      _objc_retain();
      func_0x00010001bab0(uVar1,uVar2);
      FUN_10001ba48(uVar1,uVar2);
      func_0x00010001da20(uVar5);
      if (*(long *)(unaff_x20 + 0x88) == *(long *)(unaff_x20 + 0x80)) {
        uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
        uVar2 = *(ulong *)(unaff_x20 + 0x70);
        func_0x00010001bab0(uVar5,uVar2);
        if (uVar2 >> 0x3c < 0xf) {
          _objc_release(lVar4);
          FUN_10001ba48(uVar5,uVar2);
          FUN_10001ba48(0,0xf000000000000000);
          goto LAB_10001ba04;
        }
        FUN_10001ba48(uVar5,uVar2);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x8000000100020aa0)
        ;
        _objc_release();
        FUN_10001ab30(lVar4);
      }
      _objc_release(lVar4);
      goto LAB_10001ba04;
    }
    func_0x00010001bab0(uVar1,uVar2);
    FUN_10001ba48(uVar1,uVar2);
    FUN_10001ba48(0,0xf000000000000000);
  }
  func_0x00010001da20(uVar5);
LAB_10001ba04:
  *(undefined8 *)(unaff_x20 + 0x88) = *(undefined8 *)(unaff_x20 + 0x80);
  return cVar3;
}



/* Entry: 10001ba48; end: 10001ba7b;  */

void FUN_10001ba48(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release();
  }
                    /* WARNING: Could not recover jumptable at 0x00010001d57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024528)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10001ba7c; end: 10001ba9f;  */

void FUN_10001ba7c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010001d4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000244a8)();
  return;
}



/* Entry: 10001baa0; end: 10001bae7;  */

void FUN_10001baa0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  code *pcVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010001d840(*(undefined8 *)(lVar1 + 0x90));
    *(undefined1 *)(lVar1 + 0xa8) = 1;
    _swift_beginAccess(lVar1 + 0x10,auStack_60,0,0);
    pcVar3 = *(code **)(lVar1 + 0x10);
    if (pcVar3 != (code *)0x0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      _swift_retain(uVar2);
      (*pcVar3)(1);
      FUN_100019a98(pcVar3,uVar2);
    }
    if (*(char *)(lVar1 + 0x60) == '\x01') {
      FUN_10001a6e4();
    }
    func_0x00010001da20(*(undefined8 *)(lVar1 + 0x90));
    _swift_release(lVar1);
  }
  return;
}



/* Entry: 10001bae8; end: 10001bb6b;  */

void FUN_10001bae8(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10001bb6c; end: 10001bb6f;  */

void FUN_10001bb6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000100029b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10001ead0;
  _swift_getWitnessTable(&UNK_10001ead0,&UNK_1000250f0);
  puRam0000000100029b58 = puVar1;
  return;
}



/* Entry: 10001bb70; end: 10001bbcf;  */

void FUN_10001bb70(void)

{
  undefined *puVar1;
  
  if (puRam0000000100029b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10001ead0;
  _swift_getWitnessTable(&UNK_10001ead0,&UNK_1000250f0);
  puRam0000000100029b58 = puVar1;
  return;
}



/* Entry: 10001bbd0; end: 10001bd97;  */

int FUN_10001bbd0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10001bc4c;
        goto LAB_10001bc30;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10001bc30:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_10001bc4c:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10001bd98; end: 10001be0f; -[SCTalkFrameRateFilter initWithFpsLimit:] */

void FUN_10001bd98(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  puStack_28 = PTR_PTR_100029030;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_100028e48);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar2 + 8) = 0xffffffffffffffff;
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar1 = 0;
      if (param_3 != 0) {
        uVar1 = 1000000 / param_3;
      }
      uVar3 = (ulong)uVar1;
    }
    *(ulong *)((long)puVar2 + 0x10) = uVar3;
    *(ulong *)((long)puVar2 + 0x18) = uVar3 / 0x14;
  }
  return;
}



/* Entry: 10001be10; end: 10001be3f; -[SCTalkFrameRateFilter shouldDropFrame:] */

bool FUN_10001be10(long param_1,undefined8 param_2,ulong param_3)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 8) != -1)) {
    return param_3 < (ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x18));
  }
  return false;
}



/* Entry: 10001be40; end: 10001be9f; -[SCTalkFrameRateFilter onFrameOutput:] */

void FUN_10001be40(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if ((lVar2 != 0) &&
     ((*(long *)(param_1 + 8) == -1 ||
      (uVar1 = *(long *)(param_1 + 8) + lVar2, *(ulong *)(param_1 + 8) = uVar1, uVar1 <= param_3))))
  {
    *(ulong *)(param_1 + 8) = lVar2 + param_3;
  }
  return;
}



/* Entry: 10001bea0; end: 10001bf2b; +[SCScreenCaptureConfigUtils getCurrentUserId] */

void FUN_10001bea0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___SCAppExtensionStorageServiceImpl_100029028;
  func_0x00010001d960(PTR__OBJC_CLASS___SCAppExtensionStorageServiceImpl_100029028);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010001d640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010001da00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010001d9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001d3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000241b0)(puVar4);
  return;
}



/* Entry: 10001bf2c; end: 10001bffb;  */

void FUN_10001bf2c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = (&PTR_PTR_100025160)[param_1 * 4];
  _objc_retain(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001d3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000241b0)(puVar1);
  return;
}



/* Entry: 10001bffc; end: 10001c23f;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10001bffc(long param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar13 = 0;
  bVar6 = false;
  lVar3 = 0xc0;
  if ((*(uint *)(param_1 + 0x20) & 0x1000000) != 0) {
    lVar3 = 0xd0;
  }
  puVar2 = (ulong *)(param_1 + lVar3 + ((ulong)(*(uint *)(param_1 + 0x20) >> 0x17) & 8));
  plVar1 = (long *)(param_2 + 0x50);
  uVar10 = *puVar2;
LAB_10001c080:
  uVar12 = uVar10 & 3;
  if (uVar12 == 0) {
    func_0x00010001cb38(param_2);
  }
  else if (uVar12 != 3) {
    FUN_10001caf0(param_1);
    if (!bVar6) {
      return uVar12;
    }
    do {
      lVar3 = *plVar1;
      uVar13 = *(ulong *)(param_2 + 0x58);
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar3;
        *(ulong *)(param_2 + 0x58) = uVar13;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar9 = (uint)uVar13;
    while ((uVar9 >> 9 & 1) == 0) {
      uVar10 = uVar13 | 0x800;
      if (((uint)uVar13 >> 10 & 1) != 0) {
        uVar10 = uVar13 & 0xfffffffffffff9ff | 0x800;
        *(char *)(param_2 + 0x21) = (char)uVar13;
      }
      do {
        while( true ) {
          lVar4 = *plVar1;
          uVar11 = *(ulong *)(param_2 + 0x58);
          cVar7 = lVar4 != lVar3;
          if (uVar11 != uVar13) {
            cVar7 = cVar7 + '\x01';
          }
          if (cVar7 == '\0') break;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(ulong *)(param_2 + 0x58) = uVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_10001c1dc;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_10001c1dc:
      if (lVar4 == lVar3 && uVar11 == uVar13) goto LAB_10001c200;
      lVar3 = lVar4;
      uVar13 = uVar11;
      uVar9 = (uint)uVar11;
    }
    func_0x00010001c460(param_2);
LAB_10001c200:
    func_0x00010001c8c8(param_2);
    func_0x00010001cc44(param_2 + 0x80);
    return uVar12;
  }
  if (!bVar6) {
    param_3[3] = 0;
    param_3[4] = param_6;
    *param_3 = param_5;
    param_3[1] = param_4;
    do {
      lVar3 = *plVar1;
      uVar12 = *(ulong *)(param_2 + 0x58);
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar3;
        *(ulong *)(param_2 + 0x58) = uVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar9 = (uint)uVar12;
    while ((uVar9 >> 9 & 1) == 0) {
      if (((uint)uVar12 >> 10 & 1) == 0) {
        uVar11 = uVar12 & 0xfffffffffffff5ff;
      }
      else {
        uVar11 = uVar12 & 0xfffffffffffff1ff;
        *(char *)(param_2 + 0x21) = (char)uVar12;
      }
      do {
        while( true ) {
          lVar4 = *plVar1;
          uVar5 = *(ulong *)(param_2 + 0x58);
          cVar7 = lVar4 != lVar3;
          if (uVar5 != uVar12) {
            cVar7 = cVar7 + '\x01';
          }
          if (cVar7 == '\0') break;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(ulong *)(param_2 + 0x58) = uVar5;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_10001c104;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_10001c104:
      if (lVar4 == lVar3 && uVar5 == uVar12) goto LAB_10001c128;
      lVar3 = lVar4;
      uVar12 = uVar5;
      uVar9 = (uint)uVar5;
    }
    func_0x00010001c5c0(param_2);
LAB_10001c128:
    func_0x00010001cc8c(param_2 + 0x80);
    func_0x00010001c8f4(param_2);
  }
  do {
    uVar12 = *(ulong *)(param_2 + 0x58);
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = *plVar1;
      *(ulong *)(param_2 + 0x58) = uVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  uVar12 = uVar12 & 0xff;
  if (uVar13 < uVar12) {
    FUN_10001c720(param_1,uVar12);
    uVar13 = uVar12;
  }
  *(ulong *)(param_2 + 0x10) = uVar10 & 0xfffffffffffffffc;
  uVar12 = *puVar2;
  if (uVar12 == uVar10) {
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = param_2;
      cVar7 = ExclusiveMonitorsStatus();
    }
    bVar8 = cVar7 == '\0';
  }
  else {
    bVar8 = false;
    ClearExclusiveLocal();
  }
  bVar6 = true;
  uVar10 = uVar12;
  if (bVar8) {
    func_0x00010001c894();
    return 0;
  }
  goto LAB_10001c080;
}


