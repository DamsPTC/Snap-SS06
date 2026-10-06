/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104beea08; end: 104beeaff;  */

void FUN_104beea08(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined4 uStack_34;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a9810(&lStack_28,param_3);
  uStack_30 = 0;
  if (*(long *)(lStack_28 + 0x20) != 0) {
    do {
      func_0x000104befbc0();
      uStack_30 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x000104befb5c();
  uStack_34 = *(undefined4 *)(lStack_28 + 0x18);
  lVar1 = 0x11328ad18;
  FUN_104be7ae4(0x11328ad18,&uStack_34);
  if (lVar1 != 0) {
    func_0x000104befdd8(&lStack_50);
    if (lStack_50 != 0) {
      FUN_104beeb00(&lStack_60,&lStack_50);
      param_1[1] = lStack_58;
      *param_1 = lStack_60;
      lStack_60 = 0;
      lStack_58 = 0;
      FUN_104beeb90(&lStack_60);
      func_0x000104bec70c(&lStack_50);
      goto LAB_104beeae0;
    }
    func_0x000104bec70c(&lStack_50);
  }
  FUN_104beeb58(&lStack_50,&lStack_28);
  func_0x000104beeb78(0x11328ad18,&uStack_34,&lStack_50);
  param_1[1] = lStack_48;
  *param_1 = lStack_50;
  lStack_50 = 0;
  lStack_48 = 0;
  FUN_104beeb90(&lStack_50);
LAB_104beeae0:
  func_0x000104befb50();
  FUN_104bdbf78(&uStack_30);
  FUN_104be7e54(&lStack_28);
  return;
}



/* Entry: 104beeb00; end: 104beeb57;  */

void FUN_104beeb00(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x000104befedc();
    func_0x000104befdd0();
    if (lVar1 != 0) {
      lVar2 = param_2[1];
      *param_1 = lVar1;
      param_1[1] = lVar2;
      if (lVar2 == 0) {
        return;
      }
      do {
        func_0x000104befac8();
      } while (extraout_w10 != 0);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 104beeb58; end: 104beeb8f;  */

void FUN_104beeb58(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_104beebb4(&uStack_11,param_1);
  return;
}



/* Entry: 104beeb90; end: 104beebb3;  */

void FUN_104beeb90(long param_1)

{
  func_0x0001006764f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104beebb4; end: 104beec37;  */

undefined1 * FUN_104beebb4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x000104bf0040();
  uStack_28 = extraout_x8;
  FUN_104beec38(auStack_40,1);
  FUN_104beec8c(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000104beeddc();
  func_0x000104befd94(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000104beff20();
  func_0x000104beeddc();
  func_0x000104befcc0();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_104beec60();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 104beec38; end: 104beec5f;  */

long FUN_104beec38(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_104beec60();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 104beec60; end: 104beec8b;  */

undefined8 * FUN_104beec60(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    puVar1 = (undefined8 *)(param_2 * 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  FUN_104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1107e8588;
  param_1[1] = 0;
  FUN_104beecf0(param_1 + 3);
  return param_1;
}



/* Entry: 104beec8c; end: 104beeccf;  */

undefined8 * FUN_104beec8c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1107e8588;
  param_1[1] = 0;
  FUN_104beecf0(param_1 + 3);
  return param_1;
}



/* Entry: 104beecd0; end: 104beecd3;  */

void FUN_104beecd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e8588;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104beecd4; end: 104beece7;  */

void FUN_104beecd4(void)

{
  func_0x000104beedcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104beece8; end: 104beecef;  */

void FUN_104beece8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104befb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104beecf0; end: 104beed47;  */

undefined8 FUN_104beecf0(undefined8 param_1,long *param_2)

{
  int extraout_w11;
  
  if ((*param_2 != 0) && (*(long *)(*param_2 + 0x10) != 0)) {
    do {
      func_0x000104befc20();
    } while (extraout_w11 != 0);
  }
  func_0x00010065cfc8();
  FUN_104beed48();
  func_0x000104bf010c();
  return param_1;
}



/* Entry: 104beed48; end: 104beedc3;  */

undefined8 * FUN_104beed48(undefined8 *param_1,long *param_2)

{
  int extraout_w11;
  
  *param_1 = &PTR_FUN_1107e85d8;
  if ((*param_2 != 0) && (*(long *)(*param_2 + 0x10) != 0)) {
    do {
      func_0x000104befc20();
    } while (extraout_w11 != 0);
  }
  FUN_104bec750();
  func_0x000104bf010c();
  *param_1 = &PTR_DAT_110873c98;
  param_1[1] = &PTR_DAT_110873cc8;
  return param_1;
}



/* Entry: 104beedc4; end: 104beedeb;  */

void FUN_104beedc4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104beedc8);
  (*pcVar1)();
}



/* Entry: 104beedec; end: 104beee0b;  */

void FUN_104beedec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_104beee0c(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 104beee0c; end: 104beeffb;  */

undefined1  [16] FUN_104beee0c(undefined8 param_1,long *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 in_NG;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  ulong unaff_x23;
  undefined1 auVar13 [16];
  long *aplStack_58 [3];
  
  uVar1 = *param_3;
  uVar9 = (ulong)uVar1;
  uVar12 = param_2[1];
  if (uVar12 != 0) {
    uVar5 = uVar12 - 1;
    uVar11 = (uint)uVar12;
    if ((uVar12 & uVar5) == 0) {
      unaff_x23 = (ulong)(uVar11 - 1 & uVar1);
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar12 - uVar9) < 0;
      unaff_x23 = uVar9;
      if (uVar12 <= uVar9) {
        uVar2 = 0;
        if (uVar11 != 0) {
          uVar2 = uVar1 / uVar11;
        }
        unaff_x23 = (ulong)(uVar1 - uVar2 * uVar11);
      }
    }
    plVar10 = *(long **)(*param_2 + unaff_x23 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_104beeebc;
          uVar7 = plVar10[1];
          if (uVar7 != uVar9) break;
          in_NG = (int)(*(uint *)(plVar10 + 2) - uVar1) < 0;
          if (*(uint *)(plVar10 + 2) == uVar1) {
            uVar4 = 0;
            goto LAB_104beefd4;
          }
        }
        if ((uVar12 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar12 <= uVar7) {
          uVar3 = 0;
          if (uVar12 != 0) {
            uVar3 = uVar7 / uVar12;
          }
          uVar7 = uVar7 - uVar3 * uVar12;
        }
        in_NG = (long)(uVar7 - unaff_x23) < 0;
      } while (uVar7 == unaff_x23);
    }
  }
LAB_104beeebc:
  FUN_104beeffc(aplStack_58,param_2,uVar9);
  func_0x000104beff08(param_2[3]);
  if ((uVar12 == 0) || (func_0x000104befefc(param_1,(int)param_2[4],(float)uVar12), (bool)in_NG)) {
    func_0x000104befa44(uVar12 << 1);
    FUN_104bed8ac(param_2);
    uVar12 = param_2[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x23 = (ulong)((int)uVar12 - 1U & uVar1);
    }
    else {
      unaff_x23 = uVar9;
      if (uVar12 <= uVar9) {
        uVar5 = 0;
        if (uVar12 != 0) {
          uVar5 = uVar9 / uVar12;
        }
        unaff_x23 = uVar9 - uVar5 * uVar12;
      }
    }
  }
  plVar10 = aplStack_58[0];
  lVar6 = *param_2;
  plVar8 = *(long **)(lVar6 + unaff_x23 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_2 + 2;
    *aplStack_58[0] = *plVar8;
    *plVar8 = (long)aplStack_58[0];
    *(long **)(lVar6 + unaff_x23 * 8) = plVar8;
    if (*aplStack_58[0] != 0) {
      uVar9 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        uVar9 = uVar9 & uVar12 - 1;
      }
      else if (uVar12 <= uVar9) {
        uVar5 = 0;
        if (uVar12 != 0) {
          uVar5 = uVar9 / uVar12;
        }
        uVar9 = uVar9 - uVar5 * uVar12;
      }
      *(long **)(lVar6 + uVar9 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar8;
    *plVar8 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_2[3] = param_2[3] + 1;
  FUN_104be7cd0(aplStack_58);
  uVar4 = 1;
LAB_104beefd4:
  auVar13._8_8_ = uVar4;
  auVar13._0_8_ = plVar10;
  return auVar13;
}



/* Entry: 104beeffc; end: 104bef05b;  */

undefined8 *
FUN_104beeffc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 2;
  func_0x000104befe60();
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 1;
  *param_2 = 0;
  param_2[1] = param_3;
  *(undefined4 *)(param_2 + 2) = *param_4;
  FUN_104bef088(param_2 + 3,param_5);
  return param_2 + 2;
}



/* Entry: 104bef05c; end: 104bef087;  */

undefined4 * FUN_104bef05c(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  *param_1 = *param_2;
  FUN_104bef088(param_1 + 2,param_3);
  return param_1;
}



/* Entry: 104bef088; end: 104bef0b7;  */

void FUN_104bef088(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  
  lVar2 = param_2[1];
  lVar1 = 0;
  if (*param_2 != 0) {
    lVar1 = *param_2 + 8;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 104bef0b8; end: 104bef0db;  */

void FUN_104bef0b8(long param_1)

{
  func_0x0001006764f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bef0dc; end: 104bef0df;  */

void FUN_104bef0dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e81c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bef0e0; end: 104bef0f3;  */

void FUN_104bef0e0(void)

{
  func_0x000104bef104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bef0f4; end: 104bef10f;  */

void FUN_104bef0f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104befb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bef110; end: 104bef18f;  */

void FUN_104bef110(long *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  
  func_0x000104bf02c0();
  if (((bool)in_ZR) && (lVar1 = *param_1, lVar1 != 0)) {
    func_0x000100676478();
    for (uVar2 = 0; uVar2 < *(ulong *)(lVar1 + 0x10); uVar2 = uVar2 + 1) {
      func_0x00010b9a9588();
      func_0x00010065cfc8();
      func_0x0001006764fc();
    }
  }
  return;
}



/* Entry: 104bef190; end: 104bef19b;  */

long FUN_104bef190(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 *unaff_x20;
  long *plStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  func_0x000104beffec();
  func_0x00010069c6cc();
  func_0x00010065b998();
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plStack_68 = unaff_x19 + 2;
  plStack_48 = plStack_68;
  if (param_1 == 0) {
    plStack_68 = (long *)0x0;
  }
  else {
    func_0x00010065b9f0();
  }
  puStack_60 = (undefined8 *)((long)plStack_68 + (lVar1 - lVar2));
  plStack_50 = plStack_68 + param_1;
  puStack_58 = puStack_60 + 1;
  *puStack_60 = *unaff_x20;
  func_0x00010065cfc8();
  func_0x00010065ba20();
  lVar2 = unaff_x19[1];
  func_0x00010065ba60(&plStack_68);
  return lVar2;
}



/* Entry: 104bef19c; end: 104bef227;  */

long FUN_104bef19c(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 *unaff_x20;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  func_0x00010069c6cc();
  func_0x00010065b998();
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plStack_58 = unaff_x19 + 2;
  plStack_38 = plStack_58;
  if (param_1 == 0) {
    plStack_58 = (long *)0x0;
  }
  else {
    func_0x00010065b9f0();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar2));
  plStack_40 = plStack_58 + param_1;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *unaff_x20;
  func_0x00010065cfc8();
  func_0x00010065ba20();
  lVar2 = unaff_x19[1];
  func_0x00010065ba60(&plStack_58);
  return lVar2;
}



/* Entry: 104bef228; end: 104bef24b;  */

void FUN_104bef228(long param_1)

{
  func_0x0001006764f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bef24c; end: 104bef24f;  */

void FUN_104bef24c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e8260;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bef250; end: 104bef263;  */

void FUN_104bef250(void)

{
  func_0x000104bef274();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bef264; end: 104bef27f;  */

void FUN_104bef264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104befb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bef280; end: 104bef2a3;  */

void FUN_104bef280(long param_1)

{
  func_0x0001006764f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bef2a4; end: 104bef2a7;  */

void FUN_104bef2a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e82f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bef2a8; end: 104bef2bb;  */

void FUN_104bef2a8(void)

{
  func_0x000104bef2cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bef2bc; end: 104bef2d7;  */

void FUN_104bef2bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104befb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bef2d8; end: 104bef2fb;  */

void FUN_104bef2d8(long param_1)

{
  func_0x0001006764f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bef2fc; end: 104bef2ff;  */

void FUN_104bef2fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e8390;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bef300; end: 104bef313;  */

void FUN_104bef300(void)

{
  func_0x000104bef324();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bef314; end: 104bef32f;  */

void FUN_104bef314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104befb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bef330; end: 104bef35f;  */

ulong FUN_104bef330(ulong param_1)

{
  if (*(byte *)(param_1 + 8) < 2) {
    return 0;
  }
  func_0x00010b9a9518();
  return param_1 & 0xffffffff | 0x100000000;
}



/* Entry: 104bef360; end: 104bef383;  */

void FUN_104bef360(long param_1)

{
  func_0x0001006764f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bef384; end: 104bef387;  */

void FUN_104bef384(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e8428;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bef388; end: 104bef39b;  */

void FUN_104bef388(void)

{
  func_0x000104bef3ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bef39c; end: 104bef3b7;  */

void FUN_104bef39c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104befb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bef3b8; end: 104bef3db;  */

void FUN_104bef3b8(long param_1)

{
  func_0x0001006764f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bef3dc; end: 104bef437;  */

undefined8 FUN_104bef3dc(void)

{
  int iVar1;
  
  if ((bRam00000001130a83c8 & 1) == 0) {
    iVar1 = 0x130a83c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010529dde0();
      func_0x00010b990868(0x1130a83b8);
      ___cxa_guard_release(0x1130a83c8);
    }
  }
  return 0x1130a83b8;
}



/* Entry: 104bef438; end: 104bef493;  */

undefined8 FUN_104bef438(void)

{
  int iVar1;
  
  if ((bRam00000001130a8428 & 1) == 0) {
    iVar1 = 0x130a8428;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_104bef5f8();
      func_0x00010b990784(0x1130a8418);
      ___cxa_guard_release(0x1130a8428);
    }
  }
  return 0x1130a8418;
}



/* Entry: 104bef494; end: 104bef4ef;  */

undefined8 FUN_104bef494(void)

{
  int iVar1;
  
  if ((bRam00000001130a83f8 & 1) == 0) {
    iVar1 = 0x130a83f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_104bef760();
      func_0x00010b990784(0x1130a83e8);
      ___cxa_guard_release(0x1130a83f8);
    }
  }
  return 0x1130a83e8;
}



/* Entry: 104bef4f0; end: 104bef547;  */

undefined8 FUN_104bef4f0(void)

{
  int iVar1;
  
  if ((bRam00000001130a8458 & 1) == 0) {
    iVar1 = 0x130a8458;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001008d6474(0x1130a8448);
      ___cxa_guard_release(0x1130a8458);
    }
  }
  return 0x1130a8448;
}



/* Entry: 104bef548; end: 104bef59f;  */

undefined8 FUN_104bef548(void)

{
  int iVar1;
  
  if ((bRam00000001130a8410 & 1) == 0) {
    iVar1 = 0x130a8410;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130a8400);
      ___cxa_guard_release(0x1130a8410);
    }
  }
  return 0x1130a8400;
}



/* Entry: 104bef5a0; end: 104bef5f7;  */

undefined8 FUN_104bef5a0(void)

{
  int iVar1;
  
  if ((bRam00000001130a8350 & 1) == 0) {
    iVar1 = 0x130a8350;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130a8340);
      ___cxa_guard_release(0x1130a8350);
    }
  }
  return 0x1130a8340;
}



/* Entry: 104bef5f8; end: 104bef64f;  */

undefined8 FUN_104bef5f8(void)

{
  int iVar1;
  
  if ((bRam00000001130a8440 & 1) == 0) {
    iVar1 = 0x130a8440;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e54(0x1130a8430);
      ___cxa_guard_release(0x1130a8440);
    }
  }
  return 0x1130a8430;
}



/* Entry: 104bef650; end: 104bef6ab;  */

undefined8 FUN_104bef650(void)

{
  int iVar1;
  
  if ((bRam00000001130a8368 & 1) == 0) {
    iVar1 = 0x130a8368;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_104bef5f8();
      func_0x00010b990868(0x1130a8358);
      ___cxa_guard_release(0x1130a8368);
    }
  }
  return 0x1130a8358;
}



/* Entry: 104bef6ac; end: 104bef703;  */

undefined8 FUN_104bef6ac(void)

{
  int iVar1;
  
  if ((bRam00000001130a8380 & 1) == 0) {
    iVar1 = 0x130a8380;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130a8370);
      ___cxa_guard_release(0x1130a8380);
    }
  }
  return 0x1130a8370;
}



/* Entry: 104bef704; end: 104bef75f;  */

undefined8 FUN_104bef704(void)

{
  int iVar1;
  
  if ((bRam00000001130a8398 & 1) == 0) {
    iVar1 = 0x130a8398;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_104bef7b8();
      func_0x00010b990784(0x1130a8388);
      ___cxa_guard_release(0x1130a8398);
    }
  }
  return 0x1130a8388;
}



/* Entry: 104bef760; end: 104bef7b7;  */

undefined8 FUN_104bef760(void)

{
  int iVar1;
  
  if ((bRam00000001130a83e0 & 1) == 0) {
    iVar1 = 0x130a83e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130a83d0);
      ___cxa_guard_release(0x1130a83e0);
    }
  }
  return 0x1130a83d0;
}



/* Entry: 104bef7b8; end: 104bef80f;  */

undefined8 FUN_104bef7b8(void)

{
  int iVar1;
  
  if ((bRam00000001130a83b0 & 1) == 0) {
    iVar1 = 0x130a83b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130a83a0);
      ___cxa_guard_release(0x1130a83b0);
    }
  }
  return 0x1130a83a0;
}



/* Entry: 104bef810; end: 104bef87b;  */

void FUN_104bef810(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2 + 0x18,param_1);
  return;
}



/* Entry: 104bef87c; end: 104bef8e3;  */

void FUN_104bef87c(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001006764f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bef8e4; end: 104bef8f7;  */

void FUN_104bef8e4(void)

{
  FUN_104bef9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bef8f8; end: 104bef903;  */

void FUN_104bef8f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104befb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bef904; end: 104bef917;  */

void FUN_104bef904(void)

{
  FUN_104bef928();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bef918; end: 104bef927;  */

undefined1  [16] FUN_104bef918(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 104bef928; end: 104bef9bf;  */

void FUN_104bef928(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_1107e8518;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  FUN_104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    FUN_104bdc09c(0x11328ad40,&uStack_28);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  FUN_104bef3b8(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 104bef9c0; end: 104bef9cb;  */

void FUN_104bef9c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107e84c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bef9cc; end: 104bef9f3;  */

long * FUN_104bef9cc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001003a916c();
  }
  return param_1;
}



/* Entry: 104bef9f4; end: 104bf0533;  */

undefined8 FUN_104bef9f4(undefined8 param_1,long param_2)

{
  int iVar1;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  if ((bRam0000000113846a30 & 1) == 0) {
    iVar1 = 0x13846a30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113846a28 = 1;
      uRam0000000113846a20 = 0;
      ___cxa_guard_release(0x113846a30);
    }
  }
  return 0x113846a20;
}



/* Entry: 104bf0534; end: 104bf08b3;  */

void FUN_104bf0534(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 auStack_f8 [2];
  code *pcStack_e8;
  undefined8 auStack_e0 [2];
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  undefined8 *puStack_a0;
  byte abStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  
  func_0x000104bf14b0();
  uStack_68 = extraout_x8;
  if ((bRam00000001136a3820 & 1) == 0) {
    iVar6 = 0x136a3820;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_104bf0fd8();
      FUN_104bf0be0(0);
      FUN_104bf0be0(1);
      func_0x00010b9941f8(&pcStack_d0);
      func_0x00010b993b40(&pcStack_a8,pcStack_d0,0x113815d30);
      if ((abStack_98[0] & 1) == 0) goto LAB_104bf082c;
      func_0x0001003adcc0(0x1136a3830,&pcStack_a8);
      func_0x0001003b12dc(&pcStack_a8);
      FUN_104bdc2fc(&pcStack_d0);
      ___cxa_guard_release(0x1136a3820);
    }
  }
  func_0x0001003b2110(auStack_b8,0x1136a3838);
  pcStack_d0 = FUN_104bf09c0;
  func_0x000104bf14e0();
  uStack_c8 = param_2;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000104bf140c();
    } while (extraout_w10 != 0);
  }
  FUN_104bf08b4(&pcStack_a8,&pcStack_d0);
  pcStack_e8 = FUN_104bf0a58;
  func_0x000104bf14e0();
  auStack_e0[0] = param_2;
  if (extraout_x8_01 != 0) {
    do {
      func_0x000104bf140c();
    } while (extraout_w10_00 != 0);
  }
  FUN_104bf08b4(abStack_98,&pcStack_e8);
  pcStack_100 = FUN_104bf0adc;
  func_0x000104bf14e0();
  auStack_f8[0] = param_2;
  if (extraout_x8_02 != 0) {
    do {
      func_0x000104bf140c();
    } while (extraout_w10_01 != 0);
  }
  FUN_104bf08b4(auStack_88,&pcStack_100);
  pcStack_118 = FUN_104bf0b54;
  uVar11 = param_3[1];
  uVar10 = *param_3;
  if (param_3[1] != 0) {
    plVar8 = (long *)(param_3[1] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_110 = uVar10;
  uStack_108 = uVar11;
  FUN_104bf08b4(auStack_78,&pcStack_118);
  FUN_104bdb9bc(auStack_b0,auStack_b8,&pcStack_a8,4);
  lVar9 = 0x30;
  do {
    func_0x00010b9a8d98((long)&pcStack_a8 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar5 = lVar9 == -0x10;
  } while (!(bool)uVar5);
  func_0x000104bf10f4(&uStack_110);
  func_0x000104bf10f4(auStack_f8);
  func_0x000104bf10f4(auStack_e0);
  func_0x000104bf14c0();
  func_0x0001003b1f60(auStack_b8);
  puVar7 = (undefined8 *)0x50;
  __Znwm();
  plVar8 = puVar7 + 1;
  *plVar8 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_1107e8628;
  pcVar4 = (code *)(puVar7 + 3);
  func_0x00010b9ace44(pcVar4,auStack_b0);
  puVar7[3] = &PTR_DAT_1107e8678;
  func_0x000104bf14e0();
  puVar7[9] = uVar11;
  puVar7[8] = uVar10;
  if (extraout_x8_03 != 0) {
    do {
      func_0x000104bf140c();
    } while (extraout_w10_02 != 0);
  }
  if ((puVar7[5] == 0) || (uVar5 = *(long *)(puVar7[5] + 8) == -1, pcVar3 = pcVar4, (bool)uVar5)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pcStack_a8 = pcVar4;
    puStack_a0 = puVar7;
    func_0x0001003a8180(puVar7 + 4,&pcStack_a8);
    func_0x0001003a90c4(&pcStack_a8);
    pcStack_d0 = pcVar4;
    pcVar3 = pcVar4;
    if (puVar7[5] != 0) goto LAB_104bf0768;
  }
  else {
LAB_104bf0768:
    do {
      pcStack_d0 = pcVar3;
      func_0x000104bf140c();
      pcVar3 = pcStack_d0;
    } while (extraout_w10_03 != 0);
  }
  *param_1 = (long)pcVar4;
  FUN_104bf13ac(&pcStack_d0);
  FUN_104bdbf78(auStack_b0);
  func_0x000104bf141c(uStack_68);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_104bf082c:
  FUN_104bdc2c8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104bf0834);
  (*pcVar4)();
}



/* Entry: 104bf08b4; end: 104bf09bf;  */

void FUN_104bf08b4(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  code *pcVar4;
  code **ppcVar5;
  code **ppcVar6;
  int iVar7;
  undefined8 extraout_x8;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [16];
  code *pcStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  func_0x000104bf14b0();
  uVar10 = param_2[1];
  uVar9 = *param_2;
  uVar8 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  pcVar4 = (code *)0x40;
  uStack_48 = extraout_x8;
  __Znwm();
  pcStack_78 = FUN_104bf11d8;
  ppuStack_70 = &PTR_FUN_1107e85f8;
  uStack_68 = uVar9;
  uStack_60 = uVar10;
  uStack_58 = uVar8;
  func_0x00010b9ac22c();
  pcStack_80 = pcVar4;
  func_0x000104bf1478();
  pcVar1 = pcVar4 + 8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *(long *)pcVar1 = *(long *)pcVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  iVar7 = (int)&pcStack_78;
  pcStack_78 = pcVar4;
  func_0x00010b9a8ef8(param_1);
  FUN_104bda388(&pcStack_78);
  ppcVar5 = &pcStack_80;
  FUN_104bda3d0();
  func_0x000104bf14c0();
  func_0x000104bf141c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    func_0x000104bf1404();
  }
  else {
    func_0x000104bf1478();
    __ZdlPv(pcVar4);
  }
  ppcVar6 = ppcVar5;
  FUN_104bd46a0(ppcVar5);
  func_0x000104bf13d8();
  func_0x000104bf13f0();
  func_0x000104bf1460();
  func_0x000104bf14a0();
  func_0x00010b9a9608(uVar8);
  FUN_104bf102c(auStack_120,ppcVar6);
  (**(code **)(*(long *)pcVar4 + 0x10))(pcVar4,auStack_100,uVar8,auStack_120);
  func_0x000104bf1498();
  func_0x000104bf1488();
  *(undefined2 *)(ppcVar5 + 1) = 1;
  *ppcVar5 = (code *)0x0;
  return;
}



/* Entry: 104bf09c0; end: 104bf0a57;  */

void FUN_104bf09c0(undefined8 param_1)

{
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_70 [48];
  
  FUN_104bf13d8();
  func_0x000104bf13f0();
  func_0x000104bf1460();
  func_0x000104bf14a0();
  func_0x00010b9a9608();
  FUN_104bf102c(auStack_70,param_1);
  (**(code **)(*unaff_x20 + 0x10))();
  func_0x000104bf1498();
  func_0x000104bf1488();
  *(undefined2 *)(unaff_x19 + 1) = 1;
  *unaff_x19 = 0;
  return;
}



/* Entry: 104bf0a58; end: 104bf0adb;  */

void FUN_104bf0a58(undefined8 param_1)

{
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_70 [48];
  
  FUN_104bf13d8();
  func_0x000104bf13f0();
  func_0x000104bf14a0();
  FUN_104bf102c(auStack_70,param_1);
  (**(code **)(*unaff_x20 + 0x18))();
  func_0x000104bf1498();
  func_0x000104bf1488();
  *(undefined2 *)(unaff_x19 + 1) = 1;
  *unaff_x19 = 0;
  return;
}



/* Entry: 104bf0adc; end: 104bf0b53;  */

void FUN_104bf0adc(undefined8 param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  long *plVar1;
  undefined1 auStack_60 [32];
  
  FUN_104bf13d8();
  func_0x000104bf13f0();
  plVar1 = (long *)*unaff_x21;
  func_0x00010b9a9518(param_1);
  func_0x000104bf14c8();
  (**(code **)(*plVar1 + 0x20))(plVar1,param_1,auStack_60);
  func_0x000104bf1490();
  *(undefined2 *)(unaff_x19 + 1) = 1;
  *unaff_x19 = 0;
  return;
}



/* Entry: 104bf0b54; end: 104bf0bdf;  */

void FUN_104bf0b54(undefined8 param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  long *plVar1;
  undefined8 unaff_x23;
  undefined1 auStack_60 [32];
  
  FUN_104bf13d8();
  func_0x000104bf13f0();
  func_0x000104bf1460();
  plVar1 = (long *)*unaff_x21;
  func_0x00010b9a9588(param_1);
  func_0x00010b9a9518();
  func_0x000104bf14c8();
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,unaff_x23,auStack_60);
  func_0x000104bf1490();
  *(undefined2 *)(unaff_x19 + 1) = 1;
  *unaff_x19 = 0;
  return;
}



/* Entry: 104bf0be0; end: 104bf0f3b;  */

void FUN_104bf0be0(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined8 uStack_168;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined1 auStack_138 [32];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000104bf14b0();
  uStack_38 = extraout_x8;
  func_0x00010527ff8c();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136a3818);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136a3818) = 1;
  if ((bVar1 & 1) != 0) goto LAB_104bf0c3c;
  if ((bRam00000001136a3828 & 1) == 0) goto LAB_104bf0c60;
  while( true ) {
    func_0x000108b80888(0x1136a3840,param_1);
LAB_104bf0c3c:
    func_0x000104bf141c(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_104bf0c60:
    iVar2 = 0x136a3828;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_104bf0fd8();
      pcVar3 = "onFeedEntered";
      func_0x0001003a83dc(&uStack_140,"onFeedEntered");
      func_0x0001003b166c(auStack_160);
      func_0x00010528014c();
      puVar4 = auStack_c8;
      func_0x0001003adcc0(puVar4,pcVar3);
      FUN_104bef4f0();
      func_0x000104bf1470();
      FUN_104bf1120();
      func_0x0001003adcc0(auStack_a8,puVar4);
      FUN_104bdbd48(auStack_150,auStack_160,auStack_c8,3);
      uStack_98 = uStack_140;
      uStack_140 = 0;
      func_0x0001003aef98(auStack_90,auStack_150);
      pcVar3 = "onFeedExited";
      func_0x0001003a83dc(&uStack_168,"onFeedExited");
      func_0x0001003b166c(auStack_188);
      func_0x00010528014c();
      func_0x0001003adcc0(auStack_e8,pcVar3);
      FUN_104bf1120();
      func_0x000104bf1470();
      FUN_104bdbd48(auStack_178,auStack_188,auStack_e8,2);
      uStack_80 = uStack_168;
      uStack_168 = 0;
      func_0x0001003aef98(auStack_78,auStack_178);
      pcVar3 = "queryFeedAutoPaginated";
      func_0x0001003a83dc(&uStack_190,"queryFeedAutoPaginated");
      func_0x0001003b166c(auStack_1b0);
      FUN_104bef760();
      func_0x0001003adcc0(auStack_108,pcVar3);
      FUN_104bf117c();
      func_0x000104bf1470();
      FUN_104bdbd48(auStack_1a0,auStack_1b0,auStack_108,2);
      uStack_68 = uStack_190;
      uStack_190 = 0;
      func_0x0001003aef98(auStack_60,auStack_1a0);
      pcVar3 = "fetchFeed";
      func_0x0001003a83dc(&uStack_1b8,"fetchFeed");
      func_0x0001003b166c(auStack_1d8);
      FUN_104bef5f8();
      puVar4 = auStack_138;
      func_0x0001003adcc0(puVar4,pcVar3);
      FUN_104bef760();
      func_0x000104bf1470();
      FUN_104bf117c();
      func_0x0001003adcc0(auStack_118,puVar4);
      FUN_104bdbd48(auStack_1c8,auStack_1d8,auStack_138,3);
      uStack_50 = uStack_1b8;
      uStack_1b8 = 0;
      func_0x0001003aef98(auStack_48,auStack_1c8);
      FUN_104bdbd44(0x1136a3840,0x113815d30,1,&uStack_98,4);
      lVar5 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_90 + lVar5 + -8);
        lVar5 = lVar5 + -0x18;
        in_ZR = lVar5 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000104bf13fc(auStack_1c8);
      do {
        func_0x000104bf1458();
        func_0x000104bf14ec();
      } while (!(bool)in_ZR);
      func_0x000104bf13fc(auStack_1d8);
      func_0x0001003a8c94(&uStack_1b8);
      func_0x000104bf13fc(auStack_1a0);
      do {
        func_0x000104bf1458();
        func_0x000104bf14ec();
      } while (!(bool)in_ZR);
      func_0x000104bf13fc(auStack_1b0);
      func_0x0001003a8c94(&uStack_190);
      func_0x000104bf13fc(auStack_178);
      do {
        func_0x000104bf1458();
        func_0x000104bf14ec();
      } while (!(bool)in_ZR);
      func_0x000104bf13fc(auStack_188);
      func_0x0001003a8c94(&uStack_168);
      func_0x000104bf13fc(auStack_150);
      do {
        func_0x000104bf1458();
        func_0x000104bf14ec();
      } while (!(bool)in_ZR);
      func_0x000104bf13fc(auStack_160);
      func_0x0001003a8c94(&uStack_140);
      ___cxa_guard_release(0x1136a3828);
    }
  }
  return;
}



