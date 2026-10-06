/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107293364; end: 10729338b;  */

void FUN_107293364(undefined8 param_1)

{
  func_0x00010729e9d0();
  func_0x00010729e744(param_1,&PTR_DAT_110998448);
  func_0x00010729e3dc();
  return;
}



/* Entry: 10729338c; end: 107293397;  */

undefined ** FUN_10729338c(void)

{
  return &PTR_DAT_110998448;
}



/* Entry: 107293398; end: 107293477;  */

void FUN_107293398(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *unaff_x19;
  long lVar5;
  long lStack_48;
  
  func_0x00010729ee88();
  lVar5 = *param_2;
  lVar1 = param_2[1];
  func_0x00010729ef3c();
  lVar2 = lVar1 - lVar5;
  if (lVar2 != 0) {
    if (0xcccccccccccccc < (ulong)(lVar2 / 0x140)) {
      FUN_107293478();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x107293454);
      (*pcVar3)();
    }
    plVar4 = unaff_x19 + 2;
    FUN_107293484();
    *unaff_x19 = (long)plVar4;
    unaff_x19[1] = (long)plVar4;
    func_0x00010729eaac(0x140);
    func_0x00010729edf8();
    for (; lVar5 != lVar1; lVar5 = lVar5 + 0x140) {
      func_0x00010729ed90();
      FUN_1072934d0();
      plVar4 = (long *)(lStack_48 + 0x140);
      lStack_48 = (long)plVar4;
    }
    func_0x00010729edd8();
    FUN_107293bb4();
    unaff_x19[1] = (long)plVar4;
  }
  func_0x00010729e8ac();
  func_0x000107293c68();
  return;
}



/* Entry: 107293478; end: 107293483;  */

void FUN_107293478(void)

{
  func_0x00010729e410();
  FUN_1072934a4();
  return;
}



/* Entry: 107293484; end: 1072934a3;  */

void FUN_107293484(void)

{
  FUN_1072934a4();
  return;
}



/* Entry: 1072934a4; end: 1072934cf;  */

void FUN_1072934a4(long param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 < 0xcccccccccccccd) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x140);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010729e618();
  FUN_107293594();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x58,unaff_x20 + 0x58);
  func_0x000100600fec(unaff_x19 + 0x70,unaff_x20 + 0x70);
  func_0x00010015bc98(unaff_x19 + 0x98,unaff_x20 + 0x98);
  FUN_1072935a0(unaff_x19 + 0xb0,unaff_x20 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xf1);
  *(undefined8 *)(unaff_x19 + 0xf9) = *(undefined8 *)(unaff_x20 + 0xf9);
  *(undefined8 *)(unaff_x19 + 0xf1) = uVar5;
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar4;
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar1;
  FUN_107293b28(unaff_x19 + 0x108,unaff_x20 + 0x108);
  return;
}



/* Entry: 1072934d0; end: 107293593;  */

void FUN_1072934d0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010729e618();
  FUN_107293594();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x58,unaff_x20 + 0x58);
  func_0x000100600fec(unaff_x19 + 0x70,unaff_x20 + 0x70);
  func_0x00010015bc98(unaff_x19 + 0x98,unaff_x20 + 0x98);
  FUN_1072935a0(unaff_x19 + 0xb0,unaff_x20 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xf1);
  *(undefined8 *)(unaff_x19 + 0xf9) = *(undefined8 *)(unaff_x20 + 0xf9);
  *(undefined8 *)(unaff_x19 + 0xf1) = uVar5;
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar4;
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar1;
  FUN_107293b28(unaff_x19 + 0x108,unaff_x20 + 0x108);
  return;
}



/* Entry: 107293594; end: 10729359f;  */

