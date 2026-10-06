/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d1fcc0; end: 105d1fe0f; -[SCPreviewFeatureAttachmentStickerServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d1fcc0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112734b40;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar6;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112734b44;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar6;
  func_0x00010c084e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105d1fe10;
  puStack_58 = &UNK_1108e60c8;
  puVar3 = PTR_PTR_1126ae720;
  lStack_50 = lVar1;
  lStack_48 = lVar2;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c41a8;
  _objc_alloc(PTR_PTR_1126c41a8);
  func_0x00010bff4b80();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112734b48);
  }
  func_0x00010bf9d660(uVar5,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105d1fe10; end: 105d1fe77;  */

void FUN_105d1fe10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c41a0;
  _objc_alloc(PTR_PTR_1126c41a0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c740(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d1fe78; end: 105d1fecb; -[SCPreviewFeatureAttachmentStickerServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d1fe78(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734b48,0);
  _objc_destroyWeak(param_1 + _DAT_112734b44);
  _objc_destroyWeak(param_1 + _DAT_112734b40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734b3c);
  return;
}



/* Entry: 105d1fecc; end: 105d1ff77; -[SCPreviewFeatureAttachmentStickerServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d1fecc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112734b4c;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112734b54;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf0d2c0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d1ff78; end: 105d1ffbb; -[SCPreviewFeatureAttachmentStickerServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d1ff78(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734b54);
  _objc_destroyWeak(param_1 + _DAT_112734b50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734b4c);
  return;
}



/* Entry: 105d1ffbc; end: 105d2048b; -[SCPreviewFeatureAudioEffectsImpl initWithPreviewConfiguration:bounceFeature:musicFeature:musicExperiments:voiceoverFeature:videoPlayback:audioEffectsScopeExposer:snapDocEditor:previewABServices:legacySnapEditor:ttsServices:snapEditor:audioEffectsMixingConfigProvider:notificationPool:] */

undefined8 *
FUN_105d1ffbc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_70 = PTR_PTR_1126ecf38;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_9);
    uVar3 = puVar2[1];
    puVar2[1] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[3];
    puVar2[3] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[2];
    puVar2[2] = param_5;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126afee0;
    _objc_retain(param_3);
    _objc_opt_class(puVar4);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    uVar1 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar3 = puVar2[0xf];
    puVar2[0xf] = uVar1;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[4];
    puVar2[4] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[5];
    puVar2[5] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[8];
    puVar2[8] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[7];
    puVar2[7] = param_11;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[0x10];
    puVar2[0x10] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[9];
    puVar2[9] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[10];
    puVar2[10] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_16;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0x15];
    puVar2[0x15] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c41b0;
    _objc_alloc();
    uVar3 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c039880();
    uVar8 = puVar2[0x13];
    puVar2[0x13] = puVar4;
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_initWeak(auStack_80,puVar2);
    _objc_retain(param_3);
    puVar4 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    uVar1 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010befa300(uVar1);
    func_0x00010c18b5e0(puVar2[0x13]);
    _objc_destroyWeak(auStack_88);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105d2048c; end: 105d204bf;  */

void FUN_105d2048c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c10a2c0(*(undefined8 *)(param_1 + 0x98));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d204c0; end: 105d20b53; -[SCPreviewFeatureAudioEffectsImpl activate] */

void FUN_105d204c0(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x00010c083340();
  if (iVar1 != 0) {
    uVar2 = param_1;
    func_0x00010beb62a0();
    if ((int)uVar2 != 0) {
      func_0x00010be7c8a0(param_1);
    }
    _objc_initWeak(auStack_80,param_1);
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x80));
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar3;
    _objc_release(uVar7);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c0d4000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105d20b54;
    puStack_90 = &UNK_110842a38;
    _objc_copyWeak(auStack_88,auStack_80);
    uVar5 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c2a0960();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar3;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105d20bb4;
    puStack_b8 = &UNK_11084eff0;
    _objc_copyWeak(auStack_b0,auStack_80);
    uVar5 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c2a0aa0();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar3;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_105d20bfc;
    puStack_e0 = &UNK_110852548;
    _objc_copyWeak(auStack_d8,auStack_80);
    uVar5 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c0d4000();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar3;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_105d20d48;
    puStack_108 = &UNK_110842a38;
    _objc_copyWeak(auStack_100,auStack_80);
    uVar5 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c0d3720();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar3;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_105d20da8;
    puStack_130 = &UNK_11084eff0;
    _objc_copyWeak(auStack_128,auStack_80);
    uVar5 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar4);
    uVar2 = param_1;
    func_0x00010bdd11a0();
    if ((uVar2 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c0c7da0();
      _objc_retainAutoreleasedReturnValue();
      puStack_170 = puVar3;
      uStack_168 = 0xc2000000;
      uStack_160 = 0x105d20df0;
      puStack_158 = &UNK_11084eff0;
      _objc_copyWeak(auStack_150,auStack_80);
      uVar5 = uVar7;
      func_0x00010c25ff60(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar5);
      _objc_release(uVar7);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c0d2c20();
      _objc_retainAutoreleasedReturnValue();
      puStack_198 = puVar3;
      uStack_190 = 0xc2000000;
      pcStack_188 = FUN_105d20e48;
      puStack_180 = &UNK_1108e6128;
      _objc_copyWeak(auStack_178,auStack_80);
      uVar5 = uVar7;
      func_0x00010c25ff60(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar5);
      _objc_release(uVar7);
      _objc_release(uVar4);
      puStack_1c0 = puVar3;
      uStack_1b8 = 0xc2000000;
      pcStack_1b0 = FUN_105d20fd8;
      puStack_1a8 = &UNK_110842a38;
      _objc_copyWeak(auStack_1a0,auStack_80);
      func_0x00010be96260(param_1);
      iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
      func_0x00010c070a20();
      if (iVar1 != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010bf51de0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar7;
        func_0x00010c27d240();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_1c8,auStack_80);
        uVar4 = uVar5;
        func_0x00010c25ff60(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(uVar4);
        _objc_release(uVar5);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_destroyWeak(auStack_1c8);
      }
      func_0x00010c2888a0(param_1);
      _objc_destroyWeak(auStack_1a0);
      _objc_destroyWeak(auStack_178);
      _objc_destroyWeak(auStack_150);
    }
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  return;
}



/* Entry: 105d20b54; end: 105d20bb3;  */