/* Entry: 104bf0f3c; end: 104bf0fd7;  */

undefined8 FUN_104bf0f3c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113815d28 & 1) == 0) {
    iVar4 = 0x13815d28;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_104bf0fd8();
      lStack_20 = lRam0000000113815d30;
      if (lRam0000000113815d30 != 0) {
        piVar1 = (int *)(lRam0000000113815d30 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113815d18,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113815d28);
    }
  }
  return 0x113815d18;
}



/* Entry: 104bf0fd8; end: 104bf102b;  */

void FUN_104bf0fd8(void)

{
  int iVar1;
  
  if ((bRam0000000113815d38 & 1) == 0) {
    iVar1 = 0x13815d38;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113815d30,"_djinni_interface_FeedManager");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113815d38);
      return;
    }
  }
  return;
}



/* Entry: 104bf102c; end: 104bf111f;  */

void FUN_104bf102c(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  bVar1 = 1 < *(byte *)(param_2 + 8);
  if (bVar1) {
    FUN_104bdbf60(&uStack_38);
    param_1[1] = uStack_30;
    *param_1 = uStack_38;
    param_1[2] = uStack_28;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_38 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  }
  else {
    *(undefined1 *)param_1 = 0;
  }
  *(bool *)(param_1 + 3) = bVar1;
  return;
}



