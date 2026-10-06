/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d6202c; end: 104d62047;  */

void FUN_104d6202c(void)

{
  _objc_alloc_init(PTR_PTR_1126afe38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d62048; end: 104d62083; -[SCProfileFlatlandBitmojiPickerServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d62048(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712028,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271202c);
  return;
}



/* Entry: 104d62084; end: 104d623db; -[SCAdCreationPageCoordinator initWithAdCreationScope:composerServices:composerCoreUIServices:composerNetworkingServices:businessIAPServices:taskManagementServices:snapProServices:userInfoServices:featureSettingsService:webBrowsingScopeExposer:renderDataParser:pageLauncherServices:] */

undefined8 *
FUN_104d62084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126e4148;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010bf8d9a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xc];
    puVar1[0xc] = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010c0fb000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[10];
    puVar1[10] = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010c26b380();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010c127bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xd];
    puVar1[0xd] = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_14;
    _objc_release(uVar2);
  }
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
  return puVar1;
}



/* Entry: 104d623dc; end: 104d62a47; -[SCAdCreationPageCoordinator presentAdCreationPage] */

void FUN_104d623dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  long lStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x18);
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar3 != (undefined *)0x0) {
    puVar1 = PTR_PTR_1126afe48;
    _objc_alloc_init();
    uVar16 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar16);
    puVar1 = PTR_PTR_1126afe50;
    _objc_alloc();
    func_0x00010c040b80();
    uVar4 = *(undefined8 *)(param_1 + 8);
    puStack_160 = puVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    uStack_138 = uVar4;
    func_0x00010beaa7a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    lStack_108 = lVar5;
    func_0x00010beab280();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puStack_130 = puVar3;
    lStack_110 = lVar6;
    func_0x00010c0d8300();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = uVar16;
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf24e80();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_120 = uVar16;
    _objc_release(uVar7);
    lVar5 = param_1;
    func_0x00010beb15e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x88);
    lStack_128 = lVar5;
    func_0x00010c0f14e0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = uVar16;
    _objc_release(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0dc680();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c0b75e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = uVar9;
    _objc_release(uVar7);
    _objc_release(uVar8);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_104d62a48;
    puStack_98 = &UNK_11084db68;
    ppuVar10 = &puStack_b0;
    uStack_90 = uVar4;
    _objc_retainBlock();
    puStack_d8 = puVar1;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x104d62ae0;
    puStack_c0 = &UNK_11084db98;
    ppuVar11 = &puStack_d8;
    ppuStack_150 = ppuVar10;
    lStack_b8 = param_1;
    _objc_retainBlock();
    puStack_100 = puVar1;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_104d62af0;
    puStack_e8 = &UNK_110842e18;
    ppuVar10 = &puStack_100;
    lStack_e0 = param_1;
    _objc_retainBlock();
    puVar12 = PTR_PTR_1126afe58;
    ppuStack_158 = ppuVar10;
    _objc_alloc(PTR_PTR_1126afe58);
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf2a940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0c9f20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c26ad60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puStack_130;
    puVar1 = puStack_160;
    lStack_1a0 = lStack_128;
    ppuStack_198 = ppuVar11;
    ppuStack_190 = ppuVar10;
    uStack_188 = uVar7;
    uStack_180 = uVar4;
    uStack_178 = uVar8;
    uStack_170 = uVar16;
    uStack_168 = uVar9;
    func_0x00010bff2920(puVar12);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar7);
    lVar5 = param_1;
    func_0x00010beb0f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f020(puVar12);
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010be21b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf25000();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar6;
    func_0x00010c0ed0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    puVar14 = PTR_PTR_1126afe60;
    _objc_alloc(PTR_PTR_1126afe60);
    uVar16 = *(undefined8 *)(param_1 + 8);
    func_0x00010c117e40(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032380(puVar14);
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)(param_1 + 8);
    func_0x00010c247520(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206c40(puVar14);
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0f2420(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227300(puVar14);
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)(param_1 + 8);
    func_0x00010c064060(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1acb80(puVar14);
    _objc_release(uVar16);
    lVar6 = param_1;
    func_0x00010beaf260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4160(puVar14);
    _objc_release(lVar6);
    lVar6 = param_1;
    func_0x00010beab2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e3ee0(puVar14);
    _objc_release(lVar6);
    lVar6 = param_1;
    func_0x00010beb0ee0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e7c0(puVar14);
    _objc_release(lVar6);
    puVar2 = PTR_PTR_1126afe68;
    _objc_retain(puVar12);
    _objc_alloc(puVar2);
    func_0x00010c061d40();
    _objc_release(puVar12);
    puVar15 = PTR_PTR_1126afe70;
    _objc_alloc();
    func_0x00010c0601e0();
    uVar16 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar15;
    _objc_release(uVar16);
    func_0x00010c1c1bc0(puVar1);
    _objc_opt_class();
    func_0x00010c181960(puVar1);
    _objc_opt_class(PTR_PTR_1126afe48);
    func_0x00010c1cb7e0(puVar1);
    uStack_88 = *(undefined8 *)(param_1 + 0x10);
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2224a0(*(undefined8 *)(param_1 + 0x48));
    _objc_release(puVar15);
    uVar16 = *(undefined8 *)(param_1 + 8);
    func_0x00010c27ece0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(uVar16);
    _objc_release(puVar2);
    _objc_release(puVar14);
    _objc_release(lVar13);
    _objc_release(lVar5);
    _objc_release(puVar12);
    _objc_release(ppuStack_158);
    _objc_release(ppuVar11);
    _objc_release(ppuStack_150);
    _objc_release(uStack_148);
    _objc_release(uStack_140);
    _objc_release(lStack_128);
    _objc_release(uStack_120);
    _objc_release(uStack_118);
    _objc_release(lStack_110);
    _objc_release(lStack_108);
    _objc_release(uStack_138);
    _objc_release(puVar1);
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1a8 = FUN_104d62a48;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar3;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e8 = 0xc2000000;
  pcStack_1e0 = FUN_104d62ad4;
  puStack_1d8 = &UNK_110841f80;
  uStack_1d0 = *(undefined8 *)(puVar2 + 0x20);
  uStack_1c8 = param_2;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_1f0);
  _objc_release(uStack_1c8);
  _objc_release(param_2);
  return;
}



