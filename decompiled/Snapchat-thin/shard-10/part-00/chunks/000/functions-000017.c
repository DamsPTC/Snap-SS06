/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107350db4; end: 107350ddb;  */

void FUN_107350db4(undefined8 param_1)

{
  func_0x0001073519f4();
  func_0x000107351970(param_1,&PTR_DAT_1109a4988);
  func_0x0001073518b8();
  return;
}



/* Entry: 107350ddc; end: 107350de7;  */

undefined ** FUN_107350ddc(void)

{
  return &PTR_DAT_1109a4988;
}



/* Entry: 107350de8; end: 107350e1f;  */

void FUN_107350de8(void)

{
  func_0x000107351b54();
  func_0x000107351880(&PTR_FUN_1109a48a8);
  func_0x00010734da0c();
  return;
}



/* Entry: 107350e20; end: 107350ef3;  */

long FUN_107350e20(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 107350ef4; end: 107350f4f;  */

void FUN_107350ef4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_107350e20();
  if (lVar1 != 0) {
    func_0x000107350f24(param_1,lVar1);
  }
  return;
}



/* Entry: 107350f50; end: 107351043;  */

void FUN_107350f50(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_107351004;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_107351004;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_107351004:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 107351044; end: 107351067;  */

undefined8 FUN_107351044(undefined8 param_1)

{
  FUN_107351068(param_1,0);
  return param_1;
}



/* Entry: 107351068; end: 10735107f;  */

void FUN_107351068(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x0001073064c0(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 107351080; end: 1073510c3;  */

void FUN_107351080(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001073064c0(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1073510c4; end: 1073510cb;  */

void FUN_1073510c4(void)

{
  return;
}



/* Entry: 1073510cc; end: 1073510ef;  */

void FUN_1073510cc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1109a4918;
  return;
}



/* Entry: 1073510f0; end: 107351117;  */

void FUN_1073510f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a4918;
  return;
}



/* Entry: 107351118; end: 10735113f;  */

void FUN_107351118(undefined8 param_1)

{
  func_0x0001073519f4();
  func_0x000107351970(param_1,&PTR_DAT_1109a4978);
  func_0x0001073518b8();
  return;
}



/* Entry: 107351140; end: 10735114b;  */

undefined ** FUN_107351140(void)

{
  return &PTR_DAT_1109a4978;
}



/* Entry: 10735114c; end: 10735117f;  */

long FUN_10735114c(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_107351180(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 107351180; end: 1073513a3;  */

undefined1  [16] FUN_107351180(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x27;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *aplStack_78 [3];
  
  func_0x000107351a14();
  func_0x000100102e7c();
  uVar7 = unaff_x19[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      unaff_x27 = uVar8 & param_1;
    }
    else {
      unaff_x27 = param_1;
      if (uVar7 <= param_1) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = param_1 / uVar7;
        }
        unaff_x27 = param_1 - uVar3 * uVar7;
      }
    }
    plVar6 = *(long **)(*unaff_x19 + unaff_x27 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_10735124c;
          uVar3 = plVar6[1];
          if (uVar3 != param_1) break;
          plVar5 = plVar6 + 2;
          func_0x0001000e107c(plVar5,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar2 = 0;
            goto LAB_107351374;
          }
        }
        if ((uVar7 & uVar8) == 0) {
          uVar3 = uVar3 & uVar8;
        }
        else if (uVar7 <= uVar3) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar3 / uVar7;
          }
          uVar3 = uVar3 - uVar1 * uVar7;
        }
      } while (uVar3 == unaff_x27);
    }
  }
LAB_10735124c:
  FUN_1073513a4(aplStack_78);
  if ((uVar7 == 0) || (*(float *)(unaff_x19 + 4) * (float)uVar7 < (float)(unaff_x19[3] + 1))) {
    func_0x000107351a7c(uVar7 << 1);
    FUN_107351418();
    uVar7 = unaff_x19[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x27 = uVar7 - 1 & param_1;
    }
    else {
      unaff_x27 = param_1;
      if (uVar7 <= param_1) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = param_1 / uVar7;
        }
        unaff_x27 = param_1 - uVar8 * uVar7;
      }
    }
  }
  plVar6 = aplStack_78[0];
  lVar4 = *unaff_x19;
  plVar5 = *(long **)(lVar4 + unaff_x27 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = unaff_x19 + 2;
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
    *(long **)(lVar4 + unaff_x27 * 8) = plVar5;
    if (*aplStack_78[0] != 0) {
      uVar8 = *(ulong *)(*aplStack_78[0] + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar3 * uVar7;
      }
      *(long **)(lVar4 + uVar8 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  unaff_x19[3] = unaff_x19[3] + 1;
  func_0x000107351dbc();
  uVar2 = 1;
LAB_107351374:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 1073513a4; end: 1073513ff;  */

void FUN_1073513a4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_107351400(puVar1 + 2,*param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 107351400; end: 107351417;  */

void FUN_107351400(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 107351418; end: 1073514c7;  */

void FUN_107351418(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  long *plVar2;
  long *plVar3;
  long *extraout_x9;
  ulong uVar4;
  ulong extraout_x10;
  ulong uVar5;
  ulong uVar6;
  ulong extraout_x11;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x000107351b60();
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_107351460;
    }
    return;
  }
LAB_107351460:
  if (param_2 == 0) {
    FUN_1073515b4(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_1073515cc(plVar2);
    FUN_1073515b4(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            func_0x000107351978();
            lVar1 = extraout_x8;
            plVar2 = extraout_x9;
            uVar4 = extraout_x10;
            uVar6 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1073514c8; end: 1073515b3;  */

void FUN_1073514c8(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x11;
  
  if (param_2 == 0) {
    FUN_1073515b4(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1073515cc(plVar3);
    FUN_1073515b4(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            func_0x000107351978();
            lVar1 = extraout_x8;
            plVar3 = extraout_x9;
            uVar5 = extraout_x10;
            uVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1073515b4; end: 1073515cb;  */

void FUN_1073515b4(long *param_1,long param_2)

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



/* Entry: 1073515cc; end: 1073515e7;  */

void FUN_1073515cc(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  uVar1 = *param_1;
  *param_1 = param_2;
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073515e8; end: 1073515ff;  */

void FUN_1073515e8(long *param_1,long param_2)

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



/* Entry: 107351600; end: 1073516b3;  */

long * FUN_107351600(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10734dd44(lVar1 + 0x10);
    }
    func_0x000107351be0();
  }
  return param_1;
}



/* Entry: 1073516b4; end: 1073516c7;  */

void FUN_1073516b4(void)

{
  func_0x000107351688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073516c8; end: 1073516ff;  */

undefined8 FUN_1073516c8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  __Znwm(0x58);
  FUN_107351808();
  return uVar1;
}



/* Entry: 107351700; end: 107351723;  */

void FUN_107351700(long param_1,undefined8 param_2)

{
  func_0x000107351a08(param_2,param_1 + 8);
  func_0x000107351880(&PTR_SUB_1109a49a8);
  func_0x000107351ba0();
  FUN_10734da34();
  return;
}



/* Entry: 107351724; end: 1073517d3;  */

void FUN_107351724(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_60 [24];
  char cStack_48;
  
  func_0x000107351b08();
  iVar2 = (int)unaff_x20 + 8;
  func_0x00010734e81c();
  if (iVar2 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    puVar1 = *(undefined4 **)(unaff_x20 + 0x48);
    for (puVar5 = *(undefined4 **)(unaff_x20 + 0x40); puVar5 != puVar1; puVar5 = puVar5 + 0x12) {
      FUN_10734d5e0(auStack_60,uVar4,*puVar5);
      if (cStack_48 == '\x01') {
        puVar3 = auStack_60;
        func_0x0001000e107c(puVar3,unaff_x20 + 0x28);
        if ((int)puVar3 != 0) goto LAB_107351788;
      }
      else {
LAB_107351788:
        FUN_10734fbc8(*(undefined8 *)(puVar5 + 0x10));
      }
      func_0x000107351c38();
    }
  }
  func_0x0001073519ec();
  return;
}



/* Entry: 1073517d4; end: 1073517fb;  */

void FUN_1073517d4(undefined8 param_1)

{
  func_0x0001073519f4();
  func_0x000107351970(param_1,&PTR_DAT_1109a4a08);
  func_0x0001073518b8();
  return;
}



/* Entry: 1073517fc; end: 107351807;  */

undefined ** FUN_1073517fc(void)

{
  return &PTR_DAT_1109a4a08;
}



/* Entry: 107351808; end: 107351843;  */

void FUN_107351808(void)

{
  func_0x000107351a08();
  func_0x000107351880(&PTR_SUB_1109a49a8);
  func_0x000107351ba0();
  FUN_10734da34();
  return;
}



/* Entry: 107351844; end: 107351e53;  */

void FUN_107351844(void)

{
  return;
}



/* Entry: 107351e54; end: 107352267;  */

void FUN_107351e54(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long **pplVar2;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long *plVar3;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  ulong uVar4;
  long extraout_x9_00;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long unaff_x20;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  undefined4 uStack_b0;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  ulong uStack_88;
  undefined4 uStack_80;
  long alStack_70 [2];
  
  func_0x0001009eba74();
  func_0x0001073608bc();
  *param_1 = extraout_x8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  plVar15 = (long *)(param_3 + 0x10);
  do {
    do {
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)(param_4 + 0x10);
        while (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0) {
          if ((ulong)*(byte *)(plVar15 + 2) <
              (ulong)((*(long *)(unaff_x20 + 0x10) - *(long *)(unaff_x20 + 8)) / 0x28)) {
            plVar14 = plVar15 + 5;
            while (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0) {
              FUN_1073524bc(*(long *)(unaff_x20 + 0x20) + (ulong)*(byte *)(plVar15 + 2) * 0x28,
                            plVar14 + 2);
              func_0x0001072ed100();
            }
          }
        }
        return;
      }
      func_0x000107360bcc(*(undefined1 *)(plVar15 + 2));
    } while (!(bool)in_CY || (bool)in_ZR);
    plVar14 = *(long **)(extraout_x9 + (extraout_x8_00 & 0xffffffff) * 0x28 + 0x10);
    while (plVar14 != (long *)0x0) {
      lVar8 = (long)(plVar15 + 3);
      FUN_10735d3c4(lVar8,plVar14 + 2);
      if (lVar8 == 0) {
        FUN_10735d488(&plStack_a0);
        plVar3 = (long *)(*(long *)(unaff_x20 + 8) + (ulong)*(byte *)(plVar15 + 2) * 0x28);
        uVar5 = plVar3[1];
        uVar4 = plVar14[1];
        uVar7 = uVar5 - 1;
        if ((uVar5 & uVar7) == 0) {
          uVar4 = uVar7 & uVar4;
        }
        else if (uVar5 <= uVar4) {
          uVar9 = 0;
          if (uVar5 != 0) {
            uVar9 = uVar4 / uVar5;
          }
          uVar4 = uVar4 - uVar9 * uVar5;
        }
        plVar13 = (long *)*plVar14;
        lVar8 = *plVar3;
        plVar10 = *(long **)(lVar8 + uVar4 * 8);
        do {
          plVar6 = plVar10;
          plVar10 = (long *)*plVar6;
        } while ((long *)*plVar6 != plVar14);
        plStack_98 = plVar3 + 2;
        in_CY = plStack_98 <= plVar6;
        in_ZR = true;
        plVar10 = plVar13;
        if (plVar6 == plStack_98) {
LAB_107351f70:
          if (plVar13 == (long *)0x0) {
LAB_107351fa8:
            *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
            plVar10 = (long *)*plVar14;
            goto LAB_107351fb0;
          }
          uVar9 = plVar13[1];
          if ((uVar5 & uVar7) == 0) {
            uVar11 = uVar9 & uVar7;
          }
          else {
            uVar11 = uVar9;
            if (uVar5 <= uVar9) {
              uVar11 = 0;
              if (uVar5 != 0) {
                uVar11 = uVar9 / uVar5;
              }
              uVar11 = uVar9 - uVar11 * uVar5;
            }
          }
          in_CY = uVar4 <= uVar11;
          in_ZR = uVar11 == uVar4;
          if (!(bool)in_ZR) goto LAB_107351fa8;
LAB_107351fb8:
          if ((uVar5 & uVar7) == 0) {
            uVar9 = uVar9 & uVar7;
          }
          else if (uVar5 <= uVar9) {
            uVar7 = 0;
            if (uVar5 != 0) {
              uVar7 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar7 * uVar5;
          }
          in_CY = uVar4 <= uVar9;
          in_ZR = uVar9 == uVar4;
          if (!(bool)in_ZR) {
            *(long **)(lVar8 + uVar9 * 8) = plVar6;
            plVar10 = (long *)*plVar14;
          }
        }
        else {
          uVar9 = plVar6[1];
          if ((uVar5 & uVar7) == 0) {
            uVar9 = uVar9 & uVar7;
          }
          else if (uVar5 <= uVar9) {
            uVar11 = 0;
            if (uVar5 != 0) {
              uVar11 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar11 * uVar5;
          }
          in_CY = uVar4 <= uVar9;
          in_ZR = uVar9 == uVar4;
          if (!(bool)in_ZR) goto LAB_107351f70;
LAB_107351fb0:
          if (plVar10 != (long *)0x0) {
            uVar9 = plVar10[1];
            goto LAB_107351fb8;
          }
        }
        *plVar6 = (long)plVar10;
        *plVar14 = 0;
        plVar3[3] = plVar3[3] + -1;
        plStack_90 = (long *)0x1;
        plStack_a0 = plVar14;
        func_0x000107358bc0(&plStack_a0);
        *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + (ulong)*(byte *)(plVar15 + 2) * 8) =
             *(undefined8 *)(unaff_x20 + 0x50);
        plVar14 = plVar13;
      }
      else {
        plVar14 = (long *)*plVar14;
      }
    }
    plVar14 = plVar15 + 5;
    while (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0) {
      pbVar12 = (byte *)(plVar14 + 2);
      func_0x000107360bcc(*pbVar12);
      if ((bool)in_CY && !(bool)in_ZR) {
        plVar3 = (long *)(extraout_x9_00 + (extraout_x8_01 & 0xffffffff) * 0x28);
        FUN_107352268(plVar3,pbVar12);
        plStack_98 = (long *)0x0;
        plStack_a0 = (long *)0x0;
        uStack_88 = 0;
        plStack_90 = (long *)0x0;
        uStack_80 = 0x3f800000;
        func_0x0001009ebaf4();
        FUN_107359390(&plStack_a0,extraout_x8_02 >> 4);
        lVar1 = plVar3[1];
        for (lVar8 = *plVar3; lVar8 != lVar1; lVar8 = lVar8 + 0x10) {
          FUN_1073558a4(&lStack_d0,lVar8);
          if (lStack_d0 != 0) {
            FUN_1073594c0(&plStack_a0);
          }
          func_0x000107360638();
        }
        uStack_c8 = 0;
        lStack_d0 = 0;
        uStack_b8 = 0;
        plStack_c0 = (long *)0x0;
        uStack_b0 = 0x3f800000;
        FUN_107359390(&lStack_d0,plVar14[5] - plVar14[4] >> 4);
        lVar1 = plVar14[5];
        for (lVar8 = plVar14[4]; lVar8 != lVar1; lVar8 = lVar8 + 0x10) {
          FUN_1073558a4(alStack_70,lVar8);
          if (alStack_70[0] != 0) {
            FUN_1073594c0(&lStack_d0);
          }
          func_0x00010735ce54(alStack_70);
        }
        in_CY = uStack_b8 <= uStack_88;
        in_ZR = uStack_88 == uStack_b8;
        plVar3 = plStack_90;
        if ((bool)in_ZR) {
          for (; plVar10 = plStack_c0, plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
            plVar10 = &lStack_d0;
            FUN_1073592c4(plVar10,plVar3 + 2);
            if ((int)plVar10 == 0) goto LAB_107352160;
          }
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            pplVar2 = &plStack_a0;
            FUN_1073592c4(pplVar2,plVar10 + 2);
            if ((int)pplVar2 == 0) goto LAB_107352160;
          }
          func_0x000107360a20();
          func_0x000107360a40();
        }
        else {
LAB_107352160:
          func_0x000107360a20();
          func_0x000107360a40();
          FUN_107352268(*(long *)(unaff_x20 + 8) + (ulong)*pbVar12 * 0x28,pbVar12);
          FUN_107352400();
          func_0x00010736042c(&plStack_a0);
          FUN_10735d488();
        }
        *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + (ulong)*pbVar12 * 8) =
             *(undefined8 *)(unaff_x20 + 0x50);
      }
    }
  } while( true );
}



/* Entry: 107352268; end: 1073523ff;  */

undefined8 *
FUN_107352268(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 *extraout_x9_01;
  ulong extraout_x10;
  long *unaff_x19;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *unaff_x24;
  ulong uVar8;
  
  func_0x000107360cc8();
  func_0x00010736067c();
  func_0x00010784b234();
  puVar7 = (undefined8 *)unaff_x19[1];
  puVar3 = param_3;
  if (puVar7 != (undefined8 *)0x0) {
    uVar8 = (long)puVar7 - 1;
    if (((ulong)puVar7 & uVar8) == 0) {
      unaff_x24 = (undefined8 *)((long)puVar7 + 0x7fffffffffffffffU & (ulong)param_3);
      in_ZR = 1;
      in_NG = 0;
    }
    else {
      in_NG = (long)param_3 - (long)puVar7 < 0;
      in_ZR = param_3 == puVar7;
      unaff_x24 = param_3;
      if (puVar7 <= param_3) {
        func_0x000107360b6c();
      }
    }
    puVar6 = *(undefined8 **)(*unaff_x19 + (long)unaff_x24 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      do {
        while( true ) {
          puVar6 = (undefined8 *)*puVar6;
          if (puVar6 == (undefined8 *)0x0) goto LAB_107352320;
          puVar4 = (undefined8 *)puVar6[1];
          in_NG = (long)puVar4 - (long)param_3 < 0;
          in_ZR = puVar4 == param_3;
          if (!(bool)in_ZR) break;
          puVar3 = puVar6 + 2;
          func_0x00010726b840(puVar3,param_4);
          if (((ulong)puVar3 & 1) != 0) goto LAB_1073523e8;
        }
        if (((ulong)puVar7 & uVar8) == 0) {
          puVar4 = (undefined8 *)((ulong)puVar4 & uVar8);
        }
        else if (puVar7 <= puVar4) {
          uVar1 = 0;
          if (puVar7 != (undefined8 *)0x0) {
            uVar1 = (ulong)puVar4 / (ulong)puVar7;
          }
          puVar4 = (undefined8 *)((long)puVar4 - uVar1 * (long)puVar7);
        }
        in_NG = (long)puVar4 - (long)unaff_x24 < 0;
        in_ZR = puVar4 == unaff_x24;
      } while ((bool)in_ZR);
    }
  }
LAB_107352320:
  func_0x000107360490();
  puVar6 = puVar3;
  func_0x0001073606f4();
  *puVar6 = 0;
  puVar6[1] = param_3;
  puVar6[2] = *param_4;
  *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(param_4 + 1);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[4] = 0;
  func_0x00010735fe38();
  if ((puVar7 == (undefined8 *)0x0) ||
     (func_0x00010736013c(param_1,param_2,(float)puVar7), puVar6 = unaff_x24, (bool)in_NG)) {
    func_0x00010735fe64();
    uVar2 = puVar7 == (undefined8 *)0x3;
    func_0x00010735fd34();
    FUN_107358bf4();
    func_0x000107360704();
    if ((bool)uVar2) {
      in_ZR = 1;
      puVar6 = (undefined8 *)((long)puVar7 + 0x7fffffffffffffffU & (ulong)param_3);
    }
    else {
      in_ZR = param_3 == puVar7;
      puVar6 = param_3;
      if (puVar7 <= param_3) {
        func_0x000107360b6c();
        puVar6 = unaff_x24;
      }
    }
  }
  if (*(long *)(*unaff_x19 + (long)puVar6 * 8) == 0) {
    func_0x00010736080c();
    if (extraout_x9 != 0) {
      func_0x0001073606d4();
      lVar5 = extraout_x8;
      if ((bool)in_ZR) {
        puVar6 = (undefined8 *)((ulong)extraout_x9_00 & extraout_x10);
      }
      else {
        puVar6 = extraout_x9_00;
        if (puVar7 <= extraout_x9_00) {
          func_0x000107360b60();
          lVar5 = extraout_x8_00;
          puVar6 = extraout_x9_01;
        }
      }
      *(undefined8 **)(lVar5 + (long)puVar6 * 8) = puVar3;
    }
  }
  else {
    func_0x000107360328();
  }
  func_0x000107360180();
  func_0x000107358bc0();
  puVar6 = puVar3;
LAB_1073523e8:
  return puVar6 + 4;
}



/* Entry: 107352400; end: 1073524bb;  */

long * FUN_107352400(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    uVar3 = param_2[1] - lVar1;
    lVar2 = *param_1;
    if ((ulong)(param_1[2] - lVar2) < uVar3) {
      if (lVar2 != 0) {
        FUN_107358a1c(param_1);
        func_0x000107360598();
        func_0x0001073607e8();
      }
      FUN_1073596c8(param_1,(long)uVar3 >> 4);
      func_0x0001073607d0();
      FUN_107358adc();
      func_0x00010736042c();
    }
    else {
      if (uVar3 <= (ulong)(param_1[1] - lVar2)) {
        FUN_1073596f0(lVar1,param_2[1]);
        func_0x0001073607d0();
        FUN_107358a24();
        return param_1;
      }
      FUN_1073596f0(lVar1,lVar1 + (param_1[1] - lVar2));
    }
    FUN_107358b10();
  }
  return param_1;
}



/* Entry: 1073524bc; end: 10735263f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001073525a0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong * FUN_1073524bc(undefined8 param_1,undefined8 param_2,ulong *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  long extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  ulong extraout_x10;
  long *unaff_x19;
  ulong *puVar6;
  ulong *puVar7;
  ulong *unaff_x24;
  ulong uVar8;
  
  func_0x000107360cc8();
  func_0x00010736067c();
  func_0x00010726364c();
  puVar7 = (ulong *)unaff_x19[1];
  puVar3 = param_3;
  if (puVar7 != (ulong *)0x0) {
    uVar8 = (long)puVar7 - 1;
    if (((ulong)puVar7 & uVar8) == 0) {
      unaff_x24 = (ulong *)(uVar8 & (ulong)param_3);
      in_ZR = 1;
      in_NG = 0;
    }
    else {
      in_NG = (long)param_3 - (long)puVar7 < 0;
      in_ZR = param_3 == puVar7;
      unaff_x24 = param_3;
      if (puVar7 <= param_3) {
        func_0x000107360b6c();
      }
    }
    puVar6 = *(ulong **)(*unaff_x19 + (long)unaff_x24 * 8);
    if (puVar6 != (ulong *)0x0) {
      do {
        while( true ) {
          puVar6 = (ulong *)*puVar6;
          if (puVar6 == (ulong *)0x0) goto LAB_10735256c;
          puVar4 = (ulong *)puVar6[1];
          in_NG = (long)puVar4 - (long)param_3 < 0;
          in_ZR = puVar4 == param_3;
          if (!(bool)in_ZR) break;
          puVar3 = puVar6 + 2;
          func_0x000104c32db4(puVar3,param_4);
          if (((ulong)puVar3 & 1) != 0) goto LAB_107352628;
        }
        if (((ulong)puVar7 & uVar8) == 0) {
          puVar4 = (ulong *)((ulong)puVar4 & uVar8);
        }
        else if (puVar7 <= puVar4) {
          uVar1 = 0;
          if (puVar7 != (ulong *)0x0) {
            uVar1 = (ulong)puVar4 / (ulong)puVar7;
          }
          puVar4 = (ulong *)((long)puVar4 - uVar1 * (long)puVar7);
        }
        in_NG = (long)puVar4 - (long)unaff_x24 < 0;
        in_ZR = puVar4 == unaff_x24;
      } while ((bool)in_ZR);
    }
  }
LAB_10735256c:
  func_0x000107360488();
  func_0x0001073606f4();
  func_0x000107360918();
  puVar3[0xc] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[9] = 0;
  *(undefined4 *)(puVar3 + 0xd) = 0x3f800000;
  func_0x00010735fe38();
  if ((puVar7 == (ulong *)0x0) ||
     (func_0x00010736013c(param_1,param_2,(float)puVar7), puVar6 = unaff_x24, (bool)in_NG)) {
    func_0x00010735fe64();
    uVar2 = puVar7 == (ulong *)0x3;
    func_0x00010735fd34();
    FUN_10735919c();
    func_0x000107360704();
    if ((bool)uVar2) {
      in_ZR = 1;
      puVar6 = (ulong *)(extraout_x8 & (ulong)param_3);
    }
    else {
      in_ZR = param_3 == puVar7;
      puVar6 = param_3;
      if (puVar7 <= param_3) {
        func_0x000107360b6c();
        puVar6 = unaff_x24;
      }
    }
  }
  if (*(long *)(*unaff_x19 + (long)puVar6 * 8) == 0) {
    func_0x00010736080c();
    if (extraout_x9 != 0) {
      func_0x0001073606d4();
      lVar5 = extraout_x8_00;
      if ((bool)in_ZR) {
        puVar6 = (ulong *)((ulong)extraout_x9_00 & extraout_x10);
      }
      else {
        puVar6 = extraout_x9_00;
        if (puVar7 <= extraout_x9_00) {
          func_0x000107360b60();
          lVar5 = extraout_x8_01;
          puVar6 = extraout_x9_01;
        }
      }
      *(ulong **)(lVar5 + (long)puVar6 * 8) = puVar3;
    }
  }
  else {
    func_0x000107360328();
  }
  func_0x000107360180();
  FUN_107359168();
  puVar6 = puVar3;
LAB_107352628:
  return puVar6 + 9;
}



/* Entry: 107352640; end: 107352a67;  */

void FUN_107352640(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 extraout_x8;
  byte bVar6;
  int extraout_w10;
  long extraout_x10;
  long lVar7;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x10_02;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined1 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  ulong uVar8;
  undefined8 uVar9;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  undefined1 uStack_58;
  
  puVar3 = &uStack_80;
  func_0x000107360b40();
  func_0x000107360be0();
  *(undefined ***)(param_1 + 8) = &PTR_FUN_1109a4ba8;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 0x10);
  *(undefined8 *)(unaff_x19 + 0xd0) = 0;
  *(undefined8 *)(unaff_x19 + 200) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined4 *)(unaff_x19 + 0xd8) = 0x3f800000;
  *(undefined4 *)(unaff_x19 + 0xe0) = 0;
  func_0x000104c2fe00(unaff_x19 + 0xe8,param_2);
  uVar9 = *unaff_x24;
  *(undefined8 *)(unaff_x19 + 0x128) = unaff_x24[1];
  *(undefined8 *)(unaff_x19 + 0x120) = uVar9;
  *unaff_x24 = 0;
  unaff_x24[1] = 0;
  uVar9 = *unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x138) = unaff_x21[1];
  *(undefined8 *)(unaff_x19 + 0x130) = uVar9;
  *unaff_x21 = 0;
  unaff_x21[1] = 0;
  func_0x00010725b034(unaff_x19 + 0x140,*(undefined8 *)(unaff_x19 + 0x130));
  *(long *)(unaff_x19 + 0x150) = unaff_x19;
  *(undefined8 *)(unaff_x19 + 0x158) = **(undefined8 **)(unaff_x19 + 0x140);
  lVar5 = (*(undefined8 **)(unaff_x19 + 0x140))[1];
  *(long *)(unaff_x19 + 0x160) = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x00010736000c();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x168) = unaff_x23;
  *(undefined8 *)(unaff_x19 + 0x170) = 0;
  *(undefined8 *)(unaff_x19 + 0x178) = 0;
  *(undefined8 *)(unaff_x19 + 0x180) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x19 + 400) = 0;
  *(undefined8 *)(unaff_x19 + 0x188) = 0;
  *(undefined8 *)(unaff_x19 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x19 + 0x198) = 0;
  *(undefined8 *)(unaff_x19 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x19 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x19 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1c8) = 0;
  *(undefined4 *)(unaff_x19 + 0x1e0) = 0x3f800000;
  bVar6 = unaff_x22[1];
  if (0x15 < bVar6) {
    bVar6 = 0x16;
  }
  *(undefined1 *)(unaff_x19 + 0x1e8) = *unaff_x22;
  *(byte *)(unaff_x19 + 0x1e9) = bVar6;
  *(undefined4 *)(unaff_x19 + 0x1ec) = 0;
  *(undefined8 *)(unaff_x19 + 0x1f0) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x200) = 0;
  *(undefined8 *)(unaff_x19 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x19 + 0x210) = 0;
  *(undefined8 *)(unaff_x19 + 0x208) = 0;
  *(undefined8 *)(unaff_x19 + 0x220) = 0;
  *(undefined8 *)(unaff_x19 + 0x218) = 0;
  *(undefined8 *)(unaff_x19 + 0x230) = 0;
  *(undefined8 *)(unaff_x19 + 0x228) = 0;
  *(undefined8 *)(unaff_x19 + 0x240) = 0;
  *(undefined8 *)(unaff_x19 + 0x238) = 0;
  *(undefined8 *)(unaff_x19 + 0x250) = 0;
  *(undefined8 *)(unaff_x19 + 0x248) = 0;
  *(undefined8 *)(unaff_x19 + 600) = 0;
  __ZNSt3__119__shared_mutex_baseC1Ev(unaff_x19 + 0x260);
  func_0x0001073608bc();
  *(undefined8 *)(unaff_x19 + 0x308) = extraout_x8;
  *(undefined8 *)(unaff_x19 + 0x310) = 0;
  *(undefined8 *)(unaff_x19 + 800) = 0;
  *(undefined8 *)(unaff_x19 + 0x318) = 0;
  *(undefined8 *)(unaff_x19 + 0x328) = extraout_x8;
  *(undefined8 *)(unaff_x19 + 0x330) = 0;
  *(undefined8 *)(unaff_x19 + 0x340) = 0;
  *(undefined8 *)(unaff_x19 + 0x338) = 0;
  __ZNSt3__119__shared_mutex_baseC1Ev(unaff_x19 + 0x348);
  *(ushort *)(unaff_x19 + 0x3f0) = *(ushort *)(unaff_x19 + 0x1e8);
  puVar1 = (ulong *)(unaff_x19 + 0x3f8);
  *(undefined8 *)(unaff_x19 + 0x400) = 0;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x19 + 0x410) = 0;
  *(undefined8 *)(unaff_x19 + 0x408) = 0;
  *(undefined8 *)(unaff_x19 + 0x420) = 0;
  *(undefined8 *)(unaff_x19 + 0x418) = 0;
  *(undefined8 *)(unaff_x19 + 0x430) = 0;
  *(undefined8 *)(unaff_x19 + 0x428) = 0;
  *(undefined8 *)(unaff_x19 + 0x440) = 0;
  *(undefined8 *)(unaff_x19 + 0x438) = 0;
  uVar8 = (ulong)(*(ushort *)(unaff_x19 + 0x1e8) >> 8);
  lVar5 = uVar8 + 1;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined1 *)&uStack_80;
  func_0x000107358684(&uStack_80,lVar5);
  func_0x000107360824();
  lVar7 = extraout_x10;
  while (lVar7 != 0) {
    func_0x000107360b14();
    lVar7 = extraout_x10_00;
  }
  func_0x0001073602b4();
  FUN_1073586c0();
  func_0x000107358750(puVar1);
  *(undefined8 **)(unaff_x19 + 0x400) = puStack_78;
  *puVar1 = uStack_80;
  *(undefined8 *)(unaff_x19 + 0x408) = uStack_70;
  func_0x000107360ab8();
  func_0x000107358780();
  func_0x000107360510();
  func_0x0001073587a4(&uStack_80,lVar5);
  func_0x000107360824();
  lVar7 = extraout_x10_01;
  while (lVar7 != 0) {
    func_0x000107360b14();
    lVar7 = extraout_x10_02;
  }
  func_0x0001073602b4();
  FUN_1073587e0();
  func_0x000107358870(unaff_x19 + 0x410);
  *(undefined8 **)(unaff_x19 + 0x418) = puStack_78;
  *(ulong *)(unaff_x19 + 0x410) = uStack_80;
  *(undefined8 *)(unaff_x19 + 0x420) = uStack_70;
  func_0x000107360ab8();
  func_0x0001073588a0();
  func_0x000107360510();
  func_0x00010048ac80(&uStack_80,lVar5);
  puVar2 = puStack_78;
  for (lVar5 = uVar8 * 8 + 8; lVar5 != 0; lVar5 = lVar5 + -8) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  func_0x0001073602b4();
  func_0x00010048aeb4();
  FUN_1073588ec(unaff_x19 + 0x428,&uStack_80);
  func_0x00010048b0a4();
  *(undefined4 *)(unaff_x19 + 0x45c) = 0;
  *(undefined8 *)(unaff_x19 + 0x450) = 0;
  *(undefined8 *)(unaff_x19 + 0x448) = 0;
  *(undefined1 *)(unaff_x19 + 0x458) = 0;
  *(undefined8 *)(unaff_x19 + 0x460) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x470) = 0;
  *(undefined8 *)(unaff_x19 + 0x468) = 0;
  *(undefined8 *)(unaff_x19 + 0x480) = 0;
  *(undefined8 *)(unaff_x19 + 0x478) = 0;
  *(undefined8 *)(unaff_x19 + 0x490) = 0;
  *(undefined8 *)(unaff_x19 + 0x488) = 0;
  *(undefined8 *)(unaff_x19 + 0x498) = 0;
  *(undefined8 *)(unaff_x19 + 0x4a0) = 0x3cb0b1bb;
  *(undefined8 *)(unaff_x19 + 0x4d8) = 0;
  *(undefined1 *)(unaff_x19 + 0x4e0) = 0;
  *(undefined1 *)(unaff_x19 + 0x4e8) = 0;
  *(undefined8 *)(unaff_x19 + 0x4b0) = 0;
  *(undefined8 *)(unaff_x19 + 0x4a8) = 0;
  *(undefined8 *)(unaff_x19 + 0x4c0) = 0;
  *(undefined8 *)(unaff_x19 + 0x4b8) = 0;
  *(undefined8 *)(unaff_x19 + 0x4ca) = 0;
  *(undefined8 *)(unaff_x19 + 0x4c2) = 0;
  *(long *)(unaff_x19 + 0x4f0) = unaff_x19 + 0x140;
  *(undefined8 *)(unaff_x19 + 0x4f8) = 0;
  func_0x00010726ed14(unaff_x19 + 0x500);
  *(long *)(unaff_x19 + 0x510) = unaff_x19;
  func_0x00010785f1f4();
  uStack_80 = uStack_80 & 0xffffffff00000000;
  puVar4 = (undefined1 *)((long)puVar3 + 0x1f0);
  func_0x0001072b86c8(puVar4,&uStack_80);
  *(int *)(unaff_x19 + 0x4e4) = (int)puVar4;
  return;
}



