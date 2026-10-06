/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100901b6c; end: 100901bd3;  */

void FUN_100901b6c(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  FUN_100901694();
  uStack_28 = extraout_x8;
  FUN_100901740();
  FUN_100901bf0();
  *puStack_30 = &PTR_DAT_1108c2ef8;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_1108c2f48;
  func_0x000100901940();
  FUN_100901c2c();
  func_0x000100901968(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_48 = FUN_100901bd4;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_100901b6c(&uStack_51);
  return;
}



/* Entry: 100901bd4; end: 100901bef;  */

void FUN_100901bd4(void)

{
  undefined1 uStack_11;
  
  FUN_100901b6c(&uStack_11);
  return;
}



/* Entry: 100901bf0; end: 100901c0f;  */

void FUN_100901bf0(void)

{
  func_0x00010090174c();
  FUN_100901c10();
  FUN_1009017a8();
  return;
}



/* Entry: 100901c10; end: 100901c2b;  */

void FUN_100901c10(long param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100901c2c; end: 100901c5f;  */

void FUN_100901c2c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100901c60; end: 100901cbf;  */

void FUN_100901c60(void)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  func_0x000100901c48();
  FUN_100901d0c(auStack_40,1);
  FUN_100901e10(uStack_30);
  func_0x000100902338();
  func_0x000100902350();
  func_0x000100902360();
  if ((bool)in_ZR) {
    return;
  }
  uVar1 = uStack_30;
  func_0x000107c60e78();
  func_0x000100902350(auStack_40);
  func_0x000107c60bd8(uVar1);
  pcStack_48 = FUN_100901cc0;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_100901c60(&uStack_51);
  return;
}



/* Entry: 100901cc0; end: 100901d0b;  */

void FUN_100901cc0(void)

{
  undefined1 uStack_11;
  
  FUN_100901c60(&uStack_11);
  return;
}



/* Entry: 100901d0c; end: 100901d33;  */

long FUN_100901d0c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000100901ce0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100901d34; end: 100901d3b;  */

void FUN_100901d34(void)

{
  return;
}



/* Entry: 100901d3c; end: 100901ddb;  */

undefined8 FUN_100901d3c(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam000000011381a460 & 1) == 0) {
    iVar1 = 0x1381a460;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_100901e50(auStack_68);
      puVar2 = auStack_68;
      FUN_10028f4b0();
      puRam000000011381a458 = puVar2;
      FUN_100164334(auStack_68);
      func_0x000107c60e4c(0x11381a460);
    }
  }
  return 0x11381a458;
}



/* Entry: 100901ddc; end: 100901e0f;  */

undefined8 * FUN_100901ddc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_1108c4660;
  puVar1 = param_1;
  FUN_100901d3c();
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 100901e10; end: 100901e4f;  */

undefined8 * FUN_100901e10(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108c30e0;
  param_1[1] = 0;
  FUN_100901ddc(param_1 + 3);
  return param_1;
}



/* Entry: 100901e50; end: 10090232f;  */

undefined8 * FUN_100901e50(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 auStack_4d0 [1152];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10002b838(&uStack_4e8,&UNK_10f3166a3);
  FUN_10002b838(&uStack_500,"");
  FUN_10002b838(auStack_4d0,&UNK_10f3166b5);
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330();
  FUN_100902330(auStack_4d0);
  puVar1 = auStack_4d0;
  FUN_1000e3098(&uStack_520,puVar1,0x31);
  param_1[1] = uStack_4e0;
  *param_1 = uStack_4e8;
  param_1[2] = uStack_4d8;
  uStack_4e0 = 0;
  uStack_4d8 = 0;
  param_1[4] = uStack_4f8;
  param_1[3] = uStack_500;
  param_1[5] = uStack_4f0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  uStack_4e8 = 0;
  param_1[7] = uStack_518;
  param_1[6] = uStack_520;
  param_1[8] = uStack_510;
  uStack_518 = 0;
  uStack_510 = 0;
  uStack_520 = 0;
  FUN_1000e30f4(&uStack_520);
  lVar4 = 0x480;
  do {
    func_0x000107c60ca0(auStack_4d0 + lVar4);
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != -0x18);
  func_0x000107c60ca0(&uStack_500);
  puVar2 = &uStack_4e8;
  func_0x000107c60ca0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  func_0x000107c60e78();
  puVar3 = auStack_50;
  lVar4 = -0x498;
  do {
    func_0x000107c60ca0(puVar3);
    puVar3 = puVar3 + -0x18;
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0);
  func_0x000107c60ca0(&uStack_500);
  func_0x000107c60ca0(&uStack_4e8);
  func_0x000107c60bd8(puVar2);
  func_0x00010002b82c(0);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(0,puVar2,puVar1);
  return (undefined8 *)0x0;
}



/* Entry: 100902330; end: 10090239b;  */

