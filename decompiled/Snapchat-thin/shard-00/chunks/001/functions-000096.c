/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10028adc0; end: 10028add7;  */

void FUN_10028adc0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10028add8; end: 10028ae2b;  */

undefined8 FUN_10028add8(undefined8 param_1)

{
  FUN_10028adc0(param_1,0);
  return param_1;
}



/* Entry: 10028ae2c; end: 10028ae4f;  */

void FUN_10028ae2c(void)

{
  return;
}



/* Entry: 10028ae50; end: 10028ae9f;  */

void FUN_10028ae50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10028aea0; end: 10028aeab;  */

void FUN_10028aea0(void)

{
  return;
}



/* Entry: 10028aeac; end: 10028af73;  */

void FUN_10028aeac(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_10028aea0();
  func_0x000107c60c94();
  FUN_10028af84(param_1 + 0x18,unaff_x20 + 0x18);
  FUN_10028af84(unaff_x19 + 0x38,unaff_x20 + 0x38);
  FUN_10028af84(unaff_x19 + 0x58,unaff_x20 + 0x58);
  *(undefined1 *)(unaff_x19 + 0x78) = 0;
  *(undefined1 *)(unaff_x19 + 0xc0) = 0;
  if (*(char *)(unaff_x20 + 0xc0) == '\x01') {
    FUN_10028b00c((undefined1 *)(unaff_x19 + 0x78),unaff_x20 + 0x78);
  }
  FUN_10028b0c8(unaff_x19 + 200,unaff_x20 + 200);
  func_0x00010028b244();
  return;
}



/* Entry: 10028af74; end: 10028af83;  */

void FUN_10028af74(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 10028af84; end: 10028afaf;  */

void FUN_10028af84(void)

{
  FUN_10028af74();
  FUN_10028afb0();
  return;
}



/* Entry: 10028afb0; end: 10028afe3;  */

void FUN_10028afb0(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x000107c60c94();
    FUN_10028b5dc();
    return;
  }
  return;
}



/* Entry: 10028afe4; end: 10028b00b;  */

void FUN_10028afe4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010028afc4();
  FUN_10028b028();
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
  return;
}



/* Entry: 10028b00c; end: 10028b027;  */

void FUN_10028b00c(long param_1)

{
  FUN_10028afe4();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 10028b028; end: 10028b09b;  */

undefined8 * FUN_10028b028(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_1001cf034(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_1001ced7c(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10028b09c; end: 10028b0bb;  */

void FUN_10028b09c(void)

{
  func_0x000107c61168(&PTR_PTR_1129191f0);
  return;
}



/* Entry: 10028b0bc; end: 10028b0c7;  */

void FUN_10028b0bc(void)

{
  return;
}



/* Entry: 10028b0c8; end: 10028b11f;  */

void FUN_10028b0c8(undefined8 *param_1,long param_2)

{
  FUN_10028b0bc();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10028b120();
  FUN_10028b1fc();
  return;
}



/* Entry: 10028b120; end: 10028b1e3;  */

void FUN_10028b120(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar2 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar2 = param_2;
  }
  plVar8 = (long *)param_1[1];
  if (param_2 <= plVar8) {
    if (param_2 < plVar8) {
      plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
        func_0x000107c60c44();
      }
      else if ((long *)0x1 < plVar2) {
        plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 - 1) & 0x3fU));
      }
      if (param_2 <= plVar2) {
        param_2 = plVar2;
      }
      if (param_2 < plVar8) goto LAB_10028b168;
    }
    return;
  }