/* Entry: 107352a68; end: 107352a6b;  */

undefined8 * FUN_107352a68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a4ba8;
  func_0x00010735d528(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 107352a6c; end: 107352b3f;  */

void FUN_107352a6c(long param_1)

{
  long unaff_x19;
  
  func_0x000107360be0();
  *(undefined1 *)(param_1 + 0x4d1) = 1;
  FUN_107352b40();
  func_0x00010735d5f8(unaff_x19 + 0x500);
  func_0x00010725b238(unaff_x19 + 0x4f0);
  func_0x00010735ce34(unaff_x19 + 0x4d8);
  __ZNSt3__118condition_variableD1Ev(unaff_x19 + 0x4a0);
  __ZNSt3__15mutexD1Ev(unaff_x19 + 0x460);
  func_0x00010735d5d4(unaff_x19 + 0x448);
  FUN_107359750(unaff_x19 + 0x3f0);
  func_0x000107276ba4(unaff_x19 + 0x348);
  func_0x000107359780(unaff_x19 + 0x308);
  func_0x000107276ba4(unaff_x19 + 0x260);
  func_0x00010735979c(unaff_x19 + 0x230);
  __ZNSt3__15mutexD1Ev(unaff_x19 + 0x1f0);
  FUN_10735d588(unaff_x19 + 0x1c0);
  __ZNSt3__15mutexD1Ev(unaff_x19 + 0x180);
  func_0x00010733f4f4(unaff_x19 + 0x170);
  func_0x00010724ae28(unaff_x19 + 0x158);
  func_0x00010724b54c(unaff_x19 + 0x140);
  func_0x00010724b8b8(unaff_x19 + 0x130);
  func_0x00010725b6e0(unaff_x19 + 0x120);
  func_0x000104c2f714(unaff_x19 + 0xe8);
  FUN_10735d4ec(unaff_x19 + 8);
  return;
}



/* Entry: 107352b40; end: 107352b7b;  */

void FUN_107352b40(long param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x00010736002c(param_1 + 0x460);
  __ZNSt3__15mutex4lockEv();
  *(undefined1 *)(param_1 + 0x4d0) = 0;
  __ZNSt3__118condition_variable10notify_oneEv(param_1 + 0x4a0);
  func_0x0001000df5a0(auStack_30);
  return;
}



/* Entry: 107352b7c; end: 107352b7f;  */

void FUN_107352b7c(long param_1)

{
  long unaff_x19;
  
  func_0x000107360be0();
  *(undefined1 *)(param_1 + 0x4d1) = 1;
  FUN_107352b40();
  func_0x00010735d5f8(unaff_x19 + 0x500);
  func_0x00010725b238(unaff_x19 + 0x4f0);
  func_0x00010735ce34(unaff_x19 + 0x4d8);
  __ZNSt3__118condition_variableD1Ev(unaff_x19 + 0x4a0);
  __ZNSt3__15mutexD1Ev(unaff_x19 + 0x460);
  func_0x00010735d5d4(unaff_x19 + 0x448);
  FUN_107359750(unaff_x19 + 0x3f0);
  func_0x000107276ba4(unaff_x19 + 0x348);
  func_0x000107359780(unaff_x19 + 0x308);
  func_0x000107276ba4(unaff_x19 + 0x260);
  func_0x00010735979c(unaff_x19 + 0x230);
  __ZNSt3__15mutexD1Ev(unaff_x19 + 0x1f0);
  FUN_10735d588(unaff_x19 + 0x1c0);
  __ZNSt3__15mutexD1Ev(unaff_x19 + 0x180);
  func_0x00010733f4f4(unaff_x19 + 0x170);
  func_0x00010724ae28(unaff_x19 + 0x158);
  func_0x00010724b54c(unaff_x19 + 0x140);
  func_0x00010724b8b8(unaff_x19 + 0x130);
  func_0x00010725b6e0(unaff_x19 + 0x120);
  func_0x000104c2f714(unaff_x19 + 0xe8);
  FUN_10735d4ec(unaff_x19 + 8);
  return;
}



/* Entry: 107352b80; end: 107352b93;  */

void FUN_107352b80(void)

{
  FUN_107352a6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107352b94; end: 107352c2b;  */

long * FUN_107352b94(void)

{
  undefined1 in_ZR;
  long *plVar1;
  code *extraout_x8;
  long *unaff_x19;
  long alStack_a8 [2];
  long alStack_98 [14];
  undefined8 uStack_28;
  
  func_0x00010735fd4c();
  func_0x00010726933c(alStack_98);
  plVar1 = alStack_a8;
  func_0x0001072c00d0(plVar1,alStack_98,1);
  func_0x0001009ebb10(*(undefined8 *)(*unaff_x19 + 0x18));
  (*extraout_x8)();
  func_0x00010726dd08(alStack_a8);
  func_0x000107269394(alStack_98);
  func_0x00010735fd20(uStack_28);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x000107360128();
  func_0x00010726dd08();
  plVar1 = alStack_98;
  func_0x000107269394();
  func_0x00010736001c();
  (**(code **)(*plVar1 + 0x48))();
  func_0x000107360320();
  return plVar1;
}



/* Entry: 107352c2c; end: 107352c7f;  */

long * FUN_107352c2c(long *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  (**(code **)(*param_1 + 0x48))(param_1,&uStack_38,param_2);
  func_0x000107360320();
  return param_1;
}



/* Entry: 107352c80; end: 107352d47;  */

long * FUN_107352c80(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  code *extraout_x8_00;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_190 [16];
  long alStack_140 [7];
  undefined8 uStack_108;
  long alStack_98 [14];
  undefined8 uStack_28;
  
  func_0x00010735fd4c();
  uVar1 = (int)*param_2 == 1;
  if ((bool)uVar1) {
    FUN_107352d48();
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x10);
  }
  else {
    if ((int)*param_2 != 0) {
      FUN_107352d84();
      plVar2 = alStack_98;
      func_0x0001072c0094(plVar2,param_2);
      func_0x0001009ebb10(*(undefined8 *)(*unaff_x19 + 0x10));
      (*extraout_x8)();
      param_2 = alStack_98;
      func_0x000107269394();
      func_0x00010735fd20(uStack_28);
      if ((bool)uVar1) {
        return plVar2;
      }
      goto LAB_107352d30;
    }
    func_0x0001072bf8d0();
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x18);
  }
  func_0x00010735fd20(uStack_28);
  if ((bool)uVar1) {
    func_0x0001073607d0();
                    /* WARNING: Could not recover jumptable at 0x000107352ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_2;
  }
LAB_107352d30:
  ___stack_chk_fail();
  func_0x000107360128();
  func_0x000107269394();
  func_0x00010736001c();
  plVar2 = param_2 + 1;
  if ((int)*param_2 != 1) {
    func_0x000107360a04();
    func_0x000107360338();
    func_0x00010735ffac();
    func_0x000107360154();
    ___cxa_free_exception();
    func_0x00010736003c();
    plVar3 = plVar2 + 1;
    uVar1 = (int)*plVar2 == 2;
    plVar2 = plVar3;
    if (!(bool)uVar1) {
      func_0x000107360a04();
      func_0x000107360338();
      func_0x00010735ffac();
      func_0x000107360154();
      ___cxa_free_exception();
      func_0x00010736003c();
      func_0x00010735fd4c();
      plVar2 = alStack_140;
      func_0x000104c2fe00();
      func_0x0001073605d0();
      func_0x0001009ebb10(*(undefined8 *)(*plVar3 + 0x30));
      (*extraout_x8_00)();
      func_0x000107360320();
      func_0x00010736053c();
      func_0x00010735fd20(uStack_108);
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        func_0x000107360128();
        func_0x00010726e078();
        func_0x00010736053c();
        func_0x00010736001c();
        func_0x00010736005c();
        FUN_107330040(auStack_190);
        (**(code **)(*unaff_x20 + 0x48))();
        func_0x00010726dd08(auStack_190);
        return unaff_x20;
      }
      return plVar2;
    }
  }
  return plVar2;
}



/* Entry: 107352d48; end: 107352d83;  */

long * FUN_107352d48(int *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  code *extraout_x8;
  long *unaff_x20;
  undefined1 auStack_f0 [16];
  long alStack_a0 [7];
  undefined8 uStack_68;
  
  plVar2 = (long *)(param_1 + 2);
  if (*param_1 != 1) {
    func_0x000107360a04();
    func_0x000107360338();
    func_0x00010735ffac();
    func_0x000107360154();
    ___cxa_free_exception();
    func_0x00010736003c();
    plVar3 = plVar2 + 1;
    uVar1 = (int)*plVar2 == 2;
    plVar2 = plVar3;
    if (!(bool)uVar1) {
      func_0x000107360a04();
      func_0x000107360338();
      func_0x00010735ffac();
      func_0x000107360154();
      ___cxa_free_exception();
      func_0x00010736003c();
      func_0x00010735fd4c();
      plVar2 = alStack_a0;
      func_0x000104c2fe00();
      func_0x0001073605d0();
      func_0x0001009ebb10(*(undefined8 *)(*plVar3 + 0x30));
      (*extraout_x8)();
      func_0x000107360320();
      func_0x00010736053c();
      func_0x00010735fd20(uStack_68);
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        func_0x000107360128();
        func_0x00010726e078();
        func_0x00010736053c();
        func_0x00010736001c();
        func_0x00010736005c();
        FUN_107330040(auStack_f0);
        (**(code **)(*unaff_x20 + 0x48))();
        func_0x00010726dd08(auStack_f0);
        return unaff_x20;
      }
      return plVar2;
    }
  }
  return plVar2;
}



/* Entry: 107352d84; end: 107352dbf;  */

long * FUN_107352d84(int *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  code *extraout_x8;
  long *unaff_x20;
  undefined1 auStack_d0 [16];
  long alStack_80 [7];
  undefined8 uStack_48;
  
  plVar2 = (long *)(param_1 + 2);
  uVar1 = *param_1 == 2;
  if ((bool)uVar1) {
    return plVar2;
  }
  func_0x000107360a04();
  func_0x000107360338();
  func_0x00010735ffac();
  func_0x000107360154();
  ___cxa_free_exception();
  func_0x00010736003c();
  func_0x00010735fd4c();
  plVar3 = alStack_80;
  func_0x000104c2fe00();
  func_0x0001073605d0();
  func_0x0001009ebb10(*(undefined8 *)(*plVar2 + 0x30));
  (*extraout_x8)();
  func_0x000107360320();
  func_0x00010736053c();
  func_0x00010735fd20(uStack_48);
  if ((bool)uVar1) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x000107360128();
  func_0x00010726e078();
  func_0x00010736053c();
  func_0x00010736001c();
  func_0x00010736005c();
  FUN_107330040(auStack_d0);
  (**(code **)(*unaff_x20 + 0x48))();
  func_0x00010726dd08(auStack_d0);
  return unaff_x20;
}



/* Entry: 107352dc0; end: 107352e37;  */

long * FUN_107352dc0(void)

{
  undefined1 in_ZR;
  long *plVar1;
  code *extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_b0 [16];
  long alStack_60 [7];
  undefined8 uStack_28;
  
  func_0x00010735fd4c();
  plVar1 = alStack_60;
  func_0x000104c2fe00();
  func_0x0001073605d0();
  func_0x0001009ebb10(*(undefined8 *)(*unaff_x19 + 0x30));
  (*extraout_x8)();
  func_0x000107360320();
  func_0x00010736053c();
  func_0x00010735fd20(uStack_28);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x000107360128();
  func_0x00010726e078();
  func_0x00010736053c();
  func_0x00010736001c();
  func_0x00010736005c();
  FUN_107330040(auStack_b0);
  (**(code **)(*unaff_x20 + 0x48))();
  func_0x00010726dd08(auStack_b0);
  return unaff_x20;
}



/* Entry: 107352e38; end: 107352e8f;  */

long * FUN_107352e38(void)

{
  long *unaff_x20;
  undefined1 auStack_30 [16];
  
  func_0x00010736005c();
  FUN_107330040(auStack_30);
  (**(code **)(*unaff_x20 + 0x48))();
  func_0x00010726dd08(auStack_30);
  return unaff_x20;
}



/* Entry: 107352e90; end: 107352f03;  */

void FUN_107352e90(undefined1 *param_1,long param_2,long param_3)

{
  func_0x00010735ffc4(param_2 + 0x260);
  param_2 = param_2 + 0x308;
  FUN_107352f04();
  if (param_2 == 0) {
    func_0x0001073601f0();
    *param_1 = 0;
    param_1[0x70] = 0;
  }
  else {
    func_0x00010726933c(param_1,*(undefined8 *)(param_3 + 0x38));
    param_1[0x70] = 1;
    func_0x0001073601f0();
  }
  return;
}



/* Entry: 107352f04; end: 107352f23;  */

void FUN_107352f04(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong extraout_x8;
  long *unaff_x19;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint6 uVar10;
  undefined8 uVar11;
  undefined1 auStack_90 [16];
  
  func_0x00010735ff94();
  func_0x000107360714();
  func_0x000107360cb0();
  func_0x0001009eba74();
  lVar6 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_1;
  uVar5 = uVar7 >> 0xc ^ param_3 >> 7;
  bVar3 = (byte)param_3;
  uVar10 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar11 = *(undefined8 *)(uVar7 + uVar5);
    for (uVar8 = CONCAT17(-((byte)((ulong)uVar11 >> 0x38) == (bVar3 & 0x7f)),
                          CONCAT16(-((byte)((ulong)uVar11 >> 0x30) == (bVar3 & 0x7f)),
                                   CONCAT15(-((char)((ulong)uVar11 >> 0x28) ==
                                             (char)(uVar10 >> 0x28)),
                                            CONCAT14(-((char)((ulong)uVar11 >> 0x20) ==
                                                      (char)(uVar10 >> 0x20)),
                                                     CONCAT13(-((char)((ulong)uVar11 >> 0x18) ==
                                                               (char)(uVar10 >> 0x18)),
                                                              CONCAT12(-((char)((ulong)uVar11 >>
                                                                               0x10) ==
                                                                        (char)(uVar10 >> 0x10)),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar11 >> 8) == (char)(uVar10 >> 8)),
                                                  -((char)uVar11 == (char)uVar10)))))))) &
                 0x8080808080808080; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      iVar4 = (int)auStack_90;
      FUN_10735aef8(auStack_90,uVar1 + uVar9 * 0x48);
      if (iVar4 != 0) {
        lVar6 = *unaff_x19 + uVar9;
        goto LAB_10735cffc;
      }
    }
    func_0x0001073603b0();
    if ((extraout_x8 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  lVar6 = 0;
LAB_10735cffc:
  func_0x000107360c80(lVar6);
  return;
}



/* Entry: 107352f24; end: 107352fb7;  */

void FUN_107352f24(long param_1)

{
  long lVar1;
  undefined8 *extraout_x8;
  long unaff_x20;
  long lStack_30;
  undefined1 uStack_28;
  
  func_0x000107360618();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  lStack_30 = param_1 + 0x260;
  uStack_28 = 1;
  func_0x00010724e404();
  lVar1 = unaff_x20 + 0x308;
  FUN_107352fb8();
  while (lVar1 != 0) {
    func_0x0001073597c0();
    func_0x0001073608e0();
  }
  func_0x00010724e49c(&lStack_30);
  return;
}



/* Entry: 107352fb8; end: 107352fdf;  */

undefined1  [16] FUN_107352fb8(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10735d024(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 107352fe0; end: 107353013;  */

long * FUN_107352fe0(long *param_1)

{
  param_1[1] = param_1[1] + 0x48;
  *param_1 = *param_1 + 1;
  FUN_10735d024();
  return param_1;
}



/* Entry: 107353014; end: 10735347b;  */

void FUN_107353014(long param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x19;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 uStack_1d1;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined8 *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  int iStack_19c;
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [56];
  undefined1 auStack_150 [40];
  undefined1 uStack_128;
  undefined1 auStack_120 [56];
  undefined1 auStack_e8 [56];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  puStack_1b8 = param_3;
  func_0x00010735fd78();
  piVar1 = (int *)(param_1 + 0x1ec);
  do {
    iStack_19c = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iStack_19c + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  func_0x0001072ab574(unaff_x19 + 0x3e);
  lVar2 = param_2[1];
  for (lVar8 = *param_2; lVar8 != lVar2; lVar8 = lVar8 + 0x38) {
    uVar6 = unaff_x19[0x4a];
    if (uVar6 < (ulong)unaff_x19[0x4b]) {
      FUN_1073598ac(uVar6,lVar8);
      lVar9 = uVar6 + 0x48;
      unaff_x19[0x4a] = lVar9;
    }
    else {
      func_0x00010736099c((long)(uVar6 - unaff_x19[0x49]) / 0x48);
      func_0x000107360990();
      FUN_1073598ac(lStack_a0,lVar8);
      lStack_a0 = lStack_a0 + 0x48;
      func_0x000107360984();
      lVar9 = unaff_x19[0x4a];
      func_0x0001073605e0();
    }
    unaff_x19[0x4a] = lVar9;
  }
  FUN_107359b54(unaff_x19[0x2d],0x159,unaff_x19 + 0x1d,(param_2[1] - *param_2) / 0x38);
  lVar2 = ((long *)*puStack_1b8)[1];
  for (lVar8 = *(long *)*puStack_1b8; lVar8 != lVar2; lVar8 = lVar8 + 0x70) {
    FUN_10735347c(&lStack_1b0,lVar8);
    lVar9 = lStack_1b0;
    func_0x0001072684ec(lStack_1b0 + 0x20);
    lVar10 = *(long *)(lVar9 + 0x20);
    func_0x000100060964(auStack_120,&UNK_10f40acdb);
    uVar6 = 0;
    lVar9 = lVar10;
    func_0x000104c32bd8(lVar10);
    if ((uVar6 & 1) == 0) {
      func_0x000104c2fe00(auStack_e8,unaff_x19 + 0x1d);
      func_0x000104c33004(&uStack_b0,auStack_e8);
      func_0x000104c3302c(*(long *)(lVar10 + 8) + lVar9 * 0x78 + 0x38,&uStack_b0);
      func_0x000104c3323c(&uStack_b0);
      func_0x000104c2f714(auStack_e8);
    }
    else {
      FUN_10735d778(*(long *)(lVar10 + 8) + lVar9 * 0x78,auStack_120,unaff_x19 + 0x1d);
    }
    func_0x000104c2f714(auStack_120);
    uVar6 = unaff_x19[0x4a];
    if (uVar6 < (ulong)unaff_x19[0x4b]) {
      *(long *)(uVar6 + 0x10) = lStack_1a8;
      *(long *)(uVar6 + 8) = lStack_1b0;
      if (lStack_1a8 != 0) {
        do {
          func_0x0001073606c4();
          uVar6 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      *(undefined4 *)(uVar6 + 0x40) = 0;
      lVar9 = uVar6 + 0x48;
      unaff_x19[0x4a] = lVar9;
    }
    else {
      func_0x00010736099c((long)(uVar6 - unaff_x19[0x49]) / 0x48);
      func_0x000107360990();
      *(long *)(lStack_a0 + 0x10) = lStack_1a8;
      *(long *)(lStack_a0 + 8) = lStack_1b0;
      lVar9 = lStack_a0;
      if (lStack_1a8 != 0) {
        do {
          func_0x0001073606c4();
          lVar9 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      *(undefined4 *)(lVar9 + 0x40) = 0;
      lStack_a0 = lVar9 + 0x48;
      func_0x000107360984();
      lVar9 = unaff_x19[0x4a];
      func_0x0001073605e0();
    }
    unaff_x19[0x4a] = lVar9;
    func_0x000107360638();
  }
  func_0x0001009eba34(unaff_x19 + 0x46,&iStack_19c);
  __ZNSt3__15mutex6unlockEv(unaff_x19 + 0x3e);
  uVar5 = *param_2 == param_2[1];
  if (!(bool)uVar5) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    func_0x00010726acf0(&uStack_b0);
    (**(code **)(*unaff_x19 + 0xb0))();
    func_0x00010726b264(&uStack_b0);
  }
  FUN_10735349c(unaff_x19 + 0x2a,FUN_10735351c,0);
  if (unaff_x19[0x24] != 0) {
    lVar8 = *(long *)*puStack_1b8;
    lVar2 = ((long *)*puStack_1b8)[1];
    uVar5 = lVar8 == lVar2;
    if (!(bool)uVar5) {
      FUN_107359b54(unaff_x19[0x2d],0x158,unaff_x19 + 0x1d,(lVar2 - lVar8) / 0x70);
      lVar8 = unaff_x19[0x24];
      func_0x0001072c0298(auStack_198,puStack_1b8);
      func_0x000104c2fe00(auStack_188,unaff_x19 + 0x1d);
      FUN_10735d84c(auStack_150,unaff_x19 + 0x38);
      uStack_128 = (undefined1)unaff_x19[0x9c];
      __Znwm(0x80);
      func_0x000107360c38();
      FUN_10731e7b8();
      func_0x000104c318bc(unaff_x19 + 3,auStack_188);
      func_0x00010735df30(unaff_x19 + 10,auStack_150);
      *(undefined1 *)(unaff_x19 + 0xf) = uStack_128;
      func_0x000107292e94(lVar8,&uStack_b0);
      func_0x000107283e00(&uStack_b0);
      FUN_107354024(auStack_198);
    }
  }
  func_0x00010735fd20(extraout_x8,iStack_19c);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107283e00(&uStack_b0);
  puVar7 = auStack_198;
  FUN_107354024(puVar7);
  func_0x00010736003c();
  pcStack_1c8 = FUN_10735347c;
  puStack_1d0 = &stack0xfffffffffffffff0;
  FUN_10735d628(&uStack_1d1,puVar7);
  return;
}



/* Entry: 10735347c; end: 10735349b;  */

void FUN_10735347c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10735d628(&uStack_11,param_1);
  return;
}



/* Entry: 10735349c; end: 10735351b;  */

void FUN_10735349c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [8];
  long lStack_40;
  
  func_0x000107360a34();
  if (lStack_40 != 0) {
    lVar1 = *param_1;
    FUN_10735d7c8(auStack_48,lVar1,param_2,param_3);
    func_0x0001009ebb10();
    FUN_1073ae140();
    func_0x000107360af4();
    if (lVar1 != 0) {
      func_0x000107360108();
    }
  }
  func_0x000107360630();
  return;
}



/* Entry: 10735351c; end: 107354023;  */

void FUN_10735351c(long *****param_1)

{
  long ******pppppplVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long ***ppplVar6;
  code *pcVar7;
  undefined1 uVar8;
  long *****ppppplVar9;
  long *******ppppppplVar10;
  long *plVar11;
  long lVar12;
  long **pplVar13;
  long *plVar14;
  long ******pppppplVar15;
  undefined8 *puVar16;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long *******ppppppplVar17;
  long ******extraout_x8_01;
  long *****ppppplVar18;
  long *******ppppppplVar19;
  long *******ppppppplVar20;
  long ******pppppplVar21;
  ulong uVar22;
  long lVar23;
  long ****pppplVar24;
  long *******ppppppplVar25;
  long *******ppppppplVar26;
  long ******pppppplVar27;
  long ****pppplVar28;
  long ****pppplVar29;
  long ****pppplVar30;
  long ****pppplVar31;
  long ****pppplVar32;
  long ****pppplStack_338;
  long *****ppppplStack_330;
  long *****ppppplStack_328;
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [64];
  long ****pppplStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 auStack_278 [32];
  undefined1 auStack_258 [32];
  undefined8 uStack_238;
  long ****pppplStack_228;
  long ****pppplStack_220;
  long ****pppplStack_218;
  long ****pppplStack_210;
  long ******pppppplStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long ******pppppplStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  char cStack_1d8;
  long *****ppppplStack_1c8;
  long *****ppppplStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *****ppppplStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long ***ppplStack_140;
  long ***ppplStack_138;
  long ***ppplStack_130;
  long ***ppplStack_128;
  long ***ppplStack_120;
  long ***ppplStack_118;
  long ****pppplStack_110;
  long ****pppplStack_108;
  long ****pppplStack_100;
  long ****pppplStack_f8;
  long ******pppppplStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined1 auStack_d0 [32];
  long ******pppppplStack_b0;
  long ******pppppplStack_a8;
  long ******pppppplStack_a0;
  undefined8 uStack_98;
  long *****ppppplStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *****ppppplStack_40;
  undefined8 uStack_38;
  long ******pppppplStack_30;
  long *****ppppplStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  func_0x000107360c98();
  ppppplVar9 = param_1;
  func_0x00010735fda8();
  ppplStack_128 = (long ***)0x0;
  ppplStack_130 = (long ***)0x0;
  ppplStack_118 = (long ***)0x0;
  ppplStack_120 = (long ***)0x0;
  ppplStack_138 = (long ***)0x0;
  ppplStack_140 = (long ***)0x0;
  uStack_18 = extraout_x8;
  func_0x0001073608bc();
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_158 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  pppplVar24 = param_1[0x2d];
  pppppplStack_b0 = (long ******)CONCAT44(pppppplStack_b0._4_4_,0x15b);
  uStack_98 = (long ******)((ulong)uStack_98._4_4_ << 0x20);
  uStack_80 = 0;
  uStack_78 = 0;
  ppppplStack_90 = (long *****)&PTR_DAT_110996720;
  uStack_88 = 0;
  uStack_70 = 0x15b;
  uStack_68 = 0;
  uStack_64 = 1;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  ppppppplVar20 = &pppppplStack_f0;
  func_0x00010724ef84(&pppppplStack_f0,param_1 + 0x1d);
  ppppppplVar19 = (long *******)pppppplStack_f0;
  if (-1 < lStack_e0) {
    ppppppplVar19 = ppppppplVar20;
  }
  ppppppplVar10 = &pppppplStack_b0;
  func_0x00010729d56c(ppppppplVar10,&UNK_10f40acc8,ppppppplVar19);
  ppppplStack_40 = (long *****)CONCAT44(ppppplStack_40._4_4_,1);
  uStack_38 = (long *******)((ulong)uStack_38._4_4_ << 0x20);
  pppplStack_110 = (long ****)*pppplVar24;
  pppplStack_108 = (long ****)CONCAT44(pppplStack_108._4_4_,3);
  FUN_10743fa9c(pppplVar24,ppppppplVar10,&ppppplStack_40,&pppplStack_110,7);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppplStack_f0);
  func_0x000107262330(&pppppplStack_b0);
  func_0x0001072ab574(param_1 + 0x3e);
  pppplVar32 = param_1[0x4b];
  pppplVar31 = param_1[0x4a];
  pppplVar28 = param_1[0x47];
  pppplVar24 = param_1[0x46];
  pppplVar30 = param_1[0x49];
  pppplVar29 = param_1[0x48];
  param_1[0x47] = (long ****)ppplStack_138;
  param_1[0x46] = (long ****)ppplStack_140;
  param_1[0x49] = (long ****)ppplStack_128;
  param_1[0x48] = (long ****)ppplStack_130;
  param_1[0x4b] = (long ****)ppplStack_118;
  param_1[0x4a] = (long ****)ppplStack_120;
  ppplStack_140 = (long ***)pppplVar24;
  ppplStack_138 = (long ***)pppplVar28;
  ppplStack_130 = (long ***)pppplVar29;
  ppplStack_128 = (long ***)pppplVar30;
  ppplStack_120 = (long ***)pppplVar31;
  ppplStack_118 = (long ***)pppplVar32;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x3e);
  plStack_198 = (long *)0x0;
  plStack_190 = (long *)0x0;
  plStack_188 = (long *)0x0;
  if ((long)ppplStack_120 - (long)ppplStack_128 != 0) {
    uVar22 = ((long)ppplStack_120 - (long)ppplStack_128) / 0x48;
    func_0x000107360aa4();
    if (extraout_x8_00 <= uVar22) goto LAB_107353e68;
    FUN_107359a34(&pppppplStack_b0);
    FUN_107359938(&plStack_198,&pppppplStack_b0);
    FUN_107359b0c(&pppppplStack_b0);
  }
  uStack_38 = (long *******)0x0;
  ppppplStack_40 = (long *****)0x0;
  ppppplStack_28 = (long *****)0x0;
  pppppplStack_30 = (long ******)0x0;
  uStack_20 = 0x3f800000;
  for (pppppplVar27 = (long ******)0x0;
      pppppplVar27 < (long ******)(((long)ppplStack_120 - (long)ppplStack_128) / 0x48);
      pppppplVar27 = (long ******)((long)pppppplVar27 + 1)) {
    pppplVar24 = (long ****)(ppplStack_128 + (long)pppppplVar27 * 9);
    uVar8 = *(int *)(pppplVar24 + 8) + -1 < 0;
    if (*(int *)(pppplVar24 + 8) == 1) {
      FUN_10735ce78();
      ppppppplVar19 = (long *******)&ppppplStack_28;
      func_0x00010726364c(ppppppplVar19,pppplVar24);
      ppppppplVar26 = uStack_38;
      ppppppplVar10 = ppppppplVar19;
      if (uStack_38 != (long *******)0x0) {
        uVar22 = (long)uStack_38 - 1;
        if (((ulong)uStack_38 & uVar22) == 0) {
          ppppppplVar20 = (long *******)(uVar22 & (ulong)ppppppplVar19);
          uVar8 = false;
        }
        else {
          uVar8 = (long)ppppppplVar19 - (long)uStack_38 < 0;
          ppppppplVar20 = ppppppplVar19;
          if (uStack_38 <= ppppppplVar19) {
            uVar4 = 0;
            if (uStack_38 != (long *******)0x0) {
              uVar4 = (ulong)ppppppplVar19 / (ulong)uStack_38;
            }
            ppppppplVar20 = (long *******)((long)ppppppplVar19 - uVar4 * (long)uStack_38);
          }
        }
        ppppppplVar25 = (long *******)ppppplStack_40[(long)ppppppplVar20];
        if (ppppppplVar25 != (long *******)0x0) {
          do {
            while( true ) {
              ppppppplVar25 = (long *******)*ppppppplVar25;
              if (ppppppplVar25 == (long *******)0x0) goto LAB_10735379c;
              ppppppplVar17 = (long *******)ppppppplVar25[1];
              uVar8 = (long)ppppppplVar17 - (long)ppppppplVar19 < 0;
              if (ppppppplVar17 != ppppppplVar19) break;
              ppppppplVar10 = ppppppplVar25 + 2;
              func_0x000104c32db4(ppppppplVar10,pppplVar24);
              if (((ulong)ppppppplVar10 & 1) != 0) goto LAB_1073538a0;
            }
            if (((ulong)ppppppplVar26 & uVar22) == 0) {
              ppppppplVar17 = (long *******)((ulong)ppppppplVar17 & uVar22);
            }
            else if (ppppppplVar26 <= ppppppplVar17) {
              uVar4 = 0;
              if (ppppppplVar26 != (long *******)0x0) {
                uVar4 = (ulong)ppppppplVar17 / (ulong)ppppppplVar26;
              }
              ppppppplVar17 = (long *******)((long)ppppppplVar17 - uVar4 * (long)ppppppplVar26);
            }
            uVar8 = (long)ppppppplVar17 - (long)ppppppplVar20 < 0;
          } while (ppppppplVar17 == ppppppplVar20);
        }
      }
LAB_10735379c:
      func_0x000107360a88();
      pppppplStack_a0 = (long ******)0x1;
      pppppplStack_b0 = (long ******)ppppppplVar10;
      pppppplStack_a8 = (long ******)&pppppplStack_30;
      func_0x000107360918();
      ppppppplVar10[9] = (long ******)0x0;
      func_0x000107360148(ppppplStack_28);
      if ((ppppppplVar26 == (long *******)0x0) || (func_0x00010736013c(), (bool)uVar8)) {
        func_0x00010735fd34((long)ppppppplVar26 << 1);
        FUN_10735a4c4(&ppppplStack_40);
        ppppppplVar26 = uStack_38;
        if (((ulong)uStack_38 & (long)uStack_38 - 1U) == 0) {
          ppppppplVar20 = (long *******)((long)uStack_38 - 1U & (ulong)ppppppplVar19);
        }
        else {
          ppppppplVar20 = ppppppplVar19;
          if (uStack_38 <= ppppppplVar19) {
            uVar22 = 0;
            if (uStack_38 != (long *******)0x0) {
              uVar22 = (ulong)ppppppplVar19 / (ulong)uStack_38;
            }
            ppppppplVar20 = (long *******)((long)ppppppplVar19 - uVar22 * (long)uStack_38);
          }
        }
      }
      ppppppplVar25 = (long *******)pppppplStack_b0;
      ppppplVar18 = (long *****)ppppplStack_40[(long)ppppppplVar20];
      if (ppppplVar18 == (long *****)0x0) {
        *pppppplStack_b0 = (long *****)pppppplStack_30;
        pppppplStack_30 = pppppplStack_b0;
        ppppplStack_40[(long)ppppppplVar20] = (long ****)&pppppplStack_30;
        if ((long ******)*pppppplStack_b0 != (long ******)0x0) {
          ppppppplVar19 = (long *******)(*pppppplStack_b0)[1];
          if (((ulong)ppppppplVar26 & (long)ppppppplVar26 - 1U) == 0) {
            ppppppplVar19 = (long *******)((ulong)ppppppplVar19 & (long)ppppppplVar26 - 1U);
          }
          else if (ppppppplVar26 <= ppppppplVar19) {
            uVar22 = 0;
            if (ppppppplVar26 != (long *******)0x0) {
              uVar22 = (ulong)ppppppplVar19 / (ulong)ppppppplVar26;
            }
            ppppppplVar19 = (long *******)((long)ppppppplVar19 - uVar22 * (long)ppppppplVar26);
          }
          ppppplStack_40[(long)ppppppplVar19] = (long ****)pppppplStack_b0;
        }
      }
      else {
        *pppppplStack_b0 = (long *****)*ppppplVar18;
        *ppppplVar18 = (long ****)pppppplStack_b0;
      }
      pppppplStack_b0 = (long ******)0x0;
      ppppplStack_28 = (long *****)((long)ppppplStack_28 + 1);
      FUN_10735a640(&pppppplStack_b0);
LAB_1073538a0:
      ppppppplVar25[9] = pppppplVar27;
    }
  }
  lVar23 = 0;
  for (ppppplVar18 = (long *****)0x0; ppplVar6 = ppplStack_128,
      ppppplVar18 < (long *****)(((long)ppplStack_120 - (long)ppplStack_128) / 0x48);
      ppppplVar18 = (long *****)((long)ppppplVar18 + 1)) {
    func_0x000104c2f64c(&pppppplStack_b0);
    plVar11 = (long *)((long)ppplVar6 + lVar23);
    if ((int)plVar11[8] == 0) {
      func_0x00010735ce98();
      lVar12 = *plVar11 + 0x30;
      FUN_10735a48c(lVar12);
      func_0x000107262f3c(&pppppplStack_b0,lVar12);
    }
    else {
      FUN_10735ce78();
      func_0x000107262f3c(&pppppplStack_b0,plVar11);
    }
    pppppplVar27 = &ppppplStack_40;
    FUN_10735a6b8(pppppplVar27,&pppppplStack_b0);
    plVar11 = plStack_190;
    if ((pppppplVar27 == (long ******)0x0) || (pppppplVar27[9] <= ppppplVar18)) {
      if (plStack_190 < plStack_188) {
        FUN_10735a77c(plStack_190 + 1,(long)ppplVar6 + lVar23 + 8);
        plStack_190 = plVar11 + 9;
      }
      else {
        pplVar13 = &plStack_198;
        FUN_1073598d8(pplVar13,((long)plStack_190 - (long)plStack_198) / 0x48 + 1);
        FUN_107359a34(&pppppplStack_f0,pplVar13,((long)plStack_190 - (long)plStack_198) / 0x48,
                      &plStack_188);
        lVar12 = lStack_e0;
        FUN_10735a77c(lStack_e0 + 8,(long)ppplVar6 + lVar23 + 8);
        lStack_e0 = lVar12 + 0x48;
        FUN_107359938(&plStack_198,&pppppplStack_f0);
        plVar11 = plStack_190;
        FUN_107359b0c(&pppppplStack_f0);
        plStack_190 = plVar11;
      }
    }
    func_0x000104c2f714(&pppppplStack_b0);
    lVar23 = lVar23 + 0x48;
  }
  FUN_10735a81c(&ppppplStack_40);
  uVar8 = plStack_198 == plStack_190;
  if ((!(bool)uVar8) && (FUN_107356004(param_1), (*(byte *)((long)param_1 + 0x4d1) & 1) == 0)) {
    func_0x0001073608bc();
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    pppppplStack_a8 = (long ******)0x0;
    pppppplStack_a0 = (long ******)0x0;
    uStack_98 = (long ******)0x0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    pppplStack_110 = (long ****)(param_1 + 0x4c);
    pppplStack_108 = (long ****)CONCAT71(pppplStack_108._1_7_,1);
    pppppplStack_b0 = extraout_x8_01;
    ppppplStack_90 = (long *****)extraout_x8_01;
    func_0x00010724e404();
    FUN_10735a8b0(auStack_1b8,param_1 + 0x61);
    FUN_10735abf0(&pppppplStack_f0,param_1 + 0x61);
    func_0x000107261fa8(auStack_d0,param_1 + 0x65);
    FUN_10735acbc(&ppppplStack_40,&pppppplStack_f0);
    pppppplVar15 = uStack_98;
    pppppplVar1 = pppppplStack_a0;
    pppppplVar21 = pppppplStack_a8;
    pppppplVar27 = pppppplStack_b0;
    pppppplStack_a8 = (long ******)uStack_38;
    pppppplStack_b0 = (long ******)ppppplStack_40;
    uStack_98 = (long ******)ppppplStack_28;
    pppppplStack_a0 = pppppplStack_30;
    uStack_38 = (long *******)pppppplVar21;
    ppppplStack_40 = (long *****)pppppplVar27;
    ppppplStack_28 = (long *****)pppppplVar15;
    pppppplStack_30 = pppppplVar1;
    FUN_10735ab80();
    FUN_10735ace0(&ppppplStack_90,auStack_d0);
    func_0x000107359780(&pppppplStack_f0);
    func_0x00010724e49c(&pppplStack_110);
    plVar5 = plStack_190;
    for (plVar11 = plStack_198; plVar11 != plVar5; plVar11 = plVar11 + 9) {
      if ((int)plVar11[8] == 1) {
        plVar14 = plVar11;
        FUN_10735ce78(plVar11);
        ppppppplVar20 = &pppppplStack_b0;
        FUN_107352f04(ppppppplVar20,plVar14);
        pppppplVar27 = &ppppplStack_180;
        FUN_107352f04(pppppplVar27,plVar14);
        if (ppppppplVar20 == (long *******)0x0) {
          if (pppppplVar27 != (long ******)0x0) {
            ppppppplVar20 = (long *******)&ppppplStack_180;
            goto LAB_107353b94;
          }
        }
        else {
          if (pppppplVar27 == (long ******)0x0) {
            func_0x0001072628ec(&pppppplStack_f0,auStack_160,plVar14);
          }
          else {
            FUN_10735af94(&ppppplStack_180,plVar14);
          }
          ppppppplVar20 = &pppppplStack_b0;
LAB_107353b94:
          FUN_10735af94(ppppppplVar20,plVar14);
        }
        func_0x0001072628ec(&pppppplStack_f0,&ppppplStack_90,plVar14);
      }
      else if ((int)plVar11[8] == 0) {
        func_0x00010735ce98(plVar11);
        plVar14 = plVar11;
        func_0x00010735ce98();
        lVar23 = *plVar14 + 0x30;
        FUN_10735a48c(lVar23);
        func_0x000104c2fe00(&pppppplStack_f0,lVar23);
        FUN_10735ad3c(&pppppplStack_b0,&pppppplStack_f0);
        FUN_107356d80();
        FUN_10735ad3c(&ppppplStack_180,&pppppplStack_f0);
        FUN_107356d80();
        FUN_10735ae10(auStack_160,&pppppplStack_f0);
        FUN_10735ae10(&ppppplStack_90,&pppppplStack_f0);
        func_0x000104c2f714(&pppppplStack_f0);
      }
    }
    pppplVar24 = param_1[0x2e];
    if (pppplVar24 == (long ****)0x0) {
      pppppplStack_1f0 = (long ******)((ulong)pppppplStack_1f0 & 0xffffffffffffff00);
    }
    else {
      (*(code *)(*pppplVar24)[4])(&pppppplStack_208,pppplVar24);
      uStack_1e8 = uStack_200;
      pppppplStack_1f0 = pppppplStack_208;
      lStack_1e0 = lStack_1f8;
      uStack_200 = 0;
      lStack_1f8 = 0;
      pppppplStack_208 = (long ******)0x0;
    }
    cStack_1d8 = pppplVar24 != (long ****)0x0;
    FUN_10735afd4(&pppplStack_228,param_1 + 0xa0);
    pppppplVar27 = (long ******)0x180;
    pppplStack_210 = (long ****)param_1;
    __Znwm();
    pppplVar29 = pppplStack_220;
    pppplVar28 = pppplStack_228;
    pppppplVar21 = pppppplVar27 + 1;
    *pppppplVar21 = (long *****)0x0;
    pppppplVar27[2] = (long *****)0x0;
    *pppppplVar27 = (long *****)&PTR_FUN_1109a4dd8;
    pppppplStack_f0 = (long ******)((ulong)pppppplStack_f0 & 0xffffffffffffff00);
    uVar22 = (ulong)puStack_d8 >> 8;
    puStack_d8 = (undefined8 *)((ulong)puStack_d8 & 0xffffffffffffff00);
    uVar8 = cStack_1d8 == '\x01';
    if ((bool)uVar8) {
      uStack_e8 = uStack_1e8;
      pppppplStack_f0 = pppppplStack_1f0;
      lStack_e0 = lStack_1e0;
      uStack_1e8 = 0;
      lStack_1e0 = 0;
      pppppplStack_1f0 = (long ******)0x0;
      puStack_d8 = (undefined8 *)CONCAT71((int7)uVar22,1);
    }
    pppplStack_110 = pppplStack_228;
    pppplStack_108 = pppplStack_220;
    pppplStack_228 = (long ****)0x0;
    pppplStack_220 = (long ****)0x0;
    pppplStack_100 = pppplStack_218;
    ppppplStack_28 = (long *****)0x0;
    pppppplVar15 = pppppplVar27;
    pppplStack_f8 = (long ****)param_1;
    func_0x000107360498();
    pppppplVar1 = pppppplVar27 + 3;
    *pppppplVar15 = (long *****)&PTR_FUN_1109a4e28;
    pppppplVar15[1] = (long *****)pppplVar28;
    pppplStack_108 = (long ****)0x0;
    pppplStack_110 = (long ****)0x0;
    pppppplVar15[2] = (long *****)pppplVar29;
    pppppplVar15[3] = (long *****)pppplStack_218;
    pppppplVar15[4] = param_1;
    ppppplStack_28 = (long *****)pppppplVar15;
    FUN_10735eb2c(pppppplVar1,&ppppplStack_180,auStack_160,auStack_1b8,param_1 + 0x9b,
                  &pppppplStack_f0,&ppppplStack_40);
    func_0x0001006393ec(&ppppplStack_40);
    func_0x00010725b1d4(&pppplStack_110);
    func_0x0001001148fc(&pppppplStack_f0);
    ppppplStack_1c8 = (long *****)pppppplVar1;
    ppppplStack_1c0 = (long *****)pppppplVar27;
    func_0x00010735ec0c(0);
    func_0x00010725b1d4(&pppplStack_228);
    func_0x0001001148fc(&pppppplStack_1f0);
    if (pppplVar24 != (long ****)0x0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppplStack_208);
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
      if (bVar3) {
        *pppppplVar21 = (long *****)((long)*pppppplVar21 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pppplStack_338 = (long ****)param_1;
    ppppplStack_330 = (long *****)pppppplVar1;
    ppppplStack_328 = (long *****)pppppplVar27;
    FUN_10731e2b0(auStack_320,&ppplStack_140);
    FUN_10735b0a0(auStack_308,&pppppplStack_b0);
    pppplStack_2c8 = (long ****)ppppplVar9;
    FUN_10735afd4(&uStack_2c0,param_1 + 0xa0);
    FUN_10735b024(&uStack_2a8,&pppplStack_338);
    puStack_d8 = (undefined8 *)0x0;
    puVar16 = (undefined8 *)0x98;
    __Znwm();
    puVar16[2] = uStack_2b8;
    puVar16[1] = uStack_2c0;
    puVar16[4] = uStack_2a8;
    puVar16[3] = uStack_2b0;
    *puVar16 = &PTR_SUB_1109a4ea8;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    puVar16[6] = uStack_298;
    puVar16[5] = uStack_2a0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    puVar16[8] = uStack_288;
    puVar16[7] = uStack_290;
    puVar16[9] = uStack_280;
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    FUN_10735acbc(puVar16 + 10,auStack_278);
    FUN_10732f758(puVar16 + 0xe,auStack_258);
    puVar16[0x12] = uStack_238;
    puStack_d8 = puVar16;
    FUN_107356058(param_1,&ppppplStack_180,auStack_160,&pppppplStack_b0,pppppplVar27 + 0xf,
                  &pppppplStack_f0);
    FUN_10735eed0(&pppppplStack_f0);
    FUN_10735650c(&uStack_2c0);
    func_0x000107356530(&pppplStack_338);
    FUN_10735ec18(&ppppplStack_1c8);
    func_0x000107359780(&pppppplStack_b0);
    FUN_10735ab80(auStack_1b8);
  }
  FUN_10735b0d8(&plStack_198);
  func_0x000107356564(&ppppplStack_180);
  func_0x00010735979c(&ppplStack_140);
  func_0x00010735fd20(uStack_18);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
LAB_107353e68:
  FUN_107359a28();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x107353e70);
  (*pcVar7)();
}



/* Entry: 107354024; end: 107354053;  */

void FUN_107354024(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  FUN_10735d588(param_1 + 0x48);
  func_0x000104c2f714(param_1 + 0x10);
  lVar1 = param_1;
  func_0x00010726dd50();
  if ((lVar1 == 1) && (func_0x000107274ee4(), extraout_x8 != 0)) {
    func_0x000107274f70();
    func_0x000107275200();
    func_0x000107275208();
  }
  func_0x00010726dd8c(param_1);
  return;
}



/* Entry: 107354054; end: 1073540c3;  */

void FUN_107354054(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  code *extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x00010735fd4c();
  puVar1 = auStack_60;
  func_0x000104c2fe00();
  func_0x0001073605d0();
  func_0x0001009ebb10(*(undefined8 *)(*unaff_x19 + 0x58));
  (*extraout_x8)();
  func_0x000107360320();
  func_0x00010736053c();
  func_0x00010735fd20(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107360128();
    func_0x00010726e078();
    func_0x00010736053c();
    func_0x00010736001c();
    func_0x00010736005c();
    FUN_107359b54(*(undefined8 *)(puVar1 + 0x168),0x15a,unaff_x20 + 0x1d,
                  (param_2[1] - *param_2) / 0x38);
    uStack_b0 = 0;
    uStack_a8 = 0;
    func_0x00010726acf0(&uStack_b0);
    (**(code **)(*unaff_x20 + 0xb0))();
    func_0x00010726b264(&uStack_b0);
    return;
  }
  return;
}



/* Entry: 1073540c4; end: 107354143;  */

void FUN_1073540c4(long param_1,long *param_2)

{
  long *unaff_x20;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010736005c();
  FUN_107359b54(*(undefined8 *)(param_1 + 0x168),0x15a,unaff_x20 + 0x1d,
                (param_2[1] - *param_2) / 0x38);
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010726acf0(&uStack_30);
  (**(code **)(*unaff_x20 + 0xb0))();
  func_0x00010726b264(&uStack_30);
  return;
}



/* Entry: 107354144; end: 107354343;  */

void FUN_107354144(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 ***pppuVar9;
  uint uVar10;
  undefined8 extraout_x8;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  ulong unaff_x20;
  ulong unaff_x21;
  long *plVar14;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined8 **ppuStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  uint uStack_19c;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  ushort auStack_188 [4];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_15c [4];
  undefined1 uStack_158;
  int iStack_154;
  int iStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [4];
  undefined1 auStack_fc [12];
  undefined1 auStack_f0 [120];
  undefined4 uStack_78;
  undefined8 uStack_70;
  
  puStack_1a8 = param_2;
  func_0x00010735fda8();
  auStack_188[0] = *(ushort *)(param_1 + 0x1e8);
  puStack_180 = &UNK_10e52b660;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uVar10 = (uint)(auStack_188[0] >> 8);
  uVar1 = auStack_188[0] & 0xff;
  lStack_1b0 = param_1;
  uStack_70 = extraout_x8;
  while (uVar5 = uVar1 == uVar10, uVar1 <= uVar10) {
    puStack_198 = (undefined8 *)puStack_1a8[1];
    puVar11 = (undefined8 *)*puStack_1a8;
    uStack_19c = uVar1;
    while (puVar11 != puStack_198) {
      uStack_140 = puVar11[1];
      puStack_148 = (undefined *)*puVar11;
      uStack_128 = 1;
      puStack_190 = puVar11;
      puStack_138 = puStack_148;
      uStack_130 = uStack_140;
      func_0x00010787d76c(&uStack_120,&puStack_148,uStack_19c);
      while (uVar3 = uStack_120, uVar6 = uStack_120, func_0x000107882368(), (int)uVar6 != 0) {
        func_0x0001078823ac(auStack_15c,uVar3);
        iVar2 = iStack_154;
        uVar5 = uStack_158;
        puStack_148 = &UNK_10e52b660;
        puStack_138 = (undefined *)0x0;
        uStack_130 = 0;
        uStack_140 = 0;
        unaff_x24 = (ulong)(iStack_150 - 1);
        unaff_x20 = 0xffffffff;
        while (iVar13 = (int)unaff_x20, iVar13 != 2) {
          unaff_x23 = (ulong)(uint)(iVar2 + iVar13);
          iVar12 = 3;
          unaff_x21 = unaff_x24;
          do {
            func_0x000107359e6c(auStack_100,uVar5,unaff_x23,unaff_x21);
            FUN_107359c90(auStack_118,&puStack_148,auStack_fc);
            unaff_x21 = (ulong)((int)unaff_x21 + 1);
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
          unaff_x20 = (ulong)(iVar13 + 1);
        }
        FUN_10735ceb4(&puStack_180,&puStack_148);
        func_0x00010731e248(&puStack_148);
      }
      func_0x000107880dc4(&uStack_120);
      puVar11 = puStack_190 + 2;
    }
    uVar10 = (uint)*(byte *)(lStack_1b0 + 0x1e9);
    uVar1 = uStack_19c + 1;
  }
  FUN_10731e7d0(auStack_f0,auStack_188);
  uStack_78 = 1;
  FUN_107354344(lStack_1b0 + 8,auStack_f0);
  puVar7 = auStack_f0;
  FUN_10731e1ac();
  func_0x0001073608f0();
  func_0x00010735fd20(uStack_70);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = auStack_f0;
  FUN_10731e1ac();
  func_0x0001073608f0();
  func_0x00010736001c();
  pcStack_1b8 = FUN_107354344;
  uStack_1f0 = unaff_x24;
  uStack_1e8 = unaff_x23;
  uStack_1d8 = unaff_x21;
  uStack_1d0 = unaff_x20;
  puStack_1c8 = puVar7;
  puStack_1c0 = &stack0xfffffffffffffff0;
  func_0x00010736005c();
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  lStack_220 = 0;
  uStack_210 = 0x3f800000;
  pppuVar9 = (undefined8 ***)(puVar8 + 8);
  func_0x00010736002c();
  func_0x00010724e404();
  if (&uStack_230 != (undefined8 *)(unaff_x20 + 0xb0)) {
    uStack_210 = *(undefined4 *)(unaff_x20 + 0xd0);
    plVar14 = (long *)(unaff_x20 + 0xc0);
    while (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0) {
      func_0x000107360490();
      uStack_1f8 = 0;
      *pppuVar9 = (undefined8 **)0x0;
      pppuVar9[1] = (undefined8 **)0x0;
      *(undefined4 *)(pppuVar9 + 2) = *(undefined4 *)(plVar14 + 2);
      ppuStack_208 = pppuVar9;
      plStack_200 = &lStack_220;
      FUN_10735e4cc(pppuVar9 + 3,plVar14 + 3);
      uStack_1f8 = CONCAT71(uStack_1f8._1_7_,1);
      pppuVar9[1] = (undefined8 **)(ulong)*(uint *)(pppuVar9 + 2);
      FUN_10735e03c(&uStack_230,pppuVar9);
      ppuStack_208 = (undefined8 **)0x0;
      pppuVar9 = &ppuStack_208;
      FUN_10735e554();
    }
  }
  func_0x0001073601f0();
  plVar14 = (long *)lStack_220;
  while( true ) {
    if (plVar14 == (long *)0x0) {
      func_0x00010735d528(&uStack_230);
      return;
    }
    if ((long *)plVar14[6] == (long *)0x0) break;
    func_0x000107360204(*(undefined8 *)(*(long *)plVar14[6] + 0x30));
    plVar14 = (long *)*plVar14;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x107354448);
  (*pcVar4)();
}



/* Entry: 107354344; end: 10735447f;  */

void FUN_107354344(long param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  long unaff_x20;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 **ppuStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  func_0x00010736005c();
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  lStack_70 = 0;
  uStack_60 = 0x3f800000;
  pppuVar2 = (undefined8 ***)(param_1 + 8);
  func_0x00010736002c();
  func_0x00010724e404();
  if (&uStack_80 != (undefined8 *)(unaff_x20 + 0xb0)) {
    uStack_60 = *(undefined4 *)(unaff_x20 + 0xd0);
    plVar3 = (long *)(unaff_x20 + 0xc0);
    while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
      func_0x000107360490();
      uStack_48 = 0;
      ppuStack_58 = pppuVar2;
      plStack_50 = &lStack_70;
      *pppuVar2 = (undefined8 **)0x0;
      pppuVar2[1] = (undefined8 **)0x0;
      *(undefined4 *)(pppuVar2 + 2) = *(undefined4 *)(plVar3 + 2);
      FUN_10735e4cc(pppuVar2 + 3,plVar3 + 3);
      uStack_48 = CONCAT71(uStack_48._1_7_,1);
      pppuVar2[1] = (undefined8 **)(ulong)*(uint *)(pppuVar2 + 2);
      FUN_10735e03c(&uStack_80,pppuVar2);
      ppuStack_58 = (undefined8 **)0x0;
      pppuVar2 = &ppuStack_58;
      FUN_10735e554();
    }
  }
  func_0x0001073601f0();
  plVar3 = (long *)lStack_70;
  while( true ) {
    if (plVar3 == (long *)0x0) {
      func_0x00010735d528(&uStack_80);
      return;
    }
    if ((long *)plVar3[6] == (long *)0x0) break;
    func_0x000107360204(*(undefined8 *)(*(long *)plVar3[6] + 0x30));
    plVar3 = (long *)*plVar3;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107354448);
  (*pcVar1)();
}



/* Entry: 107354480; end: 1073544df;  */

undefined1 * FUN_107354480(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_a8 [120];
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010735fda8();
  uStack_30 = 2;
  uStack_28 = extraout_x8;
  FUN_107354344(param_1 + 8,auStack_a8);
  puVar1 = auStack_a8;
  FUN_10731e1ac();
  func_0x00010735fd20(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107360128();
  FUN_10731e1ac();
  func_0x00010736001c();
  func_0x00010735ffc4(puVar1 + 0x348);
  puVar3 = (undefined1 *)0x0;
  for (lVar2 = *(long *)(puVar1 + 0x3f8); lVar2 != *(long *)(puVar1 + 0x400); lVar2 = lVar2 + 0x28)
  {
    puVar3 = (undefined1 *)(ulong)(uint)((int)puVar3 + *(int *)(lVar2 + 0x18));
  }
  func_0x0001073601f0();
  return puVar3;
}



/* Entry: 1073544e0; end: 10735455f;  */

int FUN_1073544e0(long param_1)

{
  long lVar1;
  int iVar2;
  
  func_0x00010735ffc4(param_1 + 0x348);
  iVar2 = 0;
  for (lVar1 = *(long *)(param_1 + 0x3f8); lVar1 != *(long *)(param_1 + 0x400); lVar1 = lVar1 + 0x28
      ) {
    iVar2 = iVar2 + *(int *)(lVar1 + 0x18);
  }
  func_0x0001073601f0();
  return iVar2;
}



/* Entry: 107354560; end: 10735462f;  */

void FUN_107354560(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar11;
  int extraout_w10;
  int extraout_w11;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_160;
  undefined **ppuStack_158;
  long *plStack_150;
  undefined **ppuStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined *puStack_128;
  long *plStack_120;
  long lStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined ***pppuStack_e8;
  undefined8 uStack_d8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x00010735fd4c();
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x000107360160(param_1 + 0x260);
  func_0x00010724e404();
  plVar9 = unaff_x19 + 0x61;
  FUN_107352fb8();
  plStack_70 = plVar9;
  uStack_68 = param_2;
  while (plStack_70 != (long *)0x0) {
    func_0x000104c2fe00(auStack_60,uStack_68);
    func_0x0001072999ec(&puStack_88,auStack_60);
    func_0x000104c2f714(auStack_60);
    FUN_107352fe0(&plStack_70);
  }
  func_0x00010736096c();
  ppuVar8 = &puStack_88;
  func_0x000107360674(*(undefined8 *)(*unaff_x19 + 0x58));
  ppuVar2 = &puStack_88;
  func_0x00010726e078();
  func_0x00010735fd20(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_88;
  func_0x00010726e078(ppuVar3);
  func_0x00010736001c();
  pcStack_a8 = FUN_107354630;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107360618();
  func_0x00010735fda8();
  lStack_110 = 0;
  uStack_108 = 0;
  uStack_d8 = extraout_x8;
  func_0x000107360160(ppuVar3 + 0x69);
  func_0x00010724e404();
  lVar13 = *(long *)(unaff_x20 + 0x448);
  uVar11 = 0;
  if (*(long *)(unaff_x20 + 0x450) != 0) {
    do {
      func_0x0001073606c4();
      uVar11 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  ppuStack_100 = (undefined **)0x0;
  ppuStack_f8 = (undefined **)0x0;
  lStack_110 = lVar13;
  uStack_108 = uVar11;
  FUN_10735d5d4(&ppuStack_100);
  func_0x00010736096c();
  FUN_107330040(ppuVar2);
  if (lVar13 == 0) {
LAB_107354748:
    ppuStack_100 = (undefined **)(unaff_x20 + 0x260);
    ppuStack_f8 = (undefined **)CONCAT71(ppuStack_f8._1_7_,1);
    func_0x00010724e404();
    plVar9 = *(long **)(unaff_x20 + 800);
    FUN_107354910(ppuVar2);
    puVar5 = (undefined *)(unaff_x20 + 0x308);
    FUN_107352fb8();
    puStack_128 = puVar5;
    plStack_120 = plVar9;
    while (puStack_128 != (undefined *)0x0) {
      plVar9 = (long *)plStack_120[7];
      func_0x00010735495c(ppuVar2);
      FUN_107352fe0(&puStack_128);
    }
    func_0x00010724e49c(&ppuStack_100);
  }
  else {
    lVar4 = lVar13;
    FUN_10736cb38(lVar13,ppuVar8);
    if (lVar4 == 0) {
      puStack_128 = (undefined *)0x0;
      ppuStack_f8 = &puStack_128;
      ppuStack_100 = &PTR_FUN_1109a4d08;
      pppuStack_e8 = &ppuStack_100;
      FUN_10736cb80(lVar13,&ppuStack_100);
      FUN_10735e63c(&ppuStack_100);
      if ((puStack_128 == (undefined *)0x0) ||
         (in_ZR = (uint)ppuVar8 == (uint)(byte)puStack_128[1],
         (uint)ppuVar8 < (uint)(byte)puStack_128[1])) goto LAB_107354748;
    }
    FUN_10736c7f0(&puStack_128);
    FUN_107354838(&ppuStack_100,&puStack_128);
    FUN_10735a0a0(&puStack_128);
    plVar9 = (long *)((long)ppuStack_f8 - (long)ppuStack_100 >> 4);
    FUN_107354910(ppuVar2);
    ppuVar8 = ppuStack_f8;
    for (ppuVar3 = ppuStack_100; in_ZR = ppuVar3 == ppuVar8, !(bool)in_ZR; ppuVar3 = ppuVar3 + 2) {
      plVar9 = (long *)*ppuVar3;
      func_0x00010735495c(ppuVar2);
    }
    FUN_10735a250(&ppuStack_100);
  }
  plVar6 = &lStack_110;
  FUN_10735d5d4();
  func_0x00010735fd20(uStack_d8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10735e63c(&ppuStack_100);
  func_0x00010726dd08(ppuVar2);
  plVar7 = &lStack_110;
  FUN_10735d5d4();
  func_0x00010736003c();
  pcStack_138 = FUN_107354838;
  lStack_160 = lVar13;
  ppuStack_158 = ppuVar8;
  plStack_150 = plVar6;
  ppuStack_148 = ppuVar2;
  ppuStack_140 = &puStack_b0;
  *plVar7 = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  puVar12 = (undefined8 *)*plVar9;
  puVar14 = (undefined8 *)plVar9[1];
  if ((long)puVar14 - (long)puVar12 != 0) {
    uVar10 = (long)puVar14 - (long)puVar12 >> 7;
    if (uVar10 >> 0x3c != 0) {
      FUN_107359ebc();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1073548e4);
      (*pcVar1)();
    }
    FUN_107359efc(&uStack_190,uVar10,0);
    func_0x000107360788();
    FUN_107359ec8();
    FUN_107359f68(&uStack_190);
    puVar12 = (undefined8 *)*plVar9;
    puVar14 = (undefined8 *)plVar9[1];
  }
  for (; puVar12 != puVar14; puVar12 = puVar12 + 0x10) {
    uStack_188 = puVar12[1];
    uStack_190 = *puVar12;
    if (puVar12[1] != 0) {
      do {
        func_0x00010736000c();
      } while (extraout_w10 != 0);
    }
    func_0x000107360788();
    FUN_107359fd0();
    func_0x0001073608d8();
  }
  return;
}



/* Entry: 107354630; end: 107354837;  */

void FUN_107354630(long param_1,undefined **param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar8;
  int extraout_w10;
  int extraout_w11;
  long unaff_x20;
  undefined **ppuVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_c0;
  undefined **ppuStack_b8;
  long *plStack_b0;
  undefined *puStack_88;
  long *plStack_80;
  long lStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined ***pppuStack_48;
  undefined8 uStack_38;
  
  func_0x000107360618();
  func_0x00010735fda8();
  lStack_70 = 0;
  uStack_68 = 0;
  uStack_38 = extraout_x8;
  func_0x000107360160(param_1 + 0x348);
  func_0x00010724e404();
  lVar11 = *(long *)(unaff_x20 + 0x448);
  uVar8 = 0;
  if (*(long *)(unaff_x20 + 0x450) != 0) {
    do {
      func_0x0001073606c4();
      uVar8 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  ppuStack_60 = (undefined **)0x0;
  ppuStack_58 = (undefined **)0x0;
  lStack_70 = lVar11;
  uStack_68 = uVar8;
  FUN_10735d5d4(&ppuStack_60);
  func_0x00010736096c();
  FUN_107330040();
  if (lVar11 == 0) {
LAB_107354748:
    ppuStack_60 = (undefined **)(unaff_x20 + 0x260);
    ppuStack_58 = (undefined **)CONCAT71(ppuStack_58._1_7_,1);
    func_0x00010724e404();
    plVar6 = *(long **)(unaff_x20 + 800);
    FUN_107354910();
    puVar3 = (undefined *)(unaff_x20 + 0x308);
    FUN_107352fb8();
    puStack_88 = puVar3;
    plStack_80 = plVar6;
    while (puStack_88 != (undefined *)0x0) {
      plVar6 = (long *)plStack_80[7];
      func_0x00010735495c();
      FUN_107352fe0(&puStack_88);
    }
    func_0x00010724e49c(&ppuStack_60);
  }
  else {
    lVar2 = lVar11;
    FUN_10736cb38(lVar11,param_2);
    if (lVar2 == 0) {
      puStack_88 = (undefined *)0x0;
      ppuStack_58 = &puStack_88;
      ppuStack_60 = &PTR_FUN_1109a4d08;
      pppuStack_48 = &ppuStack_60;
      FUN_10736cb80(lVar11,&ppuStack_60);
      FUN_10735e63c(&ppuStack_60);
      if ((puStack_88 == (undefined *)0x0) ||
         (in_ZR = (uint)param_2 == (uint)(byte)puStack_88[1],
         (uint)param_2 < (uint)(byte)puStack_88[1])) goto LAB_107354748;
    }
    FUN_10736c7f0(&puStack_88);
    FUN_107354838(&ppuStack_60,&puStack_88);
    FUN_10735a0a0(&puStack_88);
    plVar6 = (long *)((long)ppuStack_58 - (long)ppuStack_60 >> 4);
    FUN_107354910();
    param_2 = ppuStack_58;
    for (ppuVar9 = ppuStack_60; in_ZR = ppuVar9 == param_2, !(bool)in_ZR; ppuVar9 = ppuVar9 + 2) {
      plVar6 = (long *)*ppuVar9;
      func_0x00010735495c();
    }
    FUN_10735a250(&ppuStack_60);
  }
  plVar4 = &lStack_70;
  FUN_10735d5d4();
  func_0x00010735fd20(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10735e63c(&ppuStack_60);
  func_0x00010726dd08();
  plVar5 = &lStack_70;
  FUN_10735d5d4();
  func_0x00010736003c();
  lStack_c0 = lVar11;
  ppuStack_b8 = param_2;
  plStack_b0 = plVar4;
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  puVar10 = (undefined8 *)*plVar6;
  puVar12 = (undefined8 *)plVar6[1];
  if ((long)puVar12 - (long)puVar10 != 0) {
    uVar7 = (long)puVar12 - (long)puVar10 >> 7;
    if (uVar7 >> 0x3c != 0) {
      FUN_107359ebc();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1073548e4);
      (*pcVar1)();
    }
    FUN_107359efc(&uStack_f0,uVar7,0);
    func_0x000107360788();
    FUN_107359ec8();
    FUN_107359f68(&uStack_f0);
    puVar10 = (undefined8 *)*plVar6;
    puVar12 = (undefined8 *)plVar6[1];
  }
  for (; puVar10 != puVar12; puVar10 = puVar10 + 0x10) {
    uStack_e8 = puVar10[1];
    uStack_f0 = *puVar10;
    if (puVar10[1] != 0) {
      do {
        func_0x00010736000c();
      } while (extraout_w10 != 0);
    }
    func_0x000107360788();
    FUN_107359fd0();
    func_0x0001073608d8();
  }
  return;
}



/* Entry: 107354838; end: 10735490f;  */

void FUN_107354838(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  ulong uVar2;
  int extraout_w10;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar3 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)param_2[1];
  if ((long)puVar4 - (long)puVar3 != 0) {
    uVar2 = (long)puVar4 - (long)puVar3 >> 7;
    if (uVar2 >> 0x3c != 0) {
      FUN_107359ebc();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1073548e4);
      (*pcVar1)();
    }
    FUN_107359efc(&uStack_60,uVar2,0);
    func_0x000107360788();
    FUN_107359ec8();
    FUN_107359f68(&uStack_60);
    puVar3 = (undefined8 *)*param_2;
    puVar4 = (undefined8 *)param_2[1];
  }
  for (; puVar3 != puVar4; puVar3 = puVar3 + 0x10) {
    uStack_58 = puVar3[1];
    uStack_60 = *puVar3;
    if (puVar3[1] != 0) {
      do {
        func_0x00010736000c();
      } while (extraout_w10 != 0);
    }
    func_0x000107360788();
    FUN_107359fd0();
    func_0x0001073608d8();
  }
  return;
}



/* Entry: 107354910; end: 107354983;  */

void FUN_107354910(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  undefined8 *extraout_x8;
  int extraout_w10;
  ulong unaff_x19;
  long *unaff_x20;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [40];
  
  if ((ulong)((((long *)*param_1)[2] - *(long *)*param_1) / 0x70) < param_2) {
    func_0x00010736005c();
    func_0x000107330ea4();
    puStack_60 = &stack0xfffffffffffffff0;
    plVar1 = (long *)*unaff_x20 + 2;
    if ((ulong)((*plVar1 - *(long *)*unaff_x20) / 0x70) < unaff_x19) {
      if (unaff_x19 < 0x24924924924924a) {
        func_0x00010726d8e4(auStack_48);
        func_0x0001009ebb10();
        func_0x00010726d894();
        func_0x00010726da98(auStack_48);
      }
      else {
        func_0x00010726d8d8();
        func_0x000107360128();
        func_0x00010726da98();
        func_0x00010736001c();
        pcStack_58 = FUN_10735e704;
        uStack_98 = (undefined4)*plVar1;
        uStack_88 = param_5[1];
        uStack_90 = *param_5;
        uStack_78 = param_3;
        if (param_5[1] != 0) {
          do {
            func_0x00010736000c();
          } while (extraout_w10 != 0);
        }
        FUN_10735e77c(&uStack_a0);
        *extraout_x8 = uStack_a0;
        func_0x00010733f4f4(&uStack_90);
      }
    }
    return;
  }
  return;
}



/* Entry: 107354984; end: 1073549b7;  */

void FUN_107354984(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long lStack_40;
  
  pbVar1 = (byte *)(param_1 + 0x458);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((bVar2 & 1) == 0) && (*(int *)(param_1 + 0x45c) == 0)) {
    func_0x000107360a34();
    if (lStack_40 != 0) {
      lVar5 = *(long *)(param_1 + 0x150);
      FUN_10735d7c8(auStack_48,lVar5,FUN_1073549b8,0);
      func_0x0001009ebb10();
      FUN_1073ae140();
      func_0x000107360af4();
      if (lVar5 != 0) {
        func_0x000107360108();
      }
    }
    func_0x000107360630();
    return;
  }
  return;
}



/* Entry: 1073549b8; end: 107355173;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000107354c30 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1073549b8(undefined8 param_1,ulong param_2)

{
  undefined1 uVar1;
  bool bVar2;
  long *plVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *plVar4;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x25;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined4 uVar18;
  undefined8 uStack_c8;
  long alStack_c0 [2];
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  
  FUN_107356004();
  if ((*(char *)(param_2 + 0x458) != '\x01') || (0 < *(int *)(param_2 + 0x45c))) {
    func_0x00010736002c(param_2 + 0x460);
    __ZNSt3__15mutex4lockEv();
    *(undefined1 *)(param_2 + 0x4d0) = 0;
    __ZNSt3__118condition_variable10notify_oneEv(param_2 + 0x4a0);
    func_0x0001000df5a0(&stack0xffffffffffffffd0);
    return;
  }
  alStack_c0[0] = param_2 + 0x348;
  func_0x000107360378();
  func_0x000107279a5c();
  uVar10 = (ulong)*(byte *)(param_2 + 0x3f1);
  plVar16 = (long *)(uVar10 + 1);
  uStack_a8 = 0;
  lStack_b0 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_90 = 0x3f800000;
  lVar8 = *(long *)(param_2 + 0x3f8);
  uVar6 = (*(long *)(param_2 + 0x408) - lVar8) / 0x28;
  uVar1 = uVar10 <= uVar6;
  uVar12 = param_2;
  if ((bool)uVar1 && uVar6 != uVar10) {
    func_0x000107360854(*(undefined8 *)(param_2 + 0x400));
    for (; unaff_x25 != (long *)0x0; unaff_x25 = (long *)((long)unaff_x25 + -1)) {
      *(undefined4 *)(lVar8 + 0x20) = 0x3f800000;
      if (*(long *)(lVar8 + 8) != 0) {
        FUN_107358944(lVar8);
        FUN_107358968();
      }
      lVar8 = lVar8 + 0x28;
    }
    unaff_x25 = (long *)0x0;
    if (param_2 <= uVar10) {
      plVar16 = (long *)((long)plVar16 - param_2);
      goto LAB_107354af4;
    }
    func_0x000107360b84();
    FUN_10735871c();
  }
  else {
    func_0x000107358750(param_2 + 0x3f8);
    func_0x000107360270(*(undefined8 *)(param_2 + 0x3f8));
    uVar6 = extraout_x9;
    if ((bool)uVar1) {
      uVar6 = extraout_x8 & 0xffffffffffff | 0x666000000000000;
    }
    func_0x000107358684(param_2 + 0x3f8,uVar6);
LAB_107354af4:
    plVar9 = *(long **)(param_2 + 0x400);
    plVar15 = plVar9 + ((ulong)plVar16 & 0xffffffff) * 5;
    for (; uVar1 = (long)plVar9 - (long)plVar15 < 0, plVar9 != plVar15; plVar9 = plVar9 + 5) {
      plVar9[1] = 0;
      *plVar9 = 0;
      plVar9[3] = 0;
      plVar9[2] = 0;
      *(undefined4 *)(plVar9 + 4) = 0x3f800000;
      func_0x0001073604c4();
      FUN_107358bf4();
      plVar14 = plVar9 + 2;
      plVar7 = &lStack_a0;
LAB_107354b40:
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) {
        plVar5 = plVar9 + 3;
        func_0x00010784b234(plVar5,plVar7 + 2);
        unaff_x25 = (long *)plVar9[1];
        plVar3 = plVar5;
        if (unaff_x25 != (long *)0x0) {
          uVar6 = (long)unaff_x25 - 1;
          if (((ulong)unaff_x25 & uVar6) == 0) {
            plVar16 = (long *)((long)unaff_x25 + 0x7fffffffffffffffU & (ulong)plVar5);
            uVar1 = false;
          }
          else {
            uVar1 = (long)plVar5 - (long)unaff_x25 < 0;
            plVar16 = plVar5;
            if (unaff_x25 <= plVar5) {
              uVar12 = 0;
              if (unaff_x25 != (long *)0x0) {
                uVar12 = (ulong)plVar5 / (ulong)unaff_x25;
              }
              plVar16 = (long *)((long)plVar5 - uVar12 * (long)unaff_x25);
            }
          }
          plVar17 = *(long **)(*plVar9 + (long)plVar16 * 8);
          if (plVar17 != (long *)0x0) {
            do {
              while( true ) {
                plVar17 = (long *)*plVar17;
                if (plVar17 == (long *)0x0) goto LAB_107354be8;
                plVar13 = (long *)plVar17[1];
                uVar1 = (long)plVar13 - (long)plVar5 < 0;
                if (plVar13 != plVar5) break;
                plVar3 = plVar17 + 2;
                func_0x00010726b840(plVar3,plVar7 + 2);
                if (((ulong)plVar3 & 1) != 0) goto LAB_107354b40;
              }
              if (((ulong)unaff_x25 & uVar6) == 0) {
                plVar13 = (long *)((ulong)plVar13 & uVar6);
              }
              else if (unaff_x25 <= plVar13) {
                uVar12 = 0;
                if (unaff_x25 != (long *)0x0) {
                  uVar12 = (ulong)plVar13 / (ulong)unaff_x25;
                }
                plVar13 = (long *)((long)plVar13 - uVar12 * (long)unaff_x25);
              }
              uVar1 = (long)plVar13 - (long)plVar16 < 0;
            } while (plVar13 == plVar16);
          }
        }
LAB_107354be8:
        func_0x000107360490();
        uStack_78 = 0;
        *plVar3 = 0;
        plVar3[1] = (long)plVar5;
        lVar8 = plVar7[3];
        plVar3[2] = plVar7[2];
        *(int *)(plVar3 + 3) = (int)lVar8;
        plStack_88 = plVar3;
        plStack_80 = plVar14;
        FUN_107358a7c(plVar3 + 4,plVar7 + 4);
        uStack_78 = CONCAT71(uStack_78._1_7_,1);
        func_0x000107360148(plVar9[3]);
        if (unaff_x25 == (long *)0x0) {
LAB_107354c38:
          func_0x00010735fd34((long)unaff_x25 << 1);
          FUN_107358bf4(plVar9);
          unaff_x25 = (long *)plVar9[1];
          if (((ulong)unaff_x25 & (long)unaff_x25 - 1U) == 0) {
            bVar2 = false;
            plVar16 = (long *)((long)unaff_x25 + 0x7fffffffffffffffU & (ulong)plVar5);
          }
          else {
            bVar2 = (long)plVar5 - (long)unaff_x25 < 0;
            plVar16 = plVar5;
            if (unaff_x25 <= plVar5) {
              uVar6 = 0;
              if (unaff_x25 != (long *)0x0) {
                uVar6 = (ulong)plVar5 / (ulong)unaff_x25;
              }
              plVar16 = (long *)((long)plVar5 - uVar6 * (long)unaff_x25);
            }
          }
        }
        else {
          func_0x00010736013c(param_1,(int)plVar9[4],(float)unaff_x25);
          bVar2 = false;
          if ((bool)uVar1) goto LAB_107354c38;
        }
        uVar1 = bVar2;
        lVar8 = *plVar9;
        if (*(long *)(lVar8 + (long)plVar16 * 8) == 0) {
          *plVar3 = *plVar14;
          *plVar14 = (long)plVar3;
          *(long **)(lVar8 + (long)plVar16 * 8) = plVar14;
          if (*plVar3 != 0) {
            plVar5 = *(long **)(*plVar3 + 8);
            if (((ulong)unaff_x25 & (long)unaff_x25 - 1U) == 0) {
              plVar5 = (long *)((ulong)plVar5 & (long)unaff_x25 - 1U);
              uVar1 = false;
            }
            else {
              uVar1 = (long)plVar5 - (long)unaff_x25 < 0;
              if (unaff_x25 <= plVar5) {
                uVar6 = 0;
                if (unaff_x25 != (long *)0x0) {
                  uVar6 = (ulong)plVar5 / (ulong)unaff_x25;
                }
                plVar5 = (long *)((long)plVar5 - uVar6 * (long)unaff_x25);
              }
            }
            *(long **)(lVar8 + (long)plVar5 * 8) = plVar3;
          }
        }
        else {
          func_0x0001073606e4();
        }
        plStack_88 = (long *)0x0;
        plVar9[3] = plVar9[3] + 1;
        func_0x000107358bc0(&plStack_88);
        goto LAB_107354b40;
      }
      uVar12 = 0;
    }
    *(long **)(param_2 + 0x400) = plVar15;
  }
  plVar16 = &lStack_b0;
  FUN_107358cf0();
  uVar11 = (ulong)*(byte *)(param_2 + 0x3f1);
  uVar6 = uVar11 + 1;
  uStack_a8 = 0;
  lStack_b0 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_90 = 0x3f800000;
  plVar9 = *(long **)(param_2 + 0x410);
  uVar10 = (*(long *)(param_2 + 0x420) - (long)plVar9) / 0x28;
  uVar1 = uVar11 <= uVar10;
  if ((bool)uVar1 && uVar10 != uVar11) {
    func_0x000107360854(*(undefined8 *)(param_2 + 0x418));
    uStack_c8 = uStack_a8;
    plVar15 = (long *)lStack_a0;
    for (; uStack_a8 = uStack_c8, lStack_a0 = (long)plVar15, unaff_x25 != (long *)0x0;
        unaff_x25 = (long *)((long)unaff_x25 + -1)) {
      *(undefined4 *)(plVar9 + 4) = uStack_90;
      if (plVar9[1] != 0) {
        plVar16 = plVar9;
        FUN_107358d1c();
        for (plVar14 = plVar15;
            (plVar15 = plVar14, plVar16 != (long *)0x0 &&
            (plVar15 = (long *)0x0, plVar14 != (long *)0x0)); plVar14 = (long *)*plVar14) {
          func_0x000107262f3c(plVar16 + 2,plVar14 + 2);
          func_0x0001072ed100(plVar16 + 9,plVar14 + 9);
          plVar16 = (long *)*plVar16;
          func_0x000107360924();
        }
        FUN_1073590a4();
      }
      for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        func_0x000107360488();
        uStack_78 = 0;
        plStack_88 = plVar16;
        plStack_80 = plVar9 + 2;
        *plVar16 = 0;
        plVar16[1] = 0;
        FUN_107359130(plVar16 + 2,plVar15 + 2);
        uStack_78 = CONCAT71(uStack_78._1_7_,1);
        plVar14 = plVar9 + 3;
        func_0x00010726364c(plVar14,plVar16 + 2);
        plVar16[1] = (long)plVar14;
        func_0x000107360924();
        plStack_88 = (long *)0x0;
        func_0x000107360604();
        plVar16 = plVar14;
      }
      plVar9 = plVar9 + 5;
      uStack_c8 = uStack_a8;
      plVar15 = (long *)lStack_a0;
    }
    if (uVar11 < uVar12) {
      func_0x000107360b84();
      FUN_10735883c();
      goto LAB_107355078;
    }
    uVar6 = uVar6 - uVar12;
    uVar18 = uStack_90;
  }
  else {
    func_0x000107358870(param_2 + 0x410);
    func_0x000107360270(*(undefined8 *)(param_2 + 0x410));
    uVar12 = extraout_x9_00;
    if ((bool)uVar1) {
      uVar12 = extraout_x8_00 & 0xffffffffffff | 0x666000000000000;
    }
    func_0x0001073587a4(param_2 + 0x410,uVar12);
    uStack_c8 = 0;
    uVar18 = 0x3f800000;
  }
  plVar16 = *(long **)(param_2 + 0x418);
  plVar15 = plVar16 + (uVar6 & 0xffffffff) * 5;
  for (; uVar1 = (long)plVar16 - (long)plVar15 < 0, plVar16 != plVar15; plVar16 = plVar16 + 5) {
    plVar16[1] = 0;
    *plVar16 = 0;
    plVar16[3] = 0;
    plVar16[2] = 0;
    *(undefined4 *)(plVar16 + 4) = uVar18;
    FUN_10735919c(plVar16,uStack_c8);
    plVar14 = plVar16 + 2;
    plVar7 = &lStack_a0;
LAB_107354ebc:
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) {
      plVar5 = plVar16 + 3;
      func_0x00010726364c(plVar5,plVar7 + 2);
      plVar17 = (long *)plVar16[1];
      plVar3 = plVar5;
      if (plVar17 != (long *)0x0) {
        uVar6 = (long)plVar17 - 1;
        if (((ulong)plVar17 & uVar6) == 0) {
          plVar9 = (long *)(uVar6 & (ulong)plVar5);
          uVar1 = false;
        }
        else {
          uVar1 = (long)plVar5 - (long)plVar17 < 0;
          plVar9 = plVar5;
          if (plVar17 <= plVar5) {
            uVar12 = 0;
            if (plVar17 != (long *)0x0) {
              uVar12 = (ulong)plVar5 / (ulong)plVar17;
            }
            plVar9 = (long *)((long)plVar5 - uVar12 * (long)plVar17);
          }
        }
        plVar13 = *(long **)(*plVar16 + (long)plVar9 * 8);
        if (plVar13 != (long *)0x0) {
          do {
            while( true ) {
              plVar13 = (long *)*plVar13;
              if (plVar13 == (long *)0x0) goto LAB_107354f60;
              plVar4 = (long *)plVar13[1];
              uVar1 = (long)plVar4 - (long)plVar5 < 0;
              if (plVar4 != plVar5) break;
              plVar3 = plVar13 + 2;
              func_0x000104c32db4(plVar3,plVar7 + 2);
              if (((ulong)plVar3 & 1) != 0) goto LAB_107354ebc;
            }
            if (((ulong)plVar17 & uVar6) == 0) {
              plVar4 = (long *)((ulong)plVar4 & uVar6);
            }
            else if (plVar17 <= plVar4) {
              uVar12 = 0;
              if (plVar17 != (long *)0x0) {
                uVar12 = (ulong)plVar4 / (ulong)plVar17;
              }
              plVar4 = (long *)((long)plVar4 - uVar12 * (long)plVar17);
            }
            uVar1 = (long)plVar4 - (long)plVar9 < 0;
          } while (plVar4 == plVar9);
        }
      }
LAB_107354f60:
      func_0x000107360488();
      uStack_78 = 0;
      *plVar3 = 0;
      plVar3[1] = (long)plVar5;
      plStack_88 = plVar3;
      plStack_80 = plVar14;
      FUN_107359130(plVar3 + 2,plVar7 + 2);
      uStack_78 = CONCAT71(uStack_78._1_7_,1);
      func_0x000107360148(plVar16[3]);
      if (plVar17 == (long *)0x0) {
LAB_107354f9c:
        func_0x00010735fd34((long)plVar17 << 1);
        FUN_10735919c(plVar16);
        plVar17 = (long *)plVar16[1];
        if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
          bVar2 = false;
          plVar9 = (long *)((long)plVar17 - 1U & (ulong)plVar5);
        }
        else {
          bVar2 = (long)plVar5 - (long)plVar17 < 0;
          plVar9 = plVar5;
          if (plVar17 <= plVar5) {
            uVar6 = 0;
            if (plVar17 != (long *)0x0) {
              uVar6 = (ulong)plVar5 / (ulong)plVar17;
            }
            plVar9 = (long *)((long)plVar5 - uVar6 * (long)plVar17);
          }
        }
      }
      else {
        func_0x00010736013c(param_1,(int)plVar16[4],(float)plVar17);
        bVar2 = false;
        if ((bool)uVar1) goto LAB_107354f9c;
      }
      uVar1 = bVar2;
      lVar8 = *plVar16;
      plVar5 = *(long **)(lVar8 + (long)plVar9 * 8);
      if (plVar5 == (long *)0x0) {
        *plVar3 = *plVar14;
        *plVar14 = (long)plVar3;
        *(long **)(lVar8 + (long)plVar9 * 8) = plVar14;
        if (*plVar3 != 0) {
          plVar5 = *(long **)(*plVar3 + 8);
          if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
            plVar5 = (long *)((ulong)plVar5 & (long)plVar17 - 1U);
            uVar1 = false;
          }
          else {
            uVar1 = (long)plVar5 - (long)plVar17 < 0;
            if (plVar17 <= plVar5) {
              uVar6 = 0;
              if (plVar17 != (long *)0x0) {
                uVar6 = (ulong)plVar5 / (ulong)plVar17;
              }
              plVar5 = (long *)((long)plVar5 - uVar6 * (long)plVar17);
            }
          }
          *(long **)(lVar8 + (long)plVar5 * 8) = plVar3;
        }
      }
      else {
        *plVar3 = *plVar5;
        *plVar5 = (long)plVar3;
      }
      plStack_88 = (long *)0x0;
      plVar16[3] = plVar16[3] + 1;
      func_0x000107360604();
      goto LAB_107354ebc;
    }
  }
  *(long **)(param_2 + 0x418) = plVar15;
LAB_107355078:
  FUN_107359298(&lStack_b0);
  func_0x000107279ee0(alStack_c0);
  func_0x000107360a80();
  return;
}



/* Entry: 107355174; end: 1073551ab;  */

void FUN_107355174(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long lStack_40;
  
  piVar1 = (int *)(param_1 + 0x45c);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((iVar2 == 0) && (*(char *)(param_1 + 0x458) == '\x01')) {
    func_0x000107360a34();
    if (lStack_40 != 0) {
      lVar5 = *(long *)(param_1 + 0x150);
      FUN_10735d7c8(auStack_48,lVar5,FUN_1073551ac,0);
      func_0x0001009ebb10();
      FUN_1073ae140();
      func_0x000107360af4();
      if (lVar5 != 0) {
        func_0x000107360108();
      }
    }
    func_0x000107360630();
    return;
  }
  return;
}



/* Entry: 1073551ac; end: 1073554b3;  */

void FUN_1073551ac(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar11;
  undefined ***unaff_x21;
  undefined **unaff_x22;
  undefined1 auStack_188 [8];
  long lStack_180;
  undefined **ppuStack_170;
  undefined8 **ppuStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_118;
  undefined1 uStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_80 [40];
  undefined8 uStack_58;
  
  func_0x00010735fd78();
  uStack_58 = extraout_x8;
  FUN_107356004();
  uVar6 = *(char *)(unaff_x19 + 0x458) == '\x01';
  if (((bool)uVar6) && (uVar6 = *(int *)(unaff_x19 + 0x45c) == 0, *(int *)(unaff_x19 + 0x45c) < 1))
  {
    func_0x00010735fd20(uStack_58);
    if ((bool)uVar6) {
      func_0x00010736002c(unaff_x19 + 0x460);
      __ZNSt3__15mutex4lockEv();
      *(undefined1 *)(unaff_x19 + 0x4d0) = 0;
      __ZNSt3__118condition_variable10notify_oneEv(unaff_x19 + 0x4a0);
      func_0x0001000df5a0(&stack0xffffffffffffffd0);
      return;
    }
  }
  else {
    puStack_c8 = &UNK_10e52b660;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    ppuStack_a8 = (undefined **)(unaff_x19 + 0x260);
    ppuStack_a0 = (undefined8 **)CONCAT71(ppuStack_a0._1_7_,1);
    func_0x00010724e404();
    FUN_10735a8b0(&puStack_c8,unaff_x19 + 0x308);
    func_0x00010724e49c(&ppuStack_a8);
    puStack_e8 = &UNK_10e52b660;
    uStack_e0 = 0;
    uStack_d8 = 0;
    lStack_d0 = 0;
    puStack_108 = &UNK_10e52b660;
    lStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    lStack_118 = unaff_x19 + 0x348;
    uStack_110 = 1;
    func_0x000107279a5c();
    lVar11 = *(long *)(unaff_x19 + 0x448);
    if (lVar11 == 0) {
      FUN_107356580(&ppuStack_a8,
                    (uint)*(byte *)(unaff_x19 + 0x1e9) * 0x100 + 0x100 & 0xff00 |
                    (uint)*(byte *)(unaff_x19 + 0x1e8),&puStack_c8,0);
      FUN_107351e54(&puStack_138,unaff_x19 + 0x3f0,&ppuStack_a8,auStack_80);
      pppuVar10 = (undefined ***)&puStack_138;
      FUN_10735ceb4(&puStack_e8);
      func_0x00010731e248(&puStack_138);
      FUN_107356d04(&ppuStack_a8);
    }
    else {
      puVar8 = (undefined8 *)0x20;
      __Znwm();
      *puVar8 = &PTR_FUN_1109a4f38;
      puVar8[1] = &puStack_c8;
      puVar8[2] = &puStack_e8;
      puVar8[3] = unaff_x19;
      pppuVar10 = &ppuStack_a8;
      puStack_90 = puVar8;
      FUN_10736cb80(lVar11);
      FUN_10735e63c(&ppuStack_a8);
    }
    unaff_x20 = *(undefined8 *)(unaff_x19 + 0x440);
    func_0x000107279ee0(&lStack_118);
    if (lStack_d0 != 0) {
      ppuVar9 = &puStack_c8;
      FUN_107352fb8();
      ppuStack_a8 = ppuVar9;
      while (pppuVar5 = pppuVar10, ppuStack_a8 != (undefined **)0x0) {
        unaff_x22 = &puStack_108;
        pppuVar10 = pppuVar5;
        ppuStack_a0 = pppuVar5;
        FUN_10735d05c();
        if (((ulong)pppuVar10 & 1) != 0) {
          FUN_10735af1c(lStack_100 + (long)unaff_x22 * 0x48,pppuVar5);
        }
        FUN_107356d80(lStack_100 + (long)unaff_x22 * 0x48 + 0x38,pppuVar5[7],pppuVar5[8]);
        FUN_107352fe0(&ppuStack_a8);
        pppuVar10 = (undefined ***)ppuStack_a0;
        unaff_x21 = pppuVar5;
      }
      puStack_138 = (undefined **)0x0;
      uStack_130 = 0;
      uStack_128 = 0;
      ppuStack_a8 = (undefined **)&UNK_10e52b660;
      ppuStack_a0 = (undefined8 **)0x0;
      uStack_98 = 0;
      puStack_90 = (undefined8 *)0x0;
      FUN_107356dc0();
      func_0x000107261dac(&ppuStack_a8);
      func_0x00010731e26c(&puStack_138);
    }
    func_0x000107360a80();
    FUN_10735b8f8(&puStack_108);
    func_0x00010731e248(&puStack_e8);
    FUN_10735ab80(&puStack_c8);
    func_0x00010735fd20(uStack_58);
    if ((bool)uVar6) {
      return;
    }
  }
  ___stack_chk_fail();
  func_0x000107360128();
  func_0x00010731e248();
  FUN_107356d04(&ppuStack_a8);
  func_0x000107279ee0(&lStack_118);
  FUN_10735b8f8(&puStack_108);
  func_0x00010731e248(&puStack_e8);
  ppuVar9 = &puStack_c8;
  FUN_10735ab80();
  func_0x00010736001c();
  piVar1 = (int *)((long)ppuVar9 + 0x45c);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((iVar2 + -1 == 0) && (*(char *)(ppuVar9 + 0x8b) == '\x01')) {
    ppuStack_170 = unaff_x22;
    ppuStack_168 = unaff_x21;
    uStack_160 = unaff_x20;
    func_0x000107360a34();
    if (lStack_180 != 0) {
      puVar7 = ppuVar9[0x2a];
      FUN_10735d7c8(auStack_188,puVar7,FUN_1073549b8,0);
      func_0x0001009ebb10();
      FUN_1073ae140();
      func_0x000107360af4();
      if (puVar7 != (undefined *)0x0) {
        func_0x000107360108();
      }
    }
    func_0x000107360630();
    return;
  }
  return;
}



/* Entry: 1073554b4; end: 1073554eb;  */

void FUN_1073554b4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long lStack_40;
  
  piVar1 = (int *)(param_1 + 0x45c);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((iVar2 + -1 == 0) && (*(char *)(param_1 + 0x458) == '\x01')) {
    func_0x000107360a34();
    if (lStack_40 != 0) {
      lVar5 = *(long *)(param_1 + 0x150);
      FUN_10735d7c8(auStack_48,lVar5,FUN_1073549b8,0);
      func_0x0001009ebb10();
      FUN_1073ae140();
      func_0x000107360af4();
      if (lVar5 != 0) {
        func_0x000107360108();
      }
    }
    func_0x000107360630();
    return;
  }
  return;
}



/* Entry: 1073554ec; end: 107355867;  */

void FUN_1073554ec(undefined8 param_1,byte *param_2,int param_3)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_150 [32];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [16];
  undefined4 *apuStack_108 [2];
  long lStack_f8;
  undefined1 uStack_f0;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [16];
  long lStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  uint uStack_58;
  
  func_0x000107360618();
  if ((param_3 == 0) ||
     (uStack_58 = (uint)*(byte *)(unaff_x20 + 0x1e9), *param_2 <= *(byte *)(unaff_x20 + 0x1e9))) {
    pbStack_60 = *(byte **)param_2;
    uStack_58 = *(uint *)(param_2 + 8);
  }
  else {
    pbVar2 = param_2;
    FUN_107355868();
    pbStack_60 = pbVar2;
  }
  FUN_107330040(&uStack_70);
  func_0x0001073608bc();
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_f8 = unaff_x20 + 0x260;
  uStack_f0 = 1;
  func_0x00010724e404();
  FUN_10732f7e8(auStack_90,unaff_x20 + 0x328);
  func_0x00010724e49c(&lStack_f8);
  lStack_a0 = unaff_x20 + 0x348;
  uStack_98 = 1;
  func_0x00010724e404();
  if (((ulong)pbStack_60 & 0xff) <
      (ulong)((*(long *)(unaff_x20 + 0x400) - *(long *)(unaff_x20 + 0x3f8)) / 0x28)) {
    lVar3 = *(long *)(unaff_x20 + 0x3f8) + ((ulong)pbStack_60 & 0xff) * 0x28;
    FUN_10735d3c4(lVar3,&pbStack_60);
    if (lVar3 != 0) {
      if ((byte)pbStack_60 == *param_2) {
        lVar1 = *(long *)(lVar3 + 0x28);
        for (lVar3 = *(long *)(lVar3 + 0x20); lVar3 != lVar1; lVar3 = lVar3 + 0x10) {
          FUN_1073558a4(&lStack_f8,lVar3);
          if (lStack_f8 != 0) {
            func_0x00010735495c(&uStack_70);
          }
          func_0x00010735ce54(&lStack_f8);
        }
      }
      else {
        func_0x00010786ea9c(&lStack_f8,param_2);
        lVar1 = *(long *)(lVar3 + 0x28);
        for (lVar3 = *(long *)(lVar3 + 0x20); lVar3 != lVar1; lVar3 = lVar3 + 0x10) {
          FUN_1073558a4(apuStack_108,lVar3);
          if (apuStack_108[0] != (undefined4 *)0x0) {
            switch(*apuStack_108[0]) {
            case 1:
              plVar4 = *(long **)(apuStack_108[0] + 2);
              uVar7 = 0;
              if (plVar4 == *(long **)(apuStack_108[0] + 4)) goto code_r0x00010735573c;
              uVar6 = 0;
              if ((long *)*plVar4 != (long *)plVar4[1]) {
                puVar5 = *(undefined8 **)*plVar4;
                goto code_r0x000107355764;
              }
              break;
            case 2:
              plVar4 = *(long **)(apuStack_108[0] + 2);
              uVar6 = 0;
              if (plVar4 == *(long **)(apuStack_108[0] + 4)) goto code_r0x000107355774;
              puVar5 = (undefined8 *)*plVar4;
              uVar7 = 0;
              if (puVar5 != (undefined8 *)plVar4[1]) goto code_r0x000107355764;
              break;
            case 3:
              puVar5 = *(undefined8 **)(apuStack_108[0] + 2);
              if (puVar5 == *(undefined8 **)(apuStack_108[0] + 4)) goto code_r0x00010735573c;
code_r0x00010735571c:
              uVar7 = *puVar5;
              uVar6 = puVar5[1];
              break;
            case 4:
              if (*(long **)(apuStack_108[0] + 2) == *(long **)(apuStack_108[0] + 4))
              goto code_r0x00010735573c;
              puVar5 = (undefined8 *)**(long **)(apuStack_108[0] + 2);
code_r0x000107355764:
              uVar7 = *puVar5;
              uVar6 = puVar5[1];
              break;
            case 5:
              puVar5 = *(undefined8 **)(apuStack_108[0] + 2);
              if (puVar5 != *(undefined8 **)(apuStack_108[0] + 4)) goto code_r0x00010735571c;
code_r0x000107355774:
              uVar6 = 0;
              uVar7 = 0;
              break;
            case 6:
              uVar7 = *(undefined8 *)(apuStack_108[0] + 2);
              uVar6 = *(undefined8 *)(apuStack_108[0] + 4);
              break;
            default:
code_r0x00010735573c:
              uVar7 = 0;
              uVar6 = 0;
            }
            func_0x000107246514(uVar6,uVar7,auStack_118,0);
            plVar4 = &lStack_f8;
            func_0x00010786eb68(plVar4,auStack_118,0);
            if ((int)plVar4 != 0) {
              func_0x00010735495c(&uStack_70,apuStack_108[0]);
            }
          }
          func_0x00010735ce54(apuStack_108);
        }
      }
      func_0x00010724e49c(&lStack_a0);
      uStack_128 = uStack_68;
      uStack_130 = uStack_70;
      uStack_70 = 0;
      uStack_68 = 0;
      FUN_10732f758(auStack_150,auStack_90);
      func_0x000107360794();
      FUN_10735a2dc();
      func_0x000107360464();
      func_0x00010726dd08(&uStack_130);
      goto LAB_1073557e8;
    }
  }
  FUN_107330040(auStack_b0);
  FUN_10732f758(auStack_d0,auStack_90);
  FUN_10735a2dc();
  func_0x000107261dac(auStack_d0);
  func_0x00010726dd08(auStack_b0);
  func_0x00010724e49c(&lStack_a0);
LAB_1073557e8:
  func_0x000107261dac(auStack_90);
  func_0x00010726dd08(&uStack_70);
  return;
}



/* Entry: 107355868; end: 1073558a3;  */

undefined1  [16] FUN_107355868(byte *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  
  bVar2 = *param_1;
  uVar3 = param_2 - bVar2;
  uVar4 = bVar2 - param_2;
  uVar1 = *(uint *)(param_1 + 4) << (ulong)(uVar3 & 0x1f);
  uVar3 = *(uint *)(param_1 + 8) << (ulong)(uVar3 & 0x1f);
  if (param_2 <= bVar2) {
    uVar1 = *(uint *)(param_1 + 4) >> (ulong)(uVar4 & 0x1f);
    uVar3 = *(uint *)(param_1 + 8) >> (ulong)(uVar4 & 0x1f);
  }
  auVar5._4_4_ = uVar1;
  auVar5._0_4_ = param_2;
  auVar5._8_4_ = uVar3;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 1073558a4; end: 1073558df;  */

void FUN_1073558a4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 1073558e0; end: 107355a2b;  */

void FUN_1073558e0(long *param_1,undefined1 *param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auStack_190 [32];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [120];
  undefined1 auStack_b8 [64];
  long *aplStack_78 [2];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  func_0x000107360618();
  func_0x00010735fda8();
  uStack_48 = extraout_x8;
  (**(code **)(*param_1 + 0x88))(auStack_b8);
  func_0x0001072c8f9c(&uStack_140);
  uVar2 = *aplStack_78[0] == aplStack_78[0][1];
  if (!(bool)uVar2) {
    func_0x000107331050(auStack_130,aplStack_78);
    param_4 = (ulong)*(uint *)(param_2 + 4);
    func_0x0001072bf928(auStack_158,auStack_130,*param_2,param_4,*(undefined4 *)(param_2 + 8),
                        param_3);
    FUN_10735a354(&uStack_140,auStack_158);
    func_0x0001072c8f3c(auStack_158);
    FUN_107327aec(auStack_130);
  }
  uStack_168 = uStack_138;
  uStack_170 = uStack_140;
  uStack_140 = 0;
  uStack_138 = 0;
  puVar6 = auStack_68;
  FUN_10732f758(auStack_190);
  func_0x000107360794();
  FUN_10735a3e4();
  func_0x000107360464();
  func_0x0001073608d0();
  func_0x0001072c8f3c(&uStack_140);
  func_0x000107331634();
  func_0x00010735fd20(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072c8f3c(auStack_158);
  FUN_107327aec(auStack_130);
  func_0x0001072c8f3c(&uStack_140);
  puVar3 = auStack_b8;
  func_0x000107331634();
  func_0x00010736001c();
  func_0x00010735ffc4(puVar3 + 0x348);
  uVar1 = (*(long *)(puVar3 + 0x418) - *(long *)(puVar3 + 0x410)) / 0x28;
  uVar2 = uVar1 == ((ulong)puVar6 & 0xffffffff);
  if (((ulong)puVar6 & 0xffffffff) < uVar1) {
    plVar10 = (long *)(*(long *)(puVar3 + 0x410) + ((ulong)puVar6 & 0xffffffff) * 0x28);
    plVar8 = (long *)plVar10[1];
    if ((plVar8 != (long *)0x0) && (plVar4 = plVar10 + 3, *plVar4 != 0)) {
      func_0x00010726364c(plVar4,param_4);
      func_0x000107360c4c();
      if ((bool)uVar2) {
        plVar9 = (long *)((ulong)plVar4 & (ulong)auStack_b8);
      }
      else {
        plVar9 = plVar4;
        if (plVar8 <= plVar4) {
          uVar1 = 0;
          if (plVar8 != (long *)0x0) {
            uVar1 = (ulong)plVar4 / (ulong)plVar8;
          }
          plVar9 = (long *)((long)plVar4 - uVar1 * (long)plVar8);
        }
      }
      plVar10 = *(long **)(*plVar10 + (long)plVar9 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          while( true ) {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) goto LAB_107355b28;
            plVar7 = (long *)plVar10[1];
            if (plVar4 != plVar7) break;
            lVar5 = (long)(plVar10 + 2);
            func_0x000104c32db4(lVar5,param_4);
            if ((int)lVar5 != 0) {
              func_0x000107270b5c(extraout_x8_00,plVar10 + 9);
              uVar2 = 1;
              goto LAB_107355b30;
            }
          }
          if (((ulong)plVar8 & (ulong)auStack_b8) == 0) {
            plVar7 = (long *)((ulong)plVar7 & (ulong)auStack_b8);
          }
          else if (plVar8 <= plVar7) {
            uVar1 = 0;
            if (plVar8 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar8;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar8);
          }
        } while (plVar7 == plVar9);
      }
    }
  }
LAB_107355b28:
  uVar2 = 0;
  *extraout_x8_00 = 0;
LAB_107355b30:
  extraout_x8_00[0x28] = uVar2;
  func_0x0001073601f0();
  return;
}



/* Entry: 107355a2c; end: 107355b63;  */

void FUN_107355a2c(undefined1 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong unaff_x23;
  long *plVar7;
  long *plVar8;
  
  func_0x00010735ffc4(param_2 + 0x348);
  uVar1 = (*(long *)(param_2 + 0x418) - *(long *)(param_2 + 0x410)) / 0x28;
  uVar2 = uVar1 == (param_3 & 0xffffffff);
  if ((param_3 & 0xffffffff) < uVar1) {
    plVar8 = (long *)(*(long *)(param_2 + 0x410) + (param_3 & 0xffffffff) * 0x28);
    plVar6 = (long *)plVar8[1];
    if ((plVar6 != (long *)0x0) && (plVar3 = plVar8 + 3, *plVar3 != 0)) {
      func_0x00010726364c(plVar3,param_4);
      func_0x000107360c4c();
      if ((bool)uVar2) {
        plVar7 = (long *)((ulong)plVar3 & unaff_x23);
      }
      else {
        plVar7 = plVar3;
        if (plVar6 <= plVar3) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar3 / (ulong)plVar6;
          }
          plVar7 = (long *)((long)plVar3 - uVar1 * (long)plVar6);
        }
      }
      plVar8 = *(long **)(*plVar8 + (long)plVar7 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          while( true ) {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_107355b28;
            plVar5 = (long *)plVar8[1];
            if (plVar3 != plVar5) break;
            lVar4 = (long)(plVar8 + 2);
            func_0x000104c32db4(lVar4,param_4);
            if ((int)lVar4 != 0) {
              func_0x000107270b5c(param_1,plVar8 + 9);
              uVar2 = 1;
              goto LAB_107355b30;
            }
          }
          if (((ulong)plVar6 & unaff_x23) == 0) {
            plVar5 = (long *)((ulong)plVar5 & unaff_x23);
          }
          else if (plVar6 <= plVar5) {
            uVar1 = 0;
            if (plVar6 != (long *)0x0) {
              uVar1 = (ulong)plVar5 / (ulong)plVar6;
            }
            plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar6);
          }
        } while (plVar5 == plVar7);
      }
    }
  }
LAB_107355b28:
  uVar2 = 0;
  *param_1 = 0;
LAB_107355b30:
  param_1[0x28] = uVar2;
  func_0x0001073601f0();
  return;
}



/* Entry: 107355b64; end: 107355bb3;  */

int FUN_107355b64(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iStack_14;
  
  piVar1 = (int *)(param_1 + 0x1ec);
  do {
    iStack_14 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iStack_14 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_107355bb4(param_1 + 0x150,FUN_107355c58,0,&iStack_14,param_2);
  return iStack_14;
}



/* Entry: 107355bb4; end: 107355c57;  */

void FUN_107355bb4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_58 [8];
  long lStack_50;
  
  func_0x000107360a34();
  if (lStack_50 != 0) {
    lVar1 = *param_1;
    FUN_10735e704(auStack_58,lVar1,param_2,param_3,param_4,param_5);
    func_0x0001009ebb10();
    FUN_1073ae140();
    func_0x000107360af4();
    if (lVar1 != 0) {
      func_0x000107360108();
    }
  }
  func_0x000107360630();
  return;
}



/* Entry: 107355c58; end: 107356003;  */

void FUN_107355c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 in_ZR;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 extraout_x8;
  long unaff_x19;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_220 [16];
  undefined8 uStack_210;
  undefined **ppuStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [24];
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  func_0x00010735fd78();
  uStack_70 = extraout_x8;
  FUN_107356004();
  FUN_107340554(unaff_x19 + 0x170,param_3);
  puStack_110 = &UNK_10e52b660;
  uStack_108 = 0;
  uStack_100 = 0;
  lStack_f8 = 0;
  puStack_f0 = &UNK_10e52b660;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  puStack_b0 = (undefined *)(unaff_x19 + 0x260);
  uStack_a8 = CONCAT71(uStack_a8._1_7_,1);
  func_0x00010724e404();
  FUN_107357000(&puStack_110,unaff_x19 + 0x308);
  func_0x00010724e49c(&puStack_b0);
  if (lStack_f8 == 0) {
    func_0x000107360a80();
  }
  else {
    FUN_10735702c(unaff_x19 + 0x4d8,0);
    puStack_140 = &UNK_10e52b660;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    plVar10 = *(long **)(unaff_x19 + 0x170);
    if (plVar10 == (long *)0x0) {
      puStack_160 = (undefined *)((ulong)puStack_160 & 0xffffffffffffff00);
    }
    else {
      (**(code **)(*plVar10 + 0x20))(&puStack_178,plVar10);
      uStack_158 = uStack_170;
      puStack_160 = puStack_178;
      uStack_150 = uStack_168;
      uStack_170 = 0;
      uStack_168 = 0;
      puStack_178 = (undefined *)0x0;
    }
    bVar3 = plVar10 != (long *)0x0;
    uStack_148 = bVar3;
    FUN_10735afd4(&uStack_198,unaff_x19 + 0x500);
    puVar6 = (undefined8 *)0x180;
    __Znwm();
    plVar11 = puVar6 + 1;
    *plVar11 = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_1109a4dd8;
    puStack_b0 = (undefined *)((ulong)puStack_b0 & 0xffffffffffffff00);
    uStack_98 = uStack_98 & 0xffffffffffffff00;
    puVar7 = puVar6;
    if (bVar3) {
      uStack_a8 = uStack_158;
      puStack_b0 = puStack_160;
      uStack_a0 = uStack_150;
      func_0x000107360bac();
      uStack_98 = CONCAT71(uStack_98._1_7_,1);
    }
    uVar5 = uStack_190;
    uVar4 = uStack_198;
    uStack_d0 = uStack_198;
    uStack_c8 = uStack_190;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_c0 = uStack_188;
    puStack_78 = (undefined8 *)0x0;
    func_0x000107360498();
    puVar1 = puVar6 + 3;
    *puVar7 = &PTR_FUN_1109a4fb8;
    puVar7[1] = uVar4;
    uStack_d0 = 0;
    uStack_c8 = 0;
    puVar7[2] = uVar5;
    puVar7[3] = uStack_188;
    puVar7[4] = unaff_x19;
    puStack_78 = puVar7;
    FUN_10735eb2c(puVar1,&puStack_110,&puStack_140,&puStack_110,unaff_x19 + 0x4d8,&puStack_b0,
                  auStack_90);
    func_0x0001006393ec(auStack_90);
    func_0x00010725b1d4(&uStack_d0);
    func_0x0001001148fc(&puStack_b0);
    puStack_120 = puVar1;
    puStack_118 = puVar6;
    func_0x00010735ec0c(0);
    func_0x00010725b1d4(&uStack_198);
    func_0x0001001148fc(&puStack_160);
    if (plVar10 != (long *)0x0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_178);
    }
    func_0x000107261dac(&puStack_140);
    puStack_b0 = &UNK_10e52b660;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar7 = &uStack_1d0;
    puStack_1e8 = puVar1;
    puStack_1e0 = puVar6;
    uStack_1d8 = (int)param_2;
    FUN_10735afd4(puVar7,unaff_x19 + 0x500);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_78 = (undefined8 *)0x0;
    func_0x000107360370();
    *puVar7 = &PTR_SUB_1109a5038;
    puVar7[2] = uStack_1c8;
    puVar7[1] = uStack_1d0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    puVar7[3] = uStack_1c0;
    puVar7[4] = unaff_x19;
    puVar7[5] = puVar1;
    puVar7[6] = puVar6;
    *(int *)(puVar7 + 7) = (int)param_2;
    puStack_78 = puVar7;
    FUN_107356058();
    FUN_10735eed0(auStack_90);
    FUN_107357054(&uStack_1d0);
    FUN_10735ec18(&puStack_1e8);
    func_0x000107261dac(&puStack_b0);
    func_0x000107360a0c();
  }
  ppuVar8 = &puStack_110;
  func_0x000107359780();
  func_0x00010735fd20(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_110;
  func_0x000107359780();
  func_0x00010736001c();
  pcStack_1f8 = FUN_107356004;
  uStack_210 = param_2;
  ppuStack_208 = ppuVar8;
  puStack_200 = &stack0xfffffffffffffff0;
  func_0x00010736002c(ppuVar9 + 0x8c);
  __ZNSt3__15mutex4lockEv();
  while (*(char *)(ppuVar9 + 0x9a) == '\x01') {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(ppuVar9 + 0x94,auStack_220);
  }
  *(undefined1 *)(ppuVar9 + 0x9a) = 1;
  func_0x0001000df5a0(auStack_220);
  return;
}



