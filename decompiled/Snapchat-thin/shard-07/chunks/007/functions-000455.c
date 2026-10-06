/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10585e3c8; end: 10585e48b; -[SCAudioReverseGeneratingSession dealloc] */

void FUN_10585e3c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    _CFRelease();
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = param_1;
  func_0x00010c0ed420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60(uVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126eaa20;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10585e48c; end: 10585e543; -[SCAudioReverseGeneratingSession generateReverseAudioDataWithCompletionBlock:] */

void FUN_10585e48c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10585e544;
    puStack_48 = &UNK_1107d0af0;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10585e544; end: 10585e54f;  */

void FUN_10585e544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1b7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__generateOriginalWavFileWithComp_112564798,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10585e550; end: 10585ed17; -[SCAudioReverseGeneratingSession _generateOriginalWavFileWithCompletionBlock:] */

void FUN_10585e550(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *unaff_x21;
  long *plVar7;
  undefined8 *puVar8;
  undefined *unaff_x24;
  undefined *unaff_x26;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x48) == 0) {
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_10585ed18;
    puStack_f0 = &UNK_11087bb60;
    _objc_retain(param_3);
    puStack_e8 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_108);
    puVar6 = puStack_e8;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
    _objc_alloc();
    puStack_110 = (undefined *)0x0;
    func_0x00010bff4200();
    puVar6 = puStack_110;
    _objc_retain(puStack_110);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x48);
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = lVar3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if ((*(long *)(param_1 + 0x20) == 0) || (unaff_x20 == 0)) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      _objc_release();
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      uStack_128 = 0x10585ed28;
      puStack_120 = &UNK_11087bb60;
      _objc_retain(param_3);
      puStack_118 = param_3;
      func_0x000100162d98("APPSTORE",&puStack_138);
      unaff_x21 = puStack_118;
    }
    else {
      unaff_x21 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = *(undefined **)PTR__AVFormatIDKey_11034cf30;
      func_0x00010c220220();
      puVar1 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
      func_0x00010bf0b5e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = puVar1;
      _objc_release(uVar2);
      uVar4 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf2c480();
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      if ((uVar4 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x20) = 0;
        _objc_release(uVar2);
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x28) = 0;
        _objc_release(uVar2);
        puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_158 = 0xc2000000;
        uStack_150 = 0x10585ed38;
        puStack_148 = &UNK_11087bb60;
        _objc_retain(param_3);
        puStack_140 = param_3;
        func_0x000100162d98("APPSTORE",&puStack_160);
        unaff_x24 = puStack_140;
      }
      else {
        func_0x00010befa4c0();
        func_0x00010c250140(*(undefined8 *)(param_1 + 0x20));
        uStack_d8 = *(undefined8 *)PTR__AVLinearPCMIsBigEndianKey_11034cf40;
        uStack_d0 = *(undefined8 *)PTR__AVLinearPCMIsFloatKey_11034cf48;
        uStack_c8 = *(undefined8 *)PTR__AVLinearPCMBitDepthKey_11034cf38;
        ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1a80;
        ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1a98;
        uStack_c0 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
        uStack_b8 = *(undefined8 *)PTR__AVLinearPCMIsNonInterleaved_11034cf50;
        ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1a68;
        ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1a80;
        ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1ab0;
        ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1a80;
        uStack_b0 = *(undefined8 *)PTR__AVSampleRateKey_11034cf60;
        ppuStack_78 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111843a0;
        unaff_x24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_e0 = unaff_x26;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___AVAssetWriter_1126bf5a8;
        _objc_alloc();
        lVar3 = param_1;
        func_0x00010c0ed420(param_1);
        _objc_retainAutoreleasedReturnValue();
        puStack_190 = puVar6;
        func_0x00010c057a20();
        unaff_x26 = puStack_190;
        _objc_retain(puStack_190);
        _objc_release(puVar6);
        plVar7 = (long *)(param_1 + 0x10);
        lVar5 = *plVar7;
        *plVar7 = (long)puVar1;
        _objc_release(lVar5);
        _objc_release(lVar3);
        if ((*plVar7 == 0) || (unaff_x26 != (undefined *)0x0)) {
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          *(undefined8 *)(param_1 + 0x20) = 0;
          _objc_release(uVar2);
          uVar2 = *(undefined8 *)(param_1 + 0x28);
          *(undefined8 *)(param_1 + 0x28) = 0;
          _objc_release(uVar2);
          puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1b0 = 0xc2000000;
          uStack_1a8 = 0x10585ed58;
          puStack_1a0 = &UNK_11087bb60;
          _objc_retain(param_3);
          puStack_198 = param_3;
          func_0x000100162d98("APPSTORE",&puStack_1b8);
          _objc_release(puStack_198);
          puVar6 = unaff_x26;
        }
        else {
          puVar6 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
          _objc_alloc();
          func_0x00010c02a040();
          puVar8 = (undefined8 *)(param_1 + 0x18);
          uVar2 = *puVar8;
          *puVar8 = puVar6;
          _objc_release(uVar2);
          func_0x00010c198a40(*puVar8);
          uVar4 = *(ulong *)(param_1 + 0x10);
          func_0x00010bf2c460();
          uVar2 = *(undefined8 *)(param_1 + 0x10);
          if ((uVar4 & 1) == 0) {
            *(undefined8 *)(param_1 + 0x10) = 0;
            _objc_release(uVar2);
            uVar2 = *(undefined8 *)(param_1 + 0x18);
            *(undefined8 *)(param_1 + 0x18) = 0;
            _objc_release(uVar2);
            uVar2 = *(undefined8 *)(param_1 + 0x20);
            *(undefined8 *)(param_1 + 0x20) = 0;
            _objc_release(uVar2);
            uVar2 = *(undefined8 *)(param_1 + 0x28);
            *(undefined8 *)(param_1 + 0x28) = 0;
            _objc_release(uVar2);
            puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1d8 = 0xc2000000;
            uStack_1d0 = 0x10585ed68;
            puStack_1c8 = &UNK_11087bb60;
            _objc_retain(param_3);
            puStack_1c0 = param_3;
            func_0x000100162d98("APPSTORE",&puStack_1e0);
            _objc_release(puStack_1c0);
          }
          else {
            func_0x00010bef93a0();
            func_0x00010c251d20(*(undefined8 *)(param_1 + 0x10));
            uStack_1f8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
            uStack_200 = *(undefined8 *)PTR__kCMTimeZero_110348670;
            uStack_1f0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
            func_0x00010c2508a0(*(undefined8 *)(param_1 + 0x10));
            lVar3 = *(long *)(param_1 + 0x28);
            func_0x00010bf52120();
            *(long *)(param_1 + 0x38) = lVar3;
            if (lVar3 == 0) {
              uVar2 = *(undefined8 *)(param_1 + 0x10);
              *(undefined8 *)(param_1 + 0x10) = 0;
              _objc_release(uVar2);
              uVar2 = *(undefined8 *)(param_1 + 0x18);
              *(undefined8 *)(param_1 + 0x18) = 0;
              _objc_release(uVar2);
              uVar2 = *(undefined8 *)(param_1 + 0x20);
              *(undefined8 *)(param_1 + 0x20) = 0;
              _objc_release(uVar2);
              uVar2 = *(undefined8 *)(param_1 + 0x28);
              *(undefined8 *)(param_1 + 0x28) = 0;
              _objc_release(uVar2);
              puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_220 = 0xc2000000;
              uStack_218 = 0x10585ed78;
              puStack_210 = &UNK_11087bb60;
              _objc_retain(param_3);
              puStack_208 = param_3;
              func_0x000100162d98("APPSTORE",&puStack_228);
              _objc_release(puStack_208);
            }
            else {
              uVar2 = *(undefined8 *)(param_1 + 0x18);
              unaff_x26 = *(undefined **)(param_1 + 0x30);
              func_0x00010c11de00(unaff_x26);
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(param_3);
              func_0x00010c135d80(uVar2);
              _objc_release(unaff_x26);
              _objc_release(param_3);
              puStack_230 = param_3;
            }
          }
          puVar6 = (undefined *)0x0;
        }
      }
      _objc_release(unaff_x24);
    }
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
  }
  _objc_release(puVar6);
  puVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puStack_230);
  _objc_release(unaff_x26);
  _objc_release(unaff_x24);
  _objc_release(unaff_x21);
  _objc_release(unaff_x20);
  _objc_release(0);
  _objc_release(param_3);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010585ed24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar6 + 0x20) + 0x10))(*(long *)(puVar6 + 0x20),0);
  return;
}



/* Entry: 10585ed18; end: 10585ed87;  */

void FUN_10585ed18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010585ed24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10585ed88; end: 10585eecf;  */

void FUN_10585ed88(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c07bca0();
  if (iVar1 != 0) {
    do {
      lVar5 = *(long *)(param_1 + 0x20);
      if (*(long *)(lVar5 + 0x38) == 0) {
LAB_10585ee20:
        if (*(long *)(lVar5 + 0x38) != 0) {
          _CFRelease();
          *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = 0;
          lVar5 = *(long *)(param_1 + 0x20);
        }
        lVar5 = *(long *)(lVar5 + 0x10);
        func_0x00010c252d60();
        if (lVar5 != 1) {
          return;
        }
        func_0x00010c0bb0a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
        lStack_30 = *(long *)(param_1 + 0x20);
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        uVar6 = *(undefined8 *)(lStack_30 + 0x10);
        puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_48 = 0xc2000000;
        pcStack_40 = FUN_10585eed0;
        puStack_38 = &UNK_1107d0af0;
        _objc_retain(uVar3);
        uStack_28 = uVar3;
        func_0x00010bfaff80(uVar6,param_2,&puStack_50);
        _objc_release(uStack_28);
        return;
      }
      lVar2 = *(long *)(lVar5 + 0x20);
      func_0x00010c252d60();
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar2 != 1) goto LAB_10585ee20;
      lVar2 = *(long *)(lVar5 + 0x10);
      func_0x00010c252d60();
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar2 != 1) goto LAB_10585ee20;
      func_0x00010bf06fe0(*(undefined8 *)(lVar5 + 0x18),param_2,*(undefined8 *)(lVar5 + 0x38));
      _CFRelease(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
      func_0x00010bf52120();
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = uVar3;
      uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
      func_0x00010c07bca0();
    } while ((uVar4 & 1) != 0);
  }
  return;
}



/* Entry: 10585eed0; end: 10585ef33;  */

void FUN_10585eed0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be1bae0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10585ef34; end: 10585f8ab; -[SCAudioReverseGeneratingSession _generateReverseWavFileWithCompletionBlock:] */