/* Entry: 104bf1120; end: 104bf117b;  */

undefined8 FUN_104bf1120(void)

{
  int iVar1;
  
  if ((bRam00000001130a8470 & 1) == 0) {
    iVar1 = 0x130a8470;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_104bdbd7c();
      func_0x00010b990784(0x1130a8460);
      ___cxa_guard_release(0x1130a8470);
    }
  }
  return 0x1130a8460;
}



/* Entry: 104bf117c; end: 104bf11d7;  */

undefined8 FUN_104bf117c(void)

{
  int iVar1;
  
  if ((bRam00000001130a8488 & 1) == 0) {
    iVar1 = 0x130a8488;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010529dde0();
      func_0x00010b990784(0x1130a8478);
      ___cxa_guard_release(0x1130a8488);
    }
  }
  return 0x1130a8478;
}



/* Entry: 104bf11d8; end: 104bf1247;  */

void FUN_104bf11d8(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2 + 0x18,param_1);
  return;
}



/* Entry: 104bf1248; end: 104bf12af;  */

long FUN_104bf1248(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 104bf12b0; end: 104bf12c3;  */

void FUN_104bf12b0(void)

{
  FUN_104bf139c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf12c4; end: 104bf12d7;  */

void FUN_104bf12c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bf12cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bf12d8; end: 104bf12eb;  */

void FUN_104bf12d8(void)

{
  FUN_104bf12fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf12ec; end: 104bf12fb;  */

undefined1  [16] FUN_104bf12ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 104bf12fc; end: 104bf139b;  */

void FUN_104bf12fc(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_1107e8678;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  FUN_104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    FUN_104bdc09c(0x11328ad40,&uStack_28);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  func_0x000104bf10f4(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 104bf139c; end: 104bf13ab;  */

void FUN_104bf139c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107e8628;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bf13ac; end: 104bf13d7;  */

long * FUN_104bf13ac(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001003a916c();
  }
  return param_1;
}



/* Entry: 104bf13d8; end: 104bf14f7;  */

undefined8 FUN_104bf13d8(undefined8 param_1,long param_2)

{
  int iVar1;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  if ((bRam0000000113846a30 & 1) == 0) {
    iVar1 = 0x13846a30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113846a28 = 1;
      uRam0000000113846a20 = 0;
      ___cxa_guard_release(0x113846a30);
    }
  }
  return 0x113846a20;
}



/* Entry: 104bf14f8; end: 104bf180b;  */

void FUN_104bf14f8(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000104bf21d8();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136a3850);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136a3850) = 1;
  uStack_38 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_104bf154c;
  if ((bRam00000001136a3858 & 1) == 0) goto LAB_104bf1570;
  while( true ) {
    func_0x000108b80888(0x1136a3878);
LAB_104bf154c:
    func_0x000104bf219c(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_104bf1570:
    iVar2 = 0x136a3858;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_104bf18a8();
      func_0x0001003a83dc(&uStack_c0,"onFeedEntriesUpdated");
      func_0x0001003b166c(auStack_e0);
      if ((bRam00000001136a3860 & 1) == 0) {
        iVar2 = 0x136a3860;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x000105286af4();
          func_0x00010b990868(0x1136a3888);
          ___cxa_guard_release(0x1136a3860);
        }
      }
      func_0x0001003adcc0(auStack_98,0x1136a3888);
      if ((bRam00000001136a3868 & 1) == 0) {
        iVar2 = 0x136a3868;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x000105284b28();
          func_0x00010b990868(0x1136a3898);
          ___cxa_guard_release(0x1136a3868);
        }
      }
      func_0x0001003adcc0(auStack_88,0x1136a3898);
      if ((bRam00000001136a3870 & 1) == 0) {
        iVar2 = 0x136a3870;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x00010528817c();
          func_0x00010b990784(0x1136a38a8);
          ___cxa_guard_release(0x1136a3870);
        }
      }
      func_0x0001003adcc0(auStack_78,0x1136a38a8);
      FUN_104bdbd48(auStack_d0,auStack_e0,auStack_98,3);
      uStack_68 = uStack_c0;
      uStack_c0 = 0;
      func_0x0001003aef98(auStack_60,auStack_d0);
      pcVar3 = "onFeedRequestError";
      func_0x0001003a83dc(&uStack_e8,"onFeedRequestError");
      func_0x0001003b166c(auStack_108);
      func_0x000105287d38();
      puVar4 = auStack_b8;
      func_0x0001003adcc0(puVar4,pcVar3);
      FUN_104bf213c();
      func_0x0001003adcc0(auStack_a8,puVar4);
      FUN_104bdbd48(auStack_f8,auStack_108,auStack_b8,2);
      uStack_50 = uStack_e8;
      uStack_e8 = 0;
      func_0x0001003aef98(auStack_48,auStack_f8);
      FUN_104bdbd44(0x1136a3878,0x113815d58,1,&uStack_68,2);
      lVar5 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_60 + lVar5 + -8);
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x18);
      func_0x000104bf21d0(auStack_f8);
      lVar5 = 0x18;
      do {
        func_0x0001003adc18(auStack_b8 + lVar5);
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != -8);
      func_0x000104bf21d0(auStack_108);
      func_0x0001003a8c94(&uStack_e8);
      func_0x000104bf21d0(auStack_d0);
      lVar5 = 0x28;
      do {
        func_0x0001003adc18(auStack_98 + lVar5);
        lVar5 = lVar5 + -0x10;
        in_ZR = lVar5 == -8;
      } while (!(bool)in_ZR);
      func_0x000104bf21d0(auStack_e0);
      func_0x0001003a8c94(&uStack_c0);
      ___cxa_guard_release(0x1136a3858);
    }
  }
  return;
}



