/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100dd8cfc; end: 100dd8d0f;  */

void FUN_100dd8cfc(undefined8 param_1)

{
  if (lRam0000000112d36518 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e60e6e4);
  return;
}



/* Entry: 100dd8d10; end: 100dd8f5b;  */

/* WARNING: Possible PIC construction at 0x000100dd8ed0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dd8ed4) */

long * FUN_100dd8d10(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar7 + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar6 = (ulong)uVar1 & 0xff;
    func_0x000107c6157c();
    return (long *)(lVar7 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
  }
  plVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  iVar2 = (int)plVar3;
  if (iVar2 < 3) {
    if (iVar2 == 1) {
      lVar7 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar7;
      func_0x000107c61434();
      uVar5 = 1;
      goto LAB_100dd8f44;
    }
    if (iVar2 == 2) {
      lVar7 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
      uVar5 = 2;
      goto LAB_100dd8f44;
    }
  }
  else {
    if (iVar2 == 3) {
      lVar7 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
      uVar5 = 3;
      goto LAB_100dd8f44;
    }
    if (iVar2 == 4) {
      lVar7 = 0;
      FUN_100dd8cfc();
      plVar3 = param_2;
      func_0x000107c614c4(param_2,lVar7);
      iVar2 = (int)plVar3;
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          lVar4 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
          uVar5 = 0;
        }
        else {
          if (iVar2 != 1) {
LAB_100dd8ec0:
            uVar5 = *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40);
            goto code_r0x000107c610b4;
          }
          lVar4 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
          uVar5 = 1;
        }
      }
      else if (iVar2 == 2) {
        lVar4 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
        uVar5 = 2;
      }
      else {
        if (iVar2 != 3) goto LAB_100dd8ec0;
        lVar4 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
        uVar5 = 3;
      }
      func_0x000107c6159c(param_1,lVar7,uVar5);
      uVar5 = 4;
LAB_100dd8f44:
      func_0x000107c6159c(param_1,param_3,uVar5);
      return param_1;
    }
  }
  uVar5 = *(undefined8 *)(lVar7 + 0x40);
code_r0x000107c610b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar5);
  return param_1;
}



/* Entry: 100dd8f5c; end: 100dd9017;  */

void FUN_100dd8f5c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x000107c614c4();
  iVar1 = (int)lVar3;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
      return;
    }
    if (iVar1 != 2) {
      return;
    }
  }
  else if (iVar1 != 3) {
    if (iVar1 != 4) {
      return;
    }
    uVar2 = 0;
    FUN_100dd8cfc(0);
    lVar3 = param_1;
    func_0x000107c614c4(param_1,uVar2);
    iVar1 = (int)lVar3;
    if (iVar1 < 2) {
      if ((iVar1 != 0) && (iVar1 != 1)) {
        return;
      }
    }
    else if ((iVar1 != 2) && (iVar1 != 3)) {
      return;
    }
  }
  lVar3 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000100dd9008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  return;
}



/* Entry: 100dd9018; end: 100dd947f;  */

/* WARNING: Possible PIC construction at 0x000100dd91b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dd91b4) */

undefined8 * FUN_100dd9018(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  iVar1 = (int)puVar2;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      uVar5 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar5;
      func_0x000107c61434();
      uVar5 = 1;
      goto LAB_100dd9224;
    }
    if (iVar1 == 2) {
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
      uVar5 = 2;
      goto LAB_100dd9224;
    }
  }
  else {
    if (iVar1 == 3) {
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
      uVar5 = 3;
      goto LAB_100dd9224;
    }
    if (iVar1 == 4) {
      lVar3 = 0;
      FUN_100dd8cfc();
      puVar2 = param_2;
      func_0x000107c614c4(param_2,lVar3);
      iVar1 = (int)puVar2;
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          lVar4 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
          uVar5 = 0;
        }
        else {
          if (iVar1 != 1) {
LAB_100dd91a0:
            uVar5 = *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40);
            goto code_r0x000107c610b4;
          }
          lVar4 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
          uVar5 = 1;
        }
      }
      else if (iVar1 == 2) {
        lVar4 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
        uVar5 = 2;
      }
      else {
        if (iVar1 != 3) goto LAB_100dd91a0;
        lVar4 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
        uVar5 = 3;
      }
      func_0x000107c6159c(param_1,lVar3,uVar5);
      uVar5 = 4;
LAB_100dd9224:
      func_0x000107c6159c(param_1,param_3,uVar5);
      return param_1;
    }
  }
  uVar5 = *(undefined8 *)(*(long *)(param_3 + -8) + 0x40);
code_r0x000107c610b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar5);
  return param_1;
}



/* Entry: 100dd9480; end: 100dd9493;  */

void FUN_100dd9480(undefined8 param_1)

{
  if (lRam0000000112d36330 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e60e66c);
  return;
}



/* Entry: 100dd9494; end: 100dd989b;  */

/* WARNING: Possible PIC construction at 0x000100dd9600: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dd9604) */

undefined8 FUN_100dd9494(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = param_2;
  func_0x000107c614c4(param_2,param_3);
  iVar1 = (int)uVar4;
  if (iVar1 != 4) {
    if (iVar1 != 3) {
      if (iVar1 == 2) {
        lVar2 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
        uVar4 = 2;
        goto LAB_100dd9674;
      }
      uVar4 = *(undefined8 *)(*(long *)(param_3 + -8) + 0x40);
      goto code_r0x000107c610b4;
    }
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    uVar4 = 3;
    goto LAB_100dd9674;
  }
  lVar2 = 0;
  FUN_100dd8cfc();
  uVar4 = param_2;
  func_0x000107c614c4(param_2,lVar2);
  iVar1 = (int)uVar4;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
      uVar4 = 0;
    }
    else {
      if (iVar1 != 1) {
LAB_100dd95f0:
        uVar4 = *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40);
code_r0x000107c610b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar4);
        return param_1;
      }
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
      uVar4 = 1;
    }
  }
  else if (iVar1 == 2) {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    uVar4 = 2;
  }
  else {
    if (iVar1 != 3) goto LAB_100dd95f0;
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    uVar4 = 3;
  }
  func_0x000107c6159c(param_1,lVar2,uVar4);
  uVar4 = 4;
LAB_100dd9674:
  func_0x000107c6159c(param_1,param_3,uVar4);
  return param_1;
}



/* Entry: 100dd989c; end: 100dd989f;  */

void FUN_100dd989c(void)

{
  return;
}



/* Entry: 100dd98a0; end: 100dd993b;  */

void FUN_100dd98a0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_50 = &UNK_10d900898;
  puStack_48 = &UNK_10d9008b0;
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    lStack_38 = lStack_40;
    FUN_100dd8cfc();
    if (param_2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = &UNK_10d9008c8;
      func_0x000107c61528(param_1,0x100,6,&puStack_50);
    }
  }
  return;
}



/* Entry: 100dd993c; end: 100dd9bb3;  */

long * FUN_100dd993c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar7 = (ulong)uVar1 & 0xff;
    func_0x000107c6157c();
    return (long *)(lVar3 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
  }
  lVar3 = 0;
  FUN_100dd9bb4();
  plVar4 = param_2;
  func_0x000107c614c4(param_2,lVar3);
  if ((int)plVar4 == 1) {
    lVar5 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    func_0x000107c6159c(param_1,lVar3,1);
  }
  else if ((int)plVar4 == 0) {
    lVar5 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    func_0x000107c6159c(param_1,lVar3,0);
  }
  else {
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  lVar8 = (long)*(int *)(param_3 + 0x14);
  lVar5 = 0;
  FUN_100dd8cfc();
  lVar9 = *(long *)(lVar5 + -8);
  lVar3 = (long)param_2 + lVar8;
  (**(code **)(lVar9 + 0x30))(lVar3,1,lVar5);
  if ((int)lVar3 != 0) {
    lVar3 = 0x112d36368;
    func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
    func_0x000107c610b4((long)param_1 + lVar8,(long)param_2 + lVar8,
                        *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    return param_1;
  }
  lVar3 = (long)param_2 + lVar8;
  func_0x000107c614c4(lVar3,lVar5);
  iVar2 = (int)lVar3;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar3)
      ;
      uVar6 = 0;
    }
    else {
      if (iVar2 != 1) {
LAB_100dd9b10:
        func_0x000107c610b4((long)param_1 + lVar8,(long)param_2 + lVar8,
                            *(undefined8 *)(lVar9 + 0x40));
        goto LAB_100dd9b84;
      }
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar3)
      ;
      uVar6 = 1;
    }
  }
  else if (iVar2 == 2) {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar3);
    uVar6 = 2;
  }
  else {
    if (iVar2 != 3) goto LAB_100dd9b10;
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar3);
    uVar6 = 3;
  }
  func_0x000107c6159c((long)param_1 + lVar8,lVar5,uVar6);
LAB_100dd9b84:
  (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar5);
  return param_1;
}



/* Entry: 100dd9bb4; end: 100dd9bc7;  */

void FUN_100dd9bb4(undefined8 param_1)

{
  if (lRam0000000112d36470 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e60e6bc);
  return;
}



/* Entry: 100dd9bc8; end: 100dd9c8f;  */