void FUN_100902330(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 10090239c; end: 1009023c7;  */

void FUN_10090239c(undefined8 param_1)

{
  func_0x000100902384(param_1,2);
  func_0x000100902588();
  func_0x000100902688();
  return;
}



/* Entry: 1009023c8; end: 100902463;  */

long FUN_1009023c8(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 100902464; end: 100902493;  */

void FUN_100902464(long param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  FUN_1009023c8(param_1,&uStack_14);
  if (param_1 != 0) {
    FUN_100902494(param_1 + 0x18);
  }
  return;
}



/* Entry: 100902494; end: 1009024af;  */

bool FUN_100902494(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar4 = param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar3 = param_1;
  }
  FUN_1000633dc(puVar3,uVar4,&UNK_10f3176e1,4);
  if (((ulong)puVar3 & 1) == 0) {
    FUN_10090257c();
    FUN_1000633dc();
    if (((ulong)puVar3 & 1) == 0) {
      FUN_10090257c();
      FUN_1000633dc();
      if (((ulong)puVar3 & 1) == 0) {
        FUN_10090257c();
        FUN_1000633dc();
        if (((ulong)puVar3 & 1) == 0) {
          FUN_10090257c();
          FUN_1000633dc();
          if (((ulong)puVar3 & 1) == 0) {
            FUN_10090257c();
            FUN_1000633dc();
            if (((ulong)puVar3 & 1) == 0) {
              puVar5 = &UNK_10f3176f7;
              FUN_10090257c();
              iVar1 = (int)&stack0xffffffffffffffe0;
              if (uVar4 == 1) {
                FUN_100067218(&stack0xffffffffffffffe0,puVar5,1);
                bVar2 = iVar1 == 0;
              }
              else {
                bVar2 = false;
              }
              return bVar2;
            }
          }
        }
      }
    }
  }
  return true;
}



/* Entry: 1009024b0; end: 10090257b;  */

bool FUN_1009024b0(ulong param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  
  FUN_1000633dc(param_1,param_2,&UNK_10f3176e1,4);
  if ((param_1 & 1) == 0) {
    FUN_10090257c();
    FUN_1000633dc();
    if ((param_1 & 1) == 0) {
      FUN_10090257c();
      FUN_1000633dc();
      if ((param_1 & 1) == 0) {
        FUN_10090257c();
        FUN_1000633dc();
        if ((param_1 & 1) == 0) {
          FUN_10090257c();
          FUN_1000633dc();
          if ((param_1 & 1) == 0) {
            FUN_10090257c();
            FUN_1000633dc();
            if ((param_1 & 1) == 0) {
              puVar3 = &UNK_10f3176f7;
              FUN_10090257c();
              iVar1 = (int)&stack0xffffffffffffffe0;
              if (param_2 == 1) {
                FUN_100067218(&stack0xffffffffffffffe0,puVar3,1);
                bVar2 = iVar1 == 0;
              }
              else {
                bVar2 = false;
              }
              return bVar2;
            }
          }
        }
      }
    }
  }
  return true;
}



/* Entry: 10090257c; end: 100902597;  */

void FUN_10090257c(void)

{
  return;
}



/* Entry: 100902598; end: 10090260b;  */

void FUN_100902598(undefined8 param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  FUN_100901694();
  uStack_28 = extraout_x8;
  FUN_100901740();
  FUN_10090262c();
  *puStack_30 = &PTR_DAT_1108c2ff0;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_1108c3040;
  *(undefined1 *)(puStack_30 + 4) = *param_2;
  func_0x000100901940();
  FUN_100902678();
  func_0x000100901968(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_48 = FUN_10090260c;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_100902598(&uStack_51,param_1);
  return;
}



/* Entry: 10090260c; end: 10090262b;  */

void FUN_10090260c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_100902598(&uStack_11,param_1);
  return;
}



/* Entry: 10090262c; end: 10090264b;  */

void FUN_10090262c(void)

{
  func_0x00010090174c();
  FUN_10090264c();
  FUN_1009017a8();
  return;
}



/* Entry: 10090264c; end: 100902677;  */

void FUN_10090264c(long param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100902678; end: 1009026a7;  */

void FUN_100902678(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1009026a8; end: 1009026cb;  */

void FUN_1009026a8(long param_1)

{
  func_0x00010090269c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1009026cc; end: 100902727;  */

void FUN_1009026cc(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *unaff_x20;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 *puStack_30;
  
  FUN_1009014c8();
  FUN_10090159c();
  *puStack_30 = &PTR_DAT_1108c4188;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_1108c41d8;
  puStack_30[4] = *unaff_x20;
  FUN_100901600();
  func_0x000100901618();
  func_0x000100901628();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_48 = FUN_100902728;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1009026cc(&uStack_51,param_1);
  return;
}



/* Entry: 100902728; end: 100902747;  */

void FUN_100902728(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1009026cc(&uStack_11,param_1);
  return;
}



/* Entry: 100902748; end: 100902783;  */

void FUN_100902748(void)

{
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = 0xa4cb800;
  FUN_100902728(auStack_40,&uStack_28);
  func_0x000100901654();
  FUN_100901668();
  return;
}



/* Entry: 100902784; end: 10090279f;  */

void FUN_100902784(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1009027a0; end: 100902a27;  */

undefined8 *
FUN_1009027a0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,long *param_4,long *param_5,
             long *param_6,long *param_7,undefined8 *param_8,undefined8 *param_9)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108c4918;
  FUN_1008ff448(param_1 + 3);
  *(undefined4 *)(param_1 + 0x10) = param_3;
  lVar4 = *param_4;
  param_1[0x12] = param_4[1];
  param_1[0x11] = lVar4;
  *param_4 = 0;
  param_4[1] = 0;
  lVar4 = *param_5;
  param_1[0x14] = param_5[1];
  param_1[0x13] = lVar4;
  *param_5 = 0;
  param_5[1] = 0;
  lVar4 = *param_6;
  param_1[0x16] = param_6[1];
  param_1[0x15] = lVar4;
  *param_6 = 0;
  param_6[1] = 0;
  lVar4 = *param_7;
  param_1[0x18] = param_7[1];
  param_1[0x17] = lVar4;
  *param_7 = 0;
  param_7[1] = 0;
  uVar2 = *param_8;
  param_1[0x1a] = param_8[1];
  param_1[0x19] = uVar2;
  *param_8 = 0;
  param_8[1] = 0;
  uVar2 = *param_9;
  param_1[0x1c] = param_9[1];
  param_1[0x1b] = uVar2;
  *param_9 = 0;
  param_9[1] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  auStack_b0[0] = 0;
  uStack_98 = 0;
  if (param_1[0x11] == 0) {
    puVar3 = &UNK_10f316a3e;
  }
  else if (param_1[0x13] == 0) {
    puVar3 = &UNK_10f316a4e;
  }
  else if (param_1[0x15] == 0) {
    puVar3 = &UNK_10f316a60;
  }
  else {
    if (param_1[0x17] != 0) {
      if (*(char *)(param_1 + 0xf) == '\x01') {
        func_0x000100902a78(param_1 + 9);
      }
      FUN_1001148fc(auStack_b0);
      return param_1;
    }
    puVar3 = &UNK_10f316a77;
  }
  FUN_10002b838(auStack_b0,puVar3);
  uStack_98 = 1;
  puStack_90 = &UNK_10f316ac5;
  uStack_88 = 0;
  uStack_80 = 0x44;
  uStack_78 = 0;
  FUN_1003a91d4(&UNK_10f315928);
  FUN_1003a9204(auStack_e0);
  func_0x000105976690(&puStack_90,&PTR_DAT_1108c4948,auStack_b0,auStack_e0);
  FUN_1003a91d4(&UNK_10f316a85);
  FUN_1003a9204(auStack_c8);
  func_0x00010597c0c8();
  uVar2 = 0x10;
  func_0x000107c60e30(0x10);
  func_0x0001052768d8();
  func_0x000107c60e54(uVar2,PTR___ZTISt16invalid_argument_110352248,
                      PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009029a4);
  (*pcVar1)();
}



/* Entry: 100902a28; end: 100902b17;  */

void FUN_100902a28(long *param_1)

{
  long *plVar1;
  undefined1 uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  plVar1 = (long *)(*param_1 + param_1[1]);
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    plVar3 = param_1;
    plVar1 = (long *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x17));
  }
  for (; plVar3 != plVar1; plVar3 = (long *)((long)plVar3 + 1)) {
    uVar2 = (undefined1)*plVar3;
    func_0x000107c60e80();
    *(undefined1 *)plVar3 = uVar2;
  }
  return;
}



/* Entry: 100902b18; end: 100902b23;  */

undefined8 FUN_100902b18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100902b24; end: 100902b6b;  */

void FUN_100902b24(long param_1)

{
  FUN_100902b18();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100902b6c; end: 100902b87;  */

void FUN_100902b6c(void)

{
  bool bVar1;
  long *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100902b88; end: 100902bab;  */

void FUN_100902b88(long param_1)

{
  func_0x000100902b7c();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 100902bac; end: 100902bb3;  */

void FUN_100902bac(void)

{
  return;
}



/* Entry: 100902bb4; end: 100902bfb;  */

void FUN_100902bb4(long param_1)

{
  func_0x000100902b7c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100902bfc; end: 100902c13;  */

void FUN_100902bfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100902c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 100902c14; end: 100902d6f;  */

void FUN_100902c14(ulong *param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong extraout_x8;
  ulong uVar6;
  ulong unaff_x24;
  ulong uVar7;
  ulong uVar8;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    uVar8 = param_2;
    func_0x000100902384(param_2,0xb);
    if ((int)uVar8 == 0) {
      bVar2 = false;
      uVar8 = 0;
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      uVar6 = param_2;
      FUN_100902dc4();
      bVar2 = false;
      uVar8 = 0;
      if (((uVar7 & 1) != 0) && (uVar6 != 0)) {
        uVar3 = 0xd;
        unaff_x24 = param_2;
        FUN_100902dc4();
        if ((unaff_x24 != 0 & uVar3) == 0) {
          unaff_x24 = 86400000;
        }
        bVar2 = true;
        uVar8 = uVar6;
      }
      uVar7 = uVar8 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xff;
    }
    uVar6 = param_2;
    func_0x000100902384(param_2,0xe);
    if ((int)uVar6 == 0) {
      bVar1 = false;
      uVar6 = 0;
      uVar4 = 0;
      param_2 = extraout_x8;
    }
    else {
      uVar4 = 0xf;
      uVar6 = param_2;
      FUN_100902dc4();
      uVar3 = 0;
      FUN_100902dc4();
      if ((param_2 != 0 & uVar3) == 0) {
        param_2 = 86400000;
      }
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      if ((uVar4 & 1) == 0) {
        uVar6 = 1;
      }
      uVar4 = uVar6 & 0xffffffffffffff00;
      uVar6 = uVar6 & 0xff;
      bVar1 = true;
    }
    if (bVar1 || bVar2) {
      *param_1 = uVar7 | uVar8;
      param_1[1] = unaff_x24;
      *(bool *)(param_1 + 2) = bVar2;
      param_1[3] = uVar4 | uVar6;
      param_1[4] = param_2;
      uVar5 = 1;
      *(bool *)(param_1 + 5) = bVar1;
      goto LAB_100902d54;
    }
  }
  uVar5 = 0;
  *(undefined1 *)param_1 = 0;
LAB_100902d54:
  *(undefined1 *)(param_1 + 6) = uVar5;
  return;
}



/* Entry: 100902d70; end: 100902dc3;  */

void FUN_100902d70(undefined1 *param_1,long param_2,undefined4 param_3)

{
  undefined4 uStack_24;
  
  if (((*(byte *)(param_2 + 0x28) & 1) == 0) ||
     (uStack_24 = param_3, FUN_1009023c8(param_2,&uStack_24), param_2 == 0)) {
    *param_1 = 0;
    param_1[0x18] = 0;
  }
  else {
    func_0x0001002a8308(param_1,param_2 + 0x18);
  }
  return;
}



/* Entry: 100902dc4; end: 100902ebb;  */

undefined1  [16] FUN_100902dc4(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  char acStack_50 [8];
  ulong uStack_48;
  byte bStack_39;
  char cStack_38;
  
  pcVar1 = acStack_50;
  pcVar2 = acStack_50;
  FUN_100902d70(acStack_50);
  if (cStack_38 == '\x01') {
    if (-1 < (char)bStack_39) {
      uStack_48 = (ulong)bStack_39;
    }
    if (uStack_48 != 0) {
      func_0x000107c60be0(acStack_50,0);
      if (*pcVar1 == '-') goto LAB_100902e1c;
    }
    func_0x000107c60db4(acStack_50,0,10);
    uVar5 = (ulong)pcVar2 & 0xffffffffffffff00;
    uVar4 = (ulong)pcVar2 & 0xff;
    uVar3 = 1;
  }
  else {
LAB_100902e1c:
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  FUN_1001148fc(acStack_50);
  auVar6._0_8_ = uVar5 | uVar4;
  auVar6._8_8_ = uVar3;
  return auVar6;
}



/* Entry: 100902ebc; end: 100902f27;  */

void FUN_100902ebc(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *unaff_x20;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  puVar1 = auStack_40;
  FUN_1009014c8();
  FUN_10090262c(auStack_40,1);
  *puStack_30 = &PTR_DAT_1108c2ff0;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_1108c3040;
  *(undefined1 *)(puStack_30 + 4) = *unaff_x20;
  FUN_100901600();
  FUN_100902678();
  func_0x000100901628();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_48 = FUN_100902f28;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_100902ebc(&uStack_51,puVar1);
  return;
}



/* Entry: 100902f28; end: 100902f47;  */

void FUN_100902f28(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_100902ebc(&uStack_11,param_1);
  return;
}



/* Entry: 100902f48; end: 100902f7b;  */

void FUN_100902f48(undefined1 param_1)

{
  undefined1 auStack_40 [31];
  undefined1 uStack_21;
  
  uStack_21 = param_1;
  FUN_100902f28(auStack_40,&uStack_21);
  func_0x000100901654();
  FUN_1009026a8();
  return;
}



/* Entry: 100902f7c; end: 100902f8f;  */

long FUN_100902f7c(void)

{
  long unaff_x29;
  
  return unaff_x29 + -1;
}



/* Entry: 100902f90; end: 100902fab;  */

void FUN_100902f90(void)

{
  FUN_100902f7c();
  FUN_1009030b8();
  return;
}



/* Entry: 100902fac; end: 1009030a3;  */

void FUN_100902fac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [16];
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_5 + 0x30) & 1) == 0) {
    func_0x000105978318(&uStack_40);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x00010597841c(&uStack_40);
  }
  else {
    uVar1 = *(ulong *)(param_5 + 8);
    if (*(char *)(param_5 + 0x10) == '\0') {
      uVar1 = 0;
    }
    uStack_48 = uVar1;
    if (uVar1 <= *(ulong *)(param_5 + 0x20)) {
      uStack_48 = *(ulong *)(param_5 + 0x20);
    }
    if (*(char *)(param_5 + 0x28) == '\0') {
      uStack_48 = uVar1;
    }
    FUN_100902f90(&uStack_40,param_2,param_3,&uStack_48);
    FUN_100903360(auStack_58,param_5);
    FUN_1009033dc(&uStack_70,auStack_58,&uStack_40,param_4);
    param_1[1] = uStack_68;
    *param_1 = uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    FUN_100903610(&uStack_70);
    func_0x000100903634(auStack_58);
    FUN_1009035b8(&uStack_40);
  }
  return;
}



/* Entry: 1009030a4; end: 1009030b7;  */

void FUN_1009030a4(void)

{
  return;
}



/* Entry: 1009030b8; end: 100903137;  */

void FUN_1009030b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  FUN_1009030a4();
  uStack_38 = extraout_x8;
  FUN_100903144(auStack_50,1);
  FUN_100903238(uStack_40,param_2,param_3,param_4);
  FUN_100903274();
  func_0x00010090328c();
  func_0x00010090329c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x00010090328c();
  func_0x000105978554();
  *(undefined8 *)(puVar1 + 8) = param_2;
  return;
}