/* Entry: 107356004; end: 107356057;  */

void FUN_107356004(long param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x00010736002c(param_1 + 0x460);
  __ZNSt3__15mutex4lockEv();
  while (*(char *)(param_1 + 0x4d0) == '\x01') {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1 + 0x4a0,auStack_30);
  }
  *(undefined1 *)(param_1 + 0x4d0) = 1;
  func_0x0001000df5a0(auStack_30);
  return;
}



/* Entry: 107356058; end: 10735650b;  */

undefined8 ****
FUN_107356058(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5,
             undefined8 param_6)

{
  undefined1 in_ZR;
  undefined8 ****ppppuVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined *puVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 auStack_2b8 [24];
  undefined8 **ppuStack_2a0;
  undefined8 **ppuStack_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 **ppuStack_260;
  undefined *puStack_258;
  undefined8 **ppuStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_228 [64];
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [64];
  undefined1 auStack_188 [32];
  undefined1 auStack_168 [208];
  undefined8 ***pppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  lVar2 = param_1;
  ppuVar5 = (undefined8 **)param_2;
  func_0x00010735fda8();
  pppuStack_98 = (undefined8 ***)(lVar2 + 0x348);
  ppuStack_90 = (undefined8 **)CONCAT71(ppuStack_90._1_7_,1);
  uStack_58 = extraout_x8;
  func_0x000107279a5c();
  *(long *)(param_1 + 0x440) = *(long *)(param_1 + 0x440) + 1;
  ppppuVar3 = &pppuStack_98;
  func_0x000107279ee0();
  if (*(long *)(param_1 + 0x170) == 0) {
    ppuStack_240 = (undefined8 ***)0x0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x000107360584();
    pppuStack_98 = ppppuVar3;
    ppuStack_90 = ppuStack_240;
    uStack_88 = uStack_238;
    uStack_80 = uStack_230;
    while ((undefined8 ****)pppuStack_98 != (undefined8 ****)0x0) {
      puStack_258 = *(undefined **)((long)ppuVar5 + 0x40);
      ppuStack_260 = *(undefined8 ***)((long)ppuVar5 + 0x38);
      ppuStack_240 = ppuStack_90;
      uStack_238 = uStack_88;
      uStack_230 = uStack_80;
      ppuStack_90 = ppuVar5;
      if (*(long *)((long)ppuVar5 + 0x40) != 0) {
        do {
          func_0x00010736000c();
        } while (extraout_w10 != 0);
      }
      FUN_107359fd0(&ppuStack_240,&ppuStack_260);
      func_0x00010735ce54(&ppuStack_260);
      FUN_107352fe0(&pppuStack_98);
      ppuVar5 = ppuStack_90;
      ppuStack_90 = ppuStack_240;
      uStack_88 = uStack_238;
      uStack_80 = uStack_230;
    }
    pppuStack_98 = (undefined8 ***)(ulong)*(ushort *)(param_1 + 0x1e8);
    ppuStack_240 = (undefined8 ***)0x0;
    uStack_238 = 0;
    uStack_230 = 0;
    FUN_10735f468(auStack_78,param_6);
    plVar9 = *(long **)(param_1 + 0x130);
    if (*(int *)(param_1 + 0x4e4) == 0) {
      FUN_10735707c(auStack_228,&pppuStack_98);
      FUN_1073570fc(auStack_1e8,auStack_228);
      puVar8 = auStack_1e8;
      func_0x000107360674(*(undefined8 *)(*plVar9 + 0x10));
      puVar7 = auStack_228;
    }
    else {
      FUN_10735707c(auStack_1c8,&pppuStack_98);
      FUN_1073570fc(auStack_188,auStack_1c8);
      func_0x000107313224(auStack_168,auStack_188,*(undefined4 *)(param_1 + 0x4e4));
      func_0x000107360674(*(undefined8 *)(*plVar9 + 0x18));
      func_0x000107273efc(auStack_168);
      puVar7 = auStack_1c8;
      puVar8 = auStack_188;
    }
    func_0x0001006393ec(puVar8);
    FUN_107357168(puVar7);
    FUN_107357168(&pppuStack_98);
    ppppuVar3 = (undefined8 ****)&ppuStack_240;
    FUN_10735a250();
    goto LAB_1073563ec;
  }
  if (*param_5 == 0) {
LAB_10735621c:
    puVar6 = &UNK_10f40ac79;
    pppuVar4 = &ppuStack_240;
    func_0x00010002b838();
  }
  else {
    func_0x00010028af84();
    (**(code **)(**(long **)(param_1 + 0x170) + 0x20))(&ppuStack_240);
    ppppuVar3 = &pppuStack_98;
    func_0x000107260010(ppppuVar3,&ppuStack_240);
    func_0x0001073608e8();
    func_0x0001073609fc();
    if ((int)ppppuVar3 == 0) {
      plVar9 = *(long **)(param_1 + 0x170);
      func_0x0001072621e0(param_3);
      func_0x000107360b78();
      func_0x0001073609a8(&pppuStack_98);
      uVar10 = NEON_ucvtf((ulong)*(byte *)(param_1 + 0x4e0));
      (**(code **)(*plVar9 + 0x18))(uVar10,plVar9,param_5,param_2,&pppuStack_98,param_6);
      ppppuVar3 = &pppuStack_98;
      func_0x00010726e078();
      goto LAB_1073563ec;
    }
    if (*param_5 == 0) goto LAB_10735621c;
    func_0x00010028af84();
    in_ZR = (char)uStack_80 == '\x01';
    if ((bool)in_ZR) {
      ppuStack_298 = ppuStack_90;
      ppuStack_2a0 = pppuStack_98;
      uStack_290 = uStack_88;
      ppuStack_90 = (undefined8 ***)0x0;
      uStack_88 = 0;
      pppuStack_98 = (undefined8 ***)0x0;
    }
    else {
      func_0x00010002b838(&ppuStack_2a0,&UNK_10f40acab);
    }
    func_0x0001004c3cd0(&uStack_280,&UNK_10f40ac92,&ppuStack_2a0);
    func_0x00010048a6c8(&ppuStack_260,&uStack_280,&UNK_10f40acbc);
    (**(code **)(**(long **)(param_1 + 0x170) + 0x20))(auStack_2b8);
    puVar6 = auStack_2b8;
    func_0x00010533a9c0(&ppuStack_240,&ppuStack_260);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_260);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_280);
    pppuVar4 = &ppuStack_2a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001073609fc();
  }
  pppuStack_98 = (undefined8 ***)0x0;
  ppuStack_90 = (undefined8 ***)0x0;
  uStack_88 = 0;
  func_0x000107360584();
  ppuStack_260 = pppuVar4;
  puStack_258 = puVar6;
  while ((undefined8 ***)ppuStack_260 != (undefined8 ***)0x0) {
    uStack_278 = *(undefined8 *)(puStack_258 + 0x40);
    uStack_280 = *(undefined8 *)(puStack_258 + 0x38);
    if (*(long *)(puStack_258 + 0x40) != 0) {
      do {
        func_0x00010736000c();
      } while (extraout_w10_00 != 0);
    }
    FUN_107359fd0(&pppuStack_98,&uStack_280);
    func_0x00010735ce54(&uStack_280);
    FUN_107352fe0(&ppuStack_260);
  }
  uVar10 = NEON_ucvtf((ulong)*(byte *)(param_1 + 0x4e0));
  (**(code **)(**(long **)(param_1 + 0x170) + 0x10))
            (uVar10,*(long **)(param_1 + 0x170),&pppuStack_98,
             (uint)*(byte *)(param_1 + 0x1e9) * 0x100 + 0x100 & 0xff00 |
             (uint)*(byte *)(param_1 + 0x1e8),param_6);
  ppppuVar3 = &pppuStack_98;
  FUN_10735a250();
  func_0x0001073608e8();
