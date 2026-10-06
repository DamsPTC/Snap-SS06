/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014b78fc; end: 1014b797b;  */

void FUN_1014b78fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da6e00 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UNNotificationRequest_1126bc390;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112da6e00 = puVar1;
  return;
}



/* Entry: 1014b797c; end: 1014b7987;  */

void FUN_1014b797c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001014b7984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1014b7988; end: 1014b79c3;  */

void FUN_1014b7988(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014b79c4; end: 1014b79db;  */

void FUN_1014b79c4(code *param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  code *pcVar14;
  code *pcVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  long unaff_x20;
  code *pcVar21;
  undefined *puVar22;
  undefined *puVar23;
  code *pcVar24;
  
  pcVar7 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  pcVar4 = *(code **)(unaff_x20 + 0x28);
  lVar18 = *(long *)(unaff_x20 + 0x30);
  pcVar21 = (code *)((ulong)param_1 & 0xffffffffffffff8);
  if ((ulong)param_1 >> 0x3e == 0) {
    pcVar24 = *(code **)(pcVar21 + 0x10);
    if (pcVar24 == (code *)0x0) goto LAB_1014b6994;
  }
  else {
    pcVar24 = pcVar21;
    if ((code *)0x7fffffffffffffff < param_1) {
      pcVar24 = param_1;
    }
    pcVar14 = pcVar24;
    func_0x000107c60480();
    if ((long)pcVar14 < 1) goto LAB_1014b6994;
    func_0x000107c60480(pcVar24,pcVar7,uVar3);
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pcVar24 != (code *)0x0) {
    pcVar14 = pcVar7;
    pcVar20 = (code *)0x0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(code **)(pcVar21 + 0x10) <= pcVar20) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1014b69c8);
            (*pcVar7)();
          }
          pcVar8 = *(code **)(param_1 + (long)pcVar20 * 8 + 0x20);
          func_0x000107c61174();
          pcVar15 = pcVar14;
        }
        else {
          pcVar8 = pcVar20;
          pcVar15 = param_1;
          FUN_1014b749c(pcVar20,param_1);
        }
        pcVar1 = pcVar20 + 1;
        if (SCARRY8((long)pcVar20,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1014b69c4);
          (*pcVar7)();
        }
        pcVar14 = pcVar8;
        func_0x000107c44fdc(pcVar8);
        func_0x000107c61180();
        pcVar9 = pcVar14;
        func_0x000107c5faec();
        func_0x000107c61170(pcVar14);
        uVar10 = uVar2;
        pcVar14 = pcVar4;
        func_0x000107c5fbb4(uVar2,pcVar4,pcVar9,pcVar15);
        func_0x000107c6142c(pcVar15);
        if ((uVar10 & 1) != 0) break;
        func_0x000107c61170(pcVar8);
        pcVar20 = pcVar20 + 1;
        if (pcVar1 == pcVar24) goto LAB_1014b685c;
      }
      puVar22 = puVar6;
      func_0x000107c61558();
      if (((ulong)puVar22 & 1) == 0) {
        pcVar14 = (code *)(*(long *)(puVar6 + 0x10) + 1);
        FUN_1014b7650(0,pcVar14,1);
      }
      uVar10 = *(ulong *)(puVar6 + 0x10);
      pcVar20 = (code *)(uVar10 + 1);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar10) {
        pcVar14 = pcVar20;
        FUN_1014b7650(1 < *(ulong *)(puVar6 + 0x18),pcVar20,1);
      }
      *(code **)(puVar6 + 0x10) = pcVar20;
      *(code **)(puVar6 + uVar10 * 8 + 0x20) = pcVar8;
      pcVar20 = pcVar1;
    } while (pcVar1 != pcVar24);
  }
