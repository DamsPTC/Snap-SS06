/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011edf7c; end: 1011ee027; -[SCPublicGroupsSportBillboardSignalProviderEntryPoint setValue:forIvarName:] */

void FUN_1011edf7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011edd0c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011ee028; end: 1011ee0c3; -[SCPublicGroupsSportBillboardSignalProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ee028(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d67028,0);
  func_0x000107c61614(param_1 + _DAT_112d67030,0);
  func_0x000107c61614(param_1 + _DAT_112d67038,0);
  func_0x000107c61614(param_1 + _DAT_112d67040,0);
  *(undefined8 *)(param_1 + _DAT_112d67048) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011ee0c4; end: 1011ee0f7;  */

void FUN_1011ee0c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011ee0f8; end: 1011ee15f; -[SCPublicGroupsSportBillboardSignalProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ee0f8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d67028);
  func_0x000107c61610(param_1 + _DAT_112d67030);
  func_0x000107c61610(param_1 + _DAT_112d67038);
  func_0x000107c61610(param_1 + _DAT_112d67040);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d67048));
  return;
}



/* Entry: 1011ee160; end: 1011ee17f;  */

void FUN_1011ee160(void)

{
  func_0x000107c61168(&PTR_PTR_1127b9bf0);
  return;
}



/* Entry: 1011ee180; end: 1011ee69f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1011ee180(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [8];
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d67078) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d67080) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d67088) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d67090) = param_5;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  lVar1 = param_4;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    uVar2 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010d92b680);
    lVar4 = lVar1;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
  }
  *(long *)(unaff_x20 + _DAT_112d67098) = lVar4;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return puVar3;
}



/* Entry: 1011ee6a0; end: 1011eea37;  */

/* WARNING: Removing unreachable block (ram,0x0001011eea34) */
/* WARNING: Removing unreachable block (ram,0x0001011eea30) */

void FUN_1011ee6a0(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  
  ppuVar10 = (undefined **)*param_2;
  ppuVar12 = ppuVar10;
  puVar6 = param_3;
  func_0x000107c4fa44();
  func_0x000107c61180();
  ppuVar2 = ppuVar12;
  func_0x000107c44fdc();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar12);
  ppuVar12 = ppuVar2;
  func_0x000107c51cec();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar2);
  ppuVar2 = ppuVar12;
  func_0x000107c5faec();
  puVar7 = puVar6;
  func_0x000107c61170(ppuVar12);
  func_0x000107c4fa44();
  func_0x000107c61180();
  ppuVar12 = ppuVar10;
  func_0x000107c44fdc();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar10);
  ppuVar10 = ppuVar12;
  func_0x000107c4fa4c();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar12);
  ppuVar12 = ppuVar10;
  func_0x000107c5faec();
  puVar8 = puVar7;
  func_0x000107c61170(ppuVar10);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f52c78;
  ppuVar10 = ppuVar11;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52c78);
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar10);
  if ((ppuVar2 == ppuVar11) && (puVar6 == puVar8)) {
    func_0x000107c6142c(puVar6);
    puVar6 = puVar8;
  }
  else {
    ppuVar10 = ppuVar2;
    puVar9 = puVar6;
    func_0x000107c605b8(ppuVar2,puVar6,ppuVar11,puVar8,0);
    func_0x000107c6142c(puVar8);
    if (((ulong)ppuVar10 & 1) == 0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110f52c98;
      ppuVar10 = ppuVar11;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52c98);
      func_0x000107c5faec();
      func_0x000107c61170(ppuVar10);
      if ((ppuVar2 == ppuVar11) && (puVar6 == puVar9)) {
        func_0x000107c6142c(puVar6);
        func_0x000107c6142c(puVar9);
      }
      else {
        func_0x000107c605b8(ppuVar2,puVar6,ppuVar11,puVar9,0);
        func_0x000107c6142c(puVar6);
        func_0x000107c6142c(puVar9);
        if (((ulong)ppuVar2 & 1) == 0) {
          func_0x000107c6142c(puVar7);
          ppuVar12 = (undefined **)0x0;
          goto LAB_1011ee978;
        }
      }
      uVar13 = *param_4;
      func_0x000107c61434(puVar7);
      uVar4 = uVar13;
      func_0x000107c61558();
      *param_4 = uVar13;
      uVar5 = uVar13;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        func_0x0001000d182c(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
        *param_4 = uVar5;
      }
      uVar4 = *(ulong *)(uVar5 + 0x10);
      uVar13 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
        uVar13 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        func_0x0001000d182c(uVar13,uVar4 + 1,1,uVar5);
        *param_4 = uVar13;
      }
      *(ulong *)(uVar13 + 0x10) = uVar4 + 1;
      lVar1 = uVar13 + uVar4 * 0x10;
      *(undefined ***)(lVar1 + 0x20) = ppuVar12;
      *(ulong **)(lVar1 + 0x28) = puVar7;
      uVar3 = 0;
      func_0x000104522c9c(0);
      func_0x00010452292c(ppuVar12,puVar7,uVar3);
      func_0x000107c6142c(puVar7);
      goto LAB_1011ee978;
    }
  }
  func_0x000107c6142c(puVar6);
  uVar13 = *param_3;
  func_0x000107c61434(puVar7);
  uVar4 = uVar13;
  func_0x000107c61558();
  *param_3 = uVar13;
  uVar5 = uVar13;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    func_0x0001000d182c(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
    *param_3 = uVar5;
  }
  uVar4 = *(ulong *)(uVar5 + 0x10);
  uVar13 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
    uVar13 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x0001000d182c(uVar13,uVar4 + 1,1,uVar5);
    *param_3 = uVar13;
  }
  *(ulong *)(uVar13 + 0x10) = uVar4 + 1;
  lVar1 = uVar13 + uVar4 * 0x10;
  *(undefined ***)(lVar1 + 0x20) = ppuVar12;
  *(ulong **)(lVar1 + 0x28) = puVar7;
  uVar3 = 0;
  func_0x000104522c9c(0);
  func_0x00010452281c(ppuVar12,puVar7,uVar3);
  func_0x000107c6142c(puVar7);
LAB_1011ee978:
  *param_1 = (ulong)ppuVar12;
  return;
}



/* Entry: 1011eea38; end: 1011eeb2f;  */

void FUN_1011eea38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c61428(param_8 + 0x10,auStack_80,0,0);
    uVar1 = *(undefined8 *)(param_8 + 0x10);
    func_0x000107c61428(param_9 + 0x10,auStack_98,0,0);
    uVar2 = *(undefined8 *)(param_9 + 0x10);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    FUN_1011eeb30(param_4,param_5,param_6,param_7,param_1,uVar1,uVar2);
    func_0x000107c61170(param_3);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 1011eeb30; end: 1011ef223;  */

/* WARNING: Possible PIC construction at 0x0001011eec7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eec8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eecbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eecdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eed20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eed6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eed90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eedcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eedfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eee8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eeec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eef6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eef7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eefac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ef18c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ef19c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ef1ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ef1c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ef1d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ef1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ef1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ef200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ef034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ef044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ef054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ef064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011ef058) */
/* WARNING: Removing unreachable block (ram,0x0001011ef048) */
/* WARNING: Removing unreachable block (ram,0x0001011ef038) */
/* WARNING: Removing unreachable block (ram,0x0001011ef1f4) */
/* WARNING: Removing unreachable block (ram,0x0001011ef1e4) */
/* WARNING: Removing unreachable block (ram,0x0001011ef1d4) */
/* WARNING: Removing unreachable block (ram,0x0001011ef1c4) */
/* WARNING: Removing unreachable block (ram,0x0001011ef1b0) */
/* WARNING: Removing unreachable block (ram,0x0001011ef1a0) */
/* WARNING: Removing unreachable block (ram,0x0001011ef190) */
/* WARNING: Removing unreachable block (ram,0x0001011eefb0) */
/* WARNING: Removing unreachable block (ram,0x0001011ef08c) */
/* WARNING: Removing unreachable block (ram,0x0001011eefe4) */
/* WARNING: Removing unreachable block (ram,0x0001011ef090) */
/* WARNING: Removing unreachable block (ram,0x0001011eef80) */
/* WARNING: Removing unreachable block (ram,0x0001011eef70) */
/* WARNING: Removing unreachable block (ram,0x0001011eeecc) */
/* WARNING: Removing unreachable block (ram,0x0001011eee90) */
/* WARNING: Removing unreachable block (ram,0x0001011eee00) */
/* WARNING: Removing unreachable block (ram,0x0001011ef028) */
/* WARNING: Removing unreachable block (ram,0x0001011eee68) */
/* WARNING: Removing unreachable block (ram,0x0001011eedd0) */
/* WARNING: Removing unreachable block (ram,0x0001011eed94) */
/* WARNING: Removing unreachable block (ram,0x0001011eed70) */
/* WARNING: Removing unreachable block (ram,0x0001011eed24) */
/* WARNING: Removing unreachable block (ram,0x0001011eed38) */
/* WARNING: Removing unreachable block (ram,0x0001011eed50) */
/* WARNING: Removing unreachable block (ram,0x0001011eed00) */
/* WARNING: Removing unreachable block (ram,0x0001011eece0) */
/* WARNING: Removing unreachable block (ram,0x0001011eecc0) */
/* WARNING: Removing unreachable block (ram,0x0001011eec90) */
/* WARNING: Removing unreachable block (ram,0x0001011eec80) */
/* WARNING: Removing unreachable block (ram,0x0001011ef068) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011eeb30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112d67078);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  if (param_5 != 0) {
    FUN_1011ef6bc(0,0x112d4e810,&PTR_PTR_1126b0cd8);
    func_0x000107c61434(param_2);
    func_0x000107c61174();
    func_0x000103c1912c(param_1,param_2);
    if (param_1 == 0) {
      func_0x000107c615e8(lVar2);
    }
    else {
      uVar4 = *(undefined8 *)(param_5 + _DAT_11307fc78);
      puVar3 = PTR_PTR_1126b5be8;
      func_0x000107c610f8(PTR_PTR_1126b5be8);
      puVar1 = PTR___sSSN_11034da80;
      func_0x000107c5fc48(param_7,PTR___sSSN_11034da80);
      func_0x000107c5fc48(param_6,puVar1);
      func_0x000107c5fc48(uVar4,puVar1);
      func_0x000107c45794(puVar3);
      param_5 = param_7;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1011ef224; end: 1011ef47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ef224(long param_1,long param_2,ulong param_3,ulong param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 == 0) {
      uVar6 = 0;
      func_0x000107c60714(param_7,0);
      puVar3 = &UNK_1103926c0;
      func_0x000107c613fc(&UNK_1103926c0,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_2);
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_98 = (code *)0x1011ef70c;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_110392778;
      ppuVar4 = &puStack_b8;
      puStack_90 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_90);
      func_0x000107c5fb28(param_7,uVar6);
      func_0x000107c6142c(uVar6);
      func_0x0001000d76cc(param_7 + 0x20,ppuVar4);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(param_7);
      uVar1 = param_3 & 0xffffffffffff;
      if ((param_4 & 0x2000000000000000) != 0) {
        uVar1 = param_4 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        lVar5 = *(long *)(param_2 + _DAT_112d67080);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar5 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
          func_0x000107c5fadc(param_3,param_4);
          func_0x000107c48af4(puVar3);
          func_0x000107c61170(param_3);
          func_0x000107c5fc48(*(undefined8 *)(param_5 + _DAT_11307fc78),PTR___sSSN_11034da80);
          pcStack_98 = FUN_1011ef564;
          puStack_90 = (undefined *)0x0;
          puStack_b8 = puVar2;
          uStack_b0 = 0x42000000;
          puStack_a8 = (undefined *)0x100f5c588;
          puStack_a0 = &UNK_1103927a0;
          ppuVar4 = &puStack_b8;
          func_0x000107c60bc4(ppuVar4);
          func_0x000107c51db4(lVar5);
          func_0x000107c60bd0(ppuVar4);
          func_0x000107c61170(param_2);
          func_0x000107c615e8(lVar5);
          func_0x000107c61170(puVar3);
        }
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1011ef47c; end: 1011ef563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ef47c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_48 [24];
  
  puVar5 = auStack_48;
  func_0x000107c61428(param_1 + 0x10,puVar5,0,0);
  puVar1 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    puVar3 = puVar2;
    FUN_1011f8588();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar5);
    func_0x000107c40930(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    lVar4 = *(long *)(puVar1 + _DAT_112d67090);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar3 = puVar1;
    if (lVar4 != 0) {
      func_0x000107c5c2e0();
      func_0x000107c615e8(lVar4);
      puVar3 = puVar2;
      puVar2 = puVar1;
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1011ef564; end: 1011ef567;  */