LAB_10028b168:
  func_0x0001002a9f08();
  if (plVar3 == (long *)0x0) {
    FUN_1002aa02c(plVar2);
    plVar2[1] = 0;
  }
  else {
    plVar8 = plVar2 + 1;
    FUN_1002a9f14(plVar8);
    FUN_1002aa02c(plVar2,plVar8);
    plVar2[1] = (long)plVar3;
    lVar4 = *plVar2;
    for (plVar8 = (long *)0x0; plVar3 != plVar8; plVar8 = (long *)((long)plVar8 + 1)) {
      *(undefined8 *)(lVar4 + (long)plVar8 * 8) = 0;
    }
    plVar8 = (long *)plVar2[2];
    if (plVar8 != (long *)0x0) {
      plVar6 = (long *)plVar8[1];
      uVar5 = (long)plVar3 - 1;
      uVar1 = 0;
      if (plVar3 != (long *)0x0) {
        uVar1 = (ulong)plVar6 / (ulong)plVar3;
      }
      plVar7 = plVar6;
      if (plVar3 <= plVar6) {
        plVar7 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
      }
      if (((ulong)plVar3 & uVar5) == 0) {
        plVar7 = (long *)((ulong)plVar6 & uVar5);
      }
      *(long **)(lVar4 + (long)plVar7 * 8) = plVar2 + 2;
      while (plVar2 = plVar8, plVar8 = (long *)*plVar2, plVar8 != (long *)0x0) {
        plVar6 = (long *)plVar8[1];
        if (((ulong)plVar3 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (plVar3 <= plVar6) {
          uVar1 = 0;
          if (plVar3 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)plVar3;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar4 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar6 * 8) = plVar2;
            plVar7 = plVar6;
          }
          else {
            *plVar2 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar4 + (long)plVar6 * 8);
            **(long **)(lVar4 + (long)plVar6 * 8) = (long)plVar8;
            plVar8 = plVar2;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10028b1e4; end: 10028b1fb;  */

void FUN_10028b1e4(void)

{
  return;
}



/* Entry: 10028b1fc; end: 10028b237;  */

void FUN_10028b1fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  
  func_0x00010028b1f0();
  for (; unaff_x20 != (long *)param_3; unaff_x20 = (long *)*unaff_x20) {
    func_0x0001002aa318();
  }
  return;
}



/* Entry: 10028b238; end: 10028b26b;  */

void FUN_10028b238(void)

{
  return;
}



/* Entry: 10028b26c; end: 10028b28b;  */

void FUN_10028b26c(long param_1,undefined8 *param_2)

{
  FUN_10002b838(param_1,*param_2);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10028b28c; end: 10028b2d3;  */

void FUN_10028b28c(long param_1)

{
  func_0x00010028ad98(param_1 + 200);
  func_0x00010028adfc(param_1 + 0x78);
  FUN_1001148fc(param_1 + 0x58);
  FUN_1001148fc(param_1 + 0x38);
  FUN_1001148fc(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10028b2d4; end: 10028b2eb;  */

void FUN_10028b2d4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x120] = 0;
  return;
}



/* Entry: 10028b2ec; end: 10028b43f;  */

void FUN_10028b2ec(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  FUN_10028b2d4();
  if ((bool)in_ZR) {
    FUN_10028b440();
  }
  *(undefined1 *)(unaff_x19 + 0x128) = 0;
  *(undefined1 *)(unaff_x19 + 0x140) = 0;
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_10028b45c(unaff_x19 + 0x128,*(undefined8 *)(param_2 + 0x128));
    *(undefined8 *)(param_2 + 0x130) = 0;
    *(undefined8 *)(param_2 + 0x138) = 0;
    *(undefined8 *)(param_2 + 0x128) = 0;
    *(undefined1 *)(unaff_x19 + 0x140) = 1;
  }
  func_0x00010028b468();
  return;
}



/* Entry: 10028b440; end: 10028b45b;  */

void FUN_10028b440(long param_1)

{
  func_0x00010028b354();
  *(undefined1 *)(param_1 + 0x120) = 1;
  return;
}



/* Entry: 10028b45c; end: 10028b477;  */

void FUN_10028b45c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 in_x9;
  undefined8 in_register_00005008;
  
  param_1[2] = in_x9;
  param_1[1] = in_register_00005008;
  *param_1 = param_2;
  return;
}



/* Entry: 10028b478; end: 10028b4f7;  */

void FUN_10028b478(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e22228,&UNK_10da063b0);
  puVar1 = &UNK_110476200;
  func_0x000107c613fc(&UNK_110476200,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101d22d4c,puVar1);
  return;
}



/* Entry: 10028b4f8; end: 10028b543;  */

void FUN_10028b4f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10028b544; end: 10028b577;  */

void FUN_10028b544(long param_1)

{
  long unaff_x20;
  
  FUN_10028aea0();
  FUN_10028b578();
  FUN_10028af84(param_1 + 0x128,unaff_x20 + 0x128);
  func_0x00010028b468();
  return;
}



/* Entry: 10028b578; end: 10028b5a7;  */

void FUN_10028b578(void)

{
  undefined1 in_ZR;
  
  FUN_10028b2d4();
  if ((bool)in_ZR) {
    FUN_10028b5a8();
  }
  return;
}



/* Entry: 10028b5a8; end: 10028b5db;  */

void FUN_10028b5a8(long param_1)

{
  FUN_10028aeac();
  *(undefined1 *)(param_1 + 0x120) = 1;
  return;
}



/* Entry: 10028b5dc; end: 10028b5ff;  */

void FUN_10028b5dc(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10028b600; end: 10028b79f;  */

void FUN_10028b600(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 - 1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_10028b7a0(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    func_0x000107c60e20(lVar2);
    FUN_10028b7a0(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar6 * 8);
            **(long **)(lVar2 + (long)plVar6 * 8) = (long)plVar3;
            plVar3 = plVar5;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10028b7a0; end: 10028b7b7;  */

void FUN_10028b7a0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10028b7b8; end: 10028b84b;  */

long * FUN_10028b7b8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010028b824(lVar1 + 0x10);
    }
    func_0x000107c60e14(lVar1);
  }
  return param_1;
}



/* Entry: 10028b84c; end: 10028b86b;  */

void FUN_10028b84c(long param_1)

{
  if (*(char *)(param_1 + 0x120) == '\x01') {
    FUN_10028b28c();
  }
  return;
}



/* Entry: 10028b86c; end: 10028b8c7;  */

void FUN_10028b86c(long param_1)

{
  int iVar1;
  undefined1 auStack_38 [24];
  
  FUN_10028b8c8(param_1,&UNK_10f82fc04);
  FUN_10028b93c();
  iVar1 = *(int *)(param_1 + 0xc);
  if ((*(byte *)(param_1 + 0x14) & 0 < iVar1) == 0) {
    iVar1 = 2;
  }
  FUN_10028b9bc(auStack_38,iVar1);
  func_0x00010028bc60();
  return;
}



/* Entry: 10028b8c8; end: 10028b8eb;  */

void FUN_10028b8c8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c(&stack0x00000008);
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 10028b8ec; end: 10028b93b;  */

void FUN_10028b8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10028b93c; end: 10028b9bb;  */

undefined8 * FUN_10028b93c(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam00000001138471a0 & 1) == 0) {
    iVar1 = 0x138471a0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x3c;
      func_0x000107c60e20();
      *(undefined8 *)((long)puVar2 + 0x34) = 0;
      *(undefined8 *)((long)puVar2 + 0x2c) = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puRam0000000113847198 = puVar2;
      func_0x000107c60e4c(0x1138471a0);
    }
  }
  return puRam0000000113847198;
}