/* Entry: 104bf180c; end: 104bf18a7;  */

undefined8 FUN_104bf180c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113815d50 & 1) == 0) {
    iVar4 = 0x13815d50;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_104bf18a8();
      lStack_20 = lRam0000000113815d58;
      if (lRam0000000113815d58 != 0) {
        piVar1 = (int *)(lRam0000000113815d58 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113815d40,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113815d50);
    }
  }
  return 0x113815d40;
}



/* Entry: 104bf18a8; end: 104bf18fb;  */

void FUN_104bf18a8(void)

{
  int iVar1;
  
  if ((bRam0000000113815d60 & 1) == 0) {
    iVar1 = 0x13815d60;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113815d58,"_djinni_interface_FeedUpdatesListener");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113815d60);
      return;
    }
  }
  return;
}



/* Entry: 104bf18fc; end: 104bf1b0b;  */

undefined1 * FUN_104bf18fc(long param_1,long *param_2,long *param_3,long param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined4 uStack_f8;
  undefined2 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined8 uStack_58;
  
  plVar5 = param_2;
  func_0x000104bf21d8();
  uStack_58 = extraout_x8;
  func_0x00010b9abe10(auStack_90,(plVar5[1] - *plVar5) / 0x378);
  lVar8 = 0;
  for (uVar9 = 0; uVar9 < (ulong)((param_2[1] - *param_2) / 0x378); uVar9 = uVar9 + 1) {
    func_0x000105286890(auStack_a0,*param_2 + lVar8);
    func_0x000104bf21b8();
    func_0x00010b9a8d98(auStack_a0);
    lVar8 = lVar8 + 0x378;
  }
  func_0x00010b9a8f84(auStack_88,auStack_90);
  func_0x000104bf21b0();
  func_0x00010b9abe10(auStack_90,param_3[1] - *param_3 >> 5);
  lVar8 = 0;
  for (uVar9 = 0; uVar9 < (ulong)(param_3[1] - *param_3 >> 5); uVar9 = uVar9 + 1) {
    func_0x000105284a14(auStack_a0,*param_3 + lVar8);
    func_0x000104bf21b8();
    func_0x00010b9a8d98(auStack_a0);
    lVar8 = lVar8 + 0x20;
  }
  func_0x00010b9a8f84(auStack_78,auStack_90);
  func_0x000104bf21b0();
  puVar7 = &uStack_68;
  if (*(char *)(param_4 + 200) == '\x01') {
    func_0x000105287fec(puVar7,param_4);
  }
  else {
    uStack_60 = 1;
    uStack_68 = 0;
  }
  puVar4 = auStack_88;
  uVar6 = 0;
  FUN_104be6a78(auStack_b0,param_1 + 8,0,puVar4,3);
  func_0x00010b9a8d98(auStack_b0);
  lVar8 = 0x20;
  do {
    puVar2 = auStack_88 + lVar8;
    func_0x00010b9a8d98();
    lVar8 = lVar8 + -0x10;
    bVar1 = lVar8 == -0x10;
  } while (!bVar1);
  func_0x000104bf219c(uStack_58);
  if (!bVar1) {
    ___stack_chk_fail();
    lVar8 = -0x30;
    do {
      puVar3 = puVar7;
      func_0x00010b9a8d98(puVar7);
      uStack_f8 = SUB84(puVar4,0);
      puVar7 = puVar7 + -2;
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != 0);
    func_0x000104bf2194();
    pcStack_b8 = FUN_104bf1b0c;
    plStack_e0 = param_3;
    puStack_d8 = puVar7;
    lStack_d0 = lVar8;
    puStack_c8 = puVar2;
    puStack_c0 = &stack0xfffffffffffffff0;
    func_0x000104bf21d8();
    uStack_e8 = extraout_x8_00;
    func_0x000105287bf8(auStack_108,uVar6);
    uStack_f0 = 4;
    FUN_104be6a78(auStack_118,puVar3 + 1,1,auStack_108,2);
    func_0x00010b9a8d98(auStack_118);
    lVar8 = 0x10;
    do {
      puVar4 = auStack_108 + lVar8;
      func_0x00010b9a8d98();
      lVar8 = lVar8 + -0x10;
      bVar1 = lVar8 == -0x10;
    } while (!bVar1);
    func_0x000104bf219c(uStack_e8);
    if (!bVar1) {
      ___stack_chk_fail();
      lVar8 = 0x10;
      do {
        func_0x00010b9a8d98(auStack_108 + lVar8);
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != -0x10);
      func_0x000104bf2194();
      func_0x000104bf220c();
      return puVar4;
    }
    return puVar4;
  }
  return puVar2;
}