void FUN_100dd9bc8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = 0;
  FUN_100dd9bb4(0);
  lVar2 = param_1;
  func_0x000107c614c4(param_1,uVar1);
  if ((uint)lVar2 < 2) {
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  }
  lVar4 = (long)*(int *)(param_2 + 0x14);
  lVar3 = 0;
  FUN_100dd8cfc();
  lVar2 = param_1 + lVar4;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar2,1,lVar3);
  if ((int)lVar2 == 0) {
    lVar2 = param_1 + lVar4;
    func_0x000107c614c4(lVar2,lVar3);
    if ((uint)lVar2 < 4) {
      lVar2 = 0;
      func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000100dd9c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar4,lVar2);
      return;
    }
  }
  return;
}



/* Entry: 100dd9c90; end: 100dd9edb;  */

long FUN_100dd9c90(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = 0;
  FUN_100dd9bb4();
  lVar3 = param_2;
  func_0x000107c614c4(param_2,lVar2);
  if ((int)lVar3 == 1) {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    func_0x000107c6159c(param_1,lVar2,1);
  }
  else if ((int)lVar3 == 0) {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    func_0x000107c6159c(param_1,lVar2,0);
  }
  else {
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  lVar5 = (long)*(int *)(param_3 + 0x14);
  lVar2 = 0;
  FUN_100dd8cfc();
  lVar6 = *(long *)(lVar2 + -8);
  lVar3 = param_2 + lVar5;
  (**(code **)(lVar6 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    lVar3 = 0x112d36368;
    func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
    func_0x000107c610b4(param_1 + lVar5,param_2 + lVar5,
                        *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    return param_1;
  }
  lVar3 = param_2 + lVar5;
  func_0x000107c614c4(lVar3,lVar2);
  iVar1 = (int)lVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1 + lVar5,param_2 + lVar5,lVar3);
      uVar4 = 0;
    }
    else {
      if (iVar1 != 1) {
LAB_100dd9e38:
        func_0x000107c610b4(param_1 + lVar5,param_2 + lVar5,*(undefined8 *)(lVar6 + 0x40));
        goto LAB_100dd9eac;
      }
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1 + lVar5,param_2 + lVar5,lVar3);
      uVar4 = 1;
    }
  }
  else if (iVar1 == 2) {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1 + lVar5,param_2 + lVar5,lVar3);
    uVar4 = 2;
  }
  else {
    if (iVar1 != 3) goto LAB_100dd9e38;
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1 + lVar5,param_2 + lVar5,lVar3);
    uVar4 = 3;
  }
  func_0x000107c6159c(param_1 + lVar5,lVar2,uVar4);
LAB_100dd9eac:
  (**(code **)(lVar6 + 0x38))(param_1 + lVar5,0,1,lVar2);
  return param_1;
}



/* Entry: 100dd9edc; end: 100dda293;  */

long FUN_100dd9edc(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  if (param_1 != param_2) {
    FUN_100dda294(param_1,FUN_100dd9bb4);
    lVar2 = 0;
    FUN_100dd9bb4();
    lVar3 = param_2;
    func_0x000107c614c4(param_2,lVar2);
    if ((int)lVar3 == 1) {
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
      func_0x000107c6159c(param_1,lVar2,1);
    }
    else if ((int)lVar3 == 0) {
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
      func_0x000107c6159c(param_1,lVar2,0);
    }
    else {
      func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
    }
  }
  lVar6 = (long)*(int *)(param_3 + 0x14);
  lVar4 = 0;
  FUN_100dd8cfc();
  lVar7 = *(long *)(lVar4 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar3 = param_1 + lVar6;
  (*pcVar8)(lVar3,1,lVar4);
  lVar2 = param_2 + lVar6;
  (*pcVar8)(lVar2,1,lVar4);
  if ((int)lVar3 == 0) {
    if ((int)lVar2 == 0) {
      if (param_1 == param_2) {
        return param_1;
      }
      FUN_100dda294(param_1 + lVar6,FUN_100dd8cfc);
      lVar3 = param_2 + lVar6;
      func_0x000107c614c4(lVar3,lVar4);
      iVar1 = (int)lVar3;
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          lVar3 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1 + lVar6,param_2 + lVar6,lVar3);
          func_0x000107c6159c(param_1 + lVar6,lVar4,0);
          return param_1;
        }
        if (iVar1 == 1) {
          lVar3 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1 + lVar6,param_2 + lVar6,lVar3);
          func_0x000107c6159c(param_1 + lVar6,lVar4,1);
          return param_1;
        }
      }
      else {
        if (iVar1 == 2) {
          lVar3 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1 + lVar6,param_2 + lVar6,lVar3);
          func_0x000107c6159c(param_1 + lVar6,lVar4,2);
          return param_1;
        }
        if (iVar1 == 3) {
          lVar3 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1 + lVar6,param_2 + lVar6,lVar3);
          func_0x000107c6159c(param_1 + lVar6,lVar4,3);
          return param_1;
        }
      }
      uVar5 = *(undefined8 *)(lVar7 + 0x40);
      goto LAB_100dda07c;
    }
    FUN_100dda294(param_1 + lVar6,FUN_100dd8cfc);
  }
  else if ((int)lVar2 == 0) {
    lVar3 = param_2 + lVar6;
    func_0x000107c614c4(lVar3,lVar4);
    iVar1 = (int)lVar3;
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        lVar3 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1 + lVar6,param_2 + lVar6,lVar3);
        uVar5 = 0;
      }
      else {
        if (iVar1 != 1) {
LAB_100dda138:
          func_0x000107c610b4(param_1 + lVar6,param_2 + lVar6,*(undefined8 *)(lVar7 + 0x40));
          goto LAB_100dda1ac;
        }
        lVar3 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1 + lVar6,param_2 + lVar6,lVar3);
        uVar5 = 1;
      }
    }
    else if (iVar1 == 2) {
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1 + lVar6,param_2 + lVar6,lVar3);
      uVar5 = 2;
    }
    else {
      if (iVar1 != 3) goto LAB_100dda138;
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1 + lVar6,param_2 + lVar6,lVar3);
      uVar5 = 3;
    }
    func_0x000107c6159c(param_1 + lVar6,lVar4,uVar5);
LAB_100dda1ac:
    (**(code **)(lVar7 + 0x38))(param_1 + lVar6,0,1,lVar4);
    return param_1;
  }
  lVar3 = 0x112d36368;
  func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
  uVar5 = *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40);
LAB_100dda07c:
  func_0x000107c610b4(param_1 + lVar6,param_2 + lVar6,uVar5);
  return param_1;
}



/* Entry: 100dda294; end: 100dda2cf;  */

undefined8 FUN_100dda294(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100dda2d0; end: 100dda51b;  */

long FUN_100dda2d0(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = 0;
  FUN_100dd9bb4();
  lVar3 = param_2;
  func_0x000107c614c4(param_2,lVar2);
  if ((int)lVar3 == 1) {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    func_0x000107c6159c(param_1,lVar2,1);
  }
  else if ((int)lVar3 == 0) {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    func_0x000107c6159c(param_1,lVar2,0);
  }
  else {
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  lVar5 = (long)*(int *)(param_3 + 0x14);
  lVar2 = 0;
  FUN_100dd8cfc();
  lVar6 = *(long *)(lVar2 + -8);
  lVar3 = param_2 + lVar5;
  (**(code **)(lVar6 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    lVar3 = 0x112d36368;
    func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
    func_0x000107c610b4(param_1 + lVar5,param_2 + lVar5,
                        *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    return param_1;
  }
  lVar3 = param_2 + lVar5;
  func_0x000107c614c4(lVar3,lVar2);
  iVar1 = (int)lVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1 + lVar5,param_2 + lVar5,lVar3);
      uVar4 = 0;
    }
    else {
      if (iVar1 != 1) {
LAB_100dda478:
        func_0x000107c610b4(param_1 + lVar5,param_2 + lVar5,*(undefined8 *)(lVar6 + 0x40));
        goto LAB_100dda4ec;
      }
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1 + lVar5,param_2 + lVar5,lVar3);
      uVar4 = 1;
    }
  }
  else if (iVar1 == 2) {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1 + lVar5,param_2 + lVar5,lVar3);
    uVar4 = 2;
  }
  else {
    if (iVar1 != 3) goto LAB_100dda478;
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1 + lVar5,param_2 + lVar5,lVar3);
    uVar4 = 3;
  }
  func_0x000107c6159c(param_1 + lVar5,lVar2,uVar4);
LAB_100dda4ec:
  (**(code **)(lVar6 + 0x38))(param_1 + lVar5,0,1,lVar2);
  return param_1;
}



/* Entry: 100dda51c; end: 100dda8d3;  */

