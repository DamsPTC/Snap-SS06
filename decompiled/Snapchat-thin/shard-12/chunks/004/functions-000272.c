/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10909dd6c; end: 10909ddab; -[SCNeoMediaDemuxer didReachEndOfStreamForTrackId:] */

undefined8 FUN_10909dd6c(undefined8 param_1)

{
  func_0x00010bec5340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78e60();
  func_0x00010909e0e0();
  return param_1;
}



/* Entry: 10909ddac; end: 10909df07; -[SCNeoMediaDemuxer dequeueNextSampleBufferForTrackId:error:] */

void FUN_10909ddac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar4 = param_1;
  func_0x00010bec5340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f20218;
    FUN_109096480(&PTR____CFConstantStringClassReference_110f20218,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    lVar4 = 0;
    *param_4 = ppuVar2;
  }
  else {
    func_0x00010bf6dfc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      func_0x00010bf99fe0(*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf76320();
      func_0x00010909e100();
      lVar4 = 0;
    }
    else {
      lVar1 = lVar4;
      func_0x00010bf1d2a0();
      if (lVar1 != 0) {
        func_0x00010bf1d2a0(lVar4);
        _CMBlockBufferGetDataLength();
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf99fe0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10f700(auStack_58,lVar4);
      func_0x00010bf747e0(uVar3);
      func_0x00010909e100();
    }
  }
  func_0x00010909e0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10909df08; end: 10909df57; -[SCNeoMediaDemuxer bufferLocationForTrackId:] */

undefined1  [16] FUN_10909df08(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00010bec5340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21ce0();
  func_0x00010909e0e0();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 10909df58; end: 10909df5f; -[SCNeoMediaDemuxer bufferParseLocation] */

void FUN_10909df58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf21d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_bufferParseLocation_1125a60f0);
  return;
}



/* Entry: 10909df60; end: 10909df67; -[SCNeoMediaDemuxer trackInfos] */

void FUN_10909df60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c277fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_trackInfos_11267ba10)
  ;
  return;
}



/* Entry: 10909df68; end: 10909df6f; -[SCNeoMediaDemuxer trackInfoForTrackId:] */

void FUN_10909df68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c277f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_trackInfoForTrackId__11267ba08);
  return;
}



/* Entry: 10909df70; end: 10909e017; -[SCNeoMediaDemuxer durationForTrackId:] */

void FUN_10909df70(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_2 + 0x10);
  func_0x00010c1583e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__kCMTimeZero_110348670;
  if (lVar3 == 0) {
    uVar5 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *param_1 = uVar5;
    param_1[2] = *(undefined8 *)(puVar2 + 0x10);
  }
  else {
    lVar4 = *(long *)(param_2 + 0x10);
    func_0x00010c1497e0(lVar4,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    if (lVar4 != 0) {
      lVar1 = lVar4;
    }
    func_0x00010bf8b160(param_1,lVar1);
    func_0x00010909e0f0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10909e018; end: 10909e057; -[SCNeoMediaDemuxer bitrateForTrackId:] */

void FUN_10909e018(long param_1)

{
  func_0x00010c1497e0(*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1c7c0();
  FUN_10909e0d4();
  return;
}



/* Entry: 10909e058; end: 10909e05f; -[SCNeoMediaDemuxer requiresParseAtCurrentLocation] */

void FUN_10909e058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1379b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_requiresParseAtCurrentLocation_11262b888);
  return;
}



/* Entry: 10909e060; end: 10909e067; -[SCNeoMediaDemuxer loadedTrackInfos] */

void FUN_10909e060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09ca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_loadedTrackInfos_112604cb0);
  return;
}



/* Entry: 10909e068; end: 10909e06f; -[SCNeoMediaDemuxer loadedSegmentInfos] */

void FUN_10909e068(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09ca50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_loadedSegmentInfos_112604ca0);
  return;
}



/* Entry: 10909e070; end: 10909e077; -[SCNeoMediaDemuxer loadedByteRanges] */

undefined8 FUN_10909e070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10909e078; end: 10909e07f; -[SCNeoMediaDemuxer loadedTimeRanges] */

