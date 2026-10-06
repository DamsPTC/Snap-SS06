/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10016517c; end: 1001651db;  */

void FUN_10016517c(void)

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



/* Entry: 1001651dc; end: 100165313; -[KSCrash init] */

undefined8 FUN_1001651dc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  lVar1 = 0xd;
  func_0x000107c60b04(0xd,1,1);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c40808();
  if (lVar2 == 0) {
    func_0x000106ae5c20();
    func_0x000106ae5c64();
    func_0x000106aeea5c();
  }
  else {
    func_0x000107c4d9a0();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c4adac();
    if (lVar2 == 0) {
      func_0x000106ae5c20();
      func_0x000106ae5c64();
      func_0x000106aeea5c();
    }
    else {
      FUN_10016a4bc();
      func_0x000107c61180();
      ppuVar3 = &PTR____CFConstantStringClassReference_110e6f418;
      func_0x000107c5c168(&PTR____CFConstantStringClassReference_110e6f418);
      func_0x000107c61180();
      func_0x00010016a544();
      func_0x000107c5c184(ppuVar3);
      func_0x000107c61180();
      func_0x000107c5c168(lVar1);
      func_0x000107c61180();
      FUN_10017d7d0();
      func_0x000107c61170(ppuVar3);
    }
    func_0x00010017d7d8();
  }
  func_0x00010016a534();
  func_0x000107c45940(param_1);
  func_0x00010016a544();
  return param_1;
}



/* Entry: 100165314; end: 100165447; -[SCLegacyMigrationUserSessionRepository initWithLegacyRepository:preferenceBasedRepository:grapheneRegistry:] */

undefined1 *
FUN_100165314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126e9d00;
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
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100165448; end: 1001654b7;  */

void FUN_100165448(void)

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



/* Entry: 1001654b8; end: 10016562f; -[SCLegacyMigrationUserSessionRepository userSession] */

void FUN_1001654b8(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c5da60();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x000107c5da60();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = auStack_68;
    func_0x000107c6111c(puVar2,auStack_38);
    func_0x000107c61174(uVar3);
    func_0x000107c4e524(uVar4);
    func_0x000107c61170(uVar3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1001d794c;
    puStack_48 = &UNK_1108434b0;
    puVar2 = auStack_40;
    func_0x000107c6111c(puVar2,auStack_38);
    func_0x000107c4e524(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5da60(uVar3);
    func_0x000107c61180();
  }
  func_0x000107c61120(puVar2);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100165630; end: 1001656db; -[SCPreferencesBasedUserSessionRepository userSession] */

void FUN_100165630(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1001656dc; end: 10016598b;  */

/* WARNING: Possible PIC construction at 0x0001001659a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001659a4) */
/* WARNING: Removing unreachable block (ram,0x0001001659ac) */
/* WARNING: Removing unreachable block (ram,0x0001001659b4) */
/* WARNING: Removing unreachable block (ram,0x000100165a50) */
/* WARNING: Removing unreachable block (ram,0x0001001659cc) */
/* WARNING: Removing unreachable block (ram,0x0001001659d8) */
/* WARNING: Removing unreachable block (ram,0x0001001659e0) */
/* WARNING: Removing unreachable block (ram,0x0001001659e8) */
/* WARNING: Removing unreachable block (ram,0x0001001659f8) */
/* WARNING: Removing unreachable block (ram,0x000100165a24) */
/* WARNING: Removing unreachable block (ram,0x000100165a40) */
/* WARNING: Removing unreachable block (ram,0x000100165a08) */
/* WARNING: Removing unreachable block (ram,0x000100165a10) */

undefined8 * FUN_1001656dc(long param_1,long param_2,undefined1 *param_3,int param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [32];
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_70 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaaaaaaaaaaaaaa;
  FUN_10012dd4c(auStack_d8,&UNK_10f745450,&UNK_10f74542c,0xe1);
  FUN_10012defc(&uStack_b0,auStack_d8,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    puStack_b8 = auStack_d8;
    func_0x000107c35cb0(&UNK_10f74523a,&puStack_b8);
  }
  if (param_4 < 0) {
    puVar6 = (undefined8 *)0xffffffff;
  }
  else {
    uVar8 = 0;
    do {
      uVar7 = (uint)uVar8;
      while( true ) {
        piVar3 = (int *)(ulong)*(uint *)(param_1 + 8);
        func_0x000107c61200(piVar3,param_3 + uVar8,(long)(int)(param_4 - uVar7),param_2 + uVar8);
        if (piVar3 != (int *)0xffffffffffffffff) break;
        func_0x000107c60e5c();
        if (*piVar3 != 4) {
          piVar3 = (int *)0xffffffff;
          goto LAB_1001657d0;
        }
      }
      if ((int)piVar3 < 1) break;
      uVar7 = uVar7 + (int)piVar3;
      uVar8 = (ulong)uVar7;
    } while ((int)uVar7 < param_4);
LAB_1001657d0:
    uVar1 = (uint)piVar3;
    if (uVar7 != 0) {
      uVar1 = uVar7;
    }
    puVar6 = (undefined8 *)(ulong)uVar1;
  }
  puVar4 = &uStack_b0;
  func_0x0001001331dc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    uVar10 = 0x10016583c;
    func_0x000107c60e78();
    puVar2 = auStack_e0;
    while( true ) {
      puVar9 = (undefined1 *)((long)register0x00000008 + -0x10);
      register0x00000008 = (BADSPACEBASE *)(puVar2 + -0xb0);
      *(undefined1 **)(puVar2 + -0x20) = param_3;
      *(undefined8 **)(puVar2 + -0x18) = puVar6;
      *(undefined1 **)(puVar2 + -0x10) = puVar9;
      *(undefined8 *)(puVar2 + -8) = uVar10;
      *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puVar5 = puVar4;
      if (*(int *)(puVar4 + 1) != -1) {
        *(undefined8 *)(puVar2 + -0x48) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)(puVar2 + -0x50) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)(puVar2 + -0x38) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)(puVar2 + -0x40) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)(puVar2 + -0x68) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)(puVar2 + -0x70) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)(puVar2 + -0x58) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)(puVar2 + -0x60) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)(puVar2 + -0x78) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)(puVar2 + -0x80) = 0xaaaaaaaaaaaaaaaa;
        param_3 = puVar2 + -0xa8;
        FUN_10012dd4c(puVar2 + -0xa8,&UNK_10f745426,&UNK_10f74542c,0xcb);
        FUN_10012defc(puVar2 + -0x80,puVar2 + -0xa8,0,0);
        if ((bRam000000011336f9a8 & 0x19) == 0) {
          uVar7 = *(uint *)(puVar4 + 1);
        }
        else {
          *(undefined1 **)(puVar2 + -0x88) = param_3;
          func_0x000107c35cb0(&UNK_10f74523a,puVar2 + -0x88);
          uVar7 = *(uint *)(puVar4 + 1);
        }
        if (uVar7 != 0xffffffff) {
          piVar3 = (int *)(ulong)uVar7;
          func_0x000107c60f10();
          if (((int)piVar3 != 0) &&
             ((((int)piVar3 != -1 || (func_0x000107c60e5c(), *piVar3 != 4)) &&
              (func_0x000107c60e5c(), *piVar3 == 9)))) {
            func_0x000107c2ca5c(puVar2 + -0xa8,&UNK_10f74421b,0x2b);
            if (*(long **)(puVar2 + -0xa8) != (long *)0x0) {
              (**(code **)(**(long **)(puVar2 + -0xa8) + 8))();
            }
          }
        }
        *(undefined4 *)(puVar4 + 1) = 0xffffffff;
        puVar5 = (undefined8 *)(puVar2 + -0x80);
        func_0x0001001331dc();
        puVar6 = puVar4;
      }
      puVar4 = puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x28)) break;
      func_0x000107c60e78();
      *(undefined1 **)(puVar2 + -0xd0) = param_3;
      *(undefined8 **)(puVar2 + -200) = puVar6;
      *(undefined1 **)(puVar2 + -0xc0) = puVar2 + -0x10;
      *(code **)(puVar2 + -0xb8) = FUN_10016598c;
      uVar10 = 0x1001659a4;
      puVar2 = puVar2 + -0xe0;
      puVar6 = puVar4;
    }
    return puVar4;
  }
  return puVar6;
}



/* Entry: 10016598c; end: 100165a5b;  */

undefined8 * FUN_10016598c(undefined8 *param_1)

{
  code *pcVar1;
  int *piVar2;
  long *plStack_28;
  
  func_0x00010016583c();
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    func_0x000107c60e14(param_1[2]);
  }
  *param_1 = &PTR_DAT_110cd4978;
  if (*(char *)((long)param_1 + 0xc) != '\x01') {
    piVar2 = (int *)(ulong)*(uint *)(param_1 + 1);
    if (*(uint *)(param_1 + 1) != 0xffffffff) {
      func_0x000107c60f10();
      if (((int)piVar2 != 0) &&
         ((((int)piVar2 != -1 || (func_0x000107c60e5c(), *piVar2 != 4)) &&
          (func_0x000107c60e5c(), *piVar2 == 9)))) {
        func_0x000107c2ca5c(&plStack_28,&UNK_10f74421b,0x2b);
        if (plStack_28 != (long *)0x0) {
          (**(code **)(*plStack_28 + 8))();
        }
      }
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x100165a54);
  (*pcVar1)();
}



/* Entry: 100165a5c; end: 100165cfb;  */

undefined8 FUN_100165a5c(undefined8 param_1)

{
  if ((bRam000000011336f9a8 & 0x19) == 0) {
    return param_1;
  }
  func_0x000107c2ca88(0x45,0x11336f9a8,&UNK_10f745314,0,0,0,0);
  return param_1;
}



/* Entry: 100165cfc; end: 100165d43;  */

undefined8 * FUN_100165cfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    return param_1;
  }
  FUN_100033dac(param_1,*param_2,param_2[1]);
  return param_1;
}



/* Entry: 100165d44; end: 100165ee7;  */

void FUN_100165d44(undefined8 *param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar11;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  ulong uVar12;
  undefined1 *unaff_x29;
  undefined1 *puVar13;
  code *unaff_x30;
  
  puVar4 = &stack0xffffffffffffffc0;
  puVar13 = &stack0xfffffffffffffff0;
  param_1[1] = 0xaaaaaaaaaaaaaaaa;
  param_1[2] = 0xaaaaaaaaaaaaaaaa;
  *param_1 = 0xaaaaaaaaaaaaaaaa;
  cVar3 = *(char *)((long)param_2 + 0x17);
  puVar11 = (undefined8 *)*param_2;
  if (-1 < (long)cVar3) {
    puVar11 = param_2;
  }
  puVar7 = (undefined8 *)param_2[1];
  if (-1 < cVar3) {
    puVar7 = (undefined8 *)(long)cVar3;
  }
  if ((undefined8 *)0x7ffffffffffffff7 < puVar7) {
    func_0x000107c35c54();
    uVar12 = unaff_x22;
    goto LAB_100165ee4;
  }
  if (puVar7 < (undefined8 *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar7;
    puVar5 = param_1;
    if (puVar7 != (undefined8 *)0x0) goto LAB_100165dcc;
  }
  else {
    puVar1 = (undefined8 *)0x19;
    if (((ulong)puVar7 | 7) != 0x17) {
      puVar1 = (undefined8 *)(((ulong)puVar7 | 7) + 1);
    }
    puVar5 = puVar1;
    func_0x000107c60e20();
    param_1[1] = puVar7;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = puVar5;
LAB_100165dcc:
    func_0x000107c610b8(puVar5,puVar11,puVar7);
  }
  *(undefined1 *)((long)puVar5 + (long)puVar7) = 0;
  bVar2 = *(byte *)((long)param_1 + 0x17);
  uVar12 = (ulong)bVar2;
  puVar11 = (undefined8 *)*param_1;
  uVar8 = param_1[1];
  param_4 = uVar8;
  puVar7 = puVar11;
  if (-1 < (char)bVar2) {
    param_4 = uVar12;
    puVar7 = param_1;
  }
  param_3 = 0;
  param_2 = puVar7;
  func_0x000107c610ac();
  uVar6 = (long)param_2 - (long)puVar7;
  if (param_2 != (undefined8 *)0x0 && uVar6 != 0xffffffffffffffff) {
    if ((char)bVar2 < '\0') {
      if (uVar8 < uVar6) goto LAB_100165ee4;
      param_1[1] = uVar6;
    }
    else {
      if (uVar12 < uVar6) {
LAB_100165ee4:
        unaff_x22 = uVar12;
        unaff_x21 = puVar11;
        unaff_x20 = puVar7;
        unaff_x30 = FUN_100165ee8;
        func_0x000104c03f14();
        goto code_r0x000100165ee8;
      }
      *(char *)((long)param_1 + 0x17) = (char)uVar6;
      puVar11 = param_1;
    }
    *(undefined1 *)((long)puVar11 + uVar6) = 0;
  }
  FUN_1001484d8(param_1);
  cVar3 = *(char *)((long)param_1 + 0x17);
  uVar12 = (ulong)cVar3;
  puVar7 = (undefined8 *)*param_1;
  puVar11 = puVar7;
  if (-1 < (long)uVar12) {
    puVar11 = param_1;
  }
  uVar6 = param_1[1];
  uVar8 = param_1[1];
  if (-1 < cVar3) {
    uVar6 = uVar12;
    uVar8 = uVar12;
  }
  do {
    param_4 = uVar6;
    if (param_4 == 0) {
      return;
    }
    uVar6 = param_4 - 1;
  } while (*(char *)((long)puVar11 + (param_4 - 1)) != '/');
  if ((uVar6 != 0xffffffffffffffff) && (uVar6 < uVar8 - 1)) {
    if (uVar6 != 0xfffffffffffffffe) {
      param_3 = 0;
      puVar4 = (undefined1 *)register0x00000008;
      param_2 = param_1;
      param_1 = unaff_x19;
      puVar13 = unaff_x29;
code_r0x000100165ee8:
      if (param_4 != 0) {
        *(ulong *)(puVar4 + -0x30) = unaff_x22;
        *(undefined8 **)(puVar4 + -0x28) = unaff_x21;
        *(undefined8 **)(puVar4 + -0x20) = unaff_x20;
        *(undefined8 **)(puVar4 + -0x18) = param_1;
        *(undefined1 **)(puVar4 + -0x10) = puVar13;
        *(code **)(puVar4 + -8) = unaff_x30;
        uVar8 = (ulong)*(char *)((long)param_2 + 0x17);
        puVar11 = param_2;
        uVar12 = uVar8;
        if ((long)uVar8 < 0) {
          puVar11 = (undefined8 *)*param_2;
          uVar12 = param_2[1];
        }
        uVar9 = uVar12 - param_3;
        uVar6 = uVar9;
        if (param_4 <= uVar9) {
          uVar6 = param_4;
        }
        if (param_4 < uVar9) {
          func_0x000107c610b8((long)puVar11 + param_3,(long)puVar11 + param_3 + uVar6,uVar9 - uVar6)
          ;
          uVar8 = (ulong)*(byte *)((long)param_2 + 0x17);
        }
        lVar10 = uVar12 - uVar6;
        if (((uint)uVar8 >> 7 & 1) == 0) {
          *(byte *)((long)param_2 + 0x17) = (byte)lVar10 & 0x7f;
        }
        else {
          param_2[1] = lVar10;
        }
        *(undefined1 *)((long)puVar11 + lVar10) = 0;
      }
      return;
    }
    if (cVar3 < '\0') {
      param_1[1] = 0;
    }
    else {
      *(undefined1 *)((long)param_1 + 0x17) = 0;
      puVar7 = param_1;
    }
    *(undefined1 *)puVar7 = 0;
  }
  return;
}



/* Entry: 100165ee8; end: 100165f63;  */

void FUN_100165ee8(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  if (param_3 != 0) {
    uVar2 = (ulong)*(char *)((long)param_1 + 0x17);
    puVar5 = param_1;
    uVar6 = uVar2;
    if ((long)uVar2 < 0) {
      puVar5 = (undefined8 *)*param_1;
      uVar6 = param_1[1];
    }
    uVar3 = uVar6 - param_2;
    uVar1 = uVar3;
    if (param_3 <= uVar3) {
      uVar1 = param_3;
    }
    if (param_3 < uVar3) {
      func_0x000107c610b8((long)puVar5 + param_2,(long)puVar5 + param_2 + uVar1,uVar3 - uVar1);
      uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    lVar4 = uVar6 - uVar1;
    if (((uint)uVar2 >> 7 & 1) == 0) {
      *(byte *)((long)param_1 + 0x17) = (byte)lVar4 & 0x7f;
    }
    else {
      param_1[1] = lVar4;
    }
    *(undefined1 *)((long)puVar5 + lVar4) = 0;
  }
  return;
}



/* Entry: 100165f64; end: 1001663eb;  */

bool FUN_100165f64(byte *param_1,long param_2)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  ulong *puVar10;
  ulong *puVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  byte *pbVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  byte bVar51;
  byte bVar52;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  undefined8 uVar53;
  undefined8 uVar54;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  undefined8 uVar71;
  undefined8 uVar72;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  undefined8 uVar105;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  undefined8 uVar121;
  byte bVar129;
  undefined8 uVar122;
  byte bVar130;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  undefined8 uVar131;
  byte bVar138;
  byte bVar139;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  undefined8 uVar140;
  byte bVar147;
  byte bVar148;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  undefined8 uVar149;
  byte bVar156;
  byte bVar157;
  byte bVar159;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  undefined8 uVar158;
  byte bVar165;
  byte bVar166;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  undefined8 uVar167;
  byte bVar174;
  byte bVar175;
  byte bVar177;
  byte bVar178;
  byte bVar179;
  byte bVar180;
  byte bVar181;
  byte bVar182;
  undefined8 uVar176;
  byte bVar183;
  byte bVar184;
  byte bVar186;
  byte bVar187;
  byte bVar188;
  byte bVar189;
  byte bVar190;
  byte bVar191;
  undefined8 uVar185;
  byte bVar192;
  byte bVar193;
  byte bVar194;
  byte bVar195;
  byte bVar196;
  byte bVar197;
  byte bVar198;
  byte bVar199;
  byte bVar200;
  byte bVar201;
  byte bVar202;
  byte bVar203;
  byte bVar204;
  byte bVar205;
  byte bVar206;
  byte bVar207;
  byte bVar208;
  byte bVar209;
  byte bVar210;
  byte bVar211;
  byte bVar212;
  byte bVar213;
  byte bVar214;
  byte bVar215;
  byte bVar216;
  byte bVar217;
  byte bVar218;
  byte bVar219;
  byte bVar220;
  byte bVar221;
  byte bVar222;
  byte bVar223;
  byte bVar224;
  byte bVar225;
  byte bVar226;
  byte bVar227;
  byte bVar228;
  byte bVar229;
  byte bVar230;
  byte bVar231;
  byte bVar232;
  byte bVar233;
  byte bVar234;
  byte bVar235;
  byte bVar236;
  byte bVar237;
  byte bVar238;
  byte bVar239;
  byte bVar240;
  byte bVar241;
  byte bVar242;
  byte bVar243;
  byte bVar244;
  byte bVar245;
  byte bVar246;
  byte bVar247;
  byte bVar248;
  byte bVar249;
  byte bVar250;
  byte bVar251;
  byte bVar252;
  byte bVar253;
  byte bVar254;
  byte bVar255;
  byte bVar256;
  byte bVar257;
  byte bVar258;
  byte bVar259;
  byte bVar260;
  byte bVar261;
  byte bVar262;
  byte bVar263;
  byte bVar264;
  byte bVar265;
  byte bVar266;
  byte bVar267;
  byte bVar268;
  byte bVar269;
  byte bVar270;
  byte bVar271;
  byte bVar272;
  byte bVar273;
  byte bVar274;
  byte bVar275;
  byte bVar276;
  byte bVar277;
  byte bVar278;
  byte bVar279;
  byte bVar280;
  byte bVar281;
  byte bVar282;
  byte bVar283;
  byte bVar284;
  byte bVar285;
  byte bVar286;
  byte bVar287;
  byte bVar288;
  byte bVar289;
  byte bVar290;
  byte bVar291;
  byte bVar292;
  byte bVar293;
  byte bVar294;
  byte bVar295;
  byte bVar296;
  byte bVar297;
  byte bVar298;
  byte bVar299;
  byte bVar300;
  ulong uVar301;
  ulong uVar302;
  ulong uVar303;
  byte bVar304;
  
  if (param_2 == 0) {
    return true;
  }
  pbVar12 = param_1;
  if ((0 < param_2) && (((ulong)param_1 & 7) != 0)) {
    pbVar12 = param_1 + 1;
    uVar9 = (uint)*param_1;
    if ((((ulong)pbVar12 & 7) != 0) && (1 < param_2)) {
      pbVar12 = param_1 + 2;
      bVar28 = *param_1 | param_1[1];
      uVar9 = (uint)bVar28;
      if ((((ulong)pbVar12 & 7) != 0) && (2 < param_2)) {
        pbVar12 = param_1 + 3;
        bVar28 = bVar28 | param_1[2];
        uVar9 = (uint)bVar28;
        if ((((ulong)pbVar12 & 7) != 0) && (3 < param_2)) {
          pbVar12 = param_1 + 4;
          bVar28 = bVar28 | param_1[3];
          uVar9 = (uint)bVar28;
          if ((((ulong)pbVar12 & 7) != 0) && (4 < param_2)) {
            pbVar12 = param_1 + 5;
            bVar28 = bVar28 | param_1[4];
            uVar9 = (uint)bVar28;
            if ((((ulong)pbVar12 & 7) != 0) && (5 < param_2)) {
              pbVar12 = param_1 + 6;
              bVar28 = bVar28 | param_1[5];
              uVar9 = (uint)bVar28;
              if ((((ulong)pbVar12 & 7) != 0) && (6 < param_2)) {
                pbVar12 = param_1 + 7;
                bVar28 = bVar28 | param_1[6];
                uVar9 = (uint)bVar28;
                if ((((ulong)pbVar12 & 7) != 0) && (7 < param_2)) {
                  pbVar12 = param_1 + 8;
                  uVar9 = (uint)(bVar28 | param_1[7]);
                }
              }
            }
          }
        }
      }
    }
    if (uVar9 >> 7 != 0) {
      return false;
    }
  }
  puVar18 = (ulong *)(param_1 + param_2);
  pbVar14 = pbVar12 + 0x10;
  pbVar16 = pbVar12 + 8;
  uVar19 = ~(ulong)pbVar12;
  while (puVar10 = (ulong *)(pbVar14 + -0x10), puVar10 <= puVar18 + -0x10) {
    uVar72 = *(undefined8 *)(pbVar14 + 0x38);
    uVar54 = *(undefined8 *)(pbVar14 + 0x30);
    uVar71 = *(undefined8 *)(pbVar14 + -8);
    uVar53 = *(undefined8 *)(pbVar14 + -0x10);
    uVar105 = *(undefined8 *)(pbVar14 + 8);
    uVar122 = *(undefined8 *)pbVar14;
    uVar131 = *(undefined8 *)(pbVar14 + 0x58);
    uVar121 = *(undefined8 *)(pbVar14 + 0x50);
    uVar149 = *(undefined8 *)(pbVar14 + 0x68);
    uVar140 = *(undefined8 *)(pbVar14 + 0x60);
    uVar167 = *(undefined8 *)(pbVar14 + 0x18);
    uVar158 = *(undefined8 *)(pbVar14 + 0x10);
    uVar185 = *(undefined8 *)(pbVar14 + 0x28);
    uVar176 = *(undefined8 *)(pbVar14 + 0x20);
    bVar28 = (byte)uVar53 | (byte)uVar54 | (byte)uVar158 | (byte)uVar121 |
             (byte)uVar122 | pbVar14[0x40] | (byte)uVar176 | (byte)uVar140;
    bVar29 = (byte)((ulong)uVar53 >> 8) | (byte)((ulong)uVar54 >> 8) |
             (byte)((ulong)uVar158 >> 8) | (byte)((ulong)uVar121 >> 8) |
             (byte)((ulong)uVar122 >> 8) | pbVar14[0x41] |
             (byte)((ulong)uVar176 >> 8) | (byte)((ulong)uVar140 >> 8);
    bVar30 = (byte)((ulong)uVar53 >> 0x10) | (byte)((ulong)uVar54 >> 0x10) |
             (byte)((ulong)uVar158 >> 0x10) | (byte)((ulong)uVar121 >> 0x10) |
             (byte)((ulong)uVar122 >> 0x10) | pbVar14[0x42] |
             (byte)((ulong)uVar176 >> 0x10) | (byte)((ulong)uVar140 >> 0x10);
    bVar31 = (byte)((ulong)uVar53 >> 0x18) | (byte)((ulong)uVar54 >> 0x18) |
             (byte)((ulong)uVar158 >> 0x18) | (byte)((ulong)uVar121 >> 0x18) |
             (byte)((ulong)uVar122 >> 0x18) | pbVar14[0x43] |
             (byte)((ulong)uVar176 >> 0x18) | (byte)((ulong)uVar140 >> 0x18);
    bVar32 = (byte)((ulong)uVar53 >> 0x20) | (byte)((ulong)uVar54 >> 0x20) |
             (byte)((ulong)uVar158 >> 0x20) | (byte)((ulong)uVar121 >> 0x20) |
             (byte)((ulong)uVar122 >> 0x20) | pbVar14[0x44] |
             (byte)((ulong)uVar176 >> 0x20) | (byte)((ulong)uVar140 >> 0x20);
    bVar33 = (byte)((ulong)uVar53 >> 0x28) | (byte)((ulong)uVar54 >> 0x28) |
             (byte)((ulong)uVar158 >> 0x28) | (byte)((ulong)uVar121 >> 0x28) |
             (byte)((ulong)uVar122 >> 0x28) | pbVar14[0x45] |
             (byte)((ulong)uVar176 >> 0x28) | (byte)((ulong)uVar140 >> 0x28);
    bVar34 = (byte)((ulong)uVar53 >> 0x30) | (byte)((ulong)uVar54 >> 0x30) |
             (byte)((ulong)uVar158 >> 0x30) | (byte)((ulong)uVar121 >> 0x30) |
             (byte)((ulong)uVar122 >> 0x30) | pbVar14[0x46] |
             (byte)((ulong)uVar176 >> 0x30) | (byte)((ulong)uVar140 >> 0x30);
    bVar35 = (byte)((ulong)uVar53 >> 0x38) | (byte)((ulong)uVar54 >> 0x38) |
             (byte)((ulong)uVar158 >> 0x38) | (byte)((ulong)uVar121 >> 0x38) |
             (byte)((ulong)uVar122 >> 0x38) | pbVar14[0x47] |
             (byte)((ulong)uVar176 >> 0x38) | (byte)((ulong)uVar140 >> 0x38);
    bVar36 = (byte)uVar71 | (byte)uVar72 | (byte)uVar167 | (byte)uVar131 |
             (byte)uVar105 | pbVar14[0x48] | (byte)uVar185 | (byte)uVar149;
    bVar37 = (byte)((ulong)uVar71 >> 8) | (byte)((ulong)uVar72 >> 8) |
             (byte)((ulong)uVar167 >> 8) | (byte)((ulong)uVar131 >> 8) |
             (byte)((ulong)uVar105 >> 8) | pbVar14[0x49] |
             (byte)((ulong)uVar185 >> 8) | (byte)((ulong)uVar149 >> 8);
    bVar38 = (byte)((ulong)uVar71 >> 0x10) | (byte)((ulong)uVar72 >> 0x10) |
             (byte)((ulong)uVar167 >> 0x10) | (byte)((ulong)uVar131 >> 0x10) |
             (byte)((ulong)uVar105 >> 0x10) | pbVar14[0x4a] |
             (byte)((ulong)uVar185 >> 0x10) | (byte)((ulong)uVar149 >> 0x10);
    bVar39 = (byte)((ulong)uVar71 >> 0x18) | (byte)((ulong)uVar72 >> 0x18) |
             (byte)((ulong)uVar167 >> 0x18) | (byte)((ulong)uVar131 >> 0x18) |
             (byte)((ulong)uVar105 >> 0x18) | pbVar14[0x4b] |
             (byte)((ulong)uVar185 >> 0x18) | (byte)((ulong)uVar149 >> 0x18);
    bVar40 = (byte)((ulong)uVar71 >> 0x20) | (byte)((ulong)uVar72 >> 0x20) |
             (byte)((ulong)uVar167 >> 0x20) | (byte)((ulong)uVar131 >> 0x20) |
             (byte)((ulong)uVar105 >> 0x20) | pbVar14[0x4c] |
             (byte)((ulong)uVar185 >> 0x20) | (byte)((ulong)uVar149 >> 0x20);
    bVar41 = (byte)((ulong)uVar71 >> 0x28) | (byte)((ulong)uVar72 >> 0x28) |
             (byte)((ulong)uVar167 >> 0x28) | (byte)((ulong)uVar131 >> 0x28) |
             (byte)((ulong)uVar105 >> 0x28) | pbVar14[0x4d] |
             (byte)((ulong)uVar185 >> 0x28) | (byte)((ulong)uVar149 >> 0x28);
    bVar42 = (byte)((ulong)uVar71 >> 0x30) | (byte)((ulong)uVar72 >> 0x30) |
             (byte)((ulong)uVar167 >> 0x30) | (byte)((ulong)uVar131 >> 0x30) |
             (byte)((ulong)uVar105 >> 0x30) | pbVar14[0x4e] |
             (byte)((ulong)uVar185 >> 0x30) | (byte)((ulong)uVar149 >> 0x30);
    bVar43 = (byte)((ulong)uVar71 >> 0x38) | (byte)((ulong)uVar72 >> 0x38) |
             (byte)((ulong)uVar167 >> 0x38) | (byte)((ulong)uVar131 >> 0x38) |
             (byte)((ulong)uVar105 >> 0x38) | pbVar14[0x4f] |
             (byte)((ulong)uVar185 >> 0x38) | (byte)((ulong)uVar149 >> 0x38);
    auVar45[1] = bVar29;
    auVar45[0] = bVar28;
    auVar45[2] = bVar30;
    auVar45[3] = bVar31;
    auVar45[4] = bVar32;
    auVar45[5] = bVar33;
    auVar45[6] = bVar34;
    auVar45[7] = bVar35;
    auVar45[8] = bVar36;
    auVar45[9] = bVar37;
    auVar45[10] = bVar38;
    auVar45[0xb] = bVar39;
    auVar45[0xc] = bVar40;
    auVar45[0xd] = bVar41;
    auVar45[0xe] = bVar42;
    auVar45[0xf] = bVar43;
    auVar2[1] = bVar29;
    auVar2[0] = bVar28;
    auVar2[2] = bVar30;
    auVar2[3] = bVar31;
    auVar2[4] = bVar32;
    auVar2[5] = bVar33;
    auVar2[6] = bVar34;
    auVar2[7] = bVar35;
    auVar2[8] = bVar36;
    auVar2[9] = bVar37;
    auVar2[10] = bVar38;
    auVar2[0xb] = bVar39;
    auVar2[0xc] = bVar40;
    auVar2[0xd] = bVar41;
    auVar2[0xe] = bVar42;
    auVar2[0xf] = bVar43;
    auVar45 = NEON_ext(auVar45,auVar2,8,1);
    pbVar12 = pbVar12 + 0x80;
    pbVar14 = pbVar14 + 0x80;
    pbVar16 = pbVar16 + 0x80;
    uVar19 = uVar19 - 0x80;
    if ((CONCAT17(bVar35 | auVar45[7],
                  CONCAT16(bVar34 | auVar45[6],
                           CONCAT15(bVar33 | auVar45[5],
                                    CONCAT14(bVar32 | auVar45[4],
                                             CONCAT13(bVar31 | auVar45[3],
                                                      CONCAT12(bVar30 | auVar45[2],
                                                               CONCAT11(bVar29 | auVar45[1],
                                                                        bVar28 | auVar45[0]))))))) &
        0x8080808080808080) != 0) {
      return false;
    }
  }
  if (puVar18 + -1 < puVar10) {
    uVar19 = 0;
  }
  else {
    pbVar21 = param_1 + param_2 + -7;
    pbVar1 = pbVar16;
    if (pbVar16 <= pbVar21) {
      pbVar1 = pbVar21;
    }
    if (pbVar1 + uVar19 < (byte *)0x18) {
      uVar19 = 0;
      puVar11 = puVar10;
    }
    else {
      uVar13 = ((ulong)(pbVar1 + uVar19) >> 3) + 1;
      if (pbVar16 <= pbVar21) {
        pbVar16 = pbVar21;
      }
      uVar19 = ((ulong)(pbVar16 + uVar19) >> 3) + 1 >> 2;
      puVar10 = (ulong *)(pbVar12 + uVar19 * 0x20);
      lVar17 = uVar19 << 2;
      bVar28 = 0;
      bVar30 = 0;
      bVar32 = 0;
      bVar34 = 0;
      bVar36 = 0;
      bVar38 = 0;
      bVar40 = 0;
      bVar42 = 0;
      bVar44 = 0;
      bVar48 = 0;
      bVar49 = 0;
      bVar50 = 0;
      bVar62 = 0;
      bVar80 = 0;
      bVar52 = 0;
      bVar56 = 0;
      bVar29 = 0;
      bVar31 = 0;
      bVar33 = 0;
      bVar35 = 0;
      bVar37 = 0;
      bVar39 = 0;
      bVar41 = 0;
      bVar43 = 0;
      bVar58 = 0;
      bVar60 = 0;
      bVar64 = 0;
      bVar66 = 0;
      bVar68 = 0;
      bVar70 = 0;
      bVar74 = 0;
      bVar76 = 0;
      do {
        uVar72 = *(undefined8 *)(pbVar14 + -8);
        uVar54 = *(undefined8 *)(pbVar14 + -0x10);
        uVar71 = *(undefined8 *)(pbVar14 + 8);
        uVar53 = *(undefined8 *)pbVar14;
        bVar28 = (byte)uVar54 | bVar28;
        bVar30 = (byte)((ulong)uVar54 >> 8) | bVar30;
        bVar32 = (byte)((ulong)uVar54 >> 0x10) | bVar32;
        bVar34 = (byte)((ulong)uVar54 >> 0x18) | bVar34;
        bVar36 = (byte)((ulong)uVar54 >> 0x20) | bVar36;
        bVar38 = (byte)((ulong)uVar54 >> 0x28) | bVar38;
        bVar40 = (byte)((ulong)uVar54 >> 0x30) | bVar40;
        bVar42 = (byte)((ulong)uVar54 >> 0x38) | bVar42;
        bVar44 = (byte)uVar72 | bVar44;
        bVar48 = (byte)((ulong)uVar72 >> 8) | bVar48;
        bVar49 = (byte)((ulong)uVar72 >> 0x10) | bVar49;
        bVar50 = (byte)((ulong)uVar72 >> 0x18) | bVar50;
        bVar62 = (byte)((ulong)uVar72 >> 0x20) | bVar62;
        bVar80 = (byte)((ulong)uVar72 >> 0x28) | bVar80;
        bVar52 = (byte)((ulong)uVar72 >> 0x30) | bVar52;
        bVar56 = (byte)((ulong)uVar72 >> 0x38) | bVar56;
        bVar29 = (byte)uVar53 | bVar29;
        bVar31 = (byte)((ulong)uVar53 >> 8) | bVar31;
        bVar33 = (byte)((ulong)uVar53 >> 0x10) | bVar33;
        bVar35 = (byte)((ulong)uVar53 >> 0x18) | bVar35;
        bVar37 = (byte)((ulong)uVar53 >> 0x20) | bVar37;
        bVar39 = (byte)((ulong)uVar53 >> 0x28) | bVar39;
        bVar41 = (byte)((ulong)uVar53 >> 0x30) | bVar41;
        bVar43 = (byte)((ulong)uVar53 >> 0x38) | bVar43;
        bVar58 = (byte)uVar71 | bVar58;
        bVar60 = (byte)((ulong)uVar71 >> 8) | bVar60;
        bVar64 = (byte)((ulong)uVar71 >> 0x10) | bVar64;
        bVar66 = (byte)((ulong)uVar71 >> 0x18) | bVar66;
        bVar68 = (byte)((ulong)uVar71 >> 0x20) | bVar68;
        bVar70 = (byte)((ulong)uVar71 >> 0x28) | bVar70;
        bVar74 = (byte)((ulong)uVar71 >> 0x30) | bVar74;
        bVar76 = (byte)((ulong)uVar71 >> 0x38) | bVar76;
        pbVar14 = pbVar14 + 0x20;
        lVar17 = lVar17 + -4;
      } while (lVar17 != 0);
      bVar29 = bVar29 | bVar28;
      bVar31 = bVar31 | bVar30;
      bVar33 = bVar33 | bVar32;
      bVar35 = bVar35 | bVar34;
      bVar37 = bVar37 | bVar36;
      bVar39 = bVar39 | bVar38;
      bVar41 = bVar41 | bVar40;
      bVar43 = bVar43 | bVar42;
      auVar7[1] = bVar31;
      auVar7[0] = bVar29;
      auVar7[2] = bVar33;
      auVar7[3] = bVar35;
      auVar7[4] = bVar37;
      auVar7[5] = bVar39;
      auVar7[6] = bVar41;
      auVar7[7] = bVar43;
      auVar7[8] = bVar58 | bVar44;
      auVar7[9] = bVar60 | bVar48;
      auVar7[10] = bVar64 | bVar49;
      auVar7[0xb] = bVar66 | bVar50;
      auVar7[0xc] = bVar68 | bVar62;
      auVar7[0xd] = bVar70 | bVar80;
      auVar7[0xe] = bVar74 | bVar52;
      auVar7[0xf] = bVar76 | bVar56;
      auVar8[1] = bVar31;
      auVar8[0] = bVar29;
      auVar8[2] = bVar33;
      auVar8[3] = bVar35;
      auVar8[4] = bVar37;
      auVar8[5] = bVar39;
      auVar8[6] = bVar41;
      auVar8[7] = bVar43;
      auVar8[8] = bVar58 | bVar44;
      auVar8[9] = bVar60 | bVar48;
      auVar8[10] = bVar64 | bVar49;
      auVar8[0xb] = bVar66 | bVar50;
      auVar8[0xc] = bVar68 | bVar62;
      auVar8[0xd] = bVar70 | bVar80;
      auVar8[0xe] = bVar74 | bVar52;
      auVar8[0xf] = bVar76 | bVar56;
      auVar45 = NEON_ext(auVar7,auVar8,8,1);
      uVar19 = CONCAT17(bVar43 | auVar45[7],
                        CONCAT16(bVar41 | auVar45[6],
                                 CONCAT15(bVar39 | auVar45[5],
                                          CONCAT14(bVar37 | auVar45[4],
                                                   CONCAT13(bVar35 | auVar45[3],
                                                            CONCAT12(bVar33 | auVar45[2],
                                                                     CONCAT11(bVar31 | auVar45[1],
                                                                              bVar29 | auVar45[0])))
                                                  ))));
      puVar11 = puVar10;
      if (uVar13 == (uVar13 & 0x3ffffffffffffffc)) goto LAB_1001661a4;
    }
    do {
      puVar10 = puVar11 + 1;
      uVar19 = *puVar11 | uVar19;
      puVar11 = puVar10;
    } while (puVar10 <= puVar18 + -1);
  }
LAB_1001661a4:
  if (puVar18 <= puVar10) goto LAB_1001663d0;
  uVar13 = (long)(param_1 + param_2) - (long)puVar10;
  if (7 < uVar13) {
    if (uVar13 < 0x20) {
      uVar15 = 0;
    }
    else {
      uVar15 = uVar13 & 0xffffffffffffffe0;
      bVar44 = 0;
      bVar48 = 0;
      bVar49 = 0;
      bVar50 = 0;
      bVar62 = 0;
      bVar80 = 0;
      bVar52 = 0;
      bVar56 = 0;
      bVar58 = 0;
      bVar60 = 0;
      bVar64 = 0;
      bVar66 = 0;
      bVar68 = 0;
      bVar70 = 0;
      bVar74 = 0;
      bVar76 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      bVar41 = 0;
      bVar42 = 0;
      bVar43 = 0;
      bVar28 = (byte)uVar19;
      bVar29 = (byte)(uVar19 >> 8);
      bVar30 = (byte)(uVar19 >> 0x10);
      bVar31 = (byte)(uVar19 >> 0x18);
      bVar32 = (byte)(uVar19 >> 0x20);
      bVar33 = (byte)(uVar19 >> 0x28);
      bVar34 = (byte)(uVar19 >> 0x30);
      bVar35 = (byte)(uVar19 >> 0x38);
      puVar18 = puVar10 + 2;
      uVar54 = 0;
      uVar72 = 0;
      uVar158 = 0;
      uVar167 = 0;
      uVar53 = 0;
      uVar71 = 0;
      uVar121 = 0;
      uVar131 = 0;
      uVar122 = 0;
      uVar105 = 0;
      bVar113 = 0;
      bVar115 = 0;
      bVar117 = 0;
      bVar119 = 0;
      bVar193 = 0;
      bVar194 = 0;
      bVar195 = 0;
      bVar196 = 0;
      bVar197 = 0;
      bVar198 = 0;
      bVar199 = 0;
      bVar200 = 0;
      bVar201 = 0;
      bVar202 = 0;
      bVar203 = 0;
      bVar204 = 0;
      uVar140 = 0;
      uVar149 = 0;
      bVar221 = 0;
      bVar222 = 0;
      bVar223 = 0;
      bVar224 = 0;
      bVar225 = 0;
      bVar226 = 0;
      bVar227 = 0;
      bVar228 = 0;
      bVar229 = 0;
      bVar230 = 0;
      bVar231 = 0;
      bVar232 = 0;
      bVar233 = 0;
      bVar234 = 0;
      bVar235 = 0;
      bVar236 = 0;
      bVar205 = 0;
      bVar206 = 0;
      bVar207 = 0;
      bVar208 = 0;
      bVar209 = 0;
      bVar210 = 0;
      bVar211 = 0;
      bVar212 = 0;
      bVar213 = 0;
      bVar214 = 0;
      bVar215 = 0;
      bVar216 = 0;
      bVar217 = 0;
      bVar218 = 0;
      bVar219 = 0;
      bVar220 = 0;
      bVar269 = 0;
      bVar270 = 0;
      bVar271 = 0;
      bVar272 = 0;
      bVar273 = 0;
      bVar274 = 0;
      bVar275 = 0;
      bVar276 = 0;
      bVar277 = 0;
      bVar278 = 0;
      bVar279 = 0;
      bVar280 = 0;
      bVar281 = 0;
      bVar282 = 0;
      bVar283 = 0;
      bVar284 = 0;
      bVar78 = 0;
      bVar82 = 0;
      bVar84 = 0;
      bVar86 = 0;
      bVar88 = 0;
      bVar90 = 0;
      bVar92 = 0;
      bVar94 = 0;
      bVar96 = 0;
      bVar98 = 0;
      bVar100 = 0;
      bVar102 = 0;
      bVar104 = 0;
      bVar107 = 0;
      bVar109 = 0;
      bVar111 = 0;
      bVar253 = 0;
      bVar254 = 0;
      bVar255 = 0;
      bVar256 = 0;
      bVar257 = 0;
      bVar258 = 0;
      bVar259 = 0;
      bVar260 = 0;
      bVar261 = 0;
      bVar262 = 0;
      bVar263 = 0;
      bVar264 = 0;
      bVar265 = 0;
      bVar266 = 0;
      bVar267 = 0;
      bVar268 = 0;
      bVar237 = 0;
      bVar238 = 0;
      bVar239 = 0;
      bVar240 = 0;
      bVar241 = 0;
      bVar242 = 0;
      bVar243 = 0;
      bVar244 = 0;
      bVar245 = 0;
      bVar246 = 0;
      bVar247 = 0;
      bVar248 = 0;
      bVar249 = 0;
      bVar250 = 0;
      bVar251 = 0;
      bVar252 = 0;
      bVar285 = 0;
      bVar286 = 0;
      bVar287 = 0;
      bVar288 = 0;
      bVar289 = 0;
      bVar290 = 0;
      bVar291 = 0;
      bVar292 = 0;
      bVar293 = 0;
      bVar294 = 0;
      bVar295 = 0;
      bVar296 = 0;
      bVar297 = 0;
      bVar298 = 0;
      bVar299 = 0;
      bVar300 = 0;
      uVar19 = uVar15;
      do {
        uVar301 = puVar18[-1];
        uVar20 = puVar18[-2];
        uVar303 = puVar18[1];
        uVar302 = *puVar18;
        bVar157 = (byte)uVar20;
        bVar160 = (byte)(uVar20 >> 8);
        bVar163 = (byte)(uVar20 >> 0x10);
        bVar166 = (byte)(uVar20 >> 0x18);
        bVar61 = (byte)(uVar20 >> 0x20);
        bVar79 = (byte)(uVar20 >> 0x28);
        bVar67 = (byte)(uVar20 >> 0x30);
        bVar69 = (byte)(uVar20 >> 0x38);
        bVar51 = (byte)uVar301;
        bVar55 = (byte)(uVar301 >> 8);
        bVar57 = (byte)(uVar301 >> 0x10);
        bVar59 = (byte)(uVar301 >> 0x18);
        bVar63 = (byte)(uVar301 >> 0x20);
        bVar65 = (byte)(uVar301 >> 0x28);
        bVar22 = (byte)(uVar301 >> 0x30);
        bVar25 = (byte)(uVar301 >> 0x38);
        bVar162 = (byte)uVar302;
        bVar171 = (byte)(uVar302 >> 8);
        bVar164 = (byte)(uVar302 >> 0x10);
        bVar168 = (byte)(uVar302 >> 0x18);
        bVar170 = (byte)(uVar302 >> 0x20);
        bVar173 = (byte)(uVar302 >> 0x28);
        bVar23 = (byte)(uVar302 >> 0x30);
        bVar26 = (byte)(uVar302 >> 0x38);
        bVar159 = (byte)uVar303;
        bVar161 = (byte)(uVar303 >> 8);
        bVar165 = (byte)(uVar303 >> 0x10);
        bVar169 = (byte)(uVar303 >> 0x18);
        bVar172 = (byte)(uVar303 >> 0x20);
        bVar174 = (byte)(uVar303 >> 0x28);
        bVar24 = (byte)(uVar303 >> 0x30);
        bVar27 = (byte)(uVar303 >> 0x38);
        bVar139 = (byte)uVar121 | bVar57;
        bVar141 = (byte)((ulong)uVar121 >> 8) | (char)bVar57 >> 7;
        bVar143 = (byte)((short)(char)bVar57 >> 0xf);
        bVar142 = (byte)((ulong)uVar121 >> 0x10) | bVar143;
        bVar143 = (byte)((ulong)uVar121 >> 0x18) | bVar143;
        bVar147 = (byte)((int)(short)(char)bVar57 >> 0x1f);
        bVar144 = (byte)((ulong)uVar121 >> 0x20) | bVar147;
        bVar145 = (byte)((ulong)uVar121 >> 0x28) | bVar147;
        bVar146 = (byte)((ulong)uVar121 >> 0x30) | bVar147;
        bVar147 = (byte)((ulong)uVar121 >> 0x38) | bVar147;
        uVar121 = CONCAT17(bVar147,CONCAT16(bVar146,CONCAT15(bVar145,CONCAT14(bVar144,CONCAT13(
                                                  bVar143,CONCAT12(bVar142,CONCAT11(bVar141,bVar139)
                                                                  ))))));
        bVar148 = (byte)uVar131 | bVar59;
        bVar150 = (byte)((ulong)uVar131 >> 8) | (char)bVar59 >> 7;
        bVar152 = (byte)((short)(char)bVar59 >> 0xf);
        bVar151 = (byte)((ulong)uVar131 >> 0x10) | bVar152;
        bVar152 = (byte)((ulong)uVar131 >> 0x18) | bVar152;
        bVar156 = (byte)((int)(short)(char)bVar59 >> 0x1f);
        bVar153 = (byte)((ulong)uVar131 >> 0x20) | bVar156;
        bVar154 = (byte)((ulong)uVar131 >> 0x28) | bVar156;
        bVar155 = (byte)((ulong)uVar131 >> 0x30) | bVar156;
        bVar156 = (byte)((ulong)uVar131 >> 0x38) | bVar156;
        uVar131 = CONCAT17(bVar156,CONCAT16(bVar155,CONCAT15(bVar154,CONCAT14(bVar153,CONCAT13(
                                                  bVar152,CONCAT12(bVar151,CONCAT11(bVar150,bVar148)
                                                                  ))))));
        bVar175 = (byte)uVar158 | bVar67;
        bVar177 = (byte)((ulong)uVar158 >> 8) | (char)bVar67 >> 7;
        bVar179 = (byte)((short)(char)bVar67 >> 0xf);
        bVar178 = (byte)((ulong)uVar158 >> 0x10) | bVar179;
        bVar179 = (byte)((ulong)uVar158 >> 0x18) | bVar179;
        bVar183 = (byte)((int)(short)(char)bVar67 >> 0x1f);
        bVar180 = (byte)((ulong)uVar158 >> 0x20) | bVar183;
        bVar181 = (byte)((ulong)uVar158 >> 0x28) | bVar183;
        bVar182 = (byte)((ulong)uVar158 >> 0x30) | bVar183;
        bVar183 = (byte)((ulong)uVar158 >> 0x38) | bVar183;
        uVar158 = CONCAT17(bVar183,CONCAT16(bVar182,CONCAT15(bVar181,CONCAT14(bVar180,CONCAT13(
                                                  bVar179,CONCAT12(bVar178,CONCAT11(bVar177,bVar175)
                                                                  ))))));
        bVar184 = (byte)uVar167 | bVar69;
        bVar186 = (byte)((ulong)uVar167 >> 8) | (char)bVar69 >> 7;
        bVar188 = (byte)((short)(char)bVar69 >> 0xf);
        bVar187 = (byte)((ulong)uVar167 >> 0x10) | bVar188;
        bVar188 = (byte)((ulong)uVar167 >> 0x18) | bVar188;
        bVar192 = (byte)((int)(short)(char)bVar69 >> 0x1f);
        bVar189 = (byte)((ulong)uVar167 >> 0x20) | bVar192;
        bVar190 = (byte)((ulong)uVar167 >> 0x28) | bVar192;
        bVar191 = (byte)((ulong)uVar167 >> 0x30) | bVar192;
        bVar192 = (byte)((ulong)uVar167 >> 0x38) | bVar192;
        uVar167 = CONCAT17(bVar192,CONCAT16(bVar191,CONCAT15(bVar190,CONCAT14(bVar189,CONCAT13(
                                                  bVar188,CONCAT12(bVar187,CONCAT11(bVar186,bVar184)
                                                                  ))))));
        bVar120 = (byte)uVar122 | bVar63;
        bVar123 = (byte)((ulong)uVar122 >> 8) | (char)bVar63 >> 7;
        bVar125 = (byte)((short)(char)bVar63 >> 0xf);
        bVar124 = (byte)((ulong)uVar122 >> 0x10) | bVar125;
        bVar125 = (byte)((ulong)uVar122 >> 0x18) | bVar125;
        bVar129 = (byte)((int)(short)(char)bVar63 >> 0x1f);
        bVar126 = (byte)((ulong)uVar122 >> 0x20) | bVar129;
        bVar127 = (byte)((ulong)uVar122 >> 0x28) | bVar129;
        bVar128 = (byte)((ulong)uVar122 >> 0x30) | bVar129;
        bVar129 = (byte)((ulong)uVar122 >> 0x38) | bVar129;
        uVar122 = CONCAT17(bVar129,CONCAT16(bVar128,CONCAT15(bVar127,CONCAT14(bVar126,CONCAT13(
                                                  bVar125,CONCAT12(bVar124,CONCAT11(bVar123,bVar120)
                                                                  ))))));
        bVar130 = (byte)uVar105 | bVar65;
        bVar132 = (byte)((ulong)uVar105 >> 8) | (char)bVar65 >> 7;
        bVar134 = (byte)((short)(char)bVar65 >> 0xf);
        bVar133 = (byte)((ulong)uVar105 >> 0x10) | bVar134;
        bVar134 = (byte)((ulong)uVar105 >> 0x18) | bVar134;
        bVar138 = (byte)((int)(short)(char)bVar65 >> 0x1f);
        bVar135 = (byte)((ulong)uVar105 >> 0x20) | bVar138;
        bVar136 = (byte)((ulong)uVar105 >> 0x28) | bVar138;
        bVar137 = (byte)((ulong)uVar105 >> 0x30) | bVar138;
        bVar138 = (byte)((ulong)uVar105 >> 0x38) | bVar138;
        uVar105 = CONCAT17(bVar138,CONCAT16(bVar137,CONCAT15(bVar136,CONCAT14(bVar135,CONCAT13(
                                                  bVar134,CONCAT12(bVar133,CONCAT11(bVar132,bVar130)
                                                                  ))))));
        bVar87 = (byte)uVar53 | bVar51;
        bVar89 = (byte)((ulong)uVar53 >> 8) | (char)bVar51 >> 7;
        bVar93 = (byte)((short)(char)bVar51 >> 0xf);
        bVar91 = (byte)((ulong)uVar53 >> 0x10) | bVar93;
        bVar93 = (byte)((ulong)uVar53 >> 0x18) | bVar93;
        bVar101 = (byte)((int)(short)(char)bVar51 >> 0x1f);
        bVar95 = (byte)((ulong)uVar53 >> 0x20) | bVar101;
        bVar97 = (byte)((ulong)uVar53 >> 0x28) | bVar101;
        bVar99 = (byte)((ulong)uVar53 >> 0x30) | bVar101;
        bVar101 = (byte)((ulong)uVar53 >> 0x38) | bVar101;
        uVar53 = CONCAT17(bVar101,CONCAT16(bVar99,CONCAT15(bVar97,CONCAT14(bVar95,CONCAT13(bVar93,
                                                  CONCAT12(bVar91,CONCAT11(bVar89,bVar87)))))));
        bVar103 = (byte)uVar71 | bVar55;
        bVar106 = (byte)((ulong)uVar71 >> 8) | (char)bVar55 >> 7;
        bVar110 = (byte)((short)(char)bVar55 >> 0xf);
        bVar108 = (byte)((ulong)uVar71 >> 0x10) | bVar110;
        bVar110 = (byte)((ulong)uVar71 >> 0x18) | bVar110;
        bVar118 = (byte)((int)(short)(char)bVar55 >> 0x1f);
        bVar112 = (byte)((ulong)uVar71 >> 0x20) | bVar118;
        bVar114 = (byte)((ulong)uVar71 >> 0x28) | bVar118;
        bVar116 = (byte)((ulong)uVar71 >> 0x30) | bVar118;
        bVar118 = (byte)((ulong)uVar71 >> 0x38) | bVar118;
        uVar71 = CONCAT17(bVar118,CONCAT16(bVar116,CONCAT15(bVar114,CONCAT14(bVar112,CONCAT13(
                                                  bVar110,CONCAT12(bVar108,CONCAT11(bVar106,bVar103)
                                                                  ))))));
        bVar51 = (byte)uVar54 | bVar61;
        bVar55 = (byte)((ulong)uVar54 >> 8) | (char)bVar61 >> 7;
        bVar59 = (byte)((short)(char)bVar61 >> 0xf);
        bVar57 = (byte)((ulong)uVar54 >> 0x10) | bVar59;
        bVar59 = (byte)((ulong)uVar54 >> 0x18) | bVar59;
        bVar67 = (byte)((int)(short)(char)bVar61 >> 0x1f);
        bVar61 = (byte)((ulong)uVar54 >> 0x20) | bVar67;
        bVar63 = (byte)((ulong)uVar54 >> 0x28) | bVar67;
        bVar65 = (byte)((ulong)uVar54 >> 0x30) | bVar67;
        bVar67 = (byte)((ulong)uVar54 >> 0x38) | bVar67;
        uVar54 = CONCAT17(bVar67,CONCAT16(bVar65,CONCAT15(bVar63,CONCAT14(bVar61,CONCAT13(bVar59,
                                                  CONCAT12(bVar57,CONCAT11(bVar55,bVar51)))))));
        bVar69 = (byte)uVar72 | bVar79;
        bVar73 = (byte)((ulong)uVar72 >> 8) | (char)bVar79 >> 7;
        bVar77 = (byte)((short)(char)bVar79 >> 0xf);
        bVar75 = (byte)((ulong)uVar72 >> 0x10) | bVar77;
        bVar77 = (byte)((ulong)uVar72 >> 0x18) | bVar77;
        bVar85 = (byte)((int)(short)(char)bVar79 >> 0x1f);
        bVar79 = (byte)((ulong)uVar72 >> 0x20) | bVar85;
        bVar81 = (byte)((ulong)uVar72 >> 0x28) | bVar85;
        bVar83 = (byte)((ulong)uVar72 >> 0x30) | bVar85;
        bVar85 = (byte)((ulong)uVar72 >> 0x38) | bVar85;
        uVar72 = CONCAT17(bVar85,CONCAT16(bVar83,CONCAT15(bVar81,CONCAT14(bVar79,CONCAT13(bVar77,
                                                  CONCAT12(bVar75,CONCAT11(bVar73,bVar69)))))));
        bVar44 = bVar44 | bVar163;
        bVar48 = bVar48 | (char)bVar163 >> 7;
        bVar304 = (byte)((short)(char)bVar163 >> 0xf);
        bVar49 = bVar49 | bVar304;
        bVar50 = bVar50 | bVar304;
        bVar163 = (byte)((int)(short)(char)bVar163 >> 0x1f);
        bVar62 = bVar62 | bVar163;
        bVar80 = bVar80 | bVar163;
        bVar52 = bVar52 | bVar163;
        bVar56 = bVar56 | bVar163;
        bVar58 = bVar58 | bVar166;
        bVar60 = bVar60 | (char)bVar166 >> 7;
        bVar163 = (byte)((short)(char)bVar166 >> 0xf);
        bVar64 = bVar64 | bVar163;
        bVar66 = bVar66 | bVar163;
        bVar163 = (byte)((int)(short)(char)bVar166 >> 0x1f);
        bVar68 = bVar68 | bVar163;
        bVar70 = bVar70 | bVar163;
        bVar74 = bVar74 | bVar163;
        bVar76 = bVar76 | bVar163;
        bVar113 = bVar113 | bVar22;
        bVar115 = bVar115 | (char)bVar22 >> 7;
        bVar163 = (byte)((short)(char)bVar22 >> 0xf);
        bVar117 = bVar117 | bVar163;
        bVar119 = bVar119 | bVar163;
        bVar163 = (byte)((int)(short)(char)bVar22 >> 0x1f);
        bVar193 = bVar193 | bVar163;
        bVar194 = bVar194 | bVar163;
        bVar195 = bVar195 | bVar163;
        bVar196 = bVar196 | bVar163;
        bVar197 = bVar197 | bVar25;
        bVar198 = bVar198 | (char)bVar25 >> 7;
        bVar163 = (byte)((short)(char)bVar25 >> 0xf);
        bVar199 = bVar199 | bVar163;
        bVar200 = bVar200 | bVar163;
        bVar163 = (byte)((int)(short)(char)bVar25 >> 0x1f);
        bVar201 = bVar201 | bVar163;
        bVar202 = bVar202 | bVar163;
        bVar203 = bVar203 | bVar163;
        bVar204 = bVar204 | bVar163;
        bVar28 = bVar28 | bVar157;
        bVar29 = bVar29 | (char)bVar157 >> 7;
        bVar163 = (byte)((short)(char)bVar157 >> 0xf);
        bVar30 = bVar30 | bVar163;
        bVar31 = bVar31 | bVar163;
        bVar157 = (byte)((int)(short)(char)bVar157 >> 0x1f);
        bVar32 = bVar32 | bVar157;
        bVar33 = bVar33 | bVar157;
        bVar34 = bVar34 | bVar157;
        bVar35 = bVar35 | bVar157;
        bVar36 = bVar36 | bVar160;
        bVar37 = bVar37 | (char)bVar160 >> 7;
        bVar157 = (byte)((short)(char)bVar160 >> 0xf);
        bVar38 = bVar38 | bVar157;
        bVar39 = bVar39 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar160 >> 0x1f);
        bVar40 = bVar40 | bVar157;
        bVar41 = bVar41 | bVar157;
        bVar42 = bVar42 | bVar157;
        bVar43 = bVar43 | bVar157;
        bVar253 = bVar253 | bVar165;
        bVar254 = bVar254 | (char)bVar165 >> 7;
        bVar157 = (byte)((short)(char)bVar165 >> 0xf);
        bVar255 = bVar255 | bVar157;
        bVar256 = bVar256 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar165 >> 0x1f);
        bVar257 = bVar257 | bVar157;
        bVar258 = bVar258 | bVar157;
        bVar259 = bVar259 | bVar157;
        bVar260 = bVar260 | bVar157;
        bVar261 = bVar261 | bVar169;
        bVar262 = bVar262 | (char)bVar169 >> 7;
        bVar157 = (byte)((short)(char)bVar169 >> 0xf);
        bVar263 = bVar263 | bVar157;
        bVar264 = bVar264 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar169 >> 0x1f);
        bVar265 = bVar265 | bVar157;
        bVar266 = bVar266 | bVar157;
        bVar267 = bVar267 | bVar157;
        bVar268 = bVar268 | bVar157;
        bVar269 = bVar269 | bVar23;
        bVar270 = bVar270 | (char)bVar23 >> 7;
        bVar157 = (byte)((short)(char)bVar23 >> 0xf);
        bVar271 = bVar271 | bVar157;
        bVar272 = bVar272 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar23 >> 0x1f);
        bVar273 = bVar273 | bVar157;
        bVar274 = bVar274 | bVar157;
        bVar275 = bVar275 | bVar157;
        bVar276 = bVar276 | bVar157;
        bVar277 = bVar277 | bVar26;
        bVar278 = bVar278 | (char)bVar26 >> 7;
        bVar157 = (byte)((short)(char)bVar26 >> 0xf);
        bVar279 = bVar279 | bVar157;
        bVar280 = bVar280 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar26 >> 0x1f);
        bVar281 = bVar281 | bVar157;
        bVar282 = bVar282 | bVar157;
        bVar283 = bVar283 | bVar157;
        bVar284 = bVar284 | bVar157;
        bVar237 = bVar237 | bVar172;
        bVar238 = bVar238 | (char)bVar172 >> 7;
        bVar157 = (byte)((short)(char)bVar172 >> 0xf);
        bVar239 = bVar239 | bVar157;
        bVar240 = bVar240 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar172 >> 0x1f);
        bVar241 = bVar241 | bVar157;
        bVar242 = bVar242 | bVar157;
        bVar243 = bVar243 | bVar157;
        bVar244 = bVar244 | bVar157;
        bVar245 = bVar245 | bVar174;
        bVar246 = bVar246 | (char)bVar174 >> 7;
        bVar157 = (byte)((short)(char)bVar174 >> 0xf);
        bVar247 = bVar247 | bVar157;
        bVar248 = bVar248 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar174 >> 0x1f);
        bVar249 = bVar249 | bVar157;
        bVar250 = bVar250 | bVar157;
        bVar251 = bVar251 | bVar157;
        bVar252 = bVar252 | bVar157;
        bVar78 = bVar78 | bVar159;
        bVar82 = bVar82 | (char)bVar159 >> 7;
        bVar157 = (byte)((short)(char)bVar159 >> 0xf);
        bVar84 = bVar84 | bVar157;
        bVar86 = bVar86 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar159 >> 0x1f);
        bVar88 = bVar88 | bVar157;
        bVar90 = bVar90 | bVar157;
        bVar92 = bVar92 | bVar157;
        bVar94 = bVar94 | bVar157;
        bVar96 = bVar96 | bVar161;
        bVar98 = bVar98 | (char)bVar161 >> 7;
        bVar157 = (byte)((short)(char)bVar161 >> 0xf);
        bVar100 = bVar100 | bVar157;
        bVar102 = bVar102 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar161 >> 0x1f);
        bVar104 = bVar104 | bVar157;
        bVar107 = bVar107 | bVar157;
        bVar109 = bVar109 | bVar157;
        bVar111 = bVar111 | bVar157;
        bVar205 = bVar205 | bVar170;
        bVar206 = bVar206 | (char)bVar170 >> 7;
        bVar157 = (byte)((short)(char)bVar170 >> 0xf);
        bVar207 = bVar207 | bVar157;
        bVar208 = bVar208 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar170 >> 0x1f);
        bVar209 = bVar209 | bVar157;
        bVar210 = bVar210 | bVar157;
        bVar211 = bVar211 | bVar157;
        bVar212 = bVar212 | bVar157;
        bVar213 = bVar213 | bVar173;
        bVar214 = bVar214 | (char)bVar173 >> 7;
        bVar157 = (byte)((short)(char)bVar173 >> 0xf);
        bVar215 = bVar215 | bVar157;
        bVar216 = bVar216 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar173 >> 0x1f);
        bVar217 = bVar217 | bVar157;
        bVar218 = bVar218 | bVar157;
        bVar219 = bVar219 | bVar157;
        bVar220 = bVar220 | bVar157;
        bVar221 = bVar221 | bVar164;
        bVar222 = bVar222 | (char)bVar164 >> 7;
        bVar157 = (byte)((short)(char)bVar164 >> 0xf);
        bVar223 = bVar223 | bVar157;
        bVar224 = bVar224 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar164 >> 0x1f);
        bVar225 = bVar225 | bVar157;
        bVar226 = bVar226 | bVar157;
        bVar227 = bVar227 | bVar157;
        bVar228 = bVar228 | bVar157;
        bVar229 = bVar229 | bVar168;
        bVar230 = bVar230 | (char)bVar168 >> 7;
        bVar157 = (byte)((short)(char)bVar168 >> 0xf);
        bVar231 = bVar231 | bVar157;
        bVar232 = bVar232 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar168 >> 0x1f);
        bVar233 = bVar233 | bVar157;
        bVar234 = bVar234 | bVar157;
        bVar235 = bVar235 | bVar157;
        bVar236 = bVar236 | bVar157;
        bVar285 = bVar285 | bVar24;
        bVar286 = bVar286 | (char)bVar24 >> 7;
        bVar157 = (byte)((short)(char)bVar24 >> 0xf);
        bVar287 = bVar287 | bVar157;
        bVar288 = bVar288 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar24 >> 0x1f);
        bVar289 = bVar289 | bVar157;
        bVar290 = bVar290 | bVar157;
        bVar291 = bVar291 | bVar157;
        bVar292 = bVar292 | bVar157;
        bVar293 = bVar293 | bVar27;
        bVar294 = bVar294 | (char)bVar27 >> 7;
        bVar157 = (byte)((short)(char)bVar27 >> 0xf);
        bVar295 = bVar295 | bVar157;
        bVar296 = bVar296 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar27 >> 0x1f);
        bVar297 = bVar297 | bVar157;
        bVar298 = bVar298 | bVar157;
        bVar299 = bVar299 | bVar157;
        bVar300 = bVar300 | bVar157;
        puVar18 = puVar18 + 4;
        bVar157 = (byte)uVar140 | bVar162;
        bVar159 = (byte)((ulong)uVar140 >> 8) | (char)bVar162 >> 7;
        bVar161 = (byte)((short)(char)bVar162 >> 0xf);
        bVar160 = (byte)((ulong)uVar140 >> 0x10) | bVar161;
        bVar161 = (byte)((ulong)uVar140 >> 0x18) | bVar161;
        bVar165 = (byte)((int)(short)(char)bVar162 >> 0x1f);
        bVar162 = (byte)((ulong)uVar140 >> 0x20) | bVar165;
        bVar163 = (byte)((ulong)uVar140 >> 0x28) | bVar165;
        bVar164 = (byte)((ulong)uVar140 >> 0x30) | bVar165;
        bVar165 = (byte)((ulong)uVar140 >> 0x38) | bVar165;
        uVar140 = CONCAT17(bVar165,CONCAT16(bVar164,CONCAT15(bVar163,CONCAT14(bVar162,CONCAT13(
                                                  bVar161,CONCAT12(bVar160,CONCAT11(bVar159,bVar157)
                                                                  ))))));
        bVar166 = (byte)uVar149 | bVar171;
        bVar168 = (byte)((ulong)uVar149 >> 8) | (char)bVar171 >> 7;
        bVar170 = (byte)((short)(char)bVar171 >> 0xf);
        bVar169 = (byte)((ulong)uVar149 >> 0x10) | bVar170;
        bVar170 = (byte)((ulong)uVar149 >> 0x18) | bVar170;
        bVar174 = (byte)((int)(short)(char)bVar171 >> 0x1f);
        bVar171 = (byte)((ulong)uVar149 >> 0x20) | bVar174;
        bVar172 = (byte)((ulong)uVar149 >> 0x28) | bVar174;
        bVar173 = (byte)((ulong)uVar149 >> 0x30) | bVar174;
        bVar174 = (byte)((ulong)uVar149 >> 0x38) | bVar174;
        uVar149 = CONCAT17(bVar174,CONCAT16(bVar173,CONCAT15(bVar172,CONCAT14(bVar171,CONCAT13(
                                                  bVar170,CONCAT12(bVar169,CONCAT11(bVar168,bVar166)
                                                                  ))))));
        uVar19 = uVar19 - 0x20;
      } while (uVar19 != 0);
      bVar28 = bVar157 | bVar28 | bVar78 | bVar87 | bVar205 | bVar51 | bVar237 | bVar120 |
               bVar221 | bVar44 | bVar253 | bVar139 | bVar269 | bVar175 | bVar285 | bVar113;
      bVar29 = bVar159 | bVar29 | bVar82 | bVar89 | bVar206 | bVar55 | bVar238 | bVar123 |
               bVar222 | bVar48 | bVar254 | bVar141 | bVar270 | bVar177 | bVar286 | bVar115;
      bVar30 = bVar160 | bVar30 | bVar84 | bVar91 | bVar207 | bVar57 | bVar239 | bVar124 |
               bVar223 | bVar49 | bVar255 | bVar142 | bVar271 | bVar178 | bVar287 | bVar117;
      bVar31 = bVar161 | bVar31 | bVar86 | bVar93 | bVar208 | bVar59 | bVar240 | bVar125 |
               bVar224 | bVar50 | bVar256 | bVar143 | bVar272 | bVar179 | bVar288 | bVar119;
      bVar32 = bVar162 | bVar32 | bVar88 | bVar95 | bVar209 | bVar61 | bVar241 | bVar126 |
               bVar225 | bVar62 | bVar257 | bVar144 | bVar273 | bVar180 | bVar289 | bVar193;
      bVar33 = bVar163 | bVar33 | bVar90 | bVar97 | bVar210 | bVar63 | bVar242 | bVar127 |
               bVar226 | bVar80 | bVar258 | bVar145 | bVar274 | bVar181 | bVar290 | bVar194;
      bVar34 = bVar164 | bVar34 | bVar92 | bVar99 | bVar211 | bVar65 | bVar243 | bVar128 |
               bVar227 | bVar52 | bVar259 | bVar146 | bVar275 | bVar182 | bVar291 | bVar195;
      bVar35 = bVar165 | bVar35 | bVar94 | bVar101 | bVar212 | bVar67 | bVar244 | bVar129 |
               bVar228 | bVar56 | bVar260 | bVar147 | bVar276 | bVar183 | bVar292 | bVar196;
      bVar36 = bVar166 | bVar36 | bVar96 | bVar103 | bVar213 | bVar69 | bVar245 | bVar130 |
               bVar229 | bVar58 | bVar261 | bVar148 | bVar277 | bVar184 | bVar293 | bVar197;
      bVar37 = bVar168 | bVar37 | bVar98 | bVar106 | bVar214 | bVar73 | bVar246 | bVar132 |
               bVar230 | bVar60 | bVar262 | bVar150 | bVar278 | bVar186 | bVar294 | bVar198;
      bVar38 = bVar169 | bVar38 | bVar100 | bVar108 | bVar215 | bVar75 | bVar247 | bVar133 |
               bVar231 | bVar64 | bVar263 | bVar151 | bVar279 | bVar187 | bVar295 | bVar199;
      bVar39 = bVar170 | bVar39 | bVar102 | bVar110 | bVar216 | bVar77 | bVar248 | bVar134 |
               bVar232 | bVar66 | bVar264 | bVar152 | bVar280 | bVar188 | bVar296 | bVar200;
      bVar40 = bVar171 | bVar40 | bVar104 | bVar112 | bVar217 | bVar79 | bVar249 | bVar135 |
               bVar233 | bVar68 | bVar265 | bVar153 | bVar281 | bVar189 | bVar297 | bVar201;
      bVar41 = bVar172 | bVar41 | bVar107 | bVar114 | bVar218 | bVar81 | bVar250 | bVar136 |
               bVar234 | bVar70 | bVar266 | bVar154 | bVar282 | bVar190 | bVar298 | bVar202;
      bVar42 = bVar173 | bVar42 | bVar109 | bVar116 | bVar219 | bVar83 | bVar251 | bVar137 |
               bVar235 | bVar74 | bVar267 | bVar155 | bVar283 | bVar191 | bVar299 | bVar203;
      bVar43 = bVar174 | bVar43 | bVar111 | bVar118 | bVar220 | bVar85 | bVar252 | bVar138 |
               bVar236 | bVar76 | bVar268 | bVar156 | bVar284 | bVar192 | bVar300 | bVar204;
      auVar5[1] = bVar29;
      auVar5[0] = bVar28;
      auVar5[2] = bVar30;
      auVar5[3] = bVar31;
      auVar5[4] = bVar32;
      auVar5[5] = bVar33;
      auVar5[6] = bVar34;
      auVar5[7] = bVar35;
      auVar5[8] = bVar36;
      auVar5[9] = bVar37;
      auVar5[10] = bVar38;
      auVar5[0xb] = bVar39;
      auVar5[0xc] = bVar40;
      auVar5[0xd] = bVar41;
      auVar5[0xe] = bVar42;
      auVar5[0xf] = bVar43;
      auVar6[1] = bVar29;
      auVar6[0] = bVar28;
      auVar6[2] = bVar30;
      auVar6[3] = bVar31;
      auVar6[4] = bVar32;
      auVar6[5] = bVar33;
      auVar6[6] = bVar34;
      auVar6[7] = bVar35;
      auVar6[8] = bVar36;
      auVar6[9] = bVar37;
      auVar6[10] = bVar38;
      auVar6[0xb] = bVar39;
      auVar6[0xc] = bVar40;
      auVar6[0xd] = bVar41;
      auVar6[0xe] = bVar42;
      auVar6[0xf] = bVar43;
      auVar45 = NEON_ext(auVar5,auVar6,8,1);
      uVar19 = CONCAT17(bVar35 | auVar45[7],
                        CONCAT16(bVar34 | auVar45[6],
                                 CONCAT15(bVar33 | auVar45[5],
                                          CONCAT14(bVar32 | auVar45[4],
                                                   CONCAT13(bVar31 | auVar45[3],
                                                            CONCAT12(bVar30 | auVar45[2],
                                                                     CONCAT11(bVar29 | auVar45[1],
                                                                              bVar28 | auVar45[0])))
                                                  ))));
      if (uVar13 == uVar15) goto LAB_1001663d0;
      if ((uVar13 & 0x18) == 0) {
        puVar10 = (ulong *)((long)puVar10 + uVar15);
        goto LAB_1001663c0;
      }
    }
    uVar20 = uVar13 & 0xfffffffffffffff8;
    bVar28 = 0;
    bVar29 = 0;
    bVar30 = 0;
    bVar31 = 0;
    bVar32 = 0;
    bVar33 = 0;
    bVar34 = 0;
    bVar35 = 0;
    bVar36 = 0;
    bVar37 = 0;
    bVar38 = 0;
    bVar39 = 0;
    bVar40 = 0;
    bVar41 = 0;
    bVar42 = 0;
    bVar43 = 0;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar19;
    lVar17 = uVar15 - uVar20;
    uVar54 = 0;
    uVar72 = 0;
    uVar53 = 0;
    uVar71 = 0;
    pbVar12 = (byte *)((long)puVar10 + uVar15);
    do {
      uVar122 = *(undefined8 *)pbVar12;
      bVar44 = (byte)uVar122;
      bVar48 = (byte)((ulong)uVar122 >> 8);
      bVar49 = (byte)((ulong)uVar122 >> 0x10);
      bVar50 = (byte)((ulong)uVar122 >> 0x18);
      bVar62 = (byte)((ulong)uVar122 >> 0x20);
      bVar80 = (byte)((ulong)uVar122 >> 0x28);
      bVar52 = (byte)((ulong)uVar122 >> 0x30);
      bVar56 = (byte)((ulong)uVar122 >> 0x38);
      bVar88 = (byte)uVar53 | bVar52;
      bVar90 = (byte)((ulong)uVar53 >> 8) | (char)bVar52 >> 7;
      bVar94 = (byte)((short)(char)bVar52 >> 0xf);
      bVar92 = (byte)((ulong)uVar53 >> 0x10) | bVar94;
      bVar94 = (byte)((ulong)uVar53 >> 0x18) | bVar94;
      bVar102 = (byte)((int)(short)(char)bVar52 >> 0x1f);
      bVar96 = (byte)((ulong)uVar53 >> 0x20) | bVar102;
      bVar98 = (byte)((ulong)uVar53 >> 0x28) | bVar102;
      bVar100 = (byte)((ulong)uVar53 >> 0x30) | bVar102;
      bVar102 = (byte)((ulong)uVar53 >> 0x38) | bVar102;
      uVar53 = CONCAT17(bVar102,CONCAT16(bVar100,CONCAT15(bVar98,CONCAT14(bVar96,CONCAT13(bVar94,
                                                  CONCAT12(bVar92,CONCAT11(bVar90,bVar88)))))));
      bVar104 = (byte)uVar71 | bVar56;
      bVar107 = (byte)((ulong)uVar71 >> 8) | (char)bVar56 >> 7;
      bVar111 = (byte)((short)(char)bVar56 >> 0xf);
      bVar109 = (byte)((ulong)uVar71 >> 0x10) | bVar111;
      bVar111 = (byte)((ulong)uVar71 >> 0x18) | bVar111;
      bVar119 = (byte)((int)(short)(char)bVar56 >> 0x1f);
      bVar113 = (byte)((ulong)uVar71 >> 0x20) | bVar119;
      bVar115 = (byte)((ulong)uVar71 >> 0x28) | bVar119;
      bVar117 = (byte)((ulong)uVar71 >> 0x30) | bVar119;
      bVar119 = (byte)((ulong)uVar71 >> 0x38) | bVar119;
      uVar71 = CONCAT17(bVar119,CONCAT16(bVar117,CONCAT15(bVar115,CONCAT14(bVar113,CONCAT13(bVar111,
                                                  CONCAT12(bVar109,CONCAT11(bVar107,bVar104)))))));
      bVar52 = (byte)uVar54 | bVar62;
      bVar56 = (byte)((ulong)uVar54 >> 8) | (char)bVar62 >> 7;
      bVar60 = (byte)((short)(char)bVar62 >> 0xf);
      bVar58 = (byte)((ulong)uVar54 >> 0x10) | bVar60;
      bVar60 = (byte)((ulong)uVar54 >> 0x18) | bVar60;
      bVar68 = (byte)((int)(short)(char)bVar62 >> 0x1f);
      bVar62 = (byte)((ulong)uVar54 >> 0x20) | bVar68;
      bVar64 = (byte)((ulong)uVar54 >> 0x28) | bVar68;
      bVar66 = (byte)((ulong)uVar54 >> 0x30) | bVar68;
      bVar68 = (byte)((ulong)uVar54 >> 0x38) | bVar68;
      uVar54 = CONCAT17(bVar68,CONCAT16(bVar66,CONCAT15(bVar64,CONCAT14(bVar62,CONCAT13(bVar60,
                                                  CONCAT12(bVar58,CONCAT11(bVar56,bVar52)))))));
      bVar70 = (byte)uVar72 | bVar80;
      bVar74 = (byte)((ulong)uVar72 >> 8) | (char)bVar80 >> 7;
      bVar78 = (byte)((short)(char)bVar80 >> 0xf);
      bVar76 = (byte)((ulong)uVar72 >> 0x10) | bVar78;
      bVar78 = (byte)((ulong)uVar72 >> 0x18) | bVar78;
      bVar86 = (byte)((int)(short)(char)bVar80 >> 0x1f);
      bVar80 = (byte)((ulong)uVar72 >> 0x20) | bVar86;
      bVar82 = (byte)((ulong)uVar72 >> 0x28) | bVar86;
      bVar84 = (byte)((ulong)uVar72 >> 0x30) | bVar86;
      bVar86 = (byte)((ulong)uVar72 >> 0x38) | bVar86;
      uVar72 = CONCAT17(bVar86,CONCAT16(bVar84,CONCAT15(bVar82,CONCAT14(bVar80,CONCAT13(bVar78,
                                                  CONCAT12(bVar76,CONCAT11(bVar74,bVar70)))))));
      bVar28 = bVar28 | bVar49;
      bVar29 = bVar29 | (char)bVar49 >> 7;
      bVar193 = (byte)((short)(char)bVar49 >> 0xf);
      bVar30 = bVar30 | bVar193;
      bVar31 = bVar31 | bVar193;
      bVar49 = (byte)((int)(short)(char)bVar49 >> 0x1f);
      bVar32 = bVar32 | bVar49;
      bVar33 = bVar33 | bVar49;
      bVar34 = bVar34 | bVar49;
      bVar35 = bVar35 | bVar49;
      bVar36 = bVar36 | bVar50;
      bVar37 = bVar37 | (char)bVar50 >> 7;
      bVar49 = (byte)((short)(char)bVar50 >> 0xf);
      bVar38 = bVar38 | bVar49;
      bVar39 = bVar39 | bVar49;
      bVar49 = (byte)((int)(short)(char)bVar50 >> 0x1f);
      bVar40 = bVar40 | bVar49;
      bVar41 = bVar41 | bVar49;
      bVar42 = bVar42 | bVar49;
      bVar43 = bVar43 | bVar49;
      auVar47[0] = auVar46[0] | bVar44;
      auVar47[1] = auVar46[1] | (char)bVar44 >> 7;
      bVar49 = (byte)((short)(char)bVar44 >> 0xf);
      auVar47[2] = auVar46[2] | bVar49;
      auVar47[3] = auVar46[3] | bVar49;
      bVar44 = (byte)((int)(short)(char)bVar44 >> 0x1f);
      auVar47[4] = auVar46[4] | bVar44;
      auVar47[5] = auVar46[5] | bVar44;
      auVar47[6] = auVar46[6] | bVar44;
      auVar47[7] = auVar46[7] | bVar44;
      auVar47[8] = auVar46[8] | bVar48;
      auVar47[9] = auVar46[9] | (char)bVar48 >> 7;
      bVar44 = (byte)((short)(char)bVar48 >> 0xf);
      auVar47[10] = auVar46[10] | bVar44;
      auVar47[0xb] = auVar46[0xb] | bVar44;
      bVar44 = (byte)((int)(short)(char)bVar48 >> 0x1f);
      auVar47[0xc] = auVar46[0xc] | bVar44;
      auVar47[0xd] = auVar46[0xd] | bVar44;
      auVar47[0xe] = auVar46[0xe] | bVar44;
      auVar47[0xf] = auVar46[0xf] | bVar44;
      lVar17 = lVar17 + 8;
      pbVar12 = pbVar12 + 8;
      auVar46 = auVar47;
    } while (lVar17 != 0);
    bVar28 = auVar47[0] | bVar52 | bVar28 | bVar88;
    bVar29 = auVar47[1] | bVar56 | bVar29 | bVar90;
    bVar30 = auVar47[2] | bVar58 | bVar30 | bVar92;
    bVar31 = auVar47[3] | bVar60 | bVar31 | bVar94;
    bVar32 = auVar47[4] | bVar62 | bVar32 | bVar96;
    bVar33 = auVar47[5] | bVar64 | bVar33 | bVar98;
    bVar34 = auVar47[6] | bVar66 | bVar34 | bVar100;
    bVar35 = auVar47[7] | bVar68 | bVar35 | bVar102;
    bVar36 = auVar47[8] | bVar70 | bVar36 | bVar104;
    bVar37 = auVar47[9] | bVar74 | bVar37 | bVar107;
    bVar38 = auVar47[10] | bVar76 | bVar38 | bVar109;
    bVar39 = auVar47[0xb] | bVar78 | bVar39 | bVar111;
    bVar40 = auVar47[0xc] | bVar80 | bVar40 | bVar113;
    bVar41 = auVar47[0xd] | bVar82 | bVar41 | bVar115;
    bVar42 = auVar47[0xe] | bVar84 | bVar42 | bVar117;
    bVar43 = auVar47[0xf] | bVar86 | bVar43 | bVar119;
    auVar3[1] = bVar29;
    auVar3[0] = bVar28;
    auVar3[2] = bVar30;
    auVar3[3] = bVar31;
    auVar3[4] = bVar32;
    auVar3[5] = bVar33;
    auVar3[6] = bVar34;
    auVar3[7] = bVar35;
    auVar3[8] = bVar36;
    auVar3[9] = bVar37;
    auVar3[10] = bVar38;
    auVar3[0xb] = bVar39;
    auVar3[0xc] = bVar40;
    auVar3[0xd] = bVar41;
    auVar3[0xe] = bVar42;
    auVar3[0xf] = bVar43;
    auVar4[1] = bVar29;
    auVar4[0] = bVar28;
    auVar4[2] = bVar30;
    auVar4[3] = bVar31;
    auVar4[4] = bVar32;
    auVar4[5] = bVar33;
    auVar4[6] = bVar34;
    auVar4[7] = bVar35;
    auVar4[8] = bVar36;
    auVar4[9] = bVar37;
    auVar4[10] = bVar38;
    auVar4[0xb] = bVar39;
    auVar4[0xc] = bVar40;
    auVar4[0xd] = bVar41;
    auVar4[0xe] = bVar42;
    auVar4[0xf] = bVar43;
    auVar45 = NEON_ext(auVar3,auVar4,8,1);
    uVar19 = CONCAT17(bVar35 | auVar45[7],
                      CONCAT16(bVar34 | auVar45[6],
                               CONCAT15(bVar33 | auVar45[5],
                                        CONCAT14(bVar32 | auVar45[4],
                                                 CONCAT13(bVar31 | auVar45[3],
                                                          CONCAT12(bVar30 | auVar45[2],
                                                                   CONCAT11(bVar29 | auVar45[1],
                                                                            bVar28 | auVar45[0])))))
                              ));
    puVar10 = (ulong *)((long)puVar10 + uVar20);
    if (uVar13 == uVar20) goto LAB_1001663d0;
  }
LAB_1001663c0:
  do {
    puVar18 = (ulong *)((long)puVar10 + 1);
    uVar19 = uVar19 | (long)(char)(byte)*puVar10;
    puVar10 = puVar18;
  } while (puVar18 != (ulong *)(param_1 + param_2));
LAB_1001663d0:
  return (uVar19 & 0x8080808080808080) == 0;
}



/* Entry: 1001663ec; end: 10016646b;  */

void FUN_1001663ec(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  cVar3 = *(char *)((long)param_2 + 0x17);
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (long)cVar3) {
    puVar4 = param_2;
  }
  lVar1 = param_2[1];
  if (-1 < cVar3) {
    lVar1 = (long)cVar3;
  }
  FUN_100165f64(puVar4,lVar1);
  if ((int)puVar4 != 0) {
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      uVar6 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar6;
      param_1[2] = param_2[2];
      return;
    }
    uVar6 = *param_2;
    uVar2 = param_2[1];
    puVar4 = param_1;
    if (uVar2 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar2;
    }
    else {
      if (0x7ffffffffffffff6 < uVar2) {
        func_0x000104bd47d4();
        func_0x000107c60e20(uVar6);
        return;
      }
      uVar5 = 0x19;
      if ((uVar2 | 7) != 0x17) {
        uVar5 = (uVar2 | 7) + 1;
      }
      FUN_100033e30();
      param_1[1] = uVar2;
      param_1[2] = uVar5 | 0x8000000000000000;
      *param_1 = puVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(puVar4,uVar6,uVar2 + 1);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10016646c; end: 10016648b;  */

void FUN_10016646c(void)

{
  return;
}



/* Entry: 10016648c; end: 100166527;  */

/* WARNING: Removing unreachable block (ram,0x000100166580) */
/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_10016648c(undefined8 *******param_1,undefined8 ******param_2,undefined8 param_3,
             undefined8 param_4,undefined1 *param_5,ulong param_6,undefined8 *******param_7)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  undefined8 *******pppppppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 *******pppppppuVar11;
  ulong uVar12;
  undefined8 *******pppppppuVar13;
  long lVar14;
  undefined8 *******pppppppuVar15;
  ulong uVar16;
  undefined8 *******pppppppuVar17;
  long lVar18;
  undefined8 ******ppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined8 ******ppppppuVar21;
  undefined8 ******ppppppuStack_c0;
  undefined8 *******pppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 uStack_68;
  
  ppppppuVar10 = (undefined8 ******)(long)*(char *)((long)param_7 + 0x17);
  if ((long)ppppppuVar10 < 0) {
    if ((undefined8 *******)*param_7 == param_1) {
      ppppppuVar10 = param_7[1];
      goto joined_r0x0001001664ec;
    }
LAB_1001664f0:
    FUN_100042f24(param_7);
  }
  else {
    if (param_7 != param_1) goto LAB_1001664f0;
joined_r0x0001001664ec:
    if (param_2 != ppppppuVar10) goto LAB_1001664f0;
  }
  pppppppuVar7 = param_7;
  func_0x000107c60bdc(param_7,param_3,0);
  if (pppppppuVar7 == (undefined8 *******)0xffffffffffffffff) goto LAB_100166e68;
  pppppppuVar17 = (undefined8 *******)(ulong)*(byte *)((long)param_7 + 0x17);
  uVar5 = (uint)(char)*(byte *)((long)param_7 + 0x17);
  if (param_6 - 1 == 0) {
    pppppppuVar17 = pppppppuVar7;
    pppppppuVar13 = param_7;
    if ((int)uVar5 < 0) {
      pppppppuVar13 = (undefined8 *******)*param_7;
    }
    do {
      *(undefined1 *)((long)pppppppuVar13 + (long)pppppppuVar17) = *param_5;
      pppppppuVar15 = param_7;
      func_0x000107c60bdc(param_7,param_3,(long)pppppppuVar17 + 1,param_4);
      pppppppuVar17 = pppppppuVar15;
    } while (pppppppuVar15 != (undefined8 *******)0xffffffffffffffff);
    goto LAB_100166e68;
  }
  pppppppuVar13 = pppppppuVar7;
  if ((int)uVar5 < 0) {
    pppppppuVar17 = (undefined8 *******)param_7[1];
    pppppppuVar15 = pppppppuVar17;
    if (param_6 != 0) goto LAB_1001665f8;
LAB_100166a28:
    lVar14 = 0;
    if ((uVar5 >> 7 & 1) != 0) goto LAB_100166cb0;
LAB_100166a30:
    pppppppuVar15 = (undefined8 *******)(lVar14 + (long)pppppppuVar7);
    pppppppuVar11 = param_7;
    if (param_6 == 0) goto LAB_100166d3c;
LAB_100166cd4:
    do {
      func_0x000107c610b8((long)pppppppuVar11 + (long)pppppppuVar13,param_5,param_6);
      pppppppuVar13 = (undefined8 *******)((long)pppppppuVar13 + param_6);
      pppppppuVar15 = (undefined8 *******)((long)pppppppuVar15 + 1);
      pppppppuVar9 = param_7;
      func_0x000107c60bdc(param_7,param_3,pppppppuVar15,param_4);
      pppppppuVar20 = pppppppuVar17;
      if (pppppppuVar9 <= pppppppuVar17) {
        pppppppuVar20 = pppppppuVar9;
      }
      lVar18 = (long)pppppppuVar20 - (long)pppppppuVar15;
      if (lVar18 != 0) {
        func_0x000107c610b8((long)pppppppuVar11 + (long)pppppppuVar13,
                            (long)pppppppuVar11 + (long)pppppppuVar15,lVar18);
        pppppppuVar13 = (undefined8 *******)(lVar18 + (long)pppppppuVar13);
        pppppppuVar15 = pppppppuVar20;
      }
    } while (pppppppuVar15 < pppppppuVar17);
  }
  else {
    pppppppuVar15 = pppppppuVar17;
    if (param_6 == 0) goto LAB_100166a28;
LAB_1001665f8:
    lVar14 = 0;
    lVar18 = 1;
    pppppppuVar17 = pppppppuVar7;
    do {
      lVar1 = (long)pppppppuVar17 + 1;
      pppppppuVar17 = param_7;
      func_0x000107c60bdc(param_7,param_3,lVar1,param_4);
      lVar14 = lVar14 + (param_6 - 1);
      lVar18 = lVar18 + -1;
    } while (pppppppuVar17 != (undefined8 *******)0xffffffffffffffff);
    pppppppuVar11 = (undefined8 *******)(long)*(char *)((long)param_7 + 0x17);
    pppppppuVar17 = (undefined8 *******)((long)pppppppuVar15 + lVar14);
    if ((long)pppppppuVar11 < 0) {
      if ((undefined8 *******)(((ulong)param_7[2] & 0x7fffffffffffffff) - 1) < pppppppuVar17)
      goto LAB_100166644;
    }
    else if ((undefined8 *******)0x16 < pppppppuVar17) {
LAB_100166644:
      pppppppuStack_78 = (undefined8 *******)*param_7;
      bVar3 = *(byte *)((long)param_7 + 0x17);
      uStack_68 = param_7[2];
      ppppppuStack_70 = param_7[1];
      *param_7 = (undefined8 ******)0x0;
      param_7[1] = (undefined8 ******)0x0;
      param_7[2] = (undefined8 ******)0x0;
      ppppppuStack_c0 = (undefined8 ******)0x7ffffffffffffff7;
      pppppppuVar13 = (undefined8 *******)0xffffffffffffffff;
      if (pppppppuVar17 < (undefined8 *******)0x7ffffffffffffff7) {
        if ((undefined8 *******)0x16 < pppppppuVar17) {
          ppppppuVar10 = (undefined8 ******)0x19;
          if (((ulong)pppppppuVar17 | 7) != 0x17) {
            ppppppuVar10 = (undefined8 ******)(((ulong)pppppppuVar17 | 7) + 1);
          }
          ppppppuVar19 = ppppppuVar10;
          func_0x000107c60e20();
          *(undefined1 *)ppppppuVar19 = *(undefined1 *)param_7;
          param_7[1] = (undefined8 ******)0x0;
          param_7[2] = (undefined8 ******)((ulong)ppppppuVar10 | 0x8000000000000000);
          *param_7 = ppppppuVar19;
        }
        ppppppuVar10 = (undefined8 ******)0x0;
        pppppppuVar13 = pppppppuVar7;
        if ((char)bVar3 < '\0') goto LAB_1001666e8;
LAB_1001666d8:
        if (ppppppuVar10 <= (undefined8 ******)(ulong)bVar3) {
          pppppppuVar17 = pppppppuVar13;
          pppppppuVar11 = &pppppppuStack_78;
          ppppppuVar19 = (undefined8 ******)(ulong)bVar3;
          do {
            uVar12 = (long)ppppppuVar19 - (long)ppppppuVar10;
            if ((ulong)((long)pppppppuVar17 - (long)ppppppuVar10) <=
                (ulong)((long)ppppppuVar19 - (long)ppppppuVar10)) {
              uVar12 = (long)pppppppuVar17 - (long)ppppppuVar10;
            }
            bVar3 = *(byte *)((long)param_7 + 0x17);
            pppppppuVar13 = pppppppuVar17;
            if ((char)bVar3 < '\0') {
              ppppppuVar19 = param_7[1];
              uVar16 = ((ulong)param_7[2] & 0x7fffffffffffffff) - 1;
              ppppppuVar21 = (undefined8 ******)((ulong)param_7[2] >> 0x38);
              if (uVar16 - (long)ppppppuVar19 < uVar12) goto LAB_10016672c;
LAB_10016681c:
              if (uVar12 != 0) {
                pppppppuVar20 = param_7;
                if ((char)bVar3 < '\0') {
                  pppppppuVar20 = (undefined8 *******)*param_7;
                }
                pppppppuVar13 = (undefined8 *******)((long)pppppppuVar20 + (long)ppppppuVar19);
                func_0x000107c610b8(pppppppuVar13,(long)pppppppuVar11 + (long)ppppppuVar10,uVar12);
                ppppppuVar19 = (undefined8 ******)((long)ppppppuVar19 + uVar12);
                if (*(char *)((long)param_7 + 0x17) < '\0') {
                  param_7[1] = ppppppuVar19;
                }
                else {
                  *(byte *)((long)param_7 + 0x17) = (byte)ppppppuVar19 & 0x7f;
                }
                *(undefined1 *)((long)pppppppuVar20 + (long)ppppppuVar19) = 0;
                ppppppuVar21 = (undefined8 ******)(ulong)*(byte *)((long)param_7 + 0x17);
              }
              if ((uint)ppppppuVar21 >> 7 != 0) goto LAB_100166898;
              pppppppuVar11 = param_7;
              if (0x16U - (long)ppppppuVar21 < param_6) {
                uVar16 = (param_6 - 0x16) + (long)ppppppuVar21;
                if (uVar16 < 0x7fffffffffffffe1) {
                  uVar12 = 0x16;
LAB_1001668e0:
                  uVar2 = uVar12 + uVar16;
                  if (uVar12 + uVar16 <= uVar12 * 2) {
                    uVar2 = uVar12 * 2;
                  }
                  ppppppuVar19 = (undefined8 ******)0x19;
                  if ((uVar2 | 7) != 0x17) {
                    ppppppuVar19 = (undefined8 ******)((uVar2 | 7) + 1);
                  }
                  ppppppuVar10 = (undefined8 ******)0x17;
                  if (0x16 < uVar2) {
                    ppppppuVar10 = ppppppuVar19;
                  }
                  bVar6 = uVar12 == 0x16;
                  ppppppuVar19 = ppppppuVar10;
                  func_0x000107c60e20();
                  goto joined_r0x000100166998;
                }
                goto LAB_100166e90;
              }
LAB_1001669a4:
              pppppppuVar13 = (undefined8 *******)((long)pppppppuVar11 + (long)ppppppuVar21);
              func_0x000107c610b8(pppppppuVar13,param_5,param_6);
              ppppppuVar21 = (undefined8 ******)((long)ppppppuVar21 + param_6);
              if (*(char *)((long)param_7 + 0x17) < '\0') {
                param_7[1] = ppppppuVar21;
                *(undefined1 *)((long)pppppppuVar11 + (long)ppppppuVar21) = 0;
              }
              else {
                *(byte *)((long)param_7 + 0x17) = (byte)ppppppuVar21 & 0x7f;
                *(undefined1 *)((long)pppppppuVar11 + (long)ppppppuVar21) = 0;
              }
            }
            else {
              ppppppuVar19 = (undefined8 ******)(ulong)bVar3;
              uVar16 = 0x16;
              ppppppuVar21 = ppppppuVar19;
              if (uVar12 <= 0x16U - (long)ppppppuVar19) goto LAB_10016681c;
LAB_10016672c:
              if (~uVar16 + 0x7ffffffffffffff7 < (uVar12 - uVar16) + (long)ppppppuVar19)
              goto LAB_100166e90;
              pppppppuVar20 = param_7;
              if ((char)bVar3 < '\0') {
                pppppppuVar20 = (undefined8 *******)*param_7;
              }
              ppppppuVar21 = (undefined8 ******)0x7ffffffffffffff7;
              if (uVar16 < 0x3ffffffffffffff3) {
                uVar2 = (long)ppppppuVar19 + uVar12;
                if ((long)ppppppuVar19 + uVar12 <= uVar16 * 2) {
                  uVar2 = uVar16 * 2;
                }
                ppppppuVar8 = (undefined8 ******)0x19;
                if ((uVar2 | 7) != 0x17) {
                  ppppppuVar8 = (undefined8 ******)((uVar2 | 7) + 1);
                }
                ppppppuVar21 = (undefined8 ******)0x17;
                if (0x16 < uVar2) {
                  ppppppuVar21 = ppppppuVar8;
                }
              }
              ppppppuVar8 = ppppppuVar21;
              func_0x000107c60e20();
              if (ppppppuVar19 != (undefined8 ******)0x0) {
                func_0x000107c610b8(ppppppuVar8,pppppppuVar20,ppppppuVar19);
              }
              pppppppuVar13 = (undefined8 *******)((long)ppppppuVar8 + (long)ppppppuVar19);
              func_0x000107c610b8(pppppppuVar13,(long)pppppppuVar11 + (long)ppppppuVar10,uVar12);
              if (uVar16 != 0x16) {
                func_0x000107c60e14(pppppppuVar20);
                pppppppuVar13 = pppppppuVar20;
              }
              *param_7 = ppppppuVar8;
              param_7[1] = (undefined8 ******)((long)ppppppuVar19 + uVar12);
              param_7[2] = (undefined8 ******)((ulong)ppppppuVar21 | 0x8000000000000000);
              *(undefined1 *)((long)ppppppuVar8 + (long)((long)ppppppuVar19 + uVar12)) = 0;
LAB_100166898:
              ppppppuVar21 = param_7[1];
              uVar12 = ((ulong)param_7[2] & 0x7fffffffffffffff) - 1;
              if (param_6 <= uVar12 - (long)ppppppuVar21) {
                pppppppuVar11 = (undefined8 *******)*param_7;
                goto LAB_1001669a4;
              }
              uVar16 = (param_6 - uVar12) + (long)ppppppuVar21;
              if (0x7ffffffffffffff7 - ((ulong)param_7[2] & 0x7fffffffffffffff) < uVar16)
              goto LAB_100166e90;
              pppppppuVar11 = (undefined8 *******)*param_7;
              if (uVar12 < 0x3ffffffffffffff3) goto LAB_1001668e0;
              bVar6 = false;
              ppppppuVar10 = (undefined8 ******)0x7ffffffffffffff7;
              ppppppuVar19 = ppppppuVar10;
              func_0x000107c60e20();
joined_r0x000100166998:
              if (ppppppuVar21 != (undefined8 ******)0x0) {
                func_0x000107c610b8(ppppppuVar19,pppppppuVar11,ppppppuVar21);
              }
              pppppppuVar13 = (undefined8 *******)((long)ppppppuVar19 + (long)ppppppuVar21);
              func_0x000107c610b8(pppppppuVar13,param_5,param_6);
              if (!bVar6) {
                func_0x000107c60e14(pppppppuVar11);
                pppppppuVar13 = pppppppuVar11;
              }
              *param_7 = ppppppuVar19;
              param_7[1] = (undefined8 ******)((long)ppppppuVar21 + param_6);
              param_7[2] = (undefined8 ******)((ulong)ppppppuVar10 | 0x8000000000000000);
              *(undefined1 *)((long)ppppppuVar19 + (long)((long)ppppppuVar21 + param_6)) = 0;
            }
            if (lVar18 == 0) {
              ppppppuVar19 = (undefined8 ******)((long)pppppppuVar17 + 1);
              uStack_68._7_1_ = (byte)((ulong)uStack_68 >> 0x38);
              ppppppuVar10 = (undefined8 ******)(long)(char)uStack_68._7_1_;
              if ((long)ppppppuVar10 < 0) {
                if (ppppppuStack_70 < ppppppuVar19) break;
                uVar12 = (long)ppppppuStack_70 - (long)ppppppuVar19;
                if ((ulong)((long)pppppppuVar15 - (long)ppppppuVar19) <=
                    (ulong)((long)ppppppuStack_70 - (long)ppppppuVar19)) {
                  uVar12 = (long)pppppppuVar15 - (long)ppppppuVar19;
                }
                ppppppuVar10 = (undefined8 ******)(long)*(char *)((long)param_7 + 0x17);
                pppppppuVar17 = pppppppuStack_78;
                if (-1 < (long)ppppppuVar10) goto LAB_100166a70;
LAB_100166b68:
                ppppppuVar21 = param_7[1];
                uVar16 = ((ulong)param_7[2] & 0x7fffffffffffffff) - 1;
                if (uVar16 - (long)ppppppuVar21 < uVar12) goto LAB_100166a84;
LAB_100166b80:
                if (uVar12 != 0) {
                  pppppppuVar13 = param_7;
                  if ((int)ppppppuVar10 < 0) {
                    pppppppuVar13 = (undefined8 *******)*param_7;
                  }
                  func_0x000107c610b8((long)pppppppuVar13 + (long)ppppppuVar21,
                                      (long)pppppppuVar17 + (long)ppppppuVar19,uVar12);
                  ppppppuVar21 = (undefined8 ******)((long)ppppppuVar21 + uVar12);
                  if (*(char *)((long)param_7 + 0x17) < '\0') {
                    param_7[1] = ppppppuVar21;
                  }
                  else {
                    *(byte *)((long)param_7 + 0x17) = (byte)ppppppuVar21 & 0x7f;
                  }
                  *(undefined1 *)((long)pppppppuVar13 + (long)ppppppuVar21) = 0;
                }
              }
              else {
                if (ppppppuVar10 < ppppppuVar19) break;
                uVar12 = (long)ppppppuVar10 - (long)ppppppuVar19;
                if ((ulong)((long)pppppppuVar15 - (long)ppppppuVar19) <=
                    (ulong)((long)ppppppuVar10 - (long)ppppppuVar19)) {
                  uVar12 = (long)pppppppuVar15 - (long)ppppppuVar19;
                }
                ppppppuVar10 = (undefined8 ******)(long)*(char *)((long)param_7 + 0x17);
                pppppppuVar17 = &pppppppuStack_78;
                if ((long)ppppppuVar10 < 0) goto LAB_100166b68;
LAB_100166a70:
                uVar16 = 0x16;
                ppppppuVar21 = ppppppuVar10;
                if (uVar12 <= 0x16U - (long)ppppppuVar10) goto LAB_100166b80;
LAB_100166a84:
                if (~uVar16 + 0x7ffffffffffffff7 < (uVar12 - uVar16) + (long)ppppppuVar21)
                goto LAB_100166e90;
                if ((int)ppppppuVar10 < 0) {
                  pppppppuVar13 = (undefined8 *******)*param_7;
                  if (uVar16 < 0x3ffffffffffffff3) goto LAB_100166abc;
LAB_100166c00:
                  ppppppuVar10 = ppppppuStack_c0;
                  func_0x000107c60e20();
                }
                else {
                  pppppppuVar13 = param_7;
                  if (0x3ffffffffffffff2 < uVar16) goto LAB_100166c00;
LAB_100166abc:
                  uVar2 = (long)ppppppuVar21 + uVar12;
                  if ((long)ppppppuVar21 + uVar12 <= uVar16 * 2) {
                    uVar2 = uVar16 * 2;
                  }
                  ppppppuVar10 = (undefined8 ******)0x19;
                  if ((uVar2 | 7) != 0x17) {
                    ppppppuVar10 = (undefined8 ******)((uVar2 | 7) + 1);
                  }
                  ppppppuStack_c0 = (undefined8 ******)0x17;
                  if (0x16 < uVar2) {
                    ppppppuStack_c0 = ppppppuVar10;
                  }
                  ppppppuVar10 = ppppppuStack_c0;
                  func_0x000107c60e20();
                }
                if (ppppppuVar21 != (undefined8 ******)0x0) {
                  func_0x000107c610b8(ppppppuVar10,pppppppuVar13,ppppppuVar21);
                }
                func_0x000107c610b8((long)ppppppuVar10 + (long)ppppppuVar21,
                                    (long)pppppppuVar17 + (long)ppppppuVar19,uVar12);
                if (uVar16 != 0x16) {
                  func_0x000107c60e14(pppppppuVar13);
                }
                *param_7 = ppppppuVar10;
                param_7[1] = (undefined8 ******)((long)ppppppuVar21 + uVar12);
                param_7[2] = (undefined8 ******)((ulong)ppppppuStack_c0 | 0x8000000000000000);
                *(undefined1 *)((long)ppppppuVar10 + (long)((long)ppppppuVar21 + uVar12)) = 0;
              }
              if ((long)uStack_68 < 0) {
                func_0x000107c60e14(pppppppuStack_78);
              }
              goto LAB_100166e68;
            }
            ppppppuVar10 = (undefined8 ******)((long)pppppppuVar17 + 1);
            pppppppuVar13 = &pppppppuStack_78;
            func_0x000107c60bdc(pppppppuVar13,param_3,ppppppuVar10,param_4);
            lVar18 = lVar18 + 1;
            bVar3 = uStack_68._7_1_;
            if (-1 < (long)uStack_68) goto LAB_1001666d8;
LAB_1001666e8:
            pppppppuVar17 = pppppppuVar13;
            pppppppuVar11 = pppppppuStack_78;
            ppppppuVar19 = ppppppuStack_70;
            if (ppppppuStack_70 < ppppppuVar10) break;
          } while( true );
        }
      }
      else {
LAB_100166e90:
        func_0x000104bd47d4();
      }
      func_0x000104c03f14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_getAssociatedObject_11034d240)();
      return pppppppuVar13;
    }
    lVar18 = (long)pppppppuVar7 + 1;
    pppppppuVar20 = (undefined8 *******)(lVar18 + lVar14);
    if (pppppppuVar15 < pppppppuVar20) {
      if (*(char *)((long)param_7 + 0x17) < '\0') {
        pppppppuVar11 = (undefined8 *******)param_7[1];
        if (pppppppuVar11 < pppppppuVar20) goto LAB_100166bc4;
        pppppppuVar11 = (undefined8 *******)*param_7;
        param_7[1] = pppppppuVar20;
      }
      else {
        if (pppppppuVar11 < pppppppuVar20) {
LAB_100166bc4:
          func_0x000107c60c60(param_7,(lVar18 - (long)pppppppuVar11) + lVar14,0);
          goto LAB_100166c8c;
        }
        *(char *)((long)param_7 + 0x17) = (char)pppppppuVar20;
        pppppppuVar11 = param_7;
      }
      *(undefined1 *)((long)pppppppuVar11 + lVar14 + lVar18) = 0;
    }
LAB_100166c8c:
    func_0x000107c60c80(param_7,pppppppuVar20,(long)pppppppuVar15 - lVar18,param_7,lVar18,
                        (long)pppppppuVar15 - lVar18);
    if (-1 < *(char *)((long)param_7 + 0x17)) goto LAB_100166a30;
LAB_100166cb0:
    pppppppuVar11 = (undefined8 *******)*param_7;
    pppppppuVar15 = (undefined8 *******)(lVar14 + (long)pppppppuVar7);
    if (param_6 != 0) goto LAB_100166cd4;
LAB_100166d3c:
    do {
      pppppppuVar15 = (undefined8 *******)((long)pppppppuVar15 + 1);
      pppppppuVar9 = param_7;
      func_0x000107c60bdc(param_7,param_3,pppppppuVar15,param_4);
      pppppppuVar20 = pppppppuVar17;
      if (pppppppuVar9 <= pppppppuVar17) {
        pppppppuVar20 = pppppppuVar9;
      }
      lVar18 = (long)pppppppuVar20 - (long)pppppppuVar15;
      if (lVar18 != 0) {
        func_0x000107c610b8((long)pppppppuVar11 + (long)pppppppuVar13,
                            (long)pppppppuVar11 + (long)pppppppuVar15,lVar18);
        pppppppuVar13 = (undefined8 *******)(lVar18 + (long)pppppppuVar13);
        pppppppuVar15 = pppppppuVar20;
      }
    } while (pppppppuVar15 < pppppppuVar17);
  }
  pppppppuVar17 = (undefined8 *******)(long)*(char *)((long)param_7 + 0x17);
  if ((long)pppppppuVar17 < 0) {
    pppppppuVar15 = (undefined8 *******)param_7[1];
    if (pppppppuVar13 <= pppppppuVar15) {
      param_7[1] = pppppppuVar13;
      param_7 = (undefined8 *******)*param_7;
      goto LAB_100166e60;
    }
    lVar18 = ((ulong)param_7[2] & 0x7fffffffffffffff) - 1;
    pppppppuVar17 = (undefined8 *******)((ulong)param_7[2] >> 0x38);
    uVar12 = (long)pppppppuVar13 - (long)pppppppuVar15;
    if ((ulong)(lVar18 - (long)pppppppuVar15) < uVar12) goto LAB_100166da8;
  }
  else {
    if (pppppppuVar13 <= pppppppuVar17) {
      *(byte *)((long)param_7 + 0x17) = (byte)pppppppuVar13;
LAB_100166e60:
      *(undefined1 *)((long)param_7 + (long)pppppppuVar13) = 0;
      goto LAB_100166e68;
    }
    lVar18 = 0x16;
    uVar12 = (long)pppppppuVar13 - (long)pppppppuVar17;
    pppppppuVar15 = pppppppuVar17;
    if (0x16U - (long)pppppppuVar17 < uVar12) {
LAB_100166da8:
      func_0x000107c60c88(param_7,lVar18,(uVar12 - lVar18) + (long)pppppppuVar15,pppppppuVar15,
                          pppppppuVar15,0,0);
      param_7[1] = pppppppuVar15;
      pppppppuVar17 = (undefined8 *******)(ulong)*(byte *)((long)param_7 + 0x17);
    }
  }
  if (((uint)pppppppuVar17 >> 7 & 1) == 0) {
    func_0x000107c60ee4((long)param_7 + (long)pppppppuVar15,uVar12);
    cVar4 = *(char *)((long)param_7 + 0x17);
    pppppppuVar17 = param_7;
  }
  else {
    pppppppuVar17 = (undefined8 *******)*param_7;
    func_0x000107c60ee4((long)pppppppuVar17 + (long)pppppppuVar15,uVar12);
    cVar4 = *(char *)((long)param_7 + 0x17);
  }
  if (cVar4 < '\0') {
    param_7[1] = pppppppuVar13;
    *(undefined1 *)((long)pppppppuVar17 + (long)pppppppuVar13) = 0;
  }
  else {
    *(byte *)((long)param_7 + 0x17) = (byte)pppppppuVar13 & 0x7f;
    *(undefined1 *)((long)pppppppuVar17 + (long)pppppppuVar13) = 0;
  }
LAB_100166e68:
  return (undefined8 *******)(ulong)(pppppppuVar7 != (undefined8 *******)0xffffffffffffffff);
}



/* Entry: 100166528; end: 100166e97;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_100166528(undefined8 *******param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5,ulong param_6,int param_7)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  undefined8 *******pppppppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  ulong uVar11;
  undefined8 *******pppppppuVar12;
  long lVar13;
  undefined8 *******pppppppuVar14;
  ulong uVar15;
  undefined8 *******pppppppuVar16;
  long lVar17;
  undefined8 ******ppppppuVar18;
  undefined8 ******ppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined8 ******ppppppuVar21;
  undefined8 ******ppppppuStack_c0;
  undefined8 *******pppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 uStack_68;
  
  pppppppuVar7 = param_1;
  func_0x000107c60bdc(param_1,param_3,param_2);
  if (pppppppuVar7 == (undefined8 *******)0xffffffffffffffff) goto LAB_100166e68;
  if (param_7 == 1) {
    func_0x000107c60c7c(param_1,pppppppuVar7,1,param_5,param_6);
    goto LAB_100166e68;
  }
  pppppppuVar16 = (undefined8 *******)(ulong)*(byte *)((long)param_1 + 0x17);
  uVar5 = (uint)(char)*(byte *)((long)param_1 + 0x17);
  if (param_6 - 1 == 0) {
    pppppppuVar16 = pppppppuVar7;
    pppppppuVar12 = param_1;
    if ((int)uVar5 < 0) {
      pppppppuVar12 = (undefined8 *******)*param_1;
    }
    do {
      *(undefined1 *)((long)pppppppuVar12 + (long)pppppppuVar16) = *param_5;
      pppppppuVar14 = param_1;
      func_0x000107c60bdc(param_1,param_3,(long)pppppppuVar16 + 1,param_4);
      pppppppuVar16 = pppppppuVar14;
    } while (pppppppuVar14 != (undefined8 *******)0xffffffffffffffff);
    goto LAB_100166e68;
  }
  pppppppuVar12 = pppppppuVar7;
  if ((int)uVar5 < 0) {
    pppppppuVar16 = (undefined8 *******)param_1[1];
    pppppppuVar14 = pppppppuVar16;
    if (param_6 != 0) goto LAB_1001665f8;
LAB_100166a28:
    lVar13 = 0;
    if ((uVar5 >> 7 & 1) != 0) goto LAB_100166cb0;
LAB_100166a30:
    pppppppuVar14 = (undefined8 *******)(lVar13 + (long)pppppppuVar7);
    pppppppuVar10 = param_1;
    if (param_6 == 0) goto LAB_100166d3c;
LAB_100166cd4:
    do {
      func_0x000107c610b8((long)pppppppuVar10 + (long)pppppppuVar12,param_5,param_6);
      pppppppuVar12 = (undefined8 *******)((long)pppppppuVar12 + param_6);
      pppppppuVar14 = (undefined8 *******)((long)pppppppuVar14 + 1);
      pppppppuVar9 = param_1;
      func_0x000107c60bdc(param_1,param_3,pppppppuVar14,param_4);
      pppppppuVar20 = pppppppuVar16;
      if (pppppppuVar9 <= pppppppuVar16) {
        pppppppuVar20 = pppppppuVar9;
      }
      lVar17 = (long)pppppppuVar20 - (long)pppppppuVar14;
      if (lVar17 != 0) {
        func_0x000107c610b8((long)pppppppuVar10 + (long)pppppppuVar12,
                            (long)pppppppuVar10 + (long)pppppppuVar14,lVar17);
        pppppppuVar12 = (undefined8 *******)(lVar17 + (long)pppppppuVar12);
        pppppppuVar14 = pppppppuVar20;
      }
    } while (pppppppuVar14 < pppppppuVar16);
  }
  else {
    pppppppuVar14 = pppppppuVar16;
    if (param_6 == 0) goto LAB_100166a28;
LAB_1001665f8:
    lVar13 = 0;
    lVar17 = 1;
    pppppppuVar16 = pppppppuVar7;
    do {
      lVar1 = (long)pppppppuVar16 + 1;
      pppppppuVar16 = param_1;
      func_0x000107c60bdc(param_1,param_3,lVar1,param_4);
      lVar13 = lVar13 + (param_6 - 1);
      lVar17 = lVar17 + -1;
    } while (pppppppuVar16 != (undefined8 *******)0xffffffffffffffff);
    pppppppuVar10 = (undefined8 *******)(long)*(char *)((long)param_1 + 0x17);
    pppppppuVar16 = (undefined8 *******)((long)pppppppuVar14 + lVar13);
    if ((long)pppppppuVar10 < 0) {
      if ((undefined8 *******)(((ulong)param_1[2] & 0x7fffffffffffffff) - 1) < pppppppuVar16)
      goto LAB_100166644;
    }
    else if ((undefined8 *******)0x16 < pppppppuVar16) {
LAB_100166644:
      pppppppuStack_78 = (undefined8 *******)*param_1;
      bVar3 = *(byte *)((long)param_1 + 0x17);
      uStack_68 = param_1[2];
      ppppppuStack_70 = param_1[1];
      *param_1 = (undefined8 ******)0x0;
      param_1[1] = (undefined8 ******)0x0;
      param_1[2] = (undefined8 ******)0x0;
      ppppppuStack_c0 = (undefined8 ******)0x7ffffffffffffff7;
      pppppppuVar12 = (undefined8 *******)0xffffffffffffffff;
      if (pppppppuVar16 < (undefined8 *******)0x7ffffffffffffff7) {
        if ((undefined8 *******)0x16 < pppppppuVar16) {
          ppppppuVar18 = (undefined8 ******)0x19;
          if (((ulong)pppppppuVar16 | 7) != 0x17) {
            ppppppuVar18 = (undefined8 ******)(((ulong)pppppppuVar16 | 7) + 1);
          }
          ppppppuVar19 = ppppppuVar18;
          func_0x000107c60e20();
          *(undefined1 *)ppppppuVar19 = *(undefined1 *)param_1;
          param_1[1] = (undefined8 ******)0x0;
          param_1[2] = (undefined8 ******)((ulong)ppppppuVar18 | 0x8000000000000000);
          *param_1 = ppppppuVar19;
        }
        ppppppuVar18 = (undefined8 ******)0x0;
        pppppppuVar12 = pppppppuVar7;
        if ((char)bVar3 < '\0') goto LAB_1001666e8;
LAB_1001666d8:
        if (ppppppuVar18 <= (undefined8 ******)(ulong)bVar3) {
          pppppppuVar16 = pppppppuVar12;
          pppppppuVar10 = &pppppppuStack_78;
          ppppppuVar19 = (undefined8 ******)(ulong)bVar3;
          do {
            uVar11 = (long)ppppppuVar19 - (long)ppppppuVar18;
            if ((ulong)((long)pppppppuVar16 - (long)ppppppuVar18) <=
                (ulong)((long)ppppppuVar19 - (long)ppppppuVar18)) {
              uVar11 = (long)pppppppuVar16 - (long)ppppppuVar18;
            }
            bVar3 = *(byte *)((long)param_1 + 0x17);
            pppppppuVar12 = pppppppuVar16;
            if ((char)bVar3 < '\0') {
              ppppppuVar19 = param_1[1];
              uVar15 = ((ulong)param_1[2] & 0x7fffffffffffffff) - 1;
              ppppppuVar21 = (undefined8 ******)((ulong)param_1[2] >> 0x38);
              if (uVar15 - (long)ppppppuVar19 < uVar11) goto LAB_10016672c;
LAB_10016681c:
              if (uVar11 != 0) {
                pppppppuVar20 = param_1;
                if ((char)bVar3 < '\0') {
                  pppppppuVar20 = (undefined8 *******)*param_1;
                }
                pppppppuVar12 = (undefined8 *******)((long)pppppppuVar20 + (long)ppppppuVar19);
                func_0x000107c610b8(pppppppuVar12,(long)pppppppuVar10 + (long)ppppppuVar18,uVar11);
                ppppppuVar19 = (undefined8 ******)((long)ppppppuVar19 + uVar11);
                if (*(char *)((long)param_1 + 0x17) < '\0') {
                  param_1[1] = ppppppuVar19;
                }
                else {
                  *(byte *)((long)param_1 + 0x17) = (byte)ppppppuVar19 & 0x7f;
                }
                *(undefined1 *)((long)pppppppuVar20 + (long)ppppppuVar19) = 0;
                ppppppuVar21 = (undefined8 ******)(ulong)*(byte *)((long)param_1 + 0x17);
              }
              if ((uint)ppppppuVar21 >> 7 != 0) goto LAB_100166898;
              pppppppuVar10 = param_1;
              if (0x16U - (long)ppppppuVar21 < param_6) {
                uVar15 = (param_6 - 0x16) + (long)ppppppuVar21;
                if (uVar15 < 0x7fffffffffffffe1) {
                  uVar11 = 0x16;
LAB_1001668e0:
                  uVar2 = uVar11 + uVar15;
                  if (uVar11 + uVar15 <= uVar11 * 2) {
                    uVar2 = uVar11 * 2;
                  }
                  ppppppuVar19 = (undefined8 ******)0x19;
                  if ((uVar2 | 7) != 0x17) {
                    ppppppuVar19 = (undefined8 ******)((uVar2 | 7) + 1);
                  }
                  ppppppuVar18 = (undefined8 ******)0x17;
                  if (0x16 < uVar2) {
                    ppppppuVar18 = ppppppuVar19;
                  }
                  bVar6 = uVar11 == 0x16;
                  ppppppuVar19 = ppppppuVar18;
                  func_0x000107c60e20();
                  goto joined_r0x000100166920;
                }
                goto LAB_100166e90;
              }
LAB_1001669a4:
              pppppppuVar12 = (undefined8 *******)((long)pppppppuVar10 + (long)ppppppuVar21);
              func_0x000107c610b8(pppppppuVar12,param_5,param_6);
              ppppppuVar21 = (undefined8 ******)((long)ppppppuVar21 + param_6);
              if (*(char *)((long)param_1 + 0x17) < '\0') {
                param_1[1] = ppppppuVar21;
                *(undefined1 *)((long)pppppppuVar10 + (long)ppppppuVar21) = 0;
              }
              else {
                *(byte *)((long)param_1 + 0x17) = (byte)ppppppuVar21 & 0x7f;
                *(undefined1 *)((long)pppppppuVar10 + (long)ppppppuVar21) = 0;
              }
            }
            else {
              ppppppuVar19 = (undefined8 ******)(ulong)bVar3;
              uVar15 = 0x16;
              ppppppuVar21 = ppppppuVar19;
              if (uVar11 <= 0x16U - (long)ppppppuVar19) goto LAB_10016681c;
LAB_10016672c:
              if (~uVar15 + 0x7ffffffffffffff7 < (uVar11 - uVar15) + (long)ppppppuVar19)
              goto LAB_100166e90;
              pppppppuVar20 = param_1;
              if ((char)bVar3 < '\0') {
                pppppppuVar20 = (undefined8 *******)*param_1;
              }
              ppppppuVar21 = (undefined8 ******)0x7ffffffffffffff7;
              if (uVar15 < 0x3ffffffffffffff3) {
                uVar2 = (long)ppppppuVar19 + uVar11;
                if ((long)ppppppuVar19 + uVar11 <= uVar15 * 2) {
                  uVar2 = uVar15 * 2;
                }
                ppppppuVar8 = (undefined8 ******)0x19;
                if ((uVar2 | 7) != 0x17) {
                  ppppppuVar8 = (undefined8 ******)((uVar2 | 7) + 1);
                }
                ppppppuVar21 = (undefined8 ******)0x17;
                if (0x16 < uVar2) {
                  ppppppuVar21 = ppppppuVar8;
                }
              }
              ppppppuVar8 = ppppppuVar21;
              func_0x000107c60e20();
              if (ppppppuVar19 != (undefined8 ******)0x0) {
                func_0x000107c610b8(ppppppuVar8,pppppppuVar20,ppppppuVar19);
              }
              pppppppuVar12 = (undefined8 *******)((long)ppppppuVar8 + (long)ppppppuVar19);
              func_0x000107c610b8(pppppppuVar12,(long)pppppppuVar10 + (long)ppppppuVar18,uVar11);
              if (uVar15 != 0x16) {
                func_0x000107c60e14(pppppppuVar20);
                pppppppuVar12 = pppppppuVar20;
              }
              *param_1 = ppppppuVar8;
              param_1[1] = (undefined8 ******)((long)ppppppuVar19 + uVar11);
              param_1[2] = (undefined8 ******)((ulong)ppppppuVar21 | 0x8000000000000000);
              *(undefined1 *)((long)ppppppuVar8 + (long)((long)ppppppuVar19 + uVar11)) = 0;
LAB_100166898:
              ppppppuVar21 = param_1[1];
              uVar11 = ((ulong)param_1[2] & 0x7fffffffffffffff) - 1;
              if (param_6 <= uVar11 - (long)ppppppuVar21) {
                pppppppuVar10 = (undefined8 *******)*param_1;
                goto LAB_1001669a4;
              }
              uVar15 = (param_6 - uVar11) + (long)ppppppuVar21;
              if (0x7ffffffffffffff7 - ((ulong)param_1[2] & 0x7fffffffffffffff) < uVar15)
              goto LAB_100166e90;
              pppppppuVar10 = (undefined8 *******)*param_1;
              if (uVar11 < 0x3ffffffffffffff3) goto LAB_1001668e0;
              bVar6 = false;
              ppppppuVar18 = (undefined8 ******)0x7ffffffffffffff7;
              ppppppuVar19 = ppppppuVar18;
              func_0x000107c60e20();
joined_r0x000100166920:
              if (ppppppuVar21 != (undefined8 ******)0x0) {
                func_0x000107c610b8(ppppppuVar19,pppppppuVar10,ppppppuVar21);
              }
              pppppppuVar12 = (undefined8 *******)((long)ppppppuVar19 + (long)ppppppuVar21);
              func_0x000107c610b8(pppppppuVar12,param_5,param_6);
              if (!bVar6) {
                func_0x000107c60e14(pppppppuVar10);
                pppppppuVar12 = pppppppuVar10;
              }
              *param_1 = ppppppuVar19;
              param_1[1] = (undefined8 ******)((long)ppppppuVar21 + param_6);
              param_1[2] = (undefined8 ******)((ulong)ppppppuVar18 | 0x8000000000000000);
              *(undefined1 *)((long)ppppppuVar19 + (long)((long)ppppppuVar21 + param_6)) = 0;
            }
            if (lVar17 == 0) {
              ppppppuVar19 = (undefined8 ******)((long)pppppppuVar16 + 1);
              uStack_68._7_1_ = (byte)((ulong)uStack_68 >> 0x38);
              ppppppuVar18 = (undefined8 ******)(long)(char)uStack_68._7_1_;
              if ((long)ppppppuVar18 < 0) {
                if (ppppppuStack_70 < ppppppuVar19) break;
                uVar11 = (long)ppppppuStack_70 - (long)ppppppuVar19;
                if ((ulong)((long)pppppppuVar14 - (long)ppppppuVar19) <=
                    (ulong)((long)ppppppuStack_70 - (long)ppppppuVar19)) {
                  uVar11 = (long)pppppppuVar14 - (long)ppppppuVar19;
                }
                ppppppuVar18 = (undefined8 ******)(long)*(char *)((long)param_1 + 0x17);
                pppppppuVar16 = pppppppuStack_78;
                if (-1 < (long)ppppppuVar18) goto LAB_100166a70;
LAB_100166b68:
                ppppppuVar21 = param_1[1];
                uVar15 = ((ulong)param_1[2] & 0x7fffffffffffffff) - 1;
                if (uVar15 - (long)ppppppuVar21 < uVar11) goto LAB_100166a84;
LAB_100166b80:
                if (uVar11 != 0) {
                  pppppppuVar12 = param_1;
                  if ((int)ppppppuVar18 < 0) {
                    pppppppuVar12 = (undefined8 *******)*param_1;
                  }
                  func_0x000107c610b8((long)pppppppuVar12 + (long)ppppppuVar21,
                                      (long)pppppppuVar16 + (long)ppppppuVar19,uVar11);
                  ppppppuVar21 = (undefined8 ******)((long)ppppppuVar21 + uVar11);
                  if (*(char *)((long)param_1 + 0x17) < '\0') {
                    param_1[1] = ppppppuVar21;
                  }
                  else {
                    *(byte *)((long)param_1 + 0x17) = (byte)ppppppuVar21 & 0x7f;
                  }
                  *(undefined1 *)((long)pppppppuVar12 + (long)ppppppuVar21) = 0;
                }
              }
              else {
                if (ppppppuVar18 < ppppppuVar19) break;
                uVar11 = (long)ppppppuVar18 - (long)ppppppuVar19;
                if ((ulong)((long)pppppppuVar14 - (long)ppppppuVar19) <=
                    (ulong)((long)ppppppuVar18 - (long)ppppppuVar19)) {
                  uVar11 = (long)pppppppuVar14 - (long)ppppppuVar19;
                }
                ppppppuVar18 = (undefined8 ******)(long)*(char *)((long)param_1 + 0x17);
                pppppppuVar16 = &pppppppuStack_78;
                if ((long)ppppppuVar18 < 0) goto LAB_100166b68;
LAB_100166a70:
                uVar15 = 0x16;
                ppppppuVar21 = ppppppuVar18;
                if (uVar11 <= 0x16U - (long)ppppppuVar18) goto LAB_100166b80;
LAB_100166a84:
                if (~uVar15 + 0x7ffffffffffffff7 < (uVar11 - uVar15) + (long)ppppppuVar21)
                goto LAB_100166e90;
                if ((int)ppppppuVar18 < 0) {
                  pppppppuVar12 = (undefined8 *******)*param_1;
                  if (uVar15 < 0x3ffffffffffffff3) goto LAB_100166abc;
LAB_100166c00:
                  ppppppuVar18 = ppppppuStack_c0;
                  func_0x000107c60e20();
                }
                else {
                  pppppppuVar12 = param_1;
                  if (0x3ffffffffffffff2 < uVar15) goto LAB_100166c00;
LAB_100166abc:
                  uVar2 = (long)ppppppuVar21 + uVar11;
                  if ((long)ppppppuVar21 + uVar11 <= uVar15 * 2) {
                    uVar2 = uVar15 * 2;
                  }
                  ppppppuVar18 = (undefined8 ******)0x19;
                  if ((uVar2 | 7) != 0x17) {
                    ppppppuVar18 = (undefined8 ******)((uVar2 | 7) + 1);
                  }
                  ppppppuStack_c0 = (undefined8 ******)0x17;
                  if (0x16 < uVar2) {
                    ppppppuStack_c0 = ppppppuVar18;
                  }
                  ppppppuVar18 = ppppppuStack_c0;
                  func_0x000107c60e20();
                }
                if (ppppppuVar21 != (undefined8 ******)0x0) {
                  func_0x000107c610b8(ppppppuVar18,pppppppuVar12,ppppppuVar21);
                }
                func_0x000107c610b8((long)ppppppuVar18 + (long)ppppppuVar21,
                                    (long)pppppppuVar16 + (long)ppppppuVar19,uVar11);
                if (uVar15 != 0x16) {
                  func_0x000107c60e14(pppppppuVar12);
                }
                *param_1 = ppppppuVar18;
                param_1[1] = (undefined8 ******)((long)ppppppuVar21 + uVar11);
                param_1[2] = (undefined8 ******)((ulong)ppppppuStack_c0 | 0x8000000000000000);
                *(undefined1 *)((long)ppppppuVar18 + (long)((long)ppppppuVar21 + uVar11)) = 0;
              }
              if ((long)uStack_68 < 0) {
                func_0x000107c60e14(pppppppuStack_78);
              }
              goto LAB_100166e68;
            }
            ppppppuVar18 = (undefined8 ******)((long)pppppppuVar16 + 1);
            pppppppuVar12 = &pppppppuStack_78;
            func_0x000107c60bdc(pppppppuVar12,param_3,ppppppuVar18,param_4);
            lVar17 = lVar17 + 1;
            bVar3 = uStack_68._7_1_;
            if (-1 < (long)uStack_68) goto LAB_1001666d8;
LAB_1001666e8:
            pppppppuVar16 = pppppppuVar12;
            pppppppuVar10 = pppppppuStack_78;
            ppppppuVar19 = ppppppuStack_70;
            if (ppppppuStack_70 < ppppppuVar18) break;
          } while( true );
        }
      }
      else {
LAB_100166e90:
        func_0x000104bd47d4();
      }
      func_0x000104c03f14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_getAssociatedObject_11034d240)();
      return pppppppuVar12;
    }
    lVar17 = (long)pppppppuVar7 + 1;
    pppppppuVar20 = (undefined8 *******)(lVar17 + lVar13);
    if (pppppppuVar14 < pppppppuVar20) {
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        pppppppuVar10 = (undefined8 *******)param_1[1];
        if (pppppppuVar10 < pppppppuVar20) goto LAB_100166bc4;
        pppppppuVar10 = (undefined8 *******)*param_1;
        param_1[1] = pppppppuVar20;
      }
      else {
        if (pppppppuVar10 < pppppppuVar20) {
LAB_100166bc4:
          func_0x000107c60c60(param_1,(lVar17 - (long)pppppppuVar10) + lVar13,0);
          goto LAB_100166c8c;
        }
        *(char *)((long)param_1 + 0x17) = (char)pppppppuVar20;
        pppppppuVar10 = param_1;
      }
      *(undefined1 *)((long)pppppppuVar10 + lVar13 + lVar17) = 0;
    }
LAB_100166c8c:
    func_0x000107c60c80(param_1,pppppppuVar20,(long)pppppppuVar14 - lVar17,param_1,lVar17,
                        (long)pppppppuVar14 - lVar17);
    if (-1 < *(char *)((long)param_1 + 0x17)) goto LAB_100166a30;
LAB_100166cb0:
    pppppppuVar10 = (undefined8 *******)*param_1;
    pppppppuVar14 = (undefined8 *******)(lVar13 + (long)pppppppuVar7);
    if (param_6 != 0) goto LAB_100166cd4;
LAB_100166d3c:
    do {
      pppppppuVar14 = (undefined8 *******)((long)pppppppuVar14 + 1);
      pppppppuVar9 = param_1;
      func_0x000107c60bdc(param_1,param_3,pppppppuVar14,param_4);
      pppppppuVar20 = pppppppuVar16;
      if (pppppppuVar9 <= pppppppuVar16) {
        pppppppuVar20 = pppppppuVar9;
      }
      lVar17 = (long)pppppppuVar20 - (long)pppppppuVar14;
      if (lVar17 != 0) {
        func_0x000107c610b8((long)pppppppuVar10 + (long)pppppppuVar12,
                            (long)pppppppuVar10 + (long)pppppppuVar14,lVar17);
        pppppppuVar12 = (undefined8 *******)(lVar17 + (long)pppppppuVar12);
        pppppppuVar14 = pppppppuVar20;
      }
    } while (pppppppuVar14 < pppppppuVar16);
  }
  pppppppuVar16 = (undefined8 *******)(long)*(char *)((long)param_1 + 0x17);
  if ((long)pppppppuVar16 < 0) {
    pppppppuVar14 = (undefined8 *******)param_1[1];
    if (pppppppuVar12 <= pppppppuVar14) {
      param_1[1] = pppppppuVar12;
      param_1 = (undefined8 *******)*param_1;
      goto LAB_100166e60;
    }
    lVar17 = ((ulong)param_1[2] & 0x7fffffffffffffff) - 1;
    pppppppuVar16 = (undefined8 *******)((ulong)param_1[2] >> 0x38);
    uVar11 = (long)pppppppuVar12 - (long)pppppppuVar14;
    if ((ulong)(lVar17 - (long)pppppppuVar14) < uVar11) goto LAB_100166da8;
  }
  else {
    if (pppppppuVar12 <= pppppppuVar16) {
      *(byte *)((long)param_1 + 0x17) = (byte)pppppppuVar12;
LAB_100166e60:
      *(undefined1 *)((long)param_1 + (long)pppppppuVar12) = 0;
      goto LAB_100166e68;
    }
    lVar17 = 0x16;
    uVar11 = (long)pppppppuVar12 - (long)pppppppuVar16;
    pppppppuVar14 = pppppppuVar16;
    if (0x16U - (long)pppppppuVar16 < uVar11) {
LAB_100166da8:
      func_0x000107c60c88(param_1,lVar17,(uVar11 - lVar17) + (long)pppppppuVar14,pppppppuVar14,
                          pppppppuVar14,0,0);
      param_1[1] = pppppppuVar14;
      pppppppuVar16 = (undefined8 *******)(ulong)*(byte *)((long)param_1 + 0x17);
    }
  }
  if (((uint)pppppppuVar16 >> 7 & 1) == 0) {
    func_0x000107c60ee4((long)param_1 + (long)pppppppuVar14,uVar11);
    cVar4 = *(char *)((long)param_1 + 0x17);
    pppppppuVar16 = param_1;
  }
  else {
    pppppppuVar16 = (undefined8 *******)*param_1;
    func_0x000107c60ee4((long)pppppppuVar16 + (long)pppppppuVar14,uVar11);
    cVar4 = *(char *)((long)param_1 + 0x17);
  }
  if (cVar4 < '\0') {
    param_1[1] = pppppppuVar12;
    *(undefined1 *)((long)pppppppuVar16 + (long)pppppppuVar12) = 0;
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)pppppppuVar12 & 0x7f;
    *(undefined1 *)((long)pppppppuVar16 + (long)pppppppuVar12) = 0;
  }
LAB_100166e68:
  return (undefined8 *******)(ulong)(pppppppuVar7 != (undefined8 *******)0xffffffffffffffff);
}



/* Entry: 100166e98; end: 100166eb3; -[_TtC13SCSystemScope13SCSystemScope legacyAuthFlowProxy] */

void FUN_100166e98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getAssociatedObject_11034d240)(param_1,&UNK_10f2ec3e5);
  return;
}



/* Entry: 100166eb4; end: 10016713b;  */

void FUN_100166eb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  uVar2 = uStack_68;
  uVar1 = 0x112e01508;
  FUN_1000285a8(0x112e01508,&UNK_10d9d2550);
  func_0x000107c610f8();
  FUN_10017da58(uVar2,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  FUN_100083b20(&uStack_68);
  uVar1 = uStack_68;
  FUN_1000285a8(0x112e01510,&UNK_10d9d2558);
  func_0x000107c610f8();
  FUN_10017da58(uVar1);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  FUN_100083b20(&uStack_68);
  uVar5 = uStack_68;
  FUN_1000285a8(0x112e01518,&UNK_10d9d2560);
  func_0x000107c610f8();
  FUN_10017da58(uVar5);
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  FUN_100083b20(&uStack_68);
  uVar7 = uStack_68;
  FUN_1000285a8(0x112e01520,&UNK_10d9d2568);
  func_0x000107c610f8();
  FUN_10017da58(uVar7);
  puVar8 = PTR_PTR_1126a7640;
  func_0x000107c610f8(PTR_PTR_1126a7640);
  func_0x000107c4907c();
  func_0x000107c61174(puVar3);
  func_0x000107c61174(puVar4);
  func_0x000107c61174(puVar6);
  func_0x000107c61174(puVar8);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  puVar9 = PTR_PTR_1126a89e0;
  func_0x000107c610f8();
  func_0x000107c493d8();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(uStack_70);
  *param_1 = puVar9;
  return;
}



/* Entry: 10016713c; end: 10016713f;  */

void FUN_10016713c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100167140; end: 100167173;  */

void FUN_100167140(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100167174; end: 10016718b;  */

void FUN_100167174(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10016718c; end: 1001671c7;  */

void FUN_10016718c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8();
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1001671c8; end: 1001671db;  */

/* WARNING: Possible PIC construction at 0x0001001676b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001676b8) */
/* WARNING: Removing unreachable block (ram,0x000100167728) */
/* WARNING: Removing unreachable block (ram,0x0001001677a0) */
/* WARNING: Removing unreachable block (ram,0x00010016778c) */
/* WARNING: Removing unreachable block (ram,0x0001001677ac) */
/* WARNING: Removing unreachable block (ram,0x0001001677d4) */
/* WARNING: Removing unreachable block (ram,0x0001001677dc) */
/* WARNING: Removing unreachable block (ram,0x0001001677e4) */
/* WARNING: Removing unreachable block (ram,0x0001001677e8) */
/* WARNING: Removing unreachable block (ram,0x0001001676cc) */
/* WARNING: Removing unreachable block (ram,0x0001001676e4) */
/* WARNING: Removing unreachable block (ram,0x0001001677f4) */
/* WARNING: Removing unreachable block (ram,0x000100167814) */
/* WARNING: Removing unreachable block (ram,0x0001001676f8) */
/* WARNING: Removing unreachable block (ram,0x000100167818) */
/* WARNING: Removing unreachable block (ram,0x000100167700) */
/* WARNING: Removing unreachable block (ram,0x000100167838) */
/* WARNING: Removing unreachable block (ram,0x000100167840) */
/* WARNING: Removing unreachable block (ram,0x000100167724) */
/* WARNING: Removing unreachable block (ram,0x00010016784c) */
/* WARNING: Removing unreachable block (ram,0x000100167854) */
/* WARNING: Removing unreachable block (ram,0x00010016785c) */
/* WARNING: Removing unreachable block (ram,0x000100167860) */
/* WARNING: Removing unreachable block (ram,0x000100167870) */

char * FUN_1001671c8(char *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                    ulong param_5)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  char cVar8;
  char *extraout_x8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    pcVar5 = param_1 + 0x10;
    FUN_100033dac(pcVar5,*param_2,param_2[1]);
  }
  else {
    uVar16 = param_2[1];
    uVar15 = *param_2;
    *(undefined8 *)(param_1 + 0x20) = param_2[2];
    *(undefined8 *)(param_1 + 0x18) = uVar16;
    *(undefined8 *)(param_1 + 0x10) = uVar15;
    pcVar5 = param_1;
  }
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  param_1[0x48] = '\0';
  param_1[0x49] = '\0';
  param_1[0x4a] = '\0';
  param_1[0x4b] = '\0';
  param_1[0x4c] = '\0';
  param_1[0x4d] = '\0';
  param_1[0x4e] = '\0';
  param_1[0x4f] = '\0';
  param_1[0x50] = -1;
  param_1[0x51] = -1;
  param_1[0x52] = -1;
  param_1[0x53] = -1;
  param_1[0x58] = '\0';
  param_1[0x59] = '\0';
  param_1[0x5a] = '\0';
  param_1[0x5b] = '\0';
  param_1[0x5c] = '\0';
  param_1[0x5d] = '\0';
  param_1[0x5e] = '\0';
  param_1[0x5f] = '\0';
  param_1[0x60] = '\0';
  param_1[0x61] = '\0';
  param_1[0x62] = '\0';
  param_1[99] = '\0';
  param_1[100] = '\0';
  param_1[0x65] = '\0';
  param_1[0x66] = '\0';
  param_1[0x67] = '\0';
  param_1[0x68] = '\0';
  param_1[0x78] = '\0';
  param_1[0x79] = '\0';
  param_1[0x7a] = '\0';
  param_1[0x7b] = '\0';
  param_1[0x7c] = '\0';
  param_1[0x7d] = '\0';
  param_1[0x7e] = '\0';
  param_1[0x7f] = '\0';
  param_1[0x70] = '\0';
  param_1[0x71] = '\0';
  param_1[0x72] = '\0';
  param_1[0x73] = '\0';
  param_1[0x74] = '\0';
  param_1[0x75] = '\0';
  param_1[0x76] = '\0';
  param_1[0x77] = '\0';
  param_1[0x88] = '\0';
  param_1[0x89] = '\0';
  param_1[0x8a] = '\0';
  param_1[0x8b] = '\0';
  param_1[0x8c] = '\0';
  param_1[0x8d] = '\0';
  param_1[0x8e] = '\0';
  param_1[0x8f] = '\0';
  param_1[0x80] = '\0';
  param_1[0x81] = '\0';
  param_1[0x82] = '\0';
  param_1[0x83] = '\0';
  param_1[0x84] = '\0';
  param_1[0x85] = '\0';
  param_1[0x86] = '\0';
  param_1[0x87] = '\0';
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined ***)(param_1 + 0x30) = &PTR_DAT_110cd6318;
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x98] = '\0';
  param_1[0x99] = '\0';
  param_1[0x9a] = '\0';
  param_1[0x9b] = '\0';
  param_1[0x9c] = '\0';
  param_1[0x9d] = '\0';
  param_1[0x9e] = '\0';
  param_1[0x9f] = '\0';
  param_1[0xa0] = '\0';
  param_1[0xa1] = '\0';
  param_1[0xa2] = '\0';
  param_1[0xa3] = '\0';
  param_1[0xa4] = '\0';
  param_1[0xa5] = '\0';
  param_1[0xa6] = '\0';
  param_1[0xa7] = '\0';
  param_1[0x90] = '\0';
  param_1[0x91] = '\0';
  param_1[0x92] = '\0';
  param_1[0x93] = '\0';
  param_1[0x94] = '\0';
  param_1[0x95] = '\0';
  param_1[0x96] = '\0';
  param_1[0x97] = '\0';
  param_1[0xb0] = '\0';
  param_1[0xb1] = '\0';
  param_1[0xb2] = '\0';
  param_1[0xb3] = '\0';
  param_1[0xb4] = '\0';
  param_1[0xb5] = '\0';
  param_1[0xb6] = '\0';
  param_1[0xb7] = '\0';
  param_1[0xb8] = -0x80;
  param_1[0xb9] = -0x6a;
  param_1[0xba] = -0x68;
  param_1[0xbb] = '\0';
  param_1[0xbc] = '\0';
  param_1[0xbd] = '\0';
  param_1[0xbe] = '\0';
  param_1[0xbf] = '\0';
  if (param_5 < 0x7ffffffffffffff8) {
    if (param_5 < 0x17) {
      pcVar11 = param_1 + 0xc0;
      param_1[0xd7] = (char)param_5;
      if (param_5 == 0) goto LAB_1001672cc;
    }
    else {
      pcVar5 = (char *)0x19;
      if ((param_5 | 7) != 0x17) {
        pcVar5 = (char *)((param_5 | 7) + 1);
      }
      pcVar11 = pcVar5;
      func_0x000107c60e20();
      *(ulong *)(param_1 + 200) = param_5;
      *(ulong *)(param_1 + 0xd0) = (ulong)pcVar5 | 0x8000000000000000;
      *(char **)(param_1 + 0xc0) = pcVar11;
    }
    func_0x000107c610b8(pcVar11,param_4,param_5);
LAB_1001672cc:
    pcVar11[param_5] = '\0';
    param_1[0xd8] = '\0';
    param_1[0xd9] = '\0';
    param_1[0xda] = '\0';
    param_1[0xdb] = '\0';
    param_1[0xdc] = '\0';
    param_1[0xdd] = '\0';
    param_1[0xde] = '\0';
    param_1[0xdf] = '\0';
    piVar6 = (int *)0x8;
    func_0x000107c60e20();
    *piVar6 = 0;
    *(undefined1 *)(piVar6 + 1) = 0;
    if (piVar6 != (int *)0x0) {
      do {
        cVar8 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    *(int **)(param_1 + 0xe0) = piVar6;
    *(char **)(param_1 + 0xe8) = param_1;
    FUN_100167340(auStack_58,param_2);
    FUN_10016764c(auStack_58);
    if (cStack_41 < '\0') {
      func_0x000107c60e14(auStack_58[0]);
    }
    return param_1;
  }
  func_0x000107c35c54();
  extraout_x8[8] = -0x56;
  extraout_x8[9] = -0x56;
  extraout_x8[10] = -0x56;
  extraout_x8[0xb] = -0x56;
  extraout_x8[0xc] = -0x56;
  extraout_x8[0xd] = -0x56;
  extraout_x8[0xe] = -0x56;
  extraout_x8[0xf] = -0x56;
  extraout_x8[0x10] = -0x56;
  extraout_x8[0x11] = -0x56;
  extraout_x8[0x12] = -0x56;
  extraout_x8[0x13] = -0x56;
  extraout_x8[0x14] = -0x56;
  extraout_x8[0x15] = -0x56;
  extraout_x8[0x16] = -0x56;
  extraout_x8[0x17] = -0x56;
  extraout_x8[0] = -0x56;
  extraout_x8[1] = -0x56;
  extraout_x8[2] = -0x56;
  extraout_x8[3] = -0x56;
  extraout_x8[4] = -0x56;
  extraout_x8[5] = -0x56;
  extraout_x8[6] = -0x56;
  extraout_x8[7] = -0x56;
  cVar8 = pcVar5[0x17];
  pcVar11 = *(char **)pcVar5;
  if (-1 < (long)cVar8) {
    pcVar11 = pcVar5;
  }
  uVar9 = *(ulong *)(pcVar5 + 8);
  if (-1 < cVar8) {
    uVar9 = (long)cVar8;
  }
  if (0x7ffffffffffffff7 < uVar9) {
    func_0x000107c35c54();
    goto LAB_100167644;
  }
  if (uVar9 < 0x17) {
    extraout_x8[0x17] = (char)uVar9;
    pcVar7 = extraout_x8;
    if (uVar9 != 0) goto LAB_1001673d0;
  }
  else {
    pcVar5 = (char *)0x19;
    if ((uVar9 | 7) != 0x17) {
      pcVar5 = (char *)((uVar9 | 7) + 1);
    }
    pcVar7 = pcVar5;
    func_0x000107c60e20();
    *(ulong *)(extraout_x8 + 8) = uVar9;
    *(ulong *)(extraout_x8 + 0x10) = (ulong)pcVar5 | 0x8000000000000000;
    *(char **)extraout_x8 = pcVar7;
LAB_1001673d0:
    func_0x000107c610b8(pcVar7,pcVar11,uVar9);
  }
  pcVar7[uVar9] = '\0';
  bVar1 = extraout_x8[0x17];
  pcVar5 = *(char **)extraout_x8;
  uVar10 = *(ulong *)(extraout_x8 + 8);
  uVar9 = uVar10;
  pcVar11 = pcVar5;
  if (-1 < (char)bVar1) {
    uVar9 = (ulong)bVar1;
    pcVar11 = extraout_x8;
  }
  pcVar7 = pcVar11;
  func_0x000107c610ac(pcVar11,0,uVar9);
  uVar9 = (long)pcVar7 - (long)pcVar11;
  if (pcVar7 != (char *)0x0 && uVar9 != 0xffffffffffffffff) {
    if ((char)bVar1 < '\0') {
      if (uVar9 <= uVar10) {
        *(ulong *)(extraout_x8 + 8) = uVar9;
        goto LAB_10016743c;
      }
    }
    else if (uVar9 <= bVar1) {
      extraout_x8[0x17] = (char)uVar9;
      pcVar5 = extraout_x8;
LAB_10016743c:
      pcVar5[uVar9] = '\0';
      goto LAB_100167440;
    }
LAB_100167644:
    func_0x000104c03f14();
    goto LAB_100167648;
  }
LAB_100167440:
  FUN_1001484d8(extraout_x8);
  cVar8 = extraout_x8[0x17];
  uVar10 = (ulong)cVar8;
  pcVar11 = *(char **)extraout_x8;
  uVar9 = *(ulong *)(extraout_x8 + 8);
  pcVar5 = pcVar11;
  if (-1 < (long)uVar10) {
    pcVar5 = extraout_x8;
  }
  uVar13 = uVar9;
  if (-1 < cVar8) {
    uVar13 = uVar10;
  }
  do {
    if (uVar13 == 0) goto LAB_1001674a8;
    lVar3 = uVar13 - 1;
    uVar13 = uVar13 - 1;
  } while (pcVar5[lVar3] != '/');
  if (uVar13 == 0xffffffffffffffff) {
    uVar13 = 0;
joined_r0x0001001674e0:
    if (cVar8 < '\0') goto LAB_1001674e4;
LAB_1001674ac:
    if (uVar13 <= uVar10) {
      extraout_x8[0x17] = (char)uVar13;
      pcVar11 = extraout_x8;
      goto LAB_1001675c8;
    }
    uVar14 = 0x16;
    uVar12 = uVar13 - uVar10;
    if (0x16 - uVar10 < uVar12) {
LAB_10016750c:
      if (0x7ffffffffffffff7 - uVar14 < (uVar12 - uVar14) + uVar10) {
LAB_100167648:
        func_0x000104c4f6b8();
        if ((bRam000000011383aa20 & 1) == 0) {
          iVar4 = 0x1383aa20;
          func_0x000107c60e48();
          if (iVar4 != 0) {
            FUN_1001678ec(0x11383a998);
            func_0x000107c60e4c(0x11383aa20);
          }
        }
        iVar4 = 0x1383a998;
        func_0x000107c61264();
        if (iVar4 != 0) {
          func_0x000107c2cfbc(0x11383a998);
        }
        if (lRam000000011383a9d8 != 0) {
          piVar6 = (int *)(lRam000000011383a9d8 + 8);
          do {
            cVar8 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar2) {
              *piVar6 = *piVar6 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        pcVar5 = (char *)0x11383a998;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x11383a998);
        return pcVar5;
      }
      pcVar7 = (char *)0x7ffffffffffffff7;
      if (uVar14 < 0x3ffffffffffffff3) {
        uVar9 = uVar13;
        if (uVar13 <= uVar14 * 2) {
          uVar9 = uVar14 * 2;
        }
        pcVar11 = (char *)0x19;
        if ((uVar9 | 7) != 0x17) {
          pcVar11 = (char *)((uVar9 | 7) + 1);
        }
        pcVar7 = (char *)0x17;
        if (0x16 < uVar9) {
          pcVar7 = pcVar11;
        }
      }
      pcVar11 = pcVar7;
      func_0x000107c60e20();
      if (uVar10 != 0) {
        func_0x000107c610b8(pcVar11,pcVar5,uVar10);
      }
      if (uVar14 != 0x16) {
        func_0x000107c60e14(pcVar5);
      }
      *(ulong *)(extraout_x8 + 8) = uVar10;
      *(ulong *)(extraout_x8 + 0x10) = (ulong)pcVar7 | 0x8000000000000000;
      *(char **)extraout_x8 = pcVar11;
      cVar8 = (char)(((ulong)pcVar7 | 0x8000000000000000) >> 0x38);
    }
LAB_100167598:
    if (-1 < cVar8) {
      pcVar11 = extraout_x8;
    }
    func_0x000107c60ee4(pcVar11 + uVar10,uVar12);
    if (-1 < extraout_x8[0x17]) {
      extraout_x8[0x17] = (byte)uVar13 & 0x7f;
      goto LAB_1001675c8;
    }
  }
  else {
    if (uVar13 == 1) {
      if (*pcVar5 == '/') {
        uVar13 = 2;
      }
    }
    else if (uVar13 == 0) {
      uVar13 = 1;
      goto joined_r0x0001001674e0;
    }
LAB_1001674a8:
    if (-1 < cVar8) goto LAB_1001674ac;
LAB_1001674e4:
    if (uVar9 < uVar13) {
      uVar14 = (*(ulong *)(extraout_x8 + 0x10) & 0x7fffffffffffffff) - 1;
      cVar8 = (char)(*(ulong *)(extraout_x8 + 0x10) >> 0x38);
      uVar12 = uVar13 - uVar9;
      uVar10 = uVar9;
      if (uVar14 - uVar9 < uVar12) goto LAB_10016750c;
      goto LAB_100167598;
    }
  }
  *(ulong *)(extraout_x8 + 8) = uVar13;
LAB_1001675c8:
  pcVar11[uVar13] = '\0';
  pcVar5 = extraout_x8;
  FUN_1001484d8(extraout_x8);
  bVar1 = extraout_x8[0x17];
  uVar9 = *(ulong *)(extraout_x8 + 8);
  if (-1 < (char)bVar1) {
    uVar9 = (ulong)bVar1;
  }
  if (uVar9 == 0) {
    if ((char)bVar1 < '\0') {
      extraout_x8[8] = '\x01';
      extraout_x8[9] = '\0';
      extraout_x8[10] = '\0';
      extraout_x8[0xb] = '\0';
      extraout_x8[0xc] = '\0';
      extraout_x8[0xd] = '\0';
      extraout_x8[0xe] = '\0';
      extraout_x8[0xf] = '\0';
      pcVar11 = *(char **)extraout_x8;
    }
    else {
      extraout_x8[0x17] = '\x01';
      pcVar11 = extraout_x8;
    }
    pcVar11[0] = '.';
    pcVar11[1] = '\0';
    return pcVar5;
  }
  return pcVar5;
}



/* Entry: 1001671dc; end: 10016733f;  */

/* WARNING: Possible PIC construction at 0x0001001676b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001676b8) */
/* WARNING: Removing unreachable block (ram,0x000100167728) */
/* WARNING: Removing unreachable block (ram,0x0001001677a0) */
/* WARNING: Removing unreachable block (ram,0x00010016778c) */
/* WARNING: Removing unreachable block (ram,0x0001001677ac) */
/* WARNING: Removing unreachable block (ram,0x0001001677d4) */
/* WARNING: Removing unreachable block (ram,0x0001001677dc) */
/* WARNING: Removing unreachable block (ram,0x0001001677e4) */
/* WARNING: Removing unreachable block (ram,0x0001001677e8) */
/* WARNING: Removing unreachable block (ram,0x0001001676cc) */
/* WARNING: Removing unreachable block (ram,0x0001001676e4) */
/* WARNING: Removing unreachable block (ram,0x0001001677f4) */
/* WARNING: Removing unreachable block (ram,0x000100167814) */
/* WARNING: Removing unreachable block (ram,0x0001001676f8) */
/* WARNING: Removing unreachable block (ram,0x000100167818) */
/* WARNING: Removing unreachable block (ram,0x000100167700) */
/* WARNING: Removing unreachable block (ram,0x000100167838) */
/* WARNING: Removing unreachable block (ram,0x000100167840) */
/* WARNING: Removing unreachable block (ram,0x000100167724) */
/* WARNING: Removing unreachable block (ram,0x00010016784c) */
/* WARNING: Removing unreachable block (ram,0x000100167854) */
/* WARNING: Removing unreachable block (ram,0x00010016785c) */
/* WARNING: Removing unreachable block (ram,0x000100167860) */
/* WARNING: Removing unreachable block (ram,0x000100167870) */

char * FUN_1001671dc(char *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,ulong param_6)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  char cVar8;
  char *extraout_x8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    pcVar5 = param_1 + 0x10;
    FUN_100033dac(pcVar5,*param_2,param_2[1]);
  }
  else {
    uVar16 = param_2[1];
    uVar15 = *param_2;
    *(undefined8 *)(param_1 + 0x20) = param_2[2];
    *(undefined8 *)(param_1 + 0x18) = uVar16;
    *(undefined8 *)(param_1 + 0x10) = uVar15;
    pcVar5 = param_1;
  }
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  param_1[0x48] = '\0';
  param_1[0x49] = '\0';
  param_1[0x4a] = '\0';
  param_1[0x4b] = '\0';
  param_1[0x4c] = '\0';
  param_1[0x4d] = '\0';
  param_1[0x4e] = '\0';
  param_1[0x4f] = '\0';
  param_1[0x50] = -1;
  param_1[0x51] = -1;
  param_1[0x52] = -1;
  param_1[0x53] = -1;
  param_1[0x58] = '\0';
  param_1[0x59] = '\0';
  param_1[0x5a] = '\0';
  param_1[0x5b] = '\0';
  param_1[0x5c] = '\0';
  param_1[0x5d] = '\0';
  param_1[0x5e] = '\0';
  param_1[0x5f] = '\0';
  param_1[0x60] = '\0';
  param_1[0x61] = '\0';
  param_1[0x62] = '\0';
  param_1[99] = '\0';
  param_1[100] = '\0';
  param_1[0x65] = '\0';
  param_1[0x66] = '\0';
  param_1[0x67] = '\0';
  param_1[0x68] = '\0';
  param_1[0x78] = '\0';
  param_1[0x79] = '\0';
  param_1[0x7a] = '\0';
  param_1[0x7b] = '\0';
  param_1[0x7c] = '\0';
  param_1[0x7d] = '\0';
  param_1[0x7e] = '\0';
  param_1[0x7f] = '\0';
  param_1[0x70] = '\0';
  param_1[0x71] = '\0';
  param_1[0x72] = '\0';
  param_1[0x73] = '\0';
  param_1[0x74] = '\0';
  param_1[0x75] = '\0';
  param_1[0x76] = '\0';
  param_1[0x77] = '\0';
  param_1[0x88] = '\0';
  param_1[0x89] = '\0';
  param_1[0x8a] = '\0';
  param_1[0x8b] = '\0';
  param_1[0x8c] = '\0';
  param_1[0x8d] = '\0';
  param_1[0x8e] = '\0';
  param_1[0x8f] = '\0';
  param_1[0x80] = '\0';
  param_1[0x81] = '\0';
  param_1[0x82] = '\0';
  param_1[0x83] = '\0';
  param_1[0x84] = '\0';
  param_1[0x85] = '\0';
  param_1[0x86] = '\0';
  param_1[0x87] = '\0';
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined ***)(param_1 + 0x30) = &PTR_DAT_110cd6318;
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x98] = '\0';
  param_1[0x99] = '\0';
  param_1[0x9a] = '\0';
  param_1[0x9b] = '\0';
  param_1[0x9c] = '\0';
  param_1[0x9d] = '\0';
  param_1[0x9e] = '\0';
  param_1[0x9f] = '\0';
  param_1[0xa0] = '\0';
  param_1[0xa1] = '\0';
  param_1[0xa2] = '\0';
  param_1[0xa3] = '\0';
  param_1[0xa4] = '\0';
  param_1[0xa5] = '\0';
  param_1[0xa6] = '\0';
  param_1[0xa7] = '\0';
  param_1[0x90] = '\0';
  param_1[0x91] = '\0';
  param_1[0x92] = '\0';
  param_1[0x93] = '\0';
  param_1[0x94] = '\0';
  param_1[0x95] = '\0';
  param_1[0x96] = '\0';
  param_1[0x97] = '\0';
  param_1[0xb0] = '\0';
  param_1[0xb1] = '\0';
  param_1[0xb2] = '\0';
  param_1[0xb3] = '\0';
  param_1[0xb4] = '\0';
  param_1[0xb5] = '\0';
  param_1[0xb6] = '\0';
  param_1[0xb7] = '\0';
  *(undefined8 *)(param_1 + 0xb8) = param_4;
  if (param_6 < 0x7ffffffffffffff8) {
    if (param_6 < 0x17) {
      pcVar11 = param_1 + 0xc0;
      param_1[0xd7] = (char)param_6;
      if (param_6 == 0) goto LAB_1001672cc;
    }
    else {
      pcVar5 = (char *)0x19;
      if ((param_6 | 7) != 0x17) {
        pcVar5 = (char *)((param_6 | 7) + 1);
      }
      pcVar11 = pcVar5;
      func_0x000107c60e20();
      *(ulong *)(param_1 + 200) = param_6;
      *(ulong *)(param_1 + 0xd0) = (ulong)pcVar5 | 0x8000000000000000;
      *(char **)(param_1 + 0xc0) = pcVar11;
    }
    func_0x000107c610b8(pcVar11,param_5,param_6);
LAB_1001672cc:
    pcVar11[param_6] = '\0';
    param_1[0xd8] = '\0';
    param_1[0xd9] = '\0';
    param_1[0xda] = '\0';
    param_1[0xdb] = '\0';
    param_1[0xdc] = '\0';
    param_1[0xdd] = '\0';
    param_1[0xde] = '\0';
    param_1[0xdf] = '\0';
    piVar6 = (int *)0x8;
    func_0x000107c60e20();
    *piVar6 = 0;
    *(undefined1 *)(piVar6 + 1) = 0;
    if (piVar6 != (int *)0x0) {
      do {
        cVar8 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    *(int **)(param_1 + 0xe0) = piVar6;
    *(char **)(param_1 + 0xe8) = param_1;
    FUN_100167340(auStack_58,param_2);
    FUN_10016764c(auStack_58);
    if (cStack_41 < '\0') {
      func_0x000107c60e14(auStack_58[0]);
    }
    return param_1;
  }
  func_0x000107c35c54();
  extraout_x8[8] = -0x56;
  extraout_x8[9] = -0x56;
  extraout_x8[10] = -0x56;
  extraout_x8[0xb] = -0x56;
  extraout_x8[0xc] = -0x56;
  extraout_x8[0xd] = -0x56;
  extraout_x8[0xe] = -0x56;
  extraout_x8[0xf] = -0x56;
  extraout_x8[0x10] = -0x56;
  extraout_x8[0x11] = -0x56;
  extraout_x8[0x12] = -0x56;
  extraout_x8[0x13] = -0x56;
  extraout_x8[0x14] = -0x56;
  extraout_x8[0x15] = -0x56;
  extraout_x8[0x16] = -0x56;
  extraout_x8[0x17] = -0x56;
  extraout_x8[0] = -0x56;
  extraout_x8[1] = -0x56;
  extraout_x8[2] = -0x56;
  extraout_x8[3] = -0x56;
  extraout_x8[4] = -0x56;
  extraout_x8[5] = -0x56;
  extraout_x8[6] = -0x56;
  extraout_x8[7] = -0x56;
  cVar8 = pcVar5[0x17];
  pcVar11 = *(char **)pcVar5;
  if (-1 < (long)cVar8) {
    pcVar11 = pcVar5;
  }
  uVar9 = *(ulong *)(pcVar5 + 8);
  if (-1 < cVar8) {
    uVar9 = (long)cVar8;
  }
  if (0x7ffffffffffffff7 < uVar9) {
    func_0x000107c35c54();
    goto LAB_100167644;
  }
  if (uVar9 < 0x17) {
    extraout_x8[0x17] = (char)uVar9;
    pcVar7 = extraout_x8;
    if (uVar9 != 0) goto LAB_1001673d0;
  }
  else {
    pcVar5 = (char *)0x19;
    if ((uVar9 | 7) != 0x17) {
      pcVar5 = (char *)((uVar9 | 7) + 1);
    }
    pcVar7 = pcVar5;
    func_0x000107c60e20();
    *(ulong *)(extraout_x8 + 8) = uVar9;
    *(ulong *)(extraout_x8 + 0x10) = (ulong)pcVar5 | 0x8000000000000000;
    *(char **)extraout_x8 = pcVar7;
LAB_1001673d0:
    func_0x000107c610b8(pcVar7,pcVar11,uVar9);
  }
  pcVar7[uVar9] = '\0';
  bVar1 = extraout_x8[0x17];
  pcVar5 = *(char **)extraout_x8;
  uVar10 = *(ulong *)(extraout_x8 + 8);
  uVar9 = uVar10;
  pcVar11 = pcVar5;
  if (-1 < (char)bVar1) {
    uVar9 = (ulong)bVar1;
    pcVar11 = extraout_x8;
  }
  pcVar7 = pcVar11;
  func_0x000107c610ac(pcVar11,0,uVar9);
  uVar9 = (long)pcVar7 - (long)pcVar11;
  if (pcVar7 != (char *)0x0 && uVar9 != 0xffffffffffffffff) {
    if ((char)bVar1 < '\0') {
      if (uVar9 <= uVar10) {
        *(ulong *)(extraout_x8 + 8) = uVar9;
        goto LAB_10016743c;
      }
    }
    else if (uVar9 <= bVar1) {
      extraout_x8[0x17] = (char)uVar9;
      pcVar5 = extraout_x8;
LAB_10016743c:
      pcVar5[uVar9] = '\0';
      goto LAB_100167440;
    }
LAB_100167644:
    func_0x000104c03f14();
    goto LAB_100167648;
  }
LAB_100167440:
  FUN_1001484d8(extraout_x8);
  cVar8 = extraout_x8[0x17];
  uVar10 = (ulong)cVar8;
  pcVar11 = *(char **)extraout_x8;
  uVar9 = *(ulong *)(extraout_x8 + 8);
  pcVar5 = pcVar11;
  if (-1 < (long)uVar10) {
    pcVar5 = extraout_x8;
  }
  uVar13 = uVar9;
  if (-1 < cVar8) {
    uVar13 = uVar10;
  }
  do {
    if (uVar13 == 0) goto LAB_1001674a8;
    lVar3 = uVar13 - 1;
    uVar13 = uVar13 - 1;
  } while (pcVar5[lVar3] != '/');
  if (uVar13 == 0xffffffffffffffff) {
    uVar13 = 0;
joined_r0x0001001674e0:
    if (cVar8 < '\0') goto LAB_1001674e4;
LAB_1001674ac:
    if (uVar13 <= uVar10) {
      extraout_x8[0x17] = (char)uVar13;
      pcVar11 = extraout_x8;
      goto LAB_1001675c8;
    }
    uVar14 = 0x16;
    uVar12 = uVar13 - uVar10;
    if (0x16 - uVar10 < uVar12) {
LAB_10016750c:
      if (0x7ffffffffffffff7 - uVar14 < (uVar12 - uVar14) + uVar10) {
LAB_100167648:
        func_0x000104c4f6b8();
        if ((bRam000000011383aa20 & 1) == 0) {
          iVar4 = 0x1383aa20;
          func_0x000107c60e48();
          if (iVar4 != 0) {
            FUN_1001678ec(0x11383a998);
            func_0x000107c60e4c(0x11383aa20);
          }
        }
        iVar4 = 0x1383a998;
        func_0x000107c61264();
        if (iVar4 != 0) {
          func_0x000107c2cfbc(0x11383a998);
        }
        if (lRam000000011383a9d8 != 0) {
          piVar6 = (int *)(lRam000000011383a9d8 + 8);
          do {
            cVar8 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar2) {
              *piVar6 = *piVar6 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        pcVar5 = (char *)0x11383a998;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x11383a998);
        return pcVar5;
      }
      pcVar7 = (char *)0x7ffffffffffffff7;
      if (uVar14 < 0x3ffffffffffffff3) {
        uVar9 = uVar13;
        if (uVar13 <= uVar14 * 2) {
          uVar9 = uVar14 * 2;
        }
        pcVar11 = (char *)0x19;
        if ((uVar9 | 7) != 0x17) {
          pcVar11 = (char *)((uVar9 | 7) + 1);
        }
        pcVar7 = (char *)0x17;
        if (0x16 < uVar9) {
          pcVar7 = pcVar11;
        }
      }
      pcVar11 = pcVar7;
      func_0x000107c60e20();
      if (uVar10 != 0) {
        func_0x000107c610b8(pcVar11,pcVar5,uVar10);
      }
      if (uVar14 != 0x16) {
        func_0x000107c60e14(pcVar5);
      }
      *(ulong *)(extraout_x8 + 8) = uVar10;
      *(ulong *)(extraout_x8 + 0x10) = (ulong)pcVar7 | 0x8000000000000000;
      *(char **)extraout_x8 = pcVar11;
      cVar8 = (char)(((ulong)pcVar7 | 0x8000000000000000) >> 0x38);
    }
LAB_100167598:
    if (-1 < cVar8) {
      pcVar11 = extraout_x8;
    }
    func_0x000107c60ee4(pcVar11 + uVar10,uVar12);
    if (-1 < extraout_x8[0x17]) {
      extraout_x8[0x17] = (byte)uVar13 & 0x7f;
      goto LAB_1001675c8;
    }
  }
  else {
    if (uVar13 == 1) {
      if (*pcVar5 == '/') {
        uVar13 = 2;
      }
    }
    else if (uVar13 == 0) {
      uVar13 = 1;
      goto joined_r0x0001001674e0;
    }
LAB_1001674a8:
    if (-1 < cVar8) goto LAB_1001674ac;
LAB_1001674e4:
    if (uVar9 < uVar13) {
      uVar14 = (*(ulong *)(extraout_x8 + 0x10) & 0x7fffffffffffffff) - 1;
      cVar8 = (char)(*(ulong *)(extraout_x8 + 0x10) >> 0x38);
      uVar12 = uVar13 - uVar9;
      uVar10 = uVar9;
      if (uVar14 - uVar9 < uVar12) goto LAB_10016750c;
      goto LAB_100167598;
    }
  }
  *(ulong *)(extraout_x8 + 8) = uVar13;
LAB_1001675c8:
  pcVar11[uVar13] = '\0';
  pcVar5 = extraout_x8;
  FUN_1001484d8(extraout_x8);
  bVar1 = extraout_x8[0x17];
  uVar9 = *(ulong *)(extraout_x8 + 8);
  if (-1 < (char)bVar1) {
    uVar9 = (ulong)bVar1;
  }
  if (uVar9 == 0) {
    if ((char)bVar1 < '\0') {
      extraout_x8[8] = '\x01';
      extraout_x8[9] = '\0';
      extraout_x8[10] = '\0';
      extraout_x8[0xb] = '\0';
      extraout_x8[0xc] = '\0';
      extraout_x8[0xd] = '\0';
      extraout_x8[0xe] = '\0';
      extraout_x8[0xf] = '\0';
      pcVar11 = *(char **)extraout_x8;
    }
    else {
      extraout_x8[0x17] = '\x01';
      pcVar11 = extraout_x8;
    }
    pcVar11[0] = '.';
    pcVar11[1] = '\0';
    return pcVar5;
  }
  return pcVar5;
}



/* Entry: 100167340; end: 10016764b;  */

/* WARNING: Possible PIC construction at 0x0001001676b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001676b8) */
/* WARNING: Removing unreachable block (ram,0x000100167728) */
/* WARNING: Removing unreachable block (ram,0x0001001677a0) */
/* WARNING: Removing unreachable block (ram,0x00010016778c) */
/* WARNING: Removing unreachable block (ram,0x0001001677ac) */
/* WARNING: Removing unreachable block (ram,0x0001001677d4) */
/* WARNING: Removing unreachable block (ram,0x0001001677dc) */
/* WARNING: Removing unreachable block (ram,0x0001001677e4) */
/* WARNING: Removing unreachable block (ram,0x0001001677e8) */
/* WARNING: Removing unreachable block (ram,0x0001001676cc) */
/* WARNING: Removing unreachable block (ram,0x0001001676e4) */
/* WARNING: Removing unreachable block (ram,0x0001001677f4) */
/* WARNING: Removing unreachable block (ram,0x000100167814) */
/* WARNING: Removing unreachable block (ram,0x0001001676f8) */
/* WARNING: Removing unreachable block (ram,0x000100167818) */
/* WARNING: Removing unreachable block (ram,0x000100167700) */
/* WARNING: Removing unreachable block (ram,0x000100167838) */
/* WARNING: Removing unreachable block (ram,0x000100167840) */
/* WARNING: Removing unreachable block (ram,0x000100167724) */
/* WARNING: Removing unreachable block (ram,0x00010016784c) */
/* WARNING: Removing unreachable block (ram,0x000100167854) */
/* WARNING: Removing unreachable block (ram,0x00010016785c) */
/* WARNING: Removing unreachable block (ram,0x000100167860) */
/* WARNING: Removing unreachable block (ram,0x000100167870) */

void FUN_100167340(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char cVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  param_1[8] = -0x56;
  param_1[9] = -0x56;
  param_1[10] = -0x56;
  param_1[0xb] = -0x56;
  param_1[0xc] = -0x56;
  param_1[0xd] = -0x56;
  param_1[0xe] = -0x56;
  param_1[0xf] = -0x56;
  param_1[0x10] = -0x56;
  param_1[0x11] = -0x56;
  param_1[0x12] = -0x56;
  param_1[0x13] = -0x56;
  param_1[0x14] = -0x56;
  param_1[0x15] = -0x56;
  param_1[0x16] = -0x56;
  param_1[0x17] = -0x56;
  param_1[0] = -0x56;
  param_1[1] = -0x56;
  param_1[2] = -0x56;
  param_1[3] = -0x56;
  param_1[4] = -0x56;
  param_1[5] = -0x56;
  param_1[6] = -0x56;
  param_1[7] = -0x56;
  cVar9 = *(char *)((long)param_2 + 0x17);
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (long)cVar9) {
    puVar2 = param_2;
  }
  uVar10 = param_2[1];
  if (-1 < cVar9) {
    uVar10 = (long)cVar9;
  }
  if (0x7ffffffffffffff7 < uVar10) {
    func_0x000107c35c54();
    goto LAB_100167644;
  }
  if (uVar10 < 0x17) {
    param_1[0x17] = (char)uVar10;
    pcVar7 = param_1;
    if (uVar10 != 0) goto LAB_1001673d0;
  }
  else {
    pcVar12 = (char *)0x19;
    if ((uVar10 | 7) != 0x17) {
      pcVar12 = (char *)((uVar10 | 7) + 1);
    }
    pcVar7 = pcVar12;
    func_0x000107c60e20();
    *(ulong *)(param_1 + 8) = uVar10;
    *(ulong *)(param_1 + 0x10) = (ulong)pcVar12 | 0x8000000000000000;
    *(char **)param_1 = pcVar7;
LAB_1001673d0:
    func_0x000107c610b8(pcVar7,puVar2,uVar10);
  }
  pcVar7[uVar10] = '\0';
  bVar3 = param_1[0x17];
  pcVar12 = *(char **)param_1;
  uVar11 = *(ulong *)(param_1 + 8);
  uVar10 = uVar11;
  pcVar7 = pcVar12;
  if (-1 < (char)bVar3) {
    uVar10 = (ulong)bVar3;
    pcVar7 = param_1;
  }
  pcVar8 = pcVar7;
  func_0x000107c610ac(pcVar7,0,uVar10);
  uVar10 = (long)pcVar8 - (long)pcVar7;
  if (pcVar8 != (char *)0x0 && uVar10 != 0xffffffffffffffff) {
    if ((char)bVar3 < '\0') {
      if (uVar10 <= uVar11) {
        *(ulong *)(param_1 + 8) = uVar10;
        goto LAB_10016743c;
      }
    }
    else if (uVar10 <= bVar3) {
      param_1[0x17] = (char)uVar10;
      pcVar12 = param_1;
LAB_10016743c:
      pcVar12[uVar10] = '\0';
      goto LAB_100167440;
    }
LAB_100167644:
    func_0x000104c03f14();
    goto LAB_100167648;
  }
LAB_100167440:
  FUN_1001484d8(param_1);
  cVar9 = param_1[0x17];
  uVar11 = (ulong)cVar9;
  pcVar7 = *(char **)param_1;
  uVar10 = *(ulong *)(param_1 + 8);
  pcVar12 = pcVar7;
  if (-1 < (long)uVar11) {
    pcVar12 = param_1;
  }
  uVar14 = uVar10;
  if (-1 < cVar9) {
    uVar14 = uVar11;
  }
  do {
    if (uVar14 == 0) goto LAB_1001674a8;
    lVar5 = uVar14 - 1;
    uVar14 = uVar14 - 1;
  } while (pcVar12[lVar5] != '/');
  if (uVar14 == 0xffffffffffffffff) {
    uVar14 = 0;
joined_r0x0001001674e0:
    if (cVar9 < '\0') goto LAB_1001674e4;
LAB_1001674ac:
    if (uVar14 <= uVar11) {
      param_1[0x17] = (char)uVar14;
      pcVar7 = param_1;
      goto LAB_1001675c8;
    }
    uVar15 = 0x16;
    uVar13 = uVar14 - uVar11;
    if (0x16 - uVar11 < uVar13) {
LAB_10016750c:
      if (0x7ffffffffffffff7 - uVar15 < (uVar13 - uVar15) + uVar11) {
LAB_100167648:
        func_0x000104c4f6b8();
        if ((bRam000000011383aa20 & 1) == 0) {
          iVar6 = 0x1383aa20;
          func_0x000107c60e48();
          if (iVar6 != 0) {
            FUN_1001678ec(0x11383a998);
            func_0x000107c60e4c(0x11383aa20);
          }
        }
        iVar6 = 0x1383a998;
        func_0x000107c61264();
        if (iVar6 != 0) {
          func_0x000107c2cfbc(0x11383a998);
        }
        if (lRam000000011383a9d8 != 0) {
          piVar1 = (int *)(lRam000000011383a9d8 + 8);
          do {
            cVar9 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x11383a998);
        return;
      }
      pcVar8 = (char *)0x7ffffffffffffff7;
      if (uVar15 < 0x3ffffffffffffff3) {
        uVar10 = uVar14;
        if (uVar14 <= uVar15 * 2) {
          uVar10 = uVar15 * 2;
        }
        pcVar7 = (char *)0x19;
        if ((uVar10 | 7) != 0x17) {
          pcVar7 = (char *)((uVar10 | 7) + 1);
        }
        pcVar8 = (char *)0x17;
        if (0x16 < uVar10) {
          pcVar8 = pcVar7;
        }
      }
      pcVar7 = pcVar8;
      func_0x000107c60e20();
      if (uVar11 != 0) {
        func_0x000107c610b8(pcVar7,pcVar12,uVar11);
      }
      if (uVar15 != 0x16) {
        func_0x000107c60e14(pcVar12);
      }
      *(ulong *)(param_1 + 8) = uVar11;
      *(ulong *)(param_1 + 0x10) = (ulong)pcVar8 | 0x8000000000000000;
      *(char **)param_1 = pcVar7;
      cVar9 = (char)(((ulong)pcVar8 | 0x8000000000000000) >> 0x38);
    }
LAB_100167598:
    if (-1 < cVar9) {
      pcVar7 = param_1;
    }
    func_0x000107c60ee4(pcVar7 + uVar11,uVar13);
    if (-1 < param_1[0x17]) {
      param_1[0x17] = (byte)uVar14 & 0x7f;
      goto LAB_1001675c8;
    }
  }
  else {
    if (uVar14 == 1) {
      if (*pcVar12 == '/') {
        uVar14 = 2;
      }
    }
    else if (uVar14 == 0) {
      uVar14 = 1;
      goto joined_r0x0001001674e0;
    }
LAB_1001674a8:
    if (-1 < cVar9) goto LAB_1001674ac;
LAB_1001674e4:
    if (uVar10 < uVar14) {
      uVar15 = (*(ulong *)(param_1 + 0x10) & 0x7fffffffffffffff) - 1;
      cVar9 = (char)(*(ulong *)(param_1 + 0x10) >> 0x38);
      uVar13 = uVar14 - uVar10;
      uVar11 = uVar10;
      if (uVar15 - uVar10 < uVar13) goto LAB_10016750c;
      goto LAB_100167598;
    }
  }
  *(ulong *)(param_1 + 8) = uVar14;
LAB_1001675c8:
  pcVar7[uVar14] = '\0';
  FUN_1001484d8(param_1);
  bVar3 = param_1[0x17];
  uVar10 = *(ulong *)(param_1 + 8);
  if (-1 < (char)bVar3) {
    uVar10 = (ulong)bVar3;
  }
  if (uVar10 == 0) {
    if ((char)bVar3 < '\0') {
      param_1[8] = '\x01';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1 = *(char **)param_1;
    }
    else {
      param_1[0x17] = '\x01';
    }
    param_1[0] = '.';
    param_1[1] = '\0';
    return;
  }
  return;
}



/* Entry: 10016764c; end: 1001678eb;  */

/* WARNING: Possible PIC construction at 0x0001001676b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001676b8) */
/* WARNING: Removing unreachable block (ram,0x000100167728) */
/* WARNING: Removing unreachable block (ram,0x0001001677a0) */
/* WARNING: Removing unreachable block (ram,0x00010016778c) */
/* WARNING: Removing unreachable block (ram,0x0001001677ac) */
/* WARNING: Removing unreachable block (ram,0x0001001677d4) */
/* WARNING: Removing unreachable block (ram,0x0001001677dc) */
/* WARNING: Removing unreachable block (ram,0x0001001677e4) */
/* WARNING: Removing unreachable block (ram,0x0001001677e8) */
/* WARNING: Removing unreachable block (ram,0x0001001676cc) */
/* WARNING: Removing unreachable block (ram,0x0001001676e4) */
/* WARNING: Removing unreachable block (ram,0x0001001677f4) */
/* WARNING: Removing unreachable block (ram,0x000100167814) */
/* WARNING: Removing unreachable block (ram,0x0001001676f8) */
/* WARNING: Removing unreachable block (ram,0x000100167818) */
/* WARNING: Removing unreachable block (ram,0x000100167700) */
/* WARNING: Removing unreachable block (ram,0x000100167838) */
/* WARNING: Removing unreachable block (ram,0x000100167840) */
/* WARNING: Removing unreachable block (ram,0x000100167724) */
/* WARNING: Removing unreachable block (ram,0x00010016784c) */
/* WARNING: Removing unreachable block (ram,0x000100167854) */
/* WARNING: Removing unreachable block (ram,0x00010016785c) */
/* WARNING: Removing unreachable block (ram,0x000100167860) */
/* WARNING: Removing unreachable block (ram,0x000100167870) */

void FUN_10016764c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if ((bRam000000011383aa20 & 1) == 0) {
    iVar4 = 0x1383aa20;
    func_0x000107c60e48();
    if (iVar4 != 0) {
      FUN_1001678ec(0x11383a998);
      func_0x000107c60e4c(0x11383aa20);
    }
  }
  iVar4 = 0x1383a998;
  func_0x000107c61264();
  if (iVar4 != 0) {
    func_0x000107c2cfbc(0x11383a998);
  }
  if (lRam000000011383a9d8 != 0) {
    piVar1 = (int *)(lRam000000011383a9d8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x11383a998);
  return;
}



/* Entry: 1001678ec; end: 1001679a7;  */

long FUN_1001678ec(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  double dVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0xaaaaaaaaaaaaaaaa;
  uStack_30 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c61270(&uStack_38);
  func_0x000107c61274(&uStack_38,1);
  func_0x000107c6125c(param_1,&uStack_38);
  puVar3 = &uStack_38;
  func_0x000107c6126c();
  *(undefined8 *)(param_1 + 0x40) = 0;
  (*(code *)PTR_FUN_11336f910)();
  puVar1 = (undefined8 *)0x8000000000000000;
  if (!SCARRY8((long)puVar3,-2000000)) {
    puVar1 = puVar3 + -250000;
  }
  *(undefined8 **)(param_1 + 0x48) = puVar1;
  dVar5 = 0.0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  func_0x000107c60e78();
  func_0x000107c60734();
  if (dVar5 == 0.0) {
    return 0;
  }
  lVar4 = 0x7fffffffffffffff;
  if (dVar5 != INFINITY) {
    dVar5 = (dVar5 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1970_11034ab70) * 1000000.0;
    lVar2 = 0;
    if (-9.223372036854776e+18 <= dVar5) {
      lVar2 = 0x7fffffffffffffff;
    }
    lVar4 = (long)dVar5;
    if (9.223372036854775e+18 < dVar5) {
      lVar4 = lVar2;
    }
    if (1 < lVar4 + 0x8000000000000001U) {
      lVar2 = 0x7fffffffffffffff;
      if (!SCARRY8(lVar4,0x295e9648864000)) {
        lVar2 = lVar4 + 0x295e9648864000;
      }
      return lVar2;
    }
  }
  return lVar4;
}



/* Entry: 1001679a8; end: 100167a5f;  */

long FUN_1001679a8(double param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  func_0x000107c60734();
  if (param_1 == 0.0) {
    return 0;
  }
  lVar2 = 0x7fffffffffffffff;
  if (param_1 != INFINITY) {
    dVar3 = (param_1 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1970_11034ab70) * 1000000.0;
    lVar1 = 0;
    if (-9.223372036854776e+18 <= dVar3) {
      lVar1 = 0x7fffffffffffffff;
    }
    lVar2 = (long)dVar3;
    if (9.223372036854775e+18 < dVar3) {
      lVar2 = lVar1;
    }
    if (1 < lVar2 + 0x8000000000000001U) {
      lVar1 = 0x7fffffffffffffff;
      if (!SCARRY8(lVar2,0x295e9648864000)) {
        lVar1 = lVar2 + 0x295e9648864000;
      }
      return lVar1;
    }
  }
  return lVar2;
}



/* Entry: 100167a60; end: 10016825b;  */

void FUN_100167a60(long *param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  
  *param_1 = param_2;
  if ((param_2 != 0) &&
     (uVar1 = *(uint *)(param_2 + 8), *(uint *)(param_2 + 8) = uVar1 + 1, 0xfffffffe < uVar1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x100167a80);
    (*pcVar2)();
  }
  return;
}



/* Entry: 10016825c; end: 100168267;  */

long FUN_10016825c(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 100168268; end: 100168427;  */

undefined1  [16]
FUN_100168268(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined1 in_NG;
  undefined1 uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong uVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x21;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x25;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *plStack_68;
  
  FUN_10016825c();
  FUN_100102e7c();
  uVar7 = unaff_x19[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      unaff_x25 = uVar8 & param_3;
      uVar1 = 1;
      in_NG = 0;
    }
    else {
      in_NG = (long)(param_3 - uVar7) < 0;
      uVar1 = param_3 == uVar7;
      unaff_x25 = param_3;
      if (uVar7 <= param_3) {
        func_0x00010747ab44();
      }
    }
    plVar6 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar6;
          if (unaff_x21 == (long *)0x0) goto LAB_100168320;
          func_0x00010747a678();
          plVar6 = unaff_x21;
          if (!(bool)uVar1) break;
          plVar2 = unaff_x21 + 2;
          FUN_1000e107c(plVar2,param_4);
          if (((ulong)plVar2 & 1) != 0) {
            uVar3 = 0;
            goto LAB_10016840c;
          }
        }
        if ((uVar7 & uVar8) == 0) {
          uVar4 = extraout_x8 & uVar8;
        }
        else {
          uVar4 = extraout_x8;
          if (uVar7 <= extraout_x8) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = extraout_x8 / uVar7;
            }
            uVar4 = extraout_x8 - uVar4 * uVar7;
          }
        }
        in_NG = (long)(uVar4 - unaff_x25) < 0;
        uVar1 = 1;
      } while (uVar4 == unaff_x25);
    }
  }
LAB_100168320:
  plVar6 = unaff_x19 + 2;
  func_0x000107c60e20(0x30);
  func_0x0001001684dc();
  func_0x000107c60c94();
  *(undefined4 *)(unaff_x21 + 5) = 0;
  func_0x0001001684f0();
  func_0x0001001684fc();
  if ((uVar7 == 0) ||
     (func_0x00010747a1a8(param_1,param_2,(float)uVar7), uVar8 = unaff_x25, (bool)in_NG)) {
    func_0x000100168510();
    func_0x000100168528();
    FUN_10016854c();
    uVar7 = unaff_x19[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar8 = uVar7 - 1 & param_3;
    }
    else {
      uVar8 = param_3;
      if (uVar7 <= param_3) {
        func_0x00010747ab44();
        uVar8 = unaff_x25;
      }
    }
  }
  lVar5 = *unaff_x19;
  if (*(long *)(lVar5 + uVar8 * 8) == 0) {
    *plStack_68 = *plVar6;
    *plVar6 = (long)plStack_68;
    *(long **)(lVar5 + uVar8 * 8) = plVar6;
    if (*plStack_68 != 0) {
      uVar8 = *(ulong *)(*plStack_68 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar4 * uVar7;
      }
      *(long **)(lVar5 + uVar8 * 8) = plStack_68;
    }
  }
  else {
    func_0x00010747a5e4();
  }
  func_0x000100168700();
  FUN_100168724();
  uVar3 = 1;
  unaff_x21 = plStack_68;
LAB_10016840c:
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = unaff_x21;
  return auVar9;
}



/* Entry: 100168428; end: 10016845b;  */

long FUN_100168428(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_100168268(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 10016845c; end: 10016854b;  */

long FUN_10016845c(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)((long)param_1 + param_2 + -8);
  uVar3 = lVar1 * -0x651e95c4d06fbfb1;
  uVar4 = *param_1 * -0x4b6d499041670d8d - param_1[1];
  uVar2 = param_1[1] ^ 0xc949d7c7509e6557;
  uVar2 = *param_1 * -0x4b6d499041670d8d + param_2 + (uVar2 >> 0x14 | uVar2 << 0x2c) +
          lVar1 * 0x651e95c4d06fbfb1;
  uVar3 = (uVar2 ^ (uVar3 >> 0x1e | uVar3 << 0x22) + (uVar4 >> 0x2b | uVar4 * 0x200000) +
                   *(long *)((long)param_1 + param_2 + -0x10) * -0x3c5a37a36834ced9) *
          -0x622015f714c7d297;
  uVar2 = (uVar2 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
  return (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
}



/* Entry: 10016854c; end: 1001685c7;  */

void FUN_10016854c(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  func_0x000100168540();
  if ((!(bool)in_ZR) && (func_0x000107274d1c(), !(bool)in_ZR)) {
    func_0x000107274b2c();
  }
  FUN_1001685c8();
  if ((bool)in_CY && !(bool)in_ZR) {
LAB_100168584:
    func_0x0001001685d4();
    if (param_2 == 0) {
      func_0x0001001686c4(param_1);
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      func_0x0001001685e0();
      FUN_100168698();
      func_0x0001001686b8();
      func_0x0001001686c4();
      func_0x0001001686dc();
      uVar3 = extraout_x9;
      while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
        func_0x0001001686ec();
        uVar3 = extraout_x9_00;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x0001072742e0();
        func_0x0001072742f4();
        plVar4 = extraout_x9_01;
        while (*plVar4 != 0) {
          func_0x000107274bf0();
          lVar2 = extraout_x8_00;
          plVar4 = extraout_x12;
          uVar3 = extraout_x11;
          if ((bool)uVar1) {
            uVar5 = extraout_x13 & extraout_x10;
          }
          else {
            uVar5 = extraout_x13;
            if (unaff_x19 <= extraout_x13) {
              func_0x000107274bd8();
              lVar2 = extraout_x8_01;
              uVar3 = extraout_x11_00;
              plVar4 = extraout_x12_00;
              uVar5 = extraout_x13_00;
            }
          }
          uVar1 = uVar5 == uVar3;
          if (!(bool)uVar1) {
            if (*(long *)(lVar2 + uVar5 * 8) == 0) {
              func_0x000107274bcc();
              plVar4 = extraout_x12_01;
            }
            else {
              func_0x00010727411c();
              plVar4 = extraout_x9_02;
            }
          }
        }
      }
    }
    return;
  }
  if (!(bool)in_CY) {
    func_0x00010727419c();
    if (((bool)in_CY) && (func_0x000107274be4(), extraout_x8 == 0)) {
      func_0x0001072740fc();
    }
    else {
      func_0x000107c60c44();
    }
    func_0x00010727462c();
    if (!(bool)in_CY) goto LAB_100168584;
  }
  return;
}



/* Entry: 1001685c8; end: 1001685eb;  */

void FUN_1001685c8(void)

{
  return;
}



/* Entry: 1001685ec; end: 100168697;  */

void FUN_1001685ec(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  if (param_2 == 0) {
    func_0x0001001686c4(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001001685e0();
    FUN_100168698();
    func_0x0001001686b8();
    func_0x0001001686c4();
    func_0x0001001686dc();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x0001001686ec();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001072742e0();
      func_0x0001072742f4();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x000107274bf0();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000107274bd8();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x000107274bcc();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x00010727411c();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 100168698; end: 1001686af;  */

void FUN_100168698(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d != 0) {
    func_0x000104bd35f4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 3);
  return;
}



/* Entry: 1001686b0; end: 100168723;  */

void FUN_1001686b0(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 3);
  return;
}



/* Entry: 100168724; end: 100168743;  */

void FUN_100168724(void)

{
  func_0x000100168718();
  FUN_100168744();
  return;
}



/* Entry: 100168744; end: 100168773;  */

void FUN_100168744(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x000107274adc(param_1 + 1);
  if ((bool)in_ZR) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100168774; end: 100169467;  */

void FUN_100168774(void)

{
  undefined1 auStack_50 [32];
  
  func_0x000100167d20();
  func_0x000100167d68();
  func_0x000100167e28();
  func_0x000100139d84(auStack_50);
  return;
}



/* Entry: 100169468; end: 1001695b7;  */

/* WARNING: Removing unreachable block (ram,0x000100169be0) */
/* WARNING: Removing unreachable block (ram,0x000100169974) */
/* WARNING: Removing unreachable block (ram,0x0001001697a8) */
/* WARNING: Removing unreachable block (ram,0x000100169b54) */
/* WARNING: Removing unreachable block (ram,0x000100169bc8) */
/* WARNING: Removing unreachable block (ram,0x000100169b6c) */

ulong ***** FUN_100169468(ulong *****param_1,ulong *****param_2)

{
  ulong ****ppppuVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  ulong *****pppppuVar6;
  ulong *****pppppuVar7;
  ulong *****pppppuVar8;
  ulong ****ppppuVar9;
  ulong *****pppppuVar10;
  ulong *****pppppuVar11;
  ulong *****pppppuVar12;
  ulong *****pppppuVar13;
  ulong *****pppppuVar14;
  undefined8 *extraout_x8;
  undefined8 *puVar15;
  uint uVar16;
  ulong *****pppppuVar17;
  ulong *****pppppuVar18;
  ulong *****unaff_x22;
  ulong *puVar19;
  ulong *****unaff_x23;
  ulong *****unaff_x24;
  ulong ****ppppuStack_350;
  ulong *puStack_348;
  ulong ****ppppuStack_340;
  long lStack_338;
  ulong uStack_330;
  ulong ****ppppuStack_328;
  ulong *puStack_320;
  ulong ****ppppuStack_318;
  long lStack_310;
  ulong ****ppppuStack_308;
  ulong ***pppuStack_300;
  ulong ***pppuStack_2f8;
  undefined8 uStack_2f0;
  ulong ***pppuStack_2e8;
  ulong ****ppppuStack_2e0;
  ulong ****ppppuStack_2d8;
  ulong ****ppppuStack_2d0;
  ulong ****ppppuStack_2c8;
  ulong ****ppppuStack_2c0;
  ulong ****ppppuStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  ulong ****ppppuStack_2a0;
  ulong ****ppppuStack_298;
  ulong ***pppuStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong ****ppppuStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong ***apppuStack_1f8 [4];
  ulong ****ppppuStack_1d8;
  ulong ***pppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong ****appppuStack_180 [2];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ulong ****ppppuStack_c0;
  undefined1 auStack_b8 [32];
  undefined1 *puStack_98;
  ulong ***pppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = 0xaaaaaaaaaaaaaaaa;
  uStack_60 = 0xaaaaaaaaaaaaaaaa;
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  uStack_50 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_70 = 0xaaaaaaaaaaaaaaaa;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  pppuStack_90 = (ulong ***)0xaaaaaaaaaaaaaaaa;
  FUN_10012dd4c(auStack_b8,&UNK_10f745596,&UNK_10f7454e2,0x32b);
  pppppuVar12 = (ulong *****)0x0;
  FUN_10012defc(&pppuStack_90,auStack_b8,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    puStack_98 = auStack_b8;
    func_0x000107c35cb0(&UNK_10f74523a,&puStack_98);
  }
  do {
    pppppuVar18 = (ulong *****)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      pppppuVar18 = param_1;
    }
    pppppuVar10 = param_2;
    func_0x000107c60fc8();
    if (pppppuVar18 != (ulong *****)0x0) {
      param_2 = pppppuVar18;
      func_0x000107c60fc0();
      pppppuVar10 = (ulong *****)0x1;
      pppppuVar6 = param_2;
      func_0x000107c60fb0();
      if (((ulong)pppppuVar6 & 1) == 0) {
        param_1 = (ulong *****)(ulong)((uint)pppppuVar6 | 1);
        goto LAB_10016953c;
      }
      break;
    }
    pppppuVar6 = pppppuVar18;
    func_0x000107c60e5c();
  } while (*(int *)pppppuVar6 == 4);
  goto LAB_100169564;
  while (func_0x000107c60e5c(), *(int *)pppppuVar6 == 4) {
LAB_10016953c:
    pppppuVar10 = (ulong *****)0x2;
    pppppuVar6 = param_2;
    ppppuStack_c0 = (ulong ****)param_1;
    func_0x000107c60fb0();
    if ((int)pppppuVar6 != -1) break;
  }
LAB_100169564:
  pppppuVar6 = (ulong *****)&pppuStack_90;
  func_0x0001001331dc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppppuVar18;
  }
  func_0x000107c60e78();
  pcStack_c8 = FUN_1001695b8;
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar18 = pppppuVar6;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (pppppuVar12 == (ulong *****)0x0) {
LAB_100169604:
    if (pppppuVar6 == (ulong *****)0x0) goto LAB_100169b7c;
LAB_10016960c:
    do {
      ppppuStack_2a0 = (ulong ****)pppppuVar12;
      pppppuVar11 = pppppuVar6;
      func_0x000107c60fdc(pppppuVar6,0,0);
      if ((int)pppppuVar11 != -1) break;
      func_0x000107c60e5c();
      pppppuVar12 = (ulong *****)ppppuStack_2a0;
    } while (*(int *)pppppuVar11 == 4);
    uStack_198 = 0xaaaaaaaaaaaaaaaa;
    uStack_1a0 = 0xaaaaaaaaaaaaaaaa;
    uStack_188 = 0xaaaaaaaaaaaaaaaa;
    uStack_190 = 0xaaaaaaaaaaaaaaaa;
    uStack_1b8 = 0xaaaaaaaaaaaaaaaa;
    uStack_1c0 = 0xaaaaaaaaaaaaaaaa;
    uStack_1a8 = 0xaaaaaaaaaaaaaaaa;
    uStack_1b0 = 0xaaaaaaaaaaaaaaaa;
    uStack_1c8 = 0xaaaaaaaaaaaaaaaa;
    pppuStack_1d0 = (ulong ***)0xaaaaaaaaaaaaaaaa;
    FUN_10012dd4c(&pppuStack_290,&UNK_10f7440dc,&UNK_10f7440fa,0xcd);
    FUN_10012defc(&pppuStack_1d0,&pppuStack_290,0,0);
    param_1 = (ulong *****)0x19;
    if ((bRam000000011336f9a8 & 0x19) != 0) {
      appppuStack_180[0] = &pppuStack_290;
      func_0x000107c35cb0(&UNK_10f74523a,appppuStack_180);
    }
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    ppppuStack_230 = (ulong ****)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_288 = 0;
    pppuStack_290 = (ulong ***)0x0;
    pppppuVar12 = pppppuVar6;
    func_0x000107c60fc0();
    iVar5 = (int)pppppuVar12;
    uStack_148 = 0xaaaaaaaaaaaaaaaa;
    uStack_150 = 0xaaaaaaaaaaaaaaaa;
    uStack_138 = 0xaaaaaaaaaaaaaaaa;
    uStack_140 = 0xaaaaaaaaaaaaaaaa;
    uStack_168 = 0xaaaaaaaaaaaaaaaa;
    uStack_170 = (ulong ****)0xaaaaaaaaaaaaaaaa;
    uStack_158 = 0xaaaaaaaaaaaaaaaa;
    uStack_160 = 0xaaaaaaaaaaaaaaaa;
    appppuStack_180[1] = (ulong ****)0xaaaaaaaaaaaaaaaa;
    appppuStack_180[0] = (ulong ****)0xaaaaaaaaaaaaaaaa;
    unaff_x23 = (ulong *****)apppuStack_1f8;
    FUN_10012dd4c(apppuStack_1f8,&UNK_10f7454c1,&UNK_10f74542c,0x255);
    pppppuVar12 = (ulong *****)0x0;
    FUN_10012defc(appppuStack_180,apppuStack_1f8,0,0);
    if ((bRam000000011336f9a8 & 0x19) != 0) {
      ppppuStack_1d8 = (ulong ****)unaff_x23;
      func_0x000107c35cb0(&UNK_10f74523a,&ppppuStack_1d8);
    }
    pppppuVar11 = (ulong *****)&pppuStack_290;
    func_0x000107c60fe4();
    param_2 = appppuStack_180;
    pppppuVar7 = appppuStack_180;
    func_0x0001001331dc();
    pppppuVar17 = (ulong *****)ppppuStack_230;
    if ((long)ppppuStack_230 < 1 || iVar5 != 0) {
      pppppuVar17 = (ulong *****)0xfff;
    }
    if (pppppuVar10 <= pppppuVar17) {
      pppppuVar17 = pppppuVar10;
    }
    appppuStack_180[0] = (ulong ****)0x0;
    appppuStack_180[1] = (ulong ****)0x0;
    uStack_170 = (ulong ****)0x0;
    pppppuVar14 = (ulong *****)((long)pppppuVar17 + 1);
    if ((ulong *****)0xfffffffffffffffe < pppppuVar17) {
LAB_1001697e8:
      pppppuVar11 = (ulong *****)0x1;
      pppppuVar7 = param_2;
      pppppuVar12 = pppppuVar14;
      func_0x000107c60fcc();
      pppppuVar17 = param_2;
      unaff_x22 = pppppuVar14;
      param_2 = (ulong *****)0x0;
      while (param_1 = param_2, pppppuVar7 != (ulong *****)0x0) {
        if ((ulong *****)((long)pppppuVar10 - (long)param_2) < pppppuVar7) {
          pppppuVar18 = (ulong *****)0x0;
          param_2 = pppppuVar17;
          param_1 = (ulong *****)ppppuStack_2a0;
          pppppuVar6 = (ulong *****)appppuStack_180[0];
          pppppuVar17 = (ulong *****)appppuStack_180[1];
          ppppuVar1 = uStack_170;
          goto joined_r0x000100169b60;
        }
        param_1 = (ulong *****)((long)pppppuVar7 + (long)param_2);
        pppppuVar7 = pppppuVar6;
        func_0x000107c60fb4();
        pppppuVar17 = param_2;
        if ((int)pppppuVar7 != 0) break;
        pppppuVar14 = (ulong *****)0x10000;
        if (param_2 != (ulong *****)0x0) {
          pppppuVar14 = unaff_x22;
        }
        pppppuVar17 = (ulong *****)((long)param_1 + (long)pppppuVar14);
        pppppuVar13 = (ulong *****)(long)uStack_170._7_1_;
        pppppuVar8 = (ulong *****)appppuStack_180[0];
        if ((long)pppppuVar13 < 0) {
          unaff_x23 = (ulong *****)appppuStack_180[1];
          pppppuVar13 = pppppuVar17;
          if (appppuStack_180[1] < pppppuVar17) {
            param_2 = (ulong *****)(((ulong)uStack_170 & 0x7fffffffffffffff) - 1);
            uVar16 = (uint)((ulong)uStack_170 >> 0x3f);
            unaff_x24 = (ulong *****)((long)pppppuVar17 - (long)appppuStack_180[1]);
            if ((ulong *****)((long)param_2 - (long)appppuStack_180[1]) < unaff_x24)
            goto LAB_1001698a8;
LAB_1001699a8:
            if (uVar16 == 0) {
              pppppuVar8 = appppuStack_180;
            }
            func_0x000107c60ee4((undefined1 *)((long)pppppuVar8 + (long)unaff_x23),unaff_x24);
            goto LAB_1001699cc;
          }
        }
        else if (pppppuVar13 < pppppuVar17) {
          uVar16 = 0;
          param_2 = (ulong *****)0x16;
          unaff_x24 = (ulong *****)((long)pppppuVar17 - (long)pppppuVar13);
          unaff_x23 = pppppuVar13;
          if (unaff_x24 <= (ulong *****)(0x16 - (long)pppppuVar13)) goto LAB_1001699a8;
LAB_1001698a8:
          if ((undefined1 *)(0x7ffffffffffffff7 - (long)param_2) <
              (undefined1 *)(((long)unaff_x24 - (long)param_2) + (long)unaff_x23))
          goto LAB_100169c14;
          ppppuStack_298 = appppuStack_180[0];
          if (-1 < (long)uStack_170) {
            ppppuStack_298 = (ulong ****)appppuStack_180;
          }
          pppppuVar12 = pppppuVar17;
          if (pppppuVar17 <= (ulong *****)((long)param_2 * 2)) {
            pppppuVar12 = (ulong *****)((long)param_2 * 2);
          }
          pppppuVar11 = (ulong *****)0x19;
          if (((ulong)pppppuVar12 | 7) != 0x17) {
            pppppuVar11 = (ulong *****)(((ulong)pppppuVar12 | 7) + 1);
          }
          pppppuVar7 = (ulong *****)0x17;
          if ((ulong *****)0x16 < pppppuVar12) {
            pppppuVar7 = pppppuVar11;
          }
          pppppuVar12 = (ulong *****)0x7ffffffffffffff7;
          if (param_2 < (ulong *****)0x3ffffffffffffff3) {
            pppppuVar12 = pppppuVar7;
          }
          pppppuVar8 = pppppuVar12;
          func_0x000107c60e20();
          if (unaff_x23 != (ulong *****)0x0) {
            func_0x000107c610b8(pppppuVar8,ppppuStack_298,unaff_x23);
          }
          if (param_2 != (ulong *****)0x16) {
            func_0x000107c60e14(ppppuStack_298);
          }
          uStack_170 = (ulong ****)((ulong)pppppuVar12 | 0x8000000000000000);
          appppuStack_180[0] = (ulong ****)pppppuVar8;
          appppuStack_180[1] = (ulong ****)unaff_x23;
          func_0x000107c60ee4((undefined1 *)((long)pppppuVar8 + (long)unaff_x23),unaff_x24);
LAB_1001699cc:
          uStack_170 = (ulong ****)
                       (CONCAT17((char)pppppuVar17,(undefined7)uStack_170) & 0x7fffffffffffffff);
          pppppuVar13 = (ulong *****)appppuStack_180[1];
        }
        else {
          uStack_170 = (ulong ****)CONCAT17((char)pppppuVar17,(undefined7)uStack_170);
          pppppuVar8 = appppuStack_180;
          pppppuVar13 = (ulong *****)appppuStack_180[1];
        }
        appppuStack_180[1] = (ulong ****)pppppuVar13;
        *(undefined1 *)((long)pppppuVar8 + (long)pppppuVar17) = 0;
        pppppuVar7 = (ulong *****)((long)appppuStack_180 + (long)param_1);
        pppppuVar11 = (ulong *****)0x1;
        pppppuVar12 = pppppuVar14;
        func_0x000107c60fcc();
        pppppuVar17 = param_2;
        unaff_x22 = pppppuVar14;
        param_2 = param_1;
      }
      func_0x000107c60fb8();
      pppppuVar18 = (ulong *****)(ulong)((int)pppppuVar6 == 0);
      pppppuVar7 = pppppuVar6;
      pppppuVar10 = param_1;
      param_2 = pppppuVar17;
      param_1 = (ulong *****)ppppuStack_2a0;
      pppppuVar6 = (ulong *****)appppuStack_180[0];
      pppppuVar17 = (ulong *****)appppuStack_180[1];
      ppppuVar1 = uStack_170;
joined_r0x000100169b60:
      ppppuStack_2a0 = (ulong ****)param_1;
      appppuStack_180[0] = (ulong ****)pppppuVar6;
      appppuStack_180[1] = (ulong ****)pppppuVar17;
      uStack_170 = ppppuVar1;
      if (param_1 != (ulong *****)0x0) {
        appppuStack_180[0] = *param_1;
        uStack_170 = param_1[2];
        appppuStack_180[1] = param_1[1];
        param_1[2] = ppppuVar1;
        param_1[1] = (ulong ****)pppppuVar17;
        *param_1 = (ulong ****)pppppuVar6;
        pppppuVar14 = (ulong *****)(long)*(char *)((long)param_1 + 0x17);
        if ((long)pppppuVar14 < 0) {
          pppppuVar14 = (ulong *****)param_1[1];
          if (pppppuVar14 < pppppuVar10) {
            param_2 = (ulong *****)(((ulong)param_1[2] & 0x7fffffffffffffff) - 1);
            uVar16 = (uint)((ulong)param_1[2] >> 0x3f);
            unaff_x23 = (ulong *****)((long)pppppuVar10 - (long)pppppuVar14);
            if ((ulong *****)((long)param_2 - (long)pppppuVar14) < unaff_x23) goto LAB_100169a4c;
LAB_100169b20:
            param_2 = param_1;
            if (uVar16 != 0) goto LAB_100169b28;
            goto LAB_100169b2c;
          }
          param_2 = (ulong *****)*param_1;
LAB_100169bd0:
          param_1[1] = (ulong ****)pppppuVar10;
          *(undefined1 *)((long)param_2 + (long)pppppuVar10) = 0;
          unaff_x22 = pppppuVar14;
        }
        else if (pppppuVar14 < pppppuVar10) {
          uVar16 = 0;
          param_2 = (ulong *****)0x16;
          unaff_x23 = (ulong *****)((long)pppppuVar10 - (long)pppppuVar14);
          if (unaff_x23 <= (ulong *****)(0x16 - (long)pppppuVar14)) goto LAB_100169b20;
LAB_100169a4c:
          if ((undefined1 *)(0x7ffffffffffffff7 - (long)param_2) <
              (undefined1 *)(((long)unaff_x23 - (long)param_2) + (long)pppppuVar14))
          goto LAB_100169c14;
          unaff_x24 = param_1;
          if (*(char *)((long)param_1 + 0x17) < '\0') {
            unaff_x24 = (ulong *****)*param_1;
          }
          pppppuVar6 = pppppuVar10;
          if (pppppuVar10 <= (ulong *****)((long)param_2 * 2)) {
            pppppuVar6 = (ulong *****)((long)param_2 * 2);
          }
          ppppuVar1 = (ulong ****)0x19;
          if (((ulong)pppppuVar6 | 7) != 0x17) {
            ppppuVar1 = (ulong ****)(((ulong)pppppuVar6 | 7) + 1);
          }
          ppppuVar9 = (ulong ****)0x17;
          if ((ulong *****)0x16 < pppppuVar6) {
            ppppuVar9 = ppppuVar1;
          }
          ppppuVar1 = (ulong ****)0x7ffffffffffffff7;
          if (param_2 < (ulong *****)0x3ffffffffffffff3) {
            ppppuVar1 = ppppuVar9;
          }
          ppppuVar9 = ppppuVar1;
          func_0x000107c60e20();
          if (pppppuVar14 != (ulong *****)0x0) {
            pppppuVar12 = pppppuVar14;
            func_0x000107c610b8(ppppuVar9,unaff_x24);
          }
          if (param_2 != (ulong *****)0x16) {
            func_0x000107c60e14(unaff_x24);
          }
          param_1[1] = (ulong ****)pppppuVar14;
          param_1[2] = (ulong ****)((ulong)ppppuVar1 | 0x8000000000000000);
          *param_1 = ppppuVar9;
LAB_100169b28:
          param_2 = (ulong *****)*param_1;
LAB_100169b2c:
          pppppuVar11 = unaff_x23;
          func_0x000107c60ee4((undefined1 *)((long)param_2 + (long)pppppuVar14));
          if (*(char *)((long)param_1 + 0x17) < '\0') goto LAB_100169bd0;
          *(byte *)((long)param_1 + 0x17) = (byte)pppppuVar10 & 0x7f;
          *(undefined1 *)((long)param_2 + (long)pppppuVar10) = 0;
          unaff_x22 = pppppuVar14;
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)pppppuVar10;
          *(undefined1 *)((long)param_1 + (long)pppppuVar10) = 0;
        }
      }
      pppppuVar6 = (ulong *****)&pppuStack_1d0;
      func_0x0001001331dc();
      pppppuVar10 = pppppuVar11;
      goto LAB_100169b7c;
    }
    if (pppppuVar14 < (ulong *****)0x17) {
      unaff_x23 = appppuStack_180;
      func_0x000107c60ee4(unaff_x23,pppppuVar14);
LAB_1001697dc:
      uStack_170 = (ulong ****)
                   (CONCAT17((char)pppppuVar14,(undefined7)uStack_170) & 0x7fffffffffffffff);
      *(undefined1 *)((long)unaff_x23 + (long)pppppuVar14) = 0;
      goto LAB_1001697e8;
    }
    if (0x800000000000001d < (long)pppppuVar17 + 0x8000000000000009U) {
      pppppuVar12 = pppppuVar14;
      if (pppppuVar14 < (ulong *****)0x2d) {
        pppppuVar12 = (ulong *****)0x2c;
      }
      unaff_x24 = (ulong *****)(((ulong)pppppuVar12 | 7) + 1);
      unaff_x23 = unaff_x24;
      func_0x000107c60e20();
      uStack_170 = (ulong ****)((ulong)unaff_x24 | 0x8000000000000000);
      appppuStack_180[1] = (ulong ****)0x0;
      appppuStack_180[0] = (ulong ****)unaff_x23;
      func_0x000107c60ee4();
      goto LAB_1001697dc;
    }
LAB_100169c14:
    func_0x000104c4f6b8();
  }
  else {
    if (-1 < *(char *)((long)pppppuVar12 + 0x17)) {
      *(undefined1 *)pppppuVar12 = 0;
      *(undefined1 *)((long)pppppuVar12 + 0x17) = 0;
      goto LAB_100169604;
    }
    *(undefined1 *)*pppppuVar12 = 0;
    pppppuVar12[1] = (ulong ****)0x0;
    if (pppppuVar6 != (ulong *****)0x0) goto LAB_10016960c;
LAB_100169b7c:
    pppppuVar7 = pppppuVar6;
    pppppuVar11 = pppppuVar10;
    pppppuVar14 = unaff_x22;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
      return pppppuVar18;
    }
  }
  func_0x000107c60e78();
  pcStack_2a8 = FUN_100169c1c;
  uStack_2f0 = 0xaaaaaaaaaaaaaaaa;
  ppppuStack_308 = (ulong ****)0xaaaaaaaaaaaaaaaa;
  lStack_310 = -0x5555555555555556;
  pppuStack_2f8 = (ulong ***)0xaaaaaaaaaaaaaaaa;
  pppuStack_300 = (ulong ***)0xaaaaaaaaaaaaaaaa;
  ppppuStack_328 = (ulong ****)0xaaaaaaaaaaaaaaaa;
  uStack_330 = 0xaaaaaaaaaaaaaaaa;
  ppppuStack_318 = (ulong ****)0xaaaaaaaaaaaaaaaa;
  puStack_320 = (ulong *)0xaaaaaaaaaaaaaaaa;
  pppppuVar10 = (ulong *****)pppppuVar7[1];
  puVar19 = &uStack_330;
  ppppuStack_2e0 = (ulong ****)unaff_x24;
  ppppuStack_2d8 = (ulong ****)unaff_x23;
  ppppuStack_2d0 = (ulong ****)pppppuVar14;
  ppppuStack_2c8 = (ulong ****)pppppuVar18;
  ppppuStack_2c0 = (ulong ****)param_1;
  ppppuStack_2b8 = (ulong ****)param_2;
  ppuStack_2b0 = &puStack_d0;
  FUN_100134130(&uStack_330,pppppuVar10,pppppuVar7[2],*(undefined4 *)(pppppuVar7 + 3));
  lVar4 = lStack_310;
  ppppuVar1 = ppppuStack_328;
  if ((uStack_330 & 1) == 0) {
    if (pppppuVar11 != (ulong *****)0x0) {
      *(undefined4 *)pppppuVar11 = 1;
    }
    if (pppppuVar12 != (ulong *****)0x0) {
      if (*(char *)((long)pppppuVar12 + 0x17) < '\0') {
        pppppuVar10 = (ulong *****)*pppppuVar12;
        func_0x000107c60e14(pppppuVar10);
      }
      pppppuVar12[1] = (ulong ****)pppuStack_300;
      *pppppuVar12 = ppppuStack_308;
      pppppuVar12[2] = (ulong ****)pppuStack_2f8;
      pppuStack_2f8 = (ulong ***)((ulong)pppuStack_2f8 & 0xffffffffffffff);
      ppppuStack_308 = (ulong ****)((ulong)ppppuStack_308 & 0xffffffffffffff00);
    }
    *extraout_x8 = 0;
    pppppuVar12 = (ulong *****)ppppuStack_308;
    goto joined_r0x000100169d24;
  }
  if (lStack_310 < 4) {
    if (lStack_310 == 1) {
      uVar2 = ppppuStack_328._0_1_;
      ppppuStack_350 = (ulong ****)CONCAT71(ppppuStack_350._1_7_,ppppuStack_328._0_1_);
      lStack_338 = 1;
      puVar15 = (undefined8 *)0x20;
      func_0x000107c60e20();
      *(undefined1 *)puVar15 = uVar2;
    }
    else if (lStack_310 == 2) {
      uVar3 = ppppuStack_328._0_4_;
      ppppuStack_350 = (ulong ****)CONCAT44(ppppuStack_350._4_4_,ppppuStack_328._0_4_);
      lStack_338 = 2;
      puVar15 = (undefined8 *)0x20;
      func_0x000107c60e20();
      *(undefined4 *)puVar15 = uVar3;
    }
    else {
      if (lStack_310 != 3) goto LAB_100169ca8;
      ppppuStack_350 = ppppuStack_328;
      lStack_338 = 3;
      puVar15 = (undefined8 *)0x20;
      func_0x000107c60e20();
      *puVar15 = ppppuVar1;
    }
  }
  else {
    puVar15 = (undefined8 *)((ulong)puVar19 | 8);
    if (lStack_310 - 5U < 3) {
      ppppuStack_350 = ppppuStack_328;
      puStack_348 = puStack_320;
      ppppuStack_340 = ppppuStack_318;
      puVar15[1] = 0;
      puVar15[2] = 0;
      *puVar15 = 0;
      pppppuVar11 = (ulong *****)ppppuStack_318;
      puVar19 = puStack_320;
      unaff_x23 = (ulong *****)ppppuStack_328;
    }
    else if (lStack_310 == 4) {
      puStack_348 = (ulong *)puVar15[1];
      ppppuStack_350 = (ulong ****)*puVar15;
      ppppuStack_340 = (ulong ****)puVar15[2];
      puVar15[1] = 0;
      puVar15[2] = 0;
      *puVar15 = 0;
      lStack_338 = 4;
      puVar15 = (undefined8 *)0x20;
      func_0x000107c60e20();
      puVar15[1] = puStack_348;
      *puVar15 = ppppuStack_350;
      puVar15[2] = ppppuStack_340;
      ppppuStack_350 = (ulong ****)0x0;
      puStack_348 = (ulong *)0x0;
      ppppuStack_340 = (ulong ****)0x0;
      goto LAB_100169de8;
    }
LAB_100169ca8:
    lStack_338 = lStack_310;
    puVar15 = (undefined8 *)0x20;
    func_0x000107c60e20();
    if (((lVar4 == 7) || (lVar4 == 6)) || (lVar4 == 5)) {
      *puVar15 = unaff_x23;
      puVar15[1] = puVar19;
      puVar15[2] = pppppuVar11;
      puStack_348 = (ulong *)0x0;
      ppppuStack_340 = (ulong ****)0x0;
      ppppuStack_350 = (ulong ****)0x0;
    }
  }
LAB_100169de8:
  puVar15[3] = lVar4;
  *extraout_x8 = puVar15;
  pppppuVar10 = (ulong *****)&pppuStack_2e8;
  pppuStack_2e8 = (ulong ***)&ppppuStack_350;
  FUN_100136360(pppppuVar10,lVar4);
  pppppuVar12 = (ulong *****)ppppuStack_308;
joined_r0x000100169d24:
  ppppuStack_308 = (ulong ****)pppppuVar12;
  if ((long)pppuStack_2f8 < 0) {
    func_0x000107c60e14(pppppuVar12);
    pppppuVar10 = pppppuVar12;
  }
  if ((uStack_330 & 1) != 0) {
    pppuStack_2e8 = (ulong ***)((ulong)&uStack_330 | 8);
    pppppuVar12 = (ulong *****)&pppuStack_2e8;
    FUN_100136360(pppppuVar12,lStack_310);
    return pppppuVar12;
  }
  return pppppuVar10;
}



/* Entry: 1001695b8; end: 100169c1b;  */

/* WARNING: Removing unreachable block (ram,0x000100169be0) */
/* WARNING: Removing unreachable block (ram,0x000100169974) */
/* WARNING: Removing unreachable block (ram,0x0001001697a8) */
/* WARNING: Removing unreachable block (ram,0x000100169b54) */
/* WARNING: Removing unreachable block (ram,0x000100169bc8) */
/* WARNING: Removing unreachable block (ram,0x000100169b6c) */

ulong ***** FUN_1001695b8(ulong *****param_1,ulong *****param_2,ulong *****param_3)

{
  ulong ****ppppuVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  ulong *****pppppuVar6;
  ulong *****pppppuVar7;
  ulong ****ppppuVar8;
  ulong *****pppppuVar9;
  ulong *****pppppuVar10;
  ulong *****pppppuVar11;
  ulong *****pppppuVar12;
  undefined8 *extraout_x8;
  undefined8 *puVar13;
  uint uVar14;
  ulong *****unaff_x19;
  ulong *****unaff_x20;
  ulong *****pppppuVar15;
  ulong *****unaff_x22;
  ulong *puVar16;
  ulong *****unaff_x23;
  ulong *****unaff_x24;
  ulong ****ppppuStack_290;
  ulong *puStack_288;
  ulong ****ppppuStack_280;
  long lStack_278;
  ulong uStack_270;
  ulong ****ppppuStack_268;
  ulong *puStack_260;
  ulong ****ppppuStack_258;
  long lStack_250;
  ulong ****ppppuStack_248;
  ulong ***pppuStack_240;
  ulong ***pppuStack_238;
  undefined8 uStack_230;
  ulong ***pppuStack_228;
  ulong ****ppppuStack_220;
  ulong ****ppppuStack_218;
  ulong ****ppppuStack_210;
  ulong ****ppppuStack_208;
  ulong ****ppppuStack_200;
  ulong ****ppppuStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  ulong ****ppppuStack_1e0;
  ulong ****ppppuStack_1d8;
  ulong ***pppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong ****ppppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong ***apppuStack_138 [4];
  ulong ****ppppuStack_118;
  ulong ***pppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong ****appppuStack_c0 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar15 = param_1;
  if (param_3 == (ulong *****)0x0) {
LAB_100169604:
    pppppuVar10 = param_3;
    if (param_1 == (ulong *****)0x0) goto LAB_100169b7c;
LAB_10016960c:
    do {
      ppppuStack_1e0 = (ulong ****)pppppuVar10;
      pppppuVar6 = param_1;
      func_0x000107c60fdc(param_1,0,0);
      if ((int)pppppuVar6 != -1) break;
      func_0x000107c60e5c();
      pppppuVar10 = (ulong *****)ppppuStack_1e0;
    } while (*(int *)pppppuVar6 == 4);
    uStack_d8 = 0xaaaaaaaaaaaaaaaa;
    uStack_e0 = 0xaaaaaaaaaaaaaaaa;
    uStack_c8 = 0xaaaaaaaaaaaaaaaa;
    uStack_d0 = 0xaaaaaaaaaaaaaaaa;
    uStack_f8 = 0xaaaaaaaaaaaaaaaa;
    uStack_100 = 0xaaaaaaaaaaaaaaaa;
    uStack_e8 = 0xaaaaaaaaaaaaaaaa;
    uStack_f0 = 0xaaaaaaaaaaaaaaaa;
    uStack_108 = 0xaaaaaaaaaaaaaaaa;
    pppuStack_110 = (ulong ***)0xaaaaaaaaaaaaaaaa;
    FUN_10012dd4c(&pppuStack_1d0,&UNK_10f7440dc,&UNK_10f7440fa,0xcd);
    FUN_10012defc(&pppuStack_110,&pppuStack_1d0,0,0);
    unaff_x20 = (ulong *****)0x19;
    if ((bRam000000011336f9a8 & 0x19) != 0) {
      appppuStack_c0[0] = &pppuStack_1d0;
      func_0x000107c35cb0(&UNK_10f74523a,appppuStack_c0);
    }
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    ppppuStack_170 = (ulong ****)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    pppuStack_1d0 = (ulong ***)0x0;
    pppppuVar10 = param_1;
    func_0x000107c60fc0();
    iVar5 = (int)pppppuVar10;
    uStack_88 = 0xaaaaaaaaaaaaaaaa;
    uStack_90 = 0xaaaaaaaaaaaaaaaa;
    uStack_78 = 0xaaaaaaaaaaaaaaaa;
    uStack_80 = 0xaaaaaaaaaaaaaaaa;
    uStack_a8 = 0xaaaaaaaaaaaaaaaa;
    uStack_b0 = (ulong ****)0xaaaaaaaaaaaaaaaa;
    uStack_98 = 0xaaaaaaaaaaaaaaaa;
    uStack_a0 = 0xaaaaaaaaaaaaaaaa;
    appppuStack_c0[1] = (ulong ****)0xaaaaaaaaaaaaaaaa;
    appppuStack_c0[0] = (ulong ****)0xaaaaaaaaaaaaaaaa;
    unaff_x23 = (ulong *****)apppuStack_138;
    FUN_10012dd4c(apppuStack_138,&UNK_10f7454c1,&UNK_10f74542c,0x255);
    param_3 = (ulong *****)0x0;
    FUN_10012defc(appppuStack_c0,apppuStack_138,0,0);
    if ((bRam000000011336f9a8 & 0x19) != 0) {
      ppppuStack_118 = (ulong ****)unaff_x23;
      func_0x000107c35cb0(&UNK_10f74523a,&ppppuStack_118);
    }
    pppppuVar10 = (ulong *****)&pppuStack_1d0;
    func_0x000107c60fe4();
    unaff_x19 = appppuStack_c0;
    pppppuVar6 = appppuStack_c0;
    func_0x0001001331dc();
    pppppuVar9 = (ulong *****)ppppuStack_170;
    if ((long)ppppuStack_170 < 1 || iVar5 != 0) {
      pppppuVar9 = (ulong *****)0xfff;
    }
    if (param_2 <= pppppuVar9) {
      pppppuVar9 = param_2;
    }
    appppuStack_c0[0] = (ulong ****)0x0;
    appppuStack_c0[1] = (ulong ****)0x0;
    uStack_b0 = (ulong ****)0x0;
    pppppuVar12 = (ulong *****)((long)pppppuVar9 + 1);
    if ((ulong *****)0xfffffffffffffffe < pppppuVar9) {
LAB_1001697e8:
      pppppuVar10 = (ulong *****)0x1;
      pppppuVar6 = unaff_x19;
      param_3 = pppppuVar12;
      func_0x000107c60fcc();
      pppppuVar9 = unaff_x19;
      unaff_x22 = pppppuVar12;
      unaff_x19 = (ulong *****)0x0;
      while (unaff_x20 = unaff_x19, pppppuVar6 != (ulong *****)0x0) {
        if ((ulong *****)((long)param_2 - (long)unaff_x19) < pppppuVar6) {
          pppppuVar15 = (ulong *****)0x0;
          unaff_x19 = pppppuVar9;
          unaff_x20 = (ulong *****)ppppuStack_1e0;
          pppppuVar9 = (ulong *****)appppuStack_c0[0];
          pppppuVar12 = (ulong *****)appppuStack_c0[1];
          ppppuVar1 = uStack_b0;
          goto joined_r0x000100169b60;
        }
        unaff_x20 = (ulong *****)((long)pppppuVar6 + (long)unaff_x19);
        pppppuVar6 = param_1;
        func_0x000107c60fb4();
        pppppuVar9 = unaff_x19;
        if ((int)pppppuVar6 != 0) break;
        pppppuVar12 = (ulong *****)0x10000;
        if (unaff_x19 != (ulong *****)0x0) {
          pppppuVar12 = unaff_x22;
        }
        pppppuVar9 = (ulong *****)((long)unaff_x20 + (long)pppppuVar12);
        pppppuVar11 = (ulong *****)(long)uStack_b0._7_1_;
        pppppuVar7 = (ulong *****)appppuStack_c0[0];
        if ((long)pppppuVar11 < 0) {
          unaff_x23 = (ulong *****)appppuStack_c0[1];
          pppppuVar11 = pppppuVar9;
          if (appppuStack_c0[1] < pppppuVar9) {
            unaff_x19 = (ulong *****)(((ulong)uStack_b0 & 0x7fffffffffffffff) - 1);
            uVar14 = (uint)((ulong)uStack_b0 >> 0x3f);
            unaff_x24 = (ulong *****)((long)pppppuVar9 - (long)appppuStack_c0[1]);
            if ((ulong *****)((long)unaff_x19 - (long)appppuStack_c0[1]) < unaff_x24)
            goto LAB_1001698a8;
LAB_1001699a8:
            if (uVar14 == 0) {
              pppppuVar7 = appppuStack_c0;
            }
            func_0x000107c60ee4((undefined1 *)((long)pppppuVar7 + (long)unaff_x23),unaff_x24);
            goto LAB_1001699cc;
          }
        }
        else if (pppppuVar11 < pppppuVar9) {
          uVar14 = 0;
          unaff_x19 = (ulong *****)0x16;
          unaff_x24 = (ulong *****)((long)pppppuVar9 - (long)pppppuVar11);
          unaff_x23 = pppppuVar11;
          if (unaff_x24 <= (ulong *****)(0x16 - (long)pppppuVar11)) goto LAB_1001699a8;
LAB_1001698a8:
          if ((undefined1 *)(0x7ffffffffffffff7 - (long)unaff_x19) <
              (undefined1 *)(((long)unaff_x24 - (long)unaff_x19) + (long)unaff_x23))
          goto LAB_100169c14;
          ppppuStack_1d8 = appppuStack_c0[0];
          if (-1 < (long)uStack_b0) {
            ppppuStack_1d8 = (ulong ****)appppuStack_c0;
          }
          pppppuVar10 = pppppuVar9;
          if (pppppuVar9 <= (ulong *****)((long)unaff_x19 * 2)) {
            pppppuVar10 = (ulong *****)((long)unaff_x19 * 2);
          }
          pppppuVar6 = (ulong *****)0x19;
          if (((ulong)pppppuVar10 | 7) != 0x17) {
            pppppuVar6 = (ulong *****)(((ulong)pppppuVar10 | 7) + 1);
          }
          pppppuVar7 = (ulong *****)0x17;
          if ((ulong *****)0x16 < pppppuVar10) {
            pppppuVar7 = pppppuVar6;
          }
          pppppuVar10 = (ulong *****)0x7ffffffffffffff7;
          if (unaff_x19 < (ulong *****)0x3ffffffffffffff3) {
            pppppuVar10 = pppppuVar7;
          }
          pppppuVar7 = pppppuVar10;
          func_0x000107c60e20();
          if (unaff_x23 != (ulong *****)0x0) {
            func_0x000107c610b8(pppppuVar7,ppppuStack_1d8,unaff_x23);
          }
          if (unaff_x19 != (ulong *****)0x16) {
            func_0x000107c60e14(ppppuStack_1d8);
          }
          uStack_b0 = (ulong ****)((ulong)pppppuVar10 | 0x8000000000000000);
          appppuStack_c0[0] = (ulong ****)pppppuVar7;
          appppuStack_c0[1] = (ulong ****)unaff_x23;
          func_0x000107c60ee4((undefined1 *)((long)pppppuVar7 + (long)unaff_x23),unaff_x24);
LAB_1001699cc:
          uStack_b0 = (ulong ****)
                      (CONCAT17((char)pppppuVar9,(undefined7)uStack_b0) & 0x7fffffffffffffff);
          pppppuVar11 = (ulong *****)appppuStack_c0[1];
        }
        else {
          uStack_b0 = (ulong ****)CONCAT17((char)pppppuVar9,(undefined7)uStack_b0);
          pppppuVar7 = appppuStack_c0;
          pppppuVar11 = (ulong *****)appppuStack_c0[1];
        }
        appppuStack_c0[1] = (ulong ****)pppppuVar11;
        *(undefined1 *)((long)pppppuVar7 + (long)pppppuVar9) = 0;
        pppppuVar6 = (ulong *****)((long)appppuStack_c0 + (long)unaff_x20);
        pppppuVar10 = (ulong *****)0x1;
        param_3 = pppppuVar12;
        func_0x000107c60fcc();
        pppppuVar9 = unaff_x19;
        unaff_x22 = pppppuVar12;
        unaff_x19 = unaff_x20;
      }
      func_0x000107c60fb8();
      pppppuVar15 = (ulong *****)(ulong)((int)param_1 == 0);
      pppppuVar6 = param_1;
      unaff_x19 = pppppuVar9;
      param_2 = unaff_x20;
      unaff_x20 = (ulong *****)ppppuStack_1e0;
      pppppuVar9 = (ulong *****)appppuStack_c0[0];
      pppppuVar12 = (ulong *****)appppuStack_c0[1];
      ppppuVar1 = uStack_b0;
joined_r0x000100169b60:
      ppppuStack_1e0 = (ulong ****)unaff_x20;
      appppuStack_c0[0] = (ulong ****)pppppuVar9;
      appppuStack_c0[1] = (ulong ****)pppppuVar12;
      uStack_b0 = ppppuVar1;
      if (unaff_x20 != (ulong *****)0x0) {
        appppuStack_c0[0] = *unaff_x20;
        uStack_b0 = unaff_x20[2];
        appppuStack_c0[1] = unaff_x20[1];
        unaff_x20[2] = ppppuVar1;
        unaff_x20[1] = (ulong ****)pppppuVar12;
        *unaff_x20 = (ulong ****)pppppuVar9;
        pppppuVar12 = (ulong *****)(long)*(char *)((long)unaff_x20 + 0x17);
        if ((long)pppppuVar12 < 0) {
          pppppuVar12 = (ulong *****)unaff_x20[1];
          if (pppppuVar12 < param_2) {
            unaff_x19 = (ulong *****)(((ulong)unaff_x20[2] & 0x7fffffffffffffff) - 1);
            uVar14 = (uint)((ulong)unaff_x20[2] >> 0x3f);
            unaff_x23 = (ulong *****)((long)param_2 - (long)pppppuVar12);
            if ((ulong *****)((long)unaff_x19 - (long)pppppuVar12) < unaff_x23) goto LAB_100169a4c;
LAB_100169b20:
            unaff_x19 = unaff_x20;
            if (uVar14 != 0) goto LAB_100169b28;
            goto LAB_100169b2c;
          }
          unaff_x19 = (ulong *****)*unaff_x20;
LAB_100169bd0:
          unaff_x20[1] = (ulong ****)param_2;
          *(undefined1 *)((long)unaff_x19 + (long)param_2) = 0;
          unaff_x22 = pppppuVar12;
        }
        else if (pppppuVar12 < param_2) {
          uVar14 = 0;
          unaff_x19 = (ulong *****)0x16;
          unaff_x23 = (ulong *****)((long)param_2 - (long)pppppuVar12);
          if (unaff_x23 <= (ulong *****)(0x16 - (long)pppppuVar12)) goto LAB_100169b20;
LAB_100169a4c:
          if ((undefined1 *)(0x7ffffffffffffff7 - (long)unaff_x19) <
              (undefined1 *)(((long)unaff_x23 - (long)unaff_x19) + (long)pppppuVar12))
          goto LAB_100169c14;
          unaff_x24 = unaff_x20;
          if (*(char *)((long)unaff_x20 + 0x17) < '\0') {
            unaff_x24 = (ulong *****)*unaff_x20;
          }
          pppppuVar10 = param_2;
          if (param_2 <= (ulong *****)((long)unaff_x19 * 2)) {
            pppppuVar10 = (ulong *****)((long)unaff_x19 * 2);
          }
          ppppuVar1 = (ulong ****)0x19;
          if (((ulong)pppppuVar10 | 7) != 0x17) {
            ppppuVar1 = (ulong ****)(((ulong)pppppuVar10 | 7) + 1);
          }
          ppppuVar8 = (ulong ****)0x17;
          if ((ulong *****)0x16 < pppppuVar10) {
            ppppuVar8 = ppppuVar1;
          }
          ppppuVar1 = (ulong ****)0x7ffffffffffffff7;
          if (unaff_x19 < (ulong *****)0x3ffffffffffffff3) {
            ppppuVar1 = ppppuVar8;
          }
          ppppuVar8 = ppppuVar1;
          func_0x000107c60e20();
          if (pppppuVar12 != (ulong *****)0x0) {
            param_3 = pppppuVar12;
            func_0x000107c610b8(ppppuVar8,unaff_x24);
          }
          if (unaff_x19 != (ulong *****)0x16) {
            func_0x000107c60e14(unaff_x24);
          }
          unaff_x20[1] = (ulong ****)pppppuVar12;
          unaff_x20[2] = (ulong ****)((ulong)ppppuVar1 | 0x8000000000000000);
          *unaff_x20 = ppppuVar8;
LAB_100169b28:
          unaff_x19 = (ulong *****)*unaff_x20;
LAB_100169b2c:
          pppppuVar10 = unaff_x23;
          func_0x000107c60ee4((undefined1 *)((long)unaff_x19 + (long)pppppuVar12));
          if (*(char *)((long)unaff_x20 + 0x17) < '\0') goto LAB_100169bd0;
          *(byte *)((long)unaff_x20 + 0x17) = (byte)param_2 & 0x7f;
          *(undefined1 *)((long)unaff_x19 + (long)param_2) = 0;
          unaff_x22 = pppppuVar12;
        }
        else {
          *(byte *)((long)unaff_x20 + 0x17) = (byte)param_2;
          *(undefined1 *)((long)unaff_x20 + (long)param_2) = 0;
        }
      }
      param_1 = (ulong *****)&pppuStack_110;
      func_0x0001001331dc();
      param_2 = pppppuVar10;
      goto LAB_100169b7c;
    }
    if (pppppuVar12 < (ulong *****)0x17) {
      unaff_x23 = appppuStack_c0;
      func_0x000107c60ee4(unaff_x23,pppppuVar12);
LAB_1001697dc:
      uStack_b0 = (ulong ****)
                  (CONCAT17((char)pppppuVar12,(undefined7)uStack_b0) & 0x7fffffffffffffff);
      *(undefined1 *)((long)unaff_x23 + (long)pppppuVar12) = 0;
      goto LAB_1001697e8;
    }
    if ((undefined1 *)0x800000000000001d < (undefined1 *)((long)pppppuVar9 + -0x7ffffffffffffff7)) {
      pppppuVar10 = pppppuVar12;
      if (pppppuVar12 < (ulong *****)0x2d) {
        pppppuVar10 = (ulong *****)0x2c;
      }
      unaff_x24 = (ulong *****)(((ulong)pppppuVar10 | 7) + 1);
      unaff_x23 = unaff_x24;
      func_0x000107c60e20();
      uStack_b0 = (ulong ****)((ulong)unaff_x24 | 0x8000000000000000);
      appppuStack_c0[1] = (ulong ****)0x0;
      appppuStack_c0[0] = (ulong ****)unaff_x23;
      func_0x000107c60ee4();
      goto LAB_1001697dc;
    }
LAB_100169c14:
    func_0x000104c4f6b8();
  }
  else {
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      *(undefined1 *)param_3 = 0;
      *(undefined1 *)((long)param_3 + 0x17) = 0;
      goto LAB_100169604;
    }
    *(undefined1 *)*param_3 = 0;
    param_3[1] = (ulong ****)0x0;
    pppppuVar10 = param_3;
    if (param_1 != (ulong *****)0x0) goto LAB_10016960c;
LAB_100169b7c:
    pppppuVar6 = param_1;
    pppppuVar10 = param_2;
    pppppuVar12 = unaff_x22;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return pppppuVar15;
    }
  }
  func_0x000107c60e78();
  pcStack_1e8 = FUN_100169c1c;
  uStack_230 = 0xaaaaaaaaaaaaaaaa;
  ppppuStack_248 = (ulong ****)0xaaaaaaaaaaaaaaaa;
  lStack_250 = -0x5555555555555556;
  pppuStack_238 = (ulong ***)0xaaaaaaaaaaaaaaaa;
  pppuStack_240 = (ulong ***)0xaaaaaaaaaaaaaaaa;
  ppppuStack_268 = (ulong ****)0xaaaaaaaaaaaaaaaa;
  uStack_270 = 0xaaaaaaaaaaaaaaaa;
  ppppuStack_258 = (ulong ****)0xaaaaaaaaaaaaaaaa;
  puStack_260 = (ulong *)0xaaaaaaaaaaaaaaaa;
  pppppuVar9 = (ulong *****)pppppuVar6[1];
  puVar16 = &uStack_270;
  ppppuStack_220 = (ulong ****)unaff_x24;
  ppppuStack_218 = (ulong ****)unaff_x23;
  ppppuStack_210 = (ulong ****)pppppuVar12;
  ppppuStack_208 = (ulong ****)pppppuVar15;
  ppppuStack_200 = (ulong ****)unaff_x20;
  ppppuStack_1f8 = (ulong ****)unaff_x19;
  puStack_1f0 = &stack0xfffffffffffffff0;
  FUN_100134130(&uStack_270,pppppuVar9,pppppuVar6[2],*(undefined4 *)(pppppuVar6 + 3));
  lVar4 = lStack_250;
  ppppuVar1 = ppppuStack_268;
  if ((uStack_270 & 1) == 0) {
    if (pppppuVar10 != (ulong *****)0x0) {
      *(undefined4 *)pppppuVar10 = 1;
    }
    if (param_3 != (ulong *****)0x0) {
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        pppppuVar9 = (ulong *****)*param_3;
        func_0x000107c60e14(pppppuVar9);
      }
      param_3[1] = (ulong ****)pppuStack_240;
      *param_3 = ppppuStack_248;
      param_3[2] = (ulong ****)pppuStack_238;
      pppuStack_238 = (ulong ***)((ulong)pppuStack_238 & 0xffffffffffffff);
      ppppuStack_248 = (ulong ****)((ulong)ppppuStack_248 & 0xffffffffffffff00);
    }
    *extraout_x8 = 0;
    pppppuVar15 = (ulong *****)ppppuStack_248;
    goto joined_r0x000100169d24;
  }
  if (lStack_250 < 4) {
    if (lStack_250 == 1) {
      uVar2 = ppppuStack_268._0_1_;
      ppppuStack_290 = (ulong ****)CONCAT71(ppppuStack_290._1_7_,ppppuStack_268._0_1_);
      lStack_278 = 1;
      puVar13 = (undefined8 *)0x20;
      func_0x000107c60e20();
      *(undefined1 *)puVar13 = uVar2;
    }
    else if (lStack_250 == 2) {
      uVar3 = ppppuStack_268._0_4_;
      ppppuStack_290 = (ulong ****)CONCAT44(ppppuStack_290._4_4_,ppppuStack_268._0_4_);
      lStack_278 = 2;
      puVar13 = (undefined8 *)0x20;
      func_0x000107c60e20();
      *(undefined4 *)puVar13 = uVar3;
    }
    else {
      if (lStack_250 != 3) goto LAB_100169ca8;
      ppppuStack_290 = ppppuStack_268;
      lStack_278 = 3;
      puVar13 = (undefined8 *)0x20;
      func_0x000107c60e20();
      *puVar13 = ppppuVar1;
    }
  }
  else {
    puVar13 = (undefined8 *)((ulong)puVar16 | 8);
    if (lStack_250 - 5U < 3) {
      ppppuStack_290 = ppppuStack_268;
      puStack_288 = puStack_260;
      ppppuStack_280 = ppppuStack_258;
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      pppppuVar10 = (ulong *****)ppppuStack_258;
      puVar16 = puStack_260;
      unaff_x23 = (ulong *****)ppppuStack_268;
    }
    else if (lStack_250 == 4) {
      puStack_288 = (ulong *)puVar13[1];
      ppppuStack_290 = (ulong ****)*puVar13;
      ppppuStack_280 = (ulong ****)puVar13[2];
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      lStack_278 = 4;
      puVar13 = (undefined8 *)0x20;
      func_0x000107c60e20();
      puVar13[1] = puStack_288;
      *puVar13 = ppppuStack_290;
      puVar13[2] = ppppuStack_280;
      ppppuStack_290 = (ulong ****)0x0;
      puStack_288 = (ulong *)0x0;
      ppppuStack_280 = (ulong ****)0x0;
      goto LAB_100169de8;
    }
LAB_100169ca8:
    lStack_278 = lStack_250;
    puVar13 = (undefined8 *)0x20;
    func_0x000107c60e20();
    if (((lVar4 == 7) || (lVar4 == 6)) || (lVar4 == 5)) {
      *puVar13 = unaff_x23;
      puVar13[1] = puVar16;
      puVar13[2] = pppppuVar10;
      puStack_288 = (ulong *)0x0;
      ppppuStack_280 = (ulong ****)0x0;
      ppppuStack_290 = (ulong ****)0x0;
    }
  }
LAB_100169de8:
  puVar13[3] = lVar4;
  *extraout_x8 = puVar13;
  pppppuVar9 = (ulong *****)&pppuStack_228;
  pppuStack_228 = (ulong ***)&ppppuStack_290;
  FUN_100136360(pppppuVar9,lVar4);
  pppppuVar15 = (ulong *****)ppppuStack_248;
joined_r0x000100169d24:
  ppppuStack_248 = (ulong ****)pppppuVar15;
  if ((long)pppuStack_238 < 0) {
    func_0x000107c60e14(pppppuVar15);
    pppppuVar9 = pppppuVar15;
  }
  if ((uStack_270 & 1) != 0) {
    pppuStack_228 = (ulong ***)((ulong)&uStack_270 | 8);
    pppppuVar15 = (ulong *****)&pppuStack_228;
    FUN_100136360(pppppuVar15,lStack_250);
    return pppppuVar15;
  }
  return pppppuVar9;
}



/* Entry: 100169c1c; end: 100169e63;  */

void FUN_100169c1c(long *param_1,long param_2,undefined4 *param_3,ulong *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 unaff_x23;
  undefined8 uStack_b0;
  ulong *puStack_a8;
  undefined4 *puStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong *puStack_80;
  undefined4 *puStack_78;
  long lStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  uStack_50 = 0xaaaaaaaaaaaaaaaa;
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  lStack_70 = -0x5555555555555556;
  uStack_58 = 0xaaaaaaaaaaaaaaaa;
  uStack_60 = 0xaaaaaaaaaaaaaaaa;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  puStack_78 = (undefined4 *)0xaaaaaaaaaaaaaaaa;
  puStack_80 = (ulong *)0xaaaaaaaaaaaaaaaa;
  puVar6 = &uStack_90;
  FUN_100134130(&uStack_90,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                *(undefined4 *)(param_2 + 0x18));
  lVar4 = lStack_70;
  uVar3 = uStack_88;
  if ((uStack_90 & 1) == 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    if (param_4 != (ulong *)0x0) {
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        func_0x000107c60e14(*param_4);
      }
      param_4[1] = uStack_60;
      *param_4 = uStack_68;
      param_4[2] = uStack_58;
      uStack_58 = uStack_58 & 0xffffffffffffff;
      uStack_68 = uStack_68 & 0xffffffffffffff00;
    }
    *param_1 = 0;
    goto joined_r0x000100169d24;
  }
  if (lStack_70 < 4) {
    if (lStack_70 == 1) {
      uVar1 = (undefined1)uStack_88;
      uStack_b0 = CONCAT71(uStack_b0._1_7_,(undefined1)uStack_88);
      lStack_98 = 1;
      puVar5 = (undefined8 *)0x20;
      func_0x000107c60e20();
      *(undefined1 *)puVar5 = uVar1;
    }
    else if (lStack_70 == 2) {
      uVar2 = (undefined4)uStack_88;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_88);
      lStack_98 = 2;
      puVar5 = (undefined8 *)0x20;
      func_0x000107c60e20();
      *(undefined4 *)puVar5 = uVar2;
    }
    else {
      if (lStack_70 != 3) goto LAB_100169ca8;
      uStack_b0 = uStack_88;
      lStack_98 = 3;
      puVar5 = (undefined8 *)0x20;
      func_0x000107c60e20();
      *puVar5 = uVar3;
    }
  }
  else {
    puVar5 = (undefined8 *)((ulong)puVar6 | 8);
    if (lStack_70 - 5U < 3) {
      uStack_b0 = uStack_88;
      puStack_a8 = puStack_80;
      puStack_a0 = puStack_78;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      param_3 = puStack_78;
      puVar6 = puStack_80;
      unaff_x23 = uStack_88;
    }
    else if (lStack_70 == 4) {
      puStack_a8 = (ulong *)puVar5[1];
      uStack_b0 = *puVar5;
      puStack_a0 = (undefined4 *)puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      lStack_98 = 4;
      puVar5 = (undefined8 *)0x20;
      func_0x000107c60e20();
      puVar5[1] = puStack_a8;
      *puVar5 = uStack_b0;
      puVar5[2] = puStack_a0;
      uStack_b0 = 0;
      puStack_a8 = (ulong *)0x0;
      puStack_a0 = (undefined4 *)0x0;
      goto LAB_100169de8;
    }
LAB_100169ca8:
    lStack_98 = lStack_70;
    puVar5 = (undefined8 *)0x20;
    func_0x000107c60e20();
    if (((lVar4 == 7) || (lVar4 == 6)) || (lVar4 == 5)) {
      *puVar5 = unaff_x23;
      puVar5[1] = puVar6;
      puVar5[2] = param_3;
      puStack_a8 = (ulong *)0x0;
      puStack_a0 = (undefined4 *)0x0;
      uStack_b0 = 0;
    }
  }
LAB_100169de8:
  puVar5[3] = lVar4;
  *param_1 = (long)puVar5;
  puStack_48 = (undefined1 *)&uStack_b0;
  FUN_100136360(&puStack_48,lVar4);
joined_r0x000100169d24:
  if ((long)uStack_58 < 0) {
    func_0x000107c60e14(uStack_68);
  }
  if ((uStack_90 & 1) == 0) {
    return;
  }
  puStack_48 = (undefined1 *)((ulong)&uStack_90 | 8);
  FUN_100136360(&puStack_48,lStack_70);
  return;
}



/* Entry: 100169e64; end: 10016a1ff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100169e64(undefined1 *param_1,byte *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  byte *pbVar5;
  undefined8 *******pppppppuVar6;
  int iVar7;
  long lVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined8 *******pppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  undefined8 ******ppppppuStack_90;
  undefined8 *******pppppppuStack_80;
  undefined8 *******pppppppuStack_78;
  undefined8 *******pppppppuStack_70;
  undefined8 ******ppppppuStack_68;
  
  iVar1 = *(int *)(param_2 + 0x20);
  iVar7 = iVar1;
  if ((long)iVar1 + 1U <= *(ulong *)(param_2 + 0x18)) {
    iVar7 = iVar1 + 1;
    *(int *)(param_2 + 0x20) = iVar7;
    if (*(char *)(*(long *)(param_2 + 0x10) + (long)iVar1) == '[') {
      lVar8 = *(long *)(param_2 + 0x28);
      *(ulong *)(param_2 + 0x28) = lVar8 + 1U;
      if (lVar8 + 1U < *(ulong *)(param_2 + 8)) {
        pppppppuStack_80 = (undefined8 *******)0x0;
        pppppppuStack_78 = (undefined8 *******)0x0;
        pppppppuStack_70 = (undefined8 *******)0x0;
        pbVar5 = param_2;
        FUN_1001342e0();
        uVar9 = *param_1;
        do {
          pppppppuVar4 = pppppppuStack_70;
          pppppppuVar3 = pppppppuStack_78;
          pppppppuVar6 = pppppppuStack_80;
          if ((int)pbVar5 == 3) {
            if ((long)*(int *)(param_2 + 0x20) + 1U <= *(ulong *)(param_2 + 0x18)) {
              *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
            }
            pppppppuStack_78 = (undefined8 *******)0x0;
            pppppppuStack_70 = (undefined8 *******)0x0;
            pppppppuStack_80 = (undefined8 *******)0x0;
            *param_1 = 1;
            *(undefined8 ********)(param_1 + 0x10) = pppppppuVar3;
            *(undefined8 ********)(param_1 + 8) = pppppppuVar6;
            ppppppuStack_a0 = (undefined8 ******)0x0;
            ppppppuStack_98 = (undefined8 ******)0x7;
            pppppppuStack_b0 = (undefined8 *******)0x0;
            ppppppuStack_a8 = (undefined8 ******)0x0;
            *(undefined8 ********)(param_1 + 0x18) = pppppppuVar4;
            *(undefined8 *)(param_1 + 0x20) = 7;
            ppppppuStack_68 = &pppppppuStack_b0;
            FUN_100136360(&ppppppuStack_68,7);
            pppppppuVar3 = pppppppuStack_80;
            pppppppuVar6 = pppppppuStack_78;
            goto joined_r0x00010016a184;
          }
          ppppppuStack_90 = (undefined8 ******)0xaaaaaaaaaaaaaaaa;
          ppppppuStack_a8 = (undefined8 ******)0xaaaaaaaaaaaaaaaa;
          pppppppuStack_b0 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
          ppppppuStack_98 = (undefined8 ******)0xaaaaaaaaaaaaaaaa;
          ppppppuStack_a0 = (undefined8 ******)0xaaaaaaaaaaaaaaaa;
          FUN_1001347e4(&pppppppuStack_b0,param_2,pbVar5);
          if (((ulong)pppppppuStack_b0 & 1) == 0) {
LAB_10016a098:
            uVar9 = 0;
            bVar2 = false;
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined8 *)(param_1 + 8) = 0;
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined8 *)(param_1 + 0x18) = 0;
          }
          else {
            if (pppppppuStack_78 < pppppppuStack_70) {
              pppppppuStack_78[3] = (undefined8 ******)0xffffffffffffffff;
              if ((long)ppppppuStack_90 < 4) {
                if (ppppppuStack_90 == (undefined8 ******)0x1) {
                  *(undefined1 *)pppppppuStack_78 = ppppppuStack_a8._0_1_;
                }
                else if (ppppppuStack_90 == (undefined8 ******)0x2) {
                  *(undefined4 *)pppppppuStack_78 = ppppppuStack_a8._0_4_;
                }
                else if (ppppppuStack_90 == (undefined8 ******)0x3) {
                  *pppppppuStack_78 = ppppppuStack_a8;
                }
              }
              else if ((long)ppppppuStack_90 < 6) {
                if (ppppppuStack_90 == (undefined8 ******)0x4) {
                  pppppppuStack_78[2] = ppppppuStack_98;
                  pppppppuStack_78[1] = ppppppuStack_a0;
                  *pppppppuStack_78 = ppppppuStack_a8;
                  ppppppuStack_a0 = (undefined8 ******)0x0;
                  ppppppuStack_98 = (undefined8 ******)0x0;
                  ppppppuStack_a8 = (undefined8 ******)0x0;
                }
                else if (ppppppuStack_90 == (undefined8 ******)0x5) goto LAB_100169fb4;
              }
              else if ((ppppppuStack_90 == (undefined8 ******)0x6) ||
                      (ppppppuStack_90 == (undefined8 ******)0x7)) {
LAB_100169fb4:
                *pppppppuStack_78 = (undefined8 ******)0x0;
                pppppppuStack_78[1] = (undefined8 ******)0x0;
                pppppppuStack_78[2] = (undefined8 ******)0x0;
                *pppppppuStack_78 = ppppppuStack_a8;
                pppppppuStack_78[1] = ppppppuStack_a0;
                pppppppuStack_78[2] = ppppppuStack_98;
                ppppppuStack_a8 = (undefined8 ******)0x0;
                ppppppuStack_a0 = (undefined8 ******)0x0;
                ppppppuStack_98 = (undefined8 ******)0x0;
              }
              pppppppuStack_78[3] = ppppppuStack_90;
              pppppppuVar6 = pppppppuStack_78 + 4;
            }
            else {
              pppppppuVar6 = &pppppppuStack_80;
              FUN_10016a200(pppppppuVar6,&ppppppuStack_a8);
            }
            pbVar5 = param_2;
            pppppppuStack_78 = pppppppuVar6;
            FUN_1001342e0();
            uVar10 = 1;
            bVar2 = true;
            if ((int)pbVar5 != 3) {
              if ((int)pbVar5 == 9) {
                if ((long)*(int *)(param_2 + 0x20) + 1U <= *(ulong *)(param_2 + 0x18)) {
                  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
                }
                pbVar5 = param_2;
                FUN_1001342e0();
                if (((int)pbVar5 != 3) || ((*param_2 & 1) != 0)) goto LAB_10016a0a8;
                uVar10 = 4;
              }
              *(undefined4 *)(param_2 + 0x38) = uVar10;
              *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x30);
              iVar7 = *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x34);
              if (iVar7 < 2) {
                iVar7 = 1;
              }
              *(int *)(param_2 + 0x40) = iVar7;
              goto LAB_10016a098;
            }
          }
LAB_10016a0a8:
          if (((ulong)pppppppuStack_b0 & 1) != 0) {
            ppppppuStack_68 = &ppppppuStack_a8;
            FUN_100136360(&ppppppuStack_68,ppppppuStack_90);
          }
        } while (bVar2);
        *param_1 = uVar9;
        pppppppuVar3 = pppppppuStack_80;
        pppppppuVar6 = pppppppuStack_78;
joined_r0x00010016a184:
        pppppppuStack_80 = pppppppuVar3;
        pppppppuStack_78 = pppppppuVar6;
        if (pppppppuVar3 != (undefined8 *******)0x0) {
          while (pppppppuVar6 != pppppppuVar3) {
            pppppppuStack_b0 = pppppppuVar6 + -4;
            FUN_100136360(&pppppppuStack_b0,pppppppuVar6[-1]);
            pppppppuVar6 = pppppppuVar6 + -4;
          }
          pppppppuStack_78 = pppppppuVar3;
          func_0x000107c60e14(pppppppuStack_80);
        }
        lVar8 = *(long *)(param_2 + 0x28) + -1;
      }
      else {
        param_2[0x38] = 5;
        param_2[0x39] = 0;
        param_2[0x3a] = 0;
        param_2[0x3b] = 0;
        *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x30);
        iVar1 = iVar1 - *(int *)(param_2 + 0x34);
        if (iVar1 < 2) {
          iVar1 = 1;
        }
        *(int *)(param_2 + 0x40) = iVar1;
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      *(long *)(param_2 + 0x28) = lVar8;
      return;
    }
  }
  param_2[0x38] = 3;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x30);
  iVar7 = iVar7 - *(int *)(param_2 + 0x34);
  if (iVar7 < 2) {
    iVar7 = 1;
  }
  *(int *)(param_2 + 0x40) = iVar7;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10016a200; end: 10016a4bb;  */

undefined ** FUN_10016a200(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lStack_48;
  
  puVar16 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar16 >> 5) + 1;
  if (uVar1 >> 0x3b != 0) {
    func_0x000107c2cb00();
LAB_10016a4b8:
    func_0x000107c35c58();
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c4c12c();
    func_0x000107c61180();
    func_0x000107c4539c();
    func_0x000107c61180();
    func_0x000107c4d9c0();
    func_0x000107c61180();
    FUN_10016a534();
    func_0x00010016a53c();
    ppuVar10 = &PTR____CFConstantStringClassReference_110db54d8;
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar10 = ppuVar9;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
    return ppuVar10;
  }
  uVar11 = param_1[2] - *param_1;
  uVar14 = (long)uVar11 >> 4;
  if (uVar14 <= uVar1) {
    uVar14 = uVar1;
  }
  if (0x7fffffffffffffdf < uVar11) {
    uVar14 = 0x7ffffffffffffff;
  }
  if (uVar14 == 0) {
    lVar8 = 0;
    puVar16[3] = 0xffffffffffffffff;
    lVar13 = param_2[3];
  }
  else {
    if (uVar14 >> 0x3b != 0) goto LAB_10016a4b8;
    lVar8 = uVar14 << 5;
    func_0x000107c60e20();
    puVar16 = (undefined8 *)(lVar8 + (long)puVar16);
    puVar16[3] = 0xffffffffffffffff;
    lVar13 = param_2[3];
  }
  if (lVar13 < 4) {
    if (lVar13 == 1) {
      *(undefined1 *)puVar16 = *(undefined1 *)param_2;
    }
    else if (lVar13 == 2) {
      *(undefined4 *)puVar16 = *(undefined4 *)param_2;
    }
    else if (lVar13 == 3) {
      *puVar16 = *param_2;
    }
    goto LAB_10016a350;
  }
  if (lVar13 < 6) {
    if (lVar13 == 4) {
      uVar18 = param_2[1];
      uVar17 = *param_2;
      puVar16[2] = param_2[2];
      puVar16[1] = uVar18;
      *puVar16 = uVar17;
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      goto LAB_10016a350;
    }
    if (lVar13 != 5) goto LAB_10016a350;
  }
  else if ((lVar13 != 6) && (lVar13 != 7)) goto LAB_10016a350;
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = *param_2;
  puVar16[1] = param_2[1];
  puVar16[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
LAB_10016a350:
  puVar16[3] = param_2[3];
  lVar13 = *param_1;
  lVar7 = param_1[1];
  lVar2 = (long)puVar16 + (lVar13 - lVar7);
  if (lVar7 != lVar13) {
    lVar12 = 0;
    do {
      puVar5 = (undefined8 *)(lVar13 + lVar12);
      puVar6 = (undefined8 *)(lVar2 + lVar12);
      puVar6[3] = 0xffffffffffffffff;
      lVar15 = puVar5[3];
      if (lVar15 < 4) {
        if (lVar15 == 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        }
        else if (lVar15 == 2) {
          *(undefined4 *)puVar6 = *(undefined4 *)puVar5;
        }
        else if (lVar15 == 3) {
          *puVar6 = *puVar5;
        }
      }
      else if (lVar15 < 6) {
        if (lVar15 == 4) {
          uVar18 = puVar5[1];
          uVar17 = *puVar5;
          puVar6[2] = puVar5[2];
          puVar6[1] = uVar18;
          *puVar6 = uVar17;
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
        }
        else if (lVar15 == 5) goto LAB_10016a390;
      }
      else if ((lVar15 == 6) || (lVar15 == 7)) {
LAB_10016a390:
        puVar3 = (undefined8 *)(lVar2 + lVar12);
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar4 = (undefined8 *)(lVar13 + lVar12);
        *puVar3 = *puVar4;
        puVar3[1] = puVar4[1];
        puVar3[2] = puVar4[2];
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
      }
      puVar6[3] = puVar5[3];
      lVar12 = lVar12 + 0x20;
    } while (lVar13 + lVar12 != lVar7);
    do {
      lStack_48 = lVar13;
      FUN_100136360(&lStack_48,*(undefined8 *)(lVar13 + 0x18));
      lVar13 = lVar13 + 0x20;
    } while (lVar13 != lVar7);
    lVar13 = *param_1;
  }
  *param_1 = lVar2;
  param_1[1] = (long)(puVar16 + 4);
  param_1[2] = lVar8 + uVar14 * 0x20;
  if (lVar13 != 0) {
    func_0x000107c60e14(lVar13);
  }
  return (undefined **)(puVar16 + 4);
}



/* Entry: 10016a4bc; end: 10016a533;  */

void FUN_10016a4bc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c4c12c();
  func_0x000107c61180();
  func_0x000107c4539c();
  func_0x000107c61180();
  func_0x000107c4d9c0();
  func_0x000107c61180();
  FUN_10016a534();
  func_0x00010016a53c();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db54d8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10016a534; end: 10016a54b;  */

void FUN_10016a534(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10016a54c; end: 10016a56f;  */

void FUN_10016a54c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10016a570; end: 10016c887;  */

void FUN_10016a570(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000100139d84(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10016c888; end: 10016c993;  */

long * FUN_10016c888(long *param_1,long *param_2,undefined8 *param_3,long *param_4,
                    undefined8 param_5)

{
  uint uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long *plVar3;
  long unaff_x20;
  long *plVar4;
  
  if ((param_2 == param_1 + 1) ||
     (plVar3 = param_1, FUN_100125aec(param_1,param_2 + 4), ((uint)plVar3 >> 7 & 1) != 0)) {
    plVar3 = param_2;
    if (param_2 != (long *)*param_1) {
      func_0x00010002c810();
      uVar1 = (int)plVar3 + 0x20;
      FUN_10015f3a8();
      if ((uVar1 >> 7 & 1) == 0) goto FUN_1001246e8;
    }
    if (*param_2 == 0) {
      *param_3 = param_2;
      param_4 = param_2;
    }
    else {
      *param_3 = plVar3;
      param_4 = plVar3 + 1;
    }
  }
  else {
    uVar1 = (int)param_2 + 0x20;
    FUN_10015f3a8();
    if ((uVar1 >> 7 & 1) == 0) {
      *param_3 = param_2;
      *param_4 = (long)param_2;
    }
    else {
      param_4 = param_2;
      func_0x000104bff0cc(param_2,1);
      if ((param_1 + 1 != param_4) &&
         (plVar3 = param_4, FUN_100125aec(), ((uint)plVar3 >> 7 & 1) == 0)) {
FUN_1001246e8:
        FUN_1001246dc(param_1,param_3,param_5);
        plVar3 = (long *)(unaff_x20 + 8);
        plVar2 = (long *)*plVar3;
        plVar4 = plVar3;
        while (plVar2 != (long *)0x0) {
          while (plVar4 = plVar2, FUN_100125aec(), ((uint)param_1 >> 7 & 1) != 0) {
            plVar2 = (long *)*plVar4;
            plVar3 = plVar4;
            if ((long *)*plVar4 == (long *)0x0) goto LAB_100124748;
          }
          param_1 = plVar4 + 4;
          FUN_10015f3a8();
          if (((uint)param_1 >> 7 & 1) == 0) break;
          plVar3 = plVar4 + 1;
          plVar2 = (long *)*plVar3;
        }
LAB_100124748:
        *unaff_x19 = plVar4;
        return plVar3;
      }
      if (param_2[1] == 0) {
        *param_3 = param_2;
        param_4 = param_2 + 1;
      }
      else {
        *param_3 = param_4;
      }
    }
  }
  return param_4;
}



/* Entry: 10016c994; end: 10016ca1f;  */

undefined1  [16] FUN_10016c994(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_10016c888(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x00010016ca30(alStack_58);
    FUN_100124804();
    FUN_100124874(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
    alStack_58[0] = 0;
    FUN_1001248bc(alStack_58);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10016ca20; end: 10016ca3b;  */

void FUN_10016ca20(void)

{
  return;
}



/* Entry: 10016ca3c; end: 10016ca4b;  */

void FUN_10016ca3c(void)

{
  return;
}



/* Entry: 10016ca4c; end: 10016caf7;  */

void FUN_10016ca4c(ulong *param_1,byte *param_2,undefined8 *param_3,long param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  char cVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((undefined8 *)0x7ffffffffffffff6 < param_3) {
    func_0x000104bd47d4();
    uStack_60 = 0xaaaaaaaaaaaaaaaa;
    uStack_58 = 0xaaaaaaaaaaaaaaaa;
    uStack_68 = 0xaaaaaaaaaaaaaaaa;
    cVar5 = *(char *)((long)param_3 + 0x17);
    puVar2 = (undefined8 *)*param_3;
    if (-1 < (long)cVar5) {
      puVar2 = param_3;
    }
    lVar7 = param_3[1];
    if (-1 < cVar5) {
      lVar7 = (long)cVar5;
    }
    FUN_10016ca4c(&uStack_68,puVar2,lVar7);
    if (param_4 == 0) {
      func_0x000107c2da84(param_2 + 0x28,&uStack_68);
    }
    else {
      *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_2 + 8);
      param_2 = param_2 + 0x28;
      func_0x00010016cc84(param_2,&uStack_68);
      lVar7 = *(long *)param_2;
      *(long *)param_2 = param_4;
      if (lVar7 != 0) {
        func_0x000107c3641c();
      }
    }
    func_0x00010016ccb8();
    return;
  }
  if (param_3 < (undefined8 *)0x17) {
    if (param_3 == (undefined8 *)0x0) {
      return;
    }
  }
  else {
    puVar3 = (undefined1 *)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      puVar3 = (undefined1 *)(((ulong)param_3 | 7) + 1);
    }
    puVar6 = puVar3;
    func_0x000107c60e20();
    *puVar6 = (char)*param_1;
    param_1[1] = 0;
    param_1[2] = (ulong)puVar3 | 0x8000000000000000;
    *param_1 = (ulong)puVar6;
  }
  do {
    bVar4 = *param_2;
    bVar1 = bVar4 + 0x20;
    if (0x19 < bVar4 - 0x41) {
      bVar1 = bVar4;
    }
    func_0x000107c60c8c(param_1,(int)(char)bVar1);
    param_3 = (undefined8 *)((long)param_3 + -1);
    param_2 = param_2 + 1;
  } while (param_3 != (undefined8 *)0x0);
  return;
}



/* Entry: 10016caf8; end: 10016df03;  */

void FUN_10016caf8(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0xaaaaaaaaaaaaaaaa;
  uStack_28 = 0xaaaaaaaaaaaaaaaa;
  uStack_38 = 0xaaaaaaaaaaaaaaaa;
  cVar2 = *(char *)((long)param_2 + 0x17);
  puVar1 = (undefined8 *)*param_2;
  if (-1 < (long)cVar2) {
    puVar1 = param_2;
  }
  lVar4 = param_2[1];
  if (-1 < cVar2) {
    lVar4 = (long)cVar2;
  }
  FUN_10016ca4c(&uStack_38,puVar1,lVar4);
  if (param_3 == 0) {
    func_0x000107c2da84(param_1 + 0x28,&uStack_38);
  }
  else {
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_1 + 8);
    plVar3 = (long *)(param_1 + 0x28);
    func_0x00010016cc84(plVar3,&uStack_38);
    lVar4 = *plVar3;
    *plVar3 = param_3;
    if (lVar4 != 0) {
      func_0x000107c3641c();
    }
  }
  func_0x00010016ccb8();
  return;
}



/* Entry: 10016df04; end: 10016dfd3;  */

/* WARNING: Removing unreachable block (ram,0x00010016e1dc) */

long * FUN_10016df04(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *****pppppuVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [8];
  long lStack_80;
  long lStack_78;
  undefined8 ****ppppuStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long *aplStack_58 [3];
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar4 = param_2;
  }
  plVar12 = (long *)param_1[1];
  if (param_2 <= plVar12) {
    if (param_2 < plVar12) {
      plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
        func_0x000107c60c44();
      }
      else if ((long *)0x1 < plVar4) {
        plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
      }
      if (param_2 <= plVar4) {
        param_2 = plVar4;
      }
      if (param_2 < plVar12) goto LAB_10016df4c;
    }
    return plVar4;
  }
LAB_10016df4c:
  if (param_2 == (long *)0x0) {
    plVar4 = (long *)*param_1;
    *param_1 = 0;
    if (plVar4 != (long *)0x0) {
      func_0x000107c60e14();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      plStack_40 = param_2;
      plStack_38 = param_1;
      func_0x0001001570b4(&ppppuStack_70);
      func_0x00010016e2b8(param_2,ppppuStack_70,lStack_68);
      if (param_2 == (long *)0x0) {
        plVar4 = (long *)0x1;
      }
      else {
        func_0x000100176eac();
        aplStack_58[0] = param_2;
        FUN_10014bd98(param_3);
        if (param_2 == (long *)0x0) {
          lVar3 = 0;
        }
        else {
          lVar3 = param_2[1] - *param_2 >> 5;
        }
        FUN_1000fc044(param_3,lVar3);
        ppppuStack_70 = (undefined8 *****)0x0;
        lStack_68 = 0;
        uStack_60 = 0;
        func_0x000100176ec8(auStack_88,aplStack_58);
        func_0x000100176f00(auStack_a0,aplStack_58);
        while( true ) {
          puVar5 = auStack_88;
          func_0x000100176f7c(puVar5,auStack_a0);
          lVar3 = lStack_80;
          if ((uint)puVar5 == 0) break;
          if (lStack_80 == lStack_78) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(0,0x10016e2a4);
            (*pcVar2)();
          }
          ppppuStack_70 = (undefined8 ****)((ulong)ppppuStack_70 & 0xffffffffffffff00);
          uStack_60 = uStack_60 & 0xffffffffffffff;
          if (*(char *)(lStack_80 + 0x18) != '\x04') break;
          func_0x00010014d1d0(lStack_80);
          func_0x000107c60ca4(&ppppuStack_70,lVar3);
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          FUN_1000fecf4(param_3,&uStack_b8);
          func_0x000107c60ca0(&uStack_b8);
          pppppuVar6 = (undefined8 *****)ppppuStack_70;
          if (-1 < (long)uStack_60._7_1_) {
            pppppuVar6 = &ppppuStack_70;
          }
          lVar3 = lStack_68;
          if (-1 < (long)uStack_60) {
            lVar3 = (long)uStack_60._7_1_;
          }
          FUN_1001a3710(pppppuVar6,lVar3,*(long *)(param_3 + 8) + -0x18);
          if (((ulong)pppppuVar6 & 1) == 0) {
            func_0x00010014bdac(param_3,*(long *)(param_3 + 8) + -0x18);
            plVar4 = (long *)0x0;
            goto LAB_10016e280;
          }
          if (lStack_80 == lStack_78) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(0,0x10016e2b0);
            (*pcVar2)();
          }
          lStack_80 = lStack_80 + 0x20;
        }
        plVar4 = (long *)(ulong)((uint)puVar5 ^ 1);
LAB_10016e280:
        func_0x000107c60ca0(&ppppuStack_70);
      }
      return plVar4;
    }
    lVar3 = (long)param_2 << 3;
    func_0x000107c60e20();
    plVar4 = (long *)*param_1;
    *param_1 = lVar3;
    if (plVar4 != (long *)0x0) {
      func_0x000107c60e14();
    }
    plVar12 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar12 * 8) = 0;
      plVar12 = (long *)((long)plVar12 + 1);
    } while (param_2 != plVar12);
    plVar12 = (long *)param_1[2];
    if (plVar12 != (long *)0x0) {
      plVar8 = (long *)plVar12[1];
      uVar7 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar7) == 0) {
        plVar8 = (long *)((ulong)plVar8 & uVar7);
      }
      else if (param_2 <= plVar8) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)param_2;
        }
        plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar12;
      while (plVar9 != (long *)0x0) {
        plVar11 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar7) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar7);
        }
        else if (param_2 <= plVar11) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar11 / (ulong)param_2;
          }
          plVar11 = (long *)((long)plVar11 - uVar1 * (long)param_2);
        }
        plVar10 = plVar9;
        if (plVar11 != plVar8) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar11 * 8) = plVar12;
            plVar8 = plVar11;
          }
          else {
            *plVar12 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar3 + (long)plVar11 * 8);
            **(long **)(lVar3 + (long)plVar11 * 8) = (long)plVar9;
            plVar10 = plVar12;
          }
        }
        plVar12 = plVar10;
        plVar9 = (long *)*plVar10;
      }
    }
  }
  return plVar4;
}



/* Entry: 10016dfd4; end: 10016e10f;  */

/* WARNING: Removing unreachable block (ram,0x00010016e1dc) */

ulong FUN_10016dfd4(ulong *param_1,long *param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 ****ppppuVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [8];
  long lStack_80;
  long lStack_78;
  undefined8 ***pppuStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  if (param_2 == (long *)0x0) {
    uVar3 = *param_1;
    *param_1 = 0;
    if (uVar3 != 0) {
      func_0x000107c60e14();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      func_0x0001001570b4(&pppuStack_70);
      func_0x00010016e2b8(param_2,pppuStack_70,lStack_68);
      if (param_2 == (long *)0x0) {
        uVar3 = 1;
      }
      else {
        func_0x000100176eac();
        plStack_58 = param_2;
        FUN_10014bd98(param_3);
        if (param_2 == (long *)0x0) {
          lVar6 = 0;
        }
        else {
          lVar6 = param_2[1] - *param_2 >> 5;
        }
        FUN_1000fc044(param_3,lVar6);
        pppuStack_70 = (undefined8 ****)0x0;
        lStack_68 = 0;
        uStack_60 = 0;
        func_0x000100176ec8(auStack_88,&plStack_58);
        func_0x000100176f00(auStack_a0,&plStack_58);
        while( true ) {
          puVar4 = auStack_88;
          func_0x000100176f7c(puVar4,auStack_a0);
          lVar6 = lStack_80;
          if ((uint)puVar4 == 0) break;
          if (lStack_80 == lStack_78) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(0,0x10016e2a4);
            (*pcVar1)();
          }
          pppuStack_70 = (undefined8 ***)((ulong)pppuStack_70 & 0xffffffffffffff00);
          uStack_60 = uStack_60 & 0xffffffffffffff;
          if (*(char *)(lStack_80 + 0x18) != '\x04') break;
          func_0x00010014d1d0(lStack_80);
          func_0x000107c60ca4(&pppuStack_70,lVar6);
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          FUN_1000fecf4(param_3,&uStack_b8);
          func_0x000107c60ca0(&uStack_b8);
          ppppuVar5 = (undefined8 ****)pppuStack_70;
          if (-1 < (long)uStack_60._7_1_) {
            ppppuVar5 = &pppuStack_70;
          }
          lVar6 = lStack_68;
          if (-1 < (long)uStack_60) {
            lVar6 = (long)uStack_60._7_1_;
          }
          FUN_1001a3710(ppppuVar5,lVar6,*(long *)(param_3 + 8) + -0x18);
          if (((ulong)ppppuVar5 & 1) == 0) {
            func_0x00010014bdac(param_3,*(long *)(param_3 + 8) + -0x18);
            uVar3 = 0;
            goto LAB_10016e280;
          }
          if (lStack_80 == lStack_78) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(0,0x10016e2b0);
            (*pcVar1)();
          }
          lStack_80 = lStack_80 + 0x20;
        }
        uVar3 = (ulong)((uint)puVar4 ^ 1);
LAB_10016e280:
        func_0x000107c60ca0(&pppuStack_70);
      }
      return uVar3;
    }
    uVar2 = (long)param_2 << 3;
    func_0x000107c60e20();
    uVar3 = *param_1;
    *param_1 = uVar2;
    if (uVar3 != 0) {
      func_0x000107c60e14();
    }
    plVar7 = (long *)0x0;
    param_1[1] = (ulong)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar7 * 8) = 0;
      plVar7 = (long *)((long)plVar7 + 1);
    } while (param_2 != plVar7);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      plVar8 = (long *)plVar7[1];
      uVar2 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar2) == 0) {
        plVar8 = (long *)((ulong)plVar8 & uVar2);
      }
      else if (param_2 <= plVar8) {
        uVar12 = 0;
        if (param_2 != (long *)0x0) {
          uVar12 = (ulong)plVar8 / (ulong)param_2;
        }
        plVar8 = (long *)((long)plVar8 - uVar12 * (long)param_2);
      }
      *(ulong **)(*param_1 + (long)plVar8 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar7;
      while (plVar9 != (long *)0x0) {
        plVar11 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar2) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar2);
        }
        else if (param_2 <= plVar11) {
          uVar12 = 0;
          if (param_2 != (long *)0x0) {
            uVar12 = (ulong)plVar11 / (ulong)param_2;
          }
          plVar11 = (long *)((long)plVar11 - uVar12 * (long)param_2);
        }
        plVar10 = plVar9;
        if (plVar11 != plVar8) {
          uVar12 = *param_1;
          if (*(long *)(uVar12 + (long)plVar11 * 8) == 0) {
            *(long **)(uVar12 + (long)plVar11 * 8) = plVar7;
            plVar8 = plVar11;
          }
          else {
            *plVar7 = *plVar9;
            *plVar9 = **(undefined8 **)(uVar12 + (long)plVar11 * 8);
            **(long **)(uVar12 + (long)plVar11 * 8) = (long)plVar9;
            plVar10 = plVar7;
          }
        }
        plVar7 = plVar10;
        plVar9 = (long *)*plVar10;
      }
    }
  }
  return uVar3;
}



/* Entry: 10016e110; end: 10016e333;  */

/* WARNING: Removing unreachable block (ram,0x00010016e1dc) */

uint FUN_10016e110(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  uint uVar5;
  long *unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  undefined8 **ppuStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x0001001570b4(&ppuStack_50);
  func_0x00010016e2b8();
  if (unaff_x20 == (long *)0x0) {
    uVar5 = 1;
  }
  else {
    func_0x000100176eac();
    FUN_10014bd98(param_3);
    if (unaff_x20 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = unaff_x20[1] - *unaff_x20 >> 5;
    }
    FUN_1000fc044(param_3,lVar4);
    ppuStack_50 = (undefined8 ***)0x0;
    lStack_48 = 0;
    uStack_40 = 0;
    func_0x000100176ec8(auStack_68,auStack_38);
    func_0x000100176f00(auStack_80,auStack_38);
    while( true ) {
      puVar2 = auStack_68;
      func_0x000100176f7c(puVar2,auStack_80);
      lVar4 = lStack_60;
      if ((uint)puVar2 == 0) break;
      if (lStack_60 == lStack_58) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0,0x10016e2a4);
        (*pcVar1)();
      }
      ppuStack_50 = (undefined8 **)((ulong)ppuStack_50 & 0xffffffffffffff00);
      uStack_40 = uStack_40 & 0xffffffffffffff;
      if (*(char *)(lStack_60 + 0x18) != '\x04') break;
      func_0x00010014d1d0(lStack_60);
      func_0x000107c60ca4(&ppuStack_50,lVar4);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_1000fecf4(param_3,&uStack_98);
      func_0x000107c60ca0(&uStack_98);
      pppuVar3 = (undefined8 ***)ppuStack_50;
      if (-1 < (long)uStack_40._7_1_) {
        pppuVar3 = &ppuStack_50;
      }
      lVar4 = lStack_48;
      if (-1 < (long)uStack_40) {
        lVar4 = (long)uStack_40._7_1_;
      }
      FUN_1001a3710(pppuVar3,lVar4,*(long *)(param_3 + 8) + -0x18);
      if (((ulong)pppuVar3 & 1) == 0) {
        func_0x00010014bdac(param_3,*(long *)(param_3 + 8) + -0x18);
        uVar5 = 0;
        goto LAB_10016e280;
      }
      if (lStack_60 == lStack_58) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0,0x10016e2b0);
        (*pcVar1)();
      }
      lStack_60 = lStack_60 + 0x20;
    }
    uVar5 = (uint)puVar2 ^ 1;
LAB_10016e280:
    func_0x000107c60ca0(&ppuStack_50);
  }
  return uVar5;
}



/* Entry: 10016e334; end: 10016e387;  */

void FUN_10016e334(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x000107c2ac80(param_1,param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10016e388; end: 10016e417;  */

/* WARNING: Removing unreachable block (ram,0x00010016e710) */
/* WARNING: Removing unreachable block (ram,0x00010016e7f0) */

undefined8 *
FUN_10016e388(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuVar4 = &puStack_30;
  if (param_1[3] == 6) {
    plVar2 = param_1;
    puStack_30 = param_2;
    puStack_28 = param_3;
    func_0x00010014a548();
    if ((((undefined8 **)plVar2 != ppuVar4) && ((long *)param_1[1] != plVar2)) &&
       (puVar5 = (undefined8 *)plVar2[3], puVar5 != (undefined8 *)0x0)) {
      if ((uint)param_4 != (uint)*(byte *)(puVar5 + 3)) {
        puVar5 = (undefined8 *)0x0;
      }
      return puVar5;
    }
    return (undefined8 *)0x0;
  }
  func_0x000107c2cf68();
  lVar13 = ((long)param_4 - (long)param_3) / 0x18;
  if (0 < lVar13) {
    puVar5 = (undefined8 *)param_1[1];
    if ((param_1[2] - (long)puVar5 >> 3) * -0x5555555555555555 < lVar13) {
      lVar14 = *param_1;
      uVar8 = lVar13 + ((long)puVar5 - lVar14 >> 3) * -0x5555555555555555;
      if (0xaaaaaaaaaaaaaaa < uVar8) {
        func_0x000107c35c9c();
LAB_10016e8a8:
        func_0x000107c35c58();
        puVar5 = (undefined8 *)&stack0xffffffffffffffe8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm_110346280
        )(puVar5,param_1,0x20);
        return puVar5;
      }
      lVar6 = param_1[2] - lVar14 >> 3;
      uVar11 = lVar6 * 0x5555555555555556;
      if (uVar11 < uVar8 || uVar11 - uVar8 == 0) {
        uVar11 = uVar8;
      }
      if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
        uVar11 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar11 == 0) {
        lVar6 = 0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar11) goto LAB_10016e8a8;
        lVar6 = uVar11 * 0x18;
        func_0x000107c60e20();
      }
      puVar7 = (undefined8 *)((long)param_2 + (lVar6 - lVar14));
      lVar14 = lVar13 * 0x18;
      puVar5 = puVar7;
      do {
        while (*(char *)((long)param_3 + 0x17) < '\0') {
          FUN_100033dac(puVar5,*param_3,param_3[1]);
          puVar5 = puVar5 + 3;
          lVar14 = lVar14 + -0x18;
          param_3 = param_3 + 3;
          if (lVar14 == 0) goto LAB_10016e5c0;
        }
        uVar18 = param_3[1];
        uVar17 = *param_3;
        puVar5[2] = param_3[2];
        puVar5[1] = uVar18;
        *puVar5 = uVar17;
        lVar14 = lVar14 + -0x18;
        param_3 = param_3 + 3;
        puVar5 = puVar5 + 3;
      } while (lVar14 != 0);
LAB_10016e5c0:
      func_0x000107c610b4(puVar7 + lVar13 * 3,param_2,param_1[1] - (long)param_2);
      lVar14 = param_1[1];
      param_1[1] = (long)param_2;
      lVar12 = (long)puVar7 - ((long)param_2 - *param_1);
      func_0x000107c610b4(lVar12);
      lVar3 = *param_1;
      *param_1 = lVar12;
      param_1[1] = (long)(puVar7 + lVar13 * 3) + (lVar14 - (long)param_2);
      param_1[2] = lVar6 + uVar11 * 0x18;
      param_2 = puVar7;
      if (lVar3 != 0) {
        func_0x000107c60e14();
      }
    }
    else {
      lVar14 = (long)puVar5 - (long)param_2;
      if ((lVar14 >> 3) * -0x5555555555555555 < lVar13) {
        puVar7 = puVar5;
        puVar16 = puVar5;
        for (puVar9 = (undefined8 *)(lVar14 + (long)param_3); puVar15 = puVar7, puVar9 != param_4;
            puVar9 = puVar9 + 3) {
          while (-1 < *(char *)((long)puVar9 + 0x17)) {
            uVar18 = puVar9[1];
            uVar17 = *puVar9;
            puVar15[2] = puVar9[2];
            puVar7 = puVar15 + 3;
            puVar15[1] = uVar18;
            *puVar15 = uVar17;
            puVar9 = puVar9 + 3;
            puVar16 = puVar16 + 3;
            puVar15 = puVar7;
            if (puVar9 == param_4) goto LAB_10016e664;
          }
          FUN_100033dac(puVar15,*puVar9,puVar9[1]);
          puVar7 = puVar15 + 3;
          puVar16 = puVar16 + 3;
        }
LAB_10016e664:
        param_1[1] = (long)puVar16;
        if (0 < lVar14) {
          puVar9 = param_2 + lVar13 * 3;
          puVar10 = puVar16;
          for (puVar15 = puVar16 + lVar13 * -3; puVar15 < puVar5; puVar15 = puVar15 + 3) {
            uVar18 = puVar15[1];
            uVar17 = *puVar15;
            puVar10[2] = puVar15[2];
            puVar10[1] = uVar18;
            *puVar10 = uVar17;
            puVar15[1] = 0;
            puVar15[2] = 0;
            *puVar15 = 0;
            puVar10 = puVar10 + 3;
          }
          param_1[1] = (long)puVar10;
          if (puVar7 != puVar9) {
            lVar13 = lVar13 * -0x18;
            lVar6 = 0;
            do {
              puVar5 = (undefined8 *)((long)puVar16 + lVar13 + -0x18);
              uVar18 = *(undefined8 *)((long)puVar16 + lVar13 + -0x10);
              uVar17 = *puVar5;
              *(undefined8 *)((long)puVar16 + lVar6 + -8) =
                   *(undefined8 *)((long)puVar16 + lVar13 + -8);
              *(undefined8 *)((long)puVar16 + lVar6 + -0x10) = uVar18;
              *(undefined8 *)((long)puVar16 + lVar6 + -0x18) = uVar17;
              *(undefined1 *)((long)puVar16 + lVar13 + -1) = 0;
              *(undefined1 *)puVar5 = 0;
              lVar13 = lVar13 + -0x18;
              puVar9 = puVar9 + 3;
              lVar6 = lVar6 + -0x18;
            } while (puVar16 != puVar9);
          }
          lVar13 = 0;
          do {
            if (param_3 != param_2) {
              puVar5 = (undefined8 *)((long)param_2 + lVar13);
              puVar7 = (undefined8 *)((long)param_3 + lVar13);
              bVar1 = *(byte *)((long)puVar7 + 0x17);
              if (*(char *)((long)puVar5 + 0x17) < '\0') {
                uVar8 = ((long *)((long)param_3 + lVar13))[1];
                puVar9 = *(undefined8 **)((long)param_3 + lVar13);
                if (-1 < (char)bVar1) {
                  uVar8 = (ulong)bVar1;
                  puVar9 = puVar7;
                }
                FUN_1006aabfc(puVar5,puVar9,uVar8);
              }
              else if ((char)bVar1 < '\0') {
                FUN_10014884c(puVar5,*(undefined8 *)((long)param_3 + lVar13),
                              ((undefined8 *)((long)param_3 + lVar13))[1]);
              }
              else {
                uVar18 = puVar7[1];
                uVar17 = *puVar7;
                puVar5[2] = puVar7[2];
                puVar5[1] = uVar18;
                *puVar5 = uVar17;
              }
            }
            lVar13 = lVar13 + 0x18;
          } while ((undefined8 *)((long)param_3 + lVar13) != (undefined8 *)(lVar14 + (long)param_3))
          ;
        }
      }
      else {
        puVar16 = puVar5 + lVar13 * -3;
        puVar7 = puVar5;
        puVar9 = puVar16;
        if (puVar16 < puVar5) {
          do {
            uVar18 = puVar9[1];
            uVar17 = *puVar9;
            puVar7[2] = puVar9[2];
            puVar15 = puVar7 + 3;
            puVar7[1] = uVar18;
            *puVar7 = uVar17;
            puVar9[1] = 0;
            puVar9[2] = 0;
            puVar10 = puVar9 + 3;
            *puVar9 = 0;
            puVar7 = puVar15;
            puVar9 = puVar10;
          } while (puVar10 < puVar5);
          param_1[1] = (long)puVar15;
        }
        else {
          param_1[1] = (long)puVar5;
        }
        if (puVar5 != param_2 + lVar13 * 3) {
          lVar14 = 0;
          do {
            lVar6 = lVar14 + -0x18;
            puVar7 = (undefined8 *)(lVar6 + (long)puVar16);
            uVar18 = puVar7[1];
            uVar17 = *puVar7;
            *(undefined8 *)((long)puVar5 + lVar14 + -8) = puVar7[2];
            *(undefined8 *)((long)puVar5 + lVar14 + -0x10) = uVar18;
            *(undefined8 *)((long)puVar5 + lVar14 + -0x18) = uVar17;
            *(undefined1 *)((long)puVar16 + lVar14 + -1) = 0;
            *(undefined1 *)puVar7 = 0;
            lVar14 = lVar6;
          } while ((long)param_2 + (lVar13 * 0x18 - (long)puVar5) != lVar6);
        }
        lVar14 = 0;
        do {
          if (param_3 != param_2) {
            puVar5 = (undefined8 *)((long)param_2 + lVar14);
            puVar7 = (undefined8 *)((long)param_3 + lVar14);
            bVar1 = *(byte *)((long)puVar7 + 0x17);
            if (*(char *)((long)puVar5 + 0x17) < '\0') {
              uVar8 = ((long *)((long)param_3 + lVar14))[1];
              puVar9 = *(undefined8 **)((long)param_3 + lVar14);
              if (-1 < (char)bVar1) {
                uVar8 = (ulong)bVar1;
                puVar9 = puVar7;
              }
              FUN_1006aabfc(puVar5,puVar9,uVar8);
            }
            else if ((char)bVar1 < '\0') {
              FUN_10014884c(puVar5,*(undefined8 *)((long)param_3 + lVar14),
                            ((undefined8 *)((long)param_3 + lVar14))[1]);
            }
            else {
              uVar18 = puVar7[1];
              uVar17 = *puVar7;
              puVar5[2] = puVar7[2];
              puVar5[1] = uVar18;
              *puVar5 = uVar17;
            }
          }
          lVar14 = lVar14 + 0x18;
        } while ((undefined8 *)((long)param_3 + lVar14) != param_3 + lVar13 * 3);
      }
    }
  }
  return param_2;
}



/* Entry: 10016e418; end: 10016e8ab;  */

/* WARNING: Removing unreachable block (ram,0x00010016e710) */
/* WARNING: Removing unreachable block (ram,0x00010016e7f0) */

undefined8 *
FUN_10016e418(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,long param_5
             )

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (0 < param_5) {
    puVar5 = (undefined8 *)param_1[1];
    if ((param_1[2] - (long)puVar5 >> 3) * -0x5555555555555555 < param_5) {
      lVar11 = *param_1;
      uVar6 = param_5 + ((long)puVar5 - lVar11 >> 3) * -0x5555555555555555;
      if (0xaaaaaaaaaaaaaaa < uVar6) {
        func_0x000107c35c9c();
LAB_10016e8a8:
        func_0x000107c35c58();
        puVar5 = (undefined8 *)&stack0x00000018;
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm_110346280
        )(puVar5,param_1,0x20);
        return puVar5;
      }
      lVar3 = param_1[2] - lVar11 >> 3;
      uVar9 = lVar3 * 0x5555555555555556;
      if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
        uVar9 = uVar6;
      }
      if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
        uVar9 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar9 == 0) {
        lVar3 = 0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar9) goto LAB_10016e8a8;
        lVar3 = uVar9 * 0x18;
        func_0x000107c60e20();
      }
      puVar4 = (undefined8 *)((long)param_2 + (lVar3 - lVar11));
      lVar11 = param_5 * 0x18;
      puVar5 = puVar4;
      do {
        while (*(char *)((long)param_3 + 0x17) < '\0') {
          FUN_100033dac(puVar5,*param_3,param_3[1]);
          puVar5 = puVar5 + 3;
          lVar11 = lVar11 + -0x18;
          param_3 = param_3 + 3;
          if (lVar11 == 0) goto LAB_10016e5c0;
        }
        uVar15 = param_3[1];
        uVar14 = *param_3;
        puVar5[2] = param_3[2];
        puVar5[1] = uVar15;
        *puVar5 = uVar14;
        lVar11 = lVar11 + -0x18;
        param_3 = param_3 + 3;
        puVar5 = puVar5 + 3;
      } while (lVar11 != 0);
LAB_10016e5c0:
      func_0x000107c610b4(puVar4 + param_5 * 3,param_2,param_1[1] - (long)param_2);
      lVar11 = param_1[1];
      param_1[1] = (long)param_2;
      lVar10 = (long)puVar4 - ((long)param_2 - *param_1);
      func_0x000107c610b4(lVar10);
      lVar2 = *param_1;
      *param_1 = lVar10;
      param_1[1] = (long)(puVar4 + param_5 * 3) + (lVar11 - (long)param_2);
      param_1[2] = lVar3 + uVar9 * 0x18;
      param_2 = puVar4;
      if (lVar2 != 0) {
        func_0x000107c60e14();
      }
    }
    else {
      lVar11 = (long)puVar5 - (long)param_2;
      if ((lVar11 >> 3) * -0x5555555555555555 < param_5) {
        puVar4 = puVar5;
        puVar13 = puVar5;
        for (puVar7 = (undefined8 *)(lVar11 + (long)param_3); puVar12 = puVar4, puVar7 != param_4;
            puVar7 = puVar7 + 3) {
          while (-1 < *(char *)((long)puVar7 + 0x17)) {
            uVar15 = puVar7[1];
            uVar14 = *puVar7;
            puVar12[2] = puVar7[2];
            puVar4 = puVar12 + 3;
            puVar12[1] = uVar15;
            *puVar12 = uVar14;
            puVar7 = puVar7 + 3;
            puVar13 = puVar13 + 3;
            puVar12 = puVar4;
            if (puVar7 == param_4) goto LAB_10016e664;
          }
          FUN_100033dac(puVar12,*puVar7,puVar7[1]);
          puVar4 = puVar12 + 3;
          puVar13 = puVar13 + 3;
        }
LAB_10016e664:
        param_1[1] = (long)puVar13;
        if (0 < lVar11) {
          puVar7 = param_2 + param_5 * 3;
          puVar8 = puVar13;
          for (puVar12 = puVar13 + param_5 * -3; puVar12 < puVar5; puVar12 = puVar12 + 3) {
            uVar15 = puVar12[1];
            uVar14 = *puVar12;
            puVar8[2] = puVar12[2];
            puVar8[1] = uVar15;
            *puVar8 = uVar14;
            puVar12[1] = 0;
            puVar12[2] = 0;
            *puVar12 = 0;
            puVar8 = puVar8 + 3;
          }
          param_1[1] = (long)puVar8;
          if (puVar4 != puVar7) {
            param_5 = param_5 * -0x18;
            lVar3 = 0;
            do {
              puVar5 = (undefined8 *)((long)puVar13 + param_5 + -0x18);
              uVar15 = *(undefined8 *)((long)puVar13 + param_5 + -0x10);
              uVar14 = *puVar5;
              *(undefined8 *)((long)puVar13 + lVar3 + -8) =
                   *(undefined8 *)((long)puVar13 + param_5 + -8);
              *(undefined8 *)((long)puVar13 + lVar3 + -0x10) = uVar15;
              *(undefined8 *)((long)puVar13 + lVar3 + -0x18) = uVar14;
              *(undefined1 *)((long)puVar13 + param_5 + -1) = 0;
              *(undefined1 *)puVar5 = 0;
              param_5 = param_5 + -0x18;
              puVar7 = puVar7 + 3;
              lVar3 = lVar3 + -0x18;
            } while (puVar13 != puVar7);
          }
          lVar3 = 0;
          do {
            if (param_3 != param_2) {
              puVar5 = (undefined8 *)((long)param_2 + lVar3);
              puVar4 = (undefined8 *)((long)param_3 + lVar3);
              bVar1 = *(byte *)((long)puVar4 + 0x17);
              if (*(char *)((long)puVar5 + 0x17) < '\0') {
                uVar6 = ((long *)((long)param_3 + lVar3))[1];
                puVar7 = *(undefined8 **)((long)param_3 + lVar3);
                if (-1 < (char)bVar1) {
                  uVar6 = (ulong)bVar1;
                  puVar7 = puVar4;
                }
                FUN_1006aabfc(puVar5,puVar7,uVar6);
              }
              else if ((char)bVar1 < '\0') {
                FUN_10014884c(puVar5,*(undefined8 *)((long)param_3 + lVar3),
                              ((undefined8 *)((long)param_3 + lVar3))[1]);
              }
              else {
                uVar15 = puVar4[1];
                uVar14 = *puVar4;
                puVar5[2] = puVar4[2];
                puVar5[1] = uVar15;
                *puVar5 = uVar14;
              }
            }
            lVar3 = lVar3 + 0x18;
          } while ((undefined8 *)((long)param_3 + lVar3) != (undefined8 *)(lVar11 + (long)param_3));
        }
      }
      else {
        puVar13 = puVar5 + param_5 * -3;
        puVar4 = puVar5;
        puVar7 = puVar13;
        if (puVar13 < puVar5) {
          do {
            uVar15 = puVar7[1];
            uVar14 = *puVar7;
            puVar4[2] = puVar7[2];
            puVar12 = puVar4 + 3;
            puVar4[1] = uVar15;
            *puVar4 = uVar14;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar8 = puVar7 + 3;
            *puVar7 = 0;
            puVar4 = puVar12;
            puVar7 = puVar8;
          } while (puVar8 < puVar5);
          param_1[1] = (long)puVar12;
        }
        else {
          param_1[1] = (long)puVar5;
        }
        if (puVar5 != param_2 + param_5 * 3) {
          lVar11 = 0;
          do {
            lVar3 = lVar11 + -0x18;
            puVar4 = (undefined8 *)(lVar3 + (long)puVar13);
            uVar15 = puVar4[1];
            uVar14 = *puVar4;
            *(undefined8 *)((long)puVar5 + lVar11 + -8) = puVar4[2];
            *(undefined8 *)((long)puVar5 + lVar11 + -0x10) = uVar15;
            *(undefined8 *)((long)puVar5 + lVar11 + -0x18) = uVar14;
            *(undefined1 *)((long)puVar13 + lVar11 + -1) = 0;
            *(undefined1 *)puVar4 = 0;
            lVar11 = lVar3;
          } while ((long)param_2 + (param_5 * 0x18 - (long)puVar5) != lVar3);
        }
        lVar11 = 0;
        do {
          if (param_3 != param_2) {
            puVar5 = (undefined8 *)((long)param_2 + lVar11);
            puVar4 = (undefined8 *)((long)param_3 + lVar11);
            bVar1 = *(byte *)((long)puVar4 + 0x17);
            if (*(char *)((long)puVar5 + 0x17) < '\0') {
              uVar6 = ((long *)((long)param_3 + lVar11))[1];
              puVar7 = *(undefined8 **)((long)param_3 + lVar11);
              if (-1 < (char)bVar1) {
                uVar6 = (ulong)bVar1;
                puVar7 = puVar4;
              }
              FUN_1006aabfc(puVar5,puVar7,uVar6);
            }
            else if ((char)bVar1 < '\0') {
              FUN_10014884c(puVar5,*(undefined8 *)((long)param_3 + lVar11),
                            ((undefined8 *)((long)param_3 + lVar11))[1]);
            }
            else {
              uVar15 = puVar4[1];
              uVar14 = *puVar4;
              puVar5[2] = puVar4[2];
              puVar5[1] = uVar15;
              *puVar5 = uVar14;
            }
          }
          lVar11 = lVar11 + 0x18;
        } while ((undefined8 *)((long)param_3 + lVar11) != param_3 + param_5 * 3);
      }
    }
  }
  return param_2;
}



/* Entry: 10016e8ac; end: 10016e8c3;  */

void FUN_10016e8ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm_110346280)
            (&stack0x00000088);
  return;
}



/* Entry: 10016e8c4; end: 10016e8e3;  */

ulong FUN_10016e8c4(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  uVar4 = (param_1[1] - *param_1) / 0x18 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar4) {
    func_0x000104bdcf60();
    plVar2 = param_1;
    FUN_1000480a4();
    func_0x0001000481ec(auStack_68,plVar2,(param_1[1] - *param_1) / 0x18,param_1 + 2);
    func_0x000107c60c94(lStack_58,uVar4);
    lStack_58 = lStack_58 + 0x18;
    FUN_10004824c(param_1,auStack_68);
    uVar4 = param_1[1];
    FUN_1000482e8(auStack_68);
    return uVar4;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  uVar3 = uVar1 * 2;
  if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
    uVar3 = uVar4;
  }
  if (0x555555555555554 < uVar1) {
    uVar3 = 0xaaaaaaaaaaaaaaa;
  }
  return uVar3;
}



/* Entry: 10016e8e4; end: 10016e947;  */

undefined8 FUN_10016e8e4(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 *puStack_48;
  
  FUN_10016e8c4();
  FUN_10016e948();
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20;
  puStack_48[2] = unaff_x20[2];
  puStack_48[1] = uVar2;
  *puStack_48 = uVar1;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  FUN_1000fc0c0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001000fc0cc();
  return uVar1;
}



/* Entry: 10016e948; end: 10016e963;  */

undefined8 * FUN_10016e948(long param_1)

{
  long unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  long lStack0000000000000028;
  
  lStack0000000000000028 = unaff_x19 + 0x10;
  uStack0000000000000020 = 0;
  if (param_1 != 0) {
    FUN_1000481c8();
  }
  return &stack0x00000008;
}



/* Entry: 10016e964; end: 10016e96b;  */

void FUN_10016e964(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000088);
  return;
}



/* Entry: 10016e96c; end: 10016ec3f;  */

undefined8 *
FUN_10016e96c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             long param_5,ulong param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 *unaff_x30;
  undefined8 uVar16;
  undefined8 in_register_00005008;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar9 = param_3;
  puVar8 = param_2;
LAB_10016e9a0:
  puVar10 = puVar9 + -3;
  puStack_88 = puVar9 + -6;
  puStack_90 = puVar9 + -9;
LAB_10016e9b4:
  param_5 = -param_5;
  puVar7 = puVar8;
LAB_10016e9bc:
  puVar8 = puVar7;
  param_5 = param_5 + 1;
  uVar11 = (long)puVar9 - (long)puVar8;
  uStack_c8 = param_6;
  puStack_c0 = puVar8;
  puStack_b8 = puVar9;
  puStack_b0 = puVar10;
  puStack_a8 = param_4;
  switch((long)uVar11 / 0x18) {
  case 2:
    puVar7 = puVar10;
    func_0x00010016f000();
    if (((uint)puVar7 >> 7 & 1) != 0) {
      func_0x000105493cb4();
      uVar13 = puVar9[-2];
      uVar12 = *puVar10;
      puVar8[2] = puVar9[-1];
      puVar8[1] = uVar13;
      *puVar8 = uVar12;
      puVar9[-2] = uStack_78;
      *puVar10 = uStack_80;
      puVar9[-1] = uStack_70;
    }
  case 0:
  case 1:
LAB_10016eb60:
    func_0x00010016eefc(unaff_x30);
    return unaff_x30;
  case 3:
    uVar4 = (int)puVar8 + 0x18;
    func_0x00010016eefc();
    uVar2 = uVar4;
    func_0x00010016ec8c();
    uVar3 = uVar2;
    func_0x00010016ed48();
    if ((uVar2 >> 7 & 1) == 0) {
      if (-1 < (char)uVar3) {
        return (undefined8 *)0x0;
      }
      func_0x00010016efe4();
      puVar10[1] = in_register_00005008;
      *puVar10 = param_1;
      puVar10[2] = extraout_x8_00;
      func_0x00010016ec8c();
      if ((uVar4 >> 7 & 1) != 0) {
        func_0x00010016ed54();
      }
    }
    else {
      if ((char)uVar3 < '\0') {
        uVar12 = puVar8[2];
        in_register_00005008 = puVar8[1];
        param_1 = *puVar8;
        uVar13 = puVar10[2];
        uVar16 = *puVar10;
        puVar8[1] = puVar10[1];
        *puVar8 = uVar16;
        puVar8[2] = uVar13;
      }
      else {
        func_0x00010016ed54();
        func_0x00010016ed48();
        if ((uVar3 >> 7 & 1) == 0) {
          return (undefined8 *)0x1;
        }
        func_0x00010016efe4();
        uVar12 = extraout_x8;
      }
      puVar10[1] = in_register_00005008;
      *puVar10 = param_1;
      puVar10[2] = uVar12;
    }
    return (undefined8 *)0x1;
  case 4:
    func_0x00010016eefc(puVar8,puVar8 + 3,puVar8 + 6,puVar10,param_4);
    func_0x00010016ed84();
    FUN_10016ec94();
    func_0x00010016ec8c();
    if (((((uint)puVar10 >> 7 & 1) != 0) && (FUN_10016f0f8(), ((uint)puVar10 >> 7 & 1) != 0)) &&
       (func_0x00010016f124(), ((uint)puVar10 >> 7 & 1) != 0)) {
      func_0x00010016f150();
    }
    return puVar10;
  case 5:
    puVar9 = puVar8 + 9;
    func_0x00010016eefc(puVar8,puVar8 + 3,puVar8 + 6,puVar9,puVar10,param_4);
    uStack_d0 = 0x18;
    func_0x00010016ed84();
    FUN_10016f09c();
    puVar8 = puVar10;
    func_0x00010016f000();
    if (((uint)puVar8 >> 7 & 1) != 0) {
      uVar12 = puVar9[2];
      uVar17 = puVar9[1];
      uVar16 = *puVar9;
      uVar13 = puVar10[2];
      uVar18 = *puVar10;
      puVar9[1] = puVar10[1];
      *puVar9 = uVar18;
      puVar9[2] = uVar13;
      puVar10[1] = uVar17;
      *puVar10 = uVar16;
      puVar10[2] = uVar12;
      func_0x00010016ec8c();
      puVar8 = puVar9;
      if (((((uint)puVar9 >> 7 & 1) != 0) &&
          (FUN_10016f0f8(), puVar8 = puVar9, ((uint)puVar9 >> 7 & 1) != 0)) &&
         (func_0x00010016f124(), puVar8 = puVar9, ((uint)puVar9 >> 7 & 1) != 0)) {
        func_0x00010016f150();
        puVar8 = puVar9;
      }
    }
    return puVar8;
  }
  if ((long)uVar11 < 0x240) {
    func_0x00010016ed78();
    if ((param_6 & 1) == 0) {
      func_0x00010016eefc();
      if (param_2 != param_3) {
        func_0x00010016ed84();
        while (puVar8 = puVar10, puVar10 = puVar8 + 3, puVar10 != param_4) {
          param_2 = puVar10;
          func_0x00010016ec8c();
          if (((uint)param_2 >> 7 & 1) != 0) {
            uStack_d8 = puVar8[4];
            uStack_e0 = *puVar10;
            uStack_d0 = puVar8[5];
            puVar8[4] = 0;
            puVar8[5] = 0;
            *puVar10 = 0;
            do {
              param_2 = puVar8;
              uVar4 = (int)param_2 + 0x18;
              func_0x00010016eee0();
              FUN_10016f200();
              puVar8 = param_2 + -3;
            } while ((uVar4 >> 7 & 1) != 0);
            func_0x00010016efdc(param_2);
            func_0x00010016eef4();
          }
        }
      }
      return param_2;
    }
    func_0x00010016eefc();
    if (param_2 == param_3) {
      return param_2;
    }
    uStack_d0 = 0x18;
    func_0x00010016ed84();
    lVar14 = 0;
    puVar8 = param_2;
    goto LAB_10016ef44;
  }
  if (param_5 == 1) {
    func_0x00010016ed78();
    func_0x00010016eefc();
    if (param_2 == param_3) {
      return puVar9;
    }
    uStack_d0 = 0x18;
    if (param_2 != param_3) {
      func_0x0001054913e8();
      for (puVar8 = param_3; puVar8 != puVar9; puVar8 = puVar8 + 3) {
        puVar10 = puVar8;
        func_0x00010016f000();
        if (((uint)puVar10 >> 7 & 1) != 0) {
          uVar12 = puVar8[2];
          uVar17 = puVar8[1];
          uVar16 = *puVar8;
          uVar13 = param_2[2];
          uVar18 = *param_2;
          puVar8[1] = param_2[1];
          *puVar8 = uVar18;
          puVar8[2] = uVar13;
          param_2[1] = uVar17;
          *param_2 = uVar16;
          param_2[2] = uVar12;
          func_0x000105491460(param_2,param_4,((long)param_3 - (long)param_2) / 0x18,param_2);
        }
      }
      func_0x0001054915a4(param_2,param_3,param_4);
      puVar9 = puVar8;
    }
    return puVar9;
  }
  puVar7 = puVar8 + ((ulong)((long)uVar11 / 0x18) >> 1) * 3;
  if (uVar11 < 0xc01) {
    param_3 = puVar8;
    FUN_10016ec84(puVar7,puVar8,puVar10);
    puVar5 = puVar7;
  }
  else {
    FUN_10016ec84(puVar8,puVar7,puVar10);
    puVar5 = puVar7 + -3;
    FUN_10016ec84(puVar8 + 3,puVar5,puStack_88);
    FUN_10016ec84(puVar8 + 6,puVar7 + 3,puStack_90);
    param_3 = puVar7;
    FUN_10016ec84(puVar5,puVar7,puVar7 + 3);
    func_0x000105493cb4();
    uVar13 = puVar7[1];
    uVar12 = *puVar7;
    puVar8[2] = puVar7[2];
    puVar8[1] = uVar13;
    *puVar8 = uVar12;
    puVar7[2] = uStack_70;
    puVar7[1] = uStack_78;
    *puVar7 = uStack_80;
    param_1 = uStack_80;
    in_register_00005008 = uStack_78;
  }
  if ((param_6 & 1) == 0) {
    param_2 = puVar8 + -3;
    func_0x00010016f000();
    puVar5 = param_2;
    if (((uint)param_2 >> 7 & 1) == 0) {
      func_0x00010016ed78();
      func_0x0001054910b0();
      puVar8 = param_2;
      goto LAB_10016eafc;
    }
  }
  func_0x00010016ed78();
  FUN_10016ed90();
  if (((ulong)param_3 & 1) != 0) {
    puVar6 = puVar8;
    func_0x000105491198(puVar8,puVar5,param_4);
    puVar7 = puVar5 + 3;
    param_2 = puVar7;
    param_3 = puVar9;
    func_0x000105491198(puVar7,puVar9,param_4);
    if ((int)param_2 == 0) goto code_r0x00010016eac4;
    param_5 = -param_5;
    puVar9 = puVar5;
    if (((ulong)puVar6 & 1) != 0) goto LAB_10016eb60;
    goto LAB_10016e9a0;
  }
  goto LAB_10016eacc;
LAB_10016ef44:
  puVar8 = puVar8 + 3;
  if (puVar8 == param_4) {
    return param_2;
  }
  func_0x00010016eed8();
  if (((uint)param_2 >> 7 & 1) != 0) {
    func_0x00010016efc0();
    lVar1 = lVar14;
    do {
      lVar15 = lVar1;
      FUN_100066230((long)puVar10 + lVar15 + 0x18);
      param_2 = puVar10;
      if (lVar15 == 0) goto LAB_10016ef94;
      uVar4 = 0;
      func_0x000100125af4(auStack_f0,lVar15 + -0x18 + (long)puVar10);
      lVar1 = lVar15 + -0x18;
    } while ((uVar4 >> 7 & 1) != 0);
    param_2 = (undefined8 *)((long)puVar10 + lVar15);
LAB_10016ef94:
    func_0x00010016efdc();
    func_0x00010016eef4();
  }
  lVar14 = lVar14 + 0x18;
  goto LAB_10016ef44;
code_r0x00010016eac4:
  if (((ulong)puVar6 & 1) == 0) goto LAB_10016eacc;
  goto LAB_10016e9bc;
LAB_10016eacc:
  param_3 = puVar5;
  FUN_10016e96c(puVar8,puVar5,param_4,-param_5,(uint)param_6 & 1);
  param_2 = puVar8;
  puVar8 = puVar5 + 3;
LAB_10016eafc:
  param_6 = 0;
  param_5 = -param_5;
  goto LAB_10016e9b4;
}



/* Entry: 10016ec40; end: 10016ec83;  */

void FUN_10016ec40(long param_1,long param_2)

{
  long lVar1;
  undefined1 uStack_11;
  
  lVar1 = 0;
  if (param_2 != param_1) {
    lVar1 = LZCOUNT((param_2 - param_1) / 0x18) * -2 + 0x7e;
  }
  FUN_10016e96c(param_1,param_2,&uStack_11,lVar1,1);
  return;
}



/* Entry: 10016ec84; end: 10016ec93;  */

undefined8 FUN_10016ec84(undefined8 param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_register_00005008;
  undefined8 uVar5;
  
  uVar1 = param_3;
  func_0x00010016ec8c();
  uVar2 = uVar1;
  FUN_10016ed48();
  if ((uVar1 >> 7 & 1) == 0) {
    if (-1 < (char)uVar2) {
      return 0;
    }
    func_0x00010016efe4();
    param_4[1] = in_register_00005008;
    *param_4 = param_1;
    param_4[2] = extraout_x8_00;
    func_0x00010016ec8c();
    if ((param_3 >> 7 & 1) != 0) {
      func_0x00010016ed54();
    }
  }
  else {
    if ((char)uVar2 < '\0') {
      uVar3 = param_2[2];
      in_register_00005008 = param_2[1];
      param_1 = *param_2;
      uVar4 = param_4[2];
      uVar5 = *param_4;
      param_2[1] = param_4[1];
      *param_2 = uVar5;
      param_2[2] = uVar4;
    }
    else {
      func_0x00010016ed54();
      FUN_10016ed48();
      if ((uVar2 >> 7 & 1) == 0) {
        return 1;
      }
      func_0x00010016efe4();
      uVar3 = extraout_x8;
    }
    param_4[1] = in_register_00005008;
    *param_4 = param_1;
    param_4[2] = uVar3;
  }
  return 1;
}



/* Entry: 10016ec94; end: 10016ed47;  */

undefined8 FUN_10016ec94(undefined8 param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_register_00005008;
  undefined8 uVar5;
  
  uVar1 = param_3;
  func_0x00010016ec8c();
  uVar2 = uVar1;
  FUN_10016ed48();
  if ((uVar1 >> 7 & 1) == 0) {
    if (-1 < (char)uVar2) {
      return 0;
    }
    func_0x00010016efe4();
    param_4[1] = in_register_00005008;
    *param_4 = param_1;
    param_4[2] = extraout_x8_00;
    func_0x00010016ec8c();
    if ((param_3 >> 7 & 1) != 0) {
      func_0x00010016ed54();
    }
  }
  else {
    if ((char)uVar2 < '\0') {
      uVar3 = param_2[2];
      in_register_00005008 = param_2[1];
      param_1 = *param_2;
      uVar4 = param_4[2];
      uVar5 = *param_4;
      param_2[1] = param_4[1];
      *param_2 = uVar5;
      param_2[2] = uVar4;
    }
    else {
      func_0x00010016ed54();
      FUN_10016ed48();
      if ((uVar2 >> 7 & 1) == 0) {
        return 1;
      }
      func_0x00010016efe4();
      uVar3 = extraout_x8;
    }
    param_4[1] = in_register_00005008;
    *param_4 = param_1;
    param_4[2] = uVar3;
  }
  return 1;
}



/* Entry: 10016ed48; end: 10016ed8f;  */

uint FUN_10016ed48(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puStack_20;
  ulong uStack_18;
  
  uStack_18 = unaff_x20[1];
  puStack_20 = (undefined8 *)*unaff_x20;
  if (-1 < (char)*(byte *)((long)unaff_x20 + 0x17)) {
    uStack_18 = (ulong)*(byte *)((long)unaff_x20 + 0x17);
    puStack_20 = unaff_x20;
  }
  uVar1 = unaff_x19[1];
  puVar2 = (undefined8 *)*unaff_x19;
  if (-1 < (char)*(byte *)((long)unaff_x19 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)unaff_x19 + 0x17);
    puVar2 = unaff_x19;
  }
  iVar3 = (int)&puStack_20;
  FUN_100067218(&puStack_20,puVar2,uVar1);
  uVar4 = (uint)(0 < iVar3);
  if (iVar3 < 0) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* Entry: 10016ed90; end: 10016ee83;  */

undefined1  [16] FUN_10016ed90(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_80 [64];
  
  func_0x00010016ed84();
  lVar3 = 0;
  FUN_10016ee84();
  do {
    lVar3 = lVar3 + 0x18;
    puVar2 = (undefined8 *)(lVar3 + (long)unaff_x20);
    func_0x000100125af4(puVar2,auStack_80);
  } while (((uint)puVar2 >> 7 & 1) != 0);
  puVar1 = (undefined8 *)((long)unaff_x20 + lVar3);
  puVar4 = puVar1;
  puVar5 = unaff_x19;
  if (lVar3 == 0x18) {
    do {
      if (unaff_x19 <= puVar1) break;
      func_0x00010016eea0();
    } while (((uint)puVar2 >> 7 & 1) == 0);
  }
  else {
    do {
      func_0x00010016eea0();
    } while (((uint)puVar2 >> 7 & 1) == 0);
  }
  while (puVar4 < puVar5) {
    func_0x00010016eeb0();
    uVar7 = puVar5[1];
    uVar6 = *puVar5;
    func_0x00010016eec4(puVar5[2]);
    puVar5[2] = extraout_x8;
    puVar5[1] = uVar7;
    *puVar5 = uVar6;
    do {
      puVar4 = puVar4 + 3;
      func_0x00010016eed8();
    } while (((uint)puVar2 >> 7 & 1) != 0);
    do {
      puVar5 = puVar5 + -3;
      puVar2 = puVar5;
      func_0x000100125af4(puVar5,auStack_80);
    } while (((uint)puVar2 >> 7 & 1) == 0);
  }
  if (unaff_x20 != puVar4 + -3) {
    func_0x00010016eee0();
  }
  func_0x00010016eee8();
  func_0x00010016eef4();
  auVar8[8] = unaff_x19 <= puVar1;
  auVar8._0_8_ = puVar4 + -3;
  auVar8._9_7_ = 0;
  return auVar8;
}



/* Entry: 10016ee84; end: 10016ef17;  */

void FUN_10016ee84(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 10016ef18; end: 10016efbf;  */

void FUN_10016ef18(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [32];
  
  if (param_1 != param_2) {
    func_0x00010016ed84();
    lVar3 = 0;
    lVar2 = param_1;
    while (lVar2 = lVar2 + 0x18, lVar2 != unaff_x19) {
      func_0x00010016eed8();
      if (((uint)param_1 >> 7 & 1) != 0) {
        FUN_10016efc0();
        lVar4 = lVar3;
        do {
          FUN_100066230(unaff_x20 + lVar4 + 0x18);
          param_1 = unaff_x20;
          if (lVar4 == 0) goto LAB_10016ef94;
          lVar4 = lVar4 + -0x18;
          uVar1 = (uint)auStack_60;
          func_0x000100125af4(auStack_60,lVar4 + unaff_x20);
        } while ((uVar1 >> 7 & 1) != 0);
        param_1 = unaff_x20 + lVar4 + 0x18;
LAB_10016ef94:
        func_0x00010016efdc();
        func_0x00010016eef4();
      }
      lVar3 = lVar3 + 0x18;
    }
  }
  return;
}



/* Entry: 10016efc0; end: 10016f007;  */

void FUN_10016efc0(void)

{
  undefined8 *unaff_x21;
  
  unaff_x21[1] = 0;
  unaff_x21[2] = 0;
  *unaff_x21 = 0;
  return;
}



/* Entry: 10016f008; end: 10016f09b;  */

void FUN_10016f008(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *in_x3;
  undefined8 *in_x4;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010016ed84();
  FUN_10016f09c();
  puVar2 = in_x4;
  func_0x00010016f000();
  if (((uint)puVar2 >> 7 & 1) != 0) {
    uVar3 = in_x3[2];
    uVar6 = in_x3[1];
    uVar5 = *in_x3;
    uVar4 = in_x4[2];
    uVar7 = *in_x4;
    in_x3[1] = in_x4[1];
    *in_x3 = uVar7;
    in_x3[2] = uVar4;
    in_x4[1] = uVar6;
    *in_x4 = uVar5;
    in_x4[2] = uVar3;
    func_0x00010016ec8c();
    uVar1 = (uint)in_x3;
    if ((((uVar1 >> 7 & 1) != 0) && (FUN_10016f0f8(), (uVar1 >> 7 & 1) != 0)) &&
       (func_0x00010016f124(), (uVar1 >> 7 & 1) != 0)) {
      func_0x00010016f150();
    }
  }
  return;
}



/* Entry: 10016f09c; end: 10016f0f7;  */

void FUN_10016f09c(void)

{
  uint in_w3;
  
  func_0x00010016ed84();
  FUN_10016ec94();
  func_0x00010016ec8c();
  if ((((in_w3 >> 7 & 1) != 0) && (FUN_10016f0f8(), (in_w3 >> 7 & 1) != 0)) &&
     (func_0x00010016f124(), (in_w3 >> 7 & 1) != 0)) {
    func_0x00010016f150();
  }
  return;
}



/* Entry: 10016f0f8; end: 10016f173;  */

uint FUN_10016f0f8(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puStack_20;
  ulong uStack_18;
  
  uVar5 = unaff_x21[2];
  uVar8 = unaff_x21[1];
  uVar7 = *unaff_x21;
  uVar6 = unaff_x22[2];
  uVar9 = *unaff_x22;
  unaff_x21[1] = unaff_x22[1];
  *unaff_x21 = uVar9;
  unaff_x21[2] = uVar6;
  unaff_x22[1] = uVar8;
  *unaff_x22 = uVar7;
  unaff_x22[2] = uVar5;
  uStack_18 = unaff_x21[1];
  puStack_20 = (undefined8 *)*unaff_x21;
  if (-1 < (char)*(byte *)((long)unaff_x21 + 0x17)) {
    uStack_18 = (ulong)*(byte *)((long)unaff_x21 + 0x17);
    puStack_20 = unaff_x21;
  }
  uVar1 = unaff_x19[1];
  puVar2 = (undefined8 *)*unaff_x19;
  if (-1 < (char)*(byte *)((long)unaff_x19 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)unaff_x19 + 0x17);
    puVar2 = unaff_x19;
  }
  iVar3 = (int)&puStack_20;
  FUN_100067218(&puStack_20,puVar2,uVar1);
  uVar4 = (uint)(0 < iVar3);
  if (iVar3 < 0) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* Entry: 10016f174; end: 10016f1ff;  */

void FUN_10016f174(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar3;
  
  if (param_1 != param_2) {
    func_0x00010016ed84();
    while (puVar3 = unaff_x20, unaff_x20 = puVar3 + 3, unaff_x20 != unaff_x19) {
      puVar2 = unaff_x20;
      func_0x00010016ec8c();
      if (((uint)puVar2 >> 7 & 1) != 0) {
        puVar3[4] = 0;
        puVar3[5] = 0;
        *unaff_x20 = 0;
        do {
          puVar2 = puVar3;
          uVar1 = (int)puVar2 + 0x18;
          func_0x00010016eee0();
          FUN_10016f200();
          puVar3 = puVar2 + -3;
        } while ((uVar1 >> 7 & 1) != 0);
        func_0x00010016efdc(puVar2);
        func_0x00010016eef4();
      }
    }
  }
  return;
}



/* Entry: 10016f200; end: 10016f20b;  */

uint FUN_10016f200(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 *unaff_x21;
  undefined1 *in_stack_00000000;
  ulong in_stack_00000008;
  int in_stack_00000014;
  undefined1 *puStack_20;
  ulong uStack_18;
  
  uStack_18 = in_stack_00000008;
  puStack_20 = in_stack_00000000;
  if (-1 < in_stack_00000014) {
    uStack_18 = (ulong)in_stack_00000014._3_1_;
    puStack_20 = (undefined1 *)register0x00000008;
  }
  uVar1 = unaff_x21[1];
  puVar2 = (undefined8 *)*unaff_x21;
  if (-1 < (char)*(byte *)((long)unaff_x21 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)unaff_x21 + 0x17);
    puVar2 = unaff_x21;
  }
  iVar3 = (int)&puStack_20;
  FUN_100067218(&puStack_20,puVar2,uVar1);
  uVar4 = (uint)(0 < iVar3);
  if (iVar3 < 0) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* Entry: 10016f20c; end: 100171ec3;  */

void FUN_10016f20c(void)

{
  func_0x00010016d0d4();
  func_0x00010016f230();
  return;
}



/* Entry: 100171ec4; end: 100171ecf;  */

void FUN_100171ec4(void)

{
  return;
}



/* Entry: 100171ed0; end: 100171eef;  */

void FUN_100171ed0(void)

{
  FUN_100171ec4();
  FUN_100171efc();
  func_0x000100171f2c();
  return;
}



/* Entry: 100171ef0; end: 100171efb;  */

undefined8 FUN_100171ef0(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 100171efc; end: 100171f23;  */

void FUN_100171efc(long param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100171ef0();
  if (param_1 != 0) {
    func_0x0001073bf02c();
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
  }
  return;
}



/* Entry: 100171f24; end: 100171f47;  */

void FUN_100171f24(void)

{
  return;
}



/* Entry: 100171f48; end: 1001752eb;  */

void FUN_100171f48(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1001752ec; end: 1001753cf;  */

long FUN_1001752ec(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  FUN_1000554d8();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          FUN_1001a6960(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 1001753d0; end: 10017ae5f;  */

void FUN_1001753d0(void)

{
  FUN_1001752ec();
  return;
}



/* Entry: 10017ae60; end: 10017aedb;  */

bool FUN_10017ae60(byte *param_1,long param_2,byte *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  lVar6 = param_4;
  lVar5 = param_2;
  pbVar3 = param_3;
  pbVar4 = param_1;
  if (param_2 == param_4) {
    do {
      if ((lVar5 == 0) || (lVar6 == 0)) {
        return pbVar4 == param_1 + param_2 && pbVar3 == param_3 + param_4;
      }
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + -1;
      bVar1 = *pbVar4;
      bVar2 = *pbVar3;
      uVar7 = bVar1 + 0x20;
      if (0x19 < bVar1 - 0x41) {
        uVar7 = (uint)bVar1;
      }
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
    } while (uVar7 == bVar2);
  }
  return false;
}



/* Entry: 10017aedc; end: 10017caf7;  */

undefined8 FUN_10017aedc(long param_1,int *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  
  iVar4 = param_2[1];
  if (0 < iVar4) {
    puVar3 = (undefined8 *)param_4[1];
    iVar6 = *param_2;
    for (param_4 = (undefined8 *)*param_4; param_4 != puVar3; param_4 = param_4 + 4) {
      cVar5 = *(char *)((long)param_4 + 0x17);
      puVar1 = (undefined8 *)*param_4;
      if (-1 < (long)cVar5) {
        puVar1 = param_4;
      }
      lVar2 = param_4[1];
      if (-1 < cVar5) {
        lVar2 = (long)cVar5;
      }
      lVar7 = param_1 + iVar6;
      FUN_10017ae60(lVar7,iVar4,puVar1,lVar2);
      if ((int)lVar7 != 0) {
        *param_3 = *(undefined4 *)(param_4 + 3);
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10017caf8; end: 10017cb9b;  */

bool FUN_10017caf8(long param_1,ulong param_2,byte *param_3,ulong param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_4 <= param_2) {
    if (param_5 == 1) {
      if (param_4 != 0) {
        lVar4 = -param_4;
        do {
          bVar2 = *(byte *)(param_1 + param_2 + lVar4);
          bVar1 = *param_3;
          uVar5 = bVar2 + 0x20;
          if (0x19 < bVar2 - 0x41) {
            uVar5 = (uint)bVar2;
          }
          uVar6 = bVar1 + 0x20;
          if (0x19 < bVar1 - 0x41) {
            uVar6 = (uint)bVar1;
          }
          bVar3 = lVar4 != -1;
          lVar4 = lVar4 + 1;
          param_3 = param_3 + 1;
        } while (uVar5 == uVar6 && bVar3);
        return uVar5 == uVar6;
      }
      return true;
    }
    if (param_5 == 0) {
      param_1 = param_1 + (param_2 - param_4);
      func_0x000107c610b0(param_1,param_3,param_4);
      return (int)param_1 == 0;
    }
  }
  return false;
}



/* Entry: 10017cb9c; end: 10017d7cf;  */

char * FUN_10017cb9c(char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = param_1 + 8;
  if (*param_1 == '\x01') {
    if (pcVar1 != param_2) {
      func_0x00010084b784(pcVar1,*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
    }
    return pcVar1;
  }
  func_0x00010017cc20();
  *param_1 = '\x01';
  return pcVar1;
}



/* Entry: 10017d7d0; end: 10017d7e7;  */

void FUN_10017d7d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10017d7e8; end: 10017d95f; -[KSCrash initWithBasePath:] */

undefined8 * FUN_10017d7e8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined1 auStack_22c [500];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010017d7e0();
  puStack_238 = PTR_PTR_1126f4cb0;
  puVar1 = &uStack_240;
  uStack_240 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10016a4bc();
    func_0x000107c61180();
    func_0x000107c52e6c(puVar1);
    func_0x00010017d7d8();
    func_0x000107c52bf0(puVar1);
    puVar2 = puVar1;
    func_0x000107c3e6a0();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar2 == (undefined8 *)0x0) {
      func_0x000106ae5c20();
      param_3 = (undefined8 *)0x91;
      func_0x000106aeea5c();
      puVar1 = (undefined8 *)0x0;
      goto LAB_10017d930;
    }
    func_0x000107c53fdc(puVar1);
    func_0x000107c554b4(puVar1);
    func_0x000107c53284(puVar1);
    func_0x000107c56350(puVar1);
    func_0x000107c58d34(puVar1);
    func_0x000107c567c0(puVar1);
    func_0x000107c3e6a0();
    func_0x000107c61180();
    FUN_10017dc74();
    func_0x000107c3ac4c();
    param_3 = (undefined8 *)&UNK_10f3b126d;
    func_0x000107c61318(auStack_22c,500,&UNK_10f3b126d);
    func_0x00010017d7d8();
    FUN_10017dc7c(auStack_22c);
  }
  func_0x00010018ac7c();
LAB_10017d930:
  func_0x00010016a53c();
  func_0x00010016a534();
  func_0x00010018ac84(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return param_3;
}



/* Entry: 10017d960; end: 10017d96f;  */

void FUN_10017d960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10017d970; end: 10017d98f; -[KSCrash setBundleName:] */

void FUN_10017d970(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10017d960();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10017d990; end: 10017d997;  */

void FUN_10017d990(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}


