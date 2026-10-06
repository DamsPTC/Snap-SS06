/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107535a48; end: 107535a7f;  */

undefined1 * FUN_107535a48(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 in_CY;
  undefined1 *puVar1;
  undefined1 *unaff_x19;
  
  func_0x0001075370d8();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_107535a80();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  *(undefined1 **)(unaff_x19 + 8) = puVar1;
  return puVar1 + -1;
}



/* Entry: 107535a80; end: 107535adf;  */

void FUN_107535a80(void)

{
  long lVar1;
  long extraout_x8;
  
  func_0x000107536e20();
  lVar1 = extraout_x8 + 1;
  FUN_107404fb8();
  func_0x000107536f34();
  if (lVar1 != 0) {
    FUN_107404ea4();
  }
  func_0x0001075372b0();
  func_0x00010753708c();
  FUN_1075359d8();
  func_0x000107537590();
  FUN_1075359f8();
  return;
}



/* Entry: 107535ae0; end: 107535b07;  */

undefined8 FUN_107535ae0(undefined8 param_1)

{
  FUN_107535b08(param_1);
  return param_1;
}



/* Entry: 107535b08; end: 107535b1f;  */

void FUN_107535b08(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if (*param_3 == param_3[1]) {
    if ((bRam00000001131ad550 & 1) == 0) {
      iVar3 = 0x131ad550;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        FUN_107404bb8(0x1131ad540);
        ___cxa_guard_release(0x1131ad550);
      }
    }
    lVar2 = lRam00000001131ad548;
    uVar1 = uRam00000001131ad540;
    param_1[1] = lRam00000001131ad548;
    *param_1 = uVar1;
    if (lVar2 != 0) {
      do {
        func_0x00010740a478();
      } while (extraout_w10 != 0);
    }
    return;
  }
  func_0x000107537194(param_3);
  FUN_107535b3c();
  return;
}



/* Entry: 107535b20; end: 107535b3b;  */

void FUN_107535b20(void)

{
  func_0x000107537194();
  FUN_107535b3c();
  return;
}



/* Entry: 107535b3c; end: 107535b9f;  */

void FUN_107535b3c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x000107536bc8();
  func_0x000107537050();
  FUN_107404c30();
  FUN_107535ba0(uStack_30,param_2);
  func_0x000107536c04();
  func_0x000107404cb4();
  func_0x000107536b94(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107537134();
  func_0x000107404cb4();
  func_0x000107536d48();
  func_0x0001075371ac();
  func_0x000107537148(&UNK_1109adbb8);
  FUN_107535bcc();
  return;
}



/* Entry: 107535ba0; end: 107535bcb;  */

void FUN_107535ba0(void)

{
  func_0x0001075371ac();
  func_0x000107537148(&UNK_1109adbb8);
  FUN_107535bcc();
  return;
}



/* Entry: 107535bcc; end: 107535bcf;  */

void FUN_107535bcc(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107535bd0; end: 107535bf7;  */

undefined8 FUN_107535bd0(undefined8 param_1)

{
  func_0x0001072f8e00(param_1);
  return param_1;
}



/* Entry: 107535bf8; end: 107535c2f;  */

undefined8 * FUN_107535bf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x0001075370d8();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_107535c30();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 107535c30; end: 107535cab;  */

void FUN_107535c30(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  func_0x000107536e20();
  lVar1 = (extraout_x8 >> 3) + 1;
  FUN_1073b55cc();
  func_0x000107536f34();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    FUN_1073b54a0();
  }
  *(undefined8 *)(param_1 + unaff_x21) = *unaff_x20;
  func_0x00010753708c();
  FUN_1073b5480();
  func_0x000107537590();
  FUN_1073b54e0();
  return;
}



/* Entry: 107535cac; end: 107535cd3;  */

undefined8 FUN_107535cac(undefined8 param_1)

{
  FUN_107535cd4(param_1);
  return param_1;
}



/* Entry: 107535cd4; end: 107535ceb;  */

void FUN_107535cd4(undefined8 param_1,long *param_2)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if (*param_2 == param_2[1]) {
    if ((bRam00000001131ad978 & 1) == 0) {
      iVar1 = 0x131ad978;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_107535d70(0x1131ad968);
        ___cxa_guard_release(0x1131ad978);
      }
    }
    func_0x00010753735c();
    if (extraout_x8 != 0) {
      do {
        func_0x00010753734c();
      } while (extraout_w10 != 0);
    }
    return;
  }
  func_0x000107537194(param_2);
  FUN_107535ea0();
  return;
}



/* Entry: 107535cec; end: 107535d6f;  */

