/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036f40c8; end: 1036f40fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f40c8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1036f40fc();
  FUN_1036f4428(*(undefined8 *)(unaff_x20 + _DAT_112f89598));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1036f40fc; end: 1036f4273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036f40fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_b0;
  puVar2 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  puVar3 = &UNK_110684e48;
  func_0x000107c613fc(&UNK_110684e48,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar4 = &UNK_110684e70;
  func_0x000107c613fc(&UNK_110684e70,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
  puVar5 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1036f46d8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100e1779c;
  puStack_68 = &UNK_110684e88;
  ppuVar6 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar6);
  pcStack_90 = FUN_1036f46e4;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100e17304;
  puStack_98 = &UNK_110684eb0;
  puStack_88 = puVar4;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  func_0x000107c47be0(puVar5);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_88);
  func_0x000107c61574(puStack_58);
  return puVar5;
}



/* Entry: 1036f4274; end: 1036f42eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036f4274(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f89598);
  uVar1 = uVar3;
  func_0x000107c3eedc();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49f74();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 != 0) {
    func_0x000107c3eedc(uVar3);
    func_0x000107c61180();
    func_0x000107c4283c();
    func_0x000107c61170(uVar3);
  }
  return 0;
}



/* Entry: 1036f42ec; end: 1036f431f;  */

void FUN_1036f42ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036f4320; end: 1036f439f; -[SpotlightPostingCameraEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036f433c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f4340) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f4320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f89590));
  return;
}



/* Entry: 1036f43a0; end: 1036f441b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036f43a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + _DAT_112f89598);
  uVar1 = uVar3;
  func_0x000107c3eedc();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49f74();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 != 0) {
    func_0x000107c3eedc(uVar3);
    func_0x000107c61180();
    func_0x000107c4283c();
    func_0x000107c61170(uVar3);
  }
  return 0;
}



/* Entry: 1036f441c; end: 1036f441f; -[SpotlightPostingCameraEntryPoint didSendSnap] */

void FUN_1036f441c(void)

{
  return;
}



/* Entry: 1036f4420; end: 1036f4423; -[SpotlightPostingCameraEntryPoint didSaveSnap] */

void FUN_1036f4420(void)

{
  return;
}



/* Entry: 1036f4424; end: 1036f4427; -[SpotlightPostingCameraEntryPoint didCaptureMediaWithSnapDocEditor:] */

void FUN_1036f4424(void)

{
  return;
}



/* Entry: 1036f4428; end: 1036f46b7;  */

/* WARNING: Possible PIC construction at 0x0001036f44b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f4500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f4554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f4584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f4628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f4650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f4660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f4670: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f4664) */
/* WARNING: Removing unreachable block (ram,0x0001036f4654) */
/* WARNING: Removing unreachable block (ram,0x0001036f462c) */
/* WARNING: Removing unreachable block (ram,0x0001036f4588) */
/* WARNING: Removing unreachable block (ram,0x0001036f4558) */
/* WARNING: Removing unreachable block (ram,0x0001036f4504) */
/* WARNING: Removing unreachable block (ram,0x0001036f44b4) */
/* WARNING: Removing unreachable block (ram,0x0001036f4698) */
/* WARNING: Removing unreachable block (ram,0x0001036f44b8) */
/* WARNING: Removing unreachable block (ram,0x0001036f4674) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f4428(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112f89590) + _DAT_11306dc78);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  puVar3 = PTR_PTR_1126ad4c8;
  func_0x000107c610f8(PTR_PTR_1126ad4c8);
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c47cc0(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1036f46b8; end: 1036f46d7;  */

void FUN_1036f46b8(void)

{
  func_0x000107c61168(&PTR_PTR_1128e48d0);
  return;
}



/* Entry: 1036f46d8; end: 1036f46e3;  */

void FUN_1036f46d8(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_attachUI__1125a0c08,param_1);
  return;
}



/* Entry: 1036f46e4; end: 1036f47cf;  */

