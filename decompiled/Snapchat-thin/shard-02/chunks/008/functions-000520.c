/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102195f20; end: 102195f9b;  */

void FUN_102195f20(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e5e9a0 != 0) {
    return;
  }
  puVar1 = &UNK_1104d8590;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e5e9a0 = param_1;
  return;
}



/* Entry: 102195f9c; end: 102196047;  */

void FUN_102195f9c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102196048; end: 102196057;  */

void FUN_102196048(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 102196058; end: 10219609b;  */

void FUN_102196058(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10219609c; end: 1021960c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10219609c(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000107c5ffd8(0,uVar10,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5ffc4();
  lStack_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar14 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lStack_b0 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000100083b20(&uStack_68);
  uVar5 = uStack_68;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&lStack_70);
  lVar4 = lStack_70;
  func_0x000107c410f8();
  func_0x000107c61180();
  func_0x000107c61170(lStack_70);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102195f0c);
    (*pcVar2)();
  }
  lStack_d0 = lVar14;
  lStack_c8 = lVar13;
  lStack_c0 = lVar12;
  lStack_b8 = lVar3;
  func_0x000100083b20(&lStack_78);
  lVar3 = lStack_78;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_78);
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_80);
    uVar6 = uStack_80;
    func_0x000107c3fe8c();
    func_0x000107c61180();
    func_0x000107c61170(uStack_80);
    func_0x000100083b20(&uStack_88);
    uVar7 = uStack_88;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uStack_88);
    uVar8 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
    lVar9 = 0;
    func_0x000102198178();
    lVar14 = lVar9;
    func_0x000107c610f8();
    *(undefined8 *)(lVar14 + _DAT_112e5e9b0) = uVar5;
    *(long *)(lVar14 + _DAT_112e5e9b8) = lVar4;
    *(long *)(lVar14 + _DAT_112e5e9c0) = lVar3;
    *(undefined8 *)(lVar14 + _DAT_112e5e9c8) = uVar6;
    puVar1 = (undefined8 *)(lVar14 + _DAT_112e5e9d0);
    *puVar1 = uVar8;
    puVar1[1] = uVar10;
    func_0x0001000295c4(0);
    func_0x000107c61174();
    uStack_d8 = uVar5;
    func_0x000107c61174();
    lStack_e0 = lVar4;
    func_0x000107c615f0(lVar3);
    func_0x000107c61174(uVar6);
    lVar13 = lStack_b0;
    func_0x000107c5f81c(lStack_b0);
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar10 = 0x112d4ac68;
    FUN_1021960c8(0x112d4ac68,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918,
                  PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
    uVar5 = 0x112d4ac70;
    func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
    uVar7 = uVar5;
    func_0x00010002964c();
    lVar4 = lStack_d0;
    func_0x000107c60264(lStack_d0,&puStack_90,uVar5,uVar7,lStack_a8,uVar10);
    lVar12 = lStack_c0;
    (**(code **)(lStack_c8 + 0x68))
              (lStack_c0,
               *(undefined4 *)
                PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
               ,lStack_b8);
    uVar10 = 0xd000000000000024;
    func_0x000107c5ffec(0xd000000000000024,0x800000010f068870,lVar13,lVar4,lVar12,0);
    *(undefined8 *)(lVar14 + _DAT_112e5e9d8) = uVar10;
    plVar11 = &lStack_a0;
    lStack_a0 = lVar14;
    lStack_98 = lVar9;
    func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
    func_0x000107c61170(uStack_d8);
    func_0x000107c61170(lStack_e0);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar6);
    return plVar11;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102195f10);
  (*pcVar2)();
}



/* Entry: 1021960c8; end: 102196107;  */

void FUN_1021960c8(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102196108; end: 10219610f;  */

bool FUN_102196108(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102196110; end: 1021963c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102196110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar10;
  undefined1 auStack_c0 [8];
  char *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_78 [16];
  undefined *puStack_68;
  
  lVar2 = 0;
  uStack_98 = param_6;
  func_0x000107c5ffd8();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar10 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5e9b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e5e9b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e5e9c0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e5e9c8) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5e9d0);
  *puVar1 = param_5;
  puVar1[1] = uStack_98;
  uVar5 = 0;
  func_0x0001021994cc(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  pcStack_b8 = "CommunitiesMemberRankingJob";
  uStack_b0 = uVar5;
  func_0x000107c61174();
  uStack_98 = param_1;
  func_0x000107c61174();
  uStack_a0 = param_2;
  func_0x000107c615f0(param_3);
  func_0x000107c61174();
  uStack_a8 = param_4;
  func_0x000107c5f81c(lVar4);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = 0x112d4ac68;
  func_0x00010219944c(0x112d4ac68,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918,
                      PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928
                     );
  uVar6 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar7 = 0x112d4ac78;
  FUN_102198c18(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar10,&puStack_68,uVar6,uVar7,lVar3,uVar5);
  (**(code **)(lVar9 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lVar2);
  uVar5 = 0xd000000000000024;
  func_0x000107c5ffec(0xd000000000000024,(ulong)pcStack_b8 | 0x8000000000000000,lVar4,lVar10,puVar8,
                      0);
  *(undefined8 *)(unaff_x20 + _DAT_112e5e9d8) = uVar5;
  puVar8 = auStack_78;
  func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_a0);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uStack_a8);
  return puVar8;
}



/* Entry: 1021963c4; end: 1021965d3;  */

/* WARNING: Possible PIC construction at 0x000102196528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021965a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010219652c) */
/* WARNING: Removing unreachable block (ram,0x0001021965a4) */

void FUN_1021963c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar2 = &puStack_90;
  if (param_1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    puVar4 = (undefined *)0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010da65f30);
    func_0x000107c466bc(puVar3);
  }
  else {
    puVar4 = PTR_PTR_1126dede0;
    func_0x000107c61168(PTR_PTR_1126dede0);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar4);
    func_0x000107c61180();
    func_0x000107c5fc48(param_4,PTR___sSSN_11034da80);
    puVar3 = &UNK_1104d86f8;
    func_0x000107c613fc(&UNK_1104d86f8,0x38,7);
    *(undefined8 *)(puVar3 + 0x10) = param_6;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    *(undefined8 *)(puVar3 + 0x20) = param_3;
    *(undefined8 *)(puVar3 + 0x28) = param_7;
    *(long *)(puVar3 + 0x30) = param_1;
    puVar1 = &UNK_1104d8720;
    func_0x000107c613fc(&UNK_1104d8720,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = 0x102198bac;
    *(undefined **)(puVar1 + 0x18) = puVar3;
    pcStack_70 = FUN_102198bbc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1011d1310;
    puStack_78 = &UNK_1104d8738;
    puStack_68 = puVar1;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c615f0(param_1);
    func_0x000107c6157c(param_6);
    func_0x000107c6157c(param_3);
    func_0x000107c615f0(param_7);
    func_0x000107c61574(puVar3);
    func_0x000107c44308((double)param_5,puVar4);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1021965d4; end: 1021965d7;  */

/* WARNING: Possible PIC construction at 0x000102196528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021965a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010219652c) */
/* WARNING: Removing unreachable block (ram,0x0001021965a4) */

void FUN_1021965d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  ppuVar8 = &puStack_90;
  if (param_1 == 0) {
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    puVar10 = (undefined *)0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010da65f30);
    func_0x000107c466bc(puVar9);
  }
  else {
    puVar10 = PTR_PTR_1126dede0;
    func_0x000107c61168(PTR_PTR_1126dede0);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar10);
    func_0x000107c61180();
    func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
    puVar9 = &UNK_1104d86f8;
    func_0x000107c613fc(&UNK_1104d86f8,0x38,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar3;
    *(undefined8 *)(puVar9 + 0x18) = uVar1;
    *(undefined8 *)(puVar9 + 0x20) = uVar4;
    *(undefined8 *)(puVar9 + 0x28) = uVar6;
    *(long *)(puVar9 + 0x30) = param_1;
    puVar7 = &UNK_1104d8720;
    func_0x000107c613fc(&UNK_1104d8720,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x102198bac;
    *(undefined **)(puVar7 + 0x18) = puVar9;
    pcStack_70 = FUN_102198bbc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1011d1310;
    puStack_78 = &UNK_1104d8738;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar9 = puStack_68;
    func_0x000107c615f0(param_1);
    func_0x000107c6157c(uVar3);
    func_0x000107c6157c(uVar4);
    func_0x000107c615f0(uVar6);
    func_0x000107c61574(puVar9);
    func_0x000107c44308((double)lVar5,puVar10);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 1021965d8; end: 102196a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021965d8(long param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  uVar15 = *(ulong *)(param_1 + 0x10);
  if (uVar15 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      uVar10 = 0;
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        uVar1 = uVar10;
        if (uVar10 <= uVar15) {
          uVar1 = uVar15;
        }
        plVar2 = (long *)(param_1 + 0x28 + uVar10 * 0x10);
        do {
          plVar9 = plVar2;
          if (uVar15 == uVar10) {
            puVar6 = puVar5;
            func_0x0001021968fc(puVar5,&SUB_1011bf650);
            func_0x000107c6142c(puVar5);
            uVar15 = 0;
            uVar10 = *(ulong *)(puVar6 + 0x10);
            puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
            do {
              lVar13 = uVar15 * 0x10 + 0x28;
              do {
                lVar11 = lVar13;
                if (uVar10 == uVar15) {
                  puVar4 = puVar5;
                  func_0x000107c5fc48(puVar5,PTR___sSSN_11034da80);
                  func_0x000107c6142c(puVar5);
                  puVar5 = &UNK_1104d8770;
                  func_0x000107c613fc(&UNK_1104d8770,0x30,7);
                  *(code **)(puVar5 + 0x10) = param_3;
                  *(undefined8 *)(puVar5 + 0x18) = param_4;
                  *(long *)(puVar5 + 0x20) = param_2;
                  *(undefined8 *)(puVar5 + 0x28) = param_6;
                  pcStack_88 = FUN_102198bf8;
                  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_a0 = 0x42000000;
                  pcStack_98 = FUN_1021971c8;
                  puStack_90 = &UNK_1104d8788;
                  ppuVar8 = &puStack_a8;
                  puStack_80 = puVar5;
                  func_0x000107c60bc4(ppuVar8);
                  puVar5 = puStack_80;
                  func_0x000107c6157c(param_4);
                  func_0x000107c61174(param_2);
                  func_0x000107c615f0(param_6);
                  func_0x000107c61574(puVar5);
                  func_0x000107c4113c(param_5);
                  func_0x000107c60bd0(ppuVar8);
                  func_0x000107c61170(param_2);
                  func_0x000107c6142c(puVar6);
                  func_0x000107c61170(puVar4);
                  return;
                }
                if (*(ulong *)(puVar6 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1021968fc);
                  (*pcVar3)();
                }
                uVar15 = uVar15 + 1;
                lVar14 = *(long *)(puVar6 + lVar11);
                lVar13 = lVar11 + 0x10;
              } while (lVar14 == 0);
              uVar12 = *(undefined8 *)(puVar6 + lVar11 + -8);
              func_0x000107c61434(lVar14);
              puVar4 = puVar5;
              func_0x000107c61558();
              puVar7 = puVar5;
              if (((ulong)puVar4 & 1) == 0) {
                puVar7 = (undefined *)0x0;
                func_0x0001000d182c(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
              }
              uVar1 = *(ulong *)(puVar7 + 0x10);
              puVar5 = puVar7;
              if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
                puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
                func_0x0001000d182c(puVar5,uVar1 + 1,1,puVar7);
              }
              *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
              *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = uVar12;
              *(long *)(puVar5 + uVar1 * 0x10 + 0x28) = lVar14;
            } while( true );
          }
          uVar10 = uVar10 + 1;
          if (uVar1 + 1 == uVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1021968f8);
            (*pcVar3)();
          }
          lVar13 = *plVar9;
          plVar2 = plVar9 + 2;
        } while (lVar13 == 0);
        lVar11 = plVar9[-1];
        func_0x000107c61434(lVar13);
        puVar6 = puVar5;
        func_0x000107c61558();
        puVar4 = puVar5;
        if (((ulong)puVar6 & 1) == 0) {
          puVar4 = (undefined *)0x0;
          func_0x0001000d182c(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
        }
        uVar1 = *(ulong *)(puVar4 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
          func_0x0001000d182c(puVar5,uVar1 + 1,1,puVar4);
        }
        *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
        *(long *)(puVar5 + uVar1 * 0x10 + 0x20) = lVar11;
        *(long *)(puVar5 + uVar1 * 0x10 + 0x28) = lVar13;
      } while( true );
    }
  }
  (*param_3)(0,0);
  return;
}