void FUN_107535cec(void)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if ((bRam00000001131ad978 & 1) == 0) {
    iVar1 = 0x131ad978;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_107535d70(0x1131ad968);
      ___cxa_guard_release(0x1131ad978);
    }
  }
  func_0x00010753735c();
  if (extraout_x8 != 0) {
    do {
      func_0x00010753734c();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107535d70; end: 107535d8b;  */

void FUN_107535d70(void)

{
  undefined1 uStack_11;
  
  FUN_107535d8c(&uStack_11);
  return;
}



/* Entry: 107535d8c; end: 107535df3;  */

long FUN_107535d8c(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x000107536bc8();
  func_0x000107537050();
  FUN_107535df4();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_1109ba100;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  func_0x000107536c04();
  func_0x000107535e74();
  func_0x000107536b94(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_107535e1c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107535df4; end: 107535e1b;  */

long FUN_107535df4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_107535e1c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107535e1c; end: 107535e43;  */

void FUN_107535e1c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109ba100;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107535e44; end: 107535e47;  */

void FUN_107535e44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ba100;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107535e48; end: 107535e5b;  */

void FUN_107535e48(void)

{
  func_0x000107535e68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107535e5c; end: 107535e83;  */

void FUN_107535e5c(long param_1)

{
  func_0x0001073beff8(param_1 + 0x18);
  FUN_1073bc7cc();
  return;
}



/* Entry: 107535e84; end: 107535e9f;  */

void FUN_107535e84(void)

{
  func_0x000107537194();
  FUN_107535ea0();
  return;
}



/* Entry: 107535ea0; end: 107535f03;  */

void FUN_107535ea0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x000107536bc8();
  func_0x000107537050();
  FUN_107535df4();
  FUN_107535f04(uStack_30,param_2);
  func_0x000107536c04();
  func_0x000107535e74();
  func_0x000107536b94(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107537134();
  func_0x000107535e74();
  func_0x000107536d48();
  func_0x0001075371ac();
  func_0x000107537148(&UNK_1109ba0f0);
  FUN_107535f30();
  return;
}



/* Entry: 107535f04; end: 107535f2f;  */

void FUN_107535f04(void)

{
  func_0x0001075371ac();
  func_0x000107537148(&UNK_1109ba0f0);
  FUN_107535f30();
  return;
}



/* Entry: 107535f30; end: 107535f3b;  */

void FUN_107535f30(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107535f3c; end: 107535f5f;  */

void FUN_107535f3c(void)

{
  func_0x000107536ed4();
  func_0x00010753705c(&PTR_DAT_1109ba150);
  return;
}



/* Entry: 107535f60; end: 107535f7b;  */

void FUN_107535f60(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109ba150;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107535f7c; end: 107536023;  */

void FUN_107535f7c(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 auStack_b0 [56];
  undefined1 auStack_78 [56];
  byte bStack_40;
  undefined8 uStack_38;
  
  func_0x000107536bc8();
  func_0x0001075370c8();
  func_0x0001075372d4(auStack_78);
  if ((bStack_40 & 1) == 0) {
    func_0x0001075374e8(*(undefined8 *)(param_1 + 8));
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107536e80(auStack_b0);
    FUN_107536058(uVar1,auStack_b0);
    func_0x000104c2f1f0();
    func_0x0001075371fc();
  }
  func_0x000107537260();
  func_0x00010753711c();
  func_0x000107536b94(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107537134();
  func_0x000104c2f714();
  func_0x000107537260();
  func_0x000107536d48();
  func_0x00010753759c();
  func_0x0001075372cc();
  func_0x0001075370ac();
  return;
}



/* Entry: 107536024; end: 10753604b;  */

void FUN_107536024(undefined8 param_1)

{
  func_0x00010753759c();
  func_0x0001075372cc(param_1,&PTR_DAT_1109ba1b0);
  func_0x0001075370ac();
  return;
}



/* Entry: 10753604c; end: 107536057;  */

undefined ** FUN_10753604c(void)

{
  return &PTR_DAT_1109ba1b0;
}



/* Entry: 107536058; end: 107536077;  */

long FUN_107536058(long param_1)

{
  func_0x00010753744c();
  FUN_107536078();
  return param_1 + 0x48;
}



/* Entry: 107536078; end: 1075361fb;  */

undefined1  [16] FUN_107536078(float param_1,float param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong uVar4;
  long *unaff_x19;
  long *unaff_x21;
  long *plVar5;
  ulong uVar6;
  ulong unaff_x27;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  func_0x000107537004();
  uVar6 = unaff_x19[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    uVar4 = param_3;
    if ((uVar6 & uVar7) == 0) {
      unaff_x27 = uVar7 & param_3;
    }
    else {
      unaff_x27 = param_3;
      if (uVar6 <= param_3) {
        func_0x000107537570();
      }
    }
    plVar5 = *(long **)(*unaff_x19 + unaff_x27 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar5;
          if (unaff_x21 == (long *)0x0) goto LAB_107536124;
          uVar3 = unaff_x21[1];
          plVar5 = unaff_x21;
          if (uVar3 != param_3) break;
          func_0x0001075374cc();
          if ((uVar4 & 1) != 0) {
            uVar2 = 0;
            goto LAB_1075361e4;
          }
        }
        if ((uVar6 & uVar7) == 0) {
          uVar3 = uVar3 & uVar7;
        }
        else if (uVar6 <= uVar3) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar3 / uVar6;
          }
          uVar3 = uVar3 - uVar1 * uVar6;
        }
      } while (uVar3 == unaff_x27);
    }
  }
LAB_107536124:
  func_0x000107537320();
  FUN_1075361fc();
  func_0x00010753755c();
  if ((uVar6 == 0) || (uVar4 = unaff_x27, param_2 * (float)uVar6 < param_1)) {
    func_0x000107537410();
    func_0x0001075373f8();
    FUN_10753629c();
    uVar6 = unaff_x19[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar4 = uVar6 - 1 & param_3;
    }
    else {
      uVar4 = param_3;
      if (uVar6 <= param_3) {
        func_0x000107537570();
        uVar4 = unaff_x27;
      }
    }
  }
  if (*(long *)(*unaff_x19 + uVar4 * 8) == 0) {
    func_0x000107537174();
    if (extraout_x9 != 0) {
      uVar4 = *(ulong *)(extraout_x9 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar4 = uVar4 & uVar6 - 1;
      }
      else if (uVar6 <= uVar4) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar7 * uVar6;
      }
      *(long **)(extraout_x8 + uVar4 * 8) = unaff_x21;
    }
  }
  else {
    func_0x00010753753c();
  }
  func_0x0001075373e0();
  FUN_107536438();
  uVar2 = 1;
LAB_1075361e4:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = unaff_x21;
  return auVar8;
}



/* Entry: 1075361fc; end: 10753623b;  */

void FUN_1075361fc(void)

{
  func_0x0001075375c8();
  __Znwm(0x80);
  func_0x000107537528();
  FUN_10753623c();
  func_0x000107536f58();
  return;
}



/* Entry: 10753623c; end: 10753625f;  */

void FUN_10753623c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_107536260(param_1,&uStack_18,&uStack_19);
  return;
}



/* Entry: 107536260; end: 10753629b;  */

long FUN_107536260(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c2fe00(param_1,*param_2);
  func_0x000104c2f64c(lVar1 + 0x38);
  return param_1;
}



/* Entry: 10753629c; end: 107536337;  */

void FUN_10753629c(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar4;
  long *extraout_x9;
  long *plVar5;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar7;
  long *plVar8;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar8 = (long *)param_1[1];
  bVar2 = plVar8 <= param_2;
  if (plVar8 < param_2) {
LAB_1075362e4:
    if (param_2 == (long *)0x0) {
      FUN_107536404(param_1);
      param_1[1] = 0;
    }
    else {
      plVar4 = param_1 + 1;
      FUN_10753641c(plVar4);
      FUN_107536404(param_1,plVar4);
      param_1[1] = (long)param_2;
      lVar3 = *param_1;
      for (plVar4 = (long *)0x0; param_2 != plVar4; plVar4 = (long *)((long)plVar4 + 1)) {
        *(undefined8 *)(lVar3 + (long)plVar4 * 8) = 0;
      }
      if (param_1[2] != 0) {
        func_0x000107537514();
        func_0x000107537500();
        lVar3 = extraout_x8;
        plVar4 = extraout_x9;
        uVar6 = extraout_x10;
        plVar8 = extraout_x11;
        while (plVar5 = plVar4, plVar4 = (long *)*plVar5, plVar4 != (long *)0x0) {
          plVar7 = (long *)plVar4[1];
          if (((ulong)param_2 & uVar6) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar6);
          }
          else if (param_2 <= plVar7) {
            uVar1 = 0;
            if (param_2 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)param_2;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
          }
          if (plVar7 != plVar8) {
            if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar7 * 8) = plVar5;
              plVar8 = plVar7;
            }
            else {
              func_0x0001075371c4();
              lVar3 = extraout_x8_00;
              plVar4 = extraout_x9_00;
              uVar6 = extraout_x10_00;
              plVar8 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!bVar2) {
    func_0x000107537234();
    if ((bVar2) && (((ulong)plVar8 & (long)plVar8 - 1U) == 0)) {
      func_0x000107537154();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (param_2 < plVar8) goto LAB_1075362e4;
  }
  return;
}



/* Entry: 107536338; end: 107536403;  */

void FUN_107536338(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar3;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_107536404(param_1);
    param_1[1] = 0;
  }
  else {
    plVar6 = param_1 + 1;
    FUN_10753641c(plVar6);
    FUN_107536404(param_1,plVar6);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x000107537514();
      func_0x000107537500();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x0001075371c4();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_00;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107536404; end: 10753641b;  */

void FUN_107536404(long *param_1,long param_2)

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



/* Entry: 10753641c; end: 107536437;  */

long FUN_10753641c(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_10753645c();
  return param_1;
}



/* Entry: 107536438; end: 10753645b;  */

undefined8 FUN_107536438(undefined8 param_1)

{
  FUN_10753645c(param_1,0);
  return param_1;
}



/* Entry: 10753645c; end: 107536473;  */

void FUN_10753645c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x0001072d1650(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 107536474; end: 1075364b7;  */

void FUN_107536474(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001072d1650(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1075364b8; end: 1075364bf;  */

void FUN_1075364b8(void)

{
  return;
}



/* Entry: 1075364c0; end: 1075364e3;  */

void FUN_1075364c0(void)

{
  func_0x000107536ed4();
  func_0x00010753705c(&PTR_FUN_1109ba1d0);
  return;
}



/* Entry: 1075364e4; end: 1075364ff;  */

void FUN_1075364e4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109ba1d0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107536500; end: 1075365ab;  */

void FUN_107536500(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [64];
  byte bStack_40;
  undefined8 uStack_38;
  
  func_0x000107536bc8();
  func_0x0001075370c8();
  func_0x0001075372d4(auStack_80);
  if ((bStack_40 & 1) == 0) {
    func_0x0001075374f4(*(undefined8 *)(param_1 + 8));
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107536e80(auStack_b8);
    FUN_1075365e0(uVar1,auStack_b8);
    func_0x000104c3302c();
    func_0x000104c2f714(auStack_b8);
  }
  func_0x0001075371e4();
  func_0x00010753711c();
  func_0x000107536b94(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107536d60();
  func_0x000104c2f714();
  func_0x0001075371e4();
  func_0x000107536d48();
  func_0x00010753759c();
  func_0x0001075372cc();
  func_0x0001075370ac();
  return;
}



/* Entry: 1075365ac; end: 1075365d3;  */

void FUN_1075365ac(undefined8 param_1)

{
  func_0x00010753759c();
  func_0x0001075372cc(param_1,&PTR_DAT_1109ba230);
  func_0x0001075370ac();
  return;
}



/* Entry: 1075365d4; end: 1075365df;  */

undefined ** FUN_1075365d4(void)

{
  return &PTR_DAT_1109ba230;
}



/* Entry: 1075365e0; end: 1075365ff;  */

long FUN_1075365e0(long param_1)

{
  func_0x00010753744c();
  FUN_107536600();
  return param_1 + 0x48;
}



/* Entry: 107536600; end: 107536783;  */

undefined1  [16] FUN_107536600(float param_1,float param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong uVar4;
  long *unaff_x19;
  long *unaff_x21;
  long *plVar5;
  ulong uVar6;
  ulong unaff_x27;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  func_0x000107537004();
  uVar6 = unaff_x19[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    uVar4 = param_3;
    if ((uVar6 & uVar7) == 0) {
      unaff_x27 = uVar7 & param_3;
    }
    else {
      unaff_x27 = param_3;
      if (uVar6 <= param_3) {
        func_0x000107537570();
      }
    }
    plVar5 = *(long **)(*unaff_x19 + unaff_x27 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar5;
          if (unaff_x21 == (long *)0x0) goto LAB_1075366ac;
          uVar3 = unaff_x21[1];
          plVar5 = unaff_x21;
          if (uVar3 != param_3) break;
          func_0x0001075374cc();
          if ((uVar4 & 1) != 0) {
            uVar2 = 0;
            goto LAB_10753676c;
          }
        }
        if ((uVar6 & uVar7) == 0) {
          uVar3 = uVar3 & uVar7;
        }
        else if (uVar6 <= uVar3) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar3 / uVar6;
          }
          uVar3 = uVar3 - uVar1 * uVar6;
        }
      } while (uVar3 == unaff_x27);
    }
  }
LAB_1075366ac:
  func_0x000107537320();
  FUN_107536784();
  func_0x00010753755c();
  if ((uVar6 == 0) || (uVar4 = unaff_x27, param_2 * (float)uVar6 < param_1)) {
    func_0x000107537410();
    func_0x0001075373f8();
    FUN_1075367e0();
    uVar6 = unaff_x19[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar4 = uVar6 - 1 & param_3;
    }
    else {
      uVar4 = param_3;
      if (uVar6 <= param_3) {
        func_0x000107537570();
        uVar4 = unaff_x27;
      }
    }
  }
  if (*(long *)(*unaff_x19 + uVar4 * 8) == 0) {
    func_0x000107537174();
    if (extraout_x9 != 0) {
      uVar4 = *(ulong *)(extraout_x9 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar4 = uVar4 & uVar6 - 1;
      }
      else if (uVar6 <= uVar4) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar7 * uVar6;
      }
      *(long **)(extraout_x8 + uVar4 * 8) = unaff_x21;
    }
  }
  else {
    func_0x00010753753c();
  }
  func_0x0001075373e0();
  FUN_10753697c();
  uVar2 = 1;
LAB_10753676c:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = unaff_x21;
  return auVar8;
}



/* Entry: 107536784; end: 1075367c3;  */

void FUN_107536784(void)

{
  func_0x0001075375c8();
  __Znwm(0x88);
  func_0x000107537528();
  FUN_1075367c4();
  func_0x000107536f58();
  return;
}



/* Entry: 1075367c4; end: 1075367df;  */

void FUN_1075367c4(long param_1)

{
  func_0x000104c2fe00();
  *(undefined4 *)(param_1 + 0x38) = 7;
  return;
}



/* Entry: 1075367e0; end: 10753687b;  */

void FUN_1075367e0(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar4;
  long *extraout_x9;
  long *plVar5;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar7;
  long *plVar8;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar8 = (long *)param_1[1];
  bVar2 = plVar8 <= param_2;
  if (plVar8 < param_2) {
LAB_107536828:
    if (param_2 == (long *)0x0) {
      FUN_107536948(param_1);
      param_1[1] = 0;
    }
    else {
      plVar4 = param_1 + 1;
      FUN_107536960(plVar4);
      FUN_107536948(param_1,plVar4);
      param_1[1] = (long)param_2;
      lVar3 = *param_1;
      for (plVar4 = (long *)0x0; param_2 != plVar4; plVar4 = (long *)((long)plVar4 + 1)) {
        *(undefined8 *)(lVar3 + (long)plVar4 * 8) = 0;
      }
      if (param_1[2] != 0) {
        func_0x000107537514();
        func_0x000107537500();
        lVar3 = extraout_x8;
        plVar4 = extraout_x9;
        uVar6 = extraout_x10;
        plVar8 = extraout_x11;
        while (plVar5 = plVar4, plVar4 = (long *)*plVar5, plVar4 != (long *)0x0) {
          plVar7 = (long *)plVar4[1];
          if (((ulong)param_2 & uVar6) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar6);
          }
          else if (param_2 <= plVar7) {
            uVar1 = 0;
            if (param_2 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)param_2;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
          }
          if (plVar7 != plVar8) {
            if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar7 * 8) = plVar5;
              plVar8 = plVar7;
            }
            else {
              func_0x0001075371c4();
              lVar3 = extraout_x8_00;
              plVar4 = extraout_x9_00;
              uVar6 = extraout_x10_00;
              plVar8 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!bVar2) {
    func_0x000107537234();
    if ((bVar2) && (((ulong)plVar8 & (long)plVar8 - 1U) == 0)) {
      func_0x000107537154();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (param_2 < plVar8) goto LAB_107536828;
  }
  return;
}



/* Entry: 10753687c; end: 107536947;  */

void FUN_10753687c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar3;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_107536948(param_1);
    param_1[1] = 0;
  }
  else {
    plVar6 = param_1 + 1;
    FUN_107536960(plVar6);
    FUN_107536948(param_1,plVar6);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x000107537514();
      func_0x000107537500();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x0001075371c4();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_00;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107536948; end: 10753695f;  */

void FUN_107536948(long *param_1,long param_2)

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



/* Entry: 107536960; end: 10753697b;  */

long FUN_107536960(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_1075369a0();
  return param_1;
}



/* Entry: 10753697c; end: 10753699f;  */

undefined8 FUN_10753697c(undefined8 param_1)

{
  FUN_1075369a0(param_1,0);
  return param_1;
}



/* Entry: 1075369a0; end: 1075369b7;  */

void FUN_1075369a0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x0001072684c8(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1075369b8; end: 1075369fb;  */

void FUN_1075369b8(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001072684c8(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1075369fc; end: 107536a03;  */

void FUN_1075369fc(void)

{
  return;
}



/* Entry: 107536a04; end: 107536a27;  */

void FUN_107536a04(void)

{
  func_0x000107536ed4();
  func_0x00010753705c(&PTR_FUN_1109ba250);
  return;
}



/* Entry: 107536a28; end: 107536a43;  */

void FUN_107536a28(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109ba250;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107536a44; end: 107536aef;  */

void FUN_107536a44(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [64];
  byte bStack_40;
  undefined8 uStack_38;
  
  func_0x000107536bc8();
  func_0x0001075370c8();
  func_0x0001075372d4(auStack_80);
  if ((bStack_40 & 1) == 0) {
    func_0x0001075374f4(*(undefined8 *)(param_1 + 8));
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107536e80(auStack_b8);
    func_0x000107267f10(uVar1,auStack_b8);
    func_0x000104c3302c();
    func_0x000104c2f714(auStack_b8);
  }
  func_0x0001075371e4();
  func_0x00010753711c();
  func_0x000107536b94(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107536d60();
  func_0x000104c2f714();
  func_0x0001075371e4();
  func_0x000107536d48();
  func_0x00010753759c();
  func_0x0001075372cc();
  func_0x0001075370ac();
  return;
}



/* Entry: 107536af0; end: 107536b17;  */

void FUN_107536af0(undefined8 param_1)

{
  func_0x00010753759c();
  func_0x0001075372cc(param_1,&PTR_DAT_1109ba2b0);
  func_0x0001075370ac();
  return;
}



/* Entry: 107536b18; end: 1075375e7;  */

undefined ** FUN_107536b18(void)

{
  return &PTR_DAT_1109ba2b0;
}



/* Entry: 1075375e8; end: 1075376b3;  */

undefined8 *
FUN_1075375e8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_107323e8c(param_1 + 2,param_3);
  FUN_107323f18(param_1 + 5,param_4);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1075376b4(param_1 + 8,param_5,&uStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  return param_1;
}



/* Entry: 1075376b4; end: 1075376eb;  */

void FUN_1075376b4(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330
    )(param_1,param_2);
    return;
  }
  uVar1 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar1;
  param_1[2] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  return;
}



/* Entry: 1075376ec; end: 107537873;  */

void FUN_1075376ec(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_3 + 1;
  plVar1 = plVar3;
  (**(code **)(*param_3 + 0x18))();
  if (((int)plVar1 == 0) ||
     (plVar1 = plVar3, (**(code **)(*param_3 + 0x20))(), plVar1 < (long *)0x2)) {
    FUN_107537874();
  }
  else {
    uVar4 = 1;
    (**(code **)(*param_3 + 0x28))(&lStack_58,plVar3);
    plVar2 = &lStack_50;
    (**(code **)(lStack_58 + 0x60))();
    func_0x000107537884();
    uVar5 = 0;
    (**(code **)(*param_3 + 0x28))(&lStack_58,plVar3);
    plVar3 = &lStack_50;
    (**(code **)(lStack_58 + 0x60))(plVar3);
    plVar1 = plVar3;
    func_0x000107537884();
    if (((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) {
      FUN_107537874();
    }
    else {
      if (ABS((double)plVar2) <= 90.0) {
        plVar1 = param_1;
        func_0x000107246514(plVar2,plVar3,param_1,0);
        *(undefined1 *)(param_1 + 2) = 1;
        goto LAB_10753775c;
      }
      plVar1 = param_4;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (param_4,&UNK_10f416666);
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
LAB_10753775c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107537884();
  __Unwind_Resume(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc_1103462b0)
            (param_4,&UNK_10f416622);
  return;
}



/* Entry: 107537874; end: 10753788b;  */

void FUN_107537874(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc_1103462b0)();
  return;
}



/* Entry: 10753788c; end: 107537b27;  */

code ******
FUN_10753788c(undefined1 *param_1,undefined8 param_2,code ******param_3,code ******param_4,
             code ******param_5,code ******param_6)

{
  bool bVar1;
  byte bVar2;
  code ***pppcVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  code ******ppppppcVar7;
  code ******ppppppcVar8;
  code ******ppppppcVar9;
  undefined1 *puVar10;
  ulong uVar11;
  code ******ppppppcVar12;
  code ****ppppcVar13;
  code ******UNRECOVERED_JUMPTABLE;
  undefined1 uVar14;
  char *pcVar15;
  code ******ppppppcVar16;
  code ******ppppppcVar17;
  code ******ppppppcVar18;
  code *****pppppcVar19;
  code ******ppppppcVar20;
  code ******ppppppcVar21;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  undefined8 extraout_x8_09;
  undefined8 extraout_x8_10;
  code *extraout_x9;
  code ******ppppppcVar22;
  undefined1 *unaff_x24;
  code ******ppppppcVar23;
  code *****pppppcVar24;
  code *****pppppcVar25;
  code ***apppcStack_1248 [2];
  byte bStack_1238;
  code ***apppcStack_1230 [2];
  code ****appppcStack_1220 [9];
  undefined8 uStack_11d8;
  code ****appppcStack_1180 [10];
  code ****appppcStack_1130 [10];
  code ****appppcStack_10e0 [10];
  code *****apppppcStack_1090 [10];
  byte bStack_1040;
  undefined8 uStack_1038;
  code ****ppppcStack_fd8;
  undefined1 uStack_fd0;
  undefined4 uStack_f70;
  undefined8 uStack_f68;
  code *****pppppcStack_f60;
  code ****ppppcStack_f58;
  code ***pppcStack_f50;
  code *****pppppcStack_f48;
  code *****pppppcStack_f40;
  code *****pppppcStack_f38;
  undefined8 *****pppppuStack_f30;
  code *pcStack_f28;
  code ***pppcStack_f18;
  code ****appppcStack_f10 [3];
  undefined1 auStack_ef8 [24];
  undefined1 auStack_ee0 [56];
  code ****appppcStack_ea8 [10];
  code ****appppcStack_e58 [7];
  byte bStack_e20;
  code ***pppcStack_e18;
  undefined1 auStack_e10 [104];
  undefined8 uStack_da8;
  code *****pppppcStack_da0;
  code ****ppppcStack_d98;
  code *****pppppcStack_d90;
  code *****pppppcStack_d88;
  code *****pppppcStack_d80;
  code *****pppppcStack_d78;
  undefined8 *****pppppuStack_d70;
  code *pcStack_d68;
  code ****appppcStack_d40 [10];
  code ****appppcStack_cf0 [10];
  code ****appppcStack_ca0 [10];
  code ****ppppcStack_c50;
  undefined1 auStack_c48 [16];
  long lStack_c38;
  undefined1 auStack_c30 [48];
  byte bStack_c00;
  code ****appppcStack_bf8 [8];
  undefined8 uStack_bb8;
  code *****pppppcStack_bb0;
  code *****pppppcStack_ba8;
  code *****pppppcStack_ba0;
  code *****pppppcStack_b98;
  code *****pppppcStack_b90;
  code *****pppppcStack_b88;
  undefined8 *****pppppuStack_b80;
  code *pcStack_b78;
  code ****ppppcStack_b70;
  undefined8 uStack_b68;
  byte bStack_b60;
  code ****appppcStack_b58 [3];
  code ****ppppcStack_b40;
  undefined8 uStack_b38;
  char cStack_b30;
  code ****appppcStack_b28 [11];
  undefined1 auStack_ad0 [16];
  code ****appppcStack_ac0 [9];
  undefined8 uStack_a78;
  undefined8 *****pppppuStack_a30;
  code *pcStack_a28;
  undefined1 uStack_a11;
  code ****appppcStack_a10 [10];
  code ****ppppcStack_9c0;
  code ****ppppcStack_9b8;
  code ****appppcStack_9b0 [9];
  undefined8 uStack_968;
  code *****pppppcStack_960;
  code *****pppppcStack_958;
  code *****pppppcStack_950;
  code *****pppppcStack_948;
  undefined1 *****pppppuStack_940;
  code *pcStack_938;
  code ****appppcStack_928 [3];
  code ****ppppcStack_910;
  code ****ppppcStack_908;
  byte bStack_900;
  undefined1 auStack_8f0 [8];
  undefined4 uStack_8e8;
  code ****appppcStack_8e0 [12];
  code ****appppcStack_880 [9];
  undefined8 uStack_838;
  code ****ppppcStack_830;
  code *****pppppcStack_828;
  code *****pppppcStack_820;
  code *****pppppcStack_818;
  code *****pppppcStack_810;
  code *****pppppcStack_808;
  undefined1 ****ppppuStack_800;
  code *pcStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  code ****ppppcStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined1 auStack_7c0 [16];
  undefined4 auStack_7b0 [2];
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  char cStack_770;
  undefined8 uStack_768;
  code *****pppppcStack_760;
  code *****pppppcStack_758;
  code *****pppppcStack_750;
  code *****pppppcStack_748;
  undefined1 ***pppuStack_740;
  code *pcStack_738;
  code ****appppcStack_730 [3];
  code ****appppcStack_718 [3];
  code ****appppcStack_700 [3];
  code ****appppcStack_6e8 [3];
  undefined1 auStack_6d0 [4];
  undefined1 uStack_6cc;
  undefined1 auStack_6b8 [80];
  code ****appppcStack_668 [10];
  code ****appppcStack_618 [10];
  undefined1 auStack_5c8 [32];
  undefined1 uStack_5a8;
  undefined1 auStack_590 [56];
  undefined1 uStack_558;
  byte bStack_500;
  undefined8 uStack_4f8;
  undefined1 **ppuStack_4b0;
  code *pcStack_4a8;
  code ****ppppcStack_498;
  undefined1 auStack_490 [8];
  code ****ppppcStack_488;
  code ****appppcStack_480 [6];
  char cStack_450;
  code ****appppcStack_448 [7];
  byte bStack_410;
  undefined8 uStack_408;
  code *****pppppcStack_400;
  code *****pppppcStack_3f8;
  code *****pppppcStack_3f0;
  code *****pppppcStack_3e8;
  undefined1 *puStack_3e0;
  code *pcStack_3d8;
  code ****ppppcStack_3d0;
  undefined8 uStack_3c8;
  undefined1 uStack_3c0;
  code ****ppppcStack_3b0;
  undefined8 uStack_3a8;
  undefined1 uStack_3a0;
  undefined1 auStack_398 [4];
  undefined1 uStack_394;
  code ****ppppcStack_390;
  undefined8 uStack_388;
  byte bStack_380;
  undefined1 auStack_370 [8];
  undefined4 uStack_368;
  code ****ppppcStack_360;
  undefined8 uStack_358;
  byte bStack_350;
  undefined4 uStack_348;
  undefined **ppuStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_318;
  undefined1 uStack_314;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  code ****appppcStack_2e8 [9];
  undefined1 auStack_2a0 [64];
  undefined1 uStack_260;
  undefined1 auStack_258 [32];
  undefined1 uStack_238;
  code ****appppcStack_150 [33];
  undefined8 uStack_48;
  
  ppppppcVar8 = (code ******)&ppppcStack_3d0;
  func_0x000107539ccc();
  ppppcStack_360 = (code ****)CONCAT44(ppppcStack_360._4_4_,0xb);
  uStack_348 = 0;
  uStack_330 = 0;
  uStack_328 = 0;
  ppuStack_340 = &PTR_DAT_110996720;
  uStack_338 = 0;
  uStack_320 = 0xb;
  uStack_318 = 0;
  uStack_314 = 1;
  uStack_308 = 0;
  uStack_300 = 0;
  uStack_310 = 0;
  uStack_48 = extraout_x8;
  FUN_10743cc34(auStack_258,&ppppcStack_360,1);
  FUN_10743d7bc(appppcStack_150,auStack_258);
  func_0x000107288cd8(auStack_258);
  func_0x000107262330(&ppppcStack_360);
  ppppppcVar7 = param_3;
  FUN_107537b28();
  if ((int)ppppppcVar7 == 0) {
    pcVar15 = (char *)param_3;
    ppppppcVar20 = param_4;
    ppppppcVar7 = param_5;
    FUN_107537eec(&ppppcStack_360);
    if ((bStack_350 & 1) == 0) {
      *param_1 = 0;
      param_1[0x60] = 0;
    }
    else {
      uStack_3c8 = uStack_358;
      ppppcStack_3d0 = ppppcStack_360;
      ppppcStack_360 = (code ****)0x0;
      uStack_358 = 0;
      uStack_3c0 = 1;
      FUN_10753846c(appppcStack_2e8,param_3);
      ppppppcVar20 = (code ******)appppcStack_2e8;
      FUN_107539324(auStack_258);
      func_0x000107539f7c();
      func_0x000107284d8c(auStack_258);
      func_0x000107267ed0(appppcStack_2e8);
      func_0x0001072c95d0(&ppppcStack_3d0);
      pcVar15 = (char *)ppppppcVar8;
    }
    func_0x0001072c95d0(&ppppcStack_360);
  }
  else {
    uStack_368 = 2;
    func_0x0001072f6b34(&ppppcStack_360,auStack_370,1);
    func_0x0001072c9884(auStack_370);
    auStack_398[0] = 0;
    uStack_394 = 0;
    auStack_258[0] = 0;
    uStack_238 = 0;
    ppppppcVar7 = (code ******)auStack_398;
    param_6 = (code ******)auStack_258;
    ppppppcVar20 = param_5;
    func_0x000107771274(&ppppcStack_390,&ppppcStack_360,param_3);
    func_0x0001072c94e0(auStack_258);
    if ((bStack_380 & 1) == 0) {
      func_0x000107771558(auStack_258,&ppppcStack_360);
      pcVar15 = auStack_258;
      func_0x000100066230(param_4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_258);
      *param_1 = 0;
      param_1[0x60] = 0;
    }
    else {
      uStack_3a8 = uStack_388;
      ppppcStack_3b0 = ppppcStack_390;
      ppppcStack_390 = (code ****)0x0;
      uStack_388 = 0;
      uStack_3a0 = 1;
      auStack_2a0[0] = 0;
      uStack_260 = 0;
      pcVar15 = (char *)&ppppcStack_3b0;
      ppppppcVar20 = (code ******)auStack_2a0;
      FUN_107539324(auStack_258);
      func_0x000107539f7c();
      func_0x000107284d8c(auStack_258);
      func_0x000107267ed0(auStack_2a0);
      func_0x000107539f58();
    }
    func_0x0001072c95d0(&ppppcStack_390);
    func_0x0001072ca718(&ppppcStack_360);
  }
  ppppppcVar8 = (code ******)appppcStack_150;
  FUN_10743d7e4();
  func_0x000107539ca4(uStack_48);
  if ((bool)in_ZR) {
    return ppppppcVar8;
  }
  ___stack_chk_fail();
  func_0x0001072c95d0(&ppppcStack_390);
  func_0x0001072ca718(&ppppcStack_360);
  ppppppcVar9 = (code ******)appppcStack_150;
  FUN_10743d7e4();
  func_0x000107539d2c();
  pcStack_3d8 = FUN_107537b28;
  ppppppcVar22 = ppppppcVar9;
  pppppcStack_400 = (code *****)param_5;
  pppppcStack_3f8 = (code *****)param_3;
  pppppcStack_3f0 = (code *****)param_4;
  pppppcStack_3e8 = (code *****)ppppppcVar8;
  puStack_3e0 = &stack0xfffffffffffffff0;
  func_0x000107539ccc();
  UNRECOVERED_JUMPTABLE = ppppppcVar22 + 1;
  ppppppcVar8 = UNRECOVERED_JUMPTABLE;
  uStack_408 = extraout_x8_00;
  (*(code *)(*ppppppcVar22)[3])();
  if ((int)ppppppcVar8 == 0) {
LAB_107537c0c:
    ppppppcVar22 = (code ******)0x0;
  }
  else {
    func_0x000107539f2c();
    func_0x000107539e00();
    bVar1 = ppppppcVar8 == (code ******)0x0;
    ppppppcVar8 = (code ******)0x0;
    if (bVar1) goto LAB_107537c0c;
    func_0x000107539e60();
    param_3 = (code ******)&ppppcStack_488;
    func_0x000107539fac(&ppppcStack_488,UNRECOVERED_JUMPTABLE);
    ppppppcVar8 = (code ******)appppcStack_480;
    (*(code *)ppppcStack_488[0xd])(appppcStack_448);
    func_0x000107539e4c();
    if ((bStack_410 & 1) == 0) goto LAB_107537c44;
    pcVar15 = &DAT_10f41677d;
    func_0x000107539d3c();
    if ((int)ppppppcVar8 == 0) {
      pcVar15 = &UNK_10f416779;
      func_0x000107539d3c();
      if (((ulong)ppppppcVar8 & 1) == 0) {
        pcVar15 = &UNK_10f416781;
        func_0x000107539d3c();
        if (((ulong)ppppppcVar8 & 1) == 0) {
          pcVar15 = "none";
          func_0x000107539d3c();
          if (((ulong)ppppppcVar8 & 1) != 0) goto LAB_107537c44;
          pcVar15 = &DAT_10f416776;
          func_0x000107539d3c();
          if ((int)ppppppcVar8 != 0) {
            func_0x000107539e60();
            param_3 = (code ******)&ppppcStack_498;
            func_0x000107539da0(&ppppcStack_498);
            puVar10 = auStack_490;
            (*(code *)ppppcStack_498[0xd])(&ppppcStack_488);
            func_0x000107539db8();
            func_0x000107539f2c();
            func_0x000107539e00();
            in_ZR = puVar10 == (undefined1 *)0x3;
            if ((undefined1 *)0x2 < puVar10) {
              in_ZR = cStack_450 == '\x01';
              if ((bool)in_ZR) {
                func_0x000107539e60();
                func_0x000107539e24();
                ppppppcVar22 = ppppppcVar9 + 1;
                (*(code *)ppppcStack_498[3])(ppppppcVar22);
                func_0x000107539db8();
              }
              else {
                ppppppcVar22 = (code ******)0x1;
              }
              goto LAB_107537cfc;
            }
            goto LAB_107537c04;
          }
          pcVar15 = &DAT_10f2f497c;
          func_0x000107539d3c();
          if (((ulong)ppppppcVar8 & 1) == 0) {
            pcVar15 = &DAT_10f416771;
            func_0x000107539d3c();
            if (((ulong)ppppppcVar8 & 1) != 0) goto LAB_107537d68;
            pcVar15 = ">";
            func_0x000107539d3c();
            if (((ulong)ppppppcVar8 & 1) != 0) goto LAB_107537d68;
            pcVar15 = &DAT_10f41676e;
            func_0x000107539d3c();
            if (((ulong)ppppppcVar8 & 1) != 0) goto LAB_107537d68;
            pcVar15 = "<";
            func_0x000107539d3c();
            if (((ulong)ppppppcVar8 & 1) != 0) goto LAB_107537d68;
            pcVar15 = &DAT_10f41676b;
            func_0x000107539d3c();
            if ((int)ppppppcVar8 != 0) goto LAB_107537d68;
            func_0x000107539ea0();
            func_0x000107539d3c();
            if (((ulong)ppppppcVar8 & 1) == 0) {
              func_0x000107539fd4();
              func_0x000107539d3c();
              if ((int)ppppppcVar8 != 0) goto LAB_107537dec;
            }
            else {
LAB_107537dec:
              param_5 = (code ******)&ppppcStack_488;
              param_3 = (code ******)0x1;
              while( true ) {
                func_0x000107539f2c();
                func_0x000107539e00();
                in_ZR = param_3 == ppppppcVar8;
                if (ppppppcVar8 <= param_3) break;
                func_0x000107539e60();
                pcVar15 = (char *)param_3;
                (*extraout_x9)(&ppppcStack_488,UNRECOVERED_JUMPTABLE);
                ppppppcVar8 = (code ******)&ppppcStack_488;
                FUN_107537b28();
                if (((ulong)ppppppcVar8 & 1) == 0) {
                  ppppppcVar8 = (code ******)appppcStack_480;
                  (*(code *)ppppcStack_488[10])();
                  if (((uint)ppppppcVar8 >> 8 & 1) == 0) {
                    func_0x000107539e4c();
                    goto LAB_107537c44;
                  }
                }
                func_0x000107539e4c();
                param_3 = (code ******)((long)param_3 + 1);
              }
            }
LAB_107537e44:
            ppppppcVar22 = (code ******)0x1;
          }
          else {
LAB_107537d68:
            func_0x000107539f2c();
            func_0x000107539e00();
            in_ZR = ppppppcVar8 == (code ******)0x3;
            if (!(bool)in_ZR) goto LAB_107537e44;
            func_0x000107539e60();
            param_3 = (code ******)&ppppcStack_488;
            func_0x000107539da0(&ppppcStack_488);
            uVar11 = 0;
            (*(code *)ppppcStack_488[3])();
            if ((uVar11 & 1) == 0) {
              func_0x000107539e60();
              func_0x000107539e24();
              ppppppcVar22 = ppppppcVar9 + 1;
              (*(code *)ppppcStack_498[3])(ppppppcVar22);
              func_0x000107539db8();
            }
            else {
              ppppppcVar22 = (code ******)0x1;
            }
            func_0x000107539e4c();
          }
          goto LAB_107537c48;
        }
      }
LAB_107537c44:
      ppppppcVar22 = (code ******)0x0;
    }
    else {
      func_0x000107539f2c();
      func_0x000107539e00();
      in_ZR = ppppppcVar8 == (code ******)0x2;
      if (ppppppcVar8 < (code ******)0x2) goto LAB_107537c44;
      func_0x000107539e60();
      ppppppcVar9 = (code ******)&ppppcStack_498;
      func_0x000107539da0(&ppppcStack_498);
      (*(code *)ppppcStack_498[0xd])(&ppppcStack_488,auStack_490);
      func_0x000107539db8();
      in_ZR = cStack_450 == '\x01';
      if ((bool)in_ZR) {
        func_0x000107539ff8();
        uVar11 = 0;
        func_0x000107278484();
        if ((uVar11 & 1) != 0) goto LAB_107537c04;
        func_0x000107539fec();
        pppppcVar25 = &ppppcStack_488;
        func_0x000107278484(pppppcVar25);
        ppppppcVar22 = (code ******)(ulong)((uint)pppppcVar25 ^ 1);
      }
      else {
LAB_107537c04:
        ppppppcVar22 = (code ******)0x0;
      }
LAB_107537cfc:
      func_0x00010724b3d8(&ppppcStack_488);
    }
LAB_107537c48:
    ppppppcVar8 = (code ******)appppcStack_448;
    func_0x00010724b3d8();
  }
  func_0x000107539ca4(uStack_408);
  if ((bool)in_ZR) {
    return ppppppcVar22;
  }
  ___stack_chk_fail();
  func_0x0001072f5f6c(&ppppcStack_488);
  func_0x00010724b3d8(appppcStack_448);
  func_0x000107539d2c();
  pcStack_4a8 = FUN_107537eec;
  UNRECOVERED_JUMPTABLE = (code ******)appppcStack_730;
  pppppcVar25 = appppcStack_730;
  ppuStack_4b0 = &puStack_3e0;
  func_0x000107539f04();
  func_0x000107539cb8();
  uStack_4f8 = extraout_x8_01;
  ppppppcVar12 = (code ******)((long)pcVar15 + 8);
  ppppppcVar22 = ppppppcVar12;
  (*(code *)(*(code ******)pcVar15)[2])();
  if ((int)ppppppcVar22 == 0) {
    ppppppcVar22 = ppppppcVar12;
    (*(code *)(*param_5)[3])();
    if ((int)ppppppcVar22 != 0) {
      func_0x00010753a004();
      func_0x000107539df8();
      bVar1 = ppppppcVar22 != (code ******)0x0;
      ppppppcVar22 = (code ******)0x0;
      if (bVar1) {
        unaff_x24 = auStack_590;
        func_0x000107539fac(auStack_590,ppppppcVar12);
        func_0x000107539fbc();
        ppppppcVar22 = (code ******)auStack_590;
        func_0x0001072f5f6c();
        if ((bStack_500 & 1) == 0) {
          pcVar15 = &UNK_10f41674a;
          func_0x000107539f6c();
          func_0x000107539e54();
        }
        else {
          func_0x00010753a004();
          func_0x000107539df8();
          in_ZR = ppppppcVar22 == (code ******)0x1;
          if (ppppppcVar22 < (code ******)0x2) {
            func_0x000107539ea0();
            uVar5 = (uint)ppppppcVar22;
            func_0x000107539d34();
            ppppppcVar22 = (code ******)auStack_590;
            pcVar15 = (char *)(ulong)(uVar5 ^ 1);
            ppppppcVar20 = ppppppcVar9 + 8;
            FUN_107538f54();
            func_0x000107539dd4();
LAB_107537fc8:
            func_0x00010753a010();
            if (ppppppcVar22 != (code ******)0x0) {
              func_0x000107539cec();
            }
          }
          else {
            func_0x000107539d34();
            if ((int)ppppppcVar22 == 0) {
              pcVar15 = &DAT_10f2f497c;
              func_0x000107539d34();
              if (((ulong)ppppppcVar22 & 1) == 0) {
                pcVar15 = "<";
                func_0x000107539d34();
                if (((ulong)ppppppcVar22 & 1) == 0) {
                  pcVar15 = ">";
                  func_0x000107539d34();
                  if (((ulong)ppppppcVar22 & 1) == 0) {
                    pcVar15 = &DAT_10f41676b;
                    func_0x000107539d34();
                    if (((ulong)ppppppcVar22 & 1) == 0) {
                      pcVar15 = &DAT_10f41676e;
                      func_0x000107539d34();
                      if ((int)ppppppcVar22 == 0) {
                        func_0x000107539d34();
                        if ((int)ppppppcVar22 == 0) {
                          func_0x000107539ea0();
                          func_0x000107539d34();
                          if ((int)ppppppcVar22 == 0) {
                            func_0x000107539fd4();
                            func_0x000107539d34();
                            if ((int)ppppppcVar22 != 0) {
                              func_0x000107539fd4();
                              func_0x00010002b838(auStack_590);
                              func_0x000107539d1c(appppcStack_668);
                              FUN_1075391e8();
                              pcVar15 = auStack_590;
                              UNRECOVERED_JUMPTABLE = (code ******)appppcStack_668;
                              param_6 = ppppppcVar9 + 8;
                              func_0x000107539d94();
                              FUN_107538638();
                              pppppcVar25 = appppcStack_668;
                              goto LAB_1075381e0;
                            }
                            func_0x000107539d34();
                            if ((int)ppppppcVar22 == 0) {
                              pcVar15 = &DAT_10f416776;
                              func_0x000107539d34();
                              if ((int)ppppppcVar22 != 0) {
                                func_0x000107539d1c();
                                FUN_107538fe8();
                                ppppppcVar22 = ppppppcVar8;
                                goto LAB_107537ffc;
                              }
                              func_0x000107539d34();
                              if ((int)ppppppcVar22 == 0) {
                                pcVar15 = &DAT_10f41677d;
                                func_0x000107539d34();
                                if ((int)ppppppcVar22 != 0) {
                                  ppppppcVar7 = ppppppcVar9 + 8;
                                  func_0x000107539f88();
                                  ppppppcVar22 = ppppppcVar8;
                                  goto LAB_107537ffc;
                                }
                                pcVar15 = &UNK_10f416781;
                                func_0x000107539d34();
                                if ((int)ppppppcVar22 == 0) {
                                  func_0x000107539e74();
                                  func_0x000107539dd4();
                                  goto LAB_107537fc8;
                                }
                                func_0x000107539d5c();
                                ppppppcVar7 = ppppppcVar9 + 8;
                                func_0x000107539f88(appppcStack_730);
                                pcVar15 = auStack_590;
                                func_0x000107539d0c();
                              }
                              else {
                                func_0x000107539d5c();
                                func_0x000107539d1c(appppcStack_718);
                                FUN_107538fe8();
                                pcVar15 = auStack_590;
                                UNRECOVERED_JUMPTABLE = (code ******)appppcStack_718;
                                func_0x000107539d0c();
                                pppppcVar25 = appppcStack_718;
                              }
                              func_0x0001072c95d0(pppppcVar25);
                            }
                            else {
                              func_0x000107539d5c();
                              func_0x000107539ea0();
                              func_0x00010002b838(auStack_5c8);
                              func_0x000107539d1c(auStack_6b8);
                              FUN_1075391e8();
                              param_6 = ppppppcVar9 + 8;
                              ppppppcVar7 = param_3;
                              FUN_107538638(appppcStack_700,auStack_5c8,auStack_6b8);
                              pcVar15 = auStack_590;
                              UNRECOVERED_JUMPTABLE = (code ******)appppcStack_700;
                              func_0x000107539d0c();
                              func_0x000107539eac();
                              func_0x000107539eb4();
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                                        (auStack_5c8);
                            }
                          }
                          else {
                            func_0x000107539ea0();
                            func_0x00010002b838(auStack_590);
                            func_0x000107539d1c(appppcStack_618);
                            FUN_1075391e8();
                            pcVar15 = auStack_590;
                            UNRECOVERED_JUMPTABLE = (code ******)appppcStack_618;
                            param_6 = ppppppcVar9 + 8;
                            func_0x000107539d94();
                            FUN_107538638();
                            pppppcVar25 = appppcStack_618;
LAB_1075381e0:
                            func_0x000107539398(pppppcVar25);
                          }
                          ppppppcVar22 = (code ******)auStack_590;
                          ppppppcVar20 = UNRECOVERED_JUMPTABLE;
                        }
                        else {
                          func_0x00010002b838(auStack_6d0,&DAT_10f416774);
                          func_0x000100060964(auStack_5c8,&DAT_10f2f497c);
                          func_0x0001072627ac(auStack_590,auStack_5c8);
                          param_6 = (code ******)auStack_590;
                          func_0x000107539d1c(appppcStack_6e8);
                          FUN_107538a70();
                          pcVar15 = auStack_6d0;
                          ppppppcVar20 = (code ******)appppcStack_6e8;
                          func_0x000107539d0c();
                          func_0x0001072c95d0(appppcStack_6e8);
                          func_0x000107539e6c();
                          func_0x000104c2f714(auStack_5c8);
                          ppppppcVar22 = (code ******)auStack_6d0;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                        goto LAB_107537ffc;
                      }
                    }
                  }
                }
              }
              auStack_590[0] = 0;
              uStack_558 = 0;
              param_6 = (code ******)auStack_590;
              func_0x000107539d1c();
              FUN_107538a70();
              func_0x000107539e6c();
              ppppppcVar22 = ppppppcVar8;
            }
            else {
              func_0x0001072c95f0(auStack_590,1);
              auStack_6d0[0] = 0;
              uStack_6cc = 0;
              auStack_5c8[0] = 0;
              uStack_5a8 = 0;
              ppppppcVar7 = (code ******)auStack_6d0;
              param_6 = (code ******)auStack_5c8;
              pcVar15 = (char *)param_5;
              ppppppcVar20 = ppppppcVar9;
              func_0x000107771274(ppppppcVar8);
              func_0x0001072c94e0(auStack_5c8);
              ppppppcVar22 = (code ******)auStack_590;
              func_0x0001072ca718();
            }
          }
        }
LAB_107537ffc:
        func_0x000107539ecc();
        goto LAB_107538000;
      }
    }
    pcVar15 = &UNK_10f416723;
    func_0x000107539f6c();
    func_0x000107539e54();
  }
  else {
    func_0x000107539e74();
    func_0x000107539dd4();
    func_0x00010753a010();
    if (ppppppcVar22 != (code ******)0x0) {
      func_0x000107539cec();
    }
  }
LAB_107538000:
  func_0x000107539ca4(uStack_4f8);
  if ((bool)in_ZR) {
    return ppppppcVar22;
  }
  ___stack_chk_fail();
  ppppppcVar8 = ppppppcVar22;
  func_0x00010753a010();
  if (ppppppcVar8 != (code ******)0x0) {
    func_0x000107539cec();
  }
  func_0x000107539ecc();
  func_0x000107539d2c();
  pcStack_738 = FUN_10753846c;
  UNRECOVERED_JUMPTABLE = (code ******)pcVar15;
  pppppcStack_760 = (code *****)param_5;
  pppppcStack_758 = (code *****)param_3;
  pppppcStack_750 = (code *****)ppppppcVar9;
  pppppcStack_748 = (code *****)ppppppcVar22;
  pppuStack_740 = &ppuStack_4b0;
  func_0x000107539cb8();
  uStack_768 = extraout_x8_02;
  ppppppcVar9 = UNRECOVERED_JUMPTABLE + 1;
  ppppppcVar8 = ppppppcVar9;
  (*(code *)(*UNRECOVERED_JUMPTABLE)[2])();
  if ((int)ppppppcVar8 == 0) {
    ppppppcVar8 = ppppppcVar9;
    (*(code *)(*(code ******)pcVar15)[3])();
    if ((int)ppppppcVar8 == 0) {
      UNRECOVERED_JUMPTABLE = (code ******)(*(code ******)pcVar15)[0xe];
      func_0x000107539ca4(uStack_768);
      if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107538594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE)(ppppppcVar22,ppppppcVar9);
        return ppppppcVar9;
      }
      goto LAB_1075385f8;
    }
    ppppcStack_7d8 = (code ****)0x0;
    uStack_7d0 = 0;
    uStack_7c8 = 0;
    ppppppcVar8 = ppppppcVar9;
    (*(code *)(*(code ******)pcVar15)[4])(ppppppcVar9);
    func_0x0001072ac134(&ppppcStack_7d8,ppppppcVar8);
    param_5 = (code ******)0x0;
    while( true ) {
      ppppppcVar8 = ppppppcVar9;
      (*(code *)(*(code ******)pcVar15)[4])();
      in_ZR = param_5 == ppppppcVar8;
      if (ppppppcVar8 <= param_5) break;
      (*(code *)(*(code ******)pcVar15)[5])(auStack_7c0,ppppppcVar9,param_5);
      FUN_10753846c(auStack_7b0,auStack_7c0);
      func_0x0001072f5f6c(auStack_7c0);
      if (cStack_770 == '\x01') {
        func_0x0001072d7f34(&ppppcStack_7d8,auStack_7b0);
      }
      else {
        func_0x000107539bd0(&ppppcStack_7d8,auStack_7c0);
      }
      func_0x000107267ed0(auStack_7b0);
      param_5 = (code ******)((long)param_5 + 1);
    }
    FUN_107327958(&uStack_7f0,&ppppcStack_7d8);
    auStack_7b0[0] = 0;
    uStack_7a0 = uStack_7e8;
    uStack_7a8 = uStack_7f0;
    uStack_7f0 = 0;
    uStack_7e8 = 0;
    UNRECOVERED_JUMPTABLE = (code ******)auStack_7b0;
    func_0x00010729d394(ppppppcVar22);
    func_0x000104c3323c(auStack_7b0);
    func_0x000104c33108(&uStack_7f0);
    ppppppcVar8 = (code ******)&ppppcStack_7d8;
    func_0x000107269124();
  }
  else {
    *(char *)ppppppcVar22 = '\0';
    *(char *)(ppppppcVar22 + 8) = '\0';
  }
  func_0x000107539ca4(uStack_768);
  if ((bool)in_ZR) {
    return ppppppcVar8;
  }
LAB_1075385f8:
  uVar4 = 0;
  ___stack_chk_fail();
  ppppppcVar22 = (code ******)&ppppcStack_7d8;
  func_0x000107269124();
  func_0x000107539d2c();
  pcStack_7f8 = FUN_107538638;
  ppppcStack_830 = (code ****)unaff_x24;
  pppppcStack_828 = (code *****)ppppppcVar12;
  pppppcStack_820 = (code *****)param_5;
  pppppcStack_818 = (code *****)pcVar15;
  pppppcStack_810 = (code *****)ppppppcVar9;
  pppppcStack_808 = (code *****)ppppppcVar8;
  ppppuStack_800 = &pppuStack_740;
  func_0x000107539cb8();
  uStack_838 = extraout_x8_03;
  if (((ulong)ppppppcVar20[9] & 1) == 0) {
    func_0x000107539e54();
  }
  else {
    ppppppcVar12 = param_6;
    func_0x000107539f04();
    func_0x000107539ea0();
    UNRECOVERED_JUMPTABLE = param_5;
    func_0x000100152bb8();
    ppppppcVar22 = (code ******)pcVar15;
    if ((int)UNRECOVERED_JUMPTABLE == 0) {
      func_0x000107539fd4();
      UNRECOVERED_JUMPTABLE = param_5;
      func_0x000100152bb8();
      if ((int)UNRECOVERED_JUMPTABLE == 0) {
        uStack_8e8 = 2;
        func_0x0001072f6b34(appppcStack_8e0,auStack_8f0,1);
        func_0x0001072c9884(auStack_8f0);
        func_0x0001072c9bc0(appppcStack_880,pcVar15);
        UNRECOVERED_JUMPTABLE = (code ******)appppcStack_880;
        ppppppcVar20 = (code ******)appppcStack_8e0;
        func_0x00010772cc04(&ppppcStack_910,param_5);
        func_0x0001072c9c34(appppcStack_880);
        if ((bStack_900 & 1) == 0) {
          func_0x000107771558(appppcStack_928,appppcStack_8e0);
          UNRECOVERED_JUMPTABLE = (code ******)appppcStack_928;
          func_0x000100066230(ppppppcVar9);
          func_0x000107539f74();
          func_0x000107539e54();
          param_6 = ppppppcVar12;
        }
        else {
          ppppppcVar8[1] = (code *****)ppppcStack_908;
          *ppppppcVar8 = (code *****)ppppcStack_910;
          ppppcStack_910 = (code ****)0x0;
          ppppcStack_908 = (code ****)0x0;
          *(char *)(ppppppcVar8 + 2) = '\x01';
          param_6 = ppppppcVar12;
        }
        func_0x000107539f58();
        ppppppcVar22 = (code ******)appppcStack_8e0;
        func_0x0001072ca718();
      }
      else {
        FUN_107539768(appppcStack_8e0);
        func_0x000107539ed4();
        FUN_107539a08();
        UNRECOVERED_JUMPTABLE = param_6;
        param_6 = ppppppcVar12;
      }
    }
    else {
      FUN_1075394a0(appppcStack_8e0);
      func_0x000107539ed4();
      FUN_107539740();
      UNRECOVERED_JUMPTABLE = param_6;
      param_6 = ppppppcVar12;
    }
  }
  func_0x000107539ca4(uStack_838);
  if ((bool)uVar4) {
    return ppppppcVar22;
  }
  ___stack_chk_fail();
  func_0x000107539f58();
  ppppppcVar8 = (code ******)appppcStack_8e0;
  func_0x0001072ca718();
  func_0x000107539d2c();
  pcStack_938 = FUN_1075387c0;
  ppppppcVar12 = ppppppcVar8;
  pppppcStack_960 = (code *****)param_5;
  pppppcStack_958 = (code *****)pcVar15;
  pppppcStack_950 = (code *****)ppppppcVar9;
  pppppcStack_948 = (code *****)ppppppcVar22;
  pppppuStack_940 = &ppppuStack_800;
  func_0x000107539ccc();
  uStack_968 = extraout_x8_04;
  if (((ulong)ppppppcVar20[2] & 1) == 0) {
    *(undefined1 *)ppppppcVar8 = 0;
    *(undefined1 *)(ppppppcVar8 + 2) = 0;
  }
  else {
    ppppcStack_9b8 = (code ****)ppppppcVar20[1];
    ppppcStack_9c0 = (code ****)*ppppppcVar20;
    *ppppppcVar20 = (code *****)0x0;
    ppppppcVar20[1] = (code *****)0x0;
    func_0x0001072bed5c(appppcStack_9b0,&ppppcStack_9c0,1,&uStack_a11);
    func_0x0001072c9b9c(&ppppcStack_9c0);
    func_0x00010753937c(appppcStack_a10,appppcStack_9b0);
    ppppppcVar20 = (code ******)appppcStack_a10;
    FUN_107538638(ppppppcVar8);
    func_0x000107539398(appppcStack_a10);
    ppppppcVar12 = (code ******)appppcStack_9b0;
    func_0x0001072c9c34();
  }
  func_0x000107539ca4(uStack_968);
  if ((bool)uVar4) {
    return ppppppcVar12;
  }
  ___stack_chk_fail();
  func_0x000107539398(appppcStack_a10);
  func_0x0001072c9c34(appppcStack_9b0);
  func_0x000107539d2c();
  pcStack_a28 = FUN_1075388a8;
  ppppppcVar9 = UNRECOVERED_JUMPTABLE;
  ppppppcVar22 = ppppppcVar20;
  ppppppcVar18 = ppppppcVar7;
  ppppppcVar17 = param_6;
  pppppuStack_a30 = &pppppuStack_940;
  func_0x000107539cb8();
  uStack_a78 = extraout_x8_05;
  appppcStack_ac0[0] = (code ****)0x0;
  ppppppcVar23 = ppppppcVar9 + 1;
  ppppppcVar8 = ppppppcVar23;
  (*(code *)(*ppppppcVar9)[4])(ppppppcVar23);
  FUN_107539a30(appppcStack_ac0,ppppppcVar8);
  do {
    ppppppcVar8 = ppppppcVar23;
    (*(code *)(*UNRECOVERED_JUMPTABLE)[4])();
    uVar4 = param_6 == ppppppcVar8;
    if (ppppppcVar8 <= param_6) {
      ppppppcVar8 = (code ******)appppcStack_ac0;
      func_0x00010753937c(ppppppcVar12);
      break;
    }
    (*(code *)(*UNRECOVERED_JUMPTABLE)[5])(auStack_ad0,ppppppcVar23,param_6);
    func_0x0001072c95f0(appppcStack_b28,1);
    ppppppcVar8 = (code ******)appppcStack_b28;
    ppppppcVar22 = ppppppcVar7;
    func_0x000107768e6c(&ppppcStack_b40,auStack_ad0);
    uVar4 = cStack_b30 == '\x01';
    bVar1 = !(bool)uVar4;
    if (bVar1) {
      func_0x000107771558(appppcStack_b58,appppcStack_b28);
      ppppppcVar8 = (code ******)appppcStack_b58;
      func_0x000100066230(ppppppcVar20);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appppcStack_b58);
      ppppcStack_b70 = (code ****)((ulong)ppppcStack_b70 & 0xffffffffffffff00);
    }
    else {
      uStack_b68 = uStack_b38;
      ppppcStack_b70 = ppppcStack_b40;
      ppppcStack_b40 = (code ****)0x0;
      uStack_b38 = 0;
    }
    bStack_b60 = !bVar1;
    func_0x000107539eac();
    func_0x0001072ca718(appppcStack_b28);
    func_0x0001072f5f6c(auStack_ad0);
    bVar2 = bStack_b60;
    if ((bStack_b60 & 1) == 0) {
      *(undefined1 *)ppppppcVar12 = 0;
      *(undefined1 *)(ppppppcVar12 + 9) = 0;
    }
    else {
      ppppppcVar8 = (code ******)&ppppcStack_b70;
      func_0x0001072c995c(appppcStack_ac0);
    }
    func_0x0001072c95d0(&ppppcStack_b70);
    param_6 = (code ******)((long)param_6 + 1);
  } while ((bVar2 & 1) != 0);
  ppppppcVar9 = (code ******)appppcStack_ac0;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_a78);
  if ((bool)uVar4) {
    return ppppppcVar9;
  }
  ___stack_chk_fail();
  func_0x0001072c9c34(appppcStack_ac0);
  func_0x000107539d2c();
  pcStack_b78 = FUN_107538a70;
  ppppppcVar16 = ppppppcVar8;
  ppppppcVar12 = ppppppcVar22;
  ppppppcVar21 = ppppppcVar18;
  pppppcStack_bb0 = (code *****)ppppppcVar23;
  pppppcStack_ba8 = (code *****)UNRECOVERED_JUMPTABLE;
  pppppcStack_ba0 = (code *****)ppppppcVar20;
  pppppcStack_b98 = (code *****)ppppppcVar7;
  pppppcStack_b90 = (code *****)param_6;
  pppppcStack_b88 = (code *****)ppppppcVar9;
  pppppuStack_b80 = &pppppuStack_a30;
  func_0x000107539cb8();
  uStack_bb8 = extraout_x8_06;
  uVar4 = *(char *)(ppppppcVar17 + 7) == '\x01';
  if ((bool)uVar4) {
    func_0x000107263b58(appppcStack_bf8);
    ppppppcVar16 = ppppppcVar17;
  }
  else {
    func_0x000107539fac(&lStack_c38,ppppppcVar8 + 1);
    (**(code **)(lStack_c38 + 0x68))(appppcStack_bf8,auStack_c30);
    func_0x0001072f5f6c(&lStack_c38);
  }
  pppppcVar25 = &ppppcStack_c50;
  func_0x000107539dc0(&ppppcStack_c50,ppppppcVar8 + 1);
  (*(code *)ppppcStack_c50[0xd])(&lStack_c38,auStack_c48);
  func_0x0001072f5f6c(&ppppcStack_c50);
  if ((bStack_c00 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x000107539fec();
    iVar6 = (int)&lStack_c38;
    func_0x000107278484();
    if (iVar6 == 0) {
      func_0x000107539ff8();
      iVar6 = (int)&lStack_c38;
      func_0x000107278484();
      if (iVar6 == 0) {
        func_0x000107539dac();
        func_0x000107539dc8(&UNK_10f4166dc);
        func_0x000107539e10(appppcStack_d40);
        ppppppcVar16 = (code ******)&ppppcStack_c50;
        ppppppcVar12 = (code ******)appppcStack_d40;
        func_0x000107539cdc();
        pppppcVar24 = appppcStack_d40;
      }
      else {
        func_0x000107539dac();
        func_0x000107539dc8(&UNK_10f4166d1);
        func_0x000107539cf8(appppcStack_cf0);
        ppppppcVar16 = (code ******)&ppppcStack_c50;
        ppppppcVar12 = (code ******)appppcStack_cf0;
        func_0x000107539cdc();
        pppppcVar24 = appppcStack_cf0;
      }
    }
    else {
      func_0x000107539dac();
      func_0x000107539dc8(&UNK_10f4166c0);
      func_0x000107539cf8(appppcStack_ca0);
      ppppppcVar16 = (code ******)&ppppcStack_c50;
      ppppppcVar12 = (code ******)appppcStack_ca0;
      func_0x000107539cdc();
      pppppcVar24 = appppcStack_ca0;
    }
    func_0x000107539398(pppppcVar24);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppcStack_c50);
    func_0x000107539f74();
  }
  func_0x00010724b3d8(&lStack_c38);
  ppppppcVar7 = (code ******)appppcStack_bf8;
  func_0x00010724b3d8();
  func_0x000107539ca4(uStack_bb8);
  if ((bool)uVar4) {
    return ppppppcVar7;
  }
  ___stack_chk_fail();
  func_0x000107539398(appppcStack_d40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppcStack_c50);
  func_0x000107539f74();
  func_0x00010724b3d8(&lStack_c38);
  func_0x00010724b3d8(appppcStack_bf8);
  func_0x000107539d2c();
  pcStack_d68 = FUN_107538cc4;
  ppppppcVar20 = ppppppcVar12;
  ppppppcVar9 = ppppppcVar21;
  pppppcStack_da0 = (code *****)ppppppcVar23;
  ppppcStack_d98 = (code ****)pppppcVar25;
  pppppcStack_d90 = (code *****)ppppppcVar8;
  pppppcStack_d88 = (code *****)ppppppcVar18;
  pppppcStack_d80 = (code *****)ppppppcVar22;
  pppppcStack_d78 = (code *****)ppppppcVar7;
  pppppuStack_d70 = &pppppuStack_b80;
  func_0x000107539cb8();
  ppppcVar13 = &pppcStack_e18;
  uStack_da8 = extraout_x8_07;
  func_0x000107539dc0(&pppcStack_e18,ppppppcVar16 + 1);
  (*(code *)pppcStack_e18[0xd])(appppcStack_e58,auStack_e10);
  func_0x0001072f5f6c(&pppcStack_e18);
  if ((bStack_e20 & 1) == 0) {
    uVar14 = 0x99;
    func_0x000107539f6c();
    func_0x000107539e54();
  }
  else {
    func_0x000107539fec();
    iVar6 = (int)appppcStack_e58;
    func_0x000107278484();
    if (iVar6 == 0) {
      func_0x000107539ff8();
      iVar6 = (int)appppcStack_e58;
      func_0x000107278484();
      if (iVar6 == 0) {
        func_0x00010002b838(auStack_ef8,&UNK_10f4166f2);
        func_0x000104c2fe00(auStack_ee0,appppcStack_e58);
        ppppcVar13 = (code ****)0xb8;
        __Znwm();
        pppppcVar25 = (code *****)&pppcStack_e18;
        func_0x000107277488(&pppcStack_e18,auStack_ee0);
        FUN_107539ae8(ppppcVar13,&pppcStack_e18,ppppppcVar21);
        pppcStack_f18 = (code ***)ppppcVar13;
        func_0x000107539efc();
        func_0x0001075393b8(appppcStack_f10,&pppcStack_f18);
        uVar14 = SUB81(auStack_ef8,0);
        ppppppcVar20 = (code ******)appppcStack_f10;
        func_0x000107539d94();
        FUN_1075387c0();
        func_0x0001072c95d0(appppcStack_f10);
        pppcVar3 = pppcStack_f18;
        pppcStack_f18 = (code ***)0x0;
        if ((code ****)pppcVar3 != (code ****)0x0) {
          func_0x000107539cec();
        }
        func_0x000104c2f714(auStack_ee0);
        puVar10 = auStack_ef8;
      }
      else {
        func_0x00010002b838(auStack_ee0,&UNK_10f4166e4);
        pppcStack_e18 = (code ***)0x0;
        func_0x00010753937c(appppcStack_ea8,&pppcStack_e18);
        uVar14 = SUB81(auStack_ee0,0);
        ppppppcVar20 = (code ******)appppcStack_ea8;
        func_0x000107539d94();
        FUN_107538638();
        func_0x000107539eb4();
        func_0x0001072c9c34(&pppcStack_e18);
        puVar10 = auStack_ee0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10);
    }
    else {
      ppppppcVar20 = ppppppcVar21;
      FUN_107538f54(&pppcStack_e18,1);
      uVar14 = SUB81(&pppcStack_e18,0);
      func_0x0001075393b8(ppppppcVar7);
      pppcVar3 = pppcStack_e18;
      pppcStack_e18 = (code ***)0x0;
      if ((code ****)pppcVar3 != (code ****)0x0) {
        func_0x000107539cec();
      }
    }
  }
  ppppppcVar7 = (code ******)appppcStack_e58;
  func_0x00010724b3d8();
  func_0x000107539ca4(uStack_da8);
  if ((bool)uVar4) {
    return ppppppcVar7;
  }
  ___stack_chk_fail();
  func_0x0001072c95d0(appppcStack_f10);
  pppcVar3 = pppcStack_f18;
  pppcStack_f18 = (code ***)0x0;
  if (pppcVar3 != (code ***)0x0) {
    func_0x000107539cec();
  }
  func_0x000104c2f714(auStack_ee0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ef8);
  func_0x00010724b3d8(appppcStack_e58);
  func_0x000107539d2c();
  pcStack_f28 = FUN_107538f54;
  pppppcStack_f60 = (code *****)ppppppcVar23;
  ppppcStack_f58 = (code ****)pppppcVar25;
  pppcStack_f50 = (code ***)ppppcVar13;
  pppppcStack_f48 = (code *****)ppppppcVar12;
  pppppcStack_f40 = (code *****)ppppppcVar21;
  pppppcStack_f38 = (code *****)ppppppcVar7;
  pppppuStack_f30 = &pppppuStack_d70;
  func_0x000107539cb8();
  UNRECOVERED_JUMPTABLE = (code ******)0xb8;
  uStack_f68 = extraout_x8_08;
  __Znwm();
  uStack_f70 = 1;
  ppppppcVar8 = (code ******)&ppppcStack_fd8;
  ppppppcVar22 = UNRECOVERED_JUMPTABLE;
  uStack_fd0 = uVar14;
  FUN_107539ae8();
  *ppppppcVar7 = (code *****)UNRECOVERED_JUMPTABLE;
  func_0x000107539efc();
  func_0x000107539ca4(uStack_f68);
  if ((bool)uVar4) {
    return ppppppcVar22;
  }
  ___stack_chk_fail();
  func_0x000107539efc();
  __ZdlPv(UNRECOVERED_JUMPTABLE);
  func_0x000107539d2c();
  ppppppcVar7 = (code ******)appppcStack_1180;
  pppppcVar25 = appppcStack_1180;
  ppppppcVar18 = ppppppcVar8;
  UNRECOVERED_JUMPTABLE = ppppppcVar20;
  func_0x000107539cb8();
  uStack_1038 = extraout_x8_09;
  func_0x000107539dc0(apppppcStack_1090,ppppppcVar18 + 1);
  func_0x000107539fbc();
  ppppppcVar12 = apppppcStack_1090;
  func_0x0001072f5f6c();
  if ((bStack_1040 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x00010753a004();
    func_0x000107539df8();
    if (ppppppcVar12 == (code ******)0x0) {
      UNRECOVERED_JUMPTABLE = ppppppcVar9 + 8;
      FUN_107538f54(apppppcStack_1090,0,UNRECOVERED_JUMPTABLE);
      ppppppcVar18 = apppppcStack_1090;
      func_0x0001075393b8(ppppppcVar22);
      ppppppcVar12 = (code ******)apppppcStack_1090[0];
      apppppcStack_1090[0] = (code *****)0x0;
      if (ppppppcVar12 != (code ******)0x0) {
        func_0x000107539cec();
      }
    }
    else {
      func_0x000107539fec();
      iVar6 = (int)ppppppcVar12;
      func_0x000107539d34();
      if (iVar6 == 0) {
        func_0x000107539ff8();
        func_0x000107539d34();
        if (iVar6 == 0) {
          func_0x000107539f44();
          func_0x000107539e10(appppcStack_1180);
          ppppppcVar18 = apppppcStack_1090;
          func_0x000107539cdc();
        }
        else {
          func_0x000107539f44();
          func_0x000107539cf8(appppcStack_1130);
          ppppppcVar18 = apppppcStack_1090;
          ppppppcVar7 = (code ******)appppcStack_1130;
          func_0x000107539cdc();
          pppppcVar25 = appppcStack_1130;
        }
      }
      else {
        func_0x000107539f44();
        func_0x000107539cf8(appppcStack_10e0);
        ppppppcVar18 = apppppcStack_1090;
        ppppppcVar7 = (code ******)appppcStack_10e0;
        func_0x000107539cdc();
        pppppcVar25 = appppcStack_10e0;
      }
      func_0x000107539398(pppppcVar25);
      ppppppcVar12 = apppppcStack_1090;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppcVar12);
      UNRECOVERED_JUMPTABLE = ppppppcVar7;
    }
  }
  func_0x000107539ecc();
  func_0x000107539ca4(uStack_1038);
  if ((bool)uVar4) {
    return ppppppcVar12;
  }
  ___stack_chk_fail();
  func_0x000107539dec();
  func_0x000107539398();
  ppppppcVar7 = apppppcStack_1090;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppcVar7);
  func_0x000107539ecc();
  func_0x000107539d2c();
  func_0x000107539f04();
  func_0x000107539cb8();
  uStack_11d8 = extraout_x8_10;
  appppcStack_1220[0] = (code ****)0x0;
  func_0x000107539df8((*ppppppcVar18)[4]);
  pppppcVar25 = appppcStack_1220;
  FUN_107539a30(pppppcVar25,ppppppcVar7);
  pppppcVar24 = (code *****)0x1;
  do {
    func_0x00010753a004();
    func_0x000107539df8();
    uVar4 = pppppcVar24 == pppppcVar25;
    if (pppppcVar25 <= pppppcVar24) {
      pppppcVar19 = appppcStack_1220;
      func_0x00010753937c(ppppppcVar22);
      break;
    }
    (*(code *)(*ppppppcVar8)[5])(apppcStack_1230,ppppppcVar18 + 1,pppppcVar24);
    pppppcVar19 = (code *****)apppcStack_1230;
    UNRECOVERED_JUMPTABLE = ppppppcVar9;
    FUN_107537eec(apppcStack_1248,pppppcVar19,ppppppcVar9,ppppppcVar20);
    func_0x0001072f5f6c(apppcStack_1230);
    bVar2 = bStack_1238;
    if ((bStack_1238 & 1) == 0) {
      *(undefined1 *)ppppppcVar22 = 0;
      *(undefined1 *)(ppppppcVar22 + 9) = 0;
    }
    else {
      pppppcVar19 = (code *****)apppcStack_1248;
      func_0x0001072c995c(appppcStack_1220);
    }
    pppppcVar25 = (code *****)apppcStack_1248;
    func_0x0001072c95d0();
    pppppcVar24 = (code *****)((long)pppppcVar24 + 1);
  } while ((bVar2 & 1) != 0);
  ppppppcVar7 = (code ******)appppcStack_1220;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_11d8);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    ppppppcVar7 = (code ******)appppcStack_1220;
    func_0x0001072c9c34();
    func_0x000107539d2c();
    pppppcVar25 = (code *****)*pppppcVar19;
    ppppppcVar7[1] = (code *****)pppppcVar19[1];
    *ppppppcVar7 = pppppcVar25;
    *pppppcVar19 = (code ****)0x0;
    pppppcVar19[1] = (code ****)0x0;
    *(undefined1 *)(ppppppcVar7 + 2) = 1;
    func_0x000107284cf0(ppppppcVar7 + 3,UNRECOVERED_JUMPTABLE);
    return ppppppcVar7;
  }
  return ppppppcVar7;
}



/* Entry: 107537b28; end: 107537eeb;  */

code ******
FUN_107537b28(code ******param_1,char *param_2,code ******param_3,code ******param_4,
             code ******param_5)

{
  bool bVar1;
  byte bVar2;
  code ***pppcVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  code ******ppppppcVar7;
  undefined1 *puVar8;
  ulong uVar9;
  code ******ppppppcVar10;
  code ****ppppcVar11;
  code ******ppppppcVar12;
  code ******ppppppcVar13;
  undefined1 uVar14;
  code ******UNRECOVERED_JUMPTABLE;
  code ******ppppppcVar15;
  code ******ppppppcVar16;
  code ******ppppppcVar17;
  code *****pppppcVar18;
  code ******ppppppcVar19;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x9;
  code ******ppppppcVar20;
  code ******unaff_x21;
  code ******unaff_x22;
  undefined1 *unaff_x24;
  code *****pppppcVar21;
  code *****pppppcVar22;
  code ***apppcStack_e78 [2];
  byte bStack_e68;
  code ***apppcStack_e60 [2];
  code ****appppcStack_e50 [9];
  undefined8 uStack_e08;
  code ****appppcStack_db0 [10];
  code ****appppcStack_d60 [10];
  code ****appppcStack_d10 [10];
  code *****apppppcStack_cc0 [10];
  byte bStack_c70;
  undefined8 uStack_c68;
  code ****ppppcStack_c08;
  undefined1 uStack_c00;
  undefined4 uStack_ba0;
  undefined8 uStack_b98;
  code *****pppppcStack_b90;
  code ****ppppcStack_b88;
  code ***pppcStack_b80;
  code *****pppppcStack_b78;
  code *****pppppcStack_b70;
  code *****pppppcStack_b68;
  undefined8 *****pppppuStack_b60;
  code *pcStack_b58;
  code ***pppcStack_b48;
  code ****appppcStack_b40 [3];
  undefined1 auStack_b28 [24];
  undefined1 auStack_b10 [56];
  code ****appppcStack_ad8 [10];
  code ****appppcStack_a88 [7];
  byte bStack_a50;
  code ***pppcStack_a48;
  undefined1 auStack_a40 [104];
  undefined8 uStack_9d8;
  code *****pppppcStack_9d0;
  code ****ppppcStack_9c8;
  code *****pppppcStack_9c0;
  code *****pppppcStack_9b8;
  code *****pppppcStack_9b0;
  code *****pppppcStack_9a8;
  undefined8 *****pppppuStack_9a0;
  code *pcStack_998;
  code ****appppcStack_970 [10];
  code ****appppcStack_920 [10];
  code ****appppcStack_8d0 [10];
  code ****ppppcStack_880;
  undefined1 auStack_878 [16];
  long lStack_868;
  undefined1 auStack_860 [48];
  byte bStack_830;
  code ****appppcStack_828 [8];
  undefined8 uStack_7e8;
  code *****pppppcStack_7e0;
  code *****pppppcStack_7d8;
  code *****pppppcStack_7d0;
  code *****pppppcStack_7c8;
  code *****pppppcStack_7c0;
  code *****pppppcStack_7b8;
  undefined8 *****pppppuStack_7b0;
  code *pcStack_7a8;
  code ****ppppcStack_7a0;
  undefined8 uStack_798;
  byte bStack_790;
  code ****appppcStack_788 [3];
  code ****ppppcStack_770;
  undefined8 uStack_768;
  char cStack_760;
  code ****appppcStack_758 [11];
  undefined1 auStack_700 [16];
  code ****appppcStack_6f0 [9];
  undefined8 uStack_6a8;
  undefined1 *****pppppuStack_660;
  code *pcStack_658;
  undefined1 uStack_641;
  code ****appppcStack_640 [10];
  code ****ppppcStack_5f0;
  code ****ppppcStack_5e8;
  code ****appppcStack_5e0 [9];
  undefined8 uStack_598;
  code *****pppppcStack_590;
  code *****pppppcStack_588;
  code *****pppppcStack_580;
  code *****pppppcStack_578;
  undefined1 ****ppppuStack_570;
  code *pcStack_568;
  code ****appppcStack_558 [3];
  code ****ppppcStack_540;
  code ****ppppcStack_538;
  byte bStack_530;
  undefined1 auStack_520 [8];
  undefined4 uStack_518;
  code ****appppcStack_510 [12];
  code ****appppcStack_4b0 [9];
  undefined8 uStack_468;
  code ****ppppcStack_460;
  code *****pppppcStack_458;
  code *****pppppcStack_450;
  code *****pppppcStack_448;
  code *****pppppcStack_440;
  code *****pppppcStack_438;
  undefined1 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  code ****ppppcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 auStack_3f0 [16];
  undefined4 auStack_3e0 [2];
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  char cStack_3a0;
  undefined8 uStack_398;
  code *****pppppcStack_390;
  code *****pppppcStack_388;
  code *****pppppcStack_380;
  code *****pppppcStack_378;
  undefined1 **ppuStack_370;
  code *pcStack_368;
  code ****appppcStack_360 [3];
  code ****appppcStack_348 [3];
  code ****appppcStack_330 [3];
  code ****appppcStack_318 [3];
  undefined1 auStack_300 [4];
  undefined1 uStack_2fc;
  undefined1 auStack_2e8 [80];
  code ****appppcStack_298 [10];
  code ****appppcStack_248 [10];
  undefined1 auStack_1f8 [32];
  undefined1 uStack_1d8;
  undefined1 auStack_1c0 [56];
  undefined1 uStack_188;
  byte bStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  code ****ppppcStack_c8;
  undefined1 auStack_c0 [8];
  code ****ppppcStack_b8;
  code ****appppcStack_b0 [6];
  char cStack_80;
  code ****appppcStack_78 [7];
  byte bStack_40;
  undefined8 uStack_38;
  
  ppppppcVar20 = param_1;
  func_0x000107539ccc();
  UNRECOVERED_JUMPTABLE = ppppppcVar20 + 1;
  ppppppcVar7 = UNRECOVERED_JUMPTABLE;
  uStack_38 = extraout_x8;
  (*(code *)(*ppppppcVar20)[3])();
  if ((int)ppppppcVar7 == 0) {
LAB_107537c0c:
    ppppppcVar20 = (code ******)0x0;
  }
  else {
    func_0x000107539f2c();
    func_0x000107539e00();
    bVar1 = ppppppcVar7 == (code ******)0x0;
    ppppppcVar7 = (code ******)0x0;
    if (bVar1) goto LAB_107537c0c;
    func_0x000107539e60();
    unaff_x21 = (code ******)&ppppcStack_b8;
    func_0x000107539fac(&ppppcStack_b8,UNRECOVERED_JUMPTABLE);
    ppppppcVar7 = (code ******)appppcStack_b0;
    (*(code *)ppppcStack_b8[0xd])(appppcStack_78);
    func_0x000107539e4c();
    if ((bStack_40 & 1) == 0) goto LAB_107537c44;
    param_2 = &DAT_10f41677d;
    func_0x000107539d3c();
    if ((int)ppppppcVar7 == 0) {
      param_2 = &UNK_10f416779;
      func_0x000107539d3c();
      if (((ulong)ppppppcVar7 & 1) == 0) {
        param_2 = &UNK_10f416781;
        func_0x000107539d3c();
        if (((ulong)ppppppcVar7 & 1) == 0) {
          param_2 = "none";
          func_0x000107539d3c();
          if (((ulong)ppppppcVar7 & 1) != 0) goto LAB_107537c44;
          param_2 = &DAT_10f416776;
          func_0x000107539d3c();
          if ((int)ppppppcVar7 != 0) {
            func_0x000107539e60();
            unaff_x21 = (code ******)&ppppcStack_c8;
            func_0x000107539da0(&ppppcStack_c8);
            puVar8 = auStack_c0;
            (*(code *)ppppcStack_c8[0xd])(&ppppcStack_b8);
            func_0x000107539db8();
            func_0x000107539f2c();
            func_0x000107539e00();
            in_ZR = puVar8 == (undefined1 *)0x3;
            if ((undefined1 *)0x2 < puVar8) {
              in_ZR = cStack_80 == '\x01';
              if ((bool)in_ZR) {
                func_0x000107539e60();
                func_0x000107539e24();
                ppppppcVar20 = param_1 + 1;
                (*(code *)ppppcStack_c8[3])(ppppppcVar20);
                func_0x000107539db8();
              }
              else {
                ppppppcVar20 = (code ******)0x1;
              }
              goto LAB_107537cfc;
            }
            goto LAB_107537c04;
          }
          param_2 = &DAT_10f2f497c;
          func_0x000107539d3c();
          if (((ulong)ppppppcVar7 & 1) == 0) {
            param_2 = &DAT_10f416771;
            func_0x000107539d3c();
            if (((ulong)ppppppcVar7 & 1) != 0) goto LAB_107537d68;
            param_2 = ">";
            func_0x000107539d3c();
            if (((ulong)ppppppcVar7 & 1) != 0) goto LAB_107537d68;
            param_2 = &DAT_10f41676e;
            func_0x000107539d3c();
            if (((ulong)ppppppcVar7 & 1) != 0) goto LAB_107537d68;
            param_2 = "<";
            func_0x000107539d3c();
            if (((ulong)ppppppcVar7 & 1) != 0) goto LAB_107537d68;
            param_2 = &DAT_10f41676b;
            func_0x000107539d3c();
            if ((int)ppppppcVar7 != 0) goto LAB_107537d68;
            func_0x000107539ea0();
            func_0x000107539d3c();
            if (((ulong)ppppppcVar7 & 1) == 0) {
              func_0x000107539fd4();
              func_0x000107539d3c();
              if ((int)ppppppcVar7 != 0) goto LAB_107537dec;
            }
            else {
LAB_107537dec:
              unaff_x22 = (code ******)&ppppcStack_b8;
              unaff_x21 = (code ******)0x1;
              while( true ) {
                func_0x000107539f2c();
                func_0x000107539e00();
                in_ZR = unaff_x21 == ppppppcVar7;
                if (ppppppcVar7 <= unaff_x21) break;
                func_0x000107539e60();
                param_2 = (char *)unaff_x21;
                (*extraout_x9)(&ppppcStack_b8,UNRECOVERED_JUMPTABLE);
                ppppppcVar7 = (code ******)&ppppcStack_b8;
                FUN_107537b28();
                if (((ulong)ppppppcVar7 & 1) == 0) {
                  ppppppcVar7 = (code ******)appppcStack_b0;
                  (*(code *)ppppcStack_b8[10])();
                  if (((uint)ppppppcVar7 >> 8 & 1) == 0) {
                    func_0x000107539e4c();
                    goto LAB_107537c44;
                  }
                }
                func_0x000107539e4c();
                unaff_x21 = (code ******)((long)unaff_x21 + 1);
              }
            }
LAB_107537e44:
            ppppppcVar20 = (code ******)0x1;
          }
          else {
LAB_107537d68:
            func_0x000107539f2c();
            func_0x000107539e00();
            in_ZR = ppppppcVar7 == (code ******)0x3;
            if (!(bool)in_ZR) goto LAB_107537e44;
            func_0x000107539e60();
            unaff_x21 = (code ******)&ppppcStack_b8;
            func_0x000107539da0(&ppppcStack_b8);
            uVar9 = 0;
            (*(code *)ppppcStack_b8[3])();
            if ((uVar9 & 1) == 0) {
              func_0x000107539e60();
              func_0x000107539e24();
              ppppppcVar20 = param_1 + 1;
              (*(code *)ppppcStack_c8[3])(ppppppcVar20);
              func_0x000107539db8();
            }
            else {
              ppppppcVar20 = (code ******)0x1;
            }
            func_0x000107539e4c();
          }
          goto LAB_107537c48;
        }
      }
LAB_107537c44:
      ppppppcVar20 = (code ******)0x0;
    }
    else {
      func_0x000107539f2c();
      func_0x000107539e00();
      in_ZR = ppppppcVar7 == (code ******)0x2;
      if (ppppppcVar7 < (code ******)0x2) goto LAB_107537c44;
      func_0x000107539e60();
      param_1 = (code ******)&ppppcStack_c8;
      func_0x000107539da0(&ppppcStack_c8);
      (*(code *)ppppcStack_c8[0xd])(&ppppcStack_b8,auStack_c0);
      func_0x000107539db8();
      in_ZR = cStack_80 == '\x01';
      if ((bool)in_ZR) {
        func_0x000107539ff8();
        uVar9 = 0;
        func_0x000107278484();
        if ((uVar9 & 1) != 0) goto LAB_107537c04;
        func_0x000107539fec();
        pppppcVar22 = &ppppcStack_b8;
        func_0x000107278484(pppppcVar22);
        ppppppcVar20 = (code ******)(ulong)((uint)pppppcVar22 ^ 1);
      }
      else {
LAB_107537c04:
        ppppppcVar20 = (code ******)0x0;
      }
LAB_107537cfc:
      func_0x00010724b3d8(&ppppcStack_b8);
    }
LAB_107537c48:
    ppppppcVar7 = (code ******)appppcStack_78;
    func_0x00010724b3d8();
  }
  func_0x000107539ca4(uStack_38);
  if ((bool)in_ZR) {
    return ppppppcVar20;
  }
  ___stack_chk_fail();
  func_0x0001072f5f6c(&ppppcStack_b8);
  func_0x00010724b3d8(appppcStack_78);
  func_0x000107539d2c();
  pcStack_d8 = FUN_107537eec;
  UNRECOVERED_JUMPTABLE = (code ******)appppcStack_360;
  pppppcVar22 = appppcStack_360;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x000107539f04();
  func_0x000107539cb8();
  ppppppcVar10 = (code ******)((long)param_2 + 8);
  ppppppcVar20 = ppppppcVar10;
  uStack_128 = extraout_x8_00;
  (*(code *)(*(code ******)param_2)[2])();
  if ((int)ppppppcVar20 == 0) {
    ppppppcVar20 = ppppppcVar10;
    (*(code *)(*unaff_x22)[3])();
    if ((int)ppppppcVar20 != 0) {
      func_0x00010753a004();
      func_0x000107539df8();
      bVar1 = ppppppcVar20 != (code ******)0x0;
      ppppppcVar20 = (code ******)0x0;
      if (bVar1) {
        unaff_x24 = auStack_1c0;
        func_0x000107539fac(auStack_1c0,ppppppcVar10);
        func_0x000107539fbc();
        ppppppcVar20 = (code ******)auStack_1c0;
        func_0x0001072f5f6c();
        if ((bStack_130 & 1) == 0) {
          param_2 = &UNK_10f41674a;
          func_0x000107539f6c();
          func_0x000107539e54();
        }
        else {
          func_0x00010753a004();
          func_0x000107539df8();
          in_ZR = ppppppcVar20 == (code ******)0x1;
          if (ppppppcVar20 < (code ******)0x2) {
            func_0x000107539ea0();
            uVar5 = (uint)ppppppcVar20;
            func_0x000107539d34();
            ppppppcVar20 = (code ******)auStack_1c0;
            param_2 = (char *)(ulong)(uVar5 ^ 1);
            param_3 = param_1 + 8;
            FUN_107538f54();
            func_0x000107539dd4();
LAB_107537fc8:
            func_0x00010753a010();
            if (ppppppcVar20 != (code ******)0x0) {
              func_0x000107539cec();
            }
          }
          else {
            func_0x000107539d34();
            if ((int)ppppppcVar20 == 0) {
              param_2 = &DAT_10f2f497c;
              func_0x000107539d34();
              if (((ulong)ppppppcVar20 & 1) == 0) {
                param_2 = "<";
                func_0x000107539d34();
                if (((ulong)ppppppcVar20 & 1) == 0) {
                  param_2 = ">";
                  func_0x000107539d34();
                  if (((ulong)ppppppcVar20 & 1) == 0) {
                    param_2 = &DAT_10f41676b;
                    func_0x000107539d34();
                    if (((ulong)ppppppcVar20 & 1) == 0) {
                      param_2 = &DAT_10f41676e;
                      func_0x000107539d34();
                      if ((int)ppppppcVar20 == 0) {
                        func_0x000107539d34();
                        if ((int)ppppppcVar20 == 0) {
                          func_0x000107539ea0();
                          func_0x000107539d34();
                          if ((int)ppppppcVar20 == 0) {
                            func_0x000107539fd4();
                            func_0x000107539d34();
                            if ((int)ppppppcVar20 != 0) {
                              func_0x000107539fd4();
                              func_0x00010002b838(auStack_1c0);
                              func_0x000107539d1c(appppcStack_298);
                              FUN_1075391e8();
                              param_2 = auStack_1c0;
                              UNRECOVERED_JUMPTABLE = (code ******)appppcStack_298;
                              param_5 = param_1 + 8;
                              func_0x000107539d94();
                              FUN_107538638();
                              pppppcVar22 = appppcStack_298;
                              goto LAB_1075381e0;
                            }
                            func_0x000107539d34();
                            if ((int)ppppppcVar20 == 0) {
                              param_2 = &DAT_10f416776;
                              func_0x000107539d34();
                              if ((int)ppppppcVar20 != 0) {
                                func_0x000107539d1c();
                                FUN_107538fe8();
                                ppppppcVar20 = ppppppcVar7;
                                goto LAB_107537ffc;
                              }
                              func_0x000107539d34();
                              if ((int)ppppppcVar20 == 0) {
                                param_2 = &DAT_10f41677d;
                                func_0x000107539d34();
                                if ((int)ppppppcVar20 != 0) {
                                  param_4 = param_1 + 8;
                                  func_0x000107539f88();
                                  ppppppcVar20 = ppppppcVar7;
                                  goto LAB_107537ffc;
                                }
                                param_2 = &UNK_10f416781;
                                func_0x000107539d34();
                                if ((int)ppppppcVar20 == 0) {
                                  func_0x000107539e74();
                                  func_0x000107539dd4();
                                  goto LAB_107537fc8;
                                }
                                func_0x000107539d5c();
                                param_4 = param_1 + 8;
                                func_0x000107539f88(appppcStack_360);
                                param_2 = auStack_1c0;
                                func_0x000107539d0c();
                              }
                              else {
                                func_0x000107539d5c();
                                func_0x000107539d1c(appppcStack_348);
                                FUN_107538fe8();
                                param_2 = auStack_1c0;
                                UNRECOVERED_JUMPTABLE = (code ******)appppcStack_348;
                                func_0x000107539d0c();
                                pppppcVar22 = appppcStack_348;
                              }
                              func_0x0001072c95d0(pppppcVar22);
                            }
                            else {
                              func_0x000107539d5c();
                              func_0x000107539ea0();
                              func_0x00010002b838(auStack_1f8);
                              func_0x000107539d1c(auStack_2e8);
                              FUN_1075391e8();
                              param_5 = param_1 + 8;
                              param_4 = unaff_x21;
                              FUN_107538638(appppcStack_330,auStack_1f8,auStack_2e8);
                              param_2 = auStack_1c0;
                              UNRECOVERED_JUMPTABLE = (code ******)appppcStack_330;
                              func_0x000107539d0c();
                              func_0x000107539eac();
                              func_0x000107539eb4();
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                                        (auStack_1f8);
                            }
                          }
                          else {
                            func_0x000107539ea0();
                            func_0x00010002b838(auStack_1c0);
                            func_0x000107539d1c(appppcStack_248);
                            FUN_1075391e8();
                            param_2 = auStack_1c0;
                            UNRECOVERED_JUMPTABLE = (code ******)appppcStack_248;
                            param_5 = param_1 + 8;
                            func_0x000107539d94();
                            FUN_107538638();
                            pppppcVar22 = appppcStack_248;
LAB_1075381e0:
                            func_0x000107539398(pppppcVar22);
                          }
                          ppppppcVar20 = (code ******)auStack_1c0;
                          param_3 = UNRECOVERED_JUMPTABLE;
                        }
                        else {
                          func_0x00010002b838(auStack_300,&DAT_10f416774);
                          func_0x000100060964(auStack_1f8,&DAT_10f2f497c);
                          func_0x0001072627ac(auStack_1c0,auStack_1f8);
                          param_5 = (code ******)auStack_1c0;
                          func_0x000107539d1c(appppcStack_318);
                          FUN_107538a70();
                          param_2 = auStack_300;
                          param_3 = (code ******)appppcStack_318;
                          func_0x000107539d0c();
                          func_0x0001072c95d0(appppcStack_318);
                          func_0x000107539e6c();
                          func_0x000104c2f714(auStack_1f8);
                          ppppppcVar20 = (code ******)auStack_300;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                        goto LAB_107537ffc;
                      }
                    }
                  }
                }
              }
              auStack_1c0[0] = 0;
              uStack_188 = 0;
              param_5 = (code ******)auStack_1c0;
              func_0x000107539d1c();
              FUN_107538a70();
              func_0x000107539e6c();
              ppppppcVar20 = ppppppcVar7;
            }
            else {
              func_0x0001072c95f0(auStack_1c0,1);
              auStack_300[0] = 0;
              uStack_2fc = 0;
              auStack_1f8[0] = 0;
              uStack_1d8 = 0;
              param_4 = (code ******)auStack_300;
              param_5 = (code ******)auStack_1f8;
              param_2 = (char *)unaff_x22;
              param_3 = param_1;
              func_0x000107771274(ppppppcVar7);
              func_0x0001072c94e0(auStack_1f8);
              ppppppcVar20 = (code ******)auStack_1c0;
              func_0x0001072ca718();
            }
          }
        }
LAB_107537ffc:
        func_0x000107539ecc();
        goto LAB_107538000;
      }
    }
    param_2 = &UNK_10f416723;
    func_0x000107539f6c();
    func_0x000107539e54();
  }
  else {
    func_0x000107539e74();
    func_0x000107539dd4();
    func_0x00010753a010();
    if (ppppppcVar20 != (code ******)0x0) {
      func_0x000107539cec();
    }
  }
LAB_107538000:
  func_0x000107539ca4(uStack_128);
  if ((bool)in_ZR) {
    return ppppppcVar20;
  }
  ___stack_chk_fail();
  ppppppcVar7 = ppppppcVar20;
  func_0x00010753a010();
  if (ppppppcVar7 != (code ******)0x0) {
    func_0x000107539cec();
  }
  func_0x000107539ecc();
  func_0x000107539d2c();
  pcStack_368 = FUN_10753846c;
  UNRECOVERED_JUMPTABLE = (code ******)param_2;
  pppppcStack_390 = (code *****)unaff_x22;
  pppppcStack_388 = (code *****)unaff_x21;
  pppppcStack_380 = (code *****)param_1;
  pppppcStack_378 = (code *****)ppppppcVar20;
  ppuStack_370 = &puStack_e0;
  func_0x000107539cb8();
  uStack_398 = extraout_x8_01;
  ppppppcVar12 = UNRECOVERED_JUMPTABLE + 1;
  ppppppcVar7 = ppppppcVar12;
  (*(code *)(*UNRECOVERED_JUMPTABLE)[2])();
  if ((int)ppppppcVar7 == 0) {
    ppppppcVar7 = ppppppcVar12;
    (*(code *)(*(code ******)param_2)[3])();
    if ((int)ppppppcVar7 == 0) {
      UNRECOVERED_JUMPTABLE = (code ******)(*(code ******)param_2)[0xe];
      func_0x000107539ca4(uStack_398);
      if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107538594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE)(ppppppcVar20,ppppppcVar12);
        return ppppppcVar12;
      }
      goto LAB_1075385f8;
    }
    ppppcStack_408 = (code ****)0x0;
    uStack_400 = 0;
    uStack_3f8 = 0;
    ppppppcVar7 = ppppppcVar12;
    (*(code *)(*(code ******)param_2)[4])(ppppppcVar12);
    func_0x0001072ac134(&ppppcStack_408,ppppppcVar7);
    unaff_x22 = (code ******)0x0;
    while( true ) {
      ppppppcVar7 = ppppppcVar12;
      (*(code *)(*(code ******)param_2)[4])();
      in_ZR = unaff_x22 == ppppppcVar7;
      if (ppppppcVar7 <= unaff_x22) break;
      (*(code *)(*(code ******)param_2)[5])(auStack_3f0,ppppppcVar12,unaff_x22);
      FUN_10753846c(auStack_3e0,auStack_3f0);
      func_0x0001072f5f6c(auStack_3f0);
      if (cStack_3a0 == '\x01') {
        func_0x0001072d7f34(&ppppcStack_408,auStack_3e0);
      }
      else {
        func_0x000107539bd0(&ppppcStack_408,auStack_3f0);
      }
      func_0x000107267ed0(auStack_3e0);
      unaff_x22 = (code ******)((long)unaff_x22 + 1);
    }
    FUN_107327958(&uStack_420,&ppppcStack_408);
    auStack_3e0[0] = 0;
    uStack_3d0 = uStack_418;
    uStack_3d8 = uStack_420;
    uStack_420 = 0;
    uStack_418 = 0;
    UNRECOVERED_JUMPTABLE = (code ******)auStack_3e0;
    func_0x00010729d394(ppppppcVar20);
    func_0x000104c3323c(auStack_3e0);
    func_0x000104c33108(&uStack_420);
    ppppppcVar7 = (code ******)&ppppcStack_408;
    func_0x000107269124();
  }
  else {
    *(char *)ppppppcVar20 = '\0';
    *(char *)(ppppppcVar20 + 8) = '\0';
  }
  func_0x000107539ca4(uStack_398);
  if ((bool)in_ZR) {
    return ppppppcVar7;
  }
LAB_1075385f8:
  uVar4 = 0;
  ___stack_chk_fail();
  ppppppcVar20 = (code ******)&ppppcStack_408;
  func_0x000107269124();
  func_0x000107539d2c();
  pcStack_428 = FUN_107538638;
  ppppcStack_460 = (code ****)unaff_x24;
  pppppcStack_458 = (code *****)ppppppcVar10;
  pppppcStack_450 = (code *****)unaff_x22;
  pppppcStack_448 = (code *****)param_2;
  pppppcStack_440 = (code *****)ppppppcVar12;
  pppppcStack_438 = (code *****)ppppppcVar7;
  pppuStack_430 = &ppuStack_370;
  func_0x000107539cb8();
  uStack_468 = extraout_x8_02;
  if (((ulong)param_3[9] & 1) == 0) {
    func_0x000107539e54();
  }
  else {
    ppppppcVar10 = param_5;
    func_0x000107539f04();
    func_0x000107539ea0();
    UNRECOVERED_JUMPTABLE = unaff_x22;
    func_0x000100152bb8();
    ppppppcVar20 = (code ******)param_2;
    if ((int)UNRECOVERED_JUMPTABLE == 0) {
      func_0x000107539fd4();
      UNRECOVERED_JUMPTABLE = unaff_x22;
      func_0x000100152bb8();
      if ((int)UNRECOVERED_JUMPTABLE == 0) {
        uStack_518 = 2;
        func_0x0001072f6b34(appppcStack_510,auStack_520,1);
        func_0x0001072c9884(auStack_520);
        func_0x0001072c9bc0(appppcStack_4b0,param_2);
        UNRECOVERED_JUMPTABLE = (code ******)appppcStack_4b0;
        param_3 = (code ******)appppcStack_510;
        func_0x00010772cc04(&ppppcStack_540,unaff_x22);
        func_0x0001072c9c34(appppcStack_4b0);
        if ((bStack_530 & 1) == 0) {
          func_0x000107771558(appppcStack_558,appppcStack_510);
          UNRECOVERED_JUMPTABLE = (code ******)appppcStack_558;
          func_0x000100066230(ppppppcVar12);
          func_0x000107539f74();
          func_0x000107539e54();
          param_5 = ppppppcVar10;
        }
        else {
          ppppppcVar7[1] = (code *****)ppppcStack_538;
          *ppppppcVar7 = (code *****)ppppcStack_540;
          ppppcStack_540 = (code ****)0x0;
          ppppcStack_538 = (code ****)0x0;
          *(char *)(ppppppcVar7 + 2) = '\x01';
          param_5 = ppppppcVar10;
        }
        func_0x000107539f58();
        ppppppcVar20 = (code ******)appppcStack_510;
        func_0x0001072ca718();
      }
      else {
        FUN_107539768(appppcStack_510);
        func_0x000107539ed4();
        FUN_107539a08();
        UNRECOVERED_JUMPTABLE = param_5;
        param_5 = ppppppcVar10;
      }
    }
    else {
      FUN_1075394a0(appppcStack_510);
      func_0x000107539ed4();
      FUN_107539740();
      UNRECOVERED_JUMPTABLE = param_5;
      param_5 = ppppppcVar10;
    }
  }
  func_0x000107539ca4(uStack_468);
  if ((bool)uVar4) {
    return ppppppcVar20;
  }
  ___stack_chk_fail();
  func_0x000107539f58();
  ppppppcVar7 = (code ******)appppcStack_510;
  func_0x0001072ca718();
  func_0x000107539d2c();
  pcStack_568 = FUN_1075387c0;
  ppppppcVar10 = ppppppcVar7;
  pppppcStack_590 = (code *****)unaff_x22;
  pppppcStack_588 = (code *****)param_2;
  pppppcStack_580 = (code *****)ppppppcVar12;
  pppppcStack_578 = (code *****)ppppppcVar20;
  ppppuStack_570 = &pppuStack_430;
  func_0x000107539ccc();
  uStack_598 = extraout_x8_03;
  if (((ulong)param_3[2] & 1) == 0) {
    *(undefined1 *)ppppppcVar7 = 0;
    *(undefined1 *)(ppppppcVar7 + 2) = 0;
  }
  else {
    ppppcStack_5e8 = (code ****)param_3[1];
    ppppcStack_5f0 = (code ****)*param_3;
    *param_3 = (code *****)0x0;
    param_3[1] = (code *****)0x0;
    func_0x0001072bed5c(appppcStack_5e0,&ppppcStack_5f0,1,&uStack_641);
    func_0x0001072c9b9c(&ppppcStack_5f0);
    func_0x00010753937c(appppcStack_640,appppcStack_5e0);
    param_3 = (code ******)appppcStack_640;
    FUN_107538638(ppppppcVar7);
    func_0x000107539398(appppcStack_640);
    ppppppcVar10 = (code ******)appppcStack_5e0;
    func_0x0001072c9c34();
  }
  func_0x000107539ca4(uStack_598);
  if ((bool)uVar4) {
    return ppppppcVar10;
  }
  ___stack_chk_fail();
  func_0x000107539398(appppcStack_640);
  func_0x0001072c9c34(appppcStack_5e0);
  func_0x000107539d2c();
  pcStack_658 = FUN_1075388a8;
  ppppppcVar20 = UNRECOVERED_JUMPTABLE;
  ppppppcVar12 = param_3;
  ppppppcVar13 = param_4;
  ppppppcVar16 = param_5;
  pppppuStack_660 = &ppppuStack_570;
  func_0x000107539cb8();
  uStack_6a8 = extraout_x8_04;
  appppcStack_6f0[0] = (code ****)0x0;
  ppppppcVar17 = ppppppcVar20 + 1;
  ppppppcVar7 = ppppppcVar17;
  (*(code *)(*ppppppcVar20)[4])(ppppppcVar17);
  FUN_107539a30(appppcStack_6f0,ppppppcVar7);
  do {
    ppppppcVar7 = ppppppcVar17;
    (*(code *)(*UNRECOVERED_JUMPTABLE)[4])();
    uVar4 = param_5 == ppppppcVar7;
    if (ppppppcVar7 <= param_5) {
      ppppppcVar7 = (code ******)appppcStack_6f0;
      func_0x00010753937c(ppppppcVar10);
      break;
    }
    (*(code *)(*UNRECOVERED_JUMPTABLE)[5])(auStack_700,ppppppcVar17,param_5);
    func_0x0001072c95f0(appppcStack_758,1);
    ppppppcVar7 = (code ******)appppcStack_758;
    ppppppcVar12 = param_4;
    func_0x000107768e6c(&ppppcStack_770,auStack_700);
    uVar4 = cStack_760 == '\x01';
    bVar1 = !(bool)uVar4;
    if (bVar1) {
      func_0x000107771558(appppcStack_788,appppcStack_758);
      ppppppcVar7 = (code ******)appppcStack_788;
      func_0x000100066230(param_3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appppcStack_788);
      ppppcStack_7a0 = (code ****)((ulong)ppppcStack_7a0 & 0xffffffffffffff00);
    }
    else {
      uStack_798 = uStack_768;
      ppppcStack_7a0 = ppppcStack_770;
      ppppcStack_770 = (code ****)0x0;
      uStack_768 = 0;
    }
    bStack_790 = !bVar1;
    func_0x000107539eac();
    func_0x0001072ca718(appppcStack_758);
    func_0x0001072f5f6c(auStack_700);
    bVar2 = bStack_790;
    if ((bStack_790 & 1) == 0) {
      *(undefined1 *)ppppppcVar10 = 0;
      *(undefined1 *)(ppppppcVar10 + 9) = 0;
    }
    else {
      ppppppcVar7 = (code ******)&ppppcStack_7a0;
      func_0x0001072c995c(appppcStack_6f0);
    }
    func_0x0001072c95d0(&ppppcStack_7a0);
    param_5 = (code ******)((long)param_5 + 1);
  } while ((bVar2 & 1) != 0);
  ppppppcVar20 = (code ******)appppcStack_6f0;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_6a8);
  if ((bool)uVar4) {
    return ppppppcVar20;
  }
  ___stack_chk_fail();
  func_0x0001072c9c34(appppcStack_6f0);
  func_0x000107539d2c();
  pcStack_7a8 = FUN_107538a70;
  ppppppcVar15 = ppppppcVar7;
  ppppppcVar10 = ppppppcVar12;
  ppppppcVar19 = ppppppcVar13;
  pppppcStack_7e0 = (code *****)ppppppcVar17;
  pppppcStack_7d8 = (code *****)UNRECOVERED_JUMPTABLE;
  pppppcStack_7d0 = (code *****)param_3;
  pppppcStack_7c8 = (code *****)param_4;
  pppppcStack_7c0 = (code *****)param_5;
  pppppcStack_7b8 = (code *****)ppppppcVar20;
  pppppuStack_7b0 = &pppppuStack_660;
  func_0x000107539cb8();
  uStack_7e8 = extraout_x8_05;
  uVar4 = *(char *)(ppppppcVar16 + 7) == '\x01';
  if ((bool)uVar4) {
    func_0x000107263b58(appppcStack_828);
    ppppppcVar15 = ppppppcVar16;
  }
  else {
    func_0x000107539fac(&lStack_868,ppppppcVar7 + 1);
    (**(code **)(lStack_868 + 0x68))(appppcStack_828,auStack_860);
    func_0x0001072f5f6c(&lStack_868);
  }
  pppppcVar22 = &ppppcStack_880;
  func_0x000107539dc0(&ppppcStack_880,ppppppcVar7 + 1);
  (*(code *)ppppcStack_880[0xd])(&lStack_868,auStack_878);
  func_0x0001072f5f6c(&ppppcStack_880);
  if ((bStack_830 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x000107539fec();
    iVar6 = (int)&lStack_868;
    func_0x000107278484();
    if (iVar6 == 0) {
      func_0x000107539ff8();
      iVar6 = (int)&lStack_868;
      func_0x000107278484();
      if (iVar6 == 0) {
        func_0x000107539dac();
        func_0x000107539dc8(&UNK_10f4166dc);
        func_0x000107539e10(appppcStack_970);
        ppppppcVar15 = (code ******)&ppppcStack_880;
        ppppppcVar10 = (code ******)appppcStack_970;
        func_0x000107539cdc();
        pppppcVar21 = appppcStack_970;
      }
      else {
        func_0x000107539dac();
        func_0x000107539dc8(&UNK_10f4166d1);
        func_0x000107539cf8(appppcStack_920);
        ppppppcVar15 = (code ******)&ppppcStack_880;
        ppppppcVar10 = (code ******)appppcStack_920;
        func_0x000107539cdc();
        pppppcVar21 = appppcStack_920;
      }
    }
    else {
      func_0x000107539dac();
      func_0x000107539dc8(&UNK_10f4166c0);
      func_0x000107539cf8(appppcStack_8d0);
      ppppppcVar15 = (code ******)&ppppcStack_880;
      ppppppcVar10 = (code ******)appppcStack_8d0;
      func_0x000107539cdc();
      pppppcVar21 = appppcStack_8d0;
    }
    func_0x000107539398(pppppcVar21);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppcStack_880);
    func_0x000107539f74();
  }
  func_0x00010724b3d8(&lStack_868);
  ppppppcVar20 = (code ******)appppcStack_828;
  func_0x00010724b3d8();
  func_0x000107539ca4(uStack_7e8);
  if ((bool)uVar4) {
    return ppppppcVar20;
  }
  ___stack_chk_fail();
  func_0x000107539398(appppcStack_970);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppcStack_880);
  func_0x000107539f74();
  func_0x00010724b3d8(&lStack_868);
  func_0x00010724b3d8(appppcStack_828);
  func_0x000107539d2c();
  pcStack_998 = FUN_107538cc4;
  UNRECOVERED_JUMPTABLE = ppppppcVar10;
  ppppppcVar16 = ppppppcVar19;
  pppppcStack_9d0 = (code *****)ppppppcVar17;
  ppppcStack_9c8 = (code ****)pppppcVar22;
  pppppcStack_9c0 = (code *****)ppppppcVar7;
  pppppcStack_9b8 = (code *****)ppppppcVar13;
  pppppcStack_9b0 = (code *****)ppppppcVar12;
  pppppcStack_9a8 = (code *****)ppppppcVar20;
  pppppuStack_9a0 = &pppppuStack_7b0;
  func_0x000107539cb8();
  ppppcVar11 = &pppcStack_a48;
  uStack_9d8 = extraout_x8_06;
  func_0x000107539dc0(&pppcStack_a48,ppppppcVar15 + 1);
  (*(code *)pppcStack_a48[0xd])(appppcStack_a88,auStack_a40);
  func_0x0001072f5f6c(&pppcStack_a48);
  if ((bStack_a50 & 1) == 0) {
    uVar14 = 0x99;
    func_0x000107539f6c();
    func_0x000107539e54();
  }
  else {
    func_0x000107539fec();
    iVar6 = (int)appppcStack_a88;
    func_0x000107278484();
    if (iVar6 == 0) {
      func_0x000107539ff8();
      iVar6 = (int)appppcStack_a88;
      func_0x000107278484();
      if (iVar6 == 0) {
        func_0x00010002b838(auStack_b28,&UNK_10f4166f2);
        func_0x000104c2fe00(auStack_b10,appppcStack_a88);
        ppppcVar11 = (code ****)0xb8;
        __Znwm();
        pppppcVar22 = (code *****)&pppcStack_a48;
        func_0x000107277488(&pppcStack_a48,auStack_b10);
        FUN_107539ae8(ppppcVar11,&pppcStack_a48,ppppppcVar19);
        pppcStack_b48 = (code ***)ppppcVar11;
        func_0x000107539efc();
        func_0x0001075393b8(appppcStack_b40,&pppcStack_b48);
        uVar14 = SUB81(auStack_b28,0);
        UNRECOVERED_JUMPTABLE = (code ******)appppcStack_b40;
        func_0x000107539d94();
        FUN_1075387c0();
        func_0x0001072c95d0(appppcStack_b40);
        pppcVar3 = pppcStack_b48;
        pppcStack_b48 = (code ***)0x0;
        if ((code ****)pppcVar3 != (code ****)0x0) {
          func_0x000107539cec();
        }
        func_0x000104c2f714(auStack_b10);
        puVar8 = auStack_b28;
      }
      else {
        func_0x00010002b838(auStack_b10,&UNK_10f4166e4);
        pppcStack_a48 = (code ***)0x0;
        func_0x00010753937c(appppcStack_ad8,&pppcStack_a48);
        uVar14 = SUB81(auStack_b10,0);
        UNRECOVERED_JUMPTABLE = (code ******)appppcStack_ad8;
        func_0x000107539d94();
        FUN_107538638();
        func_0x000107539eb4();
        func_0x0001072c9c34(&pppcStack_a48);
        puVar8 = auStack_b10;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8);
    }
    else {
      UNRECOVERED_JUMPTABLE = ppppppcVar19;
      FUN_107538f54(&pppcStack_a48,1);
      uVar14 = SUB81(&pppcStack_a48,0);
      func_0x0001075393b8(ppppppcVar20);
      pppcVar3 = pppcStack_a48;
      pppcStack_a48 = (code ***)0x0;
      if ((code ****)pppcVar3 != (code ****)0x0) {
        func_0x000107539cec();
      }
    }
  }
  ppppppcVar7 = (code ******)appppcStack_a88;
  func_0x00010724b3d8();
  func_0x000107539ca4(uStack_9d8);
  if ((bool)uVar4) {
    return ppppppcVar7;
  }
  ___stack_chk_fail();
  func_0x0001072c95d0(appppcStack_b40);
  pppcVar3 = pppcStack_b48;
  pppcStack_b48 = (code ***)0x0;
  if (pppcVar3 != (code ***)0x0) {
    func_0x000107539cec();
  }
  func_0x000104c2f714(auStack_b10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b28);
  func_0x00010724b3d8(appppcStack_a88);
  func_0x000107539d2c();
  pcStack_b58 = FUN_107538f54;
  pppppcStack_b90 = (code *****)ppppppcVar17;
  ppppcStack_b88 = (code ****)pppppcVar22;
  pppcStack_b80 = (code ***)ppppcVar11;
  pppppcStack_b78 = (code *****)ppppppcVar10;
  pppppcStack_b70 = (code *****)ppppppcVar19;
  pppppcStack_b68 = (code *****)ppppppcVar7;
  pppppuStack_b60 = &pppppuStack_9a0;
  func_0x000107539cb8();
  ppppppcVar12 = (code ******)0xb8;
  uStack_b98 = extraout_x8_07;
  __Znwm();
  uStack_ba0 = 1;
  ppppppcVar20 = (code ******)&ppppcStack_c08;
  ppppppcVar10 = ppppppcVar12;
  uStack_c00 = uVar14;
  FUN_107539ae8();
  *ppppppcVar7 = (code *****)ppppppcVar12;
  func_0x000107539efc();
  func_0x000107539ca4(uStack_b98);
  if ((bool)uVar4) {
    return ppppppcVar10;
  }
  ___stack_chk_fail();
  func_0x000107539efc();
  __ZdlPv(ppppppcVar12);
  func_0x000107539d2c();
  ppppppcVar7 = (code ******)appppcStack_db0;
  pppppcVar22 = appppcStack_db0;
  ppppppcVar17 = ppppppcVar20;
  ppppppcVar12 = UNRECOVERED_JUMPTABLE;
  func_0x000107539cb8();
  uStack_c68 = extraout_x8_08;
  func_0x000107539dc0(apppppcStack_cc0,ppppppcVar17 + 1);
  func_0x000107539fbc();
  ppppppcVar13 = apppppcStack_cc0;
  func_0x0001072f5f6c();
  if ((bStack_c70 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x00010753a004();
    func_0x000107539df8();
    if (ppppppcVar13 == (code ******)0x0) {
      ppppppcVar12 = ppppppcVar16 + 8;
      FUN_107538f54(apppppcStack_cc0,0,ppppppcVar12);
      ppppppcVar17 = apppppcStack_cc0;
      func_0x0001075393b8(ppppppcVar10);
      ppppppcVar13 = (code ******)apppppcStack_cc0[0];
      apppppcStack_cc0[0] = (code *****)0x0;
      if (ppppppcVar13 != (code ******)0x0) {
        func_0x000107539cec();
      }
    }
    else {
      func_0x000107539fec();
      iVar6 = (int)ppppppcVar13;
      func_0x000107539d34();
      if (iVar6 == 0) {
        func_0x000107539ff8();
        func_0x000107539d34();
        if (iVar6 == 0) {
          func_0x000107539f44();
          func_0x000107539e10(appppcStack_db0);
          ppppppcVar17 = apppppcStack_cc0;
          func_0x000107539cdc();
        }
        else {
          func_0x000107539f44();
          func_0x000107539cf8(appppcStack_d60);
          ppppppcVar17 = apppppcStack_cc0;
          ppppppcVar7 = (code ******)appppcStack_d60;
          func_0x000107539cdc();
          pppppcVar22 = appppcStack_d60;
        }
      }
      else {
        func_0x000107539f44();
        func_0x000107539cf8(appppcStack_d10);
        ppppppcVar17 = apppppcStack_cc0;
        ppppppcVar7 = (code ******)appppcStack_d10;
        func_0x000107539cdc();
        pppppcVar22 = appppcStack_d10;
      }
      func_0x000107539398(pppppcVar22);
      ppppppcVar13 = apppppcStack_cc0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppcVar13);
      ppppppcVar12 = ppppppcVar7;
    }
  }
  func_0x000107539ecc();
  func_0x000107539ca4(uStack_c68);
  if ((bool)uVar4) {
    return ppppppcVar13;
  }
  ___stack_chk_fail();
  func_0x000107539dec();
  func_0x000107539398();
  ppppppcVar7 = apppppcStack_cc0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppcVar7);
  func_0x000107539ecc();
  func_0x000107539d2c();
  func_0x000107539f04();
  func_0x000107539cb8();
  uStack_e08 = extraout_x8_09;
  appppcStack_e50[0] = (code ****)0x0;
  func_0x000107539df8((*ppppppcVar17)[4]);
  pppppcVar22 = appppcStack_e50;
  FUN_107539a30(pppppcVar22,ppppppcVar7);
  pppppcVar21 = (code *****)0x1;
  do {
    func_0x00010753a004();
    func_0x000107539df8();
    uVar4 = pppppcVar21 == pppppcVar22;
    if (pppppcVar22 <= pppppcVar21) {
      pppppcVar18 = appppcStack_e50;
      func_0x00010753937c(ppppppcVar10);
      break;
    }
    (*(code *)(*ppppppcVar20)[5])(apppcStack_e60,ppppppcVar17 + 1,pppppcVar21);
    pppppcVar18 = (code *****)apppcStack_e60;
    ppppppcVar12 = ppppppcVar16;
    FUN_107537eec(apppcStack_e78,pppppcVar18,ppppppcVar16,UNRECOVERED_JUMPTABLE);
    func_0x0001072f5f6c(apppcStack_e60);
    bVar2 = bStack_e68;
    if ((bStack_e68 & 1) == 0) {
      *(undefined1 *)ppppppcVar10 = 0;
      *(undefined1 *)(ppppppcVar10 + 9) = 0;
    }
    else {
      pppppcVar18 = (code *****)apppcStack_e78;
      func_0x0001072c995c(appppcStack_e50);
    }
    pppppcVar22 = (code *****)apppcStack_e78;
    func_0x0001072c95d0();
    pppppcVar21 = (code *****)((long)pppppcVar21 + 1);
  } while ((bVar2 & 1) != 0);
  ppppppcVar7 = (code ******)appppcStack_e50;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_e08);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    ppppppcVar7 = (code ******)appppcStack_e50;
    func_0x0001072c9c34();
    func_0x000107539d2c();
    pppppcVar22 = (code *****)*pppppcVar18;
    ppppppcVar7[1] = (code *****)pppppcVar18[1];
    *ppppppcVar7 = pppppcVar22;
    *pppppcVar18 = (code ****)0x0;
    pppppcVar18[1] = (code ****)0x0;
    *(undefined1 *)(ppppppcVar7 + 2) = 1;
    func_0x000107284cf0(ppppppcVar7 + 3,ppppppcVar12);
    return ppppppcVar7;
  }
  return ppppppcVar7;
}



/* Entry: 107537eec; end: 10753846b;  */

code ******
FUN_107537eec(undefined8 param_1,char *param_2,code *****param_3,code *****param_4,
             code ******param_5)

{
  bool bVar1;
  byte bVar2;
  code ***pppcVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  code ******ppppppcVar7;
  code ******ppppppcVar8;
  code ******ppppppcVar9;
  code ******ppppppcVar10;
  code ****ppppcVar11;
  undefined1 *puVar12;
  code ******UNRECOVERED_JUMPTABLE;
  undefined1 uVar13;
  code *****pppppcVar14;
  code *****pppppcVar15;
  code *****pppppcVar16;
  code *****pppppcVar17;
  code ******ppppppcVar18;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  code ******unaff_x19;
  code *****unaff_x20;
  code *****unaff_x21;
  code ******unaff_x22;
  code *****pppppcVar19;
  undefined1 *unaff_x24;
  code *****pppppcVar20;
  code *****pppppcVar21;
  code ***apppcStack_da8 [2];
  byte bStack_d98;
  code ***apppcStack_d90 [2];
  code ****appppcStack_d80 [9];
  undefined8 uStack_d38;
  code ***apppcStack_ce0 [10];
  code ***apppcStack_c90 [10];
  code ***apppcStack_c40 [10];
  code *****apppppcStack_bf0 [10];
  byte bStack_ba0;
  undefined8 uStack_b98;
  code ****ppppcStack_b38;
  undefined1 uStack_b30;
  undefined4 uStack_ad0;
  undefined8 uStack_ac8;
  code *****pppppcStack_ac0;
  code ****ppppcStack_ab8;
  code ***pppcStack_ab0;
  code ****ppppcStack_aa8;
  code ****ppppcStack_aa0;
  code *****pppppcStack_a98;
  undefined8 *****pppppuStack_a90;
  code *pcStack_a88;
  code ***pppcStack_a78;
  code ***apppcStack_a70 [3];
  undefined1 auStack_a58 [24];
  undefined1 auStack_a40 [56];
  code ***apppcStack_a08 [10];
  code ****appppcStack_9b8 [7];
  byte bStack_980;
  code ***pppcStack_978;
  undefined1 auStack_970 [104];
  undefined8 uStack_908;
  code *****pppppcStack_900;
  code ****ppppcStack_8f8;
  code *****pppppcStack_8f0;
  code ****ppppcStack_8e8;
  code ****ppppcStack_8e0;
  code *****pppppcStack_8d8;
  undefined8 *****pppppuStack_8d0;
  code *pcStack_8c8;
  code ***apppcStack_8a0 [10];
  code ***apppcStack_850 [10];
  code ***apppcStack_800 [10];
  code ****ppppcStack_7b0;
  undefined1 auStack_7a8 [16];
  long lStack_798;
  undefined1 auStack_790 [48];
  byte bStack_760;
  code ****appppcStack_758 [8];
  undefined8 uStack_718;
  code *****pppppcStack_710;
  code *****pppppcStack_708;
  code ****ppppcStack_700;
  code ****ppppcStack_6f8;
  code *****pppppcStack_6f0;
  code *****pppppcStack_6e8;
  undefined1 *****pppppuStack_6e0;
  code *pcStack_6d8;
  code ****ppppcStack_6d0;
  undefined8 uStack_6c8;
  byte bStack_6c0;
  code ****appppcStack_6b8 [3];
  code ****ppppcStack_6a0;
  undefined8 uStack_698;
  char cStack_690;
  code ****appppcStack_688 [11];
  undefined1 auStack_630 [16];
  code ****appppcStack_620 [9];
  undefined8 uStack_5d8;
  undefined1 ****ppppuStack_590;
  code *pcStack_588;
  undefined1 uStack_571;
  code ***apppcStack_570 [10];
  code ***pppcStack_520;
  code ***pppcStack_518;
  code ****appppcStack_510 [9];
  undefined8 uStack_4c8;
  code *****pppppcStack_4c0;
  code *****pppppcStack_4b8;
  code *****pppppcStack_4b0;
  code *****pppppcStack_4a8;
  undefined1 ***pppuStack_4a0;
  code *pcStack_498;
  code ****appppcStack_488 [3];
  code ****ppppcStack_470;
  code ****ppppcStack_468;
  byte bStack_460;
  undefined1 auStack_450 [8];
  undefined4 uStack_448;
  code ****appppcStack_440 [12];
  code ****appppcStack_3e0 [9];
  undefined8 uStack_398;
  code ****ppppcStack_390;
  code *****pppppcStack_388;
  code *****pppppcStack_380;
  code *****pppppcStack_378;
  code *****pppppcStack_370;
  code *****pppppcStack_368;
  undefined1 **ppuStack_360;
  code *pcStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  code ****ppppcStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_320 [16];
  undefined4 auStack_310 [2];
  undefined8 uStack_308;
  undefined8 uStack_300;
  char cStack_2d0;
  undefined8 uStack_2c8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  code ***apppcStack_290 [3];
  code ***apppcStack_278 [3];
  code ***apppcStack_260 [3];
  code ***apppcStack_248 [3];
  undefined1 auStack_230 [4];
  undefined1 uStack_22c;
  undefined1 auStack_218 [80];
  code ***apppcStack_1c8 [10];
  code ***apppcStack_178 [10];
  undefined1 auStack_128 [32];
  undefined1 uStack_108;
  undefined1 auStack_f0 [56];
  undefined1 uStack_b8;
  byte bStack_60;
  undefined8 uStack_58;
  
  pppppcVar21 = (code *****)apppcStack_290;
  ppppcVar11 = apppcStack_290;
  func_0x000107539f04();
  func_0x000107539cb8();
  ppppppcVar10 = (code ******)((long)param_2 + 8);
  ppppppcVar7 = ppppppcVar10;
  uStack_58 = extraout_x8;
  (*(code *)(*(code ******)param_2)[2])();
  if ((int)ppppppcVar7 == 0) {
    ppppppcVar7 = ppppppcVar10;
    (*(code *)(*unaff_x22)[3])();
    if ((int)ppppppcVar7 != 0) {
      func_0x00010753a004();
      func_0x000107539df8();
      bVar1 = ppppppcVar7 != (code ******)0x0;
      ppppppcVar7 = (code ******)0x0;
      if (bVar1) {
        unaff_x24 = auStack_f0;
        func_0x000107539fac(auStack_f0,ppppppcVar10);
        func_0x000107539fbc();
        ppppppcVar7 = (code ******)auStack_f0;
        func_0x0001072f5f6c();
        if ((bStack_60 & 1) == 0) {
          param_2 = &UNK_10f41674a;
          func_0x000107539f6c();
          func_0x000107539e54();
        }
        else {
          func_0x00010753a004();
          func_0x000107539df8();
          in_ZR = ppppppcVar7 == (code ******)0x1;
          if (ppppppcVar7 < (code ******)0x2) {
            func_0x000107539ea0();
            uVar5 = (uint)ppppppcVar7;
            func_0x000107539d34();
            ppppppcVar7 = (code ******)auStack_f0;
            param_2 = (char *)(ulong)(uVar5 ^ 1);
            param_3 = unaff_x20 + 8;
            FUN_107538f54();
            func_0x000107539dd4();
LAB_107537fc8:
            func_0x00010753a010();
            if (ppppppcVar7 != (code ******)0x0) {
              func_0x000107539cec();
            }
          }
          else {
            func_0x000107539d34();
            if ((int)ppppppcVar7 == 0) {
              param_2 = &DAT_10f2f497c;
              func_0x000107539d34();
              if (((ulong)ppppppcVar7 & 1) == 0) {
                param_2 = "<";
                func_0x000107539d34();
                if (((ulong)ppppppcVar7 & 1) == 0) {
                  param_2 = ">";
                  func_0x000107539d34();
                  if (((ulong)ppppppcVar7 & 1) == 0) {
                    param_2 = &DAT_10f41676b;
                    func_0x000107539d34();
                    if (((ulong)ppppppcVar7 & 1) == 0) {
                      param_2 = &DAT_10f41676e;
                      func_0x000107539d34();
                      if ((int)ppppppcVar7 == 0) {
                        func_0x000107539d34();
                        if ((int)ppppppcVar7 == 0) {
                          func_0x000107539ea0();
                          func_0x000107539d34();
                          if ((int)ppppppcVar7 == 0) {
                            func_0x000107539fd4();
                            func_0x000107539d34();
                            if ((int)ppppppcVar7 != 0) {
                              func_0x000107539fd4();
                              func_0x00010002b838(auStack_f0);
                              func_0x000107539d1c(apppcStack_1c8);
                              FUN_1075391e8();
                              param_2 = auStack_f0;
                              pppppcVar21 = (code *****)apppcStack_1c8;
                              param_5 = (code ******)(unaff_x20 + 8);
                              func_0x000107539d94();
                              FUN_107538638();
                              ppppcVar11 = apppcStack_1c8;
                              goto LAB_1075381e0;
                            }
                            func_0x000107539d34();
                            if ((int)ppppppcVar7 == 0) {
                              param_2 = &DAT_10f416776;
                              func_0x000107539d34();
                              if ((int)ppppppcVar7 != 0) {
                                func_0x000107539d1c();
                                FUN_107538fe8();
                                ppppppcVar7 = unaff_x19;
                                goto LAB_107537ffc;
                              }
                              func_0x000107539d34();
                              if ((int)ppppppcVar7 == 0) {
                                param_2 = &DAT_10f41677d;
                                func_0x000107539d34();
                                if ((int)ppppppcVar7 != 0) {
                                  param_4 = unaff_x20 + 8;
                                  func_0x000107539f88();
                                  ppppppcVar7 = unaff_x19;
                                  goto LAB_107537ffc;
                                }
                                param_2 = &UNK_10f416781;
                                func_0x000107539d34();
                                if ((int)ppppppcVar7 == 0) {
                                  func_0x000107539e74();
                                  func_0x000107539dd4();
                                  goto LAB_107537fc8;
                                }
                                func_0x000107539d5c();
                                param_4 = unaff_x20 + 8;
                                func_0x000107539f88(apppcStack_290);
                                param_2 = auStack_f0;
                                func_0x000107539d0c();
                              }
                              else {
                                func_0x000107539d5c();
                                func_0x000107539d1c(apppcStack_278);
                                FUN_107538fe8();
                                param_2 = auStack_f0;
                                pppppcVar21 = (code *****)apppcStack_278;
                                func_0x000107539d0c();
                                ppppcVar11 = apppcStack_278;
                              }
                              func_0x0001072c95d0(ppppcVar11);
                            }
                            else {
                              func_0x000107539d5c();
                              func_0x000107539ea0();
                              func_0x00010002b838(auStack_128);
                              func_0x000107539d1c(auStack_218);
                              FUN_1075391e8();
                              param_5 = (code ******)(unaff_x20 + 8);
                              FUN_107538638(apppcStack_260,auStack_128,auStack_218);
                              param_2 = auStack_f0;
                              pppppcVar21 = (code *****)apppcStack_260;
                              func_0x000107539d0c();
                              func_0x000107539eac();
                              func_0x000107539eb4();
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                                        (auStack_128);
                              param_4 = unaff_x21;
                            }
                          }
                          else {
                            func_0x000107539ea0();
                            func_0x00010002b838(auStack_f0);
                            func_0x000107539d1c(apppcStack_178);
                            FUN_1075391e8();
                            param_2 = auStack_f0;
                            pppppcVar21 = (code *****)apppcStack_178;
                            param_5 = (code ******)(unaff_x20 + 8);
                            func_0x000107539d94();
                            FUN_107538638();
                            ppppcVar11 = apppcStack_178;
LAB_1075381e0:
                            func_0x000107539398(ppppcVar11);
                          }
                          ppppppcVar7 = (code ******)auStack_f0;
                          param_3 = pppppcVar21;
                        }
                        else {
                          func_0x00010002b838(auStack_230,&DAT_10f416774);
                          func_0x000100060964(auStack_128,&DAT_10f2f497c);
                          func_0x0001072627ac(auStack_f0,auStack_128);
                          param_5 = (code ******)auStack_f0;
                          func_0x000107539d1c(apppcStack_248);
                          FUN_107538a70();
                          param_2 = auStack_230;
                          param_3 = (code *****)apppcStack_248;
                          func_0x000107539d0c();
                          func_0x0001072c95d0(apppcStack_248);
                          func_0x000107539e6c();
                          func_0x000104c2f714(auStack_128);
                          ppppppcVar7 = (code ******)auStack_230;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                        goto LAB_107537ffc;
                      }
                    }
                  }
                }
              }
              auStack_f0[0] = 0;
              uStack_b8 = 0;
              param_5 = (code ******)auStack_f0;
              func_0x000107539d1c();
              FUN_107538a70();
              func_0x000107539e6c();
              ppppppcVar7 = unaff_x19;
            }
            else {
              func_0x0001072c95f0(auStack_f0,1);
              auStack_230[0] = 0;
              uStack_22c = 0;
              auStack_128[0] = 0;
              uStack_108 = 0;
              param_4 = (code *****)auStack_230;
              param_5 = (code ******)auStack_128;
              param_2 = (char *)unaff_x22;
              func_0x000107771274();
              func_0x0001072c94e0(auStack_128);
              ppppppcVar7 = (code ******)auStack_f0;
              func_0x0001072ca718();
              param_3 = unaff_x20;
            }
          }
        }
LAB_107537ffc:
        func_0x000107539ecc();
        goto LAB_107538000;
      }
    }
    param_2 = &UNK_10f416723;
    func_0x000107539f6c();
    func_0x000107539e54();
  }
  else {
    func_0x000107539e74();
    func_0x000107539dd4();
    func_0x00010753a010();
    if (ppppppcVar7 != (code ******)0x0) {
      func_0x000107539cec();
    }
  }
LAB_107538000:
  func_0x000107539ca4(uStack_58);
  if ((bool)in_ZR) {
    return ppppppcVar7;
  }
  ___stack_chk_fail();
  ppppppcVar8 = ppppppcVar7;
  func_0x00010753a010();
  if (ppppppcVar8 != (code ******)0x0) {
    func_0x000107539cec();
  }
  func_0x000107539ecc();
  func_0x000107539d2c();
  pcStack_298 = FUN_10753846c;
  UNRECOVERED_JUMPTABLE = (code ******)param_2;
  puStack_2a0 = &stack0xfffffffffffffff0;
  func_0x000107539cb8();
  uStack_2c8 = extraout_x8_00;
  ppppppcVar9 = UNRECOVERED_JUMPTABLE + 1;
  ppppppcVar8 = ppppppcVar9;
  (*(code *)(*UNRECOVERED_JUMPTABLE)[2])();
  if ((int)ppppppcVar8 == 0) {
    ppppppcVar8 = ppppppcVar9;
    (*(code *)(*(code ******)param_2)[3])();
    if ((int)ppppppcVar8 == 0) {
      UNRECOVERED_JUMPTABLE = (code ******)(*(code ******)param_2)[0xe];
      func_0x000107539ca4(uStack_2c8);
      if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107538594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE)(ppppppcVar7,ppppppcVar9);
        return ppppppcVar9;
      }
      goto LAB_1075385f8;
    }
    ppppcStack_338 = (code ****)0x0;
    uStack_330 = 0;
    uStack_328 = 0;
    ppppppcVar8 = ppppppcVar9;
    (*(code *)(*(code ******)param_2)[4])(ppppppcVar9);
    func_0x0001072ac134(&ppppcStack_338,ppppppcVar8);
    unaff_x22 = (code ******)0x0;
    while( true ) {
      ppppppcVar8 = ppppppcVar9;
      (*(code *)(*(code ******)param_2)[4])();
      in_ZR = unaff_x22 == ppppppcVar8;
      if (ppppppcVar8 <= unaff_x22) break;
      (*(code *)(*(code ******)param_2)[5])(auStack_320,ppppppcVar9,unaff_x22);
      FUN_10753846c(auStack_310,auStack_320);
      func_0x0001072f5f6c(auStack_320);
      if (cStack_2d0 == '\x01') {
        func_0x0001072d7f34(&ppppcStack_338,auStack_310);
      }
      else {
        func_0x000107539bd0(&ppppcStack_338,auStack_320);
      }
      func_0x000107267ed0(auStack_310);
      unaff_x22 = (code ******)((long)unaff_x22 + 1);
    }
    FUN_107327958(&uStack_350,&ppppcStack_338);
    auStack_310[0] = 0;
    uStack_300 = uStack_348;
    uStack_308 = uStack_350;
    uStack_350 = 0;
    uStack_348 = 0;
    UNRECOVERED_JUMPTABLE = (code ******)auStack_310;
    func_0x00010729d394(ppppppcVar7);
    func_0x000104c3323c(auStack_310);
    func_0x000104c33108(&uStack_350);
    ppppppcVar8 = (code ******)&ppppcStack_338;
    func_0x000107269124();
  }
  else {
    *(char *)ppppppcVar7 = '\0';
    *(char *)(ppppppcVar7 + 8) = '\0';
  }
  func_0x000107539ca4(uStack_2c8);
  if ((bool)in_ZR) {
    return ppppppcVar8;
  }
LAB_1075385f8:
  uVar4 = 0;
  ___stack_chk_fail();
  ppppppcVar7 = (code ******)&ppppcStack_338;
  func_0x000107269124();
  func_0x000107539d2c();
  pcStack_358 = FUN_107538638;
  ppppcStack_390 = (code ****)unaff_x24;
  pppppcStack_388 = (code *****)ppppppcVar10;
  pppppcStack_380 = (code *****)unaff_x22;
  pppppcStack_378 = (code *****)param_2;
  pppppcStack_370 = (code *****)ppppppcVar9;
  pppppcStack_368 = (code *****)ppppppcVar8;
  ppuStack_360 = &puStack_2a0;
  func_0x000107539cb8();
  uStack_398 = extraout_x8_01;
  if (((ulong)param_3[9] & 1) == 0) {
    func_0x000107539e54();
  }
  else {
    ppppppcVar18 = param_5;
    func_0x000107539f04();
    func_0x000107539ea0();
    ppppppcVar10 = unaff_x22;
    func_0x000100152bb8();
    ppppppcVar7 = (code ******)param_2;
    if ((int)ppppppcVar10 == 0) {
      func_0x000107539fd4();
      ppppppcVar10 = unaff_x22;
      func_0x000100152bb8();
      if ((int)ppppppcVar10 == 0) {
        uStack_448 = 2;
        func_0x0001072f6b34(appppcStack_440,auStack_450,1);
        func_0x0001072c9884(auStack_450);
        func_0x0001072c9bc0(appppcStack_3e0,param_2);
        UNRECOVERED_JUMPTABLE = (code ******)appppcStack_3e0;
        param_3 = appppcStack_440;
        func_0x00010772cc04(&ppppcStack_470,unaff_x22);
        func_0x0001072c9c34(appppcStack_3e0);
        if ((bStack_460 & 1) == 0) {
          func_0x000107771558(appppcStack_488,appppcStack_440);
          UNRECOVERED_JUMPTABLE = (code ******)appppcStack_488;
          func_0x000100066230(ppppppcVar9);
          func_0x000107539f74();
          func_0x000107539e54();
          param_5 = ppppppcVar18;
        }
        else {
          ppppppcVar8[1] = (code *****)ppppcStack_468;
          *ppppppcVar8 = (code *****)ppppcStack_470;
          ppppcStack_470 = (code ****)0x0;
          ppppcStack_468 = (code ****)0x0;
          *(char *)(ppppppcVar8 + 2) = '\x01';
          param_5 = ppppppcVar18;
        }
        func_0x000107539f58();
        ppppppcVar7 = (code ******)appppcStack_440;
        func_0x0001072ca718();
      }
      else {
        FUN_107539768(appppcStack_440);
        func_0x000107539ed4();
        FUN_107539a08();
        UNRECOVERED_JUMPTABLE = param_5;
        param_5 = ppppppcVar18;
      }
    }
    else {
      FUN_1075394a0(appppcStack_440);
      func_0x000107539ed4();
      FUN_107539740();
      UNRECOVERED_JUMPTABLE = param_5;
      param_5 = ppppppcVar18;
    }
  }
  func_0x000107539ca4(uStack_398);
  if ((bool)uVar4) {
    return ppppppcVar7;
  }
  ___stack_chk_fail();
  func_0x000107539f58();
  ppppppcVar10 = (code ******)appppcStack_440;
  func_0x0001072ca718();
  func_0x000107539d2c();
  pcStack_498 = FUN_1075387c0;
  ppppppcVar8 = ppppppcVar10;
  pppppcStack_4c0 = (code *****)unaff_x22;
  pppppcStack_4b8 = (code *****)param_2;
  pppppcStack_4b0 = (code *****)ppppppcVar9;
  pppppcStack_4a8 = (code *****)ppppppcVar7;
  pppuStack_4a0 = &ppuStack_360;
  func_0x000107539ccc();
  uStack_4c8 = extraout_x8_02;
  if (((ulong)param_3[2] & 1) == 0) {
    *(undefined1 *)ppppppcVar10 = 0;
    *(undefined1 *)(ppppppcVar10 + 2) = 0;
  }
  else {
    pppcStack_518 = (code ***)param_3[1];
    pppcStack_520 = (code ***)*param_3;
    *param_3 = (code ****)0x0;
    param_3[1] = (code ****)0x0;
    func_0x0001072bed5c(appppcStack_510,&pppcStack_520,1,&uStack_571);
    func_0x0001072c9b9c(&pppcStack_520);
    func_0x00010753937c(apppcStack_570,appppcStack_510);
    param_3 = (code *****)apppcStack_570;
    FUN_107538638(ppppppcVar10);
    func_0x000107539398(apppcStack_570);
    ppppppcVar8 = (code ******)appppcStack_510;
    func_0x0001072c9c34();
  }
  func_0x000107539ca4(uStack_4c8);
  if ((bool)uVar4) {
    return ppppppcVar8;
  }
  ___stack_chk_fail();
  func_0x000107539398(apppcStack_570);
  func_0x0001072c9c34(appppcStack_510);
  func_0x000107539d2c();
  pcStack_588 = FUN_1075388a8;
  ppppppcVar10 = UNRECOVERED_JUMPTABLE;
  pppppcVar21 = param_3;
  pppppcVar16 = param_4;
  ppppppcVar9 = param_5;
  ppppuStack_590 = &pppuStack_4a0;
  func_0x000107539cb8();
  uStack_5d8 = extraout_x8_03;
  appppcStack_620[0] = (code ****)0x0;
  ppppppcVar18 = ppppppcVar10 + 1;
  ppppppcVar7 = ppppppcVar18;
  (*(code *)(*ppppppcVar10)[4])(ppppppcVar18);
  FUN_107539a30(appppcStack_620,ppppppcVar7);
  do {
    ppppppcVar7 = ppppppcVar18;
    (*(code *)(*UNRECOVERED_JUMPTABLE)[4])();
    uVar4 = param_5 == ppppppcVar7;
    if (ppppppcVar7 <= param_5) {
      ppppppcVar7 = (code ******)appppcStack_620;
      func_0x00010753937c(ppppppcVar8);
      break;
    }
    (*(code *)(*UNRECOVERED_JUMPTABLE)[5])(auStack_630,ppppppcVar18,param_5);
    func_0x0001072c95f0(appppcStack_688,1);
    ppppppcVar7 = (code ******)appppcStack_688;
    pppppcVar21 = param_4;
    func_0x000107768e6c(&ppppcStack_6a0,auStack_630);
    uVar4 = cStack_690 == '\x01';
    bVar1 = !(bool)uVar4;
    if (bVar1) {
      func_0x000107771558(appppcStack_6b8,appppcStack_688);
      ppppppcVar7 = (code ******)appppcStack_6b8;
      func_0x000100066230(param_3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appppcStack_6b8);
      ppppcStack_6d0 = (code ****)((ulong)ppppcStack_6d0 & 0xffffffffffffff00);
    }
    else {
      uStack_6c8 = uStack_698;
      ppppcStack_6d0 = ppppcStack_6a0;
      ppppcStack_6a0 = (code ****)0x0;
      uStack_698 = 0;
    }
    bStack_6c0 = !bVar1;
    func_0x000107539eac();
    func_0x0001072ca718(appppcStack_688);
    func_0x0001072f5f6c(auStack_630);
    bVar2 = bStack_6c0;
    if ((bStack_6c0 & 1) == 0) {
      *(undefined1 *)ppppppcVar8 = 0;
      *(undefined1 *)(ppppppcVar8 + 9) = 0;
    }
    else {
      ppppppcVar7 = (code ******)&ppppcStack_6d0;
      func_0x0001072c995c(appppcStack_620);
    }
    func_0x0001072c95d0(&ppppcStack_6d0);
    param_5 = (code ******)((long)param_5 + 1);
  } while ((bVar2 & 1) != 0);
  ppppppcVar10 = (code ******)appppcStack_620;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_5d8);
  if ((bool)uVar4) {
    return ppppppcVar10;
  }
  ___stack_chk_fail();
  func_0x0001072c9c34(appppcStack_620);
  func_0x000107539d2c();
  pcStack_6d8 = FUN_107538a70;
  ppppppcVar8 = ppppppcVar7;
  pppppcVar20 = pppppcVar21;
  pppppcVar14 = pppppcVar16;
  pppppcStack_710 = (code *****)ppppppcVar18;
  pppppcStack_708 = (code *****)UNRECOVERED_JUMPTABLE;
  ppppcStack_700 = (code ****)param_3;
  ppppcStack_6f8 = (code ****)param_4;
  pppppcStack_6f0 = (code *****)param_5;
  pppppcStack_6e8 = (code *****)ppppppcVar10;
  pppppuStack_6e0 = &ppppuStack_590;
  func_0x000107539cb8();
  uStack_718 = extraout_x8_04;
  uVar4 = *(char *)(ppppppcVar9 + 7) == '\x01';
  if ((bool)uVar4) {
    func_0x000107263b58(appppcStack_758);
    ppppppcVar8 = ppppppcVar9;
  }
  else {
    func_0x000107539fac(&lStack_798,ppppppcVar7 + 1);
    (**(code **)(lStack_798 + 0x68))(appppcStack_758,auStack_790);
    func_0x0001072f5f6c(&lStack_798);
  }
  pppppcVar19 = &ppppcStack_7b0;
  func_0x000107539dc0(&ppppcStack_7b0,ppppppcVar7 + 1);
  (*(code *)ppppcStack_7b0[0xd])(&lStack_798,auStack_7a8);
  func_0x0001072f5f6c(&ppppcStack_7b0);
  if ((bStack_760 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x000107539fec();
    iVar6 = (int)&lStack_798;
    func_0x000107278484();
    if (iVar6 == 0) {
      func_0x000107539ff8();
      iVar6 = (int)&lStack_798;
      func_0x000107278484();
      if (iVar6 == 0) {
        func_0x000107539dac();
        func_0x000107539dc8(&UNK_10f4166dc);
        func_0x000107539e10(apppcStack_8a0);
        ppppppcVar8 = (code ******)&ppppcStack_7b0;
        pppppcVar20 = (code *****)apppcStack_8a0;
        func_0x000107539cdc();
        ppppcVar11 = apppcStack_8a0;
      }
      else {
        func_0x000107539dac();
        func_0x000107539dc8(&UNK_10f4166d1);
        func_0x000107539cf8(apppcStack_850);
        ppppppcVar8 = (code ******)&ppppcStack_7b0;
        pppppcVar20 = (code *****)apppcStack_850;
        func_0x000107539cdc();
        ppppcVar11 = apppcStack_850;
      }
    }
    else {
      func_0x000107539dac();
      func_0x000107539dc8(&UNK_10f4166c0);
      func_0x000107539cf8(apppcStack_800);
      ppppppcVar8 = (code ******)&ppppcStack_7b0;
      pppppcVar20 = (code *****)apppcStack_800;
      func_0x000107539cdc();
      ppppcVar11 = apppcStack_800;
    }
    func_0x000107539398(ppppcVar11);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppcStack_7b0);
    func_0x000107539f74();
  }
  func_0x00010724b3d8(&lStack_798);
  ppppppcVar10 = (code ******)appppcStack_758;
  func_0x00010724b3d8();
  func_0x000107539ca4(uStack_718);
  if ((bool)uVar4) {
    return ppppppcVar10;
  }
  ___stack_chk_fail();
  func_0x000107539398(apppcStack_8a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppcStack_7b0);
  func_0x000107539f74();
  func_0x00010724b3d8(&lStack_798);
  func_0x00010724b3d8(appppcStack_758);
  func_0x000107539d2c();
  pcStack_8c8 = FUN_107538cc4;
  pppppcVar15 = pppppcVar20;
  pppppcVar17 = pppppcVar14;
  pppppcStack_900 = (code *****)ppppppcVar18;
  ppppcStack_8f8 = (code ****)pppppcVar19;
  pppppcStack_8f0 = (code *****)ppppppcVar7;
  ppppcStack_8e8 = (code ****)pppppcVar16;
  ppppcStack_8e0 = (code ****)pppppcVar21;
  pppppcStack_8d8 = (code *****)ppppppcVar10;
  pppppuStack_8d0 = &pppppuStack_6e0;
  func_0x000107539cb8();
  ppppcVar11 = &pppcStack_978;
  uStack_908 = extraout_x8_05;
  func_0x000107539dc0(&pppcStack_978,ppppppcVar8 + 1);
  (*(code *)pppcStack_978[0xd])(appppcStack_9b8,auStack_970);
  func_0x0001072f5f6c(&pppcStack_978);
  if ((bStack_980 & 1) == 0) {
    uVar13 = 0x99;
    func_0x000107539f6c();
    func_0x000107539e54();
  }
  else {
    func_0x000107539fec();
    iVar6 = (int)appppcStack_9b8;
    func_0x000107278484();
    if (iVar6 == 0) {
      func_0x000107539ff8();
      iVar6 = (int)appppcStack_9b8;
      func_0x000107278484();
      if (iVar6 == 0) {
        func_0x00010002b838(auStack_a58,&UNK_10f4166f2);
        func_0x000104c2fe00(auStack_a40,appppcStack_9b8);
        ppppcVar11 = (code ****)0xb8;
        __Znwm();
        pppppcVar19 = (code *****)&pppcStack_978;
        func_0x000107277488(&pppcStack_978,auStack_a40);
        FUN_107539ae8(ppppcVar11,&pppcStack_978,pppppcVar14);
        pppcStack_a78 = (code ***)ppppcVar11;
        func_0x000107539efc();
        func_0x0001075393b8(apppcStack_a70,&pppcStack_a78);
        uVar13 = SUB81(auStack_a58,0);
        pppppcVar15 = (code *****)apppcStack_a70;
        func_0x000107539d94();
        FUN_1075387c0();
        func_0x0001072c95d0(apppcStack_a70);
        pppcVar3 = pppcStack_a78;
        pppcStack_a78 = (code ***)0x0;
        if ((code ****)pppcVar3 != (code ****)0x0) {
          func_0x000107539cec();
        }
        func_0x000104c2f714(auStack_a40);
        puVar12 = auStack_a58;
      }
      else {
        func_0x00010002b838(auStack_a40,&UNK_10f4166e4);
        pppcStack_978 = (code ***)0x0;
        func_0x00010753937c(apppcStack_a08,&pppcStack_978);
        uVar13 = SUB81(auStack_a40,0);
        pppppcVar15 = (code *****)apppcStack_a08;
        func_0x000107539d94();
        FUN_107538638();
        func_0x000107539eb4();
        func_0x0001072c9c34(&pppcStack_978);
        puVar12 = auStack_a40;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar12);
    }
    else {
      pppppcVar15 = pppppcVar14;
      FUN_107538f54(&pppcStack_978,1);
      uVar13 = SUB81(&pppcStack_978,0);
      func_0x0001075393b8(ppppppcVar10);
      pppcVar3 = pppcStack_978;
      pppcStack_978 = (code ***)0x0;
      if ((code ****)pppcVar3 != (code ****)0x0) {
        func_0x000107539cec();
      }
    }
  }
  ppppppcVar7 = (code ******)appppcStack_9b8;
  func_0x00010724b3d8();
  func_0x000107539ca4(uStack_908);
  if ((bool)uVar4) {
    return ppppppcVar7;
  }
  ___stack_chk_fail();
  func_0x0001072c95d0(apppcStack_a70);
  pppcVar3 = pppcStack_a78;
  pppcStack_a78 = (code ***)0x0;
  if (pppcVar3 != (code ***)0x0) {
    func_0x000107539cec();
  }
  func_0x000104c2f714(auStack_a40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a58);
  func_0x00010724b3d8(appppcStack_9b8);
  func_0x000107539d2c();
  pcStack_a88 = FUN_107538f54;
  pppppcStack_ac0 = (code *****)ppppppcVar18;
  ppppcStack_ab8 = (code ****)pppppcVar19;
  pppcStack_ab0 = (code ***)ppppcVar11;
  ppppcStack_aa8 = (code ****)pppppcVar20;
  ppppcStack_aa0 = (code ****)pppppcVar14;
  pppppcStack_a98 = (code *****)ppppppcVar7;
  pppppuStack_a90 = &pppppuStack_8d0;
  func_0x000107539cb8();
  UNRECOVERED_JUMPTABLE = (code ******)0xb8;
  uStack_ac8 = extraout_x8_06;
  __Znwm();
  uStack_ad0 = 1;
  ppppppcVar10 = (code ******)&ppppcStack_b38;
  ppppppcVar8 = UNRECOVERED_JUMPTABLE;
  uStack_b30 = uVar13;
  FUN_107539ae8();
  *ppppppcVar7 = (code *****)UNRECOVERED_JUMPTABLE;
  func_0x000107539efc();
  func_0x000107539ca4(uStack_ac8);
  if ((bool)uVar4) {
    return ppppppcVar8;
  }
  ___stack_chk_fail();
  func_0x000107539efc();
  __ZdlPv(UNRECOVERED_JUMPTABLE);
  func_0x000107539d2c();
  pppppcVar21 = (code *****)apppcStack_ce0;
  ppppcVar11 = apppcStack_ce0;
  UNRECOVERED_JUMPTABLE = ppppppcVar10;
  pppppcVar16 = pppppcVar15;
  func_0x000107539cb8();
  uStack_b98 = extraout_x8_07;
  func_0x000107539dc0(apppppcStack_bf0,UNRECOVERED_JUMPTABLE + 1);
  func_0x000107539fbc();
  ppppppcVar7 = apppppcStack_bf0;
  func_0x0001072f5f6c();
  if ((bStack_ba0 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x00010753a004();
    func_0x000107539df8();
    if (ppppppcVar7 == (code ******)0x0) {
      pppppcVar16 = pppppcVar17 + 8;
      FUN_107538f54(apppppcStack_bf0,0,pppppcVar16);
      UNRECOVERED_JUMPTABLE = apppppcStack_bf0;
      func_0x0001075393b8(ppppppcVar8);
      ppppppcVar7 = (code ******)apppppcStack_bf0[0];
      apppppcStack_bf0[0] = (code *****)0x0;
      if (ppppppcVar7 != (code ******)0x0) {
        func_0x000107539cec();
      }
    }
    else {
      func_0x000107539fec();
      iVar6 = (int)ppppppcVar7;
      func_0x000107539d34();
      if (iVar6 == 0) {
        func_0x000107539ff8();
        func_0x000107539d34();
        if (iVar6 == 0) {
          func_0x000107539f44();
          func_0x000107539e10(apppcStack_ce0);
          UNRECOVERED_JUMPTABLE = apppppcStack_bf0;
          func_0x000107539cdc();
        }
        else {
          func_0x000107539f44();
          func_0x000107539cf8(apppcStack_c90);
          UNRECOVERED_JUMPTABLE = apppppcStack_bf0;
          pppppcVar21 = (code *****)apppcStack_c90;
          func_0x000107539cdc();
          ppppcVar11 = apppcStack_c90;
        }
      }
      else {
        func_0x000107539f44();
        func_0x000107539cf8(apppcStack_c40);
        UNRECOVERED_JUMPTABLE = apppppcStack_bf0;
        pppppcVar21 = (code *****)apppcStack_c40;
        func_0x000107539cdc();
        ppppcVar11 = apppcStack_c40;
      }
      func_0x000107539398(ppppcVar11);
      ppppppcVar7 = apppppcStack_bf0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppcVar7);
      pppppcVar16 = pppppcVar21;
    }
  }
  func_0x000107539ecc();
  func_0x000107539ca4(uStack_b98);
  if ((bool)uVar4) {
    return ppppppcVar7;
  }
  ___stack_chk_fail();
  func_0x000107539dec();
  func_0x000107539398();
  ppppppcVar7 = apppppcStack_bf0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppcVar7);
  func_0x000107539ecc();
  func_0x000107539d2c();
  func_0x000107539f04();
  func_0x000107539cb8();
  uStack_d38 = extraout_x8_08;
  appppcStack_d80[0] = (code ****)0x0;
  func_0x000107539df8((*UNRECOVERED_JUMPTABLE)[4]);
  pppppcVar21 = appppcStack_d80;
  FUN_107539a30(pppppcVar21,ppppppcVar7);
  pppppcVar20 = (code *****)0x1;
  do {
    func_0x00010753a004();
    func_0x000107539df8();
    uVar4 = pppppcVar20 == pppppcVar21;
    if (pppppcVar21 <= pppppcVar20) {
      pppppcVar14 = appppcStack_d80;
      func_0x00010753937c(ppppppcVar8);
      break;
    }
    (*(code *)(*ppppppcVar10)[5])(apppcStack_d90,UNRECOVERED_JUMPTABLE + 1,pppppcVar20);
    pppppcVar14 = (code *****)apppcStack_d90;
    pppppcVar16 = pppppcVar17;
    FUN_107537eec(apppcStack_da8,pppppcVar14,pppppcVar17,pppppcVar15);
    func_0x0001072f5f6c(apppcStack_d90);
    bVar2 = bStack_d98;
    if ((bStack_d98 & 1) == 0) {
      *(undefined1 *)ppppppcVar8 = 0;
      *(undefined1 *)(ppppppcVar8 + 9) = 0;
    }
    else {
      pppppcVar14 = (code *****)apppcStack_da8;
      func_0x0001072c995c(appppcStack_d80);
    }
    pppppcVar21 = (code *****)apppcStack_da8;
    func_0x0001072c95d0();
    pppppcVar20 = (code *****)((long)pppppcVar20 + 1);
  } while ((bVar2 & 1) != 0);
  ppppppcVar7 = (code ******)appppcStack_d80;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_d38);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    ppppppcVar7 = (code ******)appppcStack_d80;
    func_0x0001072c9c34();
    func_0x000107539d2c();
    pppppcVar21 = (code *****)*pppppcVar14;
    ppppppcVar7[1] = (code *****)pppppcVar14[1];
    *ppppppcVar7 = pppppcVar21;
    *pppppcVar14 = (code ****)0x0;
    pppppcVar14[1] = (code ****)0x0;
    *(undefined1 *)(ppppppcVar7 + 2) = 1;
    func_0x000107284cf0(ppppppcVar7 + 3,pppppcVar16);
    return ppppppcVar7;
  }
  return ppppppcVar7;
}



