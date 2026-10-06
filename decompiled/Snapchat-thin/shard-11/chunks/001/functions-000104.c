/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10819b8c0; end: 10819b8ef;  */

void FUN_10819b8c0(void)

{
  return;
}



/* Entry: 10819b8f0; end: 10819b917;  */

undefined8 * FUN_10819b8f0(undefined8 *param_1)

{
  FUN_1083a3c7c(param_1 + 99);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 10819b918; end: 10819b933;  */

void FUN_10819b918(undefined8 *param_1)

{
  undefined1 *puVar1;
  int unaff_w21;
  undefined8 uStack_28;
  
  _strcmp();
  if (unaff_w21 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  uStack_28 = 0;
  _strlen();
  puVar1 = &stack0xffffffffffffffc8;
  FUN_10818fe68(puVar1,&uStack_28);
  if ((int)puVar1 != 0) {
    FUN_10819195c(param_1,&uStack_28);
  }
  return;
}



/* Entry: 10819b934; end: 10819b96b;  */

void FUN_10819b934(undefined8 *param_1)

{
  func_0x0001081a1554(param_1,0x1d);
  *param_1 = &PTR_FUN_110a2dfb0;
  param_1[0x5e] = 0x100000000;
  param_1[0x5f] = 0x100000000;
  param_1[0x60] = 0x100000000;
  param_1[0x61] = 0x100000000;
  return;
}



/* Entry: 10819b96c; end: 10819ba4b;  */

undefined8 FUN_10819b96c(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  char cStack_58;
  undefined8 uStack_54;
  byte bStack_4c;
  undefined8 uStack_48;
  byte bStack_40;
  undefined8 uStack_3c;
  byte bStack_34;
  
  puVar3 = &uStack_60;
  uVar1 = param_1;
  FUN_10819c580();
  if ((uVar1 & 1) == 0) {
    func_0x00010819bbd8(&uStack_3c,"x1");
    if ((bStack_34 & 1) == 0) {
      func_0x00010819bbd8(&uStack_48,"y1");
      if ((bStack_40 & 1) == 0) {
        func_0x00010819bbd8(&uStack_54,"x2");
        if ((bStack_4c & 1) == 0) {
          func_0x00010819bbd8(&uStack_60,"y2");
          if (cStack_58 != '\x01') {
            return 0;
          }
          lVar2 = 0x308;
        }
        else {
          lVar2 = 0x300;
          puVar3 = &uStack_54;
        }
      }
      else {
        lVar2 = 0x2f8;
        puVar3 = &uStack_48;
      }
    }
    else {
      lVar2 = 0x2f0;
      puVar3 = &uStack_3c;
    }
    *(undefined8 *)(param_1 + lVar2) = *puVar3;
  }
  return 1;
}



/* Entry: 10819ba4c; end: 10819bab7;  */

undefined8 FUN_10819ba4c(undefined8 param_1,long param_2)

{
  func_0x00010819bbe4(param_2,param_2 + 0x2f0);
  func_0x00010819bbf0();
  func_0x00010819bbe4();
  func_0x00010819bbf0();
  return param_1;
}



/* Entry: 10819bab8; end: 10819bae7;  */

void FUN_10819bab8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  
  FUN_10819ba4c(param_1,param_3);
  func_0x000108342210();
  (**(code **)(*param_2 + 0x108))();
  func_0x000108341fa0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10833eafc();
  return;
}



/* Entry: 10819bae8; end: 10819bb37;  */

void FUN_10819bae8(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10819ba4c(param_2,*(undefined8 *)(param_3 + 0x20));
  FUN_10819bb38(param_1);
  func_0x0001081a43c8(param_2,param_1);
  return;
}



/* Entry: 10819bb38; end: 10819bba3;  */

undefined4 **
FUN_10819bb38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 **ppuVar1;
  undefined4 *puStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_38 = &uStack_28;
  uStack_30 = 2;
  ppuVar1 = &puStack_38;
  uStack_28 = param_1;
  uStack_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  FUN_10819bbbc(ppuVar1,0,0,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  *ppuVar1 = (undefined4 *)&PTR_DAT_110a2e170;
  FUN_10818e868(ppuVar1 + 2);
  return ppuVar1;
}



/* Entry: 10819bba4; end: 10819bba7;  */

undefined8 * FUN_10819bba4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 10819bba8; end: 10819bbbb;  */

void FUN_10819bba8(void)

{
  FUN_10819c344();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10819bbbc; end: 10819bbfb;  */

long * FUN_10819bbbc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  long *plVar4;
  float *pfVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 extraout_x8;
  long lVar10;
  long *plVar11;
  int iVar12;
  float fVar13;
  undefined4 uStack_144;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long alStack_d0 [12];
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined8 uStack_48;
  
  plVar11 = (long *)*param_2;
  plVar7 = (long *)(ulong)*(uint *)(param_2 + 1);
  plVar3 = alStack_d0;
  func_0x00010837caf0();
  func_0x00010837cda8();
  plVar8 = plVar11;
  plVar9 = plVar7;
  FUN_10837d968(alStack_d0,plVar11,plVar7,param_3);
  uStack_70 = (undefined4)param_4;
  uStack_6c = (undefined1)param_5;
  func_0x00010837cbd4();
  func_0x00010837cb8c();
  func_0x00010837cab0(uStack_48);
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x00010837cb3c();
  func_0x00010837cb78();
  pcStack_d8 = FUN_10837be7c;
  plVar4 = plVar3;
  plStack_110 = plVar11;
  plStack_108 = plVar7;
  uStack_100 = param_3;
  uStack_f8 = param_4;
  uStack_f0 = param_5;
  uStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010837caf0();
  uStack_144 = 0;
  lStack_138 = 0;
  lStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plVar7 = (long *)&uStack_144;
  plVar11 = (long *)0x1;
  uStack_118 = extraout_x8;
  FUN_10837742c();
  if ((int)plVar4 != 0) {
    plVar7 = (long *)&uStack_144;
    plVar11 = (long *)0x0;
    FUN_10837742c();
    plVar4 = plVar3;
    if ((int)plVar3 != 0) {
      iVar2 = (int)&lStack_140;
      plVar11 = &lStack_130;
      FUN_108281a6c();
      if (iVar2 == 0) {
        plVar4 = &lStack_130;
        plVar11 = &lStack_140;
        FUN_108281a6c();
        if ((int)plVar4 == 0) goto LAB_10837bf68;
        uVar1 = uStack_120;
        uStack_120 = uStack_11c;
        if (plVar8 != (long *)0x0) {
          plVar8[1] = lStack_128;
          *plVar8 = lStack_130;
          plVar8[3] = lStack_138;
          plVar8[2] = lStack_140;
        }
      }
      else {
        uVar1 = uStack_11c;
        if (plVar8 != (long *)0x0) {
          plVar8[1] = lStack_138;
          *plVar8 = lStack_140;
          plVar8[3] = lStack_128;
          plVar8[2] = lStack_130;
        }
      }
      if (plVar9 != (long *)0x0) {
        *(undefined4 *)plVar9 = uStack_120;
        *(undefined4 *)((long)plVar9 + 4) = uVar1;
      }
      plVar4 = (long *)0x1;
    }
  }
LAB_10837bf68:
  func_0x00010837cab0(uStack_118);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010837ccd0();
    *plVar4 = (long)plVar11;
    lVar10 = *plVar7;
    plVar4[2] = plVar7[1];
    plVar4[1] = lVar10;
    FUN_1082d8070(plVar4 + 1);
    lVar10 = *plVar8;
    if (*(char *)(lVar10 + 0xc1) == '\0') {
      plVar3 = plVar8;
      func_0x000108377398();
      iVar2 = (int)plVar3;
      lVar10 = *plVar8;
    }
    else {
      iVar2 = 0;
    }
    *(char *)(plVar9 + 3) = (char)iVar2;
    iVar12 = *(int *)(lVar10 + 0x48);
    *(bool *)((long)plVar9 + 0x1a) = iVar12 == 0;
    if ((iVar2 != 0) && (iVar12 != 0)) {
      pfVar5 = (float *)*plVar9;
      func_0x0001083773e0();
      fVar13 = *pfVar5;
      if (*(float *)(plVar9 + 1) <= *pfVar5) {
        fVar13 = *(float *)(plVar9 + 1);
      }
      *(float *)(plVar9 + 1) = fVar13;
      fVar13 = pfVar5[1];
      if (*(float *)((long)plVar9 + 0xc) <= pfVar5[1]) {
        fVar13 = *(float *)((long)plVar9 + 0xc);
      }
      *(float *)((long)plVar9 + 0xc) = fVar13;
      fVar13 = pfVar5[2];
      if (pfVar5[2] <= *(float *)(plVar9 + 2)) {
        fVar13 = *(float *)(plVar9 + 2);
      }
      *(float *)(plVar9 + 2) = fVar13;
      fVar13 = pfVar5[3];
      if (pfVar5[3] <= *(float *)((long)plVar9 + 0x14)) {
        fVar13 = *(float *)((long)plVar9 + 0x14);
      }
      *(float *)((long)plVar9 + 0x14) = fVar13;
      lVar10 = *plVar8;
      iVar12 = *(int *)(lVar10 + 0x48);
    }
    uVar6 = *(undefined8 *)(lVar10 + 0x40);
    FUN_10837a418(uVar6,iVar12);
    *(bool *)((long)plVar9 + 0x19) = iVar12 == (int)uVar6;
    return plVar9;
  }
  return plVar4;
}



/* Entry: 10819bbfc; end: 10819bc8b;  */

void FUN_10819bbfc(undefined8 *param_1)

{
  func_0x00010819bc3c(param_1,0x1e);
  *param_1 = &PTR_FUN_110a2e048;
  param_1[0x69] = 0x200000000;
  param_1[0x6a] = 0x200000000;
  param_1[0x6b] = 0x242c80000;
  param_1[0x6c] = 0x200000000;
  return;
}



/* Entry: 10819bc8c; end: 10819bcb7;  */

undefined8 * FUN_10819bc8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010819bf18();
  FUN_1083a3c7c(puVar1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 10819bcb8; end: 10819bd97;  */

undefined8 FUN_10819bcb8(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  char cStack_58;
  undefined8 uStack_54;
  byte bStack_4c;
  undefined8 uStack_48;
  byte bStack_40;
  undefined8 uStack_3c;
  byte bStack_34;
  
  puVar3 = &uStack_60;
  uVar1 = param_1;
  FUN_10819ab3c();
  if ((uVar1 & 1) == 0) {
    FUN_10819bf0c(&uStack_3c,"x1");
    if ((bStack_34 & 1) == 0) {
      FUN_10819bf0c(&uStack_48,"y1");
      if ((bStack_40 & 1) == 0) {
        FUN_10819bf0c(&uStack_54,"x2");
        if ((bStack_4c & 1) == 0) {
          FUN_10819bf0c(&uStack_60,"y2");
          if (cStack_58 != '\x01') {
            return 0;
          }
          lVar2 = 0x360;
        }
        else {
          lVar2 = 0x358;
          puVar3 = &uStack_54;
        }
      }
      else {
        lVar2 = 0x350;
        puVar3 = &uStack_48;
      }
    }
    else {
      lVar2 = 0x348;
      puVar3 = &uStack_3c;
    }
    *(undefined8 *)(param_1 + lVar2) = *puVar3;
  }
  return 1;
}



/* Entry: 10819bd98; end: 10819bef3;  */

undefined8 *
FUN_10819bd98(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  
  puVar2 = &uStack_a0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_3 + 0x344) == 1) {
    param_2 = NEON_fmov(0x3f800000,4);
    uStack_90 = 0x42b40000;
    uStack_98 = param_2;
  }
  else {
    uStack_98 = **(undefined8 **)(param_4 + 0x20);
    uStack_90 = *(undefined4 *)(*(undefined8 **)(param_4 + 0x20) + 1);
  }
  uVar3 = (undefined4)param_2;
  func_0x00010819f85c(&uStack_98,param_3 + 0x348,0);
  uVar4 = uVar3;
  func_0x00010819f85c(&uStack_98,param_3 + 0x350,1);
  uVar5 = uVar4;
  func_0x00010819f85c(&uStack_98,param_3 + 0x358,0);
  uVar6 = uVar5;
  func_0x00010819f85c(&uStack_98,param_3 + 0x360,1);
  uStack_a0 = 0;
  uStack_88 = uVar3;
  uStack_84 = uVar4;
  uStack_80 = uVar5;
  uStack_7c = uVar6;
  FUN_1081891d8(param_1,&uStack_88,param_5,&uStack_a0,param_6,param_7,param_8,0,param_9);
  FUN_10810a400();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar2;
  }
  ___stack_chk_fail();
  FUN_10810a400(&uStack_a0);
  __Unwind_Resume();
  puVar1 = puVar2;
  func_0x00010819bf18();
  FUN_1083a3c7c(puVar1 + 0x62);
  *puVar2 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(puVar2 + 0x5f);
  *puVar2 = &PTR_DAT_110a2e170;
  FUN_10818e868(puVar2 + 2);
  return puVar2;
}



