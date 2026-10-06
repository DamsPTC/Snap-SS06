/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004ea650; end: 1004ea68b;  */

void FUN_1004ea650(void)

{
  long unaff_x20;
  
  FUN_1004e9e94(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1004ea68c; end: 1004ea693;  */

void FUN_1004ea68c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a6f88;
  func_0x000107c610f8();
  func_0x000107c49100();
  func_0x000107c615e8(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1004ea694; end: 1004ea6f3;  */

void FUN_1004ea694(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a6f88;
  func_0x000107c610f8();
  func_0x000107c49100();
  func_0x000107c615e8(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1004ea6f4; end: 1004ea6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ea6f4(undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  FUN_100083b20(&lStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_113091b70);
  func_0x000107c615f0(uVar2);
  func_0x000107c61170(lStack_38);
  FUN_100083b20(&uStack_40);
  puVar1 = PTR_PTR_1126a6f80;
  func_0x000107c610f8();
  func_0x000107c4572c();
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uStack_40);
  *param_1 = puVar1;
  return;
}



/* Entry: 1004ea6fc; end: 1004ea79b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ea6fc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_113091b70);
  func_0x000107c615f0(uVar2);
  func_0x000107c61170(lStack_38);
  FUN_100083b20(&uStack_40);
  puVar1 = PTR_PTR_1126a6f80;
  func_0x000107c610f8();
  func_0x000107c4572c();
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uStack_40);
  *param_1 = puVar1;
  return;
}



/* Entry: 1004ea79c; end: 1004ea97f; -[SCUpdatesFrequencyImpl initWithApplicationLifecycleEvents:appsStartExperimentReader:] */

undefined8 *
FUN_1004ea79c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_58 = PTR_PTR_1126e74b8;
  puVar2 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar3 = puVar2[3];
    puVar2[3] = param_4;
    func_0x000107c61170(uVar3);
    uVar1 = (undefined1)puVar2[3];
    func_0x000107c3ebd4();
    *(undefined1 *)(puVar2 + 4) = uVar1;
    puVar4 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = puVar2[1];
    puVar2[1] = puVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61144(auStack_68,puVar2);
    uVar3 = param_3;
    func_0x000107c5e370();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c4c188(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    func_0x000107c61180();
    uVar5 = uVar3;
    func_0x000107c4da84();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_70,auStack_68);
    uVar6 = uVar5;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar7 = puVar2[2];
    puVar2[2] = uVar6;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c3b5ac(puVar2);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 1004ea980; end: 1004ea98f; -[SCUpdatesFrequencyImpl _emitEvent] */

void FUN_1004ea980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf0c8);
  return;
}



/* Entry: 1004ea990; end: 1004ea9bb;  */

void FUN_1004ea990(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004ea9bc; end: 1004eaa4f; -[SCUpdatesFrequencyServices initWithUpdatesFrequency:] */

undefined1 * FUN_1004ea9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702b70;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c5d700();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004eaa50; end: 1004eaa77; -[SCUpdatesFrequencyImpl updatesFrequencyObservable] */

void FUN_1004eaa50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004eaa78; end: 1004eaa7f;  */

void FUN_1004eaa78(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar3 = &UNK_11045cf20;
  func_0x000107c613fc(&UNK_11045cf20,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  puStack_50 = &UNK_101c52dec;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101c52df4;
  puStack_58 = &UNK_11045cf38;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = 0;
  FUN_1002922ac(0);
  func_0x000107c610f8();
  FUN_1004eabdc(puVar1,puVar2,uVar5);
  *param_1 = puVar1;
  return;
}



/* Entry: 1004eaa80; end: 1004eab9b;  */

void FUN_1004eaa80(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar3 = &UNK_11045cf20;
  func_0x000107c613fc(&UNK_11045cf20,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  puStack_50 = &UNK_101c52dec;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101c52df4;
  puStack_58 = &UNK_11045cf38;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = 0;
  FUN_1002922ac(0);
  func_0x000107c610f8();
  FUN_1004eabdc(puVar1,puVar2,uVar5);
  *param_1 = puVar1;
  return;
}



/* Entry: 1004eab9c; end: 1004eabc7;  */

void FUN_1004eab9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004eabc8; end: 1004eabdb;  */

void FUN_1004eabc8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1004eabdc; end: 1004eac3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004eabdc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fdf660) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fdf658) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1004eac40; end: 1004eb4f7; -[SCNotificationDataServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004eac40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 auStack_2e0 [8];
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [8];
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar12 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_106c3500c;
  puStack_90 = &UNK_11096a728;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11275b21c);
  *(undefined **)(param_1 + _DAT_11275b21c) = puVar1;
  func_0x000107c61170(uVar14);
  puVar1 = PTR_PTR_1126ae720;
  puStack_d0 = puVar12;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_106c3504c;
  puStack_b8 = &UNK_11084d4a8;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11275b220);
  *(undefined **)(param_1 + _DAT_11275b220) = puVar1;
  func_0x000107c61170(uVar14);
  puVar1 = PTR_PTR_1126d17c0;
  func_0x000107c610f4();
  func_0x000107c474f8();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11275b224);
  *(undefined **)(param_1 + _DAT_11275b224) = puVar1;
  func_0x000107c61170(uVar14);
  puVar1 = PTR_PTR_1126ae720;
  puStack_f8 = puVar12;
  uStack_f0 = 0xc2000000;
  puStack_e8 = &UNK_106c350f8;
  puStack_e0 = &UNK_11096a758;
  func_0x000107c6111c(auStack_d8,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_120 = puVar12;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_106c35138;
  puStack_108 = &UNK_11096a758;
  func_0x000107c6111c(auStack_100,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_148 = puVar12;
  uStack_140 = 0xc2000000;
  puStack_138 = &UNK_106c35178;
  puStack_130 = &UNK_11096a758;
  func_0x000107c6111c(auStack_128,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  puStack_170 = puVar12;
  uStack_168 = 0xc2000000;
  puStack_160 = &UNK_106c351b8;
  puStack_158 = &UNK_11096a758;
  func_0x000107c6111c(auStack_150,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_198 = puVar12;
  uStack_190 = 0xc2000000;
  puStack_188 = &UNK_106c351f8;
  puStack_180 = &UNK_11096a758;
  func_0x000107c6111c(auStack_178,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  puStack_1c0 = puVar12;
  uStack_1b8 = 0xc2000000;
  puStack_1b0 = &UNK_106c35238;
  puStack_1a8 = &UNK_11096a758;
  func_0x000107c6111c(auStack_1a0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11275b228);
  *(undefined **)(param_1 + _DAT_11275b228) = puVar7;
  func_0x000107c61170(uVar14);
  puVar7 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11275b22c);
  *(undefined **)(param_1 + _DAT_11275b22c) = puVar7;
  func_0x000107c61170(uVar14);
  puVar7 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11275b230);
  *(undefined **)(param_1 + _DAT_11275b230) = puVar7;
  func_0x000107c61170(uVar14);
  puVar7 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11275b234);
  *(undefined **)(param_1 + _DAT_11275b234) = puVar7;
  func_0x000107c61170(uVar14);
  puVar7 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11275b238);
  *(undefined **)(param_1 + _DAT_11275b238) = puVar7;
  func_0x000107c61170(uVar14);
  puVar7 = PTR_PTR_1126ae720;
  puStack_1e8 = puVar12;
  uStack_1e0 = 0xc2000000;
  puStack_1d8 = &UNK_106c35278;
  puStack_1d0 = &UNK_11096a788;
  func_0x000107c6111c(auStack_1c8,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11275b23c);
  *(undefined **)(param_1 + _DAT_11275b23c) = puVar7;
  func_0x000107c61170(uVar14);
  puVar7 = PTR_PTR_1126ae720;
  puStack_210 = puVar12;
  uStack_208 = 0xc2000000;
  puStack_200 = &UNK_106c352b8;
  puStack_1f8 = &UNK_11096a7b8;
  func_0x000107c6111c(auStack_1f0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11275b240);
  *(undefined **)(param_1 + _DAT_11275b240) = puVar7;
  func_0x000107c61170(uVar14);
  puVar7 = PTR_PTR_1126ae720;
  puStack_238 = puVar12;
  uStack_230 = 0xc2000000;
  puStack_228 = &UNK_106c352f8;
  puStack_220 = &UNK_11096a7e8;
  func_0x000107c6111c(auStack_218,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  puStack_260 = puVar12;
  uStack_258 = 0xc2000000;
  puStack_250 = &UNK_106c35338;
  puStack_248 = &UNK_11096a818;
  func_0x000107c6111c(auStack_240,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  puStack_288 = puVar12;
  uStack_280 = 0xc2000000;
  puStack_278 = &UNK_106c35378;
  puStack_270 = &UNK_11096a848;
  func_0x000107c6111c(auStack_268,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126ae720;
  puStack_2b0 = puVar12;
  uStack_2a8 = 0xc2000000;
  puStack_2a0 = &UNK_106c353b8;
  puStack_298 = &UNK_11096a878;
  func_0x000107c6111c(auStack_290,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126ae720;
  puStack_2d8 = puVar12;
  uStack_2d0 = 0xc2000000;
  puStack_2c8 = &UNK_106c353f8;
  puStack_2c0 = &UNK_11096a8a8;
  func_0x000107c6111c(auStack_2b8,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_2e0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126d17c8;
  func_0x000107c610f4();
  func_0x000107c46778();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11275b244));
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar12);
  func_0x000107c61120(auStack_2e0);
  func_0x000107c61170(puVar11);
  func_0x000107c61120(auStack_2b8);
  func_0x000107c61170(puVar10);
  func_0x000107c61120(auStack_290);
  func_0x000107c61170(puVar9);
  func_0x000107c61120(auStack_268);
  func_0x000107c61170(puVar8);
  func_0x000107c61120(auStack_240);
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_218);
  func_0x000107c61120(auStack_1f0);
  func_0x000107c61120(auStack_1c8);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_1a0);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_178);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_150);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_128);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_100);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 1004eb4f8; end: 1004eb57f; -[SCNotificationDataProviderFactory initWithLogger:] */