/* Entry: 10753846c; end: 107538637;  */

code ******
FUN_10753846c(undefined8 param_1,code ******param_2,code *****param_3,code *****param_4,
             code ******param_5)

{
  bool bVar1;
  byte bVar2;
  code ***pppcVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  int iVar5;
  code ******ppppppcVar6;
  code ******ppppppcVar7;
  code ******ppppppcVar8;
  code ****ppppcVar9;
  undefined1 *puVar10;
  code ******ppppppcVar11;
  undefined1 uVar12;
  code ******UNRECOVERED_JUMPTABLE;
  code *****pppppcVar13;
  code *****pppppcVar14;
  code *****pppppcVar15;
  code *****pppppcVar16;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined1 *unaff_x19;
  code ******unaff_x22;
  code *****pppppcVar17;
  code ******ppppppcVar18;
  code *****pppppcVar19;
  code *****pppppcVar20;
  code ***apppcStack_b18 [2];
  byte bStack_b08;
  code ***apppcStack_b00 [2];
  code ****appppcStack_af0 [9];
  undefined8 uStack_aa8;
  code ***apppcStack_a50 [10];
  code ***apppcStack_a00 [10];
  code ***apppcStack_9b0 [10];
  code *****apppppcStack_960 [10];
  byte bStack_910;
  undefined8 uStack_908;
  code ****ppppcStack_8a8;
  undefined1 uStack_8a0;
  undefined4 uStack_840;
  undefined8 uStack_838;
  code *****pppppcStack_830;
  code ****ppppcStack_828;
  code ***pppcStack_820;
  code ****ppppcStack_818;
  code ****ppppcStack_810;
  code *****pppppcStack_808;
  undefined8 *****pppppuStack_800;
  code *pcStack_7f8;
  code ***pppcStack_7e8;
  code ***apppcStack_7e0 [3];
  undefined1 auStack_7c8 [24];
  undefined1 auStack_7b0 [56];
  code ***apppcStack_778 [10];
  code ****appppcStack_728 [7];
  byte bStack_6f0;
  code ***pppcStack_6e8;
  undefined1 auStack_6e0 [104];
  undefined8 uStack_678;
  code *****pppppcStack_670;
  code ****ppppcStack_668;
  code *****pppppcStack_660;
  code ****ppppcStack_658;
  code ****ppppcStack_650;
  code *****pppppcStack_648;
  undefined1 *****pppppuStack_640;
  code *pcStack_638;
  code ***apppcStack_610 [10];
  code ***apppcStack_5c0 [10];
  code ***apppcStack_570 [10];
  code ****ppppcStack_520;
  undefined1 auStack_518 [16];
  long lStack_508;
  undefined1 auStack_500 [48];
  byte bStack_4d0;
  code ****appppcStack_4c8 [8];
  undefined8 uStack_488;
  code *****pppppcStack_480;
  code *****pppppcStack_478;
  code ****ppppcStack_470;
  code ****ppppcStack_468;
  code *****pppppcStack_460;
  code *****pppppcStack_458;
  undefined1 ****ppppuStack_450;
  code *pcStack_448;
  code ****ppppcStack_440;
  undefined8 uStack_438;
  byte bStack_430;
  code ****appppcStack_428 [3];
  code ****ppppcStack_410;
  undefined8 uStack_408;
  char cStack_400;
  code ****appppcStack_3f8 [11];
  undefined1 auStack_3a0 [16];
  code ****appppcStack_390 [9];
  undefined8 uStack_348;
  undefined1 ***pppuStack_300;
  code *pcStack_2f8;
  undefined1 uStack_2e1;
  code ***apppcStack_2e0 [10];
  code ***pppcStack_290;
  code ***pppcStack_288;
  code ****appppcStack_280 [9];
  undefined8 uStack_238;
  code *****pppppcStack_230;
  code *****pppppcStack_228;
  code *****pppppcStack_220;
  code *****pppppcStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  code ****appppcStack_1f8 [3];
  code ****ppppcStack_1e0;
  code ****ppppcStack_1d8;
  byte bStack_1d0;
  undefined1 auStack_1c0 [8];
  undefined4 uStack_1b8;
  code ****appppcStack_1b0 [12];
  code ****appppcStack_150 [9];
  undefined8 uStack_108;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code ****ppppcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  char cStack_40;
  undefined8 uStack_38;
  
  UNRECOVERED_JUMPTABLE = param_2;
  func_0x000107539cb8();
  ppppppcVar7 = UNRECOVERED_JUMPTABLE + 1;
  ppppppcVar6 = ppppppcVar7;
  uStack_38 = extraout_x8;
  (*(code *)(*UNRECOVERED_JUMPTABLE)[2])();
  if ((int)ppppppcVar6 == 0) {
    ppppppcVar6 = ppppppcVar7;
    (*(code *)(*param_2)[3])();
    if ((int)ppppppcVar6 == 0) {
      UNRECOVERED_JUMPTABLE = (code ******)(*param_2)[0xe];
      func_0x000107539ca4(uStack_38);
      if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107538594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE)(ppppppcVar7);
        return ppppppcVar7;
      }
      goto LAB_1075385f8;
    }
    ppppcStack_a8 = (code ****)0x0;
    uStack_a0 = 0;
    uStack_98 = 0;
    ppppppcVar6 = ppppppcVar7;
    (*(code *)(*param_2)[4])(ppppppcVar7);
    func_0x0001072ac134(&ppppcStack_a8,ppppppcVar6);
    unaff_x22 = (code ******)0x0;
    while( true ) {
      ppppppcVar6 = ppppppcVar7;
      (*(code *)(*param_2)[4])();
      in_ZR = unaff_x22 == ppppppcVar6;
      if (ppppppcVar6 <= unaff_x22) break;
      (*(code *)(*param_2)[5])(auStack_90,ppppppcVar7,unaff_x22);
      FUN_10753846c(auStack_80,auStack_90);
      func_0x0001072f5f6c(auStack_90);
      if (cStack_40 == '\x01') {
        func_0x0001072d7f34(&ppppcStack_a8,auStack_80);
      }
      else {
        func_0x000107539bd0(&ppppcStack_a8,auStack_90);
      }
      func_0x000107267ed0(auStack_80);
      unaff_x22 = (code ******)((long)unaff_x22 + 1);
    }
    FUN_107327958(&uStack_c0,&ppppcStack_a8);
    auStack_80[0] = 0;
    uStack_70 = uStack_b8;
    uStack_78 = uStack_c0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    UNRECOVERED_JUMPTABLE = (code ******)auStack_80;
    func_0x00010729d394();
    func_0x000104c3323c(auStack_80);
    func_0x000104c33108(&uStack_c0);
    ppppppcVar6 = (code ******)&ppppcStack_a8;
    func_0x000107269124();
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[0x40] = 0;
  }
  func_0x000107539ca4(uStack_38);
  if ((bool)in_ZR) {
    return ppppppcVar6;
  }