void FUN_1036f46e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &UNK_110684ee8;
  func_0x000107c613fc(&UNK_110684ee8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,uVar2);
  puVar4 = &UNK_110684f10;
  func_0x000107c613fc(&UNK_110684f10,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  pcStack_50 = FUN_1036f47ec;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_110684f28;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c41864(uVar1);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 1036f47d0; end: 1036f47eb;  */

void FUN_1036f47d0(long param_1,long param_2)

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



/* Entry: 1036f47ec; end: 1036f499f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f47ec(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_a0 [24];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar6 + 0x10,auStack_58,0,0);
  lVar2 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar7 = *(undefined8 *)(lVar2 + _DAT_112f89598);
    func_0x000107c61174(uVar7);
    func_0x000107c61170(lVar2);
    uVar3 = uVar7;
    func_0x000107c3eedc(uVar7);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    puVar4 = &UNK_110684f60;
    func_0x000107c613fc(&UNK_110684f60,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar1;
    *(undefined8 *)(puVar4 + 0x18) = uVar9;
    pcStack_68 = FUN_1036f49a0;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000b0c7c;
    puStack_70 = &UNK_110684f78;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_60;
    func_0x000100b64c10(uVar1,uVar9);
    func_0x000107c61574(puVar4);
    func_0x000107c42840(uVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61428(lVar6 + 0x10,&puStack_88,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    lVar8 = *(long *)(lVar6 + _DAT_112f89590);
    func_0x000107c61174();
    func_0x000107c61170(lVar6);
    lVar2 = _DAT_11306dc88;
    func_0x000107c61428(lVar8 + _DAT_11306dc88,auStack_a0,0,0);
    lVar2 = lVar8 + lVar2;
    func_0x000107c61618();
    func_0x000107c61170(lVar8);
    if (lVar2 != 0) {
      func_0x000107c5b920(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1036f49a0; end: 1036f49c7;  */

void FUN_1036f49a0(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 1036f49c8; end: 1036f49df;  */

void FUN_1036f49c8(long param_1,long param_2)

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



/* Entry: 1036f49e0; end: 1036f4a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f49e0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1036f4dd4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f895d8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1036f4a4c; end: 1036f4ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f4a4c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f895d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036f4ab8; end: 1036f4b17; -[_TtC41StartCallTrayScopedFactoryServiceProvider27StartCallTrayScopedServices init] */

void FUN_1036f4ab8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StartCallTrayScopedFactoryServiceProvider.StartCallTrayScopedServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f4ae4);
  (*pcVar1)();
}



/* Entry: 1036f4b18; end: 1036f4b27; -[_TtC41StartCallTrayScopedFactoryServiceProvider27StartCallTrayScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f4b18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f895d8));
  return;
}



/* Entry: 1036f4b28; end: 1036f4b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f4b28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110685170;
  func_0x000107c613fc(&UNK_110685170,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1036f4e6c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1036f4b94; end: 1036f4c2f;  */

void FUN_1036f4b94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110685080;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110685080;
  return;
}



/* Entry: 1036f4c30; end: 1036f4c67;  */