long FUN_100dda51c(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  if (param_1 != param_2) {
    FUN_100dda294(param_1,FUN_100dd9bb4);
    lVar2 = 0;
    FUN_100dd9bb4();
    lVar3 = param_2;
    func_0x000107c614c4(param_2,lVar2);
    if ((int)lVar3 == 1) {
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
      func_0x000107c6159c(param_1,lVar2,1);
    }
    else if ((int)lVar3 == 0) {
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
      func_0x000107c6159c(param_1,lVar2,0);
    }
    else {
      func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
    }
  }
  lVar6 = (long)*(int *)(param_3 + 0x14);
  lVar4 = 0;
  FUN_100dd8cfc();
  lVar7 = *(long *)(lVar4 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar3 = param_1 + lVar6;
  (*pcVar8)(lVar3,1,lVar4);
  lVar2 = param_2 + lVar6;
  (*pcVar8)(lVar2,1,lVar4);
  if ((int)lVar3 == 0) {
    if ((int)lVar2 == 0) {
      if (param_1 == param_2) {
        return param_1;
      }
      FUN_100dda294(param_1 + lVar6,FUN_100dd8cfc);
      lVar3 = param_2 + lVar6;
      func_0x000107c614c4(lVar3,lVar4);
      iVar1 = (int)lVar3;
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          lVar3 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1 + lVar6,param_2 + lVar6,lVar3);
          func_0x000107c6159c(param_1 + lVar6,lVar4,0);
          return param_1;
        }
        if (iVar1 == 1) {
          lVar3 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1 + lVar6,param_2 + lVar6,lVar3);
          func_0x000107c6159c(param_1 + lVar6,lVar4,1);
          return param_1;
        }
      }
      else {
        if (iVar1 == 2) {
          lVar3 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1 + lVar6,param_2 + lVar6,lVar3);
          func_0x000107c6159c(param_1 + lVar6,lVar4,2);
          return param_1;
        }
        if (iVar1 == 3) {
          lVar3 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1 + lVar6,param_2 + lVar6,lVar3);
          func_0x000107c6159c(param_1 + lVar6,lVar4,3);
          return param_1;
        }
      }
      uVar5 = *(undefined8 *)(lVar7 + 0x40);
      goto LAB_100dda6bc;
    }
    FUN_100dda294(param_1 + lVar6,FUN_100dd8cfc);
  }
  else if ((int)lVar2 == 0) {
    lVar3 = param_2 + lVar6;
    func_0x000107c614c4(lVar3,lVar4);
    iVar1 = (int)lVar3;
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        lVar3 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1 + lVar6,param_2 + lVar6,lVar3);
        uVar5 = 0;
      }
      else {
        if (iVar1 != 1) {
LAB_100dda778:
          func_0x000107c610b4(param_1 + lVar6,param_2 + lVar6,*(undefined8 *)(lVar7 + 0x40));
          goto LAB_100dda7ec;
        }
        lVar3 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1 + lVar6,param_2 + lVar6,lVar3);
        uVar5 = 1;
      }
    }
    else if (iVar1 == 2) {
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1 + lVar6,param_2 + lVar6,lVar3);
      uVar5 = 2;
    }
    else {
      if (iVar1 != 3) goto LAB_100dda778;
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1 + lVar6,param_2 + lVar6,lVar3);
      uVar5 = 3;
    }
    func_0x000107c6159c(param_1 + lVar6,lVar4,uVar5);
LAB_100dda7ec:
    (**(code **)(lVar7 + 0x38))(param_1 + lVar6,0,1,lVar4);
    return param_1;
  }
  lVar3 = 0x112d36368;
  func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
  uVar5 = *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40);
LAB_100dda6bc:
  func_0x000107c610b4(param_1 + lVar6,param_2 + lVar6,uVar5);
  return param_1;
}



/* Entry: 100dda8d4; end: 100dda8ff;  */

void FUN_100dda8d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 100dda900; end: 100dda983;  */

void FUN_100dda900(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  FUN_100dd9bb4();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    func_0x000100dd8ca8();
    if (param_2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      func_0x000107c6153c(param_1,0x100,2,&lStack_30,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 100dda984; end: 100ddaa73;  */

long * FUN_100dda984(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar5 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar2 = param_2;
    func_0x000107c614c4(param_2,param_3);
    if ((int)plVar2 == 1) {
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
      uVar3 = 1;
    }
    else {
      if ((int)plVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar5 + 0x40));
        return param_1;
      }
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
      uVar3 = 0;
    }
    func_0x000107c6159c(param_1,param_3,uVar3);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 100ddaa74; end: 100ddaabf;  */

void FUN_100ddaa74(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x000107c614c4();
  if ((uint)uVar1 < 2) {
    lVar2 = 0;
    func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000100ddaab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    return;
  }
  return;
}



/* Entry: 100ddaac0; end: 100ddae0f;  */

undefined8 FUN_100ddaac0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)uVar2 == 1) {
    lVar1 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
    uVar2 = 1;
  }
  else {
    if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar1 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
    uVar2 = 0;
  }
  func_0x000107c6159c(param_1,param_3,uVar2);
  return param_1;
}



/* Entry: 100ddae10; end: 100ddae13;  */

void FUN_100ddae10(void)

{
  return;
}



/* Entry: 100ddae14; end: 100ddae8b;  */

void FUN_100ddae14(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10d900898;
    puStack_28 = &UNK_10d9008c8;
    lStack_38 = lStack_40;
    func_0x000107c61528(param_1,0x100,4,&lStack_40);
  }
  return;
}



/* Entry: 100ddae8c; end: 100ddaff3;  */

long * FUN_100ddae8c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    func_0x000107c614c4(param_2,param_3);
    iVar2 = (int)plVar3;
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        lVar6 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
        uVar4 = 0;
      }
      else {
        if (iVar2 != 1) {
LAB_100ddaf64:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar6 + 0x40));
          return param_1;
        }
        lVar6 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
        uVar4 = 1;
      }
    }
    else if (iVar2 == 2) {
      lVar6 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
      uVar4 = 2;
    }
    else {
      if (iVar2 != 3) goto LAB_100ddaf64;
      lVar6 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
      uVar4 = 3;
    }
    func_0x000107c6159c(param_1,param_3,uVar4);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 100ddaff4; end: 100ddb03f;  */

void FUN_100ddaff4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x000107c614c4();
  if ((uint)uVar1 < 4) {
    lVar2 = 0;
    func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000100ddb030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    return;
  }
  return;
}



/* Entry: 100ddb040; end: 100ddb56f;  */

undefined8 FUN_100ddb040(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  iVar1 = (int)uVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      lVar2 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
      uVar3 = 0;
    }
    else {
      if (iVar1 != 1) {
LAB_100ddb0ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)
                  (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
        return param_1;
      }
      lVar2 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
      uVar3 = 1;
    }
  }
  else if (iVar1 == 2) {
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
    uVar3 = 2;
  }
  else {
    if (iVar1 != 3) goto LAB_100ddb0ec;
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
    uVar3 = 3;
  }
  func_0x000107c6159c(param_1,param_3,uVar3);
  return param_1;
}



/* Entry: 100ddb570; end: 100ddb573;  */

void FUN_100ddb570(void)

{
  return;
}



/* Entry: 100ddb574; end: 100ddb637;  */

void FUN_100ddb574(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    lStack_38 = lStack_40;
    lStack_30 = lStack_40;
    lStack_28 = lStack_40;
    func_0x000107c61528(param_1,0x100,4,&lStack_40);
  }
  return;
}



/* Entry: 100ddb638; end: 100ddb6d3;  */

void FUN_100ddb638(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_100dd9bb4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c6159c(puVar2);
  func_0x000100ddc10c(param_2,puVar2);
  FUN_100dda294(puVar2,FUN_100dd9bb4);
  *param_1 = (byte)param_2 & 1;
  return;
}



/* Entry: 100ddb6d4; end: 100ddb6f3;  */

void FUN_100ddb6d4(byte *param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_100dd9bb4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *puVar2 = 0;
  func_0x000107c6159c(puVar2);
  func_0x000100ddc10c(param_2,puVar2);
  FUN_100dda294(puVar2,FUN_100dd9bb4);
  *param_1 = (byte)param_2 & 1;
  return;
}



/* Entry: 100ddb6f4; end: 100ddb79f;  */

void FUN_100ddb6f4(byte *param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_100dd9bb4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *puVar2 = param_3;
  func_0x000107c6159c(puVar2);
  func_0x000100ddc10c(param_2,puVar2);
  FUN_100dda294(puVar2,FUN_100dd9bb4);
  *param_1 = (byte)param_2 & 1;
  return;
}



/* Entry: 100ddb7a0; end: 100ddbb9f;  */

void FUN_100ddb7a0(void)