LAB_1075385f8:
  uVar4 = 0;
  ___stack_chk_fail();
  ppppppcVar11 = (code ******)&ppppcStack_a8;
  func_0x000107269124();
  func_0x000107539d2c();
  pcStack_c8 = FUN_107538638;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000107539cb8();
  uStack_108 = extraout_x8_00;
  if (((ulong)param_3[9] & 1) == 0) {
    func_0x000107539e54();
  }
  else {
    ppppppcVar8 = param_5;
    func_0x000107539f04();
    func_0x000107539ea0();
    UNRECOVERED_JUMPTABLE = unaff_x22;
    func_0x000100152bb8();
    ppppppcVar11 = param_2;
    if ((int)UNRECOVERED_JUMPTABLE == 0) {
      func_0x000107539fd4();
      UNRECOVERED_JUMPTABLE = unaff_x22;
      func_0x000100152bb8();
      if ((int)UNRECOVERED_JUMPTABLE == 0) {
        uStack_1b8 = 2;
        func_0x0001072f6b34(appppcStack_1b0,auStack_1c0,1);
        func_0x0001072c9884(auStack_1c0);
        func_0x0001072c9bc0(appppcStack_150,param_2);
        UNRECOVERED_JUMPTABLE = (code ******)appppcStack_150;
        param_3 = appppcStack_1b0;
        func_0x00010772cc04(&ppppcStack_1e0,unaff_x22);
        func_0x0001072c9c34(appppcStack_150);
        if ((bStack_1d0 & 1) == 0) {
          func_0x000107771558(appppcStack_1f8,appppcStack_1b0);
          UNRECOVERED_JUMPTABLE = (code ******)appppcStack_1f8;
          func_0x000100066230(ppppppcVar7);
          func_0x000107539f74();
          func_0x000107539e54();
          param_5 = ppppppcVar8;
        }
        else {
          ppppppcVar6[1] = (code *****)ppppcStack_1d8;
          *ppppppcVar6 = (code *****)ppppcStack_1e0;
          ppppcStack_1e0 = (code ****)0x0;
          ppppcStack_1d8 = (code ****)0x0;
          *(undefined1 *)(ppppppcVar6 + 2) = 1;
          param_5 = ppppppcVar8;
        }
        func_0x000107539f58();
        ppppppcVar11 = (code ******)appppcStack_1b0;
        func_0x0001072ca718();
      }
      else {
        FUN_107539768(appppcStack_1b0);
        func_0x000107539ed4();
        FUN_107539a08();
        UNRECOVERED_JUMPTABLE = param_5;
        param_5 = ppppppcVar8;
      }
    }
    else {
      FUN_1075394a0(appppcStack_1b0);
      func_0x000107539ed4();
      FUN_107539740();
      UNRECOVERED_JUMPTABLE = param_5;
      param_5 = ppppppcVar8;
    }
  }
  func_0x000107539ca4(uStack_108);
  if ((bool)uVar4) {
    return ppppppcVar11;
  }
  ___stack_chk_fail();
  func_0x000107539f58();
  ppppppcVar6 = (code ******)appppcStack_1b0;
  func_0x0001072ca718();
  func_0x000107539d2c();
  pcStack_208 = FUN_1075387c0;
  ppppppcVar8 = ppppppcVar6;
  pppppcStack_230 = (code *****)unaff_x22;
  pppppcStack_228 = (code *****)param_2;
  pppppcStack_220 = (code *****)ppppppcVar7;
  pppppcStack_218 = (code *****)ppppppcVar11;
  ppuStack_210 = &puStack_d0;
  func_0x000107539ccc();
  uStack_238 = extraout_x8_01;
  if (((ulong)param_3[2] & 1) == 0) {
    *(undefined1 *)ppppppcVar6 = 0;
    *(undefined1 *)(ppppppcVar6 + 2) = 0;
  }
  else {
    pppcStack_288 = (code ***)param_3[1];
    pppcStack_290 = (code ***)*param_3;
    *param_3 = (code ****)0x0;
    param_3[1] = (code ****)0x0;
    func_0x0001072bed5c(appppcStack_280,&pppcStack_290,1,&uStack_2e1);
    func_0x0001072c9b9c(&pppcStack_290);
    func_0x00010753937c(apppcStack_2e0,appppcStack_280);
    param_3 = (code *****)apppcStack_2e0;
    FUN_107538638(ppppppcVar6);
    func_0x000107539398(apppcStack_2e0);
    ppppppcVar8 = (code ******)appppcStack_280;
    func_0x0001072c9c34();
  }
  func_0x000107539ca4(uStack_238);
  if ((bool)uVar4) {
    return ppppppcVar8;
  }
  ___stack_chk_fail();
  func_0x000107539398(apppcStack_2e0);
  func_0x0001072c9c34(appppcStack_280);
  func_0x000107539d2c();
  pcStack_2f8 = FUN_1075388a8;
  ppppppcVar7 = UNRECOVERED_JUMPTABLE;
  pppppcVar20 = param_3;
  pppppcVar15 = param_4;
  ppppppcVar11 = param_5;
  pppuStack_300 = &ppuStack_210;
  func_0x000107539cb8();
  uStack_348 = extraout_x8_02;
  appppcStack_390[0] = (code ****)0x0;
  ppppppcVar18 = ppppppcVar7 + 1;
  ppppppcVar6 = ppppppcVar18;
  (*(code *)(*ppppppcVar7)[4])(ppppppcVar18);
  FUN_107539a30(appppcStack_390,ppppppcVar6);
  do {
    ppppppcVar6 = ppppppcVar18;
    (*(code *)(*UNRECOVERED_JUMPTABLE)[4])();
    uVar4 = param_5 == ppppppcVar6;
    if (ppppppcVar6 <= param_5) {
      ppppppcVar6 = (code ******)appppcStack_390;
      func_0x00010753937c(ppppppcVar8);
      break;
    }
    (*(code *)(*UNRECOVERED_JUMPTABLE)[5])(auStack_3a0,ppppppcVar18,param_5);
    func_0x0001072c95f0(appppcStack_3f8,1);
    ppppppcVar6 = (code ******)appppcStack_3f8;
    pppppcVar20 = param_4;
    func_0x000107768e6c(&ppppcStack_410,auStack_3a0);
    uVar4 = cStack_400 == '\x01';
    bVar1 = !(bool)uVar4;
    if (bVar1) {
      func_0x000107771558(appppcStack_428,appppcStack_3f8);
      ppppppcVar6 = (code ******)appppcStack_428;
      func_0x000100066230(param_3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appppcStack_428);
      ppppcStack_440 = (code ****)((ulong)ppppcStack_440 & 0xffffffffffffff00);
    }
    else {
      uStack_438 = uStack_408;
      ppppcStack_440 = ppppcStack_410;
      ppppcStack_410 = (code ****)0x0;
      uStack_408 = 0;
    }
    bStack_430 = !bVar1;
    func_0x000107539eac();
    func_0x0001072ca718(appppcStack_3f8);
    func_0x0001072f5f6c(auStack_3a0);
    bVar2 = bStack_430;
    if ((bStack_430 & 1) == 0) {
      *(undefined1 *)ppppppcVar8 = 0;
      *(undefined1 *)(ppppppcVar8 + 9) = 0;
    }
    else {
      ppppppcVar6 = (code ******)&ppppcStack_440;
      func_0x0001072c995c(appppcStack_390);
    }
    func_0x0001072c95d0(&ppppcStack_440);
    param_5 = (code ******)((long)param_5 + 1);
  } while ((bVar2 & 1) != 0);
  ppppppcVar7 = (code ******)appppcStack_390;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_348);
  if ((bool)uVar4) {
    return ppppppcVar7;
  }
  ___stack_chk_fail();
  func_0x0001072c9c34(appppcStack_390);
  func_0x000107539d2c();
  pcStack_448 = FUN_107538a70;
  ppppppcVar8 = ppppppcVar6;
  pppppcVar19 = pppppcVar20;
  pppppcVar13 = pppppcVar15;
  pppppcStack_480 = (code *****)ppppppcVar18;
  pppppcStack_478 = (code *****)UNRECOVERED_JUMPTABLE;
  ppppcStack_470 = (code ****)param_3;
  ppppcStack_468 = (code ****)param_4;
  pppppcStack_460 = (code *****)param_5;
  pppppcStack_458 = (code *****)ppppppcVar7;
  ppppuStack_450 = &pppuStack_300;
  func_0x000107539cb8();
  uVar4 = *(char *)(ppppppcVar11 + 7) == '\x01';
  uStack_488 = extraout_x8_03;
  if ((bool)uVar4) {
    func_0x000107263b58(appppcStack_4c8);
    ppppppcVar8 = ppppppcVar11;
  }
  else {
    func_0x000107539fac(&lStack_508,ppppppcVar6 + 1);
    (**(code **)(lStack_508 + 0x68))(appppcStack_4c8,auStack_500);
    func_0x0001072f5f6c(&lStack_508);
  }
  pppppcVar17 = &ppppcStack_520;
  func_0x000107539dc0(&ppppcStack_520,ppppppcVar6 + 1);
  (*(code *)ppppcStack_520[0xd])(&lStack_508,auStack_518);
  func_0x0001072f5f6c(&ppppcStack_520);
  if ((bStack_4d0 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x000107539fec();
    iVar5 = (int)&lStack_508;
    func_0x000107278484();
    if (iVar5 == 0) {
      func_0x000107539ff8();
      iVar5 = (int)&lStack_508;
      func_0x000107278484();
      if (iVar5 == 0) {
        func_0x000107539dac();
        func_0x000107539dc8(&UNK_10f4166dc);
        func_0x000107539e10(apppcStack_610);
        ppppppcVar8 = (code ******)&ppppcStack_520;
        pppppcVar19 = (code *****)apppcStack_610;
        func_0x000107539cdc();
        ppppcVar9 = apppcStack_610;
      }
      else {
        func_0x000107539dac();
        func_0x000107539dc8(&UNK_10f4166d1);
        func_0x000107539cf8(apppcStack_5c0);
        ppppppcVar8 = (code ******)&ppppcStack_520;
        pppppcVar19 = (code *****)apppcStack_5c0;
        func_0x000107539cdc();
        ppppcVar9 = apppcStack_5c0;
      }
    }
    else {
      func_0x000107539dac();
      func_0x000107539dc8(&UNK_10f4166c0);
      func_0x000107539cf8(apppcStack_570);
      ppppppcVar8 = (code ******)&ppppcStack_520;
      pppppcVar19 = (code *****)apppcStack_570;
      func_0x000107539cdc();
      ppppcVar9 = apppcStack_570;
    }
    func_0x000107539398(ppppcVar9);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppcStack_520);
    func_0x000107539f74();
  }
  func_0x00010724b3d8(&lStack_508);
  UNRECOVERED_JUMPTABLE = (code ******)appppcStack_4c8;
  func_0x00010724b3d8();
  func_0x000107539ca4(uStack_488);
  if ((bool)uVar4) {
    return UNRECOVERED_JUMPTABLE;
  }
  ___stack_chk_fail();
  func_0x000107539398(apppcStack_610);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppcStack_520);
  func_0x000107539f74();
  func_0x00010724b3d8(&lStack_508);
  func_0x00010724b3d8(appppcStack_4c8);
  func_0x000107539d2c();
  pcStack_638 = FUN_107538cc4;
  pppppcVar14 = pppppcVar19;
  pppppcVar16 = pppppcVar13;
  pppppcStack_670 = (code *****)ppppppcVar18;
  ppppcStack_668 = (code ****)pppppcVar17;
  pppppcStack_660 = (code *****)ppppppcVar6;
  ppppcStack_658 = (code ****)pppppcVar15;
  ppppcStack_650 = (code ****)pppppcVar20;
  pppppcStack_648 = (code *****)UNRECOVERED_JUMPTABLE;
  pppppuStack_640 = &ppppuStack_450;
  func_0x000107539cb8();
  ppppcVar9 = &pppcStack_6e8;
  uStack_678 = extraout_x8_04;
  func_0x000107539dc0(&pppcStack_6e8,ppppppcVar8 + 1);
  (*(code *)pppcStack_6e8[0xd])(appppcStack_728,auStack_6e0);
  func_0x0001072f5f6c(&pppcStack_6e8);
  if ((bStack_6f0 & 1) == 0) {
    uVar12 = 0x99;
    func_0x000107539f6c();
    func_0x000107539e54();
  }
  else {
    func_0x000107539fec();
    iVar5 = (int)appppcStack_728;
    func_0x000107278484();
    if (iVar5 == 0) {
      func_0x000107539ff8();
      iVar5 = (int)appppcStack_728;
      func_0x000107278484();
      if (iVar5 == 0) {
        func_0x00010002b838(auStack_7c8,&UNK_10f4166f2);
        func_0x000104c2fe00(auStack_7b0,appppcStack_728);
        ppppcVar9 = (code ****)0xb8;
        __Znwm();
        pppppcVar17 = (code *****)&pppcStack_6e8;
        func_0x000107277488(&pppcStack_6e8,auStack_7b0);
        FUN_107539ae8(ppppcVar9,&pppcStack_6e8,pppppcVar13);
        pppcStack_7e8 = (code ***)ppppcVar9;
        func_0x000107539efc();
        func_0x0001075393b8(apppcStack_7e0,&pppcStack_7e8);
        uVar12 = SUB81(auStack_7c8,0);
        pppppcVar14 = (code *****)apppcStack_7e0;
        func_0x000107539d94();
        FUN_1075387c0();
        func_0x0001072c95d0(apppcStack_7e0);
        pppcVar3 = pppcStack_7e8;
        pppcStack_7e8 = (code ***)0x0;
        if ((code ****)pppcVar3 != (code ****)0x0) {
          func_0x000107539cec();
        }
        func_0x000104c2f714(auStack_7b0);
        puVar10 = auStack_7c8;
      }
      else {
        func_0x00010002b838(auStack_7b0,&UNK_10f4166e4);
        pppcStack_6e8 = (code ***)0x0;
        func_0x00010753937c(apppcStack_778,&pppcStack_6e8);
        uVar12 = SUB81(auStack_7b0,0);
        pppppcVar14 = (code *****)apppcStack_778;
        func_0x000107539d94();
        FUN_107538638();
        func_0x000107539eb4();
        func_0x0001072c9c34(&pppcStack_6e8);
        puVar10 = auStack_7b0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10);
    }
    else {
      pppppcVar14 = pppppcVar13;
      FUN_107538f54(&pppcStack_6e8,1);
      uVar12 = SUB81(&pppcStack_6e8,0);
      func_0x0001075393b8(UNRECOVERED_JUMPTABLE);
      pppcVar3 = pppcStack_6e8;
      pppcStack_6e8 = (code ***)0x0;
      if ((code ****)pppcVar3 != (code ****)0x0) {
        func_0x000107539cec();
      }
    }
  }
  ppppppcVar6 = (code ******)appppcStack_728;
  func_0x00010724b3d8();
  func_0x000107539ca4(uStack_678);
  if ((bool)uVar4) {
    return ppppppcVar6;
  }
  ___stack_chk_fail();
  func_0x0001072c95d0(apppcStack_7e0);
  pppcVar3 = pppcStack_7e8;
  pppcStack_7e8 = (code ***)0x0;
  if (pppcVar3 != (code ***)0x0) {
    func_0x000107539cec();
  }
  func_0x000104c2f714(auStack_7b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_7c8);
  func_0x00010724b3d8(appppcStack_728);
  func_0x000107539d2c();
  pcStack_7f8 = FUN_107538f54;
  pppppcStack_830 = (code *****)ppppppcVar18;
  ppppcStack_828 = (code ****)pppppcVar17;
  pppcStack_820 = (code ***)ppppcVar9;
  ppppcStack_818 = (code ****)pppppcVar19;
  ppppcStack_810 = (code ****)pppppcVar13;
  pppppcStack_808 = (code *****)ppppppcVar6;
  pppppuStack_800 = &pppppuStack_640;
  func_0x000107539cb8();
  ppppppcVar11 = (code ******)0xb8;
  uStack_838 = extraout_x8_05;
  __Znwm();
  uStack_840 = 1;
  UNRECOVERED_JUMPTABLE = (code ******)&ppppcStack_8a8;
  ppppppcVar7 = ppppppcVar11;
  uStack_8a0 = uVar12;
  FUN_107539ae8();
  *ppppppcVar6 = (code *****)ppppppcVar11;
  func_0x000107539efc();
  func_0x000107539ca4(uStack_838);
  if ((bool)uVar4) {
    return ppppppcVar7;
  }
  ___stack_chk_fail();
  func_0x000107539efc();
  __ZdlPv(ppppppcVar11);
  func_0x000107539d2c();
  pppppcVar20 = (code *****)apppcStack_a50;
  ppppcVar9 = apppcStack_a50;
  ppppppcVar11 = UNRECOVERED_JUMPTABLE;
  pppppcVar15 = pppppcVar14;
  func_0x000107539cb8();
  uStack_908 = extraout_x8_06;
  func_0x000107539dc0(apppppcStack_960,ppppppcVar11 + 1);
  func_0x000107539fbc();
  ppppppcVar6 = apppppcStack_960;
  func_0x0001072f5f6c();
  if ((bStack_910 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x00010753a004();
    func_0x000107539df8();
    if (ppppppcVar6 == (code ******)0x0) {
      pppppcVar15 = pppppcVar16 + 8;
      FUN_107538f54(apppppcStack_960,0,pppppcVar15);
      ppppppcVar11 = apppppcStack_960;
      func_0x0001075393b8(ppppppcVar7);
      ppppppcVar6 = (code ******)apppppcStack_960[0];
      apppppcStack_960[0] = (code *****)0x0;
      if (ppppppcVar6 != (code ******)0x0) {
        func_0x000107539cec();
      }
    }
    else {
      func_0x000107539fec();
      iVar5 = (int)ppppppcVar6;
      func_0x000107539d34();
      if (iVar5 == 0) {
        func_0x000107539ff8();
        func_0x000107539d34();
        if (iVar5 == 0) {
          func_0x000107539f44();
          func_0x000107539e10(apppcStack_a50);
          ppppppcVar11 = apppppcStack_960;
          func_0x000107539cdc();
        }
        else {
          func_0x000107539f44();
          func_0x000107539cf8(apppcStack_a00);
          ppppppcVar11 = apppppcStack_960;
          pppppcVar20 = (code *****)apppcStack_a00;
          func_0x000107539cdc();
          ppppcVar9 = apppcStack_a00;
        }
      }
      else {
        func_0x000107539f44();
        func_0x000107539cf8(apppcStack_9b0);
        ppppppcVar11 = apppppcStack_960;
        pppppcVar20 = (code *****)apppcStack_9b0;
        func_0x000107539cdc();
        ppppcVar9 = apppcStack_9b0;
      }
      func_0x000107539398(ppppcVar9);
      ppppppcVar6 = apppppcStack_960;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppcVar6);
      pppppcVar15 = pppppcVar20;
    }
  }
  func_0x000107539ecc();
  func_0x000107539ca4(uStack_908);
  if ((bool)uVar4) {
    return ppppppcVar6;
  }
  ___stack_chk_fail();
  func_0x000107539dec();
  func_0x000107539398();
  ppppppcVar6 = apppppcStack_960;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppcVar6);
  func_0x000107539ecc();
  func_0x000107539d2c();
  func_0x000107539f04();
  func_0x000107539cb8();
  uStack_aa8 = extraout_x8_07;
  appppcStack_af0[0] = (code ****)0x0;
  func_0x000107539df8((*ppppppcVar11)[4]);
  pppppcVar20 = appppcStack_af0;
  FUN_107539a30(pppppcVar20,ppppppcVar6);
  pppppcVar19 = (code *****)0x1;
  do {
    func_0x00010753a004();
    func_0x000107539df8();
    uVar4 = pppppcVar19 == pppppcVar20;
    if (pppppcVar20 <= pppppcVar19) {
      pppppcVar13 = appppcStack_af0;
      func_0x00010753937c(ppppppcVar7);
      break;
    }
    (*(code *)(*UNRECOVERED_JUMPTABLE)[5])(apppcStack_b00,ppppppcVar11 + 1,pppppcVar19);
    pppppcVar13 = (code *****)apppcStack_b00;
    pppppcVar15 = pppppcVar16;
    FUN_107537eec(apppcStack_b18,pppppcVar13,pppppcVar16,pppppcVar14);
    func_0x0001072f5f6c(apppcStack_b00);
    bVar2 = bStack_b08;
    if ((bStack_b08 & 1) == 0) {
      *(undefined1 *)ppppppcVar7 = 0;
      *(undefined1 *)(ppppppcVar7 + 9) = 0;
    }
    else {
      pppppcVar13 = (code *****)apppcStack_b18;
      func_0x0001072c995c(appppcStack_af0);
    }
    pppppcVar20 = (code *****)apppcStack_b18;
    func_0x0001072c95d0();
    pppppcVar19 = (code *****)((long)pppppcVar19 + 1);
  } while ((bVar2 & 1) != 0);
  ppppppcVar6 = (code ******)appppcStack_af0;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_aa8);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    ppppppcVar6 = (code ******)appppcStack_af0;
    func_0x0001072c9c34();
    func_0x000107539d2c();
    pppppcVar20 = (code *****)*pppppcVar13;
    ppppppcVar6[1] = (code *****)pppppcVar13[1];
    *ppppppcVar6 = pppppcVar20;
    *pppppcVar13 = (code ****)0x0;
    pppppcVar13[1] = (code ****)0x0;
    *(undefined1 *)(ppppppcVar6 + 2) = 1;
    func_0x000107284cf0(ppppppcVar6 + 3,pppppcVar15);
    return ppppppcVar6;
  }
  return ppppppcVar6;
}