void FUN_107293594(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000107946698(param_1,0,param_2);
  func_0x000107946d88(&PTR_DAT_1109ee220);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  func_0x00010794379c(unaff_x19 + 0x18);
  lVar1 = unaff_x21 + 0x30;
  func_0x000107946ba4();
  *(long *)(unaff_x19 + 0x30) = lVar1;
  lVar1 = unaff_x21 + 0x38;
  func_0x000107946ba4();
  *(long *)(unaff_x19 + 0x38) = lVar1;
  lVar1 = unaff_x21 + 0x40;
  func_0x000107946ba4();
  *(long *)(unaff_x19 + 0x40) = lVar1;
  lVar1 = unaff_x21 + 0x48;
  func_0x000107946ba4();
  *(long *)(unaff_x19 + 0x48) = lVar1;
  if ((*(byte *)(unaff_x19 + 0x10) & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x000107944f6c();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = unaff_x20;
  return;
}



/* Entry: 1072935a0; end: 1072935db;  */

void FUN_1072935a0(void)

{
  func_0x000100600fcc();
  FUN_10729364c();
  FUN_1072935dc();
  return;
}



/* Entry: 1072935dc; end: 107293613;  */

void FUN_1072935dc(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x000100601028();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    func_0x0001072937c4();
  }
  return;
}



/* Entry: 107293614; end: 107293633;  */

void FUN_107293614(void)

{
  func_0x00010729ef9c();
  FUN_107293634();
  return;
}



/* Entry: 107293634; end: 10729364b;  */

void FUN_107293634(long *param_1)

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



/* Entry: 10729364c; end: 1072936c7;  */

void FUN_10729364c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar3;
  ulong extraout_x9;
  long *extraout_x9_00;
  long *plVar4;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  func_0x00010729ef90();
  if ((!(bool)in_ZR) && (func_0x00010729eef4(), !(bool)in_ZR)) {
    func_0x00010729ebe8();
  }
  func_0x00010729eed0();
  if ((bool)in_CY && !(bool)in_ZR) {
LAB_107293684:
    func_0x00010729eb1c();
    if (param_2 == 0) {
      FUN_107293790(param_1);
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      lVar2 = param_1 + 8;
      FUN_1072937a8(lVar2);
      FUN_107293790(param_1,lVar2);
      uVar3 = 0;
      *(ulong *)(param_1 + 8) = param_2;
      while (param_2 != uVar3) {
        func_0x00010729eeb8();
        uVar3 = extraout_x9;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x00010729f134();
        func_0x00010729f114();
        lVar2 = extraout_x8_00;
        plVar6 = extraout_x9_00;
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
              func_0x00010729ec8c();
              lVar2 = extraout_x8_01;
              plVar6 = extraout_x9_01;
              uVar3 = extraout_x10_00;
              uVar5 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!(bool)in_CY) {
    func_0x00010729e330();
    if (((bool)in_CY) && (func_0x00010729eec4(), extraout_x8 == 0)) {
      func_0x00010729e2b0();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010729e884();
    if (!(bool)in_CY) goto LAB_107293684;
  }
  return;
}



/* Entry: 1072936c8; end: 10729378f;  */

void FUN_1072936c8(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar3;
  ulong extraout_x9;
  long *extraout_x9_00;
  long *plVar4;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_107293790(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar2 = param_1 + 8;
    FUN_1072937a8(lVar2);
    FUN_107293790(param_1,lVar2);
    uVar3 = 0;
    *(ulong *)(param_1 + 8) = param_2;
    while (param_2 != uVar3) {
      func_0x00010729eeb8();
      uVar3 = extraout_x9;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010729f134();
      func_0x00010729f114();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9_00;
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
            func_0x00010729ec8c();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_01;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107293790; end: 1072937a7;  */

void FUN_107293790(long *param_1,long param_2)

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



/* Entry: 1072937a8; end: 1072937f7;  */

void FUN_1072937a8(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072937dc();
  return;
}



/* Entry: 1072937f8; end: 10729399f;  */

undefined1  [16]
FUN_1072937f8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined8 uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x19;
  long *unaff_x21;
  long *plVar4;
  ulong uVar5;
  ulong unaff_x25;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 auStack_68 [3];
  
  func_0x00010729f1e8();
  func_0x000100102e7c();
  uVar5 = unaff_x19[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      unaff_x25 = uVar6 & param_3;
      in_NG = 0;
    }
    else {
      in_NG = (long)(param_3 - uVar5) < 0;
      unaff_x25 = param_3;
      if (uVar5 <= param_3) {
        func_0x00010729f1dc();
      }
    }
    plVar4 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar4;
          if (unaff_x21 == (long *)0x0) goto LAB_1072938b4;
          uVar3 = unaff_x21[1];
          in_NG = (long)(uVar3 - param_3) < 0;
          plVar4 = unaff_x21;
          if (uVar3 != param_3) break;
          uVar3 = (ulong)(unaff_x21 + 2);
          func_0x0001000e107c(uVar3,param_4);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0;
            goto LAB_107293988;
          }
        }
        if ((uVar5 & uVar6) == 0) {
          uVar3 = uVar3 & uVar6;
        }
        else if (uVar5 <= uVar3) {
          uVar1 = 0;
          if (uVar5 != 0) {
            uVar1 = uVar3 / uVar5;
          }
          uVar3 = uVar3 - uVar1 * uVar5;
        }
        in_NG = (long)(uVar3 - unaff_x25) < 0;
      } while (uVar3 == unaff_x25);
    }
  }
LAB_1072938b4:
  func_0x00010729eb1c(auStack_68);
  FUN_1072939a0();
  func_0x00010729ea54();
  if ((uVar5 == 0) ||
     (func_0x00010729edac(param_1,param_2,(float)uVar5), uVar6 = unaff_x25, (bool)in_NG)) {
    func_0x00010729ef60();
    func_0x00010729e34c();
    FUN_10729364c();
    uVar5 = unaff_x19[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar6 = uVar5 - 1 & param_3;
    }
    else {
      uVar6 = param_3;
      if (uVar5 <= param_3) {
        func_0x00010729f1dc();
        uVar6 = unaff_x25;
      }
    }
  }
  if (*(long *)(*unaff_x19 + uVar6 * 8) == 0) {
    func_0x00010729ec34();
    if (extraout_x9 != 0) {
      uVar6 = *(ulong *)(extraout_x9 + 8);
      if ((uVar5 & uVar5 - 1) == 0) {
        uVar6 = uVar6 & uVar5 - 1;
      }
      else if (uVar5 <= uVar6) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar6 / uVar5;
        }
        uVar6 = uVar6 - uVar3 * uVar5;
      }
      *(long **)(extraout_x8 + uVar6 * 8) = unaff_x21;
    }
  }
  else {
    func_0x00010729f1c8();
  }
  auStack_68[0] = 0;
  unaff_x19[3] = unaff_x19[3] + 1;
  FUN_107293a30(auStack_68);
  uVar2 = 1;
LAB_107293988:
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = unaff_x21;
  return auVar7;
}



/* Entry: 1072939a0; end: 1072939f7;  */

