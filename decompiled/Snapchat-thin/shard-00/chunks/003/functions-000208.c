/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004b5db4; end: 1004b5e77;  */

long FUN_1004b5db4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar1 = 0x50;
  func_0x000107c60e20();
  uVar3 = *param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_2[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x30) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  uVar3 = param_2[3];
  *(undefined8 *)(lVar1 + 0x40) = param_2[4];
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  *(undefined8 *)(lVar1 + 0x48) = param_2[5];
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  uStack_38 = 1;
  lVar2 = param_1;
  lStack_48 = lVar1;
  lStack_40 = param_1 + 8;
  FUN_1004b5e78(param_1,&uStack_50,lVar1 + 0x20);
  FUN_1004b5eec(param_1,uStack_50,lVar2,lStack_48);
  lVar2 = lStack_48;
  lStack_48 = 0;
  func_0x0001004b5f40(&lStack_48,0);
  return lVar2;
}



/* Entry: 1004b5e78; end: 1004b5eeb;  */

long * FUN_1004b5e78(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 8);
  plVar3 = plVar4;
  plVar1 = (long *)*plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    do {
      while (plVar4 = plVar1, uVar2 = param_3, func_0x0001004b5f8c(param_3,plVar4 + 4),
            ((uint)uVar2 >> 7 & 1) != 0) {
        plVar3 = plVar4;
        plVar1 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_1004b5ed8;
      }
      plVar1 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar3 = plVar4 + 1;
  }
LAB_1004b5ed8:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 1004b5eec; end: 1004b5f83;  */

void FUN_1004b5eec(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_100047ebc(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1004b5f84; end: 1004b5fc3;  */

void FUN_1004b5f84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000048);
  return;
}



/* Entry: 1004b5fc4; end: 1004b601f;  */

undefined8 FUN_1004b5fc4(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = param_4;
  if (param_2 <= param_4) {
    uVar1 = param_2;
  }
  func_0x000107c610b0(param_1,param_3,uVar1);
  if ((int)param_1 == 0) {
    if (param_2 == param_4) {
      return 0;
    }
    if (param_2 < param_4) {
      return 0xff;
    }
  }
  else if ((int)param_1 < 0) {
    return 0xff;
  }
  return 1;
}



/* Entry: 1004b6020; end: 1004b6067;  */

void FUN_1004b6020(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    FUN_1004b5d48(param_1,lVar2,lVar2 + 0x18);
  }
  return;
}



/* Entry: 1004b6068; end: 1004b608b;  */

void FUN_1004b6068(long param_1)

{
  func_0x00010049303c();
  if (param_1 != 0) {
    func_0x000107c60e14();
  }
  return;
}



/* Entry: 1004b608c; end: 1004b60db;  */

void FUN_1004b608c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x48;
  func_0x000107c60e20();
  FUN_1004b60ec();
  *param_1 = uVar1;
  return;
}



/* Entry: 1004b60dc; end: 1004b60eb;  */

void FUN_1004b60dc(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1004b60ec; end: 1004b617b;  */

undefined8 * FUN_1004b60ec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  int extraout_w10;
  
  *param_1 = &PTR_DAT_110abe188;
  plVar2 = (long *)*param_2;
  lVar1 = param_2[1];
  param_1[1] = plVar2;
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_1004b60dc();
    } while (extraout_w10 != 0);
    plVar2 = (long *)*param_2;
  }
  param_1[3] = &PTR_DAT_110abe1c8;
  param_1[4] = param_1;
  uVar3 = *param_3;
  param_1[5] = &UNK_10f50edc6;
  param_1[6] = uVar3;
  *(undefined4 *)(param_1 + 7) = 3;
  (**(code **)(*plVar2 + 0x28))();
  param_1[8] = plVar2;
  return param_1;
}



/* Entry: 1004b617c; end: 1004b6293;  */

undefined8 FUN_1004b617c(long param_1,undefined8 *****param_2)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 ****ppppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 ****ppppuStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  ppppuStack_40 = (undefined8 *****)0x0;
  uStack_38 = 0;
  lStack_30 = 0;
  if ((char)*(byte *)(param_1 + 199) < '\0') {
    uVar3 = *(ulong *)(param_1 + 0xb8);
  }
  else {
    uVar3 = (ulong)*(byte *)(param_1 + 199);
  }
  if ((param_2 != (undefined8 *****)0x0) && (uVar3 != 0)) {
    func_0x000107c60dec(&ppppuStack_58,"/",param_1 + 0xb0);
    if (lStack_30 < 0) {
      func_0x000107c60e14(ppppuStack_40);
    }
    uStack_38 = uStack_50;
    ppppuStack_40 = ppppuStack_58;
    lStack_30 = lStack_48;
    func_0x000107c60c58(&ppppuStack_40,(long)param_2 + 1);
    param_2 = (undefined8 *****)ppppuStack_40;
    if (-1 < lStack_30) {
      param_2 = &ppppuStack_40;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  if (*(char *)(param_1 + 0x47) < '\0') {
    if (*(long *)(param_1 + 0x38) == 0) {
      plVar2 = (long *)0;
    }
    else {
      plVar2 = (long *)*(long *)(param_1 + 0x30);
    }
  }
  else {
    plVar2 = (long *)0;
    if (*(char *)(param_1 + 0x47) != '\0') {
      plVar2 = (long *)(param_1 + 0x30);
    }
  }
  FUN_1004b6308(uVar1,param_2,plVar2,0);
  if (lStack_30 < 0) {
    func_0x000107c60e14(ppppuStack_40);
  }
  return uVar1;
}



/* Entry: 1004b6294; end: 1004b6307;  */

void FUN_1004b6294(void)

{
  (*(code *)PTR___tlv_bootstrap_11340d960)();
  return;
}



/* Entry: 1004b6308; end: 1004b63ab;  */

long * FUN_1004b6308(long *param_1,char *param_2,char *param_3,long param_4)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  char cStack_1c9;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_160;
  undefined8 uStack_158;
  char cStack_149;
  undefined8 uStack_148;
  char cStack_131;
  undefined1 auStack_130 [72];
  long lStack_e8;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_4 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x0001004b62b4(&uStack_48,0);
    FUN_100460de4(auStack_90);
    FUN_1004b63ac(param_1,param_2,param_3);
    FUN_100467a48(auStack_90);
    FUN_1004b6ddc(&uStack_48);
    return param_1;
  }
  func_0x000107c2c414();
  FUN_100467a48(auStack_90);
  FUN_1004b6ddc(&uStack_48);
  func_0x000107c60bd8();
  puVar5 = &uStack_1e0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = param_1 + 6;
  FUN_100460448(plVar7);
  *(int *)(param_1 + 0x11) = (int)param_1[0x11] + 1;
  pcVar1 = "";
  if (param_3 != (char *)0x0) {
    pcVar1 = param_3;
  }
  FUN_10002b024(&uStack_160,pcVar1);
  pcVar1 = "";
  if (param_2 != (char *)0x0) {
    pcVar1 = param_2;
  }
  FUN_10002b024(&uStack_1a8,pcVar1);
  uStack_1d8 = uStack_158;
  uStack_1e0 = uStack_160;
  cStack_1c9 = cStack_149;
  uStack_1c0 = uStack_1a0;
  uStack_1c8 = uStack_1a8;
  lStack_1b8 = lStack_198;
  plVar3 = param_1 + 0xe;
  plVar8 = plVar3;
  FUN_1004b65a8(plVar3,&uStack_1e0);
  if (param_1 + 0xf == plVar8) {
    FUN_1004b6634(&uStack_1a8,param_2,param_3);
    FUN_1004b69e8(&uStack_160,&uStack_1e0,&uStack_1a8);
    puVar5 = &uStack_160;
    FUN_1004b6af4(plVar3,puVar5,&uStack_160);
    func_0x0001004b6d60(auStack_130);
    if (cStack_131 < '\0') {
      func_0x000107c60e14(uStack_148);
    }
    if (cStack_149 < '\0') {
      func_0x000107c60e14(uStack_160);
    }
    func_0x0001004b6d60(&uStack_1a8);
    plVar8 = plVar3;
  }
  if (lStack_1b8 < 0) {
    func_0x000107c60e14(uStack_1c8);
  }
  if (cStack_1c9 < '\0') {
    func_0x000107c60e14(uStack_1e0);
  }
  plVar3 = plVar7;
  func_0x000100466b80();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    func_0x000107c60e78();
    func_0x000104ad95e4(&uStack_160);
    func_0x0001004b6d60(&uStack_1a8);
    func_0x000104ad962c(&uStack_1e0);
    func_0x000100466b80(plVar7);
    func_0x000107c60bd8(plVar3);
    func_0x000104bd46a0();
    plVar7 = plVar3 + 1;
    plVar8 = (long *)*plVar7;
    if (plVar8 != (long *)0x0) {
      plVar3 = plVar3 + 2;
      plVar6 = plVar7;
      do {
        plVar4 = plVar3;
        FUN_1006b2030(plVar3,plVar8 + 4,puVar5);
        plVar2 = plVar8 + 1;
        if ((int)plVar4 == 0) {
          plVar6 = plVar8;
          plVar2 = plVar8;
        }
        plVar8 = (long *)*plVar2;
      } while (plVar8 != (long *)0x0);
      if ((plVar6 != plVar7) && (FUN_1006b2030(plVar3,puVar5,plVar6 + 4), (int)plVar3 == 0)) {
        return plVar6;
      }
    }
    return plVar7;
  }
  return plVar8 + 10;
}



/* Entry: 1004b63ac; end: 1004b65a7;  */

long * FUN_1004b63ac(long param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uStack_150;
  undefined8 uStack_148;
  char cStack_139;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char cStack_b9;
  undefined8 uStack_b8;
  char cStack_a1;
  undefined1 auStack_a0 [72];
  long lStack_58;
  
  puVar6 = &uStack_150;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_1 + 0x30;
  FUN_100460448(lVar5);
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  pcVar1 = "";
  if (param_3 != (char *)0x0) {
    pcVar1 = param_3;
  }
  FUN_10002b024(&uStack_d0,pcVar1);
  pcVar1 = "";
  if (param_2 != (char *)0x0) {
    pcVar1 = param_2;
  }
  FUN_10002b024(&uStack_118,pcVar1);
  uStack_148 = uStack_c8;
  uStack_150 = uStack_d0;
  cStack_139 = cStack_b9;
  uStack_130 = uStack_110;
  uStack_138 = uStack_118;
  lStack_128 = lStack_108;
  lVar4 = param_1 + 0x70;
  lVar3 = lVar4;
  FUN_1004b65a8(lVar4,&uStack_150);
  if (param_1 + 0x78 == lVar3) {
    FUN_1004b6634(&uStack_118,param_2,param_3);
    FUN_1004b69e8(&uStack_d0,&uStack_150,&uStack_118);
    puVar6 = &uStack_d0;
    FUN_1004b6af4(lVar4,puVar6,&uStack_d0);
    func_0x0001004b6d60(auStack_a0);
    if (cStack_a1 < '\0') {
      func_0x000107c60e14(uStack_b8);
    }
    if (cStack_b9 < '\0') {
      func_0x000107c60e14(uStack_d0);
    }
    func_0x0001004b6d60(&uStack_118);
    lVar3 = lVar4;
  }
  if (lStack_128 < 0) {
    func_0x000107c60e14(uStack_138);
  }
  if (cStack_139 < '\0') {
    func_0x000107c60e14(uStack_150);
  }
  lVar4 = lVar5;
  func_0x000100466b80();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    func_0x000104ad95e4(&uStack_d0);
    func_0x0001004b6d60(&uStack_118);
    func_0x000104ad962c(&uStack_150);
    func_0x000100466b80(lVar5);
    func_0x000107c60bd8(lVar4);
    func_0x000104bd46a0();
    plVar8 = (long *)(lVar4 + 8);
    plVar9 = (long *)*plVar8;
    if (plVar9 != (long *)0x0) {
      lVar4 = lVar4 + 0x10;
      plVar7 = plVar8;
      do {
        lVar5 = lVar4;
        FUN_1006b2030(lVar4,plVar9 + 4,puVar6);
        plVar2 = plVar9 + 1;
        if ((int)lVar5 == 0) {
          plVar7 = plVar9;
          plVar2 = plVar9;
        }
        plVar9 = (long *)*plVar2;
      } while (plVar9 != (long *)0x0);
      if ((plVar7 != plVar8) && (FUN_1006b2030(lVar4,puVar6,plVar7 + 4), (int)lVar4 == 0)) {
        return plVar7;
      }
    }
    return plVar8;
  }
  return (long *)(lVar3 + 0x50);
}



/* Entry: 1004b65a8; end: 1004b6633;  */

long * FUN_1004b65a8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar3 = plVar4;
    do {
      lVar2 = param_1;
      FUN_1006b2030(param_1,plVar5 + 4,param_2);
      plVar1 = plVar5 + 1;
      if ((int)lVar2 == 0) {
        plVar3 = plVar5;
        plVar1 = plVar5;
      }
      plVar5 = (long *)*plVar1;
    } while (plVar5 != (long *)0x0);
    if ((plVar3 != plVar4) && (FUN_1006b2030(param_1,param_2,plVar3 + 4), (int)param_1 == 0)) {
      return plVar3;
    }
  }
  return plVar4;
}



/* Entry: 1004b6634; end: 1004b6807;  */

