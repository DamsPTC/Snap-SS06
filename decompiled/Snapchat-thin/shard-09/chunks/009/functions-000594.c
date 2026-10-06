/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072c35e8; end: 1072c361b;  */

void FUN_1072c35e8(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cefd8();
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x18) {
    func_0x0001072cee80();
    FUN_1072c34f0();
  }
  return;
}



/* Entry: 1072c361c; end: 1072c361f;  */

void FUN_1072c361c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cefd8(param_2,*param_1);
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x38) {
    func_0x0001072cee80();
    FUN_1072c3654();
  }
  return;
}



/* Entry: 1072c3620; end: 1072c3653;  */

void FUN_1072c3620(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cefd8();
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x38) {
    func_0x0001072cee80();
    FUN_1072c3654();
  }
  return;
}



/* Entry: 1072c3654; end: 1072c366f;  */

void FUN_1072c3654(void)

{
  func_0x0001072d0148();
  FUN_1072c3670();
  return;
}



/* Entry: 1072c3670; end: 1072c3757;  */

/* WARNING: Possible PIC construction at 0x0001072c35d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001072c35d4) */

void FUN_1072c3670(int *param_1,undefined8 *param_2)

{
  double *pdVar1;
  bool bVar2;
  long *plVar3;
  double *pdVar4;
  long unaff_x20;
  long unaff_x21;
  double dVar5;
  
  if (*param_1 == 7) {
    return;
  }
  if (*param_1 == 6) {
    *(double *)(param_1 + 2) = *(double *)*param_2 + *(double *)(param_1 + 2);
    return;
  }
  if (*param_1 != 5) {
    if (*param_1 == 4) {
      func_0x0001072cefd8(param_1 + 2,*param_2);
      for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x20) {
        func_0x0001072cee80();
        FUN_1072c3524();
      }
    }
    else {
      if (*param_1 == 3) {
        pdVar1 = *(double **)(param_1 + 4);
        dVar5 = *(double *)*param_2;
        for (pdVar4 = *(double **)(param_1 + 2); pdVar4 != pdVar1; pdVar4 = pdVar4 + 3) {
          *pdVar4 = dVar5 + *pdVar4;
        }
        return;
      }
      bVar2 = *param_1 == 2;
      if (bVar2) {
        plVar3 = (long *)(param_1 + 2);
        pdVar4 = (double *)*param_2;
        func_0x0001072cefd8();
        if (unaff_x20 != unaff_x21) {
          func_0x0001072cee80();
          goto SUB_1072c34a4;
        }
      }
      else {
        func_0x0001072cf5e8(param_1,param_2);
        if (bVar2) {
          func_0x0001072cefd8(param_2,*(undefined8 *)param_1);
          for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x18) {
            func_0x0001072cee80();
            FUN_1072c34f0();
          }
        }
        else {
          func_0x0001072cefd8(param_2,*(undefined8 *)param_1);
          for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x38) {
            func_0x0001072cee80();
            FUN_1072c3654();
          }
        }
      }
    }
    return;
  }
  plVar3 = (long *)(param_1 + 2);
  pdVar4 = (double *)*param_2;
SUB_1072c34a4:
  pdVar1 = (double *)plVar3[1];
  dVar5 = *pdVar4;
  for (pdVar4 = (double *)*plVar3; pdVar4 != pdVar1; pdVar4 = pdVar4 + 3) {
    *pdVar4 = dVar5 + *pdVar4;
  }
  return;
}



/* Entry: 1072c3758; end: 1072c38a3;  */

long FUN_1072c3758(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_78 [40];
  
  if (0 < param_5) {
    lVar3 = param_1[1];
    if ((param_1[2] - lVar3) / 0xb0 < param_5) {
      plVar2 = param_1;
      FUN_1072c1a60(param_1,(lVar3 - *param_1) / 0xb0 + param_5);
      FUN_1072c03fc(auStack_78,plVar2,(param_2 - *param_1) / 0xb0,param_1 + 2);
      FUN_1072c39c0(auStack_78,param_3,param_5);
      FUN_1072c3a1c(param_1,auStack_78,param_2);
      func_0x0001072ce818();
    }
    else {
      lVar3 = lVar3 - param_2;
      lVar1 = param_5 - lVar3 / 0xb0;
      if (lVar1 == 0 || param_5 < lVar3 / 0xb0) {
        func_0x0001072cee80();
        FUN_1072c38cc();
        func_0x0001072cea6c();
      }
      else {
        FUN_1072c38a4(param_1,param_3 + lVar3,param_4,lVar1);
        if (lVar3 < 1) {
          return param_2;
        }
        func_0x0001072cee80();
        FUN_1072c38cc();
        func_0x0001072cea6c();
      }
      FUN_1072c3940();
    }
  }
  return param_2;
}



/* Entry: 1072c38a4; end: 1072c38cb;  */

void FUN_1072c38a4(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001072ceb2c();
  func_0x0001072ceee0();
  FUN_1072c3ad0();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1072c38cc; end: 1072c393f;  */

void FUN_1072c38cc(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar1 = param_2 + (lVar3 - param_4);
  lVar2 = lVar3;
  for (uVar4 = uVar1; uVar4 < param_3; uVar4 = uVar4 + 0xb0) {
    func_0x0001072c0510(lVar2,uVar4);
    lVar2 = lVar2 + 0xb0;
  }
  *(long *)(param_1 + 8) = lVar2;
  func_0x0001072cfc38(param_2,uVar1,uVar1,lVar3);
  FUN_1072c3b08();
  return;
}



/* Entry: 1072c3940; end: 1072c39bf;  */

void FUN_1072c3940(undefined1 *param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined1 auStack_f0 [176];
  undefined1 *puStack_40;
  
  func_0x0001072ce248();
  puVar1 = param_1 + 0x10;
  for (lVar2 = param_3 * 0xb0; lVar2 != 0; lVar2 = lVar2 + -0xb0) {
    puStack_40 = puVar1;
    FUN_1072c330c(auStack_f0,param_2);
    func_0x0001072ced6c();
    FUN_1072c3b68();
    param_1 = auStack_f0;
    FUN_1072c0624();
    param_2 = param_2 + 0xb0;
  }
  func_0x0001072ce098();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    param_3 = param_3 * 0xb0;
    lVar2 = *(long *)(param_1 + 0x10) + param_3;
    for (; param_3 != 0; param_3 = param_3 + -0xb0) {
      func_0x0001072cea6c();
      FUN_1072c330c();
    }
    *(long *)(param_1 + 0x10) = lVar2;
    return;
  }
  return;
}



/* Entry: 1072c39c0; end: 1072c3a1b;  */

void FUN_1072c39c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_3 = param_3 * 0xb0;
  lVar1 = *(long *)(param_1 + 0x10) + param_3;
  for (; param_3 != 0; param_3 = param_3 + -0xb0) {
    func_0x0001072cea6c();
    FUN_1072c330c();
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1072c3a1c; end: 1072c3acf;  */

undefined8 FUN_1072c3a1c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  func_0x0001003ac100();
  uVar1 = *(undefined8 *)(param_2 + 8);
  FUN_1072c0480(param_1 + 0x10);
  lVar3 = *unaff_x21;
  lVar2 = unaff_x20[1];
  unaff_x20[2] = unaff_x20[2] + (unaff_x21[1] - unaff_x19);
  unaff_x21[1] = unaff_x19;
  FUN_1072c0480(unaff_x21 + 2);
  unaff_x20[1] = lVar2 + ((unaff_x19 - lVar3) / -0xb0) * 0xb0;
  lVar3 = *unaff_x21;
  unaff_x21[1] = lVar3;
  *unaff_x21 = unaff_x20[1];
  unaff_x20[1] = lVar3;
  lVar3 = unaff_x21[1];
  unaff_x21[1] = unaff_x20[2];
  unaff_x20[2] = lVar3;
  lVar3 = unaff_x21[2];
  unaff_x21[2] = unaff_x20[3];
  unaff_x20[3] = lVar3;
  *unaff_x20 = unaff_x20[1];
  return uVar1;
}



/* Entry: 1072c3ad0; end: 1072c3b07;  */

void FUN_1072c3ad0(void)

{
  FUN_1072c32b0();
  return;
}



/* Entry: 1072c3b08; end: 1072c3b67;  */

void FUN_1072c3b08(undefined8 param_1,long param_2,long param_3,long param_4)

{
  func_0x0001072cea60();
  while (param_4 = param_4 + -0xb0, param_3 != param_2) {
    param_3 = param_3 + -0xb0;
    FUN_1072c3b68(param_4,param_3);
  }
  func_0x0001072cee80();
  return;
}



/* Entry: 1072c3b68; end: 1072c3bb7;  */

void FUN_1072c3b68(void)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001072ce940();
  FUN_1072c3bb8();
  FUN_1072c3bdc(unaff_x20 + 0x38,unaff_x19 + 0x38);
  FUN_1072c0368(unaff_x20 + 0x48,unaff_x19 + 0x48);
  uVar1 = *(undefined4 *)(unaff_x19 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x19 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x90) = *(undefined8 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x88) = uVar4;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar2;
  *(undefined4 *)(unaff_x20 + 0xa8) = uVar1;
  return;
}



/* Entry: 1072c3bb8; end: 1072c3bdb;  */

undefined8 FUN_1072c3bb8(undefined8 param_1)

{
  func_0x0001072c3c00();
  return param_1;
}



/* Entry: 1072c3bdc; end: 1072c3cfb;  */

void FUN_1072c3bdc(void)

{
  func_0x0001072ce444();
  func_0x0001072c0654();
  return;
}



/* Entry: 1072c3cfc; end: 1072c3d17;  */

void FUN_1072c3cfc(void)

{
  func_0x0001072cf584();
  FUN_1072c4a64();
  return;
}



/* Entry: 1072c3d18; end: 1072c3d3f;  */

void FUN_1072c3d18(void)

{
  func_0x0001072ceb2c();
  FUN_1072c330c();
  func_0x0001072d0174();
  return;
}



/* Entry: 1072c3d40; end: 1072c3d9f;  */

void FUN_1072c3d40(void)

{
  undefined8 uStack_48;
  
  func_0x0001072ce314();
  func_0x0001072cf038();
  FUN_1072c1a60();
  func_0x0001072ce15c();
  FUN_1072c03fc();
  FUN_1072c330c(uStack_48);
  func_0x0001072cf1a4();
  func_0x0001072ce9c4();
  FUN_1072c03c8();
  func_0x0001072ceb54();
  func_0x0001072c06e0();
  return;
}



/* Entry: 1072c3da0; end: 1072c3deb;  */

void FUN_1072c3da0(undefined4 *param_1,int *param_2,undefined8 param_3)

{
  long lVar1;
  double *pdVar2;
  long *plVar3;
  undefined1 uVar4;
  bool bVar5;
  long *plVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  double *unaff_x20;
  long unaff_x21;
  double *pdVar8;
  long lVar9;
  long unaff_x23;
  undefined8 uVar10;
  undefined1 auStack_98 [32];
  long lStack_78;
  long alStack_70 [6];
  
  if (*param_2 == 7) {
    *param_1 = 7;
    return;
  }
  if (*param_2 == 6) {
    *param_1 = 6;
    uVar10 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = uVar10;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    return;
  }
  uVar4 = *param_2 == 5;
  if ((bool)uVar4) {
    func_0x0001003ac70c(param_3,param_2 + 2);
    FUN_1072c3e5c();
    func_0x0001072cf26c();
    if ((bool)uVar4) {
      func_0x0001072cf7fc();
    }
    else {
      func_0x0001072ce600();
    }
    func_0x0001072cefc4();
    return;
  }
  if (*param_2 == 4) {
    plVar6 = (long *)(param_2 + 2);
    func_0x0001072ce8e4(param_3);
    lVar1 = plVar6[1];
    for (lVar9 = *plVar6; uVar4 = lVar9 == lVar1, !(bool)uVar4; lVar9 = lVar9 + 0x20) {
      func_0x0001072cea6c(alStack_70);
      FUN_1072c4354();
      func_0x0001072d013c();
      if (!(bool)uVar4) {
        func_0x0001072cf444();
      }
      func_0x0001072cebe0();
    }
    func_0x0001072ceddc();
    return;
  }
  if (*param_2 == 3) {
    plVar6 = (long *)(param_2 + 2);
    func_0x0001072ceb38(param_3);
    func_0x0001072cf014();
    pdVar2 = (double *)plVar6[1];
    for (pdVar8 = (double *)*plVar6; pdVar8 != pdVar2; pdVar8 = pdVar8 + 3) {
      if ((*unaff_x20 <= *pdVar8) && (*pdVar8 <= unaff_x20[1])) {
        func_0x0001072cfd6c();
      }
    }
    *unaff_x19 = 3;
    func_0x0001072ce25c();
    func_0x0001072c0c9c();
  }
  else {
    if (*param_2 != 2) {
      piVar7 = param_2 + 2;
      if (*param_2 == 1) {
        func_0x0001072ceb38();
        func_0x0001072cf7a4();
        plVar3 = *(long **)(piVar7 + 2);
        for (plVar6 = *(long **)piVar7; plVar6 != plVar3; plVar6 = plVar6 + 3) {
          lStack_78 = 0;
          alStack_70[0] = 0;
          alStack_70[1] = 0;
          lVar1 = plVar6[1];
          for (lVar9 = *plVar6; uVar4 = lVar9 == lVar1, !(bool)uVar4; lVar9 = lVar9 + 0x20) {
            func_0x0001072cea6c(auStack_98);
            FUN_1072c4354();
            func_0x0001072d01bc();
            if (!(bool)uVar4) {
              func_0x0001072cfed0();
            }
            func_0x0001072c0c9c(auStack_98);
          }
          if (lStack_78 != alStack_70[0]) {
            func_0x0001072cfdf8();
          }
          func_0x0001072cf884();
        }
        func_0x0001072cee04();
        return;
      }
      func_0x0001072d00ec(param_3);
      func_0x0001072ceb38();
      func_0x0001072d02f8();
      for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0x38) {
        FUN_1072c472c(unaff_x21);
      }
      func_0x0001072ceeb4();
      return;
    }
    plVar6 = (long *)(param_2 + 2);
    func_0x0001072ceb38(param_3);
    func_0x0001003ac70c();
    lVar1 = plVar6[1];
    for (lVar9 = *plVar6; bVar5 = lVar9 == lVar1, !bVar5; lVar9 = lVar9 + 0x30) {
      func_0x0001072cea6c();
      FUN_1072c3e5c();
    }
    func_0x0001072cf26c();
    if (bVar5) {
      func_0x0001072cf7fc();
    }
    else {
      func_0x0001072ce600();
    }
    func_0x0001072cefc4();
  }
  return;
}



/* Entry: 1072c3dec; end: 1072c3e37;  */

void FUN_1072c3dec(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 auStack_38 [24];
  
  func_0x0001003ac70c();
  FUN_1072c3e5c(param_1,param_2,auStack_38);
  func_0x0001072cf26c();
  if ((bool)in_ZR) {
    func_0x0001072cf7fc();
  }
  else {
    func_0x0001072ce600();
  }
  func_0x0001072cefc4();
  return;
}



/* Entry: 1072c3e38; end: 1072c3e5b;  */

void FUN_1072c3e38(int *param_1,undefined8 param_2)

{
  long lVar1;
  double *pdVar2;
  long *plVar3;
  undefined1 uVar4;
  bool bVar5;
  long *plVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  double *unaff_x20;
  long unaff_x21;
  double *pdVar8;
  long lVar9;
  long unaff_x23;
  undefined1 auStack_98 [32];
  long lStack_78;
  long alStack_70 [6];
  
  if (*param_1 == 4) {
    plVar6 = (long *)(param_1 + 2);
    func_0x0001072ce8e4(param_2);
    lVar1 = plVar6[1];
    for (lVar9 = *plVar6; uVar4 = lVar9 == lVar1, !(bool)uVar4; lVar9 = lVar9 + 0x20) {
      func_0x0001072cea6c(alStack_70);
      FUN_1072c4354();
      func_0x0001072d013c();
      if (!(bool)uVar4) {
        func_0x0001072cf444();
      }
      func_0x0001072cebe0();
    }
    func_0x0001072ceddc();
    return;
  }
  if (*param_1 == 3) {
    plVar6 = (long *)(param_1 + 2);
    func_0x0001072ceb38(param_2);
    func_0x0001072cf014();
    pdVar2 = (double *)plVar6[1];
    for (pdVar8 = (double *)*plVar6; pdVar8 != pdVar2; pdVar8 = pdVar8 + 3) {
      if ((*unaff_x20 <= *pdVar8) && (*pdVar8 <= unaff_x20[1])) {
        func_0x0001072cfd6c();
      }
    }
    *unaff_x19 = 3;
    func_0x0001072ce25c();
    func_0x0001072c0c9c();
  }
  else {
    if (*param_1 != 2) {
      piVar7 = param_1 + 2;
      if (*param_1 == 1) {
        func_0x0001072ceb38();
        func_0x0001072cf7a4();
        plVar3 = *(long **)(piVar7 + 2);
        for (plVar6 = *(long **)piVar7; plVar6 != plVar3; plVar6 = plVar6 + 3) {
          lStack_78 = 0;
          alStack_70[0] = 0;
          alStack_70[1] = 0;
          lVar1 = plVar6[1];
          for (lVar9 = *plVar6; uVar4 = lVar9 == lVar1, !(bool)uVar4; lVar9 = lVar9 + 0x20) {
            func_0x0001072cea6c(auStack_98);
            FUN_1072c4354();
            func_0x0001072d01bc();
            if (!(bool)uVar4) {
              func_0x0001072cfed0();
            }
            func_0x0001072c0c9c(auStack_98);
          }
          if (lStack_78 != alStack_70[0]) {
            func_0x0001072cfdf8();
          }
          func_0x0001072cf884();
        }
        func_0x0001072cee04();
        return;
      }
      func_0x0001072d00ec(param_2);
      func_0x0001072ceb38();
      func_0x0001072d02f8();
      for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0x38) {
        FUN_1072c472c(unaff_x21);
      }
      func_0x0001072ceeb4();
      return;
    }
    plVar6 = (long *)(param_1 + 2);
    func_0x0001072ceb38(param_2);
    func_0x0001003ac70c();
    lVar1 = plVar6[1];
    for (lVar9 = *plVar6; bVar5 = lVar9 == lVar1, !bVar5; lVar9 = lVar9 + 0x30) {
      func_0x0001072cea6c();
      FUN_1072c3e5c();
    }
    func_0x0001072cf26c();
    if (bVar5) {
      func_0x0001072cf7fc();
    }
    else {
      func_0x0001072ce600();
    }
    func_0x0001072cefc4();
  }
  return;
}



