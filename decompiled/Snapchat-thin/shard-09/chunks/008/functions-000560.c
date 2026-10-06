/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072631a8; end: 1072631db;  */

long FUN_1072631a8(long param_1,long param_2,long param_3)

{
  int extraout_w10;
  
  if (*(int *)(param_1 + 0x28) != 3) {
    func_0x000107274a44();
    FUN_10726321c();
    return param_1;
  }
  if (*(long *)(param_3 + 8) != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  func_0x000107275928();
  func_0x000104c33970();
  return param_2;
}



/* Entry: 1072631dc; end: 10726321b;  */

undefined8 FUN_1072631dc(undefined8 param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  func_0x000107275928();
  func_0x000104c33970();
  return param_1;
}



/* Entry: 10726321c; end: 107263227;  */

void FUN_10726321c(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x0001072747cc(*param_1,param_1[1]);
  func_0x000104c2f714();
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  unaff_x19[1] = unaff_x20[1];
  *unaff_x19 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(unaff_x19 + 5) = 3;
  return;
}



/* Entry: 107263228; end: 10726326b;  */

void FUN_107263228(void)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x0001072747cc();
  func_0x000104c2f714();
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  unaff_x19[1] = unaff_x20[1];
  *unaff_x19 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(unaff_x19 + 5) = 3;
  return;
}



/* Entry: 10726326c; end: 107263273;  */

undefined8 * FUN_10726326c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (*(int *)(puVar1 + 5) == 4) {
    uVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar2;
    FUN_1072631dc(param_2 + 2,param_3 + 2);
    return param_2;
  }
  func_0x000107274a44();
  FUN_1072632d0();
  return puVar1;
}



/* Entry: 107263274; end: 1072632a7;  */

undefined8 * FUN_107263274(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 5) == 4) {
    uVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar1;
    FUN_1072631dc(param_2 + 2,param_3 + 2);
    return param_2;
  }
  func_0x000107274a44();
  FUN_1072632d0();
  return param_1;
}



/* Entry: 1072632a8; end: 1072632cf;  */

undefined8 * FUN_1072632a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  FUN_1072631dc(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1072632d0; end: 1072632db;  */

void FUN_1072632d0(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x0001072747cc(*param_1,param_1[1]);
  func_0x000104c2f714();
  uVar2 = *unaff_x20;
  unaff_x19[1] = unaff_x20[1];
  *unaff_x19 = uVar2;
  lVar1 = unaff_x20[3];
  uVar2 = unaff_x20[2];
  unaff_x19[3] = unaff_x20[3];
  unaff_x19[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(unaff_x19 + 5) = 4;
  return;
}



/* Entry: 1072632dc; end: 107263367;  */

void FUN_1072632dc(void)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x0001072747cc();
  func_0x000104c2f714();
  uVar2 = *unaff_x20;
  unaff_x19[1] = unaff_x20[1];
  *unaff_x19 = uVar2;
  lVar1 = unaff_x20[3];
  uVar2 = unaff_x20[2];
  unaff_x19[3] = unaff_x20[3];
  unaff_x19[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(unaff_x19 + 5) = 4;
  return;
}



/* Entry: 107263368; end: 107263383;  */

void FUN_107263368(long param_1)

{
  FUN_107263384();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 107263384; end: 1072633e3;  */

void FUN_107263384(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747cc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x18,unaff_x20 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x30,unaff_x20 + 0x30);
  *(undefined2 *)(unaff_x19 + 0x48) = *(undefined2 *)(unaff_x20 + 0x48);
  return;
}



/* Entry: 1072633e4; end: 1072633fb;  */

void FUN_1072633e4(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107946c50(param_1,0,param_2);
  func_0x000107946d88(&PTR_DAT_1109ec2e0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  lVar2 = unaff_x20 + 0x10;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x10) = lVar2;
  lVar2 = unaff_x20 + 0x18;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x18) = lVar2;
  lVar2 = unaff_x20 + 0x20;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x20) = lVar2;
  lVar2 = unaff_x20 + 0x28;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x28) = lVar2;
  *(undefined4 *)(unaff_x19 + 0x3c) = 0;
  uVar1 = *(undefined4 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined4 *)(unaff_x19 + 0x38) = uVar1;
  return;
}



/* Entry: 1072633fc; end: 10726342b;  */

long FUN_1072633fc(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10726342c(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x48;
}



/* Entry: 10726342c; end: 1072635fb;  */

undefined1  [16]
FUN_10726342c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong uVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x10;
  long *unaff_x19;
  long *unaff_x21;
  long *plVar4;
  ulong uVar5;
  ulong unaff_x27;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107274760();
  uVar5 = unaff_x19[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      unaff_x27 = uVar6 & param_3;
      in_ZR = true;
      in_NG = false;
    }
    else {
      in_NG = (long)(param_3 - uVar5) < 0;
      in_ZR = param_3 == uVar5;
      unaff_x27 = param_3;
      if (uVar5 <= param_3) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = param_3 / uVar5;
        }
        unaff_x27 = param_3 - uVar3 * uVar5;
      }
    }
    plVar4 = *(long **)(*unaff_x19 + unaff_x27 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar4;
          if (unaff_x21 == (long *)0x0) goto LAB_1072634f0;
          func_0x000107274fd0();
          plVar4 = unaff_x21;
          if (!(bool)in_ZR) break;
          plVar1 = unaff_x21 + 2;
          func_0x000104c32db4(plVar1,param_4);
          if (((ulong)plVar1 & 1) != 0) {
            uVar2 = 0;
            goto LAB_1072635cc;
          }
        }
        if ((uVar5 & uVar6) == 0) {
          uVar3 = extraout_x8 & uVar6;
        }
        else {
          uVar3 = extraout_x8;
          if (uVar5 <= extraout_x8) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = extraout_x8 / uVar5;
            }
            uVar3 = extraout_x8 - uVar3 * uVar5;
          }
        }
        in_NG = (long)(uVar3 - unaff_x27) < 0;
        in_ZR = uVar3 == unaff_x27;
      } while ((bool)in_ZR);
    }
  }