void FUN_1011ef564(void)

{
  return;
}



/* Entry: 1011ef568; end: 1011ef5c7; -[_TtC37ValdiPublicGroupsShareServiceProvider31PublicGroupsInviteMessageSender init] */

void FUN_1011ef568(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiPublicGroupsShareServiceProvider.PublicGroupsInviteMessageSender",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ef594);
  (*pcVar1)();
}



/* Entry: 1011ef5c8; end: 1011ef62f; -[_TtC37ValdiPublicGroupsShareServiceProvider31PublicGroupsInviteMessageSender .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011ef5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ef614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011ef5e8) */
/* WARNING: Removing unreachable block (ram,0x0001011ef618) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ef5c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d67078));
  return;
}



/* Entry: 1011ef630; end: 1011ef64f;  */

void FUN_1011ef630(void)

{
  func_0x000107c61168(&PTR_PTR_1127b9cc8);
  return;
}



/* Entry: 1011ef650; end: 1011ef66f;  */

bool FUN_1011ef650(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1011ef670; end: 1011ef69f;  */

void FUN_1011ef670(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1011eea38(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1011ef6a0; end: 1011ef6bb;  */

void FUN_1011ef6a0(long param_1,long param_2)

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



/* Entry: 1011ef6bc; end: 1011ef6fb;  */

void FUN_1011ef6bc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1011ef6fc; end: 1011ef72b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ef6fc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar9 = *(ulong *)(unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar5 + 0x10,auStack_88,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    if (param_1 == 0) {
      uVar10 = 0;
      func_0x000107c60714(lVar8,0);
      puVar6 = &UNK_1103926c0;
      func_0x000107c613fc(&UNK_1103926c0,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,lVar5);
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_98 = (code *)0x1011ef70c;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_110392778;
      ppuVar7 = &puStack_b8;
      puStack_90 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c61574(puStack_90);
      func_0x000107c5fb28(lVar8,uVar10);
      func_0x000107c6142c(uVar10);
      func_0x0001000d76cc(lVar8 + 0x20,ppuVar7);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61574(lVar8);
      uVar1 = uVar9 & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        lVar8 = *(long *)(lVar5 + _DAT_112d67080);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar8 != 0) {
          puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
          func_0x000107c5fadc(uVar9,uVar2);
          func_0x000107c48af4(puVar6);
          func_0x000107c61170(uVar9);
          func_0x000107c5fc48(*(undefined8 *)(lVar3 + _DAT_11307fc78),PTR___sSSN_11034da80);
          pcStack_98 = FUN_1011ef564;
          puStack_90 = (undefined *)0x0;
          puStack_b8 = puVar4;
          uStack_b0 = 0x42000000;
          puStack_a8 = (undefined *)0x100f5c588;
          puStack_a0 = &UNK_1103927a0;
          ppuVar7 = &puStack_b8;
          func_0x000107c60bc4(ppuVar7);
          func_0x000107c51db4(lVar8);
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c61170(lVar5);
          func_0x000107c615e8(lVar8);
          func_0x000107c61170(puVar6);
        }
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1011ef72c; end: 1011efc6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1011ef72c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [8];
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d670d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d670d8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d670e0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d670e8) = param_5;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  lVar1 = param_4;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    uVar2 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010d92b6d0);
    lVar4 = lVar1;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
  }
  *(long *)(unaff_x20 + _DAT_112d670f0) = lVar4;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return puVar3;
}



/* Entry: 1011efc6c; end: 1011f0003;  */

/* WARNING: Removing unreachable block (ram,0x0001011f0000) */
/* WARNING: Removing unreachable block (ram,0x0001011efffc) */

void FUN_1011efc6c(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  
  ppuVar10 = (undefined **)*param_2;
  ppuVar12 = ppuVar10;
  puVar6 = param_3;
  func_0x000107c4fa44();
  func_0x000107c61180();
  ppuVar2 = ppuVar12;
  func_0x000107c44fdc();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar12);
  ppuVar12 = ppuVar2;
  func_0x000107c51cec();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar2);
  ppuVar2 = ppuVar12;
  func_0x000107c5faec();
  puVar7 = puVar6;
  func_0x000107c61170(ppuVar12);
  func_0x000107c4fa44();
  func_0x000107c61180();
  ppuVar12 = ppuVar10;
  func_0x000107c44fdc();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar10);
  ppuVar10 = ppuVar12;
  func_0x000107c4fa4c();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar12);
  ppuVar12 = ppuVar10;
  func_0x000107c5faec();
  puVar8 = puVar7;
  func_0x000107c61170(ppuVar10);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f52c78;
  ppuVar10 = ppuVar11;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52c78);
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar10);
  if ((ppuVar2 == ppuVar11) && (puVar6 == puVar8)) {
    func_0x000107c6142c(puVar6);
    puVar6 = puVar8;
  }
  else {
    ppuVar10 = ppuVar2;
    puVar9 = puVar6;
    func_0x000107c605b8(ppuVar2,puVar6,ppuVar11,puVar8,0);
    func_0x000107c6142c(puVar8);
    if (((ulong)ppuVar10 & 1) == 0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110f52c98;
      ppuVar10 = ppuVar11;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52c98);
      func_0x000107c5faec();
      func_0x000107c61170(ppuVar10);
      if ((ppuVar2 == ppuVar11) && (puVar6 == puVar9)) {
        func_0x000107c6142c(puVar6);
        func_0x000107c6142c(puVar9);
      }
      else {
        func_0x000107c605b8(ppuVar2,puVar6,ppuVar11,puVar9,0);
        func_0x000107c6142c(puVar6);
        func_0x000107c6142c(puVar9);
        if (((ulong)ppuVar2 & 1) == 0) {
          func_0x000107c6142c(puVar7);
          ppuVar12 = (undefined **)0x0;
          goto LAB_1011eff44;
        }
      }
      uVar13 = *param_4;
      func_0x000107c61434(puVar7);
      uVar4 = uVar13;
      func_0x000107c61558();
      *param_4 = uVar13;
      uVar5 = uVar13;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        func_0x0001000d182c(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
        *param_4 = uVar5;
      }
      uVar4 = *(ulong *)(uVar5 + 0x10);
      uVar13 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
        uVar13 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        func_0x0001000d182c(uVar13,uVar4 + 1,1,uVar5);
        *param_4 = uVar13;
      }
      *(ulong *)(uVar13 + 0x10) = uVar4 + 1;
      lVar1 = uVar13 + uVar4 * 0x10;
      *(undefined ***)(lVar1 + 0x20) = ppuVar12;
      *(ulong **)(lVar1 + 0x28) = puVar7;
      uVar3 = 0;
      func_0x000104522c9c(0);
      func_0x00010452292c(ppuVar12,puVar7,uVar3);
      func_0x000107c6142c(puVar7);
      goto LAB_1011eff44;
    }
  }
  func_0x000107c6142c(puVar6);
  uVar13 = *param_3;
  func_0x000107c61434(puVar7);
  uVar4 = uVar13;
  func_0x000107c61558();
  *param_3 = uVar13;
  uVar5 = uVar13;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    func_0x0001000d182c(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
    *param_3 = uVar5;
  }
  uVar4 = *(ulong *)(uVar5 + 0x10);
  uVar13 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
    uVar13 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x0001000d182c(uVar13,uVar4 + 1,1,uVar5);
    *param_3 = uVar13;
  }
  *(ulong *)(uVar13 + 0x10) = uVar4 + 1;
  lVar1 = uVar13 + uVar4 * 0x10;
  *(undefined ***)(lVar1 + 0x20) = ppuVar12;
  *(ulong **)(lVar1 + 0x28) = puVar7;
  uVar3 = 0;
  func_0x000104522c9c(0);
  func_0x00010452281c(ppuVar12,puVar7,uVar3);
  func_0x000107c6142c(puVar7);
LAB_1011eff44:
  *param_1 = (ulong)ppuVar12;
  return;
}



/* Entry: 1011f0004; end: 1011f0aa3;  */