long * FUN_1004b6634(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *extraout_x8;
  long *plVar8;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1 + 4;
  *(undefined1 *)plVar5 = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  plVar3 = param_2;
  func_0x000107c613d0();
  FUN_1004b6808(&lStack_90,param_2);
  plVar4 = (long *)*param_1;
  *param_1 = lStack_90;
  param_1[2] = lStack_80;
  param_1[1] = lStack_88;
  param_1[3] = lStack_78;
  if ((long *)0x1 < plVar4) {
    do {
      lVar7 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plVar4[1])();
    }
  }
  if ((param_3 != (long *)0x0) && ((char)*param_3 != '\0')) {
    plVar3 = param_3;
    func_0x000107c613d0();
    FUN_1004b6808(&lStack_90);
    if ((char)param_1[8] == '\0') {
      param_1[6] = lStack_80;
      param_1[5] = lStack_88;
      param_1[7] = lStack_78;
      *(undefined1 *)(param_1 + 8) = 1;
      param_1[4] = lStack_90;
      plVar4 = param_3;
    }
    else {
      plVar4 = (long *)*plVar5;
      param_1[6] = lStack_80;
      param_1[5] = lStack_88;
      param_1[7] = lStack_78;
      *plVar5 = lStack_90;
      if ((long *)0x1 < plVar4) {
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 + -1 == 0) {
          (*(code *)plVar4[1])();
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  func_0x000107c60e78();
  if ((int)plVar3 != 0) {
    func_0x000104bd46a0();
    if ((char)param_1[8] != '\0') {
      FUN_1004b6d90(plVar5);
    }
    FUN_1004b6d90(param_1);
  }
  func_0x000107c60bd8(plVar4);
  if (plVar3 != (long *)0x0) {
    if (plVar3 < (long *)0x18) {
      plVar5 = (long *)0x0;
      *(char *)(extraout_x8 + 1) = (char)plVar3;
      plVar8 = (long *)extraout_x8[2];
    }
    else {
      plVar5 = plVar3 + 2;
      func_0x000107c60e1c();
      *plVar5 = 1;
      plVar5[1] = (long)FUN_1005a7b18;
      plVar8 = plVar5 + 2;
      extraout_x8[1] = plVar3;
      extraout_x8[2] = plVar8;
    }
    *extraout_x8 = plVar5;
    plVar6 = (long *)((long)extraout_x8 + 9);
    if (plVar5 != (long *)0x0) {
      plVar6 = plVar8;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(plVar6,plVar4,plVar3);
    return plVar6;
  }
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  return plVar4;
}



/* Entry: 1004b6808; end: 1004b689b;  */

void FUN_1004b6808(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    if (param_3 < 0x18) {
      puVar2 = (undefined8 *)0x0;
      *(char *)(param_1 + 1) = (char)param_3;
      puVar3 = (undefined8 *)param_1[2];
    }
    else {
      puVar2 = (undefined8 *)(param_3 + 0x10);
      func_0x000107c60e1c();
      *puVar2 = 1;
      puVar2[1] = FUN_1005a7b18;
      puVar3 = puVar2 + 2;
      param_1[1] = param_3;
      param_1[2] = puVar3;
    }
    *param_1 = puVar2;
    puVar1 = (undefined8 *)((long)param_1 + 9);
    if (puVar2 != (undefined8 *)0x0) {
      puVar1 = puVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(puVar1,param_2,param_3);
    return;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1004b689c; end: 1004b69e7;  */

long * FUN_1004b689c(long *param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)*param_2;
  if ((long *)0x1 < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar6 = *param_2;
  lVar8 = param_2[3];
  lVar7 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = lVar6;
  param_1[3] = lVar8;
  param_1[2] = lVar7;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  plVar4 = param_1;
  if ((char)param_2[8] != '\0') {
    plVar5 = (long *)param_2[4];
    if (plVar5 < (long *)0x2) {
      lStack_58 = param_2[6];
      lStack_60 = param_2[5];
      lStack_50 = param_2[7];
    }
    else {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar5 = (long *)param_2[4];
      lStack_58 = param_2[6];
      lStack_60 = param_2[5];
      lStack_50 = param_2[7];
      if ((char)param_1[8] != '\0') {
        plVar4 = (long *)param_1[4];
        lVar6 = param_2[7];
        lVar7 = param_2[5];
        param_1[6] = param_2[6];
        param_1[5] = lVar7;
        param_1[7] = lVar6;
        param_1[4] = (long)plVar5;
        if ((long *)0x1 < plVar4) {
          do {
            lVar6 = *plVar4;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = lVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar6 + -1 == 0) {
            (*(code *)plVar4[1])();
          }
        }
        goto LAB_1004b69ac;
      }
    }
    param_1[6] = lStack_58;
    param_1[5] = lStack_60;
    param_1[7] = lStack_50;
    *(undefined1 *)(param_1 + 8) = 1;
    param_1[4] = (long)plVar5;
  }
LAB_1004b69ac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return param_1;
  }
  func_0x000107c60e78();
  if ((int)param_2 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  lVar6 = param_2[1];
  lVar3 = *param_2;
  plVar4[2] = param_2[2];
  plVar4[1] = lVar6;
  *plVar4 = lVar3;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  lVar6 = param_2[4];
  lVar3 = param_2[3];
  plVar4[5] = param_2[5];
  plVar4[4] = lVar6;
  plVar4[3] = lVar3;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  FUN_1004b689c(plVar4 + 6,param_3);
  return plVar4;
}



/* Entry: 1004b69e8; end: 1004b6a57;  */

undefined8 * FUN_1004b69e8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  FUN_1004b689c(param_1 + 6,param_3);
  return param_1;
}



/* Entry: 1004b6a58; end: 1004b6af3;  */

long * FUN_1004b6a58(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar1 = (long *)*plVar3;
    do {
      while( true ) {
        plVar3 = plVar1;
        lVar2 = param_1;
        FUN_1006b2030(param_1,param_3,plVar3 + 4);
        if ((int)lVar2 == 0) break;
        plVar1 = (long *)*plVar3;
        plVar4 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_1004b6ad8;
      }
      lVar2 = param_1;
      FUN_1006b2030(param_1,plVar3 + 4,param_3);
      if ((int)lVar2 == 0) break;
      plVar4 = plVar3 + 1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_1004b6ad8:
  *param_2 = plVar3;
  return plVar4;
}



/* Entry: 1004b6af4; end: 1004b6b83;  */

undefined1  [16] FUN_1004b6af4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_50 [3];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_1004b6a58(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_1004b6b84(alStack_50,param_1,param_3);
    FUN_1004b6cc8(param_1,uStack_38,plVar2,alStack_50[0]);
    lVar3 = alStack_50[0];
    alStack_50[0] = 0;
    func_0x0001004b6d1c(alStack_50,0);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 1004b6b84; end: 1004b6beb;  */

void FUN_1004b6b84(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x98;
  func_0x000107c60e20();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_1004b6c80(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1004b6bec; end: 1004b6c7f;  */

undefined8 * FUN_1004b6bec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    FUN_100033dac(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 1004b6c80; end: 1004b6cc7;  */

long FUN_1004b6c80(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1004b6bec();
  FUN_1004b689c(lVar1 + 0x30,param_2 + 0x30);
  return param_1;
}



/* Entry: 1004b6cc8; end: 1004b6d8f;  */

void FUN_1004b6cc8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_100474f14(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1004b6d90; end: 1004b6ddb;  */

undefined8 * FUN_1004b6d90(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  if ((long *)0x1 < plVar3) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (*(code *)plVar3[1])();
    }
  }
  return param_1;
}



/* Entry: 1004b6ddc; end: 1004b6e63;  */

byte * FUN_1004b6ddc(byte *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  long lVar3;
  
  pbVar1 = param_1;
  FUN_1004b6294();
  if (*(byte **)pbVar1 == param_1) {
    while (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 != (undefined8 *)0x0) {
      lVar3 = puVar2[2];
      *(long *)(param_1 + 8) = lVar3;
      if (lVar3 == 0) {
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
      }
      (*(code *)*puVar2)(puVar2,*(undefined4 *)((long)puVar2 + 0xc));
    }
    FUN_1004b6294();
    *puVar2 = 0;
    if (((*param_1 & 1) == 0) && ((bRam0000000113815bd8 & 1) != 0)) {
      func_0x000104a6f7dc();
    }
  }
  return param_1;
}



/* Entry: 1004b6e64; end: 1004b6ec3;  */

void FUN_1004b6e64(void)

{
  return;
}



/* Entry: 1004b6ec4; end: 1004b6f07;  */

long FUN_1004b6ec4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001004a5058();
  func_0x0001004b6ee4();
  lVar1 = unaff_x19;
  FUN_10048b470();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1004b6f08; end: 1004b6f33;  */

/* WARNING: Removing unreachable block (ram,0x0001004b7000) */
/* WARNING: Removing unreachable block (ram,0x0001004b7020) */

long * FUN_1004b6f08(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x18))
            (&lStack_70,*(long **)(param_1 + 8),param_1 + 0x28,param_2,param_3);
  plVar1 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0x130))(plRam0000000113815c70,lStack_60,0x648);
  *plVar1 = (long)&PTR_DAT_110abec20;
  plVar1[1] = (long)&PTR_DAT_110abec78;
  plVar1[2] = (long)&PTR_DAT_110abeca8;
  plVar1[3] = param_2;
  plVar1[5] = lStack_68;
  plVar1[4] = lStack_70;
  plVar1[7] = lStack_58;
  plVar1[6] = lStack_60;
  plVar1[9] = lStack_48;
  plVar1[8] = lStack_50;
  *(undefined1 *)(plVar1 + 10) = 1;
  FUN_1004b91c8(plVar1 + 0xb);
  FUN_1004b9298(plVar1 + 0x34);
  FUN_1004b9300(plVar1 + 0x61);
  FUN_1004b9360(plVar1 + 0x96);
  FUN_1004b93c4(plVar1,param_4);
  return plVar1;
}



/* Entry: 1004b6f34; end: 1004b7097;  */

long * FUN_1004b6f34(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5,
                    long param_6)

{
  long *plVar1;
  code *extraout_x8;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  (**(code **)(*param_1 + 0x18))(&lStack_70,param_1,param_3,param_4,param_2);
  plVar1 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0x130))(plRam0000000113815c70,lStack_60,0x648);
  *plVar1 = (long)&PTR_DAT_110abec20;
  plVar1[1] = (long)&PTR_DAT_110abec78;
  plVar1[2] = (long)&PTR_DAT_110abeca8;
  plVar1[3] = param_4;
  plVar1[5] = lStack_68;
  plVar1[4] = lStack_70;
  plVar1[7] = lStack_58;
  plVar1[6] = lStack_60;
  plVar1[9] = lStack_48;
  plVar1[8] = lStack_50;
  *(char *)(plVar1 + 10) = (char)param_5;
  FUN_1004b91c8(plVar1 + 0xb);
  FUN_1004b9298(plVar1 + 0x34);
  FUN_1004b9300(plVar1 + 0x61);
  FUN_1004b9360(plVar1 + 0x96);
  if (param_5 == 0) {
    if (param_6 != 0) {
      func_0x000107c34e98();
      func_0x000107c34eb8();
      (*extraout_x8)();
    }
  }
  else {
    FUN_1004b93c4(plVar1,param_6);
  }
  return plVar1;
}



/* Entry: 1004b7098; end: 1004b7357;  */

/* WARNING: Removing unreachable block (ram,0x0001004b7164) */

long * FUN_1004b7098(long *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,
                    long param_5,undefined8 param_6)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long **pplVar17;
  long *plVar18;
  int *piVar19;
  ulong *extraout_x8;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uStack_490;
  ulong uStack_488;
  long *plStack_480;
  long lStack_478;
  long *plStack_470;
  long **pplStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long *plStack_448;
  ulong uStack_440;
  ulong uStack_438;
  long *plStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_408;
  ulong uStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 uStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  long *plStack_3d0;
  long *plStack_3c8;
  undefined8 ***pppuStack_3c0;
  code *pcStack_3b8;
  char *pcStack_3b0;
  long *plStack_3a0;
  long *plStack_398;
  long *plStack_390;
  long *plStack_388;
  undefined8 uStack_380;
  long *plStack_378;
  undefined4 uStack_370;
  ulong uStack_368;
  long lStack_360;
  undefined8 uStack_358;
  long *plStack_350;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  char cStack_330;
  undefined1 uStack_328;
  undefined7 uStack_327;
  char cStack_308;
  undefined8 *puStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined1 ***pppuStack_2d0;
  code *pcStack_2c8;
  long lStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined1 auStack_260 [72];
  long alStack_218 [3];
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  char cStack_1c0;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_188;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3[3] == 0) {
LAB_1004b7130:
    plVar18 = param_4 + 0xf;
    if (*(char *)((long)param_4 + 0x8f) < '\0') {
      if (param_4[0x10] == 0) goto LAB_1004b7150;
    }
    else if (*(char *)((long)param_4 + 0x8f) == '\0') {
LAB_1004b7150:
      if ((char)*(byte *)((long)param_2 + 0x47) < '\0') {
        uVar20 = param_2[7];
      }
      else {
        uVar20 = (ulong)*(byte *)((long)param_2 + 0x47);
      }
      plVar18 = (long *)0x0;
      if (uVar20 != 0) {
        plVar18 = param_2 + 6;
      }
    }
    uVar22 = *param_3;
    uVar11 = uVar22;
    func_0x000107c613d0(uVar22);
    (**(code **)(*plRam0000000113815c70 + 0x198))(&lStack_90,plRam0000000113815c70,uVar22,uVar11);
    if (plVar18 == (long *)0x0) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      uVar20 = plVar18[1];
      plVar6 = (long *)*plVar18;
      if (-1 < (char)*(byte *)((long)plVar18 + 0x17)) {
        uVar20 = (ulong)*(byte *)((long)plVar18 + 0x17);
        plVar6 = plVar18;
      }
      (**(code **)(*plRam0000000113815c70 + 0x198))(&uStack_b0,plRam0000000113815c70,plVar6,uVar20);
      puVar16 = &uStack_b0;
    }
    plVar6 = (long *)param_2[9];
    plStack_c8 = plStack_88;
    lStack_d0 = lStack_90;
    uStack_b8 = uStack_78;
    uStack_c0 = uStack_80;
    lVar15 = param_4[0xe];
    uStack_120 = 0;
    func_0x000104ad939c(plVar6,param_4[0x28],(int)param_4[0x29],*(undefined8 *)(param_5 + 0x10),
                        &lStack_d0,puVar16,param_4[0xd]);
    plStack_e8 = plStack_88;
    lStack_f0 = lStack_90;
    uStack_d8 = uStack_78;
    uStack_e0 = uStack_80;
    FUN_100601b60(&lStack_f0);
    if (plVar18 != (long *)0x0) {
      uStack_108 = uStack_a8;
      uStack_110 = uStack_b0;
      uStack_f8 = uStack_98;
      uStack_100 = uStack_a0;
      FUN_100601b60(&uStack_110);
    }
  }
  else {
    if (*(char *)((long)param_4 + 0x8f) < '\0') {
      FUN_100033dac(&lStack_90,param_4[0xf],param_4[0x10]);
    }
    else {
      plStack_88 = (long *)param_4[0x10];
      lStack_90 = param_4[0xf];
      uStack_80 = param_4[0x11];
    }
    if (uStack_80 >> 0x38 != 0) goto LAB_1004b7130;
    plVar6 = (long *)param_2[9];
    lVar15 = 0;
    FUN_1004b7358(plVar6,param_4[0x28],(int)param_4[0x29],*(undefined8 *)(param_5 + 0x10),param_3[3]
                  ,param_4[0xd],param_4[0xe]);
  }
  func_0x0001004b8700(plVar6,param_4[0x16]);
  puVar16 = param_2 + 0x13;
  uVar20 = (ulong)*(uint *)(param_3 + 2);
  plVar7 = param_4;
  puVar14 = param_2;
  FUN_1004b8788(param_4,*param_3,param_3[1]);
  func_0x0001004b8f24(&lStack_90,param_2 + 2);
  plVar13 = &lStack_90;
  plVar9 = plVar6;
  FUN_1004b8f64();
  plVar18 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
    do {
      lVar21 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      func_0x000107c60d68();
      param_4 = plVar18;
    }
  }
  *param_1 = (long)(param_2 + 1);
  param_1[1] = param_5;
  param_1[2] = (long)plVar6;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[4] = (long)plVar7;
  param_1[5] = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_4;
  }
  func_0x000107c60e78();
  FUN_100837cc8(&lStack_90);
  func_0x000107c60bd8();
  pcStack_128 = FUN_1004b7358;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  if (lVar15 != 0) {
    func_0x000107c2c418();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1004b7570);
    (*pcVar5)();
  }
  alStack_218[0] = 0;
  alStack_218[1] = 0;
  alStack_218[2] = 0;
  func_0x0001004b62b4(alStack_218,0);
  FUN_100460de4(auStack_260);
  plVar18 = (long *)*puVar14;
  if ((long *)0x1 < plVar18) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *plVar18 = *plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_1a8 = puVar14[1];
  plStack_1b0 = (long *)*puVar14;
  uStack_198 = puVar14[3];
  uStack_1a0 = puVar14[2];
  bVar2 = *(byte *)(puVar14 + 8);
  if (bVar2 == 0) {
    cStack_1c0 = '\0';
    plStack_1e0 = (long *)((ulong)plStack_1e0 & 0xffffffffffffff00);
  }
  else {
    plVar18 = (long *)puVar14[4];
    if ((long *)0x1 < plVar18) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *plVar18 = *plVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_1d8 = puVar14[5];
    plStack_1e0 = (long *)puVar14[4];
    uStack_1c8 = puVar14[7];
    uStack_1d0 = puVar14[6];
    uStack_1f8 = 0;
    plStack_200 = (long *)0x0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    cStack_1c0 = '\x01';
  }
  puVar8 = puVar16;
  FUN_100491618(puVar16,param_6);
  pplVar17 = &plStack_1b0;
  pplVar10 = &plStack_1e0;
  lVar15 = 0;
  plVar18 = param_4;
  plVar6 = plVar9;
  plVar7 = plVar13;
  FUN_1004b7680(param_4);
  uVar12 = SUB84(plVar7,0);
  if (bVar2 == 0) {
    if ((cStack_1c0 != '\0') && ((long *)0x1 < plStack_1e0)) {
      do {
        lVar21 = *plStack_1e0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_1e0,0x10);
        if (bVar4) {
          *plStack_1e0 = lVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar21 + -1 == 0) {
        (*(code *)plStack_1e0[1])();
      }
    }
  }
  else {
    if ((cStack_1c0 != '\0') && ((long *)0x1 < plStack_1e0)) {
      do {
        lVar21 = *plStack_1e0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_1e0,0x10);
        if (bVar4) {
          *plStack_1e0 = lVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar21 + -1 == 0) {
        (*(code *)plStack_1e0[1])();
      }
    }
    if ((long *)0x1 < plStack_200) {
      do {
        lVar21 = *plStack_200;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_200,0x10);
        if (bVar4) {
          *plStack_200 = lVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar21 + -1 == 0) {
        (*(code *)plStack_200[1])();
      }
    }
  }
  if ((long *)0x1 < plStack_1b0) {
    do {
      lVar21 = *plStack_1b0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_1b0,0x10);
      if (bVar4) {
        *plStack_1b0 = lVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar21 + -1 == 0) {
      (*(code *)plStack_1b0[1])();
    }
  }
  FUN_100467a48(auStack_260);
  plVar7 = alStack_218;
  FUN_1004b6ddc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return plVar18;
  }
  func_0x000107c60e78();
  if ((int)plVar6 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6ddc(alStack_218);
  }
  plVar18 = plVar7;
  func_0x000107c60bd8();
  pcStack_268 = FUN_1004b75ec;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar3 = (char)plVar18[4];
  ppuStack_270 = &puStack_130;
  if (cVar3 == (char)plVar6[4]) {
    if (cVar3 != '\0') {
      lVar25 = plVar18[1];
      lVar24 = *plVar18;
      lVar23 = plVar18[3];
      lVar21 = plVar18[2];
      lVar28 = *plVar6;
      lVar27 = plVar6[3];
      lVar26 = plVar6[2];
      plVar18[1] = plVar6[1];
      *plVar18 = lVar28;
      plVar18[3] = lVar27;
      plVar18[2] = lVar26;
      plVar6[1] = lVar25;
      *plVar6 = lVar24;
      plVar6[3] = lVar23;
      plVar6[2] = lVar21;
    }
  }
  else if (cVar3 == '\0') {
    lVar25 = plVar6[1];
    lVar24 = *plVar6;
    lVar23 = plVar6[3];
    lVar21 = plVar6[2];
    plVar6[1] = 0;
    *plVar6 = 0;
    plVar6[3] = 0;
    plVar6[2] = 0;
    plVar18[1] = lVar25;
    *plVar18 = lVar24;
    plVar18[3] = lVar23;
    plVar18[2] = lVar21;
    *(undefined1 *)(plVar18 + 4) = 1;
  }
  else {
    FUN_1004b6d90();
    *(undefined1 *)(plVar18 + 4) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return plVar18;
  }
  func_0x000107c60e78();
  pcStack_2c8 = FUN_1004b7680;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar18 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plStack_2f0 = param_4;
  plStack_2e8 = plVar9;
  plStack_2e0 = plVar13;
  plStack_2d8 = plVar7;
  pppuStack_2d0 = &ppuStack_270;
  if ((char)plVar18[2] == '\0') {
    pcStack_3b0 = "channel->is_client()";
    uVar11 = 0x123;
LAB_1004b7854:
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel.cc"
                  ,uVar11,2,"assertion failed: %s");
    func_0x000107c60ebc();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1004b7878);
    (*pcVar5)();
  }
  if ((uVar20 != 0) && (lVar15 != 0)) {
    pcStack_3b0 = "!(cq != nullptr && pollset_set_alternative != nullptr)";
    uVar11 = 0x124;
    goto LAB_1004b7854;
  }
  plStack_348 = pplVar17[1];
  plStack_350 = *pplVar17;
  plStack_338 = pplVar17[3];
  plStack_340 = pplVar17[2];
  uStack_328 = 0;
  cStack_308 = '\0';
  puStack_300 = (undefined8 *)0x0;
  uStack_380 = 0;
  uStack_358 = 0;
  pplVar17[1] = (long *)0x0;
  *pplVar17 = (long *)0x0;
  pplVar17[3] = (long *)0x0;
  pplVar17[2] = (long *)0x0;
  cStack_330 = '\x01';
  plStack_388 = plVar18;
  plStack_378 = plVar6;
  uStack_370 = uVar12;
  uStack_368 = uVar20;
  lStack_360 = lVar15;
  FUN_1004b75ec(&uStack_328,pplVar10);
  pplVar10 = &plStack_398;
  puStack_300 = puVar8;
  FUN_1004b7914(&plStack_3a0,&plStack_388);
  if (plStack_3a0 != (long *)0x0) {
    plStack_390 = plStack_3a0;
    if (((ulong)plStack_3a0 & 1) != 0) {
      piVar19 = (int *)((long)plStack_3a0 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar4) {
          *piVar19 = *piVar19 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pplVar10 = &plStack_390;
    func_0x000104abab1c("call_create",pplVar10,
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel.cc"
                        ,0x133);
    if (((ulong)plStack_390 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  if (((ulong)plStack_3a0 & 1) != 0) {
    FUN_10084dad0();
  }
  if ((cStack_308 != '\0') &&
     (plVar18 = (long *)CONCAT71(uStack_327,uStack_328), (long *)0x1 < plVar18)) {
    do {
      lVar15 = *plVar18;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *plVar18 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plVar18[1])();
    }
  }
  if ((cStack_330 != '\0') && ((long *)0x1 < plStack_350)) {
    do {
      lVar15 = *plStack_350;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_350,0x10);
      if (bVar4) {
        *plStack_350 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plStack_350[1])();
    }
  }
  plVar18 = plStack_388;
  if (plStack_388 != (long *)0x0) {
    plVar6 = plStack_388 + 1;
    do {
      lVar15 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plStack_388 + 8))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return plStack_398;
  }
  func_0x000107c60e78();
  if ((int)pplVar10 != 0) {
    func_0x000104bd46a0();
    do {
      lVar15 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 + -1 == 0) goto LAB_1004b78f8;
  }
  func_0x000107c60bd8();
LAB_1004b78f8:
  (**(code **)(*plStack_398 + 8))(plStack_398);
  plVar7 = plVar18;
  func_0x000107c60bd8();
  plStack_3c8 = plStack_398;
  pcStack_3b8 = FUN_1004b7914;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = *plVar7;
  *extraout_x8 = 0;
  lVar21 = *(long *)(lVar23 + 0xc0);
  lVar15 = (*(ulong *)(lVar23 + 0x28) & 0xffffffffffffff00) + 0x200;
  plVar6 = (long *)(*(long *)(lVar21 + 0x38) + 0xdd0);
  uStack_400 = (ulong)bVar2;
  puStack_3f8 = puVar14;
  puStack_3f0 = puVar16;
  uStack_3e8 = param_6;
  plStack_3e0 = param_4;
  plStack_3d8 = plVar1;
  plStack_3d0 = plVar18;
  pppuStack_3c0 = &pppuStack_2d0;
  FUN_1004b7964(lVar15,plVar6,lVar23 + 0x98);
  FUN_1004b7d6c(plVar6,lVar15,plVar7);
  *pplVar10 = plVar6;
  func_0x0001004b8028(&plStack_430);
  if ((char)plVar6[5] == '\0') {
    plVar6[0x1b4] = 0;
    plVar6[0x1b5] = plVar7[1];
  }
  else {
    plVar6[0x1b4] = 0;
    plVar6[0x1b5] = 0;
    plVar6[0x1b6] = 0;
    plVar18 = (long *)plVar7[7];
    if ((long *)0x1 < plVar18) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *plVar18 = *plVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_428 = plVar7[8];
    plStack_430 = (long *)plVar7[7];
    lStack_418 = plVar7[10];
    lStack_420 = plVar7[9];
    FUN_1004b8034(plVar6 + 0x35);
    if ((char)plVar7[0x10] != '\0') {
      FUN_1008dc020(plVar6 + 0x35,plVar7 + 0xc);
    }
  }
  lVar15 = plVar7[2];
  if (lVar15 != 0) {
    func_0x000104ad86bc(&uStack_440,plVar6,lVar15,(int)plVar7[3]);
    func_0x000104addba0(&uStack_438,&uStack_440);
    FUN_1004b844c(extraout_x8,&uStack_438);
    if ((uStack_438 & 1) != 0) {
      FUN_10084dad0();
    }
    if ((uStack_440 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  lStack_478 = plVar7[6];
  plStack_470 = plVar6 + 0x147;
  pplStack_468 = &plStack_430;
  lStack_460 = plVar6[0x17];
  lStack_458 = plVar6[4];
  lStack_450 = plVar6[1];
  plStack_448 = plVar6 + 7;
  plStack_480 = plVar6 + 0x1ba;
  FUN_1004b8120(&uStack_488,lVar21,1,FUN_100836d68,plVar6,&plStack_480);
  uVar12 = SUB84(&uStack_488,0);
  FUN_1004b844c(extraout_x8);
  if ((uStack_488 & 1) != 0) {
    FUN_10084dad0();
  }
  if (lVar15 != 0) {
    func_0x000104ad87ec(plVar6);
    uVar12 = (undefined4)lVar15;
  }
  uVar20 = *extraout_x8;
  if (uVar20 != 0) {
    if ((uVar20 & 1) != 0) {
      piVar19 = (int *)(uVar20 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar4) {
          *piVar19 = *piVar19 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar12 = SUB84(&uStack_490,0);
    uStack_490 = uVar20;
    func_0x000104ad88e8(plVar6);
    if ((uVar20 & 1) != 0) {
      FUN_10084dad0(uVar20);
    }
  }
  if (plVar7[4] != 0) {
    if (plVar7[5] != 0) {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                    ,0x250,2,"assertion failed: %s");
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1004b7cc8);
      (*pcVar5)();
    }
    FUN_1004b85e8();
    lVar15 = plVar7[4];
    func_0x0001004b85fc();
    func_0x0001004b8624();
    plVar6[0x14] = lVar15;
    *(undefined4 *)(plVar6 + 0x15) = uVar12;
  }
  lVar15 = plVar7[5];
  if (lVar15 != 0) {
    FUN_1004dc3b0();
    plVar6[0x14] = lVar15;
    *(undefined4 *)(plVar6 + 0x15) = uVar12;
  }
  plVar18 = plVar6 + 0x14;
  func_0x0001004b862c();
  if (((ulong)plVar18 & 1) == 0) {
    FUN_1004b8648(plVar6 + 0x1ba,plVar6 + 0x14);
  }
  if ((char)plVar6[5] == '\0') {
    if ((plVar6[0x1b5] != 0) && (lVar15 = *(long *)(plVar6[0x1b5] + 0x18), lVar15 != 0)) {
      FUN_1004b8698(lVar15 + 0x38);
    }
  }
  else if (*(long *)(lVar23 + 0x90) != 0) {
    FUN_1004b8698(*(long *)(lVar23 + 0x90) + 0x50);
  }
  plVar18 = plStack_430;
  if ((long *)0x1 < plStack_430) {
    do {
      lVar15 = *plStack_430;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_430,0x10);
      if (bVar4) {
        *plStack_430 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plStack_430[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return plVar18;
  }
  func_0x000107c60e78();
  FUN_1004bdf74(extraout_x8);
  func_0x000107c60bd8();
  plVar6 = plVar18 + 10;
  *plVar6 = 0;
  plVar18[1] = (long)plVar6;
  plVar18[9] = (long)plVar6;
  plVar18[0xb] = 0;
  *plVar18 = 0;
  return plVar18;
}



/* Entry: 1004b7358; end: 1004b75eb;  */

long * FUN_1004b7358(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 *param_5
                    ,undefined8 param_6,undefined8 param_7,long param_8)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long lVar12;
  long **pplVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  ulong *extraout_x8;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uStack_370;
  ulong uStack_368;
  long *plStack_360;
  long lStack_358;
  long *plStack_350;
  long **pplStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long *plStack_328;
  ulong uStack_320;
  ulong uStack_318;
  long *plStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2e8;
  ulong uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  undefined1 ***pppuStack_2a0;
  code *pcStack_298;
  char *pcStack_290;
  long *plStack_280;
  long *plStack_278;
  long *plStack_270;
  long *plStack_268;
  undefined8 uStack_260;
  long *plStack_258;
  undefined4 uStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  char cStack_210;
  undefined1 uStack_208;
  undefined7 uStack_207;
  char cStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined1 auStack_140 [72];
  long alStack_f8 [3];
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char cStack_a0;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_8 != 0) {
    func_0x000107c2c418();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1004b7570);
    (*pcVar5)();
  }
  alStack_f8[0] = 0;
  alStack_f8[1] = 0;
  alStack_f8[2] = 0;
  func_0x0001004b62b4(alStack_f8,0);
  FUN_100460de4(auStack_140);
  plVar14 = (long *)*param_5;
  if ((long *)0x1 < plVar14) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = *plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_88 = param_5[1];
  plStack_90 = (long *)*param_5;
  uStack_78 = param_5[3];
  uStack_80 = param_5[2];
  bVar2 = *(byte *)(param_5 + 8);
  if (bVar2 == 0) {
    cStack_a0 = '\0';
    plStack_c0 = (long *)((ulong)plStack_c0 & 0xffffffffffffff00);
  }
  else {
    plVar14 = (long *)param_5[4];
    if ((long *)0x1 < plVar14) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = *plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_b8 = param_5[5];
    plStack_c0 = (long *)param_5[4];
    uStack_a8 = param_5[7];
    uStack_b0 = param_5[6];
    uStack_d8 = 0;
    plStack_e0 = (long *)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    cStack_a0 = '\x01';
  }
  uVar9 = param_6;
  FUN_100491618(param_6,param_7);
  pplVar13 = &plStack_90;
  pplVar8 = &plStack_c0;
  lVar12 = 0;
  plVar14 = param_1;
  plVar7 = param_2;
  uVar11 = param_3;
  FUN_1004b7680(param_1);
  uVar10 = (undefined4)uVar11;
  if (bVar2 == 0) {
    if ((cStack_a0 != '\0') && ((long *)0x1 < plStack_c0)) {
      do {
        lVar15 = *plStack_c0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
        if (bVar4) {
          *plStack_c0 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 + -1 == 0) {
        (*(code *)plStack_c0[1])();
      }
    }
  }
  else {
    if ((cStack_a0 != '\0') && ((long *)0x1 < plStack_c0)) {
      do {
        lVar15 = *plStack_c0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
        if (bVar4) {
          *plStack_c0 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 + -1 == 0) {
        (*(code *)plStack_c0[1])();
      }
    }
    if ((long *)0x1 < plStack_e0) {
      do {
        lVar15 = *plStack_e0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
        if (bVar4) {
          *plStack_e0 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 + -1 == 0) {
        (*(code *)plStack_e0[1])();
      }
    }
  }
  if ((long *)0x1 < plStack_90) {
    do {
      lVar15 = *plStack_90;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar4) {
        *plStack_90 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  FUN_100467a48(auStack_140);
  plVar6 = alStack_f8;
  FUN_1004b6ddc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar14;
  }
  func_0x000107c60e78();
  if ((int)plVar7 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6ddc(alStack_f8);
  }
  plVar14 = plVar6;
  func_0x000107c60bd8();
  pcStack_148 = FUN_1004b75ec;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar3 = (char)plVar14[4];
  puStack_150 = &stack0xfffffffffffffff0;
  if (cVar3 == (char)plVar7[4]) {
    if (cVar3 != '\0') {
      lVar20 = plVar14[1];
      lVar19 = *plVar14;
      lVar18 = plVar14[3];
      lVar15 = plVar14[2];
      lVar23 = *plVar7;
      lVar22 = plVar7[3];
      lVar21 = plVar7[2];
      plVar14[1] = plVar7[1];
      *plVar14 = lVar23;
      plVar14[3] = lVar22;
      plVar14[2] = lVar21;
      plVar7[1] = lVar20;
      *plVar7 = lVar19;
      plVar7[3] = lVar18;
      plVar7[2] = lVar15;
    }
  }
  else if (cVar3 == '\0') {
    lVar20 = plVar7[1];
    lVar19 = *plVar7;
    lVar18 = plVar7[3];
    lVar15 = plVar7[2];
    plVar7[1] = 0;
    *plVar7 = 0;
    plVar7[3] = 0;
    plVar7[2] = 0;
    plVar14[1] = lVar20;
    *plVar14 = lVar19;
    plVar14[3] = lVar18;
    plVar14[2] = lVar15;
    *(undefined1 *)(plVar14 + 4) = 1;
  }
  else {
    FUN_1004b6d90();
    *(undefined1 *)(plVar14 + 4) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return plVar14;
  }
  func_0x000107c60e78();
  pcStack_1a8 = FUN_1004b7680;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar14 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plStack_1d0 = param_1;
  plStack_1c8 = param_2;
  uStack_1c0 = param_3;
  plStack_1b8 = plVar6;
  ppuStack_1b0 = &puStack_150;
  if ((char)plVar14[2] == '\0') {
    pcStack_290 = "channel->is_client()";
    uVar9 = 0x123;
LAB_1004b7854:
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel.cc"
                  ,uVar9,2,"assertion failed: %s");
    func_0x000107c60ebc();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1004b7878);
    (*pcVar5)();
  }
  if ((param_4 != 0) && (lVar12 != 0)) {
    pcStack_290 = "!(cq != nullptr && pollset_set_alternative != nullptr)";
    uVar9 = 0x124;
    goto LAB_1004b7854;
  }
  plStack_228 = pplVar13[1];
  plStack_230 = *pplVar13;
  plStack_218 = pplVar13[3];
  plStack_220 = pplVar13[2];
  uStack_208 = 0;
  cStack_1e8 = '\0';
  uStack_1e0 = 0;
  uStack_260 = 0;
  uStack_238 = 0;
  pplVar13[1] = (long *)0x0;
  *pplVar13 = (long *)0x0;
  pplVar13[3] = (long *)0x0;
  pplVar13[2] = (long *)0x0;
  cStack_210 = '\x01';
  plStack_268 = plVar14;
  plStack_258 = plVar7;
  uStack_250 = uVar10;
  lStack_248 = param_4;
  lStack_240 = lVar12;
  FUN_1004b75ec(&uStack_208,pplVar8);
  pplVar8 = &plStack_278;
  uStack_1e0 = uVar9;
  FUN_1004b7914(&plStack_280,&plStack_268);
  if (plStack_280 != (long *)0x0) {
    plStack_270 = plStack_280;
    if (((ulong)plStack_280 & 1) != 0) {
      piVar16 = (int *)((long)plStack_280 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar4) {
          *piVar16 = *piVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pplVar8 = &plStack_270;
    func_0x000104abab1c("call_create",pplVar8,
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel.cc"
                        ,0x133);
    if (((ulong)plStack_270 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  if (((ulong)plStack_280 & 1) != 0) {
    FUN_10084dad0();
  }
  if ((cStack_1e8 != '\0') &&
     (plVar14 = (long *)CONCAT71(uStack_207,uStack_208), (long *)0x1 < plVar14)) {
    do {
      lVar12 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar14[1])();
    }
  }
  if ((cStack_210 != '\0') && ((long *)0x1 < plStack_230)) {
    do {
      lVar12 = *plStack_230;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_230,0x10);
      if (bVar4) {
        *plStack_230 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_230[1])();
    }
  }
  plVar14 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    plVar7 = plStack_268 + 1;
    do {
      lVar12 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plStack_268 + 8))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return plStack_278;
  }
  func_0x000107c60e78();
  if ((int)pplVar8 != 0) {
    func_0x000104bd46a0();
    do {
      lVar12 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) goto LAB_1004b78f8;
  }
  func_0x000107c60bd8();
LAB_1004b78f8:
  (**(code **)(*plStack_278 + 8))(plStack_278);
  plVar6 = plVar14;
  func_0x000107c60bd8();
  plStack_2a8 = plStack_278;
  pcStack_298 = FUN_1004b7914;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = *plVar6;
  *extraout_x8 = 0;
  lVar15 = *(long *)(lVar18 + 0xc0);
  lVar12 = (*(ulong *)(lVar18 + 0x28) & 0xffffffffffffff00) + 0x200;
  plVar7 = (long *)(*(long *)(lVar15 + 0x38) + 0xdd0);
  uStack_2e0 = (ulong)bVar2;
  puStack_2d8 = param_5;
  uStack_2d0 = param_6;
  uStack_2c8 = param_7;
  plStack_2c0 = param_1;
  plStack_2b8 = plVar1;
  plStack_2b0 = plVar14;
  pppuStack_2a0 = &ppuStack_1b0;
  FUN_1004b7964(lVar12,plVar7,lVar18 + 0x98);
  FUN_1004b7d6c(plVar7,lVar12,plVar6);
  *pplVar8 = plVar7;
  func_0x0001004b8028(&plStack_310);
  if ((char)plVar7[5] == '\0') {
    plVar7[0x1b4] = 0;
    plVar7[0x1b5] = plVar6[1];
  }
  else {
    plVar7[0x1b4] = 0;
    plVar7[0x1b5] = 0;
    plVar7[0x1b6] = 0;
    plVar14 = (long *)plVar6[7];
    if ((long *)0x1 < plVar14) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = *plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_308 = plVar6[8];
    plStack_310 = (long *)plVar6[7];
    lStack_2f8 = plVar6[10];
    lStack_300 = plVar6[9];
    FUN_1004b8034(plVar7 + 0x35);
    if ((char)plVar6[0x10] != '\0') {
      FUN_1008dc020(plVar7 + 0x35,plVar6 + 0xc);
    }
  }
  lVar12 = plVar6[2];
  if (lVar12 != 0) {
    func_0x000104ad86bc(&uStack_320,plVar7,lVar12,(int)plVar6[3]);
    func_0x000104addba0(&uStack_318,&uStack_320);
    FUN_1004b844c(extraout_x8,&uStack_318);
    if ((uStack_318 & 1) != 0) {
      FUN_10084dad0();
    }
    if ((uStack_320 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  lStack_358 = plVar6[6];
  plStack_350 = plVar7 + 0x147;
  pplStack_348 = &plStack_310;
  lStack_340 = plVar7[0x17];
  lStack_338 = plVar7[4];
  lStack_330 = plVar7[1];
  plStack_328 = plVar7 + 7;
  plStack_360 = plVar7 + 0x1ba;
  FUN_1004b8120(&uStack_368,lVar15,1,FUN_100836d68,plVar7,&plStack_360);
  uVar10 = SUB84(&uStack_368,0);
  FUN_1004b844c(extraout_x8);
  if ((uStack_368 & 1) != 0) {
    FUN_10084dad0();
  }
  if (lVar12 != 0) {
    func_0x000104ad87ec(plVar7);
    uVar10 = (undefined4)lVar12;
  }
  uVar17 = *extraout_x8;
  if (uVar17 != 0) {
    if ((uVar17 & 1) != 0) {
      piVar16 = (int *)(uVar17 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar4) {
          *piVar16 = *piVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar10 = SUB84(&uStack_370,0);
    uStack_370 = uVar17;
    func_0x000104ad88e8(plVar7);
    if ((uVar17 & 1) != 0) {
      FUN_10084dad0(uVar17);
    }
  }
  if (plVar6[4] != 0) {
    if (plVar6[5] != 0) {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                    ,0x250,2,"assertion failed: %s");
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1004b7cc8);
      (*pcVar5)();
    }
    FUN_1004b85e8();
    lVar12 = plVar6[4];
    func_0x0001004b85fc();
    func_0x0001004b8624();
    plVar7[0x14] = lVar12;
    *(undefined4 *)(plVar7 + 0x15) = uVar10;
  }
  lVar12 = plVar6[5];
  if (lVar12 != 0) {
    FUN_1004dc3b0();
    plVar7[0x14] = lVar12;
    *(undefined4 *)(plVar7 + 0x15) = uVar10;
  }
  plVar14 = plVar7 + 0x14;
  func_0x0001004b862c();
  if (((ulong)plVar14 & 1) == 0) {
    FUN_1004b8648(plVar7 + 0x1ba,plVar7 + 0x14);
  }
  if ((char)plVar7[5] == '\0') {
    if ((plVar7[0x1b5] != 0) && (lVar12 = *(long *)(plVar7[0x1b5] + 0x18), lVar12 != 0)) {
      FUN_1004b8698(lVar12 + 0x38);
    }
  }
  else if (*(long *)(lVar18 + 0x90) != 0) {
    FUN_1004b8698(*(long *)(lVar18 + 0x90) + 0x50);
  }
  plVar14 = plStack_310;
  if ((long *)0x1 < plStack_310) {
    do {
      lVar12 = *plStack_310;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_310,0x10);
      if (bVar4) {
        *plStack_310 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_310[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
    func_0x000107c60e78();
    FUN_1004bdf74(extraout_x8);
    func_0x000107c60bd8();
    plVar7 = plVar14 + 10;
    *plVar7 = 0;
    plVar14[1] = (long)plVar7;
    plVar14[9] = (long)plVar7;
    plVar14[0xb] = 0;
    *plVar14 = 0;
    return plVar14;
  }
  return plVar14;
}



/* Entry: 1004b75ec; end: 1004b767f;  */

long * FUN_1004b75ec(long *param_1,long *param_2,undefined4 param_3,long param_4,long param_5,
                    undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  long **pplVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  ulong *extraout_x8;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uStack_230;
  ulong uStack_228;
  long *plStack_220;
  long lStack_218;
  long *plStack_210;
  long **pplStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long *plStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  long *plStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1a8;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined4 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char cStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  char cStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar1 = (char)param_1[4];
  if (cVar1 == (char)param_2[4]) {
    if (cVar1 != '\0') {
      lVar16 = param_1[1];
      lVar15 = *param_1;
      lVar14 = param_1[3];
      lVar12 = param_1[2];
      lVar19 = *param_2;
      lVar18 = param_2[3];
      lVar17 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = lVar19;
      param_1[3] = lVar18;
      param_1[2] = lVar17;
      param_2[1] = lVar16;
      *param_2 = lVar15;
      param_2[3] = lVar14;
      param_2[2] = lVar12;
    }
  }
  else if (cVar1 == '\0') {
    lVar16 = param_2[1];
    lVar15 = *param_2;
    lVar14 = param_2[3];
    lVar12 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_1[1] = lVar16;
    *param_1 = lVar15;
    param_1[3] = lVar14;
    param_1[2] = lVar12;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    FUN_1004b6d90();
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_1;
  }
  func_0x000107c60e78();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((char)param_1[2] == '\0') {
    uVar8 = 0x123;
LAB_1004b7854:
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel.cc"
                  ,uVar8,2,"assertion failed: %s");
    func_0x000107c60ebc();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1004b7878);
    (*pcVar3)();
  }
  if ((param_4 != 0) && (param_5 != 0)) {
    uVar8 = 0x124;
    goto LAB_1004b7854;
  }
  uStack_e8 = param_6[1];
  plStack_f0 = (long *)*param_6;
  uStack_d8 = param_6[3];
  uStack_e0 = param_6[2];
  uStack_c8 = 0;
  cStack_a8 = '\0';
  uStack_a0 = 0;
  uStack_120 = 0;
  uStack_f8 = 0;
  param_6[1] = 0;
  *param_6 = 0;
  param_6[3] = 0;
  param_6[2] = 0;
  cStack_d0 = '\x01';
  plStack_128 = param_1;
  plStack_118 = param_2;
  uStack_110 = param_3;
  lStack_108 = param_4;
  lStack_100 = param_5;
  FUN_1004b75ec(&uStack_c8,param_7);
  pplVar7 = &plStack_138;
  uStack_a0 = param_8;
  FUN_1004b7914(&plStack_140,&plStack_128);
  if (plStack_140 != (long *)0x0) {
    plStack_130 = plStack_140;
    if (((ulong)plStack_140 & 1) != 0) {
      piVar10 = (int *)((long)plStack_140 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = *piVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pplVar7 = &plStack_130;
    func_0x000104abab1c("call_create",pplVar7,
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel.cc"
                        ,0x133);
    if (((ulong)plStack_130 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  if (((ulong)plStack_140 & 1) != 0) {
    FUN_10084dad0();
  }
  if ((cStack_a8 != '\0') && (plVar4 = (long *)CONCAT71(uStack_c7,uStack_c8), (long *)0x1 < plVar4))
  {
    do {
      lVar9 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plVar4[1])();
    }
  }
  if ((cStack_d0 != '\0') && ((long *)0x1 < plStack_f0)) {
    do {
      lVar9 = *plStack_f0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
      if (bVar2) {
        *plStack_f0 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_f0[1])();
    }
  }
  plVar4 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar11 = plStack_128 + 1;
    do {
      lVar9 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plStack_128 + 8))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return plStack_138;
  }
  func_0x000107c60e78();
  if ((int)pplVar7 != 0) {
    func_0x000104bd46a0();
    do {
      lVar9 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) goto LAB_1004b78f8;
  }
  func_0x000107c60bd8();
LAB_1004b78f8:
  (**(code **)(*plStack_138 + 8))(plStack_138);
  func_0x000107c60bd8();
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = *plVar4;
  *extraout_x8 = 0;
  lVar12 = *(long *)(lVar14 + 0xc0);
  lVar9 = (*(ulong *)(lVar14 + 0x28) & 0xffffffffffffff00) + 0x200;
  plVar5 = (long *)(*(long *)(lVar12 + 0x38) + 0xdd0);
  FUN_1004b7964(lVar9,plVar5,lVar14 + 0x98);
  FUN_1004b7d6c(plVar5,lVar9,plVar4);
  *pplVar7 = plVar5;
  func_0x0001004b8028(&plStack_1d0);
  if ((char)plVar5[5] == '\0') {
    plVar5[0x1b4] = 0;
    plVar5[0x1b5] = plVar4[1];
  }
  else {
    plVar5[0x1b4] = 0;
    plVar5[0x1b5] = 0;
    plVar5[0x1b6] = 0;
    plVar11 = (long *)plVar4[7];
    if ((long *)0x1 < plVar11) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = *plVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_1c8 = plVar4[8];
    plStack_1d0 = (long *)plVar4[7];
    lStack_1b8 = plVar4[10];
    lStack_1c0 = plVar4[9];
    FUN_1004b8034(plVar5 + 0x35);
    if ((char)plVar4[0x10] != '\0') {
      FUN_1008dc020(plVar5 + 0x35,plVar4 + 0xc);
    }
  }
  lVar9 = plVar4[2];
  if (lVar9 != 0) {
    func_0x000104ad86bc(&uStack_1e0,plVar5,lVar9,(int)plVar4[3]);
    func_0x000104addba0(&uStack_1d8,&uStack_1e0);
    FUN_1004b844c(extraout_x8,&uStack_1d8);
    if ((uStack_1d8 & 1) != 0) {
      FUN_10084dad0();
    }
    if ((uStack_1e0 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  lStack_218 = plVar4[6];
  plStack_210 = plVar5 + 0x147;
  pplStack_208 = &plStack_1d0;
  lStack_200 = plVar5[0x17];
  lStack_1f8 = plVar5[4];
  lStack_1f0 = plVar5[1];
  plStack_1e8 = plVar5 + 7;
  plStack_220 = plVar5 + 0x1ba;
  FUN_1004b8120(&uStack_228,lVar12,1,FUN_100836d68,plVar5,&plStack_220);
  uVar6 = SUB84(&uStack_228,0);
  FUN_1004b844c(extraout_x8);
  if ((uStack_228 & 1) != 0) {
    FUN_10084dad0();
  }
  if (lVar9 != 0) {
    func_0x000104ad87ec(plVar5);
    uVar6 = (undefined4)lVar9;
  }
  uVar13 = *extraout_x8;
  if (uVar13 != 0) {
    if ((uVar13 & 1) != 0) {
      piVar10 = (int *)(uVar13 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = *piVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar6 = SUB84(&uStack_230,0);
    uStack_230 = uVar13;
    func_0x000104ad88e8(plVar5);
    if ((uVar13 & 1) != 0) {
      FUN_10084dad0(uVar13);
    }
  }
  if (plVar4[4] != 0) {
    if (plVar4[5] != 0) {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                    ,0x250,2,"assertion failed: %s");
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1004b7cc8);
      (*pcVar3)();
    }
    FUN_1004b85e8();
    lVar9 = plVar4[4];
    func_0x0001004b85fc();
    func_0x0001004b8624();
    plVar5[0x14] = lVar9;
    *(undefined4 *)(plVar5 + 0x15) = uVar6;
  }
  lVar9 = plVar4[5];
  if (lVar9 != 0) {
    FUN_1004dc3b0();
    plVar5[0x14] = lVar9;
    *(undefined4 *)(plVar5 + 0x15) = uVar6;
  }
  plVar4 = plVar5 + 0x14;
  func_0x0001004b862c();
  if (((ulong)plVar4 & 1) == 0) {
    FUN_1004b8648(plVar5 + 0x1ba,plVar5 + 0x14);
  }
  if ((char)plVar5[5] == '\0') {
    if ((plVar5[0x1b5] != 0) && (lVar9 = *(long *)(plVar5[0x1b5] + 0x18), lVar9 != 0)) {
      FUN_1004b8698(lVar9 + 0x38);
    }
  }
  else if (*(long *)(lVar14 + 0x90) != 0) {
    FUN_1004b8698(*(long *)(lVar14 + 0x90) + 0x50);
  }
  plVar5 = plStack_1d0;
  if ((long *)0x1 < plStack_1d0) {
    do {
      lVar9 = *plStack_1d0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_1d0,0x10);
      if (bVar2) {
        *plStack_1d0 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_1d0[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
    func_0x000107c60e78();
    FUN_1004bdf74(extraout_x8);
    func_0x000107c60bd8();
    plVar4 = plVar5 + 10;
    *plVar4 = 0;
    plVar5[1] = (long)plVar4;
    plVar5[9] = (long)plVar4;
    plVar5[0xb] = 0;
    *plVar5 = 0;
    return plVar5;
  }
  return plVar5;
}



/* Entry: 1004b7680; end: 1004b7913;  */

long * FUN_1004b7680(long *param_1,undefined8 param_2,undefined4 param_3,long param_4,long param_5,
                    undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  long **pplVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  ulong *extraout_x8;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uStack_1d0;
  ulong uStack_1c8;
  long *plStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  long **pplStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long *plStack_188;
  ulong uStack_180;
  ulong uStack_178;
  long *plStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_148;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char cStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  char cStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((char)param_1[2] == '\0') {
    uVar8 = 0x123;
LAB_1004b7854:
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel.cc"
                  ,uVar8,2,"assertion failed: %s");
    func_0x000107c60ebc();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1004b7878);
    (*pcVar3)();
  }
  if ((param_4 != 0) && (param_5 != 0)) {
    uVar8 = 0x124;
    goto LAB_1004b7854;
  }
  uStack_88 = param_6[1];
  plStack_90 = (long *)*param_6;
  uStack_78 = param_6[3];
  uStack_80 = param_6[2];
  uStack_68 = 0;
  cStack_48 = '\0';
  uStack_40 = 0;
  uStack_c0 = 0;
  uStack_98 = 0;
  param_6[1] = 0;
  *param_6 = 0;
  param_6[3] = 0;
  param_6[2] = 0;
  cStack_70 = '\x01';
  plStack_c8 = param_1;
  uStack_b8 = param_2;
  uStack_b0 = param_3;
  lStack_a8 = param_4;
  lStack_a0 = param_5;
  FUN_1004b75ec(&uStack_68,param_7);
  pplVar7 = &plStack_d8;
  uStack_40 = param_8;
  FUN_1004b7914(&plStack_e0,&plStack_c8);
  if (plStack_e0 != (long *)0x0) {
    plStack_d0 = plStack_e0;
    if (((ulong)plStack_e0 & 1) != 0) {
      piVar9 = (int *)((long)plStack_e0 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pplVar7 = &plStack_d0;
    func_0x000104abab1c("call_create",pplVar7,
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel.cc"
                        ,0x133);
    if (((ulong)plStack_d0 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  if (((ulong)plStack_e0 & 1) != 0) {
    FUN_10084dad0();
  }
  if ((cStack_48 != '\0') && (plVar4 = (long *)CONCAT71(uStack_67,uStack_68), (long *)0x1 < plVar4))
  {
    do {
      lVar10 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plVar4[1])();
    }
  }
  if ((cStack_70 != '\0') && ((long *)0x1 < plStack_90)) {
    do {
      lVar10 = *plStack_90;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar2) {
        *plStack_90 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  plVar4 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar11 = plStack_c8 + 1;
    do {
      lVar10 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plStack_c8 + 8))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plStack_d8;
  }
  func_0x000107c60e78();
  if ((int)pplVar7 != 0) {
    func_0x000104bd46a0();
    do {
      lVar10 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) goto LAB_1004b78f8;
  }
  func_0x000107c60bd8();
LAB_1004b78f8:
  (**(code **)(*plStack_d8 + 8))(plStack_d8);
  func_0x000107c60bd8();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = *plVar4;
  *extraout_x8 = 0;
  lVar12 = *(long *)(lVar14 + 0xc0);
  lVar10 = (*(ulong *)(lVar14 + 0x28) & 0xffffffffffffff00) + 0x200;
  plVar5 = (long *)(*(long *)(lVar12 + 0x38) + 0xdd0);
  FUN_1004b7964(lVar10,plVar5,lVar14 + 0x98);
  FUN_1004b7d6c(plVar5,lVar10,plVar4);
  *pplVar7 = plVar5;
  func_0x0001004b8028(&plStack_170);
  if ((char)plVar5[5] == '\0') {
    plVar5[0x1b4] = 0;
    plVar5[0x1b5] = plVar4[1];
  }
  else {
    plVar5[0x1b4] = 0;
    plVar5[0x1b5] = 0;
    plVar5[0x1b6] = 0;
    plVar11 = (long *)plVar4[7];
    if ((long *)0x1 < plVar11) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = *plVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_168 = plVar4[8];
    plStack_170 = (long *)plVar4[7];
    lStack_158 = plVar4[10];
    lStack_160 = plVar4[9];
    FUN_1004b8034(plVar5 + 0x35);
    if ((char)plVar4[0x10] != '\0') {
      FUN_1008dc020(plVar5 + 0x35,plVar4 + 0xc);
    }
  }
  lVar10 = plVar4[2];
  if (lVar10 != 0) {
    func_0x000104ad86bc(&uStack_180,plVar5,lVar10,(int)plVar4[3]);
    func_0x000104addba0(&uStack_178,&uStack_180);
    FUN_1004b844c(extraout_x8,&uStack_178);
    if ((uStack_178 & 1) != 0) {
      FUN_10084dad0();
    }
    if ((uStack_180 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  lStack_1b8 = plVar4[6];
  plStack_1b0 = plVar5 + 0x147;
  pplStack_1a8 = &plStack_170;
  lStack_1a0 = plVar5[0x17];
  lStack_198 = plVar5[4];
  lStack_190 = plVar5[1];
  plStack_188 = plVar5 + 7;
  plStack_1c0 = plVar5 + 0x1ba;
  FUN_1004b8120(&uStack_1c8,lVar12,1,FUN_100836d68,plVar5,&plStack_1c0);
  uVar6 = SUB84(&uStack_1c8,0);
  FUN_1004b844c(extraout_x8);
  if ((uStack_1c8 & 1) != 0) {
    FUN_10084dad0();
  }
  if (lVar10 != 0) {
    func_0x000104ad87ec(plVar5);
    uVar6 = (undefined4)lVar10;
  }
  uVar13 = *extraout_x8;
  if (uVar13 != 0) {
    if ((uVar13 & 1) != 0) {
      piVar9 = (int *)(uVar13 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar6 = SUB84(&uStack_1d0,0);
    uStack_1d0 = uVar13;
    func_0x000104ad88e8(plVar5);
    if ((uVar13 & 1) != 0) {
      FUN_10084dad0(uVar13);
    }
  }
  if (plVar4[4] != 0) {
    if (plVar4[5] != 0) {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                    ,0x250,2,"assertion failed: %s");
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1004b7cc8);
      (*pcVar3)();
    }
    FUN_1004b85e8();
    lVar10 = plVar4[4];
    func_0x0001004b85fc();
    func_0x0001004b8624();
    plVar5[0x14] = lVar10;
    *(undefined4 *)(plVar5 + 0x15) = uVar6;
  }
  lVar10 = plVar4[5];
  if (lVar10 != 0) {
    FUN_1004dc3b0();
    plVar5[0x14] = lVar10;
    *(undefined4 *)(plVar5 + 0x15) = uVar6;
  }
  plVar4 = plVar5 + 0x14;
  func_0x0001004b862c();
  if (((ulong)plVar4 & 1) == 0) {
    FUN_1004b8648(plVar5 + 0x1ba,plVar5 + 0x14);
  }
  if ((char)plVar5[5] == '\0') {
    if ((plVar5[0x1b5] != 0) && (lVar10 = *(long *)(plVar5[0x1b5] + 0x18), lVar10 != 0)) {
      FUN_1004b8698(lVar10 + 0x38);
    }
  }
  else if (*(long *)(lVar14 + 0x90) != 0) {
    FUN_1004b8698(*(long *)(lVar14 + 0x90) + 0x50);
  }
  plVar5 = plStack_170;
  if ((long *)0x1 < plStack_170) {
    do {
      lVar10 = *plStack_170;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_170,0x10);
      if (bVar2) {
        *plStack_170 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_170[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
    func_0x000107c60e78();
    FUN_1004bdf74(extraout_x8);
    func_0x000107c60bd8();
    plVar4 = plVar5 + 10;
    *plVar4 = 0;
    plVar5[1] = (long)plVar4;
    plVar5[9] = (long)plVar4;
    plVar5[0xb] = 0;
    *plVar5 = 0;
    return plVar5;
  }
  return plVar5;
}



/* Entry: 1004b7914; end: 1004b7917;  */

void FUN_1004b7914(ulong *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long **pplStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *param_2;
  *param_1 = 0;
  lVar9 = *(long *)(lVar12 + 0xc0);
  lVar11 = (*(ulong *)(lVar12 + 0x28) & 0xffffffffffffff00) + 0x200;
  lVar5 = *(long *)(lVar9 + 0x38) + 0xdd0;
  FUN_1004b7964(lVar11,lVar5,lVar12 + 0x98);
  FUN_1004b7d6c(lVar5,lVar11,param_2);
  *param_3 = lVar5;
  func_0x0001004b8028(&plStack_80);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    *(undefined8 *)(lVar5 + 0xda0) = 0;
    *(long *)(lVar5 + 0xda8) = param_2[1];
  }
  else {
    *(undefined8 *)(lVar5 + 0xda0) = 0;
    *(undefined8 *)(lVar5 + 0xda8) = 0;
    *(undefined8 *)(lVar5 + 0xdb0) = 0;
    plVar6 = (long *)param_2[7];
    if ((long *)0x1 < plVar6) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_78 = param_2[8];
    plStack_80 = (long *)param_2[7];
    lStack_68 = param_2[10];
    lStack_70 = param_2[9];
    FUN_1004b8034(lVar5 + 0x1a8);
    if ((char)param_2[0x10] != '\0') {
      FUN_1008dc020(lVar5 + 0x1a8,param_2 + 0xc);
    }
  }
  lVar11 = param_2[2];
  if (lVar11 != 0) {
    func_0x000104ad86bc(&uStack_90,lVar5,lVar11,(int)param_2[3]);
    func_0x000104addba0(&uStack_88,&uStack_90);
    FUN_1004b844c(param_1,&uStack_88);
    if ((uStack_88 & 1) != 0) {
      FUN_10084dad0();
    }
    if ((uStack_90 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  lStack_c8 = param_2[6];
  lStack_c0 = lVar5 + 0xa38;
  pplStack_b8 = &plStack_80;
  uStack_b0 = *(undefined8 *)(lVar5 + 0xb8);
  uStack_a8 = *(undefined8 *)(lVar5 + 0x20);
  uStack_a0 = *(undefined8 *)(lVar5 + 8);
  lStack_98 = lVar5 + 0x38;
  lStack_d0 = lVar5 + 0xdd0;
  FUN_1004b8120(&uStack_d8,lVar9,1,FUN_100836d68,lVar5,&lStack_d0);
  uVar4 = SUB84(&uStack_d8,0);
  FUN_1004b844c(param_1);
  if ((uStack_d8 & 1) != 0) {
    FUN_10084dad0();
  }
  if (lVar11 != 0) {
    func_0x000104ad87ec(lVar5);
    uVar4 = (undefined4)lVar11;
  }
  uVar10 = *param_1;
  if (uVar10 != 0) {
    if ((uVar10 & 1) != 0) {
      piVar7 = (int *)(uVar10 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar4 = SUB84(&uStack_e0,0);
    uStack_e0 = uVar10;
    func_0x000104ad88e8(lVar5);
    if ((uVar10 & 1) != 0) {
      FUN_10084dad0(uVar10);
    }
  }
  if (param_2[4] != 0) {
    if (param_2[5] != 0) {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                    ,0x250,2,"assertion failed: %s");
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1004b7cc8);
      (*pcVar3)();
    }
    FUN_1004b85e8();
    lVar11 = param_2[4];
    func_0x0001004b85fc();
    func_0x0001004b8624();
    *(long *)(lVar5 + 0xa0) = lVar11;
    *(undefined4 *)(lVar5 + 0xa8) = uVar4;
  }
  lVar11 = param_2[5];
  if (lVar11 != 0) {
    FUN_1004dc3b0();
    *(long *)(lVar5 + 0xa0) = lVar11;
    *(undefined4 *)(lVar5 + 0xa8) = uVar4;
  }
  uVar10 = lVar5 + 0xa0U;
  func_0x0001004b862c();
  if ((uVar10 & 1) == 0) {
    FUN_1004b8648(lVar5 + 0xdd0,lVar5 + 0xa0U);
  }
  if (*(char *)(lVar5 + 0x28) == '\0') {
    if ((*(long *)(lVar5 + 0xda8) != 0) &&
       (lVar11 = *(long *)(*(long *)(lVar5 + 0xda8) + 0x18), lVar11 != 0)) {
      FUN_1004b8698(lVar11 + 0x38);
    }
  }
  else if (*(long *)(lVar12 + 0x90) != 0) {
    FUN_1004b8698(*(long *)(lVar12 + 0x90) + 0x50);
  }
  plVar6 = plStack_80;
  if ((long *)0x1 < plStack_80) {
    do {
      lVar11 = *plStack_80;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar2) {
        *plStack_80 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  FUN_1004bdf74(param_1);
  func_0x000107c60bd8();
  plVar8 = plVar6 + 10;
  *plVar8 = 0;
  plVar6[1] = (long)plVar8;
  plVar6[9] = (long)plVar8;
  plVar6[0xb] = 0;
  *plVar6 = 0;
  return;
}



/* Entry: 1004b7918; end: 1004b7963;  */

undefined1  [16] FUN_1004b7918(ulong param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((param_2 & param_2 - 1) == 0) {
    lVar1 = param_2 + 7 + param_1;
    uVar3 = param_2;
    FUN_100460200();
    uVar4 = param_2 + 7 + lVar1 & -param_2;
    *(long *)(uVar4 - 8) = lVar1;
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar4;
    return auVar5;
  }
  func_0x000107c2c120();
  puVar2 = (ulong *)(((ulong)((int)param_1 + 0xf) & 0xfffffff0) + 0x30);
  FUN_1004b7918(puVar2,0x40);
  *puVar2 = (ulong)((int)param_2 + 0xf) & 0xfffffff0;
  puVar2[1] = 0;
  puVar2[2] = param_1;
  puVar2[3] = 0;
  puVar2[4] = param_3;
  auVar6._8_8_ = puVar2 + 6;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Entry: 1004b7964; end: 1004b79bb;  */

void FUN_1004b7964(ulong param_1,int param_2,ulong param_3)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(((ulong)((int)param_1 + 0xf) & 0xfffffff0) + 0x30);
  FUN_1004b7918(puVar1,0x40);
  *puVar1 = (ulong)(param_2 + 0xf) & 0xfffffff0;
  puVar1[1] = 0;
  puVar1[2] = param_1;
  puVar1[3] = 0;
  puVar1[4] = param_3;
  return;
}



/* Entry: 1004b79bc; end: 1004b7d4f;  */

void FUN_1004b79bc(ulong *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long **pplStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *param_2;
  *param_1 = 0;
  lVar9 = *(long *)(lVar12 + 0xc0);
  lVar11 = (*(ulong *)(lVar12 + 0x28) & 0xffffffffffffff00) + 0x200;
  lVar5 = *(long *)(lVar9 + 0x38) + 0xdd0;
  FUN_1004b7964(lVar11,lVar5,lVar12 + 0x98);
  FUN_1004b7d6c(lVar5,lVar11,param_2);
  *param_3 = lVar5;
  func_0x0001004b8028(&plStack_80);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    *(undefined8 *)(lVar5 + 0xda0) = 0;
    *(long *)(lVar5 + 0xda8) = param_2[1];
  }
  else {
    *(undefined8 *)(lVar5 + 0xda0) = 0;
    *(undefined8 *)(lVar5 + 0xda8) = 0;
    *(undefined8 *)(lVar5 + 0xdb0) = 0;
    plVar6 = (long *)param_2[7];
    if ((long *)0x1 < plVar6) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_78 = param_2[8];
    plStack_80 = (long *)param_2[7];
    lStack_68 = param_2[10];
    lStack_70 = param_2[9];
    FUN_1004b8034(lVar5 + 0x1a8);
    if ((char)param_2[0x10] != '\0') {
      FUN_1008dc020(lVar5 + 0x1a8,param_2 + 0xc);
    }
  }
  lVar11 = param_2[2];
  if (lVar11 != 0) {
    func_0x000104ad86bc(&uStack_90,lVar5,lVar11,(int)param_2[3]);
    func_0x000104addba0(&uStack_88,&uStack_90);
    FUN_1004b844c(param_1,&uStack_88);
    if ((uStack_88 & 1) != 0) {
      FUN_10084dad0();
    }
    if ((uStack_90 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  lStack_c8 = param_2[6];
  lStack_c0 = lVar5 + 0xa38;
  pplStack_b8 = &plStack_80;
  uStack_b0 = *(undefined8 *)(lVar5 + 0xb8);
  uStack_a8 = *(undefined8 *)(lVar5 + 0x20);
  uStack_a0 = *(undefined8 *)(lVar5 + 8);
  lStack_98 = lVar5 + 0x38;
  lStack_d0 = lVar5 + 0xdd0;
  FUN_1004b8120(&uStack_d8,lVar9,1,FUN_100836d68,lVar5,&lStack_d0);
  uVar4 = SUB84(&uStack_d8,0);
  FUN_1004b844c(param_1);
  if ((uStack_d8 & 1) != 0) {
    FUN_10084dad0();
  }
  if (lVar11 != 0) {
    func_0x000104ad87ec(lVar5);
    uVar4 = (undefined4)lVar11;
  }
  uVar10 = *param_1;
  if (uVar10 != 0) {
    if ((uVar10 & 1) != 0) {
      piVar7 = (int *)(uVar10 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar4 = SUB84(&uStack_e0,0);
    uStack_e0 = uVar10;
    func_0x000104ad88e8(lVar5);
    if ((uVar10 & 1) != 0) {
      FUN_10084dad0(uVar10);
    }
  }
  if (param_2[4] != 0) {
    if (param_2[5] != 0) {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                    ,0x250,2,"assertion failed: %s");
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1004b7cc8);
      (*pcVar3)();
    }
    FUN_1004b85e8();
    lVar11 = param_2[4];
    func_0x0001004b85fc();
    func_0x0001004b8624();
    *(long *)(lVar5 + 0xa0) = lVar11;
    *(undefined4 *)(lVar5 + 0xa8) = uVar4;
  }
  lVar11 = param_2[5];
  if (lVar11 != 0) {
    FUN_1004dc3b0();
    *(long *)(lVar5 + 0xa0) = lVar11;
    *(undefined4 *)(lVar5 + 0xa8) = uVar4;
  }
  uVar10 = lVar5 + 0xa0U;
  func_0x0001004b862c();
  if ((uVar10 & 1) == 0) {
    FUN_1004b8648(lVar5 + 0xdd0,lVar5 + 0xa0U);
  }
  if (*(char *)(lVar5 + 0x28) == '\0') {
    if ((*(long *)(lVar5 + 0xda8) != 0) &&
       (lVar11 = *(long *)(*(long *)(lVar5 + 0xda8) + 0x18), lVar11 != 0)) {
      FUN_1004b8698(lVar11 + 0x38);
    }
  }
  else if (*(long *)(lVar12 + 0x90) != 0) {
    FUN_1004b8698(*(long *)(lVar12 + 0x90) + 0x50);
  }
  plVar6 = plStack_80;
  if ((long *)0x1 < plStack_80) {
    do {
      lVar11 = *plStack_80;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar2) {
        *plStack_80 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  FUN_1004bdf74(param_1);
  func_0x000107c60bd8();
  plVar8 = plVar6 + 10;
  *plVar8 = 0;
  plVar6[1] = (long)plVar8;
  plVar6[9] = (long)plVar8;
  plVar6[0xb] = 0;
  *plVar6 = 0;
  return;
}



/* Entry: 1004b7d50; end: 1004b7d6b;  */

void FUN_1004b7d50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 10;
  *puVar1 = 0;
  param_1[1] = puVar1;
  param_1[9] = puVar1;
  param_1[0xb] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 1004b7d6c; end: 1004b7fcb;  */

undefined8 * FUN_1004b7d6c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined4 uStack_54;
  
  lVar4 = param_3[6];
  lVar6 = param_3[0x11];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = lVar6;
  *(bool *)(param_1 + 5) = lVar4 == 0;
  *(undefined1 *)((long)param_1 + 0x29) = 0;
  *param_1 = &PTR_DAT_1107c6d88;
  param_1[1] = param_2;
  param_1[6] = 1;
  FUN_1004b7d50(param_1 + 7);
  param_1[0x13] = param_3[4];
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  lVar4 = *param_3;
  plVar1 = (long *)(lVar4 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1[0x16] = lVar4;
  func_0x000100467750();
  param_1[0x17] =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((long)param_1 + 0x134) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = param_1 + 0x147;
  uVar5 = param_1[1];
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x73] = uVar5;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0xb4] = uVar5;
  *(undefined4 *)(param_1 + 0xb7) = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xf5] = uVar5;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0x136] = uVar5;
  *(undefined4 *)(param_1 + 0x144) = 0;
  param_1[0x145] = 0;
  *(undefined4 *)(param_1 + 0x146) = 0;
  param_1[0x141] = 0;
  param_1[0x140] = 0;
  param_1[0x13f] = 0;
  param_1[0x13e] = 0;
  param_1[0x13d] = 0;
  param_1[0x13c] = 0;
  param_1[0x13b] = 0;
  param_1[0x13a] = 0;
  param_1[0x139] = 0;
  param_1[0x138] = 0;
  param_1[0x137] = 0;
  uStack_54 = 0;
  FUN_1004b7fcc((long)param_1 + 0xa34,&uStack_54,1);
  param_1[0x14e] = 0;
  param_1[0x14d] = 0;
  param_1[0x150] = 0;
  param_1[0x14f] = 0;
  param_1[0x14a] = 0;
  param_1[0x149] = 0;
  param_1[0x14c] = 0;
  param_1[0x14b] = 0;
  param_1[0x148] = 0;
  param_1[0x147] = 0;
  func_0x0001004b800c(param_1 + 0x151);
  *(undefined1 *)(param_1 + 0x176) = 0;
  *(undefined1 *)(param_1 + 0x19b) = 0;
  *(undefined1 *)((long)param_1 + 0xce4) = 0;
  param_1[0x19d] = 0;
  func_0x0001004b8028(param_1 + 0x19e);
  *(undefined4 *)(param_1 + 0x1ae) = 0;
  *(undefined1 *)((long)param_1 + 0xd74) = 0;
  param_1[0x1af] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1b8] = 0;
  return param_1;
}



/* Entry: 1004b7fcc; end: 1004b8033;  */

void FUN_1004b7fcc(undefined1 *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  
  *param_1 = 0;
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      uVar1 = *param_2;
      if (uVar1 < 3) {
        param_1[uVar1 >> 3] = param_1[uVar1 >> 3] | (byte)(1 << (ulong)(uVar1 & 0x1f));
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 1004b8034; end: 1004b811f;  */

uint * FUN_1004b8034(uint *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                    ulong *param_5)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  ulong *extraout_x8;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  uint *puStack_e8;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *param_1;
  *param_1 = uVar1 | 1;
  if ((uVar1 & 1) == 0) {
    uVar18 = param_2[1];
    uVar16 = *param_2;
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x76) = uVar18;
    *(undefined8 *)(param_1 + 0x74) = uVar16;
    *(undefined8 *)(param_1 + 0x7a) = uVar12;
    *(undefined8 *)(param_1 + 0x78) = uVar11;
    puVar15 = param_1;
  }
  else {
    uVar11 = *param_2;
    uVar12 = param_2[3];
    uVar18 = param_2[2];
    uVar16 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar15 = *(uint **)(param_1 + 0x74);
    *(undefined8 *)(param_1 + 0x74) = uVar11;
    *(undefined8 *)(param_1 + 0x78) = uVar18;
    *(undefined8 *)(param_1 + 0x76) = uVar16;
    *(undefined8 *)(param_1 + 0x7a) = uVar12;
    if ((uint *)0x1 < puVar15) {
      do {
        lVar7 = *(long *)puVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar15,0x10);
        if (bVar3) {
          *(long *)puVar15 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(puVar15 + 2))();
      }
    }
  }
  iVar6 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return param_1 + 0x74;
  }
  func_0x000107c60e78();
  if (iVar6 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  lVar10 = *(long *)(puVar15 + 0xc);
  puVar4 = (uint *)*param_5;
  *(long *)(puVar4 + 10) = lVar10;
  func_0x00010047fbd0();
  uVar14 = *param_5;
  *extraout_x8 = 0;
  if (lVar10 != 0) {
    lVar8 = 0;
    lVar7 = uVar14 + 0x30;
    lVar13 = lVar7 + ((ulong)((int)lVar10 * 0x18 + 0xf) & 0xfffffff0);
    plVar5 = (long *)(uVar14 + 0x40);
    do {
      lVar17 = *(long *)(puVar15 + lVar8 * 4 + 0x18);
      plVar5[-1] = *(long *)(puVar15 + lVar8 * 4 + 0x18 + 2);
      plVar5[-2] = lVar17;
      *plVar5 = lVar13;
      lVar13 = lVar13 + ((ulong)(*(int *)(lVar17 + 0x18) + 0xf) & 0xfffffff0);
      lVar8 = lVar8 + 1;
      plVar5 = plVar5 + 3;
    } while (lVar10 != lVar8);
    puVar15 = (uint *)0x0;
    lVar8 = 0;
    do {
      plVar5 = (long *)(lVar7 + lVar8 * 0x18);
      (**(code **)(*plVar5 + 0x20))(&puStack_e8,plVar5,param_5);
      if (puStack_e8 != (uint *)0x0 && puVar15 == (uint *)0x0) {
        if (((ulong)puStack_e8 & 1) != 0) {
          piVar9 = (int *)((long)puStack_e8 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = *piVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *extraout_x8 = (ulong)puStack_e8;
        puVar15 = puStack_e8;
      }
      puVar4 = puStack_e8;
      if (((ulong)puStack_e8 & 1) != 0) {
        FUN_10084dad0();
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar10);
  }
  return puVar4;
}



/* Entry: 1004b8120; end: 1004b8253;  */

void FUN_1004b8120(ulong *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *in_x4;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uStack_58;
  
  lVar10 = *(long *)(param_2 + 0x30);
  *(long *)(*in_x4 + 0x28) = lVar10;
  func_0x00010047fbd0();
  lVar9 = *in_x4;
  *param_1 = 0;
  if (lVar10 != 0) {
    lVar6 = 0;
    lVar1 = lVar9 + 0x30;
    lVar8 = lVar1 + ((ulong)((int)lVar10 * 0x18 + 0xf) & 0xfffffff0);
    plVar5 = (long *)(lVar9 + 0x40);
    do {
      plVar4 = (long *)(param_2 + 0x60 + lVar6 * 0x10);
      lVar9 = *plVar4;
      plVar5[-1] = plVar4[1];
      plVar5[-2] = lVar9;
      *plVar5 = lVar8;
      lVar8 = lVar8 + ((ulong)(*(int *)(lVar9 + 0x18) + 0xf) & 0xfffffff0);
      lVar6 = lVar6 + 1;
      plVar5 = plVar5 + 3;
    } while (lVar10 != lVar6);
    uVar11 = 0;
    lVar9 = 0;
    do {
      plVar5 = (long *)(lVar1 + lVar9 * 0x18);
      (**(code **)(*plVar5 + 0x20))(&uStack_58,plVar5,in_x4);
      if (uStack_58 != 0 && uVar11 == 0) {
        if ((uStack_58 & 1) != 0) {
          piVar7 = (int *)(uStack_58 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
              *piVar7 = *piVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *param_1 = uStack_58;
        uVar11 = uStack_58;
      }
      if ((uStack_58 & 1) != 0) {
        FUN_10084dad0();
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar10);
  }
  return;
}



/* Entry: 1004b8254; end: 1004b8257;  */

undefined8 * FUN_1004b8254(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  ulong uStack_40;
  undefined1 uStack_31;
  
  *param_1 = *param_3;
  auVar2 = NEON_ext(*(undefined1 (*) [16])(param_3 + 6),*(undefined1 (*) [16])(param_3 + 6),8,1);
  param_1[2] = auVar2._8_8_;
  param_1[1] = auVar2._0_8_;
  param_1[3] = 0;
  if (param_4 != 0x7fffffffffffffff) {
    puVar1 = (undefined1 *)0x38;
    func_0x000107c60e20();
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 8) = param_2;
    *(long *)(puVar1 + 0x10) = param_4;
    *(code **)(puVar1 + 0x20) = FUN_100611e60;
    *(undefined1 **)(puVar1 + 0x28) = puVar1;
    *(undefined8 *)(puVar1 + 0x30) = 0;
    uStack_40 = 0;
    FUN_1004bd7e8(&uStack_31,puVar1 + 0x18,&uStack_40);
    if ((uStack_40 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  return param_1;
}



/* Entry: 1004b8258; end: 1004b832f;  */

void FUN_1004b8258(long param_1,undefined8 param_2,char *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = 0x7fffffffffffffff;
  if (*param_3 != '\0') {
    uVar5 = param_4[5];
  }
  FUN_1004b8254(param_1,param_2,param_4,uVar5);
  puVar3 = (undefined8 *)param_4[3];
  plVar4 = (long *)*puVar3;
  if ((long *)0x1 < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  uVar7 = puVar3[2];
  *(undefined8 *)(param_1 + 0x60) = puVar3[3];
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  *(undefined8 *)(param_1 + 0x68) = param_4[4];
  uVar5 = param_4[6];
  *(undefined8 *)(param_1 + 0x70) = param_4[5];
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  uVar5 = param_4[7];
  *(undefined8 *)(param_1 + 0x80) = *param_4;
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  *(undefined8 *)(param_1 + 0x90) = param_4[2];
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  return;
}



/* Entry: 1004b8330; end: 1004b83e3;  */

undefined8 * FUN_1004b8330(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  ulong uStack_40;
  undefined1 uStack_31;
  
  *param_1 = *param_3;
  auVar2 = NEON_ext(*(undefined1 (*) [16])(param_3 + 6),*(undefined1 (*) [16])(param_3 + 6),8,1);
  param_1[2] = auVar2._8_8_;
  param_1[1] = auVar2._0_8_;
  param_1[3] = 0;
  if (param_4 != 0x7fffffffffffffff) {
    puVar1 = (undefined1 *)0x38;
    func_0x000107c60e20();
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 8) = param_2;
    *(long *)(puVar1 + 0x10) = param_4;
    *(code **)(puVar1 + 0x20) = FUN_100611e60;
    *(undefined1 **)(puVar1 + 0x28) = puVar1;
    *(undefined8 *)(puVar1 + 0x30) = 0;
    uStack_40 = 0;
    FUN_1004bd7e8(&uStack_31,puVar1 + 0x18,&uStack_40);
    if ((uStack_40 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  return param_1;
}



/* Entry: 1004b83e4; end: 1004b844b; +[RTUSFilteringOrBlock descriptor] */

void FUN_1004b83e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0df8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c2a780,
                        &PTR____CFConstantStringClassReference_110f3dc18,&PTR_DAT_11333e330,
                        &PTR_s_left_11333e428,2,0x18,0x1c);
    puRam00000001137f0df8 = puVar1;
  }
  return;
}



/* Entry: 1004b844c; end: 1004b85e7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1004b844c(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  int *piVar5;
  ulong uStack_60;
  ulong auStack_58 [4];
  undefined1 uStack_31;
  ulong uStack_30;
  ulong *puStack_28;
  
  if (*param_2 == 0) {
    return;
  }
  auStack_58[0] = *param_1;
  if (auStack_58[0] == 0) {
    auStack_58[2] = 0;
    auStack_58[3] = 0;
    auStack_58[1] = 0;
    func_0x000104ab5920(&uStack_30,2,"Call creation failed",0x14,&uStack_31,auStack_58 + 1);
    uVar3 = *param_1;
    if (uStack_30 == uVar3) {
LAB_1004b84c4:
      if ((uVar3 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      *param_1 = uStack_30;
      uStack_30 = 0x36;
      if ((uVar3 & 1) != 0) {
        FUN_10084dad0();
        uVar3 = uStack_30;
        goto LAB_1004b84c4;
      }
    }
    puStack_28 = auStack_58 + 1;
    func_0x000100482b64(&puStack_28);
    auStack_58[0] = *param_1;
  }
  if ((auStack_58[0] & 1) != 0) {
    piVar5 = (int *)(auStack_58[0] - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_60 = *param_2;
  if ((uStack_60 & 1) != 0) {
    piVar5 = (int *)(uStack_60 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_1008306c4(&puStack_28,auStack_58,&uStack_60);
  puVar4 = (ulong *)*param_1;
  if (puStack_28 != puVar4) {
    *param_1 = (ulong)puStack_28;
    puStack_28 = (ulong *)0x36;
    if (((ulong)puVar4 & 1) == 0) goto LAB_1004b855c;
    FUN_10084dad0();
    puVar4 = puStack_28;
  }
  if (((ulong)puVar4 & 1) != 0) {
    FUN_10084dad0();
  }
LAB_1004b855c:
  if ((uStack_60 & 1) != 0) {
    FUN_10084dad0();
  }
  if ((auStack_58[0] & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1004b85e8; end: 1004b8647;  */

void FUN_1004b85e8(long *param_1)

{
  char cVar1;
  bool bVar2;
  
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = *param_1 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}



/* Entry: 1004b8648; end: 1004b8697;  */

void FUN_1004b8648(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x30);
    do {
      (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 3;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 1004b8698; end: 1004b86f7;  */

void FUN_1004b8698(undefined8 param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar4 = param_2;
  func_0x000100460dc4();
  lVar6 = *plVar4;
  uVar1 = *(uint *)(lVar6 + 0x30);
  uVar5 = (ulong)uVar1;
  if (uVar1 == 0xffffffff) {
    FUN_1004b86f8();
    *(int *)(lVar6 + 0x30) = (int)uVar5;
  }
  lVar6 = *param_2;
  plVar4 = (long *)(lVar6 + (uVar5 & 0xffffffff) * 0x40);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = *plVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x000100467750();
  *(undefined8 *)(lVar6 + (uVar5 & 0xffffffff) * 0x40 + 0x18) = param_1;
  return;
}



/* Entry: 1004b86f8; end: 1004b8717;  */

undefined8 FUN_1004b86f8(void)

{
  return 0;
}



/* Entry: 1004b8718; end: 1004b8787;  */

void FUN_1004b8718(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar2);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar2;
    func_0x000107c60e14(plVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1004b8788; end: 1004b8837;  */

long FUN_1004b8788(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uStack_8c;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  uStack_50 = 0;
  uStack_58 = 0;
  *(undefined8 *)(param_1 + 400) = param_5;
  *(ulong *)(param_1 + 0x178) = CONCAT44(uStack_8c,param_4);
  *(long *)(param_1 + 0x170) = param_1;
  *(undefined8 *)(param_1 + 0x188) = param_3;
  *(undefined8 *)(param_1 + 0x180) = param_2;
  FUN_1004b8718(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  *(undefined8 *)(param_1 + 0x1b8) = uStack_50;
  *(ulong *)(param_1 + 0x1b0) = CONCAT71(uStack_57,uStack_58);
  puStack_48 = &uStack_70;
  FUN_1004b8838(&puStack_48);
  FUN_1004b891c(param_1 + 0x170,param_6,param_7);
  return param_1 + 0x170;
}



/* Entry: 1004b8838; end: 1004b88b3;  */

void FUN_1004b8838(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 1004b88b4; end: 1004b891b;  */

undefined8 FUN_1004b88b4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd8;
  func_0x000107c60e20(0xd8);
  FUN_1004b8bc4();
  return uVar1;
}



/* Entry: 1004b891c; end: 1004b8bc3;  */

void FUN_1004b891c(long param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  if (param_3 <= (ulong)(param_2[1] - *param_2 >> 3)) {
    plVar5 = (long *)(*param_2 + param_3 * 8);
    if (plVar5 != (long *)param_2[1]) {
      plVar10 = (long *)(param_1 + 0x28);
      lVar11 = param_1 + 0x38;
      do {
        plVar3 = (long *)*plVar5;
        (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
        if (plVar3 != (long *)0x0) {
          plVar7 = *(long **)(param_1 + 0x30);
          if (plVar7 < *(long **)(param_1 + 0x38)) {
            plVar13 = plVar7 + 1;
            *plVar7 = (long)plVar3;
          }
          else {
            lVar12 = (long)plVar7 - *plVar10 >> 3;
            uVar1 = lVar12 + 1;
            if (uVar1 >> 0x3d != 0) {
              func_0x000104ae3224(plVar10);
              goto LAB_1004b8b94;
            }
            uVar8 = (long)*(long **)(param_1 + 0x38) - *plVar10;
            uVar9 = (long)uVar8 >> 2;
            if (uVar9 <= uVar1) {
              uVar9 = uVar1;
            }
            if (0x7ffffffffffffff7 < uVar8) {
              uVar9 = 0x1fffffffffffffff;
            }
            puStack_68 = (undefined8 *)lVar11;
            if (uVar9 == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = lVar11;
              FUN_1004b8e90();
            }
            plVar7 = (long *)(lVar4 + lVar12 * 8);
            plVar13 = plVar7 + 1;
            *plVar7 = (long)plVar3;
            plVar3 = *(long **)(param_1 + 0x28);
            plStack_88 = *(long **)(param_1 + 0x30);
            plStack_78 = plStack_88;
            if (plStack_88 != plVar3) {
              do {
                plStack_88 = plStack_88 + -1;
                lVar12 = *plStack_88;
                *plStack_88 = 0;
                plVar7 = plVar7 + -1;
                *plVar7 = lVar12;
              } while (plStack_88 != plVar3);
              plStack_88 = (long *)*plVar10;
              plStack_78 = *(long **)(param_1 + 0x30);
            }
            *(long **)(param_1 + 0x28) = plVar7;
            *(long **)(param_1 + 0x30) = plVar13;
            uStack_70 = *(undefined8 *)(param_1 + 0x38);
            *(ulong *)(param_1 + 0x38) = lVar4 + uVar9 * 8;
            plStack_80 = plStack_88;
            func_0x0001004b8ec4(&plStack_88);
          }
          *(long **)(param_1 + 0x30) = plVar13;
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != (long *)param_2[1]);
    }
    if (plRam0000000113815c68 != (long *)0x0) {
      plVar5 = plRam0000000113815c68;
      (**(code **)(*plRam0000000113815c68 + 0x10))(plRam0000000113815c68,param_1);
      puVar6 = (undefined8 *)(param_1 + 0x38);
      plVar10 = *(long **)(param_1 + 0x30);
      if (plVar10 < (long *)*puVar6) {
        plVar7 = plVar10 + 1;
        *plVar10 = (long)plVar5;
      }
      else {
        plVar3 = (long *)(param_1 + 0x28);
        lVar11 = (long)plVar10 - *plVar3 >> 3;
        uVar1 = lVar11 + 1;
        if (uVar1 >> 0x3d != 0) {
          func_0x000104ae3224(plVar3);
LAB_1004b8b94:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1004b8b98);
          (*pcVar2)();
        }
        uVar8 = (long)*puVar6 - *plVar3;
        uVar9 = (long)uVar8 >> 2;
        if (uVar9 <= uVar1) {
          uVar9 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar9 = 0x1fffffffffffffff;
        }
        puStack_68 = puVar6;
        if (uVar9 == 0) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          FUN_1004b8e90();
        }
        plVar10 = puVar6 + lVar11;
        plVar7 = plVar10 + 1;
        *plVar10 = (long)plVar5;
        plVar5 = *(long **)(param_1 + 0x28);
        plStack_88 = *(long **)(param_1 + 0x30);
        plStack_78 = plStack_88;
        if (plStack_88 != plVar5) {
          do {
            plStack_88 = plStack_88 + -1;
            lVar11 = *plStack_88;
            *plStack_88 = 0;
            plVar10 = plVar10 + -1;
            *plVar10 = lVar11;
          } while (plStack_88 != plVar5);
          plStack_88 = (long *)*plVar3;
          plStack_78 = *(long **)(param_1 + 0x30);
        }
        *(long **)(param_1 + 0x28) = plVar10;
        *(long **)(param_1 + 0x30) = plVar7;
        uStack_70 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 **)(param_1 + 0x38) = puVar6 + uVar9;
        plStack_80 = plStack_88;
        func_0x0001004b8ec4(&plStack_88);
      }
      *(long **)(param_1 + 0x30) = plVar7;
    }
  }
  return;
}



/* Entry: 1004b8bc4; end: 1004b8e47;  */

undefined8 *
FUN_1004b8bc4(undefined8 *param_1,long param_2,long param_3,undefined1 param_4,undefined1 param_5,
             undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *param_1 = &PTR_DAT_110ccda90;
  plVar3 = param_1 + 1;
  *plVar3 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x11) = param_4;
  *(undefined1 *)((long)param_1 + 0x12) = param_5;
  FUN_10002b838(param_1 + 3,"local");
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_10002b838(param_1 + 0xf,"unknown");
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x13] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  FUN_10002b838(param_1 + 0x15,"");
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(param_2 + 8) == 0) {
    *(undefined1 *)(param_1 + 2) = 1;
    lVar4 = param_7[1];
    uVar6 = param_7[1];
    uVar5 = *param_7;
    puVar1 = (undefined8 *)0x118;
    func_0x000107c60e20();
    uStack_70 = uVar5;
    uStack_68 = uVar6;
    if (lVar4 != 0) {
      do {
        FUN_100abaa34();
      } while (extraout_w10_00 != 0);
    }
    puVar2 = puVar1;
    FUN_1004b8e48();
    *puVar2 = &PTR_DAT_110ccdae0;
    FUN_10002b838(puVar2 + 0x16,*(undefined8 *)(param_2 + 0x10));
    puVar1[0x22] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x19] = param_3;
  }
  else {
    lVar4 = param_7[1];
    uVar6 = param_7[1];
    uVar5 = *param_7;
    puVar1 = (undefined8 *)0x130;
    func_0x000107c60e20();
    uStack_70 = uVar5;
    uStack_68 = uVar6;
    if (lVar4 != 0) {
      do {
        FUN_100abaa34();
      } while (extraout_w10 != 0);
    }
    FUN_1004b8e48(puVar1);
    *puVar1 = &PTR_DAT_110ccdc50;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1c] = 0;
    FUN_10002b838(puVar1 + 0x1e,*(undefined8 *)(param_2 + 0x10));
    puVar1[0x21] = param_3;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0xffffffffffffffff;
  }
  FUN_10046997c(&uStack_70);
  lVar4 = *plVar3;
  *plVar3 = (long)puVar1;
  if (lVar4 != 0) {
    FUN_1008378f4();
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 0x28);
  uVar6 = param_6[1];
  uVar5 = *param_6;
  if (param_6[1] != 0) {
    do {
      FUN_100abaa34();
    } while (extraout_w10_01 != 0);
  }
  uStack_68 = param_1[0x1a];
  uStack_70 = param_1[0x19];
  param_1[0x1a] = uVar6;
  param_1[0x19] = uVar5;
  func_0x0001004699a0(&uStack_70);
  return param_1;
}



/* Entry: 1004b8e48; end: 1004b8e8f;  */

void FUN_1004b8e48(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ccdb78;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  return;
}



/* Entry: 1004b8e90; end: 1004b8f63;  */

undefined1  [16] FUN_1004b8e90(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    func_0x000107c60e20(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104a7757c();
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -8;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar3 = param_1[2];
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 1004b8f64; end: 1004b909b;  */

void FUN_1004b8f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  
  (**(code **)(*plRam0000000113815c70 + 0x80))(plRam0000000113815c70,param_1 + 0x18);
  if (*(long *)(param_1 + 0x58) == 0) {
    *(undefined8 *)(param_1 + 0x58) = param_2;
    FUN_1004b90a4(param_1 + 8,param_3);
    plVar2 = *(long **)(param_1 + 0x90);
    if ((plVar2 != (long *)0x0) &&
       ((**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_1 + 0x58)),
       ((ulong)plVar2 & 1) == 0)) {
      func_0x000104ae3294(param_1);
      func_0x000104ad8e98(param_2,1,"Failed to set credentials to rpc.",0);
    }
    if (*(char *)(param_1 + 0x60) != '\0') {
      func_0x000104ae3294(param_1);
      func_0x000104ad8de8(*(undefined8 *)(param_1 + 0x58),0);
    }
    (**(code **)(*plRam0000000113815c70 + 0x88))(plRam0000000113815c70,param_1 + 0x18);
    return;
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/cpp/client/client_context.cc"
                ,0x81,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b9074);
  (*pcVar1)();
}



/* Entry: 1004b909c; end: 1004b90a3;  */

ulong FUN_1004b909c(undefined8 param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  char cStack_39;
  ulong uStack_38;
  
  func_0x000107c61260();
  if ((int)param_2 == 0) {
    return param_2;
  }
  func_0x000107c2c134();
  uVar2 = param_2;
  FUN_10045ff80();
  FUN_10046018c();
  if (uVar2 == 0) {
    cVar1 = *(char *)(param_2 + 8);
  }
  else {
    cStack_39 = '\0';
    uVar3 = uVar2;
    uStack_38 = uVar2;
    func_0x000104a6f424();
    if ((uVar3 & 1) == 0) {
      FUN_10045ff80(param_2);
      func_0x000104a6f8e4();
      pcVar4 = (char *)(param_2 + 8);
    }
    else {
      pcVar4 = &cStack_39;
    }
    cVar1 = *pcVar4;
    uStack_38 = 0;
    FUN_100460314(uVar2);
  }
  return (ulong)(cVar1 != '\0');
}



/* Entry: 1004b90a4; end: 1004b911b;  */

undefined8 * FUN_1004b90a4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  uVar2 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = (long *)param_1[1];
  *param_1 = uVar2;
  param_1[1] = lVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      func_0x000107c60d68(plVar6);
    }
  }
  return param_1;
}



/* Entry: 1004b911c; end: 1004b912f;  */

void FUN_1004b911c(undefined8 param_1,int param_2)

{
  func_0x000107c61268();
  if (param_2 == 0) {
    return;
  }
  func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam00000001136a2078)();
  return;
}



/* Entry: 1004b9130; end: 1004b91bb;  */

ulong * FUN_1004b9130(long param_1,int param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined1 auStack_68 [72];
  
  FUN_100460de4(auStack_68);
  puVar4 = *(ulong **)(param_1 + 8);
  do {
    uVar5 = *puVar4;
    uVar1 = uVar5 + ((ulong)(param_2 + 0xf) & 0xfffffff0);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *puVar4 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4[2] < uVar1) {
    FUN_1004bbee0();
  }
  else {
    puVar4 = (ulong *)((long)puVar4 + uVar5 + 0x30);
  }
  FUN_100467a48(auStack_68);
  return puVar4;
}



/* Entry: 1004b91bc; end: 1004b91c7;  */

void FUN_1004b91bc(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1004b91c8; end: 1004b9213;  */

void FUN_1004b91c8(long param_1)

{
  FUN_1004b91bc();
  func_0x000100489924(&UNK_1107ea488);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(long *)(param_1 + 0x18) = param_1;
  *(long *)(param_1 + 0x20) = param_1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  FUN_1004b9214(param_1 + 0x60);
  return;
}



/* Entry: 1004b9214; end: 1004b9297;  */

void FUN_1004b9214(long param_1)

{
  long lVar1;
  
  func_0x000100489924(&UNK_1107e9f40);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  for (lVar1 = 8; lVar1 != 0x15; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 1004b9298; end: 1004b92d3;  */

long FUN_1004b9298(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  func_0x0001004b9270(&PTR_DAT_110abe450);
  return param_1;
}



/* Entry: 1004b92d4; end: 1004b92ff;  */

void FUN_1004b92d4(long param_1)

{
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined2 *)(param_1 + 0x70) = 0;
  return;
}



/* Entry: 1004b9300; end: 1004b9323;  */

void FUN_1004b9300(void)

{
  FUN_1004b92d4();
  FUN_1004b9324(&UNK_1107ea3b0);
  return;
}



/* Entry: 1004b9324; end: 1004b935f;  */

void FUN_1004b9324(long param_1,long *param_2)

{
  *param_2 = param_1 + 0x10;
  param_2[0xf] = (long)param_2;
  param_2[0x10] = (long)param_2;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  FUN_1004b9214(param_2 + 0x18);
  return;
}



/* Entry: 1004b9360; end: 1004b93b7;  */

void FUN_1004b9360(long param_1)

{
  FUN_1004b91bc();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  func_0x000100489924(&UNK_1107ea648);
  *(long *)(param_1 + 0x68) = param_1;
  *(long *)(param_1 + 0x70) = param_1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  FUN_1004b9214(param_1 + 0xb0);
  return;
}



/* Entry: 1004b93b8; end: 1004b93c3;  */

void FUN_1004b93b8(void)

{
  return;
}



/* Entry: 1004b93c4; end: 1004b9427;  */

void FUN_1004b93c4(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  
  FUN_1004b93b8();
  lVar2 = *(long *)(param_1 + 0x18);
  lVar1 = lVar2 + 0xb8;
  FUN_1004b9428();
  *(undefined1 *)(unaff_x19 + 0x330) = 0;
  *(undefined1 *)(unaff_x19 + 0x311) = 1;
  *(int *)(unaff_x19 + 0x314) = (int)lVar2;
  *(long *)(unaff_x19 + 800) = lVar1;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x18) + 0x150) & 1) != 0) {
    return;
  }
  *(undefined8 *)(unaff_x19 + 0x388) = unaff_x20;
  func_0x0001004b9444(*(undefined8 *)(unaff_x19 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001004b9458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1004b9428; end: 1004b946f;  */

uint FUN_1004b9428(long param_1)

{
  return (uint)*(byte *)(param_1 + 1) << 5 | (uint)*(byte *)(param_1 + 2) << 7 |
         (uint)*(byte *)(param_1 + 0x150) << 8;
}



/* Entry: 1004b9470; end: 1004b94ab;  */

void FUN_1004b9470(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  FUN_10048971c();
  *(undefined1 *)(CONCAT44(uVar2,iVar1) + 0xb8) = 0;
  FUN_1004b94ac();
  func_0x0001004b94f4();
  func_0x0001004b9500();
  FUN_1004b951c();
  if (iVar1 != 0) {
    func_0x000104c01aa0();
                    /* WARNING: Could not recover jumptable at 0x0001004bad18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 1004b94ac; end: 1004b951b;  */

void FUN_1004b94ac(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001004b94c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam0000000113815c70 + 0x120))
            (plRam0000000113815c70,*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Entry: 1004b951c; end: 1004b95a3;  */

undefined8 FUN_1004b951c(long param_1)

{
  ulong uVar1;
  code *extraout_x8;
  long lVar2;
  int extraout_w10;
  
  func_0x0001004b9514(param_1 + 0xc0);
  *(long *)(param_1 + 0xe8) = param_1 + 0x88;
  *(long *)(param_1 + 0xf0) = param_1;
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 200) = 1;
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1004b95c4(param_1 + 0x30,param_1 + 0xc0);
  if (*(char *)(param_1 + 0x71) == '\x01') {
    *(undefined1 *)(param_1 + 0xcc) = 1;
  }
  uVar1 = param_1 + 0xc0;
  func_0x0001004b966c();
  if ((uVar1 & 1) == 0) {
    do {
      FUN_100489994();
    } while (extraout_w10 != 0);
    if (*(long *)(param_1 + 0xf0) == 0) {
      func_0x000104c019cc();
      func_0x000104c01ae0();
      (*extraout_x8)();
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0xe8) + 0x20);
    if (lVar2 == 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0xe8) + 0x28);
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0x20) != *(long *)(lVar2 + 0x28))) {
        func_0x000104c0070c(param_1 + 0xc0);
        return 0;
      }
    }
    else if (*(long *)(lVar2 + 0x28) != *(long *)(lVar2 + 0x30)) {
      FUN_1004b972c(param_1 + 0xc0);
      return 0;
    }
    return 1;
  }
  return 1;
}



/* Entry: 1004b95a4; end: 1004b95c3;  */

void FUN_1004b95a4(long param_1)

{
  long lVar1;
  
  for (lVar1 = 0; lVar1 != 0xd; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + 8 + lVar1) = 0;
  }
  return;
}



/* Entry: 1004b95c4; end: 1004b9647;  */

void FUN_1004b95c4(long *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  FUN_1001246dc();
  FUN_1004b9648();
  uStack_28 = extraout_x8;
  if ((*param_1 != 0) || (*(long *)(unaff_x20 + 0x10) != 0)) {
    *(undefined1 *)(unaff_x19 + 9) = 1;
    func_0x000100612ef4(auStack_48,unaff_x20 + 0x20);
    *(long *)(unaff_x19 + 0x58) = unaff_x20 + 0x10;
    *(long *)(unaff_x19 + 0x60) = unaff_x20 + 9;
    *(long *)(unaff_x19 + 0x68) = unaff_x20;
    FUN_100612f48();
    FUN_100613078();
  }
  func_0x0001004b9658(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000104c01af4();
  FUN_100613080();
  func_0x000104c01a98();
  return;
}



/* Entry: 1004b9648; end: 1004b96a7;  */

void FUN_1004b9648(void)

{
  return;
}



/* Entry: 1004b96a8; end: 1004b972b;  */

undefined8 FUN_1004b96a8(long param_1)

{
  code *extraout_x8;
  long lVar1;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    func_0x000104c019cc();
    func_0x000104c01ae0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    func_0x000104c0070c(param_1);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    FUN_1004b972c(param_1);
  }
  return 0;
}



/* Entry: 1004b972c; end: 1004b9777;  */

void FUN_1004b972c(long param_1)

{
  long lVar1;
  char *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (*(char *)(lVar1 + 0x40) == '\x01') {
      UNRECOVERED_JUMPTABLE = *(char **)(lVar1 + 0x48);
    }
    else {
      UNRECOVERED_JUMPTABLE =
           (char *)((*(long *)(lVar1 + 0x30) - *(long *)(lVar1 + 0x28) >> 3) + -1);
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = (char *)0x0;
  }
  *(char **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((code *)(*(long *)(lVar1 + 0x30) - lVar2 >> 3) <= UNRECOVERED_JUMPTABLE) {
    func_0x000104c019cc();
    UNRECOVERED_JUMPTABLE =
         "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/client_interceptor.h"
    ;
    (*extraout_x8)();
    lVar2 = *(long *)(lVar1 + 0x28);
  }
  FUN_1004b97d0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001004b97ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1004b9778; end: 1004b97cf;  */

void FUN_1004b9778(long param_1,undefined8 param_2,char *UNRECOVERED_JUMPTABLE)

{
  code *extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if ((code *)(*(long *)(param_1 + 0x30) - lVar1 >> 3) <= UNRECOVERED_JUMPTABLE) {
    func_0x000104c019cc();
    UNRECOVERED_JUMPTABLE =
         "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/client_interceptor.h"
    ;
    (*extraout_x8)();
    lVar1 = *(long *)(param_1 + 0x28);
  }
  FUN_1004b97d0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001004b97ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1004b97d0; end: 1004b97ef;  */

void FUN_1004b97d0(void)

{
  return;
}



/* Entry: 1004b97f0; end: 1004ba207;  */

void FUN_1004b97f0(double param_1,long param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 in_ZR;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  code *extraout_x8_13;
  long extraout_x8_14;
  code *extraout_x8_15;
  long *plVar15;
  long *plVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  double dVar20;
  undefined1 auStack_120 [32];
  uint auStack_100 [8];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c4;
  uint auStack_c0 [10];
  undefined1 uStack_98;
  undefined1 uStack_90;
  uint auStack_88 [6];
  
  puVar10 = param_3;
  (**(code **)(*(long *)param_3 + 0x10))(param_3,0);
  if ((int)puVar10 != 0) {
    func_0x0001004ba214(*(undefined8 *)(*(long *)param_3 + 0x48));
    puVar17 = auStack_c0 + 6;
    FUN_10002b838(puVar17,&UNK_10f50ec19);
    func_0x0001004ba224();
    FUN_1004ba350();
    auStack_88[0] = 0;
    auStack_88[1] = 0;
    auStack_88[2] = 0;
    auStack_88[3] = 0;
    auStack_88[4] = 0;
    auStack_88[5] = 0;
    puVar11 = puVar10 + 2;
    if (puVar11 != puVar17) {
      lVar14 = (long)*(char *)((long)puVar17 + 0x4f);
      if (lVar14 < 0) {
        puVar7 = *(uint **)(puVar17 + 0xe);
        lVar14 = *(long *)(puVar17 + 0x10);
      }
      else {
        puVar7 = puVar17 + 0xe;
      }
      func_0x000107c60c68(auStack_88,puVar7,lVar14);
    }
    puVar7 = auStack_c0 + 6;
    FUN_10002b838(puVar7,&UNK_10f73f7fd);
    func_0x0001004ba224();
    puVar17 = puVar7;
    FUN_1004ba350();
    auStack_c0[6] = auStack_c0[6] & 0xffffff00;
    uStack_90 = 0;
    if (puVar11 != puVar7) {
      lVar14 = (long)*(char *)((long)puVar7 + 0x4f);
      if (lVar14 < 0) {
        puVar17 = *(uint **)(puVar7 + 0xe);
        lVar14 = *(long *)(puVar7 + 0x10);
      }
      else {
        puVar17 = puVar7 + 0xe;
      }
      func_0x000107c60c50(auStack_100,puVar17,lVar14);
      puVar17 = auStack_c0 + 6;
      func_0x000100602604(puVar17,auStack_100);
      func_0x0001004ba6d8();
      func_0x0001004ba394();
    }
    func_0x0001004ba358();
    func_0x0001004ba360();
    func_0x0001004ba36c();
    auStack_c0[0] = 0;
    auStack_c0[1] = 0;
    auStack_c0[2] = 0;
    auStack_c0[3] = 0;
    auStack_c0[4] = 0;
    auStack_c0[5] = 0;
    if (puVar11 != puVar7) {
      lVar14 = (long)*(char *)((long)puVar7 + 0x4f);
      if (lVar14 < 0) {
        puVar8 = *(uint **)(puVar7 + 0xe);
        lVar14 = *(long *)(puVar7 + 0x10);
      }
      else {
        puVar8 = puVar7 + 0xe;
      }
      puVar17 = auStack_c0;
      func_0x000107c60c68(puVar17,puVar8,lVar14);
      func_0x0001004ba394();
    }
    func_0x0001004ba358();
    func_0x0001004ba360();
    func_0x0001004ba36c();
    if (puVar11 != puVar7) {
      func_0x0001004ba378();
      func_0x0001004ba384();
      func_0x0001004ba394();
      func_0x0001004ba6c4();
      (**(code **)(extraout_x8 + 0x10))();
      func_0x0001004ba6d8();
    }
    func_0x0001004ba358();
    func_0x0001004ba360();
    func_0x0001004ba36c();
    if (puVar11 != puVar7) {
      func_0x0001004ba378();
      func_0x0001004ba384();
      func_0x0001004ba394();
      func_0x0001004ba6c4();
      (**(code **)(extraout_x8_00 + 0x18))();
      func_0x0001004ba6d8();
    }
    uStack_c4 = 0;
    func_0x0001004ba358();
    func_0x0001004ba360();
    func_0x0001004ba36c();
    func_0x0001004ba358();
    func_0x0001004ba360();
    func_0x0001004ba6d8();
    if (puVar11 != puVar7 || puVar11 != puVar17) {
      uStack_c4 = 3;
      if (puVar11 == puVar17) {
        uStack_c4 = 1;
      }
      if (puVar11 == puVar7) {
        uStack_c4 = 2;
      }
    }
    func_0x0001004ba6c4();
    (**(code **)(extraout_x8_01 + 0x58))();
    func_0x0001004ba6ec();
    func_0x0001004ba358();
    func_0x0001004ba360();
    func_0x0001004ba36c();
    if (puVar11 != puVar7) {
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      lVar14 = (long)*(char *)((long)puVar7 + 0x4f);
      if (lVar14 < 0) {
        puVar17 = *(uint **)(puVar7 + 0xe);
        lVar14 = *(long *)(puVar7 + 0x10);
      }
      else {
        puVar17 = puVar7 + 0xe;
      }
      func_0x000107c60c68(&uStack_e0,puVar17,lVar14);
      lVar14 = *(long *)(param_2 + 8);
      FUN_1002a82b4(auStack_100,&uStack_e0);
      func_0x0001002a969c(lVar14 + 0x80,auStack_100);
      puVar8 = auStack_100;
      FUN_1001148fc();
      func_0x0001004ba6ec();
      func_0x0001004ba358();
      puVar17 = puVar11;
      puVar18 = puVar11;
LAB_1004b9a88:
      do {
        puVar7 = puVar18;
        puVar17 = *(uint **)puVar17;
        puVar18 = puVar7;
        if (puVar17 == (uint *)0x0) goto LAB_1004b9ac4;
        puVar8 = auStack_100;
        func_0x000100125af4(puVar8,puVar17 + 8);
        puVar18 = puVar17;
      } while (((uint)puVar8 >> 7 & 1) != 0);
      puVar8 = puVar17 + 8;
      func_0x000100125af4(puVar8,auStack_100);
      if (((uint)puVar8 >> 7 & 1) != 0) {
        puVar17 = puVar17 + 2;
        puVar18 = puVar7;
        goto LAB_1004b9a88;
      }
      func_0x0001004ba268(puVar10,auStack_100,*(undefined8 *)puVar17,puVar17);
      puVar17 = puVar17 + 2;
      puVar8 = puVar10;
      while (puVar18 = puVar7, puVar19 = *(uint **)puVar17, puVar7 = puVar10, puVar19 != (uint *)0x0
            ) {
        puVar8 = auStack_100;
        func_0x000100125af4(puVar8,puVar19 + 8);
        bVar5 = -1 < (char)puVar8;
        lVar14 = 0;
        if (bVar5) {
          lVar14 = 8;
        }
        puVar17 = (uint *)((long)puVar19 + lVar14);
        puVar7 = puVar19;
        if (bVar5) {
          puVar7 = puVar18;
        }
      }
LAB_1004b9ac4:
      while (puVar7 != puVar18) {
        func_0x0001004ba394();
        puVar7 = puVar8;
      }
      func_0x0001004ba6d8();
      func_0x000107c60ca0(&uStack_e0);
    }
    in_ZR = *(int *)(param_2 + 0xc0) == 2;
    if (!(bool)in_ZR) {
      func_0x0001004ba358();
      func_0x0001004ba360();
      func_0x0001004ba36c();
      in_ZR = puVar11 == puVar7;
      if (!(bool)in_ZR) {
        puVar7 = puVar7 + 0xe;
        FUN_1005d480c(puVar7,"br",0);
        in_ZR = puVar7 == (uint *)0xffffffffffffffff;
        if (!(bool)in_ZR) {
          func_0x0001004ba394();
        }
      }
    }
    plVar15 = *(long **)(param_2 + 8);
    FUN_10028af84(auStack_120,auStack_c0 + 6);
    (**(code **)(*plVar15 + 0x20))(plVar15,auStack_88,auStack_c0,auStack_120);
    FUN_1001148fc(auStack_120);
    func_0x0001004babc8();
    FUN_1001148fc(auStack_c0 + 6);
    puVar10 = auStack_88;
    func_0x000107c60ca0();
  }
  func_0x0001004babd0();
  (*extraout_x8_02)();
  if ((int)puVar10 != 0) {
    func_0x0001004ba214(*(undefined8 *)(*(long *)param_3 + 0x28));
    FUN_100613290();
    func_0x0001004ba6c4();
    (**(code **)(extraout_x8_03 + 0x28))();
  }
  func_0x0001004babd0();
  (*extraout_x8_04)();
  if ((int)puVar10 != 0) {
    puVar10 = param_3;
    (**(code **)(*(long *)param_3 + 0x40))();
    func_0x0001004ba6c4();
    (**(code **)(extraout_x8_05 + 0x38))();
  }
  func_0x0001004babd0();
  (*extraout_x8_06)();
  if ((int)puVar10 != 0) {
    func_0x0001004ba6c4();
    (**(code **)(extraout_x8_07 + 0x30))();
  }
  func_0x0001004babd0();
  (*extraout_x8_08)();
  if ((int)puVar10 != 0) {
    func_0x0001004ba6c4();
    (**(code **)(extraout_x8_09 + 0x40))();
    func_0x0001004ba214(*(undefined8 *)(*(long *)param_3 + 0x70));
    *(uint **)(param_2 + 0x68) = puVar10;
    FUN_100833a3c(&DAT_10f73f915);
    FUN_100833af8();
    if (!(bool)in_ZR) {
      auStack_c0[6] = 0;
      uVar9 = *(undefined8 *)(extraout_x8_10 + 0x30);
      FUN_100833b0c(uVar9,*(undefined8 *)(extraout_x8_10 + 0x38),auStack_c0 + 6);
      if ((int)uVar9 != 0) {
        *(uint *)(param_2 + 0x60) = auStack_c0[6];
      }
      puVar10 = *(uint **)(param_2 + 0x68);
    }
    FUN_100833b48();
    FUN_100833af8();
    if (!(bool)in_ZR) {
      func_0x000107c60c68(param_2 + 0x18,*(undefined8 *)(extraout_x8_11 + 0x30),
                          *(undefined8 *)(extraout_x8_11 + 0x38));
      puVar10 = *(uint **)(param_2 + 0x68);
    }
    FUN_100833a3c(&DAT_10f73f933);
    FUN_100833af8();
    if (!(bool)in_ZR) {
      func_0x000107c60c68(param_2 + 0x30,*(undefined8 *)(extraout_x8_12 + 0x30),
                          *(undefined8 *)(extraout_x8_12 + 0x38));
      puVar10 = *(uint **)(param_2 + 0x68);
    }
    FUN_100833a3c("content-type");
    if ((uint *)(*(long *)(param_2 + 0x68) + 8) != puVar10) {
      puVar11 = puVar10 + 0xc;
      puVar17 = puVar10 + 0xe;
      puVar10 = (uint *)(param_2 + 0x48);
      func_0x000107c60c68(puVar10,*(undefined8 *)puVar11,*(undefined8 *)puVar17);
    }
  }
  func_0x0001004babd0();
  (*extraout_x8_13)();
  if ((int)puVar10 == 0) goto LAB_1004b9e80;
  func_0x0001004ba214(*(undefined8 *)(*(long *)param_3 + 0x68));
  puVar11 = puVar10;
  if (*(char *)(param_2 + 0x11) == '\x01') {
    if (puVar10 == (uint *)0x0) goto LAB_1004b9e80;
    FUN_100613290();
    if ((*(char *)(param_2 + 0x12) != '\x01') || (puVar11 == (uint *)0x0)) {
LAB_1004b9df8:
      puVar10 = puVar11;
      dVar20 = 0.0;
      if (puVar10 == (uint *)0x0) goto LAB_1004b9e80;
      goto LAB_1004b9e6c;
    }
    auStack_c0[6] = auStack_c0[6] & 0xffffff00;
    uStack_98 = 0;
    FUN_10083640c(puVar10,auStack_c0 + 6);
    dVar20 = 0.0;
    if ((int)puVar10 != 0) {
      plVar15 = (long *)CONCAT44(auStack_c0[7],auStack_c0[6]);
      if (plVar15 == (long *)0x0) {
LAB_1004b9e50:
        plVar16 = (long *)0x0;
LAB_1004b9e54:
        plVar15 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar15 + 0x18))();
        plVar16 = (long *)CONCAT44(auStack_c0[7],auStack_c0[6]);
        dVar20 = (double)(ulong)((long)plVar15 << 3);
        if (plVar16 == (long *)0x0) goto LAB_1004b9e50;
        (**(code **)(*plVar16 + 0x10))();
        plVar15 = (long *)CONCAT44(auStack_c0[7],auStack_c0[6]);
        if (plVar15 == (long *)0x0) goto LAB_1004b9e54;
        (**(code **)(*plVar15 + 0x18))();
      }
      func_0x000107c2bfe0(plVar16,plVar15);
      dVar20 = param_1 / dVar20;
    }
    puVar10 = auStack_c0 + 6;
    FUN_1000ff348();
  }
  else {
    if (puVar10 == (uint *)0x0) goto LAB_1004b9e80;
    (**(code **)(*(long *)puVar10 + 0x28))();
    if ((*(char *)(param_2 + 0x12) != '\x01') || (puVar11 == (uint *)0x0)) goto LAB_1004b9df8;
    FUN_100291d50(auStack_c0 + 6,puVar11);
    func_0x000107c30368(puVar10,CONCAT44(auStack_c0[7],auStack_c0[6]),puVar11);
    dVar20 = 0.0;
    if ((int)puVar10 != 0) {
      func_0x000107c2bfe0(CONCAT44(auStack_c0[7],auStack_c0[6]),puVar11);
      dVar20 = param_1 / (double)(ulong)((long)puVar11 << 3);
    }
    puVar10 = auStack_c0 + 6;
    FUN_100100fec();
  }
LAB_1004b9e6c:
  func_0x0001004ba6c4();
  (**(code **)(extraout_x8_14 + 0x48))(dVar20);
LAB_1004b9e80:
  iVar6 = (int)puVar10;
  func_0x0001004babd0();
  (*extraout_x8_15)();
  if (iVar6 != 0) {
    puVar12 = *(undefined4 **)(param_2 + 0x68);
    if ((puVar12 != (undefined4 *)0x0) &&
       (FUN_100833b48(), (undefined4 *)(*(long *)(param_2 + 0x68) + 8) != puVar12)) {
      puVar1 = (undefined8 *)(puVar12 + 0xc);
      puVar3 = (undefined8 *)(puVar12 + 0xe);
      puVar12 = (undefined4 *)(param_2 + 0x18);
      func_0x000107c60c68(puVar12,*puVar1,*puVar3);
    }
    func_0x0001004ba214(*(undefined8 *)(*(long *)param_3 + 0x80));
    if (puVar12 != (undefined4 *)0x0) {
      puVar13 = puVar12;
      FUN_100833a3c(&UNK_10f73f944);
      puVar2 = puVar12 + 2;
      if (puVar2 != puVar13) {
        puVar1 = (undefined8 *)(puVar13 + 0xc);
        puVar3 = (undefined8 *)(puVar13 + 0xe);
        puVar13 = (undefined4 *)(param_2 + 0x78);
        func_0x000107c60c68(puVar13,*puVar1,*puVar3);
      }
      FUN_100833b84(&UNK_10f73f957);
      puVar12 = puVar13;
      if (puVar2 != puVar13) {
        puVar12 = *(undefined4 **)(puVar13 + 0xc);
        FUN_1000633dc(puVar12,*(undefined8 *)(puVar13 + 0xe),"1",1);
        if ((int)puVar12 != 0) {
          *(undefined1 *)(param_2 + 0x70) = 1;
        }
      }
      FUN_100833b84(&UNK_10f73f972);
      if (puVar2 != puVar12) {
        func_0x000100833b94();
        func_0x000100833ba0();
        *(int *)(param_2 + 0x90) = (int)puVar12;
        FUN_1004ba350();
      }
      FUN_100833b84(&UNK_10f73f983);
      if (puVar2 != puVar12) {
        func_0x000100833b94();
        func_0x000100833ba0();
        *(int *)(param_2 + 0x98) = (int)puVar12;
        FUN_1004ba350();
      }
      FUN_100833b84(&UNK_10f73f999);
      if (puVar2 != puVar12) {
        func_0x000100833b94();
        func_0x000100833ba0();
        *(int *)(param_2 + 0x94) = (int)puVar12;
        FUN_1004ba350();
      }
      FUN_100833b84(&UNK_10f73f8df);
      if (puVar2 != puVar12) {
        func_0x000100833b94();
        func_0x000100833ba0();
        *(int *)(param_2 + 0x9c) = (int)puVar12;
        FUN_1004ba350();
      }
      FUN_100833b84(&UNK_10f73f8c6);
      if (puVar2 != puVar12) {
        func_0x000100833b94();
        func_0x000100833ba0();
        *(int *)(param_2 + 0xa0) = (int)puVar12;
        FUN_1004ba350();
      }
      FUN_100833b84(&UNK_10f73f8f7);
      if (puVar2 != puVar12) {
        func_0x000100833b94();
        puVar12 = (undefined4 *)(param_2 + 0xa8);
        FUN_100066230(puVar12,auStack_c0 + 6);
        FUN_1004ba350();
      }
    }
    func_0x0001004ba214(*(undefined8 *)(*(long *)param_3 + 0x78));
    uVar4 = *puVar12;
    plVar15 = *(long **)(param_2 + 8);
    func_0x000107c60c94(auStack_c0 + 6,puVar12 + 2);
    (**(code **)(*plVar15 + 0x50))
              (plVar15,uVar4,param_2 + 0x18,auStack_c0 + 6,*(undefined4 *)(param_2 + 0x60),
               param_2 + 0x78,*(undefined1 *)(param_2 + 0x70),*(undefined4 *)(param_2 + 0x90),
               *(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x94),
               *(undefined4 *)(param_2 + 0x9c),*(undefined4 *)(param_2 + 0xa0),param_2 + 0x48,
               param_2 + 0x30,param_2 + 0xa8);
    FUN_1004ba350();
  }
  (**(code **)(*(long *)param_3 + 0x18))(param_3);
  return;
}



/* Entry: 1004ba208; end: 1004ba22f;  */

undefined1 FUN_1004ba208(long param_1,int param_2)

{
  return *(undefined1 *)(param_1 + param_2 + 8);
}



/* Entry: 1004ba230; end: 1004ba34f;  */

uint FUN_1004ba230(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puStack_20;
  ulong uStack_18;
  
  uStack_18 = param_1[1];
  puStack_20 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uStack_18 = (ulong)*(byte *)((long)param_1 + 0x17);
    puStack_20 = param_1;
  }
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  iVar3 = (int)&puStack_20;
  FUN_100067218(&puStack_20,puVar2,uVar1);
  uVar4 = (uint)(0 < iVar3);
  if (iVar3 < 0) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* Entry: 1004ba350; end: 1004ba39f;  */

void FUN_1004ba350(void)

{
  long unaff_x29;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x29 + -0x98);
  return;
}



/* Entry: 1004ba3a0; end: 1004ba6c3;  */

long * FUN_1004ba3a0(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  if ((long *)param_1[1] == (long *)0x0) {
    do {
      plVar3 = (long *)param_1[2];
      bVar1 = param_1 != (long *)*plVar3;
      param_1 = plVar3;
    } while (bVar1);
    return plVar3;
  }
  do {
    plVar2 = plVar3;
    plVar3 = (long *)*plVar2;
  } while (plVar3 != (long *)0x0);
  return plVar2;
}



/* Entry: 1004ba6c4; end: 1004ba6ff;  */

void FUN_1004ba6c4(void)

{
  return;
}



/* Entry: 1004ba700; end: 1004ba78f;  */

void FUN_1004ba700(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = param_1;
  uVar2 = param_2;
  func_0x0001004ba6f8();
  *(long *)(param_1 + 0xb0) = lVar1;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  FUN_1004ba790();
  func_0x0001004ba79c();
  func_0x0001004ba7a8();
  FUN_10048a5b8(auStack_48,*(undefined8 *)(param_1 + 0x108));
  func_0x0001004ba7b4(param_1 + 0x28);
  func_0x0001004ba7bc();
  FUN_1004ba7c4(auStack_48,*(long *)(param_1 + 0x108) + 0x58,param_1 + 0xf0);
  FUN_1004ba87c(param_1,param_2,auStack_48,1);
  func_0x0001004ba7bc();
  return;
}



/* Entry: 1004ba790; end: 1004ba7c3;  */

void FUN_1004ba790(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (unaff_x22 + 0x10);
  return;
}



/* Entry: 1004ba7c4; end: 1004ba867;  */

void FUN_1004ba7c4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x000107c60dec(auStack_50,&UNK_10f73f719,param_2);
    FUN_100610910(auStack_38,auStack_50,param_3);
    FUN_100066230(param_1,auStack_38);
    func_0x000107c60ca0(auStack_38);
    func_0x000107c60ca0(auStack_50);
  }
  else {
    func_0x000107c60ca4(param_1,param_3);
  }
  return;
}



/* Entry: 1004ba868; end: 1004ba87b;  */

void FUN_1004ba868(void)

{
  return;
}



/* Entry: 1004ba87c; end: 1004baa8f;  */

void FUN_1004ba87c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar6;
  int extraout_w10;
  long *unaff_x20;
  undefined8 uVar7;
  long lStack_140;
  long lStack_138;
  undefined1 auStack_130 [24];
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  long alStack_d8 [3];
  long lStack_c0;
  long lStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  undefined8 uStack_48;
  
  plVar5 = &lStack_140;
  FUN_1004ba868();
  uStack_48 = extraout_x8;
  FUN_1004baab8(&lStack_c0);
  if ((lStack_c0 != 0) && (plVar3 = unaff_x20, FUN_100aba310(), ((ulong)plVar3 & 1) != 0)) {
    in_ZR = (char)unaff_x20[0x13] == '\x01';
    if ((bool)in_ZR) {
      plVar3 = alStack_d8;
      func_0x000107c60c94(plVar3,unaff_x20 + 0x10);
    }
    else {
      func_0x000100aba3b4();
    }
    FUN_10048b28c();
    lStack_138 = lStack_b8;
    lStack_140 = lStack_c0;
    if (lStack_b8 != 0) {
      do {
        FUN_100abaa34();
      } while (extraout_w10 != 0);
    }
    func_0x000107c60c94(auStack_130,param_2);
    func_0x000107c60c94(&lStack_118,param_3);
    func_0x000100abaa44();
    pcStack_a8 = FUN_100abb13c;
    ppuStack_a0 = &PTR_FUN_110ccdbd8;
    plVar4 = (long *)0x60;
    uStack_e8 = param_4;
    func_0x000107c60e20();
    plVar4[1] = lStack_138;
    *plVar4 = lStack_140;
    lStack_140 = 0;
    lStack_138 = 0;
    func_0x000107c60c94(plVar4 + 2,auStack_130);
    plVar4[6] = lStack_110;
    plVar4[5] = lStack_118;
    plVar4[7] = lStack_108;
    lStack_110 = 0;
    lStack_108 = 0;
    lStack_118 = 0;
    plVar4[9] = lStack_f8;
    plVar4[8] = lStack_100;
    plVar4[10] = lStack_f0;
    lStack_100 = 0;
    lStack_f8 = 0;
    lStack_f0 = 0;
    *(undefined1 *)(plVar4 + 0xb) = uStack_e8;
    plStack_98 = plVar4;
    (**(code **)(*plVar3 + 0x10))(plVar3,&pcStack_a8);
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    FUN_100abadd4(&lStack_140);
    FUN_100abae00();
  }
  func_0x0001004bab9c();
  func_0x0001004baba4(uStack_48);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    FUN_100abadd4();
    FUN_100abae00();
    func_0x0001004bab9c();
    func_0x000107c353a0();
    lVar6 = *(long *)((long)plVar5 + 0x20);
    uVar7 = *(undefined8 *)((long)plVar5 + 0x18);
    extraout_x8_00[1] = *(undefined8 *)((long)plVar5 + 0x20);
    *extraout_x8_00 = uVar7;
    if (lVar6 != 0) {
      plVar5 = (long *)(lVar6 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    return;
  }
  return;
}



/* Entry: 1004baa90; end: 1004baab7;  */

void FUN_1004baa90(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1004baab8; end: 1004bab1f;  */

void FUN_1004baab8(undefined8 *param_1)

{
  undefined1 auStack_30 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  if (plRam000000011383a240 != (long *)0x0) {
    (**(code **)(*plRam000000011383a240 + 0x10))(auStack_30);
    func_0x0001004bab48(param_1,auStack_30);
    func_0x0001004bab94();
  }
  return;
}


