/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100028000; end: 100028057; +[GTMSessionFetcher load] */

void FUN_100028000(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61180();
  func_0x000107c3d7bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100028058; end: 1000280af; +[GTMSessionUploadFetcher load] */

void FUN_100028058(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61180();
  func_0x000107c3d7bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1000280b0; end: 100028147; +[SCMainAppDelegate load] */

void FUN_1000280b0(void)

{
  undefined *puVar1;
  
  func_0x000107c5afdc(PTR_PTR_1126ae4e0);
  func_0x000107c4b780(PTR_PTR_1126b6a88);
  puVar1 = PTR_PTR_1126b6a90;
  func_0x000107c5aa58();
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b6a90;
    func_0x000107c5aa58(PTR_PTR_1126b6a90);
    func_0x000107c61180();
    func_0x000107c5bbfc();
    func_0x000107c61170(puVar1);
  }
  puVar1 = PTR_PTR_1126ae4e0;
  func_0x000107c5afe0();
  uRam0000000113839535 = 1;
  func_0x000107c6106c();
  puRam0000000113839458 = puVar1;
  return;
}



/* Entry: 100028148; end: 10002814b; +[SCAppLaunchSignaler signalLoadBegin] */

undefined1 * FUN_100028148(void)

{
  ulong uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined1 *puVar18;
  long *plVar19;
  long extraout_x8;
  ulong uVar20;
  undefined1 *puVar21;
  int iVar22;
  code *pcVar23;
  long lVar24;
  ulong auStack_3c0 [5];
  undefined8 uStack_398;
  ulong uStack_390;
  uint auStack_388 [2];
  ulong auStack_380 [81];
  long alStack_f8 [6];
  long lStack_c8;
  long alStack_c0 [2];
  undefined1 auStack_b0 [12];
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = 0;
  func_0x000107c5f13c();
  lVar24 = *(long *)(lVar12 + -8);
  lVar13 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar24 + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar18 = auStack_b0 + lVar6;
  FUN_1000283f0();
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a4 = 8;
  uVar14 = (ulong)*(uint *)PTR__mach_task_self__11034c5c8;
  lRam0000000113813730 = lVar13;
  func_0x000107c61678(uVar14,2,&uStack_a0,&uStack_a4);
  if ((int)uVar14 == 0) {
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
  }
  else {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  uRam0000000113813710 = uStack_78;
  uRam0000000113813708 = uStack_80;
  uRam0000000113813720 = uStack_68;
  uRam0000000113813718 = uStack_70;
  func_0x000107c6106c();
  uRam0000000113813728 = uVar14;
  func_0x000107c60034();
  if (lRam000000011307c818 != -1) {
    func_0x000107c61568(0x11307c818,FUN_1000285f8);
  }
  uVar8 = uRam0000000113813650;
  lVar13 = 0x112d36008;
  FUN_1000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar13 + 0x18) = 4;
  *(undefined8 *)(lVar13 + 0x10) = 2;
  lVar10 = lRam0000000113813730;
  puVar7 = PTR___ss6UInt64Vs7CVarArgsWP_11034f078;
  *(undefined **)(lVar13 + 0x38) = PTR___ss6UInt64VN_11034f048;
  *(undefined **)(lVar13 + 0x40) = puVar7;
  *(long *)(lVar13 + 0x20) = lVar10;
  puVar7 = PTR___ss5Int32Vs7CVarArgsWP_11034ee40;
  uVar9 = uRam0000000113813708._4_4_;
  *(undefined **)(lVar13 + 0x60) = PTR___ss5Int32VN_11034ee20;
  *(undefined **)(lVar13 + 0x68) = puVar7;
  *(undefined4 *)(lVar13 + 0x48) = uVar9;
  func_0x000107c5f138(puVar18);
  *(long *)((long)alStack_c0 + lVar6) = lVar13;
  *(undefined1 *)((long)&lStack_c8 + lVar6) = 2;
  *(undefined8 *)((long)alStack_f8 + lVar6 + 0x28) = 0x22;
  func_0x000107c5f128(uVar14,0x100000000,uVar8,"+[SCMainAppDelegate load]",0x19,2,puVar18,
                      "preload_us:%d, preload_page_ins:%d");
  func_0x000107c61574(lVar13);
  pcVar23 = *(code **)(lVar24 + 8);
  puVar15 = puVar18;
  (*pcVar23)(puVar18,lVar12);
  func_0x000107c60030();
  if (lRam000000011307c820 != -1) {
    func_0x000107c61568(0x11307c820,FUN_1000286d0);
  }
  lVar13 = lVar12;
  FUN_100028790(lVar12,0x113813658);
  (**(code **)(lVar24 + 0x10))(puVar18,lVar13,lVar12);
  func_0x000107c5f12c(puVar15,0x100000000,uVar8,"POST_LOAD_GHOST_TO_SIGNAL",0x19,2,puVar18);
  puVar21 = puVar18;
  (*pcVar23)(puVar18,lVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar21;
  }
  func_0x000107c60e78();
  *(long *)((long)alStack_f8 + lVar6 + 8) = lVar24;
  *(code **)((long)alStack_f8 + lVar6 + 0x10) = pcVar23;
  *(undefined1 **)((long)alStack_f8 + lVar6 + 0x18) = puVar15;
  *(undefined8 *)((long)alStack_f8 + lVar6 + 0x20) = uVar8;
  *(undefined1 **)((long)alStack_f8 + lVar6 + 0x28) = puVar18;
  *(long *)((long)&lStack_c8 + lVar6) = lVar12;
  *(undefined1 **)((long)alStack_c0 + lVar6) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_c0 + lVar6 + 8) = FUN_1000283f0;
  *(undefined8 *)((long)alStack_f8 + lVar6) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c60ee4((long)auStack_380 + lVar6,0x288);
  *(undefined8 *)((long)&uStack_398 + lVar6) = 0x288;
  puVar16 = (ulong *)0x112dd1f58;
  FUN_1000285a8(0x112dd1f58,&UNK_10dbcf190);
  func_0x000107c613fc();
  puVar16[3] = 8;
  puVar16[2] = 4;
  puVar16[4] = 0xe00000001;
  *(undefined4 *)(puVar16 + 5) = 1;
  puVar17 = puVar16;
  func_0x000107c6100c();
  *(int *)((long)puVar16 + 0x2c) = (int)puVar17;
  func_0x000107c61660(puVar16 + 4,4,(long)auStack_380 + lVar6,(long)&uStack_398 + lVar6,0,0);
  uVar14 = *(ulong *)((long)auStack_380 + lVar6);
  uVar1 = *(ulong *)((long)auStack_380 + lVar6 + 8);
  *(undefined8 *)((long)&uStack_390 + lVar6) = 0;
  *(undefined4 *)((long)auStack_388 + lVar6) = 0;
  plVar19 = (long *)0x0;
  func_0x000107c61020((long)&uStack_390 + lVar6);
  uVar20 = *(ulong *)((long)&uStack_390 + lVar6);
  iVar22 = (int)uVar1;
  puVar17 = puVar16;
  if ((long)uVar20 < 0) {
    uVar2 = *(uint *)((long)auStack_388 + lVar6);
    puVar18 = (undefined1 *)(ulong)uVar2;
    func_0x000107c61574();
    if ((int)uVar2 < 0) {
      if ((long)uVar14 < 0) goto LAB_100028558;
      puVar18 = (undefined1 *)0x0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar14;
      puVar15 = puVar18;
      if ((SUB168(auVar4 * ZEXT816(1000000),8) != 0) || (-1 < iVar22)) goto LAB_100028570;
      puVar21 = (undefined1 *)(uVar14 * 1000000);
    }
    else {
LAB_10002852c:
      if ((long)uVar14 < 0) {
        puVar15 = puVar18;
        if (iVar22 < 0) goto LAB_100028570;
        puVar21 = (undefined1 *)(uVar1 & 0x7fffffff);
      }
      else {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar14;
        if ((SUB168(auVar5 * ZEXT816(1000000),8) != 0) ||
           ((puVar21 = (undefined1 *)(uVar14 * 1000000), -1 < iVar22 &&
            (bVar11 = CARRY8((ulong)puVar21,uVar1 & 0x7fffffff),
            puVar21 = puVar21 + (uVar1 & 0x7fffffff), bVar11)))) goto LAB_100028558;
      }
    }
    puVar15 = (undefined1 *)0x0;
    if (puVar21 <= puVar18) {
      puVar15 = puVar18 + -(long)puVar21;
    }
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar20;
    if (SUB168(auVar3 * ZEXT816(1000000),8) == 0) {
      puVar18 = (undefined1 *)(uVar20 * 1000000);
      uVar2 = *(uint *)((long)auStack_388 + lVar6);
      func_0x000107c61574();
      if (((int)uVar2 < 0) ||
         (bVar11 = CARRY8((ulong)puVar18,(ulong)uVar2), puVar18 = puVar18 + uVar2, !bVar11))
      goto LAB_10002852c;
    }
    else {
      func_0x000107c61574();
    }
LAB_100028558:
    puVar15 = (undefined1 *)0x0;
  }
LAB_100028570:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)alStack_f8 + lVar6)) {
    return puVar15;
  }
  func_0x000107c60e78();
  *(ulong **)((long)auStack_3c0 + lVar6) = puVar16;
  *(undefined1 **)((long)auStack_3c0 + lVar6 + 8) = puVar15;
  *(long *)((long)auStack_3c0 + lVar6 + 0x10) = (long)alStack_c0 + lVar6;
  *(code **)((long)auStack_3c0 + lVar6 + 0x18) = FUN_1000285a8;
  puVar18 = (undefined1 *)*puVar17;
  if (puVar18 == (undefined1 *)0x0 || ((ulong)puVar18 & 1) != 0) {
    puVar18 = (undefined1 *)((long)plVar19 + (long)(int)*plVar19);
    func_0x000107c61518(puVar18,*plVar19 >> 0x20,0,0);
    *puVar17 = (ulong)puVar18;
  }
  return puVar18;
}