void FUN_1072939a0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_1072939f8(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1072939f8; end: 107293a2f;  */

void FUN_1072939f8(long param_1)

{
  long unaff_x20;
  
  func_0x00010729e618();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000100600fec(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 107293a30; end: 107293a4f;  */

void FUN_107293a30(void)

{
  func_0x00010729ef9c();
  FUN_107293a50();
  return;
}



/* Entry: 107293a50; end: 107293a67;  */

void FUN_107293a50(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107293aa8(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 107293a68; end: 107293b27;  */

void FUN_107293a68(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107293aa8(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 107293b28; end: 107293b57;  */

void FUN_107293b28(long param_1)

{
  func_0x00010729eb48();
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_107293b58();
  return;
}



/* Entry: 107293b58; end: 107293b6b;  */

void FUN_107293b58(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_107293b88();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 107293b6c; end: 107293b87;  */

void FUN_107293b6c(long param_1)

{
  FUN_107293b88();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 107293b88; end: 107293b93;  */

undefined8 FUN_107293b88(undefined8 param_1,undefined8 param_2)

{
  func_0x000107947410(param_1,0,param_2);
  func_0x000107931538();
  return param_1;
}



/* Entry: 107293b94; end: 107293bb3;  */

void FUN_107293b94(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010793156c();
  }
  return;
}



/* Entry: 107293bb4; end: 107293bdf;  */

void FUN_107293bb4(void)

{
  uint extraout_w8;
  
  func_0x00010729eba4();
  if ((extraout_w8 & 1) == 0) {
    FUN_107293be0();
  }
  return;
}



/* Entry: 107293be0; end: 107293bef;  */

void FUN_107293be0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x00010729efec();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x140;
    func_0x000107293c20();
  }
  return;
}



/* Entry: 107293bf0; end: 107293cbb;  */

void FUN_107293bf0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x140;
    func_0x000107293c20();
  }
  return;
}



/* Entry: 107293cbc; end: 107293cc3;  */

void FUN_107293cbc(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e5f0(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x140;
    func_0x000107293c20();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107293cc4; end: 107293d1b;  */

void FUN_107293cc4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e5f0();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x140;
    func_0x000107293c20();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107293d1c; end: 107293d2f;  */

void FUN_107293d1c(void)

{
  func_0x000107293cf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107293d30; end: 107293d67;  */

undefined8 FUN_107293d30(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x38;
  __Znwm(0x38);
  FUN_107293dc8();
  return uVar1;
}



/* Entry: 107293d68; end: 107293d93;  */

void FUN_107293d68(long param_1,undefined8 param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010729e5f0(param_2,param_1 + 8);
  func_0x00010729ee38();
  FUN_107293398();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x20 + 0x30) = *(undefined4 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 107293d94; end: 107293dbb;  */

void FUN_107293d94(undefined8 param_1)

{
  func_0x00010729e9d0();
  func_0x00010729e744(param_1,&PTR_DAT_110998438);
  func_0x00010729e3dc();
  return;
}



/* Entry: 107293dbc; end: 107293dc7;  */

undefined ** FUN_107293dbc(void)

{
  return &PTR_DAT_110998438;
}



/* Entry: 107293dc8; end: 107293dfb;  */

void FUN_107293dc8(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010729e5f0();
  func_0x00010729ee38();
  FUN_107293398();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x20 + 0x30) = *(undefined4 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 107293dfc; end: 1072949ab;  */

void FUN_107293dfc(long *param_1)

{
  long lVar1;
  uint uVar2;
  long *unaff_x20;
  float fVar3;
  float fVar4;
  undefined1 auStack_450 [1008];
  
  func_0x00010729e5f0();
  func_0x00010729e310();
  lVar1 = *param_1;
  if ((lVar1 != param_1[1]) && (*(char *)(lVar1 + 0x138) == '\x01')) {
    FUN_1072949ac(lVar1 + 0x108);
    FUN_1072949ac(*unaff_x20 + 0x108);
    FUN_1072949ac(*unaff_x20 + 0x108);
  }
  uVar2 = *(uint *)(unaff_x20 + 3);
  fVar3 = *(float *)((long)unaff_x20 + 0x1c);
  fVar4 = *(float *)(unaff_x20 + 4);
  FUN_107246514((double)*(float *)((long)unaff_x20 + 0x24),(double)*(float *)(unaff_x20 + 5),
                auStack_450,0);
                    /* WARNING: Could not recover jumptable at 0x000107293edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10de28590)[uVar2] * 4 + 0x107293ee0))((double)fVar4,(double)fVar3);
  return;
}



/* Entry: 1072949ac; end: 1072949c3;  */

void FUN_1072949ac(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int *piVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 auStack_118 [2];
  undefined4 uStack_110;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  int aiStack_c0 [6];
  undefined4 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x00010729f128();
  lVar2 = param_1;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  aiStack_c0[0] = (uint)param_1 + 0x114;
  if (3 < (uint)param_1) {
    aiStack_c0[0] = 0x116;
  }
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  ppuStack_a0 = &PTR_FUN_110996720;
  uStack_98 = 0;
  uStack_78 = 0;
  uStack_74 = 1;
  uStack_68 = 0;
  uStack_60 = 0;
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  uStack_70 = 0;
  iStack_80 = aiStack_c0[0];
  if (uVar1 == 0) {
    func_0x00010002b838(auStack_d8,"unknown");
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d8,param_2);
  }
  piVar3 = aiStack_c0;
  FUN_10726e300(piVar3,"source",auStack_d8);
  uVar1 = *(ulong *)(unaff_x21 + 8);
  if (-1 < (char)*(byte *)(unaff_x21 + 0x17)) {
    uVar1 = (ulong)*(byte *)(unaff_x21 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010002b838(auStack_f0,"unknown");
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_f0);
  }
  FUN_10726e300(piVar3,&DAT_10f408ba3,auStack_f0);
  uVar1 = *(ulong *)(unaff_x20 + 8);
  if (-1 < (char)*(byte *)(unaff_x20 + 0x17)) {
    uVar1 = (ulong)*(byte *)(unaff_x20 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010002b838(auStack_108,"default");
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_108);
  }
  FUN_10726e300(piVar3,"component",auStack_108);
  auStack_118[0] = 1;
  uStack_110 = 0;
  uStack_128 = *(undefined8 *)(lVar2 + 8);
  uStack_120 = 3;
  func_0x00010743fa9c((undefined8 *)(lVar2 + 8),piVar3,auStack_118,&uStack_128,7);
  func_0x00010729ea14();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  FUN_107262330(aiStack_c0);
  return;
}



/* Entry: 1072949c4; end: 107294bd7;  */

void FUN_1072949c4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int *piVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 auStack_108 [2];
  undefined4 uStack_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  int aiStack_b0 [6];
  undefined4 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x00010729f128();
  lVar2 = param_1;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  aiStack_b0[0] = (uint)param_1 + 0x114;
  if (3 < (uint)param_1) {
    aiStack_b0[0] = 0x116;
  }
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_90 = &PTR_FUN_110996720;
  uStack_88 = 0;
  uStack_68 = 0;
  uStack_64 = 1;
  uStack_58 = 0;
  uStack_50 = 0;
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  uStack_60 = 0;
  iStack_70 = aiStack_b0[0];
  if (uVar1 == 0) {
    func_0x00010002b838(auStack_c8,"unknown");
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_c8,param_2);
  }
  piVar3 = aiStack_b0;
  FUN_10726e300(piVar3,"source",auStack_c8);
  uVar1 = *(ulong *)(unaff_x21 + 8);
  if (-1 < (char)*(byte *)(unaff_x21 + 0x17)) {
    uVar1 = (ulong)*(byte *)(unaff_x21 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010002b838(auStack_e0,"unknown");
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e0);
  }
  FUN_10726e300(piVar3,&DAT_10f408ba3,auStack_e0);
  uVar1 = *(ulong *)(unaff_x20 + 8);
  if (-1 < (char)*(byte *)(unaff_x20 + 0x17)) {
    uVar1 = (ulong)*(byte *)(unaff_x20 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010002b838(auStack_f8,"default");
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_f8);
  }
  FUN_10726e300(piVar3,"component",auStack_f8);
  auStack_108[0] = 1;
  uStack_100 = 0;
  uStack_118 = *(undefined8 *)(lVar2 + 8);
  uStack_110 = 3;
  func_0x00010743fa9c((undefined8 *)(lVar2 + 8),piVar3,auStack_108,&uStack_118,7);
  func_0x00010729ea14();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  FUN_107262330(aiStack_b0);
  return;
}



/* Entry: 107294bd8; end: 107294be7;  */

undefined8 FUN_107294bd8(undefined8 param_1,ulong param_2)

{
  func_0x000107c60c50(param_1,*(undefined8 *)(&PTR_PTR_110998cc8)[param_2 & 0xffffffff],
                      *(undefined8 *)((long)(&PTR_PTR_110998cc8)[param_2 & 0xffffffff] + 8));
  return param_1;
}



/* Entry: 107294be8; end: 10729507b;  */

undefined8 * FUN_107294be8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  undefined **ppuVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  undefined **ppuVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_5c8;
  undefined8 uStack_528;
  undefined1 auStack_4e0 [16];
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 uStack_450;
  undefined1 auStack_448 [8];
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 auStack_410 [56];
  undefined1 auStack_3d8 [64];
  undefined1 auStack_398 [96];
  undefined4 uStack_338;
  undefined1 auStack_330 [168];
  undefined1 auStack_288 [168];
  undefined1 auStack_1e0 [168];
  undefined1 auStack_138 [56];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [104];
  undefined8 uStack_90;
  
  puVar9 = param_2;
  func_0x00010729e310();
  puVar13 = auStack_288;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar6 = param_1;
  uStack_90 = extraout_x8;
  for (; bVar3 = param_2 == param_3, !bVar3; param_2 = param_2 + 0x28) {
    func_0x00010726acf0(&uStack_4d0);
    func_0x000100060964(auStack_100,"id");
    func_0x00010729ea38(param_2[6],auStack_138);
    func_0x00010729efc0();
    func_0x0001072964ec();
    func_0x00010729e5d8(auStack_410);
    func_0x00010729e998();
    func_0x00010729eb78();
    func_0x00010729ea40();
    func_0x000100060964(auStack_100,"latitude");
    func_0x00010729efc0();
    func_0x000107296544();
    func_0x00010729e5d8(auStack_138);
    func_0x00010729e998();
    func_0x00010729ea40();
    func_0x000100060964(auStack_100,"longitude");
    func_0x00010729efc0();
    func_0x000107296544();
    func_0x00010729e5d8(auStack_138);
    func_0x00010729e998();
    func_0x00010729ea40();
    if (*(char *)(param_2 + 0x20) == '\x01') {
      uVar16 = param_2[0x1c];
      uVar17 = param_2[0x1d];
      uVar14 = param_2[0x1e];
      uVar15 = param_2[0x1f];
      func_0x000100060964(auStack_100,"left");
      func_0x00010729efc0();
      FUN_107296574(uVar17);
      func_0x000100060964(auStack_138,"top");
      FUN_107296574(uVar16,auStack_330,auStack_138);
      func_0x000100060964(auStack_410,"right");
      FUN_107296574(uVar15,puVar13,auStack_410);
      func_0x000100060964(auStack_448,"bottom");
      FUN_107296574(uVar14,auStack_1e0,auStack_448);
      FUN_1072965a0(auStack_4e0,auStack_3d8,4);
      lVar12 = 0x1f8;
      do {
        func_0x00010729651c(auStack_3d8 + lVar12);
        lVar12 = lVar12 + -0xa8;
      } while (lVar12 != -0xa8);
      func_0x00010729ece4();
      func_0x00010729f050();
      func_0x00010729eb78();
      func_0x00010729ea40();
      func_0x000100060964(auStack_100,&DAT_10f39d8ed);
      func_0x00010729efc0();
      func_0x000104c318bc();
      func_0x000107277f30(auStack_398,auStack_4e0);
      uStack_338 = 9;
      func_0x00010729e5d8(auStack_138);
      func_0x00010729e998();
      func_0x00010729ea40();
      func_0x00010729ed78();
    }
    func_0x000100060964(auStack_410,&DAT_10f2dd3dd);
    func_0x00010729f1bc();
    uStack_438 = 0;
    uStack_430 = 0;
    uVar11 = param_2[3];
    uStack_440 = 0;
    puVar1 = param_2 + 3;
    if ((uVar11 & 1) != 0) {
      puVar1 = (ulong *)(uVar11 + 7);
    }
    for (lVar12 = (long)*(int *)(param_2 + 4) << 3; lVar12 != 0; lVar12 = lVar12 + -8) {
      uVar11 = *puVar1;
      ppuVar10 = *(undefined ***)(uVar11 + 0x20);
      ppuVar2 = &PTR_PTR_113234600;
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar2 = ppuVar10;
      }
      FUN_1072967fc(auStack_100,ppuVar2);
      func_0x00010729ea38(*(undefined8 *)(uVar11 + 0x18),auStack_138);
      puVar5 = auStack_448;
      FUN_107295190(puVar5,auStack_138);
      FUN_10726cda0(puVar5 + 8,auStack_f8);
      func_0x00010729eb78();
      func_0x00010729e9b8();
      puVar1 = puVar1 + 1;
    }
    FUN_107278fec(auStack_4e0,auStack_448);
    FUN_107296a74(auStack_3d8,auStack_410,auStack_4e0);
    func_0x00010729e5d8(auStack_100);
    func_0x00010729e998();
    func_0x00010729ed78();
    func_0x00010729e8d4();
    func_0x00010729f050();
    uStack_4a8 = uStack_4c8;
    uStack_4b0 = uStack_4d0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    uStack_450 = 9;
    FUN_10726b264(&uStack_4d0);
    puVar9 = &uStack_4b8;
    puVar6 = param_1;
    FUN_107277668();
    func_0x00010729f0ac();
  }
  func_0x00010729e1e0(uStack_90);
  if (!bVar3) {
    ___stack_chk_fail();
    func_0x00010729eb78();
    func_0x00010729ea40();
    do {
      puVar13 = puVar13 + -0xa8;
      func_0x00010729651c(puVar13);
    } while (puVar13 != auStack_3d8);
    FUN_10726b264(&uStack_4d0);
    FUN_107277d70(param_1);
    __Unwind_Resume();
    puVar7 = puVar6;
    func_0x00010729e2fc();
    uVar4 = *(char *)(puVar7 + 0xe) == '\x01';
    if ((bool)uVar4) {
      func_0x00010729f19c();
      func_0x00010729ecac(8);
      func_0x00010729e9b8();
    }
    else {
      uVar14 = *puVar9;
      puVar6[2] = puVar9[1];
      puVar6[1] = uVar14;
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined4 *)(puVar6 + 0xd) = 8;
      *(undefined1 *)(puVar6 + 0xe) = 1;
    }
    func_0x00010729e1e0(uStack_528);
    if (!(bool)uVar4) {
      ___stack_chk_fail();
      puVar8 = puVar7;
      func_0x00010729e2fc();
      uVar4 = *(char *)(puVar8 + 0xe) == '\x01';
      if ((bool)uVar4) {
        func_0x00010729f19c();
        func_0x00010729ecac(9);
        func_0x00010729e9b8();
      }
      else {
        uVar14 = *puVar9;
        puVar7[2] = puVar9[1];
        puVar7[1] = uVar14;
        *puVar9 = 0;
        puVar9[1] = 0;
        *(undefined4 *)(puVar7 + 0xd) = 9;
        *(undefined1 *)(puVar7 + 0xe) = 1;
      }
      func_0x00010729e1e0(uStack_5c8);
      puVar6 = puVar7;
      if (!(bool)uVar4) {
        ___stack_chk_fail();
        if (*(char *)(puVar8 + 7) == '\x01') {
          func_0x000104c2f1f0();
        }
        else {
          FUN_107264a04();
        }
        return puVar8;
      }
    }
    return puVar6;
  }
  return puVar6;
}



/* Entry: 10729507c; end: 10729518f;  */

long FUN_10729507c(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_c8;
  undefined8 uStack_28;
  
  lVar2 = param_1;
  func_0x00010729e2fc();
  uVar1 = *(char *)(lVar2 + 0x70) == '\x01';
  if ((bool)uVar1) {
    func_0x00010729f19c();
    func_0x00010729ecac(8);
    func_0x00010729e9b8();
  }
  else {
    uVar4 = *param_2;
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    *(undefined8 *)(param_1 + 8) = uVar4;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_1 + 0x68) = 8;
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  func_0x00010729e1e0(uStack_28);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    lVar3 = lVar2;
    func_0x00010729e2fc();
    uVar1 = *(char *)(lVar3 + 0x70) == '\x01';
    if ((bool)uVar1) {
      func_0x00010729f19c();
      func_0x00010729ecac(9);
      func_0x00010729e9b8();
    }
    else {
      uVar4 = *param_2;
      *(undefined8 *)(lVar2 + 0x10) = param_2[1];
      *(undefined8 *)(lVar2 + 8) = uVar4;
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined4 *)(lVar2 + 0x68) = 9;
      *(undefined1 *)(lVar2 + 0x70) = 1;
    }
    func_0x00010729e1e0(uStack_c8);
    param_1 = lVar2;
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      if (*(char *)(lVar3 + 0x38) == '\x01') {
        func_0x000104c2f1f0();
      }
      else {
        FUN_107264a04();
      }
      return lVar3;
    }
  }
  return param_1;
}



/* Entry: 107295190; end: 1072951b7;  */

long FUN_107295190(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_107295f84(auStack_28);
  return lStack_20 + 0x38;
}



/* Entry: 1072951b8; end: 1072953bf;  */

ulong * FUN_1072951b8(ulong *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  long lStack_70;
  
  plVar4 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  plVar5 = (long *)plVar4[1];
  if (plVar5 < (long *)plVar4[2]) {
    if (plVar2 == plVar5) {
      FUN_1072953c0(plVar4,param_2);
      plVar4 = plVar2;
    }
    else {
      func_0x00010729eb34();
      FUN_1072953f0();
      lVar1 = 0x70;
      if ((long *)plVar4[1] <= param_2 || param_2 < plVar2) {
        lVar1 = 0;
      }
      FUN_1072955a4(plVar2 + 1,(long)param_2 + lVar1 + 8);
      plVar4 = plVar2;
    }
  }
  else {
    plVar3 = plVar4;
    FUN_10727776c(plVar4,((long)plVar5 - *plVar4) / 0x70 + 1);
    FUN_107277858(&uStack_b0,plVar3,((long)plVar2 - *plVar4) / 0x70,plVar4 + 2);
    if (uStack_a0 == uStack_98) {
      if (uStack_a8 < uStack_b0 || uStack_a8 - uStack_b0 == 0) {
        uVar6 = (long)(uStack_a0 - uStack_b0) / 0x70 << 1;
        if (uStack_a0 - uStack_b0 == 0) {
          uVar6 = 1;
        }
        FUN_107277858(auStack_80,uVar6,uVar6 >> 2,uStack_90);
        lVar7 = uStack_a0 - uStack_a8;
        uStack_a0 = lStack_70 + lVar7;
        lVar1 = uStack_a8 + 8;
        lStack_70 = lStack_70 + 8;
        uStack_a8 = uStack_78;
        for (; lVar7 != 0; lVar7 = lVar7 + -0x70) {
          uStack_78 = uStack_a8;
          FUN_10726cc04(lStack_70,lVar1);
          lVar1 = lVar1 + 0x70;
          lStack_70 = lStack_70 + 0x70;
          uStack_a8 = uStack_78;
        }
        func_0x000107277a38(auStack_80);
      }
      else {
        lVar1 = (((long)(uStack_a8 - uStack_b0) / 0x70 + 1) / -2) * 0x70;
        for (uVar6 = uStack_a8; uVar6 != uStack_a0; uVar6 = uVar6 + 0x70) {
          FUN_10726cda0(uVar6 + 8 + lVar1);
        }
        uStack_a0 = uVar6 + lVar1;
        uStack_a8 = uStack_a8 + lVar1;
      }
    }
    FUN_1072786d8(uStack_a0 + 8,param_2 + 1);
    uStack_a0 = uStack_a0 + 0x70;
    FUN_10729546c(plVar4,&uStack_b0,plVar2);
    func_0x000107277a38(&uStack_b0);
  }
  param_1[1] = (ulong)(plVar4 + 0xe);
  return param_1;
}



/* Entry: 1072953c0; end: 1072953ef;  */

void FUN_1072953c0(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729efa8();
  FUN_1072786d8(unaff_x20 + 8,param_2 + 8);
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x70;
  return;
}



/* Entry: 1072953f0; end: 10729546b;  */

void FUN_1072953f0(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  func_0x00010729f100();
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = param_2 + (lVar2 - param_4);
  lVar3 = lVar2;
  for (uVar4 = uVar1; uVar4 < param_3; uVar4 = uVar4 + 0x70) {
    FUN_10726cc04(lVar3 + 8,uVar4 + 8);
    lVar3 = lVar3 + 0x70;
  }
  *(long *)(param_1 + 8) = lVar3;
  func_0x00010729e688(param_2,uVar1,lVar2);
  FUN_107295548();
  return;
}



/* Entry: 10729546c; end: 10729552b;  */

undefined8 FUN_10729546c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  func_0x000100601028();
  uVar1 = *(undefined8 *)(param_2 + 8);
  FUN_1072778f8(param_1 + 0x10);
  lVar3 = *unaff_x21;
  lVar2 = unaff_x20[1];
  unaff_x20[2] = unaff_x20[2] + (unaff_x21[1] - unaff_x19);
  unaff_x21[1] = unaff_x19;
  FUN_1072778f8(unaff_x21 + 2);
  unaff_x20[1] = lVar2 + ((unaff_x19 - lVar3) / -0x70) * 0x70;
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



/* Entry: 10729552c; end: 107295547;  */

void FUN_10729552c(void)

{
  func_0x00010729e688();
  FUN_107295548();
  return;
}



/* Entry: 107295548; end: 1072955a3;  */

void FUN_107295548(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x21;
  
  func_0x00010729e624();
  param_4 = param_4 + -0x68;
  for (; param_3 != unaff_x21; param_3 = param_3 + -0x70) {
    FUN_10726cda0(param_4,param_3 + -0x68);
    param_4 = param_4 + -0x70;
  }
  func_0x00010729ea48();
  return;
}



/* Entry: 1072955a4; end: 1072955f7;  */

void FUN_1072955a4(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x60) != -1 || *(int *)(param_2 + 0x60) != -1) {
    if (*(int *)(param_2 + 0x60) == -1) {
      if (*(uint *)(param_1 + 0x60) != 0xffffffff) {
        func_0x0001072745a8((&PTR_FUN_110995ea8)[*(uint *)(param_1 + 0x60)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
      return;
    }
    func_0x00010729f01c();
  }
  return;
}



/* Entry: 1072955f8; end: 107295627;  */

void FUN_1072955f8(long *param_1)

{
  if (*(int *)(*param_1 + 0x60) != 0) {
    func_0x00010729e9a0();
    FUN_107295650();
  }
  return;
}



/* Entry: 107295628; end: 10729564f;  */

void FUN_107295628(long param_1)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    func_0x00010729e9a0();
    FUN_107295650();
  }
  return;
}