void FUN_10585ef34(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  uint uVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  uint uStack_1e4;
  uint uStack_1d0;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined1 auStack_164 [4];
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  puVar10 = PTR__OBJC_CLASS___NSFileHandle_1126bc690;
  lVar17 = param_1;
  func_0x00010c0ed420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lStack_70 = 0;
  func_0x00010bfacce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lStack_70;
  _objc_retain(lStack_70);
  _objc_release(lVar17);
  if (lVar4 != 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10585f8ac;
    puStack_80 = &UNK_11087bb60;
    _objc_retain(param_3);
    puStack_78 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_98);
    puVar11 = puStack_78;
    goto LAB_10585f614;
  }
  puVar11 = puVar10;
  func_0x00010c121360(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  uVar13 = 0;
  func_0x00010c0720c0();
  puVar15 = puVar12;
  if ((uVar13 & 1) == 0) {
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x10585f8bc;
    puStack_a8 = &UNK_11087bb60;
    _objc_retain(param_3);
    puStack_a0 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_c0);
    puVar12 = puStack_a0;
  }
  else {
    puVar14 = puVar10;
    func_0x00010c121360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar11 = puVar14;
    func_0x00010c08fa60();
    if (puVar11 < (undefined *)0x4) {
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      uStack_d8 = 0x10585f8cc;
      puStack_d0 = &UNK_11087bb60;
      _objc_retain(param_3);
      puStack_c8 = param_3;
      func_0x000100162d98("APPSTORE",&puStack_e8);
      puVar12 = puStack_c8;
      puVar11 = puVar14;
    }
    else {
      puVar11 = puVar14;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      uVar21 = 0;
      lVar17 = 3;
      do {
        uVar21 = (uint)(byte)puVar11[lVar17] | uVar21 << 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != -1);
      puVar11 = puVar10;
      func_0x00010c121360(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      func_0x00010c008340();
      _objc_release(puVar12);
      iVar9 = 0x10e08c78;
      func_0x00010c0720c0();
      if (iVar9 == 0) {
        puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_108 = 0xc2000000;
        uStack_100 = 0x10585f8dc;
        puStack_f8 = &UNK_11087bb60;
        _objc_retain(param_3);
        puStack_f0 = param_3;
        func_0x000100162d98("APPSTORE",&puStack_110);
        puVar12 = puStack_f0;
      }
      else {
        if (0xc < uVar21 + 8) {
          uStack_1e4 = 0;
          uVar2 = 0;
          uVar22 = 0xc;
          uStack_1d0 = 0xffffffff;
          uVar23 = 0xffffffff;
          do {
            puVar14 = puVar10;
            func_0x00010c121360(puVar10);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar11);
            puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
            func_0x00010c008340();
            puVar11 = puVar10;
            func_0x00010c121360();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar14);
            puVar14 = puVar11;
            func_0x00010c08fa60();
            if (puVar14 < (undefined *)0x4) {
              puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_130 = 0xc2000000;
              uStack_128 = 0x10585f8ec;
              puStack_120 = &UNK_11087bb60;
              _objc_retain(param_3);
              puStack_118 = param_3;
              func_0x000100162d98("APPSTORE",&puStack_138);
              puVar14 = puStack_118;
              goto LAB_10585f7ac;
            }
            puVar14 = puVar11;
            _objc_retainAutorelease();
            func_0x00010bf25f00();
            uVar18 = 0;
            lVar17 = 3;
            do {
              uVar18 = (uint)(byte)puVar14[lVar17] | uVar18 << 8;
              lVar17 = lVar17 + -1;
            } while (lVar17 != -1);
            iVar9 = 0x10e08c98;
            func_0x00010c0720c0();
            uVar5 = uStack_1e4;
            uVar6 = uVar23;
            uVar7 = uVar22;
            uVar8 = uVar18;
            uVar3 = uVar23;
            if (iVar9 == 0) {
              iVar9 = 0x10dbf1f8;
              func_0x00010c0720c0();
              uVar5 = uVar18;
              uVar6 = uVar22;
              uVar7 = uStack_1d0;
              uVar8 = uVar2;
              uVar3 = uStack_1d0;
              if (iVar9 != 0) goto joined_r0x00010585f2c8;
            }
            else {
joined_r0x00010585f2c8:
              uVar2 = uVar8;
              uStack_1d0 = uVar7;
              uVar23 = uVar6;
              uStack_1e4 = uVar5;
              if (uVar3 != 0xffffffff) {
                _objc_release(puVar12);
                break;
              }
            }
            uVar22 = uVar22 + uVar18 + 8;
            func_0x00010c1571a0(puVar10);
            _objc_release(puVar12);
          } while (uVar22 < uVar21 + 8);
          if ((uStack_1d0 != 0xffffffff) && (uVar23 != 0xffffffff)) {
            puVar12 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
            func_0x00010bf63640();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf06ae0(puVar12);
            _objc_release(puVar14);
            uVar21 = uStack_1e4 + uVar2 + 0xc;
            lVar17 = 3;
            do {
              auStack_164[lVar17] = (char)uVar21;
              uVar21 = uVar21 >> 8;
              lVar17 = lVar17 + -1;
            } while (lVar17 != -1);
            puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf06ae0(puVar12);
            _objc_release(puVar14);
            puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf06ae0(puVar12);
            _objc_release(puVar14);
            func_0x00010c1571a0(puVar10);
            puVar14 = puVar10;
            func_0x00010c121360(puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf06ae0(puVar12);
            _objc_release(puVar14);
            func_0x00010c1571a0(puVar10);
            puVar14 = puVar10;
            func_0x00010c121360(puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf06ae0(puVar12);
            _objc_release(puVar14);
            puVar20 = (undefined *)(ulong)uStack_1e4;
            puVar14 = puVar10;
            func_0x00010c121360();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar14;
            func_0x00010c08fa60();
            if ((puVar16 == puVar20) ||
               (puVar16 = puVar14, func_0x00010c08fa60(), ((ulong)puVar16 & 1) != 0)) {
              puVar16 = puVar14;
              _objc_retainAutorelease();
              func_0x00010bf25f00();
              _malloc();
              puVar19 = puVar16 + 1;
              for (lVar17 = 0; puVar16 = puVar14, func_0x00010c08fa60(), lVar17 < (int)puVar16;
                  lVar17 = lVar17 + 2) {
                uVar1 = *puVar19;
                puVar16 = puVar14;
                func_0x00010c08fa60();
                (puVar20 + (long)puVar16)[-1] = uVar1;
                uVar1 = puVar19[-1];
                puVar16 = puVar14;
                func_0x00010c08fa60();
                (puVar20 + (long)puVar16)[-2] = uVar1;
                puVar19 = puVar19 + 2;
                puVar20 = puVar20 + -2;
              }
              puVar16 = PTR__OBJC_CLASS___NSData_1126ae778;
              func_0x00010bf64a20(PTR__OBJC_CLASS___NSData_1126ae778);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf06ae0(puVar12);
              func_0x00010bf3dba0(puVar10);
              uVar24 = *(undefined8 *)(param_1 + 8);
              func_0x00010c0ed420(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12cc60(uVar24);
              _objc_release(param_1);
              puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_1b8 = 0xc2000000;
              pcStack_1b0 = FUN_10585f91c;
              puStack_1a8 = &UNK_1107d0af0;
              _objc_retain(param_3);
              puStack_198 = param_3;
              _objc_retain(puVar12);
              puStack_1a0 = puVar12;
              func_0x000100162d98("APPSTORE",&puStack_1c0);
              _objc_release(puStack_1a0);
              _objc_release(puStack_198);
            }
            else {
              puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_188 = 0xc2000000;
              uStack_180 = 0x10585f90c;
              puStack_178 = &UNK_11087bb60;
              _objc_retain(param_3);
              puStack_170 = param_3;
              func_0x000100162d98("APPSTORE",&puStack_190);
              puVar16 = puStack_170;
            }
            _objc_release(puVar16);
LAB_10585f7ac:
            _objc_release(puVar14);
            goto LAB_10585f604;
          }
        }
        puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_158 = 0xc2000000;
        uStack_150 = 0x10585f8fc;
        puStack_148 = &UNK_11087bb60;
        _objc_retain(param_3);
        puStack_140 = param_3;
        func_0x000100162d98("APPSTORE",&puStack_160);
        puVar12 = puStack_140;
      }
    }
  }
LAB_10585f604:
  _objc_release(puVar12);
  _objc_release(puVar15);
LAB_10585f614:
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(lVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 10585f8ac; end: 10585f91b;  */

void FUN_10585f8ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010585f8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10585f91c; end: 10585f967;  */

void FUN_10585f91c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10585f968; end: 10585f9eb; -[SCAudioReverseGeneratingSession .cxx_destruct] */

void FUN_10585f968(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10585f9ec; end: 10585fab7; -[SCVideoThumbnailGenerator initWithImagesRenderServices:configProvider:] */

undefined1 *
FUN_10585f9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eaa28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010c0d1dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10585fab8; end: 10586018f; -[SCVideoThumbnailGenerator generateThumbnailsWithRequest:] */

void FUN_10585fab8(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  double dVar17;
  undefined8 uVar18;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  undefined1 auStack_a8 [8];
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_5);
  if (param_5 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(param_5 + 8);
  }
  _objc_retain(lVar11);
  _objc_release(lVar11);
  puVar1 = PTR_PTR_1126ba150;
  puVar12 = (undefined *)0x0;
  if (lVar11 == 0) goto LAB_1058600c8;
  if (param_5 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(param_5 + 8);
  }
  _objc_retain(uVar13);
  func_0x00010c22e420();
  _objc_release(uVar13);
  if (((ulong)puVar1 & 1) == 0) {
    if (param_5 == 0) {
      _objc_retain(0);
      lVar11 = 0;
LAB_10585fb64:
      _objc_retain(lVar11);
      _objc_release(lVar11);
      puVar12 = (undefined *)0x0;
      if (lVar11 == 0) goto LAB_1058600c8;
      if (param_5 != 0) goto LAB_10585fb7c;
      _objc_retain(0);
      lVar11 = 0;
LAB_105860124:
      lVar14 = 0;
    }
    else {
      lVar11 = *(long *)(param_5 + 0x10);
      _objc_retain(lVar11);
      if (lVar11 == 0) {
        lVar11 = *(long *)(param_5 + 0x18);
        goto LAB_10585fb64;
      }
      _objc_release(lVar11);
LAB_10585fb7c:
      lVar11 = *(long *)(param_5 + 0x40);
      _objc_retain(lVar11);
      if (lVar11 == 0) goto LAB_105860124;
      lVar14 = *(long *)(lVar11 + 0x18);
    }
    _objc_retain(lVar14);
    lVar2 = lVar14;
    func_0x00010bf529e0();
    _objc_release(lVar14);
    _objc_release(lVar11);
    if (lVar2 != 0) {
      if (param_5 == 0) {
        _objc_retain(0);
        lVar11 = 0;
LAB_105860150:
        lVar14 = 0;
      }
      else {
        lVar11 = *(long *)(param_5 + 0x40);
        _objc_retain(lVar11);
        if (lVar11 == 0) goto LAB_105860150;
        lVar14 = *(long *)(lVar11 + 0x18);
      }
      _objc_retain(lVar14);
      lVar2 = lVar14;
      func_0x00010bf529e0();
      if (param_5 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = *(long *)(param_5 + 0x10);
      }
      _objc_retain(lVar15);
      lVar3 = lVar15;
      func_0x00010bf529e0();
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar11);
      if (lVar2 != lVar3) goto LAB_1058600c4;
    }
    uVar4 = param_3;
    func_0x00010be98800();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar4;
    func_0x00010bf529e0();
    if (uVar16 != 0) {
      uVar16 = 0;
      do {
        puVar5 = PTR_PTR_1126ae560;
        _objc_opt_new(PTR_PTR_1126ae560);
        func_0x00010befa120(puVar1);
        _objc_release(puVar5);
        puVar5 = puVar1;
        func_0x00010c089820(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bfbc3e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar12);
        _objc_release(puVar6);
        _objc_release(puVar5);
        uVar16 = uVar16 + 1;
        uVar7 = uVar4;
        func_0x00010bf529e0();
      } while (uVar16 < uVar7);
    }
    puVar5 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
    _objc_alloc();
    if (param_5 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(param_5 + 8);
    }
    _objc_retain(uVar13);
    func_0x00010bff41a0();
    _objc_release(uVar13);
    func_0x00010c169b80(puVar5);
    uVar18 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    dVar17 = *(double *)PTR__kCMTimeZero_110348670;
    uVar13 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    dStack_a0 = dVar17;
    uStack_98 = uVar18;
    uStack_90 = uVar13;
    func_0x00010c1ec3e0(puVar5);
    dStack_a0 = dVar17;
    uStack_98 = uVar18;
    uStack_90 = uVar13;
    func_0x00010c1ec3c0(puVar5);
    if (param_5 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(param_5 + 0x30);
    }
    _objc_retain(lVar11);
    _objc_release(lVar11);
    if (lVar11 != 0) {
      if (param_5 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(param_5 + 0x30);
      }
      _objc_retain(uVar13);
      func_0x00010c2213a0(puVar5);
      _objc_release(uVar13);
    }
    if (param_5 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(param_5 + 0x28);
    }
    _objc_retain(lVar11);
    _objc_release(lVar11);
    if (lVar11 != 0) {
      if (param_5 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(param_5 + 0x28);
      }
      _objc_retain(uVar13);
      func_0x00010bdc10a0(uVar13);
      _objc_release(uVar13);
      if ((dVar17 != *(double *)PTR__CGSizeZero_110347620) ||
         (param_2 != *(double *)(PTR__CGSizeZero_110347620 + 8))) {
        func_0x00010c1c3cc0(dVar17,param_2,puVar5);
      }
    }
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(uVar4);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(uVar4);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    _dispatch_group_create();
    uVar16 = uVar4;
    func_0x00010bf529e0();
    if (uVar16 != 0) {
      uVar16 = 0;
      do {
        _dispatch_group_enter(puVar9);
        puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
        _objc_opt_new(PTR__OBJC_CLASS___UIImage_1126aea68);
        func_0x00010befa120(puVar6);
        _objc_release(puVar10);
        uVar7 = uVar4;
        func_0x00010c0dfd40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar8);
        _objc_release(uVar7);
        uVar16 = uVar16 + 1;
        uVar7 = uVar4;
        func_0x00010bf529e0();
      } while (uVar16 < uVar7);
    }
    _objc_initWeak(&dStack_a0,param_3);
    puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_105860190;
    puStack_e8 = &UNK_1108b8730;
    _objc_copyWeak(auStack_a8,&dStack_a0);
    _objc_retain(puVar9);
    puStack_e0 = puVar9;
    _objc_retain(uVar4);
    uStack_d8 = uVar4;
    _objc_retain(param_5);
    lStack_d0 = param_5;
    _objc_retain(puVar6);
    puStack_c8 = puVar6;
    _objc_retain(puVar8);
    puStack_c0 = puVar8;
    _objc_retain(puVar1);
    puStack_b8 = puVar1;
    uStack_b0 = param_3;
    func_0x00010bfbf180(puVar5);
    uVar13 = 0x19;
    func_0x0001000819a8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar10;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_1058606b8;
    puStack_130 = &UNK_11085ae98;
    _objc_retain(param_5);
    lStack_128 = param_5;
    _objc_copyWeak(auStack_108,&dStack_a0);
    puStack_120 = puVar6;
    puStack_118 = puVar8;
    puStack_110 = puVar1;
    _objc_retain(puVar1);
    _objc_retain(puVar8);
    _objc_retain(puVar6);
    func_0x000100bc0718(puVar9,uVar13,&puStack_148);
    _objc_release(uVar13);
    _objc_release(puStack_110);
    _objc_release(puStack_118);
    _objc_release(puStack_120);
    _objc_destroyWeak(auStack_108);
    _objc_release(lStack_128);
    _objc_release(puStack_b8);
    _objc_release(puStack_c0);
    _objc_release(puStack_c8);
    _objc_release(lStack_d0);
    _objc_release(uStack_d8);
    _objc_release(puStack_e0);
    _objc_release(puVar1);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(&dStack_a0);
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  else {
LAB_1058600c4:
    puVar12 = (undefined *)0x0;
  }
LAB_1058600c8:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105860190; end: 1058606b7;  */

void FUN_105860190(long param_1,undefined8 *param_2,undefined **param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1058605f0;
  uVar8 = *(ulong *)(param_1 + 0x28);
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_a0 = param_2[2];
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(puVar2);
  if (uVar8 == 0x7fffffffffffffff) goto LAB_1058605f0;
  if (param_5 == 2) {
    param_3 = &PTR____CFConstantStringClassReference_110e08d18;
LAB_1058604ec:
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_105860668;
    lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x40);
    goto LAB_1058604f8;
  }
  if (param_5 == 1) {
    param_3 = &PTR____CFConstantStringClassReference_110e08cf8;
    goto LAB_1058604ec;
  }
  if (param_5 != 0) {
    param_3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1058604ec;
  }
  if (param_3 != (undefined **)0x0) {
    param_3 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9240();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar9 = 0;
  while( true ) {
    if (*(long *)(param_1 + 0x30) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x50);
    }
    _objc_retain(uVar12);
    uVar3 = uVar12;
    func_0x00010bf529e0();
    _objc_release(uVar12);
    if (uVar3 <= uVar9) break;
    if (*(long *)(param_1 + 0x30) == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x50);
    }
    _objc_retain(lVar14);
    lVar10 = lVar14;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    if (lVar10 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_b0,lVar10);
    }
    uStack_c8 = param_2[1];
    uStack_d0 = *param_2;
    uStack_c0 = param_2[2];
    puVar4 = &uStack_b0;
    _CMTimeRangeContainsTime(puVar4,&uStack_d0);
    ppuVar5 = param_3;
    if ((int)puVar4 != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        ppuVar15 = (undefined **)0x0;
      }
      else {
        ppuVar15 = *(undefined ***)(*(long *)(param_1 + 0x30) + 0x48);
      }
      _objc_retain(ppuVar15);
      ppuVar5 = ppuVar15;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      _objc_release(ppuVar15);
    }
    _objc_release(lVar10);
    uVar9 = uVar9 + 1;
    param_3 = ppuVar5;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x40);
  }
  _objc_retain(lVar14);
  if (param_3 == (undefined **)0x0) {
    _objc_release(lVar14);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar14 == 0) {
      uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110e08cd8;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      uVar11 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c0dfd40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0();
      _objc_release(uVar11);
      _objc_release(puVar2);
    }
    param_3 = (undefined **)0x0;
    goto LAB_1058605e8;
  }
  _objc_release(lVar14);
  if (lVar14 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c0dfd40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60();
    goto LAB_10586052c;
  }
  _os_unfair_lock_lock(lVar1 + 8);
  func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x30) == 0) {
    _objc_retain(0);
LAB_105860680:
    _objc_retain(0);
    lVar14 = 0;
LAB_1058604b4:
    _objc_release(lVar14);
  }
  else {
    lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x40);
    _objc_retain(lVar14);
    if (lVar14 == 0) goto LAB_105860680;
    lVar10 = *(long *)(lVar14 + 0x18);
    _objc_retain(lVar10);
    if (lVar10 == 0) goto LAB_1058604b4;
    if (*(long *)(param_1 + 0x30) == 0) {
      _objc_retain(0);
      lVar13 = 0;
LAB_10586069c:
      uVar9 = 0;
    }
    else {
      lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 0x40);
      _objc_retain(lVar13);
      if (lVar13 == 0) goto LAB_10586069c;
      uVar9 = *(ulong *)(lVar13 + 0x18);
    }
    _objc_retain(uVar9);
    uVar12 = uVar9;
    func_0x00010bf529e0();
    _objc_release(uVar9);
    _objc_release(lVar13);
    _objc_release(lVar10);
    _objc_release(lVar14);
    if (uVar8 < uVar12) {
      if (*(long *)(param_1 + 0x30) == 0) {
        _objc_retain(0);
        lVar14 = 0;
LAB_1058606b0:
        uVar11 = 0;
      }
      else {
        lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x40);
        _objc_retain(lVar14);
        if (lVar14 == 0) goto LAB_1058606b0;
        uVar11 = *(undefined8 *)(lVar14 + 0x18);
      }
      _objc_retain(uVar11);
      uVar6 = uVar11;
      func_0x00010c0dfd40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x40));
      _objc_release(uVar6);
      _objc_release(uVar11);
      goto LAB_1058604b4;
    }
  }
  _os_unfair_lock_unlock(lVar1 + 8);
