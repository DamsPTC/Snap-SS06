/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104bff45c; end: 104bff487;  */

undefined8 * FUN_104bff45c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e9a38;
  func_0x00010049410c(param_1 + 1);
  return param_1;
}



/* Entry: 104bff488; end: 104bff49b;  */

void FUN_104bff488(void)

{
  FUN_104bff45c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bff49c; end: 104bff4df;  */

void FUN_104bff49c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000100561b64();
  *puVar1 = &PTR_FUN_1107e9a38;
  lVar2 = param_1[2];
  uVar3 = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000100489994();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 104bff4e0; end: 104bff527;  */

void FUN_104bff4e0(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1107e9a38;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100489994(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 104bff528; end: 104bff687;  */

void FUN_104bff528(long param_1,long param_2)

{
  undefined8 ***pppuVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 **ppuStack_60;
  long lStack_58;
  byte bStack_49;
  
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  plVar3 = (long *)(param_2 + 0x10);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&ppuStack_60,plVar3 + 2);
    pppuVar4 = (undefined8 ***)ppuStack_60;
    pppuVar1 = (undefined8 ***)((long)ppuStack_60 + lStack_58);
    if (-1 < (char)bStack_49) {
      pppuVar4 = &ppuStack_60;
      pppuVar1 = (undefined8 ***)((long)&ppuStack_60 + (ulong)bStack_49);
    }
    for (; pppuVar4 != pppuVar1; pppuVar4 = (undefined8 ***)((long)pppuVar4 + 1)) {
      uVar2 = *(undefined1 *)pppuVar4;
      ___tolower();
      *(undefined1 *)pppuVar4 = uVar2;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_78,plVar3 + 5);
    func_0x000104c01b58();
    uStack_b0 = uStack_70;
    uStack_b8 = uStack_78;
    uStack_a8 = uStack_68;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_60);
    func_0x0001004a2090(&uStack_90,auStack_d0);
    func_0x0001004a20fc(auStack_d0);
  }
  func_0x0001004a240c(&ppuStack_60,&uStack_90);
  func_0x000104c01b58();
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  func_0x0001004a21bc();
  func_0x000104c01a80(*(undefined8 *)(param_1 + 8));
  func_0x000104c01b50();
  func_0x0001004a21bc(auStack_d0);
  func_0x0001004a21bc(&uStack_90);
  return;
}



/* Entry: 104bff688; end: 104bff6b3;  */

void FUN_104bff688(undefined8 param_1,undefined8 param_2)

{
  func_0x000104c01bcc(param_2,param_1,&PTR_DAT_1107e9aa8);
  func_0x000104c01b9c();
  return;
}



/* Entry: 104bff6b4; end: 104bff6bf;  */

undefined ** FUN_104bff6b4(void)

{
  return &PTR_DAT_1107e9aa8;
}



/* Entry: 104bff6c0; end: 104bff777;  */

long FUN_104bff6c0(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x00010048971c();
  func_0x00010076a9fc();
  func_0x0001004a1c90(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x30,unaff_x19 + 2);
  uVar3 = unaff_x20[1];
  uVar2 = *unaff_x20;
  puStack_48[2] = unaff_x20[2];
  puStack_48[1] = uVar3;
  *puStack_48 = uVar2;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  uVar3 = unaff_x20[4];
  uVar2 = unaff_x20[3];
  puStack_48[5] = unaff_x20[5];
  puStack_48[4] = uVar3;
  puStack_48[3] = uVar2;
  unaff_x20[4] = 0;
  unaff_x20[5] = 0;
  unaff_x20[3] = 0;
  puStack_48 = puStack_48 + 6;
  func_0x000100561ce4();
  func_0x0001004a1d78();
  lVar1 = unaff_x19[1];
  func_0x0001004a1f08(auStack_58);
  return lVar1;
}



/* Entry: 104bff778; end: 104bff78b;  */

void FUN_104bff778(void)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  pcVar1 = "vector";
  FUN_104bd47e8();
  lVar2 = **(long **)(pcVar1 + 0x10);
  lVar3 = **(long **)(pcVar1 + 8);
  while (lVar2 != lVar3) {
    lVar2 = lVar2 + -0x30;
    func_0x0001004a20fc();
  }
  return;
}



/* Entry: 104bff78c; end: 104bff7ab;  */

void FUN_104bff78c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    func_0x0001004a20fc();
  }
  return;
}



/* Entry: 104bff7ac; end: 104bff807;  */

void FUN_104bff7ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x30;
    func_0x0001004a20fc();
  }
  return;
}



/* Entry: 104bff808; end: 104bff81b;  */

void FUN_104bff808(void)

