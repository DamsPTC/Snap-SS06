/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e833ec; end: 101e83553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e833ec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  double dVar5;
  undefined4 uVar6;
  double dVar7;
  double dStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  
  func_0x000107c600d4();
  lVar3 = _DAT_112e346d0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e346d0);
  dVar7 = param_1;
  if (lVar2 == 0) {
LAB_101e83468:
    dVar5 = *(double *)PTR__kCMTimeZero_110348670;
    uVar6 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar1 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
    uVar4 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  }
  else {
    func_0x000107c40f5c();
    func_0x000107c61180();
    if (lVar2 == 0) goto LAB_101e83468;
    func_0x000107c42378(&dStack_88);
    dVar5 = dStack_88;
    uVar6 = (undefined4)uStack_80;
    uVar1 = uStack_80._4_4_;
    uVar4 = CONCAT71(uStack_77,uStack_78);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c600d4(dVar5,CONCAT44(uVar1,uVar6),uVar4);
  if (dVar7 < param_1) {
    return;
  }
  func_0x000107c600d4(param_2,param_3,param_4);
  lVar3 = *(long *)(unaff_x20 + lVar3);
  dVar5 = dVar7;
  if (lVar3 != 0) {
    func_0x000107c40f5c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c42378(&dStack_88);
      uVar4 = CONCAT71(uStack_77,uStack_78);
      func_0x000107c615e8(lVar3);
      goto LAB_101e83508;
    }
  }
  dStack_88 = *(double *)PTR__kCMTimeZero_110348670;
  uStack_80._0_4_ = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_80._4_4_ = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
  uVar4 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
LAB_101e83508:
  func_0x000107c600d4(dStack_88,CONCAT44(uStack_80._4_4_,(undefined4)uStack_80),uVar4);
  uStack_78 = 0;
  dStack_88 = dVar7;
  uStack_80 = dVar5;
  func_0x0001002a64a8(&dStack_88);
  return;
}



/* Entry: 101e83554; end: 101e835e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e83554(void)

{
  int iVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  func_0x000103b79094(0);
  iVar1 = (int)*(undefined8 *)(unaff_x20 + _DAT_112e346b0);
  func_0x000107c43d18();
  if ((iVar1 != 0) && (func_0x0001000c74f0(&uStack_40), (char)uStack_40 != '\x01')) {
    return;
  }
  uStack_38 = 0;
  uStack_40 = 1;
  uStack_30 = 3;
  func_0x0001002a64a8(&uStack_40);
  return;
}



/* Entry: 101e835e8; end: 101e8378f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e835e8(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auStack_78 [24];
  
  lVar8 = _DAT_112e346c0;
  lVar7 = 0x6c6c756e;
  puVar5 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_112e346c0,puVar5,0,0);
  lVar8 = *(long *)(unaff_x20 + lVar8);
  puVar9 = puVar5;
  if (lVar8 != 0) {
    lVar3 = lVar8;
    func_0x000107c615f0();
    func_0x000107c40518();
    func_0x000107c31188();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar6 = lVar3;
      func_0x000107c5faec();
      puVar9 = puVar5;
      func_0x000107c61170(lVar3);
      func_0x000107c615e8(lVar8);
      goto LAB_101e83690;
    }
    func_0x000107c615e8(lVar8);
    puVar9 = puVar5;
  }
  puVar5 = (undefined1 *)0xe400000000000000;
  lVar6 = 0x6c6c756e;
LAB_101e83690:
  iVar2 = (int)*(undefined8 *)(unaff_x20 + _DAT_112e346b0);
  func_0x000107c408ac();
  lVar8 = 0xc;
  if (iVar2 != 0) {
    lVar8 = 0xd;
  }
  puVar4 = PTR_PTR_1126bff50;
  func_0x000107c61168(PTR_PTR_1126bff50);
  func_0x000107c5a9bc();
  func_0x000107c61180();
  if (-1 < (long)param_2) {
    if (param_2 >> 0x20 == 0) {
      func_0x000107c311dc();
      func_0x000107c61180();
      if (lVar8 == 0) {
        puVar9 = (undefined1 *)0xe400000000000000;
      }
      else {
        lVar7 = lVar8;
        func_0x000107c5faec();
        func_0x000107c61170(lVar8);
      }
      func_0x000107c5fadc(lVar7,puVar9);
      func_0x000107c6142c(puVar9);
      func_0x000107c5fadc(lVar6,puVar5);
      func_0x000107c6142c(puVar5);
      func_0x000107c4ba88(param_1,puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e83790);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e8378c);
  (*pcVar1)();
}



/* Entry: 101e83790; end: 101e838fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e83790(double param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_a0 [16];
  undefined8 *puStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_3 == (undefined8 *)0x0) {
    iVar1 = (int)*(undefined8 *)(unaff_x20 + _DAT_112e346b0);
    func_0x000107c425e0();
    if (iVar1 != 0) {
      param_1 = 1.48219693752374e-323;
      uStack_78 = 0;
      uStack_80 = 3;
      uStack_70 = 3;
      func_0x0001002a64a8(*(undefined8 *)(unaff_x20 + _DAT_112e34688),&uStack_80);
    }
  }
  if (*(char *)(unaff_x20 + _DAT_112e346b0 + 0xf) == '\x01') {
    func_0x000107c5ddfc();
    func_0x000107c61180();
    if (param_2 == 0) {
      if (param_3 != (undefined8 *)0x0) {
        func_0x000107c61174();
        puVar2 = param_3;
        func_0x0001000298f0();
        func_0x000107c61428();
        uVar4 = *puVar2;
        uVar3 = 0;
        puStack_90 = param_3;
        func_0x000100f6e330(0);
        func_0x000107c61174(uVar4);
        func_0x0001048d866c(&uStack_60,0xd00000000000001a,0x800000010f0167e0,FUN_101e83958,
                            auStack_a0,uVar3);
        func_0x000107c61170(uVar4);
        func_0x000107c43904(param_3);
        FUN_101e81194(uStack_60,uStack_58,(float)param_1);
        func_0x000107c61170(param_3);
      }
    }
    else {
      func_0x000107c615e8();
    }
  }
  return;
}



/* Entry: 101e838fc; end: 101e83957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e838fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(unaff_x20 + _DAT_112e346b8) != '\0') {
    uStack_30 = param_1;
    uStack_28 = param_2;
    func_0x000107c61434(param_2);
    func_0x0001002a64a8(&uStack_30);
    func_0x000107c6142c(param_2);
  }
  return;
}



/* Entry: 101e83958; end: 101e8395f;  */

void FUN_101e83958(double *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  undefined1 auStack_60 [48];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  uVar1 = uVar2;
  func_0x000107c5de58();
  dVar3 = (double)uVar1;
  uVar1 = uVar2;
  func_0x000107c5ddb4();
  dVar4 = (double)uVar1;
  func_0x000107c4ecc4(auStack_60,uVar2);
  func_0x000107c609f8(auStack_60);
  *param_1 = dVar3;
  param_1[1] = dVar4;
  return;
}



/* Entry: 101e83960; end: 101e839c3;  */

void FUN_101e83960(void)

{
  func_0x000100cd4db8();
  return;
}



/* Entry: 101e839c4; end: 101e839e7;  */

void FUN_101e839c4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 101e839e8; end: 101e83a37;  */

void FUN_101e839e8(void)

{
  func_0x000101e83a18();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101e83a38; end: 101e83a83; -[_TtC28SCPlaybackPlayerServicesImpl22NeoPlayerVolumeControl volume] */

undefined8 FUN_101e83a38(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5e028();
    func_0x000107c615e8(param_2);
  }
  return param_1;
}



/* Entry: 101e83a84; end: 101e83ad3; -[_TtC28SCPlaybackPlayerServicesImpl22NeoPlayerVolumeControl setVolume:] */

void FUN_101e83a84(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c5a604(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
    return;
  }
  return;
}



/* Entry: 101e83ad4; end: 101e83b0f; -[_TtC28SCPlaybackPlayerServicesImpl22NeoPlayerVolumeControl isMuted] */

