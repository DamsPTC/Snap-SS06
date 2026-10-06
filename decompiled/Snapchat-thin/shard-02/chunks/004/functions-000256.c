/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c5556c; end: 101c555c7;  */

void FUN_101c5556c(long param_1,long param_2)

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



/* Entry: 101c555c8; end: 101c555e7;  */

void FUN_101c555c8(void)

{
  func_0x000107c61168(&PTR_PTR_1127fce50);
  return;
}



/* Entry: 101c555e8; end: 101c555fb;  */

void FUN_101c555e8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 101c555fc; end: 101c556e3;  */

/* WARNING: Possible PIC construction at 0x000101c55654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c55658) */

void FUN_101c555fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aeed8;
  func_0x000107c61168(PTR_PTR_1126aeed8);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c42534(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c556e4; end: 101c556eb;  */

void FUN_101c556e4(long param_1,long param_2)

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



/* Entry: 101c556ec; end: 101c5575f;  */

long FUN_101c556ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c615f0(param_1);
  uVar1 = param_2;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 101c55760; end: 101c55773;  */

bool FUN_101c55760(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101c55774; end: 101c5581f;  */

void FUN_101c55774(void)

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



/* Entry: 101c55820; end: 101c5584f;  */

void FUN_101c55820(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101c55850; end: 101c5592b;  */

void FUN_101c55850(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0xb8) + 0x10);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x22 + 0xa8));
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101c5592c;
  lVar3 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar3,1);
  uVar2 = 0x112e0bf20;
  func_0x0001000285a8(0x112e0bf20,&UNK_10d9e56a0);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101c561ec;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11045d5c8;
  *(long *)(unaff_x22 + 0x70) = lVar3;
  func_0x000107c61174(uVar1);
  func_0x000107c43e08(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101c5592c; end: 101c55983;  */

void FUN_101c5592c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xd0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101c55984;
  }
  else {
    pcVar1 = FUN_101c560b8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c55984; end: 101c55d63;  */

/* WARNING: Removing unreachable block (ram,0x000101c55c28) */
/* WARNING: Removing unreachable block (ram,0x000101c55ae4) */

void FUN_101c55984(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  double dVar16;
  long lStack_80;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 200);
  puVar9 = *(undefined1 **)(unaff_x22 + 0x90);
  *(undefined1 **)(unaff_x22 + 0xd8) = puVar9;
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c61170(uVar7);
  puVar8 = puVar9;
  func_0x000107c4f900();
  func_0x000107c61180();
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = puVar9;
    func_0x000107c40500();
    func_0x000107c61180();
    if (puVar8 != (undefined1 *)0x0) {
      puVar9 = puVar8;
      func_0x000107c5faec();
      func_0x000107c61170(puVar8);
      *(long *)(unaff_x22 + 0xe0) = param_3;
      plVar2 = (long *)0xf0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xe8) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_101c55d64;
      plVar10 = *(long **)(unaff_x22 + 0xb8);
      plVar2[0x13] = param_3;
      plVar2[0x14] = (long)plVar10;
      plVar2[0x12] = (long)puVar9;
      plVar2[0x15] = *plVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101c562d4,0,0);
      return;
    }
    func_0x000101c56a88();
    puVar3 = &UNK_11045d6a0;
    func_0x000107c613f8(&UNK_11045d6a0,puVar8,0,0);
    *puVar8 = 0;
    func_0x000107c61654();
    func_0x000107c61170(puVar9);
    puVar4 = puVar3;
    FUN_101c56910();
    *(char *)(unaff_x22 + 0x108) = (char)puVar4;
    uVar7 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar7 != 0) {
      FUN_101c56a48();
      func_0x000107c61658(unaff_x22 + 0x108,&UNK_1106c7470,uVar7);
    }
    puVar8 = *(undefined1 **)(unaff_x22 + 0xc0);
    func_0x000107c614ac(puVar3);
    *puVar8 = (char)puVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    goto LAB_101c55c98;
  }
  puVar9 = puVar8;
  func_0x000107c5ee30();
  lVar14 = param_3;
  func_0x000107c61170(puVar8);
  lVar1 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c51b44();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar13 = 0;
    lVar14 = -0x1000000000000000;
  }
  else {
    lVar13 = lVar1;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar1);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c4a3ac(uVar7);
  puVar8 = puVar9;
  lVar1 = param_3;
  func_0x000102914b2c(puVar9,param_3,lVar13,lVar14,0,0xf000000000000000,uVar7);
  lVar12 = *(long *)(unaff_x22 + 0xd8);
  func_0x0001000b44c0(lVar13);
  func_0x000107c40500();
  func_0x000107c61180();
  if (lVar12 == 0) {
    lVar13 = 0;
    lVar14 = -0x2000000000000000;
  }
  else {
    lVar13 = lVar12;
    func_0x000107c5faec();
    func_0x000107c61170(lVar12);
  }
  func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioPlayer_1126bdec8);
  func_0x00010006c00c(puVar8,lVar1);
  puVar5 = puVar8;
  FUN_101c56850(puVar8,lVar1);
  lVar12 = lVar1;
  func_0x00010006c090(puVar8);
  if (puVar5 == (undefined1 *)0x0) {
LAB_101c55c30:
    lStack_80 = 0;
  }
  else {
    func_0x000107c42378(puVar5);
    func_0x000107c61170(puVar5);
    if ((0x7fffffffffffffff < (ulong)param_1 ||
        0x3fe < (long)ABS(param_1) + 0xfff0000000000000U >> 0x35) &&
        0xffffffffffffe < (long)param_1 - 1U) goto LAB_101c55c30;
    dVar16 = (double)(long)(param_1 * 1000.0);
    if (0x7fe < (ulong)dVar16 >> 0x34) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101c55d5c);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101c55d60);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101c55d64);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lStack_80 = (long)dVar16;
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  puVar15 = *(undefined8 **)(unaff_x22 + 0x98);
  uVar7 = uVar11;
  func_0x000107c50374();
  func_0x000107c61180();
  uVar6 = uVar7;
  func_0x000107c5faec();
  func_0x00010006c090(puVar9,param_3);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  *puVar15 = puVar8;
  puVar15[1] = lVar1;
  puVar15[2] = lVar13;
  puVar15[3] = lVar14;
  puVar15[4] = lStack_80;
  puVar15[5] = uVar6;
  puVar15[6] = lVar12;
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101c55c98:
                    /* WARNING: Could not recover jumptable at 0x000101c55cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101c55d64; end: 101c55ddb;  */