/* Entry: 1072c3e5c; end: 1072c4183;  */

void FUN_1072c3e5c(long param_1,long param_2)

{
  double *pdVar1;
  undefined1 uVar2;
  long extraout_x8;
  ulong uVar3;
  ulong extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long *unaff_x20;
  double *unaff_x21;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  double dStack_98;
  
  func_0x0001072ce7a0();
  uVar3 = 0;
  if (extraout_x9 != 0) {
    uVar3 = extraout_x8 / extraout_x9;
  }
  if (1 < uVar3) {
    func_0x0001003ac100();
    uStack_b0 = 0;
    dStack_98 = 0.0;
    dStack_a0 = 0.0;
    lStack_b8 = 0;
    lStack_c0 = 0;
    uStack_a8 = *(undefined8 *)(param_2 + 0x18);
    dVar11 = *(double *)(param_2 + 0x20);
    uVar3 = (ulong)*(byte *)(param_1 + 0x10);
    if (*(byte *)(param_1 + 0x10) == 1) {
      dStack_98 = (double)unaff_x20[5];
      dStack_a0 = dVar11;
    }
    lVar4 = 0;
    dVar9 = 0.0;
    for (lVar5 = 2 - extraout_x9_00; lVar5 != 1; lVar5 = lVar5 + 1) {
      lVar6 = *unaff_x20;
      pdVar1 = (double *)(lVar6 + lVar4);
      dVar12 = pdVar1[3];
      dVar13 = *pdVar1;
      dVar10 = dVar12 - dVar13;
      if ((uVar3 & 1) != 0) {
        dVar9 = dVar10;
        _hypot(dVar10,pdVar1[4] - pdVar1[1]);
      }
      dVar7 = *unaff_x21;
      dVar8 = unaff_x21[1];
      if (dVar7 <= dVar13) {
        if (dVar13 <= dVar8) {
          func_0x0001072c41b4(&lStack_c0,pdVar1);
          uVar2 = dVar12 == *unaff_x21;
          if (*unaff_x21 <= dVar12) {
            uVar2 = dVar12 == unaff_x21[1];
            if (dVar12 <= unaff_x21[1]) goto LAB_1072c40f0;
            func_0x0001072ce878();
            func_0x0001072ce7bc();
            func_0x0001072ce7f0();
            func_0x0001072ced98();
            if ((bool)uVar2) {
              func_0x0001072d0204();
            }
            func_0x0001072cea0c();
          }
          else {
            func_0x0001072ce878();
            func_0x0001072ce7bc();
            func_0x0001072ce7f0();
            func_0x0001072ced98();
            if ((bool)uVar2) {
              func_0x0001072d0204();
            }
            func_0x0001072cea0c();
          }
        }
        else {
          uVar2 = dVar12 == dVar7;
          dVar13 = dVar8 - dVar13;
          if (dVar7 <= dVar12) {
            uVar2 = dVar12 == dVar8;
            if (dVar12 < dVar8) {
              func_0x0001072d0380(*(undefined8 *)(lVar6 + lVar4 + 0x20),dVar8,
                                  *(undefined8 *)(lVar6 + lVar4 + 8));
              func_0x0001072ce7f0();
              goto LAB_1072c4074;
            }
            goto LAB_1072c40fc;
          }
          func_0x0001072d0380(*(undefined8 *)(lVar6 + lVar4 + 0x20),dVar8,
                              *(undefined8 *)(lVar6 + lVar4 + 8));
          func_0x0001072ce7f0();
          func_0x0001072ced98();
          if ((bool)uVar2) {
            dStack_a0 = dVar11 + (dVar13 / dVar10) * dVar9;
          }
          func_0x0001072ceb7c(*unaff_x21);
          func_0x0001072ce7bc();
          func_0x0001072ce7f0();
          func_0x0001072ced98();
          if ((bool)uVar2) {
            func_0x0001072d0204();
          }
          func_0x0001072cea0c();
        }
LAB_1072c40b8:
        uStack_e0 = 0;
        lStack_c8 = 0;
        lStack_d0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        lStack_d8 = unaff_x20[3];
        func_0x0001072ced98();
        if ((bool)uVar2) {
          lStack_c8 = unaff_x20[5];
          lStack_d0 = unaff_x20[4];
        }
        FUN_1072c4184(&lStack_c0,&uStack_f0);
        func_0x0001072cebe0();
      }
      else {
        uVar2 = dVar12 == dVar8;
        dVar13 = dVar7 - dVar13;
        if (dVar8 < dVar12) {
          func_0x0001072ce7bc(dVar7,*(undefined8 *)(lVar6 + lVar4 + 0x20),
                              *(undefined8 *)(lVar6 + lVar4 + 8));
          func_0x0001072ce7f0();
          func_0x0001072ced98();
          if ((bool)uVar2) {
            dStack_a0 = dVar11 + (dVar13 / dVar10) * dVar9;
          }
          func_0x0001072ceb7c(unaff_x21[1]);
          func_0x0001072ce7bc();
          func_0x0001072ce7f0();
          func_0x0001072ced98();
          if ((bool)uVar2) {
            func_0x0001072d0204();
          }
          func_0x0001072cea0c();
          goto LAB_1072c40b8;
        }
        uVar2 = dVar12 == dVar7;
        if (dVar7 < dVar12) {
          func_0x0001072ce7bc(dVar7,*(undefined8 *)(lVar6 + lVar4 + 0x20),
                              *(undefined8 *)(lVar6 + lVar4 + 8));
          func_0x0001072ce7f0();
LAB_1072c4074:
          func_0x0001072ced98();
          if ((bool)uVar2) {
            dStack_a0 = dVar11 + (dVar13 / dVar10) * dVar9;
          }
LAB_1072c40f0:
          if (lVar5 == 0) {
            func_0x0001072cf960(&lStack_c0);
          }
        }
      }
LAB_1072c40fc:
      func_0x0001072d0210();
      lVar4 = lVar4 + 0x18;
      uVar3 = extraout_x8_00;
    }
    if (lStack_c0 != lStack_b8) {
      dStack_98 = dVar11;
      func_0x0001072cea0c();
    }
    func_0x0001072c0c9c(&lStack_c0);
  }
  return;
}



/* Entry: 1072c4184; end: 1072c4243;  */

void FUN_1072c4184(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001072ce940();
  func_0x0001072c41ec();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return;
}



/* Entry: 1072c4244; end: 1072c42a7;  */

void FUN_1072c4244(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puStack_48;
  
  func_0x0001072ce2e4();
  FUN_1072c1f04();
  func_0x0001072ce15c();
  FUN_1072c1de4();
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20;
  puStack_48[2] = unaff_x20[2];
  puStack_48[1] = uVar2;
  *puStack_48 = uVar1;
  func_0x0001072ceac4();
  func_0x0001072ce9c4();
  FUN_1072c1dc0();
  func_0x0001072ceb54();
  func_0x0001072c1e18();
  return;
}



/* Entry: 1072c42a8; end: 1072c42c7;  */

void FUN_1072c42a8(void)

{
  func_0x0001072cf3dc();
  FUN_1072c0918();
  return;
}



/* Entry: 1072c42c8; end: 1072c432f;  */

void FUN_1072c42c8(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 auStack_70 [64];
  
  func_0x0001072ce8e4();
  lVar1 = param_2[1];
  for (lVar3 = *param_2; uVar2 = lVar3 == lVar1, !(bool)uVar2; lVar3 = lVar3 + 0x20) {
    func_0x0001072cea6c(auStack_70);
    FUN_1072c4354();
    func_0x0001072d013c();
    if (!(bool)uVar2) {
      func_0x0001072cf444();
    }
    func_0x0001072cebe0();
  }
  func_0x0001072ceddc();
  return;
}



/* Entry: 1072c4330; end: 1072c4353;  */

void FUN_1072c4330(int *param_1,undefined8 param_2)

{
  double *pdVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  double *unaff_x20;
  long unaff_x21;
  double *pdVar8;
  long lVar9;
  long unaff_x23;
  undefined1 auStack_98 [32];
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  if (*param_1 == 3) {
    plVar6 = (long *)(param_1 + 2);
    func_0x0001072ceb38(param_2);
    func_0x0001072cf014();
    pdVar1 = (double *)plVar6[1];
    for (pdVar8 = (double *)*plVar6; pdVar8 != pdVar1; pdVar8 = pdVar8 + 3) {
      if ((*unaff_x20 <= *pdVar8) && (*pdVar8 <= unaff_x20[1])) {
        func_0x0001072cfd6c();
      }
    }
    *unaff_x19 = 3;
    func_0x0001072ce25c();
    func_0x0001072c0c9c();
  }
  else {
    if (*param_1 != 2) {
      piVar7 = param_1 + 2;
      if (*param_1 == 1) {
        func_0x0001072ceb38();
        func_0x0001072cf7a4();
        plVar3 = *(long **)(piVar7 + 2);
        for (plVar6 = *(long **)piVar7; plVar6 != plVar3; plVar6 = plVar6 + 3) {
          lStack_78 = 0;
          lStack_70 = 0;
          uStack_68 = 0;
          lVar2 = plVar6[1];
          for (lVar9 = *plVar6; uVar5 = lVar9 == lVar2, !(bool)uVar5; lVar9 = lVar9 + 0x20) {
            func_0x0001072cea6c(auStack_98);
            FUN_1072c4354();
            func_0x0001072d01bc();
            if (!(bool)uVar5) {
              func_0x0001072cfed0();
            }
            func_0x0001072c0c9c(auStack_98);
          }
          if (lStack_78 != lStack_70) {
            func_0x0001072cfdf8();
          }
          func_0x0001072cf884();
        }
        func_0x0001072cee04();
        return;
      }
      func_0x0001072d00ec(param_2);
      func_0x0001072ceb38();
      func_0x0001072d02f8();
      for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0x38) {
        FUN_1072c472c(unaff_x21);
      }
      func_0x0001072ceeb4();
      return;
    }
    plVar6 = (long *)(param_1 + 2);
    func_0x0001072ceb38(param_2);
    func_0x0001003ac70c();
    lVar2 = plVar6[1];
    for (lVar9 = *plVar6; bVar4 = lVar9 == lVar2, !bVar4; lVar9 = lVar9 + 0x30) {
      func_0x0001072cea6c();
      FUN_1072c3e5c();
    }
    func_0x0001072cf26c();
    if (bVar4) {
      func_0x0001072cf7fc();
    }
    else {
      func_0x0001072ce600();
    }
    func_0x0001072cefc4();
  }
  return;
}



/* Entry: 1072c4354; end: 1072c44f7;  */

void FUN_1072c4354(long *param_1,double *param_2,long *param_3)

{
  double *pdVar1;
  double *pdVar2;
  bool bVar3;
  undefined1 in_CY;
  long extraout_x8;
  long lVar4;
  long lVar5;
  double dVar6;
  
  func_0x0001072ce7a0();
  func_0x0001072cf934();
  if ((bool)in_CY) {
    lVar4 = 0;
    for (lVar5 = 2 - extraout_x8; lVar5 != 1; lVar5 = lVar5 + 1) {
      pdVar1 = (double *)(*param_3 + lVar4);
      dVar6 = pdVar1[3];
      if (*param_2 <= *pdVar1) {
        if (*pdVar1 <= param_2[1]) {
          func_0x0001072c41b4(param_1,pdVar1);
          if (*param_2 <= dVar6) {
            if (param_2[1] < dVar6) {
              func_0x0001072ce878();
              func_0x0001072cf7b8();
              func_0x0001072ce7d0();
            }
          }
          else {
            func_0x0001072ce878();
            func_0x0001072cf7b8();
            func_0x0001072ce7d0();
          }
        }
        else if (dVar6 < param_2[1]) {
          func_0x0001072cf0c4();
          func_0x0001072ce7d0();
          if (*param_2 <= dVar6) goto LAB_1072c4454;
          func_0x0001072ceb7c();
          func_0x0001072cf564();
          func_0x0001072ce7d0();
        }
      }
      else if (*param_2 < dVar6) {
        func_0x0001072cf0c4();
        func_0x0001072ce7d0();
        if (dVar6 <= param_2[1]) {
LAB_1072c4454:
          if (lVar5 == 0) {
            func_0x0001072cf960(param_1);
          }
        }
        else {
          func_0x0001072ceb7c();
          func_0x0001072cf564();
          func_0x0001072ce7d0();
        }
      }
      lVar4 = lVar4 + 0x18;
    }
    pdVar1 = (double *)*param_1;
    pdVar2 = (double *)param_1[1];
    if (pdVar1 != pdVar2) {
      bVar3 = false;
      if ((*pdVar1 == pdVar2[-3]) && (bVar3 = false, !NAN(pdVar1[1]) && !NAN(pdVar2[-2]))) {
        bVar3 = pdVar1[1] == pdVar2[-2];
      }
      if (!bVar3) {
        func_0x0001072cfe20();
      }
    }
  }
  return;
}



/* Entry: 1072c44f8; end: 1072c4567;  */

void FUN_1072c44f8(undefined8 param_1,long *param_2)

{
  double *pdVar1;
  undefined4 *unaff_x19;
  double *unaff_x20;
  double *pdVar2;
  
  func_0x0001072ceb38();
  func_0x0001072cf014();
  pdVar1 = (double *)param_2[1];
  for (pdVar2 = (double *)*param_2; pdVar2 != pdVar1; pdVar2 = pdVar2 + 3) {
    if ((*unaff_x20 <= *pdVar2) && (*pdVar2 <= unaff_x20[1])) {
      func_0x0001072cfd6c();
    }
  }
  *unaff_x19 = 3;
  func_0x0001072ce25c();
  func_0x0001072c0c9c();
  return;
}



/* Entry: 1072c4568; end: 1072c458b;  */

void FUN_1072c4568(int *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  undefined1 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x21;
  long lVar7;
  long unaff_x23;
  undefined1 auStack_98 [32];
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  if (*param_1 == 2) {
    plVar5 = (long *)(param_1 + 2);
    func_0x0001072ceb38(param_2);
    func_0x0001003ac70c();
    lVar1 = plVar5[1];
    for (lVar7 = *plVar5; bVar3 = lVar7 == lVar1, !bVar3; lVar7 = lVar7 + 0x30) {
      func_0x0001072cea6c();
      FUN_1072c3e5c();
    }
    func_0x0001072cf26c();
    if (bVar3) {
      func_0x0001072cf7fc();
    }
    else {
      func_0x0001072ce600();
    }
    func_0x0001072cefc4();
    return;
  }
  piVar6 = param_1 + 2;
  if (*param_1 == 1) {
    func_0x0001072ceb38();
    func_0x0001072cf7a4();
    plVar2 = *(long **)(piVar6 + 2);
    for (plVar5 = *(long **)piVar6; plVar5 != plVar2; plVar5 = plVar5 + 3) {
      lStack_78 = 0;
      lStack_70 = 0;
      uStack_68 = 0;
      lVar1 = plVar5[1];
      for (lVar7 = *plVar5; uVar4 = lVar7 == lVar1, !(bool)uVar4; lVar7 = lVar7 + 0x20) {
        func_0x0001072cea6c(auStack_98);
        FUN_1072c4354();
        func_0x0001072d01bc();
        if (!(bool)uVar4) {
          func_0x0001072cfed0();
        }
        func_0x0001072c0c9c(auStack_98);
      }
      if (lStack_78 != lStack_70) {
        func_0x0001072cfdf8();
      }
      func_0x0001072cf884();
    }
    func_0x0001072cee04();
    return;
  }
  func_0x0001072d00ec(param_2);
  func_0x0001072ceb38();
  func_0x0001072d02f8();
  for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0x38) {
    FUN_1072c472c(unaff_x21);
  }
  func_0x0001072ceeb4();
  return;
}



/* Entry: 1072c458c; end: 1072c45f7;  */

void FUN_1072c458c(undefined8 param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  
  func_0x0001072ceb38();
  func_0x0001003ac70c();
  lVar1 = param_2[1];
  for (lVar3 = *param_2; bVar2 = lVar3 == lVar1, !bVar2; lVar3 = lVar3 + 0x30) {
    func_0x0001072cea6c();
    FUN_1072c3e5c();
  }
  func_0x0001072cf26c();
  if (bVar2) {
    func_0x0001072cf7fc();
  }
  else {
    func_0x0001072ce600();
  }
  func_0x0001072cefc4();
  return;
}



/* Entry: 1072c45f8; end: 1072c4617;  */

void FUN_1072c45f8(int *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  int *piVar4;
  long unaff_x21;
  long lVar5;
  long *plVar6;
  long unaff_x23;
  undefined1 auStack_98 [32];
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  piVar4 = param_1 + 2;
  if (*param_1 == 1) {
    func_0x0001072ceb38();
    func_0x0001072cf7a4();
    plVar1 = *(long **)(piVar4 + 2);
    for (plVar6 = *(long **)piVar4; plVar6 != plVar1; plVar6 = plVar6 + 3) {
      lStack_78 = 0;
      lStack_70 = 0;
      uStack_68 = 0;
      lVar2 = plVar6[1];
      for (lVar5 = *plVar6; uVar3 = lVar5 == lVar2, !(bool)uVar3; lVar5 = lVar5 + 0x20) {
        func_0x0001072cea6c(auStack_98);
        FUN_1072c4354();
        func_0x0001072d01bc();
        if (!(bool)uVar3) {
          func_0x0001072cfed0();
        }
        func_0x0001072c0c9c(auStack_98);
      }
      if (lStack_78 != lStack_70) {
        func_0x0001072cfdf8();
      }
      func_0x0001072cf884();
    }
    func_0x0001072cee04();
    return;
  }
  func_0x0001072d00ec(param_2);
  func_0x0001072ceb38();
  func_0x0001072d02f8();
  for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0x38) {
    FUN_1072c472c(unaff_x21);
  }
  func_0x0001072ceeb4();
  return;
}