/* Entry: 107295650; end: 107295673;  */

void FUN_107295650(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_10726af18(lVar1);
  *(undefined4 *)(lVar1 + 0x60) = 0;
  return;
}



/* Entry: 107295674; end: 10729567b;  */

void FUN_107295674(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (*(int *)(*param_1 + 0x60) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x00010729e9a0();
  FUN_1072956b0();
  return;
}



/* Entry: 10729567c; end: 1072956af;  */

void FUN_10729567c(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (*(int *)(param_1 + 0x60) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x00010729e9a0();
  FUN_1072956b0();
  return;
}



/* Entry: 1072956b0; end: 1072956bb;  */

void FUN_1072956b0(undefined8 *param_1)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x00010729e5f0(*param_1,param_1[1]);
  FUN_10726af18();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x60) = 1;
  return;
}



/* Entry: 1072956bc; end: 1072956eb;  */

void FUN_1072956bc(void)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x00010729e5f0();
  FUN_10726af18();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x60) = 1;
  return;
}



/* Entry: 1072956ec; end: 1072956f3;  */

void FUN_1072956ec(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*(int *)(*param_1 + 0x60) == 2) {
    *param_2 = *param_3;
    return;
  }
  func_0x00010729e9a0();
  FUN_107295728();
  return;
}