{
  func_0x000104bff7dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bff81c; end: 104bff823;  */

void FUN_104bff81c(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104bff8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  FUN_104bfeb48();
  func_0x0001006124a8();
  if ((bool)in_ZR) {
    uVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    uVar2 = 0x28;
  }
  func_0x000104c01a8c(uVar2);
  return;
}



/* Entry: 104bff824; end: 104bff863;  */

void FUN_104bff824(void)

{
  func_0x000104c01be8();
  func_0x0001004bae18();
  func_0x0001004bb078();
  return;
}



/* Entry: 104bff864; end: 104bff8b7;  */

long FUN_104bff864(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x00010055f820(*(undefined8 *)(param_2 + 0x18));
    func_0x00010061247c();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 104bff8b8; end: 104bff8d7;  */

void FUN_104bff8b8(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104bff8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  FUN_104bfeb48();
  func_0x0001006124a8();
  if ((bool)in_ZR) {
    uVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    uVar2 = 0x28;
  }
  func_0x000104c01a8c(uVar2);
  return;
}



/* Entry: 104bff8d8; end: 104bff92f;  */

void FUN_104bff8d8(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001006124a8();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000104c01a8c(uVar1);
  return;
}



/* Entry: 104bff930; end: 104bff93b;  */

void FUN_104bff930(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e9b28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bff93c; end: 104bff94f;  */

void FUN_104bff93c(void)

{
  FUN_104bff930();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bff950; end: 104bff99b;  */

void FUN_104bff950(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c01a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bff99c; end: 104bff9b7;  */

void FUN_104bff99c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010048b724(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bff9b8; end: 104bffa47;  */

undefined8 *
FUN_104bff9b8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 auStack_50 [2];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  func_0x0001004b9648();
  uStack_38 = extraout_x8;
  func_0x000100450688(auStack_50,1);
  FUN_104bffa48(lStack_40,param_3,param_4,param_5);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000100450b64();
  func_0x0001004b9658(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000104c01b0c();
  func_0x000100450b64();
  func_0x000104c01a98();
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_1107ea880;
  puVar2[1] = 0;
  FUN_104bffaa8(puVar2 + 3);
  return puVar2;
}



/* Entry: 104bffa48; end: 104bffa87;  */

undefined8 * FUN_104bffa48(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1107ea880;
  param_1[1] = 0;
  FUN_104bffaa8(param_1 + 3);
  return param_1;
}



/* Entry: 104bffa88; end: 104bffa8b;  */

void FUN_104bffa88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ea880;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bffa8c; end: 104bffa9f;  */

void FUN_104bffa8c(void)

{
  FUN_104bffb08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bffaa0; end: 104bffaa7;  */

void FUN_104bffaa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c01a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bffaa8; end: 104bffb07;  */

void FUN_104bffaa8(void)

{
  func_0x000104c01af4();
  func_0x00010002b838();
  func_0x000100561ce4();
  func_0x00010028bc78();
  func_0x0001004bb078();
  return;
}



/* Entry: 104bffb08; end: 104bffb17;  */

void FUN_104bffb08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ea880;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bffb18; end: 104bffb2b;  */

void FUN_104bffb18(void)

{
  FUN_104c019c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bffb2c; end: 104bffb37;  */

void FUN_104bffb2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c01a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bffb38; end: 104bffb4b;  */

void FUN_104bffb38(void)

{
  FUN_104c01924();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bffb4c; end: 104bffc23;  */

long FUN_104bffb4c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  func_0x00010055f1dc();
  if ((*(byte *)(lVar1 + 0x34) & 1) == 0) {
    ppuVar2 = &PTR___tlv_bootstrap_11340e260;
    (*(code *)PTR___tlv_bootstrap_11340e260)();
    if (*ppuVar2 == *(undefined **)(param_1 + 0x38)) {
      func_0x000104c01830(param_1);
    }
    else {
      uStack_28 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = 0;
      FUN_104c01864(*(undefined **)(param_1 + 0x38),&uStack_28);
      func_0x000104bffcac(&uStack_28);
    }
  }
  func_0x00010046997c(param_1 + 0xb8);
  func_0x0001004699a0(param_1 + 0xa8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x88);
  func_0x000104bffcac(param_1 + 0x80);
  func_0x00010048ac10(param_1 + 0x70);
  func_0x000100561bd0(param_1 + 0x68);
  func_0x000100561d44(param_1 + 0x58);
  func_0x00010048b4e8(param_1 + 0x48);
  func_0x000100450be4(param_1 + 0x38);
  func_0x000100488b84(param_1 + 0x20);
  func_0x00010055f5a0(param_1 + 0x18);
  func_0x000100561e24(param_1 + 8);
  return param_1;
}



/* Entry: 104bffc24; end: 104bffc27;  */

long FUN_104bffc24(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uStack_28;
  
  lVar2 = param_1;
  func_0x000104c01b44(&UNK_1107e9c90);
  *unaff_x20 = extraout_x8;
  __ZNSt3__15mutexD1Ev(lVar2 + 0x220);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x200);
  func_0x0001001148fc(param_1 + 0x1e0);
  func_0x0001001148fc(param_1 + 0x1c0);
  func_0x0001006038cc(param_1 + 0x108);
  func_0x0001001148fc(param_1 + 0xe8);
  func_0x000104c01994(param_1 + 0xe0);
  func_0x000100450be4(unaff_x20 + 0x1a);
  lVar2 = param_1;
  func_0x00010055f1dc();
  if ((*(byte *)(lVar2 + 0x34) & 1) == 0) {
    ppuVar1 = &PTR___tlv_bootstrap_11340e260;
    (*(code *)PTR___tlv_bootstrap_11340e260)();
    if (*ppuVar1 == *(undefined **)(param_1 + 0x38)) {
      func_0x000104c01830(param_1);
    }
    else {
      uStack_28 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = 0;
      FUN_104c01864(*(undefined **)(param_1 + 0x38),&uStack_28);
      func_0x000104bffcac(&uStack_28);
    }
  }
  func_0x00010046997c(param_1 + 0xb8);
  func_0x0001004699a0(param_1 + 0xa8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x88);
  func_0x000104bffcac(param_1 + 0x80);
  func_0x00010048ac10(param_1 + 0x70);
  func_0x000100561bd0(param_1 + 0x68);
  func_0x000100561d44(param_1 + 0x58);
  func_0x00010048b4e8(param_1 + 0x48);
  func_0x000100450be4(param_1 + 0x38);
  func_0x000100488b84(param_1 + 0x20);
  func_0x00010055f5a0(param_1 + 0x18);
  func_0x000100561e24(param_1 + 8);
  return param_1;
}



/* Entry: 104bffc28; end: 104bffc3b;  */

void FUN_104bffc28(void)

{
  FUN_104c01924();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bffc3c; end: 104bffc3f;  */

long FUN_104bffc3c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  func_0x00010055f1dc();
  if ((*(byte *)(lVar1 + 0x34) & 1) == 0) {
    ppuVar2 = &PTR___tlv_bootstrap_11340e260;
    (*(code *)PTR___tlv_bootstrap_11340e260)();
    if (*ppuVar2 == *(undefined **)(param_1 + 0x38)) {
      func_0x000104c01830(param_1);
    }
    else {
      uStack_28 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = 0;
      FUN_104c01864(*(undefined **)(param_1 + 0x38),&uStack_28);
      func_0x000104bffcac(&uStack_28);
    }
  }
  func_0x00010046997c(param_1 + 0xb8);
  func_0x0001004699a0(param_1 + 0xa8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x88);
  func_0x000104bffcac(param_1 + 0x80);
  func_0x00010048ac10(param_1 + 0x70);
  func_0x000100561bd0(param_1 + 0x68);
  func_0x000100561d44(param_1 + 0x58);
  func_0x00010048b4e8(param_1 + 0x48);
  func_0x000100450be4(param_1 + 0x38);
  func_0x000100488b84(param_1 + 0x20);
  func_0x00010055f5a0(param_1 + 0x18);
  func_0x000100561e24(param_1 + 8);
  return param_1;
}



/* Entry: 104bffc40; end: 104bffc53;  */

void FUN_104bffc40(void)

{
  FUN_104bffb4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bffc54; end: 104bffc57;  */

void FUN_104bffc54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e9ce0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bffc58; end: 104bffc6b;  */

void FUN_104bffc58(void)

{
  func_0x000104bffc78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bffc6c; end: 104bffc83;  */

undefined8 FUN_104bffc6c(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  
  lVar1 = param_1 + 0x18;
  func_0x000100450be4(param_1 + 0x28);
  func_0x000100450bd8();
  if (lVar1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 104bffc84; end: 104bffccb;  */

undefined8 FUN_104bffc84(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000100450be4(param_1 + 0x10);
  func_0x000100450bd8();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 104bffccc; end: 104bffce3;  */

void FUN_104bffccc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_104bffd00(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bffce4; end: 104bffcff;  */

void FUN_104bffce4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_104bffd00(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bffd00; end: 104bffd7f;  */

undefined8 FUN_104bffd00(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000104bffd28(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x0001001248b0(param_1);
  FUN_104bffd80();
  return unaff_x19;
}



/* Entry: 104bffd80; end: 104bffd97;  */

void FUN_104bffd80(long *param_1)

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



/* Entry: 104bffd98; end: 104bffddb;  */

void FUN_104bffd98(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010048b3ac(param_2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 104bffddc; end: 104bffdff;  */

void FUN_104bffddc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 104bffe00; end: 104bffe1b;  */

void FUN_104bffe00(void)

{
  func_0x000104c01bac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bffe1c; end: 104bffe77;  */

void FUN_104bffe1c(long param_1)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  
  func_0x0001004a2388();
  func_0x000100611630();
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_104c0129c();
  *extraout_x8 = uVar1;
  return;
}



/* Entry: 104bffe78; end: 104bffe7f;  */

long FUN_104bffe78(long param_1)

{
  func_0x000100612624(param_1 + 0x78);
  func_0x0001006124b8(param_1 + 0x58);
  return param_1;
}



/* Entry: 104bffe80; end: 104bffee3;  */

void FUN_104bffe80(long param_1,undefined8 param_2)

{
  FUN_104bffee4(param_1 + 0x58,*(undefined8 *)(param_1 + 8),param_1 + 0x10,
                *(undefined8 *)(param_1 + 0x48),param_2);
  *(undefined1 *)(param_1 + 0x41) = 1;
  return;
}



/* Entry: 104bffee4; end: 104bfff37;  */

void FUN_104bffee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_30 = param_5;
  uStack_28 = param_4;
  uStack_20 = param_3;
  uStack_18 = param_2;
  func_0x000104bfff18(param_1,&uStack_18,&uStack_20,&uStack_28,&uStack_30);
  return;
}



/* Entry: 104bfff38; end: 104bfff63;  */

long FUN_104bfff38(long param_1)

{
  func_0x000100613080(param_1 + 0x20);
  func_0x000100601aa4(param_1 + 0x10);
  return param_1;
}



/* Entry: 104bfff64; end: 104bfff67;  */

long FUN_104bfff64(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  
  lVar1 = param_1;
  func_0x000104c01b44(&UNK_1107e9de0);
  *unaff_x20 = extraout_x8;
  func_0x000104c00298(lVar1 + 0x140);
  func_0x000100601aa4(param_1 + 0x98);
  FUN_104bfff38(unaff_x20 + 6);
  return param_1;
}



/* Entry: 104bfff68; end: 104bfff7b;  */

void FUN_104bfff68(void)

{
  FUN_104c00530();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bfff7c; end: 104bfffcf;  */

void FUN_104bfff7c(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 0x78) = 1;
  if (*(long *)(param_1 + 0x80) != 0) {
    *(undefined1 *)(param_1 + 0x14d) = 1;
  }
  *(undefined1 *)(param_1 + 0xa1) = 1;
  if (*(long *)(param_1 + 0x90) != 0) {
    *(undefined1 *)(param_1 + 0x14e) = 1;
    *(undefined1 *)(param_1 + 0x88) = 1;
  }
  *(undefined1 *)(param_1 + 0xa8) = 1;
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(undefined1 *)(param_1 + 0x14f) = 1;
  }
  return;
}



/* Entry: 104bfffd0; end: 104bfffe3;  */

void FUN_104bfffd0(void)

{
  func_0x000104c00298();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bfffe4; end: 104c0009f;  */

void FUN_104bfffe4(long param_1)

{
  long lVar1;
  char *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long lVar2;
  
  if ((((*(byte *)(param_1 + 0x20) & 1) != 0) || (*(long *)(param_1 + 0x30) == 0)) ||
     (*(long *)(*(long *)(param_1 + 0x28) + 0x20) == 0)) {
    func_0x000104c01a80(uRam0000000113815c70);
    func_0x000104c01ae0();
    (*extraout_x8_00)();
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    func_0x000104c01a80(uRam0000000113815c70);
    func_0x000104c01ae0();
    (*extraout_x8_01)();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
  *(undefined1 *)(lVar2 + 0x40) = 1;
  *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(param_1 + 0x18);
  lVar1 = param_1;
  func_0x0001004b95a4();
  func_0x000104c01b7c();
  *(undefined1 *)(param_1 + 0x21) = 1;
  UNRECOVERED_JUMPTABLE = *(char **)(param_1 + 0x18);
  func_0x000100c21ce0();
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((code *)(*(long *)(lVar1 + 0x30) - lVar2 >> 3) <= UNRECOVERED_JUMPTABLE) {
    func_0x000104c019cc();
    UNRECOVERED_JUMPTABLE =
         "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/client_interceptor.h"
    ;
    (*extraout_x8)();
    lVar2 = *(long *)(lVar1 + 0x28);
  }
  func_0x0001004b97d0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001004b97ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104c000a0; end: 104c00123;  */

undefined8 FUN_104c000a0(long param_1)

{
  undefined8 *puVar1;
  code *extraout_x8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  if (puVar1 == (undefined8 *)0x0) {
    func_0x000104c019cc();
    func_0x000104c01ae0();
    (*extraout_x8)();
    puVar1 = *(undefined8 **)(param_1 + 0x68);
  }
  return *puVar1;
}



/* Entry: 104c00124; end: 104c0014b;  */

byte FUN_104c00124(long param_1)

{
  return (**(byte **)(param_1 + 0x60) ^ 0xff) & 1;
}



/* Entry: 104c0014c; end: 104c001ab;  */

void FUN_104c0014c(long param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [24];
  
  **(undefined4 **)(param_1 + 0x98) = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_38,param_2 + 8);
  func_0x000100066230(*(undefined8 *)(param_1 + 0xa0),auStack_38);
  func_0x0001004bb078();
  func_0x000100124844(auStack_38);
  func_0x000100066230(*(undefined8 *)(param_1 + 0xa8),auStack_38);
  func_0x0001004bb078();
  return;
}



/* Entry: 104c001ac; end: 104c001b3;  */

undefined8 FUN_104c001ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 104c001b4; end: 104c0020f;  */

void FUN_104c001b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2[5] + 0x20);
  if (lVar3 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = param_2;
    func_0x000100561b64();
    uVar2 = *(undefined8 *)(lVar3 + 0x20);
    lVar3 = param_2[3];
    *puVar1 = &PTR_FUN_1107ea028;
    puVar1[1] = uVar2;
    puVar1[2] = lVar3 + 1;
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 104c00210; end: 104c002d3;  */

void FUN_104c00210(long param_1)

{
  code *extraout_x8;
  
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    func_0x000104c019cc();
    func_0x000104c01ae0();
    (*extraout_x8)();
  }
  **(undefined1 **)(param_1 + 0xc0) = 1;
  return;
}



/* Entry: 104c002d4; end: 104c0038f;  */

void FUN_104c002d4(long param_1)

{
  long lVar1;
  long *plVar2;
  char *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  code *extraout_x8_00;
  long lVar3;
  code *extraout_x9;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
  lVar3 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    UNRECOVERED_JUMPTABLE = (char *)(lVar3 + 1);
    *(char **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE;
    if (UNRECOVERED_JUMPTABLE < (code *)(*(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20) >> 3))
    goto LAB_104c00314;
    plVar2 = *(long **)(param_1 + 0x30);
    if (plVar2 != (long *)0x0) goto LAB_104c01bd4;
  }
  else {
    if (lVar3 != 0) {
      UNRECOVERED_JUMPTABLE = (char *)(lVar3 + -1);
      *(char **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE;
LAB_104c00314:
      lVar3 = *(long *)(lVar1 + 0x20);
      if ((code *)(*(long *)(lVar1 + 0x28) - lVar3 >> 3) <= UNRECOVERED_JUMPTABLE) {
        func_0x000104c019cc(lVar1,param_1);
        UNRECOVERED_JUMPTABLE =
             "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/server_interceptor.h"
        ;
        (*extraout_x8_00)();
        lVar3 = *(long *)(lVar1 + 0x20);
      }
      func_0x0001004b97d0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0001004b97ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)();
      return;
    }
    if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c00338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x38))();
      return;
    }
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    func_0x000104c01ae0();
    (*extraout_x9)();
    param_1 = extraout_x8;
  }
  plVar2 = *(long **)(param_1 + 0x50);
  if (plVar2 == (long *)0x0) {
    FUN_104bfeb48();
    func_0x000104c00420();
    return;
  }
LAB_104c01bd4:
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))();
  return;
}



/* Entry: 104c00390; end: 104c003e7;  */

void FUN_104c00390(long param_1,undefined8 param_2,char *UNRECOVERED_JUMPTABLE)

{
  code *extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((code *)(*(long *)(param_1 + 0x28) - lVar1 >> 3) <= UNRECOVERED_JUMPTABLE) {
    func_0x000104c019cc();
    UNRECOVERED_JUMPTABLE =
         "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/server_interceptor.h"
    ;
    (*extraout_x8)();
    lVar1 = *(long *)(param_1 + 0x20);
  }
  func_0x0001004b97d0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001004b97ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104c003e8; end: 104c0043f;  */

void FUN_104c003e8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  FUN_104bfeb48();
  func_0x000104c00420();
  return;
}



/* Entry: 104c00440; end: 104c0048b;  */

undefined4 * FUN_104c00440(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_3);
  func_0x000100124844(param_1 + 8);
  return param_1;
}



/* Entry: 104c0048c; end: 104c0052f;  */

void FUN_104c0048c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ea028;
  param_1[1] = 0;
  return;
}



/* Entry: 104c00530; end: 104c00573;  */

long FUN_104c00530(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  
  lVar1 = param_1;
  func_0x000104c01b44(&UNK_1107e9de0);
  *unaff_x20 = extraout_x8;
  func_0x000104c00298(lVar1 + 0x140);
  func_0x000100601aa4(param_1 + 0x98);
  FUN_104bfff38(unaff_x20 + 6);
  return param_1;
}



/* Entry: 104c00574; end: 104c0067b;  */

void FUN_104c00574(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  if ((*param_2 & 1) == 0) {
    lVar4 = 0;
    for (lVar5 = *(long *)(param_2 + 8); lVar5 != 0; lVar5 = lVar5 + -1) {
      lVar6 = *(long *)(param_2 + 0x18);
      if (*(long *)(lVar6 + lVar4) == 0) {
        lVar2 = lVar6 + lVar4 + 9;
        uVar3 = (ulong)*(byte *)(lVar6 + lVar4 + 8);
      }
      else {
        uVar3 = *(ulong *)(lVar6 + lVar4 + 8);
        lVar2 = *(long *)(lVar6 + lVar4 + 0x10);
      }
      _strncmp(lVar2,&UNK_10dd619b4,uVar3);
      if ((int)lVar2 == 0) {
        lVar6 = lVar6 + lVar4;
        if (*(long *)(lVar6 + 0x20) == 0) {
          lVar4 = lVar6 + 0x29;
          uVar3 = (ulong)*(byte *)(lVar6 + 0x28);
        }
        else {
          uVar3 = *(ulong *)(lVar6 + 0x28);
          lVar4 = *(long *)(lVar6 + 0x30);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm_110346280
        )(param_1,lVar4,uVar3);
        return;
      }
      lVar4 = lVar4 + 0x60;
    }
  }
  else {
    puStack_50 = &UNK_10dd619b4;
    uStack_48 = 0x17;
    pbVar1 = param_2 + 0x20;
    func_0x000100833aa0(pbVar1,&puStack_50);
    if (param_2 + 0x28 != pbVar1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
                (param_1,*(undefined8 *)(pbVar1 + 0x30),*(undefined8 *)(pbVar1 + 0x38));
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 104c0067c; end: 104c00683;  */

void FUN_104c0067c(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  char *UNRECOVERED_JUMPTABLE;
  ulong uVar4;
  code *extraout_x8;
  long lVar5;
  undefined1 *unaff_x19;
  undefined1 *unaff_x21;
  
  uVar4 = param_3 - param_2;
  if (uVar4 < 0x7ffffffffffffff7) {
    uVar3 = uVar4;
    func_0x0001004899d8();
    puVar1 = param_1;
    if (uVar3 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar4;
    }
    else {
      uVar3 = 0x19;
      if ((uVar4 | 7) != 0x17) {
        uVar3 = (uVar4 | 7) + 1;
      }
      func_0x000100033e30();
      param_1[1] = uVar4;
      param_1[2] = uVar3 | 0x8000000000000000;
      *param_1 = puVar1;
    }
    for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 1) {
      *(undefined1 *)puVar1 = *unaff_x21;
      puVar1 = (undefined8 *)((long)puVar1 + 1);
    }
    *(undefined1 *)puVar1 = 0;
    return;
  }
  FUN_104bd47d4();
  lVar2 = *(long *)(param_1[5] + 0x28);
  if (*(char *)(param_1 + 4) == '\x01') {
    UNRECOVERED_JUMPTABLE = (char *)((*(long *)(lVar2 + 0x28) - *(long *)(lVar2 + 0x20) >> 3) + -1);
  }
  else {
    UNRECOVERED_JUMPTABLE = (char *)0x0;
  }
  param_1[3] = UNRECOVERED_JUMPTABLE;
  lVar5 = *(long *)(lVar2 + 0x20);
  if ((code *)(*(long *)(lVar2 + 0x28) - lVar5 >> 3) <= UNRECOVERED_JUMPTABLE) {
    func_0x000104c019cc();
    UNRECOVERED_JUMPTABLE =
         "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/server_interceptor.h"
    ;
    (*extraout_x8)();
    lVar5 = *(long *)(lVar2 + 0x20);
  }
  func_0x0001004b97d0(lVar5);
                    /* WARNING: Could not recover jumptable at 0x0001004b97ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104c00684; end: 104c0070b;  */

void FUN_104c00684(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  char *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  long lVar4;
  undefined1 *unaff_x19;
  undefined1 *unaff_x21;
  
  if (param_4 < 0x7ffffffffffffff7) {
    uVar3 = param_4;
    func_0x0001004899d8();
    puVar1 = param_1;
    if (uVar3 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
    }
    else {
      uVar3 = 0x19;
      if ((param_4 | 7) != 0x17) {
        uVar3 = (param_4 | 7) + 1;
      }
      func_0x000100033e30();
      param_1[1] = param_4;
      param_1[2] = uVar3 | 0x8000000000000000;
      *param_1 = puVar1;
    }
    for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 1) {
      *(undefined1 *)puVar1 = *unaff_x21;
      puVar1 = (undefined8 *)((long)puVar1 + 1);
    }
    *(undefined1 *)puVar1 = 0;
    return;
  }
  FUN_104bd47d4();
  lVar2 = *(long *)(param_1[5] + 0x28);
  if (*(char *)(param_1 + 4) == '\x01') {
    UNRECOVERED_JUMPTABLE = (char *)((*(long *)(lVar2 + 0x28) - *(long *)(lVar2 + 0x20) >> 3) + -1);
  }
  else {
    UNRECOVERED_JUMPTABLE = (char *)0x0;
  }
  param_1[3] = UNRECOVERED_JUMPTABLE;
  lVar4 = *(long *)(lVar2 + 0x20);
  if ((code *)(*(long *)(lVar2 + 0x28) - lVar4 >> 3) <= UNRECOVERED_JUMPTABLE) {
    func_0x000104c019cc();
    UNRECOVERED_JUMPTABLE =
         "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/server_interceptor.h"
    ;
    (*extraout_x8)();
    lVar4 = *(long *)(lVar2 + 0x20);
  }
  func_0x0001004b97d0(lVar4);
                    /* WARNING: Could not recover jumptable at 0x0001004b97ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104c0070c; end: 104c00743;  */

void FUN_104c0070c(long param_1)

{
  long lVar1;
  char *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    UNRECOVERED_JUMPTABLE = (char *)((*(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20) >> 3) + -1);
  }
  else {
    UNRECOVERED_JUMPTABLE = (char *)0x0;
  }
  *(char **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE;
  lVar2 = *(long *)(lVar1 + 0x20);
  if ((code *)(*(long *)(lVar1 + 0x28) - lVar2 >> 3) <= UNRECOVERED_JUMPTABLE) {
    func_0x000104c019cc();
    UNRECOVERED_JUMPTABLE =
         "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/server_interceptor.h"
    ;
    (*extraout_x8)();
    lVar2 = *(long *)(lVar1 + 0x20);
  }
  func_0x0001004b97d0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001004b97ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104c00744; end: 104c00773;  */

void FUN_104c00744(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x000100612124();
  (**(code **)(*plVar1 + 0xb8))();
  *param_1 = (long)plVar1;
  return;
}



/* Entry: 104c00774; end: 104c0077b;  */

void FUN_104c00774(void)

{
  return;
}



/* Entry: 104c0077c; end: 104c0079f;  */

void FUN_104c0077c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1107ea0b0;
  return;
}



/* Entry: 104c007a0; end: 104c007b3;  */

void FUN_104c007a0(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c01b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 104c007b4; end: 104c007df;  */

void FUN_104c007b4(undefined8 param_1,undefined8 param_2)

{
  func_0x000104c01bcc(param_2,param_1,&PTR_DAT_1107ea120);
  func_0x000104c01b9c();
  return;
}



/* Entry: 104c007e0; end: 104c00837;  */

undefined ** FUN_104c007e0(void)

{
  return &PTR_DAT_1107ea120;
}



/* Entry: 104c00838; end: 104c0085b;  */

void FUN_104c00838(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1107ea140;
  return;
}



/* Entry: 104c0085c; end: 104c00867;  */

void FUN_104c0085c(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c01b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 104c00868; end: 104c00893;  */

void FUN_104c00868(undefined8 param_1,undefined8 param_2)

{
  func_0x000104c01bcc(param_2,param_1,&PTR_DAT_1107ea2c8);
  func_0x000104c01b9c();
  return;
}



/* Entry: 104c00894; end: 104c0089f;  */

undefined ** FUN_104c00894(void)

{
  return &PTR_DAT_1107ea2c8;
}



/* Entry: 104c008a0; end: 104c008d3;  */

void FUN_104c008a0(long param_1)

{
  func_0x0001004b91bc();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  func_0x0001004b9324(&UNK_1107ea1b0);
  return;
}



/* Entry: 104c008d4; end: 104c008d7;  */

long FUN_104c008d4(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  
  lVar1 = param_1;
  func_0x000104c01b44(&UNK_1107ea1b0);
  *unaff_x20 = extraout_x8;
  func_0x000104c00298(lVar1 + 0xc0);
  func_0x000100601aa4(unaff_x20 + 3);
  return param_1;
}



/* Entry: 104c008d8; end: 104c008eb;  */

void FUN_104c008d8(void)

{
  FUN_104c00a78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c008ec; end: 104c00963;  */

void FUN_104c008ec(long param_1)

{
  long unaff_x19;
  undefined1 *unaff_x21;
  
  func_0x0001004bb09c();
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    func_0x000100834c2c(*(undefined8 *)(unaff_x19 + 0x90));
    func_0x0001008e2248();
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x1a0);
  }
  else {
    func_0x000100832e64(unaff_x19 + 8);
    func_0x00010083320c(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x19 + 0x1a0) = *unaff_x21;
    func_0x000104c00ab4();
    if ((int)unaff_x19 == 0) {
      return;
    }
    func_0x0001008e2248();
  }
  func_0x000100612124();
  func_0x000100834c68();
  return;
}



/* Entry: 104c00964; end: 104c0099f;  */

void FUN_104c00964(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  func_0x00010048971c();
  *(undefined1 *)(CONCAT44(uVar2,iVar1) + 0xb8) = 0;
  func_0x0001004b94ac();
  func_0x0001004b94f4();
  func_0x0001004b9500();
  func_0x000104c00afc();
  if (iVar1 != 0) {
    func_0x000104c01aa0();
                    /* WARNING: Could not recover jumptable at 0x0001004bad18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 104c009a0; end: 104c009d7;  */

undefined8 FUN_104c009a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 104c009d8; end: 104c00a37;  */

void FUN_104c009d8(void)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x19;
  undefined8 uStack_48;
  
  func_0x0001004bad1c();
  func_0x000100613724();
  lVar2 = unaff_x19 + 0x28;
  func_0x0001004bb090();
  func_0x000100613760();
  func_0x0001006137b4();
  func_0x0001006137c4();
  func_0x0001006137e0();
  if ((int)lVar2 != 0) {
    func_0x000104c019e4();
  }
  func_0x0001004b9658(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(lVar2 + 0xb8) = 1;
  func_0x000100834b98();
  iVar1 = (int)lVar2;
  func_0x000100834be8();
  func_0x000100834bf4();
  if (iVar1 == 0) {
    return;
  }
  func_0x000104c01a24();
                    /* WARNING: Could not recover jumptable at 0x000104c01a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104c00a38; end: 104c00a77;  */

void FUN_104c00a38(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  func_0x000100834b98();
  func_0x000100834be8();
  func_0x000100834bf4();
  if (iVar1 == 0) {
    return;
  }
  func_0x000104c01a24();
                    /* WARNING: Could not recover jumptable at 0x000104c01a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104c00a78; end: 104c00b67;  */

long FUN_104c00a78(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  
  lVar1 = param_1;
  func_0x000104c01b44(&UNK_1107ea1b0);
  *unaff_x20 = extraout_x8;
  func_0x000104c00298(lVar1 + 0xc0);
  func_0x000100601aa4(unaff_x20 + 3);
  return param_1;
}



/* Entry: 104c00b68; end: 104c00b93;  */

void FUN_104c00b68(undefined8 param_1)

{
  code *extraout_x8;
  
  func_0x000104c019cc();
  func_0x000104c01ab8(param_1,&DAT_10f6842c6);
  (*extraout_x8)();
  return;
}



/* Entry: 104c00b94; end: 104c00bab;  */

undefined8 * FUN_104c00b94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ea658;
  func_0x000104c00298(param_1 + 0x16);
  return param_1;
}



/* Entry: 104c00bac; end: 104c00c9f;  */

void FUN_104c00bac(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  code *extraout_x8;
  char *pcVar1;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010048971c();
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    func_0x000104c01a08(uRam0000000113815c70);
    UNRECOVERED_JUMPTABLE = (code *)0xe4;
    (*extraout_x8)();
  }
  pcVar1 = *(char **)(unaff_x19 + 0x10);
  if (*pcVar1 == '\x01') {
    func_0x000104c01a80(uRam0000000113815c70);
    func_0x000104c01ab8();
    UNRECOVERED_JUMPTABLE = (code *)0xe5;
    (*extraout_x8_00)();
    pcVar1 = *(char **)(unaff_x19 + 0x10);
  }
  *(undefined8 *)(unaff_x19 + 0x218) = unaff_x20;
  func_0x000100c229d0(pcVar1,*(undefined8 *)(unaff_x19 + 0x18));
  *(undefined8 *)(unaff_x19 + 0x208) = extraout_x8_01;
  func_0x000100612df4();
                    /* WARNING: Could not recover jumptable at 0x000100c21d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104c00ca0; end: 104c00caf;  */

long FUN_104c00ca0(long param_1)

{
  func_0x000104c01188(param_1 + 0x4a0);
  func_0x000104c011b8(param_1 + 0x338);
  func_0x000104c011f4(param_1 + 0x1f0);
  func_0x000104c01224(param_1 + 0x48);
  return param_1 + -8;
}



/* Entry: 104c00cb0; end: 104c00cc3;  */

void FUN_104c00cb0(void)

{
  func_0x000104c01224();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c00cc4; end: 104c00cd7;  */

void FUN_104c00cc4(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 104c00cd8; end: 104c00ceb;  */

void FUN_104c00cd8(void)

{
  func_0x000104c011f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c00cec; end: 104c00d5b;  */

void FUN_104c00cec(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  func_0x0001004bb09c();
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x000100834c2c(*(undefined8 *)(unaff_x19 + 0x30));
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x20);
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x140);
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x140) = *unaff_x21;
    lVar1 = unaff_x19;
    FUN_104c00e58();
    if ((int)lVar1 == 0) {
      return;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x20);
  }
  func_0x000100612124();
  func_0x000100834c68();
  return;
}