/* Entry: 107538638; end: 1075387bf;  */

undefined8 ******
FUN_107538638(undefined8 ******param_1,undefined8 *****param_2,undefined8 *****param_3,
             undefined8 *****param_4,undefined8 *****param_5)

{
  bool bVar1;
  byte bVar2;
  undefined8 **ppuVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  int iVar5;
  undefined8 ******ppppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ***pppuVar9;
  undefined1 *puVar10;
  undefined8 ******ppppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ****ppppuVar13;
  undefined1 uVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****pppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 *****pppppuVar19;
  undefined8 *****pppppuVar20;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 *unaff_x19;
  undefined8 ******unaff_x21;
  int unaff_w22;
  undefined8 *****pppppuVar21;
  undefined8 *****pppppuVar22;
  undefined8 *****pppppuVar23;
  undefined8 ***apppuStack_a58 [2];
  byte bStack_a48;
  undefined8 ***apppuStack_a40 [2];
  undefined8 ****appppuStack_a30 [9];
  undefined8 uStack_9e8;
  undefined8 ***apppuStack_990 [10];
  undefined8 ***apppuStack_940 [10];
  undefined8 ***apppuStack_8f0 [10];
  undefined8 *****apppppuStack_8a0 [10];
  byte bStack_850;
  undefined8 uStack_848;
  undefined8 ****ppppuStack_7e8;
  undefined1 uStack_7e0;
  undefined4 uStack_780;
  undefined8 uStack_778;
  undefined8 ****ppppuStack_770;
  undefined8 ***pppuStack_768;
  undefined8 **ppuStack_760;
  undefined8 ****ppppuStack_758;
  undefined8 ****ppppuStack_750;
  undefined8 *****pppppuStack_748;
  undefined1 *****pppppuStack_740;
  code *pcStack_738;
  undefined8 **ppuStack_728;
  undefined8 ***apppuStack_720 [3];
  undefined1 auStack_708 [24];
  undefined1 auStack_6f0 [56];
  undefined8 ***apppuStack_6b8 [10];
  undefined8 ****appppuStack_668 [7];
  byte bStack_630;
  undefined8 **ppuStack_628;
  undefined1 auStack_620 [104];
  undefined8 uStack_5b8;
  undefined8 ****ppppuStack_5b0;
  undefined8 ***pppuStack_5a8;
  undefined8 ****ppppuStack_5a0;
  undefined8 ****ppppuStack_598;
  undefined8 ****ppppuStack_590;
  undefined8 *****pppppuStack_588;
  undefined1 ****ppppuStack_580;
  code *pcStack_578;
  undefined8 ***apppuStack_550 [10];
  undefined8 ***apppuStack_500 [10];
  undefined8 ***apppuStack_4b0 [10];
  undefined8 ***pppuStack_460;
  undefined1 auStack_458 [16];
  long lStack_448;
  undefined1 auStack_440 [48];
  byte bStack_410;
  undefined8 ****appppuStack_408 [8];
  undefined8 uStack_3c8;
  undefined8 ****ppppuStack_3c0;
  undefined8 ****ppppuStack_3b8;
  undefined8 ****ppppuStack_3b0;
  undefined8 ****ppppuStack_3a8;
  undefined8 ****ppppuStack_3a0;
  undefined8 *****pppppuStack_398;
  undefined1 ***pppuStack_390;
  code *pcStack_388;
  undefined8 ***pppuStack_380;
  undefined8 uStack_378;
  byte bStack_370;
  undefined8 ***apppuStack_368 [3];
  undefined8 ***pppuStack_350;
  undefined8 uStack_348;
  char cStack_340;
  undefined8 ***apppuStack_338 [11];
  undefined1 auStack_2e0 [16];
  undefined8 ****appppuStack_2d0 [9];
  undefined8 uStack_288;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined1 uStack_221;
  undefined8 ***apppuStack_220 [10];
  undefined8 ***pppuStack_1d0;
  undefined8 ***pppuStack_1c8;
  undefined8 ****appppuStack_1c0 [9];
  undefined8 uStack_178;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 ***apppuStack_138 [3];
  undefined8 uStack_120;
  undefined8 uStack_118;
  byte bStack_110;
  undefined1 auStack_100 [8];
  undefined4 uStack_f8;
  undefined8 ****appppuStack_f0 [12];
  undefined8 ***apppuStack_90 [9];
  undefined8 uStack_48;
  
  func_0x000107539cb8();
  uStack_48 = extraout_x8;
  if (((ulong)param_3[9] & 1) == 0) {
    func_0x000107539e54();
  }
  else {
    pppppuVar23 = param_5;
    func_0x000107539f04();
    func_0x000107539ea0();
    iVar5 = unaff_w22;
    func_0x000100152bb8();
    if (iVar5 == 0) {
      func_0x000107539fd4();
      func_0x000100152bb8();
      if (unaff_w22 == 0) {
        uStack_f8 = 2;
        func_0x0001072f6b34(appppuStack_f0,auStack_100,1);
        func_0x0001072c9884(auStack_100);
        func_0x0001072c9bc0(apppuStack_90);
        param_2 = (undefined8 *****)apppuStack_90;
        param_3 = appppuStack_f0;
        func_0x00010772cc04(&uStack_120);
        func_0x0001072c9c34(apppuStack_90);
        if ((bStack_110 & 1) == 0) {
          func_0x000107771558(apppuStack_138,appppuStack_f0);
          param_2 = (undefined8 *****)apppuStack_138;
          func_0x000100066230();
          func_0x000107539f74();
          func_0x000107539e54();
          param_5 = pppppuVar23;
        }
        else {
          unaff_x19[1] = uStack_118;
          *unaff_x19 = uStack_120;
          uStack_120 = 0;
          uStack_118 = 0;
          *(undefined1 *)(unaff_x19 + 2) = 1;
          param_5 = pppppuVar23;
        }
        func_0x000107539f58();
        param_1 = (undefined8 ******)appppuStack_f0;
        func_0x0001072ca718();
      }
      else {
        FUN_107539768(appppuStack_f0);
        func_0x000107539ed4();
        FUN_107539a08();
        param_1 = unaff_x21;
        param_2 = param_5;
        param_5 = pppppuVar23;
      }
    }
    else {
      FUN_1075394a0(appppuStack_f0);
      func_0x000107539ed4();
      FUN_107539740();
      param_1 = unaff_x21;
      param_2 = param_5;
      param_5 = pppppuVar23;
    }
  }
  func_0x000107539ca4(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107539f58();
  ppppppuVar6 = (undefined8 ******)appppuStack_f0;
  func_0x0001072ca718();
  func_0x000107539d2c();
  pcStack_148 = FUN_1075387c0;
  ppppppuVar7 = ppppppuVar6;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x000107539ccc();
  uStack_178 = extraout_x8_00;
  if (((ulong)param_3[2] & 1) == 0) {
    *(undefined1 *)ppppppuVar6 = 0;
    *(undefined1 *)(ppppppuVar6 + 2) = 0;
  }
  else {
    pppuStack_1c8 = param_3[1];
    pppuStack_1d0 = *param_3;
    *param_3 = (undefined8 ****)0x0;
    param_3[1] = (undefined8 ****)0x0;
    func_0x0001072bed5c(appppuStack_1c0,&pppuStack_1d0,1,&uStack_221);
    func_0x0001072c9b9c(&pppuStack_1d0);
    func_0x00010753937c(apppuStack_220,appppuStack_1c0);
    param_3 = (undefined8 *****)apppuStack_220;
    FUN_107538638(ppppppuVar6);
    func_0x000107539398(apppuStack_220);
    ppppppuVar7 = (undefined8 ******)appppuStack_1c0;
    func_0x0001072c9c34();
  }
  func_0x000107539ca4(uStack_178);
  if ((bool)in_ZR) {
    return ppppppuVar7;
  }
  ___stack_chk_fail();
  func_0x000107539398(apppuStack_220);
  func_0x0001072c9c34(appppuStack_1c0);
  func_0x000107539d2c();
  pcStack_238 = FUN_1075388a8;
  pppppuVar15 = param_2;
  pppppuVar22 = param_3;
  pppppuVar18 = param_4;
  pppppuVar17 = param_5;
  ppuStack_240 = &puStack_150;
  func_0x000107539cb8();
  uStack_288 = extraout_x8_01;
  appppuStack_2d0[0] = (undefined8 *****)0x0;
  pppppuVar21 = pppppuVar15 + 1;
  pppppuVar23 = pppppuVar21;
  (*(code *)(*pppppuVar15)[4])(pppppuVar21);
  FUN_107539a30(appppuStack_2d0,pppppuVar23);
  do {
    pppppuVar23 = pppppuVar21;
    (*(code *)(*param_2)[4])();
    uVar4 = param_5 == pppppuVar23;
    if (pppppuVar23 <= param_5) {
      pppppuVar23 = appppuStack_2d0;
      func_0x00010753937c(ppppppuVar7);
      break;
    }
    (*(code *)(*param_2)[5])(auStack_2e0,pppppuVar21,param_5);
    func_0x0001072c95f0(apppuStack_338,1);
    pppppuVar23 = (undefined8 *****)apppuStack_338;
    pppppuVar22 = param_4;
    func_0x000107768e6c(&pppuStack_350,auStack_2e0);
    uVar4 = cStack_340 == '\x01';
    bVar1 = !(bool)uVar4;
    if (bVar1) {
      func_0x000107771558(apppuStack_368,apppuStack_338);
      pppppuVar23 = (undefined8 *****)apppuStack_368;
      func_0x000100066230(param_3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_368);
      pppuStack_380 = (undefined8 ***)((ulong)pppuStack_380 & 0xffffffffffffff00);
    }
    else {
      uStack_378 = uStack_348;
      pppuStack_380 = pppuStack_350;
      pppuStack_350 = (undefined8 ****)0x0;
      uStack_348 = 0;
    }
    bStack_370 = !bVar1;
    func_0x000107539eac();
    func_0x0001072ca718(apppuStack_338);
    func_0x0001072f5f6c(auStack_2e0);
    bVar2 = bStack_370;
    if ((bStack_370 & 1) == 0) {
      *(undefined1 *)ppppppuVar7 = 0;
      *(undefined1 *)(ppppppuVar7 + 9) = 0;
    }
    else {
      pppppuVar23 = (undefined8 *****)&pppuStack_380;
      func_0x0001072c995c(appppuStack_2d0);
    }
    func_0x0001072c95d0(&pppuStack_380);
    param_5 = (undefined8 *****)((long)param_5 + 1);
  } while ((bVar2 & 1) != 0);
  ppppppuVar6 = (undefined8 ******)appppuStack_2d0;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_288);
  if ((bool)uVar4) {
    return ppppppuVar6;
  }
  ___stack_chk_fail();
  func_0x0001072c9c34(appppuStack_2d0);
  func_0x000107539d2c();
  pcStack_388 = FUN_107538a70;
  pppppuVar16 = pppppuVar23;
  pppppuVar15 = pppppuVar22;
  pppppuVar19 = pppppuVar18;
  ppppuStack_3c0 = pppppuVar21;
  ppppuStack_3b8 = param_2;
  ppppuStack_3b0 = param_3;
  ppppuStack_3a8 = param_4;
  ppppuStack_3a0 = param_5;
  pppppuStack_398 = ppppppuVar6;
  pppuStack_390 = &ppuStack_240;
  func_0x000107539cb8();
  uVar4 = *(char *)(pppppuVar17 + 7) == '\x01';
  uStack_3c8 = extraout_x8_02;
  if ((bool)uVar4) {
    func_0x000107263b58(appppuStack_408);
    pppppuVar16 = pppppuVar17;
  }
  else {
    func_0x000107539fac(&lStack_448,pppppuVar23 + 1);
    (**(code **)(lStack_448 + 0x68))(appppuStack_408,auStack_440);
    func_0x0001072f5f6c(&lStack_448);
  }
  ppppuVar13 = &pppuStack_460;
  func_0x000107539dc0(&pppuStack_460,pppppuVar23 + 1);
  (*(code *)pppuStack_460[0xd])(&lStack_448,auStack_458);
  func_0x0001072f5f6c(&pppuStack_460);
  if ((bStack_410 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x000107539fec();
    iVar5 = (int)&lStack_448;
    func_0x000107278484();
    if (iVar5 == 0) {
      func_0x000107539ff8();
      iVar5 = (int)&lStack_448;
      func_0x000107278484();
      if (iVar5 == 0) {
        func_0x000107539dac();
        func_0x000107539dc8(&UNK_10f4166dc);
        func_0x000107539e10(apppuStack_550);
        pppppuVar16 = (undefined8 *****)&pppuStack_460;
        pppppuVar15 = (undefined8 *****)apppuStack_550;
        func_0x000107539cdc();
        ppppuVar8 = apppuStack_550;
      }
      else {
        func_0x000107539dac();
        func_0x000107539dc8(&UNK_10f4166d1);
        func_0x000107539cf8(apppuStack_500);
        pppppuVar16 = (undefined8 *****)&pppuStack_460;
        pppppuVar15 = (undefined8 *****)apppuStack_500;
        func_0x000107539cdc();
        ppppuVar8 = apppuStack_500;
      }
    }
    else {
      func_0x000107539dac();
      func_0x000107539dc8(&UNK_10f4166c0);
      func_0x000107539cf8(apppuStack_4b0);
      pppppuVar16 = (undefined8 *****)&pppuStack_460;
      pppppuVar15 = (undefined8 *****)apppuStack_4b0;
      func_0x000107539cdc();
      ppppuVar8 = apppuStack_4b0;
    }
    func_0x000107539398(ppppuVar8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_460);
    func_0x000107539f74();
  }
  func_0x00010724b3d8(&lStack_448);
  ppppppuVar6 = (undefined8 ******)appppuStack_408;
  func_0x00010724b3d8();
  func_0x000107539ca4(uStack_3c8);
  if ((bool)uVar4) {
    return ppppppuVar6;
  }
  ___stack_chk_fail();
  func_0x000107539398(apppuStack_550);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_460);
  func_0x000107539f74();
  func_0x00010724b3d8(&lStack_448);
  func_0x00010724b3d8(appppuStack_408);
  func_0x000107539d2c();
  pcStack_578 = FUN_107538cc4;
  pppppuVar17 = pppppuVar15;
  pppppuVar20 = pppppuVar19;
  ppppuStack_5b0 = pppppuVar21;
  pppuStack_5a8 = ppppuVar13;
  ppppuStack_5a0 = pppppuVar23;
  ppppuStack_598 = pppppuVar18;
  ppppuStack_590 = pppppuVar22;
  pppppuStack_588 = ppppppuVar6;
  ppppuStack_580 = &pppuStack_390;
  func_0x000107539cb8();
  pppuVar9 = &ppuStack_628;
  uStack_5b8 = extraout_x8_03;
  func_0x000107539dc0(&ppuStack_628,pppppuVar16 + 1);
  (*(code *)ppuStack_628[0xd])(appppuStack_668,auStack_620);
  func_0x0001072f5f6c(&ppuStack_628);
  if ((bStack_630 & 1) == 0) {
    uVar14 = 0x99;
    func_0x000107539f6c();
    func_0x000107539e54();
  }
  else {
    func_0x000107539fec();
    iVar5 = (int)appppuStack_668;
    func_0x000107278484();
    if (iVar5 == 0) {
      func_0x000107539ff8();
      iVar5 = (int)appppuStack_668;
      func_0x000107278484();
      if (iVar5 == 0) {
        func_0x00010002b838(auStack_708,&UNK_10f4166f2);
        func_0x000104c2fe00(auStack_6f0,appppuStack_668);
        pppuVar9 = (undefined8 ***)0xb8;
        __Znwm();
        ppppuVar13 = (undefined8 ****)&ppuStack_628;
        func_0x000107277488(&ppuStack_628,auStack_6f0);
        FUN_107539ae8(pppuVar9,&ppuStack_628,pppppuVar19);
        ppuStack_728 = pppuVar9;
        func_0x000107539efc();
        func_0x0001075393b8(apppuStack_720,&ppuStack_728);
        uVar14 = SUB81(auStack_708,0);
        pppppuVar17 = (undefined8 *****)apppuStack_720;
        func_0x000107539d94();
        FUN_1075387c0();
        func_0x0001072c95d0(apppuStack_720);
        ppuVar3 = ppuStack_728;
        ppuStack_728 = (undefined8 **)0x0;
        if ((undefined8 ***)ppuVar3 != (undefined8 ***)0x0) {
          func_0x000107539cec();
        }
        func_0x000104c2f714(auStack_6f0);
        puVar10 = auStack_708;
      }
      else {
        func_0x00010002b838(auStack_6f0,&UNK_10f4166e4);
        ppuStack_628 = (undefined8 ***)0x0;
        func_0x00010753937c(apppuStack_6b8,&ppuStack_628);
        uVar14 = SUB81(auStack_6f0,0);
        pppppuVar17 = (undefined8 *****)apppuStack_6b8;
        func_0x000107539d94();
        FUN_107538638();
        func_0x000107539eb4();
        func_0x0001072c9c34(&ppuStack_628);
        puVar10 = auStack_6f0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10);
    }
    else {
      pppppuVar17 = pppppuVar19;
      FUN_107538f54(&ppuStack_628,1);
      uVar14 = SUB81(&ppuStack_628,0);
      func_0x0001075393b8(ppppppuVar6);
      ppuVar3 = ppuStack_628;
      ppuStack_628 = (undefined8 ***)0x0;
      if ((undefined8 ***)ppuVar3 != (undefined8 ***)0x0) {
        func_0x000107539cec();
      }
    }
  }
  ppppppuVar6 = (undefined8 ******)appppuStack_668;
  func_0x00010724b3d8();
  func_0x000107539ca4(uStack_5b8);
  if ((bool)uVar4) {
    return ppppppuVar6;
  }
  ___stack_chk_fail();
  func_0x0001072c95d0(apppuStack_720);
  ppuVar3 = ppuStack_728;
  ppuStack_728 = (undefined8 **)0x0;
  if (ppuVar3 != (undefined8 **)0x0) {
    func_0x000107539cec();
  }
  func_0x000104c2f714(auStack_6f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_708);
  func_0x00010724b3d8(appppuStack_668);
  func_0x000107539d2c();
  pcStack_738 = FUN_107538f54;
  ppppuStack_770 = pppppuVar21;
  pppuStack_768 = ppppuVar13;
  ppuStack_760 = pppuVar9;
  ppppuStack_758 = pppppuVar15;
  ppppuStack_750 = pppppuVar19;
  pppppuStack_748 = ppppppuVar6;
  pppppuStack_740 = &ppppuStack_580;
  func_0x000107539cb8();
  ppppppuVar11 = (undefined8 ******)0xb8;
  uStack_778 = extraout_x8_04;
  __Znwm();
  uStack_780 = 1;
  ppppppuVar7 = (undefined8 ******)&ppppuStack_7e8;
  ppppppuVar12 = ppppppuVar11;
  uStack_7e0 = uVar14;
  FUN_107539ae8();
  *ppppppuVar6 = ppppppuVar11;
  func_0x000107539efc();
  func_0x000107539ca4(uStack_778);
  if ((bool)uVar4) {
    return ppppppuVar12;
  }
  ___stack_chk_fail();
  func_0x000107539efc();
  __ZdlPv(ppppppuVar11);
  func_0x000107539d2c();
  pppppuVar23 = (undefined8 *****)apppuStack_990;
  ppppuVar13 = apppuStack_990;
  ppppppuVar11 = ppppppuVar7;
  pppppuVar15 = pppppuVar17;
  func_0x000107539cb8();
  uStack_848 = extraout_x8_05;
  func_0x000107539dc0(apppppuStack_8a0,ppppppuVar11 + 1);
  func_0x000107539fbc();
  ppppppuVar6 = apppppuStack_8a0;
  func_0x0001072f5f6c();
  if ((bStack_850 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x00010753a004();
    func_0x000107539df8();
    if (ppppppuVar6 == (undefined8 ******)0x0) {
      pppppuVar15 = pppppuVar20 + 8;
      FUN_107538f54(apppppuStack_8a0,0,pppppuVar15);
      ppppppuVar11 = apppppuStack_8a0;
      func_0x0001075393b8(ppppppuVar12);
      ppppppuVar6 = (undefined8 ******)apppppuStack_8a0[0];
      apppppuStack_8a0[0] = (undefined8 ******)0x0;
      if (ppppppuVar6 != (undefined8 ******)0x0) {
        func_0x000107539cec();
      }
    }
    else {
      func_0x000107539fec();
      iVar5 = (int)ppppppuVar6;
      func_0x000107539d34();
      if (iVar5 == 0) {
        func_0x000107539ff8();
        func_0x000107539d34();
        if (iVar5 == 0) {
          func_0x000107539f44();
          func_0x000107539e10(apppuStack_990);
          ppppppuVar11 = apppppuStack_8a0;
          func_0x000107539cdc();
        }
        else {
          func_0x000107539f44();
          func_0x000107539cf8(apppuStack_940);
          ppppppuVar11 = apppppuStack_8a0;
          pppppuVar23 = (undefined8 *****)apppuStack_940;
          func_0x000107539cdc();
          ppppuVar13 = apppuStack_940;
        }
      }
      else {
        func_0x000107539f44();
        func_0x000107539cf8(apppuStack_8f0);
        ppppppuVar11 = apppppuStack_8a0;
        pppppuVar23 = (undefined8 *****)apppuStack_8f0;
        func_0x000107539cdc();
        ppppuVar13 = apppuStack_8f0;
      }
      func_0x000107539398(ppppuVar13);
      ppppppuVar6 = apppppuStack_8a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar6);
      pppppuVar15 = pppppuVar23;
    }
  }
  func_0x000107539ecc();
  func_0x000107539ca4(uStack_848);
  if ((bool)uVar4) {
    return ppppppuVar6;
  }
  ___stack_chk_fail();
  func_0x000107539dec();
  func_0x000107539398();
  ppppppuVar6 = apppppuStack_8a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar6);
  func_0x000107539ecc();
  func_0x000107539d2c();
  func_0x000107539f04();
  func_0x000107539cb8();
  uStack_9e8 = extraout_x8_06;
  appppuStack_a30[0] = (undefined8 *****)0x0;
  func_0x000107539df8((*ppppppuVar11)[4]);
  pppppuVar23 = appppuStack_a30;
  FUN_107539a30(pppppuVar23,ppppppuVar6);
  pppppuVar22 = (undefined8 *****)0x1;
  do {
    func_0x00010753a004();
    func_0x000107539df8();
    uVar4 = pppppuVar22 == pppppuVar23;
    if (pppppuVar23 <= pppppuVar22) {
      pppppuVar18 = appppuStack_a30;
      func_0x00010753937c(ppppppuVar12);
      break;
    }
    (*(code *)(*ppppppuVar7)[5])(apppuStack_a40,ppppppuVar11 + 1,pppppuVar22);
    pppppuVar18 = (undefined8 *****)apppuStack_a40;
    pppppuVar15 = pppppuVar20;
    FUN_107537eec(apppuStack_a58,pppppuVar18,pppppuVar20,pppppuVar17);
    func_0x0001072f5f6c(apppuStack_a40);
    bVar2 = bStack_a48;
    if ((bStack_a48 & 1) == 0) {
      *(undefined1 *)ppppppuVar12 = 0;
      *(undefined1 *)(ppppppuVar12 + 9) = 0;
    }
    else {
      pppppuVar18 = (undefined8 *****)apppuStack_a58;
      func_0x0001072c995c(appppuStack_a30);
    }
    pppppuVar23 = (undefined8 *****)apppuStack_a58;
    func_0x0001072c95d0();
    pppppuVar22 = (undefined8 *****)((long)pppppuVar22 + 1);
  } while ((bVar2 & 1) != 0);
  ppppppuVar6 = (undefined8 ******)appppuStack_a30;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_9e8);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    ppppppuVar6 = (undefined8 ******)appppuStack_a30;
    func_0x0001072c9c34();
    func_0x000107539d2c();
    pppppuVar23 = (undefined8 *****)*pppppuVar18;
    ppppppuVar6[1] = (undefined8 *****)pppppuVar18[1];
    *ppppppuVar6 = pppppuVar23;
    *pppppuVar18 = (undefined8 ****)0x0;
    pppppuVar18[1] = (undefined8 ****)0x0;
    *(undefined1 *)(ppppppuVar6 + 2) = 1;
    func_0x000107284cf0(ppppppuVar6 + 3,pppppuVar15);
    return ppppppuVar6;
  }
  return ppppppuVar6;
}



