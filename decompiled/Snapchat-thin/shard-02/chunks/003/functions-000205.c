/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b58944; end: 101b58a17;  */

void FUN_101b58944(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x60) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101b58994,0,0);
  return;
}



/* Entry: 101b58a18; end: 101b58aeb;  */

void FUN_101b58a18(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000107c5fd5c();
  lVar1 = *(long *)(unaff_x22 + 0x58);
  lVar3 = lVar1;
  if ((param_1 & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x139) = 1;
    lVar2 = *(long *)(unaff_x22 + 0x58);
    lVar3 = lVar2;
    if ((*(byte *)(lVar1 + 0x138) & 1) == 0) {
      FUN_101b59718(lVar2);
      lVar3 = *(long *)(unaff_x22 + 0x58);
      if ((param_3 & 0xff) == 0) {
        FUN_101b59c28();
        func_0x000107c61574(lVar3);
        FUN_101b5b3ac(lVar2,param_2,0);
        goto LAB_101b58ac8;
      }
      if (((uint)param_3 & 0xff) == 1) {
        FUN_101b59fc4();
        func_0x000107c61574(lVar3);
        FUN_101b5b3ac(lVar2,param_2,1);
        goto LAB_101b58ac8;
      }
    }
  }
  func_0x000107c61574(lVar3);
LAB_101b58ac8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b58aec,0,0);
  return;
}



/* Entry: 101b58aec; end: 101b58b1b;  */

void FUN_101b58aec(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000101b58b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b58b1c; end: 101b58b33;  */

void FUN_101b58b1c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b58b34,0,0);
  return;
}



/* Entry: 101b58b34; end: 101b58c07;  */

void FUN_101b58b34(void)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x22;
  long lVar4;
  
  lVar3 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x48) = lVar3;
  if (lVar3 == 0) {
    lVar3 = *(long *)(unaff_x22 + 0x40);
    func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x28,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61648();
    *(long *)(unaff_x22 + 0x60) = lVar3;
    if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101b58c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    pcVar2 = FUN_101b58cdc;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0xf8);
    plVar1 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_101b58c08;
    plVar1[8] = lVar3;
    plVar1[7] = lVar4;
    pcVar2 = FUN_101b59298;
    lVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,lVar3,0);
  return;
}



/* Entry: 101b58c08; end: 101b58cdb;  */

void FUN_101b58c08(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x101b58c64;
  }
  else {
    pcVar1 = FUN_101b58d98;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101b58cdc; end: 101b58d97;  */

void FUN_101b58cdc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x60);
  *(undefined1 *)(lVar2 + 0x13b) = 1;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = uVar1;
  if (*(char *)(lVar2 + 0x138) == '\x01') {
LAB_101b58d7c:
    func_0x000107c61574(uVar3);
  }
  else {
    FUN_101b59718(uVar1);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    if ((param_3 & 0xff) == 0) {
      FUN_101b59c28();
      func_0x000107c61574(uVar3);
      uVar3 = 0;
    }
    else {
      if (((uint)param_3 & 0xff) != 1) goto LAB_101b58d7c;
      FUN_101b59fc4();
      func_0x000107c61574(uVar3);
      uVar3 = 1;
    }
    FUN_101b5b3ac(uVar1,param_2,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000101b58d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b58d98; end: 101b58dd3;  */

void FUN_101b58d98(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101b58dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b58dd4; end: 101b58deb;  */

void FUN_101b58dd4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b58dec,0,0);
  return;
}



/* Entry: 101b58dec; end: 101b58ebf;  */

void FUN_101b58dec(void)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x22;
  long lVar4;
  
  lVar3 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x48) = lVar3;
  if (lVar3 == 0) {
    lVar3 = *(long *)(unaff_x22 + 0x40);
    func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x28,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61648();
    *(long *)(unaff_x22 + 0x60) = lVar3;
    if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101b58ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    pcVar2 = FUN_101b58f94;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0xf0);
    plVar1 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_101b58ec0;
    plVar1[8] = lVar3;
    plVar1[7] = lVar4;
    pcVar2 = FUN_101b59298;
    lVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,lVar3,0);
  return;
}



/* Entry: 101b58ec0; end: 101b58f93;  */

void FUN_101b58ec0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    uVar1 = 0x101b58f1c;
  }
  else {
    uVar1 = 0x101b5b8cc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101b58f94; end: 101b5904f;  */

void FUN_101b58f94(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x60);
  *(undefined1 *)(lVar2 + 0x13a) = 1;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = uVar1;
  if (*(char *)(lVar2 + 0x138) == '\x01') {
LAB_101b59034:
    func_0x000107c61574(uVar3);
  }
  else {
    FUN_101b59718(uVar1);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    if ((param_3 & 0xff) == 0) {
      FUN_101b59c28();
      func_0x000107c61574(uVar3);
      uVar3 = 0;
    }
    else {
      if (((uint)param_3 & 0xff) != 1) goto LAB_101b59034;
      FUN_101b59fc4();
      func_0x000107c61574(uVar3);
      uVar3 = 1;
    }
    FUN_101b5b3ac(uVar1,param_2,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000101b5904c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b59050; end: 101b591bb;  */

void FUN_101b59050(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    uVar5 = 0x112d61f80;
    func_0x0001000285a8(0x112d61f80,&UNK_10d9d8130);
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,auStack_60,PTR___sypN_11034f1a8 + 8,uVar5,6);
    if (((ulong)puVar2 & 1) != 0) {
      lVar8 = *(long *)(unaff_x20 + 400);
      func_0x000107c4b940(*(undefined8 *)(lVar8 + 0x10));
      puVar1 = PTR___sytN_11034f1b0;
      lVar7 = *(long *)(lVar8 + 0x18);
      if (lVar7 != 0) {
        func_0x000107c6157c(lVar7);
        func_0x000107c5fd50();
        func_0x000107c61574(lVar7);
      }
      puVar3 = &UNK_11044b530;
      func_0x000107c613fc(&UNK_11044b530,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      puVar4 = &UNK_11044b558;
      func_0x000107c613fc(&UNK_11044b558,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = uStack_68;
      func_0x000107c61434(uStack_68);
      uVar5 = 6;
      func_0x0001001ca524(6,0,0x58,2,0,0,&UNK_10d9d8140,puVar4,puVar1 + 8);
      func_0x000107c61574(puVar4);
      uVar6 = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar8 + 0x18) = uVar5;
      func_0x000107c61574(uVar6);
      func_0x000107c5d278(*(undefined8 *)(lVar8 + 0x10));
      func_0x000107c6142c(uStack_68);
    }
  }
  return;
}



/* Entry: 101b591bc; end: 101b591d3;  */

void FUN_101b591bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b591d4,0,0);
  return;
}



/* Entry: 101b591d4; end: 101b5927b;  */