{
  bool bVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar7;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar3 = 0;
  FUN_100dd8cfc();
  lStack_68 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  lVar14 = 0x112d36568;
  puStack_78 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d36568,&UNK_10d900a10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar4 = 0;
  FUN_100ddcdc8();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar15 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d36368;
  func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  uVar7 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  uStack_70 = uVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = uVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar13 - extraout_x12_00;
  FUN_100dd818c();
  lVar11 = *(long *)(lVar5 + 0x10);
  func_0x000107c6142c();
  if (lVar11 == 1) {
    FUN_100dd818c();
    bVar1 = *(long *)(lVar5 + 0x10) == 0;
    if (bVar1) {
      func_0x000107c6142c();
    }
    else {
      uVar7 = (ulong)*(byte *)(lVar10 + 0x50);
      FUN_100ddcd84(lVar5 + (uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff)),lVar15,FUN_100ddcdc8);
      func_0x000107c6142c(lVar5);
      FUN_100ddcd84(lVar15 + *(int *)(lVar4 + 0x18),lVar12,FUN_100dd8cfc);
      FUN_100dda294(lVar15,FUN_100ddcdc8);
    }
    lVar5 = lStack_68;
    pcVar9 = *(code **)(lStack_68 + 0x38);
    (*pcVar9)(lVar12,bVar1,1,lVar3);
    func_0x000107c6159c(lVar13,lVar3,4);
    (*pcVar9)(lVar13,0,1,lVar3);
    lVar14 = (long)*(int *)(lVar14 + 0x30);
    func_0x000100ddd46c(lVar12,lVar8,0x112d36368,&UNK_10d9008e0);
    func_0x000100ddd46c(lVar13,lVar8 + lVar14,0x112d36368,&UNK_10d9008e0);
    pcVar9 = *(code **)(lVar5 + 0x30);
    lVar5 = lVar8;
    (*pcVar9)(lVar8,1,lVar3);
    uVar7 = uStack_70;
    if ((int)lVar5 == 1) {
      func_0x000100ddd4b4(lVar13,0x112d36368,&UNK_10d9008e0);
      func_0x000100ddd4b4(lVar12,0x112d36368,&UNK_10d9008e0);
      lVar14 = lVar8 + lVar14;
      (*pcVar9)(lVar14,1,lVar3);
      if ((int)lVar14 != 1) {
LAB_100ddbad0:
        func_0x000100ddd4b4(lVar8,0x112d36568,&UNK_10d900a10);
        goto LAB_100ddbae8;
      }
      func_0x000100ddd4b4(lVar8,0x112d36368,&UNK_10d9008e0);
    }
    else {
      func_0x000100ddd46c(lVar8,uStack_70,0x112d36368,&UNK_10d9008e0);
      lVar5 = lVar8 + lVar14;
      (*pcVar9)(lVar5,1,lVar3);
      puVar2 = puStack_78;
      if ((int)lVar5 == 1) {
        func_0x000100ddd4b4(lVar13,0x112d36368,&UNK_10d9008e0);
        func_0x000100ddd4b4(lVar12,0x112d36368,&UNK_10d9008e0);
        FUN_100dda294(uVar7,FUN_100dd8cfc);
        goto LAB_100ddbad0;
      }
      func_0x000100ddd3d8(lVar8 + lVar14,puStack_78,FUN_100dd8cfc);
      uVar6 = uVar7;
      FUN_100ddbc44(uVar7,puVar2);
      FUN_100dda294(puVar2,FUN_100dd8cfc);
      func_0x000100ddd4b4(lVar13,0x112d36368,&UNK_10d9008e0);
      func_0x000100ddd4b4(lVar12,0x112d36368,&UNK_10d9008e0);
      FUN_100dda294(uVar7,FUN_100dd8cfc);
      func_0x000100ddd4b4(lVar8,0x112d36368,&UNK_10d9008e0);
      if ((uVar6 & 1) == 0) goto LAB_100ddbae8;
    }
    func_0x000100df24ac();
  }
  else {
LAB_100ddbae8:
    func_0x000100df2578();
  }
  return;
}



/* Entry: 100ddbba0; end: 100ddbbb7;  */

undefined * FUN_100ddbba0(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  pcVar1 = FUN_100ddb638;
  func_0x000103dbf46c();
  func_0x0001000bfde0(FUN_100ddb638,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(param_1);
  puVar2 = PTR___sSbSQsWP_11034dd50;
  func_0x000104884898(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(pcVar1);
  return puVar2;
}



/* Entry: 100ddbbb8; end: 100ddbc1f;  */

undefined * FUN_100ddbbb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000103dbf46c();
  func_0x0001000bfde0(param_3,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(param_1);
  puVar1 = PTR___sSbSQsWP_11034dd50;
  func_0x000104884898(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(param_3);
  return puVar1;
}



/* Entry: 100ddbc20; end: 100ddbc43;  */

undefined * FUN_100ddbc20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0x100ddb6dc;
  func_0x000103dbf46c();
  func_0x0001000bfde0(0x100ddb6dc,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(param_1);
  puVar2 = PTR___sSbSQsWP_11034dd50;
  func_0x000104884898(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(uVar1);
  return puVar2;
}



/* Entry: 100ddbc44; end: 100ddcd83;  */

uint FUN_100ddbc44(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  uint uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined1 *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000107c5ede0();
  lStack_80 = *(long *)(lVar2 + -8);
  lStack_78 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  puStack_90 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_98 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = (undefined1 *)(lVar2 - extraout_x12_00);
  puStack_a0 = puVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)puVar5 - extraout_x12_01;
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = (undefined1 *)(lVar2 - extraout_x12_02);
  puStack_88 = puVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar5 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar9 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12_05;
  lVar3 = 0;
  FUN_100dd8cfc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar15 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar15 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar11 - extraout_x12_08;
  lVar2 = 0x112d36560;
  func_0x0001000285a8(0x112d36560,&UNK_10d900a08);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar12 - extraout_x8_01;
  lVar2 = (long)*(int *)(lVar2 + 0x30);
  FUN_100ddcd84(uStack_70,lVar8,FUN_100dd8cfc);
  FUN_100ddcd84(uStack_68,lVar8 + lVar2,FUN_100dd8cfc);
  lVar4 = lVar8;
  func_0x000107c614c4(lVar8,lVar3);
  puVar5 = puStack_88;
  iVar1 = (int)lVar4;
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      FUN_100ddcd84(lVar8,lVar11,FUN_100dd8cfc);
      lVar4 = lVar8 + lVar2;
      func_0x000107c614c4(lVar4,lVar3);
      lVar12 = lStack_78;
      lVar3 = lStack_80;
      lVar10 = lVar11;
      if ((int)lVar4 != 1) goto LAB_100ddc064;
      pcVar7 = *(code **)(lStack_80 + 0x20);
      (*pcVar7)(lVar9,lVar11,lStack_78);
      (*pcVar7)(puVar5,lVar8 + lVar2,lVar12);
      lVar2 = lVar9;
      func_0x000107c5edac(lVar9,puVar5);
      uVar6 = (uint)lVar2;
      pcVar7 = *(code **)(lVar3 + 8);
      goto LAB_100ddc030;
    }
    FUN_100ddcd84(lVar8,lVar12,FUN_100dd8cfc);
    lVar9 = lVar8 + lVar2;
    func_0x000107c614c4(lVar9,lVar3);
    lVar3 = lStack_78;
    lVar4 = lStack_80;
    lVar10 = lVar12;
    if ((int)lVar9 != 0) {
LAB_100ddc064:
      (**(code **)(lStack_80 + 8))(lVar10,lStack_78);
      goto LAB_100ddc074;
    }
    pcVar7 = *(code **)(lStack_80 + 0x20);
    (*pcVar7)(lVar14,lVar12,lStack_78);
    (*pcVar7)(lVar13,lVar8 + lVar2,lVar3);
    lVar2 = lVar14;
    func_0x000107c5edac(lVar14,lVar13);
    uVar6 = (uint)lVar2;
    pcVar7 = *(code **)(lVar4 + 8);
    (*pcVar7)(lVar13,lVar3);
    (*pcVar7)(lVar14,lVar3);
  }
  else {
    if (iVar1 == 2) {
      FUN_100ddcd84(lVar8,lVar10,FUN_100dd8cfc);
      lVar4 = lVar8 + lVar2;
      func_0x000107c614c4(lVar4,lVar3);
      lVar12 = lStack_78;
      lVar3 = lStack_80;
      lVar9 = lStack_a8;
      if ((int)lVar4 != 2) goto LAB_100ddc064;
      pcVar7 = *(code **)(lStack_80 + 0x20);
      (*pcVar7)(lStack_a8,lVar10,lStack_78);
      puVar5 = puStack_a0;
    }
    else {
      if (iVar1 != 3) {
        lVar2 = lVar8 + lVar2;
        func_0x000107c614c4(lVar2,lVar3);
        if ((int)lVar2 == 4) {
          FUN_100dda294(lVar8,FUN_100dd8cfc);
          uVar6 = 1;
          goto LAB_100ddc090;
        }
LAB_100ddc074:
        func_0x000100ddd4b4(lVar8,0x112d36560,&UNK_10d900a08);
        uVar6 = 0;
        goto LAB_100ddc090;
      }
      FUN_100ddcd84(lVar8,lVar15,FUN_100dd8cfc);
      lVar4 = lVar8 + lVar2;
      func_0x000107c614c4(lVar4,lVar3);
      lVar12 = lStack_78;
      lVar3 = lStack_80;
      lVar9 = lStack_98;
      lVar10 = lVar15;
      if ((int)lVar4 != 3) goto LAB_100ddc064;
      pcVar7 = *(code **)(lStack_80 + 0x20);
      (*pcVar7)(lStack_98,lVar15,lStack_78);
      puVar5 = puStack_90;
    }
    (*pcVar7)(puVar5,lVar8 + lVar2,lVar12);
    lVar2 = lVar9;
    func_0x000107c5edac(lVar9,puVar5);
    uVar6 = (uint)lVar2;
    pcVar7 = *(code **)(lVar3 + 8);
LAB_100ddc030:
    (*pcVar7)(puVar5,lVar12);
    (*pcVar7)(lVar9,lVar12);
  }
  FUN_100dda294(lVar8,FUN_100dd8cfc);
LAB_100ddc090:
  return uVar6 & 1;
}



/* Entry: 100ddcd84; end: 100ddcdc7;  */

undefined8 FUN_100ddcd84(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100ddcdc8; end: 100ddcddb;  */

void FUN_100ddcdc8(undefined8 param_1)

{
  if (lRam0000000112d36608 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e60e70c);
  return;
}



/* Entry: 100ddcddc; end: 100ddce0b;  */

void FUN_100ddcddc(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 100ddce0c; end: 100ddd3d7;  */

undefined * FUN_100ddce0c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  code *pcVar13;
  code *pcVar14;
  undefined *puVar15;
  long lVar16;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5ef5c();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_68 = (long)puVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_88 = ((long)puVar11 - extraout_x12) - extraout_x12_00;
  puVar15 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar15 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d36590,&UNK_10d90fc40);
    puVar3 = puVar15;
    func_0x000107c602e8();
    puStack_78 = (undefined *)0x0;
    puStack_70 = puVar3 + 0x38;
    lStack_90 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    lVar16 = *(long *)(lVar12 + 0x48);
    pcVar14 = *(code **)(lVar12 + 0x10);
    puStack_98 = puVar15;
    do {
      lVar1 = lStack_88;
      (*pcVar14)(lStack_88,lStack_90 + lVar16 * (long)puStack_78,lVar2);
      pcStack_80 = *(code **)(lVar12 + 0x20);
      (*pcStack_80)(lStack_68,lVar1,lVar2);
      uVar10 = *(ulong *)(puVar3 + 0x28);
      uVar4 = 0x112d36598;
      func_0x000100ddd4f4(0x112d36598,PTR___s10Foundation8CalendarV9ComponentOSHAAMc_110350db0);
      func_0x000107c5fa4c(uVar10,lVar2,uVar4);
      uVar9 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar10 = uVar10 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar10 >> 6;
      uVar7 = *(ulong *)(puStack_70 + uVar6 * 8);
      uVar8 = 1L << (uVar10 & 0x3f);
      if ((uVar8 & uVar7) != 0) {
        do {
          (*pcVar14)(puVar11,*(long *)(puVar3 + 0x30) + uVar10 * lVar16,lVar2);
          uVar4 = 0x112d365a0;
          func_0x000100ddd4f4(0x112d365a0,PTR___s10Foundation8CalendarV9ComponentOSQAAMc_110350db8);
          puVar5 = puVar11;
          func_0x000107c5fab8(puVar11,lStack_68,lVar2,uVar4);
          pcVar13 = *(code **)(lVar12 + 8);
          (*pcVar13)(puVar11,lVar2);
          if (((ulong)puVar5 & 1) != 0) {
            (*pcVar13)(lStack_68,lVar2);
            puVar15 = puStack_98;
            goto LAB_100ddcf14;
          }
          uVar10 = uVar10 + 1 & ~uVar9;
          uVar6 = uVar10 >> 6;
          uVar7 = *(ulong *)(puStack_70 + uVar6 * 8);
          uVar8 = 1L << (uVar10 & 0x3f);
          puVar15 = puStack_98;
        } while ((uVar8 & uVar7) != 0);
      }
      *(ulong *)(puStack_70 + uVar6 * 8) = uVar8 | uVar7;
      (*pcStack_80)(*(long *)(puVar3 + 0x30) + uVar10 * lVar16,lStack_68,lVar2);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100ddd0a0);
        (*pcVar14)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
LAB_100ddcf14:
      puStack_78 = puStack_78 + 1;
    } while (puStack_78 != puVar15);
  }
  return puVar3;
}