void FUN_1036f4c30(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1036f4c68; end: 1036f4c6f;  */

undefined8 FUN_1036f4c68(void)

{
  return 0x1b;
}



/* Entry: 1036f4c70; end: 1036f4da3;  */

void FUN_1036f4c70(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110685198;
  func_0x000107c613fc(&UNK_110685198,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1036f4e44;
  func_0x00010058fa64(FUN_1036f4e44,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036f4da4; end: 1036f4dd3;  */

undefined ** FUN_1036f4da4(void)

{
  return &PTR_DAT_113067168;
}



/* Entry: 1036f4dd4; end: 1036f4df3;  */

void FUN_1036f4dd4(void)

{
  func_0x000107c61168(&PTR_PTR_1128e49a0);
  return;
}



/* Entry: 1036f4df4; end: 1036f4e43;  */

undefined1  [16] FUN_1036f4df4(void)

{
  return ZEXT816(0x1106850d0);
}



/* Entry: 1036f4e44; end: 1036f4e6b;  */

void FUN_1036f4e44(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1036f4e6c; end: 1036f4e6f;  */

void FUN_1036f4e6c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1036f4e70; end: 1036f4f2f;  */

/* WARNING: Possible PIC construction at 0x0001036f4f0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f4f10) */

void FUN_1036f4e70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110685220;
  func_0x000107c613fc(&UNK_110685220,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112f89648;
  func_0x0001000285a8(0x112f89648,&UNK_10dbfe800);
  func_0x000107c613fc();
  pcVar3 = FUN_1036f5298;
  func_0x0001000841fc(FUN_1036f5298,puVar1,uVar2);
  func_0x000100084214(&UNK_10dbfe7d0,0x29,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1036f4f30; end: 1036f4f4b;  */

/* WARNING: Possible PIC construction at 0x0001036f4f0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f4f10) */

void FUN_1036f4f30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_110685220;
  func_0x000107c613fc(&UNK_110685220,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112f89648;
  func_0x0001000285a8(0x112f89648,&UNK_10dbfe800);
  func_0x000107c613fc();
  pcVar4 = FUN_1036f5298;
  func_0x0001000841fc(FUN_1036f5298,puVar2,uVar3);
  func_0x000100084214(&UNK_10dbfe7d0,0x29,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1036f4f4c; end: 1036f5263;  */

void FUN_1036f4f4c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112f89650,&UNK_10dbfe808);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_1036f4c30;
  func_0x0001000823a8(FUN_1036f4c30,0);
  func_0x000100082720("StartCallTrayScopedServicesCleanupRelayServiceProvider",0x36,2);
  func_0x0001000285a8(0x112f89658,&UNK_10dbfe820);
  puVar3 = &UNK_110685248;
  func_0x000107c613fc(&UNK_110685248,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar8 = 0x1036f52a4;
  func_0x0001000823a8(0x1036f52a4,puVar3);
  pcVar4 = "StartCallTrayImplEntryPointWrapperServiceProvider";
  func_0x000100082720("StartCallTrayImplEntryPointWrapperServiceProvider",0x31,2);
  FUN_1036f5eb4();
  func_0x000100082720("StartCallTrayScopeGraphBridgeServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112f89660,&UNK_10dbfe810);
  puVar3 = &UNK_110685270;
  func_0x000107c613fc(&UNK_110685270,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 **)(puVar3 + 0x18) = puVar1;
  *(char **)(puVar3 + 0x20) = pcVar4;
  *(code **)(puVar3 + 0x28) = pcVar2;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar2);
  pcVar5 = FUN_1036f52ec;
  func_0x0001000823a8(FUN_1036f52ec,puVar3);
  func_0x000100082720("StartCallTrayScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f895e0,&UNK_10dbfe5d0);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1036f52f8;
  func_0x0001000823a8(0x1036f52f8,pcVar5);
  func_0x000100082720("StartCallTrayScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112f895d0,&UNK_10dbfe5c0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1036f5300;
  func_0x0001000823a8(0x1036f5300,uVar6);
  func_0x000100082720("StartCallTrayScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110685298;
  func_0x000107c613fc(&UNK_110685298,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  uVar7 = 0x1036f5308;
  func_0x0001000823a8(0x1036f5308,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("StartCallTrayScopeEntryPointProvider",0x24,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1036f5264; end: 1036f5297;  */

void FUN_1036f5264(void)

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



/* Entry: 1036f5298; end: 1036f52af;  */

void FUN_1036f5298(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f89650,&UNK_10dbfe808);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_1036f4c30;
  func_0x0001000823a8(FUN_1036f4c30,0);
  func_0x000100082720("StartCallTrayScopedServicesCleanupRelayServiceProvider",0x36,2);
  func_0x0001000285a8(0x112f89658,&UNK_10dbfe820);
  puVar3 = &UNK_110685248;
  func_0x000107c613fc(&UNK_110685248,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  uVar4 = 0x1036f52a4;
  func_0x0001000823a8(0x1036f52a4,puVar3);
  pcVar5 = "StartCallTrayImplEntryPointWrapperServiceProvider";
  func_0x000100082720("StartCallTrayImplEntryPointWrapperServiceProvider",0x31,2);
  FUN_1036f5eb4();
  func_0x000100082720("StartCallTrayScopeGraphBridgeServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112f89660,&UNK_10dbfe810);
  puVar3 = &UNK_110685270;
  func_0x000107c613fc(&UNK_110685270,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 **)(puVar3 + 0x18) = puVar1;
  *(char **)(puVar3 + 0x20) = pcVar5;
  *(code **)(puVar3 + 0x28) = pcVar2;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(pcVar2);
  pcVar6 = FUN_1036f52ec;
  func_0x0001000823a8(FUN_1036f52ec,puVar3);
  func_0x000100082720("StartCallTrayScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f895e0,&UNK_10dbfe5d0);
  func_0x000107c6157c(pcVar6);
  uVar7 = 0x1036f52f8;
  func_0x0001000823a8(0x1036f52f8,pcVar6);
  func_0x000100082720("StartCallTrayScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112f895d0,&UNK_10dbfe5c0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1036f5300;
  func_0x0001000823a8(0x1036f5300,uVar7);
  func_0x000100082720("StartCallTrayScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110685298;
  func_0x000107c613fc(&UNK_110685298,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(code **)(puVar3 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  uVar8 = 0x1036f5308;
  func_0x0001000823a8(0x1036f5308,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("StartCallTrayScopeEntryPointProvider",0x24,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 1036f52b0; end: 1036f52eb;  */

void FUN_1036f52b0(void)

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



/* Entry: 1036f52ec; end: 1036f530f;  */

void FUN_1036f52ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1036f5670(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("StartCallTrayScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036f5310; end: 1036f5403;  */

void FUN_1036f5310(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_1036f559c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_1036f7b3c(0);
  func_0x000107c610f8();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_1036f6e68(uStack_58,uVar1,uVar2,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 1036f5404; end: 1036f54a3;  */

long FUN_1036f5404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  FUN_1036f7b3c(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  FUN_1036f6e68(param_1,param_2,param_3,param_4);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 1036f54a4; end: 1036f54df;  */

void FUN_1036f54a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036f54e0; end: 1036f54e7;  */

undefined8 FUN_1036f54e0(void)

{
  return 0x1b;
}



/* Entry: 1036f54e8; end: 1036f556b;  */

void FUN_1036f54e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1036f55dc,param_2,FUN_1036f55e0,param_2,0x1036f5608,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1036f556c; end: 1036f559b;  */

undefined ** FUN_1036f556c(void)

{
  return &PTR_DAT_113067168;
}



/* Entry: 1036f559c; end: 1036f55bb;  */

void FUN_1036f559c(void)

{
  func_0x000107c61168(&PTR_PTR_112f896d0);
  return;
}



/* Entry: 1036f55bc; end: 1036f55df;  */

undefined1  [16] FUN_1036f55bc(void)

{
  return ZEXT816(0x1106852f0);
}



/* Entry: 1036f55e0; end: 1036f5633;  */

void FUN_1036f55e0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1036f5634; end: 1036f566f;  */

void FUN_1036f5634(undefined8 *param_1,undefined8 param_2)

{
  FUN_1036f5670();
  func_0x0001000a7f38("StartCallTrayScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1036f5670; end: 1036f585b;  */

void FUN_1036f5670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074df78;
  ppuVar4 = &PTR_DAT_113067168;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f89748;
  func_0x0001000285a8(0x112f89748,&UNK_10dbfe968);
  func_0x0001000a6ee8(&UNK_1106852f0,
                      "StartCallTrayImplEntryPointWrapperScopeInitializationPluginKey",0x3e,2,
                      FUN_1036f58d0,param_1,uVar2,&UNK_1106852f0,&PTR_DAT_112f89668);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110685340;
  func_0x000107c613fc(&UNK_110685340,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110685550,"StartCallTrayScopeGraphBridgeScopeInitializationPluginKey",
                      0x39,2,FUN_1036f58d8,puVar3,uVar2,&UNK_110685550,&PTR_DAT_112f897d8);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110685368;
  func_0x000107c613fc(&UNK_110685368,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110685110,"StartCallTrayScopedServicesScopeInitializationPluginKey",0x37,
                      2,FUN_1036f59c0,puVar3,uVar2,&UNK_110685110,&PTR_DAT_112f895e8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f89750;
  func_0x0001000285a8(0x112f89750,&UNK_10dbfe970);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1036f585c; end: 1036f58cf;  */

void FUN_1036f585c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1036f59fc;
  func_0x0001000823a8(0x1036f59fc,param_3);
  func_0x000100082720("StartCallTrayImplEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036f58d0; end: 1036f58d7;  */

void FUN_1036f58d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1036f59fc;
  func_0x0001000823a8();
  func_0x000100082720("StartCallTrayImplEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036f58d8; end: 1036f5917;  */

void FUN_1036f58d8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1036f5f98(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("StartCallTrayScopeGraphBridgeScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036f5918; end: 1036f59bf;  */

void FUN_1036f5918(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110685390;
  func_0x000107c613fc(&UNK_110685390,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1036f59f4;
  func_0x0001000823a8(FUN_1036f59f4,puVar1);
  func_0x000100082720("StartCallTrayScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1036f59c0; end: 1036f59c7;  */

void FUN_1036f59c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110685390;
  func_0x000107c613fc(&UNK_110685390,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1036f59f4;
  func_0x0001000823a8(FUN_1036f59f4,puVar3);
  func_0x000100082720("StartCallTrayScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1036f59c8; end: 1036f59f3;  */

void FUN_1036f59c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036f59f4; end: 1036f5a03;  */

void FUN_1036f59f4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110685198;
  func_0x000107c613fc(&UNK_110685198,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1036f4e44;
  func_0x00010058fa64(FUN_1036f4e44,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036f5a04; end: 1036f5a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036f5a04(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1036f5dc4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f89758) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f89760) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f5a8c);
  (*pcVar1)();
}



/* Entry: 1036f5a8c; end: 1036f5aeb; -[_TtC29StartCallTrayScopeGraphBridge44StartCallTrayScopeGraphBridgeSaberEntryPoint init] */

void FUN_1036f5a8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StartCallTrayScopeGraphBridge.StartCallTrayScopeGraphBridgeSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f5ab8);
  (*pcVar1)();
}



/* Entry: 1036f5aec; end: 1036f5b23; -[_TtC29StartCallTrayScopeGraphBridge44StartCallTrayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036f5b08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f5b0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f5aec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f89758));
  return;
}



/* Entry: 1036f5b24; end: 1036f5b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f5b24(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f89760),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f89758));
  return;
}



/* Entry: 1036f5b4c; end: 1036f5b6b;  */

void FUN_1036f5b4c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e4a60);
  return;
}



/* Entry: 1036f5b6c; end: 1036f5bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036f5b6c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f89790) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f89798);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036f5bf4);
  (*pcVar2)();
}



/* Entry: 1036f5bf4; end: 1036f5cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036f5bf4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f89790);
  *(undefined **)(unaff_x20 + _DAT_112f89790) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f89798);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f89798))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1106854b0;
  func_0x000107c613fc(&UNK_1106854b0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1036f5ce0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1036f5cdc; end: 1036f5ce7;  */

void FUN_1036f5cdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1036f5ce8; end: 1036f5d47; -[_TtC29StartCallTrayScopeGraphBridge42StartCallTrayScopedServicesSaberEntryPoint init] */

void FUN_1036f5ce8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StartCallTrayScopeGraphBridge.StartCallTrayScopedServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f5d14);
  (*pcVar1)();
}



/* Entry: 1036f5d48; end: 1036f5d7f; -[_TtC29StartCallTrayScopeGraphBridge42StartCallTrayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f5d48(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f89798));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f89790));
  return;
}



/* Entry: 1036f5d80; end: 1036f5d83;  */

void FUN_1036f5d80(void)

{
  return;
}



/* Entry: 1036f5d84; end: 1036f5da3;  */

void FUN_1036f5d84(void)

{
  FUN_1036f5bf4();
  return;
}



/* Entry: 1036f5da4; end: 1036f5dc3;  */

void FUN_1036f5da4(void)

{
  func_0x000107c61168(&PTR_PTR_1128e4b28);
  return;
}



/* Entry: 1036f5dc4; end: 1036f5e93;  */

undefined8 FUN_1036f5dc4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f897c8,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1036f5e94();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1036f5e94; end: 1036f5eb3;  */

void FUN_1036f5e94(void)

{
  func_0x000107c61168(&PTR_PTR_1128e4bf0);
  return;
}



/* Entry: 1036f5eb4; end: 1036f5f1f;  */

void FUN_1036f5eb4(void)

{
  func_0x0001000285a8(0x112f897d0,&UNK_10dbfea28);
  func_0x0001000823a8(0x1036f5ef4,0);
  return;
}



/* Entry: 1036f5f20; end: 1036f5f5b; -[_TtC29StartCallTrayScopeGraphBridge37StartCallTrayScopeGraphBridgeServices init] */

void FUN_1036f5f20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036f5f5c; end: 1036f5f8f;  */

void FUN_1036f5f5c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036f5f90; end: 1036f5f97;  */

undefined8 FUN_1036f5f90(void)

{
  return 0x1b;
}



/* Entry: 1036f5f98; end: 1036f610f;  */

void FUN_1036f5f98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106854f8;
  func_0x000107c613fc(&UNK_1106854f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1036f6110,puVar1);
  return;
}



/* Entry: 1036f6110; end: 1036f6117;  */

void FUN_1036f6110(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f897c8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f897c8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110685590;
  func_0x000107c613fc(&UNK_110685590,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1036f61c4;
  func_0x00010058fa64(0x1036f61c4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036f6118; end: 1036f6173;  */

void FUN_1036f6118(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f897c8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f897c8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1036f6174; end: 1036f61cb;  */

undefined ** FUN_1036f6174(void)

{
  return &PTR_DAT_113067168;
}



/* Entry: 1036f61cc; end: 1036f6213; -[SCStartCallTrayScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f61cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f89828;
  func_0x000107c61428(param_1 + _DAT_112f89828,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036f6214; end: 1036f626b; -[SCStartCallTrayScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f6214(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f89828;
  func_0x000107c61428(param_1 + _DAT_112f89828,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036f626c; end: 1036f62b3; -[SCStartCallTrayScopeGraphBridgeSaberEntryPoint startCallTrayScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f626c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f89830;
  func_0x000107c61428(param_1 + _DAT_112f89830,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1036f62b4; end: 1036f6317; -[SCStartCallTrayScopeGraphBridgeSaberEntryPoint setStartCallTrayScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f62b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f89830;
  func_0x000107c61428(param_1 + _DAT_112f89830,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1036f6318; end: 1036f644b;  */

/* WARNING: Possible PIC construction at 0x0001036f63d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f63ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f6408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f63d4) */
/* WARNING: Removing unreachable block (ram,0x0001036f63f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f6318(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5ba80();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1036f5b4c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1036f5dc4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f644c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f89758) = lVar5;
    *(long *)(lVar4 + _DAT_112f89760) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1036f644c; end: 1036f6473; -[SCStartCallTrayScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1036f644c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036f6318();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036f6474; end: 1036f64b7; -[SCStartCallTrayScopeGraphBridgeSaberEntryPoint end] */

void FUN_1036f6474(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036f64b8; end: 1036f664f;  */

void FUN_1036f64b8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0ea36a0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f15c960,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StartCallTrayScopeGraphBridge/SCStartCallTrayScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x52,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f6650);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c597b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1036f6650; end: 1036f66fb; -[SCStartCallTrayScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1036f6650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1036f64b8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1036f66fc; end: 1036f6767; -[SCStartCallTrayScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f66fc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f89828,0);
  *(undefined8 *)(param_1 + _DAT_112f89830) = 0;
  *(undefined8 *)(param_1 + _DAT_112f89838) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036f6768; end: 1036f679b;  */

void FUN_1036f6768(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036f679c; end: 1036f67e3; -[SCStartCallTrayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036f67c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f67cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f679c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f89828);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f89830));
  return;
}



/* Entry: 1036f67e4; end: 1036f6803;  */

void FUN_1036f67e4(void)

{
  func_0x000107c61168(&PTR_PTR_1128e4ca0);
  return;
}



/* Entry: 1036f6804; end: 1036f684b; -[SCStartCallTrayScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f6804(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f89868;
  func_0x000107c61428(param_1 + _DAT_112f89868,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036f684c; end: 1036f68a3; -[SCStartCallTrayScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f684c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f89868;
  func_0x000107c61428(param_1 + _DAT_112f89868,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036f68a4; end: 1036f697b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f68a4(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_1036f5da4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f89790) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036f697c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f89798);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f89870);
    *(long **)(unaff_x20 + _DAT_112f89870) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1036f697c; end: 1036f69a3; -[SCStartCallTrayScopedServicesSaberEntryPoint begin] */

void FUN_1036f697c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036f68a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036f69a4; end: 1036f6b1b;  */

/* WARNING: Possible PIC construction at 0x0001036f6a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f6aa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f6a10) */
/* WARNING: Removing unreachable block (ram,0x0001036f6aa8) */
/* WARNING: Removing unreachable block (ram,0x0001036f6ac0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f69a4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f89870);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1036f6b1c; end: 1036f6b23;  */

void FUN_1036f6b1c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1036f6b24; end: 1036f6b57; -[SCStartCallTrayScopedServicesSaberEntryPoint end] */

void FUN_1036f6b24(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1036f69a4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036f6b58; end: 1036f6c77;  */

void FUN_1036f6b58(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "StartCallTrayScopeGraphBridge/SCStartCallTrayScopedServicesSaberEntryPoint.swift"
                        ,0x50,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f6c78);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}