void FUN_101b591d4(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(0x101b59244,lVar1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101b59240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b5927c; end: 101b59297;  */

void FUN_101b5927c(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b59298,0,0);
  return;
}



/* Entry: 101b59298; end: 101b5945b;  */

void FUN_101b59298(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  double dVar10;
  double dVar11;
  
  dVar10 = *(double *)(unaff_x22 + 0x38);
  dVar11 = dVar10 + *(double *)(*(long *)(unaff_x22 + 0x40) + 0xd8);
  func_0x00010028941c();
  dVar11 = dVar11 - dVar10;
  if (dVar11 < 0.0) {
    dVar11 = 0.0;
  }
  if (dVar11 == 0.0) {
                    /* WARNING: Could not recover jumptable at 0x000101b592fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar2 = 2;
  uVar8 = 0x10;
  func_0x000100029b9c(2,0x10,0,0);
  if ((int)uVar2 != 0) {
    func_0x000107c606fc(dVar11);
    *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    *(undefined1 *)(unaff_x22 + 0x20) = 1;
    lVar3 = 0;
    func_0x000107c603bc();
    *(long *)(unaff_x22 + 0x48) = lVar3;
    lVar9 = *(long *)(lVar3 + -8);
    *(long *)(unaff_x22 + 0x50) = lVar9;
    uVar4 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x58) = uVar4;
    func_0x000107c603b8(uVar4);
    plVar5 = (long *)0x20;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar5;
    plVar6 = plVar5;
    func_0x0001000da454();
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101b5945c;
    plVar7 = (long *)0x20;
    _swift_task_alloc();
    plVar5[2] = (long)plVar7;
    *plVar7 = (long)plVar5;
    plVar7[1] = (long)&UNK_104891308;
                    /* WARNING: Could not recover jumptable at 0x000104890648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)&UNK_10489064c)
              ((undefined8 *)(unaff_x22 + 0x28),(undefined8 *)(unaff_x22 + 0x10),uVar4,lVar3,plVar6)
    ;
    return;
  }
  dVar11 = dVar11 * 1000000000.0;
  if ((ulong)dVar11 >> 0x34 < 0x7ff) {
    if (dVar11 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b59458);
      (*pcVar1)();
    }
    if (dVar11 < 1.8446744073709552e+19) {
      plVar7 = (long *)(ulong)*(uint *)(
                                       PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                       + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x70) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_101b594e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
                ((long)dVar11);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b5945c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b59454);
  (*pcVar1)();
}



/* Entry: 101b5945c; end: 101b594df;  */

void FUN_101b5945c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(0x101b5951c,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x58);
  (**(code **)(*(long *)(lVar2 + 0x50) + 8))(uVar1,*(undefined8 *)(lVar2 + 0x48));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101b594dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 101b594e0; end: 101b59563;  */

void FUN_101b594e0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000101b59518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b59564; end: 101b59717;  */

/* WARNING: Possible PIC construction at 0x000101b595b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b595b4) */
/* WARNING: Removing unreachable block (ram,0x000101b595bc) */
/* WARNING: Removing unreachable block (ram,0x000101b595f8) */
/* WARNING: Removing unreachable block (ram,0x000101b595d4) */
/* WARNING: Removing unreachable block (ram,0x000101b595dc) */
/* WARNING: Removing unreachable block (ram,0x000101b59600) */
/* WARNING: Removing unreachable block (ram,0x000101b5b3ac) */
/* WARNING: Removing unreachable block (ram,0x000101b5b3c0) */
/* WARNING: Removing unreachable block (ram,0x000101b5b3c8) */
/* WARNING: Removing unreachable block (ram,0x000101b5b3d4) */
/* WARNING: Removing unreachable block (ram,0x000101b5b3d0) */
/* WARNING: Removing unreachable block (ram,0x000101b5b3b8) */
/* WARNING: Removing unreachable block (ram,0x000101b5b3c4) */
/* WARNING: Removing unreachable block (ram,0x000101b5b3bc) */

void FUN_101b59564(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = param_2;
  func_0x000107c5fd5c();
  if ((uVar1 & 1) == 0) {
    if ((*(byte *)(unaff_x20 + 0x12a) & 1) == 0) {
      *(undefined1 *)(unaff_x20 + 0x12a) = 1;
      func_0x00010028941c();
      *(undefined8 *)(unaff_x20 + 0x150) = param_1;
      *(undefined1 *)(unaff_x20 + 0x158) = 0;
    }
    uVar2 = *(undefined8 *)(unaff_x20 + 0x130);
    *(ulong *)(unaff_x20 + 0x130) = param_2;
    func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return;
  }
  return;
}



/* Entry: 101b59718; end: 101b59c27;  */

void FUN_101b59718(double param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  ulong uVar9;
  undefined *puVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  double dVar16;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  if (((*(char *)(unaff_x20 + 0x129) == '\x01') && ((*(byte *)(unaff_x20 + 0x139) & 1) != 0)) &&
     (*(char *)(unaff_x20 + 0x128) != '\x01')) {
    uVar12 = *(ulong *)(unaff_x20 + 0x120);
    uVar5 = 0x112e04798;
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    func_0x000107c61538();
    func_0x000100c8a830();
    uVar15 = uVar12;
    func_0x000100877840(uVar12,uVar5);
    func_0x000107c6142c(uVar5);
    if ((uVar15 & 1) == 0) {
      if (((iRam0000000112e047c8 != (int)uVar12) && (iRam0000000112e047d0 != (int)uVar12)) ||
         (*(char *)(unaff_x20 + 0x13b) == '\x01')) {
        func_0x0001000e48c0(uVar12);
      }
    }
    else if ((((*(byte *)(unaff_x20 + 0x12a) & 1) != 0) || (*(char *)(unaff_x20 + 0x13b) == '\x01'))
            && ((*(char *)(unaff_x20 + 0x13a) == '\x01' &&
                (uVar15 = *(ulong *)(unaff_x20 + 0x130), uVar15 != 0)))) {
      uVar12 = uVar15 & 0xffffffffffffff8;
      if (uVar15 >> 0x3e == 0) {
        uVar14 = *(ulong *)(uVar12 + 0x10);
      }
      else {
        uVar14 = uVar15;
        if (-1 < (long)uVar15) {
          uVar14 = uVar12;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434(uVar15);
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar14 != 0) {
        uVar13 = 0;
        uVar9 = uVar15 & 0xc000000000000001;
        uStack_a8 = uVar15;
        do {
          if (uVar9 == 0) {
            if (*(ulong *)(uVar12 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101b59bc8);
              (*pcVar3)();
            }
            uVar6 = *(ulong *)(uVar15 + uVar13 * 8 + 0x20);
            func_0x000107c61174();
            dVar16 = param_1;
          }
          else {
            uVar6 = uVar13;
            func_0x00010117ea28(uVar13,uVar15);
            dVar16 = param_1;
          }
          uVar1 = uVar13 + 1;
          if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101b59bc4);
            (*pcVar3)();
          }
          uVar7 = uVar6;
          func_0x000107c3d15c();
          func_0x000107c61180();
          if (uVar7 == 0) {
            func_0x000107c61170(uVar6);
            param_1 = dVar16;
          }
          else {
            uVar8 = uVar7;
            func_0x000107c4aa00();
            func_0x000107c61180();
            func_0x000107c5ee94(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
            func_0x000107c61170(uVar8);
            func_0x000107c5ee84();
            (**(code **)(lVar11 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4)
            ;
            param_1 = -*(double *)(unaff_x20 + 0x108);
            if ((dVar16 < param_1) || (uVar8 = uVar7, func_0x000107c49bb8(), (uVar8 & 1) != 0)) {
              func_0x000107c61170(uVar7);
              func_0x000107c61170(uVar6);
            }
            else {
              uVar15 = uVar6;
              func_0x000107c42924();
              func_0x000107c61180();
              uVar8 = uVar15;
              func_0x000107cf9f24();
              func_0x000107c61170(uVar15);
              if ((int)uVar8 == 0) {
                uVar15 = uVar6;
                func_0x000107c42924();
                func_0x000107c61180();
                uVar8 = uVar15;
                func_0x000107cfa64c();
                func_0x000107c61170(uVar15);
                if ((int)uVar8 != 0) goto LAB_101b599f0;
                uVar15 = uVar6;
                func_0x000100bf39e4();
                if ((int)uVar15 != 0) {
LAB_101b59aa4:
                  func_0x000107c61170(uVar7);
                  func_0x000107c61170(uVar6);
                  uVar15 = uStack_a8;
                  goto LAB_101b598dc;
                }
                uVar15 = uVar7;
                func_0x000107c4cda8();
                func_0x000107c61180();
                if (uVar15 == 0) goto LAB_101b59aa4;
                uVar8 = uVar15;
                FUN_101b5a9dc();
                func_0x000107c61170(uVar7);
                func_0x000107c61170(uVar15);
                if ((uVar8 & 1) != 0) {
                  puVar10 = puVar2;
                  func_0x000107c61558();
                  if (((ulong)puVar10 & 1) == 0) {
                    func_0x00010117e7a0(0,*(long *)(puVar2 + 0x10) + 1,1);
                  }
                  uVar15 = uStack_a8;
                  uVar7 = *(ulong *)(puVar2 + 0x10);
                  if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar7) {
                    func_0x00010117e7a0(1 < *(ulong *)(puVar2 + 0x18),uVar7 + 1,1);
                  }
                  *(ulong *)(puVar2 + 0x10) = uVar7 + 1;
                  *(ulong *)(puVar2 + uVar7 * 8 + 0x20) = uVar6;
                  goto LAB_101b598dc;
                }
              }
              else {
LAB_101b599f0:
                func_0x000107c61170(uVar7);
              }
              func_0x000107c61170(uVar6);
              uVar15 = uStack_a8;
            }
          }
LAB_101b598dc:
          uVar13 = uVar13 + 1;
        } while (uVar1 != uVar14);
      }
      func_0x000107c6142c(uVar15);
      if (((long)puVar2 < 0) || (((ulong)puVar2 >> 0x3e & 1) != 0)) {
        puVar10 = puVar2;
        func_0x000107c60480();
      }
      else {
        puVar10 = *(undefined **)(puVar2 + 0x10);
      }
      if (puVar10 == (undefined *)0x0) {
        func_0x000107c61574(puVar2);
      }
    }
  }
  return;
}



/* Entry: 101b59c28; end: 101b59fc3;  */

/* WARNING: Removing unreachable block (ram,0x000101b59ecc) */
/* WARNING: Removing unreachable block (ram,0x000101b59ed8) */

void FUN_101b59c28(ulong param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  undefined1 uStack_2e9;
  undefined8 auStack_2e8 [14];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 uStack_240;
  undefined1 uStack_23f;
  undefined1 uStack_23e;
  undefined5 uStack_23d;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  ulong uStack_200;
  undefined8 *puStack_1f8;
  ulong uStack_1f0;
  undefined1 uStack_1e8;
  undefined1 uStack_1e7;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long alStack_1a8 [3];
  byte bStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_158;
  undefined1 auStack_150 [112];
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
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  *(undefined1 *)(unaff_x20 + 0x138) = 1;
  lVar9 = *(long *)(unaff_x20 + 0x180);
  if (lVar9 != 0) {
    func_0x000107c6157c(lVar9);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar9);
  }
  lVar9 = *(long *)(unaff_x20 + 0x178);
  if (lVar9 != 0) {
    func_0x000107c6157c(lVar9);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar9);
  }
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c42c04(*(undefined8 *)(unaff_x20 + 0xe0));
  if (*(char *)(unaff_x20 + 0xe8) == '\x01') {
    uVar10 = (ulong)*(byte *)(unaff_x20 + 0x118);
    FUN_101b4fcd8(alStack_1a8,param_1);
    FUN_101b4f4ec(&uStack_e0,alStack_1a8);
    if ((alStack_1a8[0] < 2) && (lStack_180 != 0)) {
      func_0x000107c61434();
      bVar1 = (bStack_190 & 1) == 0;
      lStack_1b8 = lStack_180;
      uStack_1c0 = uStack_188;
      if (bVar1) {
        uStack_1c0 = 0;
        lStack_1b8 = 0;
      }
      uVar8 = 0;
      if (bVar1) {
        uVar8 = uStack_188;
      }
      lVar9 = 0;
      if (bVar1) {
        lVar9 = lStack_180;
      }
      uVar7 = 1;
    }
    else {
      uStack_1c0 = 0;
      lStack_1b8 = 0;
      uVar8 = 0;
      lVar9 = 0;
      uVar7 = 0;
    }
    uStack_260 = (undefined1)uStack_c8;
    uStack_278 = uStack_e0;
    uStack_270 = uStack_d8;
    uStack_268 = uStack_d0;
    uStack_258 = uStack_c0;
    uStack_250 = uStack_b8;
    uStack_248 = uStack_b0;
    uStack_240 = (undefined1)uStack_a8;
    uStack_23f = uStack_a8._1_1_;
    uStack_238 = uStack_178;
    uStack_230 = uStack_170;
    uStack_c8 = CONCAT71(uStack_25f,(undefined1)uStack_c8);
    uStack_a8 = CONCAT53(uStack_23d,CONCAT12(uVar7,(undefined2)uStack_a8));
    uStack_98 = uStack_170;
    uStack_a0 = uStack_178;
    uStack_23e = uVar7;
    uStack_228 = uVar8;
    lStack_220 = lVar9;
    uStack_218 = uStack_1c0;
    lStack_210 = lStack_1b8;
    uStack_90 = uVar8;
    lStack_88 = lVar9;
    uStack_80 = uStack_1c0;
    lStack_78 = lStack_1b8;
    func_0x000107c61434(uStack_170);
    puVar2 = &uStack_e0;
    FUN_101b4ff78();
    puVar3 = &uStack_e0;
    uVar5 = uVar10;
    FUN_101b50424();
    uVar6 = uVar5;
    FUN_101b5b310(alStack_1a8);
    func_0x000107c61434(lStack_1b8);
    func_0x000107c61434(uStack_170);
    func_0x000107c61434(lVar9);
    func_0x000101b5b344(&uStack_278);
    uStack_1e7 = uStack_158;
    uStack_1e0 = uStack_178;
    uStack_1d8 = uStack_170;
    ppuVar4 = &puStack_208;
    puStack_208 = puVar2;
    uStack_200 = uVar10;
    puStack_1f8 = puVar3;
    uStack_1f0 = uVar5;
    uStack_1e8 = uVar7;
    uStack_1d0 = uVar8;
    lStack_1c8 = lVar9;
    FUN_101b5a160(ppuVar4);
    if (param_1 >> 0x3e == 0) {
      uVar10 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar10 = param_1;
      }
      func_0x000107c60480(uVar10);
    }
    func_0x000101b5b594(unaff_x20 + 0xb0,*(undefined8 *)(unaff_x20 + 200));
    FUN_101b5af80(auStack_150,uVar7,ppuVar4,uVar6,uVar10);
    FUN_101b5b214(auStack_150,auStack_2e8);
    FUN_101b52240(auStack_150);
    FUN_101b52408(auStack_150);
    func_0x000101b5b250(auStack_150);
    func_0x000107c6142c(uVar6);
    func_0x000101b5b378(&puStack_208);
    func_0x000100083b20(auStack_2e8);
    uStack_2e9 = 0;
    puVar2 = (undefined8 *)&uStack_2e9;
    uStack_e0 = auStack_2e8[0];
  }
  else {
    func_0x000100083b20(&uStack_e0);
    uStack_278 = CONCAT71(uStack_278._1_7_,1);
    puVar2 = &uStack_278;
  }
  func_0x000100b60084(puVar2);
  func_0x000107c61574(uStack_e0);
  return;
}