/* Entry: 1072956f4; end: 107295727;  */

void FUN_1072956f4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*(int *)(param_1 + 0x60) == 2) {
    *param_2 = *param_3;
    return;
  }
  func_0x00010729e9a0();
  FUN_107295728();
  return;
}



/* Entry: 107295728; end: 107295733;  */

void FUN_107295728(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010729e5f0(*param_1,param_1[1]);
  FUN_10726af18();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0xc) = 2;
  return;
}



/* Entry: 107295734; end: 107295763;  */

void FUN_107295734(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010729e5f0();
  FUN_10726af18();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0xc) = 2;
  return;
}



/* Entry: 107295764; end: 10729576b;  */

void FUN_107295764(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x60) == 3) {
    func_0x0001072747d8(param_2,param_3);
    func_0x000107262f84();
    func_0x000104c2fe38();
    *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
    return;
  }
  func_0x00010729e9a0();
  FUN_1072957a0();
  return;
}



/* Entry: 10729576c; end: 10729579f;  */

void FUN_10729576c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x60) == 3) {
    func_0x0001072747d8(param_2,param_3);
    func_0x000107262f84();
    func_0x000104c2fe38();
    *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
    return;
  }
  func_0x00010729e9a0();
  FUN_1072957a0();
  return;
}



/* Entry: 1072957a0; end: 1072957ab;  */