/* Entry: 1072c4618; end: 1072c46cb;  */

void FUN_1072c4618(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_98 [32];
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x0001072ceb38();
  func_0x0001072cf7a4();
  plVar1 = (long *)param_2[1];
  for (plVar5 = (long *)*param_2; plVar5 != plVar1; plVar5 = plVar5 + 3) {
    lStack_78 = 0;
    lStack_70 = 0;
    uStack_68 = 0;
    lVar2 = plVar5[1];
    for (lVar4 = *plVar5; uVar3 = lVar4 == lVar2, !(bool)uVar3; lVar4 = lVar4 + 0x20) {
      func_0x0001072cea6c(auStack_98);
      FUN_1072c4354();
      func_0x0001072d01bc();
      if (!(bool)uVar3) {
        func_0x0001072cfed0();
      }
      func_0x0001072c0c9c(auStack_98);
    }
    if (lStack_78 != lStack_70) {
      func_0x0001072cfdf8();
    }
    func_0x0001072cf884();
  }
  func_0x0001072cee04();
  return;
}



/* Entry: 1072c46cc; end: 1072c472b;  */

void FUN_1072c46cc(void)

{
  long unaff_x21;
  long unaff_x23;
  
  func_0x0001072d00ec();
  func_0x0001072ceb38();
  func_0x0001072d02f8();
  for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0x38) {
    FUN_1072c472c(unaff_x21);
  }
  func_0x0001072ceeb4();
  return;
}



/* Entry: 1072c472c; end: 1072c474f;  */

void FUN_1072c472c(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_x19;
  long lVar9;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar10;
  code *unaff_x30;
  code *pcVar11;
  undefined4 auStack_60 [16];
  
  uVar2 = *param_1 == 7;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072ce1d0();
    param_1 = *(uint **)(param_2 + 2);
    auStack_60[0] = 7;
    func_0x0001072cf658();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c4794;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    param_2 = puVar5;
  }
  uVar2 = *param_1 == 6;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    func_0x0001072cf538();
    func_0x0001072cf658();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c47f4;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar5;
  }
  uVar2 = *param_1 == 5;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c3dec();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c4864;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar5;
  }
  uVar2 = *param_1 == 4;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c42c8();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c48d4;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar5;
  }
  uVar2 = *param_1 == 3;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c44f8();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c4944;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar5;
  }
  uVar2 = *param_1 == 2;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c458c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c49b4;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar5;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar2) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c4618();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c4a18;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x0001072ce1d0();
  lVar9 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c46cc();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar11 = FUN_1072c4a64;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x78) = lVar9;
      *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
      *(code **)((long)register0x00000008 + -0x68) = FUN_1072c4a64;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar9 = *(long *)param_1; lVar9 != lVar1; lVar9 = lVar9 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar9 + 8);
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      uVar8 = *(undefined8 *)(lVar9 + 0x18);
      uVar6 = *(undefined8 *)(lVar9 + 0x20);
      puVar10 = *(undefined1 **)((long)register0x00000008 + -0x70);
      pcVar11 = *(code **)((long)register0x00000008 + -0x68);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
      lVar9 = *(long *)((long)register0x00000008 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar11 = FUN_1072c4a64;
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 2);
  uVar7 = *(undefined8 *)(param_1 + 4);
  uVar8 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x78) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
  *(code **)((long)register0x00000008 + -0x68) = pcVar11;
  func_0x0001072ce4e8(uVar4,uVar6,uVar7,uVar8);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c4750; end: 1072c4793;  */

void FUN_1072c4750(long param_1,uint *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x19;
  long lVar11;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ****ppppuVar12;
  undefined1 *puVar13;
  code *pcVar14;
  undefined1 auStack_c0 [64];
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  undefined4 auStack_60 [16];
  
  puVar2 = auStack_60;
  ppppuVar12 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x0001072ce1d0();
  puVar5 = *(uint **)(param_1 + 8);
  auStack_60[0] = 7;
  func_0x0001072cf658();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar14 = FUN_1072c4794;
  func_0x0001072ce900();
  uVar3 = *puVar5 == 6;
  if ((bool)uVar3) {
    puVar7 = puVar5 + 2;
    puVar2 = (undefined4 *)auStack_c0;
    pcStack_68 = FUN_1072c4794;
    pppuStack_70 = ppppuVar12;
    func_0x0001072ce1d0();
    func_0x0001072cf538();
    func_0x0001072cf658();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar14 = FUN_1072c47f4;
    func_0x0001072ce900();
    puVar5 = param_2;
    param_2 = puVar7;
    ppppuVar12 = &pppuStack_70;
  }
  uVar3 = *puVar5 == 5;
  if ((bool)uVar3) {
    puVar7 = puVar5 + 2;
    *(undefined8 *)((long)puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar12;
    *(code **)((long)puVar2 + -8) = pcVar14;
    ppppuVar12 = (undefined8 ****)((long)puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c3dec();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar14 = FUN_1072c4864;
    func_0x0001072ce900();
    puVar2 = (undefined4 *)((long)puVar2 + -0x60);
    puVar5 = param_2;
    param_2 = puVar7;
  }
  uVar3 = *puVar5 == 4;
  if ((bool)uVar3) {
    puVar7 = puVar5 + 2;
    *(undefined8 *)((long)puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar12;
    *(code **)((long)puVar2 + -8) = pcVar14;
    ppppuVar12 = (undefined8 ****)((long)puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c42c8();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar14 = FUN_1072c48d4;
    func_0x0001072ce900();
    puVar2 = (undefined4 *)((long)puVar2 + -0x60);
    puVar5 = param_2;
    param_2 = puVar7;
  }
  uVar3 = *puVar5 == 3;
  if ((bool)uVar3) {
    puVar7 = puVar5 + 2;
    *(undefined8 *)((long)puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar12;
    *(code **)((long)puVar2 + -8) = pcVar14;
    ppppuVar12 = (undefined8 ****)((long)puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c44f8();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar14 = FUN_1072c4944;
    func_0x0001072ce900();
    puVar2 = (undefined4 *)((long)puVar2 + -0x60);
    puVar5 = param_2;
    param_2 = puVar7;
  }
  uVar3 = *puVar5 == 2;
  if ((bool)uVar3) {
    puVar7 = puVar5 + 2;
    *(undefined8 *)((long)puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar12;
    *(code **)((long)puVar2 + -8) = pcVar14;
    ppppuVar12 = (undefined8 ****)((long)puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c458c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar14 = FUN_1072c49b4;
    func_0x0001072ce900();
    puVar2 = (undefined4 *)((long)puVar2 + -0x60);
    puVar5 = param_2;
    param_2 = puVar7;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar3) {
    *(undefined8 *)((long)puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar12;
    *(code **)((long)puVar2 + -8) = pcVar14;
    ppppuVar12 = (undefined8 ****)((long)puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(puVar5 + 2);
    func_0x0001072cef4c();
    FUN_1072c4618();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar14 = FUN_1072c4a18;
    func_0x0001072ce900();
    puVar2 = (undefined4 *)((long)puVar2 + -0x60);
  }
  *(undefined8 *)((long)puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)((long)puVar2 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar12;
  *(code **)((long)puVar2 + -8) = pcVar14;
  puVar13 = (undefined1 *)((long)puVar2 + -0x10);
  func_0x0001072ce1d0();
  lVar11 = *(long *)(puVar5 + 2);
  func_0x0001072cef4c();
  FUN_1072c46cc();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar14 = FUN_1072c4a64;
  func_0x0001072ce900();
  if (*puVar5 == 7) {
    uVar3 = 1;
    puVar5 = param_2;
  }
  else if (*puVar5 == 6) {
    uVar3 = 1;
    puVar5 = param_2;
  }
  else if (*puVar5 == 5) {
    uVar3 = 1;
    puVar5 = param_2;
  }
  else if (*puVar5 == 4) {
    uVar3 = 1;
    puVar5 = param_2;
  }
  else if (*puVar5 == 3) {
    uVar3 = 1;
    puVar5 = param_2;
  }
  else {
    uVar3 = 1 < *puVar5;
    bVar4 = *puVar5 == 2;
    if (bVar4) {
      puVar5 = puVar5 + 2;
      *(undefined8 *)((long)puVar2 + -0x90) = unaff_x22;
      *(undefined8 *)((long)puVar2 + -0x88) = unaff_x21;
      *(undefined8 *)((long)puVar2 + -0x80) = unaff_x20;
      *(long *)((long)puVar2 + -0x78) = lVar11;
      *(undefined1 **)((long)puVar2 + -0x70) = puVar13;
      *(code **)((long)puVar2 + -0x68) = FUN_1072c4a64;
      func_0x0001072d0340(param_2 + 8);
      if (bVar4) {
        lVar1 = *(long *)(puVar5 + 2);
        for (lVar11 = *(long *)puVar5; lVar11 != lVar1; lVar11 = lVar11 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar6 = *(undefined8 *)(lVar11 + 8);
      uVar9 = *(undefined8 *)(lVar11 + 0x10);
      uVar10 = *(undefined8 *)(lVar11 + 0x18);
      uVar8 = *(undefined8 *)(lVar11 + 0x20);
      puVar13 = *(undefined1 **)((long)puVar2 + -0x70);
      pcVar14 = *(code **)((long)puVar2 + -0x68);
      unaff_x20 = *(undefined8 *)((long)puVar2 + -0x80);
      lVar11 = *(long *)((long)puVar2 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar14 = FUN_1072c4a64;
    func_0x0001072cf5e8();
  }
  uVar6 = *(undefined8 *)puVar5;
  uVar8 = *(undefined8 *)(puVar5 + 2);
  uVar9 = *(undefined8 *)(puVar5 + 4);
  uVar10 = *(undefined8 *)(puVar5 + 6);
FUN_1072c4ab0:
  *(undefined8 *)((long)puVar2 + -0x80) = unaff_x20;
  *(long *)((long)puVar2 + -0x78) = lVar11;
  *(undefined1 **)((long)puVar2 + -0x70) = puVar13;
  *(code **)((long)puVar2 + -0x68) = pcVar14;
  func_0x0001072ce4e8(uVar6,uVar8,uVar9,uVar10);
  if ((bool)uVar3) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c4794; end: 1072c47b7;  */

void FUN_1072c4794(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_x19;
  long lVar9;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar10;
  code *unaff_x30;
  code *pcVar11;
  undefined1 auStack_60 [64];
  
  uVar2 = *param_1 == 6;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072ce1d0();
    func_0x0001072cf538();
    func_0x0001072cf658();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c47f4;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    param_1 = param_2;
    param_2 = puVar5;
  }
  uVar2 = *param_1 == 5;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c3dec();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c4864;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar5;
  }
  uVar2 = *param_1 == 4;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c42c8();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c48d4;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar5;
  }
  uVar2 = *param_1 == 3;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c44f8();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c4944;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar5;
  }
  uVar2 = *param_1 == 2;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c458c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c49b4;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar5;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar2) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c4618();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c4a18;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x0001072ce1d0();
  lVar9 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c46cc();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar11 = FUN_1072c4a64;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x78) = lVar9;
      *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
      *(code **)((long)register0x00000008 + -0x68) = FUN_1072c4a64;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar9 = *(long *)param_1; lVar9 != lVar1; lVar9 = lVar9 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar9 + 8);
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      uVar8 = *(undefined8 *)(lVar9 + 0x18);
      uVar6 = *(undefined8 *)(lVar9 + 0x20);
      puVar10 = *(undefined1 **)((long)register0x00000008 + -0x70);
      pcVar11 = *(code **)((long)register0x00000008 + -0x68);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
      lVar9 = *(long *)((long)register0x00000008 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar11 = FUN_1072c4a64;
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 2);
  uVar7 = *(undefined8 *)(param_1 + 4);
  uVar8 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x78) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
  *(code **)((long)register0x00000008 + -0x68) = pcVar11;
  func_0x0001072ce4e8(uVar4,uVar6,uVar7,uVar8);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c47b8; end: 1072c47f3;  */

void FUN_1072c47b8(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ****ppppuVar11;
  undefined1 *puVar12;
  code *pcVar13;
  undefined1 auStack_c0 [64];
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [64];
  
  puVar2 = auStack_60;
  ppppuVar11 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x0001072ce1d0();
  func_0x0001072cf538();
  func_0x0001072cf658();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar13 = FUN_1072c47f4;
  func_0x0001072ce900();
  uVar3 = *param_1 == 5;
  if ((bool)uVar3) {
    puVar6 = param_1 + 2;
    puVar2 = auStack_c0;
    pcStack_68 = FUN_1072c47f4;
    pppuStack_70 = ppppuVar11;
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c3dec();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c4864;
    func_0x0001072ce900();
    param_1 = param_2;
    param_2 = puVar6;
    ppppuVar11 = &pppuStack_70;
  }
  uVar3 = *param_1 == 4;
  if ((bool)uVar3) {
    puVar6 = param_1 + 2;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar11;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar11 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c42c8();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c48d4;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
    param_1 = param_2;
    param_2 = puVar6;
  }
  uVar3 = *param_1 == 3;
  if ((bool)uVar3) {
    puVar6 = param_1 + 2;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar11;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar11 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c44f8();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c4944;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
    param_1 = param_2;
    param_2 = puVar6;
  }
  uVar3 = *param_1 == 2;
  if ((bool)uVar3) {
    puVar6 = param_1 + 2;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar11;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar11 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c458c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c49b4;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
    param_1 = param_2;
    param_2 = puVar6;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar3) {
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar11;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar11 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c4618();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c4a18;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
  }
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
  *(undefined8 *****)(puVar2 + -0x10) = ppppuVar11;
  *(code **)(puVar2 + -8) = pcVar13;
  puVar12 = puVar2 + -0x10;
  func_0x0001072ce1d0();
  lVar10 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c46cc();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar13 = FUN_1072c4a64;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else {
    uVar3 = 1 < *param_1;
    bVar4 = *param_1 == 2;
    if (bVar4) {
      param_1 = param_1 + 2;
      *(undefined8 *)(puVar2 + -0x90) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x88) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
      *(long *)(puVar2 + -0x78) = lVar10;
      *(undefined1 **)(puVar2 + -0x70) = puVar12;
      *(code **)(puVar2 + -0x68) = FUN_1072c4a64;
      func_0x0001072d0340(param_2 + 8);
      if (bVar4) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar10 = *(long *)param_1; lVar10 != lVar1; lVar10 = lVar10 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar5 = *(undefined8 *)(lVar10 + 8);
      uVar8 = *(undefined8 *)(lVar10 + 0x10);
      uVar9 = *(undefined8 *)(lVar10 + 0x18);
      uVar7 = *(undefined8 *)(lVar10 + 0x20);
      puVar12 = *(undefined1 **)(puVar2 + -0x70);
      pcVar13 = *(code **)(puVar2 + -0x68);
      unaff_x20 = *(undefined8 *)(puVar2 + -0x80);
      lVar10 = *(long *)(puVar2 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar13 = FUN_1072c4a64;
    func_0x0001072cf5e8();
  }
  uVar5 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 2);
  uVar8 = *(undefined8 *)(param_1 + 4);
  uVar9 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
  *(long *)(puVar2 + -0x78) = lVar10;
  *(undefined1 **)(puVar2 + -0x70) = puVar12;
  *(code **)(puVar2 + -0x68) = pcVar13;
  func_0x0001072ce4e8(uVar5,uVar7,uVar8,uVar9);
  if ((bool)uVar3) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c47f4; end: 1072c4817;  */

void FUN_1072c47f4(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_x19;
  long lVar9;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar10;
  code *unaff_x30;
  code *pcVar11;
  undefined1 auStack_60 [64];
  
  uVar2 = *param_1 == 5;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c3dec();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c4864;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    param_1 = param_2;
    param_2 = puVar5;
  }
  uVar2 = *param_1 == 4;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c42c8();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c48d4;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar5;
  }
  uVar2 = *param_1 == 3;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c44f8();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c4944;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar5;
  }
  uVar2 = *param_1 == 2;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c458c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c49b4;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar5;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar2) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c4618();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c4a18;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x0001072ce1d0();
  lVar9 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c46cc();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar11 = FUN_1072c4a64;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x78) = lVar9;
      *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
      *(code **)((long)register0x00000008 + -0x68) = FUN_1072c4a64;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar9 = *(long *)param_1; lVar9 != lVar1; lVar9 = lVar9 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar9 + 8);
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      uVar8 = *(undefined8 *)(lVar9 + 0x18);
      uVar6 = *(undefined8 *)(lVar9 + 0x20);
      puVar10 = *(undefined1 **)((long)register0x00000008 + -0x70);
      pcVar11 = *(code **)((long)register0x00000008 + -0x68);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
      lVar9 = *(long *)((long)register0x00000008 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar11 = FUN_1072c4a64;
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 2);
  uVar7 = *(undefined8 *)(param_1 + 4);
  uVar8 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x78) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
  *(code **)((long)register0x00000008 + -0x68) = pcVar11;
  func_0x0001072ce4e8(uVar4,uVar6,uVar7,uVar8);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c4818; end: 1072c4863;  */

void FUN_1072c4818(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ****ppppuVar11;
  undefined1 *puVar12;
  code *pcVar13;
  undefined1 auStack_c0 [64];
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [64];
  
  puVar2 = auStack_60;
  ppppuVar11 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x0001072ce1d0();
  uVar9 = *(undefined8 *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c3dec();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar13 = FUN_1072c4864;
  func_0x0001072ce900();
  uVar3 = *param_1 == 4;
  if ((bool)uVar3) {
    puVar6 = param_1 + 2;
    puVar2 = auStack_c0;
    pcStack_68 = FUN_1072c4864;
    pppuStack_70 = ppppuVar11;
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c42c8();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c48d4;
    func_0x0001072ce900();
    param_1 = param_2;
    param_2 = puVar6;
    ppppuVar11 = &pppuStack_70;
  }
  uVar3 = *param_1 == 3;
  if ((bool)uVar3) {
    puVar6 = param_1 + 2;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = uVar9;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar11;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar11 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c44f8();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c4944;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
    param_1 = param_2;
    param_2 = puVar6;
  }
  uVar3 = *param_1 == 2;
  if ((bool)uVar3) {
    puVar6 = param_1 + 2;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = uVar9;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar11;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar11 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c458c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c49b4;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
    param_1 = param_2;
    param_2 = puVar6;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar3) {
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = uVar9;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar11;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar11 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c4618();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c4a18;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
  }
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = uVar9;
  *(undefined8 *****)(puVar2 + -0x10) = ppppuVar11;
  *(code **)(puVar2 + -8) = pcVar13;
  puVar12 = puVar2 + -0x10;
  func_0x0001072ce1d0();
  lVar10 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c46cc();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar13 = FUN_1072c4a64;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else {
    uVar3 = 1 < *param_1;
    bVar4 = *param_1 == 2;
    if (bVar4) {
      param_1 = param_1 + 2;
      *(undefined8 *)(puVar2 + -0x90) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x88) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
      *(long *)(puVar2 + -0x78) = lVar10;
      *(undefined1 **)(puVar2 + -0x70) = puVar12;
      *(code **)(puVar2 + -0x68) = FUN_1072c4a64;
      func_0x0001072d0340(param_2 + 8);
      if (bVar4) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar10 = *(long *)param_1; lVar10 != lVar1; lVar10 = lVar10 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar5 = *(undefined8 *)(lVar10 + 8);
      uVar8 = *(undefined8 *)(lVar10 + 0x10);
      uVar9 = *(undefined8 *)(lVar10 + 0x18);
      uVar7 = *(undefined8 *)(lVar10 + 0x20);
      puVar12 = *(undefined1 **)(puVar2 + -0x70);
      pcVar13 = *(code **)(puVar2 + -0x68);
      unaff_x20 = *(undefined8 *)(puVar2 + -0x80);
      lVar10 = *(long *)(puVar2 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar13 = FUN_1072c4a64;
    func_0x0001072cf5e8();
  }
  uVar5 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 2);
  uVar8 = *(undefined8 *)(param_1 + 4);
  uVar9 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
  *(long *)(puVar2 + -0x78) = lVar10;
  *(undefined1 **)(puVar2 + -0x70) = puVar12;
  *(code **)(puVar2 + -0x68) = pcVar13;
  func_0x0001072ce4e8(uVar5,uVar7,uVar8,uVar9);
  if ((bool)uVar3) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c4864; end: 1072c4887;  */

void FUN_1072c4864(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_x19;
  long lVar9;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar10;
  code *unaff_x30;
  code *pcVar11;
  undefined1 auStack_60 [64];
  
  uVar2 = *param_1 == 4;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c42c8();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c48d4;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    param_1 = param_2;
    param_2 = puVar5;
  }
  uVar2 = *param_1 == 3;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c44f8();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c4944;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar5;
  }
  uVar2 = *param_1 == 2;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c458c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c49b4;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar5;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar2) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c4618();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c4a18;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x0001072ce1d0();
  lVar9 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c46cc();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar11 = FUN_1072c4a64;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x78) = lVar9;
      *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
      *(code **)((long)register0x00000008 + -0x68) = FUN_1072c4a64;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar9 = *(long *)param_1; lVar9 != lVar1; lVar9 = lVar9 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar9 + 8);
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      uVar8 = *(undefined8 *)(lVar9 + 0x18);
      uVar6 = *(undefined8 *)(lVar9 + 0x20);
      puVar10 = *(undefined1 **)((long)register0x00000008 + -0x70);
      pcVar11 = *(code **)((long)register0x00000008 + -0x68);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
      lVar9 = *(long *)((long)register0x00000008 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar11 = FUN_1072c4a64;
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 2);
  uVar7 = *(undefined8 *)(param_1 + 4);
  uVar8 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x78) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
  *(code **)((long)register0x00000008 + -0x68) = pcVar11;
  func_0x0001072ce4e8(uVar4,uVar6,uVar7,uVar8);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c4888; end: 1072c48d3;  */

void FUN_1072c4888(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ****ppppuVar11;
  undefined1 *puVar12;
  code *pcVar13;
  undefined1 auStack_c0 [64];
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [64];
  
  puVar2 = auStack_60;
  ppppuVar11 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x0001072ce1d0();
  uVar9 = *(undefined8 *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c42c8();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar13 = FUN_1072c48d4;
  func_0x0001072ce900();
  uVar3 = *param_1 == 3;
  if ((bool)uVar3) {
    puVar6 = param_1 + 2;
    puVar2 = auStack_c0;
    pcStack_68 = FUN_1072c48d4;
    pppuStack_70 = ppppuVar11;
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c44f8();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c4944;
    func_0x0001072ce900();
    param_1 = param_2;
    param_2 = puVar6;
    ppppuVar11 = &pppuStack_70;
  }
  uVar3 = *param_1 == 2;
  if ((bool)uVar3) {
    puVar6 = param_1 + 2;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = uVar9;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar11;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar11 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c458c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c49b4;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
    param_1 = param_2;
    param_2 = puVar6;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar3) {
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = uVar9;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar11;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar11 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c4618();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c4a18;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
  }
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = uVar9;
  *(undefined8 *****)(puVar2 + -0x10) = ppppuVar11;
  *(code **)(puVar2 + -8) = pcVar13;
  puVar12 = puVar2 + -0x10;
  func_0x0001072ce1d0();
  lVar10 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c46cc();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar13 = FUN_1072c4a64;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else {
    uVar3 = 1 < *param_1;
    bVar4 = *param_1 == 2;
    if (bVar4) {
      param_1 = param_1 + 2;
      *(undefined8 *)(puVar2 + -0x90) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x88) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
      *(long *)(puVar2 + -0x78) = lVar10;
      *(undefined1 **)(puVar2 + -0x70) = puVar12;
      *(code **)(puVar2 + -0x68) = FUN_1072c4a64;
      func_0x0001072d0340(param_2 + 8);
      if (bVar4) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar10 = *(long *)param_1; lVar10 != lVar1; lVar10 = lVar10 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar5 = *(undefined8 *)(lVar10 + 8);
      uVar8 = *(undefined8 *)(lVar10 + 0x10);
      uVar9 = *(undefined8 *)(lVar10 + 0x18);
      uVar7 = *(undefined8 *)(lVar10 + 0x20);
      puVar12 = *(undefined1 **)(puVar2 + -0x70);
      pcVar13 = *(code **)(puVar2 + -0x68);
      unaff_x20 = *(undefined8 *)(puVar2 + -0x80);
      lVar10 = *(long *)(puVar2 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar13 = FUN_1072c4a64;
    func_0x0001072cf5e8();
  }
  uVar5 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 2);
  uVar8 = *(undefined8 *)(param_1 + 4);
  uVar9 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
  *(long *)(puVar2 + -0x78) = lVar10;
  *(undefined1 **)(puVar2 + -0x70) = puVar12;
  *(code **)(puVar2 + -0x68) = pcVar13;
  func_0x0001072ce4e8(uVar5,uVar7,uVar8,uVar9);
  if ((bool)uVar3) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c48d4; end: 1072c48f7;  */

void FUN_1072c48d4(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_x19;
  long lVar9;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar10;
  code *unaff_x30;
  code *pcVar11;
  undefined1 auStack_60 [64];
  
  uVar2 = *param_1 == 3;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c44f8();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c4944;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    param_1 = param_2;
    param_2 = puVar5;
  }
  uVar2 = *param_1 == 2;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c458c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c49b4;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar5;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar2) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c4618();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c4a18;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x0001072ce1d0();
  lVar9 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c46cc();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar11 = FUN_1072c4a64;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x78) = lVar9;
      *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
      *(code **)((long)register0x00000008 + -0x68) = FUN_1072c4a64;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar9 = *(long *)param_1; lVar9 != lVar1; lVar9 = lVar9 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar9 + 8);
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      uVar8 = *(undefined8 *)(lVar9 + 0x18);
      uVar6 = *(undefined8 *)(lVar9 + 0x20);
      puVar10 = *(undefined1 **)((long)register0x00000008 + -0x70);
      pcVar11 = *(code **)((long)register0x00000008 + -0x68);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
      lVar9 = *(long *)((long)register0x00000008 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar11 = FUN_1072c4a64;
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 2);
  uVar7 = *(undefined8 *)(param_1 + 4);
  uVar8 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x78) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
  *(code **)((long)register0x00000008 + -0x68) = pcVar11;
  func_0x0001072ce4e8(uVar4,uVar6,uVar7,uVar8);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c48f8; end: 1072c4943;  */