LAB_1058605e8:
  while( true ) {
    _objc_release(param_3);
LAB_1058605f0:
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar1);
    _objc_release(param_6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) break;
    ___stack_chk_fail();
LAB_105860668:
    lVar14 = 0;
LAB_1058604f8:
    _objc_retain(lVar14);
    _objc_release(lVar14);
    if (lVar14 == 0) {
      uVar11 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c0dfd40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0();
LAB_10586052c:
      _objc_release(uVar11);
    }
  }
  return;
}



/* Entry: 1058606b8; end: 1058607ab;  */

void FUN_1058606b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  }
  _objc_retain(lVar4);
  _objc_release(lVar4);
  if (lVar4 != 0) {
    lVar4 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar4);
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
    }
    _objc_retain(uVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1058607ac;
    puStack_50 = &UNK_110850cc8;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar3);
    uStack_48 = uVar3;
    func_0x00010bf08740(lVar4,param_2,uVar5,uVar1,uVar2,&puStack_68);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(uStack_48);
  }
  return;
}



/* Entry: 1058607ac; end: 10586081b;  */

void FUN_1058607ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf97e80(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10586081c; end: 10586087b;  */

void FUN_10586081c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10586087c; end: 105860b33; -[SCVideoThumbnailGenerator applyOverlayState:toThumbnails:atPresentationTimes:completion:] */

void FUN_10586087c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x28;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_3 + 8);
  }
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar2;
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    (**(code **)(param_6 + 0x10))(param_6,param_4);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105860b50;
    puStack_90 = &UNK_1108b87d0;
    _objc_retain(param_5);
    uStack_88 = param_5;
    _objc_retain(puVar3);
    puStack_80 = puVar3;
    func_0x00010bf97e80(param_4);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    if (param_3 == 0) {
      _objc_retain(0);
      lVar5 = 0;
      uVar6 = 0;
      uStack_d8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_e0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_d0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      bVar1 = true;
    }
    else {
      lVar5 = *(long *)(param_3 + 0x10);
      _objc_retain(lVar5);
      bVar1 = lVar5 == 0;
      if (lVar5 == 0) {
        uStack_d8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
        uStack_e0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
        uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
        uStack_d0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
        uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
        uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      }
      else {
        unaff_x28 = *(long *)(param_3 + 0x10);
        _objc_retain(unaff_x28);
        if (unaff_x28 == 0) {
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
        }
        else {
          func_0x00010bdc0fc0(&uStack_e0,unaff_x28);
        }
      }
      uVar6 = *(undefined8 *)(param_3 + 0x20);
    }
    _objc_retain(uVar6);
    _objc_retain(param_4);
    _objc_retain(param_6);
    func_0x00010c250620(uVar4);
    _objc_release(uVar6);
    if (!bVar1) {
      _objc_release(unaff_x28);
    }
    _objc_release(lVar5);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(puStack_80);
    _objc_release(uStack_88);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105860b34; end: 105860b4f;  */

uint FUN_105860b34(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c081f20(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 105860b50; end: 105860c4b;  */

void FUN_105860b50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bf5b8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b73e2b8(puVar1,param_2,uVar2);
  _objc_release(param_2);
  _objc_release(uVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105860c4c; end: 10586112b; -[SCVideoThumbnailGenerator _sampleTimesWithRequest:] */

void FUN_105860c4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_3 + 0x10);
  }
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  if (lVar1 != 0) {
    if (param_3 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = *(undefined **)(param_3 + 0x10);
    }
    _objc_retain(puVar5);
    goto LAB_105861054;
  }
  uStack_148 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_150 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  unaff_x22 = *(long *)(PTR__kCMTimeZero_110348670 + 0x10);
  if (param_3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_3 + 0x20);
  }
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  lStack_a0 = unaff_x22;
  _objc_retain(lVar4);
  _objc_release(lVar4);
  if (lVar4 == 0) {
    if (param_3 == 0) {
      _objc_retain(0);
LAB_1058610b4:
      lVar4 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      lStack_d0 = 0;
    }
    else {
      lVar4 = *(long *)(param_3 + 8);
      _objc_retain(lVar4);
      if (lVar4 == 0) goto LAB_1058610b4;
      func_0x00010bf8b160(&uStack_e0,lVar4);
    }
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    lStack_80 = lStack_d0;
    uVar7 = uStack_e0;
    _objc_release(lVar4);
    if (param_3 == 0) goto LAB_1058610dc;
LAB_105860da0:
    fVar9 = (float)uVar7;
    uVar7 = *(undefined8 *)(param_3 + 0x38);
  }
  else {
    if (param_3 == 0) {
      _objc_retain(0);
LAB_105860d64:
      lVar4 = 0;
      uStack_c8 = 0;
      lStack_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      lVar4 = *(long *)(param_3 + 0x20);
      _objc_retain(lVar4);
      if (lVar4 == 0) goto LAB_105860d64;
      func_0x00010bdc1120(&uStack_e0,lVar4);
    }
    _objc_release(lVar4);
    uStack_88 = uStack_c0;
    uStack_90 = uStack_c8;
    lStack_80 = lStack_b8;
    uStack_a8 = uStack_d8;
    uStack_b0 = uStack_e0;
    lStack_a0 = lStack_d0;
    uVar7 = uStack_e0;
    if (param_3 != 0) goto LAB_105860da0;
LAB_1058610dc:
    fVar9 = (float)uVar7;
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  func_0x00010bfb2c80(uVar7);
  if (0.0 < fVar9) {
    if (param_3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_3 + 0x38);
    }
    _objc_retain(uVar6);
    func_0x00010bfb2c80(uVar6);
    _objc_release(uVar6);
    _objc_release(uVar7);
    fVar8 = 1.0;
    if (fVar9 == 1.0) goto LAB_105860e80;
    if (param_3 == 0) {
      _objc_retain(0);
      func_0x00010bfb2c80(0);
      dVar10 = (double)(1.0 / fVar8);
      uStack_d8 = uStack_88;
      uStack_e0 = uStack_90;
      lStack_d0 = lStack_80;
      _CMTimeMultiplyByFloat64(&uStack_90,dVar10,&uStack_e0);
      fVar9 = SUB84(dVar10,0);
      _objc_release(0);
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(param_3 + 0x38);
      _objc_retain(uVar7);
      func_0x00010bfb2c80(uVar7);
      dVar10 = (double)(1.0 / fVar8);
      uStack_d8 = uStack_88;
      uStack_e0 = uStack_90;
      lStack_d0 = lStack_80;
      _CMTimeMultiplyByFloat64(&uStack_90,dVar10,&uStack_e0);
      fVar9 = SUB84(dVar10,0);
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_3 + 0x38);
    }
    _objc_retain(uVar7);
    func_0x00010bfb2c80(uVar7);
    uStack_d8 = uStack_a8;
    uStack_e0 = uStack_b0;
    lStack_d0 = lStack_a0;
    _CMTimeMultiplyByFloat64(&uStack_b0,(double)(1.0 / fVar9),&uStack_e0);
  }
  _objc_release(uVar7);