/* Entry: 10028b9bc; end: 10028ba43;  */

undefined8 FUN_10028b9bc(void)

{
  int iVar1;
  undefined8 unaff_x20;
  
  if ((bRam0000000113404448 & 1) == 0) {
    iVar1 = 0x13404448;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_10028ba44();
      func_0x00010028ba4c();
      FUN_10028ba78();
      uRam0000000113404440 = unaff_x20;
      func_0x000107c60e4c(0x113404448);
    }
  }
  return uRam0000000113404440;
}



/* Entry: 10028ba44; end: 10028ba57;  */

void FUN_10028ba44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x110);
  return;
}



/* Entry: 10028ba58; end: 10028ba77;  */

void FUN_10028ba58(void)

{
  func_0x000107c61168(&PTR_PTR_1128e85d0);
  return;
}



/* Entry: 10028ba78; end: 10028ba7f;  */

undefined8 * FUN_10028ba78(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar1 = param_1;
  FUN_10028ba80(param_1,param_2,2000);
  *puVar1 = &PTR_DAT_110d9a5d8;
  func_0x00010028bc30(param_3);
  puVar2 = PTR___dispatch_queue_attr_concurrent_11034be28;
  func_0x000107c60f4c(PTR___dispatch_queue_attr_concurrent_11034be28,param_3,0);
  plVar3 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar3 = param_2;
  }
  func_0x000107c60f50(plVar3,puVar2);
  param_1[0x20] = plVar3;
  func_0x000107c60f34();
  param_1[0x21] = plVar3;
  return param_1;
}



/* Entry: 10028ba80; end: 10028baf3;  */

undefined8 * FUN_10028ba80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_110d9a638;
  func_0x000107c60c94(param_1 + 1);
  FUN_10028bbcc(param_1 + 4,param_3,1000);
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  param_1[0x15] = param_1 + 0x16;
  param_1[0x17] = 0;
  param_1[0x18] = 0x32aaaba7;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



/* Entry: 10028baf4; end: 10028bb77;  */

