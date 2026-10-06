/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10724b48c; end: 10724b4b3;  */

long FUN_10724b48c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10724b4b4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10724b4b4; end: 10724b4df;  */

undefined8 * FUN_10724b4b4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x666666666666667) {
    puVar1 = (undefined8 *)(param_2 * 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110995268;
  param_1[1] = 0;
  func_0x0001073ad88c(param_1 + 3);
  return param_1;
}



/* Entry: 10724b4e0; end: 10724b51b;  */

undefined8 * FUN_10724b4e0(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110995268;
  param_1[1] = 0;
  func_0x0001073ad88c(param_1 + 3);
  return param_1;
}



/* Entry: 10724b51c; end: 10724b51f;  */

void FUN_10724b51c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110995268;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10724b520; end: 10724b533;  */

void FUN_10724b520(void)

{
  func_0x00010724b540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10724b534; end: 10724b54b;  */

undefined8 FUN_10724b534(long param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x19;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  func_0x0001073ae110(*puVar1);
  func_0x0001073ae0c8(*puVar1);
  func_0x00010724ce4c();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10724b54c; end: 10724b56f;  */

void FUN_10724b54c(long param_1)

{
  func_0x00010724ce4c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10724b570; end: 10724b57f;  */

void FUN_10724b570(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10724b580; end: 10724b5df;  */

void FUN_10724b580(void)

{
  func_0x00010724ce18();
  FUN_107249b24();
  return;
}



/* Entry: 10724b5e0; end: 10724b603;  */

undefined8 * FUN_10724b5e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110994dd8;
  _objc_retain(uVar1);
  param_2[1] = uVar1;
  return param_2;
}



/* Entry: 10724b604; end: 10724b7a3;  */

void FUN_10724b604(long param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  func_0x00010724cc70();
  cVar1 = *param_2;
  uStack_48 = extraout_x8;
  FUN_10724b830(auStack_a0,param_4);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010bffa180();
  func_0x00010bdc3460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724cd34();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = (cVar1 - 1U & 0xf8) == 0;
  func_0x00010c0e1ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724cd2c();
  func_0x00010724cd3c();
  func_0x00010beec820(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc3520(uVar4);
  func_0x000100060964(auStack_80,uVar4);
  FUN_10724b810(auStack_a0,auStack_80);
  func_0x000104c2f714(auStack_80);
  func_0x00010724cd2c();
  func_0x00010724cd44();
  FUN_10724b884();
  func_0x00010724cc40(uStack_48);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_80);
  func_0x00010724cd2c();
  func_0x00010724cd44();
  FUN_10724b884(auStack_a0);
  func_0x00010724ce24();
  func_0x00010724ced0();
  func_0x00010724ce3c();
  func_0x00010724ccf8();
  return;
}



/* Entry: 10724b7a4; end: 10724b7cb;  */

void FUN_10724b7a4(undefined8 param_1)

{
  func_0x00010724ced0();
  func_0x00010724ce3c(param_1,&PTR_DAT_110994e48);
  func_0x00010724ccf8();
  return;
}



/* Entry: 10724b7cc; end: 10724b7d7;  */

undefined ** FUN_10724b7cc(void)

{
  return &PTR_DAT_110994e48;
}



/* Entry: 10724b7d8; end: 10724b80f;  */

undefined8 * FUN_10724b7d8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110994dd8;
  _objc_retain(param_2);
  param_1[1] = param_2;
  return param_1;
}



/* Entry: 10724b810; end: 10724b82f;  */

long * FUN_10724b810(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010724b820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    plVar1[3] = 0;
  }
  else if (lVar2 == param_2) {
    plVar1[3] = (long)plVar1;
    func_0x00010724cf7c(*(undefined8 *)(param_2 + 0x18));
    func_0x00010724cec8();
  }
  else {
    plVar1[3] = lVar2;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return plVar1;
}



/* Entry: 10724b830; end: 10724b883;  */

long FUN_10724b830(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x00010724cf7c(*(undefined8 *)(param_2 + 0x18));
    func_0x00010724cec8();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10724b884; end: 10724b92b;  */

void FUN_10724b884(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010724cf4c();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010724ce88(uVar1);
  return;
}



/* Entry: 10724b92c; end: 10724b93f;  */

void FUN_10724b92c(void)

{
  func_0x00010724b900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10724b940; end: 10724b967;  */

void FUN_10724b940(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_SUB_110994e68;
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  lVar2 = *(long *)(param_1 + 0x18);
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010724d040();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10724b968; end: 10724b98b;  */

void FUN_10724b968(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_110994e68;
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  lVar1 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010724d040();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10724b98c; end: 10724bad3;  */

void FUN_10724b98c(long param_1,undefined1 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  long alStack_e8 [2];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [32];
  undefined8 *apuStack_80 [3];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  func_0x00010724cc70();
  uVar3 = *param_2;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uStack_48 = extraout_x8;
  FUN_10724b830(auStack_d8,param_4);
  FUN_10724bb70(alStack_e8,param_1 + 0x10);
  if (alStack_e8[0] != 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    auStack_b8[0] = uVar3;
    uStack_b0 = uVar1;
    uStack_a8 = uVar2;
    FUN_10724b830(auStack_a0,auStack_d8);
    puVar4 = (undefined8 *)0x58;
    __Znwm();
    func_0x00010724bbac(apuStack_80,auStack_b8);
    *puVar4 = &PTR_FUN_110994ed8;
    puVar4[1] = uVar5;
    puVar4[2] = FUN_10724bb40;
    puVar4[3] = 0;
    func_0x00010724bbac(puVar4 + 4,apuStack_80);
    FUN_10724b884(auStack_68);
    apuStack_80[0] = puVar4;
    FUN_10724b884(auStack_a0);
    func_0x0001073ae140(alStack_e8[0],apuStack_80);
    puVar4 = apuStack_80[0];
    apuStack_80[0] = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      func_0x00010724cfc0();
    }
  }
  func_0x00010724bcd8(alStack_e8);
  FUN_10724b884();
  func_0x00010724cc40(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = apuStack_80[0];
  apuStack_80[0] = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    func_0x00010724cfc0();
  }
  func_0x00010724bcd8(alStack_e8);
  FUN_10724b884(auStack_d8);
  func_0x00010724cd60();
  func_0x00010724ced0();
  func_0x00010724ce3c();
  func_0x00010724ccf8();
  return;
}



/* Entry: 10724bad4; end: 10724bafb;  */

void FUN_10724bad4(undefined8 param_1)

{
  func_0x00010724ced0();
  func_0x00010724ce3c(param_1,&PTR_DAT_110994f08);
  func_0x00010724ccf8();
  return;
}



/* Entry: 10724bafc; end: 10724bb3f;  */

undefined ** FUN_10724bafc(void)

{
  return &PTR_DAT_110994f08;
}



/* Entry: 10724bb40; end: 10724bb6f;  */

void FUN_10724bb40(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uStack_21;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_21 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  FUN_10724bcfc(param_1,&uStack_21,&uStack_20,param_5);
  return;
}



/* Entry: 10724bb70; end: 10724bbe3;  */

void FUN_10724bb70(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10724bbe4; end: 10724bbe7;  */

undefined8 * FUN_10724bbe4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110994ed8;
  FUN_10724b884(param_1 + 7);
  return param_1;
}



/* Entry: 10724bbe8; end: 10724bbfb;  */

void FUN_10724bbe8(void)

{
  FUN_10724bcac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10724bbfc; end: 10724bcab;  */

undefined8 * FUN_10724bbfc(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 auStack_68 [4];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar6 = *(code **)(*plVar1 + ((ulong)pcVar6 & 0xffffffff));
  }
  uVar4 = *(undefined1 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  FUN_10724b830(auStack_68,param_1 + 0x38);
  (*pcVar6)(plVar1,uVar4,uVar2,uVar3,auStack_68);
  puVar5 = auStack_68;
  FUN_10724b884();
  FUN_10724cc40(uStack_48);
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar5 = auStack_68;
  FUN_10724b884();
  func_0x00010724cd60();
  *puVar5 = &PTR_FUN_110994ed8;
  FUN_10724b884(puVar5 + 7);
  return puVar5;
}



/* Entry: 10724bcac; end: 10724bcfb;  */

undefined8 * FUN_10724bcac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110994ed8;
  FUN_10724b884(param_1 + 7);
  return param_1;
}



/* Entry: 10724bcfc; end: 10724bd1b;  */

void FUN_10724bcfc(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010724bd0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x00010724cf4c();
  if ((bool)in_ZR) {
    uVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    uVar2 = 0x28;
  }
  func_0x00010724ce88(uVar2);
  return;
}



/* Entry: 10724bd1c; end: 10724be13;  */

void FUN_10724bd1c(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010724cf4c();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010724ce88(uVar1);
  return;
}



/* Entry: 10724be14; end: 10724be37;  */

void FUN_10724be14(long param_1,undefined8 param_2)

{
  func_0x00010724cd78(&PTR_DAT_110994f28,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010724d014();
  return;
}



/* Entry: 10724be38; end: 10724bf5b;  */

void FUN_10724be38(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar1;
  long lStack_80;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_38;
  
  func_0x00010724cc54();
  lVar1 = *(long *)(unaff_x19 + 8);
  if (lVar1 != 0) {
    if (lStack_80 == 0) {
      unaff_x20 = 0;
    }
    else {
      func_0x00010724ccc0();
      func_0x00010724cf6c();
      func_0x00010724cdd4();
      func_0x00010724ce74();
      func_0x00010c25da80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010724cd4c();
      func_0x00010724cf5c();
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010724cca8();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010724cd08();
      func_0x00010724cd2c();
      func_0x00010724ce08();
      lVar1 = *(long *)(unaff_x19 + 8);
    }
    func_0x00010724cea0();
    func_0x00010724cc8c(FUN_10724bfb8,0xc2000000);
    uStack_58 = unaff_x20;
    lStack_50 = lVar1;
    func_0x00010724ce34();
    func_0x00010006eaa4(PTR___dispatch_main_q_11034be20,auStack_78);
    _objc_release(uStack_58);
    _objc_release();
    func_0x00010724cd3c();
  }
  func_0x00010724ce2c();
  func_0x00010724cc40(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010724cd34();
  func_0x00010724cd2c();
  func_0x00010724ce08();
  func_0x00010724ce2c();
  func_0x00010724cd60();
  func_0x00010724ced0();
  func_0x00010724ce3c();
  func_0x00010724ccf8();
  return;
}



/* Entry: 10724bf5c; end: 10724bf83;  */

void FUN_10724bf5c(undefined8 param_1)

{
  func_0x00010724ced0();
  func_0x00010724ce3c(param_1,&PTR_DAT_110994f88);
  func_0x00010724ccf8();
  return;
}



/* Entry: 10724bf84; end: 10724bf8f;  */

undefined ** FUN_10724bf84(void)

{
  return &PTR_DAT_110994f88;
}



/* Entry: 10724bf90; end: 10724bfb7;  */

void FUN_10724bf90(void)

{
  func_0x00010724cd78(&PTR_DAT_110994f28);
  func_0x00010724d014();
  return;
}



/* Entry: 10724bfb8; end: 10724bfbf;  */

void FUN_10724bfb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010724cda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10724bfc0; end: 10724c06f;  */

void FUN_10724bfc0(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010724cf4c();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010724ce88(uVar1);
  return;
}



/* Entry: 10724c070; end: 10724c093;  */

void FUN_10724c070(long param_1,undefined8 param_2)

{
  func_0x00010724cd78(&PTR_DAT_110994fa8,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010724d014();
  return;
}



/* Entry: 10724c094; end: 10724c1ab;  */

void FUN_10724c094(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar1;
  long lStack_80;
  undefined8 uStack_38;
  
  func_0x00010724cc54();
  lVar1 = *(long *)(unaff_x19 + 8);
  if (lVar1 != 0) {
    if (lStack_80 == 0) {
      unaff_x20 = 0;
    }
    else {
      func_0x00010724ccc0();
      func_0x00010724cf6c();
      func_0x00010724cdd4();
      func_0x00010724ce74();
      func_0x00010c25da80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010724cd4c();
      func_0x00010724cf5c();
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010724cca8();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010724cd08();
      func_0x00010724cd2c();
      func_0x00010724ce08();
    }
    func_0x00010724cea0();
    func_0x00010724cc8c(FUN_10724c208,0xc2000000);
    func_0x00010724ce34();
    func_0x00010724cef4();
    _objc_release(unaff_x20);
    _objc_release();
    func_0x00010724cd3c();
  }
  func_0x00010724ce2c();
  func_0x00010724cc40(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010724cd34();
  func_0x00010724cd2c();
  func_0x00010724ce08();
  func_0x00010724ce2c();
  func_0x00010724cd60();
  func_0x00010724ced0();
  func_0x00010724ce3c();
  func_0x00010724ccf8();
  return;
}



/* Entry: 10724c1ac; end: 10724c1d3;  */

void FUN_10724c1ac(undefined8 param_1)

{
  func_0x00010724ced0();
  func_0x00010724ce3c(param_1,&PTR_DAT_110995008);
  func_0x00010724ccf8();
  return;
}



/* Entry: 10724c1d4; end: 10724c1df;  */

undefined ** FUN_10724c1d4(void)

{
  return &PTR_DAT_110995008;
}



/* Entry: 10724c1e0; end: 10724c207;  */

void FUN_10724c1e0(void)

{
  func_0x00010724cd78(&PTR_DAT_110994fa8);
  func_0x00010724d014();
  return;
}



/* Entry: 10724c208; end: 10724c20f;  */

void FUN_10724c208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010724cda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10724c210; end: 10724c28b;  */

void FUN_10724c210(void)

{
  func_0x00010724cd20();
  return;
}



/* Entry: 10724c28c; end: 10724c2af;  */

void FUN_10724c28c(long param_1,undefined8 param_2)

{
  func_0x00010724cd78(&PTR_DAT_110995028,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010724d014();
  return;
}



/* Entry: 10724c2b0; end: 10724c43b;  */

void FUN_10724c2b0(void)

{
  undefined *puVar1;
  undefined1 in_ZR;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  func_0x00010724cc54();
  lVar2 = *(long *)(unaff_x19 + 8);
  if (lVar2 != 0) {
    if (lStack_90 == 0) {
      unaff_x20 = 0;
    }
    else {
      func_0x00010724ccc0();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107879078(&puStack_78,&lStack_90);
      in_ZR = uStack_68._7_1_ == '\0';
      func_0x00010c25da80(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010724cd4c();
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010724cca8();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010724cd08();
      func_0x00010724cd2c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_78);
      lVar2 = *(long *)(unaff_x19 + 8);
    }
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc6000000;
    uStack_68 = FUN_10724c498;
    puStack_60 = &UNK_110995088;
    _objc_retainBlock();
    lStack_88 = lVar2;
    func_0x00010724ce34();
    uStack_80 = unaff_x20;
    FUN_10724c4ac(auStack_58,&lStack_88);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_78);
    FUN_10724c4e0(&lStack_88);
    FUN_10724c4e0();
    func_0x00010724cd3c();
  }
  func_0x00010724ce2c();
  func_0x00010724cc40(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010724cd34();
  func_0x00010724cd2c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_78);
  func_0x00010724ce2c();
  func_0x00010724cd60();
  func_0x00010724ced0();
  func_0x00010724ce3c();
  func_0x00010724ccf8();
  return;
}



/* Entry: 10724c43c; end: 10724c463;  */

void FUN_10724c43c(undefined8 param_1)

{
  func_0x00010724ced0();
  func_0x00010724ce3c(param_1,&PTR_DAT_1109950b8);
  func_0x00010724ccf8();
  return;
}



/* Entry: 10724c464; end: 10724c46f;  */

undefined ** FUN_10724c464(void)

{
  return &PTR_DAT_1109950b8;
}



/* Entry: 10724c470; end: 10724c497;  */

void FUN_10724c470(void)

{
  func_0x00010724cd78(&PTR_DAT_110995028);
  func_0x00010724d014();
  return;
}



/* Entry: 10724c498; end: 10724c4ab;  */

void FUN_10724c498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010724cda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10724c4ac; end: 10724c4d7;  */

void FUN_10724c4ac(undefined8 param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  func_0x00010724cee4();
  *unaff_x20 = param_1;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010724ce44();
  unaff_x20[1] = uVar1;
  return;
}



/* Entry: 10724c4d8; end: 10724c4df;  */

void FUN_10724c4d8(long param_1)

{
  func_0x00010724ce4c(param_1 + 0x20);
  _objc_release();
  func_0x00010724cfac();
  return;
}



/* Entry: 10724c4e0; end: 10724c57f;  */

void FUN_10724c4e0(void)

{
  func_0x00010724ce4c();
  _objc_release();
  func_0x00010724cfac();
  return;
}



/* Entry: 10724c580; end: 10724c5a3;  */

void FUN_10724c580(long param_1,undefined8 param_2)

{
  func_0x00010724cd78(&PTR_DAT_1109950d8,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010724d014();
  return;
}



/* Entry: 10724c5a4; end: 10724c6bb;  */

void FUN_10724c5a4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar1;
  long lStack_80;
  undefined8 uStack_38;
  
  func_0x00010724cc54();
  lVar1 = *(long *)(unaff_x19 + 8);
  if (lVar1 != 0) {
    if (lStack_80 == 0) {
      unaff_x20 = 0;
    }
    else {
      func_0x00010724ccc0();
      func_0x00010724cf6c();
      func_0x00010724cdd4();
      func_0x00010724ce74();
      func_0x00010c25da80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010724cd4c();
      func_0x00010724cf5c();
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010724cca8();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010724cd08();
      func_0x00010724cd2c();
      func_0x00010724ce08();
    }
    func_0x00010724cea0();
    func_0x00010724cc8c(FUN_10724c718,0xc2000000);
    func_0x00010724ce34();
    func_0x00010724cef4();
    _objc_release(unaff_x20);
    _objc_release();
    func_0x00010724cd3c();
  }
  func_0x00010724ce2c();
  func_0x00010724cc40(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010724cd34();
  func_0x00010724cd2c();
  func_0x00010724ce08();
  func_0x00010724ce2c();
  func_0x00010724cd60();
  func_0x00010724ced0();
  func_0x00010724ce3c();
  func_0x00010724ccf8();
  return;
}



/* Entry: 10724c6bc; end: 10724c6e3;  */

void FUN_10724c6bc(undefined8 param_1)

{
  func_0x00010724ced0();
  func_0x00010724ce3c(param_1,&PTR_DAT_110995138);
  func_0x00010724ccf8();
  return;
}



/* Entry: 10724c6e4; end: 10724c6ef;  */

undefined ** FUN_10724c6e4(void)

{
  return &PTR_DAT_110995138;
}



/* Entry: 10724c6f0; end: 10724c717;  */

void FUN_10724c6f0(void)

{
  func_0x00010724cd78(&PTR_DAT_1109950d8);
  func_0x00010724d014();
  return;
}



/* Entry: 10724c718; end: 10724c71f;  */

void FUN_10724c718(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010724cda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10724c720; end: 10724c79b;  */

undefined1 * FUN_10724c720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_50 [16];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x00010724cc70();
  uStack_38 = extraout_x8;
  FUN_10724c79c(auStack_50,1);
  FUN_10724c7f0(puStack_40,param_2,param_3);
  func_0x00010724cf88();
  func_0x00010724c884();
  func_0x00010724cc40(uStack_38);
  if ((bool)in_ZR) {
    return puStack_40;
  }
  ___stack_chk_fail();
  func_0x00010724c884();
  func_0x00010724cd60();
  *(undefined8 *)(puVar1 + 8) = param_2;
  puVar2 = puVar1;
  FUN_10724c7c4();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 10724c79c; end: 10724c7c3;  */

long FUN_10724c79c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10724c7c4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10724c7c4; end: 10724c7ef;  */

undefined8 * FUN_10724c7c4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x555555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110995158;
  param_1[1] = 0;
  FUN_10724c850(param_1 + 3);
  return param_1;
}



/* Entry: 10724c7f0; end: 10724c82b;  */

undefined8 * FUN_10724c7f0(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110995158;
  param_1[1] = 0;
  FUN_10724c850(param_1 + 3);
  return param_1;
}



/* Entry: 10724c82c; end: 10724c82f;  */

void FUN_10724c82c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110995158;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10724c830; end: 10724c843;  */

void FUN_10724c830(void)

{
  FUN_10724c878();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10724c844; end: 10724c84f;  */

void FUN_10724c844(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 10724c850; end: 10724c877;  */

undefined8 FUN_10724c850(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
            (param_1,*param_2,*param_3);
  return param_1;
}



/* Entry: 10724c878; end: 10724c893;  */

void FUN_10724c878(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110995158;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10724c894; end: 10724c91f;  */

void FUN_10724c894(long param_1)

{
  func_0x00010724ce4c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10724c920; end: 10724c943;  */

undefined8 * FUN_10724c920(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109951a8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retainBlock();
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010724ce44();
  param_2[2] = uVar1;
  return param_2;
}



/* Entry: 10724c944; end: 10724ca03;  */

void FUN_10724c944(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [16];
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc6000000;
  pcStack_40 = FUN_10724ca54;
  puStack_38 = &UNK_110995208;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010724ce44();
  uStack_58 = uVar2;
  FUN_10724ca74(auStack_30,&uStack_60);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  FUN_10724caa8(&uStack_60);
  FUN_10724caa8(auStack_30);
  return;
}



/* Entry: 10724ca04; end: 10724ca0f;  */

undefined ** FUN_10724ca04(void)

{
  return &PTR_DAT_110995238;
}



/* Entry: 10724ca10; end: 10724ca53;  */

undefined8 * FUN_10724ca10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_1109951a8;
  uVar1 = *param_2;
  _objc_retainBlock();
  param_1[1] = uVar1;
  uVar1 = param_2[1];
  func_0x00010724ce44();
  param_1[2] = uVar1;
  return param_1;
}



/* Entry: 10724ca54; end: 10724ca73;  */

void FUN_10724ca54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010724ca64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 10724ca74; end: 10724ca9f;  */

void FUN_10724ca74(undefined8 param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  func_0x00010724cee4();
  *unaff_x20 = param_1;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010724ce44();
  unaff_x20[1] = uVar1;
  return;
}



/* Entry: 10724caa0; end: 10724caa7;  */

void FUN_10724caa0(long param_1)

{
  func_0x00010724ce4c(param_1 + 0x20);
  _objc_release();
  func_0x00010724cfac();
  return;
}



/* Entry: 10724caa8; end: 10724cacb;  */

void FUN_10724caa8(void)

{
  func_0x00010724ce4c();
  _objc_release();
  func_0x00010724cfac();
  return;
}



/* Entry: 10724cacc; end: 10724cbe7;  */

long * FUN_10724cacc(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long *plVar5;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long alStack_40 [3];
  undefined8 uStack_28;
  
  plVar3 = alStack_40;
  func_0x00010724cc70();
  uVar1 = param_2 == param_1;
  plVar4 = param_2;
  uStack_28 = extraout_x8;
  if (!(bool)uVar1) {
    plVar2 = (long *)param_1[3];
    plVar5 = (long *)param_2[3];
    plVar4 = param_1;
    if (plVar2 == param_1) {
      uVar1 = plVar5 == param_2;
      if ((bool)uVar1) {
        func_0x00010724cf7c();
        (*extraout_x8_00)();
        func_0x00010724cd84(param_1[3]);
        param_1[3] = 0;
        func_0x00010724cf7c(param_2[3]);
        (*extraout_x8_01)();
        func_0x00010724cd84(param_2[3]);
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        func_0x00010724cec8(*(undefined8 *)(alStack_40[0] + 0x18),alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        plVar4 = param_2;
        func_0x00010724cf7c();
        func_0x00010724cec8();
        plVar3 = (long *)param_1[3];
        func_0x00010724cd84();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
      param_1 = plVar3;
    }
    else {
      uVar1 = plVar5 == param_2;
      if ((bool)uVar1) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
        plVar3 = (long *)param_2[3];
        func_0x00010724cd84();
        param_2[3] = param_1[3];
        param_1[3] = (long)param_1;
        param_1 = plVar3;
      }
      else {
        param_1[3] = (long)plVar5;
        param_2[3] = (long)plVar2;
        param_1 = plVar2;
        plVar4 = param_2;
      }
    }
  }
  func_0x00010724cc40(uStack_28);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)plVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  plVar3 = (long *)plVar4[3];
  if (plVar3 == (long *)0x0) {
    param_1[3] = 0;
  }
  else if (plVar3 == plVar4) {
    param_1[3] = (long)param_1;
    func_0x00010724cf7c(plVar4[3]);
    func_0x00010724cec8();
  }
  else {
    (**(code **)(*plVar3 + 0x10))();
    param_1[3] = (long)plVar3;
  }
  return param_1;
}



/* Entry: 10724cbe8; end: 10724cc3f;  */

long FUN_10724cbe8(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x00010724cf7c(param_2[3]);
    func_0x00010724cec8();
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10724cc40; end: 10724d04f;  */

void FUN_10724cc40(void)

{
  return;
}



/* Entry: 10724d050; end: 10724d0d7; +[MGLAccountManager sharedManager] */

void FUN_10724d050(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_10724d0d8;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136ca160 != -1) {
    func_0x00010002a2fc(0x1136ca160,&puStack_48);
  }
  uVar1 = uRam00000001136ca168;
  _objc_retain(uRam00000001136ca168);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10724d0d8; end: 10724d0ff;  */

void FUN_10724d0d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam00000001136ca168;
  uRam00000001136ca168 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10724d100; end: 10724d1c3; +[MGLAccountManager setAccessToken:] */

void FUN_10724d100(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010724d358();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d0a0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724d344();
  _objc_release(puVar1);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010724d360();
    func_0x00010c22bc20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160dc0();
    func_0x00010724d344();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10724d1c4; end: 10724d20f; +[MGLAccountManager accessToken] */

void FUN_10724d1c4(void)

{
  func_0x00010724d360();
  func_0x00010c22bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beecce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724d338();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10724d210; end: 10724d273; +[MGLAccountManager setAPIBaseURL:] */

void FUN_10724d210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010724d358();
  func_0x00010724d360();
  func_0x00010c22bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168640();
  func_0x00010724d344();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10724d274; end: 10724d2bf; +[MGLAccountManager apiBaseURL] */

void FUN_10724d274(void)

{
  func_0x00010724d360();
  func_0x00010c22bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724d338();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10724d2c0; end: 10724d2cb; -[MGLAccountManager accessToken] */

void FUN_10724d2c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 10724d2cc; end: 10724d2d3; -[MGLAccountManager setAccessToken:] */

void FUN_10724d2cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10724d2d4; end: 10724d2db; -[MGLAccountManager apiBaseURL] */

undefined8 FUN_10724d2d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10724d2dc; end: 10724d307; -[MGLAccountManager setApiBaseURL:] */

void FUN_10724d2dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010724d358();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10724d308; end: 10724d337; -[MGLAccountManager .cxx_destruct] */

void FUN_10724d308(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10724d338; end: 10724d36b;  */

void FUN_10724d338(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10724d36c; end: 10724d37f; +[MGLRendererConfiguration currentConfiguration] */

void FUN_10724d36c(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10724d380; end: 10724d3d3; -[MGLRendererConfiguration scaleFactor] */

float FUN_10724d380(double param_1)

{
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5c20();
  FUN_10724d6e4();
  return (float)param_1;
}



/* Entry: 10724d3d4; end: 10724d45b; -[MGLRendererConfiguration localFontFamilyName] */

void FUN_10724d3d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dfec0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10724d6e4();
  func_0x00010c09d9a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724d6ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10724d45c; end: 10724d55f; -[MGLRendererConfiguration localFontFamilyNameWithInfoDictionaryObject:] */

void FUN_10724d45c(void)

{
  undefined *puVar1;
  undefined *unaff_x19;
  
  func_0x00010724d704();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class();
  func_0x00010724d6f4();
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = unaff_x19, func_0x00010bf1f3c0(), ((ulong)puVar1 & 1) != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    func_0x00010724d6f4();
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class();
      func_0x00010724d6f4();
      if (((ulong)puVar1 & 1) == 0) {
        unaff_x19 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010c266f60(0,*(undefined8 *)PTR__UIFontWeightRegular_110345c40,
                            PTR__OBJC_CLASS___UIFont_1126aec38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa0820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010724d6ec();
      }
      else {
        func_0x00010bf446e0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      _objc_retain();
    }
  }
  else {
    unaff_x19 = (undefined *)0x0;
  }
  func_0x00010724d6e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 10724d560; end: 10724d5df; -[MGLRendererConfiguration perSourceCollisions] */

undefined8 FUN_10724d560(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dfec0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10724d6e4();
  func_0x00010c0f7c00(param_1,param_2,puVar1);
  func_0x00010724d6ec();
  return param_1;
}



/* Entry: 10724d5e0; end: 10724d6e3; -[MGLRendererConfiguration perSourceCollisionsWithInfoDictionaryObject:] */

undefined * FUN_10724d5e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *unaff_x19;
  
  func_0x00010724d704();
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class();
    func_0x00010724d6f4();
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class();
      func_0x00010724d6f4();
      if (((ulong)puVar1 & 1) == 0) {
        unaff_x19 = (undefined *)0x0;
        goto LAB_10724d6a4;
      }
    }
    func_0x00010bf1f3c0();
  }
  else {
    unaff_x19 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f320();
    func_0x00010724d6ec();
  }
LAB_10724d6a4:
  func_0x00010724d6e4();
  return unaff_x19;
}



/* Entry: 10724d6e4; end: 10724d727;  */

void FUN_10724d6e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}