void FUN_101c55d64(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe8));
  func_0x000107c6142c(*(undefined8 *)(lVar2 + 0xe0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xf8) = param_2;
    *(undefined8 *)(lVar2 + 0x100) = param_1;
    pcVar1 = FUN_101c55ddc;
  }
  else {
    pcVar1 = FUN_101c5615c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c55ddc; end: 101c560b7;  */

/* WARNING: Removing unreachable block (ram,0x000101c55f7c) */

void FUN_101c55ddc(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  long *plVar12;
  double dVar13;
  long lStack_80;
  
  lVar4 = *(long *)(unaff_x22 + 0xf8);
  lVar1 = *(long *)(unaff_x22 + 0x100);
  lVar10 = *(long *)(unaff_x22 + 0xf0);
  lVar2 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c51b44();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar8 = 0;
    param_3 = -0x1000000000000000;
  }
  else {
    lVar8 = lVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar2);
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c4a3ac(uVar3);
  lVar2 = lVar1;
  lVar6 = lVar4;
  func_0x000102914b2c(lVar1,lVar4,lVar8,param_3,0,0xf000000000000000,uVar3);
  lVar11 = *(long *)(unaff_x22 + 0xd8);
  if (lVar10 != 0) {
    func_0x000107c61170(lVar11);
    func_0x0001000b44c0(lVar8,param_3);
    func_0x00010006c090(lVar1,lVar4);
    lVar4 = lVar10;
    FUN_101c56910();
    *(char *)(unaff_x22 + 0x108) = (char)lVar4;
    uVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar3 != 0) {
      FUN_101c56a48();
      func_0x000107c61658(unaff_x22 + 0x108,&UNK_1106c7470,uVar3);
    }
    puVar7 = *(undefined1 **)(unaff_x22 + 0xc0);
    func_0x000107c614ac(lVar10);
    *puVar7 = (char)lVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    goto LAB_101c55fec;
  }
  func_0x0001000b44c0(lVar8);
  func_0x000107c40500();
  func_0x000107c61180();
  if (lVar11 == 0) {
    lVar10 = 0;
    param_3 = -0x2000000000000000;
  }
  else {
    lVar10 = lVar11;
    func_0x000107c5faec();
    func_0x000107c61170(lVar11);
  }
  func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioPlayer_1126bdec8);
  func_0x00010006c00c(lVar2,lVar6);
  lVar8 = lVar2;
  FUN_101c56850(lVar2,lVar6);
  lVar11 = lVar6;
  func_0x00010006c090(lVar2);
  if (lVar8 == 0) {
LAB_101c55f84:
    lStack_80 = 0;
  }
  else {
    func_0x000107c42378(lVar8);
    func_0x000107c61170(lVar8);
    if ((0x7fffffffffffffff < (ulong)param_1 ||
        0x3fe < (long)ABS(param_1) + 0xfff0000000000000U >> 0x35) &&
        0xffffffffffffe < (long)param_1 - 1U) goto LAB_101c55f84;
    dVar13 = (double)(long)(param_1 * 1000.0);
    if (0x7fe < (ulong)dVar13 >> 0x34) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101c560b0);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101c560b4);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101c560b8);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lStack_80 = (long)dVar13;
  }
  lVar9 = *(long *)(unaff_x22 + 0xd8);
  plVar12 = *(long **)(unaff_x22 + 0x98);
  lVar8 = lVar9;
  func_0x000107c50374();
  func_0x000107c61180();
  lVar5 = lVar8;
  func_0x000107c5faec();
  func_0x00010006c090(lVar1,lVar4);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  *plVar12 = lVar2;
  plVar12[1] = lVar6;
  plVar12[2] = lVar10;
  plVar12[3] = param_3;
  plVar12[4] = lStack_80;
  plVar12[5] = lVar5;
  plVar12[6] = lVar11;
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101c55fec:
                    /* WARNING: Could not recover jumptable at 0x000101c5600c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101c560b8; end: 101c5615b;  */