/* Entry: 104d62a48; end: 104d62ad3;  */

void FUN_104d62a48(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104d62ad4;
  puStack_38 = &UNK_110841f80;
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 104d62ad4; end: 104d62aef;  */

void FUN_104d62ad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3da50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_closeAdCreationWithParams__1125ad038,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104d62af0; end: 104d62b4b;  */

void FUN_104d62af0(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d62b4c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104d62b4c; end: 104d62b53;  */

void FUN_104d62b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08b770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_launchEmailApp_1126007e8);
  return;
}



/* Entry: 104d62b54; end: 104d62be3; -[SCAdCreationPageCoordinator closeAdCreationPageWithCompletion:] */

void FUN_104d62b54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010c2224a0(*(undefined8 *)(param_1 + 0x48),param_2,PTR____NSArray0__struct_11034ab48);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d62be4; end: 104d62d37; -[SCAdCreationPageCoordinator _setupBusinessProfileGRPCService] */

void FUN_104d62be4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0f98e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar4,param_2,30000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar4,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar4,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfcfa80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c0b7020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 104d62d38; end: 104d62dcb; -[SCAdCreationPageCoordinator _setupAlertPresenter] */

void FUN_104d62d38(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010beff660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104d62dcc; end: 104d630bf; -[SCAdCreationPageCoordinator _setupBusinessProfileWithProfileHandler:] */

void FUN_104d62dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126afe78;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010bf25000(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b4680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0b00(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf25000(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe4500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f760(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf25000(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf25000(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9920(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf25020(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c291840();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c074e40();
  func_0x00010c0df6e0(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1b40(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf25000(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a92e0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf25000(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0691a0();
  func_0x00010c0df760(puVar5,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4020(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf25000(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c26e7a0();
  func_0x00010c0df760(puVar5,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2146e0(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf25000(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c260620(uVar2);
  func_0x00010c0df7c0(puVar5,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f4c0(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d630c0; end: 104d6327f; -[SCAdCreationPageCoordinator _getProfileHandler] */

void FUN_104d630c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1168c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
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
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar1 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        puVar10 = *(undefined **)(lStack_128 + lVar11 * 8);
        uVar4 = *(ulong *)(param_1 + 8);
        func_0x00010c116a20();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar10;
        func_0x00010bf25000();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010c0720c0(uVar4,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(uVar4);
        if ((uVar7 & 1) != 0) {
          _objc_retain(puVar10);
          goto LAB_104d63230;
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  puVar10 = (undefined *)0x0;
LAB_104d63230:
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar10 = PTR_PTR_1126afe80;
    _objc_alloc_init(PTR_PTR_1126afe80);
    uVar8 = *(undefined8 *)(lVar3 + 0x68);
    func_0x00010bf60aa0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c127a60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c184960(puVar10,param_2,uVar9);
    _objc_release(uVar9);
    _objc_release(uVar8);
    lVar1 = *(long *)(lVar3 + 0x50);
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar8 = *(undefined8 *)(lVar3 + 0x58);
      func_0x00010bf60aa0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c0cf3c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1db1c0(puVar10,param_2,uVar9);
      _objc_release(uVar9);
      _objc_release(uVar8);
    }
    else {
      func_0x00010c1db1c0(puVar10,param_2,lVar2);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = *(long *)(lVar3 + 0x60);
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f7580();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar8 = *(undefined8 *)(lVar3 + 0x60);
      func_0x00010bf60aa0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf8d6c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c194080(puVar10,param_2,uVar9);
      _objc_release(uVar9);
      _objc_release(uVar8);
    }
    else {
      func_0x00010c194080(puVar10,param_2,lVar2);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 104d63280; end: 104d6340f; -[SCAdCreationPageCoordinator _setupUserInfo] */

void FUN_104d63280(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126afe80;
  _objc_alloc_init(PTR_PTR_1126afe80);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf60aa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c127a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184960(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = *(long *)(param_1 + 0x50);
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bf60aa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1db1c0(puVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c1db1c0(puVar1,param_2,lVar5);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x60);
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0f7580();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bf60aa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194080(puVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c194080(puVar1,param_2,lVar5);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d63410; end: 104d634bb; -[SCAdCreationPageCoordinator _setupWebLauncher] */

void FUN_104d63410(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar3 = PTR_PTR_1126afe88;
  _objc_alloc(PTR_PTR_1126afe88);
  func_0x00010c062da0();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d634bc; end: 104d636b3; -[SCAdCreationPageCoordinator _setupProfileIdsWithOrganizationId:] */

void FUN_104d634bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 unaff_x23;
  undefined8 uVar9;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined *puVar10;
  undefined8 unaff_x26;
  long unaff_x27;
  long lVar11;
  long unaff_x28;
  undefined1 *puVar12;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar2);
  puVar8 = auStack_f0;
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(lVar2);
        }
        unaff_x23 = *(undefined8 *)(lStack_128 + unaff_x28 * 8);
        unaff_x24 = unaff_x23;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c0ed0e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = param_3;
        func_0x00010c0720c0(param_3,param_2,unaff_x25);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        if ((int)unaff_x26 != 0) {
          func_0x00010c1164a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010c116a20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3,param_2,unaff_x24);
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (lVar1 != unaff_x28);
      puVar8 = auStack_f0;
      lVar1 = lVar2;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
      lVar11 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_104d636b4;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_190 = unaff_x28;
    lStack_188 = unaff_x27;
    uStack_180 = unaff_x26;
    uStack_178 = unaff_x25;
    uStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    lStack_160 = lVar11;
    puStack_158 = puVar3;
    lStack_150 = lVar2;
    uStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    _objc_retain(puVar8);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
    _objc_alloc();
    func_0x00010c026a60();
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    _objc_retain(puVar7);
    puVar5 = (undefined1 *)puVar7;
    func_0x00010bf52a60(puVar7,param_2,&uStack_260,auStack_220,0x10);
    if (puVar5 != (undefined1 *)0x0) {
      lVar11 = *plStack_250;
      uVar9 = *(undefined8 *)PTR__NSLocaleCountryCode_11034aa58;
      do {
        puVar12 = (undefined1 *)0x0;
        do {
          if (*plStack_250 != lVar11) {
            _objc_enumerationMutation(puVar7);
          }
          puVar10 = *(undefined **)(lStack_258 + (long)puVar12 * 8);
          puVar6 = puVar4;
          func_0x00010bf85f20(puVar4,param_2,uVar9,puVar10);
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 == (undefined *)0x0) {
            _objc_retain(puVar10);
            puVar6 = puVar10;
          }
          func_0x00010befa120(puVar3,param_2,puVar6);
          _objc_release(puVar6);
          puVar12 = puVar12 + 1;
        } while (puVar5 != puVar12);
        puVar5 = (undefined1 *)puVar7;
        func_0x00010bf52a60(puVar7,param_2,&uStack_260,auStack_220,0x10);
      } while (puVar5 != (undefined1 *)0x0);
    }
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      func_0x00010be1f8a0();
      _objc_alloc(PTR_PTR_1126afe90);
      func_0x00010c045780();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d636b4; end: 104d6385b; -[SCAdCreationPageCoordinator _getDisplayCountryNames:displayLocale:] */

void FUN_104d636b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  _objc_alloc();
  func_0x00010c026a60();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar3 != 0) {
    lVar7 = *plStack_120;
    uVar5 = *(undefined8 *)PTR__NSLocaleCountryCode_11034aa58;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        puVar6 = *(undefined **)(lStack_128 + lVar8 * 8);
        puVar4 = puVar2;
        func_0x00010bf85f20(puVar2,param_2,uVar5,puVar6);
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 == (undefined *)0x0) {
          _objc_retain(puVar6);
          puVar4 = puVar6;
        }
        func_0x00010befa120(puVar1,param_2,puVar4);
        _objc_release(puVar4);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010be1f8a0();
    _objc_alloc(PTR_PTR_1126afe90);
    func_0x00010c045780();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d6385c; end: 104d638cf; -[SCAdCreationPageCoordinator _setupUserPropertiesInterface] */

void FUN_104d6385c(void)

{
  func_0x00010be1f8a0();
  _objc_alloc(PTR_PTR_1126afe90);
  func_0x00010c045780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d638d0; end: 104d638db;  */

void FUN_104d638d0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea4530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setHasSeenOnboardingNux__112586af0,param_2);
  return;
}



/* Entry: 104d638dc; end: 104d63917; -[SCAdCreationPageCoordinator _setHasSeenOnboardingNux:] */

void FUN_104d638dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d63918; end: 104d63957; -[SCAdCreationPageCoordinator _getHasSeenOnboardingNux] */

undefined8 FUN_104d63918(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157a80();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104d63958; end: 104d639c7; -[SCAdCreationPageCoordinator launchEmailApp] */

void FUN_104d63958(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110db1578);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d639c8; end: 104d63aab; -[SCAdCreationPageCoordinator .cxx_destruct] */

void FUN_104d639c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 104d63aac; end: 104d63c93; -[SCAdCreationPageImplEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d63aac(long param_1)

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
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  
  puVar1 = PTR_PTR_1126afe98;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112712074;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_112712078;
  _objc_loadWeakRetained();
  lVar4 = param_1 + _DAT_11271207c;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_112712080;
  _objc_loadWeakRetained();
  lVar6 = param_1 + _DAT_112712084;
  _objc_loadWeakRetained();
  lVar7 = param_1 + _DAT_112712088;
  _objc_loadWeakRetained(lVar7);
  lVar8 = param_1 + _DAT_11271208c;
  _objc_loadWeakRetained();
  lVar9 = param_1 + _DAT_112712090;
  _objc_loadWeakRetained();
  lVar10 = param_1 + _DAT_112712094;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11271209c;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c22a0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_1127120a0;
  _objc_loadWeakRetained();
  func_0x00010bff13e0();
  lVar16 = (long)_DAT_1127120a4;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c10b050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar16),PTR_s_presentAdCreationPage_112620630);
  return;
}



/* Entry: 104d63c94; end: 104d63d73; -[SCAdCreationPageImplEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d63c94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127120a8;
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  lVar4 = (long)_DAT_1127120a4;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104d63d74;
  puStack_40 = &UNK_110842e18;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bf3da20(uVar2,param_2,&puStack_58);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010c117720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d63d74; end: 104d63d7b;  */

void FUN_104d63d74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 104d63d7c; end: 104d63e4f; -[SCAdCreationPageImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d63d7c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712098,0);
  _objc_destroyWeak(param_1 + _DAT_1127120a0);
  _objc_destroyWeak(param_1 + _DAT_11271209c);
  _objc_destroyWeak(param_1 + _DAT_112712094);
  _objc_destroyWeak(param_1 + _DAT_112712090);
  _objc_destroyWeak(param_1 + _DAT_112712088);
  _objc_destroyWeak(param_1 + _DAT_112712084);
  _objc_destroyWeak(param_1 + _DAT_112712080);
  _objc_destroyWeak(param_1 + _DAT_11271207c);
  _objc_destroyWeak(param_1 + _DAT_11271208c);
  _objc_destroyWeak(param_1 + _DAT_112712078);
  _objc_destroyWeak(param_1 + _DAT_112712074);
  _objc_storeStrong(param_1 + _DAT_1127120a8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127120a4,0);
  return;
}



/* Entry: 104d63e50; end: 104d63e57; -[SCAdCreationPreviewViewController pageViewName] */

undefined8 FUN_104d63e50(void)

{
  return 0xa4;
}



/* Entry: 104d63e58; end: 104d63f23; -[SCAdCreationPreviewPresenter initWithNavigationController:renderDataParser:adOperaSessionScopeServices:] */

undefined1 *
FUN_104d63e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e4150;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d63f24; end: 104d640bb; -[SCAdCreationPreviewPresenter displayAdPreviewWithDataWithAdRenderData:onClosed:] */

void FUN_104d63f24(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_4;
  _objc_retain();
  if (param_3 == 0) {
LAB_104d64068:
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
      func_0x0001004fa310();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126afea0);
      lVar2 = lVar1;
      func_0x00010beecc40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfe63a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar3;
      _objc_release(uVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (*(long *)(param_1 + 8) == 0) goto LAB_104d64068;
    }
    _objc_initWeak(auStack_48,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104d640c4;
    puStack_68 = &UNK_110848378;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    lStack_60 = param_3;
    _objc_retain(param_4);
    lStack_58 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_80);
    _objc_release(lStack_58);
    _objc_release(lStack_60);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d640bc; end: 104d640c3;  */

void FUN_104d640bc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef3990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_adOperaSessionScopeLauncher_11259a808);
  return;
}



/* Entry: 104d640c4; end: 104d640f7;  */

void FUN_104d640c4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0d040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d640f8; end: 104d640fb; -[SCAdCreationPreviewPresenter operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_104d640f8(void)

{
  return;
}



/* Entry: 104d640fc; end: 104d640ff; -[SCAdCreationPreviewPresenter operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_104d640fc(void)

{
  return;
}



/* Entry: 104d64100; end: 104d64103; -[SCAdCreationPreviewPresenter operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_104d64100(void)

{
  return;
}



/* Entry: 104d64104; end: 104d64107; -[SCAdCreationPreviewPresenter operaPresenterDidCancelDismissing:] */

void FUN_104d64104(void)

{
  return;
}



/* Entry: 104d64108; end: 104d6410b; -[SCAdCreationPreviewPresenter operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_104d64108(void)

{
  return;
}



/* Entry: 104d6410c; end: 104d6410f; -[SCAdCreationPreviewPresenter operaPresenterDidFailToPresent:] */

void FUN_104d6410c(void)

{
  return;
}



/* Entry: 104d64110; end: 104d64113; -[SCAdCreationPreviewPresenter operaPresenterDidFinishDismissing:] */

void FUN_104d64110(void)

{
  return;
}



/* Entry: 104d64114; end: 104d6414b; -[SCAdCreationPreviewPresenter operaPresenterDidTearDown:] */

void FUN_104d64114(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c076220();
  if (iVar1 != 0) {
    func_0x00010bf94c20(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 104d6414c; end: 104d6414f; -[SCAdCreationPreviewPresenter operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_104d6414c(void)

{
  return;
}



/* Entry: 104d64150; end: 104d64153; -[SCAdCreationPreviewPresenter operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_104d64150(void)

{
  return;
}



/* Entry: 104d64154; end: 104d64277; -[SCAdCreationPreviewPresenter _exposeOperaScopeWithAdRenderData:completion:] */

void FUN_104d64154(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126afea8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar3);
  func_0x00010c1c8b80(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar3);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x18));
  lVar2 = param_1;
  func_0x00010bdea660(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf22960(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 8));
  (**(code **)(param_4 + 0x10))(param_4,0);
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d64278; end: 104d643cf; -[SCAdCreationPreviewPresenter _createAdResponseWithAdRenderData:] */

void FUN_104d64278(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126afeb0;
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c04e0a0();
  puVar2 = PTR_PTR_1126afeb8;
  _objc_alloc(PTR_PTR_1126afeb8);
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010bff1c00(0,0,0,0,0,param_1,puVar2,param_3,param_4,puVar3,0,0,0,0,0,0,3,puVar1,0,0,0,0,0
                      ,0,0);
  _objc_release(param_4);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104d643d0; end: 104d643db; -[SCAdCreationPreviewPresenter pushToValdiMarshaller:] */

undefined8 FUN_104d643d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df160;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010af9e688();
  return param_3;
}



/* Entry: 104d643dc; end: 104d6443b; -[SCAdCreationPreviewPresenter .cxx_destruct] */

void FUN_104d643dc(long param_1)

{
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



/* Entry: 104d6443c; end: 104d64447; -[SCFeatureSettingsService hasSeenOnboardingNuxInAdCreation] */

void FUN_104d6443c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110db1598);
  return;
}



/* Entry: 104d64448; end: 104d64453; -[SCFeatureSettingsService seenOnboardingNuxInAdCreationServerParam] */

undefined ** FUN_104d64448(void)

{
  return &PTR____CFConstantStringClassReference_110db1598;
}



/* Entry: 104d64454; end: 104d64463; -[SCFeatureSettingsService setSeenOnboardingNuxInAdCreation:] */

void FUN_104d64454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110db1598,param_3);
  return;
}



/* Entry: 104d64464; end: 104d6446b; -[SCFeatureSettingsService pay_to_promote_nux_seen_client_value:] */

undefined * FUN_104d64464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 104d6446c; end: 104d64473; -[SCFeatureSettingsService pay_to_promote_nux_seen_server_value:] */

void FUN_104d6446c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104d64474; end: 104d64483; -[SCFeatureSettingsService seenOnboardingNuxInAdCreation] */

void FUN_104d64474(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110db1598,0);
  return;
}



/* Entry: 104d64484; end: 104d64687; -[SCAdCreationPageScope initWithProfileId:promotableContent:source:pageWorkflowSessionId:initialObjective:delegate:uiContainer:memoriesTranscoder:tempFileProvider:cameraRollLibrary:] */

undefined8 *
FUN_104d64484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126e4158;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 6,param_8);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
  }
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
  return puVar1;
}



/* Entry: 104d64688; end: 104d6468f; -[SCAdCreationPageScope profileId] */

undefined8 FUN_104d64688(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104d64690; end: 104d64697; -[SCAdCreationPageScope promotableContent] */

undefined8 FUN_104d64690(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104d64698; end: 104d6469f; -[SCAdCreationPageScope source] */

undefined8 FUN_104d64698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104d646a0; end: 104d646a7; -[SCAdCreationPageScope pageWorkflowSessionId] */

undefined8 FUN_104d646a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104d646a8; end: 104d646af; -[SCAdCreationPageScope initialObjective] */

undefined8 FUN_104d646a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104d646b0; end: 104d646c7; -[SCAdCreationPageScope delegate] */

void FUN_104d646b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d646c8; end: 104d646cf; -[SCAdCreationPageScope uiContainer] */

undefined8 FUN_104d646c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104d646d0; end: 104d646d7; -[SCAdCreationPageScope memoriesTranscoder] */

undefined8 FUN_104d646d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104d646d8; end: 104d646df; -[SCAdCreationPageScope tempFileProvider] */

undefined8 FUN_104d646d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104d646e0; end: 104d646e7; -[SCAdCreationPageScope cameraRollLibrary] */

undefined8 FUN_104d646e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104d646e8; end: 104d64773; -[SCAdCreationPageScope .cxx_destruct] */

void FUN_104d646e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d64774; end: 104d6477f; +[SCCRevShareOptInTakeoverView componentPath] */

undefined ** FUN_104d64774(void)

{
  return &PTR____CFConstantStringClassReference_110db15b8;
}



/* Entry: 104d64780; end: 104d647b3; -[SCCRevShareOptInTakeoverView initWithViewModel:componentContext:runtime:] */

void FUN_104d64780(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4160;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 104d647b4; end: 104d64803; -[SCCRevShareOptInTakeoverView setViewModel:] */

void FUN_104d647b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d64804; end: 104d64847; -[SCCRevShareOptInTakeoverView viewModel] */

void FUN_104d64804(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d64848; end: 104d6496f; -[SCCRevShareOptInTakeoverContext initWithOnAccepted:onAcceptFailed:onDeclinedNotNow:onDismissRequested:onOpenUrl:] */

undefined8 *
FUN_104d64848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar3 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  uVar4 = param_7;
  _objc_retainBlock();
  _objc_release(param_7);
  puStack_58 = PTR_PTR_1126e4168;
  puVar5 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar5,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 104d64970; end: 104d64987; +[SCCRevShareOptInTakeoverContext valdiMarshallableObjectDescriptor] */

void FUN_104d64970(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onAccepted_11084dc08;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104d64988; end: 104d649c3; -[SCCRevShareOptInTakeoverViewModel initWithProfileId:networkingClient:] */

void FUN_104d64988(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4170;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 104d649c4; end: 104d649e3; +[SCCRevShareOptInTakeoverViewModel valdiMarshallableObjectDescriptor] */

void FUN_104d649c4(undefined8 *param_1)

{
  *param_1 = &PTR_s_profileId_11084dc98;
  param_1[1] = &PTR_s_SCComposerNetworkingClientProtoc_11084dce0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104d649e4; end: 104d64b77; -[SCAddToStoryCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d649e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_1127120f8;
    _objc_loadWeakRetained(lVar9);
  }
  lVar2 = lVar9;
  func_0x00010c11a2a0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_1127120f4;
    _objc_loadWeakRetained(lVar9);
  }
  lVar10 = (long)_DAT_1127120ec;
  lVar3 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar7 = lVar10;
  func_0x00010bf31600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  if (lVar7 != 0) {
    lVar1 = lVar7;
  }
  lVar8 = lVar9;
  func_0x00010bf23740(lVar9,param_2,lVar2,lVar4,lVar6,param_1,lVar1,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar10);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar9);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127120f0),param_2,lVar8);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d64b78; end: 104d64c03; -[SCAddToStoryCameraEntryPoint didDismissCaptureFlow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d64b78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_1127120f0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = (long)_DAT_1127120ec;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf2ac40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf834c0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d64c04; end: 104d64c8b; -[SCAddToStoryCameraEntryPoint captureWorkflowWillSetCameraViewConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d64c04(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = (long)_DAT_1127120ec;
    _objc_retain(param_3);
    param_1 = param_1 + lVar1;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c131bc0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,lVar1,1,0);
    _objc_release(param_3);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104d64c8c; end: 104d64c8f; -[SCAddToStoryCameraEntryPoint captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_104d64c8c(void)

{
  return;
}



/* Entry: 104d64c90; end: 104d64c93; -[SCAddToStoryCameraEntryPoint captureWorkflowWillDismissWithDidSendSnap:] */

void FUN_104d64c90(void)

{
  return;
}



/* Entry: 104d64c94; end: 104d64c97; -[SCAddToStoryCameraEntryPoint captureWorkflowDidSaveSnapToMemories] */

void FUN_104d64c94(void)

{
  return;
}



/* Entry: 104d64c98; end: 104d64ceb; -[SCAddToStoryCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d64c98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127120f0,0);
  _objc_destroyWeak(param_1 + _DAT_1127120f8);
  _objc_destroyWeak(param_1 + _DAT_1127120f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127120ec);
  return;
}



/* Entry: 104d64cec; end: 104d650b7; -[SCChatCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d64cec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_68;
  
  lVar13 = (long)_DAT_1127120fc;
  lVar11 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c0f00e0();
  _objc_release(lVar11);
  if (lVar12 == -1) {
    if (param_1 == 0) {
      lVar11 = 0;
      uStack_68 = (undefined *)0x0;
      lVar12 = 0;
      goto LAB_104d64e68;
    }
    uStack_68 = (undefined *)0x0;
  }
  else {
    lVar11 = param_1 + _DAT_112712100;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf70d80();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar12);
    _objc_release(lVar11);
    *(long *)(param_1 + _DAT_112712104) = lVar3;
    puVar4 = PTR_PTR_1126afec8;
    func_0x00010bf299c0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + lVar13;
    _objc_loadWeakRetained(lVar11);
    lVar12 = lVar11;
    func_0x00010c0f00e0();
    func_0x00010c2b5f00(puVar4,param_2,lVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar11);
    puVar5 = PTR_PTR_1126afed0;
    func_0x00010c0db140(PTR_PTR_1126afed0);
    func_0x00010c2b7d00(puVar4,param_2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uStack_68 = puVar4;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  lVar11 = param_1 + _DAT_112712114;
  _objc_loadWeakRetained();
  lVar12 = param_1 + _DAT_112712118;
  _objc_loadWeakRetained(lVar12);
LAB_104d64e68:
  lVar6 = lVar12;
  func_0x00010c11a2a0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar1);
  lVar7 = lVar1;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar2);
  lVar8 = lVar2;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar3);
  lVar9 = lVar3;
  func_0x00010bf31600();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar11;
  func_0x00010bf23740(lVar11,param_2,lVar6,lVar7,lVar8,param_1,lVar9,0,0,0,uStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar11);
  lVar11 = param_1 + _DAT_112712108;
  _objc_loadWeakRetained(lVar11);
  lVar1 = lVar11;
  func_0x00010c094b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar12);
  lVar3 = lVar12;
  func_0x00010c094b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c065080(lVar2,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar12);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar11);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271210c),param_2,lVar10);
  lVar11 = param_1 + _DAT_112712110;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010c2a2020();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar13;
  _objc_loadWeakRetained(param_1);
  lVar13 = param_1;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9400(lVar1,param_2,lVar13);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_68);
  return;
}



/* Entry: 104d650b8; end: 104d651f7; -[SCChatCameraEntryPoint didDismissCaptureFlow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d650b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127120fc;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f00e0();
  _objc_release(lVar1);
  if (lVar2 != -1) {
    lVar1 = param_1 + _DAT_112712100;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_112712104);
    puVar4 = PTR_PTR_1126afed0;
    func_0x00010c0db140(PTR_PTR_1126afed0);
    func_0x00010c18cd20(lVar3,param_2,uVar5,puVar4,&PTR___NSConcreteGlobalBlock_11084dcf0,
                        &PTR____CFConstantStringClassReference_110db15d8,0);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_11271210c));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf2ac40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar6;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf834c0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d651f8; end: 104d651fb;  */

void FUN_104d651f8(void)

{
  return;
}



/* Entry: 104d651fc; end: 104d652a3; -[SCChatCameraEntryPoint captureWorkflowWillSetCameraViewConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d651fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar3 = (long)_DAT_1127120fc;
    _objc_retain(param_3);
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c131bc0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bf2bbc0();
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,0);
    _objc_release(param_3);
    _objc_release(param_1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104d652a4; end: 104d6532b; -[SCChatCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d652a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271210c,0);
  _objc_destroyWeak(param_1 + _DAT_112712110);
  _objc_destroyWeak(param_1 + _DAT_112712108);
  _objc_destroyWeak(param_1 + _DAT_112712118);
  _objc_destroyWeak(param_1 + _DAT_112712114);
  _objc_destroyWeak(param_1 + _DAT_1127120fc);
  _objc_destroyWeak(param_1 + _DAT_112712100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271211c,0);
  return;
}



/* Entry: 104d6532c; end: 104d65477; -[SCDirectorModeCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6532c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112712128;
    _objc_loadWeakRetained(lVar6);
  }
  lVar1 = lVar6;
  func_0x00010c11a2a0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11271212c;
    _objc_loadWeakRetained(lVar6);
  }
  lVar7 = (long)_DAT_112712120;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar4 = lVar7;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010bf23760(lVar6,param_2,lVar1,lVar3,lVar4,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar6);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112712124),param_2,lVar5);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d65478; end: 104d654cb; -[SCDirectorModeCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d65478(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712124,0);
  _objc_destroyWeak(param_1 + _DAT_11271212c);
  _objc_destroyWeak(param_1 + _DAT_112712120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112712128);
  return;
}



/* Entry: 104d654cc; end: 104d6553f; -[SCDirectorModeSnapDocEditorProvider initWithEditor:] */

undefined1 * FUN_104d654cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4178;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d65540; end: 104d65547; -[SCDirectorModeSnapDocEditorProvider snapDocEditor] */

undefined8 FUN_104d65540(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104d65548; end: 104d65553; -[SCDirectorModeSnapDocEditorProvider .cxx_destruct] */

void FUN_104d65548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d65554; end: 104d6566b; -[SCDirectorModeSnapDocEditorProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d65554(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1;
  FUN_104d6566c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar1 != 0) {
    if (param_1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_1 + _DAT_112712134;
      _objc_loadWeakRetained(lVar4);
    }
    lVar1 = lVar4;
    func_0x00010c1018e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126afed8;
    _objc_alloc(PTR_PTR_1126afed8);
    FUN_104d6566c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00ed80(puVar2,param_2,lVar3);
    func_0x00010c125b60(lVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 104d6566c; end: 104d6568f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6566c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112712138);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d65690; end: 104d656c7; -[SCDirectorModeSnapDocEditorProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d65690(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112712138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112712134);
  return;
}



/* Entry: 104d656c8; end: 104d65933; -[SCLegacyLiveLensPreviewEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d656c8(long param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined8 uStack_78;
  
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112712154;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar10;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  if (param_1 == 0) {
    uStack_78 = 0;
  }
  else {
    uStack_78 = param_1 + _DAT_112712148;
    _objc_loadWeakRetained();
  }
  lVar11 = (long)_DAT_11271213c;
  lVar10 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar2 = lVar10;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf31600();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c0924a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = uStack_78;
  func_0x00010bf23740(uStack_78,param_2,lVar1,lVar2,lVar4,param_1,lVar6,lVar8,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar10);
  _objc_release(uStack_78);
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11271214c;
    _objc_loadWeakRetained(lVar10);
  }
  lVar5 = lVar10;
  func_0x00010c29c2c0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c222420();
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar10);
  lVar10 = param_1 + _DAT_112712140;
  _objc_loadWeakRetained(lVar10);
  lVar3 = lVar10;
  func_0x00010c08d660();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar11);
  func_0x00010c1bafa0();
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar10);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112712144),param_2,lVar9);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d65934; end: 104d659bf; -[SCLegacyLiveLensPreviewEntryPoint didDismissCaptureFlow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d65934(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_112712144));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11271213c;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf2ac40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf834c0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d659c0; end: 104d65a67; -[SCLegacyLiveLensPreviewEntryPoint captureWorkflowWillSetCameraViewConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d659c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar3 = (long)_DAT_11271213c;
    _objc_retain(param_3);
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c131bc0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bf2bbc0();
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,0);
    _objc_release(param_3);
    _objc_release(param_1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104d65a68; end: 104d65adf; -[SCLegacyLiveLensPreviewEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d65a68(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712144,0);
  _objc_destroyWeak(param_1 + _DAT_112712154);
  _objc_destroyWeak(param_1 + _DAT_112712140);
  _objc_destroyWeak(param_1 + _DAT_112712150);
  _objc_destroyWeak(param_1 + _DAT_11271214c);
  _objc_destroyWeak(param_1 + _DAT_112712148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271213c);
  return;
}



/* Entry: 104d65ae0; end: 104d65c27; -[SCMusicCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d65ae0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = param_1;
  FUN_104d65c28();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112712164;
    _objc_loadWeakRetained(lVar6);
  }
  lVar7 = (long)_DAT_112712158;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar4 = lVar7;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010bf23740(lVar6,param_2,lVar1,lVar3,lVar4,param_1,param_1,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar6);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271215c),param_2,lVar5);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d65c28; end: 104d65c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d65c28(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112712160);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d65c4c; end: 104d65cd7; -[SCMusicCameraEntryPoint didDismissCaptureFlow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d65c4c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_11271215c));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112712158;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf2ac40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf834c0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d65cd8; end: 104d65eb3; -[SCMusicCameraEntryPoint captureWorkflowWillSetCameraViewConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d65cd8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  if (param_3 != 0) {
    lVar9 = (long)_DAT_112712158;
    _objc_retain(param_3);
    lVar9 = param_1 + lVar9;
    _objc_loadWeakRetained(lVar9);
    lVar1 = lVar9;
    func_0x00010c131bc0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,lVar1,1,0);
    _objc_release(param_3);
    _objc_release(lVar1);
    _objc_release(lVar9);
  }
  lVar2 = param_1;
  FUN_104d65c28();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112712158;
  lVar9 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar9);
  func_0x00010c277e80();
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c247a20();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = param_1 + lVar10;
  _objc_loadWeakRetained(uVar6);
  uVar7 = uVar6;
  func_0x00010c24fb60();
  func_0x00010c0df720((double)(uVar7 & 0xffffffff) / 1000.0,puVar8);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained(param_1);
  lVar10 = param_1;
  func_0x00010c0fbb60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47ca0(lVar5);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(lVar1);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}