LAB_1072634f0:
  func_0x000107274680();
  FUN_1072635fc();
  func_0x00010727423c();
  if ((uVar5 == 0) || (func_0x000107274958(param_1,param_2,(float)uVar5), (bool)in_NG)) {
    func_0x00010727413c(uVar5 << 1);
    FUN_1072636c8();
    uVar5 = unaff_x19[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      in_ZR = 1;
      unaff_x27 = uVar5 - 1 & param_3;
    }
    else {
      in_ZR = param_3 == uVar5;
      unaff_x27 = param_3;
      if (uVar5 <= param_3) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = param_3 / uVar5;
        }
        unaff_x27 = param_3 - uVar6 * uVar5;
      }
    }
  }
  if (*(long *)(*unaff_x19 + unaff_x27 * 8) == 0) {
    func_0x0001072742c8();
    *(undefined8 *)(extraout_x8_00 + unaff_x27 * 8) = extraout_x9;
    if (*unaff_x21 != 0) {
      func_0x000107275394();
      if ((bool)in_ZR) {
        uVar6 = extraout_x9_00 & extraout_x10;
      }
      else {
        uVar6 = extraout_x9_00;
        if (uVar5 <= extraout_x9_00) {
          uVar6 = 0;
          if (uVar5 != 0) {
            uVar6 = extraout_x9_00 / uVar5;
          }
          uVar6 = extraout_x9_00 - uVar6 * uVar5;
        }
      }
      *(long **)(extraout_x8_01 + uVar6 * 8) = unaff_x21;
    }
  }
  else {
    func_0x000107274428();
  }
  func_0x000107274274();
  FUN_107263820();
  uVar2 = 1;
LAB_1072635cc:
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = unaff_x21;
  return auVar7;
}



/* Entry: 1072635fc; end: 10726364b;  */

void FUN_1072635fc(long param_1)