/* Entry: 100903138; end: 100903143;  */

void FUN_100903138(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 100903144; end: 100903163;  */

void FUN_100903144(void)

{
  FUN_100903138();
  FUN_100903164();
  FUN_100903190();
  return;
}



/* Entry: 100903164; end: 10090318f;  */

void FUN_100903164(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x60);
    return;
  }
  func_0x000104bd35f4();
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 100903190; end: 1009031a3;  */

void FUN_100903190(undefined8 param_1)

{
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 1009031a4; end: 100903237;  */

undefined8 *
FUN_1009031a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar8 = param_3[1];
  uVar7 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = *param_4;
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[4] = uVar4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  func_0x000100902af4(&uStack_40);
  func_0x000100902b48(&uStack_30);
  return param_1;
}



/* Entry: 100903238; end: 100903273;  */

undefined8 * FUN_100903238(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108c4490;
  FUN_1009031a4(param_1 + 3);
  return param_1;
}



/* Entry: 100903274; end: 1009032c7;  */

void FUN_100903274(void)

{
  long *unaff_x19;
  long in_stack_00000010;
  
  *unaff_x19 = in_stack_00000010 + 0x18;
  unaff_x19[1] = in_stack_00000010;
  return;
}



/* Entry: 1009032c8; end: 10090335f;  */