/* Entry: 101b59fc4; end: 101b5a0a7;  */

void FUN_101b59fc4(undefined8 param_1,ulong param_2)

{
  int iVar1;
  long unaff_x20;
  long lVar2;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  *(undefined1 *)(unaff_x20 + 0x138) = 1;
  lVar2 = *(long *)(unaff_x20 + 0x180);
  if (lVar2 != 0) {
    func_0x000107c6157c(lVar2);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + 0x178);
  if (lVar2 != 0) {
    func_0x000107c6157c(lVar2);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar2);
  }
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + 0x170));
  iVar1 = (int)param_2 + 4;
  if (5 < param_2) {
    iVar1 = 2;
  }
  FUN_101b5a3f0(iVar1);
  func_0x000100083b20(&uStack_38);
  uStack_39 = 1;
  func_0x000100b60084(&uStack_39);
  func_0x000107c61574(uStack_38);
  return;
}



/* Entry: 101b5a0a8; end: 101b5a0af;  */

undefined8 FUN_101b5a0a8(void)

{
  return 1;
}



/* Entry: 101b5a0b0; end: 101b5a14f;  */

void FUN_101b5a0b0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101b5a150; end: 101b5a15f;  */

void FUN_101b5a150(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101b5a160; end: 101b5a3ef;  */

undefined1  [16] FUN_101b5a160(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  func_0x000107c4d7dc();
  func_0x000107c61180();
  func_0x000107c61170(lStack_68);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar10 = lVar1;
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    FUN_101b5b2d0();
    func_0x000107c613f8(&UNK_11044b758,lVar10,0,0);
    func_0x000107c61654();
    goto LAB_101b5a3c0;
  }
  lVar10 = -0x14ffffffffa8b0bc;
  uVar11 = 0;
  if (*(char *)(param_1 + 4) == '\0') {
    uVar11 = 0xd000000000000014;
  }
  uVar8 = 0x4e49575f54414843;
  lVar9 = 0;
  if (*(char *)(param_1 + 4) == '\0') {
    lVar10 = -0x1c00000000000000;
    uVar8 = 0x44454546;
    lVar9 = -0x7ffffffef10004c0;
  }
  uVar3 = *param_1;
  func_0x000107c5fadc(uVar3,param_1[1]);
  uVar4 = param_1[2];
  func_0x000107c5fadc(uVar4,param_1[3]);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x100);
  if (param_1[6] == 0) {
    uVar5 = 0;
    if (param_1[8] != 0) goto LAB_101b5a288;
LAB_101b5a2e4:
    uVar6 = 0;
    if (param_1[10] != 0) goto LAB_101b5a29c;
LAB_101b5a2f0:
    uVar7 = 0;
  }
  else {
    uVar5 = param_1[5];
    func_0x000107c5fadc(uVar5);
    if (param_1[8] == 0) goto LAB_101b5a2e4;
LAB_101b5a288:
    uVar6 = param_1[7];
    func_0x000107c5fadc(uVar6);
    if (param_1[10] == 0) goto LAB_101b5a2f0;
LAB_101b5a29c:
    uVar7 = param_1[9];
    func_0x000107c5fadc(uVar7);
  }
  lVar1 = lVar10;
  func_0x000107c5fadc(uVar8,lVar10);
  func_0x000107c6142c(lVar10);
  if (lVar9 == 0) {
    uVar11 = 0;
  }
  else {
    lVar1 = lVar9;
    func_0x000107c5fadc(uVar11,lVar9);
    func_0x000107c6142c(lVar9);
  }
  lVar10 = lVar2;
  func_0x000107c5c2d0(uVar12,lVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  lVar9 = lVar10;
  func_0x000107c5faec(lVar10);
  func_0x000107c61170(lVar10);
  func_0x000107c615e8(lVar2);
  lStack_68 = lVar9;
LAB_101b5a3c0:
  auVar13._8_8_ = lVar1;
  auVar13._0_8_ = lStack_68;
  return auVar13;
}



/* Entry: 101b5a3f0; end: 101b5a7e3;  */

void FUN_101b5a3f0(double param_1,uint param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long extraout_x8;
  long unaff_x20;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  double dVar15;
  undefined1 auStack_190 [12];
  uint uStack_184;
  undefined *puStack_180;
  undefined1 auStack_158 [112];
  undefined *apuStack_e8 [15];
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  uVar12 = *(ulong *)(unaff_x20 + 0x130);
  if (uVar12 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    uVar10 = uVar12 & 0xffffffffffffff8;
    if (uVar12 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      uVar13 = uVar12;
      if (-1 < (long)uVar12) {
        uVar13 = uVar10;
      }
      func_0x000107c60480();
    }
    uStack_184 = param_2;
    func_0x000107c61434(uVar12);
    if (uVar13 == 0) {
      puStack_180 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar14 = 0;
      puStack_180 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if ((uVar12 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar10 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101b5a7bc);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(uVar12 + uVar14 * 8 + 0x20);
          func_0x000107c61174();
          dVar15 = param_1;
        }
        else {
          uVar4 = uVar14;
          func_0x00010117ea28(uVar14,uVar12);
          dVar15 = param_1;
        }
        uVar1 = uVar14 + 1;
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101b5a7b8);
          (*pcVar2)();
        }
        uVar5 = uVar4;
        func_0x000107c3d15c();
        func_0x000107c61180();
        if (uVar5 == 0) {
          func_0x000107c61170(uVar4);
          param_1 = dVar15;
        }
        else {
          uVar6 = uVar5;
          func_0x000107c4aa00();
          func_0x000107c61180();
          func_0x000107c5ee94(auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
          func_0x000107c61170(uVar6);
          func_0x000107c5ee84();
          (**(code **)(lVar9 + 8))(auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
          param_1 = -*(double *)(unaff_x20 + 0x108);
          if ((dVar15 < param_1) || (uVar6 = uVar5, func_0x000107c49bb8(), (uVar6 & 1) != 0)) {
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar4);
          }
          else {
            uVar6 = uVar4;
            func_0x000107c42924();
            func_0x000107c61180();
            uVar7 = uVar6;
            func_0x000107cf9f24();
            func_0x000107c61170(uVar6);
            if ((int)uVar7 == 0) {
              uVar6 = uVar4;
              func_0x000107c42924();
              func_0x000107c61180();
              uVar7 = uVar6;
              func_0x000107cfa64c();
              func_0x000107c61170(uVar6);
              if ((int)uVar7 != 0) goto LAB_101b5a5e0;
              uVar6 = uVar4;
              func_0x000100bf39e4();
              if ((int)uVar6 != 0) {
LAB_101b5a6a4:
                func_0x000107c61170(uVar5);
                func_0x000107c61170(uVar4);
                goto LAB_101b5a4c0;
              }
              uVar6 = uVar5;
              func_0x000107c4cda8();
              func_0x000107c61180();
              if (uVar6 == 0) goto LAB_101b5a6a4;
              uVar7 = uVar6;
              FUN_101b5a9dc();
              func_0x000107c61170(uVar5);
              func_0x000107c61170(uVar6);
              puVar11 = puStack_180;
              if ((uVar7 & 1) != 0) {
                puVar8 = puStack_180;
                func_0x000107c61558();
                apuStack_e8[0] = puVar11;
                if (((ulong)puVar8 & 1) == 0) {
                  func_0x00010117e7a0(0,*(long *)(puVar11 + 0x10) + 1,1);
                }
                uVar5 = *(ulong *)(apuStack_e8[0] + 0x10);
                if (*(ulong *)(apuStack_e8[0] + 0x18) >> 1 <= uVar5) {
                  func_0x00010117e7a0(1 < *(ulong *)(apuStack_e8[0] + 0x18),uVar5 + 1,1);
                }
                *(ulong *)(apuStack_e8[0] + 0x10) = uVar5 + 1;
                *(ulong *)(apuStack_e8[0] + uVar5 * 8 + 0x20) = uVar4;
                puStack_180 = apuStack_e8[0];
                goto LAB_101b5a4c0;
              }
            }
            else {
LAB_101b5a5e0:
              func_0x000107c61170(uVar5);
            }
            func_0x000107c61170(uVar4);
          }
        }
LAB_101b5a4c0:
        uVar14 = uVar14 + 1;
      } while (uVar1 != uVar13);
    }
    func_0x000107c6142c(uVar12);
    puVar8 = puStack_180;
    if (((long)puStack_180 < 0) || (((ulong)puStack_180 >> 0x3e & 1) != 0)) {
      puVar11 = puStack_180;
      func_0x000107c60480();
    }
    else {
      puVar11 = *(undefined **)(puStack_180 + 0x10);
    }
    param_2 = uStack_184;
    func_0x000107c61574(puVar8);
  }
  func_0x000101b5b594(unaff_x20 + 0xb0,*(undefined8 *)(unaff_x20 + 200));
  FUN_101b5af80(apuStack_e8,param_2 | 0xffffff80,0,0,puVar11);
  FUN_101b5b214(apuStack_e8,auStack_158);
  FUN_101b52240(apuStack_e8);
  FUN_101b52408(apuStack_e8);
  func_0x000101b5b250(apuStack_e8);
  return;
}