void FUN_101c560b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61654();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar1 = uVar3;
  FUN_101c56910();
  *(char *)(unaff_x22 + 0x108) = (char)uVar1;
  uVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar2 != 0) {
    FUN_101c56a48();
    func_0x000107c61658(unaff_x22 + 0x108,&UNK_1106c7470,uVar2);
  }
  puVar4 = *(undefined1 **)(unaff_x22 + 0xc0);
  func_0x000107c614ac(uVar3);
  *puVar4 = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x000101c56158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c5615c; end: 101c561eb;  */

void FUN_101c5615c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar1 = uVar3;
  FUN_101c56910();
  *(char *)(unaff_x22 + 0x108) = (char)uVar1;
  uVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar2 != 0) {
    FUN_101c56a48();
    func_0x000107c61658(unaff_x22 + 0x108,&UNK_1106c7470,uVar2);
  }
  puVar4 = *(undefined1 **)(unaff_x22 + 0xc0);
  func_0x000107c614ac(uVar3);
  *puVar4 = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x000101c561e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c561ec; end: 101c56297;  */

void FUN_101c561ec(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar2,*(undefined8 *)(param_1 + 0x38));
  lVar4 = *plVar2;
  if (param_3 != 0) {
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar3);
    return;
  }
  if (param_2 != 0) {
    **(long **)(*(long *)(lVar4 + 0x40) + 0x28) = param_2;
    func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c56298);
  (*pcVar1)();
}



/* Entry: 101c56298; end: 101c562d3;  */

long FUN_101c56298(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 101c562d4; end: 101c56607;  */

void FUN_101c562d4(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 *puVar11;
  
  puVar2 = *(undefined1 **)(*(long *)(unaff_x22 + 0xa0) + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0xb0) = puVar2;
  if (puVar2 != (undefined1 *)0x0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
    puVar3 = PTR_PTR_1126b08b8;
    func_0x000107c610f8();
    uVar4 = uVar8;
    func_0x000107c5fadc(uVar8,uVar1);
    func_0x000107c4766c();
    *(undefined **)(unaff_x22 + 0xb8) = puVar3;
    func_0x000107c61170(uVar4);
    puVar3 = PTR_PTR_1126b1058;
    func_0x000107c610f8();
    uVar4 = uVar8;
    func_0x000107c5fadc(uVar8,uVar1);
    uVar5 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010f005330);
    uVar6 = 0x6f69647561;
    func_0x000107c5fadc(0x6f69647561,0xe500000000000000);
    func_0x000107c46d48();
    *(undefined **)(unaff_x22 + 0xc0) = puVar3;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    puVar7 = PTR_PTR_1126b1050;
    func_0x000107c610f8();
    func_0x000107c61174();
    uVar4 = uVar8;
    func_0x000107c5fadc(uVar8,uVar1);
    func_0x000107c5fadc(uVar8,uVar1);
    func_0x000107c4915c();
    *(undefined **)(unaff_x22 + 200) = puVar7;
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    puVar3 = PTR_PTR_1126b1060;
    func_0x000107c610f8();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    func_0x000107c47d08();
    *(undefined **)(unaff_x22 + 0xd0) = puVar3;
    func_0x000107c61170(puVar7);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101c56608;
    lVar9 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar9,1);
    puVar3 = &UNK_11045d6c0;
    func_0x000107c613fc(&UNK_11045d6c0,0x20,7);
    puVar11 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar11 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar3 + 0x10) = lVar9;
    *(undefined8 *)(puVar3 + 0x18) = uVar10;
    *(code **)(unaff_x22 + 0x70) = FUN_101c56c80;
    *(undefined **)(unaff_x22 + 0x78) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_10137d3d0;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11045d6d8;
    func_0x000107c60bc4();
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4fc28(puVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000101c56a88();
  func_0x000107c613f8(&UNK_11045d6a0,puVar2,0,0);
  *puVar2 = 1;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101c56604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c56608; end: 101c56673;  */

void FUN_101c56608(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd8) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xe8) = *(undefined8 *)(lVar2 + 0x88);
    *(undefined8 *)(lVar2 + 0xe0) = *(undefined8 *)(lVar2 + 0x80);
    pcVar1 = FUN_101c56674;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101c566dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c56674; end: 101c566db;  */

void FUN_101c56674(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101c566d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0xe8));
  return;
}



/* Entry: 101c566dc; end: 101c5673f;  */

void FUN_101c566dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101c5673c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c56740; end: 101c5676b;  */

void FUN_101c56740(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c5676c; end: 101c567df;  */

void FUN_101c5676c(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  plVar1 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c567e0;
  plVar1[0x17] = unaff_x20;
  plVar1[0x18] = unaff_x22 + 0x60;
  plVar1[0x15] = param_3;
  plVar1[0x16] = param_4;
  plVar1[0x13] = unaff_x22 + 0x10;
  plVar1[0x14] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c55850,0,0);
  return;
}