/* Entry: 10002814c; end: 1000283ef;  */

undefined1 * FUN_10002814c(void)

{
  ulong uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined1 *puVar18;
  long *plVar19;
  long extraout_x8;
  ulong uVar20;
  undefined1 *puVar21;
  int iVar22;
  code *pcVar23;
  long lVar24;
  ulong auStack_3c0 [5];
  undefined8 uStack_398;
  ulong uStack_390;
  uint auStack_388 [2];
  ulong auStack_380 [81];
  long alStack_f8 [6];
  long lStack_c8;
  long alStack_c0 [2];
  undefined1 auStack_b0 [12];
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = 0;
  func_0x000107c5f13c();
  lVar24 = *(long *)(lVar12 + -8);
  lVar13 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar24 + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar18 = auStack_b0 + lVar6;
  FUN_1000283f0();
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a4 = 8;
  uVar14 = (ulong)*(uint *)PTR__mach_task_self__11034c5c8;
  lRam0000000113813730 = lVar13;
  func_0x000107c61678(uVar14,2,&uStack_a0,&uStack_a4);
  if ((int)uVar14 == 0) {
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
  }
  else {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  uRam0000000113813710 = uStack_78;
  uRam0000000113813708 = uStack_80;
  uRam0000000113813720 = uStack_68;
  uRam0000000113813718 = uStack_70;
  func_0x000107c6106c();
  uRam0000000113813728 = uVar14;
  func_0x000107c60034();
  if (lRam000000011307c818 != -1) {
    func_0x000107c61568(0x11307c818,FUN_1000285f8);
  }
  uVar8 = uRam0000000113813650;
  lVar13 = 0x112d36008;
  FUN_1000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar13 + 0x18) = 4;
  *(undefined8 *)(lVar13 + 0x10) = 2;
  lVar10 = lRam0000000113813730;
  puVar7 = PTR___ss6UInt64Vs7CVarArgsWP_11034f078;
  *(undefined **)(lVar13 + 0x38) = PTR___ss6UInt64VN_11034f048;
  *(undefined **)(lVar13 + 0x40) = puVar7;
  *(long *)(lVar13 + 0x20) = lVar10;
  puVar7 = PTR___ss5Int32Vs7CVarArgsWP_11034ee40;
  uVar9 = uRam0000000113813708._4_4_;
  *(undefined **)(lVar13 + 0x60) = PTR___ss5Int32VN_11034ee20;
  *(undefined **)(lVar13 + 0x68) = puVar7;
  *(undefined4 *)(lVar13 + 0x48) = uVar9;
  func_0x000107c5f138(puVar18);
  *(long *)((long)alStack_c0 + lVar6) = lVar13;
  *(undefined1 *)((long)&lStack_c8 + lVar6) = 2;
  *(undefined8 *)((long)alStack_f8 + lVar6 + 0x28) = 0x22;
  func_0x000107c5f128(uVar14,0x100000000,uVar8,"+[SCMainAppDelegate load]",0x19,2,puVar18,
                      "preload_us:%d, preload_page_ins:%d");
  func_0x000107c61574(lVar13);
  pcVar23 = *(code **)(lVar24 + 8);
  puVar15 = puVar18;
  (*pcVar23)(puVar18,lVar12);
  func_0x000107c60030();
  if (lRam000000011307c820 != -1) {
    func_0x000107c61568(0x11307c820,FUN_1000286d0);
  }
  lVar13 = lVar12;
  FUN_100028790(lVar12,0x113813658);
  (**(code **)(lVar24 + 0x10))(puVar18,lVar13,lVar12);
  func_0x000107c5f12c(puVar15,0x100000000,uVar8,"POST_LOAD_GHOST_TO_SIGNAL",0x19,2,puVar18);
  puVar21 = puVar18;
  (*pcVar23)(puVar18,lVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar21;
  }
  func_0x000107c60e78();
  *(long *)((long)alStack_f8 + lVar6 + 8) = lVar24;
  *(code **)((long)alStack_f8 + lVar6 + 0x10) = pcVar23;
  *(undefined1 **)((long)alStack_f8 + lVar6 + 0x18) = puVar15;
  *(undefined8 *)((long)alStack_f8 + lVar6 + 0x20) = uVar8;
  *(undefined1 **)((long)alStack_f8 + lVar6 + 0x28) = puVar18;
  *(long *)((long)&lStack_c8 + lVar6) = lVar12;
  *(undefined1 **)((long)alStack_c0 + lVar6) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_c0 + lVar6 + 8) = FUN_1000283f0;
  *(undefined8 *)((long)alStack_f8 + lVar6) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c60ee4((long)auStack_380 + lVar6,0x288);
  *(undefined8 *)((long)&uStack_398 + lVar6) = 0x288;
  puVar16 = (ulong *)0x112dd1f58;
  FUN_1000285a8(0x112dd1f58,&UNK_10dbcf190);
  func_0x000107c613fc();
  puVar16[3] = 8;
  puVar16[2] = 4;
  puVar16[4] = 0xe00000001;
  *(undefined4 *)(puVar16 + 5) = 1;
  puVar17 = puVar16;
  func_0x000107c6100c();
  *(int *)((long)puVar16 + 0x2c) = (int)puVar17;
  func_0x000107c61660(puVar16 + 4,4,(long)auStack_380 + lVar6,(long)&uStack_398 + lVar6,0,0);
  uVar14 = *(ulong *)((long)auStack_380 + lVar6);
  uVar1 = *(ulong *)((long)auStack_380 + lVar6 + 8);
  *(undefined8 *)((long)&uStack_390 + lVar6) = 0;
  *(undefined4 *)((long)auStack_388 + lVar6) = 0;
  plVar19 = (long *)0x0;
  func_0x000107c61020((long)&uStack_390 + lVar6);
  uVar20 = *(ulong *)((long)&uStack_390 + lVar6);
  iVar22 = (int)uVar1;
  puVar17 = puVar16;
  if ((long)uVar20 < 0) {
    uVar2 = *(uint *)((long)auStack_388 + lVar6);
    puVar18 = (undefined1 *)(ulong)uVar2;
    func_0x000107c61574();
    if ((int)uVar2 < 0) {
      if ((long)uVar14 < 0) goto LAB_100028558;
      puVar18 = (undefined1 *)0x0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar14;
      puVar15 = puVar18;
      if ((SUB168(auVar4 * ZEXT816(1000000),8) != 0) || (-1 < iVar22)) goto LAB_100028570;
      puVar21 = (undefined1 *)(uVar14 * 1000000);
    }
    else {
LAB_10002852c:
      if ((long)uVar14 < 0) {
        puVar15 = puVar18;
        if (iVar22 < 0) goto LAB_100028570;
        puVar21 = (undefined1 *)(uVar1 & 0x7fffffff);
      }
      else {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar14;
        if ((SUB168(auVar5 * ZEXT816(1000000),8) != 0) ||
           ((puVar21 = (undefined1 *)(uVar14 * 1000000), -1 < iVar22 &&
            (bVar11 = CARRY8((ulong)puVar21,uVar1 & 0x7fffffff),
            puVar21 = puVar21 + (uVar1 & 0x7fffffff), bVar11)))) goto LAB_100028558;
      }
    }
    puVar15 = (undefined1 *)0x0;
    if (puVar21 <= puVar18) {
      puVar15 = puVar18 + -(long)puVar21;
    }
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar20;
    if (SUB168(auVar3 * ZEXT816(1000000),8) == 0) {
      puVar18 = (undefined1 *)(uVar20 * 1000000);
      uVar2 = *(uint *)((long)auStack_388 + lVar6);
      func_0x000107c61574();
      if (((int)uVar2 < 0) ||
         (bVar11 = CARRY8((ulong)puVar18,(ulong)uVar2), puVar18 = puVar18 + uVar2, !bVar11))
      goto LAB_10002852c;
    }
    else {
      func_0x000107c61574();
    }
LAB_100028558:
    puVar15 = (undefined1 *)0x0;
  }
LAB_100028570:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)alStack_f8 + lVar6)) {
    return puVar15;
  }
  func_0x000107c60e78();
  *(ulong **)((long)auStack_3c0 + lVar6) = puVar16;
  *(undefined1 **)((long)auStack_3c0 + lVar6 + 8) = puVar15;
  *(long *)((long)auStack_3c0 + lVar6 + 0x10) = (long)alStack_c0 + lVar6;
  *(code **)((long)auStack_3c0 + lVar6 + 0x18) = FUN_1000285a8;
  puVar18 = (undefined1 *)*puVar17;
  if (puVar18 == (undefined1 *)0x0 || ((ulong)puVar18 & 1) != 0) {
    puVar18 = (undefined1 *)((long)plVar19 + (long)(int)*plVar19);
    func_0x000107c61518(puVar18,*plVar19 >> 0x20,0,0);
    *puVar17 = (ulong)puVar18;
  }
  return puVar18;
}