void FUN_105d20b54(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bdfc2a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d20bb4; end: 105d20bfb;  */

void FUN_105d20bb4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33440();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d20bfc; end: 105d20ce7;  */

void FUN_105d20bfc(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105d20ce8;
  puStack_50 = &UNK_1108e60f8;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0bdac0(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 105d20ce8; end: 105d20d47;  */

void FUN_105d20ce8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d20d48; end: 105d20da7;  */

void FUN_105d20d48(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bdfc2a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d20da8; end: 105d20e47;  */

void FUN_105d20da8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c7e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d20e48; end: 105d20f33;  */

void FUN_105d20e48(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105d20f34;
  puStack_50 = &UNK_1108434b0;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0bdac0(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 105d20f34; end: 105d20f7b;  */

void FUN_105d20f34(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be26440();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d20f7c; end: 105d20fd7;  */

void FUN_105d20f7c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be26460();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d20fd8; end: 105d2103f;  */

void FUN_105d20fd8(undefined8 param_1,long param_2,long param_3)

{
  if (param_3 != 0) {
    _objc_retain(param_3);
    param_2 = param_2 + 0x20;
    _objc_loadWeakRetained(param_2);
    func_0x00010bfb2c80(param_3);
    _objc_release(param_3);
    func_0x00010bed3f20(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 105d21040; end: 105d2110f;  */

void FUN_105d21040(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105d21110; end: 105d21143;  */

void FUN_105d21110(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee1dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d21144; end: 105d2116f; -[SCPreviewFeatureAudioEffectsImpl snapEditor:didTriggerLifecycle:] */

void FUN_105d21144(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    return;
  }
  func_0x00010be61b20();
                    /* WARNING: Could not recover jumptable at 0x00010c283870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateAudioFunctionality_11267e840);
  return;
}



/* Entry: 105d21170; end: 105d217eb; -[SCPreviewFeatureAudioEffectsImpl snapEditor:updateLoggingWithBuilder:] */

void FUN_105d21170(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  byte bVar10;
  undefined *unaff_x20;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  float fVar17;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined **ppuStack_170;
  uint uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x00010c083340();
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x89) == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c15a4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c277e80();
      func_0x00010841fab4();
      _objc_retainAutoreleasedReturnValue();
      uStack_158 = uVar4;
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    else {
      uStack_158 = 0;
    }
    if (*(char *)(param_1 + 0x88) == '\x01') {
      bVar10 = *(byte *)(param_1 + 0x89);
    }
    else {
      bVar10 = 0;
    }
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c0e00e0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e09c38);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0xa8);
    ppuVar15 = &PTR____CFConstantStringClassReference_110e2a938;
    func_0x00010c0e00e0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e2a938);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    _objc_retain(uVar2);
    uVar5 = param_1;
    func_0x00010be617c0();
    if ((int)uVar5 == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
      uStack_160 = uVar3;
      func_0x00010c06c920();
      if (iVar1 == 0) {
        bVar10 = 0;
        uVar12 = 0;
      }
      else {
        bVar10 = *(byte *)(param_1 + 0x89);
        uVar12 = (uint)*(byte *)(param_1 + 0x88);
      }
      func_0x00010c2b4280(param_4,param_2,bVar10 & 1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uStack_164 = uVar12;
      func_0x00010c2bcbc0(param_4,param_2,uVar12 & 1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uStack_160;
      if ((bVar10 & 1) == 0) {
        func_0x00010c2b42c0(param_4,param_2,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      else {
        ppuStack_170 = &PTR____CFConstantStringClassReference_110e2a938;
        func_0x00010c2b42c0(param_4,param_2,uStack_160);
        _objc_unsafeClaimAutoreleasedReturnValue();
        ppuVar15 = ppuStack_170;
        puVar8 = PTR_PTR_1126c41b8;
        func_0x00010bfb2c80(uVar3);
        func_0x00010bf54ae0(puVar8,param_2,&PTR____CFConstantStringClassReference_110e09c38,
                            uStack_158);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar14,param_2,puVar8);
        _objc_release(puVar8);
      }
      if ((uStack_164 & 1) == 0) {
        func_0x00010c2bcbe0(param_4,param_2,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      else {
        func_0x00010c2bcbe0(param_4,param_2,uVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126c41b8;
        func_0x00010bfb2c80(uVar4);
        func_0x00010bf54ae0(puVar8,param_2,ppuVar15,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar14,param_2,puVar8);
        _objc_release(puVar8);
      }
      if (iVar1 == 0) {
        func_0x00010c2a9240(param_4,param_2,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar3 = uStack_160;
      }
      else {
        func_0x00010c2a9240(param_4,param_2,uVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126c41b8;
        func_0x00010bfb2c80(uVar2);
        func_0x00010bf54ae0(puVar8,param_2,&PTR____CFConstantStringClassReference_110edbbf8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar14,param_2,puVar8);
        _objc_release(puVar8);
        uVar3 = uStack_160;
      }
    }
    else {
      func_0x00010c2b4280(param_4,param_2,bVar10 & 1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2bcbc0(param_4,param_2,bVar10 & 1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      if ((bVar10 & 1) == 0) {
        func_0x00010c2b42c0(param_4,param_2,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2bcbe0(param_4,param_2,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar14 = (undefined *)0x0;
      }
      else {
        func_0x00010c2b42c0(param_4,param_2,uVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2bcbe0(param_4,param_2,uVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126c41b8;
        puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bfb2c80(uVar3);
        func_0x00010bf54ae0(puVar8,param_2,&PTR____CFConstantStringClassReference_110e09c38,
                            uStack_158);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126c41b8;
        puStack_90 = puVar8;
        func_0x00010bfb2c80(uVar4);
        func_0x00010bf54ae0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e2a938,0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_88 = puVar6;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0a0c0(puVar14,param_2,puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar8);
      }
      func_0x00010c2a9240(param_4,param_2,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010bed6140(param_1,param_2,puVar14);
    uVar9 = *(ulong *)(param_1 + 0x28);
    func_0x00010c2991a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar9;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    uVar9 = uVar5;
    func_0x00010bf529e0();
    if (uVar9 == 0) {
      fVar17 = 0.0;
    }
    else {
      uVar16 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      _objc_retain(uVar5);
      uVar9 = uVar5;
      func_0x00010bf52a60(uVar5,param_2,&uStack_150,auStack_110,0x10);
      if (uVar9 == 0) {
        fVar17 = 0.0;
      }
      else {
        lVar11 = *plStack_140;
        fVar17 = 0.0;
        do {
          uVar13 = 0;
          do {
            if (*plStack_140 != lVar11) {
              _objc_enumerationMutation(uVar5);
            }
            func_0x00010bf99700(*(undefined8 *)(lStack_148 + uVar13 * 8));
            fVar17 = fVar17 + (float)uVar16;
            uVar13 = uVar13 + 1;
          } while (uVar9 != uVar13);
          uVar9 = uVar5;
          func_0x00010bf52a60(uVar5,param_2,&uStack_150,auStack_110,0x10);
        } while (uVar9 != 0);
      }
      _objc_release(uVar5);
      uVar9 = uVar5;
      func_0x00010bf529e0(uVar5);
      fVar17 = fVar17 / (float)uVar9;
    }
    unaff_x20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(fVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a8be0(param_4,param_2,unaff_x20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(unaff_x20);
    func_0x00010bee8a20();
    if ((param_1 & 1) == 0) {
      func_0x00010c2a8c40(param_4,param_2,&PTR____CFConstantStringClassReference_110e28cf8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b9b40(param_4,param_2,1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      param_3 = 1;
      func_0x00010c2b9b20(param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      param_3 = 0;
      func_0x00010c2a8c40(param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(uVar5);
    _objc_release(puVar14);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uStack_158);
  }
  lVar11 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    pcStack_178 = FUN_105d217ec;
    puStack_190 = unaff_x20;
    lStack_188 = param_4;
    puStack_180 = &stack0xfffffffffffffff0;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(lVar11 + 0x40);
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_105d21874;
    puStack_1a0 = &UNK_110853ea0;
    uStack_198 = param_3;
    _objc_retain(param_3);
    func_0x00010c2849a0(uVar3,param_2,&puStack_1b8);
    _objc_release(uStack_198);
    _objc_release(param_3);
    return;
  }
  return;
}



/* Entry: 105d217ec; end: 105d21873; -[SCPreviewFeatureAudioEffectsImpl _updateContextClientInfoWithAudioMixArray:] */

void FUN_105d217ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105d21874;
  puStack_30 = &UNK_110853ea0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c2849a0(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105d21874; end: 105d218cb;  */

void FUN_105d21874(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bf529e0();
  func_0x00010c16be80(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d218cc; end: 105d2190f; -[SCPreviewFeatureAudioEffectsImpl configureWithView:] */

void FUN_105d218cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x70,param_3);
  func_0x00010c1e2420(*(undefined8 *)(param_1 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d21910; end: 105d21937; -[SCPreviewFeatureAudioEffectsImpl toolbarItemManager] */

void FUN_105d21910(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d21938; end: 105d21b8f; -[SCPreviewFeatureAudioEffectsImpl openAudioEffectsTool] */

void FUN_105d21938(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  uVar2 = param_1;
  func_0x00010c231ae0();
  if ((int)uVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar3 = param_1 + 200;
  _objc_loadWeakRetained(lVar3);
  lVar5 = lVar3;
  func_0x00010c0f3d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar4,param_2,lVar5,1);
  _objc_release(lVar5);
  _objc_release(lVar3);
  uVar6 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c0e00e0(uVar6,param_2,&PTR____CFConstantStringClassReference_110e09c38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  if (*(char *)(param_1 + 0x89) == '\0') {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = param_1;
  func_0x00010be617c0();
  uVar11 = 0;
  if ((uVar2 & 1) == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0xa0);
  }
  _objc_retain(uVar11);
  if (*(char *)(param_1 + 0x89) == '\x01') {
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar7;
    func_0x00010c15a720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (*(char *)(param_1 + 0x89) == '\x01') {
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010c15a4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c277e80();
      func_0x00010c0df880(puVar13,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar8);
      goto LAB_105d21af8;
    }
  }
  else {
    uVar12 = 0;
  }
  puVar13 = (undefined *)0x0;
LAB_105d21af8:
  puVar10 = PTR_PTR_1126c41c0;
  _objc_alloc(PTR_PTR_1126c41c0);
  func_0x00010c058960();
  _objc_release(uVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105d21b90; end: 105d21b93; -[SCPreviewFeatureAudioEffectsImpl openVoiceover] */

void FUN_105d21b90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd3df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginVoiceoverWorkflow_112552918);
  return;
}



/* Entry: 105d21b94; end: 105d21c37; -[SCPreviewFeatureAudioEffectsImpl shouldOpenAudioEffectsTool] */

byte FUN_105d21b94(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = param_1;
  func_0x00010bdd11a0();
  if ((int)uVar1 != 0) {
    bVar2 = 0;
    if (*(long *)(param_1 + 0x78) == 0) goto LAB_105d21bd0;
    uVar1 = param_1;
    func_0x00010be34020();
    if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010beb3d40(), (uVar1 & 1) == 0)) {
      uVar1 = param_1;
      func_0x00010be617c0();
      if ((uVar1 & 1) == 0) {
        bVar2 = *(byte *)(param_1 + 0x89);
        uVar1 = param_1;
        func_0x00010be617c0();
        if ((uVar1 & 1) != 0) goto LAB_105d21c0c;
        if ((bVar2 & 1) == 0) goto LAB_105d21c20;
      }
      else {
        uVar1 = param_1;
        func_0x00010be617c0();
        if ((int)uVar1 != 0) {
LAB_105d21c0c:
          if (*(char *)(param_1 + 0x89) != '\x01') goto LAB_105d21bcc;
        }
LAB_105d21c20:
        if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
          bVar2 = *(byte *)(param_1 + 0x8a);
          goto LAB_105d21bd0;
        }
      }
      bVar2 = 1;
      goto LAB_105d21bd0;
    }
  }
LAB_105d21bcc:
  bVar2 = 0;
LAB_105d21bd0:
  return bVar2 & 1;
}



/* Entry: 105d21c38; end: 105d21df3; -[SCPreviewFeatureAudioEffectsImpl updateAudioFunctionality] */

void FUN_105d21c38(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = param_1;
  func_0x00010be00660();
  if ((int)lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bdd9be0();
    if ((int)lVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0x78);
      func_0x00010bf12b80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + 0x90;
      _objc_loadWeakRetained();
      _objc_release();
      _objc_release(lVar3);
      if (lVar3 == lVar2) {
        func_0x00010c16bc20(*(undefined8 *)(param_1 + 0x78),param_2,0);
        func_0x00010c221180(PTR_PTR_1126bcd68,param_2,0,*(undefined8 *)(param_1 + 0x40));
        func_0x00010c273a60(param_1,param_2,*(undefined8 *)(param_1 + 0x98));
      }
    }
  }
  else {
    func_0x00010c16bc20(*(undefined8 *)(param_1 + 0x78),param_2,1);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
    func_0x00010bf926c0();
    if (iVar1 != 0) {
      func_0x00010c221180(PTR_PTR_1126bcd68,param_2,1,*(undefined8 *)(param_1 + 0x40));
    }
  }
  func_0x00010c22dea0();
  lVar2 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200380();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c283f40(*(undefined8 *)(param_1 + 0x98),param_2,lVar4);
  func_0x00010c2888a0(param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2876e0();
  _objc_release(uVar5);
  _objc_release(lVar4);
  return;
}



/* Entry: 105d21df4; end: 105d21e2f;  */

byte FUN_105d21df4(long param_1,long param_2)

{
  byte bVar1;
  
  func_0x00010c084c40();
  if (param_2 == 7) {
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 105d21e30; end: 105d21e37; -[SCPreviewFeatureAudioEffectsImpl setHardwareMuteSwitchActive:] */

void FUN_105d21e30(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c2888b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updatePlaybackVolume_11267fc50);
  return;
}



/* Entry: 105d21e38; end: 105d21eab; -[SCPreviewFeatureAudioEffectsImpl updatePlaybackVolume] */

void FUN_105d21e38(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x00010c083340();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = param_1;
  func_0x00010bee8a20();
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    func_0x00010c06c920();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010be00660();
      uVar3 = 0;
      if ((int)uVar2 == 0) goto LAB_105d21e90;
    }
  }
  uVar3 = 0;
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar3 = 0x3ff0000000000000;
  }
LAB_105d21e90:
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,*(undefined8 *)(param_1 + 0x28),PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 105d21eac; end: 105d21f77; -[SCPreviewFeatureAudioEffectsImpl audioEffectsToolDidAdjustSnapVolume:] */

void FUN_105d21eac(double param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bed3f20((float)param_1);
  puVar1 = auStack_28;
  _objc_initWeak(puVar1,param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105d21f78; end: 105d21fc3;  */

void FUN_105d21f78(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d140();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d21fc4; end: 105d2208f; -[SCPreviewFeatureAudioEffectsImpl audioEffectsToolDidAdjustMusicVolume:] */

void FUN_105d21fc4(double param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bedbde0((float)param_1);
  puVar1 = auStack_28;
  _objc_initWeak(puVar1,param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105d22090; end: 105d220db;  */

void FUN_105d22090(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d140();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d220dc; end: 105d22123; -[SCPreviewFeatureAudioEffectsImpl audioEffectsToolDidDismiss] */

void FUN_105d220dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105d22124; end: 105d22237; -[SCPreviewFeatureAudioEffectsImpl audioEffectsToolWantsToPresentMusicPicker] */

void FUN_105d22124(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c12e1c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c2a4ae0(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d22238; end: 105d22287;  */

void FUN_105d22238(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10d880();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d22288; end: 105d2228b; -[SCPreviewFeatureAudioEffectsImpl audioEffectsToolWantsToStartVoiceoverWorkflow] */

void FUN_105d22288(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd3df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginVoiceoverWorkflow_112552918);
  return;
}



/* Entry: 105d2228c; end: 105d2235b; -[SCPreviewFeatureAudioEffectsImpl toolbarItemManagerDidToggleAudio:] */

void FUN_105d2228c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c0d2440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee8a20(param_1);
    func_0x00010bf73000(uVar1,param_2,0,param_1);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 105d2235c; end: 105d22517; -[SCPreviewFeatureAudioEffectsImpl _retrieveMusicAudioMixDataFromSnapDoc] */

void FUN_105d2235c(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_58 [8];
  
  uVar11 = (undefined4)((ulong)param_1 >> 0x20);
  uVar10 = (undefined4)param_1;
  iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
  func_0x00010bf926c0();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_58,param_2);
    puVar2 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010be74da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (lVar3 != 0) {
      lVar4 = *(long *)(param_2 + 0x40);
      func_0x00010bfc98a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf101a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        puVar6 = *(undefined1 **)(param_2 + 0x40);
        func_0x00010c0ff640();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bfd4540();
        _objc_release(puVar7);
        if ((int)puVar8 != 0) {
          puVar7 = auStack_58;
          _objc_loadWeakRetained(puVar7);
          puVar8 = puVar6;
          func_0x00010c118b40(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bf10200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c296d80();
          func_0x00010bedbde0(puVar7);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
        }
      }
      else {
        puVar6 = auStack_58;
        _objc_loadWeakRetained(puVar6);
        func_0x00010c2a0dc0(lVar5);
        func_0x00010bedbde0((float)(double)CONCAT44(uVar11,uVar10),puVar6);
      }
      _objc_release(puVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 105d22518; end: 105d22663; -[SCPreviewFeatureAudioEffectsImpl _retrieveBaseMediaAudioMixDataFromSnapDocWithCompletion:] */

void FUN_105d22518(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x40);
    func_0x00010bf926c0();
    if ((uVar1 & 1) == 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
    else {
      puVar2 = PTR_PTR_1126affe8;
      func_0x00010c09e180(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010be74da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if (lVar3 == 0) {
        (**(code **)(param_3 + 0x10))(param_3,0);
      }
      else {
        lVar4 = *(long *)(param_1 + 0x40);
        func_0x00010bfc98a0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf101a0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar5 == 0) {
          (**(code **)(param_3 + 0x10))(param_3,0);
        }
        else {
          func_0x00010c2a0dc0(lVar5);
          func_0x00010c0df720(puVar2);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(param_3 + 0x10))(param_3,puVar2);
          _objc_release(puVar2);
        }
        _objc_release(lVar5);
        _objc_release(lVar4);
      }
      _objc_release(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d22664; end: 105d226eb; -[SCPreviewFeatureAudioEffectsImpl _shouldShowMissingSoundNotification] */

uint FUN_105d22664(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar1 = PTR__OBJC_CLASS___AVAudioSession_1126b6de8;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c1238e0();
  _objc_release(puVar1);
  if ((puVar2 != (undefined *)0x67726e74) &&
     (uVar3 = param_1, func_0x00010bdc9fe0(), (uVar3 & 1) == 0)) {
    uVar3 = *(ulong *)(param_1 + 0x78);
    func_0x00010bf0f7a0();
    if ((uVar3 & 1) == 0) {
      func_0x00010be617c0(param_1);
      return (uint)param_1 ^ 1;
    }
  }
  return 0;
}



/* Entry: 105d226ec; end: 105d227cb; -[SCPreviewFeatureAudioEffectsImpl _allSegmentsAreImageSegments] */

bool FUN_105d226ec(long param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  iVar3 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x00010bf926c0();
  if (iVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    func_0x00010c09dea0();
    if (lVar4 == 0) {
      bVar1 = true;
    }
    else {
      lVar8 = 0;
      do {
        puVar5 = PTR_PTR_1126affe8;
        func_0x00010c09e180(PTR_PTR_1126affe8,param_2,lVar8);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = *(long *)(param_1 + 0x40);
        func_0x00010c0ff580(lVar6,param_2,puVar5,&PTR___NSConcreteGlobalBlock_1108e6178);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf529e0();
        bVar1 = lVar7 == 0;
        _objc_release(lVar6);
        _objc_release(puVar5);
        bVar2 = lVar4 + -1 != lVar8;
        lVar8 = lVar8 + 1;
      } while (lVar7 == 0 && bVar2);
    }
  }
  return bVar1;
}



/* Entry: 105d227cc; end: 105d2285f;  */

bool FUN_105d227cc(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0b760();
  _objc_release(uVar2);
  if ((int)uVar3 == 5) {
    uVar2 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27dd80();
    bVar1 = (int)uVar3 != 0;
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 105d22860; end: 105d22ab7; -[SCPreviewFeatureAudioEffectsImpl _presentMissingSoundNotification] */

void FUN_105d22860(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar4 = PTR_PTR_1126c3378;
  puVar2 = PTR_PTR_1126b0c40;
  puVar3 = PTR_PTR_1126ae558;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe56a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126b15a0;
  puVar2 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf255e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x105d22af0;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar5 = &puStack_80;
  _objc_retainBlock();
  ppuVar6 = ppuVar5;
  func_0x000109201ce8();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x000109201d00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0ae0;
  func_0x00010bf57e60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined **)(param_1 + 0xc0) = puVar2;
  _objc_release(uVar8);
  func_0x00010c25f340(*(undefined8 *)(param_1 + 0x68));
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(puVar4);
  return;
}



/* Entry: 105d22ab8; end: 105d22b1b;  */

void FUN_105d22ab8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d22b1c; end: 105d22b23; -[SCPreviewFeatureAudioEffectsImpl _dismissMissingSoundNotification] */

void FUN_105d22b1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xc0),PTR_s_dismissPresenter_1125bea28);
  return;
}



/* Entry: 105d22b24; end: 105d22c17; -[SCPreviewFeatureAudioEffectsImpl _canMuteVideoAudioForMissingAudioTrack] */

bool FUN_105d22b24(ulong param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x00010c083340();
  if (iVar2 != 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x40);
    func_0x00010bf926c0();
    if (((iVar2 != 0) && (uVar3 = param_1, func_0x00010be00660(), (uVar3 & 1) == 0)) &&
       (uVar3 = param_1, func_0x00010be41060(), (uVar3 & 1) == 0)) {
      lVar4 = *(long *)(param_1 + 0x78);
      func_0x00010c0d32a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        lVar5 = *(long *)(param_1 + 0x78);
        func_0x00010bf16100();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) {
          lVar6 = *(long *)(param_1 + 0x78);
          func_0x00010c25e340();
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 == 0) {
            lVar7 = *(long *)(param_1 + 0x78);
            func_0x00010c29ae80(lVar7);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = lVar7 != 0;
            _objc_release();
          }
          else {
            bVar1 = true;
          }
          _objc_release(lVar6);
        }
        else {
          bVar1 = false;
        }
        _objc_release(lVar5);
      }
      else {
        bVar1 = false;
      }
      _objc_release(lVar4);
      return bVar1;
    }
  }
  return false;
}



/* Entry: 105d22c18; end: 105d22c5f; -[SCPreviewFeatureAudioEffectsImpl _isImportedMediaSnap] */

undefined8 FUN_105d22c18(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x78);
  func_0x00010c07e880();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x78);
    func_0x00010c07e920();
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010c07e970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_isSnapFromiOSPhoto_1125fd468);
      return uVar2;
    }
  }
  return 1;
}



/* Entry: 105d22c60; end: 105d22d73; -[SCPreviewFeatureAudioEffectsImpl _muteVideoAudioIfCaptureRecordedNoAudioTrack] */

void FUN_105d22c60(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bdd9be0();
  if ((int)lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x78);
    func_0x00010bf12b80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + 0x90;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != lVar1) {
      lVar1 = lVar2;
      func_0x00010c0d9500();
      if (lVar1 != 0) {
        _objc_initWeak(auStack_38,param_1);
        _objc_copyWeak(auStack_40,auStack_38);
        func_0x00010c09c4c0(lVar1);
        _objc_destroyWeak(auStack_40);
        _objc_destroyWeak(auStack_38);
      }
      _objc_release(lVar1);
    }
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 105d22d74; end: 105d22e67;  */

void FUN_105d22d74(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (((param_2 != 0) && (param_3 == 0)) && (lVar1 = param_2, func_0x00010bf529e0(), lVar1 == 0)) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x28);
    func_0x00010c0f7fc0(lVar1);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105d22e68; end: 105d22eef;  */

void FUN_105d22e68(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010bdd9be0(), (int)lVar2 != 0)) {
    lVar2 = *(long *)(lVar1 + 0x78);
    func_0x00010bf12b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x20);
    _objc_release();
    if (lVar2 == lVar3) {
      _objc_storeWeak(lVar1 + 0x90,*(undefined8 *)(param_1 + 0x20));
      func_0x00010c16c080(*(undefined8 *)(lVar1 + 0x78));
      func_0x00010c283860(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d22ef0; end: 105d22f23; -[SCPreviewFeatureAudioEffectsImpl _audioMixingEnabled] */

void FUN_105d22ef0(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x00010c083340();
  if (iVar1 != 0) {
    func_0x00010beb3d40(param_1);
  }
  return;
}



/* Entry: 105d22f24; end: 105d22f2b; -[SCPreviewFeatureAudioEffectsImpl _shouldForceDisableAudioMixing] */

void FUN_105d22f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c230750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_shouldForceDisableMixing_112669bf8);
  return;
}



/* Entry: 105d22f2c; end: 105d22fff; -[SCPreviewFeatureAudioEffectsImpl _canAudioMix] */

uint FUN_105d22f2c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bdd11a0();
    if ((int)uVar1 == 0) {
      uVar2 = *(ulong *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c06c5a0();
      if ((uVar1 & 1) == 0) {
        uVar4 = (uint)*(byte *)(param_1 + 0x88);
      }
      else {
        uVar4 = 1;
      }
      _objc_release(uVar2);
    }
    else {
      uVar1 = param_1;
      func_0x00010beb3d40();
      if ((uVar1 & 1) == 0) {
        uVar1 = param_1;
        func_0x00010be34020(param_1);
        uVar5 = (uint)uVar1 ^ 1;
      }
      else {
        uVar5 = 0;
      }
      uVar1 = param_1;
      func_0x00010be617c0();
      if ((int)uVar1 == 0) {
        func_0x00010be00660(param_1);
        uVar4 = (uint)param_1;
      }
      else {
        if ((*(char *)(param_1 + 0x89) == '\x01') &&
           (((*(byte *)(param_1 + 0x88) & 1) != 0 || ((*(byte *)(param_1 + 0x8a) & 1) != 0)))) {
          uVar4 = 1;
          goto LAB_105d22ff0;
        }
        uVar3 = *(undefined8 *)(param_1 + 0x78);
        func_0x00010c235600(uVar3);
        uVar4 = (uint)uVar3;
      }
      uVar4 = uVar4 & uVar5;
    }
  }
LAB_105d22ff0:
  return uVar4 & 1;
}



/* Entry: 105d23000; end: 105d2303f; -[SCPreviewFeatureAudioEffectsImpl _handleBaseAudioVolumeForEditorAppearance] */

void FUN_105d23000(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantFloatNumber_1111862f0;
  if (*(undefined ***)(param_1 + 0xa0) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0xa0);
  }
  _objc_retain(ppuVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined ***)(param_1 + 0xb0) = ppuVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d23040; end: 105d23077; -[SCPreviewFeatureAudioEffectsImpl _handleBaseAudioVolumeForEditorExitWithCancelled:] */

void FUN_105d23040(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    func_0x00010bfb2c80(*(undefined8 *)(param_1 + 0xb0));
    func_0x00010bed3f20(param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d23078; end: 105d230e3; -[SCPreviewFeatureAudioEffectsImpl _handleMusicVolumeForEditorAppearance] */

void FUN_105d23078(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  ppuVar2 = *(undefined ***)(param_1 + 0xa8);
  func_0x00010c0e00e0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110e09c38);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantFloatNumber_1111862f0;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined ***)(param_1 + 0xb8) = ppuVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 105d230e4; end: 105d2311b; -[SCPreviewFeatureAudioEffectsImpl _handleMusicVolumeForEditorExitWithCancelled:] */

void FUN_105d230e4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    func_0x00010bfb2c80(*(undefined8 *)(param_1 + 0xb8));
    func_0x00010bedbde0(param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d2311c; end: 105d233b3; -[SCPreviewFeatureAudioEffectsImpl _handleMusicSelectionUpdate:] */

void FUN_105d2311c(undefined4 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  undefined1 auStack_78 [24];
  
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(param_2 + 0x89) = lVar3 != 0;
  _objc_release();
  lVar3 = param_4;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    func_0x00010c16c500(*(undefined8 *)(param_2 + 0x28));
    func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0xa8));
    func_0x00010bed9e80(param_2);
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_2 + 0x78);
    func_0x00010c083340();
    if (iVar2 == 0) goto LAB_105d23368;
    func_0x00010bed9e80(param_2);
    puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc();
    lVar6 = lVar3;
    func_0x00010bf0ef80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0082a0();
    _objc_release(lVar6);
    func_0x00010bf0ffa0(auStack_78,lVar3);
    puVar5 = puVar4;
    func_0x000107fb6d94(puVar4,auStack_78);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_2 + 0xa8);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      param_1 = 0x3f800000;
    }
    else {
      func_0x00010bfb2c80(lVar6);
    }
    _objc_initWeak(auStack_78,param_2);
    puVar1 = PTR_PTR_1126c4028;
    _objc_copyWeak(auStack_88,auStack_78);
    _objc_retain(puVar5);
    uStack_80 = param_1;
    func_0x00010bf8b1c0(puVar1);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  uVar7 = param_2;
  func_0x00010bdd11a0();
  if (((((int)uVar7 == 0) || (uVar7 = param_2, func_0x00010be34020(), (uVar7 & 1) != 0)) ||
      (uVar7 = param_2, func_0x00010beb3d40(), (int)uVar7 != 0)) &&
     (*(char *)(param_2 + 0x88) == '\x01')) {
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12f280();
    _objc_release(uVar8);
  }
  func_0x00010be86a00(param_2);
LAB_105d23368:
  _objc_release(lVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 105d233b4; end: 105d234ab;  */

void FUN_105d233b4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_50 = param_2[2];
  uStack_48 = *(undefined4 *)(param_1 + 0x30);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 105d234ac; end: 105d235bf;  */

void FUN_105d234ac(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    puVar2 = PTR_PTR_1126bf680;
    _objc_alloc(PTR_PTR_1126bf680);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    uStack_58 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_60 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_50 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x00010b744494(*(undefined4 *)(param_1 + 0x48),puVar2,uVar5,&uStack_60,puVar3);
    _objc_release(puVar3);
    func_0x00010c16c500(*(undefined8 *)(uVar1 + 0x28));
    func_0x00010bedbde0(*(undefined4 *)(param_1 + 0x48),uVar1);
    uVar4 = uVar1;
    func_0x00010be617c0();
    if (((uVar4 & 1) == 0) && (*(long *)(uVar1 + 0xa0) == 0)) {
      func_0x00010bed3f20(0,uVar1);
    }
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 105d235c0; end: 105d2370f; -[SCPreviewFeatureAudioEffectsImpl _handleVoiceoverTrackUpdate:] */

void FUN_105d235c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(param_1 + 0x88) = lVar1 != 0;
  _objc_release();
  lVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c16c500(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xa8));
    func_0x00010bed9e80(param_1);
    func_0x00010be86a00(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(lVar1);
    func_0x00010be96260(param_1);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105d23710; end: 105d2383f;  */

void FUN_105d23710(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_105d2381c;
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar4 = *(long *)(lVar2 + 0xa0);
    _objc_retain(lVar4);
    bVar1 = lVar4 == 0;
LAB_105d23798:
    lVar3 = param_2;
    if (!bVar1) {
      lVar3 = lVar4;
    }
LAB_105d237a0:
    func_0x00010bfb2c80(lVar3);
  }
  else {
    fVar6 = *(float *)(*(long *)(param_1 + 0x20) + 8);
    lVar4 = *(long *)(lVar2 + 0xa0);
    _objc_retain(lVar4);
    bVar1 = lVar4 == 0;
    if ((param_2 != 0) || (fVar6 <= 0.0)) goto LAB_105d23798;
    lVar3 = lVar4;
    if (lVar4 != 0) goto LAB_105d237a0;
  }
  func_0x00010bed3f20(lVar2);
  func_0x00010bed9e80(lVar2);
  func_0x00010c16c500(*(undefined8 *)(lVar2 + 0x28));
  func_0x00010c1d0560(*(undefined8 *)(lVar2 + 0xa8));
  uVar5 = *(undefined8 *)(lVar2 + 0x28);
  func_0x00010be9abe0(0x3f19999a,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c28c300(uVar5);
  func_0x00010bed9e80(*(undefined8 *)(param_1 + 0x28));
  func_0x00010be86a00(*(undefined8 *)(param_1 + 0x28));
  _objc_release(lVar4);
LAB_105d2381c:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d23840; end: 105d23a53; -[SCPreviewFeatureAudioEffectsImpl _updateTextToSpeechAudio:] */

void FUN_105d23840(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010bdd11a0();
  if ((int)lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    *(bool *)(param_1 + 0x8a) = lVar3 != 0;
    if (lVar3 == 0) {
      func_0x00010c16c500(*(undefined8 *)(param_1 + 0x28));
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xa8));
      func_0x00010bed9e80(param_1);
    }
    else {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x78);
      func_0x00010c083340();
      if (iVar2 != 0) {
        func_0x00010bed9e80(param_1);
        _objc_initWeak(auStack_58,param_1);
        puVar1 = PTR_PTR_1126c4028;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_105d23a54;
        puStack_70 = &UNK_1108e6218;
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(lVar3);
        lStack_68 = lVar3;
        func_0x00010bf8b1c0(puVar1);
        func_0x00010c1d0560(*(undefined8 *)(param_1 + 0xa8));
        if (*(long *)(param_1 + 0xa0) == 0) {
          func_0x00010bed3f20(0x3f800000,param_1);
        }
        func_0x00010be86a00(param_1);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_90,auStack_58);
        func_0x00010c0f7fc0(param_1);
        _objc_release(param_1);
        _objc_destroyWeak(auStack_90);
        _objc_release(lStack_68);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
    }
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105d23a54; end: 105d23b43;  */

void FUN_105d23a54(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_50 = param_2[1];
  uStack_58 = *param_2;
  uStack_48 = param_2[2];
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 105d23b44; end: 105d23c23;  */

void FUN_105d23b44(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126bf680;
    _objc_alloc(PTR_PTR_1126bf680);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    uStack_40 = *(undefined8 *)(param_1 + 0x40);
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_50 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_40 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x00010b744494(0x3f800000,puVar2,uVar4,&uStack_50,puVar3);
    _objc_release(puVar3);
    func_0x00010c16c500(*(undefined8 *)(lVar1 + 0x28));
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105d23c24; end: 105d23c77;  */

void FUN_105d23c24(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bed9e80(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d140();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d23c78; end: 105d23e4f; -[SCPreviewFeatureAudioEffectsImpl _beginVoiceoverWorkflow] */

void FUN_105d23c78(float param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c2a0fe0(uVar1,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar1);
  uVar2 = param_2;
  func_0x00010be617c0();
  if ((*(char *)(param_2 + 0x89) == '\x01') &&
     (((uVar3 = param_2, func_0x00010bdd11a0(), (int)uVar3 == 0 ||
       (uVar3 = param_2, func_0x00010be34020(), (uVar3 & 1) != 0)) ||
      (uVar3 = param_2, func_0x00010beb3d40(), (int)uVar3 != 0)))) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3c060();
    _objc_release(uVar1);
  }
  lVar4 = *(long *)(param_2 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    _objc_initWeak(auStack_48,param_2);
    uVar1 = *(undefined8 *)(param_2 + 8);
    func_0x00010c12e1c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_4f = (undefined1)uVar2;
    uStack_50 = 0.0 < param_1;
    func_0x00010c2a4ae0(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96cc0(0x3f19999a);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d23e50; end: 105d23eb3;  */

void FUN_105d23e50(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96cc0(0x3f19999a);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d23eb4; end: 105d23f07; -[SCPreviewFeatureAudioEffectsImpl _didAdjustMuteSnapAudioToggle:] */

void FUN_105d23eb4(float param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  
  func_0x00010bfb2c80(*(undefined8 *)(param_2 + 0xa0));
  if (((param_4 & 1) == 0) && (0.0 < param_1)) {
    return;
  }
  uVar1 = 0;
  if (param_4 == 0) {
    uVar1 = 0x3f800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed3f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,param_2,PTR_s__updateBaseVolume__112592970);
  return;
}



/* Entry: 105d23f08; end: 105d24067; -[SCPreviewFeatureAudioEffectsImpl _updateMusicVolume:] */

void FUN_105d23f08(float param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [8];
  
  fVar6 = 1.0;
  fVar5 = 1.0;
  if (param_1 <= 1.0) {
    fVar5 = param_1;
  }
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  func_0x00010c0e00e0(uVar1,param_3,&PTR____CFConstantStringClassReference_110e09c38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  if (fVar5 != fVar6) {
    uVar4 = *(undefined8 *)(param_2 + 0xa8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(fVar5,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar4);
    _objc_release(puVar2);
    puVar3 = auStack_58;
    _objc_initWeak(puVar3,param_2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    fStack_60 = fVar5;
    fStack_5c = param_1;
    func_0x00010c0f7fc0(puVar3);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 105d24068; end: 105d24177;  */

void FUN_105d24068(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010be9abe0(*(undefined4 *)(param_1 + 0x28),lVar2);
    func_0x00010c28c300(*(undefined8 *)(lVar2 + 0x28),param_2,
                        &PTR____CFConstantStringClassReference_110e09c38);
    func_0x00010bed9e80(lVar2);
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x40);
    func_0x00010bf926c0();
    if (iVar1 != 0) {
      puVar3 = PTR_PTR_1126affe8;
      func_0x00010bfccec0(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010be74da0(lVar2,param_2,2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (lVar4 != 0) {
        if (*(float *)(param_1 + 0x2c) == 1.0) {
          func_0x00010c12e000(*(undefined8 *)(lVar2 + 0x40),param_2,lVar4,1);
        }
        else {
          lVar5 = lVar2;
          func_0x00010bdd11e0(*(undefined4 *)(param_1 + 0x28),lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ea660(*(undefined8 *)(lVar2 + 0x40),param_2,lVar5,lVar4,1,1);
          _objc_release(lVar5);
        }
        _objc_release(lVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105d24178; end: 105d2429b; -[SCPreviewFeatureAudioEffectsImpl _updateBaseVolume:] */

void FUN_105d24178(float param_1,long param_2)

{
  float fVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auStack_48 [8];
  float fStack_40;
  undefined1 auStack_38 [8];
  
  lVar2 = param_2;
  func_0x00010bdd11a0();
  if ((int)lVar2 != 0) {
    fVar6 = 1.0;
    fVar1 = 1.0;
    if (param_1 <= 1.0) {
      fVar1 = param_1;
    }
    if ((*(long *)(param_2 + 0xa0) == 0) || (func_0x00010bfb2c80(), fVar1 != fVar6)) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(fVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + 0xa0);
      *(undefined **)(param_2 + 0xa0) = puVar3;
      _objc_release(uVar5);
      puVar4 = auStack_38;
      _objc_initWeak(puVar4,param_2);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_48,auStack_38);
      fStack_40 = fVar1;
      func_0x00010c0f7fc0(puVar4);
      _objc_release(puVar4);
      _objc_destroyWeak(auStack_48);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 105d2429c; end: 105d243d3;  */

void FUN_105d2429c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010be9abe0(*(undefined4 *)(param_1 + 0x28),lVar2);
    func_0x00010c28c300(*(undefined8 *)(lVar2 + 0x28),param_2,0);
    func_0x00010bed9e80(lVar2);
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x40);
    func_0x00010bf926c0();
    if (iVar1 != 0) {
      lVar3 = *(long *)(lVar2 + 0x40);
      func_0x00010c09dea0();
      if (lVar3 != 0) {
        uVar7 = 0;
        do {
          puVar4 = PTR_PTR_1126affe8;
          func_0x00010c09e180(PTR_PTR_1126affe8,param_2,uVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010be74da0(lVar2,param_2,5,puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          if (lVar3 != 0) {
            if (*(float *)(param_1 + 0x28) == 0.0) {
              func_0x00010c12e000(*(undefined8 *)(lVar2 + 0x40),param_2,lVar3,1);
            }
            else {
              func_0x00010bfb2c80(*(undefined8 *)(lVar2 + 0xa0));
              lVar5 = lVar2;
              func_0x00010bdd11e0(lVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1ea660(*(undefined8 *)(lVar2 + 0x40),param_2,lVar5,lVar3,4,1);
              _objc_release(lVar5);
            }
          }
          _objc_release(lVar3);
          uVar7 = uVar7 + 1;
          uVar6 = *(ulong *)(lVar2 + 0x40);
          func_0x00010c09dea0();
        } while (uVar7 < uVar6);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105d243d4; end: 105d24447; -[SCPreviewFeatureAudioEffectsImpl _updateIsAudioMixed] */

void FUN_105d243d4(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bdd98e0();
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    func_0x00010c06c920();
    if ((uVar2 & 1) == 0) goto LAB_105d24438;
  }
  else {
    func_0x00010bee3480(param_1);
    uVar2 = param_1;
    func_0x00010bdda200();
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c06c920();
    if (uVar1 == ((uint)uVar2 ^ 1)) goto LAB_105d24438;
  }
  func_0x00010c1af420(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c283860(param_1);
LAB_105d24438:
                    /* WARNING: Could not recover jumptable at 0x00010bedbd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateMultiSnapState_1125948f0);
  return;
}



/* Entry: 105d24448; end: 105d2453b; -[SCPreviewFeatureAudioEffectsImpl _canUseOverride] */

bool FUN_105d24448(float param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  func_0x00010bfb2c80(*(undefined8 *)(param_2 + 0xa0));
  lVar2 = *(long *)(param_2 + 0xa8);
  fVar6 = param_1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_1 == 0.0) && (lVar3 = lVar2, func_0x00010bf529e0(), lVar3 == 1)) {
    lVar3 = lVar2;
    func_0x00010c0dfd20(lVar2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0xa8);
    func_0x00010c296f60(uVar4,param_3,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0720c0(lVar3,param_3,&PTR____CFConstantStringClassReference_110e2a938);
    func_0x00010bfb2c80(uVar4);
    fVar7 = 0.6;
    if ((int)lVar5 == 0) {
      fVar7 = 1.0;
    }
    bVar1 = fVar6 == fVar7;
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 105d2453c; end: 105d246f3; -[SCPreviewFeatureAudioEffectsImpl _updateMultiSnapState] */

void FUN_105d2453c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_1;
    func_0x00010bdd11a0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      return;
    }
    lVar2 = param_1;
    func_0x00010bdda200();
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0d2440();
    _objc_retainAutoreleasedReturnValue();
    if ((int)lVar2 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0cece0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf733e0(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0d2440();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c2a0fe0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf73400(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be56230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logMixedAudioTracks_112573228);
      return;
    }
    func_0x00010bf733e0(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    lVar1 = *(long *)(param_1 + 0x48);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d2440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73400();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d246f4; end: 105d2484f; -[SCPreviewFeatureAudioEffectsImpl _logMixedAudioTracks] */

void FUN_105d246f4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0cece0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  lVar6 = lVar1;
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c0cece0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar6 = *plStack_110;
      do {
        lVar7 = 0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(lVar1);
          }
          uVar3 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c0cece0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          _objc_release(uVar4);
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = lVar1;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    lVar6 = lVar1;
    _objc_release(lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_105d24850;
  puVar5 = auStack_148;
  lStack_140 = lVar1;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_initWeak(puVar5,lVar6);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_150,auStack_148);
  func_0x00010c0f7fc0(puVar5);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
  return;
}



/* Entry: 105d24850; end: 105d2490f; -[SCPreviewFeatureAudioEffectsImpl _updateVideoPlaybackToBatchCapture] */

void FUN_105d24850(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = auStack_28;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105d24910; end: 105d24983;  */

void FUN_105d24910(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    func_0x00010c28fe60();
    if ((uVar1 & 1) == 0) {
      func_0x00010c21d600(*(undefined8 *)(param_1 + 0x28),param_2,1);
      lVar2 = param_1 + 0xd0;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c256e40();
      _objc_release(lVar2);
      lVar2 = param_1 + 0xd0;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c23ac40();
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d24984; end: 105d249bb; -[SCPreviewFeatureAudioEffectsImpl _musicDisabledMicCapture] */

bool FUN_105d24984(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c0d32a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 105d249bc; end: 105d24ac7; -[SCPreviewFeatureAudioEffectsImpl _playbackLayerIdForAssetType:forSegment:] */

void FUN_105d249bc(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  int iStack_48;
  
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x00010bf926c0();
  if (iVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x40);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc0000000;
    pcStack_58 = FUN_105d24ac8;
    puStack_50 = &UNK_1108e6248;
    iStack_48 = param_3;
    func_0x00010c0ff580(lVar2,param_2,param_4,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if ((param_3 == 2) && (lVar4 == 0)) {
      lVar3 = *(long *)(param_1 + 0x40);
      func_0x00010c0ff580(lVar3,param_2,param_4,&PTR___NSConcreteGlobalBlock_1108e6268);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105d24ac8; end: 105d24b13;  */

bool FUN_105d24ac8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf0b760();
  iVar1 = *(int *)(param_1 + 0x20);
  _objc_release(param_2);
  return (int)uVar2 == iVar1;
}



/* Entry: 105d24b14; end: 105d24bc3;  */

bool FUN_105d24b14(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c08c3a0();
  if ((int)uVar2 == 4) {
    uVar2 = param_2;
    func_0x00010bf5cc00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf96ee0();
    bVar1 = (int)uVar5 == 7;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 105d24bc4; end: 105d24c47; -[SCPreviewFeatureAudioEffectsImpl _audioMixingRenderEffectWithVolume:] */

void FUN_105d24bc4(float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bcd70;
  _objc_opt_new(PTR_PTR_1126bcd70);
  puVar2 = PTR_PTR_1126c4038;
  _objc_opt_new(PTR_PTR_1126c4038);
  func_0x00010c16c540(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf101a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2241a0((double)param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d24c48; end: 105d24ddf; -[SCPreviewFeatureAudioEffectsImpl _rebalanceVolumes] */

long FUN_105d24c48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfb2c80();
    func_0x00010be9abe0(param_1);
    func_0x00010c28c300(uVar4,param_2,0);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0cece0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        lVar2 = *(long *)(param_1 + 0xa8);
        func_0x00010c0e00e0(lVar2,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bfb2c80(lVar2);
          func_0x00010be9abe0(param_1);
          func_0x00010c28c300(uVar5,param_2,uVar4);
        }
        _objc_release(lVar2);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar3;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(lVar3 + 0x28);
  func_0x00010c0cece0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bf529e0();
  _objc_release(lVar6);
  lVar3 = *(long *)(lVar3 + 0x28);
  func_0x00010c2a0fe0(lVar3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}



/* Entry: 105d24de0; end: 105d24e4b; -[SCPreviewFeatureAudioEffectsImpl _currentNumberOfAudioSources] */

long FUN_105d24de0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0cece0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c2a0fe0(lVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}



/* Entry: 105d24e4c; end: 105d24e7b; -[SCPreviewFeatureAudioEffectsImpl _scaledVolumeForVolume:] */

ulong FUN_105d24e4c(ulong param_1,ulong param_2)

{
  func_0x00010bdf6d60();
  if (param_2 != 0) {
    param_1 = (ulong)(uint)((float)param_1 / (float)param_2);
  }
  return param_1;
}



/* Entry: 105d24e7c; end: 105d24f1b; -[SCPreviewFeatureAudioEffectsImpl _hasLensMusicSelection] */

bool FUN_105d24e7c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x78);
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d3a80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    bVar1 = false;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x78);
    func_0x00010bf16100(lVar5);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar5 != 0;
    _objc_release();
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 105d24f1c; end: 105d24f5f; -[SCPreviewFeatureAudioEffectsImpl _videoAudioEnabled] */

void FUN_105d24f1c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x00010bf926c0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfdc710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126bcd68,PTR_s_hasSoundWithEditor__1125d4b80,*(undefined8 *)(param_1 + 0x40)
              );
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf0f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_audioEnabled_1125a15e0);
  return;
}



/* Entry: 105d24f60; end: 105d24f83; -[SCPreviewFeatureAudioEffectsImpl _didSetTrack] */

byte FUN_105d24f60(long param_1)

{
  byte bVar1;
  
  if (((*(byte *)(param_1 + 0x88) & 1) == 0) && ((*(byte *)(param_1 + 0x89) & 1) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x8a);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 105d24f84; end: 105d24f9b; -[SCPreviewFeatureAudioEffectsImpl parentViewControllerDelegate] */

void FUN_105d24f84(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d24f9c; end: 105d24fa7; -[SCPreviewFeatureAudioEffectsImpl setParentViewControllerDelegate:] */

void FUN_105d24f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 200,param_3);
  return;
}



/* Entry: 105d24fa8; end: 105d24fbf; -[SCPreviewFeatureAudioEffectsImpl delegate] */

void FUN_105d24fa8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d24fc0; end: 105d24fcb; -[SCPreviewFeatureAudioEffectsImpl setDelegate:] */

void FUN_105d24fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd0,param_3);
  return;
}



/* Entry: 105d24fcc; end: 105d250f3; -[SCPreviewFeatureAudioEffectsImpl .cxx_destruct] */

void FUN_105d24fcc(long param_1)

{
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_destroyWeak(param_1 + 200);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