/* Entry: 100ddd3d8; end: 100ddd533;  */

undefined8 FUN_100ddd3d8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100ddd534; end: 100ddd563;  */

void FUN_100ddd534(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  ulong uVar3;
  long unaff_x20;
  undefined1 *puVar4;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = 0;
  FUN_100dd9480();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (puVar4,unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
  func_0x000107c6159c(puVar4,lVar2,2);
  func_0x000100087c34(puVar4);
  FUN_100dda294(puVar4,FUN_100dd9480);
  return;
}



/* Entry: 100ddd564; end: 100ddd56b;  */

void FUN_100ddd564(void)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_100dd9480();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *puVar2 = 3;
  func_0x000107c6159c(puVar2);
  func_0x000100087c34(puVar2);
  FUN_100dda294(puVar2,FUN_100dd9480);
  return;
}



/* Entry: 100ddd56c; end: 100ddd583;  */

void FUN_100ddd56c(void)

{
  FUN_100dd8100();
  return;
}



/* Entry: 100ddd584; end: 100ddd71f;  */

long * FUN_100ddd584(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    func_0x000107c6157c();
    return (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
  }
  lVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar4;
  param_1[2] = param_2[2];
  lVar6 = (long)*(int *)(param_3 + 0x18);
  lVar3 = 0;
  FUN_100dd8cfc();
  func_0x000107c61434(lVar4);
  lVar4 = (long)param_2 + lVar6;
  func_0x000107c614c4(lVar4,lVar3);
  iVar2 = (int)lVar4;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4)
      ;
      func_0x000107c6159c((long)param_1 + lVar6,lVar3,0);
      return param_1;
    }
    if (iVar2 == 1) {
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4)
      ;
      func_0x000107c6159c((long)param_1 + lVar6,lVar3,1);
      return param_1;
    }
  }
  else {
    if (iVar2 == 2) {
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4)
      ;
      func_0x000107c6159c((long)param_1 + lVar6,lVar3,2);
      return param_1;
    }
    if (iVar2 == 3) {
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4)
      ;
      func_0x000107c6159c((long)param_1 + lVar6,lVar3,3);
      return param_1;
    }
  }
  func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                      *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  return param_1;
}



/* Entry: 100ddd720; end: 100ddd78b;  */

void FUN_100ddd720(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_2 + 0x18);
  uVar2 = 0;
  FUN_100dd8cfc(0);
  lVar3 = param_1 + iVar1;
  func_0x000107c614c4(lVar3,uVar2);
  if ((uint)lVar3 < 4) {
    lVar3 = 0;
    func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000100ddd77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1 + iVar1,lVar3);
    return;
  }
  return;
}



/* Entry: 100ddd78c; end: 100ddd8ef;  */

undefined8 * FUN_100ddd78c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = param_2[2];
  lVar5 = (long)*(int *)(param_3 + 0x18);
  lVar2 = 0;
  FUN_100dd8cfc();
  func_0x000107c61434(uVar4);
  lVar3 = (long)param_2 + lVar5;
  func_0x000107c614c4(lVar3,lVar2);
  iVar1 = (int)lVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar3)
      ;
      uVar4 = 0;
    }
    else {
      if (iVar1 != 1) {
LAB_100ddd860:
        func_0x000107c610b4((long)param_1 + lVar5,(long)param_2 + lVar5,
                            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
        return param_1;
      }
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar3)
      ;
      uVar4 = 1;
    }
  }
  else if (iVar1 == 2) {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar3);
    uVar4 = 2;
  }
  else {
    if (iVar1 != 3) goto LAB_100ddd860;
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar3);
    uVar4 = 3;
  }
  func_0x000107c6159c((long)param_1 + lVar5,lVar2,uVar4);
  return param_1;
}



/* Entry: 100ddd8f0; end: 100dddd43;  */

undefined8 * FUN_100ddd8f0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[2] = param_2[2];
  if (param_1 == param_2) {
    return param_1;
  }
  lVar5 = (long)*(int *)(param_3 + 0x18);
  FUN_100dda294((long)param_1 + lVar5,FUN_100dd8cfc);
  lVar2 = 0;
  FUN_100dd8cfc();
  lVar3 = (long)param_2 + lVar5;
  func_0x000107c614c4(lVar3,lVar2);
  iVar1 = (int)lVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar3)
      ;
      uVar4 = 0;
    }
    else {
      if (iVar1 != 1) {
LAB_100ddd9ec:
        func_0x000107c610b4((long)param_1 + lVar5,(long)param_2 + lVar5,
                            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
        return param_1;
      }
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar3)
      ;
      uVar4 = 1;
    }
  }
  else if (iVar1 == 2) {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar3);
    uVar4 = 2;
  }
  else {
    if (iVar1 != 3) goto LAB_100ddd9ec;
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar3);
    uVar4 = 3;
  }
  func_0x000107c6159c((long)param_1 + lVar5,lVar2,uVar4);
  return param_1;
}



/* Entry: 100dddd44; end: 100dddd5b;  */

void FUN_100dddd44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 100dddd5c; end: 100dddddb;  */

void FUN_100dddd5c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_38 = &UNK_10d900a80;
  lVar1 = 0x13f;
  FUN_100dd8cfc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 100dddddc; end: 100dddf43;  */

int FUN_100dddddc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100ddde58;
        goto LAB_100ddde3c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100ddde3c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_100ddde58:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100dddf44; end: 100dddf83;  */

void FUN_100dddf44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d36648 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d900ac8;
  func_0x000107c61520(&UNK_10d900ac8,&UNK_1103527c0);
  puRam0000000112d36648 = puVar1;
  return;
}



/* Entry: 100dddf84; end: 100dddfb7;  */