undefined8 FUN_10909e078(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10909e080; end: 10909e0d3; -[SCNeoMediaDemuxer .cxx_destruct] */

void FUN_10909e080(long param_1)

{
  func_0x00010909e0f8(param_1 + 0x38);
  func_0x00010909e0f8(param_1 + 0x30);
  func_0x00010909e0f8(param_1 + 0x28);
  func_0x00010909e0f8(param_1 + 0x20);
  func_0x00010909e0f8(param_1 + 0x18);
  func_0x00010909e0f8(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10909e0d4; end: 10909e117;  */

void FUN_10909e0d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10909e118; end: 10909ef5f; +[SCNeoMediaHLSPlaylist playlistWithData:baseURL:error:] */

void FUN_10909e118(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 extraout_x9;
  undefined8 uVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long unaff_x23;
  undefined **unaff_x24;
  double dVar14;
  double dVar15;
  double dVar16;
  long lStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_b8;
  long lStack_b0;
  
  _objc_retain(param_4);
  func_0x00010909f6c4();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  func_0x00010c008340();
  ppuVar2 = (undefined **)PTR_PTR_1126dd408;
  _objc_alloc();
  func_0x00010c04e820();
  ppuVar3 = ppuVar2;
  func_0x00010c0f4660();
  if (((ulong)ppuVar3 & 1) != 0) {
    func_0x00010909f708();
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b8 = (undefined **)0x0;
    func_0x00010909f720();
    dVar14 = 0.0;
    dVar15 = 0.0;
    dVar16 = 0.0;
    ppuVar13 = param_5;
LAB_10909e204:
    do {
      ppuVar5 = ppuVar2;
      func_0x00010c06c740();
      if (((ulong)ppuVar5 & 1) != 0) {
LAB_10909ebb0:
        ppuVar13 = ppuVar2;
        func_0x00010bf987e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (ppuVar13 == (undefined **)0x0) {
          puVar12 = PTR_PTR_1126dd428;
          _objc_alloc(PTR_PTR_1126dd428);
          func_0x00010bf51e00(unaff_x23);
          func_0x00010bf51e00(lStack_f0);
          func_0x00010bf51e00(lStack_b0);
          func_0x00010bf51e00(ppuStack_e8);
          func_0x00010c0606c0(dVar14,puVar12);
          func_0x00010909f664();
          func_0x00010909f698();
          func_0x00010909f678();
          func_0x00010909f6a8();
        }
        else {
          func_0x00010bf987e0();
          _objc_retainAutoreleasedReturnValue();
LAB_10909ebdc:
          _objc_autorelease();
          puVar12 = (undefined *)0x0;
          *param_6 = ppuVar2;
        }
        goto LAB_10909ec60;
      }
      ppuVar5 = ppuVar2;
      func_0x00010c0d9fa0();
      if ((int)ppuVar5 == 0) {
        ppuVar13 = ppuVar2;
        func_0x00010c0f4620();
        lVar6 = 0;
        _objc_retain();
        func_0x00010909f6d4();
        if ((int)ppuVar13 != 0) {
          func_0x00010909f714();
          func_0x00010bdc34c0();
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x24 == (undefined **)0x0) {
            if (lStack_b0 == 0) {
              func_0x00010909f708();
              func_0x00010bf09f00();
              _objc_retainAutoreleasedReturnValue();
              lStack_b0 = lVar6;
            }
            ppuVar13 = (undefined **)PTR_PTR_1126dd420;
            _objc_alloc();
            param_1 = dVar15;
            func_0x00010c057c80(dVar15,dVar16);
            func_0x00010befa120(lStack_b0);
            func_0x00010909f670();
            dVar15 = dVar15 + dVar16;
            func_0x00010909f700();
            dVar16 = 0.0;
          }
          else {
            if (unaff_x23 == 0) {
              func_0x00010909f708();
              func_0x00010bf09f00();
              _objc_retainAutoreleasedReturnValue();
              unaff_x23 = lVar6;
            }
            ppuVar13 = (undefined **)PTR_PTR_1126dd418;
            _objc_alloc();
            func_0x00010c057a00();
            func_0x00010befa120(unaff_x23);
            func_0x00010909f670();
          }
          goto LAB_10909e38c;
        }
LAB_10909eba0:
        func_0x00010c0e3f00(ppuVar2);
        goto LAB_10909ebb0;
      }
      ppuVar5 = ppuVar2;
      func_0x00010c0f4680();
    } while (((ulong)ppuVar5 & 1) != 0);
    ppuVar5 = ppuVar2;
    func_0x00010909f6cc();
    if ((int)ppuVar5 == 0) {
      ppuVar5 = ppuVar2;
      func_0x00010909f6cc();
      if ((int)ppuVar5 != 0) {
        func_0x00010909f6e4();
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        FUN_10909ef60();
        goto LAB_10909e38c;
      }
      ppuVar5 = ppuVar2;
      func_0x00010c0f4660();
      if (((ulong)ppuVar5 & 1) != 0) goto LAB_10909e204;
      ppuVar5 = ppuVar2;
      func_0x00010909f690();
      if ((int)ppuVar5 != 0) {
        ppuStack_b8 = ppuVar4;
        FUN_10909f03c(ppuVar4,param_5,param_6);
        _objc_retainAutoreleasedReturnValue();
LAB_10909e410:
        func_0x00010909f6f0();
        ppuVar13 = ppuStack_b8;
joined_r0x00010909e5ac:
        if (ppuVar13 == (undefined **)0x0) goto LAB_10909ecec;
        goto LAB_10909e204;
      }
      ppuVar5 = ppuVar2;
      func_0x00010909f690();
      if ((int)ppuVar5 != 0) {
        func_0x00010909f6b8();
        func_0x00010909f748();
        func_0x00010909f77c();
        FUN_10909f53c();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar5 == (undefined **)0x0) {
          ppuVar13 = (undefined **)0x0;
          uVar11 = 0;
        }
        else {
          func_0x00010909f714();
          func_0x00010bdc34c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar13 != (undefined **)0x0) {
            FUN_10909ef60();
          }
          ppuVar13 = (undefined **)PTR_PTR_1126dd438;
          _objc_alloc();
          func_0x00010c0578c0();
          func_0x00010909f768();
          func_0x00010909f698();
          uVar11 = extraout_x9;
        }
        _objc_release(uVar11);
        func_0x00010909f6b0();
        func_0x00010909f6dc();
        func_0x00010909f760();
        goto joined_r0x00010909e5ac;
      }
      ppuVar5 = ppuVar2;
      func_0x00010909f6cc();
      if ((int)ppuVar5 != 0) {
        ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSISO8601DateFormatter_1126dd410;
        _objc_opt_new();
        func_0x00010909f6e4();
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf65160();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010909f700();
        func_0x00010909f670();
        goto LAB_10909e38c;
      }
      ppuVar5 = ppuVar2;
      func_0x00010909f690();
      if (((ulong)ppuVar5 & 1) != 0) goto LAB_10909e204;
      ppuVar5 = ppuVar2;
      func_0x00010909f6cc();
      if ((int)ppuVar5 != 0) {
        func_0x00010909f6e4();
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        dVar14 = param_1;
        goto LAB_10909e38c;
      }
      ppuVar5 = ppuVar2;
      func_0x00010909f6cc();
      if ((int)ppuVar5 != 0) {
        func_0x00010909f6e4();
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        goto LAB_10909e38c;
      }
      ppuVar5 = ppuVar2;
      func_0x00010c0f4660();
      if (((ulong)ppuVar5 & 1) != 0) goto LAB_10909e204;
      ppuVar5 = ppuVar2;
      func_0x00010c0f4660();
      if (((ulong)ppuVar5 & 1) != 0) goto LAB_10909ebb0;
      ppuVar5 = ppuVar2;
      func_0x00010909f6cc();
      if ((int)ppuVar5 != 0) {
        func_0x00010909f6e4();
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        ppuVar7 = ppuVar5;
        func_0x00010909f678();
        ppuVar13 = ppuVar5;
        if (((ulong)ppuVar5 & 1) == 0) {
          func_0x00010909f6e4();
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          func_0x00010909f678();
          ppuVar13 = ppuVar7;
          if (((ulong)ppuVar7 & 1) == 0) {
            ppuVar2 = &PTR____CFConstantStringClassReference_110f20458;
            FUN_109096480(&PTR____CFConstantStringClassReference_110f20458,0);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10909ebdc;
          }
        }
        goto LAB_10909e204;
      }
      ppuVar5 = ppuVar2;
      func_0x00010c0f4660();
      if (((ulong)ppuVar5 & 1) != 0) goto LAB_10909e204;
      ppuVar5 = ppuVar2;
      func_0x00010909f690();
      if ((int)ppuVar5 == 0) {
        ppuVar5 = ppuVar2;
        func_0x00010909f690();
        if ((int)ppuVar5 != 0) {
          ppuVar13 = ppuVar4;
          FUN_10909f280(ppuVar4,param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010909f738();
          unaff_x24 = ppuVar13;
          goto joined_r0x00010909e5ac;
        }
        ppuVar5 = ppuVar2;
        func_0x00010909f690();
        if ((int)ppuVar5 != 0) {
          func_0x00010909f6b8();
          ppuVar5 = ppuStack_b8;
          _objc_retain();
          func_0x00010909f748();
          func_0x00010909f77c();
          FUN_10909f53c();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar5 == (undefined **)0x0) {
            puVar12 = (undefined *)0x0;
          }
          else {
            func_0x00010909f714();
            func_0x00010bdc34c0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar13 = ppuVar4;
            FUN_10909f280(ppuVar4,param_6);
            _objc_retainAutoreleasedReturnValue();
            if (ppuVar13 == (undefined **)0x0) {
              puVar12 = (undefined *)0x0;
            }
            else {
              puVar12 = PTR_PTR_1126dd418;
              _objc_alloc();
              func_0x00010c057a00();
            }
            func_0x00010909f670();
            func_0x00010909f6f8();
          }
          func_0x00010909f678();
          func_0x00010909f6b0();
          func_0x00010909f6f0();
          func_0x00010909f6dc();
          if (puVar12 != (undefined *)0x0) {
            if (lStack_f0 == 0) {
              func_0x00010909f708();
              func_0x00010bf09f00();
              _objc_retainAutoreleasedReturnValue();
            }
            func_0x00010befa120();
            goto LAB_10909e38c;
          }
          goto LAB_10909ecec;
        }
        ppuVar5 = ppuVar2;
        func_0x00010909f690();
        if (((ulong)ppuVar5 & 1) == 0) {
          ppuVar5 = ppuVar2;
          func_0x00010909f690();
          if ((int)ppuVar5 != 0) {
            ppuStack_b8 = ppuVar4;
            FUN_10909f03c(ppuVar4,param_5,param_6);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10909e410;
          }
          ppuVar5 = ppuVar2;
          func_0x00010c0f4660();
          if ((((ulong)ppuVar5 & 1) == 0) &&
             (ppuVar5 = ppuVar2, func_0x00010909f690(), ((ulong)ppuVar5 & 1) == 0))
          goto LAB_10909eba0;
        }
        goto LAB_10909e204;
      }
      if (ppuStack_e8 == (undefined **)0x0) {
        func_0x00010909f708();
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_e8 = ppuVar5;
      }
      func_0x00010909f6b8();
      func_0x00010909f748();
      FUN_10909f53c(ppuVar13,&PTR____CFConstantStringClassReference_110e2dc78,param_6);
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar13 == (undefined **)0x0) {
        puVar12 = (undefined *)0x0;
      }
      else {
        ppuVar5 = ppuVar13;
        func_0x00010c0720c0();
        if ((((((ulong)ppuVar5 & 1) == 0) &&
             (ppuVar5 = ppuVar13, func_0x00010c0720c0(), ((ulong)ppuVar5 & 1) == 0)) &&
            (ppuVar5 = ppuVar13, func_0x00010c0720c0(), ((ulong)ppuVar5 & 1) == 0)) &&
           (ppuVar5 = ppuVar13, func_0x00010c0720c0(), ((ulong)ppuVar5 & 1) == 0)) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110f206d8;
          FUN_109096480(&PTR____CFConstantStringClassReference_110f206d8,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          puVar12 = (undefined *)0x0;
          *param_6 = ppuVar5;
        }
        else {
          ppuVar5 = ppuVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar5 != (undefined **)0x0) {
            func_0x00010909f714();
            func_0x00010bdc34c0();
            _objc_retainAutoreleasedReturnValue();
          }
          ppuVar5 = ppuVar4;
          FUN_10909f53c(ppuVar4,&PTR____CFConstantStringClassReference_110f206f8,param_6);
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar5 == (undefined **)0x0) {
            puVar12 = (undefined *)0x0;
          }
          else {
            ppuVar5 = ppuVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar8 = ppuVar4;
            FUN_10909f53c(ppuVar4,&PTR____CFConstantStringClassReference_110e6c918,param_6);
            _objc_retainAutoreleasedReturnValue();
            if (ppuVar8 == (undefined **)0x0) {
              puVar12 = (undefined *)0x0;
            }
            else {
              FUN_10909f604(ppuVar4,&PTR____CFConstantStringClassReference_110db00f8);
              FUN_10909f604(ppuVar4,&PTR____CFConstantStringClassReference_110f20758);
              FUN_10909f604(ppuVar4,&PTR____CFConstantStringClassReference_110f20778);
              ppuVar9 = ppuVar4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar10 = ppuVar4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf44740();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar12 = PTR_PTR_1126dd440;
              _objc_alloc();
              func_0x00010c056360();
              func_0x00010909f670();
              func_0x00010909f678();
              _objc_release(ppuVar10);
              _objc_release(ppuVar9);
            }
            _objc_release(ppuVar8);
            _objc_release(ppuVar7);
            _objc_release(ppuVar5);
          }
          _objc_release();
          func_0x00010909f6f8();
          func_0x00010909f768();
        }
      }
      func_0x00010909f670();
      func_0x00010909f6b0();
      func_0x00010909f6dc();
      if (puVar12 == (undefined *)0x0) goto LAB_10909ecec;
      func_0x00010befa120(ppuStack_e8);
    }
    else {
      func_0x00010909f6e4();
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar16 = param_1;
    }