/* Entry: 1000283f0; end: 1000285a7;  */

ulong FUN_1000283f0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  bool bVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  uint uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c60ee4(&uStack_2d0,0x288);
  uStack_2e8 = 0x288;
  puVar6 = (ulong *)0x112dd1f58;
  FUN_1000285a8(0x112dd1f58,&UNK_10dbcf190);
  func_0x000107c613fc();
  puVar6[3] = 8;
  puVar6[2] = 4;
  puVar6[4] = 0xe00000001;
  *(undefined4 *)(puVar6 + 5) = 1;
  puVar7 = puVar6;
  func_0x000107c6100c();
  *(int *)((long)puVar6 + 0x2c) = (int)puVar7;
  func_0x000107c61660(puVar6 + 4,4,&uStack_2d0,&uStack_2e8,0,0);
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  plVar9 = (long *)0x0;
  func_0x000107c61020(&uStack_2e0);
  uVar4 = uStack_2d8;
  iVar10 = (int)uStack_2c8;
  if ((long)uStack_2e0 < 0) {
    uVar8 = (ulong)uStack_2d8;
    func_0x000107c61574();
    if ((int)uVar4 < 0) {
      if ((long)uStack_2d0 < 0) goto LAB_100028558;
      uVar8 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uStack_2d0;
      uVar11 = uVar8;
      if ((SUB168(auVar2 * ZEXT816(1000000),8) != 0) || (-1 < iVar10)) goto LAB_100028570;
      uStack_2d0 = uStack_2d0 * 1000000;
    }
    else {
LAB_10002852c:
      if ((long)uStack_2d0 < 0) {
        uVar11 = uVar8;
        if (iVar10 < 0) goto LAB_100028570;
        uStack_2d0 = uStack_2c8 & 0x7fffffff;
      }
      else {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uStack_2d0;
        if ((SUB168(auVar3 * ZEXT816(1000000),8) != 0) ||
           ((uStack_2d0 = uStack_2d0 * 1000000, -1 < iVar10 &&
            (bVar5 = CARRY8(uStack_2d0,uStack_2c8 & 0x7fffffff),
            uStack_2d0 = uStack_2d0 + (uStack_2c8 & 0x7fffffff), bVar5)))) goto LAB_100028558;
      }
    }
    uVar11 = 0;
    if (uStack_2d0 <= uVar8) {
      uVar11 = uVar8 - uStack_2d0;
    }
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uStack_2e0;
    if (SUB168(auVar1 * ZEXT816(1000000),8) == 0) {
      uVar8 = uStack_2e0 * 1000000;
      uVar11 = (ulong)uStack_2d8;
      func_0x000107c61574();
      if (((int)uVar4 < 0) || (bVar5 = CARRY8(uVar8,uVar11), uVar8 = uVar8 + uVar11, !bVar5))
      goto LAB_10002852c;
    }
    else {
      func_0x000107c61574();
    }
LAB_100028558:
    uVar11 = 0;
  }
LAB_100028570:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar11;
  }
  func_0x000107c60e78();
  uVar8 = *puVar6;
  if (uVar8 == 0 || (uVar8 & 1) != 0) {
    uVar8 = (long)plVar9 + (long)(int)*plVar9;
    func_0x000107c61518(uVar8,*plVar9 >> 0x20,0,0);
    *puVar6 = uVar8;
  }
  return uVar8;
}



/* Entry: 1000285a8; end: 1000285f7;  */

void FUN_1000285a8(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 == 0 || (*param_1 & 1) != 0) {
    uVar1 = (long)param_2 + (long)(int)*param_2;
    func_0x000107c61518(uVar1,*param_2 >> 0x20,0,0);
    *param_1 = uVar1;
  }
  return;
}



/* Entry: 1000285f8; end: 10002868b;  */

void FUN_1000285f8(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x000107c60164();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  FUN_10002868c(0);
  func_0x000107c60160(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar2 = 0xd000000000000014;
  func_0x000107c6016c(0xd000000000000014,0x800000010f200f50,
                      &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uRam0000000113813650 = uVar2;
  return;
}



/* Entry: 10002868c; end: 1000286cf;  */

void FUN_10002868c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef0968 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___OS_os_log_1126abfa8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ef0968 = puVar1;
  return;
}



/* Entry: 1000286d0; end: 10002878f;  */

void FUN_1000286d0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5f13c(0);
  func_0x000100028750();
  FUN_100028790(uVar1,0x113813658);
  if (lRam000000011307c818 != -1) {
    func_0x000107c61568(0x11307c818,FUN_1000285f8);
  }
  func_0x000107c61174(uRam0000000113813650);
  func_0x000107c5f130(uVar1);
  return;
}



/* Entry: 100028790; end: 1000287a7;  */

undefined8 * FUN_100028790(long param_1,undefined8 *param_2)

{
  if ((*(byte *)(*(long *)(param_1 + -8) + 0x52) >> 1 & 1) != 0) {
    param_2 = (undefined8 *)*param_2;
  }
  return param_2;
}



/* Entry: 1000287a8; end: 1000287ab; +[SCTracingSessionServicesLoader loadTracingSessionServicesIfEnabled] */

/* WARNING: Removing unreachable block (ram,0x000100028bec) */

void FUN_1000287a8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 *apuStack_160 [3];
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  uint uStack_11c;
  undefined8 uStack_118;
  long alStack_110 [3];
  long lStack_f8;
  undefined **ppuStack_f0;
  long alStack_e8 [3];
  long lStack_d0;
  undefined **ppuStack_c8;
  long alStack_c0 [3];
  long lStack_a8;
  undefined **ppuStack_a0;
  long alStack_98 [3];
  long lStack_80;
  undefined **ppuStack_78;
  
  uVar5 = 0;
  FUN_1000287ac();
  FUN_100028df0();
  if ((uVar5 & 1) != 0) {
    pbVar6 = (byte *)0x0;
    FUN_1009cd618();
    func_0x0001037aab50();
    bVar4 = ((ulong)pbVar6 & 0xff) != 2;
    uStack_11c = 0;
    if (bVar4) {
      uStack_11c = (uint)pbVar6;
    }
    uVar15 = 0;
    if (bVar4) {
      uVar15 = param_2;
    }
    uVar1 = 1;
    if (bVar4) {
      uVar1 = param_3;
    }
    uVar2 = 0;
    if (bVar4) {
      uVar2 = param_3 >> 8 & 1;
    }
    FUN_1005e3364();
    bVar3 = *pbVar6;
    uStack_11c = uStack_11c | bVar3;
    uStack_118 = 50000;
    if (bVar3 == 0) {
      uStack_118 = uVar15;
    }
    lVar7 = 0;
    func_0x00010379fb20();
    lVar8 = lVar7;
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x10) = 0;
    lVar9 = 0;
    func_0x00010379facc();
    lVar10 = lVar9;
    func_0x000107c613fc();
    lVar11 = 0;
    lStack_138 = lVar10;
    func_0x00010379fb50();
    lVar12 = lVar11;
    func_0x000107c613fc();
    lVar13 = 0;
    lStack_140 = lVar12;
    func_0x00010379cf40();
    lVar14 = lVar13;
    func_0x000107c613fc();
    ppuStack_78 = &PTR_DAT_110692c08;
    ppuStack_a0 = &PTR_DAT_110692be0;
    ppuStack_c8 = &PTR_DAT_110692c20;
    ppuStack_f0 = &PTR_DAT_110692b90;
    uVar15 = 0;
    lStack_148 = lVar14;
    alStack_110[0] = lVar14;
    lStack_f8 = lVar13;
    alStack_e8[0] = lVar12;
    lStack_d0 = lVar11;
    alStack_c0[0] = lVar10;
    lStack_a8 = lVar9;
    alStack_98[0] = lVar8;
    lStack_80 = lVar7;
    func_0x0001037a5ec4();
    func_0x000107c610f8();
    uStack_130 = uVar15;
    FUN_1000c6518(alStack_98,lVar7);
    puStack_128 = (undefined1 *)apuStack_160;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    puVar17 = (undefined8 *)((long)apuStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(puVar17);
    FUN_1000c6518(alStack_c0,lVar9);
    apuStack_160[2] = puVar17;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    puVar23 = (undefined8 *)((long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12_00 + 0x10))(puVar23);
    FUN_1000c6518(alStack_e8,lVar11);
    apuStack_160[1] = puVar23;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
    puVar21 = (undefined8 *)((long)puVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12_01 + 0x10))(puVar21);
    FUN_1000c6518(alStack_110,lVar13);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
    puVar19 = (undefined8 *)((long)puVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12_02 + 0x10))(puVar19);
    uVar15 = *puVar17;
    uVar18 = *puVar23;
    uVar22 = *puVar21;
    uVar20 = *puVar19;
    uVar16 = 0x100;
    if ((bVar3 & 1) == 0 && uVar2 == 0) {
      uVar16 = 0;
    }
    func_0x000107c6157c(lVar8);
    lVar14 = lStack_138;
    func_0x000107c6157c(lStack_138);
    lVar12 = lStack_140;
    func_0x000107c6157c(lStack_140);
    lVar10 = lStack_148;
    func_0x000107c6157c(lStack_148);
    func_0x0001037a75a0(uVar15,uVar18,uVar22,uVar20,uStack_11c & 1,uStack_118,
                        uVar16 | uVar1 & (bVar3 ^ 0xffffffff) & 1,uStack_130);
    func_0x0001000834e4(alStack_110);
    func_0x0001000834e4(alStack_e8);
    func_0x0001000834e4(alStack_c0);
    func_0x0001000834e4(alStack_98);
    func_0x0001048d8b84(0);
    uVar18 = uVar15;
    func_0x000107c61174(uVar15);
    func_0x0001048d8ae4(uVar15);
    func_0x000107c61574(lVar8);
    func_0x000107c61574(lVar14);
    func_0x000107c61574(lVar12);
    func_0x000107c61574(lVar10);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar18);
  }
  return;
}