void FUN_1011f0004(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,long param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c61428(param_10 + 0x10,auStack_90,0,0);
    uVar1 = *(undefined8 *)(param_10 + 0x10);
    func_0x000107c61428(param_11 + 0x10,auStack_a8,0,0);
    uVar2 = *(undefined8 *)(param_11 + 0x10);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    func_0x0001011f0110(param_4,param_5,param_6,param_7,param_8,param_9,param_1,uVar1,uVar2);
    func_0x000107c61170(param_3);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 1011f0aa4; end: 1011f0cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f0aa4(long param_1,long param_2,ulong param_3,ulong param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 == 0) {
      uVar6 = 0;
      func_0x000107c60714(param_7,0);
      puVar3 = &UNK_110392800;
      func_0x000107c613fc(&UNK_110392800,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_2);
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_98 = (code *)0x1011f0f78;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_1103928b8;
      ppuVar4 = &puStack_b8;
      puStack_90 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_90);
      func_0x000107c5fb28(param_7,uVar6);
      func_0x000107c6142c(uVar6);
      func_0x0001000d76cc(param_7 + 0x20,ppuVar4);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(param_7);
      if (param_4 != 0) {
        uVar1 = param_3 & 0xffffffffffff;
        if ((param_4 & 0x2000000000000000) != 0) {
          uVar1 = param_4 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          lVar5 = *(long *)(param_2 + _DAT_112d670d8);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar5 != 0) {
            puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
            func_0x000107c5fadc(param_3,param_4);
            func_0x000107c48af4(puVar3);
            func_0x000107c61170(param_3);
            func_0x000107c5fc48(*(undefined8 *)(param_5 + _DAT_11307fc78),PTR___sSSN_11034da80);
            pcStack_98 = FUN_1011f0de8;
            puStack_90 = (undefined *)0x0;
            puStack_b8 = puVar2;
            uStack_b0 = 0x42000000;
            puStack_a8 = (undefined *)0x100f5c588;
            puStack_a0 = &UNK_1103928e0;
            ppuVar4 = &puStack_b8;
            func_0x000107c60bc4(ppuVar4);
            func_0x000107c51db4(lVar5);
            func_0x000107c61170(param_2);
            func_0x000107c60bd0(ppuVar4);
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(puVar3);
          }
        }
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1011f0d00; end: 1011f0de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f0d00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_48 [24];
  
  puVar5 = auStack_48;
  func_0x000107c61428(param_1 + 0x10,puVar5,0,0);
  puVar1 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    puVar3 = puVar2;
    FUN_1011f8588();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar5);
    func_0x000107c40930(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    lVar4 = *(long *)(puVar1 + _DAT_112d670e8);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar3 = puVar1;
    if (lVar4 != 0) {
      func_0x000107c5c2e0();
      func_0x000107c615e8(lVar4);
      puVar3 = puVar2;
      puVar2 = puVar1;
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1011f0de8; end: 1011f0deb;  */

void FUN_1011f0de8(void)

{
  return;
}



/* Entry: 1011f0dec; end: 1011f0e4b; -[_TtC37ValdiPublicGroupsShareServiceProvider30PublicGroupsShareMessageSender init] */

void FUN_1011f0dec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiPublicGroupsShareServiceProvider.PublicGroupsShareMessageSender",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011f0e18);
  (*pcVar1)();
}



/* Entry: 1011f0e4c; end: 1011f0eb3; -[_TtC37ValdiPublicGroupsShareServiceProvider30PublicGroupsShareMessageSender .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011f0e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f0e98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011f0e6c) */
/* WARNING: Removing unreachable block (ram,0x0001011f0e9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f0e4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d670d0));
  return;
}



/* Entry: 1011f0eb4; end: 1011f0f0b;  */

void FUN_1011f0eb4(void)

{
  func_0x000107c61168(&PTR_PTR_1127b9da8);
  return;
}



/* Entry: 1011f0f0c; end: 1011f0f27;  */

void FUN_1011f0f0c(long param_1,long param_2)

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



/* Entry: 1011f0f28; end: 1011f0f67;  */

void FUN_1011f0f28(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1011f0f68; end: 1011f0f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f0f68(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar9 = *(ulong *)(unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar5 + 0x10,auStack_88,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    if (param_1 == 0) {
      uVar10 = 0;
      func_0x000107c60714(lVar8,0);
      puVar6 = &UNK_110392800;
      func_0x000107c613fc(&UNK_110392800,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,lVar5);
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_98 = (code *)0x1011f0f78;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_1103928b8;
      ppuVar7 = &puStack_b8;
      puStack_90 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c61574(puStack_90);
      func_0x000107c5fb28(lVar8,uVar10);
      func_0x000107c6142c(uVar10);
      func_0x0001000d76cc(lVar8 + 0x20,ppuVar7);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61574(lVar8);
      if (uVar2 != 0) {
        uVar1 = uVar9 & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar1 = uVar2 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          lVar8 = *(long *)(lVar5 + _DAT_112d670d8);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar8 != 0) {
            puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
            func_0x000107c5fadc(uVar9,uVar2);
            func_0x000107c48af4(puVar6);
            func_0x000107c61170(uVar9);
            func_0x000107c5fc48(*(undefined8 *)(lVar3 + _DAT_11307fc78),PTR___sSSN_11034da80);
            pcStack_98 = FUN_1011f0de8;
            puStack_90 = (undefined *)0x0;
            puStack_b8 = puVar4;
            uStack_b0 = 0x42000000;
            puStack_a8 = (undefined *)0x100f5c588;
            puStack_a0 = &UNK_1103928e0;
            ppuVar7 = &puStack_b8;
            func_0x000107c60bc4(ppuVar7);
            func_0x000107c51db4(lVar8);
            func_0x000107c61170(lVar5);
            func_0x000107c60bd0(ppuVar7);
            func_0x000107c615e8(lVar8);
            func_0x000107c61170(puVar6);
          }
        }
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1011f0f98; end: 1011f114b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f0f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d67120) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d67128) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d67130) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d67138) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d67140) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d67148) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011f114c; end: 1011f11c3;  */

void FUN_1011f114c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1011f11ec(param_2,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1011f11c4; end: 1011f11eb;  */

void FUN_1011f11c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_1011f11ec(uVar2,uVar1,uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1011f11ec; end: 1011f15bb;  */

/* WARNING: Possible PIC construction at 0x0001011f1244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f1280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f12b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f133c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f1350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f14a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f14c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f14f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f150c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f1528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f1580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f1590: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011f1584) */
/* WARNING: Removing unreachable block (ram,0x0001011f152c) */
/* WARNING: Removing unreachable block (ram,0x0001011f1510) */
/* WARNING: Removing unreachable block (ram,0x0001011f14f4) */
/* WARNING: Removing unreachable block (ram,0x0001011f157c) */
/* WARNING: Removing unreachable block (ram,0x0001011f14f8) */
/* WARNING: Removing unreachable block (ram,0x0001011f14cc) */
/* WARNING: Removing unreachable block (ram,0x0001011f14a4) */
/* WARNING: Removing unreachable block (ram,0x0001011f1354) */
/* WARNING: Removing unreachable block (ram,0x0001011f144c) */
/* WARNING: Removing unreachable block (ram,0x0001011f1464) */
/* WARNING: Removing unreachable block (ram,0x0001011f1340) */
/* WARNING: Removing unreachable block (ram,0x0001011f12bc) */
/* WARNING: Removing unreachable block (ram,0x0001011f12c0) */
/* WARNING: Removing unreachable block (ram,0x0001011f1284) */
/* WARNING: Removing unreachable block (ram,0x0001011f1558) */
/* WARNING: Removing unreachable block (ram,0x0001011f12a0) */
/* WARNING: Removing unreachable block (ram,0x0001011f1248) */
/* WARNING: Removing unreachable block (ram,0x0001011f124c) */
/* WARNING: Removing unreachable block (ram,0x0001011f1534) */
/* WARNING: Removing unreachable block (ram,0x0001011f1268) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x0001011f1594) */
/* WARNING: Removing unreachable block (ram,0x0001011f1598) */
/* WARNING: Removing unreachable block (ram,0x0001011f159c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f11ec(undefined8 param_1)

{
  func_0x00010451338c();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011f15bc; end: 1011f171f;  */

void FUN_1011f15bc(byte param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    pcVar1 = "cardDidLoad(success:rootView:conversationId:presentingViewController:)";
    func_0x0001000c10c0("cardDidLoad(success:rootView:conversationId:presentingViewController:)");
    func_0x000107c61180();
    puVar2 = &UNK_110392918;
    func_0x000107c613fc(&UNK_110392918,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    puVar3 = &UNK_1103929e0;
    func_0x000107c613fc(&UNK_1103929e0,0x40,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    puVar3[0x18] = param_1 & 1;
    *(undefined8 *)(puVar3 + 0x20) = param_3;
    *(undefined8 *)(puVar3 + 0x28) = param_4;
    *(undefined8 *)(puVar3 + 0x30) = param_5;
    *(undefined8 *)(puVar3 + 0x38) = param_6;
    pcStack_78 = FUN_1011f227c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1103929f8;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_70;
    func_0x000107c61174(param_3);
    func_0x000107c61434(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 1011f1720; end: 1011f182b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f1720(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  uVar3 = 0;
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  if (((param_2 & 1) != 0) && (lVar4 = *(long *)(param_1 + _DAT_112d67120), lVar4 != 0)) {
    lVar1 = lVar4;
    func_0x000107c615f0();
    FUN_1011f2290();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      FUN_1011f1898(param_3,uVar3);
      if (lVar2 != 0) {
        FUN_1011f1e18(param_6,lVar2);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(lVar1);
        param_1 = lVar2;
        goto LAB_1011f17f0;
      }
      func_0x000107c61170(lVar1);
    }
    FUN_1011f182c();
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar4);
    return;
  }
  FUN_1011f182c();
LAB_1011f17f0:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1011f182c; end: 1011f1897;  */

/* WARNING: Possible PIC construction at 0x0001011f186c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f182c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112d67128);
  lVar2 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  lVar1 = _DAT_112d67120;
  if (lVar2 == 0) {
    if (*(long *)(unaff_x20 + _DAT_112d67120) != 0) {
      func_0x000107c41848();
    }
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
  }
  else {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar3);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1011f1898; end: 1011f1e17;  */

/* WARNING: Removing unreachable block (ram,0x0001011f1b38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f1898(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x12;
  long lVar12;
  code *pcVar13;
  long unaff_x20;
  long lVar14;
  undefined1 *puVar15;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0;
  uVar7 = param_4;
  func_0x000107c5eec8();
  lVar14 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar15 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_90 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12;
  func_0x000107c60bb8();
  func_0x000107c61180();
  if (param_3 != 0) {
    lVar3 = param_3;
    func_0x000107c5ee30();
    uStack_a0 = uVar7;
    lStack_98 = lVar3;
    func_0x000107c61170(param_3);
    lVar3 = *(long *)(unaff_x20 + _DAT_112d67148);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x00010006c090(lStack_98,uStack_a0);
    }
    else {
      func_0x000107c5fadc(param_4,param_5);
      lVar4 = lVar3;
      func_0x000107c43dcc();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(param_4);
      func_0x000107c5edb4(lVar11,lVar4);
      func_0x000107c61170();
      func_0x000107c5ed70();
      pcVar13 = *(code **)(lVar12 + 8);
      lVar12 = lVar2;
      lStack_a8 = lVar4;
      (*pcVar13)(lVar11,lVar2);
      puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      func_0x000107c415e0();
      func_0x000107c61180();
      puVar6 = puVar5;
      func_0x000107c5c7fc();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c5edb4(lVar11,puVar6);
      func_0x000107c61170(puVar6);
      uStack_80 = 0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x1e);
      uVar7 = uStack_78;
      func_0x000107c6142c(uStack_78);
      uStack_80 = 0xd000000000000018;
      uStack_78 = 0x800000010ef2da00;
      func_0x000107c5eec4(puVar15);
      func_0x000107c5eeac();
      (**(code **)(lVar14 + 8))(puVar15,lVar1);
      func_0x000107c5fb78(uVar7,lVar12);
      func_0x000107c6142c(lVar12);
      func_0x000107c5fb78(0x676e702e,0xe400000000000000);
      uVar7 = uStack_78;
      lVar12 = lStack_90;
      func_0x000107c5ed9c(lStack_90,uStack_80,uStack_78);
      func_0x000107c6142c(uVar7);
      (*pcVar13)(lVar11,lVar2);
      lVar1 = lStack_98;
      uVar7 = uStack_a0;
      uVar10 = 0;
      func_0x000107c5ee40(lVar12,0,lStack_98,uStack_a0);
      puVar5 = PTR_PTR_1126ba9f0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar6 = puVar5;
      func_0x000107c5edc4();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar10);
      func_0x000107c55ffc(puVar5);
      func_0x000107c61170(puVar6);
      lVar11 = lStack_a8;
      func_0x000107c5fadc(lStack_a8,param_5);
      func_0x000107c6142c(param_5);
      func_0x000107c55f9c(puVar5);
      func_0x000107c61170(lVar11);
      func_0x000107c55540(puVar5);
      func_0x000107c5a0f8(puVar5);
      puVar6 = puVar5;
      func_0x000107c45104();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1011f1e00);
        (*pcVar13)();
      }
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1011f1de8);
        (*pcVar13)();
      }
      if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1011f1dec);
        (*pcVar13)();
      }
      if (4294967296.0 <= param_1) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1011f1df0);
        (*pcVar13)();
      }
      func_0x000107c5a724();
      func_0x000107c61170(puVar6);
      puVar6 = puVar5;
      func_0x000107c45104();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1011f1e04);
        (*pcVar13)();
      }
      if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1011f1df4);
        (*pcVar13)();
      }
      if (param_2 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1011f1df8);
        (*pcVar13)();
      }
      if (4294967296.0 <= param_2) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1011f1dfc);
        (*pcVar13)();
      }
      func_0x000107c550b8();
      func_0x000107c61170(puVar6);
      puVar6 = PTR_PTR_1126b0cc0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar8 = puVar6;
      func_0x000107c4a764();
      func_0x000107c61180();
      if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1011f1e08);
        (*pcVar13)();
      }
      puVar9 = puVar8;
      func_0x000107c42924();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1011f1e0c);
        (*pcVar13)();
      }
      puVar8 = puVar9;
      func_0x000107c453b4();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1011f1e10);
        (*pcVar13)();
      }
      func_0x000107c5a0f8(puVar8);
      func_0x000107c61170(puVar8);
      puVar8 = puVar6;
      func_0x000107c4ce20();
      func_0x000107c61180();
      if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1011f1e14);
        (*pcVar13)();
      }
      puVar9 = puVar8;
      func_0x000107c453bc();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1011f1e18);
        (*pcVar13)();
      }
      func_0x000107c54e48(puVar9);
      func_0x000107c61170(puVar9);
      func_0x000107c61168(PTR_PTR_1126b5b48);
      func_0x000107c40dd0();
      func_0x000107c61180();
      func_0x00010006c090(lVar1,uVar7);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      (*pcVar13)(lVar12,lVar2);
    }
  }
  return;
}



/* Entry: 1011f1e18; end: 1011f20e3;  */

void FUN_1011f1e18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  puVar1 = PTR_PTR_1126ae6c8;
  func_0x000107c610f8(PTR_PTR_1126ae6c8);
  func_0x000107c48320();
  puVar2 = PTR_PTR_1126ae6d0;
  func_0x000107c610f8(PTR_PTR_1126ae6d0);
  func_0x000107c4831c();
  puVar3 = PTR_PTR_1126b1bb0;
  func_0x000107c61168();
  func_0x000107c3e6c4();
  func_0x000107c61180();
  puVar4 = &UNK_110392918;
  func_0x000107c613fc(&UNK_110392918,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_110392a30;
  func_0x000107c613fc(&UNK_110392a30,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined **)(puVar5 + 0x20) = puVar3;
  *(undefined8 *)(puVar5 + 0x28) = param_2;
  pcStack_60 = FUN_1011f2524;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110392a48;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar3);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar4);
  func_0x0001000d76cc(&UNK_10d92b710,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1011f20e4; end: 1011f2143; -[_TtC37ValdiPublicGroupsShareServiceProvider30PublicGroupsSnapSharePresenter init] */

void FUN_1011f20e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiPublicGroupsShareServiceProvider.PublicGroupsSnapSharePresenter",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011f2110);
  (*pcVar1)();
}



/* Entry: 1011f2144; end: 1011f21bb; -[_TtC37ValdiPublicGroupsShareServiceProvider30PublicGroupsSnapSharePresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f2144(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d67128));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d67130));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d67138));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d67140));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d67148));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d67120));
  return;
}



/* Entry: 1011f21bc; end: 1011f21e3; -[_TtC37ValdiPublicGroupsShareServiceProvider30PublicGroupsSnapSharePresenter dismissCameraScope:] */

void FUN_1011f21bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011f182c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011f21e4; end: 1011f2203;  */

void FUN_1011f21e4(void)

{
  func_0x000107c61168(&PTR_PTR_1127b9e88);
  return;
}



/* Entry: 1011f2204; end: 1011f222b; -[_TtC37ValdiPublicGroupsShareServiceProvider30PublicGroupsSnapSharePresenter captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_1011f2204(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011f182c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011f222c; end: 1011f223b;  */

void FUN_1011f222c(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    pcVar5 = "cardDidLoad(success:rootView:conversationId:presentingViewController:)";
    func_0x0001000c10c0("cardDidLoad(success:rootView:conversationId:presentingViewController:)");
    func_0x000107c61180();
    puVar6 = &UNK_110392918;
    func_0x000107c613fc(&UNK_110392918,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,lVar4);
    puVar7 = &UNK_1103929e0;
    func_0x000107c613fc(&UNK_1103929e0,0x40,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    puVar7[0x18] = param_1 & 1;
    *(undefined8 *)(puVar7 + 0x20) = uVar2;
    *(undefined8 *)(puVar7 + 0x28) = uVar1;
    *(undefined8 *)(puVar7 + 0x30) = uVar3;
    *(undefined8 *)(puVar7 + 0x38) = uVar9;
    pcStack_78 = FUN_1011f227c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1103929f8;
    ppuVar8 = &puStack_98;
    puStack_70 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar6 = puStack_70;
    func_0x000107c61174(uVar2);
    func_0x000107c61434(uVar3);
    func_0x000107c61174(uVar9);
    func_0x000107c61574(puVar6);
    func_0x000107c4e524(pcVar5);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(lVar4);
    func_0x000107c615e8(pcVar5);
  }
  return;
}



/* Entry: 1011f223c; end: 1011f227b;  */

void FUN_1011f223c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1011f227c; end: 1011f228f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f227c(void)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  bVar2 = *(byte *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = 0;
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    return;
  }
  if (((bVar2 & 1) != 0) && (lVar8 = *(long *)(lVar5 + _DAT_112d67120), lVar8 != 0)) {
    lVar3 = lVar8;
    func_0x000107c615f0();
    FUN_1011f2290();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      FUN_1011f1898(uVar6,uVar7);
      if (lVar4 != 0) {
        FUN_1011f1e18(uVar1,lVar4);
        func_0x000107c61170(lVar5);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(lVar3);
        lVar5 = lVar4;
        goto LAB_1011f17f0;
      }
      func_0x000107c61170(lVar3);
    }
    FUN_1011f182c();
    func_0x000107c61170(lVar5);
    func_0x000107c615e8(lVar8);
    return;
  }
  FUN_1011f182c();
LAB_1011f17f0:
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 1011f2290; end: 1011f2523;  */

undefined *
FUN_1011f2290(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar2 = puVar3;
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar2);
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  dVar8 = param_1 * 0.8;
  func_0x000107c4c194(puVar3);
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar3);
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  dVar7 = 1.79769313486232e+308;
  func_0x000107c4c92c(param_5);
  puVar3 = (undefined *)0x0;
  dVar9 = param_1 * 0.8;
  if (dVar7 <= param_1 * 0.8) {
    dVar9 = dVar7;
  }
  if ((0.0 < dVar8) && (0.0 < dVar9)) {
    func_0x000107c54b80(0,0,dVar8,dVar9,param_6,0,0);
    func_0x000107c4abfc(param_6);
    puVar4 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x000107c486f8(dVar8,dVar9);
    puVar2 = &UNK_110392a80;
    func_0x000107c613fc(&UNK_110392a80,0x38,7);
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x10) = param_6;
    *(double *)(puVar2 + 0x28) = dVar8;
    *(double *)(puVar2 + 0x30) = dVar9;
    puVar5 = &UNK_110392aa8;
    func_0x000107c613fc(&UNK_110392aa8,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x1011f2530;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    pcStack_80 = FUN_1011f2544;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100f9148c;
    puStack_88 = &UNK_110392ac0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    puVar3 = puStack_78;
    func_0x000107c61174(param_6);
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(puVar3);
    puVar3 = puVar4;
    func_0x000107c45138(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c60bd0(ppuVar6);
    puVar4 = puVar5;
    func_0x000107c61544(puVar5,"",0x72,0x88,0x24,1);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar2);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011f2524);
      (*pcVar1)();
    }
  }
  return puVar3;
}