void FUN_101e83ad4(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4d308();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 101e83b10; end: 101e83b53; -[_TtC28SCPlaybackPlayerServicesImpl22NeoPlayerVolumeControl setIsMuted:] */

void FUN_101e83b10(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c568bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 101e83b54; end: 101e83b97;  */

void FUN_101e83b54(void)

{
  long unaff_x20;
  
  FUN_101e83b98(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e83b98; end: 101e83bbb;  */

undefined8 FUN_101e83b98(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101e83bbc; end: 101e83bd3;  */

void FUN_101e83bbc(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 101e83bd4; end: 101e83c33;  */

ulong * FUN_101e83bd4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    *param_1 = uVar1;
    uVar2 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    uVar2 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar2;
    func_0x000107c61174(uVar1);
    return param_1;
  }
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 101e83c34; end: 101e83cf3;  */

ulong * FUN_101e83c34(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      uVar2 = param_2[2];
      uVar1 = param_2[1];
      uVar3 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar3;
      param_1[2] = uVar2;
      param_1[1] = uVar1;
      func_0x000107c61174();
      return param_1;
    }
  }
  else {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      func_0x000107c61174();
      func_0x000107c61170(uVar2);
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      param_1[4] = param_2[4];
      return param_1;
    }
    func_0x000107c61170(uVar2);
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return param_1;
}



/* Entry: 101e83cf4; end: 101e83d87;  */

ulong * FUN_101e83cf4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  if (uVar1 < 0xffffffff) {
    uVar1 = *param_2;
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    param_1[4] = param_2[4];
  }
  else if (*param_2 < 0xffffffff) {
    func_0x000107c61170(uVar1);
    uVar1 = *param_2;
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    param_1[4] = param_2[4];
  }
  else {
    *param_1 = *param_2;
    func_0x000107c61170(uVar1);
    uVar1 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar1;
    uVar1 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 101e83d88; end: 101e83e97;  */

int FUN_101e83d88(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 101e83e98; end: 101e83f2b;  */

long FUN_101e83e98(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))();
  return param_1;
}



/* Entry: 101e83f2c; end: 101e83fcb;  */

int FUN_101e83f2c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101e83fcc; end: 101e84033;  */

/* WARNING: Possible PIC construction at 0x000101e843bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e843c0) */

void FUN_101e83fcc(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 *puVar11;
  long lVar12;
  long unaff_x20;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long *unaff_x22;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  ulong unaff_x29;
  ulong *puVar20;
  long lStack_130;
  long lStack_128;
  ulong auStack_120 [2];
  undefined1 auStack_110 [16];
  long lStack_100;
  ulong uStack_a0;
  code *pcStack_98;
  long lStack_90;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_68;
  ulong uStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[5] = param_2;
  unaff_x22[6] = unaff_x20;
  unaff_x22[4] = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101e84034;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
    return;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_28 = FUN_101e84034;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)unaff_x22[5];
  func_0x000107c60a1c();
  func_0x000107c61180();
  unaff_x22[7] = (long)puVar3;
  if (puVar3 == (undefined *)0x0) {
    FUN_101e6f23c();
    puVar5 = &UNK_1106e9908;
    func_0x000107c613f8(&UNK_1106e9908,puVar3,0,0);
    *puVar3 = 10;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x000101e84174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else {
    lVar4 = unaff_x22[6];
    uVar16 = *(undefined8 *)(lVar4 + 0x18);
    lVar12 = *(long *)(lVar4 + 0x20);
    func_0x0001000a8868(lVar4,uVar16);
    piVar18 = *(int **)(lVar12 + 0x10);
    iVar1 = *piVar18;
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulong)(uint)piVar18[1];
    func_0x000107c615b8();
    unaff_x22[8] = (long)UNRECOVERED_JUMPTABLE_00;
    *(long **)UNRECOVERED_JUMPTABLE_00 = unaff_x22;
    *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_101e8417c;
    puVar5 = puVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x000101e840fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar18))(puVar3,uVar16,lVar12);
      return;
    }
  }
  func_0x000107c60e78();
  uStack_80 = (ulong)&uStack_30 | 0x1000000000000000;
  pcStack_78 = FUN_101e8417c;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(code **)(lVar12 + 0x48) = UNRECOVERED_JUMPTABLE_00;
  *(undefined **)(lVar12 + 0x50) = puVar5;
  func_0x000107c615c0(*(undefined8 *)(lVar12 + 0x40));
  if (puVar5 == (undefined *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101e84220;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x101e844b8;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_a0 = (ulong)&uStack_80 | 0x1000000000000000;
  plVar2 = (long *)auStack_110;
  pcStack_98 = FUN_101e84220;
  puVar20 = &uStack_a0;
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = (long *)(lVar4 + 0x10);
  *plVar13 = 0;
  func_0x000107c60a60(*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,
                      *(undefined8 *)(lVar4 + 0x48),plVar13);
  lVar12 = *plVar13;
  uVar16 = *(undefined8 *)(lVar4 + 0x48);
  if (lVar12 == 0) {
    FUN_101e6f23c();
    func_0x000107c613f8(&UNK_1106e9908,lVar12,0,0);
    *(undefined **)(lVar12 + 0x20) = &UNK_1106e9b40;
    uVar16 = 0x101e843c0;
  }
  else {
    uVar14 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x60) = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x70) = 0;
    *(undefined8 *)(lVar4 + 0x68) = 0;
    *(undefined8 *)(lVar4 + 0x80) = 0;
    *(undefined8 *)(lVar4 + 0x78) = 0;
    *(undefined8 *)(lVar4 + 0x90) = 0;
    *(undefined8 *)(lVar4 + 0x88) = 0;
    *(undefined8 *)(lVar4 + 0x98) = 0;
    func_0x000107c61174();
    func_0x000107c60a28(uVar14,0,lVar4 + 0x58);
    *(undefined8 *)(lVar4 + 0x18) = 0;
    puVar6 = (undefined1 *)0x0;
    func_0x000107c60a18(0,uVar16,lVar12,lVar4 + 0x58,lVar4 + 0x18);
    lVar15 = *(long *)(lVar4 + 0x18);
    lVar19 = *(long *)(lVar4 + 0x48);
    lVar17 = *(long *)(lVar4 + 0x38);
    if (lVar15 == 0) {
      puVar11 = puVar6;
      FUN_101e6f23c();
      puVar3 = &UNK_1106e9908;
      func_0x000107c613f8(&UNK_1106e9908,puVar11,0,0);
      *(undefined **)(puVar11 + 0x20) = &UNK_1106e9b68;
      func_0x000101e84598();
      *(undefined **)(puVar11 + 0x28) = puVar3;
      func_0x000101e845d8();
      *(undefined **)(puVar11 + 0x30) = puVar3;
      *(int *)(puVar11 + 8) = (int)puVar6;
      *puVar11 = 0xf;
      func_0x000107c61654();
      func_0x000107c61170(lVar12);
      func_0x000107c61170(lVar19);
      func_0x000107c61170(lVar17);
      func_0x000107c61170(*(undefined8 *)(lVar4 + 0x18));
      func_0x000107c61170(*(undefined8 *)(lVar4 + 0x10));
      UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar4 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) goto LAB_101e84490;
    }
    else {
      plVar13 = *(long **)(lVar4 + 0x20);
      func_0x000107c61174(lVar15);
      lVar7 = lVar17;
      func_0x000107c60ac8();
      lVar8 = lVar17;
      func_0x000107c60ab8();
      lVar9 = lVar19;
      func_0x000107c60ac8();
      lVar10 = lVar19;
      func_0x000107c60ab8();
      func_0x000107c61170(lVar12);
      func_0x000107c61170(lVar19);
      func_0x000107c61170(lVar17);
      func_0x000107c61170(*(undefined8 *)(lVar4 + 0x18));
      func_0x000107c61170(*(undefined8 *)(lVar4 + 0x10));
      *plVar13 = lVar15;
      plVar13[1] = (long)(double)lVar7;
      plVar13[2] = (long)(double)lVar8;
      plVar13[3] = (long)(double)lVar9;
      plVar13[4] = (long)(double)lVar10;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar4 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) {
LAB_101e84490:
                    /* WARNING: Could not recover jumptable at 0x000101e844b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    func_0x000107c60e78();
    auStack_120[0] = (ulong)puVar20 | 0x1000000000000000;
    plVar2 = &lStack_130;
    auStack_120[1] = 0x101e844b8;
    puVar20 = auStack_120;
    lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_128 = lVar4;
    func_0x000107c61170(*(undefined8 *)(lVar4 + 0x38));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
                    /* WARNING: Could not recover jumptable at 0x000101e84510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 8))();
      return;
    }
    uVar16 = 0x101e84518;
    func_0x000107c60e78();
  }
  if (puRam0000000112e34910 == (undefined *)0x0) {
    *(ulong **)((long)plVar2 + -0x10) = puVar20;
    *(undefined8 *)((long)plVar2 + -8) = uVar16;
    puVar3 = &DAT_10dc66374;
    func_0x000107c61520(&DAT_10dc66374,&UNK_1106e9b40);
    puRam0000000112e34910 = puVar3;
    return;
  }
  return;
}



/* Entry: 101e84034; end: 101e8417b;  */

/* WARNING: Possible PIC construction at 0x000101e843bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e843c0) */

void FUN_101e84034(void)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long *unaff_x22;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  ulong unaff_x29;
  ulong *puVar20;
  long lStack_110;
  long lStack_108;
  ulong auStack_100 [2];
  undefined1 auStack_f0 [16];
  long lStack_e0;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_70;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_48;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)unaff_x22[5];
  func_0x000107c60a1c();
  func_0x000107c61180();
  unaff_x22[7] = (long)puVar3;
  if (puVar3 == (undefined *)0x0) {
    FUN_101e6f23c();
    puVar5 = &UNK_1106e9908;
    func_0x000107c613f8(&UNK_1106e9908,puVar3,0,0);
    *puVar3 = 10;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x000101e84174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else {
    lVar4 = unaff_x22[6];
    uVar16 = *(undefined8 *)(lVar4 + 0x18);
    lVar12 = *(long *)(lVar4 + 0x20);
    func_0x0001000a8868(lVar4,uVar16);
    piVar18 = *(int **)(lVar12 + 0x10);
    iVar1 = *piVar18;
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulong)(uint)piVar18[1];
    func_0x000107c615b8();
    unaff_x22[8] = (long)UNRECOVERED_JUMPTABLE_00;
    *(long **)UNRECOVERED_JUMPTABLE_00 = unaff_x22;
    *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_101e8417c;
    puVar5 = puVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x000101e840fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar18))(puVar3,uVar16,lVar12);
      return;
    }
  }
  func_0x000107c60e78();
  uStack_60 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_58 = FUN_101e8417c;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(code **)(lVar12 + 0x48) = UNRECOVERED_JUMPTABLE_00;
  *(undefined **)(lVar12 + 0x50) = puVar5;
  func_0x000107c615c0(*(undefined8 *)(lVar12 + 0x40));
  if (puVar5 == (undefined *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101e84220;
      goto LAB_101e84204;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x101e844b8;
LAB_101e84204:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
    return;
  }
  func_0x000107c60e78();
  uStack_80 = (ulong)&uStack_60 | 0x1000000000000000;
  plVar2 = (long *)auStack_f0;
  pcStack_78 = FUN_101e84220;
  puVar20 = &uStack_80;
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = (long *)(lVar4 + 0x10);
  *plVar13 = 0;
  func_0x000107c60a60(*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,
                      *(undefined8 *)(lVar4 + 0x48),plVar13);
  lVar12 = *plVar13;
  uVar16 = *(undefined8 *)(lVar4 + 0x48);
  if (lVar12 == 0) {
    FUN_101e6f23c();
    func_0x000107c613f8(&UNK_1106e9908,lVar12,0,0);
    *(undefined **)(lVar12 + 0x20) = &UNK_1106e9b40;
    uVar16 = 0x101e843c0;
  }
  else {
    uVar14 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x60) = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x70) = 0;
    *(undefined8 *)(lVar4 + 0x68) = 0;
    *(undefined8 *)(lVar4 + 0x80) = 0;
    *(undefined8 *)(lVar4 + 0x78) = 0;
    *(undefined8 *)(lVar4 + 0x90) = 0;
    *(undefined8 *)(lVar4 + 0x88) = 0;
    *(undefined8 *)(lVar4 + 0x98) = 0;
    func_0x000107c61174();
    func_0x000107c60a28(uVar14,0,lVar4 + 0x58);
    *(undefined8 *)(lVar4 + 0x18) = 0;
    puVar6 = (undefined1 *)0x0;
    func_0x000107c60a18(0,uVar16,lVar12,lVar4 + 0x58,lVar4 + 0x18);
    lVar15 = *(long *)(lVar4 + 0x18);
    lVar19 = *(long *)(lVar4 + 0x48);
    lVar17 = *(long *)(lVar4 + 0x38);
    if (lVar15 == 0) {
      puVar11 = puVar6;
      FUN_101e6f23c();
      puVar3 = &UNK_1106e9908;
      func_0x000107c613f8(&UNK_1106e9908,puVar11,0,0);
      *(undefined **)(puVar11 + 0x20) = &UNK_1106e9b68;
      func_0x000101e84598();
      *(undefined **)(puVar11 + 0x28) = puVar3;
      func_0x000101e845d8();
      *(undefined **)(puVar11 + 0x30) = puVar3;
      *(int *)(puVar11 + 8) = (int)puVar6;
      *puVar11 = 0xf;
      func_0x000107c61654();
      func_0x000107c61170(lVar12);
      func_0x000107c61170(lVar19);
      func_0x000107c61170(lVar17);
      func_0x000107c61170(*(undefined8 *)(lVar4 + 0x18));
      func_0x000107c61170(*(undefined8 *)(lVar4 + 0x10));
      UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar4 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) goto LAB_101e84490;
    }
    else {
      plVar13 = *(long **)(lVar4 + 0x20);
      func_0x000107c61174(lVar15);
      lVar7 = lVar17;
      func_0x000107c60ac8();
      lVar8 = lVar17;
      func_0x000107c60ab8();
      lVar9 = lVar19;
      func_0x000107c60ac8();
      lVar10 = lVar19;
      func_0x000107c60ab8();
      func_0x000107c61170(lVar12);
      func_0x000107c61170(lVar19);
      func_0x000107c61170(lVar17);
      func_0x000107c61170(*(undefined8 *)(lVar4 + 0x18));
      func_0x000107c61170(*(undefined8 *)(lVar4 + 0x10));
      *plVar13 = lVar15;
      plVar13[1] = (long)(double)lVar7;
      plVar13[2] = (long)(double)lVar8;
      plVar13[3] = (long)(double)lVar9;
      plVar13[4] = (long)(double)lVar10;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar4 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
LAB_101e84490:
                    /* WARNING: Could not recover jumptable at 0x000101e844b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    func_0x000107c60e78();
    auStack_100[0] = (ulong)puVar20 | 0x1000000000000000;
    plVar2 = &lStack_110;
    auStack_100[1] = 0x101e844b8;
    puVar20 = auStack_100;
    lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_108 = lVar4;
    func_0x000107c61170(*(undefined8 *)(lVar4 + 0x38));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
                    /* WARNING: Could not recover jumptable at 0x000101e84510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 8))();
      return;
    }
    uVar16 = 0x101e84518;
    func_0x000107c60e78();
  }
  if (puRam0000000112e34910 == (undefined *)0x0) {
    *(ulong **)((long)plVar2 + -0x10) = puVar20;
    *(undefined8 *)((long)plVar2 + -8) = uVar16;
    puVar3 = &DAT_10dc66374;
    func_0x000107c61520(&DAT_10dc66374,&UNK_1106e9b40);
    puRam0000000112e34910 = puVar3;
    return;
  }
  return;
}



/* Entry: 101e8417c; end: 101e8421f;  */

/* WARNING: Possible PIC construction at 0x000101e843bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e843c0) */

void FUN_101e8417c(undefined8 param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long *unaff_x22;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong unaff_x29;
  ulong *puVar17;
  long lStack_c0;
  long lStack_b8;
  ulong auStack_b0 [2];
  undefined1 auStack_a0 [16];
  long lStack_90;
  ulong uStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *unaff_x22;
  lVar13 = *unaff_x22;
  *(undefined8 *)(lVar9 + 0x48) = param_1;
  *(long *)(lVar9 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar9 + 0x40));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
      UNRECOVERED_JUMPTABLE = FUN_101e84220;
      goto LAB_101e84204;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
    UNRECOVERED_JUMPTABLE = (code *)0x101e844b8;
LAB_101e84204:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
    return;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  plVar1 = (long *)auStack_a0;
  pcStack_28 = FUN_101e84220;
  puVar17 = &uStack_30;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)(lVar13 + 0x10);
  *plVar10 = 0;
  func_0x000107c60a60(*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,
                      *(undefined8 *)(lVar13 + 0x48),plVar10);
  lVar9 = *plVar10;
  uVar14 = *(undefined8 *)(lVar13 + 0x48);
  if (lVar9 == 0) {
    FUN_101e6f23c();
    func_0x000107c613f8(&UNK_1106e9908,lVar9,0,0);
    *(undefined **)(lVar9 + 0x20) = &UNK_1106e9b40;
    uVar14 = 0x101e843c0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar13 + 0x28);
    *(undefined8 *)(lVar13 + 0x60) = 0;
    *(undefined8 *)(lVar13 + 0x58) = 0;
    *(undefined8 *)(lVar13 + 0x70) = 0;
    *(undefined8 *)(lVar13 + 0x68) = 0;
    *(undefined8 *)(lVar13 + 0x80) = 0;
    *(undefined8 *)(lVar13 + 0x78) = 0;
    *(undefined8 *)(lVar13 + 0x90) = 0;
    *(undefined8 *)(lVar13 + 0x88) = 0;
    *(undefined8 *)(lVar13 + 0x98) = 0;
    func_0x000107c61174();
    func_0x000107c60a28(uVar11,0,lVar13 + 0x58);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    puVar2 = (undefined1 *)0x0;
    func_0x000107c60a18(0,uVar14,lVar9,lVar13 + 0x58,lVar13 + 0x18);
    lVar12 = *(long *)(lVar13 + 0x18);
    lVar16 = *(long *)(lVar13 + 0x48);
    lVar15 = *(long *)(lVar13 + 0x38);
    if (lVar12 == 0) {
      puVar7 = puVar2;
      FUN_101e6f23c();
      puVar8 = &UNK_1106e9908;
      func_0x000107c613f8(&UNK_1106e9908,puVar7,0,0);
      *(undefined **)(puVar7 + 0x20) = &UNK_1106e9b68;
      func_0x000101e84598();
      *(undefined **)(puVar7 + 0x28) = puVar8;
      func_0x000101e845d8();
      *(undefined **)(puVar7 + 0x30) = puVar8;
      *(int *)(puVar7 + 8) = (int)puVar2;
      *puVar7 = 0xf;
      func_0x000107c61654();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar16);
      func_0x000107c61170(lVar15);
      func_0x000107c61170(*(undefined8 *)(lVar13 + 0x18));
      func_0x000107c61170(*(undefined8 *)(lVar13 + 0x10));
      UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) goto LAB_101e84490;
    }
    else {
      plVar10 = *(long **)(lVar13 + 0x20);
      func_0x000107c61174(lVar12);
      lVar3 = lVar15;
      func_0x000107c60ac8();
      lVar4 = lVar15;
      func_0x000107c60ab8();
      lVar5 = lVar16;
      func_0x000107c60ac8();
      lVar6 = lVar16;
      func_0x000107c60ab8();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar16);
      func_0x000107c61170(lVar15);
      func_0x000107c61170(*(undefined8 *)(lVar13 + 0x18));
      func_0x000107c61170(*(undefined8 *)(lVar13 + 0x10));
      *plVar10 = lVar12;
      plVar10[1] = (long)(double)lVar3;
      plVar10[2] = (long)(double)lVar4;
      plVar10[3] = (long)(double)lVar5;
      plVar10[4] = (long)(double)lVar6;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