/* Entry: 102196a1c; end: 102196a37;  */

void FUN_102196a1c(long param_1,long param_2)

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



/* Entry: 102196a38; end: 102196b2f; -[_TtC38SCCommunitiesMemberRankingJobProcessor36CommunitiesMemberRankingJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_102196a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4(param_6);
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c60bc4(param_6);
  uVar2 = param_1;
  FUN_102198450(param_1,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102196b30; end: 102196ffb;  */

/* WARNING: Possible PIC construction at 0x000102196d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102196d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102196f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102196df0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102196f88) */
/* WARNING: Removing unreachable block (ram,0x000102196d8c) */
/* WARNING: Removing unreachable block (ram,0x000102196da0) */
/* WARNING: Removing unreachable block (ram,0x000102196d64) */
/* WARNING: Removing unreachable block (ram,0x000102196df4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102196b30(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  lVar3 = 0;
  uStack_b8 = param_5;
  lStack_b0 = param_4;
  func_0x000107c5f7fc();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = (long)&uStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    puVar14 = (undefined *)0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010da65f30);
    func_0x000107c466bc(puVar7);
  }
  else {
    puVar14 = &UNK_1104d87c0;
    puVar7 = puVar14;
    uStack_118 = param_2;
    uStack_110 = param_3;
    lStack_108 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    lStack_f8 = lVar4;
    lStack_f0 = lVar16;
    lStack_e8 = lVar15;
    lStack_e0 = lVar3;
    func_0x000107c613fc(&UNK_1104d87c0,0x18,7);
    *(undefined8 *)(puVar7 + 0x10) = 0;
    puVar5 = puVar14;
    puStack_c0 = puVar7;
    func_0x000107c613fc(&UNK_1104d87c0,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    puStack_c8 = puVar5;
    func_0x000107c613fc(&UNK_1104d87c0,0x18,7);
    *(undefined8 *)(puVar14 + 0x10) = 0;
    puStack_d0 = puVar14;
    func_0x000107c60f34();
    puVar17 = (ulong *)(param_1 + 0x40);
    uStack_120 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar18 = 0xffffffffffffffff;
    if (-uStack_120 < 0x40) {
      uVar18 = ~(-1L << (-uStack_120 & 0x3f));
    }
    uVar18 = uVar18 & *puVar17;
    uVar12 = 0x3f - uStack_120;
    puStack_d8 = puVar14;
    func_0x000107c61434(param_1);
    puVar5 = puStack_c0;
    puVar7 = puStack_c8;
    lVar3 = 0;
    if (uVar18 == 0) {
      do {
        lVar4 = lVar3 + 1;
        if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102196ffc);
          (*pcVar2)();
        }
        if ((long)(uVar12 >> 6) <= lVar4) {
          func_0x000102198c04(param_1,puVar17,~uStack_120,0,0);
          uVar13 = *(undefined8 *)(lStack_b0 + _DAT_112e5e9d8);
          puVar14 = &UNK_1104d87e8;
          func_0x000107c613fc(&UNK_1104d87e8,0x28,7);
          puVar7 = puStack_d0;
          uVar9 = uStack_110;
          *(undefined **)(puVar14 + 0x10) = puStack_d0;
          *(undefined8 *)(puVar14 + 0x18) = uStack_118;
          *(undefined8 *)(puVar14 + 0x20) = uStack_110;
          uStack_78 = 0x102198c0c;
          puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_90 = 0x42000000;
          puStack_88 = &UNK_1000f6b44;
          puStack_80 = &UNK_1104d8800;
          ppuVar8 = &puStack_98;
          puStack_70 = puVar14;
          func_0x000107c60bc4(ppuVar8);
          func_0x000107c6157c(puVar7);
          func_0x000107c6157c(uVar9);
          lVar3 = lStack_108;
          func_0x000107c5f808(lStack_108);
          puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
          uVar9 = 0x112d4af88;
          func_0x00010219944c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                              PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
          uVar10 = 0x112d4af90;
          func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
          uVar11 = 0x112d4af98;
          FUN_102198c18(0x112d4af98,0x112d4af90,&UNK_10d914100);
          lVar4 = lStack_f0;
          func_0x000107c60264(lStack_f0,&puStack_a0,uVar10,uVar11,lStack_e0,uVar9);
          puVar14 = puStack_d8;
          func_0x000107c5ffb8(lVar3,lVar4,uVar13,ppuVar8);
          goto code_r0x000107c61170;
        }
        uVar18 = puVar17[lVar4];
        lVar3 = lVar3 + 1;
      } while (uVar18 == 0);
    }
    else {
      lStack_a8 = 0;
      lVar4 = lStack_a8;
    }
    lStack_a8 = lVar4;
    uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
    uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
    uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar18 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) | lStack_a8 << 6;
    puVar14 = *(undefined **)(*(long *)(param_1 + 0x38) + uVar18 * 8);
    func_0x000107c61434(*(undefined8 *)(*(long *)(param_1 + 0x30) + uVar18 * 0x10 + 8));
    func_0x000107c61174(puVar14);
    puVar6 = puStack_d8;
    func_0x000107c60f38(puStack_d8);
    func_0x000107c61434(param_1);
    func_0x000107c61174(puVar6);
    func_0x000107c6157c(puVar5);
    func_0x000107c6157c(puVar7);
    puVar1 = puStack_d0;
    func_0x000107c6157c(puStack_d0);
    FUN_102198c5c(puVar14,uStack_b8,lStack_b0,puVar6,puVar5,puVar7,param_1,puVar1);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar14);
  return;
}



/* Entry: 102196ffc; end: 1021970e3;  */

void FUN_102196ffc(ulong param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,1,0);
  uVar1 = *(long *)(param_3 + 0x10) + 1;
  if (!SCARRY8(*(long *)(param_3 + 0x10),1)) {
    *(ulong *)(param_3 + 0x10) = uVar1;
    dVar5 = 1.0;
    if ((param_1 & 1) == 0) {
      dVar5 = 0.0;
    }
    func_0x000107c61428(param_4 + 0x10,auStack_90,1,0);
    dVar5 = dVar5 + *(double *)(param_4 + 0x10);
    *(double *)(param_4 + 0x10) = dVar5;
    dVar4 = (double)*(ulong *)(param_5 + 0x10);
    bVar3 = true;
    if ((uVar1 == *(ulong *)(param_5 + 0x10)) && (bVar3 = false, !NAN(dVar5) && !NAN(dVar4))) {
      bVar3 = dVar5 == dVar4;
    }
    if (!bVar3) {
      func_0x000107c61428(param_6 + 0x10,auStack_a8,1,0);
      *(undefined8 *)(param_6 + 0x10) = 2;
    }
    func_0x000107c60f3c(param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021970e4);
  (*pcVar2)();
}



/* Entry: 1021970e4; end: 1021971c7;  */