/* Entry: 101c567e0; end: 101c5684f;  */

void FUN_101c567e0(void)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar7 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    uVar9 = *(undefined8 *)(lVar2 + 0x38);
    uVar8 = *(undefined8 *)(lVar2 + 0x30);
    puVar1 = *(undefined8 **)(lVar2 + 0x48);
    puVar1[6] = *(undefined8 *)(lVar2 + 0x40);
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
  else {
    **(undefined1 **)(lVar2 + 0x50) = *(undefined1 *)(lVar2 + 0x60);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101c5684c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101c56850; end: 101c5690f;  */

ulong FUN_101c56850(undefined **param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  uint uVar10;
  ulong unaff_x20;
  undefined **unaff_x21;
  byte bStack_79;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  ppuStack_40 = (undefined **)0x0;
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  ppuStack_68 = ppuStack_40;
  if (unaff_x20 == 0) {
    param_1 = ppuStack_40;
    func_0x000107c61174();
    func_0x000107c5ed30();
    ppuVar2 = param_1;
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    ppuVar2 = ppuStack_40;
    func_0x000107c61174();
    ppuStack_68 = unaff_x21;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    pcStack_48 = FUN_101c56910;
    ppuStack_78 = ppuVar2;
    ppuStack_70 = param_1;
    ppuStack_58 = ppuStack_68;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x000107c614b0();
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    pbVar4 = &bStack_79;
    pppuVar8 = &ppuStack_78;
    func_0x000107c6147c(pbVar4,pppuVar8,uVar3,&UNK_1106c7470,6);
    if ((int)pbVar4 == 0) {
      func_0x000107c5ed2c();
      ppuVar7 = ppuVar2;
      func_0x000107c42210();
      func_0x000107c61180();
      ppuVar6 = ppuVar7;
      func_0x000107c5faec();
      pppuVar9 = pppuVar8;
      func_0x000107c61170(ppuVar7);
      ppuVar7 = &PTR____CFConstantStringClassReference_110eeb1d8;
      func_0x000107c5faec();
      if (ppuVar6 == ppuVar7 && pppuVar8 == pppuVar9) {
        func_0x000107c6142c(pppuVar8);
        func_0x000107c6142c(pppuVar9);
      }
      else {
        func_0x000107c605b8(ppuVar6,pppuVar8,ppuVar7,pppuVar9,0);
        func_0x000107c6142c(pppuVar8);
        func_0x000107c6142c(pppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          func_0x000107c61170(ppuVar2);
          return 3;
        }
      }
      ppuVar7 = ppuVar2;
      func_0x000107c3fcb0();
      func_0x000107c61170(ppuVar2);
      uVar10 = 3;
      if (ppuVar7 == (undefined **)0x2) {
        uVar10 = 1;
      }
      uVar1 = 0;
      if (ppuVar7 != (undefined **)0x1) {
        uVar1 = uVar10;
      }
      uVar5 = (ulong)uVar1;
    }
    else {
      uVar5 = (ulong)bStack_79;
    }
    return uVar5;
  }
  return unaff_x20;
}



/* Entry: 101c56910; end: 101c56a47;  */

undefined1 FUN_101c56910(undefined **param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined1 uVar7;
  undefined1 uStack_39;
  undefined **ppuStack_38;
  
  ppuStack_38 = param_1;
  func_0x000107c614b0();
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar2 = &uStack_39;
  pppuVar5 = &ppuStack_38;
  func_0x000107c6147c(puVar2,pppuVar5,uVar1,&UNK_1106c7470,6);
  if ((int)puVar2 == 0) {
    func_0x000107c5ed2c();
    ppuVar4 = param_1;
    func_0x000107c42210();
    func_0x000107c61180();
    ppuVar3 = ppuVar4;
    func_0x000107c5faec();
    pppuVar6 = pppuVar5;
    func_0x000107c61170(ppuVar4);
    ppuVar4 = &PTR____CFConstantStringClassReference_110eeb1d8;
    func_0x000107c5faec();
    if (ppuVar3 == ppuVar4 && pppuVar5 == pppuVar6) {
      func_0x000107c6142c(pppuVar5);
      func_0x000107c6142c(pppuVar6);
    }
    else {
      func_0x000107c605b8(ppuVar3,pppuVar5,ppuVar4,pppuVar6,0);
      func_0x000107c6142c(pppuVar5);
      func_0x000107c6142c(pppuVar6);
      if (((ulong)ppuVar3 & 1) == 0) {
        func_0x000107c61170(param_1);
        return 3;
      }
    }
    ppuVar4 = param_1;
    func_0x000107c3fcb0();
    func_0x000107c61170(param_1);
    uVar7 = 3;
    if (ppuVar4 == (undefined **)0x2) {
      uVar7 = 1;
    }
    uStack_39 = 0;
    if (ppuVar4 != (undefined **)0x1) {
      uStack_39 = uVar7;
    }
  }
  return uStack_39;
}



/* Entry: 101c56a48; end: 101c56ac7;  */

void FUN_101c56a48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0bf28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc478f0;
  func_0x000107c61520(&UNK_10dc478f0,&UNK_1106c7470);
  puRam0000000112e0bf28 = puVar1;
  return;
}