void FUN_100dddf84(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100c96970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 100dddfb8; end: 100dde077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100dddfb8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d36668;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d36668);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b0c40;
    func_0x000107c61168(PTR_PTR_1126b0c40);
    func_0x000107c450a4(0x4048000000000000,0x4048000000000000);
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c46db4();
    func_0x000107c5a050();
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100dde078; end: 100dde08b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100dde078(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d36670;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d36670);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_100dde08c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 100dde08c; end: 100dde1a3;  */

undefined * FUN_100dde08c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c5a100(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  FUN_100df21f0();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c56ba8(puVar1);
  func_0x000107c61170(puVar1);
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef10120);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 100dde1a4; end: 100dde1b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100dde1a4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d36678;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d36678);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_100dde214();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 100dde1b8; end: 100dde213;  */

long FUN_100dde1b8(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 100dde214; end: 100dde303;  */

undefined * FUN_100dde214(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a100();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61174(puVar1);
  func_0x000107c5a050();
  func_0x000107c59c74(puVar1);
  func_0x000107c56ba8(puVar1);
  func_0x000107c61170(puVar1);
  uVar3 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef100f0);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 100dde304; end: 100dde317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100dde304(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d36680;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d36680);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100dde318();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100dde318; end: 100dde41b;  */

undefined * FUN_100dde318(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001008479c8();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 7;
  *(undefined8 *)(param_1 + 0x10) = 3;
  lVar1 = param_1;
  FUN_100dddfb8();
  *(long *)(param_1 + 0x20) = lVar1;
  FUN_100dde078();
  *(long *)(param_1 + 0x28) = lVar1;
  FUN_100dde1a4();
  *(long *)(param_1 + 0x30) = lVar1;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  uVar3 = 0;
  FUN_100de0dd0(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  lVar1 = param_1;
  func_0x000107c5fc48(param_1,uVar3);
  func_0x000107c61574(param_1);
  func_0x000107c45784(puVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c5a050(puVar2);
  func_0x000107c52b2c(puVar2);
  func_0x000107c59594(0x402e000000000000,puVar2);
  func_0x000107c52610(puVar2);
  func_0x000107c54280(puVar2);
  return puVar2;
}



/* Entry: 100dde41c; end: 100dde42f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100dde41c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d36690;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d36690);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100dde430();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100dde430; end: 100dde58b;  */

undefined * FUN_100dde430(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x000107c469d8(0,0,0,0);
  func_0x000107c53fcc();
  func_0x000107c53e08(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c58f5c(puVar1);
  func_0x000107c5a050(puVar1);
  FUN_100de0dd0(0,0x112d366c8,&PTR_PTR_1126b5a18);
  func_0x000107c614e8();
  uVar3 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010ef10040);
  func_0x000107c4fbd4(puVar1);
  func_0x000107c61170(uVar3);
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef100d0);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 100dde58c; end: 100dde59f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100dde58c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d36698;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d36698);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    (*(code *)0x100dde600)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100dde5a0; end: 100dde727;  */

long FUN_100dde5a0(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 100dde728; end: 100dde74f; -[_TtC22AgeVerificationFeature47AgeVerificationVerificationMethodViewController initWithCoder:] */

void FUN_100dde728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_100de0978();
  return;
}



/* Entry: 100dde750; end: 100dde7b7; -[_TtC22AgeVerificationFeature47AgeVerificationVerificationMethodViewController viewDidLoad] */

void FUN_100dde750(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  FUN_100de01bc();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  func_0x000107c5a304(param_1);
  FUN_100dde7b8();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100dde7b8; end: 100ddeff3;  */

/* WARNING: Possible PIC construction at 0x000100ddf1d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ddf26c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ddf308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ddf3a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ddf30c) */
/* WARNING: Removing unreachable block (ram,0x000100ddf270) */
/* WARNING: Removing unreachable block (ram,0x000100ddf1d4) */
/* WARNING: Removing unreachable block (ram,0x000100ddf3a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dde7b8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long *plVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  
  lVar2 = unaff_x20;
  func_0x000107c44ca0();
  func_0x000107c61180();
  lVar3 = lVar2;
  FUN_100df2710();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e18(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  lVar2 = unaff_x20;
  func_0x000107c44ca0();
  func_0x000107c61180();
  func_0x000107c54210();
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ddefbc);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  FUN_100dde304();
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ddefc0);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  FUN_100dde41c();
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ddefc4);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  FUN_100dde58c();
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ddefc8);
    (*pcVar1)();
  }
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d36688);
  func_0x000107c3d89c();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 0x1b;
  *(undefined8 *)(lVar2 + 0x10) = 0xd;
  lVar3 = _DAT_112d36680;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d36680);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ddefcc);
    (*pcVar1)();
  }
  lVar6 = lVar5;
  func_0x000107c4ac04();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lVar6;
  func_0x000107c5cbe4(lVar6);
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  uVar8 = uVar4;
  func_0x000107c40284(0x405e000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(lVar2 + 0x20) = uVar8;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ddefd0);
    (*pcVar1)();
  }
  lVar6 = lVar5;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  uVar8 = uVar4;
  func_0x000107c40284(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar2 + 0x28) = uVar8;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ddefd4);
    (*pcVar1)();
  }
  lVar6 = lVar5;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  uVar8 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar2 + 0x30) = uVar8;
  lVar5 = _DAT_112d36698;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d36698);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar7 = lVar6;
    func_0x000107c4ac04();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    lVar6 = lVar7;
    func_0x000107c3ec1c(lVar7);
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    uVar8 = uVar4;
    func_0x000107c40284(0xc03c000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar2 + 0x38) = uVar8;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ddefdc);
      (*pcVar1)();
    }
    lVar7 = lVar6;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    uVar8 = uVar4;
    func_0x000107c40284(0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar7);
    *(undefined8 *)(lVar2 + 0x40) = uVar8;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ddefe0);
      (*pcVar1)();
    }
    lVar7 = lVar6;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    uVar8 = uVar4;
    func_0x000107c40284(0xc038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar7);
    *(undefined8 *)(lVar2 + 0x48) = uVar8;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ddefe4);
      (*pcVar1)();
    }
    lVar7 = lVar6;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    uVar8 = uVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar7);
    *(undefined8 *)(lVar2 + 0x50) = uVar8;
    lVar6 = _DAT_112d36690;
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d36690);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
    func_0x000107c3ec1c(uVar9);
    func_0x000107c61180();
    uVar4 = uVar8;
    func_0x000107c40284(0x4020000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar2 + 0x58) = uVar4;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar6);
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar7 = lVar3;
      func_0x000107c4acb0();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      uVar8 = uVar4;
      func_0x000107c40284(0x4034000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(lVar7);
      *(undefined8 *)(lVar2 + 0x60) = uVar8;
      uVar4 = *(undefined8 *)(unaff_x20 + lVar6);
      func_0x000107c5ce8c();
      func_0x000107c61180();
      lVar3 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ddefec);
        (*pcVar1)();
      }
      lVar7 = lVar3;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      uVar8 = uVar4;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(lVar7);
      *(undefined8 *)(lVar2 + 0x68) = uVar8;
      uVar8 = *(undefined8 *)(unaff_x20 + lVar6);
      func_0x000107c3ec1c();
      func_0x000107c61180();
      uVar9 = *(undefined8 *)(unaff_x20 + lVar5);
      func_0x000107c5cbe4(uVar9);
      func_0x000107c61180();
      uVar4 = uVar8;
      func_0x000107c40284(0xc020000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar9);
      *(undefined8 *)(lVar2 + 0x70) = uVar4;
      uVar4 = uVar13;
      func_0x000107c3f75c();
      func_0x000107c61180();
      lVar3 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar5 = lVar3;
        func_0x000107c3f75c();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        uVar8 = uVar4;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        func_0x000107c61170(lVar5);
        *(undefined8 *)(lVar2 + 0x78) = uVar8;
        func_0x000107c3f764();
        func_0x000107c61180();
        lVar3 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar3 != 0) {
          puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
          lVar5 = lVar3;
          func_0x000107c3f764(lVar3);
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          uVar4 = uVar13;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          func_0x000107c61170(lVar5);
          *(undefined8 *)(lVar2 + 0x80) = uVar4;
          uVar4 = 0;
          FUN_100de0dd0(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
          lVar3 = lVar2;
          func_0x000107c5fc48(lVar2,uVar4);
          func_0x000107c61574(lVar2);
          func_0x000107c3d048(puVar10);
          func_0x000107c61170(lVar3);
          FUN_100dde1a4();
          lVar2 = unaff_x20 + _DAT_112d36650;
          uVar4 = *(undefined8 *)(lVar2 + 0x18);
          lVar5 = lVar2;
          func_0x0001000a8868(lVar2,uVar4);
          FUN_100ddb7a0();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar4);
          func_0x000107c59c6c(lVar3);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar5);
          func_0x0001000a8868(lVar2,*(undefined8 *)(lVar2 + 0x18));
          plVar11 = (long *)0x0;
          FUN_100dd8be4();
          FUN_100ddbba0();
          puVar10 = &UNK_110352868;
          func_0x000107c613fc(&UNK_110352868,0x18,7);
          func_0x000107c61614(puVar10 + 0x10,unaff_x20);
          uVar4 = 0x100de0d48;
          puVar12 = puVar10;
          (**(code **)(*plVar11 + 0x60))(0x100de0d48);
          func_0x000107c61574(plVar11);
          func_0x000107c61574(puVar10);
          uVar13 = uVar4;
          func_0x000107c614f0(uVar4);
          (**(code **)(puVar12 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d36660),uVar13,puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar4);
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ddeff4);
        (*pcVar1)();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ddeff0);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ddefe8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ddefd8);
  (*pcVar1)();
}



/* Entry: 100ddeff4; end: 100ddf09b; -[_TtC22AgeVerificationFeature47AgeVerificationVerificationMethodViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ddeff4(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_100dd9480();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c6159c(puVar2);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(puVar2);
  func_0x000100de0cd0(puVar2,FUN_100dd9480);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ddf09c; end: 100ddf45b;  */

/* WARNING: Possible PIC construction at 0x000100ddf1d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ddf26c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ddf308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ddf3a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ddf30c) */
/* WARNING: Removing unreachable block (ram,0x000100ddf270) */
/* WARNING: Removing unreachable block (ram,0x000100ddf1d4) */
/* WARNING: Removing unreachable block (ram,0x000100ddf3a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ddf09c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  
  FUN_100dde1a4();
  lVar1 = unaff_x20 + _DAT_112d36650;
  uVar6 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = lVar1;
  func_0x0001000a8868(lVar1,uVar6);
  FUN_100ddb7a0();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar6);
  func_0x000107c59c6c(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar2);
  func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
  plVar3 = (long *)0x0;
  FUN_100dd8be4();
  FUN_100ddbba0();
  puVar4 = &UNK_110352868;
  func_0x000107c613fc(&UNK_110352868,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  uVar6 = 0x100de0d48;
  puVar7 = puVar4;
  (**(code **)(*plVar3 + 0x60))(0x100de0d48);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  uVar5 = uVar6;
  func_0x000107c614f0(uVar6);
  (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d36660),uVar5,puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar6);
  return;
}



/* Entry: 100ddf45c; end: 100ddf58b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ddf45c(char *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  if (*param_1 == '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d36688);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c5ba54(uVar1);
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d36688);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c5be00(uVar1);
  }
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100ddf58c; end: 100ddf733;  */

void FUN_100ddf58c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000100df2730();
  lVar1 = param_1;
  FUN_100de9c28();
  lVar6 = ((ulong)*(uint *)(lVar1 + 0x30) + 7 & 0x1fffffff8) + 8;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  lVar2 = lVar1;
  FUN_100df226c();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar6);
  uStack_60 = 0x100de0e38;
  uStack_58 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100de205c;
  puStack_68 = &UNK_110352948;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61574(uStack_58);
  *(undefined **)(lVar1 + 0x20) = puVar4;
  puVar4 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  uVar5 = 0;
  FUN_100de0dd0(0,0x112d360a8,&PTR_PTR_1126aed70);
  lVar6 = lVar1;
  func_0x000107c5fc48(lVar1,uVar5);
  func_0x000107c61574(lVar1);
  func_0x000107c4656c(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar6);
  func_0x000107c4f018();
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 100ddf734; end: 100ddf927;  */

void FUN_100ddf734(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  FUN_100df2754();
  lVar2 = param_1;
  FUN_100de9c28();
  lVar8 = ((ulong)*(uint *)(lVar2 + 0x30) + 7 & 0x1fffffff8) + 8;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 3;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  lVar3 = lVar2;
  FUN_100df226c();
  puVar4 = &UNK_110352868;
  func_0x000107c613fc(&UNK_110352868,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  func_0x000107c6157c(puVar4);
  func_0x000107c5fadc(lVar3,lVar8);
  func_0x000107c6142c(lVar8);
  uStack_70 = 0x100de0d38;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100de205c;
  puStack_78 = &UNK_1103528f8;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar3);
  puVar1 = puStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar1);
  *(undefined **)(lVar2 + 0x20) = puVar6;
  puVar4 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  uVar7 = 0;
  FUN_100de0dd0(0,0x112d360a8,&PTR_PTR_1126aed70);
  lVar8 = lVar2;
  func_0x000107c5fc48(lVar2,uVar7);
  func_0x000107c61574(lVar2);
  func_0x000107c4656c(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar8);
  func_0x000107c4f018();
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 100ddf928; end: 100ddfa9f;  */

void FUN_100ddf928(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uStack_40 = 0x100de0d40;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110352920;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100ddfaa0; end: 100ddfcab;  */

void FUN_100ddfaa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  FUN_100df281c();
  puVar1 = &UNK_110352868;
  func_0x000107c613fc(&UNK_110352868,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  func_0x000107c6157c(puVar1);
  uVar6 = param_2;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  uStack_60 = 0x100de0d28;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100de205c;
  puStack_68 = &UNK_110352880;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  puVar4 = puStack_58;
  func_0x000107c61574(puVar1);
  func_0x000107c61574();
  FUN_100df2834();
  puVar1 = puVar4;
  FUN_100de9c28();
  func_0x000107c613fc();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined **)(puVar1 + 0x20) = puVar3;
  puVar5 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c61174(puVar3);
  func_0x000107c5fadc(puVar4,uVar6);
  func_0x000107c6142c(uVar6);
  uVar6 = 0;
  FUN_100de0dd0(0,0x112d360a8,&PTR_PTR_1126aed70);
  puVar7 = puVar1;
  func_0x000107c5fc48(puVar1,uVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c46dd8(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c4f018();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 100ddfcac; end: 100ddfd6f;  */

void FUN_100ddfcac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_1103528b8;
  func_0x000107c613fc(&UNK_1103528b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  uStack_40 = 0x100de0d30;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103528d0;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100ddfd70; end: 100de007b;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ddfd70(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lStack_60;
  long alStack_58 [3];
  
  lVar2 = 0;
  FUN_100dd9480();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar3 = (long *)((long)&lStack_60 + lVar1);
  lVar6 = (long)alStack_58;
  func_0x000107c61428(param_1 + 0x10,lVar6,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112d36658);
    func_0x000107c6157c(uVar4);
    func_0x000107c61170(param_1);
    func_0x000107c5c84c();
    func_0x000107c61180();
    if (param_2 == 0) {
      lVar5 = 0;
      lVar6 = 0;
    }
    else {
      lVar5 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
    }
    *plVar3 = lVar5;
    *(long *)((long)alStack_58 + lVar1) = lVar6;
    func_0x000107c6159c(plVar3,lVar2,1);
    func_0x0001002a64a8(plVar3);
    func_0x000107c61574(uVar4);
    func_0x000100de0cd0(plVar3,FUN_100dd9480);
  }
  return;
}



/* Entry: 100de007c; end: 100de00a7; -[_TtC22AgeVerificationFeature47AgeVerificationVerificationMethodViewController initWithNibName:bundle:] */

void FUN_100de007c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AgeVerificationFeature.AgeVerificationVerificationMethodViewController",0x46,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100de00a8);
  (*pcVar1)();
}



/* Entry: 100de00a8; end: 100de0103; -[_TtC22AgeVerificationFeature47AgeVerificationVerificationMethodViewController initWithNibName:bundle:transitionType:] */

void FUN_100de00a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AgeVerificationFeature.AgeVerificationVerificationMethodViewController",0x46,
                      "init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100de00d4);
  (*pcVar1)();
}



/* Entry: 100de0104; end: 100de01bb; -[_TtC22AgeVerificationFeature47AgeVerificationVerificationMethodViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100de0150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de0170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de0190: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100de0174) */
/* WARNING: Removing unreachable block (ram,0x000100de0154) */
/* WARNING: Removing unreachable block (ram,0x000100de0194) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de0104(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d36650);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d36658));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d36660));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d36668));
  return;
}



/* Entry: 100de01bc; end: 100de01db;  */

void FUN_100de01bc(void)

{
  func_0x000107c61168(&PTR_PTR_1127974c8);
  return;
}



/* Entry: 100de01dc; end: 100de0243; -[_TtC22AgeVerificationFeature47AgeVerificationVerificationMethodViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100de01dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x0001000a8868(param_1 + _DAT_112d36650,*(undefined8 *)(param_1 + _DAT_112d36650 + 0x18));
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_100dd818c();
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(lVar1);
  return uVar2;
}



/* Entry: 100de0244; end: 100de06bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100de0244(undefined *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar12 = 0xd000000000000013;
  lVar4 = 0;
  FUN_100dd8cfc();
  lStack_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100ddcdc8();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puStack_78 = (undefined8 *)(lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  uVar14 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010ef10040);
  uVar5 = uVar14;
  func_0x000107c5efd4();
  func_0x000107c417dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar5);
  puVar6 = PTR_PTR_1126b5a18;
  func_0x000107c61168(PTR_PTR_1126b5a18);
  puVar7 = param_1;
  func_0x000107c6148c(param_1,puVar6);
  if (puVar7 == (undefined *)0x0) {
    func_0x000107c61170(param_1);
    puVar6 = PTR_PTR_1126b5a18;
    func_0x000107c610f8(PTR_PTR_1126b5a18);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return puVar6;
  }
  uVar8 = unaff_x20 + _DAT_112d36650;
  func_0x0001000a8868(uVar8,*(undefined8 *)(uVar8 + 0x18));
  FUN_100dd818c();
  uVar9 = uVar8;
  func_0x000107c5efe4();
  puVar1 = puStack_78;
  if (-1 < (long)uVar9) {
    if (uVar9 < *(ulong *)(uVar8 + 0x10)) {
      FUN_100de0c8c(uVar8 + ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff)) +
                    *(long *)(lVar15 + 0x48) * uVar9,puStack_78,FUN_100ddcdc8);
      func_0x000107c6142c(uVar8);
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c61174(param_1);
      func_0x000107c602fc(0x1f);
      func_0x000107c6142c(uStack_68);
      uStack_70 = 0xd00000000000001d;
      uStack_68 = 0x800000010ef10070;
      FUN_100de0c8c((long)puVar1 + (long)*(int *)(lVar4 + 0x18),lVar13,FUN_100dd8cfc);
      lVar4 = lVar13;
      func_0x000107c614c4(lVar13,lStack_80);
      iVar3 = (int)lVar4;
      if (iVar3 < 2) {
        if (iVar3 == 0) {
          func_0x000100de0cd0(lVar13,FUN_100dd8cfc);
          uVar14 = 0xe700000000000000;
          uVar12 = 0x6e6163735f6469;
        }
        else {
          func_0x000100de0cd0(lVar13,FUN_100dd8cfc);
          uVar14 = 0xeb000000006e6163;
          uVar12 = 0x735f6c6169636166;
        }
      }
      else if (iVar3 == 2) {
        func_0x000100de0cd0(lVar13,FUN_100dd8cfc);
        uVar14 = 0xea00000000006469;
        uVar12 = 0x5f7463656e6e6f63;
      }
      else if (iVar3 == 3) {
        func_0x000100de0cd0(lVar13,FUN_100dd8cfc);
        uVar14 = 0xe700000000000000;
        uVar12 = 0x79656b5f656761;
      }
      else {
        uVar14 = 0x800000010ef10090;
      }
      func_0x000107c5fb78(uVar12,uVar14);
      func_0x000107c6142c(uVar14);
      uVar14 = uStack_68;
      uVar5 = uStack_70;
      func_0x000107c5fadc(uStack_70,uStack_68);
      func_0x000107c6142c(uVar14);
      func_0x000107c520f4(puVar7);
      func_0x000107c61170(uVar5);
      puVar6 = puVar7;
      func_0x000107c5d200(puVar7);
      func_0x000107c61180();
      uVar14 = *puVar1;
      func_0x000107c5fadc(uVar14,puVar1[1]);
      func_0x000107c59e44(puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar14);
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c52b50(puVar7);
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar6);
      puVar6 = PTR_PTR_1126b0c40;
      func_0x000107c61168(PTR_PTR_1126b0c40);
      func_0x000107c450a4(0x4038000000000000,0x4038000000000000);
      func_0x000107c61180();
      puVar10 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
      func_0x000107c46db4();
      puVar11 = puVar7;
      func_0x000107c5d200(puVar7);
      func_0x000107c61180();
      func_0x000107c55b70();
      func_0x000107c61170(puVar11);
      puVar11 = puVar7;
      func_0x000107c5d200(puVar7);
      func_0x000107c61180();
      func_0x000107c52170();
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar6);
      func_0x000100de0cd0(puVar1,FUN_100ddcdc8);
      return puVar7;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100de06c0);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100de06bc);
  (*pcVar2)();
}



/* Entry: 100de06c0; end: 100de0787; -[_TtC22AgeVerificationFeature47AgeVerificationVerificationMethodViewController tableView:cellForRowAtIndexPath:] */

void FUN_100de06c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_100de0244(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100de0788; end: 100de0843; -[_TtC22AgeVerificationFeature47AgeVerificationVerificationMethodViewController tableView:didSelectRowAtIndexPath:] */

void FUN_100de0788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100de0b0c(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 100de0844; end: 100de0977; -[_TtC22AgeVerificationFeature47AgeVerificationVerificationMethodViewController textView:shouldInteractWithURL:inRange:interaction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100de0844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  FUN_100dd9480();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(lVar4,param_4);
  (**(code **)(lVar5 + 0x10))(puVar3,lVar4,lVar2);
  func_0x000107c6159c(puVar3,lVar1,3);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(puVar3);
  func_0x000100de0cd0(puVar3,FUN_100dd9480);
  (**(code **)(lVar5 + 8))(lVar4,lVar2);
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 100de0978; end: 100de0b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de0978(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112d36658;
  uVar3 = 0x112d366d0;
  func_0x0001000285a8(0x112d366d0,&UNK_10d900ba0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112d36660;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d36668) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d36670) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d36678) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d36680) = 0;
  lVar1 = _DAT_112d36688;
  puVar4 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c55130();
  func_0x000107c61174();
  func_0x000107c5a050();
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef10190);
  func_0x000107c520f4(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112d36690) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d36698) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "AgeVerificationFeature/AgeVerificationVerificationMethodViewController.swift"
                      ,0x4c,2,0x72,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100de0b0c);
  (*pcVar2)();
}