undefined8 * FUN_10028baf4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar1 = param_1;
  FUN_10028ba80(param_1,param_2,param_4);
  *puVar1 = &PTR_DAT_110d9a5d8;
  func_0x00010028bc30(param_3);
  puVar2 = PTR___dispatch_queue_attr_concurrent_11034be28;
  func_0x000107c60f4c(PTR___dispatch_queue_attr_concurrent_11034be28,param_3,0);
  plVar3 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar3 = param_2;
  }
  func_0x000107c60f50(plVar3,puVar2);
  param_1[0x20] = plVar3;
  func_0x000107c60f34();
  param_1[0x21] = plVar3;
  return param_1;
}



/* Entry: 10028bb78; end: 10028bbcb;  */

long FUN_10028bb78(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  long lStack_20;
  long lStack_18;
  
  puVar2 = (undefined4 *)0x8;
  func_0x000107c60f08(8,&lStack_20);
  if ((int)puVar2 == 0) {
    return lStack_18 + lStack_20 * 1000000000;
  }
  func_0x000107c60e5c();
  func_0x000107c60d78(*puVar2,&UNK_10f836e9d);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10028bbc8);
  (*pcVar1)();
}



/* Entry: 10028bbcc; end: 10028bc27;  */

undefined8 * FUN_10028bbcc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  puVar1 = param_1;
  FUN_10028bb78();
  param_1[2] = puVar1;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  param_1[8] = 0x32aaaba7;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  return param_1;
}



/* Entry: 10028bc28; end: 10028bc77;  */

void FUN_10028bc28(void)

{
  return;
}



/* Entry: 10028bc78; end: 10028bd57;  */

void FUN_10028bc78(void)

{
  undefined8 uVar1;
  undefined8 in_x4;
  long unaff_x19;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10028bd58();
  func_0x00010028bd6c(&uStack_50,in_x4);
  *(undefined8 *)(unaff_x19 + 0x10) = uStack_48;
  *(undefined8 *)(unaff_x19 + 8) = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10028c1cc(&uStack_50);
  uVar1 = 0xc0;
  func_0x000107c60e20();
  FUN_10028c1fc();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x20) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x59) = 0;
  *(undefined8 *)(unaff_x19 + 0x51) = 0;
  *(undefined **)(unaff_x19 + 0x68) = &UNK_10bccec0c;
  *(undefined ***)(unaff_x19 + 0x70) = &PTR_DAT_110873830;
  *(undefined1 *)(unaff_x19 + 0x98) = 0;
  return;
}



/* Entry: 10028bd58; end: 10028bd83;  */

void FUN_10028bd58(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9a268;
  return;
}



/* Entry: 10028bd84; end: 10028be0f;  */

void FUN_10028bd84(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if ((bRam0000000113847200 & 1) == 0) {
    iVar3 = 0x13847200;
    func_0x000107c60e48();
    if (iVar3 != 0) {
      FUN_10028be78(0x1138471f0);
      func_0x000107c60e4c(0x113847200);
    }
  }
  lVar2 = lRam00000001138471f8;
  uVar1 = uRam00000001138471f0;
  param_1[1] = lRam00000001138471f8;
  *param_1 = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x00010028c1b4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10028be10; end: 10028be77;  */

void FUN_10028be10(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10028be94();
  uStack_28 = extraout_x8;
  FUN_10028c060(auStack_40,1);
  FUN_10028c110(uStack_30);
  func_0x00010028c164();
  func_0x00010028c17c();
  func_0x00010028c18c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x00010028c17c(auStack_40);
  func_0x000107c3a598();
  pcStack_48 = FUN_10028be78;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10028be10(&uStack_51);
  return;
}



/* Entry: 10028be78; end: 10028be93;  */

void FUN_10028be78(void)

{
  undefined1 uStack_11;
  
  FUN_10028be10(&uStack_11);
  return;
}



/* Entry: 10028be94; end: 10028bea3;  */

void FUN_10028be94(void)

{
  return;
}



/* Entry: 10028bea4; end: 10028beef;  */

void FUN_10028bea4(undefined8 param_1)

{
  FUN_1000285a8(0x112ff4910,&UNK_10dc61350);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103bc9eac,param_1);
  return;
}



/* Entry: 10028bef0; end: 10028bf0f;  */

void FUN_10028bef0(void)

{
  func_0x000107c61168(&PTR_PTR_11293fec0);
  return;
}



/* Entry: 10028bf10; end: 10028bf2b;  */

void FUN_10028bf10(undefined8 param_1)

{
  FUN_1000285a8(0x112e22510,&UNK_10da06900);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006f5810,param_1);
  return;
}



/* Entry: 10028bf2c; end: 10028bf7b;  */

void FUN_10028bf2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10028bf7c; end: 10028bf9b;  */

void FUN_10028bf7c(void)