/* Entry: 1000287ac; end: 1000287cb;  */

void FUN_1000287ac(void)

{
  func_0x000107c61168(&PTR_PTR_112f933f0);
  return;
}



/* Entry: 1000287cc; end: 100028c0b;  */

/* WARNING: Removing unreachable block (ram,0x000100028bec) */

void FUN_1000287cc(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 *apuStack_160 [3];
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  uint uStack_11c;
  undefined8 uStack_118;
  long alStack_110 [3];
  long lStack_f8;
  undefined **ppuStack_f0;
  long alStack_e8 [3];
  long lStack_d0;
  undefined **ppuStack_c8;
  long alStack_c0 [3];
  long lStack_a8;
  undefined **ppuStack_a0;
  long alStack_98 [3];
  long lStack_80;
  undefined **ppuStack_78;
  
  uVar5 = 0;
  FUN_1000287ac();
  FUN_100028df0();
  if ((uVar5 & 1) != 0) {
    pbVar6 = (byte *)0x0;
    FUN_1009cd618();
    func_0x0001037aab50();
    bVar4 = ((ulong)pbVar6 & 0xff) != 2;
    uStack_11c = 0;
    if (bVar4) {
      uStack_11c = (uint)pbVar6;
    }
    uVar15 = 0;
    if (bVar4) {
      uVar15 = param_2;
    }
    uVar1 = 1;
    if (bVar4) {
      uVar1 = param_3;
    }
    uVar2 = 0;
    if (bVar4) {
      uVar2 = param_3 >> 8 & 1;
    }
    FUN_1005e3364();
    bVar3 = *pbVar6;
    uStack_11c = uStack_11c | bVar3;
    uStack_118 = 50000;
    if (bVar3 == 0) {
      uStack_118 = uVar15;
    }
    lVar7 = 0;
    func_0x00010379fb20();
    lVar8 = lVar7;
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x10) = 0;
    lVar9 = 0;
    func_0x00010379facc();
    lVar10 = lVar9;
    func_0x000107c613fc();
    lVar11 = 0;
    lStack_138 = lVar10;
    func_0x00010379fb50();
    lVar12 = lVar11;
    func_0x000107c613fc();
    lVar13 = 0;
    lStack_140 = lVar12;
    func_0x00010379cf40();
    lVar14 = lVar13;
    func_0x000107c613fc();
    ppuStack_78 = &PTR_DAT_110692c08;
    ppuStack_a0 = &PTR_DAT_110692be0;
    ppuStack_c8 = &PTR_DAT_110692c20;
    ppuStack_f0 = &PTR_DAT_110692b90;
    uVar15 = 0;
    lStack_148 = lVar14;
    alStack_110[0] = lVar14;
    lStack_f8 = lVar13;
    alStack_e8[0] = lVar12;
    lStack_d0 = lVar11;
    alStack_c0[0] = lVar10;
    lStack_a8 = lVar9;
    alStack_98[0] = lVar8;
    lStack_80 = lVar7;
    func_0x0001037a5ec4();
    func_0x000107c610f8();
    uStack_130 = uVar15;
    FUN_1000c6518(alStack_98,lVar7);
    puStack_128 = (undefined1 *)apuStack_160;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    puVar17 = (undefined8 *)((long)apuStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(puVar17);
    FUN_1000c6518(alStack_c0,lVar9);
    apuStack_160[2] = puVar17;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    puVar23 = (undefined8 *)((long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12_00 + 0x10))(puVar23);
    FUN_1000c6518(alStack_e8,lVar11);
    apuStack_160[1] = puVar23;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
    puVar21 = (undefined8 *)((long)puVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12_01 + 0x10))(puVar21);
    FUN_1000c6518(alStack_110,lVar13);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
    puVar19 = (undefined8 *)((long)puVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12_02 + 0x10))(puVar19);
    uVar15 = *puVar17;
    uVar18 = *puVar23;
    uVar22 = *puVar21;
    uVar20 = *puVar19;
    uVar16 = 0x100;
    if ((bVar3 & 1) == 0 && uVar2 == 0) {
      uVar16 = 0;
    }
    func_0x000107c6157c(lVar8);
    lVar14 = lStack_138;
    func_0x000107c6157c(lStack_138);
    lVar12 = lStack_140;
    func_0x000107c6157c(lStack_140);
    lVar10 = lStack_148;
    func_0x000107c6157c(lStack_148);
    func_0x0001037a75a0(uVar15,uVar18,uVar22,uVar20,uStack_11c & 1,uStack_118,
                        uVar16 | uVar1 & (bVar3 ^ 0xffffffff) & 1,uStack_130);
    func_0x0001000834e4(alStack_110);
    func_0x0001000834e4(alStack_e8);
    func_0x0001000834e4(alStack_c0);
    func_0x0001000834e4(alStack_98);
    func_0x0001048d8b84(0);
    uVar18 = uVar15;
    func_0x000107c61174(uVar15);
    func_0x0001048d8ae4(uVar15);
    func_0x000107c61574(lVar8);
    func_0x000107c61574(lVar14);
    func_0x000107c61574(lVar12);
    func_0x000107c61574(lVar10);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar18);
  }
  return;
}



/* Entry: 100028c0c; end: 100028def;  */

undefined1  [16] FUN_100028c0c(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  lVar2 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12_01;
  FUN_100028ef0(lVar9);
  FUN_100029394(lVar9,lVar7);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar3 + -8);
  pcVar10 = *(code **)(lVar11 + 0x30);
  lVar2 = lVar7;
  (*pcVar10)(lVar7,1,lVar3);
  bVar1 = (int)lVar2 != 1;
  if (bVar1) {
    func_0x000107c5ed98(lVar8,0x6175676563617274,0xea00000000006472,0);
    (**(code **)(lVar11 + 8))(lVar7,lVar3);
  }
  else {
    func_0x0001000293e4(lVar7);
  }
  (**(code **)(lVar11 + 0x38))(lVar8,!bVar1,1,lVar3);
  FUN_100029394(lVar8,puVar6);
  uVar5 = 1;
  puVar4 = puVar6;
  (*pcVar10)(puVar6,1,lVar3);
  if ((int)puVar4 == 1) {
    func_0x0001000293e4(lVar8);
    func_0x0001000293e4(lVar9);
    func_0x0001000293e4(puVar6);
    puVar4 = (undefined1 *)0x0;
    uVar5 = 0;
  }
  else {
    func_0x000107c5edc4();
    func_0x0001000293e4(lVar8);
    func_0x0001000293e4(lVar9);
    (**(code **)(lVar11 + 8))(puVar6,lVar3);
  }
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = puVar4;
  return auVar12;
}



/* Entry: 100028df0; end: 100028eaf;  */

undefined1 FUN_100028df0(undefined8 param_1,long param_2)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  long lStack_38;
  undefined1 uStack_21;
  
  FUN_100028c0c();
  if (param_2 == 0) {
    uStack_21 = 0;
  }
  else {
    if (lRam0000000112f933a0 != -1) {
      func_0x000107c61568(0x112f933a0,FUN_10002942c);
    }
    uStack_40 = param_1;
    lStack_38 = param_2;
    func_0x000107c5ffe4(&uStack_21,FUN_1000296f0,auStack_50,PTR___sSbN_11034dd40);
    func_0x000107c6142c(param_2);
  }
  return uStack_21;
}



/* Entry: 100028eb0; end: 100028eef;  */

undefined8 FUN_100028eb0(void)

{
  if (lRam000000011368aeb0 != -1) {
    func_0x000107c61568(0x11368aeb0,0x1000290d0);
  }
  return 0x11381552a;
}



/* Entry: 100028ef0; end: 1000292e7;  */

void FUN_100028ef0(undefined8 param_1,char *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  FUN_100028eb0();
  if (*param_2 == '\x01') {
    puVar6 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c61168();
    func_0x000107c4c12c();
    func_0x000107c61180();
    puVar1 = puVar6;
    func_0x000107c51758();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    if (puVar1 == (undefined *)0x0) {
      param_3 = 0x800000010ef3e240;
      puVar6 = (undefined *)0xd000000000000016;
    }
    else {
      puVar6 = puVar1;
      func_0x000107c5faec(puVar1);
      func_0x000107c61170(puVar1);
    }
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    func_0x000107c5fadc(puVar6,param_3);
    func_0x000107c6142c(param_3);
    puVar3 = puVar1;
    func_0x000107c403a8();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar6);
    if (puVar3 == (undefined *)0x0) {
      uVar5 = 1;
      goto LAB_100029098;
    }
    func_0x000107c5edb4(param_1,puVar3);
    func_0x000107c61170(puVar3);
  }
  else {
    lVar2 = 9;
    func_0x000107c60b04(9,1,1);
    func_0x000107c61180();
    lVar4 = lVar2;
    puVar6 = PTR___sSSN_11034da80;
    func_0x000107c5fc54();
    func_0x000107c61170(lVar2);
    if (*(long *)(lVar4 + 0x10) == 0) {
      func_0x000107c6142c(lVar4);
      func_0x000107c60b1c();
      func_0x000107c61180();
      lVar2 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
    }
    else {
      lVar2 = *(long *)(lVar4 + 0x20);
      puVar6 = *(undefined **)(lVar4 + 0x28);
      func_0x000107c61434(puVar6);
      func_0x000107c6142c(lVar4);
    }
    func_0x000107c5ed7c(param_1,lVar2,puVar6,1);
    func_0x000107c6142c(puVar6);
  }
  uVar5 = 0;