void FUN_1072c48f8(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ****ppppuVar11;
  undefined1 *puVar12;
  code *pcVar13;
  undefined1 auStack_c0 [64];
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [64];
  
  puVar2 = auStack_60;
  ppppuVar11 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x0001072ce1d0();
  uVar9 = *(undefined8 *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c44f8();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar13 = FUN_1072c4944;
  func_0x0001072ce900();
  uVar3 = *param_1 == 2;
  if ((bool)uVar3) {
    puVar6 = param_1 + 2;
    puVar2 = auStack_c0;
    pcStack_68 = FUN_1072c4944;
    pppuStack_70 = ppppuVar11;
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c458c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c49b4;
    func_0x0001072ce900();
    param_1 = param_2;
    param_2 = puVar6;
    ppppuVar11 = &pppuStack_70;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar3) {
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = uVar9;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar11;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar11 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c4618();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c4a18;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
  }
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = uVar9;
  *(undefined8 *****)(puVar2 + -0x10) = ppppuVar11;
  *(code **)(puVar2 + -8) = pcVar13;
  puVar12 = puVar2 + -0x10;
  func_0x0001072ce1d0();
  lVar10 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c46cc();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar13 = FUN_1072c4a64;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else {
    uVar3 = 1 < *param_1;
    bVar4 = *param_1 == 2;
    if (bVar4) {
      param_1 = param_1 + 2;
      *(undefined8 *)(puVar2 + -0x90) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x88) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
      *(long *)(puVar2 + -0x78) = lVar10;
      *(undefined1 **)(puVar2 + -0x70) = puVar12;
      *(code **)(puVar2 + -0x68) = FUN_1072c4a64;
      func_0x0001072d0340(param_2 + 8);
      if (bVar4) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar10 = *(long *)param_1; lVar10 != lVar1; lVar10 = lVar10 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar5 = *(undefined8 *)(lVar10 + 8);
      uVar8 = *(undefined8 *)(lVar10 + 0x10);
      uVar9 = *(undefined8 *)(lVar10 + 0x18);
      uVar7 = *(undefined8 *)(lVar10 + 0x20);
      puVar12 = *(undefined1 **)(puVar2 + -0x70);
      pcVar13 = *(code **)(puVar2 + -0x68);
      unaff_x20 = *(undefined8 *)(puVar2 + -0x80);
      lVar10 = *(long *)(puVar2 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar13 = FUN_1072c4a64;
    func_0x0001072cf5e8();
  }
  uVar5 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 2);
  uVar8 = *(undefined8 *)(param_1 + 4);
  uVar9 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
  *(long *)(puVar2 + -0x78) = lVar10;
  *(undefined1 **)(puVar2 + -0x70) = puVar12;
  *(code **)(puVar2 + -0x68) = pcVar13;
  func_0x0001072ce4e8(uVar5,uVar7,uVar8,uVar9);
  if ((bool)uVar3) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c4944; end: 1072c4967;  */

void FUN_1072c4944(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_x19;
  long lVar9;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar10;
  code *unaff_x30;
  code *pcVar11;
  undefined1 auStack_60 [64];
  
  uVar2 = *param_1 == 2;
  if ((bool)uVar2) {
    puVar5 = param_1 + 2;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c458c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c49b4;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    param_1 = param_2;
    param_2 = puVar5;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar2) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c4618();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c4a18;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x0001072ce1d0();
  lVar9 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c46cc();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar11 = FUN_1072c4a64;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x78) = lVar9;
      *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
      *(code **)((long)register0x00000008 + -0x68) = FUN_1072c4a64;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar9 = *(long *)param_1; lVar9 != lVar1; lVar9 = lVar9 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar9 + 8);
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      uVar8 = *(undefined8 *)(lVar9 + 0x18);
      uVar6 = *(undefined8 *)(lVar9 + 0x20);
      puVar10 = *(undefined1 **)((long)register0x00000008 + -0x70);
      pcVar11 = *(code **)((long)register0x00000008 + -0x68);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
      lVar9 = *(long *)((long)register0x00000008 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar11 = FUN_1072c4a64;
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 2);
  uVar7 = *(undefined8 *)(param_1 + 4);
  uVar8 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x78) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
  *(code **)((long)register0x00000008 + -0x68) = pcVar11;
  func_0x0001072ce4e8(uVar4,uVar6,uVar7,uVar8);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c4968; end: 1072c49b3;  */

void FUN_1072c4968(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ****ppppuVar11;
  undefined1 *puVar12;
  undefined1 auStack_c0 [64];
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [64];
  
  puVar2 = auStack_60;
  ppppuVar11 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x0001072ce1d0();
  uVar9 = *(undefined8 *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c458c();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  func_0x0001072ce900();
  pcVar7 = FUN_1072c49b4;
  func_0x0001072cf5e8();
  if ((bool)in_ZR) {
    puVar2 = auStack_c0;
    pppuStack_70 = ppppuVar11;
    pcStack_68 = pcVar7;
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c4618();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar7 = FUN_1072c4a18;
    func_0x0001072ce900();
    ppppuVar11 = &pppuStack_70;
  }
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = uVar9;
  *(undefined8 *****)(puVar2 + -0x10) = ppppuVar11;
  *(code **)(puVar2 + -8) = pcVar7;
  puVar12 = puVar2 + -0x10;
  func_0x0001072ce1d0();
  lVar10 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c46cc();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar7 = FUN_1072c4a64;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else {
    uVar3 = 1 < *param_1;
    bVar4 = *param_1 == 2;
    if (bVar4) {
      param_1 = param_1 + 2;
      *(undefined8 *)(puVar2 + -0x90) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x88) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
      *(long *)(puVar2 + -0x78) = lVar10;
      *(undefined1 **)(puVar2 + -0x70) = puVar12;
      *(code **)(puVar2 + -0x68) = FUN_1072c4a64;
      func_0x0001072d0340(param_2 + 8);
      if (bVar4) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar10 = *(long *)param_1; lVar10 != lVar1; lVar10 = lVar10 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar5 = *(undefined8 *)(lVar10 + 8);
      uVar8 = *(undefined8 *)(lVar10 + 0x10);
      uVar9 = *(undefined8 *)(lVar10 + 0x18);
      uVar6 = *(undefined8 *)(lVar10 + 0x20);
      puVar12 = *(undefined1 **)(puVar2 + -0x70);
      pcVar7 = *(code **)(puVar2 + -0x68);
      unaff_x20 = *(undefined8 *)(puVar2 + -0x80);
      lVar10 = *(long *)(puVar2 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar7 = FUN_1072c4a64;
    func_0x0001072cf5e8();
  }
  uVar5 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 2);
  uVar8 = *(undefined8 *)(param_1 + 4);
  uVar9 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
  *(long *)(puVar2 + -0x78) = lVar10;
  *(undefined1 **)(puVar2 + -0x70) = puVar12;
  *(code **)(puVar2 + -0x68) = pcVar7;
  func_0x0001072ce4e8(uVar5,uVar6,uVar8,uVar9);
  if ((bool)uVar3) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c49b4; end: 1072c49cb;  */

void FUN_1072c49b4(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x19;
  long lVar8;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar9;
  code *unaff_x30;
  code *pcVar10;
  undefined1 auStack_60 [64];
  
  func_0x0001072cf5e8();
  if ((bool)in_ZR) {
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c4618();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c4a18;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)auStack_60;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar9 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x0001072ce1d0();
  lVar8 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c46cc();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar10 = FUN_1072c4a64;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x78) = lVar8;
      *(undefined1 **)((long)register0x00000008 + -0x70) = puVar9;
      *(code **)((long)register0x00000008 + -0x68) = FUN_1072c4a64;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar8 = *(long *)param_1; lVar8 != lVar1; lVar8 = lVar8 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar8 + 8);
      uVar6 = *(undefined8 *)(lVar8 + 0x10);
      uVar7 = *(undefined8 *)(lVar8 + 0x18);
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar9 = *(undefined1 **)((long)register0x00000008 + -0x70);
      pcVar10 = *(code **)((long)register0x00000008 + -0x68);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
      lVar8 = *(long *)((long)register0x00000008 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar10 = FUN_1072c4a64;
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 2);
  uVar6 = *(undefined8 *)(param_1 + 4);
  uVar7 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x78) = lVar8;
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar9;
  *(code **)((long)register0x00000008 + -0x68) = pcVar10;
  func_0x0001072ce4e8(uVar4,uVar5,uVar6,uVar7);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c49cc; end: 1072c4a17;  */

void FUN_1072c49cc(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  func_0x0001072ce1d0();
  func_0x0001072cef4c();
  FUN_1072c4618();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  func_0x0001072ce900();
  func_0x0001072ce1d0();
  lVar8 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c46cc();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar8 = *(long *)param_1; lVar8 != lVar1; lVar8 = lVar8 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar8 + 8);
      uVar6 = *(undefined8 *)(lVar8 + 0x10);
      uVar7 = *(undefined8 *)(lVar8 + 0x18);
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      goto FUN_1072c4ab0;
    }
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 2);
  uVar6 = *(undefined8 *)(param_1 + 4);
  uVar7 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  func_0x0001072ce4e8(uVar4,uVar5,uVar6,uVar7);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c4a18; end: 1072c4a63;  */

void FUN_1072c4a18(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  func_0x0001072ce1d0();
  lVar8 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c46cc();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar8 = *(long *)param_1; lVar8 != lVar1; lVar8 = lVar8 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar8 + 8);
      uVar6 = *(undefined8 *)(lVar8 + 0x10);
      uVar7 = *(undefined8 *)(lVar8 + 0x18);
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      goto FUN_1072c4ab0;
    }
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 2);
  uVar6 = *(undefined8 *)(param_1 + 4);
  uVar7 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  func_0x0001072ce4e8(uVar4,uVar5,uVar6,uVar7);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c4a64; end: 1072c4aaf;  */