void FUN_1009032c8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uStack_81;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  FUN_1009030a4();
  uStack_28 = extraout_x8;
  FUN_100903380(auStack_40,1);
  puVar1 = puStack_30;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_1108c44e0;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar8 = param_2[1];
  uVar7 = *param_2;
  puStack_30[3] = &PTR_DAT_1108c43a0;
  puStack_30[5] = uVar8;
  puStack_30[4] = uVar7;
  puStack_30[7] = uVar6;
  puStack_30[6] = uVar5;
  puStack_30[9] = uVar4;
  puStack_30[8] = uVar3;
  puStack_30 = (undefined8 *)0x0;
  *unaff_x19 = (long)(puVar1 + 3);
  unaff_x19[1] = (long)puVar1;
  puVar2 = auStack_40;
  FUN_1009033cc(puVar2);
  func_0x00010090329c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_78 = FUN_100903360;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_1009032c8(&uStack_81,puVar2);
  return;
}



/* Entry: 100903360; end: 10090337f;  */

void FUN_100903360(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1009032c8(&uStack_11,param_1);
  return;
}



/* Entry: 100903380; end: 10090339f;  */

void FUN_100903380(void)

{
  FUN_100903138();
  FUN_1009033a0();
  FUN_100903190();
  return;
}



/* Entry: 1009033a0; end: 1009033cb;  */

void FUN_1009033a0(long param_1,ulong param_2)

{
  if (param_2 < 0x333333333333334) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x50);
    return;
  }
  func_0x000104bd35f4();
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1009033cc; end: 1009033db;  */

void FUN_1009033cc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1009033dc; end: 1009033f7;  */

void FUN_1009033dc(void)

{
  FUN_100902f7c();
  FUN_1009033f8();
  return;
}



/* Entry: 1009033f8; end: 100903477;  */

void FUN_1009033f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1009030a4();
  uStack_38 = extraout_x8;
  FUN_100903478(auStack_50,1);
  FUN_100903570(uStack_40,param_2,param_3,param_4);
  FUN_100903274();
  FUN_100903600();
  func_0x00010090329c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_100903600(auStack_50);
  func_0x000105978554();
  FUN_100903138();
  FUN_100903498();
  FUN_100903190();
  return;
}



/* Entry: 100903478; end: 100903497;  */

void FUN_100903478(void)

{
  FUN_100903138();
  FUN_100903498();
  FUN_100903190();
  return;
}



/* Entry: 100903498; end: 1009034c7;  */

void FUN_100903498(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 < (undefined8 *)0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x58);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_1108c4580;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  param_1[6] = param_4[1];
  param_1[5] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}