void FUN_1021970e4(long param_1,code *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  if (*(int *)(param_1 + 0x10) == 0) {
    (*param_2)(0,0);
  }
  else {
    func_0x000107c61428(param_1 + 0x10,auStack_70,0,0);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar2 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010da65f30);
    func_0x000107c466bc(puVar1);
    func_0x000107c61170(uVar2);
    (*param_2)(uVar3,puVar1);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1021971c8; end: 102197247;  */

void FUN_1021971c8(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    func_0x0001021994cc(0,0x112d55c08,&PTR_PTR_1126b47a0);
    func_0x000107c5f9e8(param_2,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102197248; end: 102197583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102197248(long param_1,undefined *param_2,long param_3,code *param_4,undefined *param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  uVar7 = 0;
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    (*param_4)();
    return;
  }
  if (param_2 == (undefined *)0x0) {
LAB_10219732c:
    puVar4 = &UNK_1104d88b0;
    func_0x000107c613fc(&UNK_1104d88b0,0x20,7);
    *(code **)(puVar4 + 0x10) = param_4;
    *(undefined **)(puVar4 + 0x18) = param_5;
    if (param_1 == 0) {
      func_0x000107c6157c(param_5);
    }
    else {
      func_0x000107c6157c(param_5);
      func_0x000107c4cb04();
      func_0x000107c61180();
      if (param_1 != 0) {
        puVar5 = &UNK_1104d88d8;
        func_0x000107c613fc(&UNK_1104d88d8,0x20,7);
        *(undefined8 *)(puVar5 + 0x10) = 0x102199540;
        *(undefined **)(puVar5 + 0x18) = puVar4;
        func_0x000107c6157c(puVar4);
        lVar6 = param_1;
        func_0x000107c40808();
        if (lVar6 == *(long *)(param_8 + 0x10)) {
          uVar7 = *(ulong *)(param_3 + _DAT_112e5e9c0);
          func_0x000108060ae0();
          if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102197580);
            (*pcVar1)();
          }
          if ((uVar7 & 0x7fffffffffffffff) >> 0x3e != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102197584);
            (*pcVar1)();
          }
          lVar6 = param_1;
          FUN_1021975fc(param_1,param_8);
          puVar8 = PTR_PTR_1126dede8;
          func_0x000107c61168(PTR_PTR_1126dede8);
          func_0x000107c43be4();
          func_0x000107c61180();
          uVar2 = param_6;
          func_0x000107c5fadc(param_6,param_7);
          uVar3 = 0;
          func_0x0001021994cc(0,0x112e5ea10,&PTR_PTR_1126b4c20);
          lVar9 = lVar6;
          func_0x000107c5fc48(lVar6,uVar3);
          func_0x000107c6142c(lVar6);
          puVar10 = &UNK_1104d8900;
          func_0x000107c613fc(&UNK_1104d8900,0x30,7);
          *(undefined8 *)(puVar10 + 0x10) = 0x102199404;
          *(undefined **)(puVar10 + 0x18) = puVar5;
          *(undefined8 *)(puVar10 + 0x20) = param_6;
          *(undefined8 *)(puVar10 + 0x28) = param_7;
          uStack_88 = 0x102199424;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          pcStack_98 = FUN_102197b10;
          puStack_90 = &UNK_1104d8918;
          ppuVar11 = &puStack_a8;
          puStack_80 = puVar10;
          func_0x000107c60bc4(ppuVar11);
          puVar10 = puStack_80;
          func_0x000107c6157c(puVar5);
          func_0x000107c61434(param_7);
          func_0x000107c61574(puVar10);
          func_0x000107c4e1e8(0x3ff0000000000000,puVar8);
          func_0x000107c61170(param_1);
          func_0x000107c61574(puVar5);
          func_0x000107c61574(puVar4);
          func_0x000107c61170(param_3);
          func_0x000107c60bd0(ppuVar11);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(uVar2);
          goto LAB_102197558;
        }
        (*param_4)(0);
        func_0x000107c61170(param_1);
        func_0x000107c61574(puVar5);
        goto LAB_102197550;
      }
    }
    (*param_4)(1);
  }
  else {
    puStack_a8 = param_2;
    func_0x000107c614b0(param_2);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    uVar3 = 0;
    func_0x0001021994cc(0,0x112d46e68,&PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c6147c(&uStack_b0,&puStack_a8,uVar2,uVar3,6);
    if ((uVar7 & 1) == 0) goto LAB_10219732c;
    func_0x000107c6157c(param_5);
    (*param_4)(0);
    func_0x000107c61170(uStack_b0);
    puVar4 = param_5;
  }
LAB_102197550:
  func_0x000107c61574(puVar4);
  lVar9 = param_3;
LAB_102197558:
  func_0x000107c61170(lVar9);
  return;
}



/* Entry: 102197584; end: 1021975fb;  */

/* WARNING: Possible PIC construction at 0x0001021975e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021975e4) */

void FUN_102197584(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1021975fc; end: 102197b0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021975fc(long param_1,long param_2,long param_3)

{
  ulong *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  long extraout_x8;
  ulong uVar18;
  long unaff_x20;
  long lVar19;
  ulong uVar20;
  float fVar21;
  ulong auStack_160 [2];
  undefined *puStack_150;
  ulong uStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_118;
  long alStack_110 [3];
  long lStack_f8;
  undefined1 auStack_f0 [32];
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lVar5 = 0x112e5ea18;
  func_0x0001000285a8(0x112e5ea18,&UNK_10da65f98);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)auStack_160 - extraout_x8;
  lVar6 = param_1;
  func_0x000107c40808();
  lStack_118 = lVar6 - param_3;
  if (SBORROW8(lVar6,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102197b0c);
    (*pcVar3)();
  }
  func_0x000107c61174(param_1);
  func_0x000107c600f4(lVar19);
  func_0x000107c61170(param_1);
  iVar2 = *(int *)(lVar5 + 0x24);
  *(undefined8 *)(lVar19 + iVar2) = 0;
  uStack_120 = *(ulong *)(unaff_x20 + _DAT_112e5e9d0);
  uStack_128 = ((ulong *)(unaff_x20 + _DAT_112e5e9d0))[1];
  uVar7 = 0;
  func_0x000107c5ed50(0);
  uVar8 = 0x112d38ec0;
  func_0x00010219944c(0x112d38ec0,PTR___s10Foundation25NSFastEnumerationIteratorVMa_110350880,
                      PTR___s10Foundation25NSFastEnumerationIteratorVStAAMc_110350890);
  uVar20 = 0;
  lStack_130 = param_2 + 0x20;
  puStack_140 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_138 = param_2;
  do {
    while( true ) {
      while( true ) {
        func_0x000107c601c0(alStack_110,uVar7,uVar8);
        if (lStack_f8 == 0) {
          func_0x00010219948c(alStack_110,0x112d387f8,&UNK_10d902650);
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          lStack_b0 = 0;
        }
        else {
          func_0x000100102924(alStack_110,auStack_f0);
          uStack_d0 = uVar20;
          func_0x000100102924(auStack_f0,&uStack_c8);
          bVar4 = SCARRY8(uVar20,1);
          uVar20 = uVar20 + 1;
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102197b00);
            (*pcVar3)();
          }
          *(ulong *)(lVar19 + iVar2) = uVar20;
        }
        uVar14 = uStack_d0;
        uStack_98 = uStack_c8;
        uStack_a0 = uStack_d0;
        uStack_88 = uStack_b8;
        uStack_90 = uStack_c0;
        lStack_80 = lStack_b0;
        if (lStack_b0 == 0) {
          func_0x00010219948c(lVar19,0x112e5ea18,&UNK_10da65f98);
          return puStack_140;
        }
        uVar18 = uStack_d0;
        func_0x000100102924(&uStack_98,&uStack_d0);
        fVar21 = (float)uVar18;
        func_0x0001000bb420(&uStack_d0,auStack_f0);
        uVar9 = 0;
        func_0x0001021994cc(0,0x112e5ea20,&PTR_PTR_1126aa050);
        plVar10 = alStack_110;
        func_0x000107c6147c(plVar10,auStack_f0,PTR___sypN_11034f1a8 + 8,uVar9,6);
        lVar5 = alStack_110[0];
        if ((int)plVar10 != 0) break;
        func_0x000100183ab8(&uStack_d0);
      }
      func_0x000107c5b5ac(alStack_110[0]);
      if (fVar21 != 0.0 || lStack_118 <= (long)uVar14) break;
LAB_1021978d0:
      func_0x000100183ab8(&uStack_d0);
      func_0x000107c61170(lVar5);
    }
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102197b04);
      (*pcVar3)();
    }
    if (*(ulong *)(param_2 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102197b08);
      (*pcVar3)();
    }
    puVar1 = (ulong *)(lStack_130 + uVar14 * 0x10);
    uVar14 = *puVar1;
    uVar18 = puVar1[1];
    if (((uVar14 == uStack_120) && (uVar18 == uStack_128)) ||
       (uVar11 = uVar14, uVar17 = uVar18, func_0x000107c605b8(uVar14,uVar18,uStack_120,uStack_128,0)
       , (uVar11 & 1) != 0)) goto LAB_1021978d0;
    lVar6 = lVar5;
    func_0x000107c4ce20();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102197b10);
      (*pcVar3)();
    }
    lVar12 = lVar6;
    func_0x000107c41214();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    param_2 = lStack_138;
    if (lVar12 == 0) goto LAB_1021978d0;
    lVar6 = lVar12;
    func_0x000107c5ee30();
    uStack_148 = uVar17;
    func_0x000107c61170(lVar12);
    func_0x000107c61434(uVar18);
    func_0x000107c5b5ac(lVar5);
    puVar13 = PTR_PTR_1126b4c20;
    func_0x000107c610f8();
    uVar11 = uStack_148;
    puStack_150 = puVar13;
    func_0x00010006c00c(lVar6,uStack_148);
    func_0x000107c5fadc(uVar14,uVar18);
    func_0x000107c6142c(uVar18);
    lVar12 = lVar6;
    func_0x000107c5ee20(lVar6,uVar11);
    puVar16 = puStack_150;
    func_0x000107c49238((double)fVar21);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(lVar12);
    auStack_160[1] = lVar6;
    func_0x00010006c090(lVar6,uStack_148);
    func_0x000107c61174();
    puVar13 = puStack_140;
    puVar15 = puStack_140;
    puStack_150 = puVar16;
    func_0x000107c61550();
    if ((((int)puVar15 == 0) || ((long)puVar13 < 0)) ||
       (param_2 = lStack_138, ((ulong)puVar13 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar13 >> 0x3e == 0) {
        puVar16 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar16 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar13) {
          puVar16 = puVar13;
        }
        func_0x000107c60480(puVar16);
      }
      param_2 = lStack_138;
      puVar15 = (undefined *)0x0;
      FUN_102197e5c(0,puVar16 + 1,1,puVar13);
      puVar13 = puVar15;
    }
    uVar18 = (ulong)puVar13 & 0xffffffffffffff8;
    uVar14 = *(ulong *)(uVar18 + 0x10);
    puStack_140 = puVar13;
    if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar14) {
      puVar16 = (undefined *)(ulong)(1 < *(ulong *)(uVar18 + 0x18));
      FUN_102197e5c(puVar16,uVar14 + 1,1,puVar13);
      uVar18 = (ulong)puVar16 & 0xffffffffffffff8;
      puStack_140 = puVar16;
    }
    puVar13 = puStack_150;
    *(ulong *)(uVar18 + 0x10) = uVar14 + 1;
    *(undefined **)(uVar18 + uVar14 * 8 + 0x20) = puStack_150;
    func_0x000107c61170(lVar5);
    func_0x00010006c090(auStack_160[1],uStack_148);
    func_0x000107c61170(puVar13);
    func_0x000100183ab8(&uStack_d0);
  } while( true );
}