LAB_1073563ec:
  func_0x00010735fd20(uStack_58);
  if ((bool)in_ZR) {
    return ppppuVar3;
  }
  ___stack_chk_fail();
  func_0x0001073609fc();
  func_0x00010736001c();
  func_0x00010736067c();
  func_0x000107356530();
  ppppuVar1 = ppppuVar3;
  func_0x00010725c0a0();
  if (ppppuVar1 != (undefined8 ****)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return ppppuVar3;
}



/* Entry: 10735650c; end: 10735657f;  */

long FUN_10735650c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010736067c();
  func_0x000107356530();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107356580; end: 107356d03;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000107356850 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong * FUN_107356580(undefined8 param_1,ulong *param_2,undefined8 param_3,ulong *param_4,
                     long param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong uVar13;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong uVar14;
  ulong extraout_x8_09;
  uint uVar15;
  ulong uVar16;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar17;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong *unaff_x19;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  ulong unaff_x21;
  ulong *puVar22;
  ulong unaff_x24;
  ulong *puVar23;
  ulong uVar24;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 uStack_141;
  ulong auStack_140 [2];
  undefined1 auStack_130 [56];
  ulong uStack_f8;
  ulong uStack_f0;
  ulong *puStack_b8;
  ulong *puStack_b0;
  undefined8 uStack_80;
  
  uVar11 = param_3;
  func_0x00010735fd78();
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  puVar22 = param_2 + 5;
  param_2[6] = 0;
  *puVar22 = 0;
  param_2[8] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 9) = 0x3f800000;
  uVar15 = (uint)((ulong)uVar11 >> 8);
  uStack_80 = extraout_x8;
  func_0x00010735b124();
  puVar12 = (ulong *)(long)((float)(ulong)(long)(int)(uVar15 - ((uint)param_3 & 0xff)) /
                           *(float *)(unaff_x19 + 9));
  func_0x0001073608c8();
  uVar3 = (uint)param_3 & 0xff;
  puVar1 = unaff_x19 + 2;
  puVar2 = unaff_x19 + 7;
  do {
    uVar6 = (int)(uVar3 - uVar15) < 0;
    uVar8 = uVar3 == uVar15;
    if (uVar15 <= uVar3) {
      func_0x00010735fd20(uStack_80);
      if (!(bool)uVar8) {
        ___stack_chk_fail();
        FUN_107356d04();
        func_0x00010736003c();
        plVar21 = (long *)unaff_x19[7];
        while (plVar21 != (long *)0x0) {
          lVar10 = (long)(plVar21 + 3);
          plVar21 = (long *)*plVar21;
          FUN_107359298(lVar10);
          func_0x000107360134();
        }
        uVar19 = unaff_x19[5];
        unaff_x19[5] = 0;
        if (uVar19 != 0) {
          __ZdlPv();
        }
        plVar21 = (long *)unaff_x19[2];
        while (plVar21 != (long *)0x0) {
          uVar19 = (ulong)(plVar21 + 3);
          plVar21 = (long *)*plVar21;
          FUN_107358cf0();
          func_0x000107360134();
        }
        func_0x00010736058c();
        if (uVar19 != 0) {
          __ZdlPv();
        }
        return unaff_x19;
      }
      return param_2;
    }
    uVar4 = uVar3 & 0xff;
    uVar24 = (ulong)uVar4;
    uVar19 = unaff_x19[1];
    if (uVar19 != 0) {
      func_0x0001073607dc();
      uVar18 = (uint)uVar19;
      if ((bool)uVar8) {
        unaff_x21 = (ulong)(uVar18 - 1 & uVar4);
        uVar8 = true;
      }
      else {
        uVar6 = (long)(uVar19 - uVar24) < 0;
        uVar8 = uVar19 == uVar24;
        unaff_x21 = uVar24;
        if (uVar19 <= uVar24) {
          uVar5 = 0;
          if (uVar18 != 0) {
            uVar5 = uVar3 / uVar18;
          }
          unaff_x21 = (ulong)(uVar3 - uVar5 * uVar18);
        }
      }
      puVar23 = *(ulong **)(*unaff_x19 + unaff_x21 * 8);
      uVar13 = extraout_x8_00;
      if (puVar23 != (ulong *)0x0) {
        do {
          while( true ) {
            puVar23 = (ulong *)*puVar23;
            if (puVar23 == (ulong *)0x0) goto LAB_1073566b0;
            uVar16 = puVar23[1];
            if (uVar16 != uVar24) break;
            uVar6 = (int)((byte)puVar23[2] - uVar3) < 0;
            uVar8 = (byte)puVar23[2] == uVar3;
            puVar9 = param_2;
            if ((bool)uVar8) goto LAB_107356794;
          }
          if ((uVar19 & uVar13) == 0) {
            uVar16 = uVar16 & uVar13;
          }
          else if (uVar19 <= uVar16) {
            func_0x000107360b54();
            uVar13 = extraout_x8_01;
            uVar16 = extraout_x9;
          }
          uVar6 = (long)(uVar16 - unaff_x21) < 0;
          uVar8 = uVar16 == unaff_x21;
        } while ((bool)uVar8);
      }
    }
LAB_1073566b0:
    func_0x000107360370();
    func_0x00010735fec8(puVar1);
    func_0x00010735fe38();
    if (uVar19 == 0) {
LAB_1073566d4:
      func_0x0001073602e8();
      uVar7 = (long)(uVar19 - 3) < 0;
      uVar8 = uVar19 == 3;
      func_0x00010735fd34();
      func_0x00010735b124();
      uVar19 = unaff_x19[1];
      func_0x0001073607dc();
      if ((bool)uVar8) {
        uVar8 = 1;
        unaff_x21 = (ulong)((int)uVar19 - 1U & uVar4);
      }
      else {
        uVar7 = (long)(uVar19 - uVar24) < 0;
        uVar8 = uVar19 == uVar24;
        unaff_x21 = uVar24;
        if (uVar19 <= uVar24) {
          uVar13 = 0;
          if (uVar19 != 0) {
            uVar13 = uVar24 / uVar19;
          }
          unaff_x21 = uVar24 - uVar13 * uVar19;
        }
      }
    }
    else {
      func_0x00010736013c();
      uVar7 = 0;
      if ((bool)uVar6) goto LAB_1073566d4;
    }
    uVar6 = uVar7;
    uVar13 = *unaff_x19;
    puVar23 = *(ulong **)(uVar13 + unaff_x21 * 8);
    if (puVar23 == (ulong *)0x0) {
      *param_2 = *puVar1;
      *puVar1 = (ulong)param_2;
      *(ulong **)(uVar13 + unaff_x21 * 8) = puVar1;
      if (*param_2 != 0) {
        uVar16 = *(ulong *)(*param_2 + 8);
        if ((uVar19 & uVar19 - 1) == 0) {
          uVar16 = uVar16 & uVar19 - 1;
          uVar8 = 1;
          uVar6 = 0;
        }
        else {
          uVar6 = (long)(uVar16 - uVar19) < 0;
          uVar8 = uVar16 == uVar19;
          if (uVar19 <= uVar16) {
            func_0x000107360b54();
            uVar13 = extraout_x8_02;
            uVar16 = extraout_x9_00;
          }
        }
        *(ulong **)(uVar13 + uVar16 * 8) = param_2;
      }
    }
    else {
      *param_2 = *puVar23;
      *puVar23 = (ulong)param_2;
    }
    uStack_f8 = 0;
    func_0x000107360240();
    unaff_x19[3] = extraout_x8_03;
    puVar9 = &uStack_f8;
    FUN_10735b35c();
    puVar23 = param_2;
LAB_107356794:
    if (puVar23[4] != 0) {
      puVar9 = puVar23 + 3;
      FUN_107358944();
      FUN_107358968();
    }
    unaff_x21 = unaff_x19[6];
    if (unaff_x21 != 0) {
      func_0x0001073607ac();
      uVar18 = (uint)unaff_x21;
      if ((bool)uVar8) {
        uVar19 = (ulong)(uVar18 - 1 & uVar4);
      }
      else {
        uVar6 = (long)(unaff_x21 - uVar24) < 0;
        uVar19 = uVar24;
        if (unaff_x21 <= uVar24) {
          uVar5 = 0;
          if (uVar18 != 0) {
            uVar5 = uVar3 / uVar18;
          }
          uVar19 = (ulong)(uVar3 - uVar5 * uVar18);
        }
      }
      puVar23 = *(ulong **)(*puVar22 + uVar19 * 8);
      uVar13 = extraout_x8_04;
      if (puVar23 != (ulong *)0x0) {
        do {
          while( true ) {
            puVar23 = (ulong *)*puVar23;
            if (puVar23 == (ulong *)0x0) goto LAB_10735682c;
            uVar16 = puVar23[1];
            if (uVar16 != uVar24) break;
            uVar6 = (int)((byte)puVar23[2] - uVar3) < 0;
            if ((byte)puVar23[2] == uVar3) goto LAB_107356910;
          }
          if ((unaff_x21 & uVar13) == 0) {
            uVar16 = uVar16 & uVar13;
          }
          else if (unaff_x21 <= uVar16) {
            func_0x000107360b28();
            uVar13 = extraout_x8_05;
            uVar16 = extraout_x9_01;
          }
          uVar6 = (long)(uVar16 - uVar19) < 0;
        } while (uVar16 == uVar19);
      }
    }
LAB_10735682c:
    func_0x000107360370();
    func_0x00010735fec8(puVar2);
    func_0x000107360148(unaff_x19[8]);
    if ((unaff_x21 == 0) ||
       (func_0x00010736013c(param_1,(int)unaff_x19[9],(float)unaff_x21), (bool)uVar6)) {
      uVar8 = unaff_x21 == 3;
      func_0x00010735fd34(unaff_x21 << 1);
      func_0x0001073608c8();
      unaff_x21 = unaff_x19[6];
      func_0x0001073607ac();
      if ((bool)uVar8) {
        uVar19 = (ulong)((int)unaff_x21 - 1U & uVar4);
      }
      else {
        uVar19 = uVar24;
        if (unaff_x21 <= uVar24) {
          uVar19 = 0;
          if (unaff_x21 != 0) {
            uVar19 = uVar24 / unaff_x21;
          }
          uVar19 = uVar24 - uVar19 * unaff_x21;
        }
      }
    }
    uVar13 = *puVar22;
    puVar23 = *(ulong **)(uVar13 + uVar19 * 8);
    if (puVar23 == (ulong *)0x0) {
      *puVar9 = *puVar2;
      *puVar2 = (ulong)puVar9;
      *(ulong **)(uVar13 + uVar19 * 8) = puVar2;
      if (*puVar9 != 0) {
        uVar19 = *(ulong *)(*puVar9 + 8);
        if ((unaff_x21 & unaff_x21 - 1) == 0) {
          uVar19 = uVar19 & unaff_x21 - 1;
        }
        else if (unaff_x21 <= uVar19) {
          func_0x000107360b28();
          uVar13 = extraout_x8_06;
          uVar19 = extraout_x9_02;
        }
        *(ulong **)(uVar13 + uVar19 * 8) = puVar9;
      }
    }
    else {
      *puVar9 = *puVar23;
      *puVar23 = (ulong)puVar9;
    }
    func_0x0001073602d0();
    puVar23 = puVar9;
LAB_107356910:
    if (puVar23[4] != 0) {
      FUN_107358d1c(puVar23 + 3);
      FUN_1073590a4();
    }
    if (param_5 == 0) {
      puVar23 = param_4;
      auStack_130[0] = (char)uVar3;
      FUN_107352fb8();
      puStack_b8 = puVar23;
      puStack_b0 = puVar12;
      while (param_2 = (ulong *)0x0, puStack_b8 != (ulong *)0x0) {
        puVar23 = puStack_b0 + 7;
        puVar12 = (ulong *)*puVar23;
        func_0x000107360958();
        uVar24 = uStack_f0;
        for (uVar19 = uStack_f8; uVar19 != uVar24; uVar19 = uVar19 + 0xc) {
          FUN_10735b55c();
          FUN_107352268();
          puVar12 = puVar23;
          FUN_10735b730();
        }
        func_0x0001073605a0();
        FUN_107352fe0(&puStack_b8);
      }
    }
    else {
      uStack_141 = (char)uVar3;
      FUN_10736c7f0(&uStack_160);
      uVar13 = uStack_158;
      for (uVar19 = uStack_160; uVar19 != uVar13; uVar19 = uVar19 + 0x80) {
        if (*(int *)(uVar19 + 0x78) == 1) {
          FUN_10735b3c4(uVar19);
          func_0x0001073608fc();
          func_0x0001073605a8(&puStack_b8);
          func_0x00010724b3d8(&uStack_f8);
          FUN_10735b3c4(uVar19);
          unaff_x21 = *(ulong *)(uVar19 + 0x28);
          uVar16 = *(ulong *)(uVar19 + 0x30);
          while( true ) {
            uVar8 = (long)(unaff_x21 - uVar16) < 0;
            uVar6 = unaff_x21 == uVar16;
            if ((bool)uVar6) break;
            FUN_1073558a4(auStack_140,unaff_x21 + 8);
            func_0x0001073608fc();
            func_0x0001073605a8(auStack_130);
            func_0x00010724b3d8(&uStack_f8);
            puVar12 = auStack_140;
            func_0x00010735ce54();
            uVar20 = unaff_x19[6];
            if (uVar20 != 0) {
              func_0x0001073607dc();
              uVar18 = (uint)uVar20;
              if ((bool)uVar6) {
                unaff_x24 = (ulong)(uVar18 - 1 & uVar4);
              }
              else {
                uVar8 = (long)(uVar20 - uVar24) < 0;
                unaff_x24 = uVar24;
                if (uVar20 <= uVar24) {
                  uVar5 = 0;
                  if (uVar18 != 0) {
                    uVar5 = uVar3 / uVar18;
                  }
                  unaff_x24 = (ulong)(uVar3 - uVar5 * uVar18);
                }
              }
              puVar23 = *(ulong **)(*puVar22 + unaff_x24 * 8);
              uVar14 = extraout_x8_07;
              if (puVar23 != (ulong *)0x0) {
                do {
                  while( true ) {
                    puVar23 = (ulong *)*puVar23;
                    if (puVar23 == (ulong *)0x0) goto LAB_107356a38;
                    uVar17 = puVar23[1];
                    if (uVar17 != uVar24) break;
                    uVar8 = (int)((byte)puVar23[2] - uVar3) < 0;
                    if ((byte)puVar23[2] == uVar3) goto LAB_107356b10;
                  }
                  if ((uVar20 & uVar14) == 0) {
                    uVar17 = uVar17 & uVar14;
                  }
                  else if (uVar20 <= uVar17) {
                    func_0x000107360b54();
                    uVar14 = extraout_x8_08;
                    uVar17 = extraout_x9_03;
                  }
                  uVar8 = (long)(uVar17 - unaff_x24) < 0;
                } while (uVar17 == unaff_x24);
              }
            }
LAB_107356a38:
            func_0x000107360370();
            func_0x00010735fec8(puVar2);
            func_0x000107360148(unaff_x19[8]);
            if ((uVar20 == 0) ||
               (func_0x00010736013c(param_1,(int)unaff_x19[9],(float)uVar20), (bool)uVar8)) {
              func_0x0001073602e8();
              uVar8 = uVar20 == 3;
              func_0x00010735fd34();
              func_0x0001073608c8();
              uVar20 = unaff_x19[6];
              func_0x0001073607dc();
              if ((bool)uVar8) {
                unaff_x24 = (ulong)((int)uVar20 - 1U & uVar4);
              }
              else {
                unaff_x24 = uVar24;
                if (uVar20 <= uVar24) {
                  uVar14 = 0;
                  if (uVar20 != 0) {
                    uVar14 = uVar24 / uVar20;
                  }
                  unaff_x24 = uVar24 - uVar14 * uVar20;
                }
              }
            }
            uVar14 = *puVar22;
            puVar23 = *(ulong **)(uVar14 + unaff_x24 * 8);
            if (puVar23 == (ulong *)0x0) {
              *puVar12 = *puVar2;
              *puVar2 = (ulong)puVar12;
              *(ulong **)(uVar14 + unaff_x24 * 8) = puVar2;
              if (*puVar12 != 0) {
                uVar17 = *(ulong *)(*puVar12 + 8);
                if ((uVar20 & uVar20 - 1) == 0) {
                  uVar17 = uVar17 & uVar20 - 1;
                }
                else if (uVar20 <= uVar17) {
                  func_0x000107360b54();
                  uVar14 = extraout_x8_09;
                  uVar17 = extraout_x9_04;
                }
                *(ulong **)(uVar14 + uVar17 * 8) = puVar12;
              }
            }
            else {
              *puVar12 = *puVar23;
              *puVar23 = (ulong)puVar12;
            }
            func_0x0001073602d0();
            puVar23 = puVar12;
LAB_107356b10:
            FUN_1073524bc(puVar23 + 3,&puStack_b8);
            func_0x0001072e89a4();
            func_0x000104c2f714(auStack_130);
            unaff_x21 = unaff_x21 + 0x20;
          }
          func_0x000104c2f714(&puStack_b8);
        }
      }
      puVar12 = &uStack_160;
      FUN_107354838(&puStack_b8);
      puVar9 = puStack_b0;
      for (puVar23 = puStack_b8; puVar23 != puVar9; puVar23 = puVar23 + 2) {
        puVar12 = (ulong *)*puVar23;
        func_0x000107360958();
        unaff_x21 = uStack_f0;
        for (uVar19 = uStack_f8; uVar19 != unaff_x21; uVar19 = uVar19 + 0xc) {
          FUN_10735b55c();
          FUN_107352268();
          puVar12 = puVar23;
          FUN_10735b730();
        }
        func_0x0001073605a0();
      }
      FUN_10735a250(&puStack_b8);
      param_2 = &uStack_160;
      FUN_10735a0a0();
    }
    uVar3 = uVar3 + 1;
  } while( true );
}