LAB_10909e38c:
    func_0x00010909f698();
    goto LAB_10909e204;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f20258;
  FUN_109096480(&PTR____CFConstantStringClassReference_110f20258,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  puVar12 = (undefined *)0x0;
  *param_6 = ppuVar2;
LAB_10909ec9c:
  func_0x00010909f688();
  _objc_release(puVar1);
  func_0x00010909f6b0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
LAB_10909ecec:
  puVar12 = (undefined *)0x0;
LAB_10909ec60:
  func_0x00010909f6dc();
  _objc_release(ppuVar3);
  func_0x00010909f6d4();
  func_0x00010909f760();
  func_0x00010909f6f0();
  func_0x00010909f700();
  func_0x00010909f738();
  _objc_release(ppuStack_e8);
  _objc_release(lStack_b0);
  _objc_release(lStack_f0);
  func_0x00010909f6a0();
  goto LAB_10909ec9c;
}



/* Entry: 10909ef60; end: 10909f03b;  */

undefined1  [16] FUN_10909ef60(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  undefined1 auVar2 [16];
  
  lVar1 = param_2;
  func_0x00010909f758();
  func_0x00010c11f420();
  if (lVar1 == 0) {
    func_0x00010c067fc0();
  }
  else {
    lVar1 = unaff_x19;
    func_0x00010c260c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010c067fc0(lVar1);
    func_0x00010909f6a0();
    func_0x00010909f6a8();
    param_2 = unaff_x19;
    unaff_x19 = lVar1;
  }
  func_0x00010909f680();
  auVar2._8_8_ = unaff_x19;
  auVar2._0_8_ = param_2;
  return auVar2;
}