/* Entry: 1075387c0; end: 1075388a7;  */

undefined8 ******
FUN_1075387c0(undefined8 ******param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *****param_5)

{
  bool bVar1;
  byte bVar2;
  undefined8 **ppuVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  int iVar5;
  undefined8 ******ppppppuVar6;
  undefined8 *puVar7;
  undefined8 ***pppuVar8;
  undefined1 *puVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ******ppppppuVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  long *plVar14;
  undefined8 *****pppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 ****ppppuVar22;
  undefined8 *****pppppuVar23;
  undefined8 *****pppppuVar24;
  undefined8 ***apppuStack_918 [2];
  byte bStack_908;
  undefined8 ***apppuStack_900 [2];
  undefined8 ****appppuStack_8f0 [9];
  undefined8 uStack_8a8;
  undefined8 auStack_850 [10];
  undefined8 auStack_800 [10];
  undefined8 auStack_7b0 [10];
  undefined8 *****apppppuStack_760 [10];
  byte bStack_710;
  undefined8 uStack_708;
  undefined8 ****ppppuStack_6a8;
  undefined1 uStack_6a0;
  undefined4 uStack_640;
  undefined8 uStack_638;
  undefined8 ****ppppuStack_630;
  undefined8 ***pppuStack_628;
  undefined8 **ppuStack_620;
  undefined8 *puStack_618;
  undefined8 *puStack_610;
  undefined8 *****pppppuStack_608;
  undefined1 ****ppppuStack_600;
  code *pcStack_5f8;
  undefined8 **ppuStack_5e8;
  undefined8 auStack_5e0 [3];
  undefined1 auStack_5c8 [24];
  undefined1 auStack_5b0 [56];
  undefined8 auStack_578 [10];
  undefined8 ****appppuStack_528 [7];
  byte bStack_4f0;
  undefined8 **ppuStack_4e8;
  undefined1 auStack_4e0 [104];
  undefined8 uStack_478;
  undefined8 ****ppppuStack_470;
  undefined8 ***pppuStack_468;
  undefined8 ****ppppuStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  undefined8 *****pppppuStack_448;
  undefined1 ***pppuStack_440;
  code *pcStack_438;
  undefined8 auStack_410 [10];
  undefined8 auStack_3c0 [10];
  undefined8 auStack_370 [10];
  undefined8 ***pppuStack_320;
  undefined1 auStack_318 [16];
  long lStack_308;
  undefined1 auStack_300 [48];
  byte bStack_2d0;
  undefined8 ****appppuStack_2c8 [8];
  undefined8 uStack_288;
  undefined8 ****ppppuStack_280;
  long *plStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 ****ppppuStack_260;
  undefined8 *****pppppuStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  byte bStack_230;
  undefined8 ***apppuStack_228 [3];
  undefined8 ***pppuStack_210;
  undefined8 uStack_208;
  char cStack_200;
  undefined8 ***apppuStack_1f8 [11];
  undefined1 auStack_1a0 [16];
  undefined8 ****appppuStack_190 [9];
  undefined8 uStack_148;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined1 uStack_e1;
  undefined8 auStack_e0 [10];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ****appppuStack_80 [9];
  undefined8 uStack_38;
  
  ppppppuVar6 = param_1;
  func_0x000107539ccc();
  uStack_38 = extraout_x8;
  if ((*(byte *)(param_3 + 2) & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    uStack_88 = param_3[1];
    uStack_90 = *param_3;
    *param_3 = 0;
    param_3[1] = 0;
    func_0x0001072bed5c(appppuStack_80,&uStack_90,1,&uStack_e1);
    func_0x0001072c9b9c(&uStack_90);
    func_0x00010753937c(auStack_e0,appppuStack_80);
    param_3 = auStack_e0;
    FUN_107538638(param_1);
    func_0x000107539398(auStack_e0);
    ppppppuVar6 = (undefined8 ******)appppuStack_80;
    func_0x0001072c9c34();
  }
  func_0x000107539ca4(uStack_38);
  if ((bool)in_ZR) {
    return ppppppuVar6;
  }
  ___stack_chk_fail();
  func_0x000107539398(auStack_e0);
  func_0x0001072c9c34(appppuStack_80);
  func_0x000107539d2c();
  pcStack_f8 = FUN_1075388a8;
  plVar14 = param_2;
  puVar18 = param_3;
  puVar12 = param_4;
  pppppuVar23 = param_5;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x000107539cb8();
  appppuStack_190[0] = (undefined8 *****)0x0;
  pppppuVar17 = (undefined8 *****)(plVar14 + 1);
  pppppuVar24 = pppppuVar17;
  uStack_148 = extraout_x8_00;
  (**(code **)(*plVar14 + 0x20))(pppppuVar17);
  FUN_107539a30(appppuStack_190,pppppuVar24);
  do {
    pppppuVar24 = pppppuVar17;
    (**(code **)(*param_2 + 0x20))();
    uVar4 = param_5 == pppppuVar24;
    if (pppppuVar24 <= param_5) {
      pppppuVar24 = appppuStack_190;
      func_0x00010753937c(ppppppuVar6);
      break;
    }
    (**(code **)(*param_2 + 0x28))(auStack_1a0,pppppuVar17,param_5);
    func_0x0001072c95f0(apppuStack_1f8,1);
    pppppuVar24 = (undefined8 *****)apppuStack_1f8;
    puVar18 = param_4;
    func_0x000107768e6c(&pppuStack_210,auStack_1a0);
    uVar4 = cStack_200 == '\x01';
    bVar1 = !(bool)uVar4;
    if (bVar1) {
      func_0x000107771558(apppuStack_228,apppuStack_1f8);
      pppppuVar24 = (undefined8 *****)apppuStack_228;
      func_0x000100066230(param_3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_228);
      pppuStack_240 = (undefined8 ***)((ulong)pppuStack_240 & 0xffffffffffffff00);
    }
    else {
      uStack_238 = uStack_208;
      pppuStack_240 = pppuStack_210;
      pppuStack_210 = (undefined8 ****)0x0;
      uStack_208 = 0;
    }
    bStack_230 = !bVar1;
    func_0x000107539eac();
    func_0x0001072ca718(apppuStack_1f8);
    func_0x0001072f5f6c(auStack_1a0);
    bVar2 = bStack_230;
    if ((bStack_230 & 1) == 0) {
      *(undefined1 *)ppppppuVar6 = 0;
      *(undefined1 *)(ppppppuVar6 + 9) = 0;
    }
    else {
      pppppuVar24 = (undefined8 *****)&pppuStack_240;
      func_0x0001072c995c(appppuStack_190);
    }
    func_0x0001072c95d0(&pppuStack_240);
    param_5 = (undefined8 *****)((long)param_5 + 1);
  } while ((bVar2 & 1) != 0);
  ppppppuVar6 = (undefined8 ******)appppuStack_190;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_148);
  if ((bool)uVar4) {
    return ppppppuVar6;
  }
  ___stack_chk_fail();
  func_0x0001072c9c34(appppuStack_190);
  func_0x000107539d2c();
  pcStack_248 = FUN_107538a70;
  pppppuVar15 = pppppuVar24;
  puVar19 = puVar18;
  puVar20 = puVar12;
  ppppuStack_280 = pppppuVar17;
  plStack_278 = param_2;
  puStack_270 = param_3;
  puStack_268 = param_4;
  ppppuStack_260 = param_5;
  pppppuStack_258 = ppppppuVar6;
  ppuStack_250 = &puStack_100;
  func_0x000107539cb8();
  uVar4 = *(char *)(pppppuVar23 + 7) == '\x01';
  uStack_288 = extraout_x8_01;
  if ((bool)uVar4) {
    func_0x000107263b58(appppuStack_2c8);
    pppppuVar15 = pppppuVar23;
  }
  else {
    func_0x000107539fac(&lStack_308,pppppuVar24 + 1);
    (**(code **)(lStack_308 + 0x68))(appppuStack_2c8,auStack_300);
    func_0x0001072f5f6c(&lStack_308);
  }
  ppppuVar22 = &pppuStack_320;
  func_0x000107539dc0(&pppuStack_320,pppppuVar24 + 1);
  (*(code *)pppuStack_320[0xd])(&lStack_308,auStack_318);
  func_0x0001072f5f6c(&pppuStack_320);
  if ((bStack_2d0 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x000107539fec();
    iVar5 = (int)&lStack_308;
    func_0x000107278484();
    if (iVar5 == 0) {
      func_0x000107539ff8();
      iVar5 = (int)&lStack_308;
      func_0x000107278484();
      if (iVar5 == 0) {
        func_0x000107539dac();
        func_0x000107539dc8(&UNK_10f4166dc);
        func_0x000107539e10(auStack_410);
        pppppuVar15 = (undefined8 *****)&pppuStack_320;
        puVar19 = auStack_410;
        func_0x000107539cdc();
        puVar7 = auStack_410;
      }
      else {
        func_0x000107539dac();
        func_0x000107539dc8(&UNK_10f4166d1);
        func_0x000107539cf8(auStack_3c0);
        pppppuVar15 = (undefined8 *****)&pppuStack_320;
        puVar19 = auStack_3c0;
        func_0x000107539cdc();
        puVar7 = auStack_3c0;
      }
    }
    else {
      func_0x000107539dac();
      func_0x000107539dc8(&UNK_10f4166c0);
      func_0x000107539cf8(auStack_370);
      pppppuVar15 = (undefined8 *****)&pppuStack_320;
      puVar19 = auStack_370;
      func_0x000107539cdc();
      puVar7 = auStack_370;
    }
    func_0x000107539398(puVar7);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_320);
    func_0x000107539f74();
  }
  func_0x00010724b3d8(&lStack_308);
  ppppppuVar6 = (undefined8 ******)appppuStack_2c8;
  func_0x00010724b3d8();
  func_0x000107539ca4(uStack_288);
  if ((bool)uVar4) {
    return ppppppuVar6;
  }
  ___stack_chk_fail();
  func_0x000107539398(auStack_410);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_320);
  func_0x000107539f74();
  func_0x00010724b3d8(&lStack_308);
  func_0x00010724b3d8(appppuStack_2c8);
  func_0x000107539d2c();
  pcStack_438 = FUN_107538cc4;
  puVar7 = puVar19;
  puVar21 = puVar20;
  ppppuStack_470 = pppppuVar17;
  pppuStack_468 = ppppuVar22;
  ppppuStack_460 = pppppuVar24;
  puStack_458 = puVar12;
  puStack_450 = puVar18;
  pppppuStack_448 = ppppppuVar6;
  pppuStack_440 = &ppuStack_250;
  func_0x000107539cb8();
  pppuVar8 = &ppuStack_4e8;
  uStack_478 = extraout_x8_02;
  func_0x000107539dc0(&ppuStack_4e8,pppppuVar15 + 1);
  (*(code *)ppuStack_4e8[0xd])(appppuStack_528,auStack_4e0);
  func_0x0001072f5f6c(&ppuStack_4e8);
  if ((bStack_4f0 & 1) == 0) {
    uVar13 = 0x99;
    func_0x000107539f6c();
    func_0x000107539e54();
  }
  else {
    func_0x000107539fec();
    iVar5 = (int)appppuStack_528;
    func_0x000107278484();
    if (iVar5 == 0) {
      func_0x000107539ff8();
      iVar5 = (int)appppuStack_528;
      func_0x000107278484();
      if (iVar5 == 0) {
        func_0x00010002b838(auStack_5c8,&UNK_10f4166f2);
        func_0x000104c2fe00(auStack_5b0,appppuStack_528);
        pppuVar8 = (undefined8 ***)0xb8;
        __Znwm();
        ppppuVar22 = (undefined8 ****)&ppuStack_4e8;
        func_0x000107277488(&ppuStack_4e8,auStack_5b0);
        FUN_107539ae8(pppuVar8,&ppuStack_4e8,puVar20);
        ppuStack_5e8 = pppuVar8;
        func_0x000107539efc();
        func_0x0001075393b8(auStack_5e0,&ppuStack_5e8);
        uVar13 = SUB81(auStack_5c8,0);
        puVar7 = auStack_5e0;
        func_0x000107539d94();
        FUN_1075387c0();
        func_0x0001072c95d0(auStack_5e0);
        ppuVar3 = ppuStack_5e8;
        ppuStack_5e8 = (undefined8 **)0x0;
        if ((undefined8 ***)ppuVar3 != (undefined8 ***)0x0) {
          func_0x000107539cec();
        }
        func_0x000104c2f714(auStack_5b0);
        puVar9 = auStack_5c8;
      }
      else {
        func_0x00010002b838(auStack_5b0,&UNK_10f4166e4);
        ppuStack_4e8 = (undefined8 ***)0x0;
        func_0x00010753937c(auStack_578,&ppuStack_4e8);
        uVar13 = SUB81(auStack_5b0,0);
        puVar7 = auStack_578;
        func_0x000107539d94();
        FUN_107538638();
        func_0x000107539eb4();
        func_0x0001072c9c34(&ppuStack_4e8);
        puVar9 = auStack_5b0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar9);
    }
    else {
      puVar7 = puVar20;
      FUN_107538f54(&ppuStack_4e8,1);
      uVar13 = SUB81(&ppuStack_4e8,0);
      func_0x0001075393b8(ppppppuVar6);
      ppuVar3 = ppuStack_4e8;
      ppuStack_4e8 = (undefined8 ***)0x0;
      if ((undefined8 ***)ppuVar3 != (undefined8 ***)0x0) {
        func_0x000107539cec();
      }
    }
  }
  ppppppuVar6 = (undefined8 ******)appppuStack_528;
  func_0x00010724b3d8();
  func_0x000107539ca4(uStack_478);
  if ((bool)uVar4) {
    return ppppppuVar6;
  }
  ___stack_chk_fail();
  func_0x0001072c95d0(auStack_5e0);
  ppuVar3 = ppuStack_5e8;
  ppuStack_5e8 = (undefined8 **)0x0;
  if (ppuVar3 != (undefined8 **)0x0) {
    func_0x000107539cec();
  }
  func_0x000104c2f714(auStack_5b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5c8);
  func_0x00010724b3d8(appppuStack_528);
  func_0x000107539d2c();
  pcStack_5f8 = FUN_107538f54;
  ppppuStack_630 = pppppuVar17;
  pppuStack_628 = ppppuVar22;
  ppuStack_620 = pppuVar8;
  puStack_618 = puVar19;
  puStack_610 = puVar20;
  pppppuStack_608 = ppppppuVar6;
  ppppuStack_600 = &pppuStack_440;
  func_0x000107539cb8();
  ppppppuVar10 = (undefined8 ******)0xb8;
  uStack_638 = extraout_x8_03;
  __Znwm();
  uStack_640 = 1;
  ppppppuVar16 = (undefined8 ******)&ppppuStack_6a8;
  ppppppuVar11 = ppppppuVar10;
  uStack_6a0 = uVar13;
  FUN_107539ae8();
  *ppppppuVar6 = ppppppuVar10;
  func_0x000107539efc();
  func_0x000107539ca4(uStack_638);
  if ((bool)uVar4) {
    return ppppppuVar11;
  }
  ___stack_chk_fail();
  func_0x000107539efc();
  __ZdlPv(ppppppuVar10);
  func_0x000107539d2c();
  puVar18 = auStack_850;
  puVar12 = auStack_850;
  ppppppuVar10 = ppppppuVar16;
  puVar19 = puVar7;
  func_0x000107539cb8();
  uStack_708 = extraout_x8_04;
  func_0x000107539dc0(apppppuStack_760,ppppppuVar10 + 1);
  func_0x000107539fbc();
  ppppppuVar6 = apppppuStack_760;
  func_0x0001072f5f6c();
  if ((bStack_710 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x00010753a004();
    func_0x000107539df8();
    if (ppppppuVar6 == (undefined8 ******)0x0) {
      puVar19 = puVar21 + 8;
      FUN_107538f54(apppppuStack_760,0,puVar19);
      ppppppuVar10 = apppppuStack_760;
      func_0x0001075393b8(ppppppuVar11);
      ppppppuVar6 = (undefined8 ******)apppppuStack_760[0];
      apppppuStack_760[0] = (undefined8 ******)0x0;
      if (ppppppuVar6 != (undefined8 ******)0x0) {
        func_0x000107539cec();
      }
    }
    else {
      func_0x000107539fec();
      iVar5 = (int)ppppppuVar6;
      func_0x000107539d34();
      if (iVar5 == 0) {
        func_0x000107539ff8();
        func_0x000107539d34();
        if (iVar5 == 0) {
          func_0x000107539f44();
          func_0x000107539e10(auStack_850);
          ppppppuVar10 = apppppuStack_760;
          func_0x000107539cdc();
        }
        else {
          func_0x000107539f44();
          func_0x000107539cf8(auStack_800);
          ppppppuVar10 = apppppuStack_760;
          puVar18 = auStack_800;
          func_0x000107539cdc();
          puVar12 = auStack_800;
        }
      }
      else {
        func_0x000107539f44();
        func_0x000107539cf8(auStack_7b0);
        ppppppuVar10 = apppppuStack_760;
        puVar18 = auStack_7b0;
        func_0x000107539cdc();
        puVar12 = auStack_7b0;
      }
      func_0x000107539398(puVar12);
      ppppppuVar6 = apppppuStack_760;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar6);
      puVar19 = puVar18;
    }
  }
  func_0x000107539ecc();
  func_0x000107539ca4(uStack_708);
  if ((bool)uVar4) {
    return ppppppuVar6;
  }
  ___stack_chk_fail();
  func_0x000107539dec();
  func_0x000107539398();
  ppppppuVar6 = apppppuStack_760;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar6);
  func_0x000107539ecc();
  func_0x000107539d2c();
  func_0x000107539f04();
  func_0x000107539cb8();
  uStack_8a8 = extraout_x8_05;
  appppuStack_8f0[0] = (undefined8 *****)0x0;
  func_0x000107539df8((*ppppppuVar10)[4]);
  pppppuVar24 = appppuStack_8f0;
  FUN_107539a30(pppppuVar24,ppppppuVar6);
  pppppuVar23 = (undefined8 *****)0x1;
  do {
    func_0x00010753a004();
    func_0x000107539df8();
    uVar4 = pppppuVar23 == pppppuVar24;
    if (pppppuVar24 <= pppppuVar23) {
      pppppuVar17 = appppuStack_8f0;
      func_0x00010753937c(ppppppuVar11);
      break;
    }
    (*(code *)(*ppppppuVar16)[5])(apppuStack_900,ppppppuVar10 + 1,pppppuVar23);
    pppppuVar17 = (undefined8 *****)apppuStack_900;
    puVar19 = puVar21;
    FUN_107537eec(apppuStack_918,pppppuVar17,puVar21,puVar7);
    func_0x0001072f5f6c(apppuStack_900);
    bVar2 = bStack_908;
    if ((bStack_908 & 1) == 0) {
      *(undefined1 *)ppppppuVar11 = 0;
      *(undefined1 *)(ppppppuVar11 + 9) = 0;
    }
    else {
      pppppuVar17 = (undefined8 *****)apppuStack_918;
      func_0x0001072c995c(appppuStack_8f0);
    }
    pppppuVar24 = (undefined8 *****)apppuStack_918;
    func_0x0001072c95d0();
    pppppuVar23 = (undefined8 *****)((long)pppppuVar23 + 1);
  } while ((bVar2 & 1) != 0);
  ppppppuVar6 = (undefined8 ******)appppuStack_8f0;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_8a8);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    ppppppuVar6 = (undefined8 ******)appppuStack_8f0;
    func_0x0001072c9c34();
    func_0x000107539d2c();
    pppppuVar24 = (undefined8 *****)*pppppuVar17;
    ppppppuVar6[1] = (undefined8 *****)pppppuVar17[1];
    *ppppppuVar6 = pppppuVar24;
    *pppppuVar17 = (undefined8 ****)0x0;
    pppppuVar17[1] = (undefined8 ****)0x0;
    *(undefined1 *)(ppppppuVar6 + 2) = 1;
    func_0x000107284cf0(ppppppuVar6 + 3,puVar19);
    return ppppppuVar6;
  }
  return ppppppuVar6;
}