/* Entry: 10819bef4; end: 10819bef7;  */

undefined8 * FUN_10819bef4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010819bf18();
  FUN_1083a3c7c(puVar1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 10819bef8; end: 10819bf0b;  */

void FUN_10819bef8(void)

{
  FUN_10819bc8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10819bf0c; end: 10819bf2b;  */

void FUN_10819bf0c(undefined8 *param_1)

{
  undefined1 *puVar1;
  int unaff_w21;
  undefined8 uStack_28;
  
  _strcmp();
  if (unaff_w21 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  uStack_28 = 0;
  _strlen();
  puVar1 = &stack0xffffffffffffffc8;
  FUN_10818fe68(puVar1,&uStack_28);
  if ((int)puVar1 != 0) {
    FUN_10819195c(param_1,&uStack_28);
  }
  return;
}



/* Entry: 10819bf2c; end: 10819c05f;  */

undefined8 FUN_10819bf2c(ulong param_1)

{
  ulong uVar1;
  undefined4 uStack_80;
  char cStack_7c;
  undefined4 uStack_78;
  char cStack_74;
  undefined8 uStack_70;
  char cStack_68;
  undefined8 uStack_60;
  char cStack_58;
  undefined8 uStack_50;
  char cStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  uVar1 = param_1;
  FUN_10819c580();
  if ((uVar1 & 1) == 0) {
    FUN_10819c254(&uStack_40,&DAT_10f62b0e2);
    if (cStack_38 == '\x01') {
      *(undefined8 *)(param_1 + 0x308) = uStack_40;
    }
    else {
      FUN_10819c254(&uStack_50,"y");
      if (cStack_48 == '\x01') {
        *(undefined8 *)(param_1 + 0x310) = uStack_50;
      }
      else {
        FUN_10819c254(&uStack_60,"width");
        if (cStack_58 == '\x01') {
          *(undefined8 *)(param_1 + 0x318) = uStack_60;
        }
        else {
          FUN_10819c254(&uStack_70,"height");
          if (cStack_68 == '\x01') {
            *(undefined8 *)(param_1 + 800) = uStack_70;
          }
          else {
            func_0x00010819c260(&uStack_78,&UNK_10f47e011);
            if (cStack_74 == '\x01') {
              *(undefined4 *)(param_1 + 0x328) = uStack_78;
            }
            else {
              func_0x00010819c260(&uStack_80,"maskContentUnits");
              if (cStack_7c != '\x01') {
                return 0;
              }
              *(undefined4 *)(param_1 + 0x32c) = uStack_80;
            }
          }
        }
      }
    }
  }
  return 1;
}



/* Entry: 10819c060; end: 10819c07f;  */

void FUN_10819c060(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 auStack_78 [3];
  
  iVar1 = *(int *)(param_1 + 0x328);
  FUN_1081a1130(auStack_78,param_2 + 0x20);
  if (iVar1 == 1) {
    puVar2 = auStack_78;
    FUN_1081a0dac();
    uVar3 = NEON_fmov(0x3f800000,4);
    *puVar2 = uVar3;
    *(undefined4 *)(puVar2 + 1) = 0x42b40000;
  }
  FUN_10819f95c(auStack_78[0],param_1 + 0x308,param_1 + 0x310,param_1 + 0x318,param_1 + 800);
  func_0x0001081a0c84(param_2,iVar1);
  return;
}



/* Entry: 10819c080; end: 10819c23b;  */

void FUN_10819c080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_3f8;
  undefined1 auStack_3f0 [8];
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined8 uStack_3ac;
  undefined8 uStack_3a4;
  undefined8 uStack_39c;
  undefined8 uStack_390;
  undefined1 auStack_388 [56];
  long lStack_350;
  undefined8 uStack_80;
  
  FUN_10819fa68(auStack_388);
  FUN_1081a4354(param_5,auStack_388);
  if (*(int *)(lStack_350 + 0x13c) == 2) {
    FUN_1083ada84(&uStack_390);
  }
  else {
    uStack_390 = 0;
  }
  uStack_3ac = 0;
  uStack_3b0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3b4 = 0;
  uStack_3c0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3a4 = 0x3f800000;
  uStack_39c = 0x40800000;
  FUN_1083ae71c(auStack_3f0);
  uStack_3f8 = uStack_390;
  uStack_390 = 0;
  FUN_10811e68c(&uStack_3e8,auStack_3f0,&uStack_3f8);
  uVar2 = uStack_3c8;
  uStack_3c8 = uStack_3e8;
  uStack_3e8 = 0;
  func_0x000108164964(uVar2);
  FUN_108115b2c(&uStack_3e8);
  FUN_108115b2c(&uStack_3f8);
  FUN_108115b2c(auStack_3f0);
  FUN_10833c3b4(uStack_80,0,&uStack_3e0);
  func_0x0001081a0c84(param_6,*(undefined4 *)(param_5 + 0x32c));
  FUN_10833e1e4(uStack_80);
  func_0x00010833e24c(param_3,param_4,uStack_80);
  puVar1 = *(undefined8 **)(param_5 + 0x2f8);
  for (lVar3 = (long)*(int *)(param_5 + 0x300) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
    FUN_10819c370(*puVar1,auStack_388);
    puVar1 = puVar1 + 1;
  }
  FUN_108375e94(&uStack_3e0);
  FUN_108115b2c(&uStack_390);
  FUN_10819fae8(auStack_388);
  return;
}



/* Entry: 10819c23c; end: 10819c23f;  */

undefined8 * FUN_10819c23c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 10819c240; end: 10819c253;  */

void FUN_10819c240(void)

{
  FUN_108191b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10819c254; end: 10819c26b;  */

void FUN_10819c254(undefined8 *param_1)

{
  undefined1 *puVar1;
  int unaff_w21;
  undefined8 uStack_28;
  
  _strcmp();
  if (unaff_w21 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  uStack_28 = 0;
  _strlen();
  puVar1 = &stack0xffffffffffffffc8;
  FUN_10818fe68(puVar1,&uStack_28);
  if ((int)puVar1 != 0) {
    FUN_10819195c(param_1,&uStack_28);
  }
  return;
}



/* Entry: 10819c26c; end: 10819c343;  */

undefined8 * FUN_10819c26c(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_DAT_110a2e170;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  func_0x00010818e530(param_1 + 2);
  func_0x00010819e550(param_1 + 0x49);
  func_0x00010819e4d0();
  param_1[0x4d] = 0x3f80000000000002;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  func_0x00010819e550(param_1 + 0x4f);
  func_0x00010819e4d0();
  param_1[0x53] = 0x3f80000000000002;
  *(undefined1 *)(param_1 + 0x54) = 1;
  func_0x00010819e550(param_1 + 0x55);
  func_0x00010819e4d0();
  return param_1;
}



/* Entry: 10819c344; end: 10819c36f;  */

undefined8 * FUN_10819c344(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 10819c370; end: 10819c3d7;  */

void FUN_10819c370(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 auStack_368 [840];
  
  func_0x00010819faa8(auStack_368,param_2,param_1);
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))(param_1,auStack_368);
  if ((int)plVar1 != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,auStack_368);
  }
  func_0x00010819e488();
  return;
}



/* Entry: 10819c3d8; end: 10819c457;  */

long * FUN_10819c3d8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_378 [840];
  
  iVar1 = (int)auStack_378;
  FUN_10819fa68();
  func_0x00010819e570(*(undefined8 *)(*param_1 + 0x28));
  if (iVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    (**(code **)(*param_1 + 0x38))(param_1,auStack_378,param_3);
  }
  func_0x00010819e488();
  return param_1;
}



/* Entry: 10819c458; end: 10819c503;  */

void FUN_10819c458(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 auStack_378 [792];
  undefined1 auStack_60 [48];
  
  uVar1 = 0;
  FUN_10819fa68();
  func_0x00010819e570(*(undefined8 *)(*param_2 + 0x28));
  if ((uVar1 & 1) == 0) {
    FUN_108376ad8(param_1);
  }
  else {
    (**(code **)(*param_2 + 0x40))(param_1,param_2,auStack_378);
    puVar2 = auStack_60;
    func_0x00010819dbd4();
    if (puVar2 != (undefined1 *)0x0) {
      FUN_1081f0148(param_1,puVar2,1,param_1);
    }
  }
  func_0x00010819e488();
  return;
}



/* Entry: 10819c504; end: 10819c57f;  */

bool FUN_10819c504(long *param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  int *piVar3;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x50))();
  FUN_10819fb68(param_2,param_1 + 2,(uint)plVar2 ^ 1);
  piVar3 = (int *)(*(long *)(param_2 + 0x38) + 0x124);
  FUN_10819df08();
  if (*piVar3 == 1) {
    bVar1 = false;
  }
  else {
    bVar1 = (int)param_1[0x3d] != 2 || *(int *)((long)param_1 + 0x1ec) != 1;
  }
  return bVar1;
}



/* Entry: 10819c580; end: 10819d473;  */