LAB_1014b685c:
  if (((long)puVar6 < 0) || (((ulong)puVar6 >> 0x3e & 1) != 0)) {
    puVar22 = puVar6;
    func_0x000107c60480();
    if (puVar22 == (undefined *)0x0) goto LAB_1014b6a20;
LAB_1014b6870:
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar16 = (undefined *)((ulong)puVar22 & ((long)puVar22 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000100403514(0,puVar16,0);
    if ((long)puVar22 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1014b6a40);
      (*pcVar7)();
    }
    puVar23 = (undefined *)0x0;
    do {
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        puVar11 = *(undefined **)(puVar6 + (long)puVar23 * 8 + 0x20);
        func_0x000107c61174();
        puVar17 = puVar16;
      }
      else {
        puVar11 = puVar23;
        puVar17 = puVar6;
        FUN_1014b749c();
      }
      func_0x000107c61174();
      puVar12 = puVar11;
      func_0x000107c44fdc();
      func_0x000107c61180();
      puVar13 = puVar12;
      func_0x000107c5faec();
      puVar16 = puVar17;
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar12);
      uVar2 = *(ulong *)(puVar5 + 0x10);
      puVar11 = (undefined *)(uVar2 + 1);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar16 = puVar11;
        func_0x000100403514(1 < *(ulong *)(puVar5 + 0x18),puVar11,1);
      }
      puVar23 = puVar23 + 1;
      *(undefined **)(puVar5 + 0x10) = puVar11;
      *(undefined **)(puVar5 + uVar2 * 0x10 + 0x20) = puVar13;
      *(undefined **)(puVar5 + uVar2 * 0x10 + 0x28) = puVar17;
    } while (puVar22 != puVar23);
    func_0x000107c61574(puVar6);
    lVar19 = *(long *)(puVar5 + 0x10);
  }
  else {
    puVar22 = *(undefined **)(puVar6 + 0x10);
    if (puVar22 != (undefined *)0x0) goto LAB_1014b6870;
LAB_1014b6a20:
    func_0x000107c61574(puVar6);
    lVar19 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  if (lVar19 != 0) {
    uVar3 = *(undefined8 *)(lVar18 + 0x28);
    lVar19 = *(long *)(lVar18 + 0x30);
    func_0x0001000a8868(lVar18 + 0x10,uVar3);
    (**(code **)(lVar19 + 0x10))(puVar5,uVar3,lVar19);
  }
  func_0x000107c6142c(puVar5);
LAB_1014b6994:
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)();
  }
  return;
}



/* Entry: 1014b79dc; end: 1014b7d23;  */

/* WARNING: Possible PIC construction at 0x0001014b7aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014b7aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014b7c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014b7c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014b7c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014b7cc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014b7c9c) */
/* WARNING: Removing unreachable block (ram,0x0001014b7c88) */
/* WARNING: Removing unreachable block (ram,0x0001014b7c40) */
/* WARNING: Removing unreachable block (ram,0x0001014b7af0) */
/* WARNING: Removing unreachable block (ram,0x0001014b7aac) */
/* WARNING: Removing unreachable block (ram,0x0001014b7ab0) */
/* WARNING: Removing unreachable block (ram,0x0001014b7ab8) */
/* WARNING: Removing unreachable block (ram,0x0001014b7cc8) */