void FUN_1072957a0(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010729e5f0(*param_1,param_1[1]);
  FUN_10726af18();
  func_0x00010729ea48();
  func_0x000104c2fe00();
  *(undefined4 *)(unaff_x20 + 0x60) = 3;
  return;
}



/* Entry: 1072957ac; end: 1072957d7;  */

void FUN_1072957ac(void)

{
  long unaff_x20;
  
  func_0x00010729e5f0();
  FUN_10726af18();
  func_0x00010729ea48();
  func_0x000104c2fe00();
  *(undefined4 *)(unaff_x20 + 0x60) = 3;
  return;
}



/* Entry: 1072957d8; end: 1072957df;  */

void FUN_1072957d8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(*param_1 + 0x60) == 4) {
    uVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar1;
    return;
  }
  func_0x00010729e9a0();
  FUN_107295814();
  return;
}



/* Entry: 1072957e0; end: 107295813;  */

void FUN_1072957e0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x60) == 4) {
    uVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar1;
    return;
  }
  func_0x00010729e9a0();
  FUN_107295814();
  return;
}



/* Entry: 107295814; end: 10729581f;  */

void FUN_107295814(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010729e5f0(*param_1,param_1[1]);
  FUN_10726af18();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  *(undefined4 *)(unaff_x20 + 0xc) = 4;
  return;
}



/* Entry: 107295820; end: 10729584f;  */

void FUN_107295820(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010729e5f0();
  FUN_10726af18();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  *(undefined4 *)(unaff_x20 + 0xc) = 4;
  return;
}



/* Entry: 107295850; end: 107295857;  */

undefined8 * FUN_107295850(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)*param_1;
  if (*(int *)(puVar1 + 0xc) != 5) {
    func_0x00010729e9a0();
    FUN_10729588c();
    return puVar1;
  }
  uVar3 = param_3[1];
  uVar2 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x00010729e450();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  param_2[1] = uVar3;
  *param_2 = uVar2;
  FUN_10726af9c(&uStack_30);
  return param_2;
}



/* Entry: 107295858; end: 10729588b;  */