/* Entry: 107356d04; end: 107356d7f;  */

long FUN_107356d04(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x38);
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    FUN_107359298(lVar1);
    func_0x000107360134();
  }
  lVar1 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  plVar2 = *(long **)(param_1 + 0x10);
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    FUN_107358cf0();
    func_0x000107360134();
  }
  func_0x00010736058c();
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107356d80; end: 107356dbf;  */

undefined8 * FUN_107356d80(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  if (param_3 != 0) {
    do {
      func_0x00010736000c();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x0001073608d8();
  return param_1;
}



/* Entry: 107356dc0; end: 107356fff;  */

undefined8 *
FUN_107356dc0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong *param_4,
             undefined8 param_5,ulong param_6)

{
  ulong *puVar1;
  undefined1 in_ZR;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined8 extraout_x8;
  long unaff_x19;
  ulong uStack_180;
  ulong *apuStack_178 [3];
  undefined1 auStack_160 [32];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [24];
  undefined8 *puStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  long *plStack_d8;
  undefined4 uStack_68;
  undefined8 uStack_58;
  
  func_0x00010735fd78();
  uStack_58 = extraout_x8;
  FUN_107330040(&uStack_f0);
  puVar5 = (ulong *)param_4[3];
  FUN_107354910(&uStack_f0);
  plStack_d8 = (long *)param_4[1];
  uStack_e0 = *param_4;
  FUN_10735c8e4(&uStack_e0);
  puVar1 = (ulong *)plStack_d8;
  uVar2 = uStack_e0;
  while (apuStack_178[0] = puVar1, uVar2 != 0) {
    func_0x00010726933c(&uStack_e0,puVar1[7]);
    puVar5 = &uStack_e0;
    func_0x00010735c8bc(&uStack_f0);
    func_0x000107269394(&uStack_e0);
    uStack_180 = uVar2 + 1;
    apuStack_178[0] = puVar1 + 9;
    FUN_10735c8e4(&uStack_180);
    puVar1 = apuStack_178[0];
    uVar2 = uStack_180;
  }
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uVar2 = param_6;
  FUN_10731e678();
  uStack_180 = uVar2;
  apuStack_178[0] = puVar5;
  while (uStack_180 != 0) {
    func_0x00010784b344(&uStack_e0,apuStack_178[0]);
    func_0x0001000fecf4(&uStack_108,&uStack_e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e0);
    FUN_10731e6dc(&uStack_180);
  }
  uStack_180 = (ulong)*(ushort *)(unaff_x19 + 0x1e8);
  FUN_10731e2b0(apuStack_178,param_2);
  FUN_10731e330(auStack_160,param_6);
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  func_0x0001072621e0(param_5);
  func_0x000107360b78();
  func_0x0001073609a8(auStack_130);
  uStack_110 = *(undefined1 *)(unaff_x19 + 0x4e8);
  puStack_118 = param_3;
  FUN_10731e710(&uStack_e0,&uStack_180);
  uStack_68 = 0;
  FUN_107354344(unaff_x19 + 8,&uStack_e0);
  FUN_10731e1ac(&uStack_e0);
  FUN_10731e20c(&uStack_180);
  func_0x0001000e30f4(&uStack_108);
  puVar3 = &uStack_f0;
  func_0x00010726dd08();
  func_0x00010735fd20(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10731e1ac(&uStack_e0);
    FUN_10731e20c(&uStack_180);
    func_0x0001000e30f4(&uStack_108);
    puVar4 = &uStack_f0;
    func_0x00010726dd08(puVar4);
    func_0x00010736001c();
    func_0x00010736005c();
    FUN_10735a8b0();
    FUN_10732f7e8(puVar4 + 4,puVar3 + 4);
    return param_3;
  }
  return puVar3;
}



/* Entry: 107357000; end: 10735702b;  */

void FUN_107357000(long param_1)

{
  long unaff_x19;
  
  func_0x00010736005c();
  FUN_10735a8b0();
  FUN_10732f7e8(param_1 + 0x20,unaff_x19 + 0x20);
  return;
}



/* Entry: 10735702c; end: 107357053;  */

void FUN_10735702c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010735d30c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107357054; end: 10735707b;  */

undefined8 FUN_107357054(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10735ec18(param_1 + 0x20);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10735707c; end: 1073570fb;  */

undefined2 * FUN_10735707c(undefined2 *param_1,undefined2 *param_2)

{
  long *plVar1;
  code *extraout_x8;
  
  *param_1 = *param_2;
  FUN_10735ca10(param_1 + 4,param_2 + 4);
  plVar1 = *(long **)(param_2 + 0x1c);
  if (plVar1 != (long *)0x0) {
    if (plVar1 == (long *)(param_2 + 0x10)) {
      *(undefined2 **)(param_1 + 0x1c) = param_1 + 0x10;
      func_0x00010736064c(*(undefined8 *)(param_2 + 0x1c));
      (*extraout_x8)();
      return param_1;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(long **)(param_1 + 0x1c) = plVar1;
  return param_1;
}



/* Entry: 1073570fc; end: 107357167;  */

void FUN_1073570fc(long param_1)

{
  undefined8 *puVar1;
  undefined2 *unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x00010736005c();
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  *puVar1 = &PTR_FUN_1109a50b8;
  *(undefined2 *)(puVar1 + 1) = *unaff_x19;
  uVar2 = *(undefined8 *)(unaff_x19 + 4);
  puVar1[3] = *(undefined8 *)(unaff_x19 + 8);
  puVar1[2] = uVar2;
  puVar1[4] = *(undefined8 *)(unaff_x19 + 0xc);
  *(undefined8 *)(unaff_x19 + 4) = 0;
  *(undefined8 *)(unaff_x19 + 8) = 0;
  *(undefined8 *)(unaff_x19 + 0xc) = 0;
  FUN_10735f468(puVar1 + 5,unaff_x19 + 0x10);
  *(undefined8 **)(unaff_x20 + 0x18) = puVar1;
  return;
}



/* Entry: 107357168; end: 10735718f;  */

long FUN_107357168(long param_1)

{
  FUN_10735eed0(param_1 + 0x20);
  func_0x000107360a78();
  return param_1;
}



/* Entry: 107357190; end: 10735789f;  */

void FUN_107357190(long param_1,undefined8 param_2,long param_3,undefined2 *param_4,long *param_5)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 ***pppuVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong ****ppppuVar14;
  undefined8 ***pppuVar15;
  long lVar16;
  undefined8 ****ppppuVar17;
  undefined8 uStack_190;
  undefined8 ***pppuStack_188;
  undefined1 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  ulong **ppuStack_c8;
  ulong ***pppuStack_c0;
  ulong ***pppuStack_b0;
  ulong ***pppuStack_a8;
  ulong ***pppuStack_a0;
  undefined1 uStack_98;
  undefined8 ***pppuStack_90;
  ulong uStack_88;
  ulong ***pppuStack_80;
  ulong ***apppuStack_78 [3];
  
  puStack_140 = &UNK_10e52b660;
  uStack_138 = 0;
  uStack_130 = 0;
  lStack_128 = 0;
  puStack_120 = &UNK_10e52b660;
  uStack_118 = 0;
  uStack_110 = 0;
  lStack_108 = 0;
  puStack_100 = &UNK_10e52b660;
  uStack_f8 = 0;
  uStack_f0 = 0;
  lStack_e8 = 0;
  bVar5 = true;
  if (*(char *)(param_1 + 0x458) == '\x01') {
    bVar5 = 0 < *(int *)(param_1 + 0x45c);
  }
  lStack_150 = param_1 + 0x348;
  uStack_148 = 1;
  func_0x000107279a5c();
  puStack_170 = &UNK_10e52b660;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  if (*(char *)(param_3 + 0x40) == '\x01') {
    lVar9 = param_3;
    FUN_10735a8b0(&puStack_170);
  }
  else {
    pppuStack_e0 = (undefined8 ***)(param_1 + 0x260);
    pppuStack_d8 = (undefined8 ***)CONCAT71(pppuStack_d8._1_7_,1);
    func_0x00010724e404();
    lVar9 = param_1 + 0x308;
    FUN_10735a8b0(&puStack_170);
    func_0x00010724e49c(&pppuStack_e0);
  }
  if (bVar5) {
    func_0x000107360bb8(*param_4);
    FUN_1073578a0();
  }
  uStack_190 = *(undefined8 *)(param_1 + 0x440);
  apppuStack_78[0] = (ulong ***)(*param_5 + 0x80);
  func_0x000107279a5c();
  lVar11 = *param_5;
  pppuVar15 = *(undefined8 ****)(lVar11 + 0x70);
  ppppuVar17 = (undefined8 ****)(lVar11 + 0x78);
  if (pppuVar15 < *ppppuVar17) {
    func_0x000107360964(pppuVar15);
    pppuVar15 = pppuVar15 + 0xc;
    *(undefined8 ****)(lVar11 + 0x70) = pppuVar15;
  }
  else {
    lVar12 = (long)pppuVar15 - *(long *)(lVar11 + 0x68);
    pppuVar15 = (undefined8 ***)(lVar12 / 0x60 + 1);
    if ((undefined8 ***)0x2aaaaaaaaaaaaaa < pppuVar15) {
      FUN_10735c708();
      goto LAB_107357780;
    }
    uVar13 = ((long)*ppppuVar17 - *(long *)(lVar11 + 0x68)) / 0x60;
    pppuVar10 = (undefined8 ***)(uVar13 * 2);
    if (pppuVar10 < pppuVar15 || (long)pppuVar10 - (long)pppuVar15 == 0) {
      pppuVar10 = pppuVar15;
    }
    if (0x155555555555554 < uVar13) {
      pppuVar10 = (undefined8 ***)0x2aaaaaaaaaaaaaa;
    }
    pppuStack_c0 = (ulong ***)ppppuVar17;
    if (pppuVar10 == (undefined8 ***)0x0) {
      pppuVar10 = (undefined8 ***)0x0;
      lVar9 = 0;
    }
    else {
      FUN_10735c714();
    }
    lVar12 = (long)pppuVar10 + lVar12;
    pppuStack_e0 = pppuVar10;
    pppuStack_d8 = (undefined8 ***)lVar12;
    pppuStack_d0 = (undefined8 ***)lVar12;
    ppuStack_c8 = (ulong **)(pppuVar10 + lVar9 * 0xc);
    func_0x000107360964();
    pppuVar15 = (undefined8 ***)(lVar12 + 0x60);
    lVar16 = *(long *)(lVar11 + 0x68);
    lVar2 = *(long *)(lVar11 + 0x70);
    ppppuVar14 = (ulong ****)(lVar12 + ((lVar2 - lVar16) / -0x60) * 0x60);
    pppuStack_a8 = (ulong ***)&pppuStack_188;
    pppuStack_a0 = (ulong ***)&pppuStack_90;
    uStack_98 = 0;
    pppuStack_90 = ppppuVar14;
    pppuStack_188 = ppppuVar14;
    pppuStack_d0 = pppuVar15;
    pppuStack_b0 = (ulong ***)ppppuVar17;
    for (lVar12 = lVar16; lVar12 != lVar2; lVar12 = lVar12 + 0x60) {
      FUN_10735ba4c(pppuStack_90,lVar12);
      pppuStack_90 = pppuStack_90 + 0xc;
    }
    uStack_98 = 1;
    for (; lVar16 != lVar2; lVar16 = lVar16 + 0x60) {
      func_0x00010735c754(lVar16);
    }
    func_0x00010735c784(&pppuStack_b0);
    pppuStack_e0 = *(undefined8 ****)(lVar11 + 0x68);
    *(ulong *****)(lVar11 + 0x68) = ppppuVar14;
    *(undefined8 ****)(lVar11 + 0x70) = pppuVar15;
    ppuStack_c8 = *(ulong ***)(lVar11 + 0x78);
    *(undefined8 ****)(lVar11 + 0x78) = pppuVar10 + lVar9 * 0xc;
    pppuStack_d8 = pppuStack_e0;
    pppuStack_d0 = pppuStack_e0;
    func_0x00010735c7c4(&pppuStack_e0);
  }
  *(undefined8 ****)(lVar11 + 0x70) = pppuVar15;
  lVar9 = *(long *)(*param_5 + 0x68);
  lVar11 = *(long *)(*param_5 + 0x70);
  iVar3 = *(int *)(param_4 + 0x32);
  FUN_10735f654(apppuStack_78);
  if (iVar3 == (int)((lVar11 - lVar9) / 0x60)) {
    if (bVar5) {
      uVar1 = *(byte *)(param_1 + 0x1e9) + 1;
      if ((ushort)param_4[0x30] >> 8 < (uVar1 & 0xff)) {
        func_0x000107360bb8((ushort)param_4[0x30] >> 8 | uVar1 * 0x100);
        FUN_1073578a0();
      }
      lVar11 = *param_5;
      uVar13 = *(ulong *)(lVar11 + 0x50);
      if (uVar13 != 0) {
        FUN_10735abb4(lVar11 + 0x40);
        func_0x00010ae6cbe8(lVar11 + 0x40,&UNK_1109a4b38,uVar13 < 0x80);
        lVar11 = *param_5;
      }
      lVar9 = 0;
      FUN_10735702c(lVar11 + 0x60);
      bVar5 = false;
    }
    else {
      *(long *)(param_1 + 0x440) = *(long *)(param_1 + 0x440) + 1;
      FUN_107352fb8(*param_5);
      func_0x000107360b78();
      func_0x0001073609b4(&puStack_120);
      lVar9 = *param_5 + 0x20;
      FUN_10735d224(&puStack_100);
      if (lStack_108 == 0) {
        bVar5 = lStack_e8 != 0;
      }
      else {
        bVar5 = true;
      }
    }
    uStack_190 = *(undefined8 *)(param_1 + 0x440);
    uStack_178 = 0;
    pppuStack_188 = (undefined8 ***)(*param_5 + 0x80);
    uStack_180 = 1;
    func_0x00010724e404();
    pppuStack_a8 = (ulong ***)0x0;
    pppuStack_a0 = (ulong ***)0x0;
    pppuStack_b0 = (ulong ***)0x0;
    lVar11 = *(long *)(*param_5 + 0x68);
    lVar12 = *(long *)(*param_5 + 0x70);
    pppuStack_90 = &pppuStack_b0;
    uStack_88 = uStack_88 & 0xffffffffffffff00;
    lVar16 = lVar12 - lVar11;
    if (lVar16 != 0) {
      ppppuVar17 = (undefined8 ****)(lVar16 / 0x60);
      if ((undefined8 ****)0x2aaaaaaaaaaaaaa < ppppuVar17) {
        FUN_10735c708();
        goto LAB_107357780;
      }
      FUN_10735c714();
      pppuStack_e0 = &pppuStack_a0;
      pppuStack_a0 = (ulong ***)(ppppuVar17 + lVar9 * 0xc);
      pppuStack_d8 = &pppuStack_80;
      pppuStack_d0 = apppuStack_78;
      ppuStack_c8 = (ulong **)((ulong)ppuStack_c8 & 0xffffffffffffff00);
      pppuStack_b0 = (ulong ***)ppppuVar17;
      pppuStack_a8 = (ulong ***)ppppuVar17;
      pppuStack_80 = (ulong ***)ppppuVar17;
      for (; apppuStack_78[0] = (ulong ***)ppppuVar17, lVar11 != lVar12; lVar11 = lVar11 + 0x60) {
        func_0x000107360964(ppppuVar17);
        ppppuVar17 = (undefined8 ****)(apppuStack_78[0] + 0xc);
      }
      ppuStack_c8 = (ulong **)CONCAT71(ppuStack_c8._1_7_,1);
      func_0x00010735c784(&pppuStack_e0);
      pppuStack_a8 = (ulong ***)ppppuVar17;
    }
    uStack_88 = CONCAT71(uStack_88._1_7_,1);
    func_0x00010735c808(&pppuStack_90);
    lVar9 = *param_5;
    puVar6 = (undefined8 *)0x78;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar7 = puVar6 + 3;
    *puVar6 = &PTR_FUN_1109a5138;
    FUN_10736ca00(puVar7,&pppuStack_b0,lVar9 + 0x128);
    pppuStack_90 = (ulong ****)0x0;
    uStack_88 = 0;
    pppuStack_d8 = *(undefined8 ****)(param_1 + 0x450);
    pppuStack_e0 = *(undefined8 ****)(param_1 + 0x448);
    *(undefined8 **)(param_1 + 0x448) = puVar7;
    *(undefined8 **)(param_1 + 0x450) = puVar6;
    FUN_10735d5d4(&pppuStack_e0);
    FUN_10735d5d4(&pppuStack_90);
    uVar8 = 0x60;
    __Znwm(0x60);
    FUN_10736ca00();
    pppuStack_e0 = (ulong ****)0x0;
    FUN_10735702c(&uStack_178,uVar8);
    func_0x00010735ce34(&pppuStack_e0);
    func_0x00010735c898(&pppuStack_b0);
    func_0x00010724e49c(&pppuStack_188);
    uVar8 = uStack_178;
    uStack_178 = 0;
    FUN_10735702c(param_1 + 0x4d8,uVar8);
    if (*(char *)(param_3 + 0x40) == '\x01') {
      pppuStack_b0 = (ulong ***)(param_1 + 0x260);
      pppuStack_a8 = (ulong ***)CONCAT71(pppuStack_a8._1_7_,1);
      func_0x000107279a5c();
      if ((*(byte *)(param_3 + 0x40) & 1) == 0) {
        func_0x000104bdc2c8();
LAB_107357780:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x107357784);
        (*pcVar4)();
      }
      FUN_107357000(param_1 + 0x308,param_3);
      pppuStack_d8 = (undefined8 ***)0x0;
      pppuStack_e0 = (undefined8 ***)0x0;
      ppuStack_c8 = (ulong **)0x0;
      pppuStack_d0 = (ulong ****)0x0;
      pppuStack_c0 = (ulong ***)CONCAT44(pppuStack_c0._4_4_,0x3f800000);
      func_0x00010730c744(&pppuStack_e0,*(undefined8 *)(param_1 + 800));
      for (ppppuVar14 = (ulong ****)pppuStack_d0; ppppuVar14 != (ulong ****)0x0;
          ppppuVar14 = (ulong ****)*ppppuVar14) {
        func_0x0001004c3c6c(&pppuStack_e0,ppppuVar14 + 2);
      }
      func_0x0001005d0538(&pppuStack_e0);
      func_0x000107279ee0(&pppuStack_b0);
    }
    pppuStack_d8 = (undefined8 ***)param_5[1];
    pppuStack_e0 = (undefined8 ***)*param_5;
    *param_5 = 0;
    param_5[1] = 0;
    func_0x000107360a0c();
    func_0x00010735ce34(&uStack_178);
  }
  else {
    bVar5 = false;
  }
  FUN_10735ab80(&puStack_170);
  func_0x000107279ee0(&lStack_150);
  if ((lStack_128 != 0) || (bVar5)) {
    FUN_107356dc0(param_1,param_2,uStack_190,&puStack_120,&puStack_100,&puStack_140);
  }
  FUN_1073579ac(&puStack_140);
  return;
}



/* Entry: 1073578a0; end: 10735793b;  */

void FUN_1073578a0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  FUN_107356580(auStack_80,param_1);
  FUN_107351e54(auStack_a0,param_5,auStack_80,auStack_58);
  func_0x000107360788();
  FUN_10735ceb4();
  FUN_107352fb8(*param_2);
  func_0x000107360b78();
  func_0x0001073609b4(param_6 + 0x20);
  FUN_10735d224(param_6 + 0x40,*param_2 + 0x20);
  func_0x00010731e248(auStack_a0);
  func_0x000107360544();
  return;
}



/* Entry: 10735793c; end: 1073579ab;  */

void FUN_10735793c(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  lVar1 = param_1;
  while (param_2 != 0) {
    uVar2 = param_2;
    func_0x0001073602a8();
    FUN_10735d05c();
    if ((uVar2 & 1) != 0) {
      lVar1 = *(long *)(param_1 + 8) + lVar1 * 0x48;
      func_0x00010736057c();
      lVar3 = *(long *)(param_3 + 0x40);
      uVar4 = *(undefined8 *)(param_3 + 0x38);
      *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_3 + 0x40);
      *(undefined8 *)(lVar1 + 0x38) = uVar4;
      if (lVar3 != 0) {
        do {
          func_0x00010736000c();
        } while (extraout_w10 != 0);
      }
    }
    func_0x0001073608e0();
  }
  return;
}