/* Entry: 102197b10; end: 102197b4b;  */

void FUN_102197b10(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102197b4c; end: 102197bab; -[_TtC38SCCommunitiesMemberRankingJobProcessor36CommunitiesMemberRankingJobProcessor init] */

void FUN_102197b4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommunitiesMemberRankingJobProcessor.CommunitiesMemberRankingJobProcessor",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102197b78);
  (*pcVar1)();
}



/* Entry: 102197bac; end: 102197c27; -[_TtC38SCCommunitiesMemberRankingJobProcessor36CommunitiesMemberRankingJobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102197bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102197bf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102197bcc) */
/* WARNING: Removing unreachable block (ram,0x000102197bfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102197bac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5e9b0));
  return;
}



/* Entry: 102197c28; end: 102197e5b;  */

ulong FUN_102197c28(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102197d0c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102197d10);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x0001021994cc(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102197de4);
  (*pcVar2)();
}



/* Entry: 102197e5c; end: 102197f83;  */

ulong FUN_102197e5c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102197f84);
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
  FUN_102197f84(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102197f80);
      (*pcVar1)();
    }
    FUN_102198024(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102197f84; end: 102198023;  */

undefined * FUN_102197f84(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112e5ea10;
    func_0x000102197de4(0x112e5ea10,&PTR_PTR_1126b4c20,0x112e5ea28,&UNK_10da65fa8);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102198024; end: 10219813b;  */

long FUN_102198024(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102198138);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10219813c);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x0001021994cc(0,0x112e5ea10,&PTR_PTR_1126b4c20);
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
      func_0x0001021994cc(0,0x112e5ea10,&PTR_PTR_1126b4c20);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102198134);
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



/* Entry: 10219813c; end: 1021981d3;  */

void FUN_10219813c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102198304();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1021981d4; end: 102198303;  */

undefined * FUN_1021981d4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102198304);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d64d38;
    func_0x0001000285a8(0x112d64d38,&UNK_10d929e40);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d35ff8;
    func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102198304; end: 10219844f;  */

undefined *
FUN_102198304(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102198450);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_5;
    func_0x000102197de4(param_5,param_6,param_7,param_8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x0001021994cc(0,param_5,param_6);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102198450; end: 102198b57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102198450(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined *puVar26;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &UNK_1104d8680;
  func_0x000107c613fc(&UNK_1104d8680,0x18,7);
  *(long *)(puVar3 + 0x10) = param_2;
  uVar15 = *(ulong *)(param_1 + _DAT_112e5e9b8);
  func_0x000107c60bc4(param_2);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar15 != 0) {
    lVar4 = *(long *)(param_1 + _DAT_112e5e9b0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      uVar22 = uVar15;
      func_0x000107c3db28();
      func_0x000107c61180();
      puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar22 != 0) {
        uVar5 = 0;
        func_0x0001021994cc(0,0x112d55c08,&PTR_PTR_1126b47a0);
        uVar23 = uVar22;
        func_0x000107c5fc54(uVar22,uVar5);
        func_0x000107c61170(uVar22);
        uVar22 = uVar23 & 0xffffffffffffff8;
        if (uVar23 >> 0x3e == 0) {
          uVar25 = *(ulong *)(uVar22 + 0x10);
        }
        else {
          uVar25 = uVar22;
          if (0x7fffffffffffffff < uVar23) {
            uVar25 = uVar23;
          }
          func_0x000107c60480();
        }
        puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar25 != 0) {
          uVar18 = 0;
          do {
            while( true ) {
              if ((uVar23 & 0xc000000000000001) == 0) {
                if (*(ulong *)(uVar22 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10219883c);
                  (*pcVar2)();
                }
                uVar6 = *(ulong *)(uVar23 + uVar18 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar6 = uVar18;
                FUN_102197c28(uVar18,uVar23,&PTR_PTR_1126b47a0,0x112d55c08);
              }
              uVar1 = uVar18 + 1;
              if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102198838);
                (*pcVar2)();
              }
              uVar7 = uVar6;
              func_0x000107c5d0f0();
              if ((uVar7 == 7) && (uVar7 = uVar6, func_0x000107c4103c(), (uVar7 & 1) != 0)) break;
              func_0x000107c61170(uVar6);
              uVar18 = uVar18 + 1;
              if (uVar1 == uVar25) goto LAB_102198714;
            }
            puVar26 = puVar8;
            func_0x000107c61558();
            puStack_90 = puVar8;
            if (((ulong)puVar26 & 1) == 0) {
              FUN_10219813c(0,*(long *)(puVar8 + 0x10) + 1,1);
            }
            uVar18 = *(ulong *)(puStack_90 + 0x10);
            if (*(ulong *)(puStack_90 + 0x18) >> 1 <= uVar18) {
              FUN_10219813c(1 < *(ulong *)(puStack_90 + 0x18),uVar18 + 1,1);
            }
            *(ulong *)(puStack_90 + 0x10) = uVar18 + 1;
            *(ulong *)(puStack_90 + uVar18 * 8 + 0x20) = uVar6;
            puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
            uVar18 = uVar1;
            puVar8 = puStack_90;
          } while (uVar1 != uVar25);
        }
LAB_102198714:
        func_0x000107c6142c(uVar23);
        if (((long)puVar8 < 0) || (((ulong)puVar8 >> 0x3e & 1) != 0)) {
          puVar24 = puVar8;
          func_0x000107c60480();
        }
        else {
          puVar24 = *(undefined **)(puVar8 + 0x10);
        }
        if (puVar24 == (undefined *)0x0) {
          func_0x000107c61574(puVar8);
          puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puVar12 = (undefined *)((ulong)puVar24 & ((long)puVar24 >> 0x3f ^ 0xffffffffffffffffU));
          puStack_90 = puVar26;
          func_0x000100ce7740(0,puVar12,0);
          if ((long)puVar24 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102198b58);
            (*pcVar2)();
          }
          puVar26 = (undefined *)0x0;
          do {
            puVar19 = puStack_90;
            if (((ulong)puVar8 & 0xc000000000000001) == 0) {
              puVar20 = *(undefined **)(puVar8 + (long)puVar26 * 8 + 0x20);
              func_0x000107c61174();
              puVar13 = puVar12;
            }
            else {
              puVar20 = puVar26;
              puVar13 = puVar8;
              FUN_102197c28(puVar26,puVar8,&PTR_PTR_1126b47a0,0x112d55c08);
            }
            puVar9 = puVar20;
            func_0x000107c4f638();
            func_0x000107c61180();
            if (puVar9 == (undefined *)0x0) {
              func_0x000107c61170(puVar20);
              puVar16 = (undefined *)0x0;
              puVar20 = (undefined *)0x0;
              puVar12 = puVar13;
            }
            else {
              puVar16 = puVar9;
              func_0x000107c5faec();
              puVar12 = puVar13;
              func_0x000107c61170(puVar9);
              func_0x000107c61170(puVar20);
              puVar20 = puVar13;
            }
            uVar22 = *(ulong *)(puVar19 + 0x10);
            puVar13 = (undefined *)(uVar22 + 1);
            puStack_90 = puVar19;
            if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar22) {
              puVar12 = puVar13;
              func_0x000100ce7740(1 < *(ulong *)(puVar19 + 0x18),puVar13,1);
            }
            puVar19 = puStack_90;
            puVar26 = puVar26 + 1;
            *(undefined **)(puStack_90 + 0x10) = puVar13;
            *(undefined **)(puStack_90 + uVar22 * 0x10 + 0x20) = puVar16;
            *(undefined **)(puStack_90 + uVar22 * 0x10 + 0x28) = puVar20;
          } while (puVar24 != puVar26);
          func_0x000107c61574(puVar8);
        }
        uVar22 = 0;
        uVar23 = *(ulong *)(puVar19 + 0x10);
        puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          lVar10 = uVar22 * 0x10 + 0x28;
          do {
            lVar14 = lVar10;
            if (uVar23 == uVar22) {
              func_0x000107c6142c(puVar19);
              goto LAB_10219893c;
            }
            if (*(ulong *)(puVar19 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102198b54);
              (*pcVar2)();
            }
            uVar22 = uVar22 + 1;
            lVar21 = *(long *)(puVar19 + lVar14);
            lVar10 = lVar14 + 0x10;
          } while (lVar21 == 0);
          uVar5 = *(undefined8 *)(puVar19 + lVar14 + -8);
          func_0x000107c61434(lVar21);
          puVar8 = puVar26;
          func_0x000107c61558();
          puVar24 = puVar26;
          if (((ulong)puVar8 & 1) == 0) {
            puVar24 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar26 + 0x10) + 1,1,puVar26);
          }
          uVar25 = *(ulong *)(puVar24 + 0x10);
          puVar26 = puVar24;
          if (*(ulong *)(puVar24 + 0x18) >> 1 <= uVar25) {
            puVar26 = (undefined *)(ulong)(1 < *(ulong *)(puVar24 + 0x18));
            func_0x0001000d182c(puVar26,uVar25 + 1,1,puVar24);
          }
          *(ulong *)(puVar26 + 0x10) = uVar25 + 1;
          *(undefined8 *)(puVar26 + uVar25 * 0x10 + 0x20) = uVar5;
          *(long *)(puVar26 + uVar25 * 0x10 + 0x28) = lVar21;
        } while( true );
      }