{
  func_0x000107c61168(&PTR_PTR_112e22588);
  return;
}



/* Entry: 10028bf9c; end: 10028bfb7;  */

void FUN_10028bf9c(undefined8 param_1)

{
  FUN_1000285a8(0x112e22518,&UNK_10da06908);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006f57b4,param_1);
  return;
}



/* Entry: 10028bfb8; end: 10028bfd7;  */

void FUN_10028bfb8(void)

{
  func_0x000107c61168(&PTR_PTR_112961690);
  return;
}



/* Entry: 10028bfd8; end: 10028c023;  */

void FUN_10028bfd8(undefined8 param_1)

{
  FUN_1000285a8(0x112fcf2a8,&UNK_10dc3e440);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100bb7ee8,param_1);
  return;
}



/* Entry: 10028c024; end: 10028c05f;  */

void FUN_10028c024(void)

{
  func_0x000107c61168(&PTR_PTR_112915fb8);
  return;
}



/* Entry: 10028c060; end: 10028c087;  */

long FUN_10028c060(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x00010028c044();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10028c088; end: 10028c08f;  */

void FUN_10028c088(void)

{
  return;
}



/* Entry: 10028c090; end: 10028c10f;  */

void FUN_10028c090(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  FUN_10028c148();
  *param_1 = extraout_x8;
  func_0x000107c60d30(param_1 + 1);
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  return;
}



/* Entry: 10028c110; end: 10028c147;  */

undefined8 * FUN_10028c110(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d9a8c0;
  func_0x00010028c0bc(param_1 + 3);
  return param_1;
}



/* Entry: 10028c148; end: 10028c1cb;  */

void FUN_10028c148(void)

{
  return;
}



/* Entry: 10028c1cc; end: 10028c1f3;  */

long FUN_10028c1cc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10028c1f4; end: 10028c1fb;  */

void FUN_10028c1f4(void)

{
  return;
}



/* Entry: 10028c1fc; end: 10028c283;  */

undefined8 *
FUN_10028c1fc(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_1 = &PTR_DAT_110d9a6b0;
  param_1[1] = &PTR_DAT_110d9a720;
  param_1[2] = param_4;
  func_0x000107c60c94(param_1 + 3);
  *(undefined4 *)(param_1 + 6) = param_3;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0x32aaaba7;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((long)param_1 + 0xa5) = 0;
  *(undefined8 *)((long)param_1 + 0x9d) = 0;
  *(undefined1 *)((long)param_1 + 0xad) = 1;
  param_1[0x16] = param_5;
  *(undefined1 *)(param_1 + 0x17) = 0;
  return param_1;
}



/* Entry: 10028c284; end: 10028c307;  */

void FUN_10028c284(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar1 = param_1;
    func_0x000107c60d9c();
    *(long *)(param_1 + 8) = lVar1;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}



/* Entry: 10028c308; end: 10028c49b;  */

void FUN_10028c308(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long extraout_x8;
  long *plVar10;
  long *unaff_x22;
  long unaff_x23;
  long lStack_c0;
  undefined1 auStack_b8 [88];
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar7 = &lStack_c0;
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(char *)((long)param_1 + 0xad) == '\x01';
  plVar8 = param_1;
  if ((bool)uVar5) {
    unaff_x22 = param_2 + 1;
    plVar6 = param_1;
    if ((*(byte *)(*unaff_x22 + 8) & 1) == 0) {
      FUN_10028c49c();
      plVar10 = plVar6;
    }
    else {
      plVar10 = (long *)0x0;
    }
    plVar1 = param_1 + 0x15;
    do {
      iVar4 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((int)param_3 == 0) || (iVar4 != 0)) {
      lStack_c0 = *param_2;
      (**(code **)(param_2[1] + 0x10))(auStack_b8,unaff_x22);
      plVar8 = param_1 + 7;
      plStack_60 = plVar10;
      FUN_10028c4d0(plVar8,&lStack_c0);
      func_0x00010028c958();
      unaff_x23 = param_3;
      if (iVar4 != 0) goto LAB_10028c444;
    }
    else {
      plVar8 = plVar6;
      if (*(char *)(*unaff_x22 + 8) != '\x01') {
        FUN_10028e1c0(param_1[0x16]);
        param_3 = *plVar6;
        *plVar6 = extraout_x8;
        lVar9 = (long)*(char *)((long)param_1 + 0x2f);
        if (lVar9 < 0) {
          plVar8 = (long *)param_1[3];
          lVar9 = param_1[4];
        }
        else {
          plVar8 = param_1 + 3;
        }
        FUN_10028e588(&lStack_c0,plVar8,lVar9,plVar10);
        (*(code *)*param_2)(param_2);
        FUN_100078bd8(&lStack_c0);
        *plVar6 = param_3;
        plVar8 = plVar7;
        unaff_x22 = plVar6;
      }
      do {
        lVar9 = *plVar1;
        iVar4 = (int)lVar9 + -1;
        uVar5 = iVar4 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      unaff_x23 = param_3;
      if ((bool)uVar5 || (int)lVar9 < 1) goto LAB_10028c444;
    }
    plVar8 = (long *)param_1[2];
    (**(code **)(*plVar8 + 0x18))(plVar8,param_1 + 1);
    unaff_x23 = param_3;
  }
LAB_10028c444:
  FUN_10028d048(uStack_58);
  if ((bool)uVar5) {
    return;
  }
  func_0x000107c60e78();
  FUN_100078bd8(&lStack_c0);
  *unaff_x22 = unaff_x23;
  func_0x000107c60bd8(plVar8);
  if (plRam0000000113847390 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010028c4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam0000000113847390 + 0x38))();
  return;
}



/* Entry: 10028c49c; end: 10028c4cf;  */

void FUN_10028c49c(void)

{
  if (plRam0000000113847390 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010028c4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plRam0000000113847390 + 0x38))();
    return;
  }
  return;
}