{
  __Znwm(0x90);
  func_0x000107275374();
  FUN_107263668();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 10726364c; end: 107263667;  */

void FUN_10726364c(undefined8 param_1,undefined8 param_2)

{
  func_0x000104c2fe38(param_2);
  return;
}



/* Entry: 107263668; end: 10726368b;  */

void FUN_107263668(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10726368c(param_1,&uStack_18,&uStack_19);
  return;
}



/* Entry: 10726368c; end: 1072636bf;  */

long FUN_10726368c(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c318bc(param_1,*param_2);
  FUN_1072636c0(lVar1 + 0x38);
  return param_1;
}



/* Entry: 1072636c0; end: 1072636c7;  */

void FUN_1072636c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109eddc0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_11383d918;
  param_1[4] = &DAT_11383d918;
  param_1[5] = &DAT_11383d918;
  param_1[6] = &DAT_11383d918;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1072636c8; end: 107263743;  */

void FUN_1072636c8(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  func_0x000100168540();
  if ((!(bool)in_ZR) && (func_0x000107274d1c(), !(bool)in_ZR)) {
    func_0x000107274b2c();
  }
  func_0x0001001685c8();
  if ((bool)in_CY && !(bool)in_ZR) {
LAB_107263700:
    func_0x0001001685d4();
    if (param_2 == 0) {
      FUN_1072637f0(param_1);
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      func_0x0001001685e0();
      FUN_107263808();
      func_0x0001001686b8();
      FUN_1072637f0();
      func_0x0001001686dc();
      uVar3 = extraout_x9;
      while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
        func_0x0001001686ec();
        uVar3 = extraout_x9_00;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x0001072742e0();
        func_0x0001072742f4();
        plVar4 = extraout_x9_01;
        while (*plVar4 != 0) {
          func_0x000107274bf0();
          lVar2 = extraout_x8_00;
          plVar4 = extraout_x12;
          uVar3 = extraout_x11;
          if ((bool)uVar1) {
            uVar5 = extraout_x13 & extraout_x10;
          }
          else {
            uVar5 = extraout_x13;
            if (unaff_x19 <= extraout_x13) {
              func_0x000107274bd8();
              lVar2 = extraout_x8_01;
              uVar3 = extraout_x11_00;
              plVar4 = extraout_x12_00;
              uVar5 = extraout_x13_00;
            }
          }
          uVar1 = uVar5 == uVar3;
          if (!(bool)uVar1) {
            if (*(long *)(lVar2 + uVar5 * 8) == 0) {
              func_0x000107274bcc();
              plVar4 = extraout_x12_01;
            }
            else {
              func_0x00010727411c();
              plVar4 = extraout_x9_02;
            }
          }
        }
      }
    }
    return;
  }
  if (!(bool)in_CY) {
    func_0x00010727419c();
    if (((bool)in_CY) && (func_0x000107274be4(), extraout_x8 == 0)) {
      func_0x0001072740fc();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010727462c();
    if (!(bool)in_CY) goto LAB_107263700;
  }
  return;
}



/* Entry: 107263744; end: 1072637ef;  */

void FUN_107263744(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  if (param_2 == 0) {
    FUN_1072637f0(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001001685e0();
    FUN_107263808();
    func_0x0001001686b8();
    FUN_1072637f0();
    func_0x0001001686dc();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x0001001686ec();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001072742e0();
      func_0x0001072742f4();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x000107274bf0();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000107274bd8();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x000107274bcc();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x00010727411c();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1072637f0; end: 107263807;  */

void FUN_1072637f0(long *param_1,long param_2)

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



/* Entry: 107263808; end: 10726381f;  */

void FUN_107263808(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000100168718();
  FUN_107263840();
  return;
}



/* Entry: 107263820; end: 10726383f;  */

void FUN_107263820(void)

{
  func_0x000100168718();
  FUN_107263840();
  return;
}



/* Entry: 107263840; end: 107263857;  */

void FUN_107263840(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x000107274adc(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x000107263890(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107263858; end: 1072638b3;  */

void FUN_107263858(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000107274adc();
  if ((bool)in_ZR) {
    func_0x000107263890(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072638b4; end: 1072638f7;  */

void FUN_1072638b4(undefined8 param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined8 *extraout_x9;
  long extraout_x10;
  undefined8 extraout_x10_00;
  ulong extraout_x11;
  ulong uVar1;
  ulong extraout_x12;
  ulong extraout_x13;
  undefined8 unaff_x30;
  
  func_0x0001072744e8();
  if (extraout_x10 != 0) {
    func_0x0001072754dc(param_1,unaff_x30);
    if ((bool)in_ZR) {
      uVar1 = extraout_x13 & extraout_x11;
    }
    else {
      uVar1 = extraout_x11;
      if (extraout_x12 <= extraout_x11) {
        uVar1 = 0;
        if (extraout_x12 != 0) {
          uVar1 = extraout_x11 / extraout_x12;
        }
        uVar1 = extraout_x11 - uVar1 * extraout_x12;
      }
    }
    *(undefined8 *)(extraout_x8 + uVar1 * 8) = extraout_x10_00;
    *extraout_x9 = 0;
    extraout_x9[1] = 0;
  }
  return;
}



/* Entry: 1072638f8; end: 107263993;  */

long FUN_1072638f8(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar1;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x0001072750b4(), extraout_x8 != 0)) {
    func_0x000107274e78();
    func_0x0001072746e8();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x000107274fe8();
      if ((bool)in_CY) {
        func_0x000107274fdc();
      }
    }
    func_0x000107274ff4();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x0001072753f8();
        if (!(bool)in_ZR) break;
        func_0x00010727463c();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar1 = extraout_x8_00;
        if (uVar2 <= extraout_x8_00) {
          func_0x000107274f40();
          uVar1 = extraout_x8_01;
        }
      }
      in_ZR = 1;
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 107263994; end: 1072639d7;  */

void FUN_107263994(undefined8 param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined8 *extraout_x9;
  long extraout_x10;
  undefined8 extraout_x10_00;
  ulong extraout_x11;
  ulong uVar1;
  ulong extraout_x12;
  ulong extraout_x13;
  undefined8 unaff_x30;
  
  func_0x0001072744e8();
  if (extraout_x10 != 0) {
    func_0x0001072754dc(param_1,unaff_x30);
    if ((bool)in_ZR) {
      uVar1 = extraout_x13 & extraout_x11;
    }
    else {
      uVar1 = extraout_x11;
      if (extraout_x12 <= extraout_x11) {
        uVar1 = 0;
        if (extraout_x12 != 0) {
          uVar1 = extraout_x11 / extraout_x12;
        }
        uVar1 = extraout_x11 - uVar1 * extraout_x12;
      }
    }
    *(undefined8 *)(extraout_x8 + uVar1 * 8) = extraout_x10_00;
    *extraout_x9 = 0;
    extraout_x9[1] = 0;
  }
  return;
}



/* Entry: 1072639d8; end: 107263b57;  */

void FUN_1072639d8(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001072747cc();
  func_0x000104c2fe00();
  func_0x0001072751cc();
  FUN_107263384();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar1;
  func_0x00010028af84(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  func_0x00010015bc98(unaff_x19 + 0xc0,unaff_x20 + 0xc0);
  func_0x0001072758fc();
  FUN_107263b58(unaff_x19 + 0xf0,unaff_x20 + 0xf0);
  func_0x00010028af84(unaff_x19 + 0x130,unaff_x20 + 0x130);
  func_0x00010028af84(unaff_x19 + 0x150,unaff_x20 + 0x150);
  func_0x00010028af84(unaff_x19 + 0x170,unaff_x20 + 0x170);
  func_0x0001072758f0();
  FUN_107263b9c();
  func_0x00010028af84(unaff_x19 + 0x1b8,unaff_x20 + 0x1b8);
  func_0x000107274f04();
  func_0x000107263fe8(unaff_x19 + 0x1e8,unaff_x20 + 0x1e8);
  func_0x000107264398(unaff_x19 + 0x200,unaff_x20 + 0x200);
  *(undefined4 *)(unaff_x19 + 0x218) = *(undefined4 *)(unaff_x20 + 0x218);
  FUN_10726469c(unaff_x19 + 0x220,unaff_x20 + 0x220);
  func_0x000107275354();
  return;
}



/* Entry: 107263b58; end: 107263b87;  */

void FUN_107263b58(long param_1)

{
  func_0x000107274aa0();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_107263b88();
  return;
}



/* Entry: 107263b88; end: 107263b9b;  */

void FUN_107263b88(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    func_0x000104c2fe00();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 107263b9c; end: 107263bd3;  */

void FUN_107263b9c(void)

{
  func_0x000107274368();
  FUN_107263c40();
  func_0x00010727550c();
  FUN_107263bd4();
  return;
}



/* Entry: 107263bd4; end: 107263c07;  */

void FUN_107263bd4(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x000107274670();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    func_0x000107275840();
    func_0x000107263d98();
  }
  return;
}



/* Entry: 107263c08; end: 107263c27;  */

void FUN_107263c08(void)

{
  func_0x000100168718();
  FUN_107263c28();
  return;
}



/* Entry: 107263c28; end: 107263c3f;  */

void FUN_107263c28(long *param_1)

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



/* Entry: 107263c40; end: 107263cbb;  */

void FUN_107263c40(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  func_0x000100168540();
  if ((!(bool)in_ZR) && (func_0x000107274d1c(), !(bool)in_ZR)) {
    func_0x000107274b2c();
  }
  func_0x0001001685c8();
  if ((bool)in_CY && !(bool)in_ZR) {
LAB_107263c78:
    func_0x0001001685d4();
    if (param_2 == 0) {
      FUN_107263d68(param_1);
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      func_0x0001001685e0();
      FUN_107263d80();
      func_0x0001001686b8();
      FUN_107263d68();
      func_0x0001001686dc();
      uVar3 = extraout_x9;
      while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
        func_0x0001001686ec();
        uVar3 = extraout_x9_00;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x0001072742e0();
        func_0x0001072742f4();
        plVar4 = extraout_x9_01;
        while (*plVar4 != 0) {
          func_0x000107274bf0();
          lVar2 = extraout_x8_00;
          plVar4 = extraout_x12;
          uVar3 = extraout_x11;
          if ((bool)uVar1) {
            uVar5 = extraout_x13 & extraout_x10;
          }
          else {
            uVar5 = extraout_x13;
            if (unaff_x19 <= extraout_x13) {
              func_0x000107274bd8();
              lVar2 = extraout_x8_01;
              uVar3 = extraout_x11_00;
              plVar4 = extraout_x12_00;
              uVar5 = extraout_x13_00;
            }
          }
          uVar1 = uVar5 == uVar3;
          if (!(bool)uVar1) {
            if (*(long *)(lVar2 + uVar5 * 8) == 0) {
              func_0x000107274bcc();
              plVar4 = extraout_x12_01;
            }
            else {
              func_0x00010727411c();
              plVar4 = extraout_x9_02;
            }
          }
        }
      }
    }
    return;
  }
  if (!(bool)in_CY) {
    func_0x00010727419c();
    if (((bool)in_CY) && (func_0x000107274be4(), extraout_x8 == 0)) {
      func_0x0001072740fc();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010727462c();
    if (!(bool)in_CY) goto LAB_107263c78;
  }
  return;
}



/* Entry: 107263cbc; end: 107263d67;  */

void FUN_107263cbc(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  if (param_2 == 0) {
    FUN_107263d68(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001001685e0();
    FUN_107263d80();
    func_0x0001001686b8();
    FUN_107263d68();
    func_0x0001001686dc();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x0001001686ec();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001072742e0();
      func_0x0001072742f4();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x000107274bf0();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000107274bd8();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x000107274bcc();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x00010727411c();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107263d68; end: 107263d7f;  */

void FUN_107263d68(long *param_1,long param_2)

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



/* Entry: 107263d80; end: 107263dcb;  */

void FUN_107263d80(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107263db0();
  return;
}



/* Entry: 107263dcc; end: 107263f3f;  */

undefined1  [16] FUN_107263dcc(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar5;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar6;
  ulong uVar7;
  ulong extraout_x9;
  undefined8 extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x10;
  ulong uVar8;
  long *unaff_x21;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  ulong unaff_x23;
  undefined1 auVar12 [16];
  
  uVar1 = *param_2;
  uVar8 = (ulong)uVar1;
  uVar11 = param_1[1];
  uVar10 = (uint)uVar11;
  if (uVar11 != 0) {
    func_0x000107274c60();
    if ((bool)in_ZR) {
      unaff_x23 = (ulong)(uVar10 - 1 & uVar1);
      in_ZR = true;
    }
    else {
      in_NG = (long)(uVar11 - uVar8) < 0;
      in_ZR = uVar11 == uVar8;
      unaff_x23 = uVar8;
      if (uVar11 <= uVar8) {
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = uVar1 / uVar10;
        }
        unaff_x23 = (ulong)(uVar1 - uVar2 * uVar10);
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    uVar5 = extraout_x8;
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar9;
          if (unaff_x21 == (long *)0x0) goto LAB_107263e74;
          uVar7 = unaff_x21[1];
          plVar9 = unaff_x21;
          if (uVar7 != uVar8) break;
          in_NG = (int)(*(uint *)(unaff_x21 + 2) - uVar1) < 0;
          in_ZR = false;
          if (*(uint *)(unaff_x21 + 2) == uVar1) {
            uVar4 = 0;
            goto LAB_107263f28;
          }
        }
        if ((uVar11 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar11 <= uVar7) {
          func_0x000107274f18();
          uVar5 = extraout_x8_00;
          uVar7 = extraout_x9;
        }
        in_NG = (long)(uVar7 - unaff_x23) < 0;
        in_ZR = uVar7 == unaff_x23;
      } while ((bool)in_ZR);
    }
  }
LAB_107263e74:
  func_0x000107274680();
  FUN_107263f40();
  func_0x00010727423c();
  if ((uVar11 == 0) || (func_0x0001072748dc(), (bool)in_NG)) {
    func_0x000107274590();
    uVar3 = uVar11 == 3;
    func_0x00010727413c();
    FUN_107263c40(param_1);
    func_0x000107274b04();
    if ((bool)uVar3) {
      in_ZR = 1;
      unaff_x23 = (ulong)(uVar10 - 1 & uVar1);
    }
    else {
      in_ZR = uVar11 == uVar8;
      unaff_x23 = uVar8;
      if (uVar11 <= uVar8) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar8 / uVar11;
        }
        unaff_x23 = uVar8 - uVar5 * uVar11;
      }
    }
  }
  if (*(long *)(*param_1 + unaff_x23 * 8) == 0) {
    func_0x0001072742c8();
    *(undefined8 *)(extraout_x8_01 + unaff_x23 * 8) = extraout_x9_00;
    if (*unaff_x21 != 0) {
      func_0x0001072748ec();
      lVar6 = extraout_x8_02;
      if ((bool)in_ZR) {
        uVar8 = extraout_x9_01 & extraout_x10;
      }
      else {
        uVar8 = extraout_x9_01;
        if (uVar11 <= extraout_x9_01) {
          func_0x000107274f18();
          lVar6 = extraout_x8_03;
          uVar8 = extraout_x9_02;
        }
      }
      *(long **)(lVar6 + uVar8 * 8) = unaff_x21;
    }
  }
  else {
    func_0x000107274428();
  }
  func_0x000107274578();
  FUN_107263f64();
  uVar4 = 1;
LAB_107263f28:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = unaff_x21;
  return auVar12;
}



/* Entry: 107263f40; end: 107263f63;  */

void FUN_107263f40(void)

{
  func_0x0001072746d4();
  func_0x000107274cb4();
  func_0x0001072748c0();
  return;
}



/* Entry: 107263f64; end: 107263f83;  */

void FUN_107263f64(void)

{
  func_0x000100168718();
  FUN_107263f84();
  return;
}



/* Entry: 107263f84; end: 107263f9b;  */

void FUN_107263f84(long *param_1,long param_2)

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



/* Entry: 107263f9c; end: 10726400f;  */

undefined8 FUN_107263f9c(void)

{
  undefined8 unaff_x19;
  
  func_0x000107274b50();
  func_0x000107263fc0();
  func_0x000100168718();
  FUN_107263c28();
  return unaff_x19;
}



/* Entry: 107264010; end: 107264057;  */

void FUN_107264010(void)

{
  long in_x3;
  
  func_0x000107274c2c();
  if (in_x3 != 0) {
    func_0x0001072741f4();
    FUN_107264058();
    func_0x0001072743a8();
    FUN_10726408c();
  }
  func_0x0001072745c0();
  func_0x000107264308();
  return;
}



/* Entry: 107264058; end: 10726408b;  */

void FUN_107264058(undefined8 param_1)

{
  undefined1 in_CY;
  undefined8 *unaff_x19;
  
  func_0x000107274e9c();
  if ((bool)in_CY) {
    FUN_1072640b4();
    func_0x000107274d4c();
    func_0x000107274cd8();
    func_0x000107264100();
    unaff_x19[1] = param_1;
  }
  else {
    func_0x000107274c40();
    FUN_1072640c0();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    func_0x0001072750a8(0x38);
  }
  return;
}



/* Entry: 10726408c; end: 1072640b3;  */

void FUN_10726408c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000107274d4c();
  func_0x000107274cd8();
  func_0x000107264100();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1072640b4; end: 1072640bf;  */

void FUN_1072640b4(void)

{
  func_0x00010727455c();
  FUN_1072640e0();
  return;
}



/* Entry: 1072640c0; end: 1072640df;  */

void FUN_1072640c0(void)

{
  FUN_1072640e0();
  return;
}



/* Entry: 1072640e0; end: 107264113;  */

void FUN_1072640e0(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  
  func_0x000107274e9c();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  FUN_107264114();
  return;
}



/* Entry: 107264114; end: 10726417b;  */

long FUN_107264114(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x000107274180();
  for (; unaff_x21 != param_3; unaff_x21 = unaff_x21 + 0x38) {
    func_0x000107274c6c();
    FUN_10726417c();
    param_4 = uStack_38 + 0x38;
    uStack_38 = param_4;
  }
  func_0x00010727461c();
  FUN_107264280();
  return param_4;
}



/* Entry: 10726417c; end: 1072641b3;  */

void FUN_10726417c(long param_1)

{
  long unaff_x20;
  
  func_0x0001072747cc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  FUN_1072641b4(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 1072641b4; end: 1072641e3;  */

void FUN_1072641b4(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107274918();
  *(undefined4 *)(param_1 + 0x18) = extraout_w8;
  FUN_1072641e4();
  return;
}



/* Entry: 1072641e4; end: 10726422b;  */

void FUN_1072641e4(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747cc();
  FUN_10726422c();
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 != 0xffffffff) {
    func_0x000107274690((&PTR_DAT_110995e40)[uVar1]);
    *(uint *)(unaff_x19 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 10726422c; end: 107264267;  */

void FUN_10726422c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001072753a4();
  if (!(bool)in_ZR) {
    func_0x0001072745a8((&PTR_FUN_110995e30)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 107264268; end: 10726427f;  */

void FUN_107264268(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_2);
  return;
}



/* Entry: 107264280; end: 1072642ab;  */

void FUN_107264280(void)

{
  uint extraout_w8;
  
  func_0x0001072752d8();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072642ac();
  }
  return;
}



/* Entry: 1072642ac; end: 1072642bb;  */

void FUN_1072642ac(long param_1)

{
  long unaff_x19;
  
  func_0x000107274bfc();
  func_0x000107275458();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x38;
    func_0x0001072642e8();
  }
  return;
}



/* Entry: 1072642bc; end: 10726435b;  */

void FUN_1072642bc(long param_1)

{
  long unaff_x19;
  
  func_0x000107275458();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x38;
    func_0x0001072642e8();
  }
  return;
}



/* Entry: 10726435c; end: 107264363;  */

void FUN_10726435c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x38;
    func_0x0001072642e8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107264364; end: 1072643bf;  */

void FUN_107264364(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x38;
    func_0x0001072642e8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072643c0; end: 107264407;  */

void FUN_1072643c0(void)

{
  long in_x3;
  
  func_0x000107274c2c();
  if (in_x3 != 0) {
    func_0x0001072741f4();
    FUN_107264408();
    func_0x0001072743a8();
    FUN_10726444c();
  }
  func_0x0001072745c0();
  func_0x00010726460c();
  return;
}



/* Entry: 107264408; end: 10726444b;  */

void FUN_107264408(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x19;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    func_0x000107274c40();
    FUN_107264480();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    func_0x0001072750a8(0x58);
  }
  else {
    FUN_107264474();
    func_0x000107274d4c();
    func_0x000107274cd8();
    func_0x0001072644d0();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 10726444c; end: 107264473;  */

void FUN_10726444c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000107274d4c();
  func_0x000107274cd8();
  func_0x0001072644d0();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 107264474; end: 10726447f;  */

void FUN_107264474(void)

{
  func_0x00010727455c();
  FUN_1072644a0();
  return;
}



/* Entry: 107264480; end: 10726449f;  */

void FUN_107264480(void)

{
  FUN_1072644a0();
  return;
}



/* Entry: 1072644a0; end: 1072644e3;  */

void FUN_1072644a0(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x58);
    return;
  }
  func_0x000104bd35f4();
  FUN_1072644e4();
  return;
}



/* Entry: 1072644e4; end: 10726454b;  */

long FUN_1072644e4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x000107274180();
  for (; unaff_x21 != param_3; unaff_x21 = unaff_x21 + 0x58) {
    func_0x000107274c6c();
    FUN_10726454c();
    param_4 = uStack_38 + 0x58;
    uStack_38 = param_4;
  }
  func_0x00010727461c();
  FUN_107264580();
  return param_4;
}



/* Entry: 10726454c; end: 10726457f;  */

void FUN_10726454c(void)

{
  func_0x0001072747cc();
  FUN_10726417c();
  func_0x0001072751cc();
  func_0x00010028af84();
  return;
}



/* Entry: 107264580; end: 1072645ab;  */

void FUN_107264580(void)

{
  uint extraout_w8;
  
  func_0x0001072752d8();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072645ac();
  }
  return;
}



/* Entry: 1072645ac; end: 1072645bb;  */

void FUN_1072645ac(long param_1)

{
  long unaff_x19;
  
  func_0x000107274bfc();
  func_0x000107275458();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x58;
    func_0x0001072645e8();
  }
  return;
}



/* Entry: 1072645bc; end: 10726465f;  */

void FUN_1072645bc(long param_1)

{
  long unaff_x19;
  
  func_0x000107275458();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x58;
    func_0x0001072645e8();
  }
  return;
}



/* Entry: 107264660; end: 107264667;  */

void FUN_107264660(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x0001072645e8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107264668; end: 10726469b;  */

void FUN_107264668(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x0001072645e8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10726469c; end: 1072646cb;  */

void FUN_10726469c(long param_1)

{
  func_0x000107274aa0();
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1072646cc();
  return;
}



/* Entry: 1072646cc; end: 1072646df;  */

void FUN_1072646cc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1072646fc();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 1072646e0; end: 1072646fb;  */

void FUN_1072646e0(long param_1)

{
  FUN_1072646fc();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1072646fc; end: 10726471f;  */

void FUN_1072646fc(long param_1,long param_2)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  return;
}



/* Entry: 107264720; end: 10726473f;  */

void FUN_107264720(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 107264740; end: 1072649c7;  */

void FUN_107264740(void)

{
  func_0x0001072745e4();
  func_0x000107264634();
  return;
}



/* Entry: 1072649c8; end: 1072649ef;  */

void FUN_1072649c8(long param_1)

{
  func_0x000107274aa0();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_1072649f0();
  return;
}



/* Entry: 1072649f0; end: 107264a03;  */

void FUN_1072649f0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    func_0x000104c318bc();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 107264a04; end: 107264a1f;  */

void FUN_107264a04(long param_1)

{
  func_0x000104c318bc();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 107264a20; end: 107264ae7;  */

void FUN_107264a20(undefined8 param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined8 *extraout_x9;
  long extraout_x10;
  undefined8 extraout_x10_00;
  ulong extraout_x11;
  ulong uVar1;
  ulong extraout_x12;
  ulong extraout_x13;
  undefined8 unaff_x30;
  
  func_0x0001072744e8();
  if (extraout_x10 != 0) {
    func_0x0001072754dc(param_1,unaff_x30);
    if ((bool)in_ZR) {
      uVar1 = extraout_x13 & extraout_x11;
    }
    else {
      uVar1 = extraout_x11;
      if (extraout_x12 <= extraout_x11) {
        uVar1 = 0;
        if (extraout_x12 != 0) {
          uVar1 = extraout_x11 / extraout_x12;
        }
        uVar1 = extraout_x11 - uVar1 * extraout_x12;
      }
    }
    *(undefined8 *)(extraout_x8 + uVar1 * 8) = extraout_x10_00;
    *extraout_x9 = 0;
    extraout_x9[1] = 0;
  }
  return;
}



/* Entry: 107264ae8; end: 107264b9f;  */

void FUN_107264ae8(void)

{
  func_0x000107274b80();
  func_0x000107264b0c();
  func_0x000107274878();
  return;
}



/* Entry: 107264ba0; end: 107264bb7;  */

void FUN_107264ba0(long *param_1)

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



/* Entry: 107264bb8; end: 107264cc7;  */

long FUN_107264bb8(long param_1)

{
  FUN_107264720(param_1 + 0x220);
  FUN_107264740(param_1 + 0x200);
  func_0x000107264764(param_1 + 0x1e8);
  func_0x000107275718();
  FUN_107263f9c(param_1 + 400);
  func_0x0001001148fc(param_1 + 0x170);
  func_0x0001001148fc(param_1 + 0x150);
  func_0x0001001148fc(param_1 + 0x130);
  func_0x00010724b3d8(param_1 + 0xf0);
  func_0x0001000e30f4(param_1 + 0xc0);
  func_0x0001001148fc(param_1 + 0xa0);
  FUN_107261f7c(param_1 + 0x38);
  func_0x000107274878();
  return param_1;
}



/* Entry: 107264cc8; end: 107264d4b;  */

undefined8 FUN_107264cc8(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  func_0x0001072747cc();
  FUN_107264d4c();
  func_0x000107275874();
  func_0x00010014ae4c(auStack_48);
  uVar1 = *unaff_x20;
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar1;
  puStack_38 = puStack_38 + 2;
  func_0x000107274c54();
  FUN_107264d8c();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010014afc4(auStack_48);
  return uVar1;
}



/* Entry: 107264d4c; end: 107264d8b;  */

ulong FUN_107264d4c(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 >> 0x3c == 0) {
    uVar1 = param_1[2] - *param_1 >> 3;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0xfffffffffffffff;
    }
    return uVar1;
  }
  func_0x000104bfe418();
  func_0x0001072747d8();
  uVar1 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(uVar1);
  func_0x000107274a5c();
  return uVar1;
}



/* Entry: 107264d8c; end: 107264dc3;  */

void FUN_107264d8c(long *param_1,long param_2)

{
  func_0x0001072747d8();
  _memcpy(*(long *)(param_2 + 8) - (param_1[1] - *param_1));
  func_0x000107274a5c();
  return;
}



/* Entry: 107264dc4; end: 107264e5f;  */

long FUN_107264dc4(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar1;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x0001072750b4(), extraout_x8 != 0)) {
    func_0x000107274e78();
    func_0x0001072746e8();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x000107274fe8();
      if ((bool)in_CY) {
        func_0x000107274fdc();
      }
    }
    func_0x000107274ff4();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x000107274fd0();
        if (!(bool)in_ZR) break;
        func_0x00010727463c();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar1 = extraout_x8_00;
        if (uVar2 <= extraout_x8_00) {
          func_0x000107274f40();
          uVar1 = extraout_x8_01;
        }
      }
      in_ZR = 1;
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 107264e60; end: 107264f13;  */

void FUN_107264e60(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107274b40();
  if (unaff_x20 != 0) {
    func_0x000107275404();
    if ((bool)in_ZR) {
      func_0x000107264e94(unaff_x20 + 0x10);
    }
    func_0x000107274f38();
  }
  return;
}



/* Entry: 107264f14; end: 107264f27;  */

void FUN_107264f14(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107264f28; end: 1072650bb;  */

undefined1  [16] FUN_107264f28(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined1 in_NG;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar5;
  ulong uVar6;
  ulong unaff_x24;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  func_0x000107275128();
  func_0x000107274760();
  uVar6 = unaff_x19[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      unaff_x24 = uVar7 & param_3;
      in_NG = false;
    }
    else {
      in_NG = (long)(param_3 - uVar6) < 0;
      unaff_x24 = param_3;
      if (uVar6 <= param_3) {
        uVar2 = 0;
        if (uVar6 != 0) {
          uVar2 = param_3 / uVar6;
        }
        unaff_x24 = param_3 - uVar2 * uVar6;
      }
    }
    plVar5 = *(long **)(*unaff_x19 + unaff_x24 * 8);
    unaff_x20 = (long *)0x0;
    uVar2 = param_3;
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*plVar5;
          if (unaff_x20 == (long *)0x0) goto LAB_107264fd0;
          uVar4 = unaff_x20[1];
          in_NG = (long)(uVar4 - param_3) < 0;
          plVar5 = unaff_x20;
          if (uVar4 != param_3) break;
          func_0x000107275634();
          if ((uVar2 & 1) != 0) {
            uVar3 = 0;
            goto LAB_1072650a4;
          }
        }
        if ((uVar6 & uVar7) == 0) {
          uVar4 = uVar4 & uVar7;
        }
        else if (uVar6 <= uVar4) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar4 / uVar6;
          }
          uVar4 = uVar4 - uVar1 * uVar6;
        }
        in_NG = (long)(uVar4 - unaff_x24) < 0;
      } while (uVar4 == unaff_x24);
    }
  }
LAB_107264fd0:
  func_0x0001072757b0();
  func_0x000107274f24();
  func_0x0001072757a4();
  func_0x000107265424((long)unaff_x20 + 0x48,param_4 + 0x38);
  func_0x00010727423c();
  if ((uVar6 == 0) || (func_0x000107274958(param_1,param_2,(float)uVar6), (bool)in_NG)) {
    func_0x000107274ac4();
    func_0x00010727413c();
    FUN_107265450();
    uVar6 = unaff_x19[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x24 = uVar6 - 1 & param_3;
    }
    else {
      unaff_x24 = param_3;
      if (uVar6 <= param_3) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = param_3 / uVar6;
        }
        unaff_x24 = param_3 - uVar7 * uVar6;
      }
    }
  }
  if (*(long *)(*unaff_x19 + unaff_x24 * 8) == 0) {
    func_0x000107274b14();
    if (extraout_x9 != 0) {
      uVar7 = *(ulong *)(extraout_x9 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar7 = uVar7 & uVar6 - 1;
      }
      else if (uVar6 <= uVar7) {
        uVar2 = 0;
        if (uVar6 != 0) {
          uVar2 = uVar7 / uVar6;
        }
        uVar7 = uVar7 - uVar2 * uVar6;
      }
      *(long **)(extraout_x8 + uVar7 * 8) = unaff_x20;
    }
  }
  else {
    func_0x000107274e14();
  }
  func_0x000107274274();
  FUN_10726558c();
  uVar3 = 1;
LAB_1072650a4:
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = unaff_x20;
  return auVar8;
}