LAB_10219893c:
      uVar17 = *(undefined8 *)(param_1 + _DAT_112e5e9c0);
      uVar5 = uVar17;
      func_0x000108060a50(uVar17,*(long *)(puVar26 + 0x10) != 0);
      if ((int)uVar5 == 0) {
        func_0x000107c6142c(puVar26);
        (**(code **)(param_2 + 0x10))(param_2,0,0);
        func_0x000107c61574(puVar3);
        func_0x000107c615e8(uVar15);
LAB_102198a94:
        func_0x000107c615e8(lVar4);
        return 0;
      }
      func_0x000108060acc();
      lVar10 = lVar4;
      func_0x000107c509b4();
      func_0x000107c61180();
      if (lVar10 != 0) {
        puVar8 = &UNK_1104d8658;
        func_0x000107c613fc(&UNK_1104d8658,0x18,7);
        func_0x000107c61614(puVar8 + 0x10,param_1);
        puVar24 = &UNK_1104d86a8;
        func_0x000107c613fc(&UNK_1104d86a8,0x40,7);
        *(code **)(puVar24 + 0x10) = FUN_102198b58;
        *(undefined **)(puVar24 + 0x18) = puVar3;
        *(undefined **)(puVar24 + 0x20) = puVar26;
        *(undefined8 *)(puVar24 + 0x28) = uVar17;
        *(undefined **)(puVar24 + 0x30) = puVar8;
        *(ulong *)(puVar24 + 0x38) = uVar15;
        uStack_70 = 0x102199544;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_100f1c768;
        puStack_78 = &UNK_1104d86c0;
        ppuVar11 = &puStack_90;
        puStack_68 = puVar24;
        func_0x000107c60bc4(ppuVar11);
        puVar26 = puStack_68;
        func_0x000107c6157c(puVar3);
        func_0x000107c615f0(uVar15);
        func_0x000107c61574(puVar26);
        func_0x000107c440d8(lVar10);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c61574(puVar3);
        func_0x000107c615e8(uVar15);
        func_0x000107c615e8(lVar4);
        lVar4 = lVar10;
        goto LAB_102198a94;
      }
      func_0x000107c6142c(puVar26);
      puVar26 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      uVar5 = 0xd000000000000024;
      func_0x000107c5fadc(0xd000000000000024,0x800000010da65f30);
      func_0x000107c466bc(puVar26);
      func_0x000107c61170(uVar5);
      puVar8 = puVar26;
      func_0x000107c5ed2c(puVar26);
      (**(code **)(param_2 + 0x10))(param_2,1,puVar8);
      func_0x000107c61574(puVar3);
      func_0x000107c615e8(uVar15);
      func_0x000107c615e8(lVar4);
      goto LAB_1021986f0;
    }
    func_0x000107c615e8(uVar15);
  }
  puVar26 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar5 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010da65f30);
  func_0x000107c466bc(puVar26);
  func_0x000107c61170(uVar5);
  puVar8 = puVar26;
  func_0x000107c5ed2c(puVar26);
  (**(code **)(param_2 + 0x10))(param_2,1,puVar8);
  func_0x000107c61574(puVar3);
LAB_1021986f0:
  func_0x000107c61170(puVar26);
  func_0x000107c61170(puVar8);
  return 0;
}



/* Entry: 102198b58; end: 102198b5f;  */