undefined1 * FUN_1004eb4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f5e08;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004eb580; end: 1004eb83f; -[SCNotificationDataServices initWithEnabledSettingProvider:privacySettingProvider:deviceTokenProvider:deviceVoipTokenProvider:deviceLpseTokenProvider:bitmojiSettingProvider:enabledSettingMutator:privacySettingMutator:deviceTokenMutator:deviceVoipTokenMutator:deviceLpseTokenMutator:bitmojiSettingMutator:] */

undefined8 *
FUN_1004eb580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_68 = PTR_PTR_1126f9dc0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[2];
    puVar1[2] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1004eb840; end: 1004eb953;  */

void FUN_1004eb840(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004eb954; end: 1004ebabf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004eb954(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113083f78);
  uVar5 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar5;
  uVar3 = param_2;
  func_0x000107c51d00();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  lVar4 = param_3;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004ebab8);
    (*pcVar1)();
  }
  *(long *)(unaff_x20 + 0x28) = lVar4;
  lVar4 = param_4;
  func_0x000107c4456c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar4;
    lVar4 = param_5;
    func_0x000107c42eac();
    func_0x000107c61180();
    if (lVar4 != 0) {
      *(long *)(unaff_x20 + 0x38) = lVar4;
      uVar3 = param_6;
      func_0x000107c3ea3c();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
      FUN_100420238(param_7 + _DAT_11307d3d8,unaff_x20 + 0x48);
      func_0x000107c61170(param_7);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004ebac0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004ebabc);
  (*pcVar1)();
}



/* Entry: 1004ebac0; end: 1004ebac7; -[SCBitmojiSelfieServices selfieFetcher] */

undefined8 FUN_1004ebac0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1004ebac8; end: 1004ebacf; -[SCNotificationDataServices bitmojiSettingProvider] */

undefined8 FUN_1004ebac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1004ebad0; end: 1004ebe8f;  */

undefined * FUN_1004ebad0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  ppuVar13 = &puStack_a0;
  ppuVar16 = &puStack_a0;
  uVar17 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x40);
  FUN_1000285a8(0x112e38fb0,&UNK_10da23800);
  func_0x000107c613fc();
  func_0x000107c61434(uVar4);
  puVar7 = &UNK_101ec16e0;
  FUN_1000bdd8c(&UNK_101ec16e0,0);
  FUN_100420238(unaff_x20 + 0x48,&puStack_a0);
  puVar8 = &UNK_110496cc0;
  func_0x000107c613fc(&UNK_110496cc0,0x60,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar17;
  *(undefined8 *)(puVar8 + 0x18) = uVar3;
  *(undefined8 *)(puVar8 + 0x20) = uVar2;
  func_0x0001004ebf08(&puStack_a0,puVar8 + 0x28);
  *(undefined8 *)(puVar8 + 0x50) = uVar1;
  *(undefined8 *)(puVar8 + 0x58) = uVar4;
  FUN_1000285a8(0x112e38fb8,&UNK_10da23808);
  func_0x000107c613fc();
  func_0x000107c61174(uVar17);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar2);
  puVar9 = &UNK_101ec18c0;
  FUN_1000bdd8c(&UNK_101ec18c0,puVar8);
  puVar8 = &UNK_110496ce8;
  func_0x000107c613fc(&UNK_110496ce8,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar5;
  *(undefined8 *)(puVar8 + 0x18) = uVar18;
  FUN_1000285a8(0x112e38fc0,&UNK_10da23810);
  func_0x000107c613fc();
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar18);
  puVar10 = &UNK_101ec1938;
  FUN_1000bdd8c(&UNK_101ec1938,puVar8);
  puVar8 = &UNK_110496d10;
  func_0x000107c613fc(&UNK_110496d10,0x28,7);
  *(undefined **)(puVar8 + 0x10) = puVar10;
  *(undefined **)(puVar8 + 0x18) = puVar9;
  *(undefined **)(puVar8 + 0x20) = puVar7;
  FUN_1000285a8(0x112e38fc8,&UNK_10da23818);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar10);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(puVar7);
  puVar11 = &UNK_101ec19e4;
  FUN_1000bdd8c(&UNK_101ec19e4,puVar8);
  puVar12 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = &UNK_101ec19f0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101ec1c4c;
  puStack_88 = &UNK_110496d28;
  puStack_78 = puVar11;
  func_0x000107c60bc4(&puStack_a0);
  puVar8 = puStack_78;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar8);
  func_0x000107c3e4fc(puVar12);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar13);
  puVar8 = &UNK_110496d60;
  func_0x000107c613fc(&UNK_110496d60,0x28,7);
  *(undefined **)(puVar8 + 0x10) = puVar10;
  *(undefined **)(puVar8 + 0x18) = puVar9;
  *(undefined **)(puVar8 + 0x20) = puVar7;
  FUN_1000285a8(0x112e38fd0,&UNK_10da23820);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar10);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(puVar7);
  puVar14 = &UNK_101ec1b24;
  FUN_1000bdd8c(&UNK_101ec1b24,puVar8);
  puVar15 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_80 = &UNK_101ec1c44;
  puStack_a0 = puVar6;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101ec1c48;
  puStack_88 = &UNK_110496d78;
  puStack_78 = puVar14;
  func_0x000107c60bc4(&puStack_a0);
  puVar8 = puStack_78;
  func_0x000107c6157c(puVar14);
  func_0x000107c61574(puVar8);
  func_0x000107c3e4fc(puVar15);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar16);
  uVar17 = 0;
  FUN_1002b69cc(0);
  func_0x000107c610f8();
  FUN_1004ebf38(puVar11,puVar12,puVar14,puVar15,uVar17);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar10);
  return puVar11;
}