LAB_105860e80:
  if (param_3 == 0) goto LAB_10586109c;
  lVar4 = *(long *)(param_3 + 0x18);
  do {
    _objc_retain(lVar4);
    lVar1 = lVar4;
    func_0x00010c067fc0();
    if (lVar1 < 1) {
      _objc_release(lVar4);
    }
    else {
      uStack_d8 = uStack_88;
      uStack_e0 = uStack_90;
      lStack_d0 = lStack_80;
      uStack_f8 = uStack_148;
      uStack_100 = uStack_150;
      puVar2 = &uStack_e0;
      lStack_f0 = unaff_x22;
      _CMTimeCompare(puVar2,&uStack_100);
      _objc_release(lVar4);
      if ((int)puVar2 != 0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = 0;
        if (param_3 == 0) goto LAB_105860fe4;
        do {
          unaff_x22 = *(long *)(param_3 + 0x18);
          while( true ) {
            _objc_retain(unaff_x22);
            lVar1 = unaff_x22;
            func_0x00010c067fc0();
            _objc_release(unaff_x22);
            if (lVar1 <= lVar4) goto LAB_105861054;
            if (param_3 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(undefined8 *)(param_3 + 0x18);
            }
            _objc_retain(uVar7);
            uVar6 = uVar7;
            func_0x00010c067fc0(uVar7);
            uStack_f8 = uStack_88;
            uStack_100 = uStack_90;
            lStack_f0 = lStack_80;
            _CMTimeMultiplyByRatio(&uStack_e0,&uStack_100,lVar4,uVar6);
            _objc_release(uVar7);
            uStack_118 = uStack_a8;
            uStack_120 = uStack_b0;
            lStack_110 = lStack_a0;
            uStack_138 = uStack_d8;
            uStack_140 = uStack_e0;
            lStack_130 = lStack_d0;
            _CMTimeAdd(&uStack_100,&uStack_120,&uStack_140);
            lStack_d0 = lStack_f0;
            uStack_d8 = uStack_f8;
            uStack_e0 = uStack_100;
            puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar5);
            _objc_release(puVar3);
            lVar4 = lVar4 + 1;
            if (param_3 != 0) break;
LAB_105860fe4:
            unaff_x22 = 0;
          }
        } while( true );
      }
    }
    uStack_d8 = uStack_a8;
    uStack_e0 = uStack_b0;
    lStack_d0 = lStack_a0;
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
LAB_105861054:
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
      return;
    }
    ___stack_chk_fail();
LAB_10586109c:
    lVar4 = 0;
  } while( true );
}



/* Entry: 10586112c; end: 105861133; -[SCVideoThumbnailGenerator imageProcessMultiImagesRenderer] */

undefined8 FUN_10586112c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105861134; end: 105861163; -[SCVideoThumbnailGenerator .cxx_destruct] */