void FUN_102198b58(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102198b60; end: 102198b9b;  */

void FUN_102198b60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102198b9c; end: 102198bbb;  */

/* WARNING: Possible PIC construction at 0x000102196528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021965a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010219652c) */
/* WARNING: Removing unreachable block (ram,0x0001021965a4) */

void FUN_102198b9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  ppuVar8 = &puStack_90;
  if (param_1 == 0) {
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    puVar10 = (undefined *)0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010da65f30);
    func_0x000107c466bc(puVar9);
  }
  else {
    puVar10 = PTR_PTR_1126dede0;
    func_0x000107c61168(PTR_PTR_1126dede0);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar10);
    func_0x000107c61180();
    func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
    puVar9 = &UNK_1104d86f8;
    func_0x000107c613fc(&UNK_1104d86f8,0x38,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar3;
    *(undefined8 *)(puVar9 + 0x18) = uVar1;
    *(undefined8 *)(puVar9 + 0x20) = uVar4;
    *(undefined8 *)(puVar9 + 0x28) = uVar6;
    *(long *)(puVar9 + 0x30) = param_1;
    puVar7 = &UNK_1104d8720;
    func_0x000107c613fc(&UNK_1104d8720,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x102198bac;
    *(undefined **)(puVar7 + 0x18) = puVar9;
    pcStack_70 = FUN_102198bbc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1011d1310;
    puStack_78 = &UNK_1104d8738;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar9 = puStack_68;
    func_0x000107c615f0(param_1);
    func_0x000107c6157c(uVar3);
    func_0x000107c6157c(uVar4);
    func_0x000107c615f0(uVar6);
    func_0x000107c61574(puVar9);
    func_0x000107c44308((double)lVar5,puVar10);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 102198bbc; end: 102198bf7;  */

void FUN_102198bbc(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  func_0x0001021968fc(param_1,0x10219953c);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 102198bf8; end: 102198c17;  */

/* WARNING: Possible PIC construction at 0x000102196d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102196d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102196f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102196df0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102196f88) */
/* WARNING: Removing unreachable block (ram,0x000102196d8c) */
/* WARNING: Removing unreachable block (ram,0x000102196da0) */
/* WARNING: Removing unreachable block (ram,0x000102196d64) */
/* WARNING: Removing unreachable block (ram,0x000102196df4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102198bf8(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  lStack_b0 = *(long *)(unaff_x20 + 0x20);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = 0;
  func_0x000107c5f7fc();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = (long)&uStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    puVar14 = (undefined *)0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010da65f30);
    func_0x000107c466bc(puVar7);
  }
  else {
    puVar14 = &UNK_1104d87c0;
    puVar7 = puVar14;
    uStack_118 = uVar9;
    uStack_110 = uVar10;
    lStack_108 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    lStack_f8 = lVar4;
    lStack_f0 = lVar16;
    lStack_e8 = lVar15;
    lStack_e0 = lVar3;
    func_0x000107c613fc(&UNK_1104d87c0,0x18,7);
    *(undefined8 *)(puVar7 + 0x10) = 0;
    puVar5 = puVar14;
    puStack_c0 = puVar7;
    func_0x000107c613fc(&UNK_1104d87c0,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    puStack_c8 = puVar5;
    func_0x000107c613fc(&UNK_1104d87c0,0x18,7);
    *(undefined8 *)(puVar14 + 0x10) = 0;
    puStack_d0 = puVar14;
    func_0x000107c60f34();
    puVar17 = (ulong *)(param_1 + 0x40);
    uStack_120 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar18 = 0xffffffffffffffff;
    if (-uStack_120 < 0x40) {
      uVar18 = ~(-1L << (-uStack_120 & 0x3f));
    }
    uVar18 = uVar18 & *puVar17;
    uVar12 = 0x3f - uStack_120;
    puStack_d8 = puVar14;
    func_0x000107c61434(param_1);
    puVar5 = puStack_c0;
    puVar7 = puStack_c8;
    lVar3 = 0;
    if (uVar18 == 0) {
      do {
        lVar4 = lVar3 + 1;
        if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102196ffc);
          (*pcVar2)();
        }
        if ((long)(uVar12 >> 6) <= lVar4) {
          func_0x000102198c04(param_1,puVar17,~uStack_120,0,0);
          uVar13 = *(undefined8 *)(lStack_b0 + _DAT_112e5e9d8);
          puVar14 = &UNK_1104d87e8;
          func_0x000107c613fc(&UNK_1104d87e8,0x28,7);
          puVar7 = puStack_d0;
          uVar9 = uStack_110;
          *(undefined **)(puVar14 + 0x10) = puStack_d0;
          *(undefined8 *)(puVar14 + 0x18) = uStack_118;
          *(undefined8 *)(puVar14 + 0x20) = uStack_110;
          uStack_78 = 0x102198c0c;
          puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_90 = 0x42000000;
          puStack_88 = &UNK_1000f6b44;
          puStack_80 = &UNK_1104d8800;
          ppuVar8 = &puStack_98;
          puStack_70 = puVar14;
          func_0x000107c60bc4(ppuVar8);
          func_0x000107c6157c(puVar7);
          func_0x000107c6157c(uVar9);
          lVar3 = lStack_108;
          func_0x000107c5f808(lStack_108);
          puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
          uVar9 = 0x112d4af88;
          func_0x00010219944c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                              PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
          uVar10 = 0x112d4af90;
          func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
          uVar11 = 0x112d4af98;
          FUN_102198c18(0x112d4af98,0x112d4af90,&UNK_10d914100);
          lVar4 = lStack_f0;
          func_0x000107c60264(lStack_f0,&puStack_a0,uVar10,uVar11,lStack_e0,uVar9);
          puVar14 = puStack_d8;
          func_0x000107c5ffb8(lVar3,lVar4,uVar13,ppuVar8);
          goto code_r0x000107c61170;
        }
        uVar18 = puVar17[lVar4];
        lVar3 = lVar3 + 1;
      } while (uVar18 == 0);
    }
    else {
      lStack_a8 = 0;
      lVar4 = lStack_a8;
    }
    lStack_a8 = lVar4;
    uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
    uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
    uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar18 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) | lStack_a8 << 6;
    puVar14 = *(undefined **)(*(long *)(param_1 + 0x38) + uVar18 * 8);
    func_0x000107c61434(*(undefined8 *)(*(long *)(param_1 + 0x30) + uVar18 * 0x10 + 8));
    func_0x000107c61174(puVar14);
    puVar6 = puStack_d8;
    func_0x000107c60f38(puStack_d8);
    func_0x000107c61434(param_1);
    func_0x000107c61174(puVar6);
    func_0x000107c6157c(puVar5);
    func_0x000107c6157c(puVar7);
    puVar1 = puStack_d0;
    func_0x000107c6157c(puStack_d0);
    FUN_102198c5c(puVar14,uStack_b8,lStack_b0,puVar6,puVar5,puVar7,param_1,puVar1);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar14);
  return;
}



/* Entry: 102198c18; end: 102198c5b;  */

void FUN_102198c18(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSTsMc_11034dd08;
    func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102198c5c; end: 1021993c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102198c5c(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined *puVar28;
  undefined *puVar29;
  long lVar30;
  undefined8 uVar31;
  double dVar32;
  ulong uStack_d8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar5 = &UNK_1104d8838;
  uVar18 = 0x38;
  func_0x000107c613fc(&UNK_1104d8838,0x38,7);
  *(undefined8 *)(puVar5 + 0x10) = param_4;
  *(long *)(puVar5 + 0x18) = param_5;
  *(long *)(puVar5 + 0x20) = param_6;
  *(long *)(puVar5 + 0x28) = param_7;
  *(long *)(puVar5 + 0x30) = param_8;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c61434(param_7);
  func_0x000107c6157c(param_8);
  uVar6 = param_1;
  func_0x000107c42e6c();
  func_0x000107c61180();
  if (uVar6 != 0) {
    uVar7 = uVar6;
    func_0x000107c3e1bc();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    if (uVar7 != 0) {
      uVar6 = uVar7;
      func_0x000107c4e070();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      if (uVar6 != 0) {
        uVar7 = param_1;
        func_0x000107c4f638();
        func_0x000107c61180();
        if (uVar7 != 0) {
          uVar8 = uVar7;
          func_0x000107c5faec();
          func_0x000107c4e3a4();
          func_0x000107c61180();
          if (param_1 != 0) {
            uVar9 = 0;
            func_0x0001021994cc(0,0x112d55c10,&PTR_PTR_1126d8fc8);
            uVar26 = param_1;
            func_0x000107c5fc54();
            func_0x000107c61170(param_1);
            lVar10 = *(long *)(param_3 + _DAT_112e5e9c8);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar10 != 0) {
              if (uVar26 >> 0x3e == 0) {
                uVar27 = *(ulong *)((uVar26 & 0xffffffffffffff8) + 0x10);
              }
              else {
                uVar27 = uVar26 & 0xffffffffffffff8;
                if (0x7fffffffffffffff < uVar26) {
                  uVar27 = uVar26;
                }
                func_0x000107c60480();
              }
              uStack_d8 = uVar26 & 0xffffffffffffff8;
              puVar2 = (ulong *)(param_3 + _DAT_112e5e9d0);
              puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
              if (uVar27 != 0) {
                uVar23 = 0;
                do {
                  while( true ) {
                    if ((uVar26 & 0xc000000000000001) == 0) {
                      if (*(ulong *)(uStack_d8 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
                        pcVar4 = (code *)SoftwareBreakpoint(1,0x102199174);
                        (*pcVar4)();
                      }
                      uVar11 = *(ulong *)(uVar26 + uVar23 * 8 + 0x20);
                      func_0x000107c61174();
                      uVar19 = uVar9;
                    }
                    else {
                      uVar11 = uVar23;
                      uVar19 = uVar26;
                      FUN_102197c28(uVar23,uVar26,&PTR_PTR_1126d8fc8,0x112d55c10);
                    }
                    uVar1 = uVar23 + 1;
                    if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x102199170);
                      (*pcVar4)();
                    }
                    uVar12 = uVar11;
                    func_0x000107c5d984();
                    func_0x000107c61180();
                    uVar9 = uVar19;
                    if (uVar12 == 0) break;
                    uVar13 = uVar12;
                    func_0x000107c5faec();
                    uVar9 = uVar19;
                    func_0x000107c61170(uVar12);
                    if ((uVar13 == *puVar2) && (uVar19 == puVar2[1])) {
                      func_0x000107c61170(uVar11);
                      func_0x000107c6142c(uVar19);
                    }
                    else {
                      uVar9 = uVar19;
                      func_0x000107c605b8();
                      func_0x000107c6142c(uVar19);
                      if ((uVar13 & 1) == 0) break;
                      func_0x000107c61170(uVar11);
                    }
                    uVar23 = uVar23 + 1;
                    if (uVar1 == uVar27) goto LAB_102199044;
                  }
                  puVar28 = puVar15;
                  func_0x000107c61558();
                  puStack_c8 = puVar15;
                  if (((ulong)puVar28 & 1) == 0) {
                    uVar9 = *(long *)(puVar15 + 0x10) + 1;
                    func_0x000102198198(0,uVar9,1);
                  }
                  uVar19 = *(ulong *)(puStack_c8 + 0x10);
                  uVar23 = uVar19 + 1;
                  if (*(ulong *)(puStack_c8 + 0x18) >> 1 <= uVar19) {
                    uVar9 = uVar23;
                    func_0x000102198198(1 < *(ulong *)(puStack_c8 + 0x18),uVar23,1);
                  }
                  *(ulong *)(puStack_c8 + 0x10) = uVar23;
                  *(ulong *)(puStack_c8 + uVar19 * 8 + 0x20) = uVar11;
                  puVar15 = puStack_c8;
                  uVar23 = uVar1;
                } while (uVar1 != uVar27);
              }
LAB_102199044:
              func_0x000107c6142c(uVar26);
              if (((long)puVar15 < 0) || (((ulong)puVar15 >> 0x3e & 1) != 0)) {
                puVar28 = puVar15;
                func_0x000107c60480();
              }
              else {
                puVar28 = *(undefined **)(puVar15 + 0x10);
              }
              if (puVar28 == (undefined *)0x0) {
                func_0x000107c61574(puVar15);
                puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
              }
              else {
                puVar20 = (undefined *)
                          ((ulong)puVar28 & ((long)puVar28 >> 0x3f ^ 0xffffffffffffffffU));
                puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
                func_0x000100ce7740(0,puVar20,0);
                if ((long)puVar28 < 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1021993c4);
                  (*pcVar4)();
                }
                puVar29 = (undefined *)0x0;
                do {
                  puVar16 = puStack_c8;
                  if (((ulong)puVar15 & 0xc000000000000001) == 0) {
                    puVar25 = *(undefined **)(puVar15 + (long)puVar29 * 8 + 0x20);
                    func_0x000107c61174();
                    puVar21 = puVar20;
                  }
                  else {
                    puVar25 = puVar29;
                    puVar21 = puVar15;
                    FUN_102197c28(puVar29,puVar15,&PTR_PTR_1126d8fc8,0x112d55c10);
                  }
                  puVar14 = puVar25;
                  func_0x000107c5d984();
                  func_0x000107c61180();
                  if (puVar14 == (undefined *)0x0) {
                    func_0x000107c61170(puVar25);
                    puVar24 = (undefined *)0x0;
                    puVar25 = (undefined *)0x0;
                    puVar20 = puVar21;
                  }
                  else {
                    puVar24 = puVar14;
                    func_0x000107c5faec();
                    puVar20 = puVar21;
                    func_0x000107c61170(puVar14);
                    func_0x000107c61170(puVar25);
                    puVar25 = puVar21;
                  }
                  uVar9 = *(ulong *)(puVar16 + 0x10);
                  puVar21 = (undefined *)(uVar9 + 1);
                  puStack_c8 = puVar16;
                  if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar9) {
                    puVar20 = puVar21;
                    func_0x000100ce7740(1 < *(ulong *)(puVar16 + 0x18),puVar21,1);
                  }
                  puVar16 = puStack_c8;
                  puVar29 = puVar29 + 1;
                  *(undefined **)(puStack_c8 + 0x10) = puVar21;
                  *(undefined **)(puStack_c8 + uVar9 * 0x10 + 0x20) = puVar24;
                  *(undefined **)(puStack_c8 + uVar9 * 0x10 + 0x28) = puVar25;
                } while (puVar28 != puVar29);
                func_0x000107c61574(puVar15);
              }
              uVar9 = 0;
              uVar26 = *(ulong *)(puVar16 + 0x10);
              puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
              do {
                lVar3 = uVar9 * 0x10 + 0x28;
                do {
                  lVar22 = lVar3;
                  if (uVar26 == uVar9) {
                    func_0x000107c6142c(puVar16);
                    uVar9 = *puVar2;
                    func_0x000107c5fadc(uVar9,puVar2[1]);
                    puVar20 = puVar15;
                    func_0x000107c5fc48(puVar15,PTR___sSSN_11034da80);
                    puVar28 = &UNK_1104d8658;
                    func_0x000107c613fc(&UNK_1104d8658,0x18,7);
                    func_0x000107c61614(puVar28 + 0x10,param_3);
                    puVar16 = &UNK_1104d8860;
                    func_0x000107c613fc(&UNK_1104d8860,0x48,7);
                    *(undefined **)(puVar16 + 0x10) = puVar28;
                    *(code **)(puVar16 + 0x18) = FUN_1021993c4;
                    *(undefined **)(puVar16 + 0x20) = puVar5;
                    *(ulong *)(puVar16 + 0x28) = uVar8;
                    *(ulong *)(puVar16 + 0x30) = uVar18;
                    *(undefined **)(puVar16 + 0x38) = puVar15;
                    *(undefined8 *)(puVar16 + 0x40) = param_2;
                    pcStack_a8 = FUN_1021993d4;
                    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_c0 = 0x42000000;
                    pcStack_b8 = FUN_102197584;
                    puStack_b0 = &UNK_1104d8878;
                    ppuVar17 = &puStack_c8;
                    puStack_a0 = puVar16;
                    func_0x000107c60bc4(ppuVar17);
                    puVar15 = puStack_a0;
                    func_0x000107c6157c(puVar5);
                    func_0x000107c615f0(param_2);
                    func_0x000107c61574(puVar15);
                    func_0x000107c5b598(lVar10);
                    func_0x000107c60bd0(ppuVar17);
                    func_0x000107c61574(puVar5);
                    func_0x000107c615e8(lVar10);
                    func_0x000107c61170(uVar9);
                    func_0x000107c61170(uVar6);
                    func_0x000107c61170(uVar7);
                    func_0x000107c61170(puVar20);
                    return;
                  }
                  if (*(ulong *)(puVar16 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1021993c0);
                    (*pcVar4)();
                  }
                  uVar9 = uVar9 + 1;
                  lVar30 = *(long *)(puVar16 + lVar22);
                  lVar3 = lVar22 + 0x10;
                } while (lVar30 == 0);
                uVar31 = *(undefined8 *)(puVar16 + lVar22 + -8);
                func_0x000107c61434(lVar30);
                puVar28 = puVar15;
                func_0x000107c61558();
                puVar20 = puVar15;
                if (((ulong)puVar28 & 1) == 0) {
                  puVar20 = (undefined *)0x0;
                  func_0x0001000d182c(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
                }
                uVar27 = *(ulong *)(puVar20 + 0x10);
                puVar15 = puVar20;
                if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar27) {
                  puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
                  func_0x0001000d182c(puVar15,uVar27 + 1,1,puVar20);
                }
                *(ulong *)(puVar15 + 0x10) = uVar27 + 1;
                *(undefined8 *)(puVar15 + uVar27 * 0x10 + 0x20) = uVar31;
                *(long *)(puVar15 + uVar27 * 0x10 + 0x28) = lVar30;
              } while( true );
            }
            func_0x000107c6142c(uVar18);
            uVar18 = uVar26;
          }
          func_0x000107c6142c(uVar18);
          func_0x000107c61170(uVar7);
        }
        func_0x000107c61170(uVar6);
      }
    }
  }
  func_0x000107c61428(param_5 + 0x10,&puStack_c8,1,0);
  uVar6 = *(long *)(param_5 + 0x10) + 1;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(ulong *)(param_5 + 0x10) = uVar6;
    func_0x000107c61428(param_6 + 0x10,auStack_80,1,0);
    dVar32 = *(double *)(param_6 + 0x10);
    *(double *)(param_6 + 0x10) = dVar32 + 0.0;
    if ((uVar6 == *(ulong *)(param_7 + 0x10)) && (dVar32 != (double)*(ulong *)(param_7 + 0x10))) {
      func_0x000107c61428(param_8 + 0x10,auStack_98,1,0);
      *(undefined8 *)(param_8 + 0x10) = 2;
    }
    func_0x000107c60f3c(param_4);
    func_0x000107c61574(puVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102199178);
  (*pcVar4)();
}