/* Entry: 10028c4d0; end: 10028c83b;  */

void FUN_10028c4d0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  puVar17 = param_2;
  func_0x000107c60d88(param_1 + 6);
  plVar16 = param_1;
  FUN_10028c83c();
  if (plVar16 != (long *)0x0) goto LAB_10028c6e4;
  if ((ulong)param_1[4] < 0x27) {
    plVar16 = (long *)param_1[1];
    plVar2 = (long *)param_1[2];
    plVar12 = (long *)*param_1;
    uVar13 = (long)plVar2 - (long)plVar16;
    plVar14 = param_1 + 3;
    plVar11 = (long *)*plVar14;
    if ((ulong)((long)plVar11 - (long)plVar12) <= uVar13) {
      puVar5 = (undefined8 *)((long)plVar11 - (long)plVar12 >> 2);
      if (plVar11 == plVar12) {
        puVar5 = (undefined8 *)0x1;
      }
      plStack_98 = plVar14;
      FUN_10028c86c();
      puVar18 = (undefined8 *)((long)puVar5 + uVar13);
      puVar19 = puVar5 + (long)puVar17;
      uVar6 = 0xfd8;
      puVar7 = puVar17;
      puStack_b8 = puVar5;
      puStack_b0 = puVar18;
      puStack_a8 = puVar18;
      puStack_a0 = puVar19;
      func_0x000107c60e20();
      plStack_c8 = param_1 + 5;
      uVar10 = (long)puVar17 * 8;
      uStack_c0 = 0x27;
      puVar17 = puVar7;
      puVar15 = puVar18;
      if (uVar13 == uVar10) {
        if (plVar2 == plVar16) {
          puVar15 = (undefined8 *)0x1;
          uStack_d0 = uVar6;
          plStack_70 = plVar14;
          FUN_10028c86c();
          puStack_78 = puVar15 + (long)puVar7;
          puVar17 = puVar18;
          puStack_90 = puVar15;
          puStack_88 = puVar15;
          puStack_80 = puVar15;
          func_0x000107c314a0(&puStack_90,puVar18,puVar18);
          puVar1 = puStack_78;
          puVar15 = puStack_80;
          puVar8 = puStack_88;
          puVar7 = puStack_90;
          puStack_b8 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_a0 = puStack_78;
          puStack_90 = puVar5;
          puStack_88 = puVar18;
          puStack_80 = puVar18;
          puStack_78 = puVar19;
          func_0x000107c3a584();
          puVar5 = puVar7;
          puVar18 = puVar8;
          puVar19 = puVar1;
        }
        else {
          puVar18 = puVar18 + (((long)puVar18 - (long)puVar5 >> 3) + 1) / -2;
          puVar15 = puVar18;
          puStack_b0 = puVar18;
        }
      }
      puVar7 = puVar15 + 1;
      *puVar15 = uVar6;
      uStack_d0 = 0;
      puVar15 = (undefined8 *)param_1[2];
      puStack_a8 = puVar7;
      while (puVar8 = (undefined8 *)param_1[1], puVar15 != puVar8) {
        puVar8 = puVar18;
        if (puVar18 == puVar5) {
          if (puVar7 < puVar19) {
            lVar9 = (long)puVar7 - (long)puVar5;
            puVar1 = puVar7 + (((long)puVar19 - (long)puVar7 >> 3) + 1) / 2;
            puVar8 = (undefined8 *)((long)puVar1 - ((long)puVar7 - (long)puVar5));
            puVar7 = puVar1;
            if (lVar9 != 0) {
              func_0x000107c610b8(puVar8,puVar18,lVar9);
              puVar17 = puVar18;
            }
          }
          else {
            lVar9 = (long)puVar19 - (long)puVar5 >> 2;
            if ((long)puVar19 - (long)puVar5 == 0) {
              lVar9 = 1;
            }
            plStack_70 = plVar14;
            FUN_10028c86c(lVar9);
            func_0x000107c3a580(lVar9 << 1);
            puVar17 = puVar5;
            func_0x000107c314a0(&puStack_90,puVar5,puVar7);
            puVar4 = puStack_78;
            puVar3 = puStack_80;
            puVar8 = puStack_88;
            puVar1 = puStack_90;
            puStack_90 = puVar5;
            puStack_88 = puVar18;
            puStack_80 = puVar7;
            puStack_78 = puVar19;
            func_0x000107c3a584();
            puVar5 = puVar1;
            puVar7 = puVar3;
            puVar19 = puVar4;
          }
        }
        puVar15 = puVar15 + -1;
        puVar18 = puVar8 + -1;
        *puVar18 = *puVar15;
      }
      puStack_b8 = (undefined8 *)*param_1;
      *param_1 = (long)puVar5;
      param_1[1] = (long)puVar18;
      puStack_a0 = (undefined8 *)param_1[3];
      puStack_a8 = (undefined8 *)param_1[2];
      param_1[2] = (long)puVar7;
      param_1[3] = (long)puVar19;
      puStack_b0 = puVar8;
      func_0x00010028c8a0(&uStack_d0);
      FUN_10028c8d4(&puStack_b8);
      goto LAB_10028c6e4;
    }
    puVar5 = (undefined8 *)0xfd8;
    func_0x000107c60e20();
    if (plVar11 != plVar2) {
      *plVar2 = (long)puVar5;
      param_1[2] = (long)(plVar2 + 1);
      goto LAB_10028c6e4;
    }
    if (plVar16 == plVar12) {
      lVar9 = (long)plVar11 - (long)plVar16 >> 2;
      if (plVar2 == plVar16) {
        lVar9 = 1;
      }
      plStack_70 = plVar14;
      FUN_10028c86c(lVar9);
      func_0x000107c3a580(lVar9 << 1);
      func_0x000107c314a0(&puStack_90,param_1[1],param_1[2]);
      puVar18 = (undefined8 *)param_1[1];
      puVar17 = (undefined8 *)*param_1;
      puVar15 = (undefined8 *)param_1[3];
      puVar19 = (undefined8 *)param_1[2];
      param_1[1] = (long)puStack_88;
      *param_1 = (long)puStack_90;
      param_1[3] = (long)puStack_78;
      param_1[2] = (long)puStack_80;
      puStack_90 = puVar17;
      puStack_88 = puVar18;
      puStack_80 = puVar19;
      puStack_78 = puVar15;
      func_0x000107c3a584();
      plVar16 = (long *)param_1[1];
    }
    plVar16[-1] = (long)puVar5;
    puVar17 = puVar5;
  }
  else {
    param_1[4] = param_1[4] - 0x27;
    plVar16 = (long *)param_1[1] + 1;
    puVar17 = *(undefined8 **)param_1[1];
  }
  param_1[1] = (long)plVar16;
  func_0x000107c3149c(param_1);