/* Entry: 1004ebe90; end: 1004ebeff;  */

void FUN_1004ebe90(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004ebf00; end: 1004ebf37;  */

void FUN_1004ebf00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004ebf38; end: 1004ebfc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ebf38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11307d2c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307d2d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307d2d8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307d2e0) = param_4;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1004ebfc4; end: 1004ec017;  */

void FUN_1004ebfc4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004ec018; end: 1004ec01f;  */

void FUN_1004ec018(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004ec020; end: 1004ec073;  */

void FUN_1004ec020(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004ec074; end: 1004ec07b;  */

void FUN_1004ec074(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1000929f0();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_1004ec114();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_1004ec180();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1004ec07c; end: 1004ec113;  */

void FUN_1004ec07c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1000929f0();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_1004ec114();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_1004ec180();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 1004ec114; end: 1004ec17f;  */

void FUN_1004ec114(undefined8 param_1)

{
  if (lRam0000000112da6e40 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e63ea08);
  return;
}



/* Entry: 1004ec180; end: 1004ec1e7;  */

void FUN_1004ec180(void)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da6e10,&UNK_10d94d070);
  func_0x000107c613fc();
  puVar1 = &UNK_1014b7dc8;
  FUN_1000bdd8c(&UNK_1014b7dc8,0);
  FUN_100093fe4(0);
  func_0x000107c610f8();
  FUN_1004ec1e8(puVar1);
  return;
}



/* Entry: 1004ec1e8; end: 1004ec26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1004ec1e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11305b998) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11305b9a0) = uVar1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 1004ec26c; end: 1004ec2af; -[SCTalkV3EntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ec26c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126fcef8;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112776d04) = 0;
  }
  return;
}



/* Entry: 1004ec2b0; end: 1004ecc6b; -[SCTalkV3EntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ec2b0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auStack_310 [8];
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined1 auStack_288 [8];
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  long lStack_260;
  undefined1 auStack_258 [8];
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined1 auStack_228 [8];
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined1 auStack_1f8 [8];
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar3 = PTR_PTR_1126da328;
  func_0x000107c5a9f0(PTR_PTR_1126da328);
  func_0x000107c61180();
  lVar20 = param_1 + _DAT_112776d08;
  func_0x000107c61148(lVar20);
  lVar4 = lVar20;
  func_0x000107c40870();
  func_0x000107c61180();
  func_0x000107c53a28(puVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(puVar3);
  lVar20 = param_1 + _DAT_112776d0c;
  func_0x000107c61148();
  lVar4 = lVar20;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c40794();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar20);
  puVar7 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_1085b2428;
  puStack_90 = &UNK_110a590d0;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_112776d60;
    func_0x000107c61148();
  }
  lVar4 = lVar20;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  puVar8 = PTR_PTR_1126ae720;
  puStack_e0 = puVar3;
  uStack_d8 = 0xc2000000;
  puStack_d0 = &UNK_1085b24c0;
  puStack_c8 = &UNK_110a59100;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c61174(lVar6);
  lStack_c0 = lVar6;
  puStack_b8 = puVar7;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  puStack_118 = puVar3;
  uStack_110 = 0xc2000000;
  puStack_108 = &UNK_1085b27d8;
  puStack_100 = &UNK_110a59130;
  func_0x000107c6111c(auStack_e8,auStack_80);
  puStack_f8 = puVar8;
  puStack_f0 = puVar7;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126ae720;
  puStack_140 = puVar3;
  uStack_138 = 0xc2000000;
  puStack_130 = &UNK_1085b2904;
  puStack_128 = &UNK_110a59160;
  func_0x000107c6111c(auStack_120,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126ae720;
  puStack_168 = puVar3;
  uStack_160 = 0xc2000000;
  puStack_158 = &UNK_1085b299c;
  puStack_150 = &UNK_11084cac0;
  func_0x000107c6111c(auStack_148,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126ae720;
  puStack_1c0 = puVar3;
  uStack_1b8 = 0xc2000000;
  puStack_1b0 = &UNK_1085b2a7c;
  puStack_1a8 = &UNK_110a591e0;
  func_0x000107c6111c(auStack_170,auStack_80);
  puStack_1a0 = puVar11;
  func_0x000107c61174(lVar6);
  lStack_198 = lVar6;
  puStack_190 = puVar9;
  puStack_188 = puVar8;
  puStack_180 = puVar7;
  puStack_178 = puVar10;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126ae720;
  puStack_1f0 = puVar3;
  uStack_1e8 = 0xc2000000;
  puStack_1e0 = &UNK_1085b2f7c;
  puStack_1d8 = &UNK_110a59210;
  func_0x000107c6111c(auStack_1c8,auStack_80);
  puStack_1d0 = puVar12;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar19 = *(undefined8 *)(param_1 + _DAT_112776d18);
  *(undefined **)(param_1 + _DAT_112776d18) = puVar13;
  func_0x000107c61170(uVar19);
  puVar13 = PTR_PTR_1126ae720;
  puStack_220 = puVar3;
  uStack_218 = 0xc2000000;
  puStack_210 = &UNK_1085b3054;
  puStack_208 = &UNK_110a59240;
  func_0x000107c6111c(auStack_1f8,auStack_80);
  puStack_200 = puVar8;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar14 = PTR_PTR_1126ae720;
  puStack_250 = puVar3;
  uStack_248 = 0xc2000000;
  puStack_240 = &UNK_1085b3100;
  puStack_238 = &UNK_110a59270;
  func_0x000107c6111c(auStack_228,auStack_80);
  puStack_230 = puVar12;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar15 = PTR_PTR_1126ae720;
  puStack_280 = puVar3;
  uStack_278 = 0xc2000000;
  puStack_270 = &UNK_1085b3174;
  puStack_268 = &UNK_110a592a0;
  func_0x000107c6111c(auStack_258,auStack_80);
  lStack_260 = lVar4;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar16 = PTR_PTR_1126ae720;
  puStack_2b8 = puVar3;
  uStack_2b0 = 0xc2000000;
  pcStack_2a8 = FUN_1007ec408;
  puStack_2a0 = &UNK_110a592d0;
  func_0x000107c6111c(auStack_288,auStack_80);
  puStack_298 = puVar14;
  puStack_290 = puVar15;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar17 = PTR_PTR_1126da380;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puStack_2e0 = puVar3;
  uStack_2d8 = 0xc2000000;
  puStack_2d0 = &UNK_1085b31c8;
  puStack_2c8 = &UNK_110848868;
  puStack_2c0 = puVar16;
  func_0x000107c4fbc8();
  func_0x000107c61170(puVar17);
  puVar17 = PTR_PTR_1126ae720;
  puStack_308 = puVar3;
  uStack_300 = 0xc2000000;
  puStack_2f8 = &UNK_1085b3218;
  puStack_2f0 = &UNK_110a59300;
  func_0x000107c6111c(auStack_2e8,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar20 = (long)_DAT_112776d04;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass((undefined1 *)(param_1 + lVar20),0x10);
    if (bVar2) {
      *(undefined1 *)(param_1 + lVar20) = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
    puVar3 = PTR_PTR_1126ae720;
  } while (cVar1 != '\0');
  func_0x000107c6111c(auStack_310,auStack_80);
  func_0x000107c61174(lVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar19 = *(undefined8 *)(param_1 + _DAT_112776d14);
  *(undefined **)(param_1 + _DAT_112776d14) = puVar3;
  func_0x000107c61170(uVar19);
  puVar3 = PTR_PTR_1126da400;
  func_0x000107c610f4(PTR_PTR_1126da400);
  func_0x000107c48c1c();
  uVar19 = *(undefined8 *)(param_1 + _DAT_112776dbc);
  func_0x000107c61174(uVar19);
  func_0x000107c42c20(uVar19);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(param_1 + _DAT_112776dc0);
  func_0x000107c61174(uVar19);
  puVar18 = PTR_PTR_1126da408;
  func_0x000107c610f4(PTR_PTR_1126da408);
  func_0x000107c45b6c();
  func_0x000107c42c20(uVar19);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(uVar19);
  puVar18 = PTR_PTR_1126da410;
  func_0x000107c610f4();
  lVar20 = param_1 + _DAT_112776d68;
  func_0x000107c61148(lVar20);
  func_0x000107c48c20();
  uVar19 = *(undefined8 *)(param_1 + _DAT_112776d2c);
  *(undefined **)(param_1 + _DAT_112776d2c) = puVar18;
  func_0x000107c61170(uVar19);
  func_0x000107c61170(lVar20);
  param_1 = param_1 + _DAT_112776d30;
  func_0x000107c61148(param_1);
  lVar20 = param_1;
  func_0x000107c40644();
  func_0x000107c61180();
  func_0x000107c3d660();
  func_0x000107c61170(lVar20);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar6);
  func_0x000107c61120(auStack_310);
  func_0x000107c61170(puVar17);
  func_0x000107c61120(auStack_2e8);
  func_0x000107c61170(puVar16);
  func_0x000107c61120(auStack_288);
  func_0x000107c61170(puVar15);
  func_0x000107c61120(auStack_258);
  func_0x000107c61170(puVar14);
  func_0x000107c61120(auStack_228);
  func_0x000107c61170(puVar13);
  func_0x000107c61120(auStack_1f8);
  func_0x000107c61120(auStack_1c8);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lStack_198);
  func_0x000107c61120(auStack_170);
  func_0x000107c61170(puVar11);
  func_0x000107c61120(auStack_148);
  func_0x000107c61170(puVar10);
  func_0x000107c61120(auStack_120);
  func_0x000107c61170(puVar9);
  func_0x000107c61120(auStack_e8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lStack_c0);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(lVar6);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 1004ecc6c; end: 1004eccbf; +[SCTCKLocationServices sharedInstance] */

void FUN_1004ecc6c(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372c4d8 != -1) {
    FUN_10002a2fc(0x11372c4d8,&PTR___NSConcreteGlobalBlock_110a5b700);
  }
  uVar1 = uRam000000011372c4d0;
  func_0x000107c61174(uRam000000011372c4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004eccc0; end: 1004ecceb;  */

void FUN_1004eccc0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126da328;
  func_0x000107c61160();
  uVar1 = puRam000000011372c4d0;
  puRam000000011372c4d0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1004eccec; end: 1004ecd97; -[SCTCKLocationServices setCountryCodeProvider:] */

/* WARNING: Possible PIC construction at 0x0001004ecd24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004ecd28) */

void FUN_1004eccec(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c611a4(param_1);
  func_0x000107c611a0(param_1 + 8,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1004ecd98; end: 1004ece1b; +[_TtC24SCAppTerminationServices23ActiveCallStateRegistry shared] */

void FUN_1004ecd98(void)

{
  if (lRam00000001130538f0 != -1) {
    func_0x000107c61568(0x1130538f0,0x1004ecdf8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138130c8);
  return;
}



/* Entry: 1004ece1c; end: 1004ece8f; -[_TtC24SCAppTerminationServices23ActiveCallStateRegistry init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ece1c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_1130538f8;
  puVar4 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_113053900);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1004ece90; end: 1004ecf2f; -[_TtC24SCAppTerminationServices23ActiveCallStateRegistry registerCallStateGetter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ece90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  func_0x000107c60bc4();
  puVar4 = &UNK_11073d7f0;
  func_0x000107c613fc(&UNK_11073d7f0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  lVar3 = _DAT_1130538f8;
  uVar6 = *(undefined8 *)(param_1 + _DAT_1130538f8);
  lVar5 = param_1;
  func_0x000107c61174();
  func_0x000107c4b940(uVar6);
  puVar1 = (undefined8 *)(lVar5 + _DAT_113053900);
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = &UNK_1040714f4;
  puVar1[1] = puVar4;
  FUN_1004ecf54(uVar6,uVar2);
  func_0x000107c5d278(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1004ecf30; end: 1004ecf53;  */

void FUN_1004ecf30(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004ecf54; end: 1004ecf63;  */

void FUN_1004ecf54(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1004ecf64; end: 1004ed087; -[SCLegacyTalkServices initWithTalkManager:talkNotificationsController:talkAudioServices:talkIdentityServices:callKitServices:] */

undefined1 *
FUN_1004ecf64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_112705088;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004ed088; end: 1004ed183; -[SCTalkServices initWithCallStateProvider:presenceStateProvider:notificationsHandler:missedCallsCache:] */

undefined1 *
FUN_1004ed088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_112705208;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004ed184; end: 1004ed23f; -[SCContinueUserActivityHandlerCallPlugin initWithTalkUserActivityHandler:contactsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1004ed184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126fcfd0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127770dc;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_1127770e0;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004ed240; end: 1004ed3bb; -[_TtC13SCSystemScope13SCSystemScope continueUserActivityEventHandlingPluginRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ed240(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_113091be8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1004ed3bc; end: 1004ed3c3;  */

void FUN_1004ed3bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004ed3c4; end: 1004ed417;  */

void FUN_1004ed3c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004ed418; end: 1004eda87;  */

void FUN_1004ed418(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_1003432bc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x38) = uStack_78;
  *(undefined8 *)(param_2 + 0x40) = uStack_80;
  *(undefined8 *)(param_2 + 0x48) = uStack_88;
  *(undefined8 *)(param_2 + 0x50) = uStack_90;
  FUN_1000285a8(0x112f31548,&UNK_10db77698);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar11 = uStack_98;
  func_0x000107c6157c(uStack_98);
  FUN_10017da58();
  puVar5 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x18) = puVar5;
  FUN_1000285a8(0x112e45940,&UNK_10da39630);
  func_0x000107c610f8();
  uVar11 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x20) = puVar6;
  FUN_1000285a8(0x112e78418,&UNK_10da81bd0);
  func_0x000107c610f8();
  uVar11 = uStack_a8;
  func_0x000107c6157c(uStack_a8);
  FUN_10017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x28) = puVar7;
  FUN_1000285a8(0x112e47548,&UNK_10daf8610);
  func_0x000107c610f8();
  uVar11 = uStack_b0;
  func_0x000107c6157c(uStack_b0);
  FUN_10017da58();
  puVar8 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x30) = puVar8;
  puVar9 = PTR_PTR_1126ac980;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = auStack_70[0];
  func_0x000107c61174();
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar1);
  func_0x000107c61174();
  uVar11 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f019ff0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar11 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f1195d0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f119600);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f119620);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar11 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f119650);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f119670);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar8);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f023fa0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  puVar5 = puVar9;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_a0);
  func_0x000107c61574(uStack_a8);
  func_0x000107c61574(uStack_b0);
  *(undefined **)(param_2 + 0x58) = puVar5;
  *param_1 = param_2;
  return;
}