void FUN_105861134(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105861164; end: 105861247; -[SCVideoThumbnailGenerationServiceProvider provide] */

void FUN_105861164(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf5c8;
  _objc_alloc(PTR_PTR_1126bf5c8);
  func_0x00010c0611e0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105861248; end: 10586132f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105861248(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126bf5c0;
  _objc_alloc(PTR_PTR_1126bf5c0);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar2 + _DAT_11272adb4;
    _objc_loadWeakRetained(lVar4);
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11272adb8;
    _objc_loadWeakRetained(lVar5);
  }
  lVar3 = lVar5;
  func_0x00010bf398e0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01d200(puVar1,param_2,lVar4,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105861330; end: 105861373; -[SCVideoThumbnailGenerationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105861330(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272adb8);
  _objc_destroyWeak(param_1 + _DAT_11272adb4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272adb0);
  return;
}



/* Entry: 105861374; end: 10586138b;  */

void FUN_105861374(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10586138c; end: 1058613fb;  */

void FUN_10586138c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058613fc; end: 1058613ff;  */

void FUN_1058613fc(void)

{
  return;
}



/* Entry: 105861400; end: 10586146f;  */

void FUN_105861400(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105861470; end: 105861473;  */

void FUN_105861470(void)

{
  return;
}



/* Entry: 105861474; end: 10586211b;  */

undefined8 FUN_105861474(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  int iStack_44c;
  undefined *puStack_440;
  undefined4 uStack_434;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 *puStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long lStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined *puStack_378;
  undefined8 *puStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  code *pcStack_358;
  undefined *puStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined8 *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_118;
  undefined4 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar9);
  _objc_release(lVar9);
  if (lVar9 == 0) goto LAB_1058616fc;
  if (param_1 == 0) goto LAB_1058620b8;
  uVar10 = *(ulong *)(param_1 + 8);
  do {
    _objc_retain(uVar10);
    uVar15 = uVar10;
    func_0x00010bf529e0();
    _objc_release(uVar10);
    if (uVar15 < 4) {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_3c8 = 0;
      uStack_3d0 = 0;
      uStack_3b8 = 0;
      plStack_3c0 = (long *)0x0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      if (param_1 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(long *)(param_1 + 8);
      }
      _objc_retain(lVar9);
      lVar17 = lVar9;
      func_0x00010bf52a60();
      lVar11 = 0;
      bVar3 = false;
      if (lVar17 != 0) {
        iVar16 = 0;
        lVar18 = *plStack_3c0;
        do {
          lVar19 = 0;
          do {
            if (*plStack_3c0 != lVar18) {
              _objc_enumerationMutation(lVar9);
            }
            lVar14 = *(long *)(lStack_3c8 + lVar19 * 8);
            if (lVar14 == 0) {
              func_0x00010befa120(puVar5);
            }
            else {
              lVar8 = *(long *)(lVar14 + 8);
              if (lVar8 == 0) {
                func_0x00010befa120(puVar5);
                lVar8 = *(long *)(lVar14 + 8);
              }
              if (lVar8 == 1) {
                _objc_retain(lVar14);
                _objc_release(lVar11);
                iVar16 = iVar16 + 1;
                lVar11 = lVar14;
              }
            }
            lVar19 = lVar19 + 1;
          } while (lVar17 != lVar19);
          lVar17 = lVar9;
          func_0x00010bf52a60();
        } while (lVar17 != 0);
        bVar3 = iVar16 == 1;
      }
      _objc_release(lVar9);
      puVar13 = puVar5;
      func_0x00010bf529e0();
      if (((puVar13 == (undefined *)0x0) && (lVar11 == 0)) ||
         (puVar13 = puVar5, func_0x00010bf529e0(), !(bool)(puVar13 < (undefined *)0x3 & bVar3))) {
LAB_105862000:
        uVar12 = 0;
      }
      else {
        if (lVar11 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(long *)(lVar11 + 0x20);
        }
        _objc_retain(lVar9);
        lVar17 = lVar9;
        func_0x00010bf529e0();
        _objc_release(lVar9);
        puVar13 = PTR__kCMTimeZero_110348670;
        if (lVar17 == 0) goto LAB_105862000;
        uStack_118 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_110 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_430 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        if (lVar11 == 0) {
          uStack_434 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
LAB_10586170c:
          puVar13 = puVar5;
          func_0x00010bf529e0();
          if (puVar13 == (undefined *)0x0) {
            uVar12 = 1;
          }
          else {
            uStack_3e8 = 0;
            uStack_3f0 = 0;
            uStack_3d8 = 0;
            uStack_3e0 = 0;
            lStack_408 = 0;
            uStack_410 = 0;
            uStack_3f8 = 0;
            plStack_400 = (long *)0x0;
            _objc_retain(puVar5);
            puStack_440 = puVar5;
            func_0x00010bf52a60();
            if (puStack_440 == (undefined *)0x0) {
              _objc_release(puVar5);
              iStack_44c = 0;
              uVar20 = 0;
LAB_105862074:
              uVar12 = 2;
              if ((uVar20 & iStack_44c == 0) == 0) {
                uVar12 = 0;
              }
            }
            else {
              uVar20 = 0;
              iStack_44c = 0;
              lVar9 = *plStack_400;
              do {
                puVar13 = (undefined *)0x0;
                do {
                  if (*plStack_400 != lVar9) {
                    _objc_enumerationMutation(puVar5);
                  }
                  lVar17 = *(long *)(lStack_408 + (long)puVar13 * 8);
                  if (lVar17 == 0) {
                    lVar18 = 0;
                  }
                  else {
                    lVar18 = *(long *)(lVar17 + 0x20);
                  }
                  _objc_retain(lVar18);
                  lVar19 = lVar18;
                  func_0x00010bf529e0();
                  _objc_release(lVar18);
                  if (lVar19 == 0) {
LAB_105861ff8:
                    _objc_release(puVar5);
                    goto LAB_105862000;
                  }
                  func_0x00010911cc48(&uStack_428,lVar17);
                  uStack_258 = uStack_118;
                  uStack_250 = (undefined8 *)CONCAT44(uStack_434,uStack_110);
                  uStack_248 = uStack_430;
                  puStack_288 = puStack_420;
                  uStack_290 = uStack_428;
                  uStack_280 = uStack_418;
                  puVar6 = &uStack_258;
                  _CMTimeCompare(puVar6,&uStack_290);
                  if ((int)puVar6 != 0) goto LAB_105861ff8;
                  if (lVar17 == 0) {
                    lVar18 = 0;
                  }
                  else {
                    lVar18 = *(long *)(lVar17 + 0x20);
                  }
                  _objc_retain(lVar18);
                  lVar19 = lVar18;
                  func_0x00010bf529e0();
                  _objc_release(lVar18);
                  if (lVar19 == 1) {
                    if (lVar11 == 0) {
                      lVar18 = 0;
                    }
                    else {
                      lVar18 = *(long *)(lVar11 + 0x20);
                    }
                    _objc_retain(lVar18);
                    lVar19 = lVar18;
                    func_0x00010bf529e0();
                    _objc_release(lVar18);
                    if (lVar19 == 1) {
                      if (lVar11 == 0) {
                        lVar18 = 0;
                      }
                      else {
                        lVar18 = *(long *)(lVar11 + 0x20);
                      }
                      _objc_retain(lVar18);
                      lVar19 = lVar18;
                      func_0x00010bfb1920();
                      _objc_retainAutoreleasedReturnValue();
                      if (lVar19 == 0) {
                        lVar14 = 0;
                      }
                      else {
                        lVar14 = *(long *)(lVar19 + 8);
                      }
                      _objc_retain(lVar14);
                      _objc_release(lVar19);
                      _objc_release(lVar18);
                      if (lVar17 == 0) {
                        lVar17 = 0;
                      }
                      else {
                        lVar17 = *(long *)(lVar17 + 0x20);
                      }
                      _objc_retain(lVar17);
                      lVar18 = lVar17;
                      func_0x00010bfb1920();
                      _objc_retainAutoreleasedReturnValue();
                      if (lVar18 == 0) {
                        lVar19 = 0;
                      }
                      else {
                        lVar19 = *(long *)(lVar18 + 8);
                      }
                      _objc_retain(lVar19);
                      _objc_release(lVar18);
                      _objc_release(lVar17);
                      lVar17 = lVar14;
                      func_0x00010c071ae0();
                      uVar4 = (uint)lVar17;
                      if (lVar14 == lVar19) {
                        uVar4 = 1;
                      }
                      _objc_release(lVar19);
                      _objc_release(lVar14);
                      uVar20 = uVar4 | uVar20;
                      iStack_44c = iStack_44c + (uVar4 ^ 1);
                    }
                    else {
                      iStack_44c = iStack_44c + 1;
                    }
                  }
                  else {
                    if (lVar17 == 0) {
                      lVar18 = 0;
                    }
                    else {
                      lVar18 = *(long *)(lVar17 + 0x20);
                    }
                    _objc_retain(lVar18);
                    lVar19 = lVar18;
                    func_0x00010bf529e0();
                    if (lVar11 == 0) {
                      lVar14 = 0;
                    }
                    else {
                      lVar14 = *(long *)(lVar11 + 0x20);
                    }
                    _objc_retain(lVar14);
                    lVar8 = lVar14;
                    func_0x00010bf529e0();
                    _objc_release(lVar14);
                    _objc_release(lVar18);
                    if (lVar19 != lVar8) goto LAB_105861ff8;
                    uVar10 = 0;
                    while( true ) {
                      if (lVar11 == 0) {
                        uVar15 = 0;
                      }
                      else {
                        uVar15 = *(ulong *)(lVar11 + 0x20);
                      }
                      _objc_retain(uVar15);
                      uVar7 = uVar15;
                      func_0x00010bf529e0();
                      _objc_release(uVar15);
                      if (uVar7 <= uVar10) break;
                      if (lVar11 == 0) {
                        lVar18 = 0;
                      }
                      else {
                        lVar18 = *(long *)(lVar11 + 0x20);
                      }
                      _objc_retain(lVar18);
                      lVar19 = lVar18;
                      func_0x00010c0dfd40();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(lVar18);
                      if (lVar17 == 0) {
                        lVar18 = 0;
                      }
                      else {
                        lVar18 = *(long *)(lVar17 + 0x20);
                      }
                      _objc_retain(lVar18);
                      lVar14 = lVar18;
                      func_0x00010c0dfd40();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(lVar18);
                      _objc_retain(lVar19);
                      _objc_retain(lVar14);
                      if (lVar19 == 0) {
                        _objc_retain(0);
LAB_105861a7c:
                        lVar18 = 0;
                        puStack_1a8 = (undefined8 *)0x0;
                        uStack_1b0 = 0;
                        uStack_1a0 = 0;
                      }
                      else {
                        lVar18 = *(long *)(lVar19 + 0x20);
                        _objc_retain(lVar18);
                        if (lVar18 == 0) goto LAB_105861a7c;
                        func_0x00010bdc1140(&uStack_1b0,lVar18);
                      }
                      _objc_release(lVar18);
                      if (lVar14 == 0) {
                        _objc_retain(0);
LAB_105861ac0:
                        lVar18 = 0;
                        puStack_1c0 = (undefined8 *)0x0;
                        uStack_1c8 = 0;
                        uStack_1b8 = 0;
                      }
                      else {
                        lVar18 = *(long *)(lVar14 + 0x20);
                        _objc_retain(lVar18);
                        if (lVar18 == 0) goto LAB_105861ac0;
                        func_0x00010bdc1140(&uStack_1c8,lVar18);
                      }
                      _objc_release(lVar18);
                      if (((ulong)puStack_1a8 & 0x100000000) == 0) {
LAB_105861cdc:
                        bVar3 = false;
                      }
                      else {
                        uStack_258 = uStack_1b0;
                        uStack_250 = puStack_1a8;
                        uStack_248 = uStack_1a0;
                        puStack_288 = puStack_1c0;
                        uStack_290 = uStack_1c8;
                        uStack_280 = uStack_1b8;
                        puVar6 = &uStack_258;
                        _CMTimeCompare(puVar6,&uStack_290);
                        if ((int)puVar6 != 0) goto LAB_105861cdc;
                        if (lVar19 == 0) {
                          _objc_retain(0);
LAB_105861b50:
                          lVar18 = 0;
                          puStack_1d8 = (undefined8 *)0x0;
                          uStack_1e0 = 0;
                          uStack_1d0 = 0;
                        }
                        else {
                          lVar18 = *(long *)(lVar19 + 0x18);
                          _objc_retain(lVar18);
                          if (lVar18 == 0) goto LAB_105861b50;
                          func_0x00010bdc1140(&uStack_1e0,lVar18);
                        }
                        _objc_release(lVar18);
                        if (lVar14 == 0) {
                          _objc_retain(0);
LAB_105861b9c:
                          lVar18 = 0;
                          puStack_1f0 = (undefined8 *)0x0;
                          uStack_1f8 = 0;
                          uStack_1e8 = 0;
                        }
                        else {
                          lVar18 = *(long *)(lVar14 + 0x18);
                          _objc_retain(lVar18);
                          if (lVar18 == 0) goto LAB_105861b9c;
                          func_0x00010bdc1140(&uStack_1f8,lVar18);
                        }
                        _objc_release(lVar18);
                        if (((ulong)puStack_1d8 & 0x100000000) == 0) goto LAB_105861cdc;
                        uStack_258 = uStack_1e0;
                        uStack_250 = puStack_1d8;
                        uStack_248 = uStack_1d0;
                        puStack_288 = puStack_1f0;
                        uStack_290 = uStack_1f8;
                        uStack_280 = uStack_1e8;
                        puVar6 = &uStack_258;
                        _CMTimeCompare(puVar6,&uStack_290);
                        if ((int)puVar6 != 0) goto LAB_105861cdc;
                        if (lVar19 == 0) {
                          _objc_retain(0);
LAB_105861c2c:
                          lVar18 = 0;
                          puStack_208 = (undefined8 *)0x0;
                          uStack_210 = 0;
                          uStack_200 = 0;
                        }
                        else {
                          lVar18 = *(long *)(lVar19 + 0x28);
                          _objc_retain(lVar18);
                          if (lVar18 == 0) goto LAB_105861c2c;
                          func_0x00010bdc1140(&uStack_210,lVar18);
                        }
                        _objc_release(lVar18);
                        if (lVar14 == 0) {
                          _objc_retain(0);
LAB_105861c78:
                          lVar18 = 0;
                          puStack_220 = (undefined8 *)0x0;
                          uStack_228 = 0;
                          uStack_218 = 0;
                        }
                        else {
                          lVar18 = *(long *)(lVar14 + 0x28);
                          _objc_retain(lVar18);
                          if (lVar18 == 0) goto LAB_105861c78;
                          func_0x00010bdc1140(&uStack_228,lVar18);
                        }
                        _objc_release(lVar18);
                        if (((ulong)puStack_208 & 0x100000000) == 0) goto LAB_105861cdc;
                        uStack_258 = uStack_210;
                        uStack_250 = puStack_208;
                        uStack_248 = uStack_200;
                        puStack_288 = puStack_220;
                        uStack_290 = uStack_228;
                        uStack_280 = uStack_218;
                        puVar6 = &uStack_258;
                        _CMTimeCompare(puVar6,&uStack_290);
                        if ((int)puVar6 != 0) goto LAB_105861cdc;
                        uStack_250 = &uStack_258;
                        uStack_258 = 0;
                        uStack_248 = 0x3032000000;
                        pcStack_240 = FUN_105861374;
                        uStack_238 = 0x105861384;
                        uStack_230 = 0;
                        puStack_288 = &uStack_290;
                        uStack_290 = 0;
                        uStack_280 = 0x3032000000;
                        pcStack_278 = FUN_105861374;
                        uStack_270 = 0x105861384;
                        uStack_268 = 0;
                        if (lVar19 == 0) {
                          uVar12 = 0;
                        }
                        else {
                          uVar12 = *(undefined8 *)(lVar19 + 8);
                        }
                        _objc_retain(uVar12);
                        uStack_2b0 = 0xc2000000;
                        pcStack_2a8 = FUN_10586138c;
                        puStack_2a0 = &UNK_11084e620;
                        puStack_298 = &uStack_258;
                        puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
                        uStack_2d8 = 0xc2000000;
                        uStack_2d0 = 0x1058613c4;
                        puStack_2c8 = &UNK_11084e6b0;
                        puStack_2c0 = &uStack_290;
                        puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
                        func_0x00010c0bc940(uVar12);
                        _objc_release(uVar12);
                        if ((uStack_250[5] == 0) && (puStack_288[5] == 0)) {
                          bVar3 = false;
                        }
                        else {
                          puStack_308 = &uStack_310;
                          uStack_310 = 0;
                          uStack_300 = 0x3032000000;
                          pcStack_2f8 = FUN_105861374;
                          uStack_2f0 = 0x105861384;
                          uStack_2e8 = 0;
                          puStack_338 = &uStack_340;
                          uStack_340 = 0;
                          uStack_330 = 0x3032000000;
                          pcStack_328 = FUN_105861374;
                          uStack_320 = 0x105861384;
                          uStack_318 = 0;
                          if (lVar14 == 0) {
                            uVar12 = 0;
                          }
                          else {
                            uVar12 = *(undefined8 *)(lVar14 + 8);
                          }
                          _objc_retain(uVar12);
                          puStack_368 = PTR___NSConcreteStackBlock_11034bd00;
                          uStack_360 = 0xc2000000;
                          pcStack_358 = FUN_105861400;
                          puStack_350 = &UNK_11084e620;
                          puStack_348 = &uStack_310;
                          puStack_390 = PTR___NSConcreteStackBlock_11034bd00;
                          uStack_388 = 0xc2000000;
                          uStack_380 = 0x105861438;
                          puStack_378 = &UNK_11084e6b0;
                          puStack_370 = &uStack_340;
                          func_0x00010c0bc940(uVar12);
                          _objc_release(uVar12);
                          uVar15 = uStack_250[5];
                          func_0x00010c071ae0();
                          if (((uVar15 & 1) == 0) &&
                             ((puStack_288[5] == 0 || (puStack_338[5] != puStack_288[5])))) {
                            bVar3 = false;
                          }
                          else {
                            bVar3 = true;
                          }
                          __Block_object_dispose(&uStack_340,8);
                          _objc_release(uStack_318);
                          __Block_object_dispose(&uStack_310,8);
                          _objc_release(uStack_2e8);
                        }
                        __Block_object_dispose(&uStack_290,8);
                        _objc_release(uStack_268);
                        __Block_object_dispose(&uStack_258,8);
                        _objc_release(uStack_230);
                      }
                      _objc_release(lVar14);
                      _objc_release(lVar19);
                      _objc_release(lVar14);
                      _objc_release(lVar19);
                      uVar10 = uVar10 + 1;
                      if (!bVar3) goto LAB_105861ff8;
                    }
                    uVar20 = 1;
                  }
                  puVar13 = puVar13 + 1;
                } while (puVar13 != puStack_440);
                puStack_440 = puVar5;
                func_0x00010bf52a60();
              } while (puStack_440 != (undefined *)0x0);
              _objc_release(puVar5);
              if ((iStack_44c < 2) && ((uVar20 & iStack_44c == 1) == 0)) {
                if (((uVar20 & 1) != 0) || (iStack_44c != 1)) goto LAB_105862074;
                uVar12 = 3;
              }
              else {
                uVar12 = 4;
              }
            }
          }
        }
        else {
          func_0x00010911cc48(&uStack_258,lVar11);
          uVar2 = uStack_248;
          puVar1 = uStack_250;
          uStack_118 = uStack_258;
          uStack_110 = (undefined4)uStack_250;
          uStack_434 = uStack_250._4_4_;
          puStack_288 = *(undefined8 **)(puVar13 + 8);
          uStack_290 = *(undefined8 *)puVar13;
          puVar6 = &uStack_258;
          uStack_280 = uStack_430;
          _CMTimeCompare(puVar6,&uStack_290);
          uVar12 = 0;
          if ((0 < (int)puVar6) && (((ulong)puVar1 & 0x100000000) != 0)) {
            uStack_430 = uVar2;
            goto LAB_10586170c;
          }
        }
      }
      _objc_release(puVar5);
      _objc_release(lVar11);
    }
    else {
LAB_1058616fc:
      uVar12 = 0;
    }
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return uVar12;
    }
    ___stack_chk_fail();
LAB_1058620b8:
    uVar10 = 0;
  } while( true );
}



/* Entry: 10586211c; end: 1058624c7;  */

void FUN_10586211c(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uStack_1d0;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar6 = param_1;
  FUN_105861474();
  if (2 < uVar6) {
    uStack_1d0 = param_1;
    func_0x00010911c750(param_1,1);
    _objc_retainAutoreleasedReturnValue();
    if (uStack_1d0 == 0) goto LAB_105862484;
    lVar8 = *(long *)(uStack_1d0 + 0x20);
    goto LAB_105862194;
  }
  uVar7 = 0;
  do {
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
      return;
    }
    ___stack_chk_fail();
LAB_105862484:
    lVar8 = 0;
LAB_105862194:
    _objc_retain(lVar8);
    lVar2 = lVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)(lVar2 + 8);
    }
    _objc_retain(uVar6);
    _objc_release(lVar2);
    _objc_release(lVar8);
    puStack_128 = &uStack_130;
    uStack_130 = 0;
    uStack_120 = 0x3032000000;
    pcStack_118 = FUN_105861374;
    uStack_110 = 0x105861384;
    uStack_108 = 0;
    if (param_1 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(param_1 + 8);
    }
    _objc_retain(lVar8);
    lVar2 = lVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar8);
        }
        lVar11 = *(long *)(lVar5 * 8);
        if (lVar11 == 0) {
          uVar9 = 0;
LAB_105862280:
          _objc_retain(uVar9);
          uVar3 = uVar9;
          func_0x00010bf529e0();
          _objc_release(uVar9);
          if (uVar3 < 2) {
            if (lVar11 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = *(long *)(lVar11 + 0x20);
            }
            _objc_retain(lVar10);
            lVar4 = lVar10;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            if (lVar4 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(undefined8 *)(lVar4 + 8);
            }
            _objc_retain(uVar7);
            _objc_release(lVar4);
            _objc_release(lVar10);
            uVar9 = uVar6;
            func_0x00010c071ae0();
            if ((uVar9 & 1) == 0) {
              if (lVar11 == 0) {
                lVar11 = 0;
              }
              else {
                lVar11 = *(long *)(lVar11 + 0x20);
              }
              _objc_retain(lVar11);
              lVar10 = lVar11;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              if (lVar10 == 0) {
                uVar12 = 0;
              }
              else {
                uVar12 = *(undefined8 *)(lVar10 + 8);
              }
              _objc_retain(uVar12);
              func_0x00010c0bc940(uVar12);
              _objc_release(uVar12);
              _objc_release(lVar10);
              _objc_release(lVar11);
            }
            _objc_release(uVar7);
          }
        }
        else if (*(long *)(lVar11 + 8) == 0) {
          uVar9 = *(ulong *)(lVar11 + 0x20);
          goto LAB_105862280;
        }
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    uVar7 = puStack_128[5];
    _objc_retain(uVar7);
    __Block_object_dispose(&uStack_130,8);
    _objc_release(uStack_108);
    _objc_release(uVar6);
    _objc_release(uStack_1d0);
  } while( true );
}