/* Entry: 1009034c8; end: 1009034ff;  */

void FUN_1009034c8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_1108c4580;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  param_1[6] = param_4[1];
  param_1[5] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}



/* Entry: 100903500; end: 10090356f;  */

undefined8
FUN_100903500(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  FUN_1009034c8(param_1,&uStack_30,&uStack_40,&uStack_50);
  FUN_100902b24(&uStack_50);
  FUN_1009035b8(&uStack_40);
  func_0x0001009035dc(&uStack_30);
  return param_1;
}



/* Entry: 100903570; end: 1009035ab;  */

undefined8 * FUN_100903570(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108c4530;
  FUN_100903500(param_1 + 3);
  return param_1;
}



/* Entry: 1009035ac; end: 1009035b7;  */

undefined8 FUN_1009035ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1009035b8; end: 1009035ff;  */

void FUN_1009035b8(long param_1)

{
  FUN_1009035ac();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100903600; end: 10090360f;  */

void FUN_100903600(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100903610; end: 100903683;  */

void FUN_100903610(long param_1)

{
  FUN_1009035ac();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100903684; end: 100903f33;  */

void FUN_100903684(long *param_1,long *param_2,long *param_3,long param_4,ulong param_5,
                  long *param_6,long *param_7,long *param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined **extraout_x8;
  undefined **extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  undefined8 *puVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined ***unaff_x28;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined4 uStack_1a0;
  undefined1 uStack_19c;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined **ppuStack_150;
  long alStack_148 [5];
  undefined **ppuStack_120;
  undefined **appuStack_118 [5];
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_4 + 0x80) & 1) == 0) {
    ppuVar11 = (undefined **)0x30;
    func_0x000107c60e20();
    ppuVar11[1] = (undefined *)0x0;
    ppuVar11[2] = (undefined *)0x0;
    *ppuVar11 = (undefined *)&PTR_DAT_1108c3ce0;
    ppuVar14 = ppuVar11 + 3;
    *ppuVar14 = (undefined *)&PTR_DAT_1108c3be8;
    ppuStack_120 = ppuVar14;
    appuStack_118[0] = ppuVar11;
    do {
      FUN_100903f34();
    } while (extraout_w10_01 != 0);
    do {
      FUN_100903f34();
    } while (extraout_w10_02 != 0);
    ppuStack_e8 = (undefined **)0x0;
    ppuStack_f0 = (undefined **)0x0;
    ppuVar11[4] = (undefined *)ppuVar14;
    ppuVar11[5] = (undefined *)ppuVar11;
    FUN_100903f44(&ppuStack_f0);
    FUN_100903f7c(&ppuStack_120);
    *param_1 = (long)ppuVar14;
    param_1[1] = (long)ppuVar11;
    ppuStack_e8 = (undefined **)0x0;
    ppuStack_f0 = (undefined **)0x0;
    FUN_100903f7c(&ppuStack_f0);
  }
  else {
    uVar6 = param_5;
    func_0x00010596f814();
    iVar4 = (int)uVar6;
    uVar7 = param_5;
    func_0x00010596f878();
    uVar5 = (undefined4)uVar7;
    puVar8 = (undefined8 *)0x20;
    func_0x000107c60e20();
    plVar10 = puVar8 + 1;
    *plVar10 = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_DAT_1108c3d30;
    puVar12 = puVar8 + 3;
    *puVar12 = &PTR_DAT_1108c3d80;
    puVar9 = (undefined8 *)0x60;
    puStack_1c0 = puVar12;
    puStack_1b8 = puVar8;
    func_0x000107c60e20();
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_DAT_1108c3dc0;
    func_0x00010597365c(&ppuStack_f0,param_4);
    func_0x0001059736dc(&ppuStack_120,param_5);
    puVar17 = puVar9 + 3;
    puStack_1a8 = (undefined8 *)param_3[1];
    puStack_1b0 = (undefined8 *)*param_3;
    if (param_3[1] != 0) {
      do {
        FUN_100903f34();
      } while (extraout_w10 != 0);
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    in_ZR = iVar4 == 0;
    puStack_160 = puVar12;
    puStack_158 = puVar8;
    func_0x000105972ff4(puVar17,&ppuStack_f0,&ppuStack_120,&puStack_1b0,&puStack_160,0,in_ZR);
    func_0x00010048b850(&puStack_160);
    FUN_100450be4(&puStack_1b0);
    func_0x0001009001f4(&ppuStack_120);
    func_0x000105974174();
    ppuStack_1d8 = (undefined **)0x0;
    ppuStack_1e0 = (undefined **)0x0;
    ppuStack_120 = (undefined **)&UNK_10597389c;
    appuStack_118[0] = &PTR_DAT_110873830;
    puStack_210 = (undefined **)0x0;
    puStack_208 = (undefined8 *)0x0;
    if (iVar4 != 0) {
      lVar13 = param_3[1];
      lVar19 = param_3[1];
      lVar18 = *param_3;
      puVar8 = (undefined8 *)0x30;
      puStack_1d0 = puVar17;
      puStack_1c8 = puVar9;
      func_0x000107c60e20();
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_DAT_1108c3e10;
      if (lVar13 != 0) {
        do {
          FUN_100903f34();
        } while (extraout_w10_00 != 0);
      }
      puVar8[3] = &PTR_DAT_1108c36e0;
      puVar8[5] = lVar19;
      puVar8[4] = lVar18;
      ppuStack_f0 = (undefined **)0x0;
      ppuStack_e8 = (undefined **)0x0;
      FUN_100450be4(&ppuStack_f0);
      ppuStack_e8 = ppuStack_1d8;
      ppuStack_f0 = ppuStack_1e0;
      ppuStack_1e0 = (undefined **)(puVar8 + 3);
      ppuStack_1d8 = (undefined **)puVar8;
      func_0x000105972600();
      plVar10 = (long *)*param_2;
      (**(code **)(*plVar10 + 0x10))();
      puStack_1b0 = (undefined8 *)*param_2;
      puStack_1a8 = (undefined8 *)param_2[1];
      if (puStack_1a8 != (undefined8 *)0x0) {
        plVar1 = puStack_1a8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_19c = SUB81(plVar10,0);
      ppuStack_f0 = (undefined **)&UNK_1059738ac;
      ppuStack_e8 = &PTR_DAT_1108c3c68;
      if (puStack_1a8 != (undefined8 *)0x0) {
        plVar10 = puStack_1a8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_1a0 = uVar5;
      puStack_e0 = puStack_1b0;
      puStack_d8 = puStack_1a8;
      uStack_d0 = uVar5;
      uStack_cc = uStack_19c;
      FUN_100902b24(&puStack_1b0);
      ppuStack_120 = ppuStack_f0;
      FUN_100078ac0(appuStack_118,&ppuStack_e8);
      func_0x000105974108();
      puStack_210 = ppuStack_1e0;
      puStack_208 = ppuStack_1d8;
    }
    puStack_1d0 = (undefined8 *)0x0;
    puStack_1c8 = (undefined8 *)0x0;
    ppuStack_1e0 = (undefined **)0x0;
    ppuStack_1d8 = (undefined **)0x0;
    puStack_200 = puVar17;
    puStack_1f8 = puVar9;
    ppuStack_150 = ppuStack_120;
    (*(code *)appuStack_118[0][2])(alStack_148,appuStack_118);
    puVar8 = puStack_1f8;
    puVar17 = puStack_200;
    if (iVar4 == 0) {
      puStack_200 = (undefined8 *)0x0;
      puStack_1f8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)0xb8;
      func_0x000107c60e20();
      plVar10 = puVar8 + 1;
      *plVar10 = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_DAT_1108c3c90;
      puVar17 = puVar8 + 3;
      puStack_1a8 = puStack_1f8;
      puStack_1b0 = puStack_200;
      puStack_200 = (undefined8 *)0x0;
      puStack_1f8 = (undefined8 *)0x0;
      puStack_158 = puStack_208;
      puStack_160 = puStack_210;
      puStack_210 = (undefined **)0x0;
      puStack_208 = (undefined8 *)0x0;
      ppuStack_f0 = ppuStack_150;
      (**(code **)(alStack_148[0] + 0x10))(&ppuStack_e8,alStack_148);
      func_0x000105971824(puVar17,&puStack_1b0,&puStack_160,uVar7 & 0xffffffff,&ppuStack_f0);
      func_0x000105974108();
      func_0x000105972600(&puStack_160);
      func_0x000105974154();
      if ((puVar8[5] == 0) || (in_ZR = *(long *)(puVar8[5] + 8) == -1, (bool)in_ZR)) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          puStack_1b0 = puVar17;
          puStack_1a8 = puVar8;
          puStack_160 = puVar17;
          puStack_158 = puVar8;
        } while (cVar2 != '\0');
        do {
          func_0x0001059740cc();
        } while (extraout_w11 != 0);
        ppuStack_f0 = (undefined **)puVar8[4];
        puVar8[4] = puVar17;
        puVar8[5] = puVar8;
        ppuStack_e8 = extraout_x8;
        func_0x000105972648(&ppuStack_f0);
        func_0x0001059728e4(&puStack_1b0);
      }
      puStack_160 = (undefined8 *)0x0;
      puStack_158 = (undefined8 *)0x0;
      func_0x0001059728e4(&puStack_160);
    }
    puStack_1f0 = puVar17;
    puStack_1e8 = puVar8;
    func_0x0001059740f8();
    func_0x000105972600(&puStack_210);
    func_0x000105972624(&puStack_200);
    ppuStack_220 = (undefined **)0x0;
    ppuStack_218 = (undefined **)0x0;
    uStack_230 = 0;
    uStack_228 = 0;
    puVar15 = (undefined *)*param_6;
    lVar13 = *param_7;
    if ((puVar15 != (undefined *)0x0) && (lVar13 != 0)) {
      puVar16 = (undefined *)param_6[1];
      ppuVar11 = (undefined **)0x40;
      func_0x000107c60e20();
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *ppuVar11 = (undefined *)&PTR_DAT_1108c3e60;
      if (puVar16 != (undefined *)0x0) {
        do {
          FUN_100903f34();
        } while (extraout_w10_03 != 0);
      }
      if (param_7[1] != 0) {
        do {
          func_0x0001059740cc();
        } while (extraout_w11_00 != 0);
      }
      ppuVar11[3] = (undefined *)&PTR_DAT_1108c3918;
      ppuVar11[4] = puVar15;
      ppuVar11[5] = puVar16;
      func_0x0001059740e4();
      FUN_1009048c0(&ppuStack_f0);
      ppuStack_e8 = ppuStack_218;
      ppuStack_f0 = ppuStack_220;
      ppuStack_220 = ppuVar11 + 3;
      ppuStack_218 = ppuVar11;
      FUN_1009048c0();
      FUN_1004b5280();
      lVar13 = param_3[1];
      lVar19 = param_3[1];
      lVar18 = *param_3;
      *puStack_e0 = &PTR_DAT_110877c58;
      puStack_e0[1] = 0;
      puStack_e0[2] = 0;
      puStack_e0[3] = &PTR_DAT_110877ca8;
      puStack_e0[5] = lVar19;
      puStack_e0[4] = lVar18;
      if (lVar13 != 0) {
        do {
          FUN_100903f34();
        } while (extraout_w10_04 != 0);
      }
      puStack_1a8 = puStack_e0;
      puStack_e0 = (undefined8 *)0x0;
      puStack_1b0 = puStack_1a8 + 3;
      func_0x0001004b535c(&ppuStack_f0);
      func_0x000105973878(&ppuStack_f0,&puStack_1b0);
      func_0x0001006221d4(&uStack_230,&ppuStack_f0);
      FUN_100558bb4(&ppuStack_f0);
      FUN_1005544a0(&puStack_1b0);
      lVar13 = *param_7;
    }
    unaff_x28 = &ppuStack_120;
    ppuStack_240 = (undefined **)0x0;
    ppuStack_238 = (undefined **)0x0;
    puVar15 = (undefined *)*param_8;
    if ((puVar15 != (undefined *)0x0) && (lVar13 != 0)) {
      puVar16 = (undefined *)param_8[1];
      ppuVar11 = (undefined **)0x40;
      func_0x000107c60e20();
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *ppuVar11 = (undefined *)&PTR_DAT_1108c3eb0;
      if (puVar16 != (undefined *)0x0) {
        do {
          FUN_100903f34();
        } while (extraout_w10_05 != 0);
      }
      if (param_7[1] != 0) {
        do {
          func_0x0001059740cc();
        } while (extraout_w11_01 != 0);
      }
      ppuVar11[3] = (undefined *)&PTR_DAT_1108c38c0;
      ppuVar11[4] = puVar15;
      ppuVar11[5] = puVar16;
      func_0x0001059740e4();
      FUN_100903fbc(&ppuStack_f0);
      ppuStack_e8 = ppuStack_238;
      ppuStack_f0 = ppuStack_240;
      ppuStack_240 = ppuVar11 + 3;
      ppuStack_238 = ppuVar11;
      FUN_100903fbc();
    }
    puVar8 = (undefined8 *)0x108;
    func_0x000107c60e20();
    plVar10 = puVar8 + 1;
    *plVar10 = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_DAT_1108c3f00;
    puStack_1a8 = puStack_1e8;
    puStack_1b0 = puStack_1f0;
    puStack_1f0 = (undefined8 *)0x0;
    puStack_1e8 = (undefined8 *)0x0;
    puStack_158 = (undefined8 *)param_2[1];
    puStack_160 = (undefined8 *)*param_2;
    *param_2 = 0;
    param_2[1] = 0;
    func_0x00010597365c(&ppuStack_f0,param_4);
    puVar17 = puVar8 + 3;
    uStack_178 = uStack_228;
    uStack_180 = uStack_230;
    ppuStack_168 = ppuStack_218;
    ppuStack_170 = ppuStack_220;
    ppuStack_220 = (undefined **)0x0;
    ppuStack_218 = (undefined **)0x0;
    uStack_230 = 0;
    uStack_228 = 0;
    ppuStack_188 = ppuStack_238;
    ppuStack_190 = ppuStack_240;
    ppuStack_240 = (undefined **)0x0;
    ppuStack_238 = (undefined **)0x0;
    func_0x00010597417c(puVar17,&puStack_1b0,&puStack_160,&ppuStack_f0,&ppuStack_170,&uStack_180,
                        &ppuStack_190,uVar6 & 0xffffffff,uVar5);
    FUN_100903fbc(&ppuStack_190);
    FUN_100558bb4(&uStack_180);
    FUN_1009048c0(&ppuStack_170);
    func_0x000105974174();
    FUN_100902b24(&puStack_160);
    func_0x000105974154();
    if ((puVar8[5] == 0) || (in_ZR = *(long *)(puVar8[5] + 8) == -1, (bool)in_ZR)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        puStack_250 = puVar17;
        puStack_248 = puVar8;
        puStack_1b0 = puVar17;
        puStack_1a8 = puVar8;
      } while (cVar2 != '\0');
      do {
        func_0x0001059740cc();
      } while (extraout_w11_02 != 0);
      ppuStack_f0 = (undefined **)puVar8[4];
      puVar8[4] = puVar17;
      puVar8[5] = puVar8;
      ppuStack_e8 = extraout_x8_00;
      func_0x000105974048(&ppuStack_f0);
      func_0x00010597406c(&puStack_1b0);
    }
    *param_1 = (long)puVar17;
    param_1[1] = (long)puVar8;
    puStack_250 = (undefined8 *)0x0;
    puStack_248 = (undefined8 *)0x0;
    func_0x00010597406c(&puStack_250);
    FUN_100903fbc(&ppuStack_240);
    FUN_100558bb4(&uStack_230);
    FUN_1009048c0(&ppuStack_220);
    func_0x000105972624(&puStack_1f0);
    (*(code *)*appuStack_118[0])(appuStack_118);
    func_0x000105972600(&ppuStack_1e0);
    func_0x000105973e38(&puStack_1d0);
    func_0x000105973de8(&puStack_1c0);
  }
  func_0x000100903fa8(uStack_70);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    FUN_1005544a0(&puStack_1b0);
    FUN_100558bb4(&uStack_230);
    FUN_1009048c0(&ppuStack_220);
    func_0x000105972624(&puStack_1f0);
    (*(code *)*appuStack_118[0])(unaff_x28 + 1);
    func_0x000105972600(&ppuStack_1e0);
    func_0x000105973e38(&puStack_1d0);
    func_0x000105973de8(&puStack_1c0);
    func_0x0001059740dc();
    bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_01,0x10);
    if (bVar3) {
      *extraout_x8_01 = *extraout_x8_01 + 1;
      ExclusiveMonitorsStatus();
    }
    return;
  }
  return;
}