/* Entry: 1004eda88; end: 1004edabb;  */

void FUN_1004eda88(void)

{
  long unaff_x20;
  
  FUN_1004ed418(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1004edabc; end: 1004edac3;  */

void FUN_1004edabc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x128);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004edac4; end: 1004edb17;  */

void FUN_1004edac4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x128);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004edb18; end: 1004ef047;  */

void FUN_1004edb18(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_100083b20(&uStack_130);
  FUN_100083b20(&uStack_138);
  FUN_100083b20(&uStack_140);
  FUN_1002b2fb4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x68) = uStack_78;
  *(undefined8 *)(param_2 + 0x70) = uStack_80;
  *(undefined8 *)(param_2 + 0x78) = uStack_88;
  *(undefined8 *)(param_2 + 0x80) = uStack_90;
  *(undefined8 *)(param_2 + 0x88) = uStack_98;
  *(undefined8 *)(param_2 + 0x90) = uStack_a0;
  *(undefined8 *)(param_2 + 0x98) = uStack_a8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_b0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_b8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_c0;
  *(undefined8 *)(param_2 + 0xb8) = uStack_c8;
  *(undefined8 *)(param_2 + 0xc0) = uStack_d0;
  *(undefined8 *)(param_2 + 200) = uStack_d8;
  *(undefined8 *)(param_2 + 0xd0) = uStack_e0;
  *(undefined8 *)(param_2 + 0xd8) = uStack_e8;
  *(undefined8 *)(param_2 + 0xe0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xe8) = uStack_f8;
  *(undefined8 *)(param_2 + 0xf0) = uStack_100;
  *(undefined8 *)(param_2 + 0xf8) = uStack_108;
  *(undefined8 *)(param_2 + 0x100) = uStack_110;
  *(undefined8 *)(param_2 + 0x108) = uStack_118;
  *(undefined8 *)(param_2 + 0x110) = uStack_120;
  *(undefined8 *)(param_2 + 0x118) = uStack_128;
  *(undefined8 *)(param_2 + 0x120) = uStack_130;
  FUN_1000285a8(0x112e3c7a0,&UNK_10da28488);
  func_0x000107c610f8();
  uVar16 = uStack_78;
  func_0x000107c61174();
  uVar17 = uStack_80;
  func_0x000107c61174();
  uVar2 = uStack_88;
  func_0x000107c61174();
  uVar3 = uStack_90;
  func_0x000107c61174();
  uVar4 = uStack_98;
  func_0x000107c61174();
  uVar5 = uStack_a0;
  func_0x000107c61174();
  uVar6 = uStack_a8;
  func_0x000107c61174();
  uVar7 = uStack_b0;
  func_0x000107c61174();
  uVar8 = uStack_b8;
  func_0x000107c61174();
  uVar9 = uStack_c0;
  func_0x000107c61174();
  uVar10 = uStack_c8;
  func_0x000107c61174();
  uVar11 = uStack_d0;
  func_0x000107c61174();
  uVar12 = uStack_d8;
  func_0x000107c61174();
  uVar18 = uStack_e0;
  func_0x000107c61174();
  uVar19 = uStack_e8;
  func_0x000107c61174();
  uVar20 = uStack_f0;
  func_0x000107c61174();
  uVar21 = uStack_f8;
  func_0x000107c61174();
  uVar22 = uStack_100;
  func_0x000107c61174();
  uVar23 = uStack_108;
  func_0x000107c61174();
  uVar24 = uStack_110;
  func_0x000107c61174();
  uVar25 = uStack_118;
  func_0x000107c61174();
  uVar26 = uStack_120;
  func_0x000107c61174();
  uVar27 = uStack_128;
  func_0x000107c61174();
  uVar28 = uStack_130;
  func_0x000107c61174();
  uVar15 = uStack_138;
  func_0x000107c6157c();
  FUN_1003b3b80();
  puVar13 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x18) = puVar13;
  FUN_1000285a8(0x112e3c7a8,&UNK_10da28490);
  func_0x000107c610f8();
  uVar15 = uStack_140;
  func_0x000107c6157c();
  FUN_1003b3b80();
  puVar13 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x20) = puVar13;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x28) = puVar13;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x30) = puVar13;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x38) = puVar13;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x40) = puVar13;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x48) = puVar13;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x50) = puVar13;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x58) = puVar13;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x60) = puVar13;
  puVar13 = PTR_PTR_1126a98d8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar13;
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  uVar31 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar31 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb8f0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd20);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0x6553726579616c70;
  func_0x000107c5fadc(0x6553726579616c70,0xee00736563697672);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f019f20);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar31);
  uVar31 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85690);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar31);
  uVar31 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f019f40);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f019f70);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f019f90);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar31 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f019fb0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f019fd0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar31);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar31 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar29 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar29);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar31 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar29 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f019ff0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar29);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar31 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar31);
  uVar29 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f01a010);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar29);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar31 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar29 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a030);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar29);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar31 = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar29 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f01a050);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar29);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar31 = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar29 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a070);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar29);
  uVar31 = *(undefined8 *)(param_2 + 0x10);
  uVar29 = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f01a090);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar31 = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar29 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f01a0c0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar29);
  uVar31 = *(undefined8 *)(param_2 + 0x10);
  uVar29 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f01a100);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar15);
  uVar31 = *(undefined8 *)(param_2 + 0x10);
  uVar29 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar31);
  func_0x000107c61174();
  uVar15 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f01a130);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar15);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  lVar30 = *(long *)(param_2 + 0x28);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar30 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004ef02c);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x128) = lVar30;
  lVar30 = *(long *)(param_2 + 0x30);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar30 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004ef030);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x130) = lVar30;
  lVar30 = *(long *)(param_2 + 0x38);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar30 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004ef034);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x138) = lVar30;
  lVar30 = *(long *)(param_2 + 0x40);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar30 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004ef038);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x140) = lVar30;
  lVar30 = *(long *)(param_2 + 0x48);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar30 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004ef03c);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x148) = lVar30;
  lVar30 = *(long *)(param_2 + 0x50);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar30 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004ef040);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x150) = lVar30;
  lVar30 = *(long *)(param_2 + 0x58);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar30 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004ef044);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x158) = lVar30;
  lVar30 = *(long *)(param_2 + 0x60);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar30 != 0) {
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar28);
    func_0x000107c61574(uStack_138);
    func_0x000107c61574(uStack_140);
    *(long *)(param_2 + 0x160) = lVar30;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004ef048);
  (*pcVar1)();
}