/* Entry: 100de0b0c; end: 100de0c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de0b0c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar2 = 0;
  FUN_100dd9480();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_100ddcdc8();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar4 = unaff_x20 + _DAT_112d36650;
  func_0x0001000a8868(uVar4,*(undefined8 *)(uVar4 + 0x18));
  FUN_100dd818c();
  uVar5 = uVar4;
  func_0x000107c5efe4();
  if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100de0c88);
    (*pcVar1)();
  }
  if (uVar5 < *(ulong *)(uVar4 + 0x10)) {
    FUN_100de0c8c(uVar4 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(lVar8 + 0x48) * uVar5,lVar7,FUN_100ddcdc8);
    func_0x000107c6142c(uVar4);
    FUN_100de0c8c(lVar7 + *(int *)(lVar3 + 0x18),puVar6,FUN_100dd8cfc);
    func_0x000107c6159c(puVar6,lVar2,4);
    func_0x0001002a64a8(puVar6);
    func_0x000100de0cd0(puVar6,FUN_100dd9480);
    func_0x000100de0cd0(lVar7,FUN_100ddcdc8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100de0c8c);
  (*pcVar1)();
}



/* Entry: 100de0c8c; end: 100de0d0b;  */

undefined8 FUN_100de0c8c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100de0d0c; end: 100de0d4f;  */