/* Entry: 101b5a7e4; end: 101b5a8af;  */

void FUN_101b5a7e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  FUN_101b5b750(unaff_x20 + 0xb0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61470();
  return;
}



/* Entry: 101b5a8b0; end: 101b5a8bb;  */

void FUN_101b5a8b0(void)

{
  return;
}



/* Entry: 101b5a8bc; end: 101b5a9db;  */

void FUN_101b5a8bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b5a9dc; end: 101b5af7f;  */

undefined1 FUN_101b5a9dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  ulong uVar20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_79 [9];
  
  auStack_79[0] = 0;
  puVar4 = &UNK_11044b2b0;
  func_0x000107c613fc(&UNK_11044b2b0,0x18,7);
  *(undefined1 **)(puVar4 + 0x10) = auStack_79;
  puVar5 = &UNK_11044b2d8;
  func_0x000107c613fc(&UNK_11044b2d8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_101b5b8a0;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = (code *)0x101b5b948;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x101b5b8ac;
  puStack_98 = &UNK_11044b2f0;
  ppuVar6 = &puStack_b0;
  puStack_88 = puVar5;
  func_0x000107c60bc4();
  puVar10 = puStack_88;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar10);
  pcStack_90 = FUN_101b578a0;
  puStack_88 = (undefined *)0x0;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x101b5b8b0;
  puStack_98 = &UNK_11044b318;
  ppuVar7 = &puStack_b0;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_88);
  pcStack_90 = (code *)0x101b578a4;
  puStack_88 = (undefined *)0x0;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x101b5b8b4;
  puStack_98 = &UNK_11044b340;
  ppuVar8 = &puStack_b0;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61574(puStack_88);
  pcStack_90 = (code *)0x101b578a8;
  puStack_88 = (undefined *)0x0;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x101b5b8b8;
  puStack_98 = &UNK_11044b368;
  ppuVar9 = &puStack_b0;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_88);
  puVar10 = &UNK_11044b3a0;
  func_0x000107c613fc(&UNK_11044b3a0,0x18,7);
  *(undefined1 **)(puVar10 + 0x10) = auStack_79;
  puVar11 = &UNK_11044b3c8;
  func_0x000107c613fc(&UNK_11044b3c8,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = 0x101b5b2a0;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_90 = FUN_101b5b2b0;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x101b5b8bc;
  puStack_98 = &UNK_11044b3e0;
  ppuVar12 = &puStack_b0;
  puStack_88 = puVar11;
  func_0x000107c60bc4();
  puVar14 = puStack_88;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar14);
  pcStack_90 = (code *)0x101b578ac;
  puStack_88 = (undefined *)0x0;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x101b5b8c0;
  puStack_98 = &UNK_11044b408;
  ppuVar13 = &puStack_b0;
  func_0x000107c60bc4(ppuVar13);
  func_0x000107c61574(puStack_88);
  puVar14 = &UNK_11044b440;
  func_0x000107c613fc(&UNK_11044b440,0x18,7);
  *(undefined1 **)(puVar14 + 0x10) = auStack_79;
  puVar15 = &UNK_11044b468;
  func_0x000107c613fc(&UNK_11044b468,0x20,7);
  *(undefined8 *)(puVar15 + 0x10) = 0x101b5b8a4;
  *(undefined **)(puVar15 + 0x18) = puVar14;
  pcStack_90 = (code *)0x101b5b94c;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x101b5b8c4;
  puStack_98 = &UNK_11044b480;
  ppuVar16 = &puStack_b0;
  puStack_88 = puVar15;
  func_0x000107c60bc4();
  puVar17 = puStack_88;
  func_0x000107c6157c(puVar15);
  func_0x000107c61574(puVar17);
  puVar17 = &UNK_11044b4b8;
  func_0x000107c613fc(&UNK_11044b4b8,0x18,7);
  *(undefined1 **)(puVar17 + 0x10) = auStack_79;
  puVar18 = &UNK_11044b4e0;
  func_0x000107c613fc(&UNK_11044b4e0,0x20,7);
  *(undefined8 *)(puVar18 + 0x10) = 0x101b5b8a8;
  *(undefined **)(puVar18 + 0x18) = puVar17;
  pcStack_90 = (code *)0x101b5b950;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x101b5b8c8;
  puStack_98 = &UNK_11044b4f8;
  ppuVar19 = &puStack_b0;
  puStack_88 = puVar18;
  func_0x000107c60bc4();
  puVar1 = puStack_88;
  func_0x000107c6157c(puVar18);
  func_0x000107c61574(puVar1);
  func_0x000107c4c710(param_1);
  func_0x000107c60bd0(ppuVar19);
  func_0x000107c60bd0(ppuVar16);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = auStack_79[0];
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x91,0x1bd,0xd,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b5af64);
    (*pcVar3)();
  }
  uVar20 = 0;
  func_0x000107c61544(0,"",0x91,0x1be,0x13,1);
  if ((uVar20 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b5af68);
    (*pcVar3)();
  }
  uVar20 = 0;
  func_0x000107c61544(0,"",0x91,0x1bf,0x19,1);
  if ((uVar20 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b5af6c);
    (*pcVar3)();
  }
  uVar20 = 0;
  func_0x000107c61544(0,"",0x91,0x1c0,0x18,1);
  func_0x000107c61574(puVar10);
  if ((uVar20 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b5af70);
    (*pcVar3)();
  }
  puVar4 = puVar11;
  func_0x000107c61544(puVar11,"",0x91,0x1c1,0x13,1);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b5af74);
    (*pcVar3)();
  }
  uVar20 = 0;
  func_0x000107c61544(0,"",0x91,0x1c2,0x1d,1);
  func_0x000107c61574(puVar14);
  if ((uVar20 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b5af78);
    (*pcVar3)();
  }
  puVar4 = puVar15;
  func_0x000107c61544(puVar15,"",0x91,0x1c3,0x17,1);
  func_0x000107c61574(puVar17);
  func_0x000107c61574(puVar15);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b5af7c);
    (*pcVar3)();
  }
  puVar4 = puVar18;
  func_0x000107c61544(puVar18,"",0x91,0x1c4,0x14,1);
  func_0x000107c61574(puVar18);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101b5af80);
  (*pcVar3)();
}



/* Entry: 101b5af80; end: 101b5b213;  */

void FUN_101b5af80(undefined1 *param_1,double param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  double dVar11;
  undefined1 uStack_68;
  
  if (*(char *)(unaff_x20 + 0x148) == '\x01') {
    lVar10 = 0;
    uVar9 = 1;
  }
  else {
    param_2 = (*(double *)(unaff_x20 + 0x140) - *(double *)(unaff_x20 + 0xd8)) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5b1f4);
      (*pcVar4)();
    }
    if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5b1f8);
      (*pcVar4)();
    }
    if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5b200);
      (*pcVar4)();
    }
    uVar9 = 0;
    lVar10 = (long)param_2;
  }
  if (*(char *)(unaff_x20 + 0x158) == '\x01') {
    lVar6 = 0;
    uVar7 = 1;
  }
  else {
    param_2 = (*(double *)(unaff_x20 + 0x150) - *(double *)(unaff_x20 + 0xd8)) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5b1fc);
      (*pcVar4)();
    }
    if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5b204);
      (*pcVar4)();
    }
    if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5b20c);
      (*pcVar4)();
    }
    uVar7 = 0;
    lVar6 = (long)param_2;
  }
  if (*(char *)(unaff_x20 + 0x168) == '\x01') {
    lVar8 = 0;
    uStack_68 = 1;
  }
  else {
    param_2 = (*(double *)(unaff_x20 + 0x160) - *(double *)(unaff_x20 + 0xd8)) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5b208);
      (*pcVar4)();
    }
    if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5b210);
      (*pcVar4)();
    }
    if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5b214);
      (*pcVar4)();
    }
    uStack_68 = 0;
    lVar8 = (long)param_2;
  }
  func_0x00010028941c();
  dVar11 = (param_2 - *(double *)(unaff_x20 + 0xd8)) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5b1e8);
    (*pcVar4)();
  }
  if (-9.223372036854778e+18 < dVar11) {
    if (dVar11 < 9.223372036854776e+18) {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x120);
      uVar1 = *(undefined1 *)(unaff_x20 + 0x128);
      uVar2 = *(undefined1 *)(unaff_x20 + 0xe9);
      uVar3 = *(undefined1 *)(unaff_x20 + 0x118);
      *param_1 = param_3;
      *(undefined8 *)(param_1 + 8) = param_4;
      *(undefined8 *)(param_1 + 0x10) = param_5;
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      param_1[0x20] = uVar1;
      *(undefined8 *)(param_1 + 0x28) = param_6;
      *(long *)(param_1 + 0x30) = lVar10;
      param_1[0x38] = uVar9;
      *(long *)(param_1 + 0x40) = lVar6;
      param_1[0x48] = uVar7;
      *(long *)(param_1 + 0x50) = lVar8;
      param_1[0x58] = uStack_68;
      *(long *)(param_1 + 0x60) = (long)dVar11;
      param_1[0x68] = uVar2;
      param_1[0x69] = uVar3;
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5b1f0);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5b1ec);
  (*pcVar4)();
}