/* Entry: 1004ef048; end: 1004ef0a3;  */

void FUN_1004ef048(void)

{
  long unaff_x20;
  
  FUN_1004edb18(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 1004ef0a4; end: 1004ef1bb;  */

void FUN_1004ef0a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004ef1bc; end: 1004ef317;  */

void FUN_1004ef1bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a7248;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef85650);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 1004ef318; end: 1004ef3fb; -[SCTemporaryFileWriterServiceProvider provide] */

void FUN_1004ef318(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b7358;
  func_0x000107c610f4(PTR_PTR_1126b7358);
  func_0x000107c48c70();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1004ef3fc; end: 1004ef46f; -[SCTemporaryFileWriterServices initWithTemporaryFileWriter:] */

undefined1 * FUN_1004ef3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702be0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004ef470; end: 1004ef49b;  */

void FUN_1004ef470(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004ef49c; end: 1004ef4a3;  */

void FUN_1004ef49c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004ef4a4; end: 1004ef4f7;  */

void FUN_1004ef4a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004ef4f8; end: 1004ef503;  */

void FUN_1004ef4f8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002a40c8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a98f0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1e0e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1004ef504; end: 1004ef7b7;  */

void FUN_1004ef504(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002a40c8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a98f0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1e0e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1004ef7b8; end: 1004ef8ff; -[SCSpectaclesOnDemandResourcesServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ef7b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  lVar1 = param_1 + _DAT_11272d278;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c3e23c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c408ec();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11272d27c);
  *(long *)(param_1 + _DAT_11272d27c) = lVar3;
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126c0d68;
  func_0x000107c610f4(PTR_PTR_1126c0d68);
  func_0x000107c47bf8();
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1004ef900; end: 1004ef907; -[SCPlaybackAssetService assetRepositoryFactory] */

undefined8 FUN_1004ef900(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1004ef908; end: 1004ef9a7; -[SCPlaybackAssetScopedRepositoryFactoryImpl create] */

void FUN_1004ef908(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR_PTR_1126ae720;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  puStack_50 = &UNK_105694efc;
  puStack_48 = &UNK_1108a6918;
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c3e4fc(puVar3,param_2,&puStack_60);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1004ef9a8; end: 1004efa1b; -[SCSpectaclesOnDemandResourcesServices initWithOnDemandResourceFetching:] */

undefined1 * FUN_1004ef9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fcdc0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004efa1c; end: 1004efa57;  */

void FUN_1004efa1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004efa58; end: 1004efa5f;  */

void FUN_1004efa58(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004efa60; end: 1004efab3;  */

void FUN_1004efa60(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004efab4; end: 1004efabf;  */

void FUN_1004efab4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002a41f8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a98f8;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1004efac0; end: 1004efd73;  */

void FUN_1004efac0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002a41f8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a98f8;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1004efd74; end: 1004efe57; -[SCSpectaclesServerNetworkingServiceProvider provide] */

void FUN_1004efd74(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c0cb0;
  func_0x000107c610f4(PTR_PTR_1126c0cb0);
  func_0x000107c485e8();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1004efe58; end: 1004efecb; -[SCSpectaclesServerNetworkingServices initWithServerMetadataFetcher:] */

undefined1 * FUN_1004efe58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f7b88;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004efecc; end: 1004eff07;  */

void FUN_1004efecc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004eff08; end: 1004eff0f;  */

void FUN_1004eff08(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004eff10; end: 1004eff63;  */

void FUN_1004eff10(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004eff64; end: 1004eff6b;  */

void FUN_1004eff64(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1002b2be8();
  func_0x000107c613fc();
  FUN_1004effe0(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004eff6c; end: 1004effdf;  */

void FUN_1004eff6c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1002b2be8();
  func_0x000107c613fc();
  FUN_1004effe0(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 1004effe0; end: 1004f0143;  */

void FUN_1004effe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a98c8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f019ef0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 1004f0144; end: 1004f0227; -[SCSpectaclesAuthorizationServiceProvider provide] */

void FUN_1004f0144(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c18a0;
  func_0x000107c610f4(PTR_PTR_1126c18a0);
  func_0x000107c458a0();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1004f0228; end: 1004f029b; -[SCSpectaclesAuthorizationServices initWithAuthorizationProvider:] */

undefined1 * FUN_1004f0228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fb4a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004f029c; end: 1004f02c7;  */

void FUN_1004f029c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004f02c8; end: 1004f0313;  */

void FUN_1004f02c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  FUN_1002b2d5c();
  func_0x000107c610f8();
  FUN_1004f0604(uStack_28,param_2);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1004f0314; end: 1004f04fb;  */

/* WARNING: Possible PIC construction at 0x0001004f044c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004f045c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004f046c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004f047c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004f048c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004f049c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004f04ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004f04bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004f04cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004f04c0) */
/* WARNING: Removing unreachable block (ram,0x0001004f04b0) */
/* WARNING: Removing unreachable block (ram,0x0001004f04a0) */
/* WARNING: Removing unreachable block (ram,0x0001004f0490) */
/* WARNING: Removing unreachable block (ram,0x0001004f0480) */
/* WARNING: Removing unreachable block (ram,0x0001004f0470) */
/* WARNING: Removing unreachable block (ram,0x0001004f0460) */
/* WARNING: Removing unreachable block (ram,0x0001004f0450) */
/* WARNING: Removing unreachable block (ram,0x0001004f04d0) */

void FUN_1004f0314(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_1104a7160;
  func_0x000107c613fc(&UNK_1104a7160,0xa8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  uVar2 = 0x112e439e8;
  FUN_1000285a8(0x112e439e8,&UNK_10da36438);
  func_0x000107c613fc();
  puVar3 = &UNK_101f514b8;
  FUN_1000841f8(&UNK_101f514b8,puVar1,uVar2);
  FUN_100084214(&UNK_10da36400,0x35,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1004f04fc; end: 1004f04ff;  */

void FUN_1004f04fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004f0500; end: 1004f054b;  */

void FUN_1004f0500(void)

{
  long unaff_x20;
  
  FUN_1004f0314(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 1004f054c; end: 1004f054f;  */

void FUN_1004f054c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004f0550; end: 1004f0603;  */

void FUN_1004f0550(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004f0604; end: 1004f0723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004f0604(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fe34b8) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112fe34c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fe34c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fe34d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fe34d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fe34e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fe34e8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1004f0724; end: 1004f072b;  */

void FUN_1004f0724(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e42fb0,&UNK_10da34e00);
  func_0x000107c613fc();
  puVar1 = &UNK_101f48dc4;
  FUN_1000841f8();
  FUN_100084214(&UNK_10da34dc0,0x38,2);
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1004f072c; end: 1004f07a7;  */

void FUN_1004f072c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e42fb0,&UNK_10da34e00);
  func_0x000107c613fc();
  puVar1 = &UNK_101f48dc4;
  FUN_1000841f8(&UNK_101f48dc4,param_2);
  FUN_100084214(&UNK_10da34dc0,0x38,2);
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1004f07a8; end: 1004f07cb;  */

void FUN_1004f07a8(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1004f07cc; end: 1004f1457; -[SCSpectaclesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004f07cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long lVar24;
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar1 = param_1 + _DAT_11272d1a4;
  func_0x000107c61148(lVar1);
  lVar24 = lVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  FUN_1004f1458();
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar1);
  lVar24 = (long)_DAT_11272d1a8;
  lVar1 = param_1 + lVar24;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c3e270();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4f7fc();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + lVar24;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c3e270();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar5 = lVar3;
  func_0x000107c4f7fc();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  lVar24 = param_1 + lVar24;
  func_0x000107c61148();
  lVar1 = lVar24;
  func_0x000107c3e270();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4f7fc();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar24);
  func_0x000107c611a0(0x11381e9d0,lVar5);
  puVar6 = PTR_PTR_1126c0cc0;
  func_0x000107c610f4();
  func_0x000107c47594();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11272d1ac));
  func_0x000107c61144(auStack_80,param_1);
  puVar7 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_100c5bb60;
  puStack_90 = &UNK_1108cc608;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126c0cc8;
  func_0x000107c610f4();
  func_0x000107c48454();
  lVar24 = (long)_DAT_11272d1b0;
  lVar1 = param_1 + lVar24;
  func_0x000107c61148(lVar1);
  func_0x000107c59760();
  func_0x000107c61170(lVar1);
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11272d1b4));
  puVar9 = PTR_PTR_1126c0cd0;
  func_0x000107c610fc();
  uVar23 = *(undefined8 *)(param_1 + _DAT_11272d1b8);
  *(undefined **)(param_1 + _DAT_11272d1b8) = puVar9;
  func_0x000107c61170(uVar23);
  puVar9 = PTR_PTR_1126c0cd8;
  func_0x000107c610f4();
  func_0x000107c4747c();
  uVar23 = *(undefined8 *)(param_1 + _DAT_11272d1bc);
  *(undefined **)(param_1 + _DAT_11272d1bc) = puVar9;
  func_0x000107c61170(uVar23);
  puVar9 = PTR_PTR_1126ae720;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_1059e3660;
  puStack_b8 = &UNK_1108cc638;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c4c268();
  func_0x000107c61180();
  uVar23 = *(undefined8 *)(param_1 + _DAT_11272d1c0);
  *(undefined **)(param_1 + _DAT_11272d1c0) = puVar9;
  func_0x000107c61170(uVar23);
  puVar10 = PTR_PTR_1126c0ce0;
  func_0x000107c610f4();
  func_0x000107c45a30();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11272d1c4));
  puVar9 = PTR_PTR_1126ae720;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  puStack_f8 = &UNK_100c52d3c;
  puStack_f0 = &UNK_1108cc668;
  func_0x000107c6111c(auStack_d8,auStack_80);
  func_0x000107c61174(puVar8);
  puStack_e8 = puVar8;
  func_0x000107c61174(lVar5);
  lStack_e0 = lVar5;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126c0ce8;
  func_0x000107c610f4();
  puVar12 = PTR_PTR_1126ae720;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  puStack_120 = &UNK_1059e36a0;
  puStack_118 = &UNK_110855710;
  func_0x000107c61174(puVar9);
  puStack_110 = puVar9;
  func_0x000107c3e4fc(puVar12);
  func_0x000107c61180();
  puVar14 = PTR_PTR_1126ae720;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  puStack_148 = &UNK_1059e36e8;
  puStack_140 = &UNK_110855710;
  func_0x000107c61174(puVar9);
  puStack_138 = puVar9;
  func_0x000107c3e4fc(puVar14);
  func_0x000107c61180();
  puVar16 = PTR_PTR_1126ae720;
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  puStack_170 = &UNK_1059e3730;
  puStack_168 = &UNK_110855710;
  func_0x000107c61174(puVar9);
  puStack_160 = puVar9;
  func_0x000107c3e4fc(puVar16);
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126ae720;
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  puStack_198 = &UNK_100c52cf4;
  puStack_190 = &UNK_110855710;
  func_0x000107c61174(puVar9);
  puStack_188 = puVar9;
  func_0x000107c3e4fc(puVar13);
  func_0x000107c61180();
  puVar17 = PTR_PTR_1126ae720;
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c8 = 0xc2000000;
  puStack_1c0 = &UNK_1059e3778;
  puStack_1b8 = &UNK_110855710;
  func_0x000107c61174(puVar9);
  puStack_1b0 = puVar9;
  func_0x000107c3e4fc(puVar17);
  func_0x000107c61180();
  puVar15 = PTR_PTR_1126ae720;
  puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f0 = 0xc2000000;
  puStack_1e8 = &UNK_1059e37c0;
  puStack_1e0 = &UNK_110855710;
  func_0x000107c61174(puVar9);
  puStack_1d8 = puVar9;
  func_0x000107c3e4fc(puVar15);
  func_0x000107c61180();
  func_0x000107c45688();
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar12);
  puVar12 = puVar11;
  func_0x000107c435e0();
  func_0x000107c61180();
  lVar1 = param_1 + lVar24;
  func_0x000107c61148();
  func_0x000107c54a24();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar12);
  puVar12 = puVar11;
  func_0x000107c418ac();
  func_0x000107c61180();
  lVar1 = param_1 + lVar24;
  func_0x000107c61148();
  func_0x000107c5406c();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar12);
  puVar12 = puVar11;
  func_0x000107c5b73c(puVar11);
  func_0x000107c61180();
  lVar1 = param_1 + lVar24;
  func_0x000107c61148();
  func_0x000107c59608();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar12);
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11272d1c8));
  puVar12 = PTR_PTR_1126ae720;
  puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_218 = 0xc2000000;
  puStack_210 = &UNK_1059e3808;
  puStack_208 = &UNK_110855710;
  func_0x000107c61174(puVar9);
  puStack_200 = puVar9;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126c0cf0;
  func_0x000107c610f4();
  func_0x000107c47b08();
  lVar1 = param_1 + lVar24;
  func_0x000107c61148(lVar1);
  func_0x000107c56b20();
  func_0x000107c61170(lVar1);
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11272d1cc));
  func_0x000107c61144(auStack_228,puVar11);
  puVar14 = PTR_PTR_1126ae720;
  puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_258 = 0xc2000000;
  puStack_250 = &UNK_1059e3850;
  puStack_248 = &UNK_1108cc698;
  func_0x000107c6111c(auStack_238,auStack_80);
  func_0x000107c6111c(auStack_230,auStack_228);
  func_0x000107c61174(puVar9);
  puStack_240 = puVar9;
  func_0x000107c3e4fc(puVar14);
  func_0x000107c61180();
  puVar15 = PTR_PTR_1126c0cf8;
  func_0x000107c610f4();
  func_0x000107c489dc();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11272d1d0));
  func_0x000107c61144(auStack_268,puVar15);
  puVar16 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_278,auStack_228);
  func_0x000107c6111c(auStack_270,auStack_268);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar17 = PTR_PTR_1126c0d08;
  func_0x000107c610f4(PTR_PTR_1126c0d08);
  func_0x000107c460fc();
  lVar24 = param_1 + lVar24;
  func_0x000107c61148();
  func_0x000107c53884();
  func_0x000107c61170(lVar24);
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11272d1d4));
  uVar19 = param_1 + _DAT_11272d1dc;
  func_0x000107c61148();
  uVar18 = uVar19;
  func_0x000107c5da68();
  func_0x000107c61180();
  func_0x000107c61170(uVar19);
  uVar19 = uVar18;
  func_0x000107c49e14();
  if (((uVar19 & 1) != 0) || (uVar19 = uVar18, func_0x000107c49e24(), (int)uVar19 != 0)) {
    puVar20 = puVar11;
    func_0x000107c5b73c(puVar11);
    func_0x000107c61180();
    puVar21 = puVar20;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c3fa80();
    func_0x000107c61170(puVar21);
    func_0x000107c61170(puVar20);
  }
  uVar23 = *(undefined8 *)(param_1 + _DAT_11272d1d8);
  puVar22 = PTR_PTR_1126c0d10;
  func_0x000107c610f4(PTR_PTR_1126c0d10);
  puVar20 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar9);
  func_0x000107c3e4fc(puVar20);
  func_0x000107c61180();
  puVar21 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar9);
  func_0x000107c3e4fc(puVar21);
  func_0x000107c61180();
  func_0x000107c48914(puVar22);
  func_0x000107c42c20(uVar23);
  func_0x000107c61170(puVar22);
  func_0x000107c61170(puVar21);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar16);
  func_0x000107c61120(auStack_270);
  func_0x000107c61120(auStack_278);
  func_0x000107c61120(auStack_268);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puStack_240);
  func_0x000107c61120(auStack_230);
  func_0x000107c61120(auStack_238);
  func_0x000107c61120(auStack_228);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puStack_200);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puStack_1d8);
  func_0x000107c61170(puStack_1b0);
  func_0x000107c61170(puStack_188);
  func_0x000107c61170(puStack_160);
  func_0x000107c61170(puStack_138);
  func_0x000107c61170(puStack_110);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lStack_e0);
  func_0x000107c61170(puStack_e8);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(puVar10);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 1004f1458; end: 1004f14a7;  */