/* Entry: 1072650bc; end: 107265213;  */

void FUN_1072650bc(undefined8 *param_1)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar3;
  long *plVar4;
  long extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar5;
  ulong extraout_x10;
  long *unaff_x19;
  undefined8 unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  
  func_0x000107275128();
  func_0x00010727584c();
  if (unaff_x22 != 0) {
    func_0x000107274c60();
    if ((bool)in_ZR) {
      unaff_x24 = extraout_x8 & unaff_x23;
      in_ZR = true;
    }
    else {
      in_NG = (long)(unaff_x22 - unaff_x23) < 0;
      in_ZR = unaff_x22 == unaff_x23;
      unaff_x24 = unaff_x23;
      if (unaff_x22 <= unaff_x23) {
        uVar5 = 0;
        if (unaff_x22 != 0) {
          uVar5 = unaff_x23 / unaff_x22;
        }
        unaff_x24 = unaff_x23 - uVar5 * unaff_x22;
      }
    }
    plVar4 = *(long **)(*unaff_x19 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_107265158;
          uVar5 = plVar4[1];
          if (uVar5 != unaff_x23) break;
          in_NG = *(int *)(plVar4 + 2) - unaff_w21 < 0;
          in_ZR = false;
          if (*(int *)(plVar4 + 2) == unaff_w21) {
            return;
          }
        }
        if ((unaff_x22 & extraout_x8) == 0) {
          uVar5 = uVar5 & extraout_x8;
        }
        else if (unaff_x22 <= uVar5) {
          uVar1 = 0;
          if (unaff_x22 != 0) {
            uVar1 = uVar5 / unaff_x22;
          }
          uVar5 = uVar5 - uVar1 * unaff_x22;
        }
        in_NG = (long)(uVar5 - unaff_x24) < 0;
        in_ZR = uVar5 == unaff_x24;
      } while ((bool)in_ZR);
    }
  }