/* Entry: 101b5b214; end: 101b5b283;  */

undefined8 FUN_101b5b214(undefined8 param_1,undefined8 param_2)

{
  FUN_101b5321c(param_2,param_1);
  return param_2;
}



/* Entry: 101b5b284; end: 101b5b2af;  */

void FUN_101b5b284(long param_1,long param_2)

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



/* Entry: 101b5b2b0; end: 101b5b2cf;  */

void FUN_101b5b2b0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101b5b2d0; end: 101b5b30f;  */

void FUN_101b5b2d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e04760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d8244;
  func_0x000107c61520(&UNK_10d9d8244,&UNK_11044b758);
  puRam0000000112e04760 = puVar1;
  return;
}



/* Entry: 101b5b310; end: 101b5b3ab;  */

undefined8 FUN_101b5b310(undefined8 param_1)

{
  FUN_101b510cc();
  return param_1;
}



/* Entry: 101b5b3ac; end: 101b5b3db;  */

void FUN_101b5b3ac(ulong param_1,ulong param_2,char param_3)

{
  if (param_3 == '\x01') {
    param_1 = param_2;
    if (param_2 < 6) {
      return;
    }
  }
  else if (param_3 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 101b5b3dc; end: 101b5b43f;  */

void FUN_101b5b3dc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b5b964;
  plVar3[5] = lVar1;
  plVar3[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b591d4,0,0);
  return;
}



/* Entry: 101b5b440; end: 101b5b44f;  */

void FUN_101b5b440(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = 0;
    FUN_101b5b5b8(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    auStack_58[0] = param_1;
    uStack_40 = uVar2;
    func_0x000107c61174(param_1);
    FUN_101b59050(auStack_58);
    func_0x000107c61574(lVar1);
    func_0x00010006e7f4(auStack_58);
  }
  return;
}



/* Entry: 101b5b450; end: 101b5b48f;  */

void FUN_101b5b450(void)

{
  FUN_101b58648();
  return;
}



/* Entry: 101b5b490; end: 101b5b4e3;  */

void FUN_101b5b490(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101b5b970;
  plVar1[8] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b58894,0,0);
  return;
}



/* Entry: 101b5b4e4; end: 101b5b537;  */

void FUN_101b5b4e4(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101b5b968;
  plVar1[8] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b58b34,0,0);
  return;
}



/* Entry: 101b5b538; end: 101b5b58b;  */

void FUN_101b5b538(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101b5b96c;
  plVar1[8] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b58dec,0,0);
  return;
}



/* Entry: 101b5b58c; end: 101b5b5b7;  */

void FUN_101b5b58c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x000107c614f0();
    auStack_58[0] = param_1;
    uStack_40 = uVar2;
    func_0x000107c615f0(param_1);
    FUN_101b59050(auStack_58);
    func_0x000107c61574(lVar1);
    func_0x00010006e7f4(auStack_58);
  }
  return;
}



/* Entry: 101b5b5b8; end: 101b5b5f7;  */

void FUN_101b5b5b8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101b5b5f8; end: 101b5b64b;  */

void FUN_101b5b5f8(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101b5b974;
  plVar1[5] = param_1;
  plVar1[6] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b5872c,0,0);
  return;
}



/* Entry: 101b5b64c; end: 101b5b69f;  */

void FUN_101b5b64c(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101b5b978;
  plVar1[5] = param_1;
  plVar1[6] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b584f8,0,0);
  return;
}



/* Entry: 101b5b6a0; end: 101b5b6af;  */

void FUN_101b5b6a0(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



/* Entry: 101b5b6b0; end: 101b5b713;  */

void FUN_101b5b6b0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101b5b714;
  plVar3[5] = lVar1;
  plVar3[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b58438,0,0);
  return;
}



/* Entry: 101b5b714; end: 101b5b74f;  */

void FUN_101b5b714(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b5b74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b5b750; end: 101b5b85f;  */

void FUN_101b5b750(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101b5b764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101b5b860; end: 101b5b89f;  */

void FUN_101b5b860(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e04830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d821c;
  func_0x000107c61520(&UNK_10d9d821c,&UNK_11044b758);
  puRam0000000112e04830 = puVar1;
  return;
}



/* Entry: 101b5b8a0; end: 101b5b97f;  */

void FUN_101b5b8a0(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 101b5b980; end: 101b5c8a3;  */

undefined1  [16] FUN_101b5b980(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe3;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efffe40);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efffb80);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b5ba4c);
  (*pcVar1)();
}



/* Entry: 101b5c8a4; end: 101b5c92b;  */

void FUN_101b5c8a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_101b5d304();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  FUN_101b5cee0(uStack_48,uVar1,uStack_50);
  *param_1 = uStack_48;
  return;
}



/* Entry: 101b5c92c; end: 101b5c973;  */

void FUN_101b5c92c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_101b5cee0(param_1,param_2,param_3);
  return;
}



/* Entry: 101b5c974; end: 101b5ca53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101b5c974(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lStack_48;
  
  lVar1 = _DAT_112e04858;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e04858);
  lVar4 = lVar2;
  if (lVar2 == 0) {
    func_0x000100083b20(&lStack_48);
    uVar3 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010efffee0);
    lVar4 = lStack_48;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar4;
    func_0x000107c615f0(lVar4);
    func_0x000107c615e8(uVar3);
    lVar2 = 0;
  }
  func_0x000107c615f0(lVar2);
  return lVar4;
}



/* Entry: 101b5ca54; end: 101b5ce3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_101b5ca54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  puVar7 = *(undefined **)(unaff_x20 + _DAT_112e04840);
  if (puVar7 == (undefined *)0x0) {
    uVar8 = 0;
    func_0x0001000e2834(0);
    pcVar1 = "";
    func_0x000107c60124("",0,2,uVar8);
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c49470();
    func_0x000107c61170(pcVar1);
    puVar7 = &UNK_11044b890;
    puVar3 = puVar7;
    func_0x000107c613fc(&UNK_11044b890,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_11044b8b8;
    func_0x000107c613fc(&UNK_11044b8b8,0x40,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined **)(puVar4 + 0x18) = puVar2;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    *(undefined8 *)(puVar4 + 0x28) = param_2;
    *(undefined8 *)(puVar4 + 0x30) = param_3;
    *(undefined8 *)(puVar4 + 0x38) = param_4;
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e04870);
    func_0x000107c6157c(puVar3);
    func_0x000107c61174(puVar2);
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c5dbd4(uVar8);
    func_0x000107c61180();
    func_0x000107c613fc(&UNK_11044b890,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar5 = &UNK_11044ba20;
    func_0x000107c613fc(&UNK_11044ba20,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar7;
    *(code **)(puVar5 + 0x18) = FUN_101b5cff4;
    *(undefined **)(puVar5 + 0x20) = puVar4;
    pcStack_70 = FUN_101b5d788;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1011eaae0;
    puStack_78 = &UNK_11044ba38;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar7);
    FUN_101b5c974();
    func_0x000107c44284(uVar8);
    func_0x000107c615e8(puVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c615e8(uVar8);
  }
  else {
    uVar8 = ((undefined8 *)(unaff_x20 + _DAT_112e04840))[1];
    func_0x000107c615f0(puVar7);
    func_0x000107c615f0(uVar8);
    puVar2 = puVar7;
    func_0x000101b5ccc4(puVar7,uVar8,param_1,param_2,param_3,param_4);
    func_0x000107c615e8(uVar8);
    func_0x000107c615e8(puVar7);
  }
  return puVar2;
}



/* Entry: 101b5ce40; end: 101b5cecf; -[_TtC29ActivityFeedBadgeServicesImpl29ActivityFeedBadgeServicesImpl fetchUnreadNotificationCountWithProfileId:pageType:] */

void FUN_101b5ce40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_101b5ca54(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101b5ced0; end: 101b5cedf; -[_TtC29ActivityFeedBadgeServicesImpl29ActivityFeedBadgeServicesImpl unreadNotificationCountObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b5ced0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e04848));
  return;
}



/* Entry: 101b5cee0; end: 101b5cff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b5cee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e04840);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112e04848;
  func_0x0001000e2834(0);
  pcVar3 = "";
  func_0x000107c60124("",0,2);
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(pcVar3);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112e04850;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112e04858) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e04860) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e04868) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e04870) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b5cff4; end: 101b5d233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b5cff4(char *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  char *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar8 + 0x10,auStack_78,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 != 0) {
    if (param_1 != (char *)0x0) {
      pcVar9 = param_1;
      func_0x000107c615f0();
      FUN_101b5c974();
      puVar1 = (undefined8 *)(lVar8 + _DAT_112e04840);
      uVar3 = *puVar1;
      uVar7 = puVar1[1];
      *puVar1 = param_1;
      puVar1[1] = pcVar9;
      func_0x000107c615f0(param_1);
      func_0x000107c615f0(pcVar9);
      FUN_101b5d4b0(uVar3,uVar7);
      pcVar14 = param_1;
      func_0x000101b5ccc4(param_1,pcVar9,uVar13,uVar5,uVar2,uVar6);
      if (pcVar14 == (char *)0x0) {
        func_0x0001000e2834();
        pcVar14 = "";
        func_0x000107c60124("",0,2);
        func_0x000107c4d664(uVar4);
        func_0x000107c615e8(param_1);
        func_0x000107c615e8(pcVar9);
      }
      else {
        puVar10 = &UNK_11044ba70;
        func_0x000107c613fc(&UNK_11044ba70,0x18,7);
        *(undefined8 *)(puVar10 + 0x10) = uVar4;
        pcStack_88 = FUN_101b5da38;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_10083fefc;
        puStack_90 = &UNK_11044ba88;
        ppuVar11 = &puStack_a8;
        puStack_80 = puVar10;
        func_0x000107c60bc4(ppuVar11);
        puVar10 = puStack_80;
        func_0x000107c61174(uVar4);
        func_0x000107c61574(puVar10);
        pcVar12 = pcVar14;
        func_0x000107c5c320(pcVar14);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar11);
        uVar13 = *(undefined8 *)(lVar8 + _DAT_112e04850);
        func_0x000107c61174(uVar13);
        func_0x000107c3e924(pcVar12);
        func_0x000107c615e8(param_1);
        func_0x000107c615e8(pcVar9);
        func_0x000107c61170(uVar13);
        func_0x000107c61170(pcVar12);
      }
      func_0x000107c61170(lVar8);
      goto LAB_101b5d20c;
    }
    func_0x000107c61170(lVar8);
  }
  func_0x0001000e2834(0);
  pcVar14 = "";
  func_0x000107c60124("",0,2);
  func_0x000107c4d664(uVar4);
LAB_101b5d20c:
  func_0x000107c61170(pcVar14);
  return;
}



/* Entry: 101b5d234; end: 101b5d267;  */