/* WARNING: Possible PIC construction at 0x0001004f148c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004f1490) */

void FUN_1004f1458(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e05d8;
  func_0x000107c61174();
  func_0x000107c610f4(puVar1);
  func_0x000107c45db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1004f14a8; end: 1004f1513; -[SCSpectaclesCircumstanceEngineConfigs initWithCircumstanceEngine:] */

undefined1 * FUN_1004f14a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112709eb0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c3bd3c(puVar1);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004f1514; end: 1004f1c1b; -[SCSpectaclesCircumstanceEngineConfigs _loadConfigsWithCircumstanceEngine:] */

void FUN_1004f1514(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_260 [8];
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined1 *puStack_238;
  undefined1 auStack_230 [8];
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined1 *puStack_208;
  undefined1 auStack_200 [8];
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined1 *puStack_178;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined1 *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined1 *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_3);
  puVar2 = auStack_78;
  func_0x000107c61144(puVar2,param_1);
  func_0x000107c60f34();
  func_0x000107c61174();
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined1 **)(param_1 + 8) = puVar2;
  func_0x000107c61170(uVar3);
  *(undefined1 *)(param_1 + 0x10) = 0;
  puVar4 = puVar2;
  func_0x000107c60f38(puVar2);
  FUN_100078e94();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_100c44c34;
  puStack_90 = &UNK_11084b7a0;
  func_0x000107c6111c(auStack_80,auStack_78);
  func_0x000107c61174(puVar2);
  puStack_88 = puVar2;
  func_0x000107c3ebd0(param_3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puStack_88);
  func_0x000107c61120(auStack_80);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined ***)(param_1 + 0x20) = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x000107c61170(uVar3);
  puVar4 = puVar2;
  func_0x000107c60f38(puVar2);
  FUN_100078e94();
  func_0x000107c61180();
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  puStack_c8 = &UNK_100c4515c;
  puStack_c0 = &UNK_110859c28;
  func_0x000107c6111c(auStack_b0,auStack_78);
  func_0x000107c61174(puVar2);
  puStack_b8 = puVar2;
  func_0x000107c5c1d8(param_3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puStack_b8);
  func_0x000107c61120(auStack_b0);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined ***)(param_1 + 0x28) = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x000107c61170(uVar3);
  puVar4 = puVar2;
  func_0x000107c60f38(puVar2);
  FUN_100078e94();
  func_0x000107c61180();
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  puStack_f8 = &UNK_100c451c4;
  puStack_f0 = &UNK_110859c28;
  func_0x000107c6111c(auStack_e0,auStack_78);
  func_0x000107c61174(puVar2);
  puStack_e8 = puVar2;
  func_0x000107c5c1d8(param_3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puStack_e8);
  func_0x000107c61120(auStack_e0);
  *(undefined4 *)(param_1 + 0x18) = 0x43a30000;
  puVar4 = puVar2;
  func_0x000107c60f38(puVar2);
  FUN_100078e94();
  func_0x000107c61180();
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  puStack_128 = &UNK_100c44cb4;
  puStack_120 = &UNK_11085aaa8;
  func_0x000107c6111c(auStack_110,auStack_78);
  func_0x000107c61174(puVar2);
  puStack_118 = puVar2;
  func_0x000107c436e0(0x43a30000,param_3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puStack_118);
  func_0x000107c61120(auStack_110);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x30) = &PTR____CFConstantStringClassReference_110f72bf8;
  func_0x000107c61170(uVar3);
  puVar4 = puVar2;
  func_0x000107c60f38(puVar2);
  FUN_100078e94();
  func_0x000107c61180();
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  puStack_158 = &UNK_100c4522c;
  puStack_150 = &UNK_110859c28;
  func_0x000107c6111c(auStack_140,auStack_78);
  func_0x000107c61174(puVar2);
  puStack_148 = puVar2;
  func_0x000107c5c1d8(param_3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puStack_148);
  func_0x000107c61120(auStack_140);
  *(undefined1 *)(param_1 + 0x11) = 0;
  puVar4 = puVar2;
  func_0x000107c60f38(puVar2);
  FUN_100078e94();
  func_0x000107c61180();
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  puStack_188 = &UNK_100c44d08;
  puStack_180 = &UNK_11084b7a0;
  func_0x000107c6111c(auStack_170,auStack_78);
  func_0x000107c61174(puVar2);
  puStack_178 = puVar2;
  func_0x000107c3ebd0(param_3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puStack_178);
  func_0x000107c61120(auStack_170);
  *(undefined1 *)(param_1 + 0x12) = 0;
  puVar4 = puVar2;
  func_0x000107c60f38(puVar2);
  FUN_100078e94();
  func_0x000107c61180();
  puStack_1c8 = puVar1;
  uStack_1c0 = 0xc2000000;
  puStack_1b8 = &UNK_100c44e34;
  puStack_1b0 = &UNK_11084b7a0;
  func_0x000107c6111c(auStack_1a0,auStack_78);
  func_0x000107c61174(puVar2);
  puStack_1a8 = puVar2;
  func_0x000107c3ebd0(param_3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puStack_1a8);
  func_0x000107c61120(auStack_1a0);
  *(undefined1 *)(param_1 + 0x13) = 0;
  puVar4 = puVar2;
  func_0x000107c60f38(puVar2);
  FUN_100078e94();
  func_0x000107c61180();
  puStack_1f8 = puVar1;
  uStack_1f0 = 0xc2000000;
  puStack_1e8 = &UNK_100c44fa8;
  puStack_1e0 = &UNK_11084b7a0;
  func_0x000107c6111c(auStack_1d0,auStack_78);
  func_0x000107c61174(puVar2);
  puStack_1d8 = puVar2;
  func_0x000107c3ebd0(param_3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puStack_1d8);
  func_0x000107c61120(auStack_1d0);
  *(undefined1 *)(param_1 + 0x14) = 0;
  puVar4 = puVar2;
  func_0x000107c60f38(puVar2);
  FUN_100078e94();
  func_0x000107c61180();
  puStack_228 = puVar1;
  uStack_220 = 0xc2000000;
  puStack_218 = &UNK_100c44ff0;
  puStack_210 = &UNK_11084b7a0;
  func_0x000107c6111c(auStack_200,auStack_78);
  func_0x000107c61174(puVar2);
  puStack_208 = puVar2;
  func_0x000107c3ebd0(param_3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puStack_208);
  func_0x000107c61120(auStack_200);
  *(undefined1 *)(param_1 + 0x15) = 1;
  puVar4 = puVar2;
  func_0x000107c60f38();
  FUN_100078e94();
  func_0x000107c61180();
  puStack_258 = puVar1;
  uStack_250 = 0xc2000000;
  puStack_248 = &UNK_100c45038;
  puStack_240 = &UNK_11084b7a0;
  func_0x000107c6111c(auStack_230,auStack_78);
  func_0x000107c61174(puVar2);
  puStack_238 = puVar2;
  func_0x000107c3ebd0(param_3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puStack_238);
  func_0x000107c61120(auStack_230);
  *(undefined1 *)(param_1 + 0x16) = 0;
  puVar4 = puVar2;
  func_0x000107c60f38(puVar2);
  FUN_100078e94();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_260,auStack_78);
  func_0x000107c61174(puVar2);
  func_0x000107c3ebd0(param_3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_260);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_78);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1004f1c1c; end: 1004f1d8f; -[SCCircumstanceEngine boolValueForConfigKey:defaultValue:featureProvidedSignals:callbackPerformer:callback:] */

void FUN_1004f1c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  uVar1 = param_1;
  func_0x000107c3c7f4(param_1,param_2,param_3);
  if ((int)uVar1 == 0) {
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_1054e2710;
    puStack_a0 = &UNK_110891c00;
    uStack_98 = param_7;
    uStack_90 = param_4;
    func_0x000107c61174(param_7);
    func_0x000107c3b0f4(param_1,param_2,param_3,4,param_5,param_6,&puStack_b8);
    func_0x000107c61170(param_6);
    uVar1 = uStack_98;
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    puStack_78 = &UNK_100c44bf8;
    puStack_70 = &UNK_110855c70;
    uStack_68 = param_1;
    uStack_50 = param_7;
    func_0x000107c61174(param_3);
    uStack_60 = param_3;
    uStack_48 = param_4;
    func_0x000107c61174(param_5);
    uStack_58 = param_5;
    func_0x000107c61174(param_7);
    func_0x000107c4e524(param_6,param_2,&puStack_88);
    func_0x000107c61170(param_6);
    func_0x000107c61170(uStack_58);
    func_0x000107c61170(uStack_60);
    uVar1 = uStack_50;
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return;
}