LAB_101e84490:
                    /* WARNING: Could not recover jumptable at 0x000101e844b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    func_0x000107c60e78();
    auStack_b0[0] = (ulong)puVar17 | 0x1000000000000000;
    plVar1 = &lStack_c0;
    auStack_b0[1] = 0x101e844b8;
    puVar17 = auStack_b0;
    lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_b8 = lVar13;
    func_0x000107c61170(*(undefined8 *)(lVar13 + 0x38));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
                    /* WARNING: Could not recover jumptable at 0x000101e84510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar13 + 8))();
      return;
    }
    uVar14 = 0x101e84518;
    func_0x000107c60e78();
  }
  if (puRam0000000112e34910 == (undefined *)0x0) {
    *(ulong **)((long)plVar1 + -0x10) = puVar17;
    *(undefined8 *)((long)plVar1 + -8) = uVar14;
    puVar8 = &DAT_10dc66374;
    func_0x000107c61520(&DAT_10dc66374,&UNK_1106e9b40);
    puRam0000000112e34910 = puVar8;
    return;
  }
  return;
}



/* Entry: 101e84220; end: 101e844b7;  */

/* WARNING: Possible PIC construction at 0x000101e843bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e843c0) */

void FUN_101e84220(void)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong unaff_x29;
  ulong *puVar16;
  long lStack_a0;
  ulong auStack_90 [2];
  undefined1 auStack_80 [16];
  long lStack_70;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  plVar1 = (long *)auStack_80;
  puVar16 = &uStack_10;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)(unaff_x22 + 0x10);
  *plVar10 = 0;
  func_0x000107c60a60(*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,
                      *(undefined8 *)(unaff_x22 + 0x48),plVar10);
  lVar2 = *plVar10;
  uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
  if (lVar2 == 0) {
    FUN_101e6f23c();
    func_0x000107c613f8(&UNK_1106e9908,lVar2,0,0);
    *(undefined **)(lVar2 + 0x20) = &UNK_1106e9b40;
    uVar13 = 0x101e843c0;
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x60) = 0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0;
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0;
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    func_0x000107c61174();
    func_0x000107c60a28(uVar11,0,unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    puVar3 = (undefined1 *)0x0;
    func_0x000107c60a18(0,uVar13,lVar2,unaff_x22 + 0x58,unaff_x22 + 0x18);
    lVar12 = *(long *)(unaff_x22 + 0x18);
    lVar15 = *(long *)(unaff_x22 + 0x48);
    lVar14 = *(long *)(unaff_x22 + 0x38);
    if (lVar12 == 0) {
      puVar8 = puVar3;
      FUN_101e6f23c();
      puVar9 = &UNK_1106e9908;
      func_0x000107c613f8(&UNK_1106e9908,puVar8,0,0);
      *(undefined **)(puVar8 + 0x20) = &UNK_1106e9b68;
      func_0x000101e84598();
      *(undefined **)(puVar8 + 0x28) = puVar9;
      func_0x000101e845d8();
      *(undefined **)(puVar8 + 0x30) = puVar9;
      *(int *)(puVar8 + 8) = (int)puVar3;
      *puVar8 = 0xf;
      func_0x000107c61654();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar15);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x18));
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x10));
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto LAB_101e84490;
    }
    else {
      plVar10 = *(long **)(unaff_x22 + 0x20);
      func_0x000107c61174(lVar12);
      lVar4 = lVar14;
      func_0x000107c60ac8();
      lVar5 = lVar14;
      func_0x000107c60ab8();
      lVar6 = lVar15;
      func_0x000107c60ac8();
      lVar7 = lVar15;
      func_0x000107c60ab8();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar15);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x18));
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x10));
      *plVar10 = lVar12;
      plVar10[1] = (long)(double)lVar4;
      plVar10[2] = (long)(double)lVar5;
      plVar10[3] = (long)(double)lVar6;
      plVar10[4] = (long)(double)lVar7;
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
LAB_101e84490:
                    /* WARNING: Could not recover jumptable at 0x000101e844b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    func_0x000107c60e78();
    auStack_90[0] = (ulong)puVar16 | 0x1000000000000000;
    plVar1 = &lStack_a0;
    auStack_90[1] = 0x101e844b8;
    puVar16 = auStack_90;
    lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x38));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
                    /* WARNING: Could not recover jumptable at 0x000101e84510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    uVar13 = 0x101e84518;
    func_0x000107c60e78();
  }
  if (puRam0000000112e34910 == (undefined *)0x0) {
    *(ulong **)((long)plVar1 + -0x10) = puVar16;
    *(undefined8 *)((long)plVar1 + -8) = uVar13;
    puVar9 = &DAT_10dc66374;
    func_0x000107c61520(&DAT_10dc66374,&UNK_1106e9b40);
    puRam0000000112e34910 = puVar9;
    return;
  }
  return;
}



/* Entry: 101e844b8; end: 101e84617;  */

void FUN_101e844b8(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x38));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x000101e84510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  if (puRam0000000112e34910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc66374;
  func_0x000107c61520(&DAT_10dc66374,&UNK_1106e9b40);
  puRam0000000112e34910 = puVar1;
  return;
}



/* Entry: 101e84618; end: 101e8467f;  */

int FUN_101e84618(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101e84680; end: 101e846e3;  */

long FUN_101e84680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_101e70270(param_3,unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x48) = param_4;
  return unaff_x20;
}



/* Entry: 101e846e4; end: 101e8471f;  */

void FUN_101e846e4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e84720; end: 101e847f7;  */

void FUN_101e84720(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  
  lVar4 = *unaff_x20;
  uVar3 = *(undefined8 *)(lVar4 + 0x10);
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  func_0x000100996f58(lVar4 + 0x20,auStack_78);
  uVar5 = *(undefined8 *)(lVar4 + 0x48);
  uVar2 = 0;
  func_0x000101e868a4();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c615f0(uVar1);
  func_0x000107c6157c(uVar5);
  FUN_101e864f4(uVar3,uVar1,param_2,auStack_78,param_3,uVar5);
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar5);
  param_1[3] = uVar2;
  param_1[4] = &PTR_DAT_110491310;
  *param_1 = uVar3;
  return;
}



/* Entry: 101e847f8; end: 101e84eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101e847f8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(param_1 + _DAT_11307a4a0);
  *(long *)(unaff_x20 + 0x18) = param_2;
  *(undefined **)(unaff_x20 + 0x30) = puVar9;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  *(undefined8 *)(unaff_x20 + 0x20) = param_6;
  *(undefined **)(unaff_x20 + 0x28) = puVar9;
  func_0x000107c61174();
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_6);
  uVar10 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0169c0);
  lVar4 = param_2;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar10);
  *(char *)(unaff_x20 + 0x58) = (char)lVar4;
  uVar10 = 0xd000000000000042;
  func_0x000107c5fadc(0xd000000000000042,0x800000010f0169f0);
  lVar4 = param_2;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar10);
  *(char *)(unaff_x20 + 0x59) = (char)lVar4;
  lVar4 = param_2;
  FUN_101e86048();
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(char *)(unaff_x20 + 0x50) = (char)lVar4;
  bVar2 = (byte)((ulong)lVar4 >> 8);
  *(byte *)(unaff_x20 + 0x51) = bVar2;
  bVar3 = (byte)((ulong)lVar4 >> 0x10);
  *(byte *)(unaff_x20 + 0x52) = bVar3;
  *(char *)(unaff_x20 + 0x57) = (char)((ulong)lVar4 >> 0x38);
  *(int *)(unaff_x20 + 0x53) = (int)((ulong)lVar4 >> 0x18);
  if (((uint)lVar4 & 0xff) == 1) {
    uVar10 = 0xd00000000000001d;
    uVar11 = 0x800000010f016a40;
    lVar4 = param_2;
    FUN_101e8615c();
    if (lVar4 != 0) {
      uVar5 = 0xd00000000000002d;
      func_0x000107c5fadc(0xd00000000000002d,0x800000010f016a80);
      lVar7 = param_2;
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar5);
      lVar6 = 0;
      FUN_101e70534();
      func_0x000107c613fc();
      *(long *)(lVar6 + 0x10) = lVar4;
      *(undefined8 *)(lVar6 + 0x18) = uVar10;
      *(undefined8 *)(lVar6 + 0x20) = uVar11;
      *(char *)(lVar6 + 0x28) = (char)lVar7;
      *(byte *)(lVar6 + 0x29) = bVar2 & 1;
      *(byte *)(lVar6 + 0x2a) = bVar3 & 1;
      func_0x000100996f58(param_4,lVar6 + 0x30);
      *(long *)(unaff_x20 + 0x60) = lVar6;
    }
  }
  func_0x000101e84b1c(param_3);
  lVar7 = 0;
  FUN_101e70d48();
  lVar4 = lVar7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e342b0);
  *puVar1 = 0xd000000000000016;
  puVar1[1] = 0x800000010f016a60;
  plVar8 = &lStack_70;
  lStack_70 = lVar4;
  lStack_68 = lVar7;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  puVar9 = &UNK_1104912f8;
  func_0x000107c613fc(&UNK_1104912f8,0x18,7);
  *(long **)(puVar9 + 0x10) = plVar8;
  func_0x000107c61174(plVar8);
  uVar10 = 2;
  func_0x0001001ca524(2,4,0x40,2,0,0,&UNK_10da1de58,puVar9,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(plVar8);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar10);
  func_0x0001000834e4(param_4);
  func_0x000107c615e8(param_2);
  func_0x000107c61574(param_6);
  return unaff_x20;
}



/* Entry: 101e84ef0; end: 101e84f5b;  */

void FUN_101e84ef0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101e84f5c; end: 101e8534b;  */

undefined1  [16] FUN_101e84f5c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulong uVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *apuStack_58 [3];
  
  if (param_1 == 1) {
    func_0x000107c61428(unaff_x20 + 0x30,apuStack_58,0,0);
    uVar14 = *(ulong *)(unaff_x20 + 0x30);
    lVar12 = *(long *)(uVar14 + 0x10);
    if (lVar12 == 0) {
      uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
      uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
      lVar12 = 0;
      func_0x000101e7d8dc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar12 + 0x10) = uVar15;
      *(undefined8 *)(lVar12 + 0x18) = uVar7;
      uVar13 = *(undefined8 *)(unaff_x20 + 0x60);
      uStack_68 = *(ulong *)(unaff_x20 + 0x50);
      uStack_70 = *(undefined8 *)(unaff_x20 + 0x48);
      func_0x000101e81a80(0);
      func_0x000107c610f8();
      func_0x000107c6157c(uVar13);
      func_0x000107c615f0(uVar15);
      func_0x000107c6157c(uVar7);
      FUN_101e86828(&uStack_70,auStack_80);
      uVar14 = 0x100;
      if (uStack_68._1_1_ == '\0') {
        uVar14 = 0;
      }
      uVar9 = 0x10000;
      if (uStack_68._2_1_ == '\0') {
        uVar9 = 0;
      }
      uVar2 = 0x1000000;
      if (uStack_68._3_1_ == '\0') {
        uVar2 = 0;
      }
      uVar3 = 0x100000000;
      if (uStack_68._4_1_ == '\0') {
        uVar3 = 0;
      }
      uVar4 = 0x10000000000;
      if (uStack_68._5_1_ == '\0') {
        uVar4 = 0;
      }
      uVar5 = 0x1000000000000;
      if (uStack_68._6_1_ == '\0') {
        uVar5 = 0;
      }
      uVar6 = 0x100000000000000;
      if (uStack_68._7_1_ == '\0') {
        uVar6 = 0;
      }
      FUN_101e7eae0(lVar12,uVar13,uStack_70,
                    uVar14 | uStack_68 & 0xff | uVar9 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6);
      ppuVar10 = &PTR_DAT_110491038;
      goto LAB_101e85194;
    }
    plVar1 = (long *)(uVar14 + 0x10) + lVar12 * 2;
    lVar12 = *plVar1;
    ppuVar10 = (undefined **)plVar1[1];
    func_0x000107c61428(unaff_x20 + 0x30,&uStack_70,0x21,0);
    func_0x000107c615f0(lVar12);
    uVar9 = uVar14;
    func_0x000107c61558();
    if ((uVar9 & 1) == 0) {
      FUN_101e86034();
      lVar11 = *(long *)(uVar14 + 0x10);
    }
    else {
      lVar11 = *(long *)(uVar14 + 0x10);
    }
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x101e851cc);
      (*pcVar8)();
    }
    uVar15 = *(undefined8 *)(uVar14 + (lVar11 + -1) * 0x10 + 0x20);
    *(long *)(uVar14 + 0x10) = lVar11 + -1;
    *(ulong *)(unaff_x20 + 0x30) = uVar14;
  }
  else {
    if (param_1 != 0) {
      func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                          "SCPlaybackPlayerServicesImpl/VideoPlayerPoolImpl.swift",0x36,2,0x83,0);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x101e85220);
      (*pcVar8)();
    }
    lVar12 = unaff_x20 + 0x28;
    ppuVar10 = apuStack_58;
    func_0x000107c61428(lVar12,ppuVar10,0,0);
    uVar14 = *(ulong *)(unaff_x20 + 0x28);
    lVar11 = *(long *)(uVar14 + 0x10);
    if (lVar11 == 0) {
      func_0x000101e85220();
      goto LAB_101e85194;
    }
    plVar1 = (long *)(uVar14 + 0x10) + lVar11 * 2;
    lVar12 = *plVar1;
    ppuVar10 = (undefined **)plVar1[1];
    func_0x000107c61428(unaff_x20 + 0x28,&uStack_70,0x21,0);
    func_0x000107c615f0(lVar12);
    uVar9 = uVar14;
    func_0x000107c61558();
    if ((uVar9 & 1) == 0) {
      FUN_101e86034();
      lVar11 = *(long *)(uVar14 + 0x10);
    }
    else {
      lVar11 = *(long *)(uVar14 + 0x10);
    }
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x101e851e4);
      (*pcVar8)();
    }
    uVar15 = *(undefined8 *)(uVar14 + (lVar11 + -1) * 0x10 + 0x20);
    *(long *)(uVar14 + 0x10) = lVar11 + -1;
    *(ulong *)(unaff_x20 + 0x28) = uVar14;
  }
  func_0x000107c614a8(&uStack_70);
  func_0x000107c615e8(uVar15);