/* Entry: 1058624c8; end: 105862547;  */

void FUN_1058624c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105862548; end: 10586254b;  */

void FUN_105862548(void)

{
  return;
}



/* Entry: 10586254c; end: 105862f57; -[SCNGSMELegacyBackedPlayer initWithPlayerModel:blizzardLogger:] */

undefined8 * FUN_10586254c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puStack_2a0;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_280 = PTR_PTR_1126eaa30;
  puVar2 = &uStack_288;
  uStack_288 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 == (undefined8 *)0x0) goto LAB_105862e9c;
  _objc_retain(param_3);
  plVar11 = puVar2 + 0xe;
  lVar3 = *plVar11;
  *plVar11 = param_3;
  _objc_release(lVar3);
  if (*plVar11 == 0) goto LAB_105862ef0;
  lVar3 = *(long *)(*plVar11 + 8);
  do {
    _objc_retain(lVar3);
    _objc_retain(lVar3);
    _objc_retain(param_4);
    lVar17 = lVar3;
    FUN_105861474();
    if (lVar17 == 0) {
      puVar13 = (undefined *)0x0;
      lVar17 = 0;
    }
    else {
      lVar4 = lVar3;
      func_0x00010911c750(lVar3,1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uStack_148 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_150 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_140 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      lStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      plStack_180 = (long *)0x0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      if (lVar4 == 0) {
        puStack_2a0 = (undefined *)0x0;
      }
      else {
        puStack_2a0 = *(undefined **)(lVar4 + 0x20);
      }
      _objc_retain(puStack_2a0);
      puVar6 = puStack_2a0;
      func_0x00010bf52a60();
      puVar13 = PTR___NSConcreteStackBlock_11034bd00;
      if (puVar6 != (undefined *)0x0) {
        lVar15 = *plStack_180;
        do {
          puVar18 = (undefined *)0x0;
          do {
            if (*plStack_180 != lVar15) {
              _objc_enumerationMutation(puStack_2a0);
            }
            lVar19 = *(long *)(lStack_188 + (long)puVar18 * 8);
            ppuStack_130 = &puStack_138;
            puStack_138 = (undefined *)0x0;
            uStack_128 = 0x3032000000;
            pcStack_120 = FUN_105861374;
            uStack_118 = 0x105861384;
            uStack_110 = 0;
            puStack_1b8 = &uStack_1c0;
            uStack_1c0 = 0;
            uStack_1b0 = 0x3032000000;
            pcStack_1a8 = FUN_105861374;
            uStack_1a0 = 0x105861384;
            uStack_198 = 0;
            if (lVar19 == 0) {
              uVar12 = 0;
            }
            else {
              uVar12 = *(undefined8 *)(lVar19 + 8);
            }
            _objc_retain(uVar12);
            uStack_1e0 = 0xc2000000;
            uStack_1d8 = 0x1058641d0;
            puStack_1d0 = &UNK_11084e620;
            ppuStack_1c8 = &puStack_138;
            puStack_210 = puVar13;
            uStack_208 = 0xc2000000;
            uStack_200 = 0x105864208;
            puStack_1f8 = &UNK_11084e6b0;
            puStack_1f0 = &uStack_1c0;
            puStack_1e8 = puVar13;
            func_0x00010c0bc940(uVar12);
            _objc_release(uVar12);
            puVar7 = ppuStack_130[5];
            if ((puVar7 == (undefined *)0x0) && (puStack_1b8[5] == 0)) {
              bVar1 = false;
            }
            else {
              func_0x00010c0f58c0();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              func_0x00010c0720c0();
              _objc_release(puVar7);
              if ((int)puVar8 == 0) {
                if (ppuStack_130[5] == (undefined *)0x0) {
                  puVar7 = (undefined *)0x0;
                }
                else {
                  puVar7 = PTR_PTR_1126bf5f8;
                  _objc_alloc(PTR_PTR_1126bf5f8);
                  func_0x00010bff4640();
                  puVar8 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
                  func_0x00010bf0b9e0();
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar8 == (undefined *)0x0) {
                    uStack_260 = 0;
                    uStack_258 = 0;
                    uStack_250 = 0;
                  }
                  else {
                    func_0x00010bf8b160(&uStack_260,puVar8);
                  }
                  func_0x00010c1faa00(puVar7);
                  _objc_release(puVar8);
                }
                if (puStack_1b8[5] != 0) {
                  puVar8 = PTR_PTR_1126bf5f8;
                  _objc_alloc(PTR_PTR_1126bf5f8);
                  func_0x00010c060ba0();
                  _objc_release(puVar7);
                  if (puStack_1b8[5] == 0) {
                    uStack_260 = 0;
                    uStack_258 = 0;
                    uStack_250 = 0;
                  }
                  else {
                    func_0x00010bf8b160(&uStack_260);
                  }
                  func_0x00010c1faa00(puVar8);
                  if (lVar19 == 0) {
                    _objc_retain(0);
LAB_105862a00:
                    lVar16 = 0;
                    uStack_260 = 0;
                    uStack_258 = 0;
                    uStack_250 = 0;
                  }
                  else {
                    lVar16 = *(long *)(lVar19 + 0x20);
                    _objc_retain(lVar16);
                    if (lVar16 == 0) goto LAB_105862a00;
                    func_0x00010bdc1140(&uStack_260,lVar16);
                  }
                  if (puStack_1b8[5] == 0) {
                    uStack_228 = 0;
                    uStack_220 = 0;
                    uStack_218 = 0;
                  }
                  else {
                    func_0x00010bf8b160(&uStack_228);
                  }
                  puVar9 = &uStack_260;
                  _CMTimeCompare(puVar9,&uStack_228);
                  _objc_release(lVar16);
                  puVar7 = puVar8;
                  if ((int)puVar9 != 0) {
                    if (lVar19 == 0) {
                      _objc_retain(0);
                      uStack_220 = 0;
                      uStack_218 = 0;
                      uStack_228 = 0;
                      _objc_retain(0);
                      puVar7 = (undefined *)0x0;
LAB_105862ab4:
                      lVar19 = 0;
                      uStack_278 = 0;
                      uStack_270 = 0;
                      uStack_268 = 0;
                    }
                    else {
                      puVar7 = *(undefined **)(lVar19 + 0x18);
                      _objc_retain(puVar7);
                      if (puVar7 == (undefined *)0x0) {
                        uStack_228 = 0;
                        uStack_220 = 0;
                        uStack_218 = 0;
                      }
                      else {
                        func_0x00010bdc1140(&uStack_228,puVar7);
                      }
                      lVar19 = *(long *)(lVar19 + 0x20);
                      _objc_retain(lVar19);
                      if (lVar19 == 0) goto LAB_105862ab4;
                      func_0x00010bdc1140(&uStack_278,lVar19);
                    }
                    _CMTimeRangeMake(&uStack_260,&uStack_228,&uStack_278);
                    func_0x00010c21a5e0(puVar8);
                    goto LAB_105862adc;
                  }
                }
              }
              else {
                puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
                _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
                puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
                func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c008240(puVar7);
                _objc_release(puVar8);
                puVar8 = PTR_PTR_1126bf5f0;
                _objc_alloc(PTR_PTR_1126bf5f0);
                func_0x00010bff4660();
                if (lVar19 == 0) {
                  _objc_retain(0);
LAB_1058629dc:
                  lVar19 = 0;
                  uStack_260 = 0;
                  uStack_258 = 0;
                  uStack_250 = 0;
                }
                else {
                  lVar19 = *(long *)(lVar19 + 0x20);
                  _objc_retain(lVar19);
                  if (lVar19 == 0) goto LAB_1058629dc;
                  func_0x00010bdc1140(&uStack_260,lVar19);
                }
                func_0x00010c1faa00(puVar8);
LAB_105862adc:
                _objc_release(lVar19);
                _objc_release(puVar7);
                puVar7 = puVar8;
              }
              uStack_258 = uStack_148;
              uStack_260 = uStack_150;
              uStack_250 = uStack_140;
              func_0x00010c209a60(puVar7);
              func_0x00010befa120(puVar5);
              puVar8 = puVar5;
              func_0x00010c089820();
              _objc_retainAutoreleasedReturnValue();
              if (puVar8 == (undefined *)0x0) {
                uStack_248 = 0;
                uStack_250 = 0;
                uStack_238 = 0;
                uStack_240 = 0;
                uStack_258 = 0;
                uStack_260 = 0;
              }
              else {
                func_0x00010bf4d840(&uStack_260,puVar8);
              }
              _CMTimeRangeGetEnd(&uStack_228,&uStack_260);
              uStack_148 = uStack_220;
              uStack_150 = uStack_228;
              uStack_140 = uStack_218;
              _objc_release(puVar8);
              _objc_release(puVar7);
              bVar1 = true;
            }
            __Block_object_dispose(&uStack_1c0,8);
            _objc_release(uStack_198);
            __Block_object_dispose(&puStack_138,8);
            _objc_release(uStack_110);
            if (!bVar1) {
              puVar13 = (undefined *)0x0;
              lVar17 = 0;
              goto LAB_105862cc0;
            }
            puVar18 = puVar18 + 1;
          } while (puVar6 != puVar18);
          puVar6 = puStack_2a0;
          func_0x00010bf52a60();
        } while (puVar6 != (undefined *)0x0);
      }
      _objc_release(puStack_2a0);
      puStack_2a0 = PTR_PTR_1126bf600;
      _objc_alloc();
      func_0x00010c043a60();
      puVar6 = PTR_PTR_1126bf608;
      _objc_alloc();
      func_0x00010c0526e0();
      puVar13 = PTR_PTR_1126bf610;
      _objc_alloc();
      puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_138 = puVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c015260();
      _objc_release(puVar18);
      if (lVar17 - 3U < 2) {
        lVar17 = lVar3;
        FUN_10586211c();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar17 = 0;
      }
      _objc_release(puVar6);
LAB_105862cc0:
      _objc_release(puStack_2a0);
      _objc_release(puVar5);
      _objc_release(lVar4);
    }
    _objc_release(param_4);
    _objc_release(lVar3);
    uVar12 = puVar2[2];
    puVar2[2] = puVar13;
    _objc_release(uVar12);
    uVar12 = puVar2[3];
    puVar2[3] = lVar17;
    _objc_release(uVar12);
    _objc_release(lVar3);
    if (puVar2[0xe] == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(puVar2[0xe] + 0x10);
    }
    _objc_retain(uVar12);
    uVar14 = uVar12;
    FUN_105862f58();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar2[4];
    puVar2[4] = uVar14;
    _objc_release(uVar10);
    _objc_release(uVar12);
    puVar13 = PTR_PTR_1126bf5d0;
    _objc_alloc();
    puVar5 = PTR_PTR_1126bf4d0;
    func_0x00010c22bec0(PTR_PTR_1126bf4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfee7c0();
    puVar9 = puVar2 + 6;
    uVar12 = *puVar9;
    *puVar9 = puVar13;
    _objc_release(uVar12);
    _objc_release(puVar5);
    uVar14 = *puVar9;
    _objc_retain(uVar14);
    puVar9 = puVar2 + 0x10;
    uVar12 = *puVar9;
    *puVar9 = uVar14;
    _objc_release(uVar12);
    func_0x00010c16bf60(*puVar9);
    puVar13 = PTR_PTR_1126ae820;
    _objc_opt_new();
    puVar9 = puVar2 + 7;
    uVar12 = *puVar9;
    *puVar9 = puVar13;
    _objc_release(uVar12);
    puVar13 = PTR_PTR_1126af5d0;
    uVar12 = *puVar9;
    if (puVar2[2] == 0) {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar12);
      _objc_release(puVar13);
    }
    else {
      puVar5 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar12);
    }
    _objc_release(puVar5);