void FUN_100de0d0c(long param_1,long param_2)

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



/* Entry: 100de0d50; end: 100de0dcf;  */

void FUN_100de0d50(void)

{
  func_0x000100ddf528();
  return;
}



/* Entry: 100de0dd0; end: 100de0e0f;  */

void FUN_100de0dd0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100de0e10; end: 100de0e3f;  */

void FUN_100de0e10(long param_1,long param_2)

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



/* Entry: 100de0e40; end: 100de0ef7;  */

uint FUN_100de0e40(long *param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar2 = *param_2;
  if (lVar3 < 2) {
    if (lVar3 == 0) {
      if (uVar2 != 0) {
        return 0;
      }
      return 1;
    }
    if (lVar3 == 1) {
      if (uVar2 != 1) {
        return 0;
      }
      return 1;
    }
  }
  else {
    if (lVar3 == 2) {
      if (uVar2 != 2) {
        return 0;
      }
      return 1;
    }
    if (lVar3 == 3) {
      if (uVar2 != 3) {
        return 0;
      }
      return 1;
    }
    if (lVar3 == 4) {
      if (uVar2 != 4) {
        return 0;
      }
      return 1;
    }
  }
  if (uVar2 < 5) {
    return 0;
  }
  uVar1 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c60118(lVar3,uVar2,uVar1);
  return (uint)lVar3 & 1;
}



/* Entry: 100de0ef8; end: 100de0f53;  */

void FUN_100de0ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = (undefined1)param_3;
  uStack_48 = param_1;
  uStack_40 = param_2;
  func_0x000100dd0978();
  func_0x000100087c34(&uStack_48);
  func_0x000100dd0920(param_1,param_2,param_3);
  return;
}



/* Entry: 100de0f54; end: 100de0f6f;  */

void FUN_100de0f54(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 100de0f70; end: 100de0fbb;  */

void FUN_100de0f70(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000103dbf870();
  lVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001000834e4(lVar1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x60,7);
  return;
}



/* Entry: 100de0fbc; end: 100de106b;  */

void FUN_100de0fbc(undefined8 param_1)

{
  if (lRam0000000112d36700 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e60e854);
  return;
}



/* Entry: 100de106c; end: 100de10a7;  */

void FUN_100de106c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_100de160c(uVar1,uVar2,*(undefined1 *)(param_2 + 2),*(undefined1 *)(param_3 + 8));
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)uVar2;
  return;
}



/* Entry: 100de10a8; end: 100de115b;  */

undefined8 FUN_100de10a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  if (*(char *)(param_1 + 0x10) != -1) {
    return 0;
  }
  func_0x0001000285a8(0x112d36828,&UNK_10d900c40);
  func_0x000107c613fc();
  uVar3 = 1;
  func_0x00010008747c(1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar2 = *(long *)(unaff_x20 + 0x50);
  func_0x0001000a8868(unaff_x20 + 0x30,uVar1);
  pcVar4 = *(code **)(lVar2 + 0x18);
  func_0x000107c6157c(uVar3);
  (*pcVar4)(0x100de1604,uVar3,uVar1,lVar2);
  func_0x000107c61574(uVar3);
  return uVar3;
}