undefined8 * FUN_107295858(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_1 + 0xc) != 5) {
    func_0x00010729e9a0();
    FUN_10729588c();
    return param_1;
  }
  uVar2 = param_3[1];
  uVar1 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x00010729e450();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  FUN_10726af9c(&uStack_30);
  return param_2;
}



/* Entry: 10729588c; end: 107295897;  */

void FUN_10729588c(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x00010729e618(*param_1,param_1[1]);
  FUN_10726af18();
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  unaff_x19[1] = unaff_x20[1];
  *unaff_x19 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010729e450();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(unaff_x19 + 0xc) = 5;
  return;
}



/* Entry: 107295898; end: 107295927;  */

undefined8 * FUN_107295898(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010729e450();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_10726af9c(&uStack_30);
  return param_1;
}



/* Entry: 107295928; end: 10729592f;  */

void FUN_107295928(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  
  bVar1 = *(int *)(*param_1 + 0x60) == 6;
  if (bVar1) {
    func_0x00010729ebb0(param_2,param_3);
    if (!bVar1) {
      func_0x00010729ede8();
      FUN_1072959d0();
    }
    return;
  }
  func_0x00010729e9a0();
  FUN_107295964();
  return;
}



/* Entry: 107295930; end: 107295963;  */

void FUN_107295930(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x60) == 6;
  if (bVar1) {
    func_0x00010729ebb0(param_2,param_3);
    if (!bVar1) {
      func_0x00010729ede8();
      FUN_1072959d0();
    }
    return;
  }
  func_0x00010729e9a0();
  FUN_107295964();
  return;
}



/* Entry: 107295964; end: 1072959a7;  */

void FUN_107295964(long param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_1072787e4(auStack_38,*(undefined8 *)(param_1 + 8));
  func_0x00010729ec1c();
  func_0x00010726d17c();
  func_0x00010726afc0(auStack_38);
  return;
}



/* Entry: 1072959a8; end: 1072959cf;  */

void FUN_1072959a8(void)

{
  undefined1 in_ZR;
  
  func_0x00010729ebb0();
  if (!(bool)in_ZR) {
    func_0x00010729ede8();
    FUN_1072959d0();
  }
  return;
}



/* Entry: 1072959d0; end: 1072959df;  */

void FUN_1072959d0(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  
  uVar2 = (param_3 - param_2) / 0x120;
  func_0x00010729e524();
  if ((ulong)(extraout_x8 / 0x120) < uVar2) {
    func_0x00010726d14c();
    func_0x00010729ec28();
    FUN_107295a98();
    func_0x00010729ebf0();
    FUN_107278888();
    func_0x00010729e9ac();
    unaff_x22 = unaff_x19;
  }
  else {
    if (unaff_x21 <= (ulong)((unaff_x19[1] - param_3) / 0x120)) {
      func_0x00010729ed90();
      func_0x000107295af0();
      plVar1 = unaff_x19;
      func_0x0001072747d8();
      plVar1 = (long *)plVar1[1];
      while (plVar1 != unaff_x19) {
        plVar1 = plVar1 + -0x24;
        func_0x00010726b04c();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000107295af0();
    func_0x00010729e8bc(unaff_x19[1] - *unaff_x19);
  }
  plVar1 = unaff_x22 + 2;
  func_0x000107278968();
  unaff_x22[1] = (long)plVar1;
  return;
}



/* Entry: 1072959e0; end: 107295a97;  */

void FUN_1072959e0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  
  func_0x00010729e524();
  if ((ulong)(extraout_x8 / 0x120) < param_4) {
    func_0x00010726d14c();
    func_0x00010729ec28();
    FUN_107295a98();
    func_0x00010729ebf0();
    FUN_107278888();
    func_0x00010729e9ac();
    unaff_x22 = unaff_x19;
  }
  else {
    if (unaff_x21 <= (ulong)((unaff_x19[1] - param_3) / 0x120)) {
      func_0x00010729ed90();
      func_0x000107295af0();
      plVar1 = unaff_x19;
      func_0x0001072747d8();
      plVar1 = (long *)plVar1[1];
      while (plVar1 != unaff_x19) {
        plVar1 = plVar1 + -0x24;
        func_0x00010726b04c();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000107295af0();
    func_0x00010729e8bc(unaff_x19[1] - *unaff_x19);
  }
  plVar1 = unaff_x22 + 2;
  func_0x000107278968();
  unaff_x22[1] = (long)plVar1;
  return;
}



/* Entry: 107295a98; end: 107295b0b;  */

long * FUN_107295a98(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0xe38e38e38e38e3 < param_2) {
    FUN_107278908();
    func_0x00010729e688();
    FUN_107295b0c();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x120;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x71c71c71c71c70 < uVar1) {
    plVar2 = (long *)0xe38e38e38e38e3;
  }
  return plVar2;
}



/* Entry: 107295b0c; end: 107295b4f;  */

void FUN_107295b0c(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010729e624();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x120) {
    func_0x00010729f1b0();
    FUN_107295b50();
  }
  func_0x00010729ea48();
  return;
}



/* Entry: 107295b50; end: 107295ba7;  */

void FUN_107295b50(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e5f0();
  FUN_107262f3c();
  FUN_107295ba8(unaff_x20 + 0x38,unaff_x19 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined1 *)(unaff_x20 + 0xa8) = *(undefined1 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar1;
  FUN_107295c28(unaff_x20 + 0xb0,unaff_x19 + 0xb0);
  _memcpy(unaff_x20 + 200,unaff_x19 + 200,0x51);
  return;
}



/* Entry: 107295ba8; end: 107295bcf;  */

void FUN_107295ba8(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x60);
  if (cVar1 != *(char *)(param_2 + 0x60)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x60) == '\x01') {
        FUN_10726b164();
        *(undefined1 *)(param_1 + 0x60) = 0;
      }
      return;
    }
    FUN_107278acc();
    *(undefined1 *)(param_1 + 0x60) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010729e5f0();
    FUN_107262f3c();
    *(undefined1 *)(unaff_x20 + 0x38) = *(undefined1 *)(unaff_x19 + 0x38);
    func_0x0001002a969c(unaff_x20 + 0x40,unaff_x19 + 0x40);
    return;
  }
  return;
}



/* Entry: 107295bd0; end: 107295c03;  */

void FUN_107295bd0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e5f0();
  FUN_107262f3c();
  *(undefined1 *)(unaff_x20 + 0x38) = *(undefined1 *)(unaff_x19 + 0x38);
  func_0x0001002a969c(unaff_x20 + 0x40,unaff_x19 + 0x40);
  return;
}