/* Entry: 1073579ac; end: 1073579f7;  */

long FUN_1073579ac(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000107360884();
  func_0x000107261dac();
  FUN_10735b8f8(unaff_x19 + 0x20);
  func_0x00010731e900();
  if (extraout_x8 != 0) {
    func_0x00010731e8c0();
  }
  return unaff_x19;
}



/* Entry: 1073579f8; end: 107357bfb;  */

undefined8 *
FUN_1073579f8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 extraout_x8;
  long unaff_x19;
  long lVar6;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long alStack_f0 [3];
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 auStack_b0 [5];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  func_0x00010735fd78();
  uStack_108 = 0;
  uStack_100 = 0;
  alStack_f0[0] = param_1 + 0x260;
  uStack_f8 = 0;
  uStack_58 = extraout_x8;
  func_0x000107360378();
  func_0x00010724e404();
  lVar1 = param_4[1];
  for (lVar6 = *param_4; uVar2 = lVar6 == lVar1, !(bool)uVar2; lVar6 = lVar6 + 0x38) {
    lVar3 = unaff_x19 + 0x308;
    lVar5 = lVar6;
    func_0x0001073579d8(lVar3,lVar6);
    if (lVar3 != 0) {
      FUN_10735c91c(&uStack_108,lVar5 + 0x38);
    }
  }
  func_0x00010724e49c(alStack_f0);
  lVar6 = *(long *)(unaff_x19 + 0x120);
  uStack_88 = param_2;
  uStack_80 = param_3;
  if (lVar6 != 0) {
    FUN_10735ca10(alStack_f0,&uStack_108);
    func_0x000107277f30(auStack_d8,param_5);
    func_0x000100060b18(&uStack_c8,&uStack_88);
    puVar4 = auStack_b0;
    FUN_10735d84c(puVar4,unaff_x19 + 0x1c0);
    puStack_60 = (undefined8 *)0x0;
    func_0x000107360488();
    *puVar4 = &PTR_FUN_1109a5188;
    FUN_10735ca10(puVar4 + 1,alStack_f0);
    func_0x000107277f30(puVar4 + 4,auStack_d8);
    puVar4[7] = uStack_c0;
    puVar4[6] = uStack_c8;
    puVar4[8] = uStack_b8;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    func_0x00010735df30(puVar4 + 9,auStack_b0);
    puStack_60 = puVar4;
    func_0x000107292e94(lVar6,auStack_78);
    func_0x000107283e00(auStack_78);
    FUN_107357bfc(alStack_f0);
  }
  puVar4 = &uStack_108;
  FUN_10735a250();
  func_0x00010735fd20(uStack_58);
  if ((bool)uVar2) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x000107283e00(auStack_78);
  FUN_107357bfc(alStack_f0);
  FUN_10735a250(&uStack_108);
  func_0x00010736001c();
  func_0x000107360884();
  FUN_10735d588();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4 + 5);
  func_0x00010726b264(puVar4 + 3);
  func_0x00010735fffc(puVar4);
  func_0x00010735a274();
  return puVar4;
}