void FUN_1072c4a64(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long lVar8;
  
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar8 = *(long *)param_1; lVar8 != lVar1; lVar8 = lVar8 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(unaff_x19 + 8);
      uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
      uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar5 = *(undefined8 *)(unaff_x19 + 0x20);
      goto FUN_1072c4ab0;
    }
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 2);
  uVar6 = *(undefined8 *)(param_1 + 4);
  uVar7 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  func_0x0001072ce4e8(uVar4,uVar5,uVar6,uVar7);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c4ab0; end: 1072c4adf;  */

void FUN_1072c4ab0(void)

{
  undefined1 in_CY;
  
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c4ae0; end: 1072c4b07;  */

void FUN_1072c4ae0(void)

{
  func_0x0001072ceb2c();
  FUN_1072c4b60();
  func_0x0001072d0174();
  return;
}



/* Entry: 1072c4b08; end: 1072c4b5f;  */

void FUN_1072c4b08(void)

{
  undefined8 in_stack_00000018;
  
  func_0x0001072d00ec();
  func_0x0001072ce118();
  func_0x0001072cecb8();
  func_0x0001072ce0fc();
  FUN_1072c03fc();
  func_0x0001072ce640(in_stack_00000018);
  FUN_1072c4b60();
  func_0x0001072cf1a4();
  func_0x0001072ce9c4();
  FUN_1072c03c8();
  func_0x0001072ceb54();
  func_0x0001072c06e0();
  return;
}



/* Entry: 1072c4b60; end: 1072c4bbb;  */

undefined8 FUN_1072c4b60(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  FUN_1072c4bbc(param_1,param_2,&uStack_30);
  func_0x0001072c0654(&uStack_30);
  return param_1;
}



/* Entry: 1072c4bbc; end: 1072c4c4b;  */

long FUN_1072c4bbc(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  FUN_1072c08b0();
  uVar2 = *param_3;
  *(undefined8 *)(lVar1 + 0x40) = param_3[1];
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  func_0x000107269bac(lVar1 + 0x48,param_4);
  *(undefined8 *)(param_1 + 0x90) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x88) = 0x4000000000000000;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xbff0000000000000;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  func_0x0001072c0890(param_1);
  return param_1;
}



/* Entry: 1072c4c4c; end: 1072c4ceb;  */

void FUN_1072c4c4c(undefined8 *param_1)

{
  undefined1 in_CY;
  
  func_0x0001072ce4e8(*param_1,param_1[1],param_1[2],param_1[3]);
  if ((bool)in_CY) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c4cec; end: 1072c4d33;  */

void FUN_1072c4cec(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long unaff_x19;
  long lVar2;
  
  func_0x0001072d0340();
  if ((bool)in_ZR) {
    lVar1 = param_2[1];
    for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
      func_0x0001072cf784();
    }
    return;
  }
  func_0x0001072ce4e8(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x20),
                      *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x18));
  if ((bool)in_CY) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c4d34; end: 1072c4d4b;  */

void FUN_1072c4d34(undefined8 *param_1)

{
  undefined1 in_CY;
  
  func_0x0001072cf5e8();
  func_0x0001072ce4e8(*param_1,param_1[1],param_1[2],param_1[3]);
  if ((bool)in_CY) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c4d4c; end: 1072c4d7b;  */

void FUN_1072c4d4c(void)

{
  undefined1 in_CY;
  
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c4da4();
  }
  else {
    FUN_1072c4d7c();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c4d7c; end: 1072c4da3;  */

void FUN_1072c4d7c(void)

{
  func_0x0001072ceb2c();
  FUN_1072c4dfc();
  func_0x0001072d0174();
  return;
}



/* Entry: 1072c4da4; end: 1072c4dfb;  */

void FUN_1072c4da4(void)

{
  undefined8 in_stack_00000018;
  
  func_0x0001072d00ec();
  func_0x0001072ce118();
  func_0x0001072cecb8();
  func_0x0001072ce0fc();
  FUN_1072c03fc();
  func_0x0001072ce640(in_stack_00000018);
  FUN_1072c4dfc();
  func_0x0001072cf1a4();
  func_0x0001072ce9c4();
  FUN_1072c03c8();
  func_0x0001072ceb54();
  func_0x0001072c06e0();
  return;
}



/* Entry: 1072c4dfc; end: 1072c4e9f;  */

void FUN_1072c4dfc(void)

{
  undefined1 in_ZR;
  int extraout_w10;
  undefined8 *unaff_x21;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [64];
  
  func_0x0001072cebd4();
  func_0x0001072ce1e4();
  FUN_1072c4ea0(auStack_70);
  uStack_78 = unaff_x21[1];
  uStack_80 = *unaff_x21;
  if (unaff_x21[1] != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  FUN_1072c4bbc();
  func_0x0001072c0654(&uStack_80);
  FUN_1072c308c(auStack_70);
  func_0x0001072ce098();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001072ce928();
    func_0x0001072c0654();
    FUN_1072c308c(auStack_70);
    func_0x0001072ce900();
    func_0x0001072cf3dc();
    FUN_1072c0918();
    return;
  }
  return;
}



/* Entry: 1072c4ea0; end: 1072c4ebf;  */

void FUN_1072c4ea0(void)

{
  func_0x0001072cf3dc();
  FUN_1072c0918();
  return;
}



/* Entry: 1072c4ec0; end: 1072c4ec7;  */

void FUN_1072c4ec0(undefined8 *param_1)

{
  undefined1 in_CY;
  
  func_0x0001072ce4e8(*param_1,param_1[1],param_1[2],param_1[3]);
  if ((bool)in_CY) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c4ec8; end: 1072c4ee3;  */

void FUN_1072c4ec8(void)

{
  func_0x0001072cf584();
  FUN_1072c59d8();
  return;
}



/* Entry: 1072c4ee4; end: 1072c4f2f;  */

void FUN_1072c4ee4(undefined4 *param_1,int *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined1 uVar3;
  bool bVar4;
  long *plVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  double *unaff_x20;
  long unaff_x21;
  long lVar7;
  long unaff_x23;
  undefined8 uVar8;
  undefined1 auStack_98 [32];
  long lStack_78;
  long alStack_70 [6];
  
  if (*param_2 == 7) {
    *param_1 = 7;
    return;
  }
  if (*param_2 == 6) {
    *param_1 = 6;
    uVar8 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = uVar8;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    return;
  }
  uVar3 = *param_2 == 5;
  if ((bool)uVar3) {
    func_0x0001003ac70c(param_3,param_2 + 2);
    FUN_1072c4fa0();
    func_0x0001072cf26c();
    if ((bool)uVar3) {
      func_0x0001072cf7fc();
    }
    else {
      func_0x0001072ce600();
    }
    func_0x0001072cefc4();
    return;
  }
  if (*param_2 == 4) {
    plVar5 = (long *)(param_2 + 2);
    func_0x0001072ce8e4(param_3);
    lVar1 = plVar5[1];
    for (lVar7 = *plVar5; uVar3 = lVar7 == lVar1, !(bool)uVar3; lVar7 = lVar7 + 0x20) {
      func_0x0001072cea6c(alStack_70);
      FUN_1072c52f0();
      func_0x0001072d013c();
      if (!(bool)uVar3) {
        func_0x0001072cf444();
      }
      func_0x0001072cebe0();
    }
    func_0x0001072ceddc();
    return;
  }
  if (*param_2 == 3) {
    plVar5 = (long *)(param_2 + 2);
    func_0x0001072ceb38(param_3);
    func_0x0001072cf014();
    lVar1 = plVar5[1];
    for (lVar7 = *plVar5; lVar7 != lVar1; lVar7 = lVar7 + 0x18) {
      if ((*unaff_x20 <= *(double *)(lVar7 + 8)) && (*(double *)(lVar7 + 8) <= unaff_x20[1])) {
        func_0x0001072cfd6c();
      }
    }
    *unaff_x19 = 3;
    func_0x0001072ce25c();
    func_0x0001072c0c9c();
  }
  else {
    if (*param_2 != 2) {
      piVar6 = param_2 + 2;
      if (*param_2 == 1) {
        func_0x0001072ceb38();
        func_0x0001072cf7a4();
        plVar2 = *(long **)(piVar6 + 2);
        for (plVar5 = *(long **)piVar6; plVar5 != plVar2; plVar5 = plVar5 + 3) {
          lStack_78 = 0;
          alStack_70[0] = 0;
          alStack_70[1] = 0;
          lVar1 = plVar5[1];
          for (lVar7 = *plVar5; uVar3 = lVar7 == lVar1, !(bool)uVar3; lVar7 = lVar7 + 0x20) {
            func_0x0001072cea6c(auStack_98);
            FUN_1072c52f0();
            func_0x0001072d01bc();
            if (!(bool)uVar3) {
              func_0x0001072cfed0();
            }
            func_0x0001072c0c9c(auStack_98);
          }
          if (lStack_78 != alStack_70[0]) {
            func_0x0001072cfdf8();
          }
          func_0x0001072cf884();
        }
        func_0x0001072cee04();
        return;
      }
      func_0x0001072d00ec(param_3);
      func_0x0001072ceb38();
      func_0x0001072d02f8();
      for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0x38) {
        FUN_1072c56a0(unaff_x21);
      }
      func_0x0001072ceeb4();
      return;
    }
    plVar5 = (long *)(param_2 + 2);
    func_0x0001072ceb38(param_3);
    func_0x0001003ac70c();
    lVar1 = plVar5[1];
    for (lVar7 = *plVar5; bVar4 = lVar7 == lVar1, !bVar4; lVar7 = lVar7 + 0x30) {
      func_0x0001072cea6c();
      FUN_1072c4fa0();
    }
    func_0x0001072cf26c();
    if (bVar4) {
      func_0x0001072cf7fc();
    }
    else {
      func_0x0001072ce600();
    }
    func_0x0001072cefc4();
  }
  return;
}



/* Entry: 1072c4f30; end: 1072c4f7b;  */

void FUN_1072c4f30(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 auStack_38 [24];
  
  func_0x0001003ac70c();
  FUN_1072c4fa0(param_1,param_2,auStack_38);
  func_0x0001072cf26c();
  if ((bool)in_ZR) {
    func_0x0001072cf7fc();
  }
  else {
    func_0x0001072ce600();
  }
  func_0x0001072cefc4();
  return;
}



/* Entry: 1072c4f7c; end: 1072c4f9f;  */

void FUN_1072c4f7c(int *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 uVar3;
  bool bVar4;
  long *plVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  double *unaff_x20;
  long unaff_x21;
  long lVar7;
  long unaff_x23;
  undefined1 auStack_98 [32];
  long lStack_78;
  long alStack_70 [6];
  
  if (*param_1 == 4) {
    plVar5 = (long *)(param_1 + 2);
    func_0x0001072ce8e4(param_2);
    lVar1 = plVar5[1];
    for (lVar7 = *plVar5; uVar3 = lVar7 == lVar1, !(bool)uVar3; lVar7 = lVar7 + 0x20) {
      func_0x0001072cea6c(alStack_70);
      FUN_1072c52f0();
      func_0x0001072d013c();
      if (!(bool)uVar3) {
        func_0x0001072cf444();
      }
      func_0x0001072cebe0();
    }
    func_0x0001072ceddc();
    return;
  }
  if (*param_1 == 3) {
    plVar5 = (long *)(param_1 + 2);
    func_0x0001072ceb38(param_2);
    func_0x0001072cf014();
    lVar1 = plVar5[1];
    for (lVar7 = *plVar5; lVar7 != lVar1; lVar7 = lVar7 + 0x18) {
      if ((*unaff_x20 <= *(double *)(lVar7 + 8)) && (*(double *)(lVar7 + 8) <= unaff_x20[1])) {
        func_0x0001072cfd6c();
      }
    }
    *unaff_x19 = 3;
    func_0x0001072ce25c();
    func_0x0001072c0c9c();
  }
  else {
    if (*param_1 != 2) {
      piVar6 = param_1 + 2;
      if (*param_1 == 1) {
        func_0x0001072ceb38();
        func_0x0001072cf7a4();
        plVar2 = *(long **)(piVar6 + 2);
        for (plVar5 = *(long **)piVar6; plVar5 != plVar2; plVar5 = plVar5 + 3) {
          lStack_78 = 0;
          alStack_70[0] = 0;
          alStack_70[1] = 0;
          lVar1 = plVar5[1];
          for (lVar7 = *plVar5; uVar3 = lVar7 == lVar1, !(bool)uVar3; lVar7 = lVar7 + 0x20) {
            func_0x0001072cea6c(auStack_98);
            FUN_1072c52f0();
            func_0x0001072d01bc();
            if (!(bool)uVar3) {
              func_0x0001072cfed0();
            }
            func_0x0001072c0c9c(auStack_98);
          }
          if (lStack_78 != alStack_70[0]) {
            func_0x0001072cfdf8();
          }
          func_0x0001072cf884();
        }
        func_0x0001072cee04();
        return;
      }
      func_0x0001072d00ec(param_2);
      func_0x0001072ceb38();
      func_0x0001072d02f8();
      for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0x38) {
        FUN_1072c56a0(unaff_x21);
      }
      func_0x0001072ceeb4();
      return;
    }
    plVar5 = (long *)(param_1 + 2);
    func_0x0001072ceb38(param_2);
    func_0x0001003ac70c();
    lVar1 = plVar5[1];
    for (lVar7 = *plVar5; bVar4 = lVar7 == lVar1, !bVar4; lVar7 = lVar7 + 0x30) {
      func_0x0001072cea6c();
      FUN_1072c4fa0();
    }
    func_0x0001072cf26c();
    if (bVar4) {
      func_0x0001072cf7fc();
    }
    else {
      func_0x0001072ce600();
    }
    func_0x0001072cefc4();
  }
  return;
}



/* Entry: 1072c4fa0; end: 1072c5263;  */

void FUN_1072c4fa0(long param_1,long param_2)

{
  double *pdVar1;
  undefined1 uVar2;
  long extraout_x8;
  ulong uVar3;
  ulong extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long *unaff_x20;
  double *unaff_x21;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  
  func_0x0001072ce7a0();
  uVar3 = 0;
  if (extraout_x9 != 0) {
    uVar3 = extraout_x8 / extraout_x9;
  }
  if (1 < uVar3) {
    func_0x0001003ac100();
    uStack_90 = 0;
    dStack_78 = 0.0;
    dStack_80 = 0.0;
    lStack_98 = 0;
    lStack_a0 = 0;
    uStack_88 = *(undefined8 *)(param_2 + 0x18);
    dVar10 = *(double *)(param_2 + 0x20);
    uVar3 = (ulong)*(byte *)(param_1 + 0x10);
    if (*(byte *)(param_1 + 0x10) == 1) {
      dStack_78 = (double)unaff_x20[5];
      dStack_80 = dVar10;
    }
    lVar4 = 0;
    lVar5 = 2 - extraout_x9_00;
    dVar8 = 0.0;
    NEON_fmov(0x3ff0000000000000,8);
    for (; lVar5 != 1; lVar5 = lVar5 + 1) {
      pdVar1 = (double *)(*unaff_x20 + lVar4);
      dVar12 = pdVar1[1];
      dVar11 = pdVar1[4];
      dVar9 = dVar11 - dVar12;
      if ((uVar3 & 1) != 0) {
        dVar8 = (double)_hypot(pdVar1[3] - *pdVar1,dVar9);
      }
      dVar6 = *unaff_x21;
      dVar7 = unaff_x21[1];
      if (dVar6 <= dVar12) {
        if (dVar12 <= dVar7) {
          func_0x0001072cf960(&lStack_a0);
          uVar2 = dVar11 == *unaff_x21;
          if (*unaff_x21 <= dVar11) {
            uVar2 = dVar11 == unaff_x21[1];
            if (dVar11 <= unaff_x21[1]) goto LAB_1072c51d4;
            func_0x0001072ce3bc();
            func_0x0001072ce7b0();
            func_0x0001072ced98();
            if ((bool)uVar2) {
              func_0x0001072d01f8();
            }
            func_0x0001072ce9f8();
          }
          else {
            func_0x0001072ce3bc();
            func_0x0001072ce7b0();
            func_0x0001072ced98();
            if ((bool)uVar2) {
              func_0x0001072d01f8();
            }
            func_0x0001072ce9f8();
          }
        }
        else {
          uVar2 = dVar11 == dVar6;
          if (dVar6 <= dVar11) {
            uVar2 = dVar11 == dVar7;
            if (dVar11 < dVar7) {
              func_0x0001072cf23c();
              func_0x0001072ce7b0();
              goto LAB_1072c5160;
            }
            goto LAB_1072c51e4;
          }
          func_0x0001072cf23c();
          func_0x0001072ce7b0();
          func_0x0001072ced98();
          if ((bool)uVar2) {
            dStack_80 = dVar10 + dVar9 * dVar8;
          }
          func_0x0001072ce3bc(*unaff_x21);
          func_0x0001072ce7b0();
          func_0x0001072ced98();
          if ((bool)uVar2) {
            func_0x0001072d01f8();
          }
          func_0x0001072ce9f8();
        }
LAB_1072c5198:
        uStack_c0 = 0;
        lStack_a8 = 0;
        lStack_b0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        lStack_b8 = unaff_x20[3];
        func_0x0001072ced98();
        if ((bool)uVar2) {
          lStack_b0 = unaff_x20[4];
          lStack_a8 = unaff_x20[5];
        }
        FUN_1072c4184(&lStack_a0,&uStack_d0);
        func_0x0001072c0c9c(&uStack_d0);
      }
      else {
        uVar2 = dVar11 == dVar7;
        if (dVar7 < dVar11) {
          func_0x0001072ce530(dVar6,pdVar1[3] - *pdVar1);
          func_0x0001072ce7b0();
          func_0x0001072ced98();
          if ((bool)uVar2) {
            dStack_80 = dVar10 + ((dVar6 - dVar12) / dVar9) * dVar8;
          }
          func_0x0001072ce3bc(unaff_x21[1]);
          func_0x0001072ce7b0();
          func_0x0001072ced98();
          if ((bool)uVar2) {
            func_0x0001072d01f8();
          }
          func_0x0001072ce9f8();
          goto LAB_1072c5198;
        }
        uVar2 = dVar11 == dVar6;
        if (dVar6 < dVar11) {
          dVar9 = (dVar6 - dVar12) / dVar9;
          func_0x0001072ce530(dVar6,pdVar1[3] - *pdVar1);
          func_0x0001072ce7b0();
LAB_1072c5160:
          func_0x0001072ced98();
          if ((bool)uVar2) {
            dStack_80 = dVar10 + dVar9 * dVar8;
          }
LAB_1072c51d4:
          if (lVar5 == 0) {
            func_0x0001072c41b4(&lStack_a0,pdVar1 + 3);
          }
        }
      }
LAB_1072c51e4:
      func_0x0001072d0210();
      lVar4 = lVar4 + 0x18;
      uVar3 = extraout_x8_00;
    }
    if (lStack_a0 != lStack_98) {
      dStack_78 = dVar10;
      func_0x0001072ce9f8();
    }
    func_0x0001072c0c9c(&lStack_a0);
  }
  return;
}



/* Entry: 1072c5264; end: 1072c52cb;  */

void FUN_1072c5264(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 auStack_70 [64];
  
  func_0x0001072ce8e4();
  lVar1 = param_2[1];
  for (lVar3 = *param_2; uVar2 = lVar3 == lVar1, !(bool)uVar2; lVar3 = lVar3 + 0x20) {
    func_0x0001072cea6c(auStack_70);
    FUN_1072c52f0();
    func_0x0001072d013c();
    if (!(bool)uVar2) {
      func_0x0001072cf444();
    }
    func_0x0001072cebe0();
  }
  func_0x0001072ceddc();
  return;
}



/* Entry: 1072c52cc; end: 1072c52ef;  */

void FUN_1072c52cc(int *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  undefined1 uVar4;
  long *plVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  double *unaff_x20;
  long unaff_x21;
  long lVar7;
  long unaff_x23;
  undefined1 auStack_98 [32];
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  if (*param_1 == 3) {
    plVar5 = (long *)(param_1 + 2);
    func_0x0001072ceb38(param_2);
    func_0x0001072cf014();
    lVar1 = plVar5[1];
    for (lVar7 = *plVar5; lVar7 != lVar1; lVar7 = lVar7 + 0x18) {
      if ((*unaff_x20 <= *(double *)(lVar7 + 8)) && (*(double *)(lVar7 + 8) <= unaff_x20[1])) {
        func_0x0001072cfd6c();
      }
    }
    *unaff_x19 = 3;
    func_0x0001072ce25c();
    func_0x0001072c0c9c();
  }
  else {
    if (*param_1 != 2) {
      piVar6 = param_1 + 2;
      if (*param_1 == 1) {
        func_0x0001072ceb38();
        func_0x0001072cf7a4();
        plVar2 = *(long **)(piVar6 + 2);
        for (plVar5 = *(long **)piVar6; plVar5 != plVar2; plVar5 = plVar5 + 3) {
          lStack_78 = 0;
          lStack_70 = 0;
          uStack_68 = 0;
          lVar1 = plVar5[1];
          for (lVar7 = *plVar5; uVar4 = lVar7 == lVar1, !(bool)uVar4; lVar7 = lVar7 + 0x20) {
            func_0x0001072cea6c(auStack_98);
            FUN_1072c52f0();
            func_0x0001072d01bc();
            if (!(bool)uVar4) {
              func_0x0001072cfed0();
            }
            func_0x0001072c0c9c(auStack_98);
          }
          if (lStack_78 != lStack_70) {
            func_0x0001072cfdf8();
          }
          func_0x0001072cf884();
        }
        func_0x0001072cee04();
        return;
      }
      func_0x0001072d00ec(param_2);
      func_0x0001072ceb38();
      func_0x0001072d02f8();
      for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0x38) {
        FUN_1072c56a0(unaff_x21);
      }
      func_0x0001072ceeb4();
      return;
    }
    plVar5 = (long *)(param_1 + 2);
    func_0x0001072ceb38(param_2);
    func_0x0001003ac70c();
    lVar1 = plVar5[1];
    for (lVar7 = *plVar5; bVar3 = lVar7 == lVar1, !bVar3; lVar7 = lVar7 + 0x30) {
      func_0x0001072cea6c();
      FUN_1072c4fa0();
    }
    func_0x0001072cf26c();
    if (bVar3) {
      func_0x0001072cf7fc();
    }
    else {
      func_0x0001072ce600();
    }
    func_0x0001072cefc4();
  }
  return;
}