LAB_101e85194:
  auVar16._8_8_ = ppuVar10;
  auVar16._0_8_ = lVar12;
  return auVar16;
}



/* Entry: 101e8534c; end: 101e85447;  */

void FUN_101e8534c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = 0;
  FUN_101e7a92c(0);
  puVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (puVar2 == (undefined8 *)0x0) {
    func_0x000101e81a80();
    puVar3 = param_1;
    func_0x000107c61480(param_1,puVar2);
    if (puVar3 == (undefined8 *)0x0) {
      FUN_101e86864();
      func_0x000107c613f8(&UNK_1106e8bd8,puVar3,0,0);
      *puVar3 = 0xd000000000000013;
      puVar3[1] = 0x800000010f016af0;
      func_0x000107c61654();
      return;
    }
    func_0x000107c61428(unaff_x20 + 0x30,auStack_48,0x21,0);
    lVar4 = unaff_x20 + 0x30;
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x28,auStack_48,0x21,0);
    lVar4 = unaff_x20 + 0x28;
  }
  FUN_101e85448(param_1,param_2,lVar4);
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 101e85448; end: 101e85653;  */

void FUN_101e85448(ulong param_1,long param_2,ulong *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  
  uVar9 = *param_3;
  uVar11 = *(ulong *)(uVar9 + 0x10);
  if (uVar11 != 0) {
    uVar6 = 0;
    plVar10 = (long *)(uVar9 + 0x28);
    do {
      if (*(ulong *)(uVar9 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101e85614);
        (*pcVar8)();
      }
      puVar3 = (undefined8 *)plVar10[-1];
      lVar7 = *plVar10;
      puVar1 = puVar3;
      func_0x000107c614f0(puVar3);
      pcVar8 = *(code **)(lVar7 + 0xa0);
      func_0x000107c615f0(puVar3);
      uVar2 = param_1;
      (*pcVar8)(param_1,param_2,puVar1,lVar7);
      func_0x000107c615e8();
      if ((uVar2 & 1) != 0) {
        pcVar5 = "unknown player type";
        uVar4 = 0xd000000000000033;
        goto LAB_101e85588;
      }
      uVar6 = uVar6 + 1;
      plVar10 = plVar10 + 2;
    } while (uVar11 != uVar6);
  }
  func_0x000107c614f0(param_1);
  (**(code **)(param_2 + 0x98))();
  lVar7 = *(long *)(uVar9 + 0x10);
  if (lVar7 < *(long *)(unaff_x20 + 0x38)) {
    uVar11 = uVar9;
    func_0x000107c61558();
    *param_3 = uVar9;
    uVar6 = uVar9;
    if ((uVar11 & 1) == 0) {
      uVar6 = 0;
      func_0x000101e85e0c(0,lVar7 + 1,1,uVar9);
      *param_3 = uVar6;
    }
    uVar9 = *(ulong *)(uVar6 + 0x10);
    uVar11 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar9) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      func_0x000101e85e0c(uVar11,uVar9 + 1,1,uVar6);
    }
    *(ulong *)(uVar11 + 0x10) = uVar9 + 1;
    lVar7 = uVar11 + uVar9 * 0x10;
    *(ulong *)(lVar7 + 0x20) = param_1;
    *(long *)(lVar7 + 0x28) = param_2;
    *param_3 = uVar11;
    func_0x000107c615f0(param_1);
  }
  else {
    uVar4 = 0;
    FUN_101e7a92c(0);
    uVar9 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar9 == 0) {
      func_0x000101e81a80();
      func_0x000107c61480(param_1,uVar9);
      if (param_1 == 0) {
        pcVar5 = "already in the pool";
        uVar4 = 0xd00000000000003d;
        puVar3 = (undefined8 *)0x0;
LAB_101e85588:
        FUN_101e86864();
        func_0x000107c613f8(&UNK_1106e8bd8,puVar3,0,0);
        *puVar3 = uVar4;
        puVar3[1] = (ulong)pcVar5 | 0x8000000000000000;
        func_0x000107c61654();
      }
    }
  }
  return;
}



/* Entry: 101e85654; end: 101e8566b;  */

void FUN_101e85654(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x130) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e8566c,0,0);
  return;
}



/* Entry: 101e8566c; end: 101e858cb;  */

void FUN_101e8566c(void)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x22;
  undefined8 uVar7;
  code *pcVar8;
  
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x130);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar2 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x138) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101e858cc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )();
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c615ac(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  *(long *)(unaff_x22 + 0x128) = unaff_x22 + 0x10;
  lVar4 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar3 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar3);
  lVar4 = 0;
  func_0x000107c5fd0c();
  pcVar8 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  (*pcVar8)(uVar3,1,1,lVar4);
  puVar5 = &UNK_110491338;
  func_0x000107c613fc(&UNK_110491338,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x20) = uVar7;
  func_0x000107c61174();
  FUN_10175ad14(uVar3,&UNK_10da1df18,puVar5);
  FUN_101e86b48(uVar3,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar3);
  uVar6 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar6);
  (*pcVar8)();
  puVar5 = &UNK_110491360;
  func_0x000107c613fc(&UNK_110491360,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x20) = uVar7;
  func_0x000107c61174(uVar7);
  FUN_10175ad14(uVar6,&UNK_10da1df28,puVar5);
  FUN_101e86b48(uVar6,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar6);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x140) = plVar2;
  func_0x0001000285a8(0x112dc6b70,&UNK_10da1df30);
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101e85914;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 101e858cc; end: 101e85997;  */

void FUN_101e858cc(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x138));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e85998,0,0);
  return;
}



/* Entry: 101e85998; end: 101e8599f;  */

void FUN_101e85998(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101e8599c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e859a0; end: 101e85a03;  */

void FUN_101e859a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e85a04,0,0);
  return;
}



/* Entry: 101e85a04; end: 101e85b3b;  */

void FUN_101e85a04(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  code *pcVar5;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar2 = 0;
  func_0x000107c5fd0c();
  pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar5)(uVar1,1,1,lVar2);
  puVar3 = &UNK_110491388;
  func_0x000107c613fc(&UNK_110491388,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  func_0x000107c61174();
  FUN_10175ad14(uVar1,&UNK_10da1df38,puVar3);
  FUN_101e86b48(uVar1,0x112d453c8,&UNK_10d90ac60);
  (*pcVar5)(uVar1,1,1,lVar2);
  puVar3 = &UNK_1104913b0;
  func_0x000107c613fc(&UNK_1104913b0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  func_0x000107c61174(uVar4);
  FUN_10175ad14(uVar1,&UNK_10da1df40,puVar3);
  FUN_101e86b48(uVar1,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e85b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e85b3c; end: 101e85b53;  */

void FUN_101e85b3c(void)

{
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e85b54,0,0);
  return;
}



/* Entry: 101e85b54; end: 101e85b8f;  */

void FUN_101e85b54(void)

{
  long unaff_x22;
  
  func_0x000109094c84(*(undefined8 *)(unaff_x22 + 0x10));
  func_0x000107c61180();
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x000101e85b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e85b90; end: 101e85ba7;  */

void FUN_101e85b90(void)

{
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e85ba8,0,0);
  return;
}



/* Entry: 101e85ba8; end: 101e85be3;  */

void FUN_101e85ba8(void)

{
  long unaff_x22;
  
  func_0x000109094a04(*(undefined8 *)(unaff_x22 + 0x10));
  func_0x000107c61180();
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x000101e85be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e85be4; end: 101e85c03;  */

void FUN_101e85be4(void)

{
  FUN_101e84f5c();
  return;
}



/* Entry: 101e85c04; end: 101e85c23;  */

void FUN_101e85c04(void)

{
  FUN_101e8534c();
  return;
}



/* Entry: 101e85c24; end: 101e85c63;  */

void FUN_101e85c24(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e85c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e85c64; end: 101e85ce3;  */

undefined * FUN_101e85c64(undefined *param_1,undefined *param_2)

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
    FUN_101e7a408();
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



/* Entry: 101e85ce4; end: 101e86033;  */

ulong FUN_101e85ce4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e85e0c);
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
  FUN_101e85c64(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e85e08);
      (*pcVar1)();
    }
    func_0x000101e85f3c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101e86034; end: 101e86047;  */

/* WARNING: Removing unreachable block (ram,0x000101e85e2c) */
/* WARNING: Removing unreachable block (ram,0x000101e85e3c) */
/* WARNING: Removing unreachable block (ram,0x000101e85f38) */
/* WARNING: Removing unreachable block (ram,0x000101e85e48) */
/* WARNING: Removing unreachable block (ram,0x000101e85e50) */
/* WARNING: Removing unreachable block (ram,0x000101e85ec8) */
/* WARNING: Removing unreachable block (ram,0x000101e85ed0) */
/* WARNING: Removing unreachable block (ram,0x000101e85ed4) */
/* WARNING: Removing unreachable block (ram,0x000101e85ed8) */
/* WARNING: Removing unreachable block (ram,0x000101e85ee8) */

undefined * FUN_101e86034(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar6) {
    lVar1 = lVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112e34ae0;
    func_0x0001000285a8(0x112e34ae0,&UNK_10da1dee8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 4) << 1;
  }
  uVar5 = 0x112e34ae8;
  func_0x0001000285a8(0x112e34ae8,&UNK_10da1def0);
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar6,uVar5);
  func_0x000107c6142c(param_1);
  return puVar3;
}



/* Entry: 101e86048; end: 101e8615b;  */

void FUN_101e86048(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f016b90);
  uVar2 = param_2;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 == 0) {
    if ((long)param_1 < 0x3e) {
      if (2 < param_1 - 0x2b) goto LAB_101e860c8;
    }
    else if ((long)param_1 < 0x66) {
      if (param_1 == 0x3e) {
LAB_101e8612c:
        func_0x000101e7be1c(param_2);
        return;
      }
      if (param_1 != 0x4b) goto LAB_101e860c8;
    }
    else {
      if (param_1 == 0x6e) goto LAB_101e8612c;
      if (param_1 != 0x66) goto LAB_101e860c8;
    }
  }
  else {
    if (param_1 < 0x3f) {
      if ((1L << (param_1 & 0x3f) & 0x400041002U) != 0) {
LAB_101e860c8:
        FUN_101e7bf10(param_2);
        return;
      }
      if (param_1 == 0x3e) goto LAB_101e8612c;
    }
    if (param_1 == 0x6e) goto LAB_101e8612c;
  }
  func_0x000101e7bd28(param_2);
  return;
}



/* Entry: 101e8615c; end: 101e864f3;  */