/* Entry: 10909f03c; end: 10909f27f;  */

void FUN_10909f03c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong unaff_x19;
  undefined *puVar3;
  
  func_0x00010909f758();
  func_0x00010909f6c4();
  uVar1 = unaff_x19;
  FUN_10909f53c();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
LAB_10909f1c8:
    puVar3 = (undefined *)0x0;
    goto LAB_10909f1cc;
  }
  func_0x00010909f740();
  if ((uVar1 & 1) == 0) {
    func_0x00010909f740();
    if (((uVar1 & 1) == 0) && (func_0x00010909f740(), (uVar1 & 1) == 0)) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110f205f8;
      FUN_109096480(&PTR____CFConstantStringClassReference_110f205f8,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar3 = (undefined *)0x0;
      *param_3 = ppuVar2;
      goto LAB_10909f1cc;
    }
    FUN_10909f53c();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x19 == 0) goto LAB_10909f1c8;
LAB_10909f118:
    func_0x00010909f714();
    func_0x00010bdc34c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x19 != 0) goto LAB_10909f118;
  }
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dd430;
  _objc_alloc(PTR_PTR_1126dd430);
  func_0x00010c02bd00();
  func_0x00010909f698();
  func_0x00010909f678();
  func_0x00010909f6d4();
  func_0x00010909f6a0();
  func_0x00010909f688();
LAB_10909f1cc:
  func_0x00010909f6a8();
  func_0x00010909f670();
  func_0x00010909f680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10909f280; end: 10909f53b;  */

void FUN_10909f280(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x19;
  long lVar3;
  
  func_0x00010909f758();
  lVar3 = unaff_x19;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    if (lVar3 != 2) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      FUN_109096480();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      lVar3 = 0;
      *param_2 = puVar2;
      goto LAB_10909f490;
    }
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010909f688();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010909f688();
    func_0x00010909f6a8();
  }
  lVar1 = unaff_x19;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = unaff_x19;
  FUN_10909f53c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf44740(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0(lVar3);
    func_0x00010c067fc0(unaff_x19);
    _objc_alloc(PTR_PTR_1126dd448);
    func_0x00010c03f7a0();
    func_0x00010909f770();
    func_0x00010909f698();
    func_0x00010909f678();
    func_0x00010909f6a0();
  }
LAB_10909f490:
  func_0x00010909f688();
  func_0x00010909f6a8();
  func_0x00010909f670();
  func_0x00010909f680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10909f53c; end: 10909f603;  */

void FUN_10909f53c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_109096480();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = puVar1;
    func_0x00010909f688();
  }
  else {
    func_0x00010909f6c4();
  }
  func_0x00010909f670();
  func_0x00010909f680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10909f604; end: 10909f663;  */

long FUN_10909f604(long param_1,undefined8 param_2)

{
  func_0x00010c0e00e0(param_1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010c0720c0(param_1);
  }
  func_0x00010909f680();
  return param_1;
}



/* Entry: 10909f664; end: 10909f78f;  */