LAB_100029098:
  lVar4 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x0001000290c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1,uVar5,1,lVar4);
  return;
}



/* Entry: 1000292e8; end: 100029393;  */

undefined1  [16] FUN_1000292e8(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar3 == param_1 && uVar2 == param_2) ||
         (func_0x000107c605b8(uVar3,uVar2,param_1,param_2,0), (uVar3 & 1) != 0)) {
        uVar4 = 1;
        goto LAB_10002937c;
      }
      param_3 = param_3 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  uVar4 = 0;
LAB_10002937c:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 100029394; end: 10002942b;  */

undefined8 FUN_100029394(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10002942c; end: 1000295c3;  */

void FUN_10002942c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5ffd8();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  FUN_1000295c4(0);
  func_0x000107c5f808(lVar3);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100029608();
  uVar6 = 0x112d4ac70;
  FUN_1000285a8(0x112d4ac70,&UNK_10d911480);
  uVar5 = uVar6;
  func_0x00010002964c();
  func_0x000107c60264(lVar8,&puStack_68,uVar6,uVar5,lVar2,uVar4);
  (**(code **)(lVar9 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lVar1);
  uVar6 = 0xd00000000000001b;
  func_0x000107c5ffec(0xd00000000000001b,0x800000010f1647a0,lVar3,lVar8,puVar7,0);
  uRam0000000112f933a8 = uVar6;
  return;
}



/* Entry: 1000295c4; end: 10002969b;  */

void FUN_1000295c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4ac60 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d4ac60 = puVar1;
  return;
}



/* Entry: 10002969c; end: 1000296ef;  */

ulong FUN_10002969c(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 != 0) {
    return *param_1 & 0xfffffffffffffffe;
  }
  uVar1 = 0xff;
  func_0x000107c6151c(0xff,(long)param_2 + (long)(int)*param_2,*param_2 >> 0x20,0,0);
  *param_1 = uVar1 | 1;
  return uVar1 & 0xfffffffffffffffe;
}



/* Entry: 1000296f0; end: 100029747;  */

void FUN_1000296f0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fb28(uVar2,*(undefined8 *)(unaff_x20 + 0x18));
  iVar1 = (int)uVar2 + 0x20;
  func_0x000107c616a4();
  func_0x000107c61574(uVar2);
  *(bool *)param_1 = iVar1 == 0;
  return;
}



/* Entry: 100029748; end: 100029763; +[SCTracingSessionServicesBinder sharedTracingSessionServices] */

void FUN_100029748(void)

{
  func_0x000107c615f0(uRam000000011309bf88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100029764; end: 100029767; +[SCAppLaunchSignaler signalLoadEnd] */

/* WARNING: Possible PIC construction at 0x0001000297c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100029894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000297c4) */
/* WARNING: Removing unreachable block (ram,0x000100029804) */
/* WARNING: Removing unreachable block (ram,0x000100029890) */
/* WARNING: Removing unreachable block (ram,0x000100029864) */
/* WARNING: Removing unreachable block (ram,0x00010002987c) */
/* WARNING: Removing unreachable block (ram,0x000100029898) */
/* WARNING: Removing unreachable block (ram,0x0001000298c0) */
/* WARNING: Removing unreachable block (ram,0x0001000298ec) */
/* WARNING: Removing unreachable block (ram,0x00010002990c) */
/* WARNING: Removing unreachable block (ram,0x000100029900) */
/* WARNING: Removing unreachable block (ram,0x0001000298d8) */

void FUN_100029764(undefined8 *param_1)

{
  func_0x000107c6106c();
  puRam0000000113813738 = param_1;
  FUN_1000298f0();
  func_0x000107c61428();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)("G2X: STATIC_INITS",*param_1);
  return;
}



/* Entry: 100029768; end: 1000298ef;  */

/* WARNING: Possible PIC construction at 0x0001000297c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100029894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000297c4) */
/* WARNING: Removing unreachable block (ram,0x000100029804) */
/* WARNING: Removing unreachable block (ram,0x000100029890) */
/* WARNING: Removing unreachable block (ram,0x000100029864) */
/* WARNING: Removing unreachable block (ram,0x00010002987c) */
/* WARNING: Removing unreachable block (ram,0x000100029898) */
/* WARNING: Removing unreachable block (ram,0x0001000298c0) */
/* WARNING: Removing unreachable block (ram,0x0001000298ec) */
/* WARNING: Removing unreachable block (ram,0x00010002990c) */
/* WARNING: Removing unreachable block (ram,0x000100029900) */
/* WARNING: Removing unreachable block (ram,0x0001000298d8) */

void FUN_100029768(undefined8 *param_1)

{
  func_0x000107c6106c();
  puRam0000000113813738 = param_1;
  FUN_1000298f0();
  func_0x000107c61428();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)("G2X: STATIC_INITS",*param_1);
  return;
}



/* Entry: 1000298f0; end: 100029973;  */

undefined8 FUN_1000298f0(void)

{
  if (lRam000000011309bf48 != -1) {
    func_0x000107c61568(0x11309bf48,0x100029950);
  }
  return 0x113815538;
}



/* Entry: 100029974; end: 100029a13; -[SCTracer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100029974(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_11309bf50;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  FUN_1000285a8(0x11309bf40,&UNK_10dd467d0);
  func_0x000107c613fc();
  ppuVar3 = &puStack_38;
  FUN_100029ad0();
  *(undefined ***)(param_1 + lVar1) = ppuVar3;
  func_0x000107c61614(param_1 + _DAT_11309bf58,0);
  lStack_48 = param_1;
  lStack_40 = lVar2;
  func_0x000107c61154(&lStack_48,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100029a14; end: 100029a1f;  */

void FUN_100029a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e824dd0);
  return;
}



/* Entry: 100029a20; end: 100029a4b;  */

void FUN_100029a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,param_5);
  return;
}



/* Entry: 100029a4c; end: 100029a4f;  */

void FUN_100029a4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 100029a50; end: 100029acf;  */

void FUN_100029a50(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBOWV_11034d658 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61524(param_1,0,2,&puStack_30,param_1 + 0x58);
  }
  return;
}



/* Entry: 100029ad0; end: 100029b9b;  */

void FUN_100029ad0(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  lVar1 = 1;
  func_0x000107c60f6c();
  unaff_x20[2] = lVar1;
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),param_1);
  return;
}



/* Entry: 100029b9c; end: 100029d23;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100029b9c(undefined4 param_1,undefined1 *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_40;
  uint uStack_3c;
  long lStack_38;
  
  puVar5 = &uStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar4 = (int)param_2;
  if (lRam00000001136a3728 != -1) {
    FUN_100029d24();
  }
  if (lRam00000001136a3730 == 0) {
    if (lRam00000001136a3720 != -1) goto LAB_100029cf4;
    bVar2 = SBORROW4(iVar4,iRam00000001136a3710);
    iVar1 = iVar4 - iRam00000001136a3710;
    bVar3 = iVar4 == iRam00000001136a3710;
    if (iVar4 < iRam00000001136a3710) goto LAB_100029c94;
    goto LAB_100029c60;
  }
  uStack_3c = iVar4 << 0x10 | ((uint)param_3 & 0xff) << 8 | param_4 & 0xff;
  uStack_40 = param_1;
  func_0x000107c60e8c(1);
  param_2 = (undefined1 *)puVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
LAB_100029cf0:
  do {
    while( true ) {
      func_0x000107c60e78();
LAB_100029cf4:
      func_0x000107c31928();
      iVar4 = (int)param_2;
      bVar2 = SBORROW4(iVar4,iRam00000001136a3710);
      iVar1 = iVar4 - iRam00000001136a3710;
      bVar3 = iVar4 == iRam00000001136a3710;
      if (iRam00000001136a3710 <= iVar4) break;
LAB_100029c94:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return;
      }
    }
LAB_100029c60:
    if (bVar3 || iVar1 < 0 != bVar2) {
      if ((int)param_3 < iRam00000001136a3714) goto LAB_100029c94;
      if ((int)param_3 <= iRam00000001136a3714) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
          return;
        }
        goto LAB_100029cf0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  } while( true );
}



/* Entry: 100029d24; end: 100029d3b;  */

void FUN_100029d24(void)

{
  int iVar1;
  code *pcVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam00000001136b8690 & 1) == 0) {
    iVar1 = 0x136b8690;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once_f");
      pcRam00000001136b8688 = pcVar2;
      func_0x000107c60e4c(0x1136b8690);
    }
  }
  uStack_40 = 0;
  uStack_38 = 0x100029de8;
  (*pcRam00000001136b8688)(0x1136a3728,&uStack_40,FUN_100029ddc);
  return;
}



/* Entry: 100029d3c; end: 100029ddb;  */

void FUN_100029d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam00000001136b8690 & 1) == 0) {
    iVar1 = 0x136b8690;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once_f");
      pcRam00000001136b8688 = pcVar2;
      func_0x000107c60e4c(0x1136b8690);
    }
  }
  uStack_40 = param_2;
  uStack_38 = param_3;
  (*pcRam00000001136b8688)(param_1,&uStack_40,FUN_100029ddc);
  return;
}