/* Entry: 107295c04; end: 107295c27;  */

void FUN_107295c04(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_10726b164();
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}



/* Entry: 107295c28; end: 107295c4f;  */

void FUN_107295c28(long param_1,long param_2)

{
  char cVar1;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  undefined1 auStack_30 [16];
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 != *(char *)(param_2 + 0x10)) {
    if (cVar1 == '\0') {
      FUN_107278b70();
      *(undefined1 *)(param_1 + 0x10) = 1;
      return;
    }
    if (*(char *)(param_1 + 0x10) == '\x01') {
      FUN_10726b09c();
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    return;
  }
  if (cVar1 == '\0') {
    return;
  }
  if (param_1 != param_2) {
    func_0x00010729e4f0();
    if (extraout_x8 != 0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010729ea8c();
    func_0x000107295ce8();
    FUN_10726b120(auStack_30);
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_01 != 0);
    }
  }
  return;
}



/* Entry: 107295c50; end: 107295c73;  */

void FUN_107295c50(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10726b09c();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 107295c74; end: 107295d0b;  */

void FUN_107295c74(long param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  undefined1 auStack_30 [16];
  
  if (param_1 != param_2) {
    func_0x00010729e4f0();
    if (extraout_x8 != 0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010729ea8c();
    func_0x000107295ce8();
    FUN_10726b120(auStack_30);
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_01 != 0);
    }
  }
  return;
}



/* Entry: 107295d0c; end: 107295d13;  */

void FUN_107295d0c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x60) == 7) {
    func_0x00010729e5f0(param_2,param_3);
    FUN_107262f3c();
    *(undefined1 *)(unaff_x20 + 0x38) = *(undefined1 *)(unaff_x19 + 0x38);
    func_0x0001002a969c(unaff_x20 + 0x40,unaff_x19 + 0x40);
    return;
  }
  func_0x00010729e9a0();
  FUN_107295d48();
  return;
}



/* Entry: 107295d14; end: 107295d47;  */

void FUN_107295d14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x60) == 7) {
    func_0x00010729e5f0(param_2,param_3);
    FUN_107262f3c();
    *(undefined1 *)(unaff_x20 + 0x38) = *(undefined1 *)(unaff_x19 + 0x38);
    func_0x0001002a969c(unaff_x20 + 0x40,unaff_x19 + 0x40);
    return;
  }
  func_0x00010729e9a0();
  FUN_107295d48();
  return;
}



/* Entry: 107295d48; end: 107295da7;  */

void FUN_107295d48(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 auStack_c0 [16];
  long alStack_88 [12];
  undefined8 uStack_28;
  
  func_0x00010729e2fc();
  plVar1 = (long *)*param_1;
  lVar3 = param_1[1];
  FUN_107278acc(alStack_88);
  func_0x00010729ec1c();
  FUN_10726d224();
  plVar2 = alStack_88;
  FUN_10726b164();
  func_0x00010729e1e0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010729e6ec();
  FUN_10726b164();
  func_0x00010729e514();
  if (*(int *)(*plVar2 + 0x60) != 8) {
    func_0x00010729e9a0();
    FUN_107295de4();
    return;
  }
  if (lVar3 != param_3) {
    func_0x00010729e4f0();
    if (extraout_x8 != 0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    if (*plVar1 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010729ea8c();
    FUN_10726d2c4();
    FUN_10726b20c(auStack_c0);
    if (*plVar1 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_01 != 0);
    }
  }
  return;
}



/* Entry: 107295da8; end: 107295daf;  */

void FUN_107295da8(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  undefined1 auStack_30 [16];
  
  if (*(int *)(*param_1 + 0x60) != 8) {
    func_0x00010729e9a0();
    FUN_107295de4();
    return;
  }
  if (param_2 != param_3) {
    func_0x00010729e4f0();
    if (extraout_x8 != 0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010729ea8c();
    FUN_10726d2c4();
    FUN_10726b20c(auStack_30);
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_01 != 0);
    }
  }
  return;
}



/* Entry: 107295db0; end: 107295de3;  */

void FUN_107295db0(long param_1,long param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  undefined1 auStack_30 [16];
  
  if (*(int *)(param_1 + 0x60) != 8) {
    func_0x00010729e9a0();
    FUN_107295de4();
    return;
  }
  if (param_2 != param_3) {
    func_0x00010729e4f0();
    if (extraout_x8 != 0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010729ea8c();
    FUN_10726d2c4();
    FUN_10726b20c(auStack_30);
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_01 != 0);
    }
  }
  return;
}



/* Entry: 107295de4; end: 107295e23;  */

void FUN_107295de4(long param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_107278c90(auStack_30,*(undefined8 *)(param_1 + 8));
  func_0x00010729ea8c();
  func_0x00010726d2e8();
  FUN_10726b188(auStack_30);
  return;
}



/* Entry: 107295e24; end: 107295e97;  */

void FUN_107295e24(long param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  undefined1 auStack_30 [16];
  
  if (param_1 != param_2) {
    func_0x00010729e4f0();
    if (extraout_x8 != 0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010729ea8c();
    FUN_10726d2c4();
    FUN_10726b20c(auStack_30);
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_01 != 0);
    }
  }
  return;
}



/* Entry: 107295e98; end: 107295e9f;  */

void FUN_107295e98(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  undefined1 auStack_30 [16];
  
  if (*(int *)(*param_1 + 0x60) != 9) {
    func_0x00010729e9a0();
    FUN_107295ed4();
    return;
  }
  if (param_2 != param_3) {
    func_0x00010729e4f0();
    if (extraout_x8 != 0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010729ea8c();
    FUN_10726d388();
    func_0x00010726b230(auStack_30);
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_01 != 0);
    }
  }
  return;
}



/* Entry: 107295ea0; end: 107295ed3;  */

void FUN_107295ea0(long param_1,long param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  undefined1 auStack_30 [16];
  
  if (*(int *)(param_1 + 0x60) != 9) {
    func_0x00010729e9a0();
    FUN_107295ed4();
    return;
  }
  if (param_2 != param_3) {
    func_0x00010729e4f0();
    if (extraout_x8 != 0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010729ea8c();
    FUN_10726d388();
    func_0x00010726b230(auStack_30);
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_01 != 0);
    }
  }
  return;
}



/* Entry: 107295ed4; end: 107295f0f;  */

void FUN_107295ed4(long param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x000107277f30(auStack_30,*(undefined8 *)(param_1 + 8));
  func_0x00010729ea8c();
  func_0x00010726d3ac();
  func_0x00010729ea30();
  return;
}