LAB_107265158:
  func_0x000107274cb4();
  func_0x000107274f24();
  *param_1 = 0;
  param_1[1] = unaff_x23;
  *(int *)(param_1 + 2) = unaff_w21;
  func_0x00010727423c();
  if ((unaff_x22 == 0) || (func_0x0001072748dc(), (bool)in_NG)) {
    func_0x000107274590();
    uVar2 = unaff_x22 == 3;
    func_0x00010727413c();
    FUN_1072652b0();
    func_0x000107274b04();
    if ((bool)uVar2) {
      in_ZR = 1;
      unaff_x24 = extraout_x8_00 & unaff_x23;
    }
    else {
      in_ZR = unaff_x22 == unaff_x23;
      unaff_x24 = unaff_x23;
      if (unaff_x22 <= unaff_x23) {
        uVar5 = 0;
        if (unaff_x22 != 0) {
          uVar5 = unaff_x23 / unaff_x22;
        }
        unaff_x24 = unaff_x23 - uVar5 * unaff_x22;
      }
    }
  }
  if (*(long *)(*unaff_x19 + unaff_x24 * 8) == 0) {
    func_0x000107274b14();
    if (extraout_x9 != 0) {
      func_0x0001072748ec();
      lVar3 = extraout_x8_01;
      if ((bool)in_ZR) {
        uVar5 = extraout_x9_00 & extraout_x10;
      }
      else {
        uVar5 = extraout_x9_00;
        if (unaff_x22 <= extraout_x9_00) {
          func_0x000107274f18();
          lVar3 = extraout_x8_02;
          uVar5 = extraout_x9_01;
        }
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = unaff_x20;
    }
  }
  else {
    func_0x000107274e14();
  }
  func_0x000107274578();
  FUN_1072653fc();
  return;
}