/* Entry: 101c56ac8; end: 101c56c3f;  */

undefined1  [16] FUN_101c56ac8(void)

{
  return ZEXT816(0x11045d610);
}



/* Entry: 101c56c40; end: 101c56c7f;  */

void FUN_101c56c40(void)

{
  undefined *puVar1;
  
  if (puRam0000000113493248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e57b4;
  func_0x000107c61520(&UNK_10d9e57b4,&UNK_11045d6a0);
  puRam0000000113493248 = puVar1;
  return;
}



/* Entry: 101c56c80; end: 101c56d9b;  */

void FUN_101c56c80(undefined1 *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x20;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if ((param_3 & 1) == 0) goto LAB_101c56ce8;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar4 != 0) {
      if ((long)(int)param_1 == (long)param_1 >> 0x20) goto LAB_101c56ce8;
LAB_101c56d64:
      func_0x00010006c00c();
LAB_101c56d78:
      puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x40) + 0x28);
      *puVar5 = param_1;
      puVar5[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar6);
      return;
    }
    if ((param_2 & 0xff000000000000) != 0) goto LAB_101c56d78;
  }
  else if (uVar4 == 2) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_101c56ce8;
    goto LAB_101c56d64;
  }
  func_0x00010006c090();
LAB_101c56ce8:
  func_0x000101c56a88();
  puVar2 = &UNK_11045d6a0;
  func_0x000107c613f8(&UNK_11045d6a0,param_1,0,0);
  *param_1 = 2;
  func_0x000107c61654();
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar5 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar5 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar6,uVar3);
  return;
}



/* Entry: 101c56d9c; end: 101c56db7;  */

void FUN_101c56d9c(long param_1,long param_2)

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



/* Entry: 101c56db8; end: 101c56e53;  */

void FUN_101c56db8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0;
  FUN_101c57124(0);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x000101c56eb0(uStack_38,uVar1);
  uVar1 = 0;
  func_0x000101c571b8(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126a8ca8;
  func_0x000107c610f8();
  func_0x000107c46af8();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 101c56e54; end: 101c56e63;  */

undefined1  [16] FUN_101c56e54(void)

{
  return ZEXT816(0x11045d7f8);
}



/* Entry: 101c56e64; end: 101c56efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c56e64(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0bfe0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c56efc; end: 101c56f9f; -[_TtC35SpotlightDraftsGatingImplementation25SpotlightDraftsGatingImpl isSpotlightDraftsEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101c56efc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + _DAT_112e0bfe0);
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar2 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f005350);
    lVar3 = lVar4;
    func_0x000107c3ebd4(lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar2);
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c56fa0);
  (*pcVar1)();
}



/* Entry: 101c56fa0; end: 101c570ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101c56fa0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112e0bfe0);
  lVar4 = lVar5;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c570a8);
    (*pcVar1)();
  }
  uVar2 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f005350);
  lVar3 = lVar4;
  func_0x000107c3ebd4();
  func_0x000107c615e8(lVar4);
  func_0x000107c61170(uVar2);
  lVar4 = 0;
  if ((int)lVar3 != 0) {
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101c570ac);
      (*pcVar1)();
    }
    uVar2 = 0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010f005370);
    lVar4 = lVar5;
    func_0x000107c3ebd4(lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar2);
  }
  return lVar4;
}



/* Entry: 101c570ac; end: 101c570df; -[_TtC35SpotlightDraftsGatingImplementation25SpotlightDraftsGatingImpl isMemoriesBannerPageEnabled] */

uint FUN_101c570ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101c56fa0();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101c570e0; end: 101c57113;  */

void FUN_101c570e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c57114; end: 101c57123; -[_TtC35SpotlightDraftsGatingImplementation25SpotlightDraftsGatingImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c57114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0bfe0));
  return;
}



/* Entry: 101c57124; end: 101c57143;  */

void FUN_101c57124(void)

{
  func_0x000107c61168(&PTR_PTR_1127fcf28);
  return;
}



/* Entry: 101c57144; end: 101c57147; -[_TtC38SpotlightDraftsPresenterImplementation28SpotlightDraftsPresenterImpl present] */

void FUN_101c57144(void)

{
  return;
}



/* Entry: 101c57148; end: 101c57183; -[_TtC38SpotlightDraftsPresenterImplementation28SpotlightDraftsPresenterImpl init] */

void FUN_101c57148(undefined8 param_1)

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



/* Entry: 101c57184; end: 101c571d7;  */

void FUN_101c57184(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c571d8; end: 101c57243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c571d8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101c575cc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e0c040) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101c57244; end: 101c572af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c57244(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0c040) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c572b0; end: 101c5730f; -[_TtC48SendToRankingPreloadScopedFactoryServiceProvider36SCSendToRankingPreloadScopedServices init] */

void FUN_101c572b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToRankingPreloadScopedFactoryServiceProvider.SCSendToRankingPreloadScopedServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c572dc);
  (*pcVar1)();
}