void FUN_10909f664(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10909f790; end: 10909f877; -[SCNeoMediaHLSMediaSegmentEncryptionParameters initWithMethod:url:iv:keyformat:keyformatVersion:] */

long FUN_10909f790(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_4;
  _objc_retain();
  func_0x0001090a0308();
  func_0x0001090a0310();
  func_0x0001090a0328();
  func_0x0001090a03a0();
  func_0x0001090a0364();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 8) = param_3;
    func_0x0001090a03bc();
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    *(long *)(lVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    func_0x0001090a0308();
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    func_0x0001090a0310();
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    func_0x0001090a0328();
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  func_0x0001090a0320();
  func_0x0001090a0300();
  func_0x0001090a02f8();
  func_0x0001090a02f0();
  return lVar1;
}



/* Entry: 10909f878; end: 10909f87b; -[SCNeoMediaHLSMediaSegmentEncryptionParameters method] */

undefined8 FUN_10909f878(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10909f87c; end: 10909f883; -[SCNeoMediaHLSMediaSegmentEncryptionParameters setMethod:] */

void FUN_10909f87c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10909f884; end: 10909f887; -[SCNeoMediaHLSMediaSegmentEncryptionParameters url] */

undefined8 FUN_10909f884(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10909f888; end: 10909f8a7; -[SCNeoMediaHLSMediaSegmentEncryptionParameters setUrl:] */

void FUN_10909f888(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1090a02d8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10909f8a8; end: 10909f8ab; -[SCNeoMediaHLSMediaSegmentEncryptionParameters iv] */

undefined8 FUN_10909f8a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10909f8ac; end: 10909f8cb; -[SCNeoMediaHLSMediaSegmentEncryptionParameters setIv:] */

void FUN_10909f8ac(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1090a02d8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10909f8cc; end: 10909f8cf; -[SCNeoMediaHLSMediaSegmentEncryptionParameters keyformat] */

undefined8 FUN_10909f8cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10909f8d0; end: 10909f8ef; -[SCNeoMediaHLSMediaSegmentEncryptionParameters setKeyformat:] */

void FUN_10909f8d0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1090a02d8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10909f8f0; end: 10909f8f3; -[SCNeoMediaHLSMediaSegmentEncryptionParameters keyformatVersion] */

undefined8 FUN_10909f8f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10909f8f4; end: 10909f913; -[SCNeoMediaHLSMediaSegmentEncryptionParameters setKeyformatVersion:] */

void FUN_10909f8f4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1090a02d8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10909f914; end: 10909f94b; -[SCNeoMediaHLSMediaSegmentEncryptionParameters .cxx_destruct] */

void FUN_10909f914(long param_1)

{
  func_0x0001090a02e8(param_1 + 0x28);
  func_0x0001090a02e8(param_1 + 0x20);
  func_0x0001090a02e8(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10909f94c; end: 10909fa3f; -[SCNeoMediaHLSMediaSegment initWithURL:startTime:duration:byteRange:mediaSequence:mediaInitSection:encryptionParameters:programDateTime:] */

long FUN_10909f94c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  
  func_0x0001090a0318();
  func_0x0001090a0308();
  func_0x0001090a0310();
  func_0x0001090a0328();
  func_0x0001090a03a0();
  func_0x0001090a0364();
  if (param_3 != 0) {
    func_0x0001090a03bc();
    uVar1 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_3 + 8) = param_5;
    _objc_release(uVar1);
    *(undefined8 *)(param_3 + 0x10) = param_1;
    *(undefined8 *)(param_3 + 0x18) = param_2;
    *(undefined8 *)(param_3 + 0x40) = param_6;
    *(undefined8 *)(param_3 + 0x48) = param_7;
    *(undefined8 *)(param_3 + 0x20) = param_8;
    func_0x0001090a0308();
    uVar1 = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_3 + 0x28) = param_9;
    _objc_release(uVar1);
    func_0x0001090a0310();
    uVar1 = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(param_3 + 0x30) = param_10;
    _objc_release(uVar1);
    func_0x0001090a0328();
    uVar1 = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_3 + 0x38) = param_11;
    _objc_release(uVar1);
  }
  func_0x0001090a0320();
  func_0x0001090a0300();
  func_0x0001090a02f8();
  func_0x0001090a02f0();
  return param_3;
}



/* Entry: 10909fa40; end: 10909fa43; -[SCNeoMediaHLSMediaSegment url] */

undefined8 FUN_10909fa40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10909fa44; end: 10909fa4b; -[SCNeoMediaHLSMediaSegment startTime] */

undefined8 FUN_10909fa44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10909fa4c; end: 10909fa53; -[SCNeoMediaHLSMediaSegment duration] */

undefined8 FUN_10909fa4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10909fa54; end: 10909fa5f; -[SCNeoMediaHLSMediaSegment byteRange] */

undefined1  [16] FUN_10909fa54(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x40);
}



/* Entry: 10909fa60; end: 10909fa63; -[SCNeoMediaHLSMediaSegment mediaSequence] */

undefined8 FUN_10909fa60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10909fa64; end: 10909fa67; -[SCNeoMediaHLSMediaSegment mediaInitSection] */

undefined8 FUN_10909fa64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10909fa68; end: 10909fa6b; -[SCNeoMediaHLSMediaSegment encryptionParameters] */

undefined8 FUN_10909fa68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10909fa6c; end: 10909fa6f; -[SCNeoMediaHLSMediaSegment programDateTime] */

undefined8 FUN_10909fa6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10909fa70; end: 10909faa7; -[SCNeoMediaHLSMediaSegment .cxx_destruct] */

void FUN_10909fa70(long param_1)

{
  func_0x0001090a02e8(param_1 + 0x38);
  func_0x0001090a02e8(param_1 + 0x30);
  func_0x0001090a02e8(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10909faa8; end: 10909fb17; -[SCNeoMediaHLSMediaInitSection initWithURL:byteRange:] */

long FUN_10909faa8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x0001090a0318();
  func_0x0001090a03a0();
  func_0x0001090a0364();
  if (param_1 != 0) {
    func_0x0001090a03bc();
    func_0x0001090a03dc();
    *(undefined8 *)(param_1 + 0x10) = param_4;
    *(undefined8 *)(param_1 + 0x18) = param_5;
  }
  func_0x0001090a02f0();
  return param_1;
}



/* Entry: 10909fb18; end: 10909fb1b; -[SCNeoMediaHLSMediaInitSection url] */

undefined8 FUN_10909fb18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10909fb1c; end: 10909fb3b; -[SCNeoMediaHLSMediaInitSection setUrl:] */

void FUN_10909fb1c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1090a02d8();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10909fb3c; end: 10909fb47; -[SCNeoMediaHLSMediaInitSection byteRange] */

undefined1  [16] FUN_10909fb3c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 10909fb48; end: 10909fb53; -[SCNeoMediaHLSMediaInitSection .cxx_destruct] */

void FUN_10909fb48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10909fb54; end: 10909fc4f; -[SCNeoMediaHLSVariantStreamParameters initWithResolutionWidth:resolutionHeight:codecs:bandwidth:averageBandwidth:audioGroupId:subtitlesGroupId:] */

long FUN_10909fb54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_5;
  _objc_retain();
  func_0x0001090a0308();
  func_0x0001090a0310();
  func_0x0001090a03a0();
  func_0x0001090a0364();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 8) = param_3;
    *(undefined8 *)(lVar1 + 0x10) = param_4;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    *(long *)(lVar1 + 0x18) = param_5;
    func_0x0001090a0354(uVar2);
    *(undefined8 *)(lVar1 + 0x20) = param_6;
    *(undefined8 *)(lVar1 + 0x28) = param_7;
    func_0x0001090a0308();
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    func_0x0001090a0310();
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  func_0x0001090a0300();
  func_0x0001090a02f8();
  func_0x0001090a02f0();
  return lVar1;
}



/* Entry: 10909fc50; end: 10909fc53; -[SCNeoMediaHLSVariantStreamParameters resolutionWidth] */

undefined8 FUN_10909fc50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10909fc54; end: 10909fc57; -[SCNeoMediaHLSVariantStreamParameters resolutionHeight] */

undefined8 FUN_10909fc54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10909fc58; end: 10909fc5b; -[SCNeoMediaHLSVariantStreamParameters codecs] */

undefined8 FUN_10909fc58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10909fc5c; end: 10909fc5f; -[SCNeoMediaHLSVariantStreamParameters bandwidth] */

undefined8 FUN_10909fc5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10909fc60; end: 10909fc63; -[SCNeoMediaHLSVariantStreamParameters averageBandwidth] */

undefined8 FUN_10909fc60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10909fc64; end: 10909fc67; -[SCNeoMediaHLSVariantStreamParameters audioGroupId] */

undefined8 FUN_10909fc64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10909fc68; end: 10909fc6b; -[SCNeoMediaHLSVariantStreamParameters subtitlesGroupId] */

undefined8 FUN_10909fc68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10909fc6c; end: 10909fc9b; -[SCNeoMediaHLSVariantStreamParameters .cxx_destruct] */

void FUN_10909fc6c(long param_1)

{
  func_0x0001090a02e8(param_1 + 0x38);
  func_0x0001090a02e8(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10909fc9c; end: 10909fd3b; -[SCNeoMediaHLSVariantStream initWithURL:encryptionParameters:parameters:] */

long FUN_10909fc9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x0001090a0318();
  func_0x0001090a0308();
  func_0x0001090a0310();
  func_0x0001090a03a0();
  func_0x0001090a0364();
  if (param_1 != 0) {
    func_0x0001090a03bc();
    func_0x0001090a03dc();
    func_0x0001090a0308();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    _objc_release(uVar1);
    func_0x0001090a0310();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_5;
    _objc_release(uVar1);
  }
  func_0x0001090a0300();
  func_0x0001090a02f8();
  func_0x0001090a02f0();
  return param_1;
}



/* Entry: 10909fd3c; end: 10909fd3f; -[SCNeoMediaHLSVariantStream url] */

undefined8 FUN_10909fd3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10909fd40; end: 10909fd43; -[SCNeoMediaHLSVariantStream encryptionParameters] */

undefined8 FUN_10909fd40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10909fd44; end: 10909fd47; -[SCNeoMediaHLSVariantStream parameters] */

undefined8 FUN_10909fd44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10909fd48; end: 10909fd77; -[SCNeoMediaHLSVariantStream .cxx_destruct] */

void FUN_10909fd48(long param_1)

{
  func_0x0001090a02e8(param_1 + 0x18);
  func_0x0001090a02e8(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10909fd78; end: 10909ff63; -[SCNeoMediaHLSAlternativeRendition initWithType:url:groupId:language:assocLanguage:name:isDefault:autoselect:forced:instreamId:characteristics:channels:] */

undefined8 *
FUN_10909fd78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  func_0x0001090a0308();
  func_0x0001090a0310();
  func_0x0001090a0328();
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1127004a8;
  uStack_70 = param_1;
  func_0x0001090a03a0();
  puVar1 = &uStack_70;
  _objc_msgSendSuper2();
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_3;
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    func_0x0001090a0308();
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    func_0x0001090a0310();
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    func_0x0001090a0328();
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 9) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_9._2_1_;
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    func_0x00010bf51e00();
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    func_0x0001090a0354(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  func_0x0001090a0400();
  func_0x0001090a03c4();
  _objc_release(param_8);
  func_0x0001090a0320();
  func_0x0001090a0300();
  func_0x0001090a02f8();
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10909ff64; end: 10909ff67; -[SCNeoMediaHLSAlternativeRendition type] */

undefined8 FUN_10909ff64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10909ff68; end: 10909ff6b; -[SCNeoMediaHLSAlternativeRendition url] */

undefined8 FUN_10909ff68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10909ff6c; end: 10909ff6f; -[SCNeoMediaHLSAlternativeRendition groupId] */

undefined8 FUN_10909ff6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10909ff70; end: 10909ff73; -[SCNeoMediaHLSAlternativeRendition language] */

undefined8 FUN_10909ff70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10909ff74; end: 10909ff77; -[SCNeoMediaHLSAlternativeRendition assocLanguage] */

undefined8 FUN_10909ff74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10909ff78; end: 10909ff7b; -[SCNeoMediaHLSAlternativeRendition name] */

undefined8 FUN_10909ff78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10909ff7c; end: 10909ff83; -[SCNeoMediaHLSAlternativeRendition isDefault] */

undefined1 FUN_10909ff7c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10909ff84; end: 10909ff8b; -[SCNeoMediaHLSAlternativeRendition autoselect] */

undefined1 FUN_10909ff84(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10909ff8c; end: 10909ff93; -[SCNeoMediaHLSAlternativeRendition forced] */

undefined1 FUN_10909ff8c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10909ff94; end: 10909ff9b; -[SCNeoMediaHLSAlternativeRendition instreamId] */

undefined8 FUN_10909ff94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10909ff9c; end: 10909ffa3; -[SCNeoMediaHLSAlternativeRendition characteristics] */

undefined8 FUN_10909ff9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10909ffa4; end: 10909ffab; -[SCNeoMediaHLSAlternativeRendition channels] */

undefined8 FUN_10909ffa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10909ffac; end: 1090a0003; -[SCNeoMediaHLSAlternativeRendition .cxx_destruct] */

void FUN_10909ffac(long param_1)

{
  func_0x0001090a02e8(param_1 + 0x50);
  func_0x0001090a02e8(param_1 + 0x48);
  func_0x0001090a02e8(param_1 + 0x40);
  func_0x0001090a02e8(param_1 + 0x38);
  func_0x0001090a02e8(param_1 + 0x30);
  func_0x0001090a02e8(param_1 + 0x28);
  func_0x0001090a02e8(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1090a0004; end: 1090a010f; -[SCNeoMediaHLSPlaylist initWithVariantStreams:iframeStreams:segments:alternativeRenditions:targetSegmentDuration:playlistType:] */

long FUN_1090a0004(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  func_0x0001090a0318();
  func_0x0001090a0308();
  func_0x0001090a0310();
  func_0x0001090a0328();
  func_0x0001090a03a0();
  func_0x0001090a0364();
  if (param_2 != 0) {
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = param_4;
    func_0x0001090a0354(uVar1);
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = param_5;
    func_0x0001090a0354(uVar1);
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = param_6;
    func_0x0001090a0354(uVar1);
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = param_7;
    func_0x0001090a0354(uVar1);
    *(undefined8 *)(param_2 + 0x28) = param_1;
    *(undefined8 *)(param_2 + 0x30) = param_8;
  }
  func_0x0001090a0320();
  func_0x0001090a0300();
  func_0x0001090a02f8();
  func_0x0001090a02f0();
  return param_2;
}



/* Entry: 1090a0110; end: 1090a0283; -[SCNeoMediaHLSPlaylist alternativeRenditionsWithGroupId:] */

undefined * FUN_1090a0110(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x0001090a0318();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001090a0308();
  func_0x0001090a038c();
  lVar4 = lRam0000000000000000;
  puVar7 = (undefined *)0x0;
  while (puVar1 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(uVar6);
      }
      puVar8 = *(undefined **)((long)puVar9 * 8);
      puVar2 = puVar8;
      func_0x00010bfceb20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      puVar3 = puVar2;
      func_0x0001090a03c4();
      if ((int)puVar2 != 0) {
        if (puVar7 == (undefined *)0x0) {
          puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar3 = puVar7;
        func_0x00010befa120(puVar7,param_2,puVar8);
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 < puVar1);
    func_0x0001090a038c();
    puVar1 = puVar3;
  }
  lVar4 = 0;
  func_0x0001090a02f8();
  func_0x0001090a02f0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  func_0x0001090a02f8();
  func_0x0001090a0300();
  func_0x0001090a02f0();
  func_0x0001090a03e8();
  return *(undefined **)(lVar4 + 8);
}



/* Entry: 1090a0284; end: 1090a0287; -[SCNeoMediaHLSPlaylist variantStreams] */

undefined8 FUN_1090a0284(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1090a0288; end: 1090a028b; -[SCNeoMediaHLSPlaylist iframeStreams] */

undefined8 FUN_1090a0288(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1090a028c; end: 1090a028f; -[SCNeoMediaHLSPlaylist segments] */

undefined8 FUN_1090a028c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1090a0290; end: 1090a0293; -[SCNeoMediaHLSPlaylist alternativeRenditions] */

undefined8 FUN_1090a0290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1090a0294; end: 1090a029b; -[SCNeoMediaHLSPlaylist targetSegmentDuration] */

undefined8 FUN_1090a0294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1090a029c; end: 1090a029f; -[SCNeoMediaHLSPlaylist playlistType] */

undefined8 FUN_1090a029c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1090a02a0; end: 1090a02d7; -[SCNeoMediaHLSPlaylist .cxx_destruct] */

void FUN_1090a02a0(long param_1)

{
  func_0x0001090a02e8(param_1 + 0x20);
  func_0x0001090a02e8(param_1 + 0x18);
  func_0x0001090a02e8(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090a02d8; end: 1090a0407;  */

void FUN_1090a02d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1090a0408; end: 1090a051f; -[SCNeoMediaInfoResolver initWithStreamParserRegistry:streamParser:instruments:shouldParseSPSReorderDepth:] */

undefined1 *
FUN_1090a0408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x0001090a0de4();
  func_0x0001090a0e3c();
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1127004b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_3;
    _objc_release(uVar2);
    func_0x0001090a0e3c();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x48));
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    func_0x00010bfed2e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x0001090a0dcc(uVar2);
    *(undefined1 *)((long)puVar1 + 0x40) = param_6;
  }
  func_0x0001090a0df4();
  func_0x0001090a0dd4();
  func_0x0001090a0dbc();
  return (undefined1 *)puVar1;
}



/* Entry: 1090a0520; end: 1090a06db; -[SCNeoMediaInfoResolver parseBuffer:withError:] */

undefined8 FUN_1090a0520(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lStack_68;
  
  func_0x0001090a0de4();
  if (*(long *)(param_1 + 0x48) != 0) {
LAB_1090a0558:
    do {
      lStack_68 = 0;
      lVar2 = *(long *)(param_1 + 0x48);
      func_0x00010c0f3ec0(lVar2,param_2,param_3,*(undefined8 *)(param_1 + 0x38),&lStack_68,
                          *(undefined8 *)(param_1 + 0x20),param_4);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf99fe0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lStack_68;
      ppuVar5 = &PTR____CFConstantStringClassReference_110db78d8;
      if (lVar2 - 1U < 4) {
        ppuVar5 = (undefined **)(&PTR_PTR_110ad7918)[lVar2 - 1U];
      }
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(ppuVar5);
      func_0x00010bf78280(uVar3,param_2,uVar6,lVar1,ppuVar5);
      func_0x0001090a0e20();
      func_0x0001090a0dfc();
      switch(lVar2) {
      case 0:
        func_0x00010bef9300(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x38),
                            lStack_68);
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + lStack_68;
        break;
      case 1:
        goto code_r0x0001090a0680;
      case 2:
        goto LAB_1090a068c;
      case 3:
      case 4:
        goto LAB_1090a0678;
      }
    } while( true );
  }
  uVar4 = param_3;
  func_0x00010c08fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x38));
  if (0x1f < uVar4) {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c0f4820(uVar3,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    func_0x0001090a0dcc(uVar6);
    if (*(long *)(param_1 + 0x48) != 0) {
      func_0x00010c18b5e0(*(long *)(param_1 + 0x48),param_2,param_1);
      func_0x00010c200b00(*(undefined8 *)(param_1 + 0x48),param_2,*(undefined1 *)(param_1 + 0x40));
      goto LAB_1090a0558;
    }
LAB_1090a0678:
    uVar3 = 0;
    goto LAB_1090a0690;
  }
  goto LAB_1090a068c;
code_r0x0001090a0680:
  func_0x00010bef9300(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x38),
                      lStack_68);
LAB_1090a068c:
  uVar3 = 1;
LAB_1090a0690:
  func_0x0001090a0dbc();
  return uVar3;
}



/* Entry: 1090a06dc; end: 1090a06e3; -[SCNeoMediaInfoResolver bufferParseLocation] */

undefined8 FUN_1090a06dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1090a06e4; end: 1090a072f; -[SCNeoMediaInfoResolver trackInfos] */

void FUN_1090a06e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    func_0x0001090a0dcc(uVar2);
    lVar3 = *(long *)(param_1 + 0x28);
  }
  func_0x0001090a0e3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1090a0730; end: 1090a0737; -[SCNeoMediaInfoResolver trackInfoForTrackId:] */

void FUN_1090a0730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_valueForTrackId__112683620);
  return;
}



/* Entry: 1090a0738; end: 1090a07b3; -[SCNeoMediaInfoResolver setTrackInfo:forTrackId:] */

void FUN_1090a0738(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x0001090a0de4();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    func_0x0001090a0e14();
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar1;
    func_0x0001090a0dcc(uVar2);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  func_0x0001090a0e50();
  func_0x00010c220260(lVar3,param_2,param_3,lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x41) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090a07b4; end: 1090a09cf; -[SCNeoMediaInfoResolver mediaStreamParser:didParseTrackInfo:] */

void FUN_1090a07b4(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  int iVar8;
  long unaff_x19;
  long unaff_x20;
  double dVar9;
  undefined1 auStack_68 [2];
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined3 uStack_63;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001090a0dac();
  func_0x0001090a0e50();
  func_0x00010c219000();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x00010bf99fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001090a0e50();
  lVar4 = unaff_x19;
  func_0x00010c27dd80();
  func_0x00010bf77bc0(uVar2,param_3,uVar3,lVar4);
  func_0x0001090a0dec();
  lVar4 = unaff_x19;
  func_0x00010c27dd80();
  if (lVar4 == 2) {
    if (unaff_x19 == 0) {
      _auStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
    }
    else {
      func_0x00010c0c4ba0(auStack_68);
    }
    _CMTimeGetSeconds(auStack_68);
    dVar9 = param_1 * 1000.0;
    iVar8 = (int)dVar9;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
      iVar8 = 0;
    }
    lVar4 = unaff_x19;
    func_0x00010c0de5a0();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x00010c1003c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126dd450;
    _objc_alloc(PTR_PTR_1126dd450);
    lVar6 = unaff_x19;
    func_0x00010bf3efc0();
    uVar3 = _auStack_68;
    uStack_63 = SUB83(uVar3,5);
    _auStack_68 = (uint5)CONCAT13((char)lVar6,
                                  CONCAT12((char)((ulong)lVar6 >> 8),
                                           CONCAT11((char)((ulong)lVar6 >> 0x10),
                                                    (char)((ulong)lVar6 >> 0x18))));
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,auStack_68);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e1d358;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar1 = ppuVar7;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar7);
    lVar6 = unaff_x19;
    func_0x00010c29bd60();
    func_0x00010c29a420();
    func_0x00010bfb6f20();
    func_0x00010c029400(puVar5,param_3,iVar8,ppuVar1,lVar6,unaff_x19,(int)dVar9,lVar4);
    func_0x00010c222120(uVar2,param_3,puVar5);
    func_0x0001090a0dec();
    func_0x0001090a0dfc();
    func_0x0001090a0dd4();
  }
  func_0x0001090a0dbc();
  return;
}