LAB_10028c6e4:
  FUN_10028c914(param_1);
  *puVar17 = *param_2;
  (**(code **)(param_2[1] + 0x10))(puVar17 + 1,param_2 + 1);
  puVar17[0xc] = param_2[0xc];
  param_1[5] = param_1[5] + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 6);
  return;
}



/* Entry: 10028c83c; end: 10028c86b;  */

long FUN_10028c83c(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x27 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 10028c86c; end: 10028c8cb;  */

undefined1  [16] FUN_10028c86c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    func_0x000107c60e20(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10028c8cc; end: 10028c8d3;  */

void FUN_10028c8cc(void)

{
  return;
}



/* Entry: 10028c8d4; end: 10028c913;  */

long * FUN_10028c8d4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10028c914; end: 10028c983;  */

void FUN_10028c914(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10028c984; end: 10028ca4b;  */

/* WARNING: Possible PIC construction at 0x00010028c9f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010028c9f8) */

void FUN_10028c984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  if ((bRam0000000113817d38 & 1) == 0) {
    iVar1 = 0x13817d38;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_group_async_f");
      pcRam0000000113817d30 = pcVar3;
      func_0x000107c60e4c(0x113817d38);
    }
  }
  puVar2 = (undefined8 *)0x10;
  func_0x000107c610a0();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_3;
    puVar2[1] = param_4;
    (*pcRam0000000113817d30)(param_1,param_2,puVar2,FUN_10028db1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  func_0x000107c60e0c();
  func_0x000104bd46a0();
  FUN_1000285a8(0x112e077c0,&UNK_10d9dbd20);
  FUN_1000823a8(&UNK_101bc0554,0);
  return;
}



/* Entry: 10028ca4c; end: 10028ca8b;  */

void FUN_10028ca4c(void)

{
  FUN_1000285a8(0x112e077c0,&UNK_10d9dbd20);
  FUN_1000823a8(&UNK_101bc0554,0);
  return;
}



/* Entry: 10028ca8c; end: 10028caab;  */

void FUN_10028ca8c(void)

{
  func_0x000107c61168(&PTR_PTR_1127fc280);
  return;
}



/* Entry: 10028caac; end: 10028cb4f;  */

void FUN_10028caac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e22a08,&UNK_10da071c0);
  puVar1 = &UNK_110476818;
  func_0x000107c613fc(&UNK_110476818,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_101d2459c,puVar1);
  return;
}