/* Entry: 104bf1b0c; end: 104bf1bcf;  */

undefined1 * FUN_104bf1b0c(long param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long lVar3;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  func_0x000104bf21d8();
  uStack_38 = extraout_x8;
  func_0x000105287bf8(auStack_58,param_2);
  uStack_40 = 4;
  uStack_48 = param_3;
  FUN_104be6a78(auStack_68,param_1 + 8,1,auStack_58,2);
  func_0x00010b9a8d98(auStack_68);
  lVar3 = 0x10;
  do {
    puVar2 = auStack_58 + lVar3;
    func_0x00010b9a8d98();
    lVar3 = lVar3 + -0x10;
    bVar1 = lVar3 == -0x10;
  } while (!bVar1);
  func_0x000104bf219c(uStack_38);
  if (bVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar3 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar3);
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x10);
  func_0x000104bf2194();
  func_0x000104bf220c();
  return puVar2;
}



/* Entry: 104bf1bd0; end: 104bf1c07;  */

void FUN_104bf1bd0(void)

{
  func_0x000104bf220c();
  return;
}



/* Entry: 104bf1c08; end: 104bf1c13;  */

undefined8 * FUN_104bf1c08(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  *param_1 = &PTR_FUN_1107e7df0;
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_24 = *(undefined4 *)(param_1[1] + 0x18);
  FUN_104be7ab4(0x11328ad18,&uStack_24);
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  func_0x000104be7d74(param_1 + 5);
  FUN_104be7db4(param_1 + 2);
  FUN_104be7e54(param_1 + 1);
  return param_1;
}