/* Entry: 100903f34; end: 100903f43;  */

void FUN_100903f34(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100903f44; end: 100903f6f;  */

long FUN_100903f44(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c60d68();
  }
  return param_1;
}



/* Entry: 100903f70; end: 100903f7b;  */

undefined8 FUN_100903f70(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100903f7c; end: 100903f9f;  */

void FUN_100903f7c(long param_1)

{
  FUN_100903f70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100903fa0; end: 100903fbb;  */

void FUN_100903fa0(void)

{
  return;
}



/* Entry: 100903fbc; end: 100903fe3;  */

long FUN_100903fbc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100903fe4; end: 100903feb;  */

void FUN_100903fe4(void)

{
  return;
}



/* Entry: 100903fec; end: 10090400b;  */

void FUN_100903fec(void)

{
  func_0x00010090174c();
  FUN_10090400c();
  FUN_1009017a8();
  return;
}



/* Entry: 10090400c; end: 10090403b;  */

void FUN_10090400c(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  if (param_2 < (undefined8 *)0x11a7b9611a7b962) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0xe8);
    return;
  }
  func_0x000104bd35f4();
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_2[6] = 0;
  param_2[7] = 0;
  uVar1 = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
  *(undefined2 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 10090403c; end: 10090407f;  */

void FUN_10090403c(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_2[6] = 0;
  param_2[7] = 0;
  uVar1 = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
  *(undefined2 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 100904080; end: 100904117;  */

undefined8 *
FUN_100904080(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_1108c35b0;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  param_1[6] = param_4[1];
  param_1[5] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  uVar1 = *param_5;
  param_1[8] = param_5[1];
  param_1[7] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  uVar1 = *param_6;
  param_1[10] = param_6[1];
  param_1[9] = uVar1;
  *param_6 = 0;
  param_6[1] = 0;
  uVar1 = *param_7;
  param_1[0xc] = param_7[1];
  param_1[0xb] = uVar1;
  *param_7 = 0;
  param_7[1] = 0;
  uVar1 = *param_8;
  param_1[0xe] = param_8[1];
  param_1[0xd] = uVar1;
  *param_8 = 0;
  param_8[1] = 0;
  uVar1 = *param_9;
  param_1[0x10] = param_9[1];
  param_1[0xf] = uVar1;
  *param_9 = 0;
  param_9[1] = 0;
  FUN_10090403c(param_1 + 0x11,param_10);
  return param_1;
}



/* Entry: 100904118; end: 10090411f;  */

void FUN_100904118(void)

{
  return;
}



/* Entry: 100904120; end: 10090419f;  */

/* WARNING: Possible PIC construction at 0x000100904134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100904138) */

long FUN_100904120(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  func_0x00010090269c();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1009041a0; end: 1009041af;  */

void FUN_1009041a0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1009041b0; end: 1009041db;  */

void FUN_1009041b0(undefined8 param_1)

{
  func_0x000100902384(param_1,3);
  func_0x000100902588();
  func_0x000100902688();
  return;
}



/* Entry: 1009041dc; end: 100904203;  */

void FUN_1009041dc(void)

{
  return;
}



/* Entry: 100904204; end: 100904467;  */

long FUN_100904204(long param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  byte bStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  func_0x0001009041f0(&PTR_DAT_1108c4228);
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x30) = param_2[1];
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *param_2 = 0;
  param_2[1] = 0;
  lVar4 = *param_3;
  *(long *)(param_1 + 0x40) = param_3[1];
  *(long *)(param_1 + 0x38) = lVar4;
  *param_3 = 0;
  param_3[1] = 0;
  uVar3 = *param_4;
  *(undefined8 *)(param_1 + 0x50) = param_4[1];
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *param_4 = 0;
  param_4[1] = 0;
  uVar3 = *param_5;
  *(undefined8 *)(param_1 + 0x60) = param_5[1];
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *param_5 = 0;
  param_5[1] = 0;
  uVar3 = *param_6;
  *(undefined8 *)(param_1 + 0x70) = param_6[1];
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  *param_6 = 0;
  param_6[1] = 0;
  uVar3 = *param_7;
  *(undefined8 *)(param_1 + 0x80) = param_7[1];
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *param_7 = 0;
  param_7[1] = 0;
  uVar3 = *param_8;
  *(undefined8 *)(param_1 + 0x90) = param_8[1];
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *param_8 = 0;
  param_8[1] = 0;
  *(undefined4 *)(param_1 + 0x98) = 1;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  auStack_b0[0] = 0;
  bStack_98 = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
    puVar2 = &UNK_10f315e81;
LAB_100904348:
    FUN_10002b838(auStack_b0,puVar2);
    bStack_98 = 1;
  }
  else {
    FUN_100904468(&puStack_90,(undefined8 *)(param_1 + 0x48));
    func_0x0001009044a8(&puStack_90);
    if (puStack_90 == (undefined *)0x0) {
      if (bStack_98 == 0) {
        puVar2 = &UNK_10f315e97;
        goto LAB_100904348;
      }
      func_0x000107c60c64(auStack_b0,&UNK_10f315e97);
    }
    if ((bStack_98 & 1) == 0) {
      FUN_1001148fc(auStack_b0);
      return param_1;
    }
  }
  puStack_90 = &UNK_10f315eee;
  uStack_88 = 0;
  uStack_80 = 0x3a;
  uStack_78 = 0;
  func_0x000105976824();
  FUN_1003a9204(auStack_e0);
  func_0x000105976690(&puStack_90,&PTR_DAT_1108c42b8,auStack_b0,auStack_e0);
  puVar2 = &UNK_10f315eb5;
  FUN_1003a91d4(&UNK_10f315eb5);
  FUN_1003a9204(auStack_c8);
  func_0x000105976838();
  func_0x000105976840();
  func_0x0001052768d8();
  func_0x000107c60e54(puVar2,PTR___ZTISt16invalid_argument_110352248,
                      PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009043e4);
  (*pcVar1)();
}



/* Entry: 100904468; end: 10090455b;  */

void FUN_100904468(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10090455c; end: 100904677;  */

void FUN_10090455c(long param_1)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  undefined8 auStack_58 [2];
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if ((lVar2 != 0) && ((*(byte *)(param_1 + 0x9c) & 1) == 0)) {
    FUN_10002b838(&lStack_38,&UNK_10f315f45);
    FUN_100927ad8(auStack_58,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    FUN_100927bac(auStack_58[0]);
    (**(code **)(extraout_x8 + 0x18))(lVar2,&lStack_38,&lStack_48,param_1 + 0x38);
    FUN_10057201c(&lStack_48);
    FUN_100927c70();
    func_0x000107c60ca0(&lStack_38);
    plVar1 = *(long **)(param_1 + 0x28);
    FUN_100927ad8(&lStack_48,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    lStack_38 = 0;
    if (lStack_48 != 0) {
      lStack_38 = lStack_48 + 0x10;
    }
    uStack_30 = uStack_40;
    lStack_48 = 0;
    uStack_40 = 0;
    (**(code **)(*plVar1 + 0x28))(plVar1,&lStack_38,param_1 + 0x38);
    func_0x000100572210(&lStack_38);
    func_0x000100904538(&lStack_48);
    *(undefined1 *)(param_1 + 0x9c) = 1;
  }
  return;
}



/* Entry: 100904678; end: 10090469b;  */

void FUN_100904678(long param_1)

{
  func_0x000100902b7c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10090469c; end: 1009046e3;  */

void FUN_10090469c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108c27e8;
  uVar1 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar1 = *param_5;
  param_1[0xb] = param_5[1];
  param_1[10] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  return;
}



/* Entry: 1009046e4; end: 10090482b;  */

void FUN_1009046e4(long param_1)

{
  FUN_10048d444();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10090482c; end: 10090483f;  */

void FUN_10090482c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100904834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 100904840; end: 100904863;  */

void FUN_100904840(long param_1)

{
  func_0x000100902b7c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100904864; end: 100904877;  */

void FUN_100904864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100904870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 100904878; end: 1009048a7;  */

undefined8 * FUN_100904878(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108c4120;
  FUN_1000df75c(param_1 + 1);
  return param_1;
}