undefined8 FUN_10819c580(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  int *piVar4;
  long *plVar5;
  uint *puVar6;
  undefined4 *puVar7;
  ulong *puVar8;
  int *piVar9;
  undefined1 uVar10;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined4 extraout_w8_02;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined4 extraout_w9;
  undefined4 extraout_w9_00;
  undefined4 extraout_w9_01;
  undefined4 extraout_w9_02;
  undefined4 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  int iStack_390;
  undefined4 uStack_38c;
  undefined8 uStack_388;
  char cStack_380;
  int iStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  char cStack_370;
  int iStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  char cStack_360;
  undefined2 uStack_35c;
  undefined1 uStack_35a;
  undefined2 uStack_358;
  undefined1 uStack_356;
  int iStack_354;
  undefined4 uStack_350;
  undefined8 uStack_34c;
  char cStack_344;
  uint uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  byte bStack_330;
  byte bStack_318;
  byte bStack_310;
  long lStack_300;
  long lStack_2f8;
  byte bStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  char cStack_2b4;
  undefined1 auStack_2b0 [32];
  byte bStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  char cStack_27c;
  undefined1 auStack_278 [40];
  byte bStack_250;
  undefined1 auStack_248 [32];
  byte bStack_228;
  undefined2 uStack_21c;
  undefined1 uStack_21a;
  undefined2 uStack_218;
  undefined1 uStack_216;
  undefined2 uStack_214;
  undefined1 uStack_212;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  char cStack_1dc;
  undefined1 auStack_1d8 [32];
  byte bStack_1b8;
  undefined1 auStack_1b0 [40];
  byte bStack_188;
  int iStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  char cStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  char cStack_164;
  long lStack_160;
  long lStack_158;
  byte bStack_128;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  char cStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  char cStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  char cStack_f4;
  undefined1 auStack_f0 [40];
  byte bStack_c8;
  ulong auStack_c0 [4];
  byte bStack_a0;
  undefined4 auStack_98 [2];
  ulong auStack_90 [4];
  undefined1 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined7 uStack_58;
  undefined4 uStack_51;
  long lStack_48;
  
  piVar9 = &iStack_390;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010819e46c(auStack_f0,"clip-path");
  FUN_10819d474();
  if (bStack_c8 == 1) {
    FUN_10819dc04(param_1 + 0x1c0,auStack_f0);
    if ((bStack_c8 & 1) != 0) goto LAB_10819c8a4;
  }
  piVar4 = &iStack_100;
  func_0x00010819e46c(piVar4,"clip-rule");
  FUN_10819d5a0();
  if (cStack_f4 == '\x01') {
    if (iStack_100 == 2) {
      *(ulong *)(param_1 + 0x60) = CONCAT44(uStack_fc,2);
      *(undefined4 *)(param_1 + 0x68) = uStack_f8;
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 1;
      if (*(char *)(param_1 + 0x68) == '\x01') {
        *(undefined1 *)(param_1 + 0x68) = 0;
      }
    }
    goto LAB_10819c8a4;
  }
  func_0x00010819e478();
  if ((int)piVar4 == 0) {
    func_0x00010819e3f8();
    if ((int)piVar4 == 0) {
      *(undefined4 *)(param_1 + 0x134) = 1;
      if (*(char *)(param_1 + 0x13c) == '\x01') {
        *(undefined1 *)(param_1 + 0x13c) = 0;
      }
      goto LAB_10819c8a4;
    }
    lStack_160 = param_3;
    func_0x00010819e43c();
    lStack_158 = param_3 + (long)piVar4;
    plVar5 = &lStack_160;
    func_0x00010818f83c(plVar5,&lStack_300);
    if (((ulong)plVar5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x134) = 2;
      *(uint *)(param_1 + 0x138) = (uint)lStack_300;
      *(undefined1 *)(param_1 + 0x13c) = 1;
      goto LAB_10819c8a4;
    }
  }
  func_0x00010819e46c(&iStack_110,&UNK_10f47e01b);
  FUN_10819d62c();
  if (cStack_104 == '\x01') {
    if (iStack_110 != 2) {
      *(undefined4 *)(param_1 + 0x140) = 1;
      if (*(char *)(param_1 + 0x148) == '\x01') {
        *(undefined1 *)(param_1 + 0x148) = 0;
      }
      goto LAB_10819c8a4;
    }
    puVar12 = (undefined8 *)(param_1 + 0x140);
    *puVar12 = CONCAT44(uStack_10c,2);
  }
  else {
    piVar4 = &iStack_120;
    func_0x00010819e46c(piVar4,&UNK_10f47e02f);
    FUN_10819d62c();
    if (cStack_114 != '\x01') {
      func_0x00010819e478();
      if ((int)piVar4 == 0) {
        func_0x00010819e3f8();
        if ((int)piVar4 == 0) {
          uVar10 = 0;
          uVar13 = 0;
          uVar14 = 1;
        }
        else {
          lStack_160 = param_3;
          func_0x00010819e43c();
          lStack_158 = param_3 + (long)piVar4;
          plVar5 = &lStack_160;
          FUN_108190f38(plVar5,&lStack_300);
          if ((int)plVar5 == 0) goto LAB_10819c748;
          uVar10 = 1;
          uVar14 = 2;
          uVar13 = (uint)lStack_300;
        }
        *(undefined4 *)(param_1 + 0x1e8) = uVar14;
        *(uint *)(param_1 + 0x1ec) = uVar13;
        *(undefined1 *)(param_1 + 0x1f0) = uVar10;
        goto LAB_10819c8a4;
      }
LAB_10819c748:
      func_0x00010819e46c(&lStack_160,"fill");
      FUN_10819d6ac();
      if (bStack_128 == 1) {
        if ((int)lStack_160 == 2) {
          func_0x00010819dcb4(param_1 + 0x10,&lStack_160);
        }
        else {
          *(undefined4 *)(param_1 + 0x10) = 1;
          FUN_10819dd0c(param_1 + 0x18);
        }
        if ((bStack_128 & 1) != 0) goto LAB_10819c9c0;
      }
      func_0x00010819e46c(&iStack_170,"fill-opacity");
      FUN_10819d800();
      if (cStack_164 == '\x01') {
        if (iStack_170 == 2) {
          *(ulong *)(param_1 + 0x48) = CONCAT44(uStack_16c,2);
          *(undefined4 *)(param_1 + 0x50) = uStack_168;
        }
        else {
          *(undefined4 *)(param_1 + 0x48) = 1;
          if (*(char *)(param_1 + 0x50) == '\x01') {
            *(undefined1 *)(param_1 + 0x50) = 0;
          }
        }
LAB_10819c9c0:
        uVar15 = 1;
        goto LAB_10819c9c4;
      }
      func_0x00010819e46c(&iStack_180,"fill-rule");
      FUN_10819d5a0();
      if (cStack_174 == '\x01') {
        if (iStack_180 == 2) {
          *(ulong *)(param_1 + 0x54) = CONCAT44(uStack_17c,2);
          *(undefined4 *)(param_1 + 0x5c) = uStack_178;
        }
        else {
          *(undefined4 *)(param_1 + 0x54) = 1;
          if (*(char *)(param_1 + 0x5c) == '\x01') {
            *(undefined1 *)(param_1 + 0x5c) = 0;
          }
        }
        goto LAB_10819c9c0;
      }
      func_0x00010819e46c(auStack_1b0,&DAT_10f33c7a6);
      FUN_10819d474();
      if (bStack_188 == 1) {
        FUN_10819dc04(param_1 + 0x220,auStack_1b0);
        if ((bStack_188 & 1) != 0) {
          uVar15 = 1;
          goto LAB_10819d174;
        }
      }
      func_0x00010819e46c(auStack_1d8,&UNK_10f47e04b);
      FUN_10819d858();
      if (bStack_1b8 == 1) {
        func_0x00010819dd30(param_1 + 0x278,auStack_1d8);
        if ((bStack_1b8 & 1) != 0) goto LAB_10819c9a0;
      }
      puVar6 = (uint *)&uStack_1e8;
      func_0x00010819e46c(puVar6,&UNK_10f47e057);
      FUN_10819d9a8();
      if (cStack_1dc == '\x01') {
        *(undefined8 *)(param_1 + 0x298) = uStack_1e8;
        *(undefined4 *)(param_1 + 0x2a0) = uStack_1e0;
LAB_10819c9a0:
        uVar15 = 1;
        goto LAB_10819d16c;
      }
      func_0x00010819e478();
      if ((int)puVar6 == 0) {
        func_0x00010819e3f8();
        if ((int)puVar6 == 0) {
          func_0x00010819e5bc(1);
          func_0x00010819e538();
          puVar6 = (uint *)(unaff_x22 + 8);
        }
        else {
          uStack_340 = uStack_340 & 0xffffff00;
          bStack_330 = 0;
          lStack_300 = CONCAT44(lStack_300._4_4_,1);
          lStack_2f8 = 0x1138270b0;
          func_0x00010819e428();
          auStack_90[0] = param_3 + (long)puVar6;
          puVar7 = auStack_98;
          FUN_108190a68(puVar7,&lStack_300);
          if ((int)puVar7 != 0) {
            func_0x00010819ddd0(&uStack_340,&lStack_300);
            if ((bStack_330 & 1) == 0) {
              func_0x000104bdc2c8();
              goto LAB_10819d324;
            }
          }
          FUN_1083a3ca0(lStack_2f8);
          if (bStack_330 == 1) {
            func_0x00010819e5bc(2);
            FUN_10819e2dc(unaff_x22 + 8,&uStack_340);
            func_0x00010819e538();
            func_0x00010818e700(unaff_x22 + 8);
          }
          else {
            uStack_1f0 = 0;
            uStack_208 = 0;
            uStack_210 = 0;
            uStack_1f8 = 0;
            lStack_200 = 0;
          }
          puVar6 = &uStack_340;
        }
        func_0x00010818e700();
      }
      else {
        uStack_1f0 = 0;
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        lStack_200 = 0;
      }
      if ((uStack_1f0 & 1) != 0) {
        if ((int)uStack_210 == 2) {
          *(undefined4 *)(param_1 + 0x158) = 2;
          cVar1 = *(char *)(param_1 + 0x170);
          if (cVar1 == (char)uStack_1f8) {
            if (cVar1 != '\0') {
              *(undefined4 *)(param_1 + 0x160) = (undefined4)uStack_208;
              lVar11 = *(long *)(param_1 + 0x168);
              if (lVar11 != lStack_200) {
                *(long *)(param_1 + 0x168) = lStack_200;
                lStack_200 = lVar11;
              }
            }
          }
          else {
            if (cVar1 != '\0') goto LAB_10819cafc;
            puVar6 = (uint *)(param_1 + 0x160);
            func_0x00010819ddd0(puVar6,(ulong)&uStack_210 | 8);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x158) = 1;
LAB_10819cafc:
          puVar6 = (uint *)(param_1 + 0x160);
          func_0x00010818edd0();
        }
        if ((uStack_1f0 & 1) != 0) goto LAB_10819ce0c;
      }
      func_0x00010819e478();
      if ((int)puVar6 == 0) {
        func_0x00010819e3f8();
        if ((int)puVar6 == 0) {
          *(undefined4 *)(param_1 + 0x184) = 1;
          if (*(char *)(param_1 + 0x194) == '\x01') {
            *(undefined1 *)(param_1 + 0x194) = 0;
          }
          goto LAB_10819ce0c;
        }
        uStack_340 = 1;
        uStack_33c = 0;
        uStack_338 = 1;
        lStack_300 = param_3;
        func_0x00010819e43c();
        lStack_2f8 = param_3 + (long)puVar6;
        puVar6 = (uint *)&lStack_300;
        func_0x000108190b50(puVar6,&uStack_340);
        if (((ulong)puVar6 & 1) != 0) {
          uStack_58 = CONCAT43(uStack_33c,uStack_340._1_3_);
          uStack_51 = uStack_338;
          uVar14 = uStack_51;
          *(undefined4 *)(param_1 + 0x184) = 2;
          *(undefined1 *)(param_1 + 0x188) = (undefined1)uStack_340;
          uStack_51._0_1_ = (undefined1)uStack_338;
          *(ulong *)(param_1 + 0x189) = CONCAT17((undefined1)uStack_51,uStack_58);
          *(undefined4 *)(param_1 + 400) = uStack_338;
          *(undefined1 *)(param_1 + 0x194) = 1;
          *(undefined2 *)(param_1 + 0x195) = uStack_214;
          *(undefined1 *)(param_1 + 0x197) = uStack_212;
          uStack_51 = uVar14;
          goto LAB_10819ce0c;
        }
      }
      uStack_58 = 0;
      uStack_51 = 0;
      uStack_214 = 0;
      uStack_212 = 0;
      func_0x00010819e478();
      if ((int)puVar6 == 0) {
        func_0x00010819e3f8();
        if ((int)puVar6 == 0) {
          *(undefined4 *)(param_1 + 0x178) = 1;
          if (*(char *)(param_1 + 0x180) == '\x01') {
            *(undefined1 *)(param_1 + 0x180) = 0;
          }
          goto LAB_10819ce0c;
        }
        uStack_340 = 3;
        lStack_300 = param_3;
        func_0x00010819e43c();
        func_0x00010819e5d0();
        func_0x000108190ba8();
        if (((ulong)puVar6 & 1) != 0) {
          *(undefined4 *)(param_1 + 0x178) = 2;
          *(uint *)(param_1 + 0x17c) = uStack_340;
          *(undefined1 *)(param_1 + 0x180) = 1;
          *(undefined2 *)(param_1 + 0x181) = uStack_218;
          *(undefined1 *)(param_1 + 0x183) = uStack_216;
          goto LAB_10819ce0c;
        }
      }
      uStack_216 = 0;
      uStack_218 = 0;
      func_0x00010819e478();
      if ((int)puVar6 == 0) {
        func_0x00010819e3f8();
        if ((int)puVar6 == 0) {
          *(undefined4 *)(param_1 + 0x198) = 1;
          if (*(char *)(param_1 + 0x1a0) == '\x01') {
            *(undefined1 *)(param_1 + 0x1a0) = 0;
          }
LAB_10819ce0c:
          uVar15 = 1;
          goto LAB_10819d164;
        }
        uStack_340 = 0xd;
        lStack_300 = param_3;
        func_0x00010819e43c();
        func_0x00010819e5d0();
        FUN_108190c28();
        if (((ulong)puVar6 & 1) != 0) {
          *(undefined4 *)(param_1 + 0x198) = 2;
          *(uint *)(param_1 + 0x19c) = uStack_340;
          *(undefined1 *)(param_1 + 0x1a0) = 1;
          *(undefined2 *)(param_1 + 0x1a1) = uStack_21c;
          *(undefined1 *)(param_1 + 0x1a3) = uStack_21a;
          goto LAB_10819ce0c;
        }
      }
      uStack_21a = 0;
      uStack_21c = 0;
      func_0x00010819e46c(auStack_248,&UNK_10f47e065);
      FUN_10819d858();
      if (bStack_228 == 1) {
        func_0x00010819dd30(param_1 + 0x2a8,auStack_248);
        if ((bStack_228 & 1) != 0) {
          uVar15 = 1;
          goto LAB_10819d15c;
        }
      }
      func_0x00010819e46c(auStack_278,"mask");
      FUN_10819d474();
      if (bStack_250 == 1) {
        FUN_10819dc04(param_1 + 0x1f8,auStack_278);
        if ((bStack_250 & 1) != 0) goto LAB_10819cc88;
      }
      func_0x00010819e46c(&uStack_288,&DAT_10f68f0f6);
      FUN_10819d9a8();
      if (cStack_27c == '\x01') {
        *(undefined8 *)(param_1 + 0x1b0) = uStack_288;
        *(undefined4 *)(param_1 + 0x1b8) = uStack_280;
LAB_10819cc88:
        uVar15 = 1;
        goto LAB_10819d154;
      }
      func_0x00010819e46c(auStack_2b0,"stop-color");
      FUN_10819d858();
      if (bStack_290 == 1) {
        func_0x00010819dd30(param_1 + 0x248,auStack_2b0);
        if ((bStack_290 & 1) != 0) goto LAB_10819cdd0;
      }
      func_0x00010819e46c(&uStack_2c0,"stop-opacity");
      FUN_10819d9a8();
      if (cStack_2b4 == '\x01') {
        *(undefined8 *)(param_1 + 0x268) = uStack_2c0;
        *(undefined4 *)(param_1 + 0x270) = uStack_2b8;
LAB_10819cdd0:
        uVar15 = 1;
        goto LAB_10819d14c;
      }
      plVar5 = &lStack_300;
      func_0x00010819e46c(plVar5,"stroke");
      FUN_10819d6ac();
      if (bStack_2c8 == 1) {
        if ((uint)lStack_300 == 2) {
          plVar5 = (long *)(param_1 + 0x70);
          func_0x00010819dcb4(plVar5,&lStack_300);
        }
        else {
          *(undefined4 *)(param_1 + 0x70) = 1;
          plVar5 = (long *)(param_1 + 0x78);
          FUN_10819dd0c();
        }
        if ((bStack_2c8 & 1) != 0) {
          uVar15 = 1;
          goto LAB_10819d144;
        }
      }
      func_0x00010819e478();
      if ((int)plVar5 == 0) {
        func_0x00010819e3f8();
        if ((int)plVar5 == 0) {
          auStack_98[0] = 1;
          auStack_90[0] = auStack_90[0] & 0xffffffffffffff00;
          uStack_70 = 0;
          func_0x00010819e558();
          puVar8 = auStack_90;
        }
        else {
          auStack_c0[0]._0_4_ = (uint)auStack_c0[0] & 0xffffff00;
          bStack_a0 = 0;
          auStack_98[0] = 0;
          auStack_90[1] = 0;
          auStack_90[2] = 0;
          auStack_90[0] = 0;
          lStack_68 = param_3;
          func_0x00010819e43c();
          lStack_60 = param_3 + (long)plVar5;
          plVar5 = &lStack_68;
          FUN_10819093c(plVar5,auStack_98);
          if ((int)plVar5 != 0) {
            func_0x00010818ea48(auStack_c0,auStack_98);
            if ((bStack_a0 & 1) == 0) {
              func_0x000104bdc2c8();
LAB_10819d324:
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10819d328);
              (*pcVar3)();
            }
          }
          func_0x00010818e81c(auStack_90);
          if (bStack_a0 == 1) {
            auStack_98[0] = 2;
            auStack_90[0] = auStack_90[0] & 0xffffffffffffff00;
            uStack_70 = 0;
            FUN_10819e3cc(auStack_90,auStack_c0);
            func_0x00010819e558();
            func_0x00010818e728(auStack_90);
          }
          else {
            func_0x00010819e588();
          }
          puVar8 = auStack_c0;
        }
        func_0x00010818e728(puVar8);
      }
      else {
        func_0x00010819e588();
      }
      if ((bStack_310 & 1) != 0) {
        if (uStack_340 == 2) {
          *(undefined4 *)(param_1 + 0xa8) = 2;
          bVar2 = *(byte *)(param_1 + 0xd0);
          if (bVar2 == bStack_318) {
            if (bVar2 != 0) {
              func_0x00010818ea7c(param_1 + 0xb0,(ulong)&uStack_340 | 8);
            }
          }
          else {
            if ((bVar2 & 1) != 0) goto LAB_10819cf90;
            FUN_10818ea9c(param_1 + 0xb0,(ulong)&uStack_340 | 8);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0xa8) = 1;
LAB_10819cf90:
          func_0x00010819ddf4(param_1 + 0xb0);
        }
        if ((bStack_310 & 1) != 0) goto LAB_10819d138;
      }
      piVar4 = &iStack_354;
      func_0x00010819e46c(piVar4,"stroke-dashoffset");
      func_0x00010819da00();
      if (cStack_344 == '\x01') {
        if (iStack_354 != 2) {
          uVar15 = 1;
          *(undefined4 *)(param_1 + 0xd8) = 1;
          if (*(char *)(param_1 + 0xe4) != '\x01') goto LAB_10819d13c;
          *(undefined1 *)(param_1 + 0xe4) = 0;
          goto LAB_10819d13c;
        }
        *(undefined8 *)(param_1 + 0xe0) = uStack_34c;
        *(ulong *)(param_1 + 0xd8) = CONCAT44(uStack_350,2);
      }
      else {
        func_0x00010819e478();
        if ((int)piVar4 == 0) {
          func_0x00010819e3f8();
          if ((int)piVar4 == 0) {
            uVar15 = 1;
            *(undefined4 *)(param_1 + 0xe8) = 1;
            if (*(char *)(param_1 + 0xf0) != '\x01') goto LAB_10819d13c;
            *(undefined1 *)(param_1 + 0xf0) = 0;
            goto LAB_10819d13c;
          }
          func_0x00010819e428();
          func_0x00010819e458();
          func_0x00010819069c();
          if (((ulong)piVar4 & 1) != 0) {
            func_0x00010819e57c();
            *(undefined4 *)(param_1 + 0xe8) = extraout_w9;
            *(undefined4 *)(param_1 + 0xec) = extraout_w8;
            uVar15 = 1;
            *(undefined1 *)(param_1 + 0xf0) = 1;
            *(undefined2 *)(param_1 + 0xf1) = uStack_358;
            *(undefined1 *)(param_1 + 0xf3) = uStack_356;
            goto LAB_10819d13c;
          }
        }
        uStack_356 = 0;
        uStack_358 = 0;
        func_0x00010819e478();
        if ((int)piVar4 == 0) {
          func_0x00010819e3f8();
          if ((int)piVar4 == 0) {
            uVar15 = 1;
            *(undefined4 *)(param_1 + 0xf4) = 1;
            if (*(char *)(param_1 + 0xfc) != '\x01') goto LAB_10819d13c;
            *(undefined1 *)(param_1 + 0xfc) = 0;
            goto LAB_10819d13c;
          }
          auStack_c0[0]._0_4_ = 3;
          func_0x00010819e428();
          func_0x00010819e458();
          func_0x0001081906f8();
          if (((ulong)piVar4 & 1) != 0) {
            func_0x00010819e57c();
            *(undefined4 *)(param_1 + 0xf4) = extraout_w9_00;
            *(undefined4 *)(param_1 + 0xf8) = extraout_w8_00;
            uVar15 = 1;
            *(undefined1 *)(param_1 + 0xfc) = 1;
            *(undefined2 *)(param_1 + 0xfd) = uStack_35c;
            *(undefined1 *)(param_1 + 0xff) = uStack_35a;
            goto LAB_10819d13c;
          }
        }
        else {
          uStack_35a = 0;
          uStack_35c = 0;
        }
        func_0x00010819e46c(&iStack_36c,"stroke-miterlimit");
        FUN_10819d800();
        if (cStack_360 == '\x01') {
          if (iStack_36c != 2) {
            uVar15 = 1;
            *(undefined4 *)(param_1 + 0x100) = 1;
            if (*(char *)(param_1 + 0x108) != '\x01') goto LAB_10819d13c;
            *(undefined1 *)(param_1 + 0x108) = 0;
            goto LAB_10819d13c;
          }
          puVar12 = (undefined8 *)(param_1 + 0x100);
          *puVar12 = CONCAT44(uStack_368,2);
        }
        else {
          func_0x00010819e46c(&iStack_37c,"stroke-opacity");
          FUN_10819d800();
          if (cStack_370 != '\x01') {
            func_0x00010819e46c(&iStack_390,"stroke-width");
            func_0x00010819da00();
            if (cStack_380 != '\x01') {
              func_0x00010819e478();
              if ((int)piVar9 == 0) {
                func_0x00010819e3f8();
                if ((int)piVar9 == 0) {
                  uVar15 = 1;
                  *(undefined4 *)(param_1 + 0x1a4) = 1;
                  if (*(char *)(param_1 + 0x1ac) != '\x01') goto LAB_10819d13c;
                  *(undefined1 *)(param_1 + 0x1ac) = 0;
                  goto LAB_10819d13c;
                }
                auStack_c0[0]._0_4_ = 3;
                func_0x00010819e428();
                func_0x00010819e458();
                FUN_108190ca8();
                if (((ulong)piVar9 & 1) != 0) {
                  func_0x00010819e57c();
                  *(undefined4 *)(param_1 + 0x1a4) = extraout_w9_01;
                  *(undefined4 *)(param_1 + 0x1a8) = extraout_w8_01;
                  uVar15 = 1;
                  *(undefined1 *)(param_1 + 0x1ac) = 1;
                  goto LAB_10819d13c;
                }
              }
              func_0x00010819e478();
              if ((int)piVar9 == 0) {
                func_0x00010819e3f8();
                if ((int)piVar9 == 0) {
                  uVar15 = 1;
                  *(undefined4 *)(param_1 + 0x128) = 1;
                  if (*(char *)(param_1 + 0x130) != '\x01') goto LAB_10819d13c;
                  *(undefined1 *)(param_1 + 0x130) = 0;
                  goto LAB_10819d13c;
                }
                auStack_c0[0]._0_4_ = 0;
                func_0x00010819e428();
                func_0x00010819e458();
                func_0x0001081908e4();
                if (((ulong)piVar9 & 1) != 0) {
                  func_0x00010819e57c();
                  *(undefined4 *)(param_1 + 0x128) = extraout_w9_02;
                  *(undefined4 *)(param_1 + 300) = extraout_w8_02;
                  uVar15 = 1;
                  *(undefined1 *)(param_1 + 0x130) = 1;
                  goto LAB_10819d13c;
                }
              }
              uVar15 = 0;
              goto LAB_10819d13c;
            }
            if (iStack_390 != 2) goto LAB_10819d258;
            *(undefined8 *)(param_1 + 0x120) = uStack_388;
            *(ulong *)(param_1 + 0x118) = CONCAT44(uStack_38c,2);
            goto LAB_10819d138;
          }
          if (iStack_37c != 2) {
            uVar15 = 1;
            *(undefined4 *)(param_1 + 0x10c) = 1;
            if (*(char *)(param_1 + 0x114) != '\x01') goto LAB_10819d13c;
            *(undefined1 *)(param_1 + 0x114) = 0;
            goto LAB_10819d13c;
          }
          puVar12 = (undefined8 *)(param_1 + 0x10c);
          *puVar12 = CONCAT44(uStack_378,2);
          uStack_364 = uStack_374;
        }
        *(undefined4 *)(puVar12 + 1) = uStack_364;
      }
LAB_10819d138:
      uVar15 = 1;
      goto LAB_10819d13c;
    }
    if (iStack_120 != 2) {
      *(undefined4 *)(param_1 + 0x14c) = 1;
      if (*(char *)(param_1 + 0x154) == '\x01') {
        *(undefined1 *)(param_1 + 0x154) = 0;
      }
      goto LAB_10819c8a4;
    }
    puVar12 = (undefined8 *)(param_1 + 0x14c);
    *puVar12 = CONCAT44(uStack_11c,2);
    uStack_108 = uStack_118;
  }
  *(undefined4 *)(puVar12 + 1) = uStack_108;