/* WARNING: Removing unreachable block (ram,0x000101e863f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101e8615c(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  long lStack_120;
  long lStack_118;
  undefined1 auStack_b0 [24];
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar15 = auStack_b0;
  puVar8 = auStack_b0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5fadc();
  uVar18 = 0;
  uVar19 = 0;
  puVar16 = param_2;
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (param_1 != (undefined1 *)0x0) {
    puVar6 = param_1;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (puVar6 == (undefined1 *)0x0) {
      func_0x000107c61170(param_1);
    }
    else {
      puVar7 = puVar6;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar6);
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      puVar6 = puVar7;
      puVar14 = param_3;
      func_0x00010006c00c();
      func_0x000101e9b6dc();
      uVar4 = (uint)((ulong)param_3 >> 0x20);
      uVar20 = uVar4 >> 0x1e;
      puStack_98 = puVar6;
      puStack_90 = puVar14;
      puStack_88 = puVar16;
      if (uVar4 >> 0x1e < 2) {
        if (uVar20 == 0) {
          auStack_b0[0] = SUB81(puVar7,0);
          auStack_b0[1] = (undefined1)((ulong)puVar7 >> 8);
          auStack_b0[2] = (undefined1)((ulong)puVar7 >> 0x10);
          auStack_b0[3] = (undefined1)((ulong)puVar7 >> 0x18);
          auStack_b0[4] = (undefined1)((ulong)puVar7 >> 0x20);
          auStack_b0[5] = (undefined1)((ulong)puVar7 >> 0x28);
          auStack_b0[6] = (undefined1)((ulong)puVar7 >> 0x30);
          auStack_b0[7] = (undefined1)((ulong)puVar7 >> 0x38);
          auStack_b0[8] = SUB81(param_3,0);
          auStack_b0[9] = (undefined1)((ulong)param_3 >> 8);
          auStack_b0[10] = (undefined1)((ulong)param_3 >> 0x10);
          auStack_b0[0xb] = (undefined1)((ulong)param_3 >> 0x18);
          auStack_b0[0xc] = (undefined1)((ulong)param_3 >> 0x20);
          auStack_b0[0xd] = (undefined1)((ulong)param_3 >> 0x28);
          puVar8 = auStack_b0 + ((ulong)param_3 >> 0x30 & 0xff);
          FUN_101e86b08();
          puVar15 = auStack_b0;
        }
        else {
          lVar10 = (long)(int)puVar7;
          puVar8 = (undefined1 *)(((long)puVar7 >> 0x20) - lVar10);
          if ((long)puVar7 >> 0x20 < lVar10) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101e864e4);
            (*pcVar5)();
          }
          func_0x000107c5ec30();
          if (puVar6 == (undefined1 *)0x0) {
            func_0x000107c5ec38();
            puVar15 = (undefined1 *)0x0;
            puVar16 = puVar6;
LAB_101e863a8:
            puVar8 = (undefined1 *)0x0;
          }
          else {
            puVar16 = puVar6;
            func_0x000107c5ec3c();
            if (SBORROW8(lVar10,(long)puVar16)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101e864f0);
              (*pcVar5)();
            }
            puVar6 = puVar6 + (lVar10 - (long)puVar16);
            func_0x000107c5ec38();
            puVar14 = puVar16;
            if ((long)puVar8 <= (long)puVar16) {
              puVar14 = puVar8;
            }
            puVar15 = (undefined1 *)0x0;
            if (puVar6 != (undefined1 *)0x0) {
              puVar15 = puVar6;
            }
            puVar8 = (undefined1 *)0x0;
            if (puVar6 != (undefined1 *)0x0) {
              puVar8 = puVar14 + (long)puVar6;
            }
          }
LAB_101e863ac:
          FUN_101e86b08();
          puVar6 = puVar16;
        }
      }
      else {
        if (uVar20 == 2) {
          lVar10 = *(long *)(puVar7 + 0x10);
          lVar11 = *(long *)(puVar7 + 0x18);
          func_0x000107c5ec30();
          puVar16 = puVar6;
          puVar15 = puVar6;
          if (puVar6 != (undefined1 *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar10,(long)puVar16)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101e864ec);
              (*pcVar5)();
            }
            puVar15 = puVar6 + (lVar10 - (long)puVar16);
          }
          puVar8 = (undefined1 *)(lVar11 - lVar10);
          if (SBORROW8(lVar11,lVar10)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101e864e8);
            (*pcVar5)();
          }
          func_0x000107c5ec38();
          if (puVar15 == (undefined1 *)0x0) goto LAB_101e863a8;
          puVar6 = puVar16;
          if ((long)puVar8 <= (long)puVar16) {
            puVar6 = puVar8;
          }
          puVar8 = puVar6 + (long)puVar15;
          goto LAB_101e863ac;
        }
        FUN_101e86b08();
        auStack_b0[0] = 0;
        auStack_b0[1] = 0;
        auStack_b0[2] = 0;
        auStack_b0[3] = 0;
        auStack_b0[4] = 0;
        auStack_b0[5] = 0;
        auStack_b0[6] = 0;
        auStack_b0[7] = 0;
        auStack_b0[8] = 0;
        auStack_b0[9] = 0;
        auStack_b0[10] = 0;
        auStack_b0[0xb] = 0;
        auStack_b0[0xc] = 0;
        auStack_b0[0xd] = 0;
      }
      uVar18 = 0;
      uVar19 = 100;
      param_6 = 0;
      func_0x00010006ae80(puVar15,puVar8,&uStack_80,0,100,0,&UNK_1104929f8,puVar6);
      func_0x00010006c090(puVar7,param_3);
      FUN_101e86b48(&uStack_80,0x112d49548,&UNK_10d90fde0);
      puVar16 = puStack_88;
      puVar15 = puStack_90;
      puVar8 = puStack_98;
      lVar10 = *(long *)(puStack_98 + 0x10);
      func_0x000107c61170(param_1);
      func_0x00010006c090(puVar7,param_3);
      param_2 = puVar15;
      if (lVar10 != 0) goto LAB_101e86448;
      func_0x000107c6142c();
      func_0x00010006c090(puVar15,puVar16);
    }
  }
  puVar8 = (undefined1 *)0x0;
  puVar15 = (undefined1 *)0x0;
  puVar16 = (undefined1 *)0x0;
LAB_101e86448:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar8;
  }
  func_0x000107c60e78();
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(param_2 + 0x28) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(param_2 + 0x30) = puVar13;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(puVar8 + _DAT_11307a4a0);
  *(undefined1 **)(param_2 + 0x18) = puVar15;
  *(undefined1 **)(param_2 + 0x38) = puVar16;
  *(undefined8 *)(param_2 + 0x40) = uVar19;
  *(undefined8 *)(param_2 + 0x20) = param_6;
  func_0x000107c61174();
  func_0x000107c615f0(puVar15);
  func_0x000107c6157c(param_6);
  uVar17 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0169c0);
  puVar6 = puVar15;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar17);
  param_2[0x58] = (char)puVar6;
  uVar17 = 0xd000000000000042;
  func_0x000107c5fadc(0xd000000000000042,0x800000010f0169f0);
  puVar6 = puVar15;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar17);
  param_2[0x59] = (char)puVar6;
  puVar6 = puVar15;
  FUN_101e86048();
  *(undefined8 *)(param_2 + 0x48) = uVar19;
  *(undefined1 **)(param_2 + 0x50) = puVar6;
  if (((ulong)puVar6 & 0xff) == 1) {
    uVar19 = 0xd00000000000001d;
    uVar17 = 0x800000010f016a40;
    puVar6 = puVar15;
    FUN_101e8615c();
    if (puVar6 != (undefined1 *)0x0) {
      uVar9 = 0xd00000000000002d;
      func_0x000107c5fadc(0xd00000000000002d,0x800000010f016a80);
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar9);
      uVar2 = param_2[0x51];
      uVar3 = param_2[0x52];
      lVar10 = 0;
      FUN_101e70534();
      func_0x000107c613fc();
      *(undefined1 **)(lVar10 + 0x10) = puVar6;
      *(undefined8 *)(lVar10 + 0x18) = uVar19;
      *(undefined8 *)(lVar10 + 0x20) = uVar17;
      *(char *)(lVar10 + 0x28) = (char)puVar15;
      *(undefined1 *)(lVar10 + 0x29) = uVar2;
      *(undefined1 *)(lVar10 + 0x2a) = uVar3;
      func_0x000100996f58(uVar18,lVar10 + 0x30);
      uVar19 = *(undefined8 *)(param_2 + 0x60);
      *(long *)(param_2 + 0x60) = lVar10;
      func_0x000107c61574(uVar19);
    }
  }
  func_0x000101e84b1c(puVar16);
  lVar11 = 0;
  FUN_101e70d48();
  lVar10 = lVar11;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar10 + _DAT_112e342b0);
  *puVar1 = 0xd000000000000016;
  puVar1[1] = 0x800000010f016a60;
  plVar12 = &lStack_120;
  lStack_120 = lVar10;
  lStack_118 = lVar11;
  func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
  puVar13 = &UNK_1104913d8;
  func_0x000107c613fc(&UNK_1104913d8,0x18,7);
  *(long **)(puVar13 + 0x10) = plVar12;
  func_0x000107c61174(plVar12);
  uVar19 = 2;
  func_0x0001001ca524(2,4,0x40,2,0,0,&UNK_10da1df50,puVar13,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(plVar12);
  func_0x000107c61170(puVar8);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(uVar19);
  func_0x0001000834e4(uVar18);
  return param_2;
}



/* Entry: 101e864f4; end: 101e867cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e864f4(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x28) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x30) = puVar10;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(param_1 + _DAT_11307a4a0);
  *(ulong *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  *(undefined8 *)(unaff_x20 + 0x20) = param_6;
  func_0x000107c61174();
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_6);
  uVar7 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0169c0);
  uVar4 = param_2;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar7);
  *(char *)(unaff_x20 + 0x58) = (char)uVar4;
  uVar7 = 0xd000000000000042;
  func_0x000107c5fadc(0xd000000000000042,0x800000010f0169f0);
  uVar4 = param_2;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar7);
  *(char *)(unaff_x20 + 0x59) = (char)uVar4;
  uVar4 = param_2;
  FUN_101e86048();
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(ulong *)(unaff_x20 + 0x50) = uVar4;
  if ((uVar4 & 0xff) == 1) {
    uVar7 = 0xd00000000000001d;
    uVar11 = 0x800000010f016a40;
    uVar4 = param_2;
    FUN_101e8615c();
    if (uVar4 != 0) {
      uVar5 = 0xd00000000000002d;
      func_0x000107c5fadc(0xd00000000000002d,0x800000010f016a80);
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar5);
      uVar2 = *(undefined1 *)(unaff_x20 + 0x51);
      uVar3 = *(undefined1 *)(unaff_x20 + 0x52);
      lVar6 = 0;
      FUN_101e70534();
      func_0x000107c613fc();
      *(ulong *)(lVar6 + 0x10) = uVar4;
      *(undefined8 *)(lVar6 + 0x18) = uVar7;
      *(undefined8 *)(lVar6 + 0x20) = uVar11;
      *(char *)(lVar6 + 0x28) = (char)param_2;
      *(undefined1 *)(lVar6 + 0x29) = uVar2;
      *(undefined1 *)(lVar6 + 0x2a) = uVar3;
      func_0x000100996f58(param_4,lVar6 + 0x30);
      uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
      *(long *)(unaff_x20 + 0x60) = lVar6;
      func_0x000107c61574(uVar7);
    }
  }
  func_0x000101e84b1c(param_3);
  lVar8 = 0;
  FUN_101e70d48();
  lVar6 = lVar8;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar6 + _DAT_112e342b0);
  *puVar1 = 0xd000000000000016;
  puVar1[1] = 0x800000010f016a60;
  plVar9 = &lStack_70;
  lStack_70 = lVar6;
  lStack_68 = lVar8;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  puVar10 = &UNK_1104913d8;
  func_0x000107c613fc(&UNK_1104913d8,0x18,7);
  *(long **)(puVar10 + 0x10) = plVar9;
  func_0x000107c61174(plVar9);
  uVar7 = 2;
  func_0x0001001ca524(2,4,0x40,2,0,0,&UNK_10da1df50,puVar10,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(plVar9);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(uVar7);
  func_0x0001000834e4(param_4);
  return;
}



/* Entry: 101e867d0; end: 101e86827;  */

void FUN_101e867d0(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101e86c30;
  plVar1[0x26] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e8566c,0,0);
  return;
}



/* Entry: 101e86828; end: 101e86863;  */

undefined8 FUN_101e86828(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x101e7c434)(param_2,param_1);
  return param_2;
}



/* Entry: 101e86864; end: 101e868c3;  */

void FUN_101e86864(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e349e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65670;
  func_0x000107c61520(&UNK_10dc65670,&UNK_1106e8bd8);
  puRam0000000112e349e8 = puVar1;
  return;
}



/* Entry: 101e868c4; end: 101e8692b;  */

void FUN_101e868c4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101e86c1c;
  plVar2[2] = param_2;
  plVar2[3] = lVar3;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[4] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e85a04,0,0);
  return;
}



/* Entry: 101e8692c; end: 101e86997;  */

void FUN_101e8692c(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101e86c20;
  plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e85b54,0,0);
  return;
}



/* Entry: 101e86998; end: 101e86a03;  */

void FUN_101e86998(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101e86c24;
  plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e85ba8,0,0);
  return;
}



/* Entry: 101e86a04; end: 101e86a6f;  */

void FUN_101e86a04(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101e86c28;
  plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e85b54,0,0);
  return;
}



/* Entry: 101e86a70; end: 101e86a9b;  */

void FUN_101e86a70(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e86a9c; end: 101e86b07;  */

void FUN_101e86a9c(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101e86c2c;
  plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e85ba8,0,0);
  return;
}



/* Entry: 101e86b08; end: 101e86b47;  */

void FUN_101e86b08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e34af0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10da1ef70;
  func_0x000107c61520(&DAT_10da1ef70,&UNK_1104929f8);
  puRam0000000112e34af0 = puVar1;
  return;
}



/* Entry: 101e86b48; end: 101e86b87;  */

undefined8 FUN_101e86b48(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101e86b88; end: 101e86bdf;  */

void FUN_101e86b88(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101e86be0;
  plVar1[0x26] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e8566c,0,0);
  return;
}



/* Entry: 101e86be0; end: 101e86c1b;  */

void FUN_101e86be0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e86c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e86c1c; end: 101e86c33;  */

void FUN_101e86c1c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e86c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e86c34; end: 101e86f77;  */