/* Entry: 1090a09d0; end: 1090a0a57; -[SCNeoMediaInfoResolver _getOrCreateSampleInfoIndexerForTrackId:] */

void FUN_1090a09d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined **)(param_1 + 8);
  if (puVar1 == (undefined *)0x0) {
    func_0x0001090a0e14();
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    func_0x0001090a0dcc(uVar2);
    puVar1 = *(undefined **)(param_1 + 8);
  }
  func_0x00010c296fe0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126dd458;
    _objc_opt_new(PTR_PTR_1126dd458);
    func_0x0001090a0e04(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1090a0a58; end: 1090a0adf; -[SCNeoMediaInfoResolver _getOrCreateSegmentInfoIndexerForTrackId:] */

void FUN_1090a0a58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined **)(param_1 + 0x18);
  if (puVar1 == (undefined *)0x0) {
    func_0x0001090a0e14();
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    func_0x0001090a0dcc(uVar2);
    puVar1 = *(undefined **)(param_1 + 0x18);
  }
  func_0x00010c296fe0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126dd460;
    _objc_opt_new(PTR_PTR_1126dd460);
    func_0x0001090a0e04(*(undefined8 *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1090a0ae0; end: 1090a0ae7; -[SCNeoMediaInfoResolver sampleInfoIndexerForTrackId:] */

void FUN_1090a0ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_valueForTrackId__112683620);
  return;
}



/* Entry: 1090a0ae8; end: 1090a0b43; -[SCNeoMediaInfoResolver setSampleInfoIndexer:forTrackId:] */

void FUN_1090a0ae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x0001090a0de4();
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    func_0x0001090a0e14();
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar1;
    func_0x0001090a0dcc(uVar2);
    lVar1 = *(long *)(param_1 + 8);
  }
  func_0x0001090a0e28(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090a0b44; end: 1090a0b4b; -[SCNeoMediaInfoResolver enumerateSampleInfoIndexersWithBlock:] */

void FUN_1090a0b44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_enumerateObjectsWithBlock__1125c3950);
  return;
}



/* Entry: 1090a0b4c; end: 1090a0b53; -[SCNeoMediaInfoResolver segmentInfoIndexerForTrackId:] */

void FUN_1090a0b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_valueForTrackId__112683620);
  return;
}