LAB_105862e9c:
    _objc_release(param_4);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return puVar2;
    }
    ___stack_chk_fail();
LAB_105862ef0:
    lVar3 = 0;
  } while( true );
}



/* Entry: 105862f58; end: 1058631c7;  */

void FUN_105862f58(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar4 = PTR_PTR_1126bf618;
    _objc_alloc(PTR_PTR_1126bf618);
    puVar5 = PTR_PTR_1126bf4d0;
    func_0x00010c22bec0(PTR_PTR_1126bf4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b26c8;
    func_0x00010c22b820();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03c7c0(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_1);
    lVar2 = param_1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(param_1);
          }
          uVar3 = *(undefined8 *)(lStack_128 + lVar10 * 8);
          FUN_1058639e8(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(uVar3);
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = param_1;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(param_1);
    puVar4 = PTR_PTR_1126bf618;
    _objc_alloc(PTR_PTR_1126bf618);
    puVar6 = PTR_PTR_1126bf4d0;
    func_0x00010c22bec0(PTR_PTR_1126bf4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03c7c0(puVar4);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar1);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1058631c8;
  puVar4 = PTR_PTR_1126ae4e8;
  lStack_150 = lVar1;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_105863268;
  puStack_160 = &UNK_110842e18;
  lStack_158 = lVar2;
  func_0x00010c2775c0();
  _objc_release(puVar4);
  puStack_180 = PTR_PTR_1126eaa30;
  lStack_188 = lVar2;
  _objc_msgSendSuper2(&lStack_188,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1058631c8; end: 105863267; -[SCNGSMELegacyBackedPlayer dealloc] */

void FUN_1058631c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105863268;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  func_0x00010c2775c0();
  _objc_release(puVar1);
  puStack_50 = PTR_PTR_1126eaa30;
  uStack_58 = param_1;
  _objc_msgSendSuper2(&uStack_58,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105863268; end: 105863273;  */

void FUN_105863268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2568b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80),PTR_s_stopRunning_112673450);
  return;
}



/* Entry: 105863274; end: 1058632b7; -[SCNGSMELegacyBackedPlayer _currentStatus] */

undefined8 FUN_105863274(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x50) == 2) {
    return 5;
  }
  if (*(ulong *)(param_1 + 0x58) < 3) {
    return *(undefined8 *)(&UNK_10ddbfbe8 + *(ulong *)(param_1 + 0x58) * 8);
  }
  uVar1 = 4;
  if (*(long *)(param_1 + 0x48) != 2) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1058632b8; end: 10586332b; -[SCNGSMELegacyBackedPlayer _generateAndPublishCurrentState] */

void FUN_1058632b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010bdf7220();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10586332c;
  puStack_40 = &UNK_110844b80;
  uStack_30 = 0;
  uStack_38 = param_1;
  uStack_28 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_30);
  return;
}



/* Entry: 10586332c; end: 1058633eb;  */

void FUN_10586332c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126bf5d8;
  _objc_alloc(PTR_PTR_1126bf5d8);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x20) == 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010bf60480(&uStack_60);
  }
  uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  _CMTimeMaximum(auStack_48,&uStack_60,&uStack_80);
  func_0x00010af1f234(0x3f800000,0,puVar1,uVar3,auStack_48,*(undefined8 *)(param_1 + 0x28),0);
  func_0x00010be84480(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1058633ec; end: 105863447; -[SCNGSMELegacyBackedPlayer _publishState:] */

void FUN_1058633ec(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + 0x60));
  if ((uVar1 & 1) == 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(ulong *)(param_1 + 0x60) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105863448; end: 105863463; -[SCNGSMELegacyBackedPlayer _observePlayerAndItem] */

void FUN_105863448(long param_1)

{
  *(undefined8 *)(param_1 + 0x50) = 1;
  *(undefined8 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_addListener__11259c008,param_1);
  return;
}



/* Entry: 105863464; end: 1058635b3; -[SCNGSMELegacyBackedPlayer canChangeModelWithoutRestart:] */

bool FUN_105863464(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  uVar6 = *(ulong *)(param_1 + 0x70);
  _objc_retain(uVar6);
  uVar7 = uVar6;
  func_0x00010c071ae0();
  if ((uVar7 & 1) != 0) {
    bVar1 = true;
    goto LAB_105863578;
  }
  if (uVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ulong *)(uVar6 + 8);
  }
  _objc_retain(uVar7);
  if (param_3 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(param_3 + 8);
  }
  _objc_retain(lVar8);
  uVar2 = uVar7;
  func_0x00010c071ae0();
  if ((uVar2 & 1) == 0) {
    lVar3 = lVar8;
    FUN_105861474();
    bVar1 = false;
    if (lVar3 != 0) {
      lVar4 = lVar8;
      func_0x00010911c750(lVar8,1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010911c750(uVar7,1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(lVar4);
      if ((int)lVar5 == 0) {
        bVar1 = false;
      }
      else {
        if (lVar3 == 2) goto LAB_1058634e0;
        bVar1 = lVar3 - 3U < 2;
      }
    }
  }
  else {
LAB_1058634e0:
    bVar1 = true;
  }
  _objc_release(lVar8);
  _objc_release(uVar7);
LAB_105863578:
  _objc_release(uVar6);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1058635b4; end: 1058639e7; -[SCNGSMELegacyBackedPlayer setPlayerModel:] */

void FUN_1058635b4(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar10 = *(ulong *)(param_1 + 0x70);
  _objc_retain(uVar10);
  uVar11 = uVar10;
  func_0x00010c071ae0();
  if ((uVar11 & 1) != 0) goto LAB_10586396c;
  if (uVar10 == 0) goto LAB_1058639b8;
  uVar11 = *(ulong *)(uVar10 + 8);
  while( true ) {
    _objc_retain(uVar11);
    if (param_3 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(ulong *)(param_3 + 8);
    }
    _objc_retain(uVar12);
    uVar13 = uVar11;
    func_0x00010c071ae0();
    if ((uVar13 & 1) == 0) {
      uVar13 = uVar12;
      FUN_105861474();
      puVar2 = PTR_PTR_1126af5d0;
      if (uVar13 == 0) {
        uVar14 = *(undefined8 *)(param_1 + 0x38);
        puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar14);
        _objc_release(puVar2);
        _objc_release(puVar1);
      }
      uVar3 = uVar12;
      func_0x00010911c750(uVar12,1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar11;
      func_0x00010911c750(uVar11,1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      puVar2 = PTR_PTR_1126af5d0;
      if ((uVar5 & 1) == 0) {
        uVar14 = *(undefined8 *)(param_1 + 0x38);
        puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar14);
        _objc_release(puVar2);
        _objc_release(puVar1);
      }
      if (uVar13 == 2) {
        func_0x00010c16bf60(*(undefined8 *)(param_1 + 0x80));
      }
      else if (uVar13 - 3 < 2) {
        uVar14 = *(undefined8 *)(param_1 + 0x80);
        uVar13 = uVar12;
        FUN_10586211c(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16bf60(uVar14);
        _objc_release(uVar13);
      }
    }
    if (uVar10 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(ulong *)(uVar10 + 0x10);
    }
    _objc_retain(uVar13);
    if (param_3 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(param_3 + 0x10);
    }
    _objc_retain(lVar15);
    if ((uVar13 != 0 || lVar15 != 0) && (uVar3 = uVar13, func_0x00010c071b60(), (uVar3 & 1) == 0)) {
      if (*(long *)(param_1 + 0x20) == 0) {
        lVar8 = lVar15;
        FUN_105862f58();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = *(undefined8 *)(param_1 + 0x20);
        *(long *)(param_1 + 0x20) = lVar8;
        _objc_release(uVar14);
      }
      else {
        lVar8 = lVar15;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar8;
        FUN_1058639e8();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf529e0();
        uVar14 = *(undefined8 *)(param_1 + 0x20);
        if (lVar7 == 0) {
          func_0x00010c1d6f20(uVar14);
        }
        else {
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d6f20(uVar14);
          _objc_release(puVar2);
        }
        _objc_release(lVar6);
        _objc_release(lVar8);
      }
      uVar14 = *(undefined8 *)(param_1 + 0x80);
      lVar8 = lVar15;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2235a0(uVar14);
      _objc_release(lVar8);
    }
    _objc_retain(param_3);
    uVar14 = *(undefined8 *)(param_1 + 0x70);
    *(long *)(param_1 + 0x70) = param_3;
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    param_1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar14);
    _objc_release(param_1);
    _objc_release(lVar15);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
LAB_10586396c:
    _objc_release(uVar10);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) break;
    ___stack_chk_fail();
LAB_1058639b8:
    uVar11 = 0;
  }
  return;
}



/* Entry: 1058639e8; end: 105863afb;  */

void FUN_1058639e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x18);
  }
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar1 != 0) {
    if (param_1 == 0) goto LAB_105863af4;
    puVar4 = *(undefined **)(param_1 + 0x18);
    while( true ) {
      _objc_retain(puVar4);
      puVar2 = puVar4;
      func_0x00010c0b8620(puVar4,param_2,&PTR___NSConcreteGlobalBlock_1108b8910,0);
      _objc_retainAutoreleasedReturnValue();
LAB_105863aa4:
      _objc_release(puVar4);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) break;
      ___stack_chk_fail();
LAB_105863af4:
      puVar4 = (undefined *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  puVar4 = PTR_PTR_1126b26c8;
  func_0x00010c22b820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  goto LAB_105863aa4;
}



/* Entry: 105863afc; end: 105863b23; -[SCNGSMELegacyBackedPlayer playerModelObservable] */

void FUN_105863afc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105863b24; end: 105863b4b; -[SCNGSMELegacyBackedPlayer playerStatusObservable] */

void FUN_105863b24(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105863b4c; end: 105863b53; -[SCNGSMELegacyBackedPlayer playerPhaseObservable] */

undefined8 FUN_105863b4c(void)

{
  return 0;
}



/* Entry: 105863b54; end: 105863b5b; -[SCNGSMELegacyBackedPlayer getSampleBufferAtTime:] */

undefined8 FUN_105863b54(void)

{
  return 0;
}



/* Entry: 105863b5c; end: 105863bc7; -[SCNGSMELegacyBackedPlayer getRenderedImage] */

void FUN_105863b5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e08d58,
                      &PTR____CFConstantStringClassReference_110e08d98,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010bfe9c80(PTR_PTR_1126ae558,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105863bc8; end: 105863d17; -[SCNGSMELegacyBackedPlayer setPlayerView:] */

void FUN_105863bc8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c100ce0();
  puVar2 = PTR_PTR_1126bf5d0;
  if ((int)uVar1 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x80);
    _objc_retain(uVar5);
    _objc_opt_class(puVar2);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar1 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR_PTR_1126bf5e0;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar3 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    if (uVar3 != 0) {
      _objc_retain(param_3);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      *(ulong *)(param_1 + 0x28) = param_3;
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      puVar2 = PTR__OBJC_CLASS___AVPlayer_1126bf5e8;
      _objc_opt_new(PTR__OBJC_CLASS___AVPlayer_1126bf5e8);
      uVar5 = param_3;
      func_0x00010bfccde0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c228ca0(uVar4);
      _objc_release(uVar5);
      _objc_release(puVar2);
    }
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105863d18; end: 105863d23; -[SCNGSMELegacyBackedPlayer setShouldLoop:] */

void FUN_105863d18(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c2009b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_setShouldLoop__11265dc90);
  return;
}



/* Entry: 105863d24; end: 105863d67; -[SCNGSMELegacyBackedPlayer setStartTimestamp:] */

void FUN_105863d24(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0xb0) = param_3[2];
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010c209aa0(*(undefined8 *)(param_1 + 0x80),param_2,&uStack_30);
  return;
}



/* Entry: 105863d68; end: 105863dab; -[SCNGSMELegacyBackedPlayer setEndTimestamp:] */

void FUN_105863d68(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 200) = param_3[2];
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010c196240(*(undefined8 *)(param_1 + 0x80),param_2,&uStack_30);
  return;
}