/* Entry: 1075388a8; end: 107538a6f;  */

undefined8 ******
FUN_1075388a8(undefined8 param_1,long *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 *****param_5)

{
  bool bVar1;
  byte bVar2;
  undefined8 **ppuVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 ******ppppppuVar6;
  undefined1 *puVar7;
  undefined8 ***pppuVar8;
  undefined1 *puVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ******ppppppuVar11;
  undefined1 *puVar12;
  undefined1 uVar13;
  long *plVar14;
  undefined8 *****pppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *****pppppuVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined1 *unaff_x19;
  undefined8 ****ppppuVar21;
  undefined8 *****pppppuVar22;
  undefined8 *****pppppuVar23;
  undefined8 ***apppuStack_828 [2];
  byte bStack_818;
  undefined8 ***apppuStack_810 [2];
  undefined8 ****appppuStack_800 [9];
  undefined8 uStack_7b8;
  undefined1 auStack_760 [80];
  undefined1 auStack_710 [80];
  undefined1 auStack_6c0 [80];
  undefined8 *****apppppuStack_670 [10];
  byte bStack_620;
  undefined8 uStack_618;
  undefined8 ****ppppuStack_5b8;
  undefined1 uStack_5b0;
  undefined4 uStack_550;
  undefined8 uStack_548;
  undefined8 ****ppppuStack_540;
  undefined8 ***pppuStack_538;
  undefined8 **ppuStack_530;
  undefined1 *puStack_528;
  undefined1 *puStack_520;
  undefined8 *****pppppuStack_518;
  undefined1 ***pppuStack_510;
  code *pcStack_508;
  undefined8 **ppuStack_4f8;
  undefined1 auStack_4f0 [24];
  undefined1 auStack_4d8 [24];
  undefined1 auStack_4c0 [56];
  undefined1 auStack_488 [80];
  undefined8 ****appppuStack_438 [7];
  byte bStack_400;
  undefined8 **ppuStack_3f8;
  undefined1 auStack_3f0 [104];
  undefined8 uStack_388;
  undefined8 ****ppppuStack_380;
  undefined8 ***pppuStack_378;
  undefined8 ****ppppuStack_370;
  undefined1 *puStack_368;
  undefined1 *puStack_360;
  undefined8 *****pppppuStack_358;
  undefined1 **ppuStack_350;
  code *pcStack_348;
  undefined1 auStack_320 [80];
  undefined1 auStack_2d0 [80];
  undefined1 auStack_280 [80];
  undefined8 ***pppuStack_230;
  undefined1 auStack_228 [16];
  long lStack_218;
  undefined1 auStack_210 [48];
  byte bStack_1e0;
  undefined8 ****appppuStack_1d8 [8];
  undefined8 uStack_198;
  undefined8 ****ppppuStack_190;
  long *plStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined8 ****ppppuStack_170;
  undefined8 *****pppppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  byte bStack_140;
  undefined8 ***apppuStack_138 [3];
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  char cStack_110;
  undefined8 ***apppuStack_108 [11];
  undefined1 auStack_b0 [16];
  undefined8 ****appppuStack_a0 [9];
  undefined8 uStack_58;
  
  plVar14 = param_2;
  puVar9 = param_3;
  puVar12 = param_4;
  pppppuVar22 = param_5;
  func_0x000107539cb8();
  appppuStack_a0[0] = (undefined8 *****)0x0;
  pppppuVar17 = (undefined8 *****)(plVar14 + 1);
  pppppuVar23 = pppppuVar17;
  uStack_58 = extraout_x8;
  (**(code **)(*plVar14 + 0x20))(pppppuVar17);
  FUN_107539a30(appppuStack_a0,pppppuVar23);
  do {
    pppppuVar23 = pppppuVar17;
    (**(code **)(*param_2 + 0x20))();
    uVar4 = param_5 == pppppuVar23;
    if (pppppuVar23 <= param_5) {
      pppppuVar23 = appppuStack_a0;
      func_0x00010753937c();
      break;
    }
    (**(code **)(*param_2 + 0x28))(auStack_b0,pppppuVar17,param_5);
    func_0x0001072c95f0(apppuStack_108,1);
    pppppuVar23 = (undefined8 *****)apppuStack_108;
    puVar9 = param_4;
    func_0x000107768e6c(&pppuStack_120,auStack_b0);
    uVar4 = cStack_110 == '\x01';
    bVar1 = !(bool)uVar4;
    if (bVar1) {
      func_0x000107771558(apppuStack_138,apppuStack_108);
      pppppuVar23 = (undefined8 *****)apppuStack_138;
      func_0x000100066230(param_3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_138);
      pppuStack_150 = (undefined8 ***)((ulong)pppuStack_150 & 0xffffffffffffff00);
    }
    else {
      uStack_148 = uStack_118;
      pppuStack_150 = pppuStack_120;
      pppuStack_120 = (undefined8 ****)0x0;
      uStack_118 = 0;
    }
    bStack_140 = !bVar1;
    func_0x000107539eac();
    func_0x0001072ca718(apppuStack_108);
    func_0x0001072f5f6c(auStack_b0);
    bVar2 = bStack_140;
    if ((bStack_140 & 1) == 0) {
      *unaff_x19 = 0;
      unaff_x19[0x48] = 0;
    }
    else {
      pppppuVar23 = (undefined8 *****)&pppuStack_150;
      func_0x0001072c995c(appppuStack_a0);
    }
    func_0x0001072c95d0(&pppuStack_150);
    param_5 = (undefined8 *****)((long)param_5 + 1);
  } while ((bVar2 & 1) != 0);
  ppppppuVar6 = (undefined8 ******)appppuStack_a0;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_58);
  if ((bool)uVar4) {
    return ppppppuVar6;
  }
  ___stack_chk_fail();
  func_0x0001072c9c34(appppuStack_a0);
  func_0x000107539d2c();
  pcStack_158 = FUN_107538a70;
  pppppuVar15 = pppppuVar23;
  puVar18 = puVar9;
  puVar19 = puVar12;
  ppppuStack_190 = pppppuVar17;
  plStack_188 = param_2;
  puStack_180 = param_3;
  puStack_178 = param_4;
  ppppuStack_170 = param_5;
  pppppuStack_168 = ppppppuVar6;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x000107539cb8();
  uVar4 = *(char *)(pppppuVar22 + 7) == '\x01';
  uStack_198 = extraout_x8_00;
  if ((bool)uVar4) {
    func_0x000107263b58(appppuStack_1d8);
    pppppuVar15 = pppppuVar22;
  }
  else {
    func_0x000107539fac(&lStack_218,pppppuVar23 + 1);
    (**(code **)(lStack_218 + 0x68))(appppuStack_1d8,auStack_210);
    func_0x0001072f5f6c(&lStack_218);
  }
  ppppuVar21 = &pppuStack_230;
  func_0x000107539dc0(&pppuStack_230,pppppuVar23 + 1);
  (*(code *)pppuStack_230[0xd])(&lStack_218,auStack_228);
  func_0x0001072f5f6c(&pppuStack_230);
  if ((bStack_1e0 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x000107539fec();
    iVar5 = (int)&lStack_218;
    func_0x000107278484();
    if (iVar5 == 0) {
      func_0x000107539ff8();
      iVar5 = (int)&lStack_218;
      func_0x000107278484();
      if (iVar5 == 0) {
        func_0x000107539dac();
        func_0x000107539dc8(&UNK_10f4166dc);
        func_0x000107539e10(auStack_320);
        pppppuVar15 = (undefined8 *****)&pppuStack_230;
        puVar18 = auStack_320;
        func_0x000107539cdc();
        puVar7 = auStack_320;
      }
      else {
        func_0x000107539dac();
        func_0x000107539dc8(&UNK_10f4166d1);
        func_0x000107539cf8(auStack_2d0);
        pppppuVar15 = (undefined8 *****)&pppuStack_230;
        puVar18 = auStack_2d0;
        func_0x000107539cdc();
        puVar7 = auStack_2d0;
      }
    }
    else {
      func_0x000107539dac();
      func_0x000107539dc8(&UNK_10f4166c0);
      func_0x000107539cf8(auStack_280);
      pppppuVar15 = (undefined8 *****)&pppuStack_230;
      puVar18 = auStack_280;
      func_0x000107539cdc();
      puVar7 = auStack_280;
    }
    func_0x000107539398(puVar7);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_230);
    func_0x000107539f74();
  }
  func_0x00010724b3d8(&lStack_218);
  ppppppuVar6 = (undefined8 ******)appppuStack_1d8;
  func_0x00010724b3d8();
  func_0x000107539ca4(uStack_198);
  if ((bool)uVar4) {
    return ppppppuVar6;
  }
  ___stack_chk_fail();
  func_0x000107539398(auStack_320);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_230);
  func_0x000107539f74();
  func_0x00010724b3d8(&lStack_218);
  func_0x00010724b3d8(appppuStack_1d8);
  func_0x000107539d2c();
  pcStack_348 = FUN_107538cc4;
  puVar7 = puVar18;
  puVar20 = puVar19;
  ppppuStack_380 = pppppuVar17;
  pppuStack_378 = ppppuVar21;
  ppppuStack_370 = pppppuVar23;
  puStack_368 = puVar12;
  puStack_360 = puVar9;
  pppppuStack_358 = ppppppuVar6;
  ppuStack_350 = &puStack_160;
  func_0x000107539cb8();
  pppuVar8 = &ppuStack_3f8;
  uStack_388 = extraout_x8_01;
  func_0x000107539dc0(&ppuStack_3f8,pppppuVar15 + 1);
  (*(code *)ppuStack_3f8[0xd])(appppuStack_438,auStack_3f0);
  func_0x0001072f5f6c(&ppuStack_3f8);
  if ((bStack_400 & 1) == 0) {
    uVar13 = 0x99;
    func_0x000107539f6c();
    func_0x000107539e54();
  }
  else {
    func_0x000107539fec();
    iVar5 = (int)appppuStack_438;
    func_0x000107278484();
    if (iVar5 == 0) {
      func_0x000107539ff8();
      iVar5 = (int)appppuStack_438;
      func_0x000107278484();
      if (iVar5 == 0) {
        func_0x00010002b838(auStack_4d8,&UNK_10f4166f2);
        func_0x000104c2fe00(auStack_4c0,appppuStack_438);
        pppuVar8 = (undefined8 ***)0xb8;
        __Znwm();
        ppppuVar21 = (undefined8 ****)&ppuStack_3f8;
        func_0x000107277488(&ppuStack_3f8,auStack_4c0);
        FUN_107539ae8(pppuVar8,&ppuStack_3f8,puVar19);
        ppuStack_4f8 = pppuVar8;
        func_0x000107539efc();
        func_0x0001075393b8(auStack_4f0,&ppuStack_4f8);
        uVar13 = SUB81(auStack_4d8,0);
        puVar7 = auStack_4f0;
        func_0x000107539d94();
        FUN_1075387c0();
        func_0x0001072c95d0(auStack_4f0);
        ppuVar3 = ppuStack_4f8;
        ppuStack_4f8 = (undefined8 **)0x0;
        if ((undefined8 ***)ppuVar3 != (undefined8 ***)0x0) {
          func_0x000107539cec();
        }
        func_0x000104c2f714(auStack_4c0);
        puVar9 = auStack_4d8;
      }
      else {
        func_0x00010002b838(auStack_4c0,&UNK_10f4166e4);
        ppuStack_3f8 = (undefined8 ***)0x0;
        func_0x00010753937c(auStack_488,&ppuStack_3f8);
        uVar13 = SUB81(auStack_4c0,0);
        puVar7 = auStack_488;
        func_0x000107539d94();
        FUN_107538638();
        func_0x000107539eb4();
        func_0x0001072c9c34(&ppuStack_3f8);
        puVar9 = auStack_4c0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar9);
    }
    else {
      puVar7 = puVar19;
      FUN_107538f54(&ppuStack_3f8,1);
      uVar13 = SUB81(&ppuStack_3f8,0);
      func_0x0001075393b8(ppppppuVar6);
      ppuVar3 = ppuStack_3f8;
      ppuStack_3f8 = (undefined8 ***)0x0;
      if ((undefined8 ***)ppuVar3 != (undefined8 ***)0x0) {
        func_0x000107539cec();
      }
    }
  }
  ppppppuVar6 = (undefined8 ******)appppuStack_438;
  func_0x00010724b3d8();
  func_0x000107539ca4(uStack_388);
  if ((bool)uVar4) {
    return ppppppuVar6;
  }
  ___stack_chk_fail();
  func_0x0001072c95d0(auStack_4f0);
  ppuVar3 = ppuStack_4f8;
  ppuStack_4f8 = (undefined8 **)0x0;
  if (ppuVar3 != (undefined8 **)0x0) {
    func_0x000107539cec();
  }
  func_0x000104c2f714(auStack_4c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4d8);
  func_0x00010724b3d8(appppuStack_438);
  func_0x000107539d2c();
  pcStack_508 = FUN_107538f54;
  ppppuStack_540 = pppppuVar17;
  pppuStack_538 = ppppuVar21;
  ppuStack_530 = pppuVar8;
  puStack_528 = puVar18;
  puStack_520 = puVar19;
  pppppuStack_518 = ppppppuVar6;
  pppuStack_510 = &ppuStack_350;
  func_0x000107539cb8();
  ppppppuVar10 = (undefined8 ******)0xb8;
  uStack_548 = extraout_x8_02;
  __Znwm();
  uStack_550 = 1;
  ppppppuVar16 = (undefined8 ******)&ppppuStack_5b8;
  ppppppuVar11 = ppppppuVar10;
  uStack_5b0 = uVar13;
  FUN_107539ae8();
  *ppppppuVar6 = ppppppuVar10;
  func_0x000107539efc();
  func_0x000107539ca4(uStack_548);
  if ((bool)uVar4) {
    return ppppppuVar11;
  }
  ___stack_chk_fail();
  func_0x000107539efc();
  __ZdlPv(ppppppuVar10);
  func_0x000107539d2c();
  puVar9 = auStack_760;
  puVar12 = auStack_760;
  ppppppuVar10 = ppppppuVar16;
  puVar18 = puVar7;
  func_0x000107539cb8();
  uStack_618 = extraout_x8_03;
  func_0x000107539dc0(apppppuStack_670,ppppppuVar10 + 1);
  func_0x000107539fbc();
  ppppppuVar6 = apppppuStack_670;
  func_0x0001072f5f6c();
  if ((bStack_620 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x00010753a004();
    func_0x000107539df8();
    if (ppppppuVar6 == (undefined8 ******)0x0) {
      puVar18 = puVar20 + 0x40;
      FUN_107538f54(apppppuStack_670,0,puVar18);
      ppppppuVar10 = apppppuStack_670;
      func_0x0001075393b8(ppppppuVar11);
      ppppppuVar6 = (undefined8 ******)apppppuStack_670[0];
      apppppuStack_670[0] = (undefined8 ******)0x0;
      if (ppppppuVar6 != (undefined8 ******)0x0) {
        func_0x000107539cec();
      }
    }
    else {
      func_0x000107539fec();
      iVar5 = (int)ppppppuVar6;
      func_0x000107539d34();
      if (iVar5 == 0) {
        func_0x000107539ff8();
        func_0x000107539d34();
        if (iVar5 == 0) {
          func_0x000107539f44();
          func_0x000107539e10(auStack_760);
          ppppppuVar10 = apppppuStack_670;
          func_0x000107539cdc();
        }
        else {
          func_0x000107539f44();
          func_0x000107539cf8(auStack_710);
          ppppppuVar10 = apppppuStack_670;
          puVar9 = auStack_710;
          func_0x000107539cdc();
          puVar12 = auStack_710;
        }
      }
      else {
        func_0x000107539f44();
        func_0x000107539cf8(auStack_6c0);
        ppppppuVar10 = apppppuStack_670;
        puVar9 = auStack_6c0;
        func_0x000107539cdc();
        puVar12 = auStack_6c0;
      }
      func_0x000107539398(puVar12);
      ppppppuVar6 = apppppuStack_670;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar6);
      puVar18 = puVar9;
    }
  }
  func_0x000107539ecc();
  func_0x000107539ca4(uStack_618);
  if ((bool)uVar4) {
    return ppppppuVar6;
  }
  ___stack_chk_fail();
  func_0x000107539dec();
  func_0x000107539398();
  ppppppuVar6 = apppppuStack_670;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar6);
  func_0x000107539ecc();
  func_0x000107539d2c();
  func_0x000107539f04();
  func_0x000107539cb8();
  uStack_7b8 = extraout_x8_04;
  appppuStack_800[0] = (undefined8 *****)0x0;
  func_0x000107539df8((*ppppppuVar10)[4]);
  pppppuVar23 = appppuStack_800;
  FUN_107539a30(pppppuVar23,ppppppuVar6);
  pppppuVar22 = (undefined8 *****)0x1;
  do {
    func_0x00010753a004();
    func_0x000107539df8();
    uVar4 = pppppuVar22 == pppppuVar23;
    if (pppppuVar23 <= pppppuVar22) {
      pppppuVar17 = appppuStack_800;
      func_0x00010753937c(ppppppuVar11);
      break;
    }
    (*(code *)(*ppppppuVar16)[5])(apppuStack_810,ppppppuVar10 + 1,pppppuVar22);
    pppppuVar17 = (undefined8 *****)apppuStack_810;
    puVar18 = puVar20;
    FUN_107537eec(apppuStack_828,pppppuVar17,puVar20,puVar7);
    func_0x0001072f5f6c(apppuStack_810);
    bVar2 = bStack_818;
    if ((bStack_818 & 1) == 0) {
      *(undefined1 *)ppppppuVar11 = 0;
      *(undefined1 *)(ppppppuVar11 + 9) = 0;
    }
    else {
      pppppuVar17 = (undefined8 *****)apppuStack_828;
      func_0x0001072c995c(appppuStack_800);
    }
    pppppuVar23 = (undefined8 *****)apppuStack_828;
    func_0x0001072c95d0();
    pppppuVar22 = (undefined8 *****)((long)pppppuVar22 + 1);
  } while ((bVar2 & 1) != 0);
  ppppppuVar6 = (undefined8 ******)appppuStack_800;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_7b8);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    ppppppuVar6 = (undefined8 ******)appppuStack_800;
    func_0x0001072c9c34();
    func_0x000107539d2c();
    pppppuVar23 = (undefined8 *****)*pppppuVar17;
    ppppppuVar6[1] = (undefined8 *****)pppppuVar17[1];
    *ppppppuVar6 = pppppuVar23;
    *pppppuVar17 = (undefined8 ****)0x0;
    pppppuVar17[1] = (undefined8 ****)0x0;
    *(undefined1 *)(ppppppuVar6 + 2) = 1;
    func_0x000107284cf0(ppppppuVar6 + 3,puVar18);
    return ppppppuVar6;
  }
  return ppppppuVar6;
}



/* Entry: 107538a70; end: 107538cc3;  */