/* Entry: 1072c52f0; end: 1072c546b;  */

void FUN_1072c52f0(long *param_1,double *param_2,long *param_3)

{
  double *pdVar1;
  double *pdVar2;
  bool bVar3;
  undefined1 in_CY;
  long extraout_x8;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  func_0x0001072ce7a0();
  func_0x0001072cf934();
  if ((bool)in_CY) {
    lVar4 = 0;
    lVar5 = 2 - extraout_x8;
    NEON_fmov(0x3ff0000000000000,8);
    for (; lVar5 != 1; lVar5 = lVar5 + 1) {
      dVar6 = *(double *)(*param_3 + lVar4 + 8);
      dVar7 = *(double *)(*param_3 + lVar4 + 0x20);
      if (*param_2 <= dVar6) {
        if (dVar6 <= param_2[1]) {
          func_0x0001072cf960(param_1);
          if (*param_2 <= dVar7) {
            if (param_2[1] < dVar7) {
              func_0x0001072ce38c();
              func_0x0001072ce890();
            }
          }
          else {
            func_0x0001072ce38c();
            func_0x0001072ce890();
          }
        }
        else if (dVar7 < param_2[1]) {
          func_0x0001072cefe4();
          func_0x0001072ce890();
          if (*param_2 <= dVar7) goto LAB_1072c53d8;
          func_0x0001072ce38c();
          func_0x0001072ce890();
        }
      }
      else if (*param_2 < dVar7) {
        func_0x0001072cefe4();
        func_0x0001072ce890();
        if (dVar7 <= param_2[1]) {
LAB_1072c53d8:
          if (lVar5 == 0) {
            func_0x0001072cfe20();
          }
        }
        else {
          func_0x0001072ce38c();
          func_0x0001072ce890();
        }
      }
      lVar4 = lVar4 + 0x18;
    }
    pdVar1 = (double *)*param_1;
    pdVar2 = (double *)param_1[1];
    if (pdVar1 != pdVar2) {
      bVar3 = false;
      if ((*pdVar1 == pdVar2[-3]) && (bVar3 = false, !NAN(pdVar1[1]) && !NAN(pdVar2[-2]))) {
        bVar3 = pdVar1[1] == pdVar2[-2];
      }
      if (!bVar3) {
        func_0x0001072cfe20();
      }
    }
  }
  return;
}



/* Entry: 1072c546c; end: 1072c54db;  */

void FUN_1072c546c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined4 *unaff_x19;
  double *unaff_x20;
  long lVar2;
  
  func_0x0001072ceb38();
  func_0x0001072cf014();
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    if ((*unaff_x20 <= *(double *)(lVar2 + 8)) && (*(double *)(lVar2 + 8) <= unaff_x20[1])) {
      func_0x0001072cfd6c();
    }
  }
  *unaff_x19 = 3;
  func_0x0001072ce25c();
  func_0x0001072c0c9c();
  return;
}



/* Entry: 1072c54dc; end: 1072c54ff;  */

void FUN_1072c54dc(int *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  undefined1 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x21;
  long lVar7;
  long unaff_x23;
  undefined1 auStack_98 [32];
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  if (*param_1 == 2) {
    plVar5 = (long *)(param_1 + 2);
    func_0x0001072ceb38(param_2);
    func_0x0001003ac70c();
    lVar1 = plVar5[1];
    for (lVar7 = *plVar5; bVar3 = lVar7 == lVar1, !bVar3; lVar7 = lVar7 + 0x30) {
      func_0x0001072cea6c();
      FUN_1072c4fa0();
    }
    func_0x0001072cf26c();
    if (bVar3) {
      func_0x0001072cf7fc();
    }
    else {
      func_0x0001072ce600();
    }
    func_0x0001072cefc4();
    return;
  }
  piVar6 = param_1 + 2;
  if (*param_1 == 1) {
    func_0x0001072ceb38();
    func_0x0001072cf7a4();
    plVar2 = *(long **)(piVar6 + 2);
    for (plVar5 = *(long **)piVar6; plVar5 != plVar2; plVar5 = plVar5 + 3) {
      lStack_78 = 0;
      lStack_70 = 0;
      uStack_68 = 0;
      lVar1 = plVar5[1];
      for (lVar7 = *plVar5; uVar4 = lVar7 == lVar1, !(bool)uVar4; lVar7 = lVar7 + 0x20) {
        func_0x0001072cea6c(auStack_98);
        FUN_1072c52f0();
        func_0x0001072d01bc();
        if (!(bool)uVar4) {
          func_0x0001072cfed0();
        }
        func_0x0001072c0c9c(auStack_98);
      }
      if (lStack_78 != lStack_70) {
        func_0x0001072cfdf8();
      }
      func_0x0001072cf884();
    }
    func_0x0001072cee04();
    return;
  }
  func_0x0001072d00ec(param_2);
  func_0x0001072ceb38();
  func_0x0001072d02f8();
  for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0x38) {
    FUN_1072c56a0(unaff_x21);
  }
  func_0x0001072ceeb4();
  return;
}



/* Entry: 1072c5500; end: 1072c556b;  */

void FUN_1072c5500(undefined8 param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  
  func_0x0001072ceb38();
  func_0x0001003ac70c();
  lVar1 = param_2[1];
  for (lVar3 = *param_2; bVar2 = lVar3 == lVar1, !bVar2; lVar3 = lVar3 + 0x30) {
    func_0x0001072cea6c();
    FUN_1072c4fa0();
  }
  func_0x0001072cf26c();
  if (bVar2) {
    func_0x0001072cf7fc();
  }
  else {
    func_0x0001072ce600();
  }
  func_0x0001072cefc4();
  return;
}



/* Entry: 1072c556c; end: 1072c558b;  */

void FUN_1072c556c(int *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  int *piVar4;
  long unaff_x21;
  long lVar5;
  long *plVar6;
  long unaff_x23;
  undefined1 auStack_98 [32];
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  piVar4 = param_1 + 2;
  if (*param_1 == 1) {
    func_0x0001072ceb38();
    func_0x0001072cf7a4();
    plVar1 = *(long **)(piVar4 + 2);
    for (plVar6 = *(long **)piVar4; plVar6 != plVar1; plVar6 = plVar6 + 3) {
      lStack_78 = 0;
      lStack_70 = 0;
      uStack_68 = 0;
      lVar2 = plVar6[1];
      for (lVar5 = *plVar6; uVar3 = lVar5 == lVar2, !(bool)uVar3; lVar5 = lVar5 + 0x20) {
        func_0x0001072cea6c(auStack_98);
        FUN_1072c52f0();
        func_0x0001072d01bc();
        if (!(bool)uVar3) {
          func_0x0001072cfed0();
        }
        func_0x0001072c0c9c(auStack_98);
      }
      if (lStack_78 != lStack_70) {
        func_0x0001072cfdf8();
      }
      func_0x0001072cf884();
    }
    func_0x0001072cee04();
    return;
  }
  func_0x0001072d00ec(param_2);
  func_0x0001072ceb38();
  func_0x0001072d02f8();
  for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0x38) {
    FUN_1072c56a0(unaff_x21);
  }
  func_0x0001072ceeb4();
  return;
}



/* Entry: 1072c558c; end: 1072c563f;  */

void FUN_1072c558c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_98 [32];
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x0001072ceb38();
  func_0x0001072cf7a4();
  plVar1 = (long *)param_2[1];
  for (plVar5 = (long *)*param_2; plVar5 != plVar1; plVar5 = plVar5 + 3) {
    lStack_78 = 0;
    lStack_70 = 0;
    uStack_68 = 0;
    lVar2 = plVar5[1];
    for (lVar4 = *plVar5; uVar3 = lVar4 == lVar2, !(bool)uVar3; lVar4 = lVar4 + 0x20) {
      func_0x0001072cea6c(auStack_98);
      FUN_1072c52f0();
      func_0x0001072d01bc();
      if (!(bool)uVar3) {
        func_0x0001072cfed0();
      }
      func_0x0001072c0c9c(auStack_98);
    }
    if (lStack_78 != lStack_70) {
      func_0x0001072cfdf8();
    }
    func_0x0001072cf884();
  }
  func_0x0001072cee04();
  return;
}



/* Entry: 1072c5640; end: 1072c569f;  */

void FUN_1072c5640(void)

{
  long unaff_x21;
  long unaff_x23;
  
  func_0x0001072d00ec();
  func_0x0001072ceb38();
  func_0x0001072d02f8();
  for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0x38) {
    FUN_1072c56a0(unaff_x21);
  }
  func_0x0001072ceeb4();
  return;
}



/* Entry: 1072c56a0; end: 1072c56c3;  */

void FUN_1072c56a0(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar10;
  undefined1 *unaff_x29;
  code *unaff_x30;
  code *pcVar11;
  undefined4 auStack_60 [16];
  
  uVar2 = *param_1 == 7;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072ce1d0();
    param_1 = *(uint **)(param_2 + 2);
    auStack_60[0] = 7;
    func_0x0001072cf658();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c5708;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    param_2 = puVar6;
  }
  uVar2 = *param_1 == 6;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    func_0x0001072cf538();
    func_0x0001072cf658();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c5768;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar6;
  }
  uVar2 = *param_1 == 5;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c4f30();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c57d8;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar6;
  }
  uVar2 = *param_1 == 4;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5264();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c5848;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar6;
  }
  uVar2 = *param_1 == 3;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c546c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c58b8;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar6;
  }
  uVar2 = *param_1 == 2;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5500();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c5928;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar6;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar2) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c558c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c598c;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x0001072ce1d0();
  lVar9 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c5640();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar11 = FUN_1072c59d8;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x78) = lVar9;
      *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
      *(code **)((long)register0x00000008 + -0x68) = FUN_1072c59d8;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar9 = *(long *)param_1; lVar9 != lVar1; lVar9 = lVar9 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar9 + 8);
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      uVar8 = *(undefined8 *)(lVar9 + 0x18);
      uVar5 = *(undefined8 *)(lVar9 + 0x20);
      puVar10 = *(undefined1 **)((long)register0x00000008 + -0x70);
      pcVar11 = *(code **)((long)register0x00000008 + -0x68);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
      lVar9 = *(long *)((long)register0x00000008 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar11 = FUN_1072c59d8;
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 2);
  uVar7 = *(undefined8 *)(param_1 + 4);
  uVar8 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x78) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
  *(code **)((long)register0x00000008 + -0x68) = pcVar11;
  func_0x0001072ce4e8(uVar4,uVar5,uVar7,uVar8);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c56c4; end: 1072c5707;  */