/* Entry: 105863dac; end: 105863db7; -[SCNGSMELegacyBackedPlayer setPreciseSeeking:] */

void FUN_105863dac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x69) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1dfc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_setPreciseSeeking__112655938);
  return;
}



/* Entry: 105863db8; end: 105863dbf; -[SCNGSMELegacyBackedPlayer setVolume:] */

void FUN_105863db8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x80),PTR_s_setVolume__112666a90)
  ;
  return;
}



/* Entry: 105863dc0; end: 105863dc7; -[SCNGSMELegacyBackedPlayer volume] */

void FUN_105863dc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a0dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x80),PTR_s_volume_112685d98);
  return;
}



/* Entry: 105863dc8; end: 105863dcb; -[SCNGSMELegacyBackedPlayer setRenderSize:] */

void FUN_105863dc8(void)

{
  return;
}



/* Entry: 105863dcc; end: 105863ea3; -[SCNGSMELegacyBackedPlayer prepareToPlay] */

void FUN_105863dcc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2775c0();
  _objc_release(puVar1);
  return;
}



/* Entry: 105863ea4; end: 105863eab; -[SCNGSMELegacyBackedPlayer startRunning] */

void FUN_105863ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13d7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_resumeRunning_11262d010);
  return;
}



/* Entry: 105863eac; end: 105863eb7; -[SCNGSMELegacyBackedPlayer pauseRunning] */

void FUN_105863eac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f6010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_pauseRunningAndContinueRendering_11261b220,1);
  return;
}



/* Entry: 105863eb8; end: 105863ebf; -[SCNGSMELegacyBackedPlayer resumeRunning] */

void FUN_105863eb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13d7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_resumeRunning_11262d010);
  return;
}



/* Entry: 105863ec0; end: 105863ec7; -[SCNGSMELegacyBackedPlayer stopRunning] */

void FUN_105863ec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2568b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_stopRunning_112673450);
  return;
}



/* Entry: 105863ec8; end: 105863edf; -[SCNGSMELegacyBackedPlayer setPlaybackRate:] */

void FUN_105863ec8(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 < param_1) {
    fVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1ddb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)fVar1,*(undefined8 *)(param_2 + 0x80),PTR_s_setPlayerRate__1126550f8);
  return;
}



/* Entry: 105863ee0; end: 105863ee7; -[SCNGSMELegacyBackedPlayer seekVideoAndAudioToBeginning] */

void FUN_105863ee0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1573b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_seekVideoAndAudioToBeginning_112633708);
  return;
}



/* Entry: 105863ee8; end: 105863f1b; -[SCNGSMELegacyBackedPlayer seekToTime:] */

void FUN_105863ee8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010c157260(*(undefined8 *)(param_1 + 0x80),param_2,&uStack_30);
  return;
}



/* Entry: 105863f1c; end: 105863f7f; -[SCNGSMELegacyBackedPlayer seekToTime:completionHandler:] */

void FUN_105863f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  func_0x00010c157260(param_1);
  (**(code **)(param_4 + 0x10))(param_4,1);
  _objc_release(param_4);
  return;
}



/* Entry: 105863f80; end: 105863fb3; -[SCNGSMELegacyBackedPlayer stopPlayingAndSeekSmoothlyToTime:] */

void FUN_105863f80(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010c256620(*(undefined8 *)(param_1 + 0x80),param_2,&uStack_30);
  return;
}



/* Entry: 105863fb4; end: 105863fbb; -[SCNGSMELegacyBackedPlayer isPlaying] */

void FUN_105863fb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x80),PTR_s_isPlaying_1125fc310);
  return;
}



/* Entry: 105863fbc; end: 105863fc3; -[SCNGSMELegacyBackedPlayer shouldBeRunning] */

void FUN_105863fbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x80),PTR_s_isPlaying_1125fc310);
  return;
}



/* Entry: 105863fc4; end: 105863fdb; -[SCNGSMELegacyBackedPlayer currentTime] */

void FUN_105863fc4(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf60490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_2 + 0x80),PTR_s_currentTime_1125b5ac8);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 105863fdc; end: 105863fdf; -[SCNGSMELegacyBackedPlayer videoPlaybackSession:didRenderFrameAtTime:] */

void FUN_105863fdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1a8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateAndPublishCurrentState_1125643d8);
  return;
}



/* Entry: 105863fe0; end: 105863ff3; -[SCNGSMELegacyBackedPlayer videoPlaybackSessionPlayerItemStatusFailed:] */

void FUN_105863fe0(long param_1)

{
  *(undefined8 *)(param_1 + 0x50) = 2;
  *(undefined8 *)(param_1 + 0x48) = 2;
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be1a8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateAndPublishCurrentState_1125643d8);
  return;
}



/* Entry: 105863ff4; end: 105864007; -[SCNGSMELegacyBackedPlayer videoPlaybackSessionPlayerItemFailedToSetup:] */

void FUN_105863ff4(long param_1)

{
  *(undefined8 *)(param_1 + 0x50) = 2;
  *(undefined8 *)(param_1 + 0x48) = 2;
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be1a8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateAndPublishCurrentState_1125643d8);
  return;
}



/* Entry: 105864008; end: 10586401f; -[SCNGSMELegacyBackedPlayer videoPlaybackSessionDidStartRunning:] */

void FUN_105864008(long param_1)

{
  *(undefined8 *)(param_1 + 0x50) = 1;
  *(undefined8 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x58) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010be1a8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateAndPublishCurrentState_1125643d8);
  return;
}



/* Entry: 105864020; end: 10586402f; -[SCNGSMELegacyBackedPlayer videoPlaybackSessionDidResumeRunning:] */

void FUN_105864020(long param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010be1a8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateAndPublishCurrentState_1125643d8);
  return;
}



/* Entry: 105864030; end: 10586403b; -[SCNGSMELegacyBackedPlayer videoPlaybackSessionDidPauseRunning:] */

void FUN_105864030(long param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be1a8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateAndPublishCurrentState_1125643d8);
  return;
}



/* Entry: 10586403c; end: 105864047; -[SCNGSMELegacyBackedPlayer videoPlaybackSessionDidStopRunning:] */

void FUN_10586403c(long param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be1a8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateAndPublishCurrentState_1125643d8);
  return;
}



/* Entry: 105864048; end: 10586404b; -[SCNGSMELegacyBackedPlayer clearLastFrameImage] */

void FUN_105864048(void)

{
  return;
}



/* Entry: 10586404c; end: 105864053; -[SCNGSMELegacyBackedPlayer playerModel] */

undefined8 FUN_10586404c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105864054; end: 10586405b; -[SCNGSMELegacyBackedPlayer playbackLogger] */

undefined8 FUN_105864054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10586405c; end: 10586408b; -[SCNGSMELegacyBackedPlayer setPlaybackLogger:] */

void FUN_10586405c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10586408c; end: 105864093; -[SCNGSMELegacyBackedPlayer shouldLoop] */

undefined1 FUN_10586408c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}



/* Entry: 105864094; end: 1058640a7; -[SCNGSMELegacyBackedPlayer startTimestamp] */

void FUN_105864094(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  param_1[1] = *(undefined8 *)(param_2 + 0xa8);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0xb0);
  return;
}



/* Entry: 1058640a8; end: 1058640bb; -[SCNGSMELegacyBackedPlayer endTimestamp] */

void FUN_1058640a8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  param_1[1] = *(undefined8 *)(param_2 + 0xc0);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 200);
  return;
}



/* Entry: 1058640bc; end: 1058640c3; -[SCNGSMELegacyBackedPlayer preciseSeeking] */

undefined1 FUN_1058640bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x69);
}



/* Entry: 1058640c4; end: 1058640cb; -[SCNGSMELegacyBackedPlayer legacyPreviewPlayer] */

undefined8 FUN_1058640c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1058640cc; end: 1058640fb; -[SCNGSMELegacyBackedPlayer setLegacyPreviewPlayer:] */

void FUN_1058640cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058640fc; end: 105864103; -[SCNGSMELegacyBackedPlayer playerView] */

undefined8 FUN_1058640fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105864104; end: 10586410b; -[SCNGSMELegacyBackedPlayer renderSize] */

undefined1  [16] FUN_105864104(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x90);
}



/* Entry: 10586410c; end: 105864113; -[SCNGSMELegacyBackedPlayer publishVideoFramesEnabled] */

undefined1 FUN_10586410c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x6a);
}



/* Entry: 105864114; end: 10586411b; -[SCNGSMELegacyBackedPlayer setPublishVideoFramesEnabled:] */

void FUN_105864114(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x6a) = param_3;
  return;
}



/* Entry: 10586411c; end: 105864123; -[SCNGSMELegacyBackedPlayer videoFrameObservable] */

undefined8 FUN_10586411c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 105864124; end: 10586423f; -[SCNGSMELegacyBackedPlayer .cxx_destruct] */

void FUN_105864124(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105864240; end: 105864257;  */

void FUN_105864240(void)

{
  return;
}



/* Entry: 105864258; end: 1058642e7;  */

void FUN_105864258(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a4fb8);
  uVar1 = param_2;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058642e8; end: 10586448f; -[SCNGSMEPlaybackServiceProvider _getPlayerFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058642e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126bf628;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11272ae10;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c100e20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272ae14;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11272ae18;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1 + _DAT_11272ae1c;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11272ae20;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272ae24;
  _objc_loadWeakRetained(param_1);
  lVar11 = param_1;
  func_0x00010bf41d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037260(puVar1,param_2,lVar3,lVar5,lVar6,lVar8,lVar10,lVar12);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105864490; end: 105864503; -[SCNGSMEPlaybackServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105864490(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272ae24);
  _objc_destroyWeak(param_1 + _DAT_11272ae20);
  _objc_destroyWeak(param_1 + _DAT_11272ae1c);
  _objc_destroyWeak(param_1 + _DAT_11272ae18);
  _objc_destroyWeak(param_1 + _DAT_11272ae14);
  _objc_destroyWeak(param_1 + _DAT_11272ae10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272ae28);
  return;
}