void FUN_1014b79dc(undefined8 param_1,undefined *param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long in_stack_00000000;
  
  puVar1 = &UNK_1103cb448;
  func_0x000107c613fc(&UNK_1103cb448,0x18,7);
  *(long *)(puVar1 + 0x10) = in_stack_00000000;
  puVar2 = PTR__OBJC_CLASS___UNMutableNotificationContent_1126bc388;
  func_0x000107c610f8(PTR__OBJC_CLASS___UNMutableNotificationContent_1126bc388);
  func_0x000107c60bc4(in_stack_00000000);
  func_0x000107c453e4(puVar2);
  lVar3 = param_3;
  if (param_3 == 0) {
    if (param_5 == 0) {
      (**(code **)(in_stack_00000000 + 0x10))(in_stack_00000000,0);
      func_0x000107c61574(puVar1);
      goto code_r0x000107c61170;
    }
    param_2 = (undefined *)0x0;
    lVar3 = -0x2000000000000000;
  }
  func_0x000107c61434(param_3);
  func_0x000107c5fadc(param_2,lVar3);
  func_0x000107c6142c(lVar3);
  func_0x000107c59e18(puVar2);
  puVar2 = param_2;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1014b7d24; end: 1014b7d3f;  */

void FUN_1014b7d24(long param_1,long param_2)

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



/* Entry: 1014b7d40; end: 1014b7d87;  */

undefined8 FUN_1014b7d40(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d69838;
  func_0x0001000285a8(0x112d69838,&UNK_10d92d0b0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1014b7d88; end: 1014b7da7;  */

void FUN_1014b7d88(long param_1,long param_2)

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



/* Entry: 1014b7da8; end: 1014b7dc7;  */

void FUN_1014b7da8(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1014b7dc8; end: 1014b7e3b;  */

void FUN_1014b7dc8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x000107c61168();
  func_0x000107c40f90();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_1014b78d4();
  func_0x000107c613fc();
  uVar3 = 0;
  FUN_1014b7ec0();
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  *(undefined ***)(lVar2 + 0x30) = &PTR_DAT_1103cb2d0;
  *(undefined **)(lVar2 + 0x10) = puVar1;
  *param_1 = lVar2;
  return;
}



/* Entry: 1014b7e3c; end: 1014b7e4b;  */

void FUN_1014b7e3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b7e4c; end: 1014b7ebf;  */

void FUN_1014b7e4c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112da6e10,&UNK_10d94d070);
  func_0x000107c613fc();
  pcVar1 = FUN_1014b7dc8;
  func_0x0001000bdd8c(FUN_1014b7dc8,0);
  uVar2 = 0;
  func_0x000100093fe4(0);
  func_0x000107c610f8();
  func_0x0001004ec1e8(pcVar1,uVar2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 1014b7ec0; end: 1014b7f03;  */

void FUN_1014b7ec0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da6ee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112da6ee0 = puVar1;
  return;
}



/* Entry: 1014b7f04; end: 1014b7fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014b7f04(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_112da6f00;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112da6ef8);
  *(undefined8 *)(param_1 + _DAT_112da6ef8) = *(undefined8 *)(param_1 + _DAT_112da6f00);
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0;
  func_0x000107c61170(uVar3);
  FUN_100c79458();
  *(undefined1 *)(param_1 + _DAT_112da6f10) = 0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112da6f08);
  *(undefined8 *)(param_1 + _DAT_112da6f08) = 0;
  func_0x000107c61170(uVar3);
  if (!SCARRY8(*(long *)(param_1 + _DAT_112da6f18),1)) {
    *(long *)(param_1 + _DAT_112da6f18) = *(long *)(param_1 + _DAT_112da6f18) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014b7fa4);
  (*pcVar2)();
}



/* Entry: 1014b7fa4; end: 1014b7fb3; -[_TtC36SCNotificationPermissionServicesImpl31NotificationOSSettingsRetriever notificationOSSettingsUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014b7fa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112da6f38));
  return;
}



/* Entry: 1014b7fb4; end: 1014b7fe7; -[_TtC36SCNotificationPermissionServicesImpl31NotificationOSSettingsRetriever retrieveNotificationOSSettings] */

void FUN_1014b7fb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c783b4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1014b7fe8; end: 1014b8037; -[_TtC36SCNotificationPermissionServicesImpl31NotificationOSSettingsRetriever isPermissionNotGrantedSync] */

bool FUN_1014b7fe8(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_1014b8038();
  lVar2 = lVar1;
  func_0x000107c3e488();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  return lVar2 != 1;
}



/* Entry: 1014b8038; end: 1014b8353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014b8038(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 auStack_d0 [4];
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7f0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar11 = (undefined8 *)((long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0;
  func_0x000107c5f83c();
  lStack_98 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar12 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar12 - extraout_x12;
  puVar3 = PTR_PTR_1126a7370;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + -0x18) = 0;
  *(undefined8 *)(lVar10 + -0x20) = 0;
  *(undefined8 *)(lVar10 + -8) = 0;
  *(undefined8 *)(lVar10 + -0x10) = 0;
  func_0x000107c458ac();
  puVar13 = *(undefined **)(unaff_x20 + _DAT_112da6f00);
  if (puVar13 != (undefined *)0x0) {
    puVar4 = puVar13;
    func_0x000107c61174(puVar13);
    func_0x000107c61174();
    FUN_100c79574();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    puVar3 = puVar13;
  }
  puVar13 = &UNK_1103cb5e0;
  func_0x000107c613fc(&UNK_1103cb5e0,0x18,7);
  *(undefined **)(puVar13 + 0x10) = puVar3;
  func_0x000107c3e488();
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c60f34();
    puVar5 = puVar3;
    lStack_a0 = lVar1;
    func_0x000107c60f38();
    FUN_100c783b4();
    puVar4 = &UNK_1103cb608;
    puStack_a8 = puVar5;
    func_0x000107c613fc(&UNK_1103cb608,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_1103cb630;
    func_0x000107c613fc(&UNK_1103cb630,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    *(undefined **)(puVar5 + 0x20) = puVar13;
    pcStack_70 = FUN_1014b89b4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x1014b8460;
    puStack_78 = &UNK_1103cb648;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_68;
    lStack_b0 = lVar2;
    func_0x000107c61174(puVar3);
    func_0x000107c6157c(puVar13);
    func_0x000107c61574(puVar4);
    puVar4 = puStack_a8;
    func_0x000107c5dc68(puStack_a8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c5f830(lVar12);
    *puVar11 = 100;
    lVar1 = lStack_a0;
    (**(code **)(lVar9 + 0x68))
              (puVar11,*(undefined4 *)
                        PTR___s8Dispatch0A12TimeIntervalO12millisecondsyACSicACmFWC_11034f778,
               lStack_a0);
    func_0x000107c5f858(lVar10,lVar12,puVar11);
    (**(code **)(lVar9 + 8))(puVar11,lVar1);
    lVar1 = lStack_b0;
    pcVar8 = *(code **)(lStack_98 + 8);
    (*pcVar8)(lVar12,lStack_b0);
    func_0x000107c5ffb0(lVar10);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    (*pcVar8)(lVar10,lVar1);
    func_0x000107c61428(puVar13 + 0x10,&puStack_90,0,0);
  }
  uVar7 = *(undefined8 *)(puVar13 + 0x10);
  func_0x000107c61174(uVar7);
  func_0x000107c61574(puVar13);
  return uVar7;
}



/* Entry: 1014b8354; end: 1014b839f; -[_TtC36SCNotificationPermissionServicesImpl31NotificationOSSettingsRetriever retrieveOSAuthorizationStatusSync] */

undefined8 FUN_1014b8354(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1014b8038();
  uVar2 = uVar1;
  func_0x000107c3e488();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1014b83a0; end: 1014b84d7;  */

void FUN_1014b83a0(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (((param_3 == 0) || (func_0x000107c61170(), param_2 != 0)) || (param_1 == 0)) {
    func_0x000107c60f3c(param_4);
  }
  else {
    func_0x000107c61428(param_5 + 0x10,auStack_70,1,0);
    uVar1 = *(undefined8 *)(param_5 + 0x10);
    *(long *)(param_5 + 0x10) = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c61170(uVar1);
    func_0x000107c60f3c(param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1014b84d8; end: 1014b850b; -[_TtC36SCNotificationPermissionServicesImpl31NotificationOSSettingsRetriever retrieveOSSettingsInfoSync] */

void FUN_1014b84d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1014b8038();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1014b850c; end: 1014b85c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1014b850c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126a7370;
  func_0x000107c610f8(PTR_PTR_1126a7370);
  func_0x000107c458ac();
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112da6f00);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61174();
    FUN_100c79574(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
    puVar1 = puVar3;
  }
  puVar3 = puVar1;
  func_0x000107c3e488(puVar1);
  func_0x000107c61170(puVar1);
  return puVar3;
}



/* Entry: 1014b85c8; end: 1014b85fb; -[_TtC36SCNotificationPermissionServicesImpl31NotificationOSSettingsRetriever getInMemoryAuthorizationStatus] */

undefined8 FUN_1014b85c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1014b850c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1014b85fc; end: 1014b8787; -[_TtC36SCNotificationPermissionServicesImpl31NotificationOSSettingsRetriever getInMemorySettingsInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014b85fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126a7370;
  func_0x000107c610f8(PTR_PTR_1126a7370);
  func_0x000107c61174();
  func_0x000107c458ac(puVar1,param_2,0,0,0,0,0,0,0,0,0,0);
  puVar3 = *(undefined **)(param_1 + _DAT_112da6f00);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61174();
    FUN_100c79574(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
    puVar1 = puVar3;
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1014b8788; end: 1014b87bb; -[_TtC36SCNotificationPermissionServicesImpl31NotificationOSSettingsRetriever isInMemoryAuthorizationStatusUnknownOrFullyGranted] */

uint FUN_1014b8788(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001014b86c4();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1014b87bc; end: 1014b880b; -[_TtC36SCNotificationPermissionServicesImpl31NotificationOSSettingsRetriever appHasPromptedNotificationPermission] */

undefined * FUN_1014b87bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c61168(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  func_0x000107c5ba34();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ebc0();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1014b880c; end: 1014b88ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014b880c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    pcVar1 = FUN_1014b89e8;
    lStack_50 = param_2;
    func_0x000100087bd4(FUN_1014b89e8,auStack_60,PTR___sytN_11034f1b0 + 8);
    FUN_100c783b4();
    func_0x000107c61170(param_2);
    func_0x000107c61170(pcVar1);
  }
  return;
}



/* Entry: 1014b88ac; end: 1014b890b; -[_TtC36SCNotificationPermissionServicesImpl31NotificationOSSettingsRetriever init] */

void FUN_1014b88ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCNotificationPermissionServicesImpl.NotificationOSSettingsRetriever",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014b88d8);
  (*pcVar1)();
}



/* Entry: 1014b890c; end: 1014b89b3; -[_TtC36SCNotificationPermissionServicesImpl31NotificationOSSettingsRetriever .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014b8948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014b8968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014b894c) */
/* WARNING: Removing unreachable block (ram,0x0001014b896c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014b890c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da6ee8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da6ef0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da6ef8));
  return;
}



/* Entry: 1014b89b4; end: 1014b89e7;  */

void FUN_1014b89b4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (((lVar2 == 0) || (func_0x000107c61170(), param_2 != 0)) || (param_1 == 0)) {
    func_0x000107c60f3c(uVar1);
  }
  else {
    func_0x000107c61428(lVar3 + 0x10,auStack_70,1,0);
    uVar4 = *(undefined8 *)(lVar3 + 0x10);
    *(long *)(lVar3 + 0x10) = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    func_0x000107c60f3c(uVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1014b89e8; end: 1014b89ff;  */

void FUN_1014b89e8(void)

{
  long unaff_x20;
  
  FUN_1014b7f04(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1014b8a00; end: 1014b8a03;  */

void FUN_1014b8a00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1014b8a04; end: 1014b8b13;  */

undefined8 FUN_1014b8a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001004582a4(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1014b8b14; end: 1014b8b47;  */

void FUN_1014b8b14(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b8b48; end: 1014b8b63;  */

void FUN_1014b8b48(void)

{
  return;
}



/* Entry: 1014b8b64; end: 1014b8b7b;  */

void FUN_1014b8b64(void)

{
  long unaff_x20;
  
  FUN_1014b7f04(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1014b8b7c; end: 1014b8b83;  */

void FUN_1014b8b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1014b8b84; end: 1014b8c9f;  */

void FUN_1014b8b84(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x00010009b798();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  func_0x000102208ee0(0);
  func_0x000107c610f8();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000102208354();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c61174();
  func_0x000102208490();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 1014b8ca0; end: 1014b8cab;  */

void FUN_1014b8ca0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x00010009b798();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  func_0x000102208ee0(0);
  func_0x000107c610f8();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x000102208354();
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  func_0x000107c61174();
  func_0x000102208490();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  *param_1 = lVar1;
  return;
}



/* Entry: 1014b8cac; end: 1014b8d83;  */

long FUN_1014b8cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x000102208ee0(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102208354();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174();
  func_0x000102208490();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 1014b8d84; end: 1014b8db7;  */

void FUN_1014b8d84(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b8db8; end: 1014b8deb;  */

undefined1  [16] FUN_1014b8db8(void)

{
  return ZEXT816(0x1103cb888);
}



/* Entry: 1014b8dec; end: 1014b8e3f;  */

void FUN_1014b8dec(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014b8e40; end: 1014b8ed3;  */

void FUN_1014b8e40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010009b884();
  func_0x000107c613fc();
  FUN_1014b8f34(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1014b8ed4; end: 1014b8edf;  */

void FUN_1014b8ed4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010009b884();
  func_0x000107c613fc();
  FUN_1014b8f34(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014b8ee0; end: 1014b8f33;  */

undefined8 FUN_1014b8ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1014b8f34(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1014b8f34; end: 1014b900f;  */

void FUN_1014b8f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x00010220998c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102209644();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001022097b8();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1014b9010; end: 1014b904b;  */

void FUN_1014b9010(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b904c; end: 1014b909f;  */

void FUN_1014b904c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014b90a0; end: 1014b90eb;  */

void FUN_1014b90a0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014b90ec; end: 1014b913f;  */

void FUN_1014b90ec(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014b9140; end: 1014b9483;  */

void FUN_1014b9140(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x00010009c5a4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a7380;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10b10);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  uVar7 = uVar8;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1014b9484; end: 1014b9493;  */

void FUN_1014b9484(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x00010009c5a4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a7380;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10b10);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  uVar8 = uVar9;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1014b9494; end: 1014b977b;  */

long FUN_1014b9494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  puVar1 = PTR_PTR_1126a7380;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
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
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10b10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined **)(unaff_x20 + 0x38) = puVar3;
  return unaff_x20;
}



/* Entry: 1014b977c; end: 1014b97c7;  */

void FUN_1014b977c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b97c8; end: 1014b981b;  */

void FUN_1014b97c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014b981c; end: 1014b9823;  */

void FUN_1014b981c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014b9824; end: 1014b9873;  */

undefined8 FUN_1014b9824(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014b9874; end: 1014b98b7;  */

undefined1  [16] FUN_1014b9874(void)

{
  return ZEXT816(0x1103cb9f8);
}



/* Entry: 1014b98b8; end: 1014b98df;  */

void FUN_1014b98b8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014b98e0; end: 1014b98e7;  */

undefined8 FUN_1014b98e0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014b98e8; end: 1014b9923;  */

undefined8 FUN_1014b98e8(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100b465b0(param_1);
  return unaff_x20;
}



/* Entry: 1014b9924; end: 1014b994f;  */

void FUN_1014b9924(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b9950; end: 1014b999f;  */

undefined8 FUN_1014b9950(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014b99a0; end: 1014b99e3;  */

undefined1  [16] FUN_1014b99a0(void)

{
  return ZEXT816(0x1103cbb18);
}



/* Entry: 1014b99e4; end: 1014b9a0b;  */

void FUN_1014b99e4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014b9a0c; end: 1014b9a13;  */

undefined8 FUN_1014b9a0c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014b9a14; end: 1014b9a67;  */

undefined8 FUN_1014b9a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100450d2c(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1014b9a68; end: 1014b9aa3;  */

void FUN_1014b9a68(void)

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



/* Entry: 1014b9aa4; end: 1014b9af3;  */

undefined8 FUN_1014b9aa4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014b9af4; end: 1014b9b37;  */

undefined1  [16] FUN_1014b9af4(void)

{
  return ZEXT816(0x1103cbbe0);
}



/* Entry: 1014b9b38; end: 1014b9b5f;  */

void FUN_1014b9b38(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014b9b60; end: 1014b9b67;  */

undefined8 FUN_1014b9b60(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014b9b68; end: 1014b9bb3;  */

undefined8 FUN_1014b9b68(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010050b528(param_1,param_2);
  return unaff_x20;
}



/* Entry: 1014b9bb4; end: 1014b9be7;  */

void FUN_1014b9bb4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b9be8; end: 1014b9c37;  */

undefined8 FUN_1014b9be8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014b9c38; end: 1014b9c7b;  */

undefined1  [16] FUN_1014b9c38(void)

{
  return ZEXT816(0x1103cbca8);
}



/* Entry: 1014b9c7c; end: 1014b9ca3;  */

void FUN_1014b9c7c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014b9ca4; end: 1014b9cab;  */

undefined8 FUN_1014b9ca4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014b9cac; end: 1014b9d53;  */

long FUN_1014b9cac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x0001009d580c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001009d582c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  func_0x0001009d5854();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 1014b9d54; end: 1014b9d7f;  */

void FUN_1014b9d54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b9d80; end: 1014b9db3;  */

undefined1  [16] FUN_1014b9d80(void)

{
  return ZEXT816(0x1103cbdf0);
}



/* Entry: 1014b9db4; end: 1014b9ddf;  */

undefined8 FUN_1014b9db4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 1014b9de0; end: 1014b9e13;  */

void FUN_1014b9de0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1014b9e14; end: 1014b9e37;  */

void FUN_1014b9e14(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014b9e38; end: 1014b9e87;  */

void FUN_1014b9e38(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *(long *)(*unaff_x20 + 0x10);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x0001009d58a0(0);
    func_0x0001009d58c0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014b9e88);
  (*pcVar1)();
}



/* Entry: 1014b9e88; end: 1014b9e8f;  */

undefined8 FUN_1014b9e88(void)

{
  return 0;
}



/* Entry: 1014b9e90; end: 1014b9fd3;  */

long FUN_1014b9e90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a73a0;
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
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
  func_0x000107c615f0(param_2);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85600);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  return unaff_x20;
}



/* Entry: 1014b9fd4; end: 1014b9fff;  */

void FUN_1014b9fd4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014ba000; end: 1014ba04f;  */

undefined8 FUN_1014ba000(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014ba050; end: 1014ba08b;  */

undefined1  [16] FUN_1014ba050(void)

{
  return ZEXT816(0x1103cbfe8);
}



/* Entry: 1014ba08c; end: 1014ba3db;  */

long FUN_1014ba08c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  puVar1 = PTR_PTR_1126a73a8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
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
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar1);
  uVar2 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return unaff_x20;
}



/* Entry: 1014ba3dc; end: 1014ba427;  */

void FUN_1014ba3dc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014ba428; end: 1014ba477;  */

undefined8 FUN_1014ba428(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014ba478; end: 1014ba4b3;  */

undefined1  [16] FUN_1014ba478(void)

{
  return ZEXT816(0x1103cc090);
}



/* Entry: 1014ba4b4; end: 1014ba8f7;  */

long FUN_1014ba4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  puVar1 = PTR_PTR_1126a73b0;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c615f0(param_8);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85600);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef85de0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c615f0(param_8);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef85e00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(param_8);
  return unaff_x20;
}



/* Entry: 1014ba8f8; end: 1014ba96b;  */

void FUN_1014ba8f8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1014ba96c; end: 1014ba9bb;  */

undefined8 FUN_1014ba96c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014ba9bc; end: 1014ba9f7;  */

undefined1  [16] FUN_1014ba9bc(void)

{
  return ZEXT816(0x1103cc138);
}



/* Entry: 1014ba9f8; end: 1014bad47;  */

long FUN_1014ba9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  puVar1 = PTR_PTR_1126a73b8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
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
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar1);
  uVar2 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return unaff_x20;
}