void FUN_101b5d234(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b5d268; end: 101b5d277;  */

undefined1  [16] FUN_101b5d268(void)

{
  return ZEXT816(0x11044b8e0);
}



/* Entry: 101b5d278; end: 101b5d303; -[_TtC29ActivityFeedBadgeServicesImpl29ActivityFeedBadgeServicesImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b5d278(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e04870));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e04868));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e04860));
  FUN_101b5d4b0(*(undefined8 *)(param_1 + _DAT_112e04840),
                ((undefined8 *)(param_1 + _DAT_112e04840))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e04848));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e04850));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e04858));
  return;
}



/* Entry: 101b5d304; end: 101b5d323;  */

void FUN_101b5d304(void)

{
  func_0x000107c61168(&PTR_PTR_1127fa2b8);
  return;
}



/* Entry: 101b5d324; end: 101b5d327;  */

undefined8 * FUN_101b5d324(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c615f0();
  func_0x000107c615f0(uVar1);
  return param_1;
}



/* Entry: 101b5d328; end: 101b5d383;  */

/* WARNING: Possible PIC construction at 0x000101b5d33c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b5d340) */

void FUN_101b5d328(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*param_1);
  return;
}



/* Entry: 101b5d384; end: 101b5d3df;  */

undefined8 * FUN_101b5d384(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 101b5d3e0; end: 101b5d41b;  */

undefined8 * FUN_101b5d3e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615e8(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 101b5d41c; end: 101b5d4af;  */

int FUN_101b5d41c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101b5d4b0; end: 101b5d4db;  */

/* WARNING: Possible PIC construction at 0x000101b5d4c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b5d4c8) */

void FUN_101b5d4b0(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 101b5d4dc; end: 101b5d693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b5d4dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c5fadc(uVar4,uVar1);
    func_0x000107c5fadc(uVar5,uVar2);
    func_0x000107c4330c(uVar6);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    uVar4 = uVar6;
    func_0x000107c5cb2c(uVar6);
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    puVar7 = &UNK_11044b890;
    func_0x000107c613fc(&UNK_11044b890,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,lVar3);
    puVar8 = &UNK_11044b9d0;
    func_0x000107c613fc(&UNK_11044b9d0,0x20,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(undefined8 *)(puVar8 + 0x18) = uVar10;
    pcStack_78 = FUN_101b5d6b0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_10083fefc;
    puStack_80 = &UNK_11044b9e8;
    ppuVar9 = &puStack_98;
    puStack_70 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    puVar7 = puStack_70;
    func_0x000107c61174(uVar10);
    func_0x000107c61574(puVar7);
    uVar5 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(uVar4);
    func_0x000107c3e924(uVar5);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 101b5d694; end: 101b5d6af;  */

void FUN_101b5d694(long param_1,long param_2)

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



/* Entry: 101b5d6b0; end: 101b5d787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b5d6b0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = auStack_58;
  func_0x000107c61428(lVar1 + 0x10,puVar4,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5faec(param_1);
    uVar2 = param_1;
    func_0x000107c5fadc();
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(uVar2);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112e04848);
    func_0x000107c61174(uVar3);
    func_0x000107c5fadc(param_1,puVar4);
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar3);
    func_0x000107c6142c(puVar4);
  }
  return;
}



/* Entry: 101b5d788; end: 101b5da37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b5d788(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_78,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    (*pcVar1)();
  }
  else if (param_1 == 0) {
    (*pcVar1)(0);
    func_0x000107c61170(lVar2);
  }
  else {
    puVar3 = PTR_PTR_1126a8b00;
    func_0x000107c61168();
    uStack_b8 = 0;
    func_0x000107c615f0(param_1);
    func_0x000107c4091c();
    func_0x000107c61180();
    uVar5 = uStack_b8;
    if (puVar3 == (undefined *)0x0) {
      uVar7 = uStack_b8;
      func_0x000107c61174();
      func_0x000107c5ed30(uVar5);
      func_0x000107c61170(uVar7);
      func_0x000107c61654();
      puVar3 = PTR_PTR_1126b3e90;
      func_0x000107c610f8(PTR_PTR_1126b3e90);
      func_0x000107c453e4();
      func_0x000107c578ac();
      lVar8 = *(long *)(*(long *)(lVar2 + _DAT_112e04860) + _DAT_1130807f0);
      if (lVar8 != 0) {
        uStack_b8 = 0;
        uStack_b0 = 0xe000000000000000;
        func_0x000107c615f0(lVar8);
        func_0x000107c602fc(0x3a);
        uStack_90 = uStack_b8;
        uStack_88 = uStack_b0;
        func_0x000107c5fb78(0xd000000000000038,0x800000010effff00);
        func_0x000107c614cc(uVar5,auStack_98,&uStack_b8);
        uVar7 = uStack_a8;
        func_0x000107c60640(uStack_b0,uStack_a8);
        func_0x000107c5fb78();
        func_0x000107c6142c(uVar7);
        uVar7 = uStack_88;
        uVar6 = uStack_90;
        func_0x000107c5fadc(uStack_90,uStack_88);
        func_0x000107c6142c(uVar7);
        uVar7 = 0;
        func_0x0001044db3fc(0);
        func_0x0001044dac34();
        func_0x000107c5027c(lVar8);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar6);
        func_0x000107c615e8(lVar8);
      }
      (*pcVar1)(0);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c614ac(uVar5);
    }
    else {
      func_0x000107c61174();
      func_0x000107c60234(&uStack_b8,puVar3);
      func_0x000107c615e8(puVar3);
      uVar5 = 0x112e048a0;
      func_0x0001000285a8(0x112e048a0,&UNK_10d9d8308);
      puVar4 = &uStack_90;
      func_0x000107c6147c(puVar4,&uStack_b8,PTR___sypN_11034f1a8 + 8,uVar5,6);
      if ((int)puVar4 == 0) {
        uStack_90 = 0;
      }
      (*pcVar1)(uStack_90);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(uStack_90);
    }
  }
  return;
}



/* Entry: 101b5da38; end: 101b5da5f;  */

void FUN_101b5da38(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_next__112614028,param_1);
  return;
}



/* Entry: 101b5da60; end: 101b5e0d7;  */

void FUN_101b5da60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_7;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x10) = param_8;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  return;
}



/* Entry: 101b5e0d8; end: 101b5e153; -[_TtC32NotificationCenterButtonProvider39NotificationCenterButtonFactoryProvider buildWithHeaderItem:canFetchNotificationUpdate:delegate:] */

void FUN_101b5e0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  func_0x000101b5dae0(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b5e154; end: 101b5e223;  */

void FUN_101b5e154(void)

{
  func_0x000107c61168(&PTR_PTR_1127fa3a8);
  return;
}



/* Entry: 101b5e224; end: 101b5e3db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b5e224(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(ulong *)(param_1 + _DAT_112e04950);
    func_0x000107c4e020();
    func_0x000107c61180();
    uVar3 = 0;
    func_0x000101b6108c(0,0x112d58220,&PTR_PTR_1126c2d78);
    uVar4 = uVar2;
    func_0x000107c5fc54(uVar2,uVar3);
    func_0x000107c61170(uVar2);
    if (uVar4 >> 0x3e == 0) {
      uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar2 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar2 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar2 == 0) {
      func_0x000107c61170(param_1);
      func_0x000107c6142c(uVar4);
    }
    else {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b5e3dc);
          (*pcVar1)();
        }
        lVar5 = *(long *)(uVar4 + 0x20);
        func_0x000107c61174();
      }
      else {
        lVar5 = 0;
        FUN_101b605f4(0,uVar4,&PTR_PTR_1126c2d78,0x112d58220);
      }
      func_0x000107c6142c(uVar4);
      lVar6 = lVar5;
      func_0x000107c3e614();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar6 != 0) {
        func_0x000107c556a8(lVar6);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c45a48();
        func_0x000107c61170(lVar6);
        lVar5 = *(long *)(param_1 + _DAT_112e048d0);
        *(undefined **)(param_1 + _DAT_112e048d0) = puVar7;
        func_0x000107c61170(param_1);
        param_1 = lVar5;
      }
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 101b5e3dc; end: 101b5e5eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b5e3dc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar4 = *(ulong *)(param_1 + _DAT_112e04950);
    func_0x000107c4e020();
    func_0x000107c61180();
    uVar5 = 0;
    func_0x000101b6108c(0,0x112d58220,&PTR_PTR_1126c2d78);
    uVar6 = uVar4;
    func_0x000107c5fc54(uVar4,uVar5);
    func_0x000107c61170(uVar4);
    if (uVar6 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar4 = uVar6;
      }
      func_0x000107c60480();
    }
    if (uVar4 == 0) {
      func_0x000107c61170(param_1);
      func_0x000107c6142c(uVar6);
    }
    else {
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b5e5ec);
          (*pcVar3)();
        }
        lVar7 = *(long *)(uVar6 + 0x20);
        func_0x000107c61174();
      }
      else {
        lVar7 = 0;
        FUN_101b605f4(0,uVar6,&PTR_PTR_1126c2d78,0x112d58220);
      }
      func_0x000107c6142c(uVar6);
      lVar8 = lVar7;
      func_0x000107c3e614();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      if (lVar8 != 0) {
        puVar1 = (ulong *)(param_1 + _DAT_112e048f8);
        uVar4 = *puVar1;
        uVar2 = puVar1[1];
        uVar6 = uVar4 & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar6 = uVar2 >> 0x38 & 0xf;
        }
        if (uVar6 == 0) {
          func_0x000107c556a8(lVar8);
        }
        else {
          func_0x000107c61434(uVar2);
          func_0x000107c5fadc(uVar4,uVar2);
          func_0x000107c6142c(uVar2);
          func_0x000107c59c6c(lVar8);
          func_0x000107c61170(uVar4);
          uVar6 = *puVar1;
          uVar4 = puVar1[1];
          func_0x000107c61434(uVar4);
          func_0x000107c5fb5c(uVar6,uVar4);
          func_0x000107c6142c(uVar4);
          func_0x000107c59a2c(lVar8);
        }
        func_0x000107c61170(param_1);
        param_1 = lVar8;
      }
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 101b5e5ec; end: 101b5e69f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101b5e5ec(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112e04900;
  lVar3 = *(long *)(unaff_x20 + _DAT_112e04900);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112e04910);
    func_0x000107c4f3e4();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      func_0x0001048d9980(0xd000000000000034,0x800000010f000050);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b5e6a0);
      (*pcVar2)();
    }
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar4;
    func_0x000107c615f0(lVar4);
    func_0x000107c615e8(uVar5);
    lVar3 = 0;
  }
  func_0x000107c615f0(lVar3);
  return lVar4;
}



/* Entry: 101b5e6a0; end: 101b5eb6f;  */

/* WARNING: Possible PIC construction at 0x000101b5e8b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b5e918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b5e978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b5ea50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b5e97c) */
/* WARNING: Removing unreachable block (ram,0x000101b5ea58) */
/* WARNING: Removing unreachable block (ram,0x000101b5ea6c) */
/* WARNING: Removing unreachable block (ram,0x000101b5ea78) */
/* WARNING: Removing unreachable block (ram,0x000101b5ea80) */
/* WARNING: Removing unreachable block (ram,0x000101b5e988) */
/* WARNING: Removing unreachable block (ram,0x000101b5e91c) */
/* WARNING: Removing unreachable block (ram,0x000101b5e8bc) */
/* WARNING: Removing unreachable block (ram,0x000101b5ea54) */
/* WARNING: Removing unreachable block (ram,0x000101b5ea90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b5e6a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  func_0x000107c45110(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  func_0x00010083f5a0();
  puVar2 = PTR_PTR_1126c2fb0;
  func_0x000107c610f8(PTR_PTR_1126c2fb0);
  func_0x000107c45eb4();
  func_0x000107c5a2b4();
  func_0x000107c59c78(puVar2);
  func_0x000107c556a8(puVar2);
  puVar3 = PTR_PTR_1126c2d78;
  func_0x000107c610f8();
  func_0x000107c46d14();
  func_0x000107c52b8c();
  lVar4 = -0x2fffffffffffffd4;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f000090);
  func_0x000107c520f4(puVar3);
  func_0x000107c61170();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e04950);
  func_0x0001008201f0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 3;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined **)(lVar4 + 0x20) = puVar3;
  uVar5 = 0;
  func_0x000101b6108c(0,0x112d58220,&PTR_PTR_1126c2d78);
  func_0x000107c61174(puVar3);
  lVar6 = lVar4;
  func_0x000107c5fc48(lVar4,uVar5);
  func_0x000107c61574(lVar4);
  func_0x000107c5707c(uVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e04938) + _DAT_113092298);
  func_0x000107c615f0(uVar5);
  func_0x000107c5fadc(0xd000000000000022,0x800000010effffc0);
  func_0x000107c3ebd4(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
  return;
}



/* Entry: 101b5eb70; end: 101b5eba3;  */

void FUN_101b5eb70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b5eba4; end: 101b5ed3b; -[_TtC32NotificationCenterButtonProvider32NotificationCenterButtonProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b5ebc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b5ec80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b5ebc4) */
/* WARNING: Removing unreachable block (ram,0x000101b5ec84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b5eba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e04908));
  return;
}



/* Entry: 101b5ed3c; end: 101b5ed63; -[_TtC32NotificationCenterButtonProvider32NotificationCenterButtonProvider didTap] */

void FUN_101b5ed3c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101b5ece0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b5ed64; end: 101b5ef63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b5ed64(void)

{
  undefined8 uVar1;
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
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e04908);
  func_0x000107c419f0(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_11044bb90;
  func_0x000107c613fc(&UNK_11044bb90,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_40 = 0x101b6095c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100c1de60;
  puStack_48 = &UNK_11044bc50;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar4 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101b5ef64; end: 101b5f27b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b5ef64(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  ppuVar9 = &puStack_70;
  func_0x000101f1b270();
  lVar1 = param_1;
  func_0x000107c5d33c();
  func_0x000107c61180();
  func_0x000107c615e8(param_1);
  if (lVar1 != 0) {
    puVar4 = &UNK_11044bb90;
    func_0x000107c613fc(&UNK_11044bb90,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    pcStack_50 = FUN_101b60c74;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_10083fefc;
    puStack_58 = &UNK_11044be08;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar3 = lVar1;
    func_0x000107c5c320(lVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c3e924(lVar3);
    func_0x000107c61170(lVar3);
  }
  if (*(char *)(unaff_x20 + _DAT_112e048d8) == '\x01') {
    if (*(char *)(unaff_x20 + _DAT_112e04958) == '\x01') {
      puVar4 = *(undefined **)(unaff_x20 + _DAT_112e04930);
      func_0x000107c42364();
      func_0x000107c61180();
      puVar8 = puVar4;
      func_0x000101f1b270();
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e04910);
      func_0x000107c4f3e4(uVar5);
      func_0x000107c61180();
      uVar6 = 0;
      FUN_101b61ea8(0);
      func_0x000107c610f8();
      FUN_101b611c0(puVar4,puVar8,uVar5,uVar6);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e048e8);
      *(undefined **)(unaff_x20 + _DAT_112e048e8) = puVar4;
      func_0x000107c61174();
      func_0x000107c61170(uVar5);
      puVar8 = puVar4 + _DAT_112e04a68;
      func_0x000107c61428(puVar8,&puStack_70,1,0);
      *(undefined ***)(puVar8 + 8) = &PTR_DAT_11044bbd0;
      func_0x000107c61604(puVar8);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      func_0x000107c41570();
      func_0x000107c61180();
      if (lRam0000000113487fe0 != -1) {
        func_0x000107c61568(0x113487fe0,0x101b5e1f0);
      }
      puVar7 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
      func_0x000107c61168(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
      func_0x000107c4c188();
      func_0x000107c61180();
      puVar8 = &UNK_11044bb90;
      func_0x000107c613fc(&UNK_11044bb90,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      pcStack_50 = FUN_101b60e20;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_100ef35e4;
      puStack_58 = &UNK_11044be80;
      puStack_48 = puVar8;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      func_0x000107c3d7c4(puVar4);
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(puVar7);
    }
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 101b5f27c; end: 101b5f3c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b5f27c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112e04928);
  func_0x000107c41090();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c4442c(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c5d6fc(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    puVar3 = &UNK_11044bb90;
    func_0x000107c613fc(&UNK_11044bb90,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_40 = FUN_101b60a40;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_10083fefc;
    puStack_48 = &UNK_11044bd90;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    lVar1 = lVar2;
    func_0x000107c5c320(lVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c3e924(lVar1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101b5f3c8; end: 101b5f4bb;  */

void FUN_101b5f3c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x0001000ab060(0);
  func_0x000100079360(0);
  uVar1 = 0;
  func_0x0001048d6b34(0);
  func_0x0001048d69d4();
  uVar2 = uVar1;
  func_0x0001048ba9a8();
  func_0x000107c61170(uVar1);
  uVar3 = 0;
  func_0x0001000aad1c(0);
  func_0x0001007dd748();
  puVar4 = &UNK_11044bb90;
  func_0x000107c613fc(&UNK_11044bb90,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  func_0x000107c6157c(puVar4);
  uVar1 = uVar2;
  func_0x0001009107f0(uVar2,uVar3,0,0,0x101b609d0,puVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61578(puVar4,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101b5f4bc; end: 101b5ffb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b5f4bc(double param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long alStack_f0 [5];
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = 0;
  func_0x000107c5f7fc();
  alStack_f0[4] = *(long *)(lVar3 + -8);
  lStack_c8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_f0[4] + 0x40));
  lVar11 = (long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  alStack_f0[3] = lVar11;
  func_0x000107c5f824();
  alStack_f0[1] = *(long *)(lVar3 + -8);
  alStack_f0[2] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_f0[1] + 0x40));
  lVar11 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  alStack_f0[0] = lVar11;
  func_0x000107c5f804();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar11 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar14 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x0001000d0cdc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  plVar13 = (long *)(lVar14 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    return;
  }
  func_0x000107c61174(param_2);
  func_0x0001000d0fb8(plVar13);
  plVar6 = plVar13;
  func_0x000107c614c4(plVar13,lVar5);
  if ((int)plVar6 != 0) {
    func_0x000107c61170(param_3);
    func_0x0001013d38bc(plVar13);
    return;
  }
  lVar15 = *plVar13;
  lVar5 = 0x112d7af10;
  func_0x0001000285a8(0x112d7af10,&UNK_10dbcce80);
  iVar2 = *(int *)(lVar5 + 0x50);
  if (lVar15 < 0x4c) {
    if (lVar15 == 3) {
      uVar1 = *(undefined1 *)(param_3 + _DAT_112e048f0);
      *(undefined1 *)(param_3 + _DAT_112e048f0) = 0;
      uVar12 = *(undefined8 *)(param_3 + _DAT_112e048c0);
      puVar8 = &UNK_11044bb90;
      func_0x000107c613fc(&UNK_11044bb90,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,param_3);
      puVar9 = &UNK_11044bf30;
      func_0x000107c613fc(&UNK_11044bf30,0x19,7);
      *(undefined **)(puVar9 + 0x10) = puVar8;
      puVar9[0x18] = uVar1;
      uStack_98 = 0x101b6116c;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_11044bf48;
      ppuVar10 = &puStack_b8;
      puStack_90 = puVar9;
      func_0x000107c60bc4(ppuVar10);
      func_0x000107c61574(puStack_90);
      func_0x000107c4e524(uVar12);
      func_0x000107c60bd0(ppuVar10);
    }
    else if (lVar15 == 0x1f) {
      lVar5 = plVar13[1];
      func_0x000107c5eea0(lVar14);
      func_0x000107c5ee8c();
      (**(code **)(lVar17 + 8))(lVar14,lVar4);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c466c0(param_1 * 1000.0);
      uVar12 = *(undefined8 *)(param_3 + _DAT_112e048c8);
      *(undefined **)(param_3 + _DAT_112e048c8) = puVar8;
      func_0x000107c61170(uVar12);
      if (((((*(byte *)(param_3 + _DAT_112e048d8) & 1) == 0) && ((int)lVar5 != 0x8d)) &&
          (*(char *)(param_3 + _DAT_112e04958) == '\x01')) &&
         ((*(byte *)(param_3 + _DAT_112e048f0) & 1) == 0)) {
        func_0x000101b6108c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
        (**(code **)(lVar16 + 0x68))
                  (lVar11,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8
                   ,lVar3);
        lVar14 = lVar11;
        func_0x000107c5fff0(lVar11);
        (**(code **)(lVar16 + 8))(lVar11,lVar3);
        puVar8 = &UNK_11044bf80;
        func_0x000107c613fc(&UNK_11044bf80,0x18,7);
        *(long *)(puVar8 + 0x10) = param_3;
        uStack_98 = 0x101b610cc;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_1000b0c7c;
        puStack_a0 = &UNK_11044bf98;
        ppuVar10 = &puStack_b8;
        puStack_90 = puVar8;
        func_0x000107c60bc4(ppuVar10);
        func_0x000107c61174(param_3);
        lVar3 = alStack_f0[0];
        lVar11 = param_3;
        func_0x000107c5f808(alStack_f0[0]);
        puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001001c7eec();
        uVar12 = 0x112d4af90;
        func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
        uVar7 = uVar12;
        func_0x0001001c7f30();
        lVar5 = lStack_c8;
        lVar4 = alStack_f0[3];
        func_0x000107c60264(alStack_f0[3],&puStack_c0,uVar12,uVar7,lStack_c8,lVar11);
        func_0x000107c5ffe8(0,lVar3,lVar4,ppuVar10);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61170(param_3);
        func_0x000107c61170(lVar14);
        (**(code **)(alStack_f0[4] + 8))(lVar4,lVar5);
        (**(code **)(alStack_f0[1] + 8))(lVar3,alStack_f0[2]);
        func_0x000107c61574(puStack_90);
        goto LAB_101b5f9e8;
      }
    }
  }
  else if ((lVar15 == 0x4c) || (lVar15 == 0x67)) {
    func_0x000107c5eea0(lVar14);
    func_0x000107c5ee8c();
    (**(code **)(lVar17 + 8))(lVar14,lVar4);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c466c0(param_1 * 1000.0);
    lVar3 = *(long *)(param_3 + _DAT_112e048c8);
    *(undefined **)(param_3 + _DAT_112e048c8) = puVar8;
    func_0x000107c61170(param_3);
    param_3 = lVar3;
  }
  func_0x000107c61170(param_3);
LAB_101b5f9e8:
  func_0x000101b6104c((long)plVar13 + (long)iVar2,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 101b5ffb4; end: 101b6017f;  */

/* WARNING: Possible PIC construction at 0x000101b6003c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b60080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b6009c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b60114: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b600a0) */
/* WARNING: Removing unreachable block (ram,0x000101b600a4) */
/* WARNING: Removing unreachable block (ram,0x000101b600c0) */
/* WARNING: Removing unreachable block (ram,0x000101b6017c) */
/* WARNING: Removing unreachable block (ram,0x000101b600e8) */
/* WARNING: Removing unreachable block (ram,0x000101b60084) */
/* WARNING: Removing unreachable block (ram,0x000101b60040) */
/* WARNING: Removing unreachable block (ram,0x000101b6004c) */
/* WARNING: Removing unreachable block (ram,0x000101b60118) */
/* WARNING: Removing unreachable block (ram,0x000101b60140) */

void FUN_101b5ffb4(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar3 == 0) {
    return;
  }
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b60148);
      (*pcVar1)();
    }
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar3 = 0;
    FUN_101b605f4(0,param_1,&PTR_PTR_1126d4dd8,0x112d4c900);
  }
  uVar2 = uVar3;
  func_0x000107c49ec8();
  if ((uVar2 & 1) != 0) {
    func_0x000107c4f348(uVar3);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101b60180; end: 101b60237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b60180(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e048c0);
  puVar1 = &UNK_11044bb90;
  func_0x000107c613fc(&UNK_11044bb90,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcStack_40 = FUN_101b60238;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11044bba8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101b60238; end: 101b60597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b60238(void)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_d0,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  uVar4 = *(ulong *)(lVar3 + _DAT_112e04950);
  func_0x000107c4e020();
  func_0x000107c61180();
  uVar5 = 0;
  func_0x000101b6108c(0,0x112d58220,&PTR_PTR_1126c2d78);
  uVar6 = uVar4;
  func_0x000107c5fc54(uVar4,uVar5);
  func_0x000107c61170(uVar4);
  if (uVar6 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar4 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    func_0x000107c6142c(uVar6);
  }
  else {
    if ((uVar6 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b60580);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(uVar6 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar4 = 0;
      FUN_101b605f4(0,uVar6,&PTR_PTR_1126c2d78,0x112d58220);
    }
    func_0x000107c6142c(uVar6);
    uVar6 = uVar4;
    func_0x000107c3e614();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    if (uVar6 != 0) {
      uVar4 = uVar6;
      func_0x000107c49eac();
      if ((uVar4 & 1) != 0) {
        uVar1 = *(undefined1 *)(lVar3 + _DAT_112e048f0);
        *(undefined1 *)(lVar3 + _DAT_112e048f0) = 1;
        uVar5 = *(undefined8 *)(lVar3 + _DAT_112e048c0);
        puVar7 = &UNK_11044bb90;
        func_0x000107c613fc(&UNK_11044bb90,0x18,7);
        func_0x000107c61614(puVar7 + 0x10,lVar3);
        puVar8 = &UNK_11044bc10;
        func_0x000107c613fc(&UNK_11044bc10,0x19,7);
        *(undefined **)(puVar8 + 0x10) = puVar7;
        puVar8[0x18] = uVar1;
        pcStack_88 = FUN_101b605ec;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_11044bc28;
        ppuVar9 = &puStack_a8;
        puStack_80 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        func_0x000107c61574(puStack_80);
        func_0x000107c4e524(uVar5);
        func_0x000107c60bd0(ppuVar9);
        puVar7 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
        func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
        func_0x000107c41570();
        func_0x000107c61180();
        if (lRam0000000113487fe0 != -1) {
          func_0x000107c61568(0x113487fe0,0x101b5e1f0);
        }
        lVar10 = 0x112d39140;
        func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
        func_0x000107c61534();
        *(undefined8 *)(lVar10 + 0x18) = 2;
        *(undefined8 *)(lVar10 + 0x10) = 1;
        uStack_b8 = 0x6174536567646162;
        uStack_b0 = 0xeb00000000737574;
        func_0x000107c602d4(lVar10 + 0x20,&uStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
        *(undefined **)(lVar10 + 0x60) = PTR___sSbN_11034dd40;
        *(undefined1 *)(lVar10 + 0x48) = 1;
        lVar11 = lVar10;
        func_0x000100dfa3f0(lVar10);
        func_0x000107c61588(lVar10);
        func_0x000101b6104c(lVar10 + 0x20,0x112d377a0,&UNK_10d9016e0);
        lVar10 = lVar11;
        func_0x000107c5f9dc(lVar11,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                            PTR___ss11AnyHashableVSHsWP_11034e450);
        func_0x000107c6142c(lVar11);
        func_0x000107c4eb8c(puVar7);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(lVar10);
      }
      func_0x000107c61170(uVar6);
    }
  }
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 101b60598; end: 101b605c7;  */

void FUN_101b60598(long param_1,long param_2)

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



/* Entry: 101b605c8; end: 101b605eb;  */

undefined8 FUN_101b605c8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101b605ec; end: 101b605f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b605ec(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar8 + 0x10,auStack_48,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 != 0) {
    uVar2 = *(ulong *)(lVar8 + _DAT_112e04950);
    func_0x000107c4e020();
    func_0x000107c61180();
    uVar3 = 0;
    func_0x000101b6108c(0,0x112d58220,&PTR_PTR_1126c2d78);
    uVar4 = uVar2;
    func_0x000107c5fc54(uVar2,uVar3);
    func_0x000107c61170(uVar2);
    if (uVar4 >> 0x3e == 0) {
      uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar2 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar2 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar2 == 0) {
      func_0x000107c61170(lVar8);
      func_0x000107c6142c(uVar4);
    }
    else {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b5e3dc);
          (*pcVar1)();
        }
        lVar5 = *(long *)(uVar4 + 0x20);
        func_0x000107c61174();
      }
      else {
        lVar5 = 0;
        FUN_101b605f4(0,uVar4,&PTR_PTR_1126c2d78,0x112d58220);
      }
      func_0x000107c6142c(uVar4);
      lVar6 = lVar5;
      func_0x000107c3e614();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar6 != 0) {
        func_0x000107c556a8(lVar6);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c45a48();
        func_0x000107c61170(lVar6);
        lVar5 = *(long *)(lVar8 + _DAT_112e048d0);
        *(undefined **)(lVar8 + _DAT_112e048d0) = puVar7;
        func_0x000107c61170(lVar8);
        lVar8 = lVar5;
      }
      func_0x000107c61170(lVar8);
    }
  }
  return;
}