void FUN_1072c56c4(long param_1,uint *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar12;
  undefined8 ****ppppuVar13;
  code *pcVar14;
  undefined1 auStack_c0 [64];
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  undefined4 auStack_60 [16];
  
  puVar2 = auStack_60;
  ppppuVar13 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x0001072ce1d0();
  puVar6 = *(uint **)(param_1 + 8);
  auStack_60[0] = 7;
  func_0x0001072cf658();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar14 = FUN_1072c5708;
  func_0x0001072ce900();
  uVar3 = *puVar6 == 6;
  if ((bool)uVar3) {
    puVar8 = puVar6 + 2;
    puVar2 = (undefined4 *)auStack_c0;
    pcStack_68 = FUN_1072c5708;
    pppuStack_70 = ppppuVar13;
    func_0x0001072ce1d0();
    func_0x0001072cf538();
    func_0x0001072cf658();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar14 = FUN_1072c5768;
    func_0x0001072ce900();
    puVar6 = param_2;
    param_2 = puVar8;
    ppppuVar13 = &pppuStack_70;
  }
  uVar3 = *puVar6 == 5;
  if ((bool)uVar3) {
    puVar8 = puVar6 + 2;
    *(undefined8 *)((long)puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar13;
    *(code **)((long)puVar2 + -8) = pcVar14;
    ppppuVar13 = (undefined8 ****)((long)puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c4f30();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar14 = FUN_1072c57d8;
    func_0x0001072ce900();
    puVar2 = (undefined4 *)((long)puVar2 + -0x60);
    puVar6 = param_2;
    param_2 = puVar8;
  }
  uVar3 = *puVar6 == 4;
  if ((bool)uVar3) {
    puVar8 = puVar6 + 2;
    *(undefined8 *)((long)puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar13;
    *(code **)((long)puVar2 + -8) = pcVar14;
    ppppuVar13 = (undefined8 ****)((long)puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5264();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar14 = FUN_1072c5848;
    func_0x0001072ce900();
    puVar2 = (undefined4 *)((long)puVar2 + -0x60);
    puVar6 = param_2;
    param_2 = puVar8;
  }
  uVar3 = *puVar6 == 3;
  if ((bool)uVar3) {
    puVar8 = puVar6 + 2;
    *(undefined8 *)((long)puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar13;
    *(code **)((long)puVar2 + -8) = pcVar14;
    ppppuVar13 = (undefined8 ****)((long)puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c546c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar14 = FUN_1072c58b8;
    func_0x0001072ce900();
    puVar2 = (undefined4 *)((long)puVar2 + -0x60);
    puVar6 = param_2;
    param_2 = puVar8;
  }
  uVar3 = *puVar6 == 2;
  if ((bool)uVar3) {
    puVar8 = puVar6 + 2;
    *(undefined8 *)((long)puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar13;
    *(code **)((long)puVar2 + -8) = pcVar14;
    ppppuVar13 = (undefined8 ****)((long)puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5500();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar14 = FUN_1072c5928;
    func_0x0001072ce900();
    puVar2 = (undefined4 *)((long)puVar2 + -0x60);
    puVar6 = param_2;
    param_2 = puVar8;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar3) {
    *(undefined8 *)((long)puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar13;
    *(code **)((long)puVar2 + -8) = pcVar14;
    ppppuVar13 = (undefined8 ****)((long)puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(puVar6 + 2);
    func_0x0001072cef4c();
    FUN_1072c558c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar14 = FUN_1072c598c;
    func_0x0001072ce900();
    puVar2 = (undefined4 *)((long)puVar2 + -0x60);
  }
  *(undefined8 *)((long)puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)((long)puVar2 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar13;
  *(code **)((long)puVar2 + -8) = pcVar14;
  puVar12 = (undefined1 *)((long)puVar2 + -0x10);
  func_0x0001072ce1d0();
  lVar11 = *(long *)(puVar6 + 2);
  func_0x0001072cef4c();
  FUN_1072c5640();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar14 = FUN_1072c59d8;
  func_0x0001072ce900();
  if (*puVar6 == 7) {
    uVar3 = 1;
    puVar6 = param_2;
  }
  else if (*puVar6 == 6) {
    uVar3 = 1;
    puVar6 = param_2;
  }
  else if (*puVar6 == 5) {
    uVar3 = 1;
    puVar6 = param_2;
  }
  else if (*puVar6 == 4) {
    uVar3 = 1;
    puVar6 = param_2;
  }
  else if (*puVar6 == 3) {
    uVar3 = 1;
    puVar6 = param_2;
  }
  else {
    uVar3 = 1 < *puVar6;
    bVar4 = *puVar6 == 2;
    if (bVar4) {
      puVar6 = puVar6 + 2;
      *(undefined8 *)((long)puVar2 + -0x90) = unaff_x22;
      *(undefined8 *)((long)puVar2 + -0x88) = unaff_x21;
      *(undefined8 *)((long)puVar2 + -0x80) = unaff_x20;
      *(long *)((long)puVar2 + -0x78) = lVar11;
      *(undefined1 **)((long)puVar2 + -0x70) = puVar12;
      *(code **)((long)puVar2 + -0x68) = FUN_1072c59d8;
      func_0x0001072d0340(param_2 + 8);
      if (bVar4) {
        lVar1 = *(long *)(puVar6 + 2);
        for (lVar11 = *(long *)puVar6; lVar11 != lVar1; lVar11 = lVar11 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar5 = *(undefined8 *)(lVar11 + 8);
      uVar9 = *(undefined8 *)(lVar11 + 0x10);
      uVar10 = *(undefined8 *)(lVar11 + 0x18);
      uVar7 = *(undefined8 *)(lVar11 + 0x20);
      puVar12 = *(undefined1 **)((long)puVar2 + -0x70);
      pcVar14 = *(code **)((long)puVar2 + -0x68);
      unaff_x20 = *(undefined8 *)((long)puVar2 + -0x80);
      lVar11 = *(long *)((long)puVar2 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar14 = FUN_1072c59d8;
    func_0x0001072cf5e8();
  }
  uVar5 = *(undefined8 *)puVar6;
  uVar7 = *(undefined8 *)(puVar6 + 2);
  uVar9 = *(undefined8 *)(puVar6 + 4);
  uVar10 = *(undefined8 *)(puVar6 + 6);
FUN_1072c4ab0:
  *(undefined8 *)((long)puVar2 + -0x80) = unaff_x20;
  *(long *)((long)puVar2 + -0x78) = lVar11;
  *(undefined1 **)((long)puVar2 + -0x70) = puVar12;
  *(code **)((long)puVar2 + -0x68) = pcVar14;
  func_0x0001072ce4e8(uVar5,uVar7,uVar9,uVar10);
  if ((bool)uVar3) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c5708; end: 1072c572b;  */

void FUN_1072c5708(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar10;
  undefined1 *unaff_x29;
  code *unaff_x30;
  code *pcVar11;
  undefined1 auStack_60 [64];
  
  uVar2 = *param_1 == 6;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072ce1d0();
    func_0x0001072cf538();
    func_0x0001072cf658();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c5768;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    param_1 = param_2;
    param_2 = puVar6;
  }
  uVar2 = *param_1 == 5;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c4f30();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c57d8;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar6;
  }
  uVar2 = *param_1 == 4;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5264();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c5848;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar6;
  }
  uVar2 = *param_1 == 3;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c546c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c58b8;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar6;
  }
  uVar2 = *param_1 == 2;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5500();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c5928;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar6;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar2) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c558c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c598c;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x0001072ce1d0();
  lVar9 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c5640();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar11 = FUN_1072c59d8;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x78) = lVar9;
      *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
      *(code **)((long)register0x00000008 + -0x68) = FUN_1072c59d8;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar9 = *(long *)param_1; lVar9 != lVar1; lVar9 = lVar9 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar9 + 8);
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      uVar8 = *(undefined8 *)(lVar9 + 0x18);
      uVar5 = *(undefined8 *)(lVar9 + 0x20);
      puVar10 = *(undefined1 **)((long)register0x00000008 + -0x70);
      pcVar11 = *(code **)((long)register0x00000008 + -0x68);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
      lVar9 = *(long *)((long)register0x00000008 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar11 = FUN_1072c59d8;
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 2);
  uVar7 = *(undefined8 *)(param_1 + 4);
  uVar8 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x78) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
  *(code **)((long)register0x00000008 + -0x68) = pcVar11;
  func_0x0001072ce4e8(uVar4,uVar5,uVar7,uVar8);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c572c; end: 1072c5767;  */

void FUN_1072c572c(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar11;
  undefined8 ****ppppuVar12;
  code *pcVar13;
  undefined1 auStack_c0 [64];
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [64];
  
  puVar2 = auStack_60;
  ppppuVar12 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x0001072ce1d0();
  func_0x0001072cf538();
  func_0x0001072cf658();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar13 = FUN_1072c5768;
  func_0x0001072ce900();
  uVar3 = *param_1 == 5;
  if ((bool)uVar3) {
    puVar7 = param_1 + 2;
    puVar2 = auStack_c0;
    pcStack_68 = FUN_1072c5768;
    pppuStack_70 = ppppuVar12;
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c4f30();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c57d8;
    func_0x0001072ce900();
    param_1 = param_2;
    param_2 = puVar7;
    ppppuVar12 = &pppuStack_70;
  }
  uVar3 = *param_1 == 4;
  if ((bool)uVar3) {
    puVar7 = param_1 + 2;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar12;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar12 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5264();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c5848;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
    param_1 = param_2;
    param_2 = puVar7;
  }
  uVar3 = *param_1 == 3;
  if ((bool)uVar3) {
    puVar7 = param_1 + 2;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar12;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar12 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c546c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c58b8;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
    param_1 = param_2;
    param_2 = puVar7;
  }
  uVar3 = *param_1 == 2;
  if ((bool)uVar3) {
    puVar7 = param_1 + 2;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar12;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar12 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5500();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c5928;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
    param_1 = param_2;
    param_2 = puVar7;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar3) {
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar12;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar12 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c558c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c598c;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
  }
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
  *(undefined8 *****)(puVar2 + -0x10) = ppppuVar12;
  *(code **)(puVar2 + -8) = pcVar13;
  puVar11 = puVar2 + -0x10;
  func_0x0001072ce1d0();
  lVar10 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c5640();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar13 = FUN_1072c59d8;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else {
    uVar3 = 1 < *param_1;
    bVar4 = *param_1 == 2;
    if (bVar4) {
      param_1 = param_1 + 2;
      *(undefined8 *)(puVar2 + -0x90) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x88) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
      *(long *)(puVar2 + -0x78) = lVar10;
      *(undefined1 **)(puVar2 + -0x70) = puVar11;
      *(code **)(puVar2 + -0x68) = FUN_1072c59d8;
      func_0x0001072d0340(param_2 + 8);
      if (bVar4) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar10 = *(long *)param_1; lVar10 != lVar1; lVar10 = lVar10 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar5 = *(undefined8 *)(lVar10 + 8);
      uVar8 = *(undefined8 *)(lVar10 + 0x10);
      uVar9 = *(undefined8 *)(lVar10 + 0x18);
      uVar6 = *(undefined8 *)(lVar10 + 0x20);
      puVar11 = *(undefined1 **)(puVar2 + -0x70);
      pcVar13 = *(code **)(puVar2 + -0x68);
      unaff_x20 = *(undefined8 *)(puVar2 + -0x80);
      lVar10 = *(long *)(puVar2 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar13 = FUN_1072c59d8;
    func_0x0001072cf5e8();
  }
  uVar5 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 2);
  uVar8 = *(undefined8 *)(param_1 + 4);
  uVar9 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
  *(long *)(puVar2 + -0x78) = lVar10;
  *(undefined1 **)(puVar2 + -0x70) = puVar11;
  *(code **)(puVar2 + -0x68) = pcVar13;
  func_0x0001072ce4e8(uVar5,uVar6,uVar8,uVar9);
  if ((bool)uVar3) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c5768; end: 1072c578b;  */

void FUN_1072c5768(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar10;
  undefined1 *unaff_x29;
  code *unaff_x30;
  code *pcVar11;
  undefined1 auStack_60 [64];
  
  uVar2 = *param_1 == 5;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c4f30();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c57d8;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    param_1 = param_2;
    param_2 = puVar6;
  }
  uVar2 = *param_1 == 4;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5264();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c5848;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar6;
  }
  uVar2 = *param_1 == 3;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c546c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c58b8;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar6;
  }
  uVar2 = *param_1 == 2;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5500();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c5928;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar6;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar2) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c558c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c598c;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x0001072ce1d0();
  lVar9 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c5640();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar11 = FUN_1072c59d8;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x78) = lVar9;
      *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
      *(code **)((long)register0x00000008 + -0x68) = FUN_1072c59d8;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar9 = *(long *)param_1; lVar9 != lVar1; lVar9 = lVar9 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar9 + 8);
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      uVar8 = *(undefined8 *)(lVar9 + 0x18);
      uVar5 = *(undefined8 *)(lVar9 + 0x20);
      puVar10 = *(undefined1 **)((long)register0x00000008 + -0x70);
      pcVar11 = *(code **)((long)register0x00000008 + -0x68);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
      lVar9 = *(long *)((long)register0x00000008 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar11 = FUN_1072c59d8;
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 2);
  uVar7 = *(undefined8 *)(param_1 + 4);
  uVar8 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x78) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
  *(code **)((long)register0x00000008 + -0x68) = pcVar11;
  func_0x0001072ce4e8(uVar4,uVar5,uVar7,uVar8);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c578c; end: 1072c57d7;  */

void FUN_1072c578c(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar11;
  undefined8 ****ppppuVar12;
  code *pcVar13;
  undefined1 auStack_c0 [64];
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [64];
  
  puVar2 = auStack_60;
  ppppuVar12 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x0001072ce1d0();
  uVar9 = *(undefined8 *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c4f30();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar13 = FUN_1072c57d8;
  func_0x0001072ce900();
  uVar3 = *param_1 == 4;
  if ((bool)uVar3) {
    puVar7 = param_1 + 2;
    puVar2 = auStack_c0;
    pcStack_68 = FUN_1072c57d8;
    pppuStack_70 = ppppuVar12;
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5264();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c5848;
    func_0x0001072ce900();
    param_1 = param_2;
    param_2 = puVar7;
    ppppuVar12 = &pppuStack_70;
  }
  uVar3 = *param_1 == 3;
  if ((bool)uVar3) {
    puVar7 = param_1 + 2;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = uVar9;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar12;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar12 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c546c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c58b8;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
    param_1 = param_2;
    param_2 = puVar7;
  }
  uVar3 = *param_1 == 2;
  if ((bool)uVar3) {
    puVar7 = param_1 + 2;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = uVar9;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar12;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar12 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5500();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c5928;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
    param_1 = param_2;
    param_2 = puVar7;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar3) {
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = uVar9;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar12;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar12 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c558c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c598c;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
  }
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = uVar9;
  *(undefined8 *****)(puVar2 + -0x10) = ppppuVar12;
  *(code **)(puVar2 + -8) = pcVar13;
  puVar11 = puVar2 + -0x10;
  func_0x0001072ce1d0();
  lVar10 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c5640();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar13 = FUN_1072c59d8;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else {
    uVar3 = 1 < *param_1;
    bVar4 = *param_1 == 2;
    if (bVar4) {
      param_1 = param_1 + 2;
      *(undefined8 *)(puVar2 + -0x90) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x88) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
      *(long *)(puVar2 + -0x78) = lVar10;
      *(undefined1 **)(puVar2 + -0x70) = puVar11;
      *(code **)(puVar2 + -0x68) = FUN_1072c59d8;
      func_0x0001072d0340(param_2 + 8);
      if (bVar4) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar10 = *(long *)param_1; lVar10 != lVar1; lVar10 = lVar10 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar5 = *(undefined8 *)(lVar10 + 8);
      uVar8 = *(undefined8 *)(lVar10 + 0x10);
      uVar9 = *(undefined8 *)(lVar10 + 0x18);
      uVar6 = *(undefined8 *)(lVar10 + 0x20);
      puVar11 = *(undefined1 **)(puVar2 + -0x70);
      pcVar13 = *(code **)(puVar2 + -0x68);
      unaff_x20 = *(undefined8 *)(puVar2 + -0x80);
      lVar10 = *(long *)(puVar2 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar13 = FUN_1072c59d8;
    func_0x0001072cf5e8();
  }
  uVar5 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 2);
  uVar8 = *(undefined8 *)(param_1 + 4);
  uVar9 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
  *(long *)(puVar2 + -0x78) = lVar10;
  *(undefined1 **)(puVar2 + -0x70) = puVar11;
  *(code **)(puVar2 + -0x68) = pcVar13;
  func_0x0001072ce4e8(uVar5,uVar6,uVar8,uVar9);
  if ((bool)uVar3) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c57d8; end: 1072c57fb;  */

void FUN_1072c57d8(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar10;
  undefined1 *unaff_x29;
  code *unaff_x30;
  code *pcVar11;
  undefined1 auStack_60 [64];
  
  uVar2 = *param_1 == 4;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5264();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c5848;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    param_1 = param_2;
    param_2 = puVar6;
  }
  uVar2 = *param_1 == 3;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c546c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c58b8;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar6;
  }
  uVar2 = *param_1 == 2;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5500();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c5928;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar6;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar2) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c558c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c598c;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x0001072ce1d0();
  lVar9 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c5640();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar11 = FUN_1072c59d8;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x78) = lVar9;
      *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
      *(code **)((long)register0x00000008 + -0x68) = FUN_1072c59d8;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar9 = *(long *)param_1; lVar9 != lVar1; lVar9 = lVar9 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar9 + 8);
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      uVar8 = *(undefined8 *)(lVar9 + 0x18);
      uVar5 = *(undefined8 *)(lVar9 + 0x20);
      puVar10 = *(undefined1 **)((long)register0x00000008 + -0x70);
      pcVar11 = *(code **)((long)register0x00000008 + -0x68);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
      lVar9 = *(long *)((long)register0x00000008 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar11 = FUN_1072c59d8;
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 2);
  uVar7 = *(undefined8 *)(param_1 + 4);
  uVar8 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x78) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
  *(code **)((long)register0x00000008 + -0x68) = pcVar11;
  func_0x0001072ce4e8(uVar4,uVar5,uVar7,uVar8);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c57fc; end: 1072c5847;  */

void FUN_1072c57fc(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar11;
  undefined8 ****ppppuVar12;
  code *pcVar13;
  undefined1 auStack_c0 [64];
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [64];
  
  puVar2 = auStack_60;
  ppppuVar12 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x0001072ce1d0();
  uVar9 = *(undefined8 *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c5264();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar13 = FUN_1072c5848;
  func_0x0001072ce900();
  uVar3 = *param_1 == 3;
  if ((bool)uVar3) {
    puVar7 = param_1 + 2;
    puVar2 = auStack_c0;
    pcStack_68 = FUN_1072c5848;
    pppuStack_70 = ppppuVar12;
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c546c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c58b8;
    func_0x0001072ce900();
    param_1 = param_2;
    param_2 = puVar7;
    ppppuVar12 = &pppuStack_70;
  }
  uVar3 = *param_1 == 2;
  if ((bool)uVar3) {
    puVar7 = param_1 + 2;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = uVar9;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar12;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar12 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5500();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c5928;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
    param_1 = param_2;
    param_2 = puVar7;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar3) {
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = uVar9;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar12;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar12 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c558c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c598c;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
  }
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = uVar9;
  *(undefined8 *****)(puVar2 + -0x10) = ppppuVar12;
  *(code **)(puVar2 + -8) = pcVar13;
  puVar11 = puVar2 + -0x10;
  func_0x0001072ce1d0();
  lVar10 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c5640();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar13 = FUN_1072c59d8;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else {
    uVar3 = 1 < *param_1;
    bVar4 = *param_1 == 2;
    if (bVar4) {
      param_1 = param_1 + 2;
      *(undefined8 *)(puVar2 + -0x90) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x88) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
      *(long *)(puVar2 + -0x78) = lVar10;
      *(undefined1 **)(puVar2 + -0x70) = puVar11;
      *(code **)(puVar2 + -0x68) = FUN_1072c59d8;
      func_0x0001072d0340(param_2 + 8);
      if (bVar4) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar10 = *(long *)param_1; lVar10 != lVar1; lVar10 = lVar10 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar5 = *(undefined8 *)(lVar10 + 8);
      uVar8 = *(undefined8 *)(lVar10 + 0x10);
      uVar9 = *(undefined8 *)(lVar10 + 0x18);
      uVar6 = *(undefined8 *)(lVar10 + 0x20);
      puVar11 = *(undefined1 **)(puVar2 + -0x70);
      pcVar13 = *(code **)(puVar2 + -0x68);
      unaff_x20 = *(undefined8 *)(puVar2 + -0x80);
      lVar10 = *(long *)(puVar2 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar13 = FUN_1072c59d8;
    func_0x0001072cf5e8();
  }
  uVar5 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 2);
  uVar8 = *(undefined8 *)(param_1 + 4);
  uVar9 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
  *(long *)(puVar2 + -0x78) = lVar10;
  *(undefined1 **)(puVar2 + -0x70) = puVar11;
  *(code **)(puVar2 + -0x68) = pcVar13;
  func_0x0001072ce4e8(uVar5,uVar6,uVar8,uVar9);
  if ((bool)uVar3) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c5848; end: 1072c586b;  */

void FUN_1072c5848(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar10;
  undefined1 *unaff_x29;
  code *unaff_x30;
  code *pcVar11;
  undefined1 auStack_60 [64];
  
  uVar2 = *param_1 == 3;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c546c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c58b8;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    param_1 = param_2;
    param_2 = puVar6;
  }
  uVar2 = *param_1 == 2;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5500();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c5928;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = param_2;
    param_2 = puVar6;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar2) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c558c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c598c;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x0001072ce1d0();
  lVar9 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c5640();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar11 = FUN_1072c59d8;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x78) = lVar9;
      *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
      *(code **)((long)register0x00000008 + -0x68) = FUN_1072c59d8;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar9 = *(long *)param_1; lVar9 != lVar1; lVar9 = lVar9 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar9 + 8);
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      uVar8 = *(undefined8 *)(lVar9 + 0x18);
      uVar5 = *(undefined8 *)(lVar9 + 0x20);
      puVar10 = *(undefined1 **)((long)register0x00000008 + -0x70);
      pcVar11 = *(code **)((long)register0x00000008 + -0x68);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
      lVar9 = *(long *)((long)register0x00000008 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar11 = FUN_1072c59d8;
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 2);
  uVar7 = *(undefined8 *)(param_1 + 4);
  uVar8 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x78) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
  *(code **)((long)register0x00000008 + -0x68) = pcVar11;
  func_0x0001072ce4e8(uVar4,uVar5,uVar7,uVar8);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c586c; end: 1072c58b7;  */