/* Entry: 1011f2524; end: 1011f2543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f2524(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(lVar3 + _DAT_112d67130);
    puVar4 = PTR_PTR_1126b5b40;
    func_0x000107c61168(PTR_PTR_1126b5b40);
    func_0x000107c61174(uVar7);
    lVar5 = lVar3;
    func_0x000107c61174();
    func_0x000107c5bd90(puVar4);
    func_0x000107c61180();
    func_0x000107c61174();
    func_0x000104314d44(uVar6,uVar1,lVar5,2,0,puVar4,uVar2,lVar3,0);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c42c1c(*(undefined8 *)(lVar5 + _DAT_112d67128));
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 1011f2544; end: 1011f2563;  */

void FUN_1011f2544(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1011f2564; end: 1011f2583;  */

void FUN_1011f2564(long param_1,long param_2)

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



/* Entry: 1011f2584; end: 1011f2643;  */

undefined * FUN_1011f2584(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *unaff_x20;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar1 = 0;
  if (unaff_x20 == (undefined *)0x0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  func_0x000100bc2654(0);
  lVar5 = lVar1;
  func_0x000107c5c7a0();
  func_0x000107c61180();
  lVar2 = lVar5;
  func_0x000107c5faec();
  func_0x000107c61170(lVar5);
  func_0x000103c1912c(lVar2,param_2);
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126a65f0;
    func_0x000107c610f8(PTR_PTR_1126a65f0);
    func_0x000107c453e4();
    puVar3 = PTR_PTR_1126bc778;
    func_0x000107c610f8(PTR_PTR_1126bc778);
    func_0x000107c453e4();
    lVar5 = lVar2;
    func_0x000107c44fc8(lVar2);
    func_0x000107c61180();
    lVar8 = lVar5;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar5);
    lVar5 = lVar8;
    func_0x000107c5ee20(lVar8,param_2);
    func_0x00010006c090(lVar8,param_2);
    func_0x000107c55218(puVar3);
    func_0x000107c61170(lVar5);
    func_0x000107c55218(puVar6);
    lVar5 = lVar1;
    func_0x000107c43ba0();
    func_0x000107c61180();
    if (lVar5 == 0) {
      lVar8 = 0;
      param_2 = 0xe000000000000000;
    }
    else {
      lVar8 = lVar5;
      func_0x000107c5faec();
      func_0x000107c61170(lVar5);
    }
    uVar4 = param_2;
    func_0x000107c5fadc(lVar8,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c56954(puVar6);
    func_0x000107c61170(lVar8);
    lVar5 = lVar1;
    func_0x000107c3ce94();
    func_0x000107c61180();
    uVar7 = uVar4;
    if (lVar5 == 0) {
      func_0x000107c5faec();
      uVar7 = uVar4;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar4);
    }
    func_0x000107c520cc(puVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c4c080();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar5 = 0;
      uVar7 = 0xe000000000000000;
    }
    else {
      lVar5 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c5fadc(lVar5,uVar7);
    func_0x000107c6142c(uVar7);
    func_0x000107c56120(puVar6);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar5);
  }
  return puVar6;
}



/* Entry: 1011f2644; end: 1011f2873;  */

undefined * FUN_1011f2644(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  func_0x000100bc2654(0);
  lVar6 = param_1;
  func_0x000107c5c7a0();
  func_0x000107c61180();
  lVar1 = lVar6;
  func_0x000107c5faec();
  func_0x000107c61170(lVar6);
  func_0x000103c1912c(lVar1,param_2);
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126a65f0;
    func_0x000107c610f8(PTR_PTR_1126a65f0);
    func_0x000107c453e4();
    puVar2 = PTR_PTR_1126bc778;
    func_0x000107c610f8(PTR_PTR_1126bc778);
    func_0x000107c453e4();
    lVar6 = lVar1;
    func_0x000107c44fc8(lVar1);
    func_0x000107c61180();
    lVar7 = lVar6;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar6);
    lVar6 = lVar7;
    func_0x000107c5ee20(lVar7,param_2);
    func_0x00010006c090(lVar7,param_2);
    func_0x000107c55218(puVar2);
    func_0x000107c61170(lVar6);
    func_0x000107c55218(puVar4);
    lVar6 = param_1;
    func_0x000107c43ba0();
    func_0x000107c61180();
    if (lVar6 == 0) {
      lVar7 = 0;
      param_2 = 0xe000000000000000;
    }
    else {
      lVar7 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
    }
    uVar3 = param_2;
    func_0x000107c5fadc(lVar7,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c56954(puVar4);
    func_0x000107c61170(lVar7);
    lVar6 = param_1;
    func_0x000107c3ce94();
    func_0x000107c61180();
    uVar5 = uVar3;
    if (lVar6 == 0) {
      func_0x000107c5faec();
      uVar5 = uVar3;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar3);
    }
    func_0x000107c520cc(puVar4);
    func_0x000107c61170(lVar6);
    func_0x000107c4c080();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar6 = 0;
      uVar5 = 0xe000000000000000;
    }
    else {
      lVar6 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    func_0x000107c5fadc(lVar6,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000107c56120(puVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar6);
  }
  return puVar4;
}