void FUN_101e86c34(double param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
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
  undefined1 uStack_80;
  
  dVar10 = param_1 + *(double *)(unaff_x20 + 0x38);
  *(double *)(unaff_x20 + 0x38) = dVar10;
  lVar9 = *(long *)(unaff_x20 + 0x40) + 1;
  if (SCARRY8(*(long *)(unaff_x20 + 0x40),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e86f6c);
    (*pcVar2)();
  }
  param_1 = param_1 * 1000.0;
  dVar11 = *(double *)(unaff_x20 + 0x58);
  dVar12 = param_1;
  if (dVar11 <= param_1) {
    dVar12 = dVar11;
  }
  *(long *)(unaff_x20 + 0x40) = lVar9;
  if (dVar11 <= 0.0) {
    dVar12 = param_1;
  }
  if (param_1 < *(double *)(unaff_x20 + 0x60)) {
    param_1 = *(double *)(unaff_x20 + 0x60);
  }
  *(double *)(unaff_x20 + 0x58) = dVar12;
  *(double *)(unaff_x20 + 0x60) = param_1;
  if ((lVar9 * -0x1111111111111111 + 0x888888888888888U >> 1 | lVar9 * -0x1111111111111111 << 0x3f)
      < 0x888888888888889) {
    if (lVar9 == 0) {
      dVar10 = 0.0;
    }
    else {
      dVar10 = (dVar10 / (double)lVar9) * 1000.0;
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 0xe0);
    lVar9 = *(long *)(unaff_x20 + 0xf0);
    func_0x000100dd26f4(unaff_x20 + 200,uVar7);
    if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e86f70);
      (*pcVar2)();
    }
    if (dVar10 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e86f74);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e86f78);
      (*pcVar2)();
    }
    lVar4 = (long)dVar10;
    (**(code **)(lVar9 + 0x20))
              (*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
               *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),lVar4,uVar7,lVar9
              );
    iVar3 = (int)lVar4;
    if ((*(byte *)(unaff_x20 + 0x50) & 1) == 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + 0xe0);
      lVar9 = *(long *)(unaff_x20 + 0xf0);
      func_0x000100dd26f4(unaff_x20 + 200,uVar7);
      (**(code **)(lVar9 + 0x40))
                (*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                 *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),uVar7,lVar9);
      iVar3 = (int)uVar7;
      *(undefined1 *)(unaff_x20 + 0x50) = 1;
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x80);
    cVar1 = *(char *)(unaff_x20 + 0x18);
    if (cVar1 == '\x05') {
      uVar6 = 0xeb00000000686775;
      uVar8 = 0x6f72687473736170;
    }
    else if (cVar1 == '\a') {
      uVar6 = 0xe600000000000000;
      uVar8 = 0x657669746361;
    }
    else if (cVar1 == '\x06') {
      uVar6 = 0xef7473655465636e;
      uVar8 = 0x616d726f66726570;
    }
    else {
      uVar6 = 0xe800000000000000;
      uVar8 = 0x64656c6261736964;
    }
    uVar14 = *(undefined8 *)(unaff_x20 + 0x88);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x90);
    func_0x000107c609fc(uVar7,uVar13,0,0);
    if (iVar3 != 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + 0x140);
      uVar13 = *(undefined8 *)(unaff_x20 + 0x148);
    }
    func_0x000107c609fc(uVar14,uVar15,0,0);
    if (iVar3 != 0) {
      uVar14 = *(undefined8 *)(unaff_x20 + 0x160);
      uVar15 = *(undefined8 *)(unaff_x20 + 0x168);
    }
    uStack_1c8 = *(undefined8 *)(unaff_x20 + 0x188);
    uStack_1d0 = *(undefined8 *)(unaff_x20 + 0x180);
    uStack_98 = *(undefined8 *)(unaff_x20 + 0x198);
    uStack_a0 = *(undefined8 *)(unaff_x20 + 400);
    uStack_1b8 = *(undefined8 *)(unaff_x20 + 0x198);
    uStack_1c0 = *(undefined8 *)(unaff_x20 + 400);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x1a8);
    uStack_90 = *(undefined8 *)(unaff_x20 + 0x1a0);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x148);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x140);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x158);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x150);
    uStack_208 = *(undefined8 *)(unaff_x20 + 0x148);
    uStack_210 = *(undefined8 *)(unaff_x20 + 0x140);
    uStack_1f8 = *(undefined8 *)(unaff_x20 + 0x158);
    uStack_200 = *(undefined8 *)(unaff_x20 + 0x150);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x168);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x160);
    uStack_1d8 = *(undefined8 *)(unaff_x20 + 0x178);
    uStack_1e0 = *(undefined8 *)(unaff_x20 + 0x170);
    uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x168);
    uStack_1f0 = *(undefined8 *)(unaff_x20 + 0x160);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x178);
    uStack_c0 = *(undefined8 *)(unaff_x20 + 0x170);
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0x188);
    uStack_b0 = *(undefined8 *)(unaff_x20 + 0x180);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x138);
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x130);
    uStack_1a8 = *(undefined8 *)(unaff_x20 + 0x1a8);
    uStack_1b0 = *(undefined8 *)(unaff_x20 + 0x1a0);
    uStack_80 = *(undefined1 *)(unaff_x20 + 0x1b0);
    uStack_1a0 = *(undefined1 *)(unaff_x20 + 0x1b0);
    uStack_218 = *(undefined8 *)(unaff_x20 + 0x138);
    uStack_220 = *(undefined8 *)(unaff_x20 + 0x130);
    *(undefined8 *)(unaff_x20 + 0x140) = uVar7;
    *(undefined8 *)(unaff_x20 + 0x148) = uVar13;
    *(undefined8 *)(unaff_x20 + 0x160) = uVar14;
    *(undefined8 *)(unaff_x20 + 0x168) = uVar15;
    *(double *)(unaff_x20 + 0x170) = dVar10;
    *(undefined8 *)(unaff_x20 + 0x180) = uVar8;
    *(undefined8 *)(unaff_x20 + 0x188) = uVar6;
    func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x138));
    func_0x000107c61434(uVar6);
    FUN_101e6feac(&uStack_100,&uStack_190);
    func_0x000101e6fee8(&uStack_220);
    uStack_128 = *(undefined8 *)(unaff_x20 + 0x198);
    uStack_130 = *(undefined8 *)(unaff_x20 + 400);
    uStack_118 = *(undefined8 *)(unaff_x20 + 0x1a8);
    uStack_120 = *(undefined8 *)(unaff_x20 + 0x1a0);
    uStack_110 = *(undefined1 *)(unaff_x20 + 0x1b0);
    uStack_168 = *(undefined8 *)(unaff_x20 + 0x158);
    uStack_170 = *(undefined8 *)(unaff_x20 + 0x150);
    uStack_158 = *(undefined8 *)(unaff_x20 + 0x168);
    uStack_160 = *(undefined8 *)(unaff_x20 + 0x160);
    uStack_148 = *(undefined8 *)(unaff_x20 + 0x178);
    uStack_150 = *(undefined8 *)(unaff_x20 + 0x170);
    uStack_138 = *(undefined8 *)(unaff_x20 + 0x188);
    uStack_140 = *(undefined8 *)(unaff_x20 + 0x180);
    uStack_188 = *(undefined8 *)(unaff_x20 + 0x138);
    uStack_190 = *(undefined8 *)(unaff_x20 + 0x130);
    uStack_178 = *(undefined8 *)(unaff_x20 + 0x148);
    uStack_180 = *(undefined8 *)(unaff_x20 + 0x140);
    puVar5 = &uStack_190;
    FUN_101e89cac(puVar5,&uStack_100);
    if (((ulong)puVar5 & 1) == 0) {
      lVar9 = unaff_x20 + 0x120;
      func_0x000107c61618();
      if (lVar9 != 0) {
        func_0x000107c615e8();
      }
    }
    func_0x000101e6fee8(&uStack_100);
    func_0x000107c6142c(uVar6);
  }
  return;
}



/* Entry: 101e86f78; end: 101e87157;  */

void FUN_101e86f78(int param_1)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
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
  undefined1 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  undefined1 uStack_e0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  cVar1 = *(char *)(unaff_x20 + 0x18);
  if (cVar1 == '\x05') {
    uVar4 = 0xeb00000000686775;
    uVar5 = 0x6f72687473736170;
  }
  else if (cVar1 == '\a') {
    uVar4 = 0xe600000000000000;
    uVar5 = 0x657669746361;
  }
  else if (cVar1 == '\x06') {
    uVar4 = 0xef7473655465636e;
    uVar5 = 0x616d726f66726570;
  }
  else {
    uVar4 = 0xe800000000000000;
    uVar5 = 0x64656c6261736964;
  }
  uVar8 = 0;
  func_0x000107c609fc(0,0,0,0);
  uVar9 = 0;
  if (param_1 != 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x140);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x148);
  }
  func_0x000107c609fc(0,0,0,0);
  uVar6 = 0;
  uVar7 = 0;
  if (param_1 != 0) {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x168);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x160);
  }
  uStack_198 = *(undefined8 *)(unaff_x20 + 0x188);
  uStack_1a0 = *(undefined8 *)(unaff_x20 + 0x180);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x198);
  uStack_70 = *(undefined8 *)(unaff_x20 + 400);
  uStack_188 = *(undefined8 *)(unaff_x20 + 0x198);
  uStack_190 = *(undefined8 *)(unaff_x20 + 400);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x148);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x140);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x158);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_1d8 = *(undefined8 *)(unaff_x20 + 0x148);
  uStack_1e0 = *(undefined8 *)(unaff_x20 + 0x140);
  uStack_1c8 = *(undefined8 *)(unaff_x20 + 0x158);
  uStack_1d0 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x168);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_1a8 = *(undefined8 *)(unaff_x20 + 0x178);
  uStack_1b0 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_1b8 = *(undefined8 *)(unaff_x20 + 0x168);
  uStack_1c0 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x178);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x188);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x180);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_178 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uStack_180 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uStack_50 = *(undefined1 *)(unaff_x20 + 0x1b0);
  uStack_170 = *(undefined1 *)(unaff_x20 + 0x1b0);
  uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_1f0 = *(undefined8 *)(unaff_x20 + 0x130);
  *(undefined8 *)(unaff_x20 + 0x140) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x148) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x168) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x160) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x188) = uVar4;
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61434(uVar4);
  FUN_101e6feac(&uStack_d0,&uStack_160);
  func_0x000101e6fee8(&uStack_1f0);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x198);
  uStack_100 = *(undefined8 *)(unaff_x20 + 400);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uStack_e0 = *(undefined1 *)(unaff_x20 + 0x1b0);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x158);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x168);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x178);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x188);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x180);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x148);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x140);
  puVar2 = &uStack_160;
  FUN_101e89cac(puVar2,&uStack_d0);
  if (((ulong)puVar2 & 1) == 0) {
    lVar3 = unaff_x20 + 0x120;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c615e8();
    }
  }
  func_0x000101e6fee8(&uStack_d0);
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 101e87158; end: 101e87413;  */

undefined * FUN_101e87158(long param_1)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    func_0x000101e7d918(0,lVar6,0);
    uVar1 = param_1 + 0x40;
    uVar9 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar15 = 0;
    do {
      if (uVar9 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e87404);
        (*pcVar5)();
      }
      uVar14 = uVar9 >> 6;
      uVar16 = 1L << (uVar9 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar14 * 8) & uVar16) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e87408);
        (*pcVar5)();
      }
      bVar3 = *(byte *)(*(long *)(param_1 + 0x30) + uVar9);
      if (bVar3 < 2) {
        if (bVar3 == 0) {
          uVar17 = 0x6f72687473736170;
          uVar10 = 0xeb00000000686775;
        }
        else {
          uVar17 = 0x616d726f66726570;
          uVar10 = 0xef7473655465636e;
        }
      }
      else if (bVar3 == 2) {
        uVar10 = 0xe600000000000000;
        uVar17 = 0x657669746361;
      }
      else {
        uVar10 = 0xe800000000000000;
        uVar17 = 0x64656c6261736964;
      }
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar9 * 8);
      iVar2 = *(int *)(param_1 + 0x24);
      uVar13 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar13) {
        func_0x000101e7d918(1 < *(ulong *)(puVar4 + 0x18),uVar13 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar13 + 1;
      *(undefined8 *)(puVar4 + uVar13 * 0x18 + 0x20) = uVar17;
      *(undefined8 *)(puVar4 + uVar13 * 0x18 + 0x28) = uVar10;
      *(undefined8 *)(puVar4 + uVar13 * 0x18 + 0x30) = uVar12;
      uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar13 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e8740c);
        (*pcVar5)();
      }
      uVar7 = *(ulong *)(uVar1 + uVar14 * 8);
      if ((uVar7 & uVar16) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e87410);
        (*pcVar5)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e87414);
        (*pcVar5)();
      }
      uVar7 = uVar7 & -2L << (uVar9 & 0x3f);
      if (uVar7 == 0) {
        lVar11 = uVar14 << 6;
        puVar8 = (ulong *)(param_1 + 0x48 + uVar14 * 8);
        do {
          uVar14 = uVar14 + 1;
          if (uVar13 + 0x3f >> 6 <= uVar14) {
            FUN_101e8a6e8();
            uVar9 = uVar13;
            goto LAB_101e87204;
          }
          uVar9 = *puVar8;
          lVar11 = lVar11 + 0x40;
          puVar8 = puVar8 + 1;
        } while (uVar9 == 0);
        FUN_101e8a6e8();
        uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + lVar11;
      }
      else {
        uVar14 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar9 & 0x7fffffffffffffc0;
      }
LAB_101e87204:
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar6);
  }
  return puVar4;
}



/* Entry: 101e87414; end: 101e87493;  */

uint FUN_101e87414(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined1 uStack_c0;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_c0 = *(undefined1 *)(param_1 + 0x10);
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_30 = *(undefined1 *)(param_2 + 0x10);
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_101e89cac(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 101e87494; end: 101e874a7;  */

bool FUN_101e87494(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101e874a8; end: 101e8757b;  */

void FUN_101e874a8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101e8757c; end: 101e875a3;  */

void FUN_101e8757c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 101e875a4; end: 101e875db;  */

void FUN_101e875a4(undefined8 param_1)

{
  FUN_101e875dc(param_1,2,1);
  return;
}



/* Entry: 101e875dc; end: 101e876ef;  */

void FUN_101e875dc(long *param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  puVar2 = auStack_58;
  func_0x000107c61428(param_2 + 0xc0,puVar2,0x20,0);
  lVar4 = *(long *)(param_2 + 0xc0);
  if (*(long *)(lVar4 + 0x10) == 0) {
    lVar5 = 0;
  }
  else {
    func_0x000107c61434(lVar4);
    func_0x000101e6b984();
    if (((ulong)puVar2 & 1) == 0) {
      func_0x000107c6142c(lVar4);
      lVar5 = 0;
      lVar3 = *(long *)(lVar4 + 0x10);
    }
    else {
      lVar5 = *(long *)(*(long *)(lVar4 + 0x38) + param_3 * 8);
      func_0x000107c6142c(lVar4);
      if (lVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e876ec);
        (*pcVar1)();
      }
      lVar3 = *(long *)(lVar4 + 0x10);
    }
    if (lVar3 != 0) {
      func_0x000107c61434(lVar4);
      func_0x000101e6b984();
      if (((ulong)puVar2 & 1) != 0) {
        lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + param_4 * 8);
        func_0x000107c6142c(lVar4);
        func_0x000107c614a8(auStack_58);
        if (lVar3 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e876ac);
          (*pcVar1)();
        }
        goto LAB_101e876c0;
      }
      func_0x000107c6142c(lVar4);
    }
  }
  func_0x000107c614a8(auStack_58);
  lVar3 = 0;
LAB_101e876c0:
  if (!SCARRY8(lVar5,lVar3)) {
    *param_1 = lVar5 + lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e876f0);
  (*pcVar1)();
}



/* Entry: 101e876f0; end: 101e87803;  */