void FUN_1072c586c(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar11;
  undefined8 ****ppppuVar12;
  code *pcVar13;
  undefined1 auStack_c0 [64];
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [64];
  
  puVar2 = auStack_60;
  ppppuVar12 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x0001072ce1d0();
  uVar9 = *(undefined8 *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c546c();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar13 = FUN_1072c58b8;
  func_0x0001072ce900();
  uVar3 = *param_1 == 2;
  if ((bool)uVar3) {
    puVar7 = param_1 + 2;
    puVar2 = auStack_c0;
    pcStack_68 = FUN_1072c58b8;
    pppuStack_70 = ppppuVar12;
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5500();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c5928;
    func_0x0001072ce900();
    param_1 = param_2;
    param_2 = puVar7;
    ppppuVar12 = &pppuStack_70;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar3) {
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = uVar9;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar12;
    *(code **)(puVar2 + -8) = pcVar13;
    ppppuVar12 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c558c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar13 = FUN_1072c598c;
    func_0x0001072ce900();
    puVar2 = puVar2 + -0x60;
  }
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = uVar9;
  *(undefined8 *****)(puVar2 + -0x10) = ppppuVar12;
  *(code **)(puVar2 + -8) = pcVar13;
  puVar11 = puVar2 + -0x10;
  func_0x0001072ce1d0();
  lVar10 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c5640();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar13 = FUN_1072c59d8;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else {
    uVar3 = 1 < *param_1;
    bVar4 = *param_1 == 2;
    if (bVar4) {
      param_1 = param_1 + 2;
      *(undefined8 *)(puVar2 + -0x90) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x88) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
      *(long *)(puVar2 + -0x78) = lVar10;
      *(undefined1 **)(puVar2 + -0x70) = puVar11;
      *(code **)(puVar2 + -0x68) = FUN_1072c59d8;
      func_0x0001072d0340(param_2 + 8);
      if (bVar4) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar10 = *(long *)param_1; lVar10 != lVar1; lVar10 = lVar10 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar5 = *(undefined8 *)(lVar10 + 8);
      uVar8 = *(undefined8 *)(lVar10 + 0x10);
      uVar9 = *(undefined8 *)(lVar10 + 0x18);
      uVar6 = *(undefined8 *)(lVar10 + 0x20);
      puVar11 = *(undefined1 **)(puVar2 + -0x70);
      pcVar13 = *(code **)(puVar2 + -0x68);
      unaff_x20 = *(undefined8 *)(puVar2 + -0x80);
      lVar10 = *(long *)(puVar2 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar13 = FUN_1072c59d8;
    func_0x0001072cf5e8();
  }
  uVar5 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 2);
  uVar8 = *(undefined8 *)(param_1 + 4);
  uVar9 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
  *(long *)(puVar2 + -0x78) = lVar10;
  *(undefined1 **)(puVar2 + -0x70) = puVar11;
  *(code **)(puVar2 + -0x68) = pcVar13;
  func_0x0001072ce4e8(uVar5,uVar6,uVar8,uVar9);
  if ((bool)uVar3) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c58b8; end: 1072c58db;  */

void FUN_1072c58b8(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar10;
  undefined1 *unaff_x29;
  code *unaff_x30;
  code *pcVar11;
  undefined1 auStack_60 [64];
  
  uVar2 = *param_1 == 2;
  if ((bool)uVar2) {
    puVar6 = param_1 + 2;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_2 + 2);
    func_0x0001072cef4c();
    FUN_1072c5500();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c5928;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    param_1 = param_2;
    param_2 = puVar6;
  }
  func_0x0001072cf5e8();
  if ((bool)uVar2) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c558c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c598c;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x0001072ce1d0();
  lVar9 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c5640();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar11 = FUN_1072c59d8;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x78) = lVar9;
      *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
      *(code **)((long)register0x00000008 + -0x68) = FUN_1072c59d8;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar9 = *(long *)param_1; lVar9 != lVar1; lVar9 = lVar9 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar9 + 8);
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      uVar8 = *(undefined8 *)(lVar9 + 0x18);
      uVar5 = *(undefined8 *)(lVar9 + 0x20);
      puVar10 = *(undefined1 **)((long)register0x00000008 + -0x70);
      pcVar11 = *(code **)((long)register0x00000008 + -0x68);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
      lVar9 = *(long *)((long)register0x00000008 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar11 = FUN_1072c59d8;
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 2);
  uVar7 = *(undefined8 *)(param_1 + 4);
  uVar8 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x78) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
  *(code **)((long)register0x00000008 + -0x68) = pcVar11;
  func_0x0001072ce4e8(uVar4,uVar5,uVar7,uVar8);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c58dc; end: 1072c5927;  */

void FUN_1072c58dc(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar11;
  undefined8 ****ppppuVar12;
  undefined1 auStack_c0 [64];
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [64];
  
  puVar2 = auStack_60;
  ppppuVar12 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x0001072ce1d0();
  uVar9 = *(undefined8 *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c5500();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  func_0x0001072ce900();
  pcVar8 = FUN_1072c5928;
  func_0x0001072cf5e8();
  if ((bool)in_ZR) {
    puVar2 = auStack_c0;
    pppuStack_70 = ppppuVar12;
    pcStack_68 = pcVar8;
    func_0x0001072ce1d0();
    uVar9 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c558c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    pcVar8 = FUN_1072c598c;
    func_0x0001072ce900();
    ppppuVar12 = &pppuStack_70;
  }
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = uVar9;
  *(undefined8 *****)(puVar2 + -0x10) = ppppuVar12;
  *(code **)(puVar2 + -8) = pcVar8;
  puVar11 = puVar2 + -0x10;
  func_0x0001072ce1d0();
  lVar10 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c5640();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar8 = FUN_1072c59d8;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar3 = 1;
    param_1 = param_2;
  }
  else {
    uVar3 = 1 < *param_1;
    bVar4 = *param_1 == 2;
    if (bVar4) {
      param_1 = param_1 + 2;
      *(undefined8 *)(puVar2 + -0x90) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x88) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
      *(long *)(puVar2 + -0x78) = lVar10;
      *(undefined1 **)(puVar2 + -0x70) = puVar11;
      *(code **)(puVar2 + -0x68) = FUN_1072c59d8;
      func_0x0001072d0340(param_2 + 8);
      if (bVar4) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar10 = *(long *)param_1; lVar10 != lVar1; lVar10 = lVar10 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar5 = *(undefined8 *)(lVar10 + 8);
      uVar7 = *(undefined8 *)(lVar10 + 0x10);
      uVar9 = *(undefined8 *)(lVar10 + 0x18);
      uVar6 = *(undefined8 *)(lVar10 + 0x20);
      puVar11 = *(undefined1 **)(puVar2 + -0x70);
      pcVar8 = *(code **)(puVar2 + -0x68);
      unaff_x20 = *(undefined8 *)(puVar2 + -0x80);
      lVar10 = *(long *)(puVar2 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar8 = FUN_1072c59d8;
    func_0x0001072cf5e8();
  }
  uVar5 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 2);
  uVar7 = *(undefined8 *)(param_1 + 4);
  uVar9 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
  *(long *)(puVar2 + -0x78) = lVar10;
  *(undefined1 **)(puVar2 + -0x70) = puVar11;
  *(code **)(puVar2 + -0x68) = pcVar8;
  func_0x0001072ce4e8(uVar5,uVar6,uVar7,uVar9);
  if ((bool)uVar3) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c5928; end: 1072c593f;  */

void FUN_1072c5928(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar9;
  undefined1 *unaff_x29;
  code *unaff_x30;
  code *pcVar10;
  undefined1 auStack_60 [64];
  
  func_0x0001072cf5e8();
  if ((bool)in_ZR) {
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072ce1d0();
    unaff_x19 = *(undefined8 *)(param_1 + 2);
    func_0x0001072cef4c();
    FUN_1072c558c();
    func_0x0001072ce578();
    func_0x0001072ce9d8();
    func_0x0001072ce080();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce514();
    unaff_x30 = FUN_1072c598c;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)auStack_60;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar9 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x0001072ce1d0();
  lVar8 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c5640();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  pcVar10 = FUN_1072c59d8;
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x78) = lVar8;
      *(undefined1 **)((long)register0x00000008 + -0x70) = puVar9;
      *(code **)((long)register0x00000008 + -0x68) = FUN_1072c59d8;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar8 = *(long *)param_1; lVar8 != lVar1; lVar8 = lVar8 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar8 + 8);
      uVar6 = *(undefined8 *)(lVar8 + 0x10);
      uVar7 = *(undefined8 *)(lVar8 + 0x18);
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar9 = *(undefined1 **)((long)register0x00000008 + -0x70);
      pcVar10 = *(code **)((long)register0x00000008 + -0x68);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
      lVar8 = *(long *)((long)register0x00000008 + -0x78);
      goto FUN_1072c4ab0;
    }
    pcVar10 = FUN_1072c59d8;
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 2);
  uVar6 = *(undefined8 *)(param_1 + 4);
  uVar7 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x78) = lVar8;
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar9;
  *(code **)((long)register0x00000008 + -0x68) = pcVar10;
  func_0x0001072ce4e8(uVar4,uVar5,uVar6,uVar7);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c5940; end: 1072c598b;  */

void FUN_1072c5940(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  func_0x0001072ce1d0();
  func_0x0001072cef4c();
  FUN_1072c558c();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  func_0x0001072ce900();
  func_0x0001072ce1d0();
  lVar8 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c5640();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar8 = *(long *)param_1; lVar8 != lVar1; lVar8 = lVar8 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar8 + 8);
      uVar6 = *(undefined8 *)(lVar8 + 0x10);
      uVar7 = *(undefined8 *)(lVar8 + 0x18);
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      goto FUN_1072c4ab0;
    }
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 2);
  uVar6 = *(undefined8 *)(param_1 + 4);
  uVar7 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  func_0x0001072ce4e8(uVar4,uVar5,uVar6,uVar7);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c598c; end: 1072c59d7;  */

void FUN_1072c598c(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  func_0x0001072ce1d0();
  lVar8 = *(long *)(param_1 + 2);
  func_0x0001072cef4c();
  FUN_1072c5640();
  func_0x0001072ce578();
  func_0x0001072ce9d8();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce514();
  func_0x0001072ce900();
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar8 = *(long *)param_1; lVar8 != lVar1; lVar8 = lVar8 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(lVar8 + 8);
      uVar6 = *(undefined8 *)(lVar8 + 0x10);
      uVar7 = *(undefined8 *)(lVar8 + 0x18);
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      goto FUN_1072c4ab0;
    }
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 2);
  uVar6 = *(undefined8 *)(param_1 + 4);
  uVar7 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  func_0x0001072ce4e8(uVar4,uVar5,uVar6,uVar7);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c59d8; end: 1072c5ac3;  */

void FUN_1072c59d8(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long lVar8;
  
  if (*param_1 == 7) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 6) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 5) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 4) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else if (*param_1 == 3) {
    uVar2 = 1;
    param_1 = param_2;
  }
  else {
    uVar2 = 1 < *param_1;
    bVar3 = *param_1 == 2;
    if (bVar3) {
      param_1 = param_1 + 2;
      func_0x0001072d0340(param_2 + 8);
      if (bVar3) {
        lVar1 = *(long *)(param_1 + 2);
        for (lVar8 = *(long *)param_1; lVar8 != lVar1; lVar8 = lVar8 + 0x30) {
          func_0x0001072cf784();
        }
        return;
      }
      uVar4 = *(undefined8 *)(unaff_x19 + 8);
      uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
      uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar5 = *(undefined8 *)(unaff_x19 + 0x20);
      goto FUN_1072c4ab0;
    }
    func_0x0001072cf5e8();
  }
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 2);
  uVar6 = *(undefined8 *)(param_1 + 4);
  uVar7 = *(undefined8 *)(param_1 + 6);
FUN_1072c4ab0:
  func_0x0001072ce4e8(uVar4,uVar5,uVar6,uVar7);
  if ((bool)uVar2) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c5ac4; end: 1072c5b0b;  */

void FUN_1072c5ac4(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long unaff_x19;
  long lVar2;
  
  func_0x0001072d0340();
  if ((bool)in_ZR) {
    lVar1 = param_2[1];
    for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
      func_0x0001072cf784();
    }
    return;
  }
  func_0x0001072ce4e8(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x20),
                      *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x18));
  if ((bool)in_CY) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c5b0c; end: 1072c5b2b;  */

void FUN_1072c5b0c(undefined8 *param_1)

{
  undefined1 in_CY;
  
  func_0x0001072cf5e8();
  func_0x0001072ce4e8(*param_1,param_1[1],param_1[2],param_1[3]);
  if ((bool)in_CY) {
    FUN_1072c4b08();
  }
  else {
    FUN_1072c4ae0();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c5b2c; end: 1072c5c77;  */

undefined2 *
FUN_1072c5b2c(double param_1,undefined2 *param_2,long *param_3,undefined8 param_4,undefined4 param_5
             ,undefined4 param_6,undefined2 param_7,undefined1 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  undefined2 *puStack_58;
  long lStack_50;
  long lStack_48;
  
  *param_2 = param_7;
  *(char *)(param_2 + 1) = (char)param_4;
  *(undefined4 *)(param_2 + 2) = param_5;
  *(undefined4 *)(param_2 + 4) = param_6;
  uVar3 = 0x3ff0000000000000;
  _ldexp(param_4);
  *(undefined8 *)(param_2 + 8) = uVar3;
  *(double *)(param_2 + 0xc) = param_1;
  *(double *)(param_2 + 0x10) = param_1 * param_1;
  *(undefined1 *)(param_2 + 0x14) = param_8;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x24) = 0x4000000000000000;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0xbff0000000000000;
  FUN_1072c5cc4(param_2 + 0x34);
  func_0x0001072cfa88(param_3[1]);
  FUN_1072c5c78(param_2 + 0x34);
  lVar1 = param_3[1];
  for (lVar2 = *param_3; lVar2 != lVar1; lVar2 = lVar2 + 0xb0) {
    *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + *(int *)(lVar2 + 0xa8);
    lStack_50 = lVar2 + 0x38;
    lStack_48 = lVar2 + 0x48;
    puStack_58 = param_2;
    FUN_1072c7084(lVar2,&puStack_58);
    dVar4 = *(double *)(param_2 + 0x24);
    if (*(double *)(lVar2 + 0x88) <= *(double *)(param_2 + 0x24)) {
      dVar4 = *(double *)(lVar2 + 0x88);
    }
    *(double *)(param_2 + 0x24) = dVar4;
    dVar4 = *(double *)(param_2 + 0x28);
    if (*(double *)(lVar2 + 0x90) <= *(double *)(param_2 + 0x28)) {
      dVar4 = *(double *)(lVar2 + 0x90);
    }
    *(double *)(param_2 + 0x28) = dVar4;
    dVar4 = *(double *)(param_2 + 0x2c);
    if (*(double *)(param_2 + 0x2c) <= *(double *)(lVar2 + 0x98)) {
      dVar4 = *(double *)(lVar2 + 0x98);
    }
    *(double *)(param_2 + 0x2c) = dVar4;
    dVar4 = *(double *)(param_2 + 0x30);
    if (*(double *)(param_2 + 0x30) <= *(double *)(lVar2 + 0xa0)) {
      dVar4 = *(double *)(lVar2 + 0xa0);
    }
    *(double *)(param_2 + 0x30) = dVar4;
  }
  return param_2;
}



/* Entry: 1072c5c78; end: 1072c5cc3;  */

void FUN_1072c5c78(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auStack_48 [40];
  
  uVar1 = (((long *)*param_1)[2] - *(long *)*param_1) / 0x70;
  uVar2 = uVar1 <= param_2;
  uVar3 = param_2 == uVar1;
  if (!(bool)uVar2 || (bool)uVar3) {
    return;
  }
  func_0x0001072ce940();
  FUN_1072c5cdc();
  func_0x0001072ce464(*unaff_x20);
  func_0x0001072cf3ac();
  if ((bool)uVar2 && !(bool)uVar3) {
    if (0x249249249249249 < unaff_x19) {
      FUN_1072c5f98();
      func_0x0001072ce690();
      func_0x0001072ce900();
      func_0x0001072ce2cc();
      func_0x0001072cf398();
      FUN_1072c6eb8();
      func_0x0001072cdfc8();
      return;
    }
    func_0x0001072ce808();
    func_0x0001072cf1ec();
    FUN_1072c6e84();
    func_0x0001072ce684();
    FUN_1072c7020(auStack_48);
  }
  return;
}



/* Entry: 1072c5cc4; end: 1072c5cdb;  */

void FUN_1072c5cc4(long param_1)

{
  FUN_1072c8f9c();
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