/* Entry: 1011f2874; end: 1011f298f;  */

undefined4 FUN_1011f2874(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1133ba6b0;
  func_0x000107c5faec();
  puVar2 = param_1;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (puVar1 == puVar2 && param_2 == lVar3) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar3);
  }
  else {
    lVar4 = param_2;
    func_0x000107c605b8();
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar3);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR_PTR_1133ba6b8;
      func_0x000107c5faec();
      lVar3 = lVar4;
      func_0x000107c5faec();
      if (puVar1 == param_1 && lVar4 == lVar3) {
        func_0x000107c6142c(lVar4);
        func_0x000107c6142c(lVar3);
        return 3;
      }
      func_0x000107c605b8(puVar1,lVar4,param_1,lVar3,0);
      func_0x000107c6142c(lVar4);
      func_0x000107c6142c(lVar3);
      if (((ulong)puVar1 & 1) != 0) {
        return 3;
      }
      return 1;
    }
  }
  return 2;
}



/* Entry: 1011f2990; end: 1011f2f23;  */

/* WARNING: Removing unreachable block (ram,0x0001011f2a00) */

undefined * FUN_1011f2990(undefined *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar2 = param_1;
  func_0x000107c4f910();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar2);
    func_0x000107c610f8(PTR_PTR_1126dd8c0);
    puVar2 = puVar3;
    FUN_1011f2584(puVar3,param_2);
    func_0x00010006c090(puVar3,param_2);
    if (puVar2 != (undefined *)0x0) {
      return puVar2;
    }
  }
  func_0x000100bc2654(0);
  puVar2 = param_1;
  func_0x000107c43cac();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5faec();
  func_0x000107c61170(puVar2);
  func_0x000103c1912c(puVar3,param_2);
  if (puVar3 == (undefined *)0x0) {
    return (undefined *)0x0;
  }
  puVar2 = PTR_PTR_1126dd8c0;
  func_0x000107c610f8(PTR_PTR_1126dd8c0);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126bc778;
  func_0x000107c610f8(PTR_PTR_1126bc778);
  func_0x000107c453e4();
  puVar5 = puVar3;
  func_0x000107c44fc8(puVar3);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5ee30();
  func_0x000107c61170(puVar5);
  puVar5 = puVar6;
  func_0x000107c5ee20(puVar6,param_2);
  func_0x00010006c090(puVar6,param_2);
  func_0x000107c55218(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c54d70(puVar2);
  puVar5 = param_1;
  func_0x000107c44ee8();
  func_0x000107c61180();
  puVar6 = puVar5;
  FUN_1011f2644();
  func_0x000107c61170(puVar5);
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c61170(puVar3);
LAB_1011f2ee0:
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    return (undefined *)0x0;
  }
  puVar5 = param_1;
  func_0x000107c3e570();
  func_0x000107c61180();
  puVar7 = puVar5;
  FUN_1011f2644();
  func_0x000107c61170(puVar5);
  if (puVar7 == (undefined *)0x0) {
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    puVar2 = puVar6;
    goto LAB_1011f2ee0;
  }
  func_0x000107c551a4(puVar2);
  func_0x000107c52b24(puVar2);
  puVar5 = param_1;
  func_0x000107c44edc();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    puVar8 = PTR_PTR_1126dd8c8;
    func_0x000107c610f8(PTR_PTR_1126dd8c8);
    func_0x000107c453e4();
    puVar9 = puVar5;
    func_0x000107c49820();
    if ((long)puVar9 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011f2f18);
      (*pcVar1)();
    }
    if (0x7fffffff < (long)puVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011f2f1c);
      (*pcVar1)();
    }
    func_0x000107c575b8(puVar8);
    func_0x000107c551a8(puVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar8);
  }
  puVar5 = param_1;
  func_0x000107c3e56c();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    puVar8 = PTR_PTR_1126dd8c8;
    func_0x000107c610f8(PTR_PTR_1126dd8c8);
    func_0x000107c453e4();
    puVar9 = puVar5;
    func_0x000107c49820();
    if ((long)puVar9 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011f2f20);
      (*pcVar1)();
    }
    if (0x7fffffff < (long)puVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011f2f24);
      (*pcVar1)();
    }
    func_0x000107c575b8(puVar8);
    func_0x000107c52b28(puVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar8);
  }
  puVar5 = param_1;
  func_0x000107c5bd00(param_1);
  func_0x000107c61180();
  FUN_1011f2874();
  func_0x000107c61170(puVar5);
  func_0x000107c54d8c(puVar2);
  puVar5 = param_1;
  func_0x000107c4e610();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = param_1;
    func_0x000107c4e614();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = param_1;
      func_0x000107c3e6b4();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) goto LAB_1011f2df8;
    }
  }
  func_0x000107c61170();
  puVar5 = PTR_PTR_1126dd8d0;
  func_0x000107c610f8(PTR_PTR_1126dd8d0);
  func_0x000107c453e4();
  puVar8 = param_1;
  func_0x000107c4e610();
  func_0x000107c61180();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = param_1;
    func_0x000107c4e614();
    func_0x000107c61180();
    if (puVar8 != (undefined *)0x0) goto LAB_1011f2cdc;
  }
  else {
LAB_1011f2cdc:
    func_0x000107c61170();
    puVar8 = PTR_PTR_1126a65e8;
    func_0x000107c610f8(PTR_PTR_1126a65e8);
    func_0x000107c453e4();
    puVar9 = param_1;
    func_0x000107c4e610();
    func_0x000107c61180();
    if (puVar9 != (undefined *)0x0) {
      func_0x000107c57320(puVar8);
      func_0x000107c61170(puVar9);
    }
    puVar9 = param_1;
    func_0x000107c4e614();
    func_0x000107c61180();
    if (puVar9 != (undefined *)0x0) {
      func_0x000107c57324(puVar8);
      func_0x000107c61170(puVar9);
    }
    func_0x000107c57320(puVar5);
    func_0x000107c61170(puVar8);
  }
  puVar8 = param_1;
  func_0x000107c3e6b4();
  func_0x000107c61180();
  if (puVar8 != (undefined *)0x0) {
    puVar9 = PTR_PTR_1126dd8d8;
    func_0x000107c610f8(PTR_PTR_1126dd8d8);
    func_0x000107c453e4();
    func_0x000107c3e674(puVar8);
    func_0x000107c52bdc(puVar9);
    func_0x000107c3e678(puVar8);
    func_0x000107c52be0(puVar9);
    func_0x000107c3e67c(puVar8);
    func_0x000107c52be4(puVar9);
    func_0x000107c52bf8(puVar5);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
  }
  func_0x000107c59d74(puVar2);
  func_0x000107c61170(puVar5);
LAB_1011f2df8:
  puVar5 = param_1;
  func_0x000107c51920();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c4c0a8();
    func_0x000107c5a45c(puVar2);
    func_0x000107c61170(puVar5);
  }
  puVar5 = param_1;
  func_0x000107c5cbf4();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c59ed0(puVar2);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c3ec24();
  func_0x000107c61180();
  if (param_1 != (undefined *)0x0) {
    func_0x000107c52e18(puVar2);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  return puVar2;
}



/* Entry: 1011f2f24; end: 1011f2f9b;  */

/* WARNING: Possible PIC construction at 0x0001011f2f80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011f2f84) */

void FUN_1011f2f24(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1011f2f9c; end: 1011f34cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1011f2f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [8];
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d67180) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d67188) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d67190) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d67198) = param_5;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  lVar1 = param_4;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    uVar2 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010d92b710);
    lVar4 = lVar1;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
  }
  *(long *)(unaff_x20 + _DAT_112d671a0) = lVar4;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return puVar3;
}



/* Entry: 1011f34d0; end: 1011f3867;  */

/* WARNING: Removing unreachable block (ram,0x0001011f3864) */
/* WARNING: Removing unreachable block (ram,0x0001011f3860) */

void FUN_1011f34d0(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  
  ppuVar10 = (undefined **)*param_2;
  ppuVar12 = ppuVar10;
  puVar6 = param_3;
  func_0x000107c4fa44();
  func_0x000107c61180();
  ppuVar2 = ppuVar12;
  func_0x000107c44fdc();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar12);
  ppuVar12 = ppuVar2;
  func_0x000107c51cec();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar2);
  ppuVar2 = ppuVar12;
  func_0x000107c5faec();
  puVar7 = puVar6;
  func_0x000107c61170(ppuVar12);
  func_0x000107c4fa44();
  func_0x000107c61180();
  ppuVar12 = ppuVar10;
  func_0x000107c44fdc();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar10);
  ppuVar10 = ppuVar12;
  func_0x000107c4fa4c();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar12);
  ppuVar12 = ppuVar10;
  func_0x000107c5faec();
  puVar8 = puVar7;
  func_0x000107c61170(ppuVar10);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f52c78;
  ppuVar10 = ppuVar11;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52c78);
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar10);
  if ((ppuVar2 == ppuVar11) && (puVar6 == puVar8)) {
    func_0x000107c6142c(puVar6);
    puVar6 = puVar8;
  }
  else {
    ppuVar10 = ppuVar2;
    puVar9 = puVar6;
    func_0x000107c605b8(ppuVar2,puVar6,ppuVar11,puVar8,0);
    func_0x000107c6142c(puVar8);
    if (((ulong)ppuVar10 & 1) == 0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110f52c98;
      ppuVar10 = ppuVar11;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52c98);
      func_0x000107c5faec();
      func_0x000107c61170(ppuVar10);
      if ((ppuVar2 == ppuVar11) && (puVar6 == puVar9)) {
        func_0x000107c6142c(puVar6);
        func_0x000107c6142c(puVar9);
      }
      else {
        func_0x000107c605b8(ppuVar2,puVar6,ppuVar11,puVar9,0);
        func_0x000107c6142c(puVar6);
        func_0x000107c6142c(puVar9);
        if (((ulong)ppuVar2 & 1) == 0) {
          func_0x000107c6142c(puVar7);
          ppuVar12 = (undefined **)0x0;
          goto LAB_1011f37a8;
        }
      }
      uVar13 = *param_4;
      func_0x000107c61434(puVar7);
      uVar4 = uVar13;
      func_0x000107c61558();
      *param_4 = uVar13;
      uVar5 = uVar13;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        func_0x0001000d182c(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
        *param_4 = uVar5;
      }
      uVar4 = *(ulong *)(uVar5 + 0x10);
      uVar13 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
        uVar13 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        func_0x0001000d182c(uVar13,uVar4 + 1,1,uVar5);
        *param_4 = uVar13;
      }
      *(ulong *)(uVar13 + 0x10) = uVar4 + 1;
      lVar1 = uVar13 + uVar4 * 0x10;
      *(undefined ***)(lVar1 + 0x20) = ppuVar12;
      *(ulong **)(lVar1 + 0x28) = puVar7;
      uVar3 = 0;
      func_0x000104522c9c(0);
      func_0x00010452292c(ppuVar12,puVar7,uVar3);
      func_0x000107c6142c(puVar7);
      goto LAB_1011f37a8;
    }
  }
  func_0x000107c6142c(puVar6);
  uVar13 = *param_3;
  func_0x000107c61434(puVar7);
  uVar4 = uVar13;
  func_0x000107c61558();
  *param_3 = uVar13;
  uVar5 = uVar13;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    func_0x0001000d182c(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
    *param_3 = uVar5;
  }
  uVar4 = *(ulong *)(uVar5 + 0x10);
  uVar13 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
    uVar13 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x0001000d182c(uVar13,uVar4 + 1,1,uVar5);
    *param_3 = uVar13;
  }
  *(ulong *)(uVar13 + 0x10) = uVar4 + 1;
  lVar1 = uVar13 + uVar4 * 0x10;
  *(undefined ***)(lVar1 + 0x20) = ppuVar12;
  *(ulong **)(lVar1 + 0x28) = puVar7;
  uVar3 = 0;
  func_0x000104522c9c(0);
  func_0x00010452281c(ppuVar12,puVar7,uVar3);
  func_0x000107c6142c(puVar7);