LAB_10819c8a4:
  uVar15 = 1;
  while( true ) {
    func_0x00010819deb0(auStack_f0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) break;
    ___stack_chk_fail();
LAB_10819d258:
    uVar15 = 1;
    *(undefined4 *)(param_1 + 0x118) = 1;
    if (*(char *)(param_1 + 0x124) == '\x01') {
      *(undefined1 *)(param_1 + 0x124) = 0;
    }
LAB_10819d13c:
    func_0x00010819de28(&uStack_340);
LAB_10819d144:
    func_0x00010819de58(&lStack_300);
LAB_10819d14c:
    func_0x00010819de88(auStack_2b0);
LAB_10819d154:
    func_0x00010819deb0(auStack_278);
LAB_10819d15c:
    func_0x00010819de88(auStack_248);
LAB_10819d164:
    func_0x00010819dee0(&uStack_210);
LAB_10819d16c:
    func_0x00010819de88(auStack_1d8);
LAB_10819d174:
    func_0x00010819deb0(auStack_1b0);
LAB_10819c9c4:
    func_0x00010819de58(&lStack_160);
  }
  return uVar15;
}



/* Entry: 10819d474; end: 10819d59f;  */

void FUN_10819d474(int param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 auStack_78 [24];
  byte bStack_60;
  undefined4 auStack_58 [2];
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010819e408();
  if (param_1 == 0) {
    func_0x00010819e3f8();
    if (param_1 == 0) {
      func_0x00010819e59c(1);
      func_0x00010819e544();
      puVar2 = (undefined1 *)(unaff_x20 + 8);
    }
    else {
      auStack_78[0] = 0;
      bStack_60 = 0;
      auStack_58[0] = 0;
      uStack_50 = 0;
      uStack_48 = 0x1138270b0;
      func_0x00010819e43c();
      puVar2 = &stack0xffffffffffffffd0;
      FUN_108190600(puVar2,auStack_58);
      if ((int)puVar2 != 0) {
        func_0x00010819dc90(auStack_78,auStack_58);
        if ((bStack_60 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10819d56c);
          (*pcVar1)();
        }
      }
      FUN_1083a3ca0(uStack_48);
      if (bStack_60 == 1) {
        func_0x00010819e59c(2);
        FUN_10819dfa0(unaff_x20 + 8,auStack_78);
        func_0x00010819e544();
        func_0x00010818e6d0(unaff_x20 + 8);
      }
      else {
        unaff_x19[3] = 0;
        unaff_x19[2] = 0;
        unaff_x19[5] = 0;
        unaff_x19[4] = 0;
        unaff_x19[1] = 0;
        *unaff_x19 = 0;
      }
      puVar2 = auStack_78;
    }
    func_0x00010818e6d0(puVar2);
  }
  else {
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    unaff_x19[5] = 0;
    unaff_x19[4] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 10819d5a0; end: 10819d62b;  */

void FUN_10819d5a0(int param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 *unaff_x19;
  undefined4 uStack_34;
  
  func_0x00010819e408();
  if (param_1 == 0) {
    func_0x00010819e3f8();
    if (param_1 == 0) {
      func_0x00010819e444();
      uVar2 = extraout_w8;
    }
    else {
      uStack_34 = 2;
      func_0x00010819e43c();
      puVar1 = &stack0xffffffffffffffb8;
      FUN_108190888(puVar1,&uStack_34);
      if ((int)puVar1 == 0) {
        func_0x00010819e50c();
        uVar2 = extraout_w8_00;
      }
      else {
        *(undefined4 *)unaff_x19 = 2;
        *(undefined4 *)((long)unaff_x19 + 4) = uStack_34;
        uVar2 = 1;
        *(undefined1 *)(unaff_x19 + 1) = 1;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0xc) = uVar2;
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  return;
}



/* Entry: 10819d62c; end: 10819d6ab;  */

void FUN_10819d62c(int param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 *unaff_x19;
  undefined4 uStack_24;
  
  func_0x00010819e408();
  if (param_1 == 0) {
    func_0x00010819e3f8();
    if (param_1 == 0) {
      func_0x00010819e444();
      uVar2 = extraout_w8;
    }
    else {
      func_0x00010819e43c();
      puVar1 = &stack0xffffffffffffffc8;
      func_0x000108190ec0(puVar1,&uStack_24);
      if ((int)puVar1 == 0) {
        func_0x00010819e50c();
        uVar2 = extraout_w8_00;
      }
      else {
        *(undefined4 *)unaff_x19 = 2;
        *(undefined4 *)((long)unaff_x19 + 4) = uStack_24;
        uVar2 = 1;
        *(undefined1 *)(unaff_x19 + 1) = 1;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0xc) = uVar2;
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  return;
}



/* Entry: 10819d6ac; end: 10819d7ff;  */

void FUN_10819d6ac(int param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  undefined8 *unaff_x19;
  undefined1 auStack_98 [40];
  byte bStack_70;
  undefined4 auStack_68 [2];
  ulong auStack_60 [2];
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_38;
  
  func_0x00010819e408();
  if (param_1 == 0) {
    func_0x00010819e3f8();
    if (param_1 == 0) {
      auStack_68[0] = 1;
      auStack_60[0] = auStack_60[0] & 0xffffffffffffff00;
      uStack_38 = 0;
      func_0x00010819e564();
      puVar3 = auStack_60;
    }
    else {
      auStack_98[0] = 0;
      bStack_70 = 0;
      auStack_68[0] = 0;
      auStack_60[0] = 0xff00000000000001;
      auStack_60[1] = 0;
      uStack_50 = 0;
      uStack_48 = 0x1138270b0;
      func_0x00010819e43c();
      puVar2 = &stack0xffffffffffffffd0;
      FUN_108190444(puVar2,auStack_68);
      if ((int)puVar2 != 0) {
        func_0x00010818e8d4(auStack_98,auStack_68);
        if ((bStack_70 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10819d7cc);
          (*pcVar1)();
        }
      }
      FUN_10818e778(auStack_68);
      if (bStack_70 == 1) {
        auStack_68[0] = 2;
        auStack_60[0] = auStack_60[0] & 0xffffffffffffff00;
        uStack_38 = 0;
        FUN_10819e0f8(auStack_60,auStack_98);
        func_0x00010819e564();
        FUN_10818e758(auStack_60);
      }
      else {
        unaff_x19[5] = 0;
        unaff_x19[4] = 0;
        unaff_x19[7] = 0;
        unaff_x19[6] = 0;
        unaff_x19[1] = 0;
        *unaff_x19 = 0;
        unaff_x19[3] = 0;
        unaff_x19[2] = 0;
      }
      puVar3 = (ulong *)auStack_98;
    }
    FUN_10818e758(puVar3);
  }
  else {
    unaff_x19[5] = 0;
    unaff_x19[4] = 0;
    unaff_x19[7] = 0;
    unaff_x19[6] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
  }
  return;
}



/* Entry: 10819d800; end: 10819d857;  */

void FUN_10819d800(int param_1)

{
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar1;
  undefined8 *unaff_x19;
  char cStack_24;
  
  func_0x00010819e408();
  if (param_1 == 0) {
    func_0x00010819e3f8();
    if (param_1 == 0) {
      func_0x00010819e444();
      uVar1 = extraout_w8_00;
    }
    else {
      func_0x00010819e52c();
      if (cStack_24 == '\x01') {
        func_0x00010819e4b4();
        uVar1 = extraout_w8;
      }
      else {
        func_0x00010819e50c();
        uVar1 = extraout_w8_01;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0xc) = uVar1;
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  return;
}



/* Entry: 10819d858; end: 10819d9a7;  */

void FUN_10819d858(int param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  undefined8 *unaff_x19;
  undefined1 uStack_68;
  undefined7 uStack_67;
  int *piStack_60;
  byte bStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  int *piStack_40;
  undefined1 uStack_38;
  
  func_0x00010819e408();
  if (param_1 == 0) {
    func_0x00010819e3f8();
    if (param_1 == 0) {
      uStack_50 = CONCAT44(uStack_50._4_4_,1);
      uStack_48 = uStack_48 & 0xffffffffffffff00;
      uStack_38 = 0;
      func_0x00010819e520();
      puVar5 = &uStack_48;
    }
    else {
      uStack_68 = 0;
      bStack_58 = 0;
      uStack_50 = 0xff00000000000001;
      uStack_48 = 0;
      func_0x00010819e43c();
      puVar4 = &stack0xffffffffffffffd0;
      FUN_10818fb2c(puVar4,&uStack_50);
      if ((int)puVar4 != 0) {
        func_0x00010818ee28(&uStack_68,&uStack_50);
        if ((bStack_58 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10819d978);
          (*pcVar3)();
        }
      }
      func_0x00010819dbc8(uStack_48);
      if (bStack_58 == 1) {
        uStack_50 = CONCAT44(uStack_50._4_4_,2);
        uStack_48 = CONCAT71(uStack_67,uStack_68);
        if (piStack_60 != (int *)0x0) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piStack_60,0x10);
            if (bVar2) {
              *piStack_60 = *piStack_60 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        piStack_40 = piStack_60;
        uStack_38 = 1;
        func_0x00010819e520();
        FUN_10818e6a8(&uStack_48);
      }
      else {
        unaff_x19[4] = 0;
        unaff_x19[1] = 0;
        *unaff_x19 = 0;
        unaff_x19[3] = 0;
        unaff_x19[2] = 0;
      }
      puVar5 = (ulong *)&uStack_68;
    }
    FUN_10818e6a8(puVar5);
  }
  else {
    unaff_x19[4] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
  }
  return;
}



/* Entry: 10819d9a8; end: 10819da87;  */

void FUN_10819d9a8(int param_1)

{
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar1;
  undefined8 *unaff_x19;
  char cStack_24;
  
  func_0x00010819e408();
  if (param_1 == 0) {
    func_0x00010819e3f8();
    if (param_1 == 0) {
      func_0x00010819e444();
      uVar1 = extraout_w8_00;
    }
    else {
      func_0x00010819e52c();
      if (cStack_24 == '\x01') {
        func_0x00010819e4b4();
        uVar1 = extraout_w8;
      }
      else {
        func_0x00010819e50c();
        uVar1 = extraout_w8_01;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0xc) = uVar1;
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  return;
}



/* Entry: 10819da88; end: 10819dbaf;  */

/* WARNING: Possible PIC construction at 0x00010819db88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010819db8c) */

void FUN_10819da88(undefined1 *param_1,float *param_2,float *param_3,ulong param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar5;
  ulong uVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong unaff_d8;
  float fVar15;
  ulong unaff_d9;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  puVar1 = auStack_80;
  puVar3 = auStack_80;
  puVar4 = &stack0xfffffffffffffff0;
  fVar5 = *param_2;
  if (fVar5 < param_2[2]) {
    fVar7 = param_2[1];
    if (fVar7 < param_2[3]) {
      if (*param_3 < param_3[2]) {
        if (param_3[1] < param_3[3]) {
          fVar10 = param_3[2] - *param_3;
          fVar12 = param_2[2] - fVar5;
          fVar14 = fVar10 / fVar12;
          uVar6 = (ulong)(uint)fVar14;
          fVar9 = param_3[3] - param_3[1];
          fVar11 = param_2[3] - fVar7;
          fVar15 = fVar9 / fVar11;
          uVar8 = (ulong)(uint)fVar15;
          if ((param_4 & 0xff) != 0x10) {
            fVar13 = fVar15;
            if (fVar14 <= fVar15) {
              fVar13 = fVar14;
            }
            if (fVar15 <= fVar14) {
              fVar15 = fVar14;
            }
            if (param_4 >> 0x20 != 0) {
              fVar13 = fVar15;
            }
            uVar6 = (ulong)(uint)fVar13;
            uVar8 = uVar6;
          }
          FUN_10814bdfc(auStack_58,
                        -(fVar5 * (float)uVar6) +
                        *(float *)(&UNK_10df0797c + (param_4 & 3) * 4) *
                        (fVar10 - (float)uVar6 * fVar12),
                        -(fVar7 * (float)uVar8) +
                        *(float *)(&UNK_10df0797c + (param_4 & 0xc)) *
                        (fVar9 - (float)uVar8 * fVar11));
          unaff_x30 = 0x10819db8c;
          unaff_d8 = uVar6;
          unaff_d9 = uVar8;
          goto SUB_10815f6c0;
        }
      }
    }
  }
  uVar6 = 0;
  uVar8 = 0;
  puVar1 = (undefined1 *)register0x00000008;
  puVar3 = param_1;
  puVar4 = unaff_x29;
SUB_10815f6c0:
  *(ulong *)(puVar1 + -0x20) = unaff_d9;
  *(ulong *)(puVar1 + -0x18) = unaff_d8;
  *(undefined1 **)(puVar1 + -0x10) = puVar4;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  func_0x0001081602d4(puVar3);
  fVar7 = (float)uVar8;
  bVar2 = true;
  fVar5 = (float)uVar6;
  if ((fVar7 != 0.0) && (bVar2 = false, !NAN(fVar5))) {
    bVar2 = fVar5 == 0.0;
  }
  fVar15 = 0.0;
  if (!bVar2) {
    fVar15 = 2.24208e-44;
  }
  bVar2 = false;
  if ((fVar7 == 1.0) && (bVar2 = false, !NAN(fVar5))) {
    bVar2 = fVar5 == 1.0;
  }
  *param_2 = fVar5;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[1] = 0.0;
  param_2[4] = fVar7;
  if (!bVar2) {
    fVar15 = (float)((uint)fVar15 | 2);
  }
  param_2[7] = 0.0;
  param_2[8] = 1.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[9] = fVar15;
  return;
}



/* Entry: 10819dbb0; end: 10819dbeb;  */

void FUN_10819dbb0(void)

{
  return;
}



/* Entry: 10819dbec; end: 10819dc03;  */

void FUN_10819dbec(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x00010819e4a4();
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      FUN_108190670(unaff_x19 + 8,param_2 + 8);
    }
  }
  else if (cVar1 == '\0') {
    func_0x00010819dc90(unaff_x19 + 8,param_2 + 8);
  }
  else {
    func_0x00010819dc5c();
  }
  return;
}



/* Entry: 10819dc04; end: 10819dd0b;  */

void FUN_10819dc04(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  
  func_0x00010819e4a4();
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      FUN_108190670(unaff_x19 + 8,param_2 + 8);
    }
  }
  else if (cVar1 == '\0') {
    func_0x00010819dc90(unaff_x19 + 8,param_2 + 8);
  }
  else {
    func_0x00010819dc5c();
  }
  return;
}



/* Entry: 10819dd0c; end: 10819dd2f;  */

void FUN_10819dd0c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10818e778();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 10819dd30; end: 10819df07;  */

void FUN_10819dd30(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  func_0x00010819e4a4();
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == *(char *)(param_2 + 0x18)) {
    if (cVar1 != '\0') {
      FUN_10818e968(unaff_x19 + 8,param_2 + 8);
    }
  }
  else if (cVar1 == '\0') {
    *(undefined8 *)(unaff_x19 + 8) = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
    *(undefined1 *)(unaff_x19 + 0x18) = 1;
  }
  else {
    func_0x00010819dd9c(unaff_x19 + 8);
  }
  return;
}



/* Entry: 10819df08; end: 10819df3b;  */

void FUN_10819df08(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  FUN_10819df3c();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10819df3c; end: 10819df5b;  */

void FUN_10819df3c(void)

{
  func_0x00010819e418();
  FUN_10819df5c();
  return;
}



/* Entry: 10819df5c; end: 10819df8b;  */

void FUN_10819df5c(long param_1)

{
  func_0x00010819e5b0();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_10819df8c();
  return;
}



/* Entry: 10819df8c; end: 10819df9f;  */

void FUN_10819df8c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10819dfbc();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 10819dfa0; end: 10819dfbb;  */

void FUN_10819dfa0(long param_1)

{
  FUN_10819dfbc();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10819dfbc; end: 10819dffb;  */

void FUN_10819dfbc(void)

{
  func_0x00010819e418();
  func_0x000108191018();
  return;
}



/* Entry: 10819dffc; end: 10819e017;  */

void FUN_10819dffc(long param_1)

{
  FUN_10819e018();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 10819e018; end: 10819e037;  */

void FUN_10819e018(void)

{
  func_0x00010819e418();
  FUN_10819e038();
  return;
}



/* Entry: 10819e038; end: 10819e067;  */

void FUN_10819e038(long param_1)

{
  func_0x00010819e5b0();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_10819e068();
  return;
}



/* Entry: 10819e068; end: 10819e07b;  */

void FUN_10819e068(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_10819e098();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 10819e07c; end: 10819e097;  */

void FUN_10819e07c(long param_1)

{
  FUN_10819e098();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10819e098; end: 10819e0f7;  */

void FUN_10819e098(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long unaff_x19;
  
  func_0x00010819e4a4();
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  piVar3 = *(int **)(param_2 + 0x10);
  if (piVar3 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(int **)(unaff_x19 + 0x10) = piVar3;
  func_0x000108191018(unaff_x19 + 0x18,param_2 + 0x18);
  return;
}



/* Entry: 10819e0f8; end: 10819e12b;  */

long FUN_10819e0f8(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10819e12c();
  }
  else {
    FUN_10819e07c();
  }
  return param_1;
}



/* Entry: 10819e12c; end: 10819e17b;  */

undefined4 * FUN_10819e12c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_10819e17c(param_1 + 2,param_2 + 2);
  func_0x00010819dfdc(param_1 + 6,param_2 + 6);
  return param_1;
}



/* Entry: 10819e17c; end: 10819e1e7;  */

undefined8 * FUN_10819e17c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x00010819e1a4(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10819e1e8; end: 10819e21f;  */

void FUN_10819e1e8(long param_1)

{
  FUN_1081974e8();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10819e220; end: 10819e23f;  */

void FUN_10819e220(void)

{
  func_0x00010819e418();
  FUN_10819e240();
  return;
}



/* Entry: 10819e240; end: 10819e26f;  */

void FUN_10819e240(long param_1)

{
  func_0x00010819e5b0();
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_10819e270();
  return;
}



/* Entry: 10819e270; end: 10819e283;  */

void FUN_10819e270(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_10819e2a0();
    *(undefined1 *)(param_1 + 0x10) = 1;
    return;
  }
  return;
}



/* Entry: 10819e284; end: 10819e29f;  */

void FUN_10819e284(long param_1)

{
  FUN_10819e2a0();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 10819e2a0; end: 10819e2db;  */

void FUN_10819e2a0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = *param_2;
  lVar4 = *(long *)(param_2 + 2);
  if (lVar4 != 0 && lVar4 != 0x1138270b0) {
    piVar1 = (int *)(lVar4 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(long *)(param_1 + 2) = lVar4;
  return;
}



/* Entry: 10819e2dc; end: 10819e32f;  */

long FUN_10819e2dc(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010819e310();
  }
  else {
    FUN_10819e284();
  }
  return param_1;
}



/* Entry: 10819e330; end: 10819e34b;  */

void FUN_10819e330(long param_1)

{
  FUN_10819e34c();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10819e34c; end: 10819e36b;  */

void FUN_10819e34c(void)

{
  func_0x00010819e418();
  FUN_10819e36c();
  return;
}



/* Entry: 10819e36c; end: 10819e39b;  */

void FUN_10819e36c(long param_1)

{
  func_0x00010819e5b0();
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_10819e39c();
  return;
}



/* Entry: 10819e39c; end: 10819e3af;  */

void FUN_10819e39c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_10818ecc8();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 10819e3b0; end: 10819e3cb;  */

void FUN_10819e3b0(long param_1)

{
  FUN_10818ecc8();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10819e3cc; end: 10819e3f7;  */

void FUN_10819e3cc(void)

{
  undefined1 in_ZR;
  
  func_0x00010819e4e4();
  if ((bool)in_ZR) {
    func_0x00010818ea7c();
  }
  else {
    FUN_10819e3b0();
  }
  return;
}



/* Entry: 10819e3f8; end: 10819e5e3;  */

void FUN_10819e3f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strcmp_11034cba8)();
  return;
}



/* Entry: 10819e5e4; end: 10819e633;  */

undefined8 * FUN_10819e5e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001081a1554(param_1,0x20);
  *puVar1 = &PTR_DAT_110a2e1f8;
  FUN_108376ad8(puVar1 + 0x5e);
  return param_1;
}



/* Entry: 10819e634; end: 10819e72f;  */

byte FUN_10819e634(ulong param_1,char *param_2,undefined8 param_3)

{
  ulong uVar1;
  byte bVar2;
  ulong auStack_58 [2];
  ulong uStack_48;
  undefined8 auStack_40 [2];
  
  uVar1 = param_1;
  FUN_10819c580();
  if ((uVar1 & 1) == 0) {
    if ((*param_2 == 'd') && (param_2[1] == '\0')) {
      auStack_58[0] = auStack_58[0] & 0xffffffffffffff00;
      uStack_48 = uStack_48 & 0xffffffffffffff00;
      FUN_108376ad8(auStack_40);
      FUN_108406a38(param_3,auStack_40);
      if ((int)param_3 != 0) {
        func_0x000108376b14(auStack_58,auStack_40);
        uStack_48 = CONCAT71(uStack_48._1_7_,1);
      }
      FUN_10837ca5c(auStack_40[0]);
      if ((byte)uStack_48 == '\x01') {
        FUN_108376b90(param_1 + 0x2f0,auStack_58);
        bVar2 = (byte)uStack_48;
      }
      else {
        bVar2 = 0;
      }
    }
    else {
      auStack_58[0] = 0;
      auStack_58[1] = 0;
      uStack_48 = 0;
      bVar2 = 0;
    }
    func_0x00010819e850(auStack_58);
  }
  else {
    bVar2 = 1;
  }
  return bVar2 & 1;
}



/* Entry: 10819e730; end: 10819e7b3;  */

void FUN_10819e730(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  undefined8 uStack_40;
  byte bStack_32;
  
  func_0x000108376b14(&uStack_40,param_1 + 0x2f0);
  bStack_32 = bStack_32 & 0xfc | param_5 & 3;
  (**(code **)(*param_2 + 0xe0))(param_2,&uStack_40,param_4);
  FUN_10837ca5c(uStack_40);
  return;
}



/* Entry: 10819e7b4; end: 10819e82f;  */

void FUN_10819e7b4(long param_1,long param_2,long param_3)

{
  byte bVar1;
  int *piVar2;
  
  func_0x000108376b14(param_1,param_2 + 0x2f0);
  piVar2 = (int *)(*(long *)(param_3 + 0x38) + 0x5c);
  func_0x00010819e8b0();
  bVar1 = *(byte *)(param_1 + 0xe) & 0xfc;
  if (*piVar2 == 1) {
    bVar1 = bVar1 + 1;
  }
  *(byte *)(param_1 + 0xe) = bVar1;
  func_0x0001081a43c8(param_2,param_1);
  return;
}



/* Entry: 10819e830; end: 10819e83b;  */

byte ** FUN_10819e830(undefined4 param_1,ulong param_2,long param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  byte **ppbVar8;
  byte **ppbVar9;
  ulong *puVar10;
  uint uVar11;
  undefined8 extraout_x8;
  int iVar12;
  ulong uVar13;
  ulong *unaff_x20;
  long lVar14;
  undefined4 *puVar15;
  float fVar16;
  undefined4 uVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *pbStack_130;
  byte *pbStack_120;
  byte *pbStack_108;
  ulong *puStack_100;
  float *pfStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  ulong *puStack_e0;
  float *pfStack_d8;
  ulong auStack_d0 [5];
  byte *pbStack_a8;
  ulong auStack_a0 [3];
  float fStack_88;
  undefined8 uStack_80;
  
  ppbVar8 = (byte **)(param_3 + 0x2f0);
  func_0x00010837caf0();
  uStack_80 = extraout_x8;
  if (*(int *)(*ppbVar8 + 0x48) == 0) {
    pbVar18 = (byte *)0x0;
  }
  else {
    in_ZR = (*ppbVar8)[0xc3] == 1;
    if ((bool)in_ZR) {
      func_0x00010837ce48();
      pbVar18 = *ppbVar8;
    }
    else {
      FUN_108377828(ppbVar8,0);
      pbVar18 = (byte *)CONCAT44((int)param_2,param_1);
      ppbVar9 = &pbStack_f0;
      FUN_1081e8e40();
      pbStack_108 = pbStack_f0;
      pfStack_f8 = pfStack_d8;
      puStack_100 = puStack_e0;
      pbStack_120 = pbVar18;
      while (puVar1 = puStack_100, param_4 = (uint)ppbVar8, pbStack_108 != pbStack_e8) {
        uVar11 = *pbStack_108 - 1;
        if (uVar11 < 5) {
          bVar6 = SBORROW4(uVar11,3);
          if (uVar11 < 4) {
            puVar10 = puStack_100 + -1;
            iVar12 = (int)auStack_a0;
            switch(uVar11) {
            case 0:
              auStack_d0[0] = *puStack_100;
              goto code_r0x00010837b818;
            case 1:
              func_0x00010837cf44();
              iVar7 = (int)auStack_a0;
              FUN_108351698();
              func_0x00010837cea8();
              iVar12 = iVar12 + iVar7 * 4;
              FUN_108351698();
              uVar11 = iVar12 + (int)unaff_x20;
              unaff_x20 = (ulong *)(ulong)uVar11;
              puVar15 = (undefined4 *)((ulong)auStack_d0 | 4);
              for (lVar14 = 0; (long)unaff_x20 << 2 != lVar14; lVar14 = lVar14 + 4) {
                uVar17 = *(undefined4 *)((long)auStack_a0 + lVar14);
                FUN_1083514a0(puVar10);
                puVar15[-1] = uVar17;
                *puVar15 = (int)param_2;
                puVar15 = puVar15 + 2;
              }
              auStack_d0[(long)unaff_x20] = puVar1[1];
              break;
            case 2:
              fVar16 = *pfStack_f8;
              auStack_a0[1] = *puStack_100;
              param_2 = puStack_100[-1];
              auStack_a0[2] = puStack_100[1];
              auStack_a0[0] = param_2;
              func_0x00010837ce74();
              bVar3 = false;
              bVar4 = true;
              bVar5 = false;
              if (!bVar6) {
                bVar3 = false;
                bVar4 = false;
                bVar5 = true;
                if (!NAN(fVar16)) {
                  bVar3 = fVar16 < 0.0;
                  bVar4 = fVar16 == 0.0;
                  bVar5 = false;
                }
              }
              fStack_88 = fVar16;
              if (bVar4 || bVar3 != bVar5) {
                fStack_88 = 1.0;
              }
              puVar10 = auStack_a0;
              FUN_108353314(puVar10,&pbStack_a8);
              lVar14 = 4;
              if ((int)puVar10 == 0) {
                lVar14 = 0;
              }
              iVar12 = (int)auStack_a0;
              ppbVar8 = (byte **)((long)&pbStack_a8 + lVar14);
              FUN_108353394();
              uVar11 = iVar12 + (int)puVar10;
              puVar15 = (undefined4 *)((ulong)auStack_d0 | 4);
              for (unaff_x20 = (ulong *)0x0; (ulong *)((ulong)uVar11 << 2) != unaff_x20;
                  unaff_x20 = (ulong *)((long)unaff_x20 + 4)) {
                uVar17 = *(undefined4 *)((long)&pbStack_a8 + (long)unaff_x20);
                FUN_108352d70(auStack_a0);
                puVar15[-1] = uVar17;
                *puVar15 = (int)param_2;
                puVar15 = puVar15 + 2;
              }
              auStack_d0[uVar11] = puVar1[1];
              uVar11 = uVar11 + 1;
              goto LAB_10837b9a4;
            case 3:
              func_0x00010837cf44();
              iVar7 = (int)auStack_a0;
              func_0x000108351a40();
              func_0x00010837cea8();
              iVar12 = iVar12 + iVar7 * 4;
              func_0x000108351a40();
              uVar11 = iVar12 + (int)unaff_x20;
              unaff_x20 = auStack_d0;
              for (lVar14 = 0; (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) << 2 != lVar14;
                  lVar14 = lVar14 + 4) {
                func_0x00010837cd88(*(undefined4 *)((long)auStack_a0 + lVar14));
                FUN_1083518ac();
                unaff_x20 = unaff_x20 + 1;
              }
              auStack_d0[(int)uVar11] = puVar1[2];
            }
            uVar11 = uVar11 + 1;
            pbVar18 = pbStack_130;
          }
          else {
            uVar11 = 0;
          }
        }
        else {
          if (*pbStack_108 != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10837ba28);
            (*pcVar2)();
          }
          auStack_d0[0] = *puStack_100;
code_r0x00010837b818:
          uVar11 = 1;
        }
LAB_10837b9a4:
        puVar1 = auStack_d0;
        for (uVar13 = (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)); uVar13 != 0;
            uVar13 = uVar13 - 1) {
          uVar19 = *puVar1;
          pbVar18 = (byte *)((ulong)pbVar18 ^
                            ((ulong)pbVar18 ^ uVar19) &
                            CONCAT44(-(uint)((float)(uVar19 >> 0x20) <
                                            (float)((ulong)pbVar18 >> 0x20)),
                                     -(uint)((float)uVar19 < SUB84(pbVar18,0))));
          param_2 = (ulong)-(uint)(SUB84(pbStack_120,0) < (float)uVar19);
          pbStack_120 = (byte *)((ulong)pbStack_120 ^ ((ulong)pbStack_120 ^ uVar19) & param_2);
          puVar1 = puVar1 + 1;
        }
        ppbVar9 = &pbStack_108;
        func_0x0001081e8ec8();
        pbStack_130 = pbVar18;
      }
      in_ZR = 1;
      ppbVar8 = ppbVar9;
    }
  }
  func_0x00010837cab0(uStack_80,pbVar18);
  if ((bool)in_ZR) {
    return ppbVar8;
  }
  ___stack_chk_fail();
  if (0x2aaaaaa9 < (int)param_4) {
    return (byte **)0x0;
  }
  iVar7 = 0;
  iVar12 = 0;
  uVar13 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU));
  do {
    if (uVar13 == 0) {
      return (byte **)CONCAT44(iVar7,iVar12);
    }
    switch(*(undefined1 *)ppbVar8) {
    case 0:
      goto code_r0x00010837bae8;
    case 1:
code_r0x00010837bae8:
      iVar12 = iVar12 + 1;
      break;
    case 2:
      iVar12 = iVar12 + 2;
      break;
    case 3:
      iVar12 = iVar12 + 2;
      iVar7 = iVar7 + 1;
      break;
    case 4:
      iVar12 = iVar12 + 3;
      break;
    case 5:
      break;
    default:
    }
    ppbVar8 = (byte **)((long)ppbVar8 + 1);
    uVar13 = uVar13 - 1;
  } while( true );
}



/* Entry: 10819e83c; end: 10819e86f;  */

void FUN_10819e83c(void)

{
  FUN_10819e870();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10819e870; end: 10819e897;  */

undefined8 * FUN_10819e870(undefined8 *param_1)

{
  FUN_10837ca38(param_1 + 0x5e);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 10819e898; end: 10819e923;  */

void FUN_10819e898(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if ((*(byte *)((long)param_1 + 4) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x0001081919cc();
  *param_1 = &PTR_FUN_110a2e290;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0x1138270b0;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)((long)param_1 + 0x324) = 0;
  *(undefined1 *)((long)param_1 + 0x32c) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined1 *)((long)param_1 + 0x33c) = 0;
  *(undefined1 *)((long)param_1 + 0x344) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  return;
}



/* Entry: 10819e924; end: 10819eaaf;  */

char FUN_10819e924(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 auStack_a8 [2];
  long lStack_a0;
  char cStack_98;
  undefined1 auStack_8c [40];
  byte bStack_64;
  undefined1 auStack_60 [8];
  byte bStack_58;
  undefined1 auStack_54 [8];
  byte bStack_4c;
  undefined1 auStack_48 [8];
  byte bStack_40;
  undefined1 auStack_3c [8];
  byte bStack_34;
  
  uVar1 = param_1;
  FUN_10819c580();
  if (((((uVar1 & 1) == 0) &&
       ((FUN_10819ee10(auStack_3c,&DAT_10f62b0e2), bStack_34 != 1 ||
        (FUN_10819195c(param_1 + 0x318,auStack_3c), (bStack_34 & 1) == 0)))) &&
      ((FUN_10819ee10(auStack_48,"y"), bStack_40 != 1 ||
       (FUN_10819195c(param_1 + 0x324,auStack_48), (bStack_40 & 1) == 0)))) &&
     ((((FUN_10819ee10(auStack_54,"width"), bStack_4c != 1 ||
        (FUN_10819195c(param_1 + 0x330,auStack_54), (bStack_4c & 1) == 0)) &&
       ((FUN_10819ee10(auStack_60,"height"), bStack_58 != 1 ||
        (FUN_10819195c(param_1 + 0x33c,auStack_60), (bStack_58 & 1) == 0)))) &&
      ((FUN_10819ac7c(auStack_8c,&UNK_10f47e074,param_2,param_3), bStack_64 != 1 ||
       (FUN_108193f58(param_1 + 0x348,auStack_8c), (bStack_64 & 1) == 0)))))) {
    FUN_10819790c(auStack_a8,"xlink:href",param_2,param_3);
    if (cStack_98 == '\x01') {
      *(undefined4 *)(param_1 + 0x308) = auStack_a8[0];
      lVar2 = *(long *)(param_1 + 0x310);
      if (lVar2 != lStack_a0) {
        *(long *)(param_1 + 0x310) = lStack_a0;
        lStack_a0 = lVar2;
      }
    }
    FUN_1081940c8(auStack_a8);
    return cStack_98;
  }
  return '\x01';
}



/* Entry: 10819eab0; end: 10819edcf;  */

bool FUN_10819eab0(undefined8 param_1,undefined8 param_2,float param_3,float param_4,long param_5,
                  long param_6,long param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 uStack_450;
  ulong uStack_448;
  long lStack_440;
  ulong auStack_100 [6];
  ulong uStack_d0;
  ulong uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  ulong uStack_b0;
  byte bStack_a8;
  ulong uStack_a4;
  byte bStack_9c;
  ulong uStack_98;
  byte bStack_90;
  ulong uStack_8c;
  byte bStack_84;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  bStack_a8 = 0;
  uStack_a4 = uStack_a4 & 0xffffffffffffff00;
  bStack_9c = 0;
  uStack_98 = uStack_98 & 0xffffffffffffff00;
  bStack_90 = 0;
  uStack_8c = uStack_8c & 0xffffffffffffff00;
  bStack_84 = 0;
  puVar7 = &uStack_80;
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  uStack_5f = uStack_5f & 0xffffffffffffff;
  lVar10 = param_5;
  do {
    bVar1 = (bStack_a8 & 1) == 0;
    if (bVar1) {
      uStack_b0 = *(ulong *)(param_5 + 0x318);
      bStack_a8 = *(byte *)(param_5 + 800);
    }
    bVar2 = (bStack_9c & 1) == 0;
    if (bVar2) {
      bStack_9c = *(byte *)(param_5 + 0x32c);
      uStack_a4 = *(ulong *)(param_5 + 0x324);
    }
    bVar3 = (bStack_90 & 1) == 0;
    if (bVar3) {
      uStack_98 = *(ulong *)(param_5 + 0x330);
      bStack_90 = *(byte *)(param_5 + 0x338);
    }
    bVar4 = (bStack_84 & 1) == 0;
    if (bVar4) {
      bStack_84 = *(byte *)(param_5 + 0x344);
      uStack_8c = *(ulong *)(param_5 + 0x33c);
    }
    bVar5 = (uStack_5f & 0x100000000000000) == 0;
    if (bVar5) {
      uStack_78 = *(undefined8 *)(param_5 + 0x350);
      uStack_80 = *(ulong *)(param_5 + 0x348);
      param_2 = *(undefined8 *)(param_5 + 0x358);
      uStack_68 = (undefined1)*(undefined8 *)(param_5 + 0x360);
      uStack_5f = *(ulong *)(param_5 + 0x369);
      param_1 = *(undefined8 *)(param_5 + 0x361);
      uStack_67 = (undefined7)param_1;
      uStack_60 = (undefined1)((ulong)param_1 >> 0x38);
      uStack_70 = param_2;
    }
    fStack_bc = (float)param_2;
    fStack_c0 = (float)param_1;
    lVar6 = param_5;
    if (*(int *)(lVar10 + 0x300) != 0) {
      lVar6 = lVar10;
    }
    if ((((((!bVar2 && !bVar1) && !bVar3) && !bVar4) && !bVar5) && (*(int *)(lVar6 + 0x300) != 0))
       || (**(int **)(param_5 + 0x310) == 0)) break;
    FUN_10819fb24(&uStack_448,param_6,param_5 + 0x308);
    if (lStack_440 == 0) {
      param_5 = 0;
    }
    else {
      param_5 = lStack_440;
      if (*(int *)(lStack_440 + 0xc) != 0x21) {
        param_5 = 0;
      }
    }
    FUN_10819b08c(&uStack_448);
    fStack_bc = (float)param_2;
    fStack_c0 = (float)param_1;
    lVar10 = lVar6;
  } while (param_5 != 0);
  uStack_448 = uStack_b0;
  if (bStack_a8 != 1) {
    uStack_448 = 0x100000000;
  }
  auStack_100[0] = uStack_a4;
  if (bStack_9c != 1) {
    auStack_100[0] = 0x100000000;
  }
  uStack_c8 = uStack_98;
  if (bStack_90 != 1) {
    uStack_c8 = 0x100000000;
  }
  uStack_d0 = uStack_8c;
  if (bStack_84 != 1) {
    uStack_d0 = 0x100000000;
  }
  FUN_10819f95c(*(undefined8 *)(param_6 + 0x20),&uStack_448,auStack_100,&uStack_c8,&uStack_d0);
  bVar1 = fStack_bc < param_4 && fStack_c0 < param_3;
  if (bVar1) {
    if (uStack_5f._7_1_ == '\0') {
      puVar7 = (ulong *)0x0;
    }
    puVar9 = auStack_100;
    fStack_b8 = param_3;
    fStack_b4 = param_4;
    FUN_108383398(puVar9);
    FUN_1083835c4();
    func_0x00010819fa88(&uStack_448,param_6,puVar9);
    FUN_108191e3c(lVar6,&uStack_448);
    FUN_10838362c(&uStack_c8,auStack_100);
    FUN_1083bd100(&uStack_450,uStack_c8,1,1,1,puVar7,&fStack_c0);
    uVar8 = uStack_450;
    uStack_450 = 0;
    func_0x000108114f18(param_7 + 8,uVar8);
    func_0x000106f47224(&uStack_450);
    func_0x00010811496c(&uStack_c8);
    FUN_10819fae8(&uStack_448);
    FUN_108383490(auStack_100);
  }
  return bVar1;
}



/* Entry: 10819edd0; end: 10819edd3;  */

undefined8 * FUN_10819edd0(undefined8 *param_1)

{
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 10819edd4; end: 10819ede7;  */

void FUN_10819edd4(void)

{
  FUN_10819ede8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10819ede8; end: 10819ee0f;  */

undefined8 * FUN_10819ede8(undefined8 *param_1)

{
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 10819ee10; end: 10819ee1b;  */

void FUN_10819ee10(undefined8 *param_1)

{
  undefined1 *puVar1;
  int unaff_w21;
  undefined8 uStack_28;
  
  _strcmp();
  if (unaff_w21 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  uStack_28 = 0;
  _strlen();
  puVar1 = &stack0xffffffffffffffc8;
  FUN_10818fe68(puVar1,&uStack_28);
  if ((int)puVar1 != 0) {
    FUN_10819195c(param_1,&uStack_28);
  }
  return;
}



/* Entry: 10819ee1c; end: 10819ee7b;  */

undefined8 * FUN_10819ee1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001081a1554();
  *puVar1 = &PTR_FUN_110a2e320;
  puVar1[0x5e] = 0;
  puVar1[0x60] = 0;
  puVar1[0x5f] = 0;
  FUN_108376ad8(puVar1 + 0x61);
  return param_1;
}



/* Entry: 10819ee7c; end: 10819efd3;  */

ulong FUN_10819ee7c(ulong param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  long lStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = param_1;
  FUN_10819c580();
  if ((uVar2 & 1) == 0) {
    _strcmp(param_2,"points");
    if ((int)param_2 == 0) {
      uStack_80 = uStack_80 & 0xffffffffffffff00;
      uStack_68 = uStack_68 & 0xffffffffffffff00;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      lVar3 = param_3;
      lStack_60 = param_3;
      _strlen();
      lStack_58 = param_3 + lVar3;
      plVar4 = &lStack_60;
      FUN_1081907a0(plVar4,&uStack_50);
      if ((int)plVar4 != 0) {
        uStack_78 = uStack_48;
        uStack_80 = uStack_50;
        uStack_70 = uStack_40;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_50 = 0;
        uStack_68 = CONCAT71(uStack_68._1_7_,1);
      }
      func_0x000108180b88(&uStack_50);
      if ((char)uStack_68 == '\x01') {
        FUN_108191138(param_1 + 0x2f0,&uStack_80);
        cVar1 = (char)uStack_68;
        FUN_10819f100();
        if (cVar1 != '\x01') {
          return uVar2;
        }
        FUN_10837bdec(&uStack_80,*(long *)(param_1 + 0x2f0),
                      (ulong)(*(long *)(param_1 + 0x2f8) - *(long *)(param_1 + 0x2f0)) >> 3,
                      *(int *)(param_1 + 0xc) == 0x22,0,0);
        FUN_108376b90(param_1 + 0x308,&uStack_80);
        FUN_10837ca5c(uStack_80);
        return uVar2;
      }
    }
    else {
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
    }
    FUN_10819f100();
  }
  return uVar2;
}



/* Entry: 10819efd4; end: 10819effb;  */

void FUN_10819efd4(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  *(byte *)(param_1 + 0x316) = *(byte *)(param_1 + 0x316) & 0xfc | param_5 & 3;
                    /* WARNING: Could not recover jumptable at 0x00010819eff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xe0))(param_2,param_1 + 0x308,param_4);
  return;
}



/* Entry: 10819effc; end: 10819f077;  */

void FUN_10819effc(long param_1,long param_2,long param_3)

{
  byte bVar1;
  int *piVar2;
  
  func_0x000108376b14(param_1,param_2 + 0x308);
  piVar2 = (int *)(*(long *)(param_3 + 0x38) + 0x5c);
  func_0x00010819e8b0();
  bVar1 = *(byte *)(param_1 + 0xe) & 0xfc;
  if (*piVar2 == 1) {
    bVar1 = bVar1 + 1;
  }
  *(byte *)(param_1 + 0xe) = bVar1;
  func_0x0001081a43c8(param_2,param_1);
  return;
}



/* Entry: 10819f078; end: 10819f097;  */

undefined4 FUN_10819f078(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x308);
  func_0x0001083773e0();
  return *puVar1;
}



/* Entry: 10819f098; end: 10819f09b;  */

undefined8 * FUN_10819f098(undefined8 *param_1)

{
  FUN_10837ca38(param_1 + 0x61);
  func_0x000108180b88(param_1 + 0x5e);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 10819f09c; end: 10819f0cf;  */

void FUN_10819f09c(void)

{
  FUN_10819f0d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10819f0d0; end: 10819f0ff;  */

undefined8 * FUN_10819f0d0(undefined8 *param_1)

{
  FUN_10837ca38(param_1 + 0x61);
  func_0x000108180b88(param_1 + 0x5e);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 10819f100; end: 10819f107;  */

void FUN_10819f100(void)

{
  char in_stack_00000018;
  
  if (in_stack_00000018 == '\x01') {
    func_0x000108180b88();
  }
  return;
}



/* Entry: 10819f108; end: 10819f14f;  */

void FUN_10819f108(undefined8 *param_1)

{
  func_0x00010819bc3c(param_1,0x24);
  *param_1 = &PTR_FUN_110a2e3b8;
  param_1[0x69] = 0x242480000;
  param_1[0x6a] = 0x242480000;
  param_1[0x6b] = 0x242480000;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)((long)param_1 + 0x36c) = 0;
  *(undefined1 *)((long)param_1 + 0x374) = 0;
  return;
}



/* Entry: 10819f150; end: 10819f26f;  */

byte FUN_10819f150(ulong param_1)

{
  ulong uVar1;
  undefined1 auStack_78 [8];
  byte bStack_70;
  undefined1 auStack_6c [8];
  byte bStack_64;
  undefined8 uStack_60;
  char cStack_58;
  undefined8 uStack_50;
  char cStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  uVar1 = param_1;
  FUN_10819ab3c();
  if ((uVar1 & 1) == 0) {
    FUN_10819f494(&uStack_40,"cx");
    if (cStack_38 == '\x01') {
      *(undefined8 *)(param_1 + 0x348) = uStack_40;
    }
    else {
      FUN_10819f494(&uStack_50,"cy");
      if (cStack_48 == '\x01') {
        *(undefined8 *)(param_1 + 0x350) = uStack_50;
      }
      else {
        FUN_10819f494(&uStack_60,"r");
        if (cStack_58 == '\x01') {
          *(undefined8 *)(param_1 + 0x358) = uStack_60;
        }
        else {
          FUN_10819f494(auStack_6c,"fx");
          if ((bStack_64 != 1) || (FUN_10819195c(param_1 + 0x360,auStack_6c), (bStack_64 & 1) == 0))
          {
            FUN_10819f494(auStack_78,"fy");
            if (bStack_70 == 1) {
              FUN_10819195c(param_1 + 0x36c,auStack_78);
            }
            else {
              bStack_70 = 0;
            }
            goto LAB_10819f1f0;
          }
        }
      }
    }
  }
  bStack_70 = 1;
LAB_10819f1f0:
  return bStack_70 & 1;
}



/* Entry: 10819f270; end: 10819f47b;  */

void FUN_10819f270(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  bool bVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  if (*(int *)(param_3 + 0x344) == 1) {
    param_2 = NEON_fmov(0x3f800000,4);
    uStack_78 = 0x42b40000;
    uStack_80 = param_2;
  }
  else {
    uStack_80 = **(undefined8 **)(param_4 + 0x20);
    uStack_78 = *(undefined4 *)(*(undefined8 **)(param_4 + 0x20) + 1);
  }
  func_0x00010819f85c(&uStack_80,param_3 + 0x358,2);
  uVar4 = param_2;
  func_0x00010819f85c(&uStack_80,param_3 + 0x348,0);
  fVar3 = fVar5;
  func_0x00010819f85c(&uStack_80,param_3 + 0x350,1);
  fVar5 = (float)uVar4;
  fStack_88 = fVar5;
  fStack_84 = fVar3;
  fVar6 = fVar5;
  if (*(char *)(param_3 + 0x368) == '\x01') {
    fVar6 = fVar3;
    func_0x00010819f85c(&uStack_80,param_3 + 0x360,0);
  }
  fStack_8c = fVar3;
  if (*(char *)(param_3 + 0x374) == '\x01') {
    func_0x00010819f85c(&uStack_80,param_3 + 0x36c,1);
  }
  fStack_90 = fVar6;
  if ((float)param_2 == 0.0) {
    puVar2 = (undefined8 *)(param_5 + (long)(int)param_7 * 0x10 + -0x10);
    if ((int)param_7 < 1) {
      puVar2 = (undefined8 *)&UNK_10df079b0;
    }
    uStack_98 = puVar2[1];
    uStack_a0 = *puVar2;
    uStack_a8 = 0;
    FUN_1083bae78(param_1,&uStack_a0,&uStack_a8);
    puVar2 = &uStack_a8;
  }
  else {
    bVar1 = false;
    if ((fVar5 == fVar6) && (bVar1 = false, !NAN(fVar3) && !NAN(fStack_8c))) {
      bVar1 = fVar3 == fStack_8c;
    }
    if (bVar1) {
      uStack_b0 = 0;
      FUN_1081892e4(param_1,param_2,&fStack_88,param_5,&uStack_b0,param_6,param_7,param_8,0,param_9)
      ;
      puVar2 = &uStack_b0;
    }
    else {
      uStack_b8 = 0;
      FUN_108189318(param_1,0,param_2,&fStack_90,&fStack_88,param_5,&uStack_b8,param_6,param_7,
                    param_8,0,param_9);
      puVar2 = &uStack_b8;
    }
  }
  FUN_10810a400(puVar2);
  return;
}