undefined8 ****
FUN_107538a70(undefined8 param_1,long *param_2,undefined1 *param_3,undefined1 *param_4,long *param_5
             )

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 ****ppppuVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined1 *puVar10;
  undefined1 uVar11;
  long *plVar12;
  undefined8 ****ppppuVar13;
  undefined8 ***pppuVar14;
  undefined1 *puVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 ***pppuVar16;
  undefined8 ***pppuVar17;
  undefined8 *apuStack_6d8 [2];
  byte bStack_6c8;
  undefined8 *apuStack_6c0 [2];
  undefined8 **appuStack_6b0 [9];
  undefined8 uStack_668;
  undefined1 auStack_610 [80];
  undefined1 auStack_5c0 [80];
  undefined1 auStack_570 [80];
  undefined8 ***apppuStack_520 [10];
  byte bStack_4d0;
  undefined8 uStack_4c8;
  undefined8 **ppuStack_468;
  undefined1 uStack_460;
  undefined4 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3a8;
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [56];
  undefined1 auStack_338 [80];
  undefined8 **appuStack_2e8 [7];
  byte bStack_2b0;
  long lStack_2a8;
  undefined1 auStack_2a0 [104];
  undefined8 uStack_238;
  undefined1 auStack_1d0 [80];
  undefined1 auStack_180 [80];
  undefined1 auStack_130 [80];
  long lStack_e0;
  undefined1 auStack_d8 [16];
  long lStack_c8;
  undefined1 auStack_c0 [48];
  byte bStack_90;
  undefined8 **appuStack_88 [8];
  undefined8 uStack_48;
  
  plVar12 = param_2;
  func_0x000107539cb8();
  uVar2 = (char)param_5[7] == '\x01';
  uStack_48 = extraout_x8;
  if ((bool)uVar2) {
    func_0x000107263b58(appuStack_88);
    plVar12 = param_5;
  }
  else {
    func_0x000107539fac(&lStack_c8,param_2 + 1);
    (**(code **)(lStack_c8 + 0x68))(appuStack_88,auStack_c0);
    func_0x0001072f5f6c(&lStack_c8);
  }
  func_0x000107539dc0(&lStack_e0,param_2 + 1);
  (**(code **)(lStack_e0 + 0x68))(&lStack_c8,auStack_d8);
  func_0x0001072f5f6c(&lStack_e0);
  if ((bStack_90 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x000107539fec();
    iVar3 = (int)&lStack_c8;
    func_0x000107278484();
    if (iVar3 == 0) {
      func_0x000107539ff8();
      iVar3 = (int)&lStack_c8;
      func_0x000107278484();
      if (iVar3 == 0) {
        func_0x000107539dac();
        func_0x000107539dc8(&UNK_10f4166dc);
        func_0x000107539e10(auStack_1d0);
        plVar12 = &lStack_e0;
        param_3 = auStack_1d0;
        func_0x000107539cdc();
        puVar4 = auStack_1d0;
      }
      else {
        func_0x000107539dac();
        func_0x000107539dc8(&UNK_10f4166d1);
        func_0x000107539cf8(auStack_180);
        plVar12 = &lStack_e0;
        param_3 = auStack_180;
        func_0x000107539cdc();
        puVar4 = auStack_180;
      }
    }
    else {
      func_0x000107539dac();
      func_0x000107539dc8(&UNK_10f4166c0);
      func_0x000107539cf8(auStack_130);
      plVar12 = &lStack_e0;
      param_3 = auStack_130;
      func_0x000107539cdc();
      puVar4 = auStack_130;
    }
    func_0x000107539398(puVar4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_e0);
    func_0x000107539f74();
  }
  func_0x00010724b3d8(&lStack_c8);
  ppppuVar5 = (undefined8 ****)appuStack_88;
  func_0x00010724b3d8();
  func_0x000107539ca4(uStack_48);
  if ((bool)uVar2) {
    return ppppuVar5;
  }
  ___stack_chk_fail();
  func_0x000107539398(auStack_1d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_e0);
  func_0x000107539f74();
  func_0x00010724b3d8(&lStack_c8);
  func_0x00010724b3d8(appuStack_88);
  func_0x000107539d2c();
  puVar4 = param_4;
  func_0x000107539cb8();
  uStack_238 = extraout_x8_00;
  func_0x000107539dc0(&lStack_2a8,plVar12 + 1);
  (**(code **)(lStack_2a8 + 0x68))(appuStack_2e8,auStack_2a0);
  func_0x0001072f5f6c(&lStack_2a8);
  if ((bStack_2b0 & 1) == 0) {
    uVar11 = 0x99;
    func_0x000107539f6c();
    func_0x000107539e54();
  }
  else {
    func_0x000107539fec();
    iVar3 = (int)appuStack_2e8;
    func_0x000107278484();
    if (iVar3 == 0) {
      func_0x000107539ff8();
      iVar3 = (int)appuStack_2e8;
      func_0x000107278484();
      if (iVar3 == 0) {
        func_0x00010002b838(auStack_388,&UNK_10f4166f2);
        func_0x000104c2fe00(auStack_370,appuStack_2e8);
        lVar6 = 0xb8;
        __Znwm();
        func_0x000107277488(&lStack_2a8,auStack_370);
        FUN_107539ae8(lVar6,&lStack_2a8,param_4);
        lStack_3a8 = lVar6;
        func_0x000107539efc();
        func_0x0001075393b8(auStack_3a0,&lStack_3a8);
        uVar11 = SUB81(auStack_388,0);
        param_3 = auStack_3a0;
        func_0x000107539d94();
        FUN_1075387c0();
        func_0x0001072c95d0(auStack_3a0);
        lVar6 = lStack_3a8;
        lStack_3a8 = 0;
        if (lVar6 != 0) {
          func_0x000107539cec();
        }
        func_0x000104c2f714(auStack_370);
        puVar7 = auStack_388;
      }
      else {
        func_0x00010002b838(auStack_370,&UNK_10f4166e4);
        lStack_2a8 = 0;
        func_0x00010753937c(auStack_338,&lStack_2a8);
        uVar11 = SUB81(auStack_370,0);
        param_3 = auStack_338;
        func_0x000107539d94();
        FUN_107538638();
        func_0x000107539eb4();
        func_0x0001072c9c34(&lStack_2a8);
        puVar7 = auStack_370;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7);
    }
    else {
      FUN_107538f54(&lStack_2a8,1);
      uVar11 = SUB81(&lStack_2a8,0);
      func_0x0001075393b8(ppppuVar5);
      lVar6 = lStack_2a8;
      lStack_2a8 = 0;
      param_3 = param_4;
      if (lVar6 != 0) {
        func_0x000107539cec();
        param_3 = param_4;
      }
    }
  }
  ppppuVar5 = (undefined8 ****)appuStack_2e8;
  func_0x00010724b3d8();
  func_0x000107539ca4(uStack_238);
  if ((bool)uVar2) {
    return ppppuVar5;
  }
  ___stack_chk_fail();
  func_0x0001072c95d0(auStack_3a0);
  lVar6 = lStack_3a8;
  lStack_3a8 = 0;
  if (lVar6 != 0) {
    func_0x000107539cec();
  }
  func_0x000104c2f714(auStack_370);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_388);
  func_0x00010724b3d8(appuStack_2e8);
  func_0x000107539d2c();
  func_0x000107539cb8();
  ppppuVar8 = (undefined8 ****)0xb8;
  uStack_3f8 = extraout_x8_01;
  __Znwm();
  uStack_400 = 1;
  ppppuVar13 = (undefined8 ****)&ppuStack_468;
  ppppuVar9 = ppppuVar8;
  uStack_460 = uVar11;
  FUN_107539ae8();
  *ppppuVar5 = ppppuVar8;
  func_0x000107539efc();
  func_0x000107539ca4(uStack_3f8);
  if ((bool)uVar2) {
    return ppppuVar9;
  }
  ___stack_chk_fail();
  func_0x000107539efc();
  __ZdlPv(ppppuVar8);
  func_0x000107539d2c();
  puVar7 = auStack_610;
  puVar10 = auStack_610;
  ppppuVar8 = ppppuVar13;
  puVar15 = param_3;
  func_0x000107539cb8();
  uStack_4c8 = extraout_x8_02;
  func_0x000107539dc0(apppuStack_520,ppppuVar8 + 1);
  func_0x000107539fbc();
  ppppuVar5 = apppuStack_520;
  func_0x0001072f5f6c();
  if ((bStack_4d0 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x00010753a004();
    func_0x000107539df8();
    if (ppppuVar5 == (undefined8 ****)0x0) {
      puVar15 = puVar4 + 0x40;
      FUN_107538f54(apppuStack_520,0,puVar15);
      ppppuVar8 = apppuStack_520;
      func_0x0001075393b8(ppppuVar9);
      ppppuVar5 = (undefined8 ****)apppuStack_520[0];
      apppuStack_520[0] = (undefined8 ****)0x0;
      if (ppppuVar5 != (undefined8 ****)0x0) {
        func_0x000107539cec();
      }
    }
    else {
      func_0x000107539fec();
      iVar3 = (int)ppppuVar5;
      func_0x000107539d34();
      if (iVar3 == 0) {
        func_0x000107539ff8();
        func_0x000107539d34();
        if (iVar3 == 0) {
          func_0x000107539f44();
          func_0x000107539e10(auStack_610);
          ppppuVar8 = apppuStack_520;
          func_0x000107539cdc();
        }
        else {
          func_0x000107539f44();
          func_0x000107539cf8(auStack_5c0);
          ppppuVar8 = apppuStack_520;
          puVar7 = auStack_5c0;
          func_0x000107539cdc();
          puVar10 = auStack_5c0;
        }
      }
      else {
        func_0x000107539f44();
        func_0x000107539cf8(auStack_570);
        ppppuVar8 = apppuStack_520;
        puVar7 = auStack_570;
        func_0x000107539cdc();
        puVar10 = auStack_570;
      }
      func_0x000107539398(puVar10);
      ppppuVar5 = apppuStack_520;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppuVar5);
      puVar15 = puVar7;
    }
  }
  func_0x000107539ecc();
  func_0x000107539ca4(uStack_4c8);
  if ((bool)uVar2) {
    return ppppuVar5;
  }
  ___stack_chk_fail();
  func_0x000107539dec();
  func_0x000107539398();
  ppppuVar5 = apppuStack_520;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppuVar5);
  func_0x000107539ecc();
  func_0x000107539d2c();
  func_0x000107539f04();
  func_0x000107539cb8();
  uStack_668 = extraout_x8_03;
  appuStack_6b0[0] = (undefined8 ***)0x0;
  func_0x000107539df8((*ppppuVar8)[4]);
  pppuVar17 = appuStack_6b0;
  FUN_107539a30(pppuVar17,ppppuVar5);
  pppuVar16 = (undefined8 ***)0x1;
  do {
    func_0x00010753a004();
    func_0x000107539df8();
    uVar2 = pppuVar16 == pppuVar17;
    if (pppuVar17 <= pppuVar16) {
      pppuVar14 = appuStack_6b0;
      func_0x00010753937c(ppppuVar9);
      break;
    }
    (*(code *)(*ppppuVar13)[5])(apuStack_6c0,ppppuVar8 + 1,pppuVar16);
    pppuVar14 = (undefined8 ***)apuStack_6c0;
    puVar15 = puVar4;
    FUN_107537eec(apuStack_6d8,pppuVar14,puVar4,param_3);
    func_0x0001072f5f6c(apuStack_6c0);
    bVar1 = bStack_6c8;
    if ((bStack_6c8 & 1) == 0) {
      *(undefined1 *)ppppuVar9 = 0;
      *(undefined1 *)(ppppuVar9 + 9) = 0;
    }
    else {
      pppuVar14 = (undefined8 ***)apuStack_6d8;
      func_0x0001072c995c(appuStack_6b0);
    }
    pppuVar17 = (undefined8 ***)apuStack_6d8;
    func_0x0001072c95d0();
    pppuVar16 = (undefined8 ***)((long)pppuVar16 + 1);
  } while ((bVar1 & 1) != 0);
  ppppuVar5 = (undefined8 ****)appuStack_6b0;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_668);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    ppppuVar5 = (undefined8 ****)appuStack_6b0;
    func_0x0001072c9c34();
    func_0x000107539d2c();
    pppuVar17 = (undefined8 ***)*pppuVar14;
    ppppuVar5[1] = (undefined8 ***)pppuVar14[1];
    *ppppuVar5 = pppuVar17;
    *pppuVar14 = (undefined8 **)0x0;
    pppuVar14[1] = (undefined8 **)0x0;
    *(undefined1 *)(ppppuVar5 + 2) = 1;
    func_0x000107284cf0(ppppuVar5 + 3,puVar15);
    return ppppuVar5;
  }
  return ppppuVar5;
}



/* Entry: 107538cc4; end: 107538f53;  */

undefined8 ****
FUN_107538cc4(undefined8 param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined1 *puVar9;
  undefined8 ****ppppuVar10;
  undefined8 ***pppuVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  undefined8 *apuStack_4e8 [2];
  byte bStack_4d8;
  undefined8 *apuStack_4d0 [2];
  undefined8 **appuStack_4c0 [9];
  undefined8 uStack_478;
  undefined1 auStack_420 [80];
  undefined1 auStack_3d0 [80];
  undefined1 auStack_380 [80];
  undefined8 ***apppuStack_330 [10];
  byte bStack_2e0;
  undefined8 uStack_2d8;
  undefined8 **ppuStack_278;
  undefined1 uStack_270;
  undefined4 uStack_210;
  undefined8 uStack_208;
  long lStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [56];
  undefined1 auStack_148 [80];
  undefined8 **appuStack_f8 [7];
  byte bStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [104];
  undefined8 uStack_48;
  
  puVar13 = param_4;
  func_0x000107539cb8();
  uStack_48 = extraout_x8;
  func_0x000107539dc0(&lStack_b8,param_2 + 8);
  (**(code **)(lStack_b8 + 0x68))(appuStack_f8,auStack_b0);
  func_0x0001072f5f6c(&lStack_b8);
  if ((bStack_c0 & 1) == 0) {
    uVar2 = 0x99;
    func_0x000107539f6c();
    func_0x000107539e54();
  }
  else {
    func_0x000107539fec();
    iVar3 = (int)appuStack_f8;
    func_0x000107278484();
    if (iVar3 == 0) {
      func_0x000107539ff8();
      iVar3 = (int)appuStack_f8;
      func_0x000107278484();
      if (iVar3 == 0) {
        func_0x00010002b838(auStack_198,&UNK_10f4166f2);
        func_0x000104c2fe00(auStack_180,appuStack_f8);
        lVar4 = 0xb8;
        __Znwm();
        func_0x000107277488(&lStack_b8,auStack_180);
        FUN_107539ae8(lVar4,&lStack_b8,param_4);
        lStack_1b8 = lVar4;
        func_0x000107539efc();
        func_0x0001075393b8(auStack_1b0,&lStack_1b8);
        uVar2 = SUB81(auStack_198,0);
        param_3 = auStack_1b0;
        func_0x000107539d94();
        FUN_1075387c0();
        func_0x0001072c95d0(auStack_1b0);
        lVar4 = lStack_1b8;
        lStack_1b8 = 0;
        if (lVar4 != 0) {
          func_0x000107539cec();
        }
        func_0x000104c2f714(auStack_180);
        puVar5 = auStack_198;
      }
      else {
        func_0x00010002b838(auStack_180,&UNK_10f4166e4);
        lStack_b8 = 0;
        func_0x00010753937c(auStack_148,&lStack_b8);
        uVar2 = SUB81(auStack_180,0);
        param_3 = auStack_148;
        func_0x000107539d94();
        FUN_107538638();
        func_0x000107539eb4();
        func_0x0001072c9c34(&lStack_b8);
        puVar5 = auStack_180;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5);
    }
    else {
      FUN_107538f54(&lStack_b8,1);
      uVar2 = SUB81(&lStack_b8,0);
      func_0x0001075393b8();
      lVar4 = lStack_b8;
      lStack_b8 = 0;
      param_3 = param_4;
      if (lVar4 != 0) {
        func_0x000107539cec();
        param_3 = param_4;
      }
    }
  }
  ppppuVar6 = (undefined8 ****)appuStack_f8;
  func_0x00010724b3d8();
  func_0x000107539ca4(uStack_48);
  if ((bool)in_ZR) {
    return ppppuVar6;
  }
  ___stack_chk_fail();
  func_0x0001072c95d0(auStack_1b0);
  lVar4 = lStack_1b8;
  lStack_1b8 = 0;
  if (lVar4 != 0) {
    func_0x000107539cec();
  }
  func_0x000104c2f714(auStack_180);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
  func_0x00010724b3d8(appuStack_f8);
  func_0x000107539d2c();
  func_0x000107539cb8();
  ppppuVar7 = (undefined8 ****)0xb8;
  uStack_208 = extraout_x8_00;
  __Znwm();
  uStack_210 = 1;
  ppppuVar10 = (undefined8 ****)&ppuStack_278;
  ppppuVar8 = ppppuVar7;
  uStack_270 = uVar2;
  FUN_107539ae8();
  *ppppuVar6 = ppppuVar7;
  func_0x000107539efc();
  func_0x000107539ca4(uStack_208);
  if ((bool)in_ZR) {
    return ppppuVar8;
  }
  ___stack_chk_fail();
  func_0x000107539efc();
  __ZdlPv(ppppuVar7);
  func_0x000107539d2c();
  puVar5 = auStack_420;
  puVar9 = auStack_420;
  ppppuVar7 = ppppuVar10;
  puVar12 = param_3;
  func_0x000107539cb8();
  uStack_2d8 = extraout_x8_01;
  func_0x000107539dc0(apppuStack_330,ppppuVar7 + 1);
  func_0x000107539fbc();
  ppppuVar6 = apppuStack_330;
  func_0x0001072f5f6c();
  if ((bStack_2e0 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x00010753a004();
    func_0x000107539df8();
    if (ppppuVar6 == (undefined8 ****)0x0) {
      puVar12 = puVar13 + 0x40;
      FUN_107538f54(apppuStack_330,0,puVar12);
      ppppuVar7 = apppuStack_330;
      func_0x0001075393b8(ppppuVar8);
      ppppuVar6 = (undefined8 ****)apppuStack_330[0];
      apppuStack_330[0] = (undefined8 ****)0x0;
      if (ppppuVar6 != (undefined8 ****)0x0) {
        func_0x000107539cec();
      }
    }
    else {
      func_0x000107539fec();
      iVar3 = (int)ppppuVar6;
      func_0x000107539d34();
      if (iVar3 == 0) {
        func_0x000107539ff8();
        func_0x000107539d34();
        if (iVar3 == 0) {
          func_0x000107539f44();
          func_0x000107539e10(auStack_420);
          ppppuVar7 = apppuStack_330;
          func_0x000107539cdc();
        }
        else {
          func_0x000107539f44();
          func_0x000107539cf8(auStack_3d0);
          ppppuVar7 = apppuStack_330;
          puVar5 = auStack_3d0;
          func_0x000107539cdc();
          puVar9 = auStack_3d0;
        }
      }
      else {
        func_0x000107539f44();
        func_0x000107539cf8(auStack_380);
        ppppuVar7 = apppuStack_330;
        puVar5 = auStack_380;
        func_0x000107539cdc();
        puVar9 = auStack_380;
      }
      func_0x000107539398(puVar9);
      ppppuVar6 = apppuStack_330;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppuVar6);
      puVar12 = puVar5;
    }
  }
  func_0x000107539ecc();
  func_0x000107539ca4(uStack_2d8);
  if ((bool)in_ZR) {
    return ppppuVar6;
  }
  ___stack_chk_fail();
  func_0x000107539dec();
  func_0x000107539398();
  ppppuVar6 = apppuStack_330;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppuVar6);
  func_0x000107539ecc();
  func_0x000107539d2c();
  func_0x000107539f04();
  func_0x000107539cb8();
  uStack_478 = extraout_x8_02;
  appuStack_4c0[0] = (undefined8 ***)0x0;
  func_0x000107539df8((*ppppuVar7)[4]);
  pppuVar15 = appuStack_4c0;
  FUN_107539a30(pppuVar15,ppppuVar6);
  pppuVar14 = (undefined8 ***)0x1;
  do {
    func_0x00010753a004();
    func_0x000107539df8();
    uVar2 = pppuVar14 == pppuVar15;
    if (pppuVar15 <= pppuVar14) {
      pppuVar11 = appuStack_4c0;
      func_0x00010753937c(ppppuVar8);
      break;
    }
    (*(code *)(*ppppuVar10)[5])(apuStack_4d0,ppppuVar7 + 1,pppuVar14);
    pppuVar11 = (undefined8 ***)apuStack_4d0;
    puVar12 = puVar13;
    FUN_107537eec(apuStack_4e8,pppuVar11,puVar13,param_3);
    func_0x0001072f5f6c(apuStack_4d0);
    bVar1 = bStack_4d8;
    if ((bStack_4d8 & 1) == 0) {
      *(undefined1 *)ppppuVar8 = 0;
      *(undefined1 *)(ppppuVar8 + 9) = 0;
    }
    else {
      pppuVar11 = (undefined8 ***)apuStack_4e8;
      func_0x0001072c995c(appuStack_4c0);
    }
    pppuVar15 = (undefined8 ***)apuStack_4e8;
    func_0x0001072c95d0();
    pppuVar14 = (undefined8 ***)((long)pppuVar14 + 1);
  } while ((bVar1 & 1) != 0);
  ppppuVar6 = (undefined8 ****)appuStack_4c0;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_478);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    ppppuVar6 = (undefined8 ****)appuStack_4c0;
    func_0x0001072c9c34();
    func_0x000107539d2c();
    pppuVar15 = (undefined8 ***)*pppuVar11;
    ppppuVar6[1] = (undefined8 ***)pppuVar11[1];
    *ppppuVar6 = pppuVar15;
    *pppuVar11 = (undefined8 **)0x0;
    pppuVar11[1] = (undefined8 **)0x0;
    *(undefined1 *)(ppppuVar6 + 2) = 1;
    func_0x000107284cf0(ppppuVar6 + 3,puVar12);
    return ppppuVar6;
  }
  return ppppuVar6;
}



/* Entry: 107538f54; end: 107538fe7;  */

undefined8 ****
FUN_107538f54(undefined8 param_1,undefined1 param_2,undefined1 *param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined1 *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ***pppuVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *unaff_x19;
  undefined8 ***pppuVar12;
  undefined8 ***pppuVar13;
  undefined8 *apuStack_328 [2];
  byte bStack_318;
  undefined8 *apuStack_310 [2];
  undefined8 **appuStack_300 [9];
  undefined8 uStack_2b8;
  undefined1 auStack_260 [80];
  undefined1 auStack_210 [80];
  undefined1 auStack_1c0 [80];
  undefined8 ***apppuStack_170 [10];
  byte bStack_120;
  undefined8 uStack_118;
  undefined8 **ppuStack_b8;
  undefined1 uStack_b0;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107539cb8();
  ppppuVar4 = (undefined8 ****)0xb8;
  uStack_48 = extraout_x8;
  __Znwm();
  uStack_50 = 1;
  ppppuVar7 = (undefined8 ****)&ppuStack_b8;
  ppppuVar5 = ppppuVar4;
  uStack_b0 = param_2;
  FUN_107539ae8();
  *unaff_x19 = ppppuVar4;
  func_0x000107539efc();
  func_0x000107539ca4(uStack_48);
  if ((bool)in_ZR) {
    return ppppuVar5;
  }
  ___stack_chk_fail();
  func_0x000107539efc();
  __ZdlPv(ppppuVar4);
  func_0x000107539d2c();
  puVar11 = auStack_260;
  puVar6 = auStack_260;
  ppppuVar8 = ppppuVar7;
  puVar10 = param_3;
  func_0x000107539cb8();
  uStack_118 = extraout_x8_00;
  func_0x000107539dc0(apppuStack_170,ppppuVar8 + 1);
  func_0x000107539fbc();
  ppppuVar4 = apppuStack_170;
  func_0x0001072f5f6c();
  if ((bStack_120 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x00010753a004();
    func_0x000107539df8();
    if (ppppuVar4 == (undefined8 ****)0x0) {
      puVar10 = param_4 + 0x40;
      FUN_107538f54(apppuStack_170,0,puVar10);
      ppppuVar8 = apppuStack_170;
      func_0x0001075393b8(ppppuVar5);
      ppppuVar4 = (undefined8 ****)apppuStack_170[0];
      apppuStack_170[0] = (undefined8 ****)0x0;
      if (ppppuVar4 != (undefined8 ****)0x0) {
        func_0x000107539cec();
      }
    }
    else {
      func_0x000107539fec();
      iVar3 = (int)ppppuVar4;
      func_0x000107539d34();
      if (iVar3 == 0) {
        func_0x000107539ff8();
        func_0x000107539d34();
        if (iVar3 == 0) {
          func_0x000107539f44();
          func_0x000107539e10(auStack_260);
          ppppuVar8 = apppuStack_170;
          func_0x000107539cdc();
        }
        else {
          func_0x000107539f44();
          func_0x000107539cf8(auStack_210);
          ppppuVar8 = apppuStack_170;
          puVar11 = auStack_210;
          func_0x000107539cdc();
          puVar6 = auStack_210;
        }
      }
      else {
        func_0x000107539f44();
        func_0x000107539cf8(auStack_1c0);
        ppppuVar8 = apppuStack_170;
        puVar11 = auStack_1c0;
        func_0x000107539cdc();
        puVar6 = auStack_1c0;
      }
      func_0x000107539398(puVar6);
      ppppuVar4 = apppuStack_170;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppuVar4);
      puVar10 = puVar11;
    }
  }
  func_0x000107539ecc();
  func_0x000107539ca4(uStack_118);
  if ((bool)in_ZR) {
    return ppppuVar4;
  }
  ___stack_chk_fail();
  func_0x000107539dec();
  func_0x000107539398();
  ppppuVar4 = apppuStack_170;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppuVar4);
  func_0x000107539ecc();
  func_0x000107539d2c();
  func_0x000107539f04();
  func_0x000107539cb8();
  uStack_2b8 = extraout_x8_01;
  appuStack_300[0] = (undefined8 ***)0x0;
  func_0x000107539df8((*ppppuVar8)[4]);
  pppuVar13 = appuStack_300;
  FUN_107539a30(pppuVar13,ppppuVar4);
  pppuVar12 = (undefined8 ***)0x1;
  do {
    func_0x00010753a004();
    func_0x000107539df8();
    uVar2 = pppuVar12 == pppuVar13;
    if (pppuVar13 <= pppuVar12) {
      pppuVar9 = appuStack_300;
      func_0x00010753937c(ppppuVar5);
      break;
    }
    (*(code *)(*ppppuVar7)[5])(apuStack_310,ppppuVar8 + 1,pppuVar12);
    pppuVar9 = (undefined8 ***)apuStack_310;
    puVar10 = param_4;
    FUN_107537eec(apuStack_328,pppuVar9,param_4,param_3);
    func_0x0001072f5f6c(apuStack_310);
    bVar1 = bStack_318;
    if ((bStack_318 & 1) == 0) {
      *(undefined1 *)ppppuVar5 = 0;
      *(undefined1 *)(ppppuVar5 + 9) = 0;
    }
    else {
      pppuVar9 = (undefined8 ***)apuStack_328;
      func_0x0001072c995c(appuStack_300);
    }
    pppuVar13 = (undefined8 ***)apuStack_328;
    func_0x0001072c95d0();
    pppuVar12 = (undefined8 ***)((long)pppuVar12 + 1);
  } while ((bVar1 & 1) != 0);
  ppppuVar7 = (undefined8 ****)appuStack_300;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_2b8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    ppppuVar7 = (undefined8 ****)appuStack_300;
    func_0x0001072c9c34();
    func_0x000107539d2c();
    pppuVar13 = (undefined8 ***)*pppuVar9;
    ppppuVar7[1] = (undefined8 ***)pppuVar9[1];
    *ppppuVar7 = pppuVar13;
    *pppuVar9 = (undefined8 **)0x0;
    pppuVar9[1] = (undefined8 **)0x0;
    *(undefined1 *)(ppppuVar7 + 2) = 1;
    func_0x000107284cf0(ppppuVar7 + 3,puVar10);
    return ppppuVar7;
  }
  return ppppuVar7;
}



/* Entry: 107538fe8; end: 1075391e7;  */

undefined8 ****
FUN_107538fe8(undefined8 param_1,undefined8 ****param_2,undefined1 *param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  undefined8 ****ppppuVar4;
  undefined1 *puVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***pppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *unaff_x19;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 *apuStack_268 [2];
  byte bStack_258;
  undefined8 *apuStack_250 [2];
  undefined8 **appuStack_240 [9];
  undefined8 uStack_1f8;
  undefined1 auStack_1a0 [80];
  undefined1 auStack_150 [80];
  undefined1 auStack_100 [80];
  undefined8 ***apppuStack_b0 [10];
  byte bStack_60;
  undefined8 uStack_58;
  
  puVar9 = auStack_1a0;
  puVar5 = auStack_1a0;
  ppppuVar6 = param_2;
  puVar8 = param_3;
  func_0x000107539cb8();
  uStack_58 = extraout_x8;
  func_0x000107539dc0(apppuStack_b0,ppppuVar6 + 1);
  func_0x000107539fbc();
  ppppuVar4 = apppuStack_b0;
  func_0x0001072f5f6c();
  if ((bStack_60 & 1) == 0) {
    func_0x000107539ebc();
    func_0x000107539e54();
  }
  else {
    func_0x00010753a004();
    func_0x000107539df8();
    if (ppppuVar4 == (undefined8 ****)0x0) {
      puVar8 = param_4 + 0x40;
      FUN_107538f54(apppuStack_b0,0,puVar8);
      ppppuVar6 = apppuStack_b0;
      func_0x0001075393b8();
      ppppuVar4 = (undefined8 ****)apppuStack_b0[0];
      apppuStack_b0[0] = (undefined8 ****)0x0;
      if (ppppuVar4 != (undefined8 ****)0x0) {
        func_0x000107539cec();
      }
    }
    else {
      func_0x000107539fec();
      iVar3 = (int)ppppuVar4;
      func_0x000107539d34();
      if (iVar3 == 0) {
        func_0x000107539ff8();
        func_0x000107539d34();
        if (iVar3 == 0) {
          func_0x000107539f44();
          func_0x000107539e10(auStack_1a0);
          ppppuVar6 = apppuStack_b0;
          func_0x000107539cdc();
        }
        else {
          func_0x000107539f44();
          func_0x000107539cf8(auStack_150);
          ppppuVar6 = apppuStack_b0;
          puVar9 = auStack_150;
          func_0x000107539cdc();
          puVar5 = auStack_150;
        }
      }
      else {
        func_0x000107539f44();
        func_0x000107539cf8(auStack_100);
        ppppuVar6 = apppuStack_b0;
        puVar9 = auStack_100;
        func_0x000107539cdc();
        puVar5 = auStack_100;
      }
      func_0x000107539398(puVar5);
      ppppuVar4 = apppuStack_b0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppuVar4);
      puVar8 = puVar9;
    }
  }
  func_0x000107539ecc();
  func_0x000107539ca4(uStack_58);
  if ((bool)in_ZR) {
    return ppppuVar4;
  }
  ___stack_chk_fail();
  func_0x000107539dec();
  func_0x000107539398();
  ppppuVar4 = apppuStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppuVar4);
  func_0x000107539ecc();
  func_0x000107539d2c();
  func_0x000107539f04();
  func_0x000107539cb8();
  uStack_1f8 = extraout_x8_00;
  appuStack_240[0] = (undefined8 ***)0x0;
  func_0x000107539df8((*ppppuVar6)[4]);
  pppuVar11 = appuStack_240;
  FUN_107539a30(pppuVar11,ppppuVar4);
  pppuVar10 = (undefined8 ***)0x1;
  do {
    func_0x00010753a004();
    func_0x000107539df8();
    uVar2 = pppuVar10 == pppuVar11;
    if (pppuVar11 <= pppuVar10) {
      pppuVar7 = appuStack_240;
      func_0x00010753937c();
      break;
    }
    (*(code *)(*param_2)[5])(apuStack_250,ppppuVar6 + 1,pppuVar10);
    pppuVar7 = (undefined8 ***)apuStack_250;
    puVar8 = param_4;
    FUN_107537eec(apuStack_268,pppuVar7,param_4,param_3);
    func_0x0001072f5f6c(apuStack_250);
    bVar1 = bStack_258;
    if ((bStack_258 & 1) == 0) {
      *unaff_x19 = 0;
      unaff_x19[0x48] = 0;
    }
    else {
      pppuVar7 = (undefined8 ***)apuStack_268;
      func_0x0001072c995c(appuStack_240);
    }
    pppuVar11 = (undefined8 ***)apuStack_268;
    func_0x0001072c95d0();
    pppuVar10 = (undefined8 ***)((long)pppuVar10 + 1);
  } while ((bVar1 & 1) != 0);
  ppppuVar4 = (undefined8 ****)appuStack_240;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_1f8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    ppppuVar4 = (undefined8 ****)appuStack_240;
    func_0x0001072c9c34();
    func_0x000107539d2c();
    pppuVar11 = (undefined8 ***)*pppuVar7;
    ppppuVar4[1] = (undefined8 ***)pppuVar7[1];
    *ppppuVar4 = pppuVar11;
    *pppuVar7 = (undefined8 **)0x0;
    pppuVar7[1] = (undefined8 **)0x0;
    *(undefined1 *)(ppppuVar4 + 2) = 1;
    func_0x000107284cf0(ppppuVar4 + 3,puVar8);
    return ppppuVar4;
  }
  return ppppuVar4;
}



/* Entry: 1075391e8; end: 107539323;  */

undefined8 * FUN_1075391e8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 auStack_c8 [2];
  byte bStack_b8;
  undefined8 auStack_b0 [2];
  undefined8 auStack_a0 [9];
  undefined8 uStack_58;
  
  func_0x000107539f04();
  func_0x000107539cb8();
  auStack_a0[0] = 0;
  uStack_58 = extraout_x8;
  func_0x000107539df8(*(undefined8 *)(*param_2 + 0x20));
  puVar3 = auStack_a0;
  FUN_107539a30(puVar3,param_1);
  puVar5 = (undefined8 *)0x1;
  do {
    func_0x00010753a004();
    func_0x000107539df8();
    uVar2 = puVar5 == puVar3;
    if (puVar3 <= puVar5) {
      puVar4 = auStack_a0;
      func_0x00010753937c();
      break;
    }
    (**(code **)(*unaff_x22 + 0x28))(auStack_b0,param_2 + 1,puVar5);
    puVar4 = auStack_b0;
    param_3 = unaff_x21;
    FUN_107537eec(auStack_c8);
    func_0x0001072f5f6c(auStack_b0);
    bVar1 = bStack_b8;
    if ((bStack_b8 & 1) == 0) {
      *unaff_x19 = 0;
      unaff_x19[0x48] = 0;
    }
    else {
      puVar4 = auStack_c8;
      func_0x0001072c995c(auStack_a0);
    }
    puVar3 = auStack_c8;
    func_0x0001072c95d0();
    puVar5 = (undefined8 *)((long)puVar5 + 1);
  } while ((bVar1 & 1) != 0);
  puVar3 = auStack_a0;
  func_0x0001072c9c34();
  func_0x000107539ca4(uStack_58);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    puVar3 = auStack_a0;
    func_0x0001072c9c34();
    func_0x000107539d2c();
    uVar6 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar6;
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined1 *)(puVar3 + 2) = 1;
    func_0x000107284cf0(puVar3 + 3,param_3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 107539324; end: 10753935f;  */

undefined8 * FUN_107539324(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  func_0x000107284cf0(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 107539360; end: 1075393d3;  */

void FUN_107539360(long param_1)

{
  func_0x000107284c9c();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 1075393d4; end: 107539433;  */

void FUN_1075393d4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000107539fe0();
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    *puVar1 = &PTR_FUN_1109ba2d0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = lVar2;
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  *unaff_x20 = 0;
  return;
}



/* Entry: 107539434; end: 107539437;  */

void FUN_107539434(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107539438; end: 10753944b;  */

void FUN_107539438(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10753944c; end: 107539463;  */

void FUN_10753944c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010753945c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 107539464; end: 10753949b;  */

long FUN_107539464(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109ba310);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10753949c; end: 10753949f;  */

void FUN_10753949c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075394a0; end: 1075394c7;  */

void FUN_1075394a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1075394c8(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1075394c8; end: 10753953f;  */

long FUN_1075394c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107539ccc();
  uStack_38 = extraout_x8;
  FUN_107539540(auStack_50,1);
  FUN_107539590(lStack_40,param_2,param_3);
  func_0x000107539f14();
  func_0x000107539730();
  func_0x000107539ca4(uStack_38);
  if ((bool)in_ZR) {
    return lStack_40;
  }
  ___stack_chk_fail();
  func_0x000107539dec();
  func_0x000107539730();
  lVar1 = lStack_40;
  func_0x000107539d2c();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  FUN_107539568();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 107539540; end: 107539567;  */

long FUN_107539540(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_107539568();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107539568; end: 10753958f;  */

undefined8 * FUN_107539568(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x186186186186187) {
    puVar1 = (undefined8 *)(param_2 * 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109ba330;
  param_1[1] = 0;
  FUN_1075395f0(param_1 + 3);
  return param_1;
}



/* Entry: 107539590; end: 1075395cf;  */

undefined8 * FUN_107539590(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109ba330;
  param_1[1] = 0;
  FUN_1075395f0(param_1 + 3);
  return param_1;
}



/* Entry: 1075395d0; end: 1075395d3;  */

void FUN_1075395d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ba330;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1075395d4; end: 1075395e7;  */

void FUN_1075395d4(void)

{
  FUN_107539724();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075395e8; end: 1075395ef;  */

void FUN_1075395e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107539f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1075395f0; end: 107539643;  */

undefined8 FUN_1075395f0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  undefined8 uStack_98;
  undefined8 uStack_28;
  
  func_0x000107539cb8();
  func_0x000107539d50();
  func_0x000107539fc8();
  FUN_107539644();
  func_0x000107539d84();
  func_0x000107539ca4(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107539d84();
    func_0x000107539d2c();
    func_0x000107539cb8();
    func_0x000107539d50();
    func_0x000107539fc8();
    FUN_1075396a4();
    func_0x000107539d84();
    func_0x000107539f38();
    func_0x000107539ca4(uStack_98);
    unaff_x19 = param_1;
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107539ef0();
      FUN_1075396fc();
      func_0x000107539d8c();
      func_0x000107539fe0();
      func_0x0001072c9e90(param_2);
      func_0x000107539e84();
      func_0x0001072c9f9c();
      func_0x000107539e08();
      func_0x000107539e38(&UNK_1109be198);
      return param_1;
    }
  }
  return unaff_x19;
}



/* Entry: 107539644; end: 1075396a3;  */

void FUN_107539644(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 uStack_28;
  
  func_0x000107539cb8();
  func_0x000107539d50();
  func_0x000107539fc8();
  FUN_1075396a4();
  func_0x000107539d84();
  func_0x000107539f38();
  func_0x000107539ca4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107539ef0();
  FUN_1075396fc();
  func_0x000107539d8c();
  func_0x000107539fe0();
  func_0x0001072c9e90(param_2);
  func_0x000107539e84();
  func_0x0001072c9f9c();
  func_0x000107539e08();
  func_0x000107539e38(&UNK_1109be198);
  return;
}



/* Entry: 1075396a4; end: 1075396fb;  */

void FUN_1075396a4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107539fe0();
  func_0x0001072c9e90(param_2);
  func_0x000107539e84();
  func_0x0001072c9f9c();
  func_0x000107539e08();
  func_0x000107539e38(&UNK_1109be198);
  return;
}