/* Entry: 1021993c4; end: 1021993d3;  */

void FUN_1021993c4(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  double dVar10;
  double dVar11;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,1,0);
  uVar1 = *(long *)(lVar4 + 0x10) + 1;
  if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
    *(ulong *)(lVar4 + 0x10) = uVar1;
    dVar11 = 1.0;
    if ((param_1 & 1) == 0) {
      dVar11 = 0.0;
    }
    func_0x000107c61428(lVar3 + 0x10,auStack_90,1,0);
    dVar11 = dVar11 + *(double *)(lVar3 + 0x10);
    *(double *)(lVar3 + 0x10) = dVar11;
    uVar9 = *(ulong *)(lVar5 + 0x10);
    dVar10 = (double)uVar9;
    bVar7 = true;
    if ((uVar1 == uVar9) && (bVar7 = false, !NAN(dVar11) && !NAN(dVar10))) {
      bVar7 = dVar11 == dVar10;
    }
    if (!bVar7) {
      func_0x000107c61428(lVar8 + 0x10,auStack_a8,1,0);
      *(undefined8 *)(lVar8 + 0x10) = 2;
    }
    func_0x000107c60f3c(uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1021970e4);
  (*pcVar6)();
}



/* Entry: 1021993d4; end: 102199403;  */

void FUN_1021993d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_102197248(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 102199404; end: 10219950b;  */

void FUN_102199404(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10219950c; end: 102199547;  */

void FUN_10219950c(long param_1,long param_2)

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



/* Entry: 102199548; end: 102199567;  */

void FUN_102199548(void)

{
  func_0x000107c61168(&PTR_PTR_112822fb0);
  return;
}



/* Entry: 102199568; end: 1021995c7; -[_TtC38SCCommunitiesMemberRankingJobProcessor27SyncMemberRankingJobMetrics init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102199568(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112e5ea38) = 0;
  *(undefined8 *)(param_1 + _DAT_112e5ea40) = 0;
  *(undefined8 *)(param_1 + _DAT_112e5ea48) = 0;
  lVar1 = param_1;
  FUN_102199548();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021995c8; end: 1021995f7;  */

void FUN_1021995c8(void)

{
  FUN_102199548();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021995f8; end: 102199647; -[SCCommunitiesMemberRankingJobProcessorMetricsLogger init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021995f8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined **)(param_1 + _DAT_112e5ea50) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102199648; end: 102199683; -[SCCommunitiesMemberRankingJobProcessorMetricsLogger logTotalRankedMembersWithTotalRankedMemebers:] */

void FUN_102199648(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aa058;
  func_0x000107c610f8(PTR_PTR_1126aa058);
  func_0x000107c453e4();
  func_0x000108061f14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102199684; end: 1021996b7;  */

void FUN_102199684(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021996b8; end: 1021996c7; -[SCCommunitiesMemberRankingJobProcessorMetricsLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021996b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e5ea50));
  return;
}



/* Entry: 1021996c8; end: 10219971b;  */

void FUN_1021996c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128230c0);
  return;
}



/* Entry: 10219971c; end: 10219975b;  */

void FUN_10219971c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 10219975c; end: 102199777;  */

/* WARNING: Possible PIC construction at 0x000102199768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010219976c) */

void FUN_10219975c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102199778; end: 1021997c3;  */

void FUN_102199778(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021997c4; end: 102199857;  */

void FUN_1021997c4(undefined8 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112e5eb58,&UNK_10da66070);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar1 = FUN_102199858;
  func_0x0001000bdd8c();
  pcVar2 = pcVar1;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar1);
  func_0x0001001e0730(0);
  func_0x000107c610f8();
  func_0x000100442aa8();
  *param_1 = pcVar2;
  return;
}



/* Entry: 102199858; end: 10219985b;  */

void FUN_102199858(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x0001008a8d44(0);
    func_0x000107c613fc();
    uVar4 = uVar2;
    func_0x0001008a8d64(uVar2,lVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(lVar3);
    *param_1 = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a8d44);
  (*pcVar1)();
}



/* Entry: 10219985c; end: 1021998ff;  */

void FUN_10219985c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104d89e8;
  func_0x000107c613fc(&UNK_1104d89e8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_102199a54,puVar1);
  return;
}



/* Entry: 102199900; end: 102199a53;  */

void FUN_102199900(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1104d8a30;
  uVar4 = 0x30;
  func_0x000107c613fc(&UNK_1104d8a30,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  pcStack_60 = FUN_102199c3c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101443eec;
  puStack_68 = &UNK_1104d8a48;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000a0a8c(0);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e3a458;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e3a458);
  puVar2 = puVar1;
  func_0x000100a0dc54(puVar1,ppuVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 102199a54; end: 102199a6f;  */

void FUN_102199a54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar7 = &puStack_80;
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar6 = &UNK_1104d8a30;
  uVar8 = 0x30;
  func_0x000107c613fc(&UNK_1104d8a30,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  pcStack_60 = FUN_102199c3c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101443eec;
  puStack_68 = &UNK_1104d8a48;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  puVar6 = puStack_58;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x0001000a0a8c(0);
  ppuVar7 = &PTR____CFConstantStringClassReference_110e3a458;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e3a458);
  puVar6 = puVar5;
  func_0x000100a0dc54(puVar5,ppuVar7,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c61170(puVar5);
  *param_1 = puVar6;
  return;
}



/* Entry: 102199a70; end: 102199bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102199a70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  uVar1 = *(undefined8 *)(lStack_48 + _DAT_113091ad8);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_48);
  uVar2 = uVar1;
  func_0x000107c5d984(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x000107c5faec(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000100083b20(&uStack_50);
  uVar2 = uStack_50;
  func_0x000107c5dbd4(uStack_50);
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000100083b20(&uStack_58);
  uVar3 = uStack_58;
  func_0x000107c4ec80(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  func_0x000100083b20(&lStack_60);
  uVar4 = *(undefined8 *)(lStack_60 + _DAT_113083898);
  func_0x000107c61174(uVar4);
  func_0x000107c61170(lStack_60);
  puVar5 = PTR_PTR_1126aa060;
  func_0x000107c610f8(PTR_PTR_1126aa060);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c49288(puVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  return puVar5;
}



/* Entry: 102199c00; end: 102199c3b;  */

void FUN_102199c00(void)

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



/* Entry: 102199c3c; end: 102199c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102199c3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),uVar6,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(lStack_48 + _DAT_113091ad8);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_48);
  uVar2 = uVar1;
  func_0x000107c5d984(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x000107c5faec(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000100083b20(&uStack_50);
  uVar2 = uStack_50;
  func_0x000107c5dbd4(uStack_50);
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000100083b20(&uStack_58);
  uVar3 = uStack_58;
  func_0x000107c4ec80(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  func_0x000100083b20(&lStack_60);
  uVar4 = *(undefined8 *)(lStack_60 + _DAT_113083898);
  func_0x000107c61174(uVar4);
  func_0x000107c61170(lStack_60);
  puVar5 = PTR_PTR_1126aa060;
  func_0x000107c610f8(PTR_PTR_1126aa060);
  func_0x000107c5fadc(uVar1,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c49288(puVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  return puVar5;
}



/* Entry: 102199c64; end: 102199caf;  */

undefined8 FUN_102199c64(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001009062e0(param_1,param_2);
  return unaff_x20;
}



/* Entry: 102199cb0; end: 102199cf7;  */

void FUN_102199cb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102199cf8; end: 102199d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102199cf8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10219a0ec();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e5ed18) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102199d64; end: 102199dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102199d64(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5ed18) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102199dd0; end: 102199e2f; -[_TtC38TilePickerScopedFactoryServiceProvider26SCTilePickerScopedServices init] */

void FUN_102199dd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TilePickerScopedFactoryServiceProvider.SCTilePickerScopedServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102199dfc);
  (*pcVar1)();
}



/* Entry: 102199e30; end: 102199e3f; -[_TtC38TilePickerScopedFactoryServiceProvider26SCTilePickerScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102199e30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5ed18));
  return;
}



/* Entry: 102199e40; end: 102199eab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102199e40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104d8ce0;
  func_0x000107c613fc(&UNK_1104d8ce0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10219a184,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102199eac; end: 102199f47;  */

void FUN_102199eac(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104d8bf0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104d8bf0;
  return;
}



/* Entry: 102199f48; end: 102199f7f;  */

void FUN_102199f48(long *param_1)

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



/* Entry: 102199f80; end: 102199f87;  */

undefined8 FUN_102199f80(void)

{
  return 0x1b;
}



/* Entry: 102199f88; end: 10219a0bb;  */