LAB_1011f37a8:
  *param_1 = (ulong)ppuVar12;
  return;
}



/* Entry: 1011f3868; end: 1011f4193;  */

void FUN_1011f3868(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c61428(param_9 + 0x10,auStack_90,0,0);
    uVar1 = *(undefined8 *)(param_9 + 0x10);
    func_0x000107c61428(param_10 + 0x10,auStack_a8,0,0);
    uVar2 = *(undefined8 *)(param_10 + 0x10);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    func_0x0001011f396c(param_4,param_5,param_6,param_7,param_8,param_1,uVar1,uVar2);
    func_0x000107c61170(param_3);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 1011f4194; end: 1011f4197;  */

void FUN_1011f4194(void)

{
  return;
}



/* Entry: 1011f4198; end: 1011f424b;  */

void FUN_1011f4198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *param_5;
  func_0x000107c61434(param_4);
  uVar2 = uVar4;
  func_0x000107c61558();
  *param_5 = uVar4;
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    func_0x0001000d182c(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *param_5 = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x0001000d182c(uVar4,uVar2 + 1,1,uVar3);
    *param_5 = uVar4;
  }
  *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
  lVar1 = uVar4 + uVar2 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  return;
}



/* Entry: 1011f424c; end: 1011f44a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f424c(long param_1,long param_2,ulong param_3,ulong param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 == 0) {
      uVar6 = 0;
      func_0x000107c60714(param_7,0);
      puVar3 = &UNK_110392b20;
      func_0x000107c613fc(&UNK_110392b20,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_2);
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_98 = (code *)0x1011f4ce0;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_110392bd8;
      ppuVar4 = &puStack_b8;
      puStack_90 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_90);
      func_0x000107c5fb28(param_7,uVar6);
      func_0x000107c6142c(uVar6);
      func_0x0001000d76cc(param_7 + 0x20,ppuVar4);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(param_7);
      if (param_4 != 0) {
        uVar1 = param_3 & 0xffffffffffff;
        if ((param_4 & 0x2000000000000000) != 0) {
          uVar1 = param_4 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          lVar5 = *(long *)(param_2 + _DAT_112d67188);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar5 != 0) {
            puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
            func_0x000107c5fadc(param_3,param_4);
            func_0x000107c48af4(puVar3);
            func_0x000107c61170(param_3);
            func_0x000107c5fc48(*(undefined8 *)(param_5 + _DAT_11307fc78),PTR___sSSN_11034da80);
            pcStack_98 = FUN_1011f4590;
            puStack_90 = (undefined *)0x0;
            puStack_b8 = puVar2;
            uStack_b0 = 0x42000000;
            puStack_a8 = (undefined *)0x100f5c588;
            puStack_a0 = &UNK_110392c00;
            ppuVar4 = &puStack_b8;
            func_0x000107c60bc4(ppuVar4);
            func_0x000107c51db4(lVar5);
            func_0x000107c61170(param_2);
            func_0x000107c60bd0(ppuVar4);
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(puVar3);
          }
        }
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1011f44a8; end: 1011f458f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f44a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_48 [24];
  
  puVar5 = auStack_48;
  func_0x000107c61428(param_1 + 0x10,puVar5,0,0);
  puVar1 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    puVar3 = puVar2;
    FUN_1011f8588();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar5);
    func_0x000107c40930(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    lVar4 = *(long *)(puVar1 + _DAT_112d67198);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar3 = puVar1;
    if (lVar4 != 0) {
      func_0x000107c5c2e0();
      func_0x000107c615e8(lVar4);
      puVar3 = puVar2;
      puVar2 = puVar1;
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1011f4590; end: 1011f4593;  */

void FUN_1011f4590(void)

{
  return;
}



/* Entry: 1011f4594; end: 1011f45f3; -[_TtC37ValdiPublicGroupsShareServiceProvider35PublicGroupsSportsGameMessageSender init] */

void FUN_1011f4594(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiPublicGroupsShareServiceProvider.PublicGroupsSportsGameMessageSender",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011f45c0);
  (*pcVar1)();
}



/* Entry: 1011f45f4; end: 1011f465b; -[_TtC37ValdiPublicGroupsShareServiceProvider35PublicGroupsSportsGameMessageSender .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011f4610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f4640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011f4614) */
/* WARNING: Removing unreachable block (ram,0x0001011f4644) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f45f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d67180));
  return;
}



/* Entry: 1011f465c; end: 1011f467b;  */

void FUN_1011f465c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b9f70);
  return;
}



/* Entry: 1011f467c; end: 1011f47a3;  */

ulong FUN_1011f467c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011f47a4);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1011f47a4(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011f47a0);
      (*pcVar1)();
    }
    FUN_1011f4824(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1011f47a4; end: 1011f4823;  */

undefined * FUN_1011f47a4(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1011d1d1c();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1011f4824; end: 1011f491b;  */

long FUN_1011f4824(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1011f4918);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1011f491c);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000104522c9c(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x000104522c9c(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1011f4914);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1011f491c; end: 1011f4adf;  */

ulong FUN_1011f491c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011f4a00);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011f4a04);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b3568;
    func_0x000107c61168(PTR_PTR_1126b3568);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126b3568;
    func_0x000107c61168(PTR_PTR_1126b3568);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1011f4ce8(0,0x112d60fb0,&PTR_PTR_1126b3568);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1011f4ae0);
  (*pcVar2)();
}



/* Entry: 1011f4ae0; end: 1011f4b0f;  */

void FUN_1011f4ae0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1011f3868(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1011f4b10; end: 1011f4b2b;  */

void FUN_1011f4b10(long param_1,long param_2)

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



/* Entry: 1011f4b2c; end: 1011f4cc7;  */

ulong FUN_1011f4b2c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011f4bfc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011f4c00);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001044c309c(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x0001044c309c(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001b,0x800000010ef2da70);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1011f4cc8);
  (*pcVar2)();
}



/* Entry: 1011f4cc8; end: 1011f4ce7;  */

void FUN_1011f4cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long unaff_x20;
  ulong uVar5;
  
  puVar4 = *(ulong **)(unaff_x20 + 0x10);
  uVar5 = *puVar4;
  func_0x000107c61434(param_4);
  uVar2 = uVar5;
  func_0x000107c61558();
  *puVar4 = uVar5;
  uVar3 = uVar5;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    func_0x0001000d182c(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    *puVar4 = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x0001000d182c(uVar5,uVar2 + 1,1,uVar3);
    *puVar4 = uVar5;
  }
  *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
  lVar1 = uVar5 + uVar2 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  return;
}



/* Entry: 1011f4ce8; end: 1011f4d27;  */

void FUN_1011f4ce8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1011f4d28; end: 1011f4d3f;  */

void FUN_1011f4d28(long param_1,long param_2)

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



/* Entry: 1011f4d40; end: 1011f52d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f4d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d671d0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d671d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d671e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d671e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d671f0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d671f8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d67200) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d67208) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d67210) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d67218) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d67220) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d67228) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d67230) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d67238) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d67240) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d67248) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d67250) = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011f52d8; end: 1011f52f7;  */

void FUN_1011f52d8(void)

{
  long unaff_x20;
  
  FUN_1011f6538(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),FUN_1011f52f8);
  return;
}