/* Entry: 100029ddc; end: 100029def;  */

void FUN_100029ddc(undefined8 *param_1)

{
  (*(code *)param_1[1])(*param_1);
  return;
}



/* Entry: 100029df0; end: 100029e0b;  */

void FUN_100029df0(code *param_1,undefined8 param_2)

{
  (*param_1)(param_2);
  return;
}



/* Entry: 100029e0c; end: 10002a123;  */

void FUN_100029e0c(ulong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((param_1 & 1) != 0) || (puRam00000001136a3730 == (undefined *)0x0)) {
    if (PTR___availability_version_check_11034be18 != (undefined *)0x0) {
      puRam00000001136a3730 = PTR___availability_version_check_11034be18;
    }
    if (((param_1 & 1) != 0) || (puRam00000001136a3730 == (undefined *)0x0)) {
      puVar1 = (undefined8 *)0xfffffffffffffffe;
      func_0x000107c60f9c(0xfffffffffffffffe,"kCFAllocatorNull");
      if (puVar1 != (undefined8 *)0x0) {
        uVar20 = *puVar1;
        pcVar2 = (code *)0xfffffffffffffffe;
        func_0x000107c60f9c(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
        if (pcVar2 != (code *)0x0) {
          pcVar3 = (code *)0xfffffffffffffffe;
          func_0x000107c60f9c(0xfffffffffffffffe,"CFPropertyListCreateWithData");
          pcVar4 = (code *)0xfffffffffffffffe;
          func_0x000107c60f9c(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
          if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
            pcVar5 = (code *)0xfffffffffffffffe;
            func_0x000107c60f9c(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
            if (pcVar5 != (code *)0x0) {
              pcVar6 = (code *)0xfffffffffffffffe;
              func_0x000107c60f9c(0xfffffffffffffffe,"CFDictionaryGetValue");
              if (pcVar6 != (code *)0x0) {
                pcVar7 = (code *)0xfffffffffffffffe;
                func_0x000107c60f9c(0xfffffffffffffffe,"CFGetTypeID");
                if (pcVar7 != (code *)0x0) {
                  pcVar8 = (code *)0xfffffffffffffffe;
                  func_0x000107c60f9c(0xfffffffffffffffe,"CFStringGetTypeID");
                  if (pcVar8 != (code *)0x0) {
                    pcVar9 = (code *)0xfffffffffffffffe;
                    func_0x000107c60f9c(0xfffffffffffffffe,"CFStringGetCString");
                    if (pcVar9 != (code *)0x0) {
                      pcVar10 = (code *)0xfffffffffffffffe;
                      func_0x000107c60f9c(0xfffffffffffffffe,"CFRelease");
                      if (pcVar10 != (code *)0x0) {
                        pcVar11 = "/System/Library/CoreServices/SystemVersion.plist";
                        func_0x000107c60fc8("/System/Library/CoreServices/SystemVersion.plist","r");
                        if (pcVar11 != (char *)0x0) {
                          func_0x000107c60fdc();
                          pcVar12 = pcVar11;
                          func_0x000107c60fe8();
                          if (-1 < (long)pcVar12) {
                            func_0x000107c612d8(pcVar11);
                            pcVar13 = pcVar12;
                            func_0x000107c610a0();
                            if ((pcVar13 != (char *)0x0) &&
                               (pcVar14 = pcVar13, func_0x000107c60fcc(), pcVar14 == pcVar12)) {
                              lVar15 = 0;
                              (*pcVar2)(0,pcVar13,pcVar12,uVar20);
                              if (lVar15 != 0) {
                                lVar16 = 0;
                                if (pcVar3 == (code *)0x0) {
                                  (*pcVar4)(0,lVar15,0,0);
                                }
                                else {
                                  (*pcVar3)();
                                }
                                if (lVar16 != 0) {
                                  lVar17 = 0;
                                  (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                                  if (lVar17 != 0) {
                                    lVar18 = lVar16;
                                    (*pcVar6)(lVar16,lVar17);
                                    (*pcVar10)(lVar17);
                                    if (lVar18 != 0) {
                                      lVar17 = lVar18;
                                      (*pcVar7)();
                                      lVar19 = lVar17;
                                      (*pcVar8)();
                                      if ((lVar17 == lVar19) &&
                                         ((*pcVar9)(lVar18,auStack_88,0x20,0x8000100),
                                         (int)lVar18 != 0)) {
                                        func_0x000107c613b4(auStack_88,"%d.%d.%d");
                                      }
                                    }
                                  }
                                  (*pcVar10)(lVar16);
                                }
                                (*pcVar10)(lVar15);
                              }
                            }
                          }
                          func_0x000107c60fd0();
                          func_0x000107c60fac(pcVar11);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    func_0x000107c610f4(PTR_PTR_1126bde68);
    func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 10002a124; end: 10002a14f; +[SCGrapheneWebViewPrefetchMetric load] */

void FUN_10002a124(void)

{
  func_0x000107c610f4(PTR_PTR_1126bde68);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10002a150; end: 10002a15b; -[SCGrapheneMetricBase initWithIdentifier:name:] */

void FUN_10002a150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01b7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithIdentifier_name_dimensio_1125e47d0,param_3,param_4,
             PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 10002a15c; end: 10002a207; -[SCGrapheneMetricBase initWithIdentifier:name:dimensions:] */

undefined1 *
FUN_10002a15c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_11270a960;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10002a208; end: 10002a2a7; +[BTCardClient load] */

/* WARNING: Possible PIC construction at 0x00010002a268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a26c) */

void FUN_10002a208(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126be458;
  func_0x000107c61158();
  if (param_1 != puVar1) {
    return;
  }
  puVar1 = PTR_PTR_1126c7f80;
  func_0x000107c5aa34(PTR_PTR_1126c7f80);
  func_0x000107c61180();
  func_0x000107c4fcb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10002a2a8; end: 10002a2fb; +[BTTokenizationService sharedService] */

void FUN_10002a2a8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c2ec0 != -1) {
    FUN_10002a2fc(0x1136c2ec0,&PTR___NSConcreteGlobalBlock_11090e6d8);
  }
  uVar1 = uRam00000001136c2eb8;
  func_0x000107c61174(uRam00000001136c2eb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10002a2fc; end: 10002a3a7;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_10002a2fc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  
  func_0x000107c61174(param_2);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar2;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar2 = pcRam0000000113817d50;
  FUN_10002a3a8(param_2);
  func_0x000107c61180();
  (*pcVar2)(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10002a3a8; end: 10002a477;  */

void FUN_10002a3a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  if ((bRam0000000113817d88 & 1) == 0) {
    lVar2 = 0x113817d88;
    func_0x000107c60e48();
    if ((int)lVar2 != 0) {
      func_0x00010002a478();
      lRam0000000113817d80 = lVar2;
      func_0x000107c60e4c(0x113817d88);
    }
  }
  if (*(long *)(param_1 + 0x10) == lRam0000000113817d80) {
    lVar2 = param_1;
    func_0x000107c61184(param_1);
  }
  else {
    lVar1 = param_1;
    func_0x00010002a4c0();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c61184();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10002a478; end: 10002a53f;  */

undefined8 FUN_10002a478(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  pcVar1 = (code *)0xffffffffffffffff;
  func_0x000107c60f9c(0xffffffffffffffff,"dispatch_block_create");
  lVar2 = 8;
  (*pcVar1)(8,&PTR___NSConcreteGlobalBlock_1107edfa0);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61170();
  return uVar3;
}



/* Entry: 10002a540; end: 10002a55f;  */

void FUN_10002a540(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  return;
}



/* Entry: 10002a560; end: 10002a58b;  */

void FUN_10002a560(long param_1)

{
  func_0x000107c61184();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10002a58c; end: 10002a5b7;  */

void FUN_10002a58c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c7f80;
  func_0x000107c610fc();
  uVar1 = puRam00000001136c2eb8;
  puRam00000001136c2eb8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10002a5b8; end: 10002a5bf;  */

void FUN_10002a5b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10002a5c0; end: 10002a633; -[BTTokenizationService registerType:withTokenizationBlock:] */

/* WARNING: Possible PIC construction at 0x00010002a614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a618) */

void FUN_10002a5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c40794(param_4);
  func_0x000107c5cb94(param_1);
  func_0x000107c61180();
  func_0x000107c56bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10002a634; end: 10002a68b; -[BTTokenizationService tokenizationBlocks] */

void FUN_10002a634(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 8);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10002a68c; end: 10002a6df; +[BTPaymentMethodNonceParser sharedParser] */

void FUN_10002a68c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c2eb0 != -1) {
    FUN_10002a2fc(0x1136c2eb0,&PTR___NSConcreteGlobalBlock_11090e6b8);
  }
  uVar1 = uRam00000001136c2ea8;
  func_0x000107c61174(uRam00000001136c2ea8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10002a6e0; end: 10002a70b;  */

void FUN_10002a6e0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c7f88;
  func_0x000107c610fc();
  uVar1 = puRam00000001136c2ea8;
  puRam00000001136c2ea8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10002a70c; end: 10002a787; -[BTPaymentMethodNonceParser registerType:withParsingBlock:] */

/* WARNING: Possible PIC construction at 0x00010002a764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a768) */

void FUN_10002a70c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c40794(param_4);
    func_0x000107c3ab90(param_1);
    func_0x000107c61180();
    func_0x000107c56bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10002a788; end: 10002a7df; -[BTPaymentMethodNonceParser JSONParsingBlocks] */

void FUN_10002a788(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 8);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10002a7e0; end: 10002a84b;  */

void FUN_10002a7e0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_10002a84c;
  puStack_20 = &UNK_110848088;
  if (lRam0000000113728230 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x113728230,&puStack_38);
  }
  return;
}



/* Entry: 10002a84c; end: 10002a90b;  */

/* WARNING: Possible PIC construction at 0x00010002a894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010002a8c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a898) */
/* WARNING: Removing unreachable block (ram,0x00010002a8cc) */

void FUN_10002a84c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61158(uVar2);
  puVar1 = PTR_s_ig_targetIndexPathForInteractive_1125d7338;
  uVar3 = uVar2;
  func_0x000107c60ef4();
  func_0x000107c60ef4(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__method_exchangeImplementations_11034d178)(uVar3,uVar2);
  return;
}



/* Entry: 10002a90c; end: 10002a977;  */

void FUN_10002a90c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_10002a978;
  puStack_20 = &UNK_110848088;
  if (lRam00000001137fbbe8 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1137fbbe8,&puStack_38);
  }
  return;
}



/* Entry: 10002a978; end: 10002aa3f;  */

void FUN_10002a978(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61158();
  puVar2 = PTR_s_sc_initWithFrame__112630e68;
  puVar1 = PTR_s_initWithFrame__1125e2948;
  uVar4 = uVar3;
  func_0x000107c60ef4();
  uVar5 = uVar3;
  func_0x000107c60ef4(uVar3,puVar2);
  uVar6 = uVar5;
  func_0x000107c610cc();
  uVar7 = uVar5;
  func_0x000107c610d4(uVar5);
  uVar8 = uVar3;
  func_0x000107c60eec(uVar3,puVar1,uVar6,uVar7);
  if ((int)uVar8 != 0) {
    uVar5 = uVar4;
    func_0x000107c610cc(uVar4);
    func_0x000107c610d4(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__class_replaceMethod_11034d140)(uVar3,puVar2,uVar5,uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__method_exchangeImplementations_11034d178)(uVar4,uVar5);
  return;
}



/* Entry: 10002aa40; end: 10002aa83;  */

void FUN_10002aa40(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c6078c(0,0x800,&UNK_110da02a8,PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
  uRam00000001138473b8 = uVar1;
  uRam00000001138473c0 = 0;
  uRam00000001138473c4 = 0;
  return;
}



/* Entry: 10002aa84; end: 10002aab3; -[SCGrapheneMetricBase .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010002aa9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002aaa0) */

void FUN_10002aa84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10002aab4; end: 10002ab3f;  */

void FUN_10002aab4(undefined8 param_1)

{
  func_0x000107c6106c();
  uRam00000001138394a0 = param_1;
  return;
}



/* Entry: 10002ab40; end: 10002ab8f;  */

void FUN_10002ab40(undefined8 param_1)

{
  func_0x000107c6110c();
  uRam000000011369d4a8 = 0;
  uRam000000011369d4a0 = 0;
  uRam000000011369d4b8 = 0;
  uRam000000011369d4b0 = 0;
  uRam000000011369d4c0 = 0x3f800000;
  func_0x000107c60e34(&UNK_104972f9c,0x11369d4a0,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10002ab90; end: 10002ad1b;  */

void FUN_10002ab90(void)

{
  ulong *puVar1;
  double dVar2;
  ulong uStack_18;
  
  uStack_18 = 0x100000000;
  puVar1 = &uStack_18;
  func_0x000107c6109c();
  dRam00000001136a1d40 = (double)NEON_ucvtf(uStack_18 & 0xffffffff);
  dVar2 = (double)NEON_ucvtf(uStack_18 >> 0x20);
  dRam00000001136a1d40 = dRam00000001136a1d40 / dVar2;
  func_0x000107c6106c();
  puRam00000001136a1d48 = puVar1;
  return;
}



/* Entry: 10002ad1c; end: 10002ad77;  */

void FUN_10002ad1c(void)

{
  pcRam0000000113815bf8 = FUN_1004728ec;
  uRam00000001136a22e8 = 0;
  return;
}



/* Entry: 10002ad78; end: 10002ae93;  */

undefined8 FUN_10002ad78(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (puRam0000000113815c78 == (undefined8 *)0x0) {
    if ((bRam00000001130a6528 & 1) == 0) {
      iVar1 = 0x130a6528;
      func_0x000107c60e48();
      if (iVar1 != 0) {
        puVar2 = (undefined8 *)0x8;
        func_0x000107c60e20();
        *puVar2 = &PTR_DAT_1107c7b00;
        puRam00000001130a6520 = puVar2;
        func_0x000107c60e4c(0x1130a6528);
      }
    }
    puRam0000000113815c78 = puRam00000001130a6520;
  }
  if (puRam0000000113815c70 == (undefined8 *)0x0) {
    if ((bRam00000001130a6538 & 1) == 0) {
      iVar1 = 0x130a6538;
      func_0x000107c60e48();
      if (iVar1 != 0) {
        puVar2 = (undefined8 *)0x8;
        func_0x000107c60e20();
        *puVar2 = &PTR_DAT_1107c7fc0;
        puRam00000001130a6530 = puVar2;
        func_0x000107c60e4c(0x1130a6538);
      }
    }
    puRam0000000113815c70 = puRam00000001130a6530;
  }
  return param_1;
}



/* Entry: 10002ae94; end: 10002aed3;  */

void FUN_10002ae94(void)

{
  undefined8 *puVar1;
  
  FUN_10002ad78(0x1136a2bb8);
  puVar1 = (undefined8 *)0x8;
  func_0x000107c60e20();
  *puVar1 = &PTR_DAT_1107c7c20;
  puRam00000001136a2bc0 = puVar1;
  puRam00000001136a2bc8 = puVar1;
  return;
}



/* Entry: 10002aed4; end: 10002aeeb;  */

undefined8 FUN_10002aed4(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (puRam0000000113815c78 == (undefined8 *)0x0) {
    if ((bRam00000001130a6528 & 1) == 0) {
      iVar1 = 0x130a6528;
      func_0x000107c60e48();
      if (iVar1 != 0) {
        puVar2 = (undefined8 *)0x8;
        func_0x000107c60e20();
        *puVar2 = &PTR_DAT_1107c7b00;
        puRam00000001130a6520 = puVar2;
        func_0x000107c60e4c(0x1130a6528);
      }
    }
    puRam0000000113815c78 = puRam00000001130a6520;
  }
  if (puRam0000000113815c70 == (undefined8 *)0x0) {
    if ((bRam00000001130a6538 & 1) == 0) {
      iVar1 = 0x130a6538;
      func_0x000107c60e48();
      if (iVar1 != 0) {
        puVar2 = (undefined8 *)0x8;
        func_0x000107c60e20();
        *puVar2 = &PTR_DAT_1107c7fc0;
        puRam00000001130a6530 = puVar2;
        func_0x000107c60e4c(0x1130a6538);
      }
    }
    puRam0000000113815c70 = puRam00000001130a6530;
  }
  return 0x1136a2bd0;
}



/* Entry: 10002aeec; end: 10002af0f;  */

void FUN_10002aeec(void)

{
  FUN_10002ad78(0x1136a2bd8);
  uRam00000001136a2be0 = 0;
  return;
}



/* Entry: 10002af10; end: 10002af1b;  */

undefined8 FUN_10002af10(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (puRam0000000113815c78 == (undefined8 *)0x0) {
    if ((bRam00000001130a6528 & 1) == 0) {
      iVar1 = 0x130a6528;
      func_0x000107c60e48();
      if (iVar1 != 0) {
        puVar2 = (undefined8 *)0x8;
        func_0x000107c60e20();
        *puVar2 = &PTR_DAT_1107c7b00;
        puRam00000001130a6520 = puVar2;
        func_0x000107c60e4c(0x1130a6528);
      }
    }
    puRam0000000113815c78 = puRam00000001130a6520;
  }
  if (puRam0000000113815c70 == (undefined8 *)0x0) {
    if ((bRam00000001130a6538 & 1) == 0) {
      iVar1 = 0x130a6538;
      func_0x000107c60e48();
      if (iVar1 != 0) {
        puVar2 = (undefined8 *)0x8;
        func_0x000107c60e20();
        *puVar2 = &PTR_DAT_1107c7fc0;
        puRam00000001130a6530 = puVar2;
        func_0x000107c60e4c(0x1130a6538);
      }
    }
    puRam0000000113815c70 = puRam00000001130a6530;
  }
  return 0x1136a2c00;
}



/* Entry: 10002af1c; end: 10002b023;  */

void FUN_10002af1c(void)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined7 uStack_28;
  char cStack_21;
  
  uRam00000001136a2c08 = 0;
  uRam00000001136a2c18 = 0;
  uRam00000001136a2c10 = 0;
  uRam00000001136a2c28 = 0;
  uRam00000001136a2c20 = 0;
  uRam00000001136a2c38 = 0;
  uRam00000001136a2c30 = 0;
  func_0x000107c60e34(&UNK_104ae3dc4,0x1136a2c08,0x100000000);
  uRam0000000113815c80 = 0x1136a2c08;
  FUN_10002b024(&uStack_38,"");
  uRam00000001136a2c40 = 1;
  if (cStack_21 < '\0') {
    FUN_100033dac(0x1136a2c48,uStack_38,uStack_30);
  }
  else {
    uRam00000001136a2c50 = uStack_30;
    uRam00000001136a2c48 = uStack_38;
    uRam00000001136a2c58 = CONCAT17(cStack_21,uStack_28);
  }
  uRam00000001136a2c60 = 0;
  uRam00000001136a2c68 = 0;
  uRam00000001136a2c70 = 0;
  func_0x000107c60e34(&UNK_104ae3dc4,0x1136a2c40,0x100000000);
  if (cStack_21 < '\0') {
    func_0x000107c60e14(uStack_38);
  }
  uRam0000000113815c88 = 0x1136a2c40;
  return;
}



/* Entry: 10002b024; end: 10002b0d3;  */

ulong * FUN_10002b024(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [8];
  undefined1 *puStack_50;
  code *pcStack_48;
  
  uVar2 = param_2;
  func_0x000107c613d0();
  if (0x7ffffffffffffff7 < uVar2) {
    func_0x000104a6fa5c(param_1);
    pcStack_48 = FUN_10002b0d4;
    puVar3 = (ulong *)0x2947bdebdbc7a448;
    puStack_50 = &stack0xfffffffffffffff0;
    FUN_10002b140(0x2947bdebdbc7a448,auStack_5c,auStack_58);
    return puVar3;
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar3 = param_1;
    if (uVar2 == 0) goto LAB_10002b0b0;
  }
  else {
    uVar1 = (uVar2 & 0xfffffffffffffff8) + 8;
    if ((uVar2 | 7) != 0x17) {
      uVar1 = uVar2 | 7;
    }
    puVar3 = (ulong *)(uVar1 + 1);
    func_0x000107c60e20();
    param_1[1] = uVar2;
    param_1[2] = uVar1 + 1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,param_2,uVar2);
LAB_10002b0b0:
  *(undefined1 *)((long)puVar3 + uVar2) = 0;
  return param_1;
}



/* Entry: 10002b0d4; end: 10002b13f;  */

void FUN_10002b0d4(void)

{
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  
  FUN_10002b140(0x2947bdebdbc7a448,auStack_1c,auStack_18);
  return;
}



/* Entry: 10002b140; end: 10002b27f;  */

void FUN_10002b140(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010002b16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x10002b170)();
  return;
}



/* Entry: 10002b280; end: 10002b2eb;  */

/* WARNING: Removing unreachable block (ram,0x00010002b298) */

void FUN_10002b280(void)

{
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  
  FUN_10002b2ec(0xed9fb78bcf5556c2,auStack_1c,auStack_18);
  return;
}



/* Entry: 10002b2ec; end: 10002b3f3;  */

void FUN_10002b2ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010002b318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x10002b31c)();
  return;
}



/* Entry: 10002b3f4; end: 10002b45f;  */

/* WARNING: Removing unreachable block (ram,0x00010002b40c) */

void FUN_10002b3f4(void)

{
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  
  FUN_10002b460(0x8ad1d2633cfa9638,auStack_1c,auStack_18);
  return;
}



/* Entry: 10002b460; end: 10002b53f;  */

void FUN_10002b460(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010002b48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x10002b490)();
  return;
}



/* Entry: 10002b540; end: 10002b5ab;  */

/* WARNING: Removing unreachable block (ram,0x00010002b558) */

void FUN_10002b540(void)

{
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  
  FUN_10002b5ac(0x7e1ba7e74ec63be8,auStack_1c,auStack_18);
  return;
}



/* Entry: 10002b5ac; end: 10002b6a7;  */

void FUN_10002b5ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010002b5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x10002b5d8)();
  return;
}



/* Entry: 10002b6a8; end: 10002b747;  */

void FUN_10002b6a8(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000107c6110c();
  func_0x000107c60e34(PTR___ZNSt3__15mutexD1Ev_110346798,0x1130a85d8,0x100000000);
  func_0x000107c60e34(&UNK_104bfe290,0x1136a3a50,0x100000000);
  puVar1 = PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340;
  func_0x000107c60e34(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                      ,0x1130a8590,0x100000000);
  func_0x000107c60e34(puVar1,0x1130a85a8,0x100000000);
  func_0x000107c60e34(puVar1,0x1130a85c0,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10002b748; end: 10002b80b;  */

undefined8 * FUN_10002b748(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 1);
  param_1[3] = puRam0000000113846988;
  puRam0000000113846988 = param_1;
  return param_1;
}



/* Entry: 10002b80c; end: 10002b837;  */

void FUN_10002b80c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107edf70;
  return;
}



/* Entry: 10002b838; end: 10002b86b;  */

void FUN_10002b838(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 10002b86c; end: 10002b88f;  */

void FUN_10002b86c(void)

{
  FUN_10002b838(0x1136bb510,"circumstance-engine-repository/");
  return;
}



/* Entry: 10002b890; end: 10002b8a7;  */

void FUN_10002b890(void)

{
  return;
}



/* Entry: 10002b8a8; end: 10002b90f;  */

void FUN_10002b8a8(undefined8 param_1,long param_2)

{
  func_0x00010002b898();
  FUN_10002b940();
  if (param_2 != 0) {
    FUN_10002b958();
    func_0x00010002b9b8();
  }
  func_0x00010002b9e0();
  FUN_10002b9fc();
  return;
}



/* Entry: 10002b910; end: 10002b93f;  */

void FUN_10002b910(void)

{
  undefined1 uStack_11;
  
  uStack_11 = 0;
  FUN_10002b8a8(0x1136bb528,0x34,&uStack_11);
  return;
}



/* Entry: 10002b940; end: 10002b957;  */

void FUN_10002b940(void)

{
  return;
}



/* Entry: 10002b958; end: 10002b9af;  */

/* WARNING: Possible PIC construction at 0x00010002b96c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002b970) */
/* WARNING: Removing unreachable block (ram,0x00010002b9b0) */

void FUN_10002b958(undefined8 param_1,long param_2)

{
  if (param_2 < 0) {
    func_0x000104bd9bc0();
  }
  else {
    func_0x00010002b94c();
  }
  func_0x000107c60e20(param_2);
  return;
}



/* Entry: 10002b9b0; end: 10002b9fb;  */

void FUN_10002b9b0(void)

{
  return;
}



/* Entry: 10002b9fc; end: 10002ba23;  */

void FUN_10002b9fc(void)

{
  uint extraout_w8;
  
  func_0x00010002b9f0();
  if ((extraout_w8 & 1) == 0) {
    func_0x000100100fd4();
  }
  return;
}



/* Entry: 10002ba24; end: 10002ba33;  */

void FUN_10002ba24(void)

{
  return;
}



/* Entry: 10002ba34; end: 10002bb17;  */

void FUN_10002ba34(void)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  float *pfVar8;
  double dVar9;
  
  uVar5 = 0;
  pfVar6 = (float *)0x1136bd828;
  while (uVar5 != 0x10) {
    uVar5 = uVar5 + 1;
    lVar7 = -0x80;
    pfVar8 = pfVar6;
    do {
      dVar9 = (double)(uVar5 & 0xffffffff) * 0.02454369260617026 * (double)((int)lVar7 + 0x81);
      func_0x000107c60f1c();
      *pfVar8 = (float)dVar9 * 0.17677669;
      lVar7 = lVar7 + 2;
      pfVar8 = pfVar8 + 1;
    } while (lVar7 != 0);
    pfVar6 = pfVar6 + 0x40;
  }
  lVar7 = 0x1136bd828;
  puVar2 = (undefined4 *)0x1136be828;
  for (lVar1 = 0; lVar1 != 0x10; lVar1 = lVar1 + 1) {
    puVar4 = puVar2;
    for (lVar3 = 0; lVar3 != 0x100; lVar3 = lVar3 + 4) {
      *puVar4 = *(undefined4 *)(lVar7 + lVar3);
      puVar4 = puVar4 + 0x10;
    }
    lVar7 = lVar7 + 0x100;
    puVar2 = puVar2 + 1;
  }
  return;
}



/* Entry: 10002bb18; end: 10002bc5f;  */

void FUN_10002bb18(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c6110c();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c();
  func_0x000107c61180();
  puRam00000001136c37b8 = puVar1;
  func_0x000107c61108(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  func_0x000107c60e78();
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  func_0x000107c61158();
  puVar1 = PTR_s_sc_supportedInterfaceOrientation_1125322e8;
  puVar3 = puVar2;
  func_0x000107c60ef4();
  func_0x000107c60ef4(puVar2,puVar1);
  puVar1 = puVar3;
  func_0x000107c610cc();
  puRam00000001136c46c0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__method_exchangeImplementations_11034d178)(puVar3,puVar2);
  return;
}



/* Entry: 10002bc60; end: 10002bccf;  */

void FUN_10002bc60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  func_0x000107c61158();
  puVar3 = PTR_s_sc_supportedInterfaceOrientation_1125322e8;
  puVar2 = puVar1;
  func_0x000107c60ef4();
  func_0x000107c60ef4(puVar1,puVar3);
  puVar3 = puVar2;
  func_0x000107c610cc();
  puRam00000001136c46c0 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__method_exchangeImplementations_11034d178)(puVar2,puVar1);
  return;
}



/* Entry: 10002bcd0; end: 10002bd07;  */

void FUN_10002bcd0(void)

{
  func_0x000107c6110c();
  uRam00000001136ca190 = *(undefined8 *)PTR__UIScrollViewDecelerationRateNormal_110345db0;
  uRam00000001136ca198 = *(undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}