void FUN_101e876f0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  if ((*(char *)(unaff_x20 + 0x118) == '\x01') && (func_0x000101e87de0(), (param_1 & 1) == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168();
    func_0x000107c41570();
    func_0x000107c61180();
    puVar2 = &UNK_110491408;
    func_0x000107c613fc(&UNK_110491408,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    uStack_40 = 0x101e8a044;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100ef35e4;
    puStack_48 = &UNK_1104916d8;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    puVar2 = puVar1;
    func_0x000107c3d7c4();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(puVar1);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x98);
    *(undefined **)(unaff_x20 + 0x98) = puVar2;
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 101e87804; end: 101e87b3f;  */

void FUN_101e87804(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  ppuVar8 = &puStack_90;
  if (*(char *)(unaff_x20 + 0x119) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x000107c61168();
    puVar2 = puVar1;
    func_0x000107c40efc();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c49a9c();
    func_0x000107c61170(puVar2);
    if (*(char *)(unaff_x20 + 0xb8) == '\x02') {
      *(char *)(unaff_x20 + 0xb8) = (char)puVar3;
    }
    if (((ulong)puVar3 & 1) == 0) {
      func_0x000107c40efc(puVar1);
      func_0x000107c61180();
      func_0x000107c52c24();
      func_0x000107c61170(puVar1);
    }
    uVar9 = *(undefined8 *)(unaff_x20 + 0xe0);
    lVar10 = *(long *)(unaff_x20 + 0xf0);
    func_0x000100dd26f4(unaff_x20 + 200,uVar9);
    (**(code **)(lVar10 + 0x10))(puVar3,uVar9,lVar10);
    FUN_101e87fe0();
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x000107c61168();
      puVar4 = puVar3;
      func_0x000107c41570();
      func_0x000107c61180();
      puVar1 = &UNK_110491408;
      puVar5 = puVar1;
      func_0x000107c613fc(&UNK_110491408,0x18,7);
      func_0x000107c61644(puVar5 + 0x10);
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_70 = FUN_101e89e70;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_100ef35e4;
      puStack_78 = &UNK_110491610;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      puVar5 = puVar4;
      func_0x000107c3d7c4();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(puVar4);
      uVar9 = *(undefined8 *)(unaff_x20 + 0xa0);
      *(undefined **)(unaff_x20 + 0xa0) = puVar5;
      func_0x000107c615e8(uVar9);
      puVar4 = puVar3;
      func_0x000107c41570();
      func_0x000107c61180();
      puVar5 = puVar1;
      func_0x000107c613fc(&UNK_110491408,0x18,7);
      func_0x000107c61644(puVar5 + 0x10);
      pcStack_70 = FUN_101e89e94;
      puStack_90 = puVar2;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_100ef35e4;
      puStack_78 = &UNK_110491638;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      puVar5 = puVar4;
      func_0x000107c3d7c4();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(puVar4);
      uVar9 = *(undefined8 *)(unaff_x20 + 0xa8);
      *(undefined **)(unaff_x20 + 0xa8) = puVar5;
      func_0x000107c615e8(uVar9);
      func_0x000107c41570();
      func_0x000107c61180();
      func_0x000107c613fc(&UNK_110491408,0x18,7);
      func_0x000107c61644(puVar1 + 0x10);
      pcStack_70 = FUN_101e8a7c4;
      puStack_90 = puVar2;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_100ef35e4;
      puStack_78 = &UNK_110491660;
      puStack_68 = puVar1;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      puVar1 = puVar3;
      func_0x000107c3d7c4();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(puVar3);
      uVar9 = *(undefined8 *)(unaff_x20 + 0xb0);
      *(undefined **)(unaff_x20 + 0xb0) = puVar1;
      func_0x000107c615e8(uVar9);
    }
  }
  return;
}



/* Entry: 101e87b40; end: 101e87bcb;  */

void FUN_101e87b40(void)

{
  long unaff_x20;
  
  FUN_101e87bcc();
  func_0x000101e87c50();
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000100dd2718(unaff_x20 + 200);
  FUN_101e89020(unaff_x20 + 0x120);
  func_0x000101e6fee8(unaff_x20 + 0x130);
  return;
}



/* Entry: 101e87bcc; end: 101e87e73;  */

/* WARNING: Possible PIC construction at 0x000101e87c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e87c28) */

void FUN_101e87bcc(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x98);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c615f0(lVar2);
    func_0x000107c41570(puVar1);
    func_0x000107c61180();
    func_0x000107c4ffa0();
    func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 101e87e74; end: 101e87fdf;  */

void FUN_101e87e74(long param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  bVar1 = *(byte *)(param_1 + 0x18);
  uVar2 = bVar1 - 5;
  if (uVar2 < 3) {
    puStack_58 = &UNK_1106ea2a8;
    lVar3 = param_1;
    func_0x000101e8a084();
    lStack_50 = lVar3;
    func_0x000101e8a0c4();
    uStack_68 = (uVar2 & 0xff) == 2;
    auStack_78[0] = 4;
    *(undefined1 *)(param_1 + 0x18) = 2;
    uVar5 = *(undefined8 *)(param_1 + 0xe0);
    lVar6 = *(long *)(param_1 + 0xf0);
    uStack_70 = param_2;
    lStack_48 = lVar3;
    func_0x000100dd26f4(param_1 + 200,uVar5);
    if (bVar1 == 5) {
      uVar7 = 0xeb00000000686775;
      uVar4 = 0x6f72687473736170;
    }
    else if (bVar1 == 7) {
      uVar7 = 0xe600000000000000;
      uVar4 = 0x657669746361;
    }
    else {
      uVar7 = 0xef7473655465636e;
      uVar4 = 0x616d726f66726570;
    }
    (**(code **)(lVar6 + 0x48))(uVar4,uVar7,0x64656c6261736964,0xe800000000000000,uVar5,lVar6);
    func_0x000107c6142c(uVar7);
    uVar5 = *(undefined8 *)(param_1 + 0xe0);
    lVar3 = *(long *)(param_1 + 0xe8);
    func_0x000100dd26f4(param_1 + 200,uVar5);
    (**(code **)(lVar3 + 0x10))(auStack_78,uVar5,lVar3);
    FUN_101e89f90(auStack_78);
  }
  return;
}



/* Entry: 101e87fe0; end: 101e88117;  */

undefined8 FUN_101e87fe0(float param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c61168();
  func_0x000107c4f2b0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4a014();
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  func_0x000107c40efc();
  func_0x000107c61180();
  func_0x000107c3e70c();
  puVar3 = puVar1;
  func_0x000107c3e720();
  if (0.0 <= param_1) {
    if ((((ulong)puVar2 & 1) == 0) &&
       ((*(float *)(unaff_x20 + 0x11c) < param_1 ||
        (puVar3 == (undefined *)0x2 || puVar3 == (undefined *)0x3)))) goto LAB_101e880f4;
  }
  else if (((ulong)puVar2 & 1) == 0) {
LAB_101e880f4:
    func_0x000107c61170(puVar1);
    return 0;
  }
  func_0x000100087bd4(*(undefined8 *)(unaff_x20 + 0x10),FUN_101e89ee4,auStack_70,
                      PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(puVar1);
  return 1;
}



/* Entry: 101e88118; end: 101e8829b;  */

void FUN_101e88118(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  puVar2 = &UNK_110491408;
  func_0x000107c613fc(&UNK_110491408,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648(param_2);
  func_0x000107c61644(puVar2 + 0x10,param_2);
  func_0x000107c61574(param_2);
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 == 0) {
    puVar4 = &UNK_110491698;
    func_0x000107c613fc(&UNK_110491698,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_101e89ebc;
    *(undefined **)(puVar4 + 0x18) = puVar2;
    pcStack_58 = FUN_101e89ec4;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1104916b0;
    ppuVar5 = &puStack_78;
    puStack_50 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_50;
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(puVar4);
    func_0x000100162d98("VSR power state change",ppuVar5);
    func_0x000107c61574(puVar2);
    func_0x000107c60bd0(ppuVar5);
  }
  else {
    func_0x000107c61428(puVar2 + 0x10,&puStack_78,0,0);
    puVar4 = puVar2 + 0x10;
    func_0x000107c61648();
    if (puVar4 == (undefined *)0x0) {
      func_0x000107c61574(puVar2);
    }
    else {
      puVar3 = puVar2;
      func_0x000107c6157c();
      FUN_101e87fe0();
      if (((ulong)puVar3 & 1) != 0) {
        func_0x000101e87c50();
      }
      func_0x000107c61574(puVar4);
      func_0x000107c61578(puVar2,2);
    }
  }
  return;
}



/* Entry: 101e8829c; end: 101e882f7;  */

void FUN_101e8829c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  uVar1 = param_1 + 0x10;
  func_0x000107c61648();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    FUN_101e87fe0();
    if ((uVar2 & 1) != 0) {
      func_0x000101e87c50();
    }
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 101e882f8; end: 101e88363;  */

void FUN_101e882f8(undefined8 param_1,long param_2,code *param_3,code *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  uVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    (*param_3)();
    if ((uVar2 & 1) != 0) {
      (*param_4)();
    }
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 101e88364; end: 101e8852f;  */

void FUN_101e88364(undefined4 param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,
                  byte param_6)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  byte bStack_7c;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  bVar1 = *(byte *)(param_2 + 0x18);
  if (bVar1 - 5 < 3) {
    if ((param_3 & 1) == 0) {
      if ((param_4 & 1) == 0) {
        return;
      }
      if ((param_5 & 1) != 0) {
        return;
      }
      uVar6 = *(undefined4 *)(param_2 + 0x11c);
      puStack_68 = &UNK_1106ea3a8;
      lVar4 = param_2;
      func_0x000101e89f10();
      lStack_60 = lVar4;
      func_0x000101e89f50();
      bStack_7c = param_6 & 1;
      auStack_88[0] = 6;
      *(undefined1 *)(param_2 + 0x18) = 1;
      uStack_80 = param_1;
      uStack_78 = uVar6;
      uStack_74 = bVar1 == 7;
      lStack_58 = lVar4;
    }
    else {
      puStack_68 = &UNK_1106ea328;
      lVar4 = param_2;
      FUN_101e89fc4();
      lStack_60 = lVar4;
      func_0x000101e8a004();
      uStack_80 = CONCAT31(uStack_80._1_3_,bVar1 == 7);
      auStack_88[0] = 5;
      *(undefined1 *)(param_2 + 0x18) = 0;
      lStack_58 = lVar4;
    }
    uVar3 = *(undefined8 *)(param_2 + 0xe0);
    lVar4 = *(long *)(param_2 + 0xf0);
    func_0x000100dd26f4(param_2 + 200,uVar3);
    if (bVar1 == 5) {
      uVar2 = 0x6f72687473736170;
      uVar5 = 0xeb00000000686775;
    }
    else if (bVar1 == 7) {
      uVar5 = 0xe600000000000000;
      uVar2 = 0x657669746361;
    }
    else {
      uVar2 = 0x616d726f66726570;
      uVar5 = 0xef7473655465636e;
    }
    (**(code **)(lVar4 + 0x48))(uVar2,uVar5,0x64656c6261736964,0xe800000000000000,uVar3,lVar4);
    func_0x000107c6142c(uVar5);
    uVar3 = *(undefined8 *)(param_2 + 0xe0);
    lVar4 = *(long *)(param_2 + 0xe8);
    func_0x000100dd26f4(param_2 + 200,uVar3);
    (**(code **)(lVar4 + 0x10))(auStack_88,uVar3,lVar4);
    FUN_101e89f90(auStack_88);
  }
  return;
}



/* Entry: 101e88530; end: 101e88547;  */

void FUN_101e88530(undefined8 param_1,long param_2)

{
  *(bool *)param_1 = (*(byte *)(param_2 + 0x18) & 0xfe) == 6;
  return;
}



/* Entry: 101e88548; end: 101e886a7;  */

void FUN_101e88548(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_58 [24];
  
  uVar5 = (uint)(0x201000303030303 >> (((ulong)*(byte *)(param_1 + 0x18) & 7) << 3));
  if (7 < (ulong)*(byte *)(param_1 + 0x18)) {
    uVar5 = 3;
  }
  uVar9 = (ulong)uVar5;
  puVar4 = auStack_58;
  func_0x000107c61428(param_1 + 0xc0,puVar4,0x21,0);
  uVar2 = *(ulong *)(param_1 + 0xc0);
  func_0x000107c61558();
  uVar5 = (uint)uVar2;
  lVar8 = *(long *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0x8000000000000000;
  uVar3 = uVar9;
  func_0x000101e6b984();
  uVar6 = (ulong)~(uint)puVar4 & 1;
  lVar7 = *(long *)(lVar8 + 0x10) + uVar6;
  if (SCARRY8(*(long *)(lVar8 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e88684);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar7) {
    FUN_101e7cb64(lVar7);
    func_0x000101e6b984();
    uVar3 = uVar9;
    if (((uint)puVar4 & 1) != (uVar5 & 1)) {
      func_0x000107c60624(&UNK_110491570);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e88624);
      (*pcVar1)();
    }
  }
  else if ((uVar2 & 1) == 0) {
    FUN_101e7ca18();
    *(long *)(param_1 + 0xc0) = lVar8;
    goto joined_r0x000101e886a0;
  }
  *(long *)(param_1 + 0xc0) = lVar8;
joined_r0x000101e886a0:
  if (((ulong)puVar4 & 1) == 0) {
    FUN_101e6bbbc();
  }
  lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + uVar3 * 8);
  if (lVar7 != -1) {
    *(long *)(*(long *)(lVar8 + 0x38) + uVar3 * 8) = lVar7 + 1;
    func_0x000107c614a8(auStack_58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e88688);
  (*pcVar1)();
}



/* Entry: 101e886a8; end: 101e8886f;  */

void FUN_101e886a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    bVar3 = *(byte *)(param_1 + 0x18);
    if (bVar3 - 6 < 2) {
      uVar4 = *(undefined8 *)(param_1 + 0xe0);
      lVar2 = *(long *)(param_1 + 0xe8);
      lVar5 = param_1 + 200;
      func_0x000100dd26f4(lVar5,uVar4);
      uStack_98 = 0x657669746361;
      if (bVar3 != 7) {
        uStack_98 = 0x616d726f66726570;
      }
      uVar1 = 0xe600000000000000;
      if (bVar3 != 7) {
        uVar1 = 0xef7473655465636e;
      }
      puStack_80 = &UNK_1106ea228;
      FUN_101e8a6fc();
      lStack_78 = lVar5;
      func_0x000101e8a73c();
      auStack_a0[0] = 3;
      uStack_90 = uVar1;
      lStack_70 = lVar5;
      (**(code **)(lVar2 + 0x10))(auStack_a0,uVar4,lVar2);
      func_0x000107c61574(param_1);
      FUN_101e89f90(auStack_a0);
    }
    else {
      if (bVar3 == 5) {
        *(undefined1 *)(param_1 + 0x18) = 6;
        uVar4 = *(undefined8 *)(param_1 + 0xe0);
        lVar5 = *(long *)(param_1 + 0xf0);
        func_0x000100dd26f4(param_1 + 200,uVar4);
        (**(code **)(lVar5 + 0x48))
                  (0x6f72687473736170,0xeb00000000686775,0x616d726f66726570,0xef7473655465636e,uVar4
                   ,lVar5);
        func_0x000107c61428(param_1 + 0x20,auStack_a0,1,0);
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        *(undefined **)(param_1 + 0x20) = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c6142c(uVar4);
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined1 *)(param_1 + 0x30) = 0;
      }
      func_0x000107c61574();
    }
  }
  return;
}



/* Entry: 101e88870; end: 101e88887;  */

void FUN_101e88870(void)

{
  FUN_101e886a8();
  return;
}



/* Entry: 101e88888; end: 101e88fd7;  */

void FUN_101e88888(double param_1,long param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 uVar8;
  ulong uVar9;
  double *pdVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_98 [8];
  double dStack_90;
  double dStack_88;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  
  if (*(char *)(param_2 + 0x18) == '\a') {
    func_0x000107c61428(param_2 + 0x20,auStack_98,0x21,0);
    uVar12 = *(ulong *)(param_2 + 0x20);
    uVar9 = uVar12;
    func_0x000107c61558();
    *(ulong *)(param_2 + 0x20) = uVar12;
    uVar7 = uVar12;
    if ((uVar9 & 1) == 0) {
      uVar7 = 0;
      func_0x0001014dd0d8(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *(ulong *)(param_2 + 0x20) = uVar7;
    }
    uVar9 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar9) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x0001014dd0d8(uVar12,uVar9 + 1,1,uVar7);
    }
    *(ulong *)(uVar12 + 0x10) = uVar9 + 1;
    *(double *)(uVar12 + uVar9 * 8 + 0x20) = param_1;
    *(ulong *)(param_2 + 0x20) = uVar12;
    puVar6 = auStack_98;
    func_0x000107c614a8();
    uVar7 = *(ulong *)(param_2 + 0x100);
    if ((long)uVar7 <= (long)uVar9) {
      func_0x000107c61428(param_2 + 0x20,auStack_98,0x21,0);
      FUN_101e8a1dc(0,1);
      puVar6 = auStack_98;
      func_0x000107c614a8();
    }
    dVar16 = *(double *)(param_2 + 0x110);
    if (dVar16 < param_1) {
      uVar14 = *(undefined8 *)(param_2 + 0xe0);
      lVar15 = *(long *)(param_2 + 0xe8);
      puVar6 = (undefined1 *)(param_2 + 200);
      func_0x000100dd26f4(puVar6,uVar14);
      puStack_78 = &UNK_1106ea1a8;
      func_0x000101e8a5e8();
      puStack_70 = puVar6;
      func_0x000101e8a628();
      auStack_98[0] = 2;
      dStack_90 = param_1;
      dStack_88 = dVar16;
      puStack_68 = puVar6;
      goto LAB_101e88da0;
    }
    lVar15 = *(long *)(param_2 + 0x20);
    if (*(ulong *)(lVar15 + 0x10) != uVar7) {
      return;
    }
    if (uVar7 == 0) {
      dVar16 = 0.0;
    }
    else {
      if (uVar7 < 4) {
        uVar12 = 0;
        dVar16 = 0.0;
      }
      else {
        uVar12 = uVar7 & 0xfffffffffffffffc;
        pdVar10 = (double *)(lVar15 + 0x30);
        dVar16 = 0.0;
        uVar9 = uVar12;
        do {
          dVar16 = dVar16 + pdVar10[-2] + pdVar10[-1] + *pdVar10 + pdVar10[1];
          pdVar10 = pdVar10 + 4;
          uVar9 = uVar9 - 4;
        } while (uVar9 != 0);
        if (uVar7 == uVar12) goto LAB_101e88bc0;
      }
      lVar11 = uVar7 - uVar12;
      pdVar10 = (double *)(lVar15 + uVar12 * 8 + 0x20);
      do {
        dVar16 = dVar16 + *pdVar10;
        lVar11 = lVar11 + -1;
        pdVar10 = pdVar10 + 1;
      } while (lVar11 != 0);
    }
LAB_101e88bc0:
    dVar17 = *(double *)(param_2 + 0x108);
    if (dVar16 / (double)uVar7 <= dVar17) {
      return;
    }
    puStack_78 = &UNK_1106ea128;
    func_0x000101e8a568();
    puStack_70 = puVar6;
    func_0x000101e8a5a8();
    auStack_98[0] = 1;
    cVar3 = *(char *)(param_2 + 0x18);
    uVar8 = 4;
    dStack_90 = dVar16 / (double)uVar7;
    dStack_88 = dVar17;
    puStack_68 = puVar6;
  }
  else {
    if (*(char *)(param_2 + 0x18) != '\x06') {
      return;
    }
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
      uVar14 = *(undefined8 *)(param_2 + 0xe0);
      lVar15 = *(long *)(param_2 + 0xf0);
      func_0x000100dd26f4(param_2 + 200,uVar14);
      param_1 = param_1 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e88fc4);
        (*pcVar5)();
      }
      if (-9.223372036854778e+18 < param_1) {
        if (param_1 < 9.223372036854776e+18) {
          (**(code **)(lVar15 + 0x18))((long)param_1,uVar14,lVar15);
          *(double *)(param_2 + 0x68) = param_1;
          *(undefined1 *)(param_2 + 0x30) = 1;
          return;
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e88fcc);
        (*pcVar5)();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101e88fc8);
      (*pcVar5)();
    }
    if (*(long *)(param_2 + 0x28) == 0) {
      uVar14 = *(undefined8 *)(param_2 + 0xe0);
      lVar15 = *(long *)(param_2 + 0xf0);
      func_0x000100dd26f4(param_2 + 200,uVar14);
      (**(code **)(lVar15 + 0x28))(uVar14,lVar15);
    }
    func_0x000107c61428(param_2 + 0x20,auStack_98,0x21,0);
    uVar12 = *(ulong *)(param_2 + 0x20);
    uVar9 = uVar12;
    func_0x000107c61558();
    *(ulong *)(param_2 + 0x20) = uVar12;
    uVar7 = uVar12;
    if ((uVar9 & 1) == 0) {
      uVar7 = 0;
      func_0x0001014dd0d8(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *(ulong *)(param_2 + 0x20) = uVar7;
    }
    uVar9 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar9) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x0001014dd0d8(uVar12,uVar9 + 1,1,uVar7);
    }
    *(ulong *)(uVar12 + 0x10) = uVar9 + 1;
    *(double *)(uVar12 + uVar9 * 8 + 0x20) = param_1;
    *(ulong *)(param_2 + 0x20) = uVar12;
    func_0x000107c614a8(auStack_98);
    if (SCARRY8(*(long *)(param_2 + 0x28),1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101e88fc0);
      (*pcVar5)();
    }
    *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + 1;
    uVar14 = *(undefined8 *)(param_2 + 0xe0);
    lVar15 = *(long *)(param_2 + 0xf0);
    func_0x000100dd26f4(param_2 + 200,uVar14);
    (**(code **)(lVar15 + 0x30))(param_1,param_3,param_4,param_5,uVar14,lVar15);
    if (*(long *)(param_2 + 0x28) < *(long *)(param_2 + 0xf8)) {
      return;
    }
    lVar15 = *(long *)(param_2 + 0x20);
    uVar9 = *(ulong *)(lVar15 + 0x10);
    if (uVar9 == 0) {
      dVar16 = 0.0;
    }
    else {
      if (uVar9 < 4) {
        uVar12 = 0;
        dVar16 = 0.0;
      }
      else {
        uVar12 = uVar9 & 0x7ffffffffffffffc;
        pdVar10 = (double *)(lVar15 + 0x30);
        dVar16 = 0.0;
        uVar7 = uVar12;
        do {
          dVar16 = dVar16 + pdVar10[-2] + pdVar10[-1] + *pdVar10 + pdVar10[1];
          pdVar10 = pdVar10 + 4;
          uVar7 = uVar7 - 4;
        } while (uVar7 != 0);
        if (uVar9 == uVar12) goto LAB_101e88c84;
      }
      lVar11 = uVar9 - uVar12;
      pdVar10 = (double *)(lVar15 + uVar12 * 8 + 0x20);
      do {
        dVar16 = dVar16 + *pdVar10;
        lVar11 = lVar11 + -1;
        pdVar10 = pdVar10 + 1;
      } while (lVar11 != 0);
    }