/* Entry: 1011f52f8; end: 1011f576f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011f52f8(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte **ppbVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  long unaff_x20;
  byte *pbVar14;
  uint uVar15;
  undefined8 uVar16;
  byte *pbStack_60;
  ulong uStack_58;
  
  lVar2 = _DAT_112d671f0;
  lVar12 = *(long *)(unaff_x20 + _DAT_112d671f0);
  if (lVar12 != 0) {
    func_0x000107c615f0(lVar12);
    return lVar12;
  }
  pbVar14 = (byte *)((undefined8 *)(unaff_x20 + _DAT_112d671d8))[1];
  if (pbVar14 == (byte *)0x0) {
    return 0;
  }
  pbVar13 = *(byte **)(unaff_x20 + _DAT_112d671d8);
  pbVar6 = (byte *)((ulong)pbVar13 & 0xffffffffffff);
  pbVar9 = (byte *)((ulong)pbVar14 >> 0x38 & 0xf);
  pbVar8 = pbVar6;
  if (((ulong)pbVar14 & 0x2000000000000000) != 0) {
    pbVar8 = pbVar9;
  }
  if (pbVar8 == (byte *)0x0) {
    return 0;
  }
  if (((ulong)pbVar14 >> 0x3c & 1) == 0) {
    if (((ulong)pbVar14 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar13 >> 0x3c & 1) == 0) {
        func_0x000107c60358();
      }
      else {
        pbVar13 = (byte *)(((ulong)pbVar14 & 0xfffffffffffffff) + 0x20);
        pbVar14 = pbVar6;
      }
      if (*pbVar13 == 0x2b) {
        pbVar8 = pbVar14 + -1;
        if ((long)pbVar14 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1011f576c);
          (*pcVar3)();
        }
        lVar12 = 0;
        if (pbVar8 == (byte *)0x0) {
          return 0;
        }
        do {
          pbVar13 = pbVar13 + 1;
          if (9 < *pbVar13 - 0x30) {
            return 0;
          }
          lVar11 = lVar12 * 10;
          if (SUB168(SEXT816(lVar12) * SEXT816(10),8) != lVar11 >> 0x3f) {
            return 0;
          }
          uVar1 = (ulong)(byte)(*pbVar13 - 0x30);
          lVar12 = lVar11 + uVar1;
          if (SCARRY8(lVar11,uVar1)) {
            return 0;
          }
          pbVar8 = pbVar8 + -1;
        } while (pbVar8 != (byte *)0x0);
      }
      else if (*pbVar13 == 0x2d) {
        pbVar8 = pbVar14 + -1;
        if ((long)pbVar14 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1011f5764);
          (*pcVar3)();
        }
        lVar12 = 0;
        if (pbVar8 == (byte *)0x0) {
          return 0;
        }
        do {
          pbVar13 = pbVar13 + 1;
          if (9 < *pbVar13 - 0x30) {
            return 0;
          }
          lVar11 = lVar12 * 10;
          if (SUB168(SEXT816(lVar12) * SEXT816(10),8) != lVar11 >> 0x3f) {
            return 0;
          }
          uVar1 = (ulong)(byte)(*pbVar13 - 0x30);
          lVar12 = lVar11 - uVar1;
          if (SBORROW8(lVar11,uVar1)) {
            return 0;
          }
          pbVar8 = pbVar8 + -1;
        } while (pbVar8 != (byte *)0x0);
      }
      else {
        lVar12 = 0;
        pbVar8 = pbVar13;
        if (pbVar14 == (byte *)0x0) {
          return 0;
        }
        while (pbVar8 != (byte *)0x0) {
          if (9 < *pbVar13 - 0x30) {
            return 0;
          }
          lVar11 = lVar12 * 10;
          if (SUB168(SEXT816(lVar12) * SEXT816(10),8) != lVar11 >> 0x3f) {
            return 0;
          }
          uVar1 = (ulong)(byte)(*pbVar13 - 0x30);
          lVar12 = lVar11 + uVar1;
          if (SCARRY8(lVar11,uVar1)) {
            return 0;
          }
          pbVar14 = pbVar14 + -1;
          pbVar13 = pbVar13 + 1;
          pbVar8 = pbVar14;
        }
      }
      goto LAB_1011f5598;
    }
    pbStack_60 = pbVar13;
    uStack_58 = (ulong)pbVar14 & 0xffffffffffffff;
    uVar15 = (uint)pbVar13 & 0xff;
    if (uVar15 == 0x2b) {
      if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1011f5770);
        (*pcVar3)();
      }
      pbVar9 = pbVar9 + -1;
      if (pbVar9 == (byte *)0x0) goto LAB_1011f5584;
      lVar12 = 0;
      pbVar14 = (byte *)((ulong)&pbStack_60 | 1);
      do {
        if (((9 < *pbVar14 - 0x30) ||
            (lVar11 = lVar12 * 10, SUB168(SEXT816(lVar12) * SEXT816(10),8) != lVar11 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)(*pbVar14 - 0x30), lVar12 = lVar11 + uVar1, SCARRY8(lVar11,uVar1)))
        goto LAB_1011f5584;
        uVar15 = 0;
        pbVar9 = pbVar9 + -1;
        pbVar14 = pbVar14 + 1;
      } while (pbVar9 != (byte *)0x0);
    }
    else if (uVar15 == 0x2d) {
      if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1011f5768);
        (*pcVar3)();
      }
      pbVar9 = pbVar9 + -1;
      if (pbVar9 == (byte *)0x0) {
LAB_1011f5584:
        uVar15 = 1;
      }
      else {
        lVar12 = 0;
        pbVar14 = (byte *)((ulong)&pbStack_60 | 1);
        do {
          if (((9 < *pbVar14 - 0x30) ||
              (lVar11 = lVar12 * 10, SUB168(SEXT816(lVar12) * SEXT816(10),8) != lVar11 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar14 - 0x30), lVar12 = lVar11 - uVar1,
             SBORROW8(lVar11,uVar1))) goto LAB_1011f5584;
          uVar15 = 0;
          pbVar9 = pbVar9 + -1;
          pbVar14 = pbVar14 + 1;
        } while (pbVar9 != (byte *)0x0);
      }
    }
    else {
      if (pbVar9 == (byte *)0x0) goto LAB_1011f5584;
      lVar12 = 0;
      ppbVar10 = &pbStack_60;
      do {
        if (((9 < *(byte *)ppbVar10 - 0x30) ||
            (lVar11 = lVar12 * 10, SUB168(SEXT816(lVar12) * SEXT816(10),8) != lVar11 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)(*(byte *)ppbVar10 - 0x30), lVar12 = lVar11 + uVar1,
           SCARRY8(lVar11,uVar1))) goto LAB_1011f5584;
        uVar15 = 0;
        pbVar9 = pbVar9 + -1;
        ppbVar10 = (byte **)((long)ppbVar10 + 1);
      } while (pbVar9 != (byte *)0x0);
    }
  }
  else {
    func_0x000107c61434(pbVar14);
    pbVar8 = pbVar14;
    FUN_1011f71b4(pbVar13,pbVar14,10,FUN_100fb6c80);
    uVar15 = (uint)pbVar8;
    func_0x000107c6142c(pbVar14);
  }
  if ((uVar15 & 0xff) == 1) {
    return 0;
  }
LAB_1011f5598:
  lVar12 = ((undefined8 *)(unaff_x20 + _DAT_112d671e0))[1];
  if (lVar12 == 0) {
    return 0;
  }
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112d671e0);
  func_0x000107c61434(lVar12);
  func_0x000107c509b4();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c6142c(lVar12);
    lVar12 = 0;
  }
  else {
    uVar7 = 0x112d67178;
    lVar11 = 0;
    FUN_1011f73ec(0,0x112d67178,&PTR_PTR_1126a65d8);
    func_0x000107c614e8();
    func_0x000107c3ff48();
    func_0x000107c61180();
    if (lVar11 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar7);
    }
    puVar4 = PTR_PTR_1126a65e0;
    func_0x000107c610f8(PTR_PTR_1126a65e0);
    func_0x000107c5fadc(uVar16,lVar12);
    func_0x000107c6142c(lVar12);
    func_0x000107c485e4(puVar4);
    func_0x000107c61170(uVar16);
    puVar5 = PTR_PTR_1126a65d0;
    func_0x000107c610f8(PTR_PTR_1126a65d0);
    func_0x000107c453e4();
    lVar12 = param_1;
    func_0x000107c40990();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
  }
  uVar16 = *(undefined8 *)(unaff_x20 + lVar2);
  *(long *)(unaff_x20 + lVar2) = lVar12;
  func_0x000107c615f0(lVar12);
  func_0x000107c615e8(uVar16);
  return lVar12;
}



/* Entry: 1011f5770; end: 1011f57f3; -[_TtC37ValdiPublicGroupsShareServiceProvider34ValdiPublicGroupsSharePageLauncher shareMessageWithMessageId:conversationId:deckContainer:] */

void FUN_1011f5770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  func_0x0001011f4e94(param_3,param_4,param_2,param_5);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1011f57f4; end: 1011f580f;  */

void FUN_1011f57f4(long param_1,long param_2)

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



/* Entry: 1011f5810; end: 1011f58a3; -[_TtC37ValdiPublicGroupsShareServiceProvider34ValdiPublicGroupsSharePageLauncher snapAndShareMessageWithMessageId:conversationId:deckContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f5810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_48;
  
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&uStack_48);
  func_0x0001011f1040(param_3,param_4,param_2);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 1011f58a4; end: 1011f5e9b;  */

/* WARNING: Possible PIC construction at 0x0001011f59ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f5d98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f5dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f5dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f5e00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f5e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f5e74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011f5e68) */
/* WARNING: Removing unreachable block (ram,0x0001011f5e04) */
/* WARNING: Removing unreachable block (ram,0x0001011f5dd4) */
/* WARNING: Removing unreachable block (ram,0x0001011f5dc4) */
/* WARNING: Removing unreachable block (ram,0x0001011f5d9c) */
/* WARNING: Removing unreachable block (ram,0x0001011f59b0) */
/* WARNING: Removing unreachable block (ram,0x0001011f5e60) */
/* WARNING: Removing unreachable block (ram,0x0001011f59cc) */
/* WARNING: Removing unreachable block (ram,0x0001011f5e78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f58a4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = *(long *)(unaff_x20 + _DAT_112d67210);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4e864();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112d67248);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c615e8(lVar1);
        lVar1 = lVar2;
      }
      else {
        func_0x000107c4d06c();
        func_0x000107c61180();
        lVar1 = *(long *)(unaff_x20 + _DAT_112d671d0);
        *(long *)(unaff_x20 + _DAT_112d671d0) = lVar2;
        func_0x000107c615f0();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 1011f5e9c; end: 1011f5ebb;  */

void FUN_1011f5e9c(void)

{
  long unaff_x20;
  
  FUN_1011f6538(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),FUN_1011f68f0);
  return;
}



/* Entry: 1011f5ebc; end: 1011f6033;  */

undefined * FUN_1011f5ebc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  
  lVar1 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000107c5ed70();
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  (**(code **)(lVar8 + 0x10))(puVar6,param_1,lVar2);
  (**(code **)(lVar8 + 0x38))(puVar6,0,1,lVar2);
  func_0x000107c5fadc(lVar1,puVar4);
  func_0x000107c6142c(puVar4);
  puVar3 = puVar6;
  (**(code **)(lVar8 + 0x30))(puVar6,1,lVar2);
  puVar7 = (undefined1 *)0x0;
  if ((int)puVar3 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar8 + 8))(puVar6,lVar2);
    puVar7 = puVar3;
  }
  puVar4 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar5 = PTR_PTR_1126b0800;
  func_0x000107c610f8(PTR_PTR_1126b0800);
  func_0x000107c48cbc();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar7);
  func_0x000107c451b0(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  return puVar4;
}



/* Entry: 1011f6034; end: 1011f605f;  */

undefined * FUN_1011f6034(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  long lVar9;
  
  lVar5 = 0;
  func_0x000107c5ede0();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  lVar5 = 0x112d36580;
  puVar3 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000107c5ed70();
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  (**(code **)(lVar9 + 0x10))
            (puVar7,unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)),lVar1);
  (**(code **)(lVar9 + 0x38))(puVar7,0,1,lVar1);
  func_0x000107c5fadc(lVar5,puVar3);
  func_0x000107c6142c(puVar3);
  puVar2 = puVar7;
  (**(code **)(lVar9 + 0x30))(puVar7,1,lVar1);
  puVar8 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar9 + 8))(puVar7,lVar1);
    puVar8 = puVar2;
  }
  puVar3 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar4 = PTR_PTR_1126b0800;
  func_0x000107c610f8(PTR_PTR_1126b0800);
  func_0x000107c48cbc();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar8);
  func_0x000107c451b0(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  return puVar3;
}



/* Entry: 1011f6060; end: 1011f6097;  */