/* Entry: 10028cb50; end: 10028cbab;  */

void FUN_10028cb50(void)

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



/* Entry: 10028cbac; end: 10028cbc7;  */

void FUN_10028cbac(undefined8 param_1)

{
  FUN_1000285a8(0x112e22a10,&UNK_10da071c8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101d246f4,param_1);
  return;
}



/* Entry: 10028cbc8; end: 10028cc17;  */

void FUN_10028cbc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10028cc18; end: 10028cc37;  */

void FUN_10028cc18(void)

{
  func_0x000107c61168(&PTR_PTR_1129194f0);
  return;
}



/* Entry: 10028cc38; end: 10028ccdb;  */

void FUN_10028cc38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e22b00,&UNK_10da073f0);
  puVar1 = &UNK_1104768e0;
  func_0x000107c613fc(&UNK_1104768e0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_101d2489c,puVar1);
  return;
}



/* Entry: 10028ccdc; end: 10028cd37;  */

void FUN_10028ccdc(void)

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



/* Entry: 10028cd38; end: 10028cd53;  */

void FUN_10028cd38(undefined8 param_1)

{
  FUN_1000285a8(0x112e22b08,&UNK_10da073f8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101d249f4,param_1);
  return;
}



/* Entry: 10028cd54; end: 10028cda3;  */

void FUN_10028cd54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10028cda4; end: 10028cdc3;  */

void FUN_10028cda4(void)

{
  func_0x000107c61168(&PTR_PTR_1129195b0);
  return;
}



/* Entry: 10028cdc4; end: 10028ce5b;  */

void FUN_10028cdc4(undefined8 param_1)

{
  FUN_1000285a8(0x112e03460,&UNK_10d9d5dc0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101b444f4,param_1);
  return;
}



/* Entry: 10028ce5c; end: 10028ce7b;  */

void FUN_10028ce5c(void)

{
  func_0x000107c61168(&PTR_PTR_11291b010);
  return;
}



/* Entry: 10028ce7c; end: 10028cebb;  */

void FUN_10028ce7c(void)

{
  FUN_1000285a8(0x112e07028,&UNK_10d9db200);
  FUN_1000823a8(&UNK_101bb507c,0);
  return;
}



/* Entry: 10028cebc; end: 10028cf3b;  */

void FUN_10028cebc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e07030,&UNK_10d9db320);
  puVar1 = &UNK_110451068;
  func_0x000107c613fc(&UNK_110451068,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101bb5298,puVar1);
  return;
}



/* Entry: 10028cf3c; end: 10028cf67;  */

void FUN_10028cf3c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10028cf68; end: 10028d00b;  */

void FUN_10028cf68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fad408,&UNK_10dc20260);
  puVar1 = &UNK_1106a91a8;
  func_0x000107c613fc(&UNK_1106a91a8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_1038ef0a0,puVar1);
  return;
}



/* Entry: 10028d00c; end: 10028d047;  */

void FUN_10028d00c(void)

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