/* Entry: 107265214; end: 1072652af;  */

long FUN_107265214(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar1;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x0001072750b4(), extraout_x8 != 0)) {
    func_0x000107274e78();
    func_0x0001072746e8();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x000107274fe8();
      if ((bool)in_CY) {
        func_0x000107274fdc();
      }
    }
    func_0x000107274ff4();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x0001072753f8();
        if (!(bool)in_ZR) break;
        func_0x00010727463c();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar1 = extraout_x8_00;
        if (uVar2 <= extraout_x8_00) {
          func_0x000107274f40();
          uVar1 = extraout_x8_01;
        }
      }
      in_ZR = 1;
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 1072652b0; end: 1072653c7;  */

void FUN_1072652b0(ulong param_1,ulong param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = param_1;
    func_0x000107275774();
  }
  uVar1 = *(ulong *)(param_1 + 8) <= param_2;
  if (!(bool)uVar1 || param_2 == *(ulong *)(param_1 + 8)) {
    if ((bool)uVar1) {
      return;
    }
    func_0x000107274568((float)*(ulong *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    if (((bool)uVar1) && (func_0x000107274be4(), extraout_x8_01 == 0)) {
      func_0x0001072740fc();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107275314();
    if ((bool)uVar1) {
      return;
    }
    if (param_2 == 0) {
      FUN_1072653c8(param_1,0);
      *(undefined8 *)(param_1 + 8) = 0;
      return;
    }
  }
  FUN_1072653e0(param_2);
  func_0x0001001686b8();
  FUN_1072653c8();
  func_0x0001001686dc();
  uVar3 = extraout_x9;
  while (uVar1 = param_2 == uVar3, !(bool)uVar1) {
    func_0x0001001686ec();
    uVar3 = extraout_x9_00;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001072742e0();
    func_0x0001072742f4();
    plVar4 = extraout_x9_01;
    while (*plVar4 != 0) {
      func_0x000107274bf0();
      lVar2 = extraout_x8;
      plVar4 = extraout_x12;
      uVar3 = extraout_x11;
      if ((bool)uVar1) {
        uVar5 = extraout_x13 & extraout_x10;
      }
      else {
        uVar5 = extraout_x13;
        if (param_2 <= extraout_x13) {
          func_0x000107274bd8();
          lVar2 = extraout_x8_00;
          uVar3 = extraout_x11_00;
          plVar4 = extraout_x12_00;
          uVar5 = extraout_x13_00;
        }
      }
      uVar1 = uVar5 == uVar3;
      if (!(bool)uVar1) {
        if (*(long *)(lVar2 + uVar5 * 8) == 0) {
          func_0x000107274bcc();
          plVar4 = extraout_x12_01;
        }
        else {
          func_0x00010727411c();
          plVar4 = extraout_x9_02;
        }
      }
    }
  }
  return;
}



/* Entry: 1072653c8; end: 1072653df;  */

void FUN_1072653c8(long *param_1,long param_2)

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



/* Entry: 1072653e0; end: 1072653fb;  */

void FUN_1072653e0(ulong param_1)

{
  undefined8 *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107274b5c();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}