/* Entry: 101c57310; end: 101c5731f; -[_TtC48SendToRankingPreloadScopedFactoryServiceProvider36SCSendToRankingPreloadScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c57310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e0c040));
  return;
}



/* Entry: 101c57320; end: 101c5738b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c57320(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11045dad0;
  func_0x000107c613fc(&UNK_11045dad0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101c57664,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101c5738c; end: 101c57427;  */

void FUN_101c5738c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11045d9e0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11045d9e0;
  return;
}



/* Entry: 101c57428; end: 101c5745f;  */

void FUN_101c57428(long *param_1)

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



/* Entry: 101c57460; end: 101c57467;  */

undefined8 FUN_101c57460(void)

{
  return 0x1b;
}



/* Entry: 101c57468; end: 101c5759b;  */

void FUN_101c57468(undefined8 *param_1)

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
  puVar1 = &UNK_11045daf8;
  func_0x000107c613fc(&UNK_11045daf8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101c5763c;
  func_0x00010058fa64(FUN_101c5763c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101c5759c; end: 101c575cb;  */

undefined ** FUN_101c5759c(void)

{
  return &PTR_DAT_112fec080;
}



/* Entry: 101c575cc; end: 101c575eb;  */

void FUN_101c575cc(void)

{
  func_0x000107c61168(&PTR_PTR_1127fd098);
  return;
}



/* Entry: 101c575ec; end: 101c5763b;  */

undefined1  [16] FUN_101c575ec(void)

{
  return ZEXT816(0x11045da30);
}



/* Entry: 101c5763c; end: 101c57663;  */

void FUN_101c5763c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101c57664; end: 101c57667;  */

void FUN_101c57664(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101c57668; end: 101c57757;  */

/* WARNING: Possible PIC construction at 0x000101c57718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c57728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c57738: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c5772c) */
/* WARNING: Removing unreachable block (ram,0x000101c5771c) */
/* WARNING: Removing unreachable block (ram,0x000101c5773c) */

void FUN_101c57668(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11045db80;
  func_0x000107c613fc(&UNK_11045db80,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  uVar2 = 0x112e0c0b0;
  func_0x0001000285a8(0x112e0c0b0,&UNK_10d9e5bd8);
  func_0x000107c613fc();
  pcVar3 = FUN_101c57b0c;
  func_0x0001000841fc(FUN_101c57b0c,puVar1,uVar2);
  func_0x000100084214(&UNK_10d9e5ba0,0x32,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101c57758; end: 101c57777;  */

/* WARNING: Possible PIC construction at 0x000101c57718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c57728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c57738: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c5772c) */
/* WARNING: Removing unreachable block (ram,0x000101c5771c) */
/* WARNING: Removing unreachable block (ram,0x000101c5773c) */

void FUN_101c57758(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_11045db80;
  func_0x000107c613fc(&UNK_11045db80,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  uVar7 = 0x112e0c0b0;
  func_0x0001000285a8(0x112e0c0b0,&UNK_10d9e5bd8);
  func_0x000107c613fc();
  pcVar8 = FUN_101c57b0c;
  func_0x0001000841fc(FUN_101c57b0c,puVar6,uVar7);
  func_0x000100084214(&UNK_10d9e5ba0,0x32,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101c57778; end: 101c57abf;  */

void FUN_101c57778(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e0c0b8,&UNK_10d9e5be0);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_101c57428;
  func_0x0001000823a8(FUN_101c57428,0);
  func_0x000100082720("SCSendToRankingPreloadScopedServicesCleanupRelayServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e0c0c0,&UNK_10d9e5bf0);
  puVar3 = &UNK_11045dba8;
  func_0x000107c613fc(&UNK_11045dba8,0x48,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  uVar8 = 0x101c57b1c;
  func_0x0001000823a8(0x101c57b1c,puVar3);
  pcVar4 = "SendToRankingPreloadEntryPointWrapperServiceProvider";
  func_0x000100082720("SendToRankingPreloadEntryPointWrapperServiceProvider",0x34,2);
  FUN_101c58944();
  func_0x000100082720("SendToRankingPreloadScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e0c0c8,&UNK_10d9e5bf8);
  puVar3 = &UNK_11045dbd0;
  func_0x000107c613fc(&UNK_11045dbd0,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(code **)(puVar3 + 0x18) = pcVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(char **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x101c57b30;
  func_0x0001000823a8(0x101c57b30,puVar3);
  func_0x000100082720("SCSendToRankingPreloadScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112e0c048,&UNK_10d9e5940);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x101c57b3c;
  func_0x0001000823a8(0x101c57b3c,uVar5);
  func_0x000100082720("SCSendToRankingPreloadScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e0c038,&UNK_10d9e5930);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101c57b44;
  func_0x0001000823a8(0x101c57b44,uVar6);
  func_0x000100082720("SCSendToRankingPreloadScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11045dbf8;
  func_0x000107c613fc(&UNK_11045dbf8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  uVar7 = 0x101c57b4c;
  func_0x0001000823a8(0x101c57b4c,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCSendToRankingPreloadScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101c57ac0; end: 101c57b0b;  */

void FUN_101c57ac0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c57b0c; end: 101c57b53;  */

void FUN_101c57b0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112e0c0b8,&UNK_10d9e5be0);
  puVar3 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101c57428;
  func_0x0001000823a8(FUN_101c57428,0);
  func_0x000100082720("SCSendToRankingPreloadScopedServicesCleanupRelayServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e0c0c0,&UNK_10d9e5bf0);
  puVar5 = &UNK_11045dba8;
  func_0x000107c613fc(&UNK_11045dba8,0x48,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + 0x20) = uVar10;
  *(undefined8 *)(puVar5 + 0x28) = uVar8;
  *(undefined8 *)(puVar5 + 0x30) = uVar1;
  *(undefined8 *)(puVar5 + 0x38) = uVar9;
  *(undefined8 *)(puVar5 + 0x40) = uVar2;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar2);
  uVar6 = 0x101c57b1c;
  func_0x0001000823a8(0x101c57b1c,puVar5);
  pcVar7 = "SendToRankingPreloadEntryPointWrapperServiceProvider";
  func_0x000100082720("SendToRankingPreloadEntryPointWrapperServiceProvider",0x34,2);
  FUN_101c58944();
  func_0x000100082720("SendToRankingPreloadScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e0c0c8,&UNK_10d9e5bf8);
  puVar5 = &UNK_11045dbd0;
  func_0x000107c613fc(&UNK_11045dbd0,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar3;
  *(code **)(puVar5 + 0x18) = pcVar4;
  *(undefined8 *)(puVar5 + 0x20) = uVar6;
  *(char **)(puVar5 + 0x28) = pcVar7;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x101c57b30;
  func_0x0001000823a8(0x101c57b30,puVar5);
  func_0x000100082720("SCSendToRankingPreloadScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112e0c048,&UNK_10d9e5940);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x101c57b3c;
  func_0x0001000823a8(0x101c57b3c,uVar8);
  func_0x000100082720("SCSendToRankingPreloadScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e0c038,&UNK_10d9e5930);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x101c57b44;
  func_0x0001000823a8(0x101c57b44,uVar9);
  func_0x000100082720("SCSendToRankingPreloadScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_11045dbf8;
  func_0x000107c613fc(&UNK_11045dbf8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar10 = 0x101c57b4c;
  func_0x0001000823a8(0x101c57b4c,puVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCSendToRankingPreloadScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 101c57b54; end: 101c57f03;  */

void FUN_101c57b54(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_101c5802c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  func_0x000103781b00(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  func_0x000103780ff4();
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  func_0x000107c6157c();
  func_0x0001037811c4();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uVar8);
  *param_1 = param_2;
  return;
}



/* Entry: 101c57f04; end: 101c57f6f;  */

void FUN_101c57f04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101c57f70; end: 101c57f77;  */

undefined8 FUN_101c57f70(void)

{
  return 0x1b;
}



/* Entry: 101c57f78; end: 101c57ffb;  */

void FUN_101c57f78(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101c5806c,param_2,FUN_101c58070,param_2,0x101c58098,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101c57ffc; end: 101c5802b;  */

undefined ** FUN_101c57ffc(void)

{
  return &PTR_DAT_112fec080;
}



/* Entry: 101c5802c; end: 101c5804b;  */

void FUN_101c5802c(void)

{
  func_0x000107c61168(&PTR_PTR_112e0c138);
  return;
}



/* Entry: 101c5804c; end: 101c5806f;  */

undefined1  [16] FUN_101c5804c(void)

{
  return ZEXT816(0x11045dc50);
}



/* Entry: 101c58070; end: 101c580c3;  */

void FUN_101c58070(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c580c4; end: 101c580ff;  */

void FUN_101c580c4(undefined8 *param_1,undefined8 param_2)

{
  FUN_101c58100();
  func_0x0001000a7f38("SCSendToRankingPreloadScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = param_2;
  return;
}



/* Entry: 101c58100; end: 101c58393;  */

void FUN_101c58100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106d34b8;
  ppuVar4 = &PTR_DAT_112fec080;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11045dca0;
  func_0x000107c613fc(&UNK_11045dca0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e0c1c8;
  func_0x0001000285a8(0x112e0c1c8,&UNK_10d9e5d58);
  func_0x0001000a6ee8(&UNK_11045da70,
                      "SCSendToRankingPreloadScopedServicesScopeInitializationPluginKey",0x40,2,
                      FUN_101c58394,puVar2,uVar3,&UNK_11045da70,&PTR_DAT_112e0c050);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11045dc50,
                      "SendToRankingPreloadEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_101c58410,param_3,uVar3,&UNK_11045dc50,&PTR_DAT_112e0c0d0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11045dcc8;
  func_0x000107c613fc(&UNK_11045dcc8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11045de58,
                      "SendToRankingPreloadScopeGraphBridgeScopeInitializationPluginKey",0x40,2,
                      FUN_101c58418,puVar2,uVar3,&UNK_11045de58,&PTR_DAT_112e0c258);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e0c1d0;
  func_0x0001000285a8(0x112e0c1d0,&UNK_10d9e5d60);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 101c58394; end: 101c5839b;  */

void FUN_101c58394(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11045dcf0;
  func_0x000107c613fc(&UNK_11045dcf0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101c5848c;
  func_0x0001000823a8(FUN_101c5848c,puVar3);
  func_0x000100082720("SCSendToRankingPreloadScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar4;
  return;
}



/* Entry: 101c5839c; end: 101c5840f;  */

void FUN_101c5839c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  pcVar1 = FUN_101c58458;
  func_0x0001000823a8(FUN_101c58458,param_3);
  func_0x000100082720("SendToRankingPreloadEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 101c58410; end: 101c58417;  */

void FUN_101c58410(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  pcVar1 = FUN_101c58458;
  func_0x0001000823a8();
  func_0x000100082720("SendToRankingPreloadEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 101c58418; end: 101c58457;  */

void FUN_101c58418(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101c58a28(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SendToRankingPreloadScopeGraphBridgeScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 101c58458; end: 101c5845f;  */

void FUN_101c58458(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x101c5806c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101c58460; end: 101c5848b;  */

void FUN_101c58460(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c5848c; end: 101c58493;  */

void FUN_101c5848c(undefined8 *param_1)

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
  puVar1 = &UNK_11045daf8;
  func_0x000107c613fc(&UNK_11045daf8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101c5763c;
  func_0x00010058fa64(FUN_101c5763c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101c58494; end: 101c5851b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101c58494(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101c58854();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e0c1d8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e0c1e0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5851c);
  (*pcVar1)();
}



/* Entry: 101c5851c; end: 101c5857b; -[_TtC36SendToRankingPreloadScopeGraphBridge51SendToRankingPreloadScopeGraphBridgeSaberEntryPoint init] */

void FUN_101c5851c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToRankingPreloadScopeGraphBridge.SendToRankingPreloadScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c58548);
  (*pcVar1)();
}



/* Entry: 101c5857c; end: 101c585b3; -[_TtC36SendToRankingPreloadScopeGraphBridge51SendToRankingPreloadScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c58598: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c5859c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5857c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0c1d8));
  return;
}



/* Entry: 101c585b4; end: 101c585db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c585b4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e0c1e0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e0c1d8));
  return;
}



/* Entry: 101c585dc; end: 101c585fb;  */

void FUN_101c585dc(void)

{
  func_0x000107c61168(&PTR_PTR_1127fd158);
  return;
}



/* Entry: 101c585fc; end: 101c58683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101c585fc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0c210) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e0c218);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c58684);
  (*pcVar2)();
}



/* Entry: 101c58684; end: 101c5876b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101c58684(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e0c210);
  *(undefined **)(unaff_x20 + _DAT_112e0c210) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e0c218);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e0c218))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11045ddb8;
  func_0x000107c613fc(&UNK_11045ddb8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101c58770,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101c5876c; end: 101c58777;  */

void FUN_101c5876c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101c58778; end: 101c587d7; -[_TtC36SendToRankingPreloadScopeGraphBridge51SCSendToRankingPreloadScopedServicesSaberEntryPoint init] */

void FUN_101c58778(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToRankingPreloadScopeGraphBridge.SCSendToRankingPreloadScopedServicesSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c587a4);
  (*pcVar1)();
}



/* Entry: 101c587d8; end: 101c5880f; -[_TtC36SendToRankingPreloadScopeGraphBridge51SCSendToRankingPreloadScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c587d8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e0c218));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0c210));
  return;
}



/* Entry: 101c58810; end: 101c58813;  */

void FUN_101c58810(void)

{
  return;
}



/* Entry: 101c58814; end: 101c58833;  */

void FUN_101c58814(void)

{
  FUN_101c58684();
  return;
}



/* Entry: 101c58834; end: 101c58853;  */

void FUN_101c58834(void)

{
  func_0x000107c61168(&PTR_PTR_1127fd220);
  return;
}



/* Entry: 101c58854; end: 101c58923;  */

undefined8 FUN_101c58854(void)

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
  
  func_0x000107c61428(0x112e0c248,&uStack_40,0x20,0);
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
    FUN_101c58924();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101c58924; end: 101c58943;  */

void FUN_101c58924(void)

{
  func_0x000107c61168(&PTR_PTR_1127fd2e8);
  return;
}



/* Entry: 101c58944; end: 101c589af;  */

void FUN_101c58944(void)

{
  func_0x0001000285a8(0x112e0c250,&UNK_10d9e5e38);
  func_0x0001000823a8(0x101c58984,0);
  return;
}



/* Entry: 101c589b0; end: 101c589eb; -[_TtC36SendToRankingPreloadScopeGraphBridge44SendToRankingPreloadScopeGraphBridgeServices init] */

void FUN_101c589b0(undefined8 param_1)

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



/* Entry: 101c589ec; end: 101c58a1f;  */

void FUN_101c589ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c58a20; end: 101c58a27;  */

undefined8 FUN_101c58a20(void)

{
  return 0x1b;
}



/* Entry: 101c58a28; end: 101c58b9f;  */

void FUN_101c58a28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11045de00;
  func_0x000107c613fc(&UNK_11045de00,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101c58ba0,puVar1);
  return;
}