LAB_101e88c84:
    dVar16 = dVar16 / (double)uVar9;
    dVar17 = *(double *)(param_2 + 0x108);
    if (dVar16 <= dVar17) {
      cVar3 = *(char *)(param_2 + 0x18);
      *(undefined1 *)(param_2 + 0x18) = 7;
      uVar13 = *(undefined8 *)(param_2 + 0xe0);
      lVar15 = *(long *)(param_2 + 0xf0);
      func_0x000100dd26f4(param_2 + 200,uVar13);
      uVar14 = 0x64656c6261736964;
      if (cVar3 == '\x06') {
        uVar14 = 0x616d726f66726570;
      }
      uVar2 = 0xe800000000000000;
      if (cVar3 == '\x06') {
        uVar2 = 0xef7473655465636e;
      }
      uVar1 = 0x657669746361;
      if (cVar3 != '\a') {
        uVar1 = uVar14;
      }
      uVar14 = 0xe600000000000000;
      if (cVar3 != '\a') {
        uVar14 = uVar2;
      }
      uVar2 = 0xeb00000000686775;
      uVar4 = 0x6f72687473736170;
      if (cVar3 != '\x05') {
        uVar2 = uVar14;
        uVar4 = uVar1;
      }
      (**(code **)(lVar15 + 0x48))(uVar4,uVar2,0x657669746361,0xe600000000000000,uVar13,lVar15);
      func_0x000107c6142c(uVar2);
      uVar14 = *(undefined8 *)(param_2 + 0x20);
      *(undefined **)(param_2 + 0x20) = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c6142c(uVar14);
      uVar14 = *(undefined8 *)(param_2 + 0xe0);
      lVar15 = *(long *)(param_2 + 0xf0);
      func_0x000100dd26f4(param_2 + 200,uVar14);
      dVar16 = dVar16 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e88fd0);
        (*pcVar5)();
      }
      if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e88fd4);
        (*pcVar5)();
      }
      if (dVar16 < 9.223372036854776e+18) {
        (**(code **)(lVar15 + 0x38))((long)dVar16,uVar14,lVar15);
        return;
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101e88fd8);
      (*pcVar5)();
    }
    puStack_78 = &UNK_1106ea0a8;
    func_0x000101e8a668();
    puStack_70 = param_3;
    func_0x000101e8a6a8();
    auStack_98[0] = 0;
    cVar3 = *(char *)(param_2 + 0x18);
    uVar8 = 3;
    dStack_90 = dVar16;
    dStack_88 = dVar17;
    puStack_68 = param_3;
  }
  *(undefined1 *)(param_2 + 0x18) = uVar8;
  uVar13 = *(undefined8 *)(param_2 + 0xe0);
  lVar15 = *(long *)(param_2 + 0xf0);
  func_0x000100dd26f4(param_2 + 200,uVar13);
  uVar14 = 0x64656c6261736964;
  if (cVar3 == '\x06') {
    uVar14 = 0x616d726f66726570;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 == '\x06') {
    uVar2 = 0xef7473655465636e;
  }
  uVar1 = 0x657669746361;
  if (cVar3 != '\a') {
    uVar1 = uVar14;
  }
  uVar14 = 0xe600000000000000;
  if (cVar3 != '\a') {
    uVar14 = uVar2;
  }
  uVar2 = 0xeb00000000686775;
  uVar4 = 0x6f72687473736170;
  if (cVar3 != '\x05') {
    uVar2 = uVar14;
    uVar4 = uVar1;
  }
  (**(code **)(lVar15 + 0x48))(uVar4,uVar2,0x64656c6261736964,0xe800000000000000,uVar13,lVar15);
  func_0x000107c6142c(uVar2);
  uVar14 = *(undefined8 *)(param_2 + 0xe0);
  lVar15 = *(long *)(param_2 + 0xe8);
  func_0x000100dd26f4(param_2 + 200,uVar14);
LAB_101e88da0:
  (**(code **)(lVar15 + 0x10))(auStack_98,uVar14,lVar15);
  FUN_101e89f90(auStack_98);
  return;
}



/* Entry: 101e88fd8; end: 101e88feb;  */

void FUN_101e88fd8(void)

{
  FUN_101e8a114();
  return;
}



/* Entry: 101e88fec; end: 101e8901f;  */

void FUN_101e88fec(undefined8 param_1)

{
  long unaff_x20;
  
  *(bool *)param_1 = (*(byte *)(unaff_x20 + 0x18) & 0xfe) == 6;
  return;
}



/* Entry: 101e89020; end: 101e89043;  */

undefined8 FUN_101e89020(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101e89044; end: 101e89143;  */

void FUN_101e89044(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0xc0,auStack_58,0,0);
  lVar6 = *(long *)(param_2 + 0xc0);
  lVar2 = lVar6;
  func_0x000107c61434();
  FUN_101e87158();
  func_0x000107c6142c(lVar6);
  puVar5 = *(undefined **)(lVar2 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar5 != (undefined *)0x0) {
    uVar3 = 0x112dd8c08;
    func_0x0001000285a8(0x112dd8c08,&UNK_10d99c060);
    func_0x000107c60498(puVar5,uVar3);
    puVar4 = puVar5;
  }
  func_0x000107c61434(lVar2);
  FUN_101e89938();
  if (unaff_x21 != 0) {
    func_0x000107c615e4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e89144);
    (*pcVar1)();
  }
  func_0x000107c6142c(lVar2);
  *param_1 = puVar4;
  return;
}



/* Entry: 101e89144; end: 101e8914f;  */

void FUN_101e89144(undefined1 *param_1,long param_2)

{
  *param_1 = *(undefined1 *)(param_2 + 0x18);
  return;
}



/* Entry: 101e89150; end: 101e892eb;  */

void FUN_101e89150(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  puVar1 = &UNK_110491408;
  func_0x000107c613fc(&UNK_110491408,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar2);
  func_0x000100087bd4(0x101e8a7dc,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101e892ec; end: 101e8930f;  */

void FUN_101e892ec(void)

{
  FUN_101e87bcc();
  func_0x000101e87c50();
  return;
}