void FUN_1011f6060(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1011f6098; end: 1011f6107; -[_TtC37ValdiPublicGroupsShareServiceProvider34ValdiPublicGroupsSharePageLauncher shareInviteWithConversationId:deckContainer:] */

void FUN_1011f6098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_1011f58a4(param_3,param_2,param_4);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1011f6108; end: 1011f6537;  */

/* WARNING: Possible PIC construction at 0x0001011f61c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f639c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f63c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f6480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f6490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011f64d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011f6494) */
/* WARNING: Removing unreachable block (ram,0x0001011f6484) */
/* WARNING: Removing unreachable block (ram,0x0001011f63c4) */
/* WARNING: Removing unreachable block (ram,0x0001011f63a0) */
/* WARNING: Removing unreachable block (ram,0x0001011f61c4) */
/* WARNING: Removing unreachable block (ram,0x0001011f64d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f6108(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d67210);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4e864();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112d67248);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c615e8(lVar1);
        lVar1 = lVar2;
      }
      else {
        func_0x000107c4d06c();
        func_0x000107c61180();
        lVar1 = *(long *)(unaff_x20 + _DAT_112d671d0);
        *(long *)(unaff_x20 + _DAT_112d671d0) = lVar2;
        func_0x000107c615f0();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 1011f6538; end: 1011f6613;  */

void FUN_1011f6538(undefined8 *param_1,long param_2,long param_3,code *param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    puVar1 = PTR_PTR_1126b1870;
    func_0x000107c610f8();
    func_0x000107c49624();
    (*param_4)();
    if (param_3 != 0) {
      func_0x000107c615f0();
      func_0x000107c61174();
      func_0x000107c57f14(param_3);
      func_0x000107c61170(puVar1);
      func_0x000107c615ec(param_3,2);
    }
    func_0x000107c61170(param_2);
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 1011f6614; end: 1011f665f;  */

void FUN_1011f6614(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1011f6660; end: 1011f685b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011f6660(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  
  lVar1 = _DAT_112d671f0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d671f0);
  lVar7 = lVar2;
  if (lVar2 == 0) {
    lVar7 = ((undefined8 *)(unaff_x20 + _DAT_112d671e0))[1];
    if ((lVar7 == 0) || (lVar6 = *(long *)(unaff_x20 + _DAT_112d671e8), lVar6 == 0)) {
      lVar7 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d671e0);
      puVar3 = PTR_PTR_1126a6600;
      func_0x000107c610f8(PTR_PTR_1126a6600);
      func_0x000107c61174(lVar6);
      func_0x000107c61434(lVar7);
      func_0x000107c5fadc(uVar8,lVar7);
      func_0x000107c6142c(lVar7);
      func_0x000107c46194(puVar3);
      func_0x000107c61170(uVar8);
      func_0x000107c54d6c(puVar3);
      func_0x000107c509b4();
      func_0x000107c61180();
      if (param_1 == 0) {
        func_0x000107c61170(puVar3);
        func_0x000107c61170(lVar6);
        lVar7 = 0;
      }
      else {
        uVar8 = 0x112d67298;
        lVar4 = 0;
        FUN_1011f73ec(0,0x112d67298,&PTR_PTR_1126a6608);
        func_0x000107c614e8();
        func_0x000107c3ff48();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar8);
        }
        puVar5 = PTR_PTR_1126a6610;
        func_0x000107c610f8(PTR_PTR_1126a6610);
        func_0x000107c61174(puVar3);
        func_0x000107c453e4(puVar5);
        lVar7 = param_1;
        func_0x000107c40990();
        func_0x000107c61180();
        func_0x000107c615e8(param_1);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(lVar6);
      }
      uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
      *(long *)(unaff_x20 + lVar1) = lVar7;
      func_0x000107c615f0(lVar7);
      func_0x000107c615e8(uVar8);
    }
  }
  func_0x000107c615f0(lVar2);
  return lVar7;
}



/* Entry: 1011f685c; end: 1011f68ef; -[_TtC37ValdiPublicGroupsShareServiceProvider34ValdiPublicGroupsSharePageLauncher shareGameWithGameData:conversationId:deckContainer:] */

void FUN_1011f685c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_1011f6108(param_3,param_4,param_2,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1011f68f0; end: 1011f6a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011f68f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar1 = _DAT_112d671f0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d671f0);
  lVar8 = lVar2;
  if (lVar2 == 0) {
    lVar7 = ((undefined8 *)(unaff_x20 + _DAT_112d671e0))[1];
    lVar8 = 0;
    if (lVar7 != 0) {
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d671e0);
      func_0x000107c61434(lVar7);
      func_0x000107c509b4();
      func_0x000107c61180();
      if (param_1 == 0) {
        func_0x000107c6142c(lVar7);
        lVar8 = 0;
      }
      else {
        uVar6 = 0x112d672a0;
        lVar3 = 0;
        FUN_1011f73ec(0,0x112d672a0,&PTR_PTR_1126a6618);
        func_0x000107c614e8();
        func_0x000107c3ff48();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar6);
        }
        puVar4 = PTR_PTR_1126a6620;
        func_0x000107c610f8(PTR_PTR_1126a6620);
        func_0x000107c5fadc(uVar9,lVar7);
        func_0x000107c6142c(lVar7);
        func_0x000107c46194(puVar4);
        func_0x000107c61170(uVar9);
        puVar5 = PTR_PTR_1126a6628;
        func_0x000107c610f8(PTR_PTR_1126a6628);
        func_0x000107c453e4();
        lVar8 = param_1;
        func_0x000107c40990();
        func_0x000107c61180();
        func_0x000107c615e8(param_1);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar5);
      }
      uVar9 = *(undefined8 *)(unaff_x20 + lVar1);
      *(long *)(unaff_x20 + lVar1) = lVar8;
      func_0x000107c615f0(lVar8);
      func_0x000107c615e8(uVar9);
    }
  }
  func_0x000107c615f0(lVar2);
  return lVar8;
}



/* Entry: 1011f6a88; end: 1011f6ae7; -[_TtC37ValdiPublicGroupsShareServiceProvider34ValdiPublicGroupsSharePageLauncher init] */

void FUN_1011f6a88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiPublicGroupsShareServiceProvider.ValdiPublicGroupsSharePageLauncher",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011f6ab4);
  (*pcVar1)();
}



/* Entry: 1011f6ae8; end: 1011f6be7; -[_TtC37ValdiPublicGroupsShareServiceProvider34ValdiPublicGroupsSharePageLauncher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011f6b94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011f6b98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f6ae8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d67210));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d67218));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d67220));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d67228));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d67230));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d67238));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d67240));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d67248));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d67250));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d671d0));
  return;
}



/* Entry: 1011f6be8; end: 1011f7043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f6be8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_68;
  
  if (*(long *)(unaff_x20 + _DAT_112d671d0) != 0) {
    func_0x000107c41864(*(long *)(unaff_x20 + _DAT_112d671d0),param_2,0);
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_112d67218);
  lVar8 = lVar7;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar8 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar7);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar5 = _DAT_112d67208;
  lVar7 = _DAT_112d67200;
  lVar8 = _DAT_112d671f8;
  cVar3 = *(char *)(unaff_x20 + _DAT_112d67200);
  bVar4 = *(byte *)(unaff_x20 + _DAT_112d67208);
  if ((*(byte *)(unaff_x20 + _DAT_112d671f8) & 1) == 0) {
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (cVar3 == '\0') goto LAB_1011f6c94;
LAB_1011f6d24:
    puVar6 = puVar11;
    func_0x000107c61558();
    puStack_68 = puVar11;
    if (((ulong)puVar6 & 1) == 0) {
      FUN_1011f72c0(0,*(long *)(puVar11 + 0x10) + 1,1);
    }
    uVar2 = *(ulong *)(puStack_68 + 0x10);
    if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar2) {
      FUN_1011f72c0(1 < *(ulong *)(puStack_68 + 0x18),uVar2 + 1,1);
    }
    *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
    puStack_68[uVar2 + 0x20] = cVar3;
    puVar11 = puStack_68;
    if ((bVar4 & 1) == 0) goto LAB_1011f6d70;
LAB_1011f6c98:
    puVar6 = puVar11;
    func_0x000107c61558();
    puStack_68 = puVar11;
    if (((ulong)puVar6 & 1) == 0) {
      FUN_1011f72c0(0,*(long *)(puVar11 + 0x10) + 1,1);
    }
    uVar2 = *(ulong *)(puStack_68 + 0x10);
    lVar9 = uVar2 + 1;
    if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar2) {
      FUN_1011f72c0(1 < *(ulong *)(puStack_68 + 0x18),lVar9,1);
    }
    *(long *)(puStack_68 + 0x10) = lVar9;
    puStack_68[uVar2 + 0x20] = bVar4;
    puVar11 = puStack_68;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1011f72c0(0,1,1);
    uVar2 = *(ulong *)(puStack_68 + 0x10);
    if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar2) {
      FUN_1011f72c0(1 < *(ulong *)(puStack_68 + 0x18),uVar2 + 1,1);
    }
    *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
    puStack_68[uVar2 + 0x20] = 1;
    puVar11 = puStack_68;
    if (cVar3 != '\0') goto LAB_1011f6d24;
LAB_1011f6c94:
    if ((bVar4 & 1) != 0) goto LAB_1011f6c98;
LAB_1011f6d70:
    lVar9 = *(long *)(puVar11 + 0x10);
  }
  func_0x000107c61574(puVar11);
  if (lVar9 != 1) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d671d8);
    uVar10 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar10);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d671e0);
    uVar10 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar10);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d671e8);
    *(undefined8 *)(unaff_x20 + _DAT_112d671e8) = 0;
    func_0x000107c61170(uVar10);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d671d0);
    *(undefined8 *)(unaff_x20 + _DAT_112d671d0) = 0;
    func_0x000107c615e8(uVar10);
    lVar8 = _DAT_112d671f0;
    uVar10 = 0;
    if (*(long *)(unaff_x20 + _DAT_112d671f0) != 0) {
      func_0x000107c41848();
      uVar10 = *(undefined8 *)(unaff_x20 + lVar8);
    }
    *(undefined8 *)(unaff_x20 + lVar8) = 0;
    func_0x000107c615e8(uVar10);
    *(undefined1 *)(unaff_x20 + _DAT_112d67200) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_112d671f8) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_112d67208) = 0;
    return;
  }
  if (*(char *)(unaff_x20 + lVar8) == '\x01') {
    lVar8 = ((undefined8 *)(unaff_x20 + _DAT_112d671e0))[1];
    if (lVar8 == 0) goto LAB_1011f6e58;
    lVar9 = ((undefined8 *)(unaff_x20 + _DAT_112d671d8))[1];
    if (lVar9 == 0) goto LAB_1011f6e58;
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d671e0);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d671d8);
    func_0x000107c61434(lVar8);
    func_0x000107c61434(lVar9);
    func_0x0001000d224c(&puStack_68);
    puVar11 = puStack_68;
    func_0x0001011ef8b0(uVar12,lVar9,uVar10,lVar8,*(undefined8 *)(param_1 + _DAT_113034f28),
                        *(undefined8 *)(param_1 + _DAT_113034f40),
                        ((undefined8 *)(param_1 + _DAT_113034f40))[1]);
    func_0x000107c6142c(lVar8);
    func_0x000107c6142c(lVar9);
  }
  else {
LAB_1011f6e58:
    if (*(char *)(unaff_x20 + lVar7) == '\x01') {
      lVar8 = ((undefined8 *)(unaff_x20 + _DAT_112d671e0))[1];
      if (lVar8 != 0) {
        uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d671e0);
        func_0x000107c61434(lVar8);
        func_0x0001000d224c(&puStack_68);
        puVar11 = puStack_68;
        uVar12 = *(undefined8 *)(param_1 + _DAT_113034f28);
        lVar7 = ((undefined8 *)(param_1 + _DAT_113034f40))[1];
        if (lVar7 == 0) {
          uVar13 = 0;
          lVar7 = -0x2000000000000000;
        }
        else {
          uVar13 = *(undefined8 *)(param_1 + _DAT_113034f40);
        }
        func_0x000107c61434();
        func_0x0001011ee304(uVar10,lVar8,uVar12,uVar13,lVar7);
        func_0x000107c6142c(lVar8);
        func_0x000107c61170(puVar11);
        func_0x000107c6142c(lVar7);
        goto LAB_1011f6fbc;
      }
    }
    if (*(char *)(unaff_x20 + lVar5) != '\x01') goto LAB_1011f6fbc;
    lVar8 = ((undefined8 *)(unaff_x20 + _DAT_112d671e0))[1];
    if ((lVar8 == 0) ||
       (puVar11 = *(undefined **)(unaff_x20 + _DAT_112d671e8), puVar11 == (undefined *)0x0))
    goto LAB_1011f6fbc;
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d671e0);
    func_0x000107c61434(lVar8);
    func_0x000107c61174(puVar11);
    func_0x0001000d224c(&puStack_68);
    puVar6 = puStack_68;
    func_0x0001011f3120(puVar11,uVar10,lVar8,*(undefined8 *)(param_1 + _DAT_113034f28),
                        *(undefined8 *)(param_1 + _DAT_113034f40),
                        ((undefined8 *)(param_1 + _DAT_113034f40))[1]);
    func_0x000107c6142c(lVar8);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c61170(puVar11);
LAB_1011f6fbc:
  FUN_1011f7044();
  return;
}