/* Entry: 104bf1c14; end: 104bf1c8b;  */

void FUN_104bf1c14(undefined8 *param_1,undefined8 *param_2)

{
  long extraout_x9;
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  
  func_0x000104bf2218();
  if ((undefined8 *)(extraout_x9 / 0x378) < param_2) {
    if ((undefined8 *)0x49cd42e2049cd4 < param_2) {
      FUN_104bf1c8c();
      func_0x000100671cdc();
      func_0x000104bf2194();
      func_0x000104bf21e8();
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      uVar1 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar1;
      param_1[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
    func_0x0001006719e8(auStack_48);
    func_0x000100671b2c();
    func_0x000100671cdc();
  }
  return;
}



/* Entry: 104bf1c8c; end: 104bf1c97;  */

void FUN_104bf1c8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x000104bf21e8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 104bf1c98; end: 104bf1cbb;  */

void FUN_104bf1c98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 104bf1cbc; end: 104bf1ceb;  */

void FUN_104bf1cbc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x378;
    func_0x00010066f6f4();
  }
  return;
}



/* Entry: 104bf1cec; end: 104bf1d47;  */

void FUN_104bf1cec(long *param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x000104bf2218();
  if ((ulong)(extraout_x9 >> 5) < param_2) {
    if (param_2 >> 0x3b != 0) {
      FUN_104bf1d48();
      func_0x000104bf21c8();
      func_0x000104bf2194();
      func_0x000104bf21e8();
      func_0x00010066df1c();
      FUN_104bf1e14(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1])
                   );
      func_0x000100671c8c();
      return;
    }
    FUN_104bf1d8c(auStack_48);
    func_0x000104bf2200();
    func_0x000104bf21c8();
  }
  return;
}