void FUN_102199f88(undefined8 *param_1)

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
  puVar1 = &UNK_1104d8d08;
  func_0x000107c613fc(&UNK_1104d8d08,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10219a15c;
  func_0x00010058fa64(FUN_10219a15c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10219a0bc; end: 10219a0eb;  */

undefined ** FUN_10219a0bc(void)

{
  return &PTR_DAT_112fb4a48;
}



/* Entry: 10219a0ec; end: 10219a10b;  */

void FUN_10219a0ec(void)

{
  func_0x000107c61168(&PTR_PTR_112823178);
  return;
}



/* Entry: 10219a10c; end: 10219a15b;  */

undefined1  [16] FUN_10219a10c(void)

{
  return ZEXT816(0x1104d8c40);
}



/* Entry: 10219a15c; end: 10219a183;  */

void FUN_10219a15c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10219a184; end: 10219a187;  */

void FUN_10219a184(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10219a188; end: 10219a22f;  */

/* WARNING: Possible PIC construction at 0x00010219a218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010219a21c) */

void FUN_10219a188(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104d8d90;
  func_0x000107c613fc(&UNK_1104d8d90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112e5ed88;
  func_0x0001000285a8(0x112e5ed88,&UNK_10da66450);
  func_0x000107c613fc();
  pcVar3 = FUN_10219a5bc;
  func_0x0001000841fc(FUN_10219a5bc,puVar1,uVar2);
  func_0x000100084214(&UNK_10da66420,0x28,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10219a230; end: 10219a247;  */

/* WARNING: Possible PIC construction at 0x00010219a218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010219a21c) */

void FUN_10219a230(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1104d8d90;
  func_0x000107c613fc(&UNK_1104d8d90,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112e5ed88;
  func_0x0001000285a8(0x112e5ed88,&UNK_10da66450);
  func_0x000107c613fc();
  pcVar4 = FUN_10219a5bc;
  func_0x0001000841fc(FUN_10219a5bc,puVar2,uVar3);
  func_0x000100084214(&UNK_10da66420,0x28,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10219a248; end: 10219a5bb;  */

void FUN_10219a248(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  uVar11 = *param_2;
  func_0x0001000285a8(0x112e5ed90,&UNK_10da66458);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10219b4ec();
  func_0x000100082720("SCSnapEditorScopeExposerSubjectServiceProvider",0x2e,2);
  puVar3 = puVar2;
  FUN_10219b578();
  func_0x000100082720("SCSnapEditorScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102199f48;
  func_0x0001000823a8(FUN_102199f48,0);
  func_0x000100082720("SCTilePickerScopedServicesCleanupRelayServiceProvider",0x35,2);
  func_0x0001000285a8(0x112e5ed98,&UNK_10da66470);
  puVar5 = &UNK_1104d8db8;
  func_0x000107c613fc(&UNK_1104d8db8,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 **)(puVar5 + 0x28) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(puVar3);
  uVar11 = 0x10219a5c4;
  func_0x0001000823a8(0x10219a5c4,puVar5);
  func_0x000100082720("TilePickerFlowEntryPointWrapperServiceProvider",0x2e,2);
  puVar6 = puVar2;
  FUN_10219b3a0();
  func_0x000100082720("TilePickerScopeGraphBridgeServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112e5eda0,&UNK_10da66460);
  puVar5 = &UNK_1104d8de0;
  func_0x000107c613fc(&UNK_1104d8de0,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(code **)(puVar5 + 0x18) = pcVar4;
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  *(undefined8 **)(puVar5 + 0x28) = puVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(puVar6);
  pcVar7 = FUN_10219a60c;
  func_0x0001000823a8(FUN_10219a60c,puVar5);
  func_0x000100082720("SCTilePickerScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e5ed20,&UNK_10da66220);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x10219a618;
  func_0x0001000823a8(0x10219a618,pcVar7);
  func_0x000100082720("SCTilePickerScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112e5ed10,&UNK_10da66210);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10219a620;
  func_0x0001000823a8(0x10219a620,uVar8);
  func_0x000100082720("SCTilePickerScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1104d8e08;
  func_0x000107c613fc(&UNK_1104d8e08,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_10219a654;
  func_0x0001000823a8(FUN_10219a654,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCTilePickerScopeEntryPointProvider",0x23,2);
  *param_1 = pcVar10;
  return;
}



/* Entry: 10219a5bc; end: 10219a5cf;  */

void FUN_10219a5bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112e5ed90,&UNK_10da66458);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10219b4ec();
  func_0x000100082720("SCSnapEditorScopeExposerSubjectServiceProvider",0x2e,2);
  puVar3 = puVar2;
  FUN_10219b578();
  func_0x000100082720("SCSnapEditorScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102199f48;
  func_0x0001000823a8(FUN_102199f48,0);
  func_0x000100082720("SCTilePickerScopedServicesCleanupRelayServiceProvider",0x35,2);
  func_0x0001000285a8(0x112e5ed98,&UNK_10da66470);
  puVar5 = &UNK_1104d8db8;
  func_0x000107c613fc(&UNK_1104d8db8,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + 0x20) = uVar9;
  *(undefined8 **)(puVar5 + 0x28) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(puVar3);
  uVar6 = 0x10219a5c4;
  func_0x0001000823a8(0x10219a5c4,puVar5);
  func_0x000100082720("TilePickerFlowEntryPointWrapperServiceProvider",0x2e,2);
  puVar7 = puVar2;
  FUN_10219b3a0();
  func_0x000100082720("TilePickerScopeGraphBridgeServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112e5eda0,&UNK_10da66460);
  puVar5 = &UNK_1104d8de0;
  func_0x000107c613fc(&UNK_1104d8de0,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(code **)(puVar5 + 0x18) = pcVar4;
  *(undefined8 *)(puVar5 + 0x20) = uVar6;
  *(undefined8 **)(puVar5 + 0x28) = puVar7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(puVar7);
  pcVar8 = FUN_10219a60c;
  func_0x0001000823a8(FUN_10219a60c,puVar5);
  func_0x000100082720("SCTilePickerScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e5ed20,&UNK_10da66220);
  func_0x000107c6157c(pcVar8);
  uVar9 = 0x10219a618;
  func_0x0001000823a8(0x10219a618,pcVar8);
  func_0x000100082720("SCTilePickerScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112e5ed10,&UNK_10da66210);
  func_0x000107c6157c(uVar9);
  uVar11 = 0x10219a620;
  func_0x0001000823a8(0x10219a620,uVar9);
  func_0x000100082720("SCTilePickerScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1104d8e08;
  func_0x000107c613fc(&UNK_1104d8e08,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar11;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_10219a654;
  func_0x0001000823a8(FUN_10219a654,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCTilePickerScopeEntryPointProvider",0x23,2);
  *param_1 = pcVar10;
  return;
}



/* Entry: 10219a5d0; end: 10219a60b;  */

void FUN_10219a5d0(void)

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



/* Entry: 10219a60c; end: 10219a627;  */

void FUN_10219a60c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10219ab08(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCTilePickerScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10219a628; end: 10219a653;  */

void FUN_10219a628(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10219a654; end: 10219a65b;  */

void FUN_10219a654(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104d8bf0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104d8bf0;
  return;
}



/* Entry: 10219a65c; end: 10219a93b;  */

void FUN_10219a65c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_10219aa34();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_60;
  *(undefined8 *)(param_2 + 0x28) = uStack_68;
  func_0x0001000285a8(0x112e5eda8,&UNK_10daab350);
  func_0x000107c610f8();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c6157c(uStack_70);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(param_2 + 0x18) = puVar4;
  func_0x000103940060(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar4);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar3;
  func_0x00010393eb44();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  func_0x000107c61174();
  func_0x00010393ec2c();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uStack_70);
  func_0x000107c61170(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 10219a93c; end: 10219a977;  */

void FUN_10219a93c(void)

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



/* Entry: 10219a978; end: 10219a97f;  */

undefined8 FUN_10219a978(void)

{
  return 0x1b;
}



/* Entry: 10219a980; end: 10219aa03;  */

void FUN_10219a980(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10219aa74,param_2,FUN_10219aa78,param_2,0x10219aaa0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10219aa04; end: 10219aa33;  */

undefined ** FUN_10219aa04(void)

{
  return &PTR_DAT_112fb4a48;
}



/* Entry: 10219aa34; end: 10219aa53;  */

void FUN_10219aa34(void)

{
  func_0x000107c61168(&PTR_PTR_112e5ee18);
  return;
}



/* Entry: 10219aa54; end: 10219aa77;  */

undefined1  [16] FUN_10219aa54(void)

{
  return ZEXT816(0x1104d8e60);
}



/* Entry: 10219aa78; end: 10219aacb;  */

void FUN_10219aa78(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10219aacc; end: 10219ab07;  */

void FUN_10219aacc(undefined8 *param_1,undefined8 param_2)

{
  FUN_10219ab08();
  func_0x0001000a7f38("SCTilePickerScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10219ab08; end: 10219ad9b;  */

void FUN_10219ab08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106afd28;
  ppuVar4 = &PTR_DAT_112fb4a48;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104d8eb0;
  func_0x000107c613fc(&UNK_1104d8eb0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e5ee90;
  func_0x0001000285a8(0x112e5ee90,&UNK_10da66598);
  func_0x0001000a6ee8(&UNK_1104d8c80,"SCTilePickerScopedServicesScopeInitializationPluginKey",0x36,2
                      ,FUN_10219ad9c,puVar2,uVar3,&UNK_1104d8c80,&PTR_DAT_112e5ed28);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104d8e60,"TilePickerFlowEntryPointWrapperScopeInitializationPluginKey",
                      0x3b,2,FUN_10219ae18,param_3,uVar3,&UNK_1104d8e60,&PTR_DAT_112e5edb0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104d8ed8;
  func_0x000107c613fc(&UNK_1104d8ed8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104d90d0,"TilePickerScopeGraphBridgeScopeInitializationPluginKey",0x36,2
                      ,FUN_10219ae20,puVar2,uVar3,&UNK_1104d90d0,&PTR_DAT_112e5ef28);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e5ee98;
  func_0x0001000285a8(0x112e5ee98,&UNK_10da665a0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10219ad9c; end: 10219ada3;  */

void FUN_10219ad9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104d8f00;
  func_0x000107c613fc(&UNK_1104d8f00,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10219ae94;
  func_0x0001000823a8(FUN_10219ae94,puVar3);
  func_0x000100082720("SCTilePickerScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10219ada4; end: 10219ae17;  */

void FUN_10219ada4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  pcVar1 = FUN_10219ae60;
  func_0x0001000823a8(FUN_10219ae60,param_3);
  func_0x000100082720("TilePickerFlowEntryPointWrapperScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 10219ae18; end: 10219ae1f;  */

void FUN_10219ae18(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  pcVar1 = FUN_10219ae60;
  func_0x0001000823a8();
  func_0x000100082720("TilePickerFlowEntryPointWrapperScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 10219ae20; end: 10219ae5f;  */

void FUN_10219ae20(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10219b620(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("TilePickerScopeGraphBridgeScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10219ae60; end: 10219ae67;  */

void FUN_10219ae60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x10219aa74);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


