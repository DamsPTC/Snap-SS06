/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108680f5c; end: 108680f6f;  */

void FUN_108680f5c(long param_1,long *param_2,long *param_3)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *extraout_x9;
  undefined8 *puVar5;
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  long lStack_80;
  undefined1 uStack_69;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  
  if (*param_2 == param_2[1]) {
    return;
  }
  plVar4 = &lStack_a0;
  lVar2 = param_1;
  func_0x0001086814bc();
  uStack_69 = SUB81(param_3,0);
  uStack_68 = 0x1086812cc;
  ppuStack_60 = &PTR_FUN_110a621e8;
  puStack_58 = &uStack_69;
  puVar5 = &uStack_68;
  plVar3 = extraout_x9;
  lStack_50 = lVar2;
  FUN_108844a20(&lStack_a0);
  func_0x000108681484();
  uVar1 = false;
  if ((lStack_a0 != lStack_98) || (uVar1 = lStack_88 == lStack_80, !(bool)uVar1)) {
    plVar3 = *(long **)(param_1 + 8);
    param_3 = &lStack_88;
    (**(code **)(*plVar3 + 0x10))(plVar3,&lStack_a0,param_3);
    puVar5 = plVar4;
  }
  func_0x00010868149c();
  func_0x0001086814a4();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010868149c();
    func_0x000108681494();
    if (puVar5[3] != 0) {
      puVar5 = puVar5 + 2;
      while (puVar5 = (undefined8 *)*puVar5, puVar5 != (undefined8 *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,puVar5 + 2,puVar5 + 5,param_3);
      }
    }
    return;
  }
  return;
}



/* Entry: 108680f70; end: 108681037;  */

void FUN_108680f70(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *extraout_x9;
  undefined8 *puVar5;
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  long lStack_80;
  undefined1 uStack_69;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  
  plVar4 = &lStack_a0;
  lVar2 = param_1;
  func_0x0001086814bc();
  uStack_69 = SUB81(param_3,0);
  uStack_68 = 0x1086812cc;
  ppuStack_60 = &PTR_FUN_110a621e8;
  puStack_58 = &uStack_69;
  puVar5 = &uStack_68;
  plVar3 = extraout_x9;
  lStack_50 = lVar2;
  FUN_108844a20(&lStack_a0);
  func_0x000108681484();
  uVar1 = false;
  if ((lStack_a0 != lStack_98) || (uVar1 = lStack_88 == lStack_80, !(bool)uVar1)) {
    plVar3 = *(long **)(param_1 + 8);
    param_3 = &lStack_88;
    (**(code **)(*plVar3 + 0x10))(plVar3,&lStack_a0,param_3);
    puVar5 = plVar4;
  }
  func_0x00010868149c();
  func_0x0001086814a4();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010868149c();
    func_0x000108681494();
    if (puVar5[3] != 0) {
      puVar5 = puVar5 + 2;
      while (puVar5 = (undefined8 *)*puVar5, puVar5 != (undefined8 *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,puVar5 + 2,puVar5 + 5,param_3);
      }
    }
    return;
  }
  return;
}



/* Entry: 108681038; end: 108681093;  */

void FUN_108681038(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  
  if (*(long *)(param_2 + 0x18) != 0) {
    plVar1 = (long *)(param_2 + 0x10);
    while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
      (**(code **)(*param_1 + 0x20))(param_1,plVar1 + 2,plVar1 + 5,param_3);
    }
  }
  return;
}



/* Entry: 108681094; end: 1086810fb;  */

void FUN_108681094(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_38 [24];
  
  if (*(long *)(param_3 + 0x18) != 0) {
    FUN_108861b60(auStack_38,*(undefined8 *)(param_1 + 0x28),param_2,param_3,1);
    FUN_108680f70(param_1,auStack_38,param_4);
    func_0x00010867b9fc(auStack_38);
  }
  return;
}



/* Entry: 1086810fc; end: 10868123b;  */

undefined8 * FUN_1086810fc(long param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined1 uStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  func_0x0001086814bc();
  plVar3 = *(long **)(param_1 + 8);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  func_0x000107c27994(auStack_50);
  uStack_c0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  uStack_88 = 0;
  puStack_90 = (undefined1 *)&uStack_c0;
  FUN_108681254(&uStack_c0,1);
  puStack_80 = &uStack_b0;
  lStack_60 = lStack_b8;
  lStack_58 = lStack_b8;
  plStack_78 = &lStack_60;
  plStack_70 = &lStack_58;
  uStack_68 = 0;
  func_0x000107c27994(lStack_b8,auStack_50);
  lVar1 = lStack_58 + 0x18;
  uStack_68 = 1;
  lStack_58 = lVar1;
  func_0x00010528d304(&puStack_80);
  uStack_88 = 1;
  lStack_b8 = lVar1;
  func_0x0001086812a0(&puStack_90);
  (**(code **)(*plVar3 + 0x10))(plVar3,&uStack_a8,&uStack_c0);
  func_0x000104be1594(&uStack_c0);
  func_0x000107c27914(auStack_50);
  puVar2 = &uStack_a8;
  func_0x0001006994c8();
  func_0x0001086814a4();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000104be1594(&uStack_c0);
  func_0x000107c27914(auStack_50);
  puVar2 = &uStack_a8;
  func_0x0001006994c8();
  func_0x000108681494();
  *puVar2 = &PTR_FUN_110a62188;
  func_0x000107c27914(puVar2 + 9);
  func_0x000107c28800(puVar2 + 7);
  func_0x000107c28808(puVar2 + 5);
  func_0x000107c28ae4(puVar2 + 3);
  func_0x000107c286f0(puVar2 + 1);
  return puVar2;
}



/* Entry: 10868123c; end: 10868123f;  */

undefined8 * FUN_10868123c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a62188;
  func_0x000107c27914(param_1 + 9);
  func_0x000107c28800(param_1 + 7);
  func_0x000107c28808(param_1 + 5);
  func_0x000107c28ae4(param_1 + 3);
  func_0x000107c286f0(param_1 + 1);
  return param_1;
}



/* Entry: 108681240; end: 108681253;  */

void FUN_108681240(void)

{
  func_0x000108681430();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108681254; end: 108681327;  */

long * FUN_108681254(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = param_1 + 2;
    func_0x00010528d240();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 3);
    return plVar1;
  }
  func_0x00010528d1e0();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    func_0x000104be15b8(param_1);
  }
  return param_1;
}



/* Entry: 108681328; end: 1086813eb;  */

ulong FUN_108681328(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = (int)param_2 + 0x50;
  func_0x00010069317c();
  ppuVar1 = &PTR_PTR_113286e08;
  if (*(undefined ***)(param_2 + 0x80) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x80);
  }
  if ((uVar2 & 0xfffffffb) != 1 || *(int *)(ppuVar1 + 10) < 1) {
    lVar5 = *(long *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x000107c287d8(uVar3);
    uVar4 = param_2 + 0x50;
    FUN_108844804(uVar4,lVar5 + 0x40,uVar3);
    if ((uVar4 & 1) == 0) {
      uVar4 = param_2 + 0x50;
      func_0x00010069b5c4();
      if ((uVar4 & 1) == 0) {
        ppuVar1 = &PTR_PTR_11326cb58;
        if (*(undefined ***)(param_2 + 0x68) != (undefined **)0x0) {
          ppuVar1 = *(undefined ***)(param_2 + 0x68);
        }
        uVar4 = *(long *)(param_1 + 0x28) + 0x40;
        func_0x0001006933e4(uVar4,ppuVar1);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        func_0x0001006760a8(param_2,param_1 + 0x48);
        return (ulong)((uint)param_2 ^ 1);
      }
    }
  }
  return 1;
}



/* Entry: 1086813ec; end: 108681407;  */

void FUN_1086813ec(void)

{
  return;
}



/* Entry: 108681408; end: 108681483;  */

undefined8 FUN_108681408(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000104be1594(param_1 + 0x18);
  func_0x000100292090(param_1);
  func_0x0001006994ec();
  return unaff_x19;
}



/* Entry: 108681484; end: 1086814cf;  */

void FUN_108681484(void)

{
  long unaff_x21;
  undefined8 *in_stack_00000040;
  
                    /* WARNING: Could not recover jumptable at 0x000108681490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_00000040)(unaff_x21 + 8);
  return;
}



/* Entry: 1086814d0; end: 10868157b;  */

int FUN_1086814d0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  iVar2 = (int)&ppuStack_40;
  iVar3 = 0x8d02af;
  ppuStack_40 = &PTR_DAT_110a807a8;
  uStack_38 = 0;
  uStack_28 = 0;
  if (*(char *)(param_1 + 3) == '\x01') {
    func_0x000107c3034c(&ppuStack_40,*param_1,*(int *)(param_1 + 1) - (int)*param_1);
    iVar1 = 0;
    if (uStack_28._4_4_ == 1) {
      iVar1 = iVar2;
    }
    if (((iVar1 == 1) && (*(int *)(lStack_30 + 0x1c) == 1)) &&
       (iVar2 = *(int *)(*(long *)(lStack_30 + 0x10) + 0x18), iVar3 = iVar2 + 0x8d02af,
       7 < iVar2 - 1U)) {
      iVar3 = 0x8d02af;
    }
  }
  FUN_1088b6e60(&ppuStack_40);
  return iVar3;
}



/* Entry: 10868157c; end: 10868159b;  */

undefined * FUN_10868157c(int param_1)

{
  if (param_1 - 1U < 4) {
    return (&PTR_DAT_110a622c0)[param_1 - 1U];
  }
  return &UNK_10f4b02b6;
}



/* Entry: 10868159c; end: 1086815e3;  */

undefined * FUN_10868159c(int *param_1)

{
  if ((char)param_1[1] != '\x01') {
    return &UNK_10f4b02dc;
  }
  func_0x0001086815cc();
  if (*param_1 - 1U < 4) {
    return (&PTR_DAT_110a622c0)[*param_1 - 1U];
  }
  return &UNK_10f4b02b6;
}



/* Entry: 1086815e4; end: 10868168b;  */

undefined4 FUN_1086815e4(uint param_1)

{
  if (param_1 < 0x18) {
    return *(undefined4 *)(&UNK_10df41454 + (ulong)param_1 * 4);
  }
  return 0x1e9;
}



/* Entry: 10868168c; end: 1086816cb;  */

void FUN_10868168c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  
  func_0x000107c320c8();
  func_0x000108681604(param_2);
  FUN_1086816cc(auStack_48,param_2);
  func_0x000107c28b44();
  func_0x000107c320d8();
  return;
}



/* Entry: 1086816cc; end: 108681743;  */

void FUN_1086816cc(undefined8 param_1,ulong param_2)

{
  func_0x0001006a5678();
  if (((uint)(param_2 >> 0x11) & 0x7fff) < 0x47) {
    func_0x0001006a56fc();
  }
  func_0x0001006a5710();
  func_0x0001006a5718();
  func_0x0001006a5724();
  return;
}



/* Entry: 108681744; end: 1086818c7;  */

void FUN_108681744(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined ***pppuVar1;
  undefined1 *puVar2;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uStack_38 = 0x288;
  if (param_4 == 0) {
    uStack_38 = 0x286;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_58 = &PTR_FUN_110a609a8;
  uStack_50 = 0;
  func_0x000107c278b8(auStack_70,&UNK_10f4b03e6);
  func_0x00010084fd68(param_3);
  pppuVar1 = &ppuStack_58;
  func_0x000107c28824(pppuVar1,auStack_70,param_3);
  func_0x000107c278b8(auStack_88,&UNK_10f4b03ef);
  func_0x000107c2881c(pppuVar1,auStack_88,*(undefined4 *)(param_2 + 0x38));
  func_0x000107c2884c(param_1,pppuVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  func_0x000108682088();
  func_0x000107c2882c(&ppuStack_58);
  if ((*(byte *)(param_2 + 0x10) >> 2 & 1) != 0) {
    if (*(char *)(*(long *)(param_2 + 0x30) + 0x38) == '\x01') {
      func_0x000107c278b8(auStack_a0,&UNK_10f4b03fc);
      puVar2 = auStack_a0;
      func_0x000107c28824(param_1,auStack_a0,&UNK_10f4b0410);
    }
    else {
      func_0x0001006a5710();
      puVar2 = auStack_b8;
      func_0x0001006a5718();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
  }
  return;
}



/* Entry: 1086818c8; end: 108681987;  */

void FUN_1086818c8(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x19c) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x198) = uVar1;
  func_0x000107c28288(param_1 + 0x80);
  func_0x000107c28288(param_1 + 0x40);
  lVar2 = param_1 + 0xa0;
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    func_0x0001004b4e98();
    *(long *)(param_1 + 0xa8) = lVar2;
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  return;
}



/* Entry: 108681988; end: 1086819ef;  */

void FUN_108681988(long param_1,undefined4 param_2,int param_3)

{
  FUN_1086819f0(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x198) = 3;
  *(undefined1 *)(param_1 + 0x19c) = 1;
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0xfc) == 6) {
      FUN_108770bcc();
    }
    else {
      func_0x000108770be8();
    }
    *(undefined4 *)(param_1 + 0x148) = param_2;
    *(undefined1 *)(param_1 + 0x14c) = 1;
  }
  return;
}



/* Entry: 1086819f0; end: 108681a23;  */

long FUN_1086819f0(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_1088b9b00();
  }
  else {
    FUN_108681db0();
  }
  return param_1;
}



/* Entry: 108681a24; end: 108681a2f;  */

/* WARNING: Removing unreachable block (ram,0x00010086b830) */
/* WARNING: Removing unreachable block (ram,0x00010086b7b4) */
/* WARNING: Removing unreachable block (ram,0x00010086b78c) */
/* WARNING: Removing unreachable block (ram,0x00010086b7dc) */
/* WARNING: Removing unreachable block (ram,0x00010086b804) */
/* WARNING: Removing unreachable block (ram,0x00010086b858) */

void FUN_108681a24(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(int *)(param_2 + 0xfc) == 0) {
    func_0x00010086b8b0(0,param_1,0);
    func_0x00010086b8b0(0,param_1,2);
    func_0x00010086b8b0(0,param_1,1);
    func_0x00010086b8b0(0,param_1,3);
    func_0x00010086b8b0(0,param_1,4);
    func_0x00010086b8b0(0,param_1,5);
  }
  return;
}



/* Entry: 108681a30; end: 108681a77;  */

void FUN_108681a30(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uStack_24;
  
  lVar1 = *(long *)(param_1 + 0x128);
  uStack_24 = param_2;
  FUN_108681a78(lVar1,*(undefined8 *)(param_1 + 0x130),&uStack_24);
  if (*(long *)(param_1 + 0x130) == lVar1) {
    FUN_108681dfc(param_1 + 0x128,&uStack_24);
  }
  return;
}



/* Entry: 108681a78; end: 108681a97;  */

void FUN_108681a78(void)

{
  func_0x000108681dd8();
  return;
}



/* Entry: 108681a98; end: 108681ad7;  */

void FUN_108681a98(long param_1)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined4 unaff_w20;
  
  func_0x0001006a5678();
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    FUN_108681ad8();
  }
  *(undefined4 *)(unaff_x19 + 0x28) = unaff_w20;
  *(undefined1 *)(unaff_x19 + 0x2c) = 1;
  puVar1 = (undefined8 *)(unaff_x19 + 0x10);
  *puVar1 = 0;
  func_0x000107c28258();
  *(undefined8 **)(unaff_x19 + 0x18) = puVar1;
  *(undefined1 *)(unaff_x19 + 0x20) = 1;
  return;
}



/* Entry: 108681ad8; end: 108681b4b;  */

void FUN_108681ad8(undefined8 *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lStack_38;
  
  func_0x000107c28288(param_1 + 2);
  if (*(char *)((long)param_1 + 0x2c) == '\x01') {
    plVar2 = (long *)*param_1;
    uVar1 = *(undefined4 *)(param_1 + 5);
    param_1 = param_1 + 2;
    func_0x000107c2825c();
    lStack_38 = (long)param_1 * 1000;
    (**(code **)(*plVar2 + 0x10))(plVar2,uVar1,&lStack_38);
  }
  return;
}



/* Entry: 108681b4c; end: 108681bab;  */

void FUN_108681b4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  puVar1 = param_1;
  func_0x000107c28258();
  param_1[1] = puVar1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 108681bac; end: 108681bb3;  */

undefined8 *
FUN_108681bac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined1 param_5)

{
  *param_1 = param_2;
  func_0x0001005fa7a4(param_1 + 1,param_3);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = param_5;
  func_0x0001004b4eb0();
  if (param_4 != 0) {
    func_0x0001005fe18c();
    func_0x0001006a5a14();
    func_0x0001006a5a20();
    func_0x0001005fe1e0();
  }
  return param_1;
}



/* Entry: 108681bb4; end: 108681c33;  */

undefined8 *
FUN_108681bb4(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
             undefined1 param_5)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 10) = param_4;
  *(undefined1 *)((long)param_1 + 0x51) = param_5;
  func_0x000107c28298();
  return param_1;
}



/* Entry: 108681c34; end: 108681d53;  */

undefined8 * FUN_108681c34(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lStack_c0;
  undefined1 auStack_b8 [40];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  func_0x000107c28288(param_1 + 7);
  uStack_38 = *(undefined4 *)(param_1 + 1);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_58 = &PTR_FUN_110a609a8;
  uStack_50 = 0;
  puVar2 = param_1 + 4;
  while (puVar2 = (undefined8 *)*puVar2, puVar2 != (undefined8 *)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_70,puVar2 + 2);
    uStack_88 = puVar2[6];
    uStack_90 = puVar2[5];
    uStack_80 = puVar2[7];
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[5] = 0;
    func_0x000107c28820(&ppuStack_58,auStack_70,&uStack_90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
    func_0x000108682088();
  }
  lVar1 = 1000;
  if (*(char *)((long)param_1 + 0x51) == '\0') {
    lVar1 = 1;
  }
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    func_0x000107c2884c(auStack_b8,&ppuStack_58);
    func_0x000107c3211c();
    func_0x000107c320ec();
    func_0x000107c320d8();
  }
  plVar3 = (long *)*param_1;
  puVar2 = param_1 + 7;
  func_0x000107c2825c();
  lStack_c0 = (long)puVar2 * lVar1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&ppuStack_58,&lStack_c0);
  func_0x000107c2882c(&ppuStack_58);
  func_0x000107c278e0(param_1 + 2);
  return param_1;
}



/* Entry: 108681d54; end: 108681d63;  */

void FUN_108681d54(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  return;
}



/* Entry: 108681d64; end: 108681d9b;  */

undefined8 * FUN_108681d64(undefined8 *param_1)

{
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,*(undefined4 *)(param_1 + 1),param_1[2]);
  return param_1;
}



/* Entry: 108681d9c; end: 108681daf;  */

undefined8 * FUN_108681d9c(undefined8 *param_1)

{
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,*(undefined4 *)(param_1 + 1),param_1[2]);
  return param_1;
}



/* Entry: 108681db0; end: 108681dcb;  */

void FUN_108681db0(long param_1)

{
  FUN_108681dcc();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 108681dcc; end: 108681dfb;  */

undefined8 * FUN_108681dcc(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110a81020;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001088bad34();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_2 + 0x18;
  func_0x000107c2809c(lVar2,0);
  param_1[3] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    FUN_1088ba9cc(0,*(undefined8 *)(param_2 + 0x20));
  }
  param_1[4] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    FUN_1088baa5c(0,*(undefined8 *)(param_2 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    FUN_1088baab8(0,*(undefined8 *)(param_2 + 0x30));
  }
  param_1[6] = uVar3;
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  return param_1;
}



/* Entry: 108681dfc; end: 108681e3f;  */

undefined4 * FUN_108681dfc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 2);
  if (puVar1 < *(undefined4 **)(param_1 + 4)) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_108681e40();
  }
  *(undefined4 **)(param_1 + 2) = puVar2;
  return puVar2 + -1;
}



/* Entry: 108681e40; end: 108681ed3;  */

long FUN_108681e40(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  plVar1 = param_1;
  FUN_108681ed4(param_1,(param_1[1] - *param_1 >> 2) + 1);
  FUN_108681f9c(auStack_48,plVar1,param_1[1] - *param_1 >> 2,param_1 + 2);
  *puStack_38 = *param_2;
  puStack_38 = puStack_38 + 1;
  FUN_108681f14(param_1,auStack_48);
  lVar2 = param_1[1];
  FUN_108682024(auStack_48);
  return lVar2;
}



/* Entry: 108681ed4; end: 108681f13;  */

ulong FUN_108681ed4(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 >> 0x3e == 0) {
    uVar2 = param_1[2] - *param_1 >> 1;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7ffffffffffffffb < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0x3fffffffffffffff;
    }
    return uVar2;
  }
  FUN_108681f88();
  func_0x000107c320fc();
  uVar3 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return uVar2;
}



/* Entry: 108681f14; end: 108681f87;  */

void FUN_108681f14(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000107c320fc();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 108681f88; end: 108681f9b;  */

long * FUN_108681f88(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)&UNK_10f4b042f;
  func_0x000104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108681fe4();
  }
  lVar1 = param_4 + param_3 * 4;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + param_2 * 4;
  return plVar2;
}



/* Entry: 108681f9c; end: 108682007;  */

long * FUN_108681f9c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108681fe4();
  }
  lVar1 = param_4 + param_3 * 4;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 4;
  return param_1;
}



/* Entry: 108682008; end: 108682023;  */

long * FUN_108682008(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    plVar1 = (long *)(param_2 << 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_108682050();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108682024; end: 10868204f;  */

long * FUN_108682024(long *param_1)

{
  FUN_108682050();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108682050; end: 1086820af;  */

void FUN_108682050(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -4;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1086820b0; end: 1086820f7;  */

void FUN_1086820b0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  
  func_0x000107c32130();
  func_0x000107c32124();
  UNRECOVERED_JUMPTABLE = *(code **)(extraout_x8 + 8);
  func_0x000107c32138();
                    /* WARNING: Could not recover jumptable at 0x0001005e700c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1086820f8; end: 1086820ff;  */

void FUN_1086820f8(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  
  func_0x000108682154(param_1,1);
  func_0x000107c32124();
  UNRECOVERED_JUMPTABLE = *(code **)(extraout_x8 + 8);
  func_0x000107c32138();
                    /* WARNING: Could not recover jumptable at 0x0001005e700c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108682100; end: 108682147;  */

void FUN_108682100(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  
  func_0x000108682154();
  func_0x000107c32124();
  UNRECOVERED_JUMPTABLE = *(code **)(extraout_x8 + 8);
  func_0x000107c32138();
                    /* WARNING: Could not recover jumptable at 0x0001005e700c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108682148; end: 1086821af;  */

undefined1 * FUN_108682148(void)

{
  undefined **ppuStack0000000000000008;
  
  ppuStack0000000000000008 = &PTR_DAT_110a60a10;
  func_0x0001000e30f4(&stack0x00000010);
  return (undefined1 *)&stack0x00000008;
}



/* Entry: 1086821b0; end: 1086821d7;  */

/* WARNING: Possible PIC construction at 0x0001086821c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086821c8) */
/* WARNING: Removing unreachable block (ram,0x0001005ed580) */

undefined1 FUN_1086821b0(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  lVar3 = *(long *)(param_1 + 0x18);
  plVar10 = (long *)(lVar3 + 0x10);
  do {
    lVar6 = *plVar10;
    if (lVar6 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = 2;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        lVar6 = lVar3 + 0x20;
        lVar7 = lVar6;
        do {
          if (*(char *)(lVar7 + 1) != '\0') {
            uVar8 = 0;
            plVar10 = (long *)(lVar7 + 0x20);
            do {
              plVar4 = (long *)*plVar10;
              pcVar5 = (code *)plVar10[-2];
              if (plVar4 == (long *)0x0) {
                if (pcVar5 == (code *)0x0) {
                  (**(code **)plVar10[-1])();
                }
                else {
                  (*pcVar5)();
                }
              }
              else {
                (**(code **)(*plVar4 + 0x10))(plVar4,pcVar5,plVar10[-1]);
              }
              uVar8 = uVar8 + 1;
              plVar10 = plVar10 + 3;
            } while (uVar8 < *(byte *)(lVar7 + 1));
          }
          lVar9 = *(long *)(lVar7 + 8);
          if (lVar7 != lVar6) {
            func_0x000107c60fd0(lVar7);
          }
          lVar7 = lVar9;
        } while (lVar9 != 0);
        *(long *)(lVar3 + 0x90) = lVar6;
        *(undefined1 *)(lVar3 + 0x21) = 0;
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 1086821d8; end: 1086821db;  */

undefined8 * FUN_1086821d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a62348;
  func_0x000107c27f98(param_1 + 5);
  func_0x000107c27f9c(param_1 + 4);
  func_0x000107c27f98(param_1 + 3);
  func_0x000107c27f9c(param_1 + 2);
  return param_1;
}



/* Entry: 1086821dc; end: 1086821ef;  */

void FUN_1086821dc(void)

{
  FUN_1086821f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086821f0; end: 108682283;  */

undefined8 * FUN_1086821f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a62348;
  func_0x000107c27f98(param_1 + 5);
  func_0x000107c27f9c(param_1 + 4);
  func_0x000107c27f98(param_1 + 3);
  func_0x000107c27f9c(param_1 + 2);
  return param_1;
}



/* Entry: 108682284; end: 1086822ef;  */

void FUN_108682284(long param_1)

{
  long unaff_x19;
  undefined1 auStack_458 [1064];
  
  func_0x000107c3219c();
  func_0x000107c29394(param_1 + 0xe0,1);
  func_0x000107c32140();
  func_0x0001008530e0();
  func_0x000104be07d0();
  func_0x000107c29394(unaff_x19 + 0xe0,1);
  func_0x000107c32164();
  func_0x000107c32158();
  func_0x0001008530ec();
  FUN_1086f1c80();
  func_0x0001006b74f4(auStack_458);
  return;
}



/* Entry: 1086822f0; end: 1086828ab;  */

void FUN_1086822f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  ulong uVar7;
  ulong extraout_x9_00;
  long *plVar8;
  long *extraout_x10;
  long *plVar9;
  long *plVar10;
  long *extraout_x11;
  long *plVar11;
  long unaff_x19;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 auStack_ea0 [24];
  undefined1 auStack_e88 [1072];
  undefined1 auStack_a58 [24];
  undefined1 auStack_a40 [24];
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined1 auStack_a10 [1064];
  undefined1 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined4 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined4 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined1 uStack_578;
  undefined7 uStack_577;
  undefined1 uStack_570;
  undefined8 uStack_56f;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  undefined1 auStack_548 [1224];
  undefined1 auStack_80 [24];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  func_0x000107c321dc();
  func_0x000107c29394();
  func_0x000107c32140();
  func_0x000107c27994(auStack_ea0,param_2);
  FUN_108684270(auStack_e88,param_3);
  func_0x00010069ffd0(auStack_a58,param_4);
  func_0x000108684e9c(auStack_a40,param_5);
  func_0x000107c29e04(auStack_80,auStack_ea0);
  plVar13 = *(long **)(unaff_x19 + 0x98);
  if ((plVar13 != (long *)0x0) && (plVar4 = (long *)(unaff_x19 + 0xa8), *plVar4 != 0)) {
    func_0x000107c278c4(plVar4,auStack_80);
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      plVar15 = (long *)((ulong)plVar4 & uVar14);
    }
    else {
      plVar15 = plVar4;
      if (plVar13 <= plVar4) {
        uVar7 = 0;
        if (plVar13 != (long *)0x0) {
          uVar7 = (ulong)plVar4 / (ulong)plVar13;
        }
        plVar15 = (long *)((long)plVar4 - uVar7 * (long)plVar13);
      }
    }
    plVar12 = *(long **)(*(long *)(unaff_x19 + 0x90) + (long)plVar15 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_108682414;
          plVar6 = (long *)plVar12[1];
          if (plVar6 != plVar4) break;
          plVar6 = plVar12 + 2;
          func_0x000107c278d0(plVar6,auStack_80);
          if (((ulong)plVar6 & 1) != 0) goto LAB_1086827e0;
        }
        if (((ulong)plVar13 & uVar14) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar14);
        }
        else if (plVar13 <= plVar6) {
          uVar7 = 0;
          if (plVar13 != (long *)0x0) {
            uVar7 = (ulong)plVar6 / (ulong)plVar13;
          }
          plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar13);
        }
      } while (plVar6 == plVar15);
    }
  }
LAB_108682414:
  _bzero(auStack_a10,0x4b0);
  uStack_a18 = 0;
  uStack_a28 = 0;
  uStack_a20 = 0;
  plStack_60 = (long *)0x0;
  uStack_58 = 0;
  plStack_68 = (long *)0x0;
  func_0x000107c27914(&plStack_68);
  auStack_a10[0] = 0;
  uStack_5e8 = 0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5c0 = 0x3f800000;
  uStack_5b0 = 0;
  uStack_5b8 = 0;
  uStack_5a0 = 0;
  uStack_5a8 = 0;
  uStack_598 = 0x3f800000;
  uStack_588 = 0;
  uStack_590 = 0;
  uStack_578 = 0;
  uStack_580 = 0;
  uStack_56f = 0;
  uStack_577 = 0;
  uStack_570 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_560,auStack_80);
  func_0x00010868730c(auStack_548,&uStack_a28);
  plVar4 = (long *)(unaff_x19 + 0xa8);
  func_0x000107c278c4(plVar4,&lStack_560);
  plVar15 = *(long **)(unaff_x19 + 0x98);
  if (plVar15 != (long *)0x0) {
    uVar14 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar14) == 0) {
      plVar13 = (long *)(uVar14 & (ulong)plVar4);
    }
    else {
      plVar13 = plVar4;
      if (plVar15 <= plVar4) {
        uVar7 = 0;
        if (plVar15 != (long *)0x0) {
          uVar7 = (ulong)plVar4 / (ulong)plVar15;
        }
        plVar13 = (long *)((long)plVar4 - uVar7 * (long)plVar15);
      }
    }
    plVar12 = *(long **)(*(long *)(unaff_x19 + 0x90) + (long)plVar13 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_108682534;
          plVar6 = (long *)plVar12[1];
          if (plVar6 != plVar4) break;
          plVar6 = plVar12 + 2;
          func_0x000107c278d0(plVar6,&lStack_560);
          if (((ulong)plVar6 & 1) != 0) goto LAB_1086827c8;
        }
        if (((ulong)plVar15 & uVar14) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar14);
        }
        else if (plVar15 <= plVar6) {
          uVar7 = 0;
          if (plVar15 != (long *)0x0) {
            uVar7 = (ulong)plVar6 / (ulong)plVar15;
          }
          plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar15);
        }
      } while (plVar6 == plVar13);
    }
  }
LAB_108682534:
  plVar12 = (long *)0x4f0;
  __Znwm();
  plVar6 = (long *)(unaff_x19 + 0xa0);
  uStack_58 = 1;
  *plVar12 = 0;
  plVar12[1] = (long)plVar4;
  plVar12[3] = lStack_558;
  plVar12[2] = lStack_560;
  plVar12[4] = lStack_550;
  lStack_558 = 0;
  lStack_560 = 0;
  lStack_550 = 0;
  plStack_68 = plVar12;
  plStack_60 = plVar6;
  func_0x00010868730c(plVar12 + 5,auStack_548);
  if ((plVar15 != (long *)0x0) &&
     ((float)(*(long *)(unaff_x19 + 0xa8) + 1) <= *(float *)(unaff_x19 + 0xb0) * (float)plVar15))
  goto LAB_108682750;
  bVar2 = (long *)0x2 < plVar15;
  bVar3 = plVar15 == (long *)0x3;
  func_0x000108687d14((long)plVar15 << 1);
  plVar13 = extraout_x8;
  if (!bVar2 || bVar3) {
    plVar13 = extraout_x9;
  }
  if ((long)plVar13 - 1U == 0) {
    plVar13 = (long *)0x2;
  }
  else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar15 = *(long **)(unaff_x19 + 0x98);
  if (plVar15 < plVar13) {
LAB_1086825f4:
    if ((ulong)plVar13 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10868282c);
      (*pcVar1)();
    }
    lVar5 = (long)plVar13 << 3;
    __Znwm(lVar5);
    func_0x000108687444(unaff_x19 + 0x90,lVar5);
    *(long **)(unaff_x19 + 0x98) = plVar13;
    lVar5 = *(long *)(unaff_x19 + 0x90);
    for (plVar15 = (long *)0x0; plVar13 != plVar15; plVar15 = (long *)((long)plVar15 + 1)) {
      *(undefined8 *)(lVar5 + (long)plVar15 * 8) = 0;
    }
    plVar8 = (long *)*plVar6;
    plVar15 = plVar13;
    if (plVar8 != (long *)0x0) {
      plVar9 = (long *)plVar8[1];
      uVar7 = (long)plVar13 - 1;
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar9 / (ulong)plVar13;
      }
      plVar10 = plVar9;
      if (plVar13 <= plVar9) {
        plVar10 = (long *)((long)plVar9 - uVar14 * (long)plVar13);
      }
      if (((ulong)plVar13 & uVar7) == 0) {
        plVar10 = (long *)((ulong)plVar9 & uVar7);
      }
      *(long **)(lVar5 + (long)plVar10 * 8) = plVar6;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        plVar11 = (long *)plVar8[1];
        if (((ulong)plVar13 & uVar7) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar7);
        }
        else if (plVar13 <= plVar11) {
          uVar14 = 0;
          if (plVar13 != (long *)0x0) {
            uVar14 = (ulong)plVar11 / (ulong)plVar13;
          }
          plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar13);
        }
        if (plVar11 != plVar10) {
          if (*(long *)(lVar5 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar11 * 8) = plVar9;
            plVar10 = plVar11;
          }
          else {
            func_0x000108687bb4();
            lVar5 = extraout_x8_00;
            uVar7 = extraout_x9_00;
            plVar8 = extraout_x10;
            plVar10 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar13 < plVar15) {
    plVar8 = (long *)(long)((float)*(ulong *)(unaff_x19 + 0xa8) / *(float *)(unaff_x19 + 0xb0));
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x000108687b94();
    }
    if (plVar13 <= plVar8) {
      plVar13 = plVar8;
    }
    if (plVar13 < plVar15) {
      if (plVar13 != (long *)0x0) goto LAB_1086825f4;
      func_0x000108687444(unaff_x19 + 0x90,0);
      *(undefined8 *)(unaff_x19 + 0x98) = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = *(long **)(unaff_x19 + 0x98);
    }
  }
  if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
    plVar13 = (long *)((long)plVar15 - 1U & (ulong)plVar4);
  }
  else {
    plVar13 = plVar4;
    if (plVar15 <= plVar4) {
      uVar14 = 0;
      if (plVar15 != (long *)0x0) {
        uVar14 = (ulong)plVar4 / (ulong)plVar15;
      }
      plVar13 = (long *)((long)plVar4 - uVar14 * (long)plVar15);
    }
  }
LAB_108682750:
  lVar5 = *(long *)(unaff_x19 + 0x90);
  plVar4 = *(long **)(lVar5 + (long)plVar13 * 8);
  if (plVar4 == (long *)0x0) {
    *plVar12 = *plVar6;
    *plVar6 = (long)plVar12;
    *(long **)(lVar5 + (long)plVar13 * 8) = plVar6;
    if (*plVar12 != 0) {
      plVar13 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar13 = (long *)((ulong)plVar13 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar13) {
        uVar14 = 0;
        if (plVar15 != (long *)0x0) {
          uVar14 = (ulong)plVar13 / (ulong)plVar15;
        }
        plVar13 = (long *)((long)plVar13 - uVar14 * (long)plVar15);
      }
      *(long **)(lVar5 + (long)plVar13 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar4;
    *plVar4 = (long)plVar12;
  }
  plStack_68 = (long *)0x0;
  *(long *)(unaff_x19 + 0xa8) = *(long *)(unaff_x19 + 0xa8) + 1;
  func_0x00010868745c(&plStack_68);
LAB_1086827c8:
  func_0x000108687498(&lStack_560);
  func_0x000108684198(&uStack_a28);
  func_0x000107c28298(plVar12 + 0x9b);
LAB_1086827e0:
  func_0x0001086872cc(plVar12 + 0x98);
  FUN_1086f0130(plVar12 + 5,auStack_ea0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  func_0x000108687c80();
  func_0x000108684fe8(auStack_ea0);
  return;
}



/* Entry: 1086828ac; end: 108682917;  */

void FUN_1086828ac(long *param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *plVar10;
  ulong uVar11;
  ulong extraout_x9;
  ulong extraout_x9_00;
  int extraout_w10;
  ulong uVar12;
  code *extraout_x10;
  code *extraout_x10_00;
  ulong uVar13;
  ulong extraout_x11;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *unaff_x22;
  long *plVar20;
  long *unaff_x24;
  long lVar21;
  long unaff_x28;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  byte bStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 uStack_130;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_38;
  
  plVar5 = (long *)param_1[4];
  (**(code **)(*plVar5 + 0x10))();
  plVar6 = (long *)param_1[4];
  if (((ulong)plVar5 & 1) != 0) {
    (**(code **)(*plVar6 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x0001086828f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1);
    return;
  }
  (**(code **)(*plVar6 + 0x20))();
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)param_1[5];
  plVar5 = plVar6;
  if ((long)plVar6 <= (long)plVar10) {
    plVar5 = plVar10;
  }
  if ((long)plVar10 < 1) {
    plVar5 = plVar6;
  }
  plVar6 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  plVar6 = plVar6 + (long)plVar5 * 0x1e848;
  (**(code **)(*param_1 + 0x18))();
  if ((char)param_1[10] == '\x01') {
    if ((param_1[7] - (long)plVar6 < 1000000) ||
       ((long)((ulong)(param_1[7] - (long)plVar6) / 1000000) < param_1[5])) goto LAB_108683f08;
    func_0x00010089b2d0(param_1 + 8);
  }
  param_1[7] = (long)plVar6;
  lVar21 = param_1[1];
  uVar24 = *(undefined8 *)(lVar21 + 0x10);
  uVar23 = *(undefined8 *)(lVar21 + 8);
  if (*(long *)(lVar21 + 0x10) != 0) {
    do {
      func_0x000107c321e8();
    } while (extraout_w10 != 0);
    plVar6 = (long *)param_1[7];
  }
  pcStack_98 = FUN_1086879f8;
  ppuStack_90 = &PTR_FUN_110a625d8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_88 = uVar23;
  uStack_80 = uVar24;
  func_0x00010bcce9b8(auStack_a8);
  func_0x000108687bf0();
  FUN_10868009c(param_1 + 8,auStack_a8);
  func_0x000100688f2c(auStack_a8);
  func_0x000107c28c8c();
LAB_108683f08:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x000100688f2c(auStack_a8);
  puVar8 = &uStack_b8;
  func_0x000107c28c8c();
  func_0x000108687acc();
  (**(code **)(*(long *)puVar8[0x26] + 0x18))((long *)puVar8[0x26],puVar8 + 0x1c,1);
  func_0x000107c29394(puVar8 + 0x17,2);
  func_0x000108687d3c();
  puVar22 = (undefined8 *)(unaff_x28 + 0xa0);
  uVar12 = *(ulong *)(unaff_x28 + 0x198);
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_160 = 0;
  bStack_148 = 0;
  puVar3 = (undefined8 *)*puVar22;
  while (puVar3 != (undefined8 *)0x0) {
    lVar21 = (long)plVar6 - (long)unaff_x22;
    if (uVar12 <= (ulong)(lVar21 / 0x4a8)) break;
    FUN_1086f02dc(&uStack_5e0,puVar3 + 5);
    FUN_1086878a8(puVar3 + 0x98);
    func_0x000108687808(&uStack_a90,&uStack_5e0);
    uStack_610 = puVar3[0x99];
    uStack_618 = puVar3[0x98];
    uStack_608 = puVar3[0x9a];
    puVar3[0x99] = 0;
    puVar3[0x9a] = 0;
    puVar3[0x98] = 0;
    uStack_5f8 = puVar3[0x9c];
    uStack_600 = puVar3[0x9b];
    uStack_5f0 = puVar3[0x9d];
    uVar11 = puVar8[0xe];
    uVar9 = puVar3[1];
    uVar13 = uVar11 - 1;
    if ((uVar11 & uVar13) == 0) {
      uVar9 = uVar13 & uVar9;
    }
    else if (uVar11 <= uVar9) {
      uVar15 = 0;
      if (uVar11 != 0) {
        uVar15 = uVar9 / uVar11;
      }
      uVar9 = uVar9 - uVar15 * uVar11;
    }
    puVar19 = (undefined8 *)*puVar3;
    lVar14 = puVar8[0xd];
    puVar17 = *(undefined8 **)(lVar14 + uVar9 * 8);
    do {
      puVar16 = puVar17;
      puVar17 = (undefined8 *)*puVar16;
    } while ((undefined8 *)*puVar16 != puVar3);
    puVar17 = puVar19;
    if (puVar16 == puVar22) {
LAB_1086837c4:
      if (puVar19 == (undefined8 *)0x0) {
LAB_1086837fc:
        *(undefined8 *)(lVar14 + uVar9 * 8) = 0;
        puVar17 = (undefined8 *)*puVar3;
        goto LAB_108683804;
      }
      uVar15 = puVar19[1];
      if ((uVar11 & uVar13) == 0) {
        uVar18 = uVar15 & uVar13;
      }
      else {
        uVar18 = uVar15;
        if (uVar11 <= uVar15) {
          uVar18 = 0;
          if (uVar11 != 0) {
            uVar18 = uVar15 / uVar11;
          }
          uVar18 = uVar15 - uVar18 * uVar11;
        }
      }
      if (uVar18 != uVar9) goto LAB_1086837fc;
LAB_10868380c:
      if ((uVar11 & uVar13) == 0) {
        uVar15 = uVar15 & uVar13;
      }
      else if (uVar11 <= uVar15) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar15 / uVar11;
        }
        uVar15 = uVar15 - uVar13 * uVar11;
      }
      if (uVar15 != uVar9) {
        *(undefined8 **)(lVar14 + uVar15 * 8) = puVar16;
        puVar17 = (undefined8 *)*puVar3;
      }
    }
    else {
      uVar15 = puVar16[1];
      if ((uVar11 & uVar13) == 0) {
        uVar15 = uVar15 & uVar13;
      }
      else if (uVar11 <= uVar15) {
        uVar18 = 0;
        if (uVar11 != 0) {
          uVar18 = uVar15 / uVar11;
        }
        uVar15 = uVar15 - uVar18 * uVar11;
      }
      if (uVar15 != uVar9) goto LAB_1086837c4;
LAB_108683804:
      if (puVar17 != (undefined8 *)0x0) {
        uVar15 = puVar17[1];
        goto LAB_10868380c;
      }
    }
    *puVar16 = puVar17;
    *puVar3 = 0;
    puVar8[0x10] = puVar8[0x10] + -1;
    uStack_130 = 1;
    puStack_140 = puVar3;
    puStack_138 = puVar22;
    func_0x000108687cd8();
    FUN_10868745c();
    func_0x000108684fe8(&uStack_5e0);
    if (plVar6 < unaff_x24) {
      func_0x0001086877dc(plVar6,&uStack_a90);
      plVar20 = unaff_x22;
      plVar1 = plVar6;
    }
    else {
      if (0x36fad87bb46716 < lVar21 / 0x4a8 + 1U) {
        func_0x000108687b5c();
        FUN_10868789c();
        goto LAB_108683d80;
      }
      func_0x000108687d00();
      uVar9 = extraout_x8;
      if (0x1b7d6c3dda338a < extraout_x9) {
        uVar9 = extraout_x11;
      }
      if (uVar9 == 0) {
        lVar14 = 0;
      }
      else {
        if (extraout_x11 < uVar9) {
          func_0x000108687b5c();
          func_0x000104bd35f4();
          goto LAB_108683d80;
        }
        lVar14 = uVar9 * 0x4a8;
        __Znwm();
      }
      plVar1 = (long *)(lVar14 + lVar21);
      func_0x0001086877dc(plVar1,&uStack_a90);
      plVar20 = plVar1 + (lVar21 / -0x4a8) * 0x95;
      plVar10 = plVar20;
      for (plVar5 = unaff_x22; plVar7 = unaff_x22, plVar5 != plVar6; plVar5 = plVar5 + 0x95) {
        func_0x0001086877dc(plVar10,plVar5);
        plVar10 = plVar10 + 0x95;
      }
      for (; plVar7 != plVar6; plVar7 = plVar7 + 0x95) {
        func_0x0001086878e4();
      }
      unaff_x24 = (long *)(lVar14 + uVar9 * 0x4a8);
      if (unaff_x22 != (long *)0x0) {
        __ZdlPv(unaff_x22);
      }
    }
    plVar6 = plVar1 + 0x95;
    func_0x0001086878e4(&uStack_a90);
    puVar3 = puVar19;
    unaff_x22 = plVar20;
  }
  func_0x000108687b5c();
  if (puVar8[0x10] != 0) {
    bStack_148 = 1;
  }
  if (unaff_x22 != plVar6) {
    func_0x000108687cec((long)plVar6 - (long)unaff_x22);
    (*extraout_x10)();
  }
  for (; bVar2 = bStack_148, unaff_x22 != plVar6; unaff_x22 = unaff_x22 + 0x95) {
    func_0x000108687ca8();
    FUN_1086f1b70(puVar8 + 0x32,unaff_x22);
  }
  func_0x00010868790c(&uStack_160);
  func_0x000107c29394(puVar8 + 0x17,9);
  func_0x000108687d3c();
  puVar22 = (undefined8 *)(unaff_x28 + 0x168);
  uVar12 = *(ulong *)(unaff_x28 + 0x238);
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_160 = 0;
  bStack_148 = 0;
  puVar3 = (undefined8 *)*puVar22;
  while (puVar3 != (undefined8 *)0x0) {
    lVar21 = (long)plVar6 - (long)unaff_x22;
    if (uVar12 <= (ulong)(lVar21 / 0x60)) break;
    FUN_1086f11d8(&uStack_5e0,puVar3 + 3);
    FUN_1086878a8(puVar3 + 9);
    uStack_a88 = uStack_5d8;
    uStack_a90 = uStack_5e0;
    uStack_a80 = uStack_5d0;
    uStack_5d0 = 0;
    uStack_5d8 = 0;
    uStack_5e0 = 0;
    uStack_a70 = uStack_5c0;
    uStack_a78 = uStack_5c8;
    uStack_a68 = uStack_5b8;
    uStack_5c0 = 0;
    uStack_5b8 = 0;
    uStack_5c8 = 0;
    uStack_a58 = puVar3[10];
    uStack_a60 = puVar3[9];
    uStack_a50 = puVar3[0xb];
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    uStack_a38 = puVar3[0xe];
    uStack_a40 = puVar3[0xd];
    uStack_a48 = puVar3[0xc];
    uVar11 = puVar8[0x13];
    uVar13 = uVar11 - 1;
    uVar9 = puVar3[1];
    if ((uVar11 & uVar13) == 0) {
      uVar9 = uVar13 & uVar9;
    }
    else if (uVar11 <= uVar9) {
      uVar15 = 0;
      if (uVar11 != 0) {
        uVar15 = uVar9 / uVar11;
      }
      uVar9 = uVar9 - uVar15 * uVar11;
    }
    puVar19 = (undefined8 *)*puVar3;
    lVar14 = puVar8[0x12];
    puVar17 = *(undefined8 **)(lVar14 + uVar9 * 8);
    do {
      puVar16 = puVar17;
      puVar17 = (undefined8 *)*puVar16;
    } while ((undefined8 *)*puVar16 != puVar3);
    puVar17 = puVar19;
    if (puVar16 == puVar22) {
LAB_108683b28:
      if (puVar19 == (undefined8 *)0x0) {
LAB_108683b60:
        *(undefined8 *)(lVar14 + uVar9 * 8) = 0;
        puVar17 = (undefined8 *)*puVar3;
        goto LAB_108683b68;
      }
      uVar15 = puVar19[1];
      if ((uVar11 & uVar13) == 0) {
        uVar18 = uVar15 & uVar13;
      }
      else {
        uVar18 = uVar15;
        if (uVar11 <= uVar15) {
          uVar18 = 0;
          if (uVar11 != 0) {
            uVar18 = uVar15 / uVar11;
          }
          uVar18 = uVar15 - uVar18 * uVar11;
        }
      }
      if (uVar18 != uVar9) goto LAB_108683b60;
LAB_108683b70:
      if ((uVar11 & uVar13) == 0) {
        uVar15 = uVar15 & uVar13;
      }
      else if (uVar11 <= uVar15) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar15 / uVar11;
        }
        uVar15 = uVar15 - uVar13 * uVar11;
      }
      if (uVar15 != uVar9) {
        *(undefined8 **)(lVar14 + uVar15 * 8) = puVar16;
        puVar17 = (undefined8 *)*puVar3;
      }
    }
    else {
      uVar15 = puVar16[1];
      if ((uVar11 & uVar13) == 0) {
        uVar15 = uVar15 & uVar13;
      }
      else if (uVar11 <= uVar15) {
        uVar18 = 0;
        if (uVar11 != 0) {
          uVar18 = uVar15 / uVar11;
        }
        uVar15 = uVar15 - uVar18 * uVar11;
      }
      if (uVar15 != uVar9) goto LAB_108683b28;
LAB_108683b68:
      if (puVar17 != (undefined8 *)0x0) {
        uVar15 = puVar17[1];
        goto LAB_108683b70;
      }
    }
    *puVar16 = puVar17;
    *puVar3 = 0;
    puVar8[0x15] = puVar8[0x15] + -1;
    uStack_130 = 1;
    puStack_140 = puVar3;
    puStack_138 = puVar22;
    func_0x000108687cd8();
    func_0x0001086877a0();
    FUN_10868713c(&uStack_5e0);
    if (plVar6 < unaff_x24) {
      func_0x000108687948(plVar6,&uStack_a90);
      plVar20 = unaff_x22;
      plVar1 = plVar6;
    }
    else {
      if (0x2aaaaaaaaaaaaaa < lVar21 / 0x60 + 1U) {
        func_0x000108687b5c();
        FUN_108687990();
LAB_108683d80:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x108683d84);
        (*pcVar4)();
      }
      func_0x000108687d00();
      uVar9 = extraout_x8_00;
      if (0x155555555555554 < extraout_x9_00) {
        uVar9 = 0x2aaaaaaaaaaaaaa;
      }
      if (uVar9 == 0) {
        lVar14 = 0;
      }
      else {
        if (0x2aaaaaaaaaaaaaa < uVar9) {
          func_0x000108687b5c();
          func_0x000104bd35f4();
          goto LAB_108683d80;
        }
        lVar14 = uVar9 * 0x60;
        __Znwm();
      }
      plVar1 = (long *)(lVar14 + lVar21);
      func_0x000108687948(plVar1,&uStack_a90);
      plVar20 = plVar1 + (lVar21 / -0x60) * 0xc;
      plVar10 = plVar20;
      for (plVar5 = unaff_x22; plVar7 = unaff_x22, plVar5 != plVar6; plVar5 = plVar5 + 0xc) {
        func_0x000108687948(plVar10,plVar5);
        plVar10 = plVar10 + 0xc;
      }
      for (; plVar7 != plVar6; plVar7 = plVar7 + 0xc) {
        FUN_10868799c();
      }
      unaff_x24 = (long *)(lVar14 + uVar9 * 0x60);
      if (unaff_x22 != (long *)0x0) {
        __ZdlPv(unaff_x22);
      }
    }
    plVar6 = plVar1 + 0xc;
    FUN_10868799c(&uStack_a90);
    puVar3 = puVar19;
    unaff_x22 = plVar20;
  }
  func_0x000108687b5c();
  if (puVar8[0x15] != 0) {
    bStack_148 = 1;
  }
  if (unaff_x22 != plVar6) {
    func_0x000108687cec((long)plVar6 - (long)unaff_x22);
    (*extraout_x10_00)();
  }
  for (; unaff_x22 != plVar6; unaff_x22 = unaff_x22 + 0xc) {
    func_0x000108687ca8();
    FUN_1086f21dc(puVar8 + 0x32,unaff_x22);
  }
  bVar2 = bStack_148 | bVar2;
  func_0x0001086879bc(&uStack_160);
  if ((bVar2 & 1) != 0) {
    FUN_108683e04(puVar8,puVar8[0x2f]);
  }
  return;
}



/* Entry: 108682918; end: 1086829bb;  */

void FUN_108682918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  undefined1 auStack_480 [1064];
  undefined1 auStack_58 [24];
  
  func_0x000107c321dc();
  func_0x000107c29394();
  func_0x000107c32140();
  func_0x000104be07d0(auStack_480,param_2);
  func_0x00010069ffd0(auStack_58,param_3);
  func_0x000107c29394(unaff_x19 + 0xe0,0xe);
  func_0x000107c32164();
  func_0x000107c32158();
  FUN_1086f2478(unaff_x19 + 0x1b8,auStack_480);
  func_0x00010868501c(auStack_480);
  return;
}



/* Entry: 1086829bc; end: 108682a5b;  */

void FUN_1086829bc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_3e8 [904];
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [24];
  undefined2 uStack_38;
  
  func_0x000107c3219c();
  func_0x000107c29394(param_1 + 0xe0,8);
  func_0x000107c32140();
  func_0x0001008530e0();
  FUN_108685044();
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x388);
  uStack_58 = *(undefined4 *)(unaff_x20 + 0x390);
  func_0x000107c27994(auStack_50,unaff_x20 + 0x398);
  uStack_38 = *(undefined2 *)(unaff_x20 + 0x3b0);
  func_0x000107c29394(unaff_x19 + 0xe0,8);
  func_0x000107c32164();
  func_0x000107c32158();
  func_0x0001008530ec();
  FUN_1086f1d90();
  func_0x0001086858b0(auStack_3e8);
  return;
}



/* Entry: 108682a5c; end: 108682fa3;  */

void FUN_108682a5c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 uStack_6b8;
  undefined1 uStack_6b0;
  undefined1 auStack_6a8 [32];
  undefined1 auStack_688 [32];
  undefined1 auStack_668 [904];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [96];
  undefined1 auStack_258 [96];
  undefined1 auStack_1f8 [40];
  undefined8 **ppuStack_1d0;
  undefined8 **ppuStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined8 **ppuStack_1a8;
  undefined4 uStack_1a0;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  undefined5 uStack_118;
  undefined3 uStack_113;
  undefined5 uStack_110;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined2 uStack_b0;
  undefined8 **ppuStack_a8;
  undefined1 uStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined1 uStack_80;
  undefined8 **ppuStack_78;
  undefined8 **appuStack_70 [2];
  
  func_0x000107c29394(param_1 + 0xe0,3);
  func_0x000107c32140();
  uStack_6b8 = *param_2;
  uStack_6b0 = *(undefined1 *)(param_2 + 1);
  func_0x000107c279a0(auStack_6a8,param_2 + 2);
  func_0x000104be0ccc(auStack_688,param_2 + 6);
  FUN_108685044(auStack_668,param_2 + 10);
  uStack_2d8 = param_2[0x7c];
  uStack_2e0 = param_2[0x7b];
  uStack_2c8 = param_2[0x7e];
  uStack_2d0 = param_2[0x7d];
  uStack_2c0 = param_2[0x7f];
  FUN_1086858d8(auStack_2b8,param_2 + 0x80);
  FUN_1086858d8(auStack_258,param_2 + 0x8c);
  FUN_10863aa28(auStack_1f8,param_2 + 0x98);
  ppuStack_a8 = &ppuStack_1d0;
  ppuStack_1c8 = (undefined8 ***)0x0;
  ppuStack_1d0 = (undefined8 ***)0x0;
  ppuStack_1c0 = (undefined8 ***)0x0;
  lVar6 = param_2[0x9d];
  lVar7 = param_2[0x9e];
  uStack_a0 = 0;
  lVar2 = lVar7 - lVar6;
  if (lVar2 != 0) {
    uVar5 = lVar2 / 0xd0;
    if (0x13b13b13b13b13b < uVar5) {
      FUN_10863ad34();
      goto LAB_108682e24;
    }
    pppuVar4 = &ppuStack_1c0;
    func_0x00010863adb0();
    ppuStack_1c0 = pppuVar4 + uVar5 * 0x1a;
    ppuStack_90 = &ppuStack_78;
    ppuStack_88 = appuStack_70;
    uStack_80 = 0;
    ppuStack_1d0 = pppuVar4;
    ppuStack_1c8 = pppuVar4;
    ppuStack_98 = &ppuStack_1c0;
    ppuStack_78 = pppuVar4;
    for (lVar6 = lVar6 + 0x58; appuStack_70[0] = pppuVar4, lVar6 + -0x58 != lVar7;
        lVar6 = lVar6 + 0xd0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (pppuVar4,lVar6 + -0x58);
      func_0x000107c27994(pppuVar4 + 3,lVar6 + -0x40);
      uVar1 = *(undefined4 *)(lVar6 + -0x28);
      *(undefined1 *)(pppuVar4 + 7) = 0;
      *(undefined4 *)(pppuVar4 + 6) = uVar1;
      *(undefined1 *)(pppuVar4 + 0xf) = 0;
      if (*(char *)(lVar6 + 0x20) == '\x01') {
        ppuVar8 = *(undefined8 ***)(lVar6 + -0x20);
        ppuVar10 = *(undefined8 ***)(lVar6 + -8);
        ppuVar9 = *(undefined8 ***)(lVar6 + -0x10);
        pppuVar4[8] = *(undefined8 ***)(lVar6 + -0x18);
        pppuVar4[7] = ppuVar8;
        pppuVar4[10] = ppuVar10;
        pppuVar4[9] = ppuVar9;
        func_0x000107c27994(pppuVar4 + 0xb,lVar6);
        *(undefined4 *)(pppuVar4 + 0xe) = *(undefined4 *)(lVar6 + 0x18);
        *(undefined1 *)(pppuVar4 + 0xf) = 1;
      }
      *(undefined1 *)(pppuVar4 + 0x10) = 0;
      *(undefined1 *)(pppuVar4 + 0x19) = 0;
      if (*(char *)(lVar6 + 0x70) == '\x01') {
        ppuVar9 = *(undefined8 ***)(lVar6 + 0x30);
        ppuVar8 = *(undefined8 ***)(lVar6 + 0x28);
        ppuVar11 = *(undefined8 ***)(lVar6 + 0x40);
        ppuVar10 = *(undefined8 ***)(lVar6 + 0x38);
        *(undefined1 *)(pppuVar4 + 0x14) = *(undefined1 *)(lVar6 + 0x48);
        pppuVar4[0x11] = ppuVar9;
        pppuVar4[0x10] = ppuVar8;
        pppuVar4[0x13] = ppuVar11;
        pppuVar4[0x12] = ppuVar10;
        func_0x000107c279d4(pppuVar4 + 0x15,lVar6 + 0x50);
        *(undefined1 *)(pppuVar4 + 0x19) = 1;
      }
      pppuVar4 = (undefined8 ***)(appuStack_70[0] + 0x1a);
    }
    uStack_80 = 1;
    FUN_10863aee8(&ppuStack_98);
    ppuStack_1c8 = pppuVar4;
  }
  uStack_a0 = 1;
  func_0x000108685d28(&ppuStack_a8);
  ppuStack_a8 = &ppuStack_1b8;
  ppuStack_1b8 = (undefined8 ***)0x0;
  ppuStack_1a8 = (undefined8 ***)0x0;
  ppuStack_1b0 = (undefined8 ***)0x0;
  lVar6 = param_2[0xa0];
  lVar7 = param_2[0xa1];
  uStack_a0 = 0;
  lVar2 = lVar7 - lVar6;
  if (lVar2 != 0) {
    uVar5 = lVar2 >> 5;
    if (uVar5 >> 0x3b != 0) {
      FUN_10863b148();
LAB_108682e24:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x108682e28);
      (*pcVar3)();
    }
    pppuVar4 = &ppuStack_1a8;
    func_0x00010863b1c4();
    ppuStack_1a8 = pppuVar4 + uVar5 * 4;
    ppuStack_90 = &ppuStack_78;
    ppuStack_88 = appuStack_70;
    uStack_80 = 0;
    ppuStack_1b8 = pppuVar4;
    ppuStack_1b0 = pppuVar4;
    ppuStack_98 = &ppuStack_1a8;
    ppuStack_78 = pppuVar4;
    for (; appuStack_70[0] = pppuVar4, lVar6 != lVar7; lVar6 = lVar6 + 0x20) {
      func_0x000108685d50(pppuVar4,lVar6);
      pppuVar4 = (undefined8 ***)(appuStack_70[0] + 4);
    }
    uStack_80 = 1;
    FUN_10863b290(&ppuStack_98);
    ppuStack_1b0 = pppuVar4;
  }
  uStack_a0 = 1;
  func_0x000108685d6c(&ppuStack_a8);
  uStack_1a0 = *(undefined4 *)(param_2 + 0xa3);
  func_0x000107c27994(auStack_198,param_2 + 0xa4);
  func_0x000108685d94(auStack_180,param_2 + 0xa7);
  func_0x000108685f04(auStack_168,param_2 + 0xaa);
  func_0x0001086862e4(auStack_150,param_2 + 0xad);
  func_0x0001086864f4(auStack_138,param_2 + 0xb0);
  uStack_120 = param_2[0xb3];
  uStack_118 = (undefined5)param_2[0xb4];
  uStack_113 = (undefined3)*(undefined8 *)((long)param_2 + 0x5a5);
  uStack_110 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x5a5) >> 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_108,param_2 + 0xb6);
  func_0x000107c279ac(auStack_f0,param_2 + 0xb9);
  uStack_d0 = param_2[0xbd];
  uStack_d8 = param_2[0xbc];
  func_0x0001086866c4(auStack_c8,param_2 + 0xbe);
  uStack_b0 = *(undefined2 *)(param_2 + 0xc1);
  func_0x000107c29394(param_1 + 0xe0,3);
  func_0x000107c32164();
  func_0x000107c32158();
  FUN_1086f1ea0(param_1 + 0x1b8,&uStack_6b8);
  func_0x000108686860(&uStack_6b8);
  return;
}



/* Entry: 108682fa4; end: 10868300b;  */

void FUN_108682fa4(long param_1)

{
  long unaff_x19;
  undefined1 auStack_38 [24];
  
  func_0x000107c3219c();
  func_0x000107c29394(param_1 + 0xe0,4);
  func_0x000107c32140();
  func_0x0001008530e0();
  func_0x000107c27994();
  func_0x000107c29394(unaff_x19 + 0xe0,4);
  func_0x000107c32164();
  func_0x000107c32158();
  func_0x0001008530ec();
  FUN_1086f1fb0();
  func_0x000107c27914(auStack_38);
  return;
}



/* Entry: 10868300c; end: 108683077;  */

void FUN_10868300c(long param_1)

{
  long unaff_x19;
  undefined1 auStack_458 [1064];
  
  func_0x000107c3219c();
  func_0x000107c29394(param_1 + 0xe0,7);
  func_0x000107c32140();
  func_0x0001008530e0();
  func_0x000104be07d0();
  func_0x000107c29394(unaff_x19 + 0xe0,7);
  func_0x000107c32164();
  func_0x000107c32158();
  func_0x0001008530ec();
  FUN_1086f20cc();
  func_0x0001006b74f4(auStack_458);
  return;
}



/* Entry: 108683078; end: 10868307f;  */

code ** FUN_108683078(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long *plVar2;
  code **ppcVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined **ppuVar7;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  plVar2 = (long *)(param_1 + 0x1b8);
  ppcVar3 = &pcStack_a0;
  func_0x000107c329b0();
  lVar4 = *plVar2;
  uStack_48 = extraout_x8;
  func_0x0001086f2dec();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c329a8();
    } while (extraout_w10 != 0);
  }
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107c329a8();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107c28150();
  lVar4 = *(long *)(lVar4 + 0x10);
  func_0x000100853218();
  ppuVar7 = ppuStack_98;
  pcVar6 = pcStack_a0;
  lVar5 = *(long *)(lVar4 + 0x70);
  pcStack_80 = FUN_1086f2d38;
  ppuStack_78 = &PTR_FUN_110a66de0;
  pcStack_a0 = (code *)0x0;
  ppuStack_98 = (undefined **)0x0;
  ppuStack_68 = ppuVar7;
  pcStack_70 = pcVar6;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  plStack_50 = plVar2;
  func_0x000107c28154(lVar4 + 0x48,&pcStack_80);
  func_0x0001086f2dfc(ppuStack_78);
  func_0x000100853290();
  if (lVar5 == 0) {
    func_0x000100853298();
    pcStack_80 = pcVar6;
    ppuStack_78 = ppuVar7;
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c329a8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c329dc();
    (*extraout_x8_02)();
    func_0x000107c27e74(&pcStack_80);
  }
  FUN_1086f26cc();
  func_0x000107c3299c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&pcStack_80);
    FUN_1086f26cc(&pcStack_a0);
    func_0x0001086f2e08();
    func_0x000107c329e0();
    func_0x000107c27a64();
    puVar1 = (undefined1 *)ppcVar3;
    func_0x000107c3221c();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return (code **)(undefined1 *)ppcVar3;
  }
  return ppcVar3;
}



/* Entry: 108683080; end: 10868310b;  */

void FUN_108683080(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long unaff_x19;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [40];
  undefined4 uStack_38;
  
  func_0x000107c321dc();
  func_0x000107c29394();
  func_0x000107c32140();
  func_0x000108686d68(auStack_68,param_2);
  uStack_38 = param_3;
  func_0x000107c29394(unaff_x19 + 0xe0,0xc);
  func_0x000107c32164();
  func_0x000107c32158();
  func_0x0001008530ec();
  FUN_1086f1a0c();
  func_0x000107c279dc(auStack_60);
  return;
}



/* Entry: 10868310c; end: 108683113;  */

void FUN_10868310c(long param_1,undefined8 param_2,undefined4 param_3)

{
  long unaff_x19;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [40];
  undefined4 uStack_38;
  
  func_0x000107c321dc(param_1 + -0x18);
  func_0x000107c29394();
  func_0x000107c32140();
  func_0x000108686d68(auStack_68,param_2);
  uStack_38 = param_3;
  func_0x000107c29394(unaff_x19 + 0xe0,0xc);
  func_0x000107c32164();
  func_0x000107c32158();
  func_0x0001008530ec();
  FUN_1086f1a0c();
  func_0x000107c279dc(auStack_60);
  return;
}



/* Entry: 108683114; end: 108683597;  */

void FUN_108683114(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  ulong extraout_x9;
  ulong uVar9;
  ulong extraout_x9_00;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *extraout_x10;
  ulong uVar13;
  ulong uVar14;
  ulong extraout_x11;
  long unaff_x19;
  long *plVar15;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined1 auStack_c8 [96];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  func_0x000107c321dc();
  func_0x000107c29394();
  func_0x000107c32140();
  func_0x0001006a05a8(auStack_160,param_2);
  func_0x000108687044(auStack_148,param_3);
  uVar6 = *(ulong *)(unaff_x19 + 0xc0);
  if (((uVar6 != 0) && (*(long *)(unaff_x19 + 0xd0) != 0)) &&
     (plVar15 = (long *)**(undefined8 **)(unaff_x19 + 0xb8), plVar15 != (long *)0x0)) {
    do {
      while( true ) {
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_1086831c8;
        uVar10 = plVar15[1];
        if (uVar10 == 0) break;
        if ((uVar6 & uVar6 - 1) == 0) {
          if ((uVar10 & uVar6 - 1) != 0) goto LAB_1086831c8;
        }
        else {
          if (uVar10 < uVar6) goto LAB_1086831c8;
          uVar7 = 0;
          if (uVar6 != 0) {
            uVar7 = uVar10 / uVar6;
          }
          if (uVar10 != uVar7 * uVar6) goto LAB_1086831c8;
        }
      }
    } while (plVar15[2] != 0);
    goto LAB_108683510;
  }
LAB_1086831c8:
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_d0 = 0;
  FUN_108687758(auStack_c8,&uStack_130);
  uVar6 = uStack_d0;
  uVar10 = *(ulong *)(unaff_x19 + 0xc0);
  if (uVar10 != 0) {
    uVar7 = uVar10 - 1;
    if ((uVar10 & uVar7) == 0) {
      param_2 = uVar7 & uStack_d0;
    }
    else {
      param_2 = uStack_d0;
      if (uVar10 <= uStack_d0) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uStack_d0 / uVar10;
        }
        param_2 = uStack_d0 - uVar8 * uVar10;
      }
    }
    plVar15 = *(long **)(*(long *)(unaff_x19 + 0xb8) + param_2 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_10868327c;
          uVar8 = plVar15[1];
          if (uVar8 != uStack_d0) break;
          if (plVar15[2] == uStack_d0) goto LAB_1086834f8;
        }
        if ((uVar10 & uVar7) == 0) {
          uVar8 = uVar8 & uVar7;
        }
        else if (uVar10 <= uVar8) {
          uVar9 = 0;
          if (uVar10 != 0) {
            uVar9 = uVar8 / uVar10;
          }
          uVar8 = uVar8 - uVar9 * uVar10;
        }
      } while (uVar8 == param_2);
    }
  }
LAB_10868327c:
  plVar15 = (long *)0x78;
  __Znwm();
  plVar1 = (long *)(unaff_x19 + 200);
  uStack_58 = 1;
  *plVar15 = 0;
  plVar15[1] = uVar6;
  plVar15[2] = uVar6;
  plStack_68 = plVar15;
  plStack_60 = plVar1;
  FUN_108687758(plVar15 + 3,auStack_c8);
  if ((uVar10 == 0) ||
     (*(float *)(unaff_x19 + 0xd8) * (float)uVar10 < (float)(*(long *)(unaff_x19 + 0xd0) + 1))) {
    bVar3 = 2 < uVar10;
    bVar4 = uVar10 == 3;
    func_0x000108687d14(uVar10 << 1);
    uVar7 = extraout_x8;
    if (!bVar3 || bVar4) {
      uVar7 = extraout_x9;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    uVar10 = *(ulong *)(unaff_x19 + 0xc0);
    if (uVar10 < uVar7) {
LAB_108683324:
      if (uVar7 >> 0x3d != 0) {
        func_0x000104bd35f4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x108683554);
        (*pcVar2)();
      }
      lVar5 = uVar7 << 3;
      __Znwm(lVar5);
      FUN_108687788(unaff_x19 + 0xb8,lVar5);
      *(ulong *)(unaff_x19 + 0xc0) = uVar7;
      lVar5 = *(long *)(unaff_x19 + 0xb8);
      for (uVar10 = 0; uVar7 != uVar10; uVar10 = uVar10 + 1) {
        *(undefined8 *)(lVar5 + uVar10 * 8) = 0;
      }
      plVar11 = (long *)*plVar1;
      uVar10 = uVar7;
      if (plVar11 != (long *)0x0) {
        uVar13 = plVar11[1];
        uVar9 = uVar7 - 1;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar13 / uVar7;
        }
        uVar14 = uVar13;
        if (uVar7 <= uVar13) {
          uVar14 = uVar13 - uVar8 * uVar7;
        }
        if ((uVar7 & uVar9) == 0) {
          uVar14 = uVar13 & uVar9;
        }
        *(long **)(lVar5 + uVar14 * 8) = plVar1;
        while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
          uVar8 = plVar11[1];
          if ((uVar7 & uVar9) == 0) {
            uVar8 = uVar8 & uVar9;
          }
          else if (uVar7 <= uVar8) {
            uVar13 = 0;
            if (uVar7 != 0) {
              uVar13 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar13 * uVar7;
          }
          if (uVar8 != uVar14) {
            if (*(long *)(lVar5 + uVar8 * 8) == 0) {
              *(long **)(lVar5 + uVar8 * 8) = plVar12;
              uVar14 = uVar8;
            }
            else {
              func_0x000108687bb4();
              lVar5 = extraout_x8_00;
              uVar9 = extraout_x9_00;
              plVar11 = extraout_x10;
              uVar14 = extraout_x11;
            }
          }
        }
      }
    }
    else if (uVar7 < uVar10) {
      uVar8 = (ulong)((float)*(ulong *)(unaff_x19 + 0xd0) / *(float *)(unaff_x19 + 0xd8));
      if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x000108687b94();
      }
      if (uVar7 <= uVar8) {
        uVar7 = uVar8;
      }
      if (uVar7 < uVar10) {
        if (uVar7 != 0) goto LAB_108683324;
        FUN_108687788(unaff_x19 + 0xb8,0);
        *(undefined8 *)(unaff_x19 + 0xc0) = 0;
        uVar10 = 0;
      }
      else {
        uVar10 = *(ulong *)(unaff_x19 + 0xc0);
      }
    }
    if ((uVar10 & uVar10 - 1) == 0) {
      param_2 = uVar10 - 1 & uVar6;
    }
    else {
      param_2 = uVar6;
      if (uVar10 <= uVar6) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar6 / uVar10;
        }
        param_2 = uVar6 - uVar7 * uVar10;
      }
    }
  }
  lVar5 = *(long *)(unaff_x19 + 0xb8);
  plVar11 = *(long **)(lVar5 + param_2 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar15 = *plVar1;
    *plVar1 = (long)plVar15;
    *(long **)(lVar5 + param_2 * 8) = plVar1;
    if (*plVar15 != 0) {
      uVar6 = *(ulong *)(*plVar15 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar6 = uVar6 & uVar10 - 1;
      }
      else if (uVar10 <= uVar6) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar6 / uVar10;
        }
        uVar6 = uVar6 - uVar7 * uVar10;
      }
      *(long **)(lVar5 + uVar6 * 8) = plVar15;
    }
  }
  else {
    *plVar15 = *plVar11;
    *plVar11 = (long)plVar15;
  }
  plStack_68 = (long *)0x0;
  *(long *)(unaff_x19 + 0xd0) = *(long *)(unaff_x19 + 0xd0) + 1;
  FUN_1086877a0(&plStack_68);
LAB_1086834f8:
  FUN_1086840c4(auStack_c8);
  FUN_1086840c4(&uStack_130);
  func_0x000107c28298(plVar15 + 0xc);
LAB_108683510:
  func_0x0001086872cc(plVar15 + 9);
  FUN_1086f1180(plVar15 + 3,auStack_160);
  FUN_10868713c(auStack_160);
  func_0x000108687c80();
  return;
}



/* Entry: 108683598; end: 10868359f;  */

void FUN_108683598(long param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  ulong extraout_x9;
  ulong uVar9;
  ulong extraout_x9_00;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *extraout_x10;
  ulong uVar13;
  ulong uVar14;
  ulong extraout_x11;
  long unaff_x19;
  long *plVar15;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined1 auStack_c8 [96];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  func_0x000107c321dc(param_1 + -0x80);
  func_0x000107c29394();
  func_0x000107c32140();
  func_0x0001006a05a8(auStack_160,param_2);
  func_0x000108687044(auStack_148,param_3);
  uVar6 = *(ulong *)(unaff_x19 + 0xc0);
  if (((uVar6 != 0) && (*(long *)(unaff_x19 + 0xd0) != 0)) &&
     (plVar15 = (long *)**(undefined8 **)(unaff_x19 + 0xb8), plVar15 != (long *)0x0)) {
    do {
      while( true ) {
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_1086831c8;
        uVar10 = plVar15[1];
        if (uVar10 == 0) break;
        if ((uVar6 & uVar6 - 1) == 0) {
          if ((uVar10 & uVar6 - 1) != 0) goto LAB_1086831c8;
        }
        else {
          if (uVar10 < uVar6) goto LAB_1086831c8;
          uVar7 = 0;
          if (uVar6 != 0) {
            uVar7 = uVar10 / uVar6;
          }
          if (uVar10 != uVar7 * uVar6) goto LAB_1086831c8;
        }
      }
    } while (plVar15[2] != 0);
    goto LAB_108683510;
  }
LAB_1086831c8:
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_d0 = 0;
  FUN_108687758(auStack_c8,&uStack_130);
  uVar6 = uStack_d0;
  uVar10 = *(ulong *)(unaff_x19 + 0xc0);
  if (uVar10 != 0) {
    uVar7 = uVar10 - 1;
    if ((uVar10 & uVar7) == 0) {
      param_2 = uVar7 & uStack_d0;
    }
    else {
      param_2 = uStack_d0;
      if (uVar10 <= uStack_d0) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uStack_d0 / uVar10;
        }
        param_2 = uStack_d0 - uVar8 * uVar10;
      }
    }
    plVar15 = *(long **)(*(long *)(unaff_x19 + 0xb8) + param_2 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_10868327c;
          uVar8 = plVar15[1];
          if (uVar8 != uStack_d0) break;
          if (plVar15[2] == uStack_d0) goto LAB_1086834f8;
        }
        if ((uVar10 & uVar7) == 0) {
          uVar8 = uVar8 & uVar7;
        }
        else if (uVar10 <= uVar8) {
          uVar9 = 0;
          if (uVar10 != 0) {
            uVar9 = uVar8 / uVar10;
          }
          uVar8 = uVar8 - uVar9 * uVar10;
        }
      } while (uVar8 == param_2);
    }
  }
LAB_10868327c:
  plVar15 = (long *)0x78;
  __Znwm();
  plVar1 = (long *)(unaff_x19 + 200);
  uStack_58 = 1;
  *plVar15 = 0;
  plVar15[1] = uVar6;
  plVar15[2] = uVar6;
  plStack_68 = plVar15;
  plStack_60 = plVar1;
  FUN_108687758(plVar15 + 3,auStack_c8);
  if ((uVar10 == 0) ||
     (*(float *)(unaff_x19 + 0xd8) * (float)uVar10 < (float)(*(long *)(unaff_x19 + 0xd0) + 1))) {
    bVar3 = 2 < uVar10;
    bVar4 = uVar10 == 3;
    func_0x000108687d14(uVar10 << 1);
    uVar7 = extraout_x8;
    if (!bVar3 || bVar4) {
      uVar7 = extraout_x9;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    uVar10 = *(ulong *)(unaff_x19 + 0xc0);
    if (uVar10 < uVar7) {
LAB_108683324:
      if (uVar7 >> 0x3d != 0) {
        func_0x000104bd35f4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x108683554);
        (*pcVar2)();
      }
      lVar5 = uVar7 << 3;
      __Znwm(lVar5);
      FUN_108687788(unaff_x19 + 0xb8,lVar5);
      *(ulong *)(unaff_x19 + 0xc0) = uVar7;
      lVar5 = *(long *)(unaff_x19 + 0xb8);
      for (uVar10 = 0; uVar7 != uVar10; uVar10 = uVar10 + 1) {
        *(undefined8 *)(lVar5 + uVar10 * 8) = 0;
      }
      plVar11 = (long *)*plVar1;
      uVar10 = uVar7;
      if (plVar11 != (long *)0x0) {
        uVar13 = plVar11[1];
        uVar9 = uVar7 - 1;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar13 / uVar7;
        }
        uVar14 = uVar13;
        if (uVar7 <= uVar13) {
          uVar14 = uVar13 - uVar8 * uVar7;
        }
        if ((uVar7 & uVar9) == 0) {
          uVar14 = uVar13 & uVar9;
        }
        *(long **)(lVar5 + uVar14 * 8) = plVar1;
        while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
          uVar8 = plVar11[1];
          if ((uVar7 & uVar9) == 0) {
            uVar8 = uVar8 & uVar9;
          }
          else if (uVar7 <= uVar8) {
            uVar13 = 0;
            if (uVar7 != 0) {
              uVar13 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar13 * uVar7;
          }
          if (uVar8 != uVar14) {
            if (*(long *)(lVar5 + uVar8 * 8) == 0) {
              *(long **)(lVar5 + uVar8 * 8) = plVar12;
              uVar14 = uVar8;
            }
            else {
              func_0x000108687bb4();
              lVar5 = extraout_x8_00;
              uVar9 = extraout_x9_00;
              plVar11 = extraout_x10;
              uVar14 = extraout_x11;
            }
          }
        }
      }
    }
    else if (uVar7 < uVar10) {
      uVar8 = (ulong)((float)*(ulong *)(unaff_x19 + 0xd0) / *(float *)(unaff_x19 + 0xd8));
      if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x000108687b94();
      }
      if (uVar7 <= uVar8) {
        uVar7 = uVar8;
      }
      if (uVar7 < uVar10) {
        if (uVar7 != 0) goto LAB_108683324;
        FUN_108687788(unaff_x19 + 0xb8,0);
        *(undefined8 *)(unaff_x19 + 0xc0) = 0;
        uVar10 = 0;
      }
      else {
        uVar10 = *(ulong *)(unaff_x19 + 0xc0);
      }
    }
    if ((uVar10 & uVar10 - 1) == 0) {
      param_2 = uVar10 - 1 & uVar6;
    }
    else {
      param_2 = uVar6;
      if (uVar10 <= uVar6) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar6 / uVar10;
        }
        param_2 = uVar6 - uVar7 * uVar10;
      }
    }
  }
  lVar5 = *(long *)(unaff_x19 + 0xb8);
  plVar11 = *(long **)(lVar5 + param_2 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar15 = *plVar1;
    *plVar1 = (long)plVar15;
    *(long **)(lVar5 + param_2 * 8) = plVar1;
    if (*plVar15 != 0) {
      uVar6 = *(ulong *)(*plVar15 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar6 = uVar6 & uVar10 - 1;
      }
      else if (uVar10 <= uVar6) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar6 / uVar10;
        }
        uVar6 = uVar6 - uVar7 * uVar10;
      }
      *(long **)(lVar5 + uVar6 * 8) = plVar15;
    }
  }
  else {
    *plVar15 = *plVar11;
    *plVar11 = (long)plVar15;
  }
  plStack_68 = (long *)0x0;
  *(long *)(unaff_x19 + 0xd0) = *(long *)(unaff_x19 + 0xd0) + 1;
  FUN_1086877a0(&plStack_68);
LAB_1086834f8:
  FUN_1086840c4(auStack_c8);
  FUN_1086840c4(&uStack_130);
  func_0x000107c28298(plVar15 + 0xc);
LAB_108683510:
  func_0x0001086872cc(plVar15 + 9);
  FUN_1086f1180(plVar15 + 3,auStack_160);
  FUN_10868713c(auStack_160);
  func_0x000108687c80();
  return;
}



/* Entry: 1086835a0; end: 108683657;  */

void FUN_1086835a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long unaff_x19;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c321dc();
  func_0x000107c29394();
  func_0x000107c32140();
  func_0x000107c27994(auStack_a8,param_2);
  uStack_80 = param_4[1];
  uStack_88 = *param_4;
  uStack_90 = param_3;
  FUN_108687164(auStack_78,param_4 + 2);
  uStack_48 = param_4[8];
  uStack_50 = param_4[7];
  func_0x000107c29394(unaff_x19 + 0xe0,0xd);
  func_0x000107c32164();
  func_0x000107c32158();
  func_0x0001008530ec();
  FUN_1086f2318();
  func_0x0001086871e4(auStack_a8);
  return;
}



/* Entry: 108683658; end: 10868365f;  */

void FUN_108683658(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long unaff_x19;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c321dc(param_1 + -0x80);
  func_0x000107c29394();
  func_0x000107c32140();
  func_0x000107c27994(auStack_a8,param_2);
  uStack_80 = param_4[1];
  uStack_88 = *param_4;
  uStack_90 = param_3;
  FUN_108687164(auStack_78,param_4 + 2);
  uStack_48 = param_4[8];
  uStack_50 = param_4[7];
  func_0x000107c29394(unaff_x19 + 0xe0,0xd);
  func_0x000107c32164();
  func_0x000107c32158();
  func_0x0001008530ec();
  FUN_1086f2318();
  func_0x0001086871e4(auStack_a8);
  return;
}



/* Entry: 108683660; end: 108683e03;  */

void FUN_108683660(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar6;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar7;
  code *extraout_x10;
  code *extraout_x10_00;
  ulong uVar8;
  ulong extraout_x11;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong unaff_x20;
  undefined8 *puVar14;
  ulong unaff_x22;
  ulong unaff_x24;
  long lVar15;
  long unaff_x28;
  undefined8 *puVar16;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte bStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined1 uStack_70;
  
  (**(code **)(**(long **)(param_1 + 0x158) + 0x18))(*(long **)(param_1 + 0x158),param_1 + 0x108,1);
  func_0x000107c29394(param_1 + 0xe0,2);
  func_0x000108687d3c();
  puVar16 = (undefined8 *)(unaff_x28 + 0xa0);
  uVar7 = *(ulong *)(unaff_x28 + 0x198);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  bStack_88 = 0;
  puVar2 = (undefined8 *)*puVar16;
  while (puVar2 != (undefined8 *)0x0) {
    lVar15 = unaff_x20 - unaff_x22;
    if (uVar7 <= (ulong)(lVar15 / 0x4a8)) break;
    FUN_1086f02dc(&uStack_520,puVar2 + 5);
    FUN_1086878a8(puVar2 + 0x98);
    func_0x000108687808(&uStack_9d0,&uStack_520);
    uStack_550 = puVar2[0x99];
    uStack_558 = puVar2[0x98];
    uStack_548 = puVar2[0x9a];
    puVar2[0x99] = 0;
    puVar2[0x9a] = 0;
    puVar2[0x98] = 0;
    uStack_538 = puVar2[0x9c];
    uStack_540 = puVar2[0x9b];
    uStack_530 = puVar2[0x9d];
    uVar6 = *(ulong *)(param_1 + 0x98);
    uVar5 = puVar2[1];
    uVar8 = uVar6 - 1;
    if ((uVar6 & uVar8) == 0) {
      uVar5 = uVar8 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar10 = 0;
      if (uVar6 != 0) {
        uVar10 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar10 * uVar6;
    }
    puVar14 = (undefined8 *)*puVar2;
    lVar9 = *(long *)(param_1 + 0x90);
    puVar12 = *(undefined8 **)(lVar9 + uVar5 * 8);
    do {
      puVar11 = puVar12;
      puVar12 = (undefined8 *)*puVar11;
    } while ((undefined8 *)*puVar11 != puVar2);
    puVar12 = puVar14;
    if (puVar11 == puVar16) {
LAB_1086837c4:
      if (puVar14 == (undefined8 *)0x0) {
LAB_1086837fc:
        *(undefined8 *)(lVar9 + uVar5 * 8) = 0;
        puVar12 = (undefined8 *)*puVar2;
        goto LAB_108683804;
      }
      uVar10 = puVar14[1];
      if ((uVar6 & uVar8) == 0) {
        uVar13 = uVar10 & uVar8;
      }
      else {
        uVar13 = uVar10;
        if (uVar6 <= uVar10) {
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = uVar10 / uVar6;
          }
          uVar13 = uVar10 - uVar13 * uVar6;
        }
      }
      if (uVar13 != uVar5) goto LAB_1086837fc;
LAB_10868380c:
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar8 * uVar6;
      }
      if (uVar10 != uVar5) {
        *(undefined8 **)(lVar9 + uVar10 * 8) = puVar11;
        puVar12 = (undefined8 *)*puVar2;
      }
    }
    else {
      uVar10 = puVar11[1];
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar13 = 0;
        if (uVar6 != 0) {
          uVar13 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar13 * uVar6;
      }
      if (uVar10 != uVar5) goto LAB_1086837c4;
LAB_108683804:
      if (puVar12 != (undefined8 *)0x0) {
        uVar10 = puVar12[1];
        goto LAB_10868380c;
      }
    }
    *puVar11 = puVar12;
    *puVar2 = 0;
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + -1;
    uStack_70 = 1;
    puStack_80 = puVar2;
    puStack_78 = puVar16;
    func_0x000108687cd8();
    FUN_10868745c();
    func_0x000108684fe8(&uStack_520);
    if (unaff_x20 < unaff_x24) {
      func_0x0001086877dc(unaff_x20,&uStack_9d0);
      uVar13 = unaff_x22;
      uVar10 = unaff_x20;
    }
    else {
      if (0x36fad87bb46716 < lVar15 / 0x4a8 + 1U) {
        func_0x000108687b5c();
        FUN_10868789c();
        goto LAB_108683d80;
      }
      func_0x000108687d00();
      uVar5 = extraout_x8;
      if (0x1b7d6c3dda338a < extraout_x9) {
        uVar5 = extraout_x11;
      }
      if (uVar5 == 0) {
        lVar9 = 0;
      }
      else {
        if (extraout_x11 < uVar5) {
          func_0x000108687b5c();
          func_0x000104bd35f4();
          goto LAB_108683d80;
        }
        lVar9 = uVar5 * 0x4a8;
        __Znwm();
      }
      uVar10 = lVar9 + lVar15;
      func_0x0001086877dc(uVar10,&uStack_9d0);
      uVar13 = uVar10 + (lVar15 / -0x4a8) * 0x4a8;
      uVar8 = uVar13;
      for (uVar6 = unaff_x22; uVar4 = unaff_x22, uVar6 != unaff_x20; uVar6 = uVar6 + 0x4a8) {
        func_0x0001086877dc(uVar8,uVar6);
        uVar8 = uVar8 + 0x4a8;
      }
      for (; uVar4 != unaff_x20; uVar4 = uVar4 + 0x4a8) {
        func_0x0001086878e4();
      }
      unaff_x24 = lVar9 + uVar5 * 0x4a8;
      if (unaff_x22 != 0) {
        __ZdlPv(unaff_x22);
      }
    }
    unaff_x20 = uVar10 + 0x4a8;
    func_0x0001086878e4(&uStack_9d0);
    puVar2 = puVar14;
    unaff_x22 = uVar13;
  }
  func_0x000108687b5c();
  if (*(long *)(param_1 + 0xa8) != 0) {
    bStack_88 = 1;
  }
  if (unaff_x22 != unaff_x20) {
    func_0x000108687cec(unaff_x20 - unaff_x22);
    (*extraout_x10)();
  }
  for (; bVar1 = bStack_88, unaff_x22 != unaff_x20; unaff_x22 = unaff_x22 + 0x4a8) {
    func_0x000108687ca8();
    FUN_1086f1b70(param_1 + 0x1b8,unaff_x22);
  }
  func_0x00010868790c(&uStack_a0);
  func_0x000107c29394(param_1 + 0xe0,9);
  func_0x000108687d3c();
  puVar16 = (undefined8 *)(unaff_x28 + 0x168);
  uVar7 = *(ulong *)(unaff_x28 + 0x238);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  bStack_88 = 0;
  puVar2 = (undefined8 *)*puVar16;
  while (puVar2 != (undefined8 *)0x0) {
    lVar15 = unaff_x20 - unaff_x22;
    if (uVar7 <= (ulong)(lVar15 / 0x60)) break;
    FUN_1086f11d8(&uStack_520,puVar2 + 3);
    FUN_1086878a8(puVar2 + 9);
    uStack_9c8 = uStack_518;
    uStack_9d0 = uStack_520;
    uStack_9c0 = uStack_510;
    uStack_510 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_9b0 = uStack_500;
    uStack_9b8 = uStack_508;
    uStack_9a8 = uStack_4f8;
    uStack_500 = 0;
    uStack_4f8 = 0;
    uStack_508 = 0;
    uStack_998 = puVar2[10];
    uStack_9a0 = puVar2[9];
    uStack_990 = puVar2[0xb];
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    uStack_978 = puVar2[0xe];
    uStack_980 = puVar2[0xd];
    uStack_988 = puVar2[0xc];
    uVar6 = *(ulong *)(param_1 + 0xc0);
    uVar8 = uVar6 - 1;
    uVar5 = puVar2[1];
    if ((uVar6 & uVar8) == 0) {
      uVar5 = uVar8 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar10 = 0;
      if (uVar6 != 0) {
        uVar10 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar10 * uVar6;
    }
    puVar14 = (undefined8 *)*puVar2;
    lVar9 = *(long *)(param_1 + 0xb8);
    puVar12 = *(undefined8 **)(lVar9 + uVar5 * 8);
    do {
      puVar11 = puVar12;
      puVar12 = (undefined8 *)*puVar11;
    } while ((undefined8 *)*puVar11 != puVar2);
    puVar12 = puVar14;
    if (puVar11 == puVar16) {
LAB_108683b28:
      if (puVar14 == (undefined8 *)0x0) {
LAB_108683b60:
        *(undefined8 *)(lVar9 + uVar5 * 8) = 0;
        puVar12 = (undefined8 *)*puVar2;
        goto LAB_108683b68;
      }
      uVar10 = puVar14[1];
      if ((uVar6 & uVar8) == 0) {
        uVar13 = uVar10 & uVar8;
      }
      else {
        uVar13 = uVar10;
        if (uVar6 <= uVar10) {
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = uVar10 / uVar6;
          }
          uVar13 = uVar10 - uVar13 * uVar6;
        }
      }
      if (uVar13 != uVar5) goto LAB_108683b60;
LAB_108683b70:
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar8 * uVar6;
      }
      if (uVar10 != uVar5) {
        *(undefined8 **)(lVar9 + uVar10 * 8) = puVar11;
        puVar12 = (undefined8 *)*puVar2;
      }
    }
    else {
      uVar10 = puVar11[1];
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar13 = 0;
        if (uVar6 != 0) {
          uVar13 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar13 * uVar6;
      }
      if (uVar10 != uVar5) goto LAB_108683b28;
LAB_108683b68:
      if (puVar12 != (undefined8 *)0x0) {
        uVar10 = puVar12[1];
        goto LAB_108683b70;
      }
    }
    *puVar11 = puVar12;
    *puVar2 = 0;
    *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + -1;
    uStack_70 = 1;
    puStack_80 = puVar2;
    puStack_78 = puVar16;
    func_0x000108687cd8();
    func_0x0001086877a0();
    FUN_10868713c(&uStack_520);
    if (unaff_x20 < unaff_x24) {
      func_0x000108687948(unaff_x20,&uStack_9d0);
      uVar13 = unaff_x22;
      uVar10 = unaff_x20;
    }
    else {
      if (0x2aaaaaaaaaaaaaa < lVar15 / 0x60 + 1U) {
        func_0x000108687b5c();
        FUN_108687990();
LAB_108683d80:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x108683d84);
        (*pcVar3)();
      }
      func_0x000108687d00();
      uVar5 = extraout_x8_00;
      if (0x155555555555554 < extraout_x9_00) {
        uVar5 = 0x2aaaaaaaaaaaaaa;
      }
      if (uVar5 == 0) {
        lVar9 = 0;
      }
      else {
        if (0x2aaaaaaaaaaaaaa < uVar5) {
          func_0x000108687b5c();
          func_0x000104bd35f4();
          goto LAB_108683d80;
        }
        lVar9 = uVar5 * 0x60;
        __Znwm();
      }
      uVar10 = lVar9 + lVar15;
      func_0x000108687948(uVar10,&uStack_9d0);
      uVar13 = uVar10 + (lVar15 / -0x60) * 0x60;
      uVar8 = uVar13;
      for (uVar6 = unaff_x22; uVar4 = unaff_x22, uVar6 != unaff_x20; uVar6 = uVar6 + 0x60) {
        func_0x000108687948(uVar8,uVar6);
        uVar8 = uVar8 + 0x60;
      }
      for (; uVar4 != unaff_x20; uVar4 = uVar4 + 0x60) {
        FUN_10868799c();
      }
      unaff_x24 = lVar9 + uVar5 * 0x60;
      if (unaff_x22 != 0) {
        __ZdlPv(unaff_x22);
      }
    }
    unaff_x20 = uVar10 + 0x60;
    FUN_10868799c(&uStack_9d0);
    puVar2 = puVar14;
    unaff_x22 = uVar13;
  }
  func_0x000108687b5c();
  if (*(long *)(param_1 + 0xd0) != 0) {
    bStack_88 = 1;
  }
  if (unaff_x22 != unaff_x20) {
    func_0x000108687cec(unaff_x20 - unaff_x22);
    (*extraout_x10_00)();
  }
  for (; unaff_x22 != unaff_x20; unaff_x22 = unaff_x22 + 0x60) {
    func_0x000108687ca8();
    FUN_1086f21dc(param_1 + 0x1b8,unaff_x22);
  }
  bVar1 = bStack_88 | bVar1;
  func_0x0001086879bc(&uStack_a0);
  if ((bVar1 & 1) != 0) {
    FUN_108683e04(param_1 + 0x28,*(undefined8 *)(param_1 + 0x1a0));
  }
  return;
}



/* Entry: 108683e04; end: 108683f5b;  */

void FUN_108683e04(long *param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long lVar9;
  ulong uVar10;
  ulong extraout_x9;
  ulong extraout_x9_00;
  int extraout_w10;
  ulong uVar11;
  code *extraout_x10;
  code *extraout_x10_00;
  ulong uVar12;
  ulong extraout_x11;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *unaff_x22;
  long *unaff_x24;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  long unaff_x28;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  byte bStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 uStack_130;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_1[5];
  lVar20 = param_2;
  if (param_2 <= lVar9) {
    lVar20 = lVar9;
  }
  if (lVar9 < 1) {
    lVar20 = param_2;
  }
  plVar17 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  plVar17 = plVar17 + lVar20 * 0x1e848;
  (**(code **)(*param_1 + 0x18))();
  if ((char)param_1[10] == '\x01') {
    if ((param_1[7] - (long)plVar17 < 1000000) ||
       ((long)((ulong)(param_1[7] - (long)plVar17) / 1000000) < param_1[5])) goto LAB_108683f08;
    func_0x00010089b2d0(param_1 + 8);
  }
  param_1[7] = (long)plVar17;
  lVar20 = param_1[1];
  uVar24 = *(undefined8 *)(lVar20 + 0x10);
  uVar23 = *(undefined8 *)(lVar20 + 8);
  if (*(long *)(lVar20 + 0x10) != 0) {
    do {
      func_0x000107c321e8();
    } while (extraout_w10 != 0);
    plVar17 = (long *)param_1[7];
  }
  pcStack_98 = FUN_1086879f8;
  ppuStack_90 = &PTR_FUN_110a625d8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_88 = uVar23;
  uStack_80 = uVar24;
  func_0x00010bcce9b8(auStack_a8);
  func_0x000108687bf0();
  FUN_10868009c(param_1 + 8,auStack_a8);
  func_0x000100688f2c(auStack_a8);
  func_0x000107c28c8c();
LAB_108683f08:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x000100688f2c(auStack_a8);
  puVar7 = &uStack_b8;
  func_0x000107c28c8c();
  func_0x000108687acc();
  (**(code **)(*(long *)puVar7[0x26] + 0x18))((long *)puVar7[0x26],puVar7 + 0x1c,1);
  func_0x000107c29394(puVar7 + 0x17,2);
  func_0x000108687d3c();
  puVar22 = (undefined8 *)(unaff_x28 + 0xa0);
  uVar11 = *(ulong *)(unaff_x28 + 0x198);
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_160 = 0;
  bStack_148 = 0;
  puVar3 = (undefined8 *)*puVar22;
  while (puVar3 != (undefined8 *)0x0) {
    lVar20 = (long)plVar17 - (long)unaff_x22;
    if (uVar11 <= (ulong)(lVar20 / 0x4a8)) break;
    FUN_1086f02dc(&uStack_5e0,puVar3 + 5);
    FUN_1086878a8(puVar3 + 0x98);
    func_0x000108687808(&uStack_a90,&uStack_5e0);
    uStack_610 = puVar3[0x99];
    uStack_618 = puVar3[0x98];
    uStack_608 = puVar3[0x9a];
    puVar3[0x99] = 0;
    puVar3[0x9a] = 0;
    puVar3[0x98] = 0;
    uStack_5f8 = puVar3[0x9c];
    uStack_600 = puVar3[0x9b];
    uStack_5f0 = puVar3[0x9d];
    uVar10 = puVar7[0xe];
    uVar8 = puVar3[1];
    uVar12 = uVar10 - 1;
    if ((uVar10 & uVar12) == 0) {
      uVar8 = uVar12 & uVar8;
    }
    else if (uVar10 <= uVar8) {
      uVar13 = 0;
      if (uVar10 != 0) {
        uVar13 = uVar8 / uVar10;
      }
      uVar8 = uVar8 - uVar13 * uVar10;
    }
    puVar18 = (undefined8 *)*puVar3;
    lVar9 = puVar7[0xd];
    puVar15 = *(undefined8 **)(lVar9 + uVar8 * 8);
    do {
      puVar14 = puVar15;
      puVar15 = (undefined8 *)*puVar14;
    } while ((undefined8 *)*puVar14 != puVar3);
    puVar15 = puVar18;
    if (puVar14 == puVar22) {
LAB_1086837c4:
      if (puVar18 == (undefined8 *)0x0) {
LAB_1086837fc:
        *(undefined8 *)(lVar9 + uVar8 * 8) = 0;
        puVar15 = (undefined8 *)*puVar3;
        goto LAB_108683804;
      }
      uVar13 = puVar18[1];
      if ((uVar10 & uVar12) == 0) {
        uVar16 = uVar13 & uVar12;
      }
      else {
        uVar16 = uVar13;
        if (uVar10 <= uVar13) {
          uVar16 = 0;
          if (uVar10 != 0) {
            uVar16 = uVar13 / uVar10;
          }
          uVar16 = uVar13 - uVar16 * uVar10;
        }
      }
      if (uVar16 != uVar8) goto LAB_1086837fc;
LAB_10868380c:
      if ((uVar10 & uVar12) == 0) {
        uVar13 = uVar13 & uVar12;
      }
      else if (uVar10 <= uVar13) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar13 / uVar10;
        }
        uVar13 = uVar13 - uVar12 * uVar10;
      }
      if (uVar13 != uVar8) {
        *(undefined8 **)(lVar9 + uVar13 * 8) = puVar14;
        puVar15 = (undefined8 *)*puVar3;
      }
    }
    else {
      uVar13 = puVar14[1];
      if ((uVar10 & uVar12) == 0) {
        uVar13 = uVar13 & uVar12;
      }
      else if (uVar10 <= uVar13) {
        uVar16 = 0;
        if (uVar10 != 0) {
          uVar16 = uVar13 / uVar10;
        }
        uVar13 = uVar13 - uVar16 * uVar10;
      }
      if (uVar13 != uVar8) goto LAB_1086837c4;
LAB_108683804:
      if (puVar15 != (undefined8 *)0x0) {
        uVar13 = puVar15[1];
        goto LAB_10868380c;
      }
    }
    *puVar14 = puVar15;
    *puVar3 = 0;
    puVar7[0x10] = puVar7[0x10] + -1;
    uStack_130 = 1;
    puStack_140 = puVar3;
    puStack_138 = puVar22;
    func_0x000108687cd8();
    FUN_10868745c();
    func_0x000108684fe8(&uStack_5e0);
    if (plVar17 < unaff_x24) {
      func_0x0001086877dc(plVar17,&uStack_a90);
      plVar19 = unaff_x22;
      plVar1 = plVar17;
    }
    else {
      if (0x36fad87bb46716 < lVar20 / 0x4a8 + 1U) {
        func_0x000108687b5c();
        FUN_10868789c();
        goto LAB_108683d80;
      }
      func_0x000108687d00();
      uVar8 = extraout_x8;
      if (0x1b7d6c3dda338a < extraout_x9) {
        uVar8 = extraout_x11;
      }
      if (uVar8 == 0) {
        lVar9 = 0;
      }
      else {
        if (extraout_x11 < uVar8) {
          func_0x000108687b5c();
          func_0x000104bd35f4();
          goto LAB_108683d80;
        }
        lVar9 = uVar8 * 0x4a8;
        __Znwm();
      }
      plVar1 = (long *)(lVar9 + lVar20);
      func_0x0001086877dc(plVar1,&uStack_a90);
      plVar19 = plVar1 + (lVar20 / -0x4a8) * 0x95;
      plVar5 = plVar19;
      for (plVar21 = unaff_x22; plVar6 = unaff_x22, plVar21 != plVar17; plVar21 = plVar21 + 0x95) {
        func_0x0001086877dc(plVar5,plVar21);
        plVar5 = plVar5 + 0x95;
      }
      for (; plVar6 != plVar17; plVar6 = plVar6 + 0x95) {
        func_0x0001086878e4();
      }
      unaff_x24 = (long *)(lVar9 + uVar8 * 0x4a8);
      if (unaff_x22 != (long *)0x0) {
        __ZdlPv(unaff_x22);
      }
    }
    plVar17 = plVar1 + 0x95;
    func_0x0001086878e4(&uStack_a90);
    puVar3 = puVar18;
    unaff_x22 = plVar19;
  }
  func_0x000108687b5c();
  if (puVar7[0x10] != 0) {
    bStack_148 = 1;
  }
  if (unaff_x22 != plVar17) {
    func_0x000108687cec((long)plVar17 - (long)unaff_x22);
    (*extraout_x10)();
  }
  for (; bVar2 = bStack_148, unaff_x22 != plVar17; unaff_x22 = unaff_x22 + 0x95) {
    func_0x000108687ca8();
    FUN_1086f1b70(puVar7 + 0x32,unaff_x22);
  }
  func_0x00010868790c(&uStack_160);
  func_0x000107c29394(puVar7 + 0x17,9);
  func_0x000108687d3c();
  puVar22 = (undefined8 *)(unaff_x28 + 0x168);
  uVar11 = *(ulong *)(unaff_x28 + 0x238);
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_160 = 0;
  bStack_148 = 0;
  puVar3 = (undefined8 *)*puVar22;
  while (puVar3 != (undefined8 *)0x0) {
    lVar20 = (long)plVar17 - (long)unaff_x22;
    if (uVar11 <= (ulong)(lVar20 / 0x60)) break;
    FUN_1086f11d8(&uStack_5e0,puVar3 + 3);
    FUN_1086878a8(puVar3 + 9);
    uStack_a88 = uStack_5d8;
    uStack_a90 = uStack_5e0;
    uStack_a80 = uStack_5d0;
    uStack_5d0 = 0;
    uStack_5d8 = 0;
    uStack_5e0 = 0;
    uStack_a70 = uStack_5c0;
    uStack_a78 = uStack_5c8;
    uStack_a68 = uStack_5b8;
    uStack_5c0 = 0;
    uStack_5b8 = 0;
    uStack_5c8 = 0;
    uStack_a58 = puVar3[10];
    uStack_a60 = puVar3[9];
    uStack_a50 = puVar3[0xb];
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    uStack_a38 = puVar3[0xe];
    uStack_a40 = puVar3[0xd];
    uStack_a48 = puVar3[0xc];
    uVar10 = puVar7[0x13];
    uVar12 = uVar10 - 1;
    uVar8 = puVar3[1];
    if ((uVar10 & uVar12) == 0) {
      uVar8 = uVar12 & uVar8;
    }
    else if (uVar10 <= uVar8) {
      uVar13 = 0;
      if (uVar10 != 0) {
        uVar13 = uVar8 / uVar10;
      }
      uVar8 = uVar8 - uVar13 * uVar10;
    }
    puVar18 = (undefined8 *)*puVar3;
    lVar9 = puVar7[0x12];
    puVar15 = *(undefined8 **)(lVar9 + uVar8 * 8);
    do {
      puVar14 = puVar15;
      puVar15 = (undefined8 *)*puVar14;
    } while ((undefined8 *)*puVar14 != puVar3);
    puVar15 = puVar18;
    if (puVar14 == puVar22) {
LAB_108683b28:
      if (puVar18 == (undefined8 *)0x0) {
LAB_108683b60:
        *(undefined8 *)(lVar9 + uVar8 * 8) = 0;
        puVar15 = (undefined8 *)*puVar3;
        goto LAB_108683b68;
      }
      uVar13 = puVar18[1];
      if ((uVar10 & uVar12) == 0) {
        uVar16 = uVar13 & uVar12;
      }
      else {
        uVar16 = uVar13;
        if (uVar10 <= uVar13) {
          uVar16 = 0;
          if (uVar10 != 0) {
            uVar16 = uVar13 / uVar10;
          }
          uVar16 = uVar13 - uVar16 * uVar10;
        }
      }
      if (uVar16 != uVar8) goto LAB_108683b60;
LAB_108683b70:
      if ((uVar10 & uVar12) == 0) {
        uVar13 = uVar13 & uVar12;
      }
      else if (uVar10 <= uVar13) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar13 / uVar10;
        }
        uVar13 = uVar13 - uVar12 * uVar10;
      }
      if (uVar13 != uVar8) {
        *(undefined8 **)(lVar9 + uVar13 * 8) = puVar14;
        puVar15 = (undefined8 *)*puVar3;
      }
    }
    else {
      uVar13 = puVar14[1];
      if ((uVar10 & uVar12) == 0) {
        uVar13 = uVar13 & uVar12;
      }
      else if (uVar10 <= uVar13) {
        uVar16 = 0;
        if (uVar10 != 0) {
          uVar16 = uVar13 / uVar10;
        }
        uVar13 = uVar13 - uVar16 * uVar10;
      }
      if (uVar13 != uVar8) goto LAB_108683b28;
LAB_108683b68:
      if (puVar15 != (undefined8 *)0x0) {
        uVar13 = puVar15[1];
        goto LAB_108683b70;
      }
    }
    *puVar14 = puVar15;
    *puVar3 = 0;
    puVar7[0x15] = puVar7[0x15] + -1;
    uStack_130 = 1;
    puStack_140 = puVar3;
    puStack_138 = puVar22;
    func_0x000108687cd8();
    func_0x0001086877a0();
    FUN_10868713c(&uStack_5e0);
    if (plVar17 < unaff_x24) {
      func_0x000108687948(plVar17,&uStack_a90);
      plVar19 = unaff_x22;
      plVar1 = plVar17;
    }
    else {
      if (0x2aaaaaaaaaaaaaa < lVar20 / 0x60 + 1U) {
        func_0x000108687b5c();
        FUN_108687990();
LAB_108683d80:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x108683d84);
        (*pcVar4)();
      }
      func_0x000108687d00();
      uVar8 = extraout_x8_00;
      if (0x155555555555554 < extraout_x9_00) {
        uVar8 = 0x2aaaaaaaaaaaaaa;
      }
      if (uVar8 == 0) {
        lVar9 = 0;
      }
      else {
        if (0x2aaaaaaaaaaaaaa < uVar8) {
          func_0x000108687b5c();
          func_0x000104bd35f4();
          goto LAB_108683d80;
        }
        lVar9 = uVar8 * 0x60;
        __Znwm();
      }
      plVar1 = (long *)(lVar9 + lVar20);
      func_0x000108687948(plVar1,&uStack_a90);
      plVar19 = plVar1 + (lVar20 / -0x60) * 0xc;
      plVar5 = plVar19;
      for (plVar21 = unaff_x22; plVar6 = unaff_x22, plVar21 != plVar17; plVar21 = plVar21 + 0xc) {
        func_0x000108687948(plVar5,plVar21);
        plVar5 = plVar5 + 0xc;
      }
      for (; plVar6 != plVar17; plVar6 = plVar6 + 0xc) {
        FUN_10868799c();
      }
      unaff_x24 = (long *)(lVar9 + uVar8 * 0x60);
      if (unaff_x22 != (long *)0x0) {
        __ZdlPv(unaff_x22);
      }
    }
    plVar17 = plVar1 + 0xc;
    FUN_10868799c(&uStack_a90);
    puVar3 = puVar18;
    unaff_x22 = plVar19;
  }
  func_0x000108687b5c();
  if (puVar7[0x15] != 0) {
    bStack_148 = 1;
  }
  if (unaff_x22 != plVar17) {
    func_0x000108687cec((long)plVar17 - (long)unaff_x22);
    (*extraout_x10_00)();
  }
  for (; unaff_x22 != plVar17; unaff_x22 = unaff_x22 + 0xc) {
    func_0x000108687ca8();
    FUN_1086f21dc(puVar7 + 0x32,unaff_x22);
  }
  bVar2 = bStack_148 | bVar2;
  func_0x0001086879bc(&uStack_160);
  if ((bVar2 & 1) != 0) {
    FUN_108683e04(puVar7,puVar7[0x2f]);
  }
  return;
}



/* Entry: 108683f5c; end: 108683f67;  */

void FUN_108683f5c(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar6;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar7;
  code *extraout_x10;
  code *extraout_x10_00;
  ulong uVar8;
  ulong extraout_x11;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong unaff_x20;
  undefined8 *puVar14;
  ulong unaff_x22;
  ulong unaff_x24;
  long lVar15;
  undefined8 *puVar16;
  long unaff_x28;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte bStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined1 uStack_70;
  
  (**(code **)(**(long **)(param_1 + 0x130) + 0x18))(*(long **)(param_1 + 0x130),param_1 + 0xe0,1);
  func_0x000107c29394(param_1 + 0xb8,2);
  func_0x000108687d3c();
  puVar16 = (undefined8 *)(unaff_x28 + 0xa0);
  uVar7 = *(ulong *)(unaff_x28 + 0x198);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  bStack_88 = 0;
  puVar2 = (undefined8 *)*puVar16;
  while (puVar2 != (undefined8 *)0x0) {
    lVar15 = unaff_x20 - unaff_x22;
    if (uVar7 <= (ulong)(lVar15 / 0x4a8)) break;
    FUN_1086f02dc(&uStack_520,puVar2 + 5);
    FUN_1086878a8(puVar2 + 0x98);
    func_0x000108687808(&uStack_9d0,&uStack_520);
    uStack_550 = puVar2[0x99];
    uStack_558 = puVar2[0x98];
    uStack_548 = puVar2[0x9a];
    puVar2[0x99] = 0;
    puVar2[0x9a] = 0;
    puVar2[0x98] = 0;
    uStack_538 = puVar2[0x9c];
    uStack_540 = puVar2[0x9b];
    uStack_530 = puVar2[0x9d];
    uVar6 = *(ulong *)(param_1 + 0x70);
    uVar5 = puVar2[1];
    uVar8 = uVar6 - 1;
    if ((uVar6 & uVar8) == 0) {
      uVar5 = uVar8 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar10 = 0;
      if (uVar6 != 0) {
        uVar10 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar10 * uVar6;
    }
    puVar14 = (undefined8 *)*puVar2;
    lVar9 = *(long *)(param_1 + 0x68);
    puVar12 = *(undefined8 **)(lVar9 + uVar5 * 8);
    do {
      puVar11 = puVar12;
      puVar12 = (undefined8 *)*puVar11;
    } while ((undefined8 *)*puVar11 != puVar2);
    puVar12 = puVar14;
    if (puVar11 == puVar16) {
LAB_1086837c4:
      if (puVar14 == (undefined8 *)0x0) {
LAB_1086837fc:
        *(undefined8 *)(lVar9 + uVar5 * 8) = 0;
        puVar12 = (undefined8 *)*puVar2;
        goto LAB_108683804;
      }
      uVar10 = puVar14[1];
      if ((uVar6 & uVar8) == 0) {
        uVar13 = uVar10 & uVar8;
      }
      else {
        uVar13 = uVar10;
        if (uVar6 <= uVar10) {
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = uVar10 / uVar6;
          }
          uVar13 = uVar10 - uVar13 * uVar6;
        }
      }
      if (uVar13 != uVar5) goto LAB_1086837fc;
LAB_10868380c:
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar8 * uVar6;
      }
      if (uVar10 != uVar5) {
        *(undefined8 **)(lVar9 + uVar10 * 8) = puVar11;
        puVar12 = (undefined8 *)*puVar2;
      }
    }
    else {
      uVar10 = puVar11[1];
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar13 = 0;
        if (uVar6 != 0) {
          uVar13 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar13 * uVar6;
      }
      if (uVar10 != uVar5) goto LAB_1086837c4;
LAB_108683804:
      if (puVar12 != (undefined8 *)0x0) {
        uVar10 = puVar12[1];
        goto LAB_10868380c;
      }
    }
    *puVar11 = puVar12;
    *puVar2 = 0;
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + -1;
    uStack_70 = 1;
    puStack_80 = puVar2;
    puStack_78 = puVar16;
    func_0x000108687cd8();
    FUN_10868745c();
    func_0x000108684fe8(&uStack_520);
    if (unaff_x20 < unaff_x24) {
      func_0x0001086877dc(unaff_x20,&uStack_9d0);
      uVar13 = unaff_x22;
      uVar10 = unaff_x20;
    }
    else {
      if (0x36fad87bb46716 < lVar15 / 0x4a8 + 1U) {
        func_0x000108687b5c();
        FUN_10868789c();
        goto LAB_108683d80;
      }
      func_0x000108687d00();
      uVar5 = extraout_x8;
      if (0x1b7d6c3dda338a < extraout_x9) {
        uVar5 = extraout_x11;
      }
      if (uVar5 == 0) {
        lVar9 = 0;
      }
      else {
        if (extraout_x11 < uVar5) {
          func_0x000108687b5c();
          func_0x000104bd35f4();
          goto LAB_108683d80;
        }
        lVar9 = uVar5 * 0x4a8;
        __Znwm();
      }
      uVar10 = lVar9 + lVar15;
      func_0x0001086877dc(uVar10,&uStack_9d0);
      uVar13 = uVar10 + (lVar15 / -0x4a8) * 0x4a8;
      uVar8 = uVar13;
      for (uVar6 = unaff_x22; uVar4 = unaff_x22, uVar6 != unaff_x20; uVar6 = uVar6 + 0x4a8) {
        func_0x0001086877dc(uVar8,uVar6);
        uVar8 = uVar8 + 0x4a8;
      }
      for (; uVar4 != unaff_x20; uVar4 = uVar4 + 0x4a8) {
        func_0x0001086878e4();
      }
      unaff_x24 = lVar9 + uVar5 * 0x4a8;
      if (unaff_x22 != 0) {
        __ZdlPv(unaff_x22);
      }
    }
    unaff_x20 = uVar10 + 0x4a8;
    func_0x0001086878e4(&uStack_9d0);
    puVar2 = puVar14;
    unaff_x22 = uVar13;
  }
  func_0x000108687b5c();
  if (*(long *)(param_1 + 0x80) != 0) {
    bStack_88 = 1;
  }
  if (unaff_x22 != unaff_x20) {
    func_0x000108687cec(unaff_x20 - unaff_x22);
    (*extraout_x10)();
  }
  for (; bVar1 = bStack_88, unaff_x22 != unaff_x20; unaff_x22 = unaff_x22 + 0x4a8) {
    func_0x000108687ca8();
    FUN_1086f1b70(param_1 + 400,unaff_x22);
  }
  func_0x00010868790c(&uStack_a0);
  func_0x000107c29394(param_1 + 0xb8,9);
  func_0x000108687d3c();
  puVar16 = (undefined8 *)(unaff_x28 + 0x168);
  uVar7 = *(ulong *)(unaff_x28 + 0x238);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  bStack_88 = 0;
  puVar2 = (undefined8 *)*puVar16;
  while (puVar2 != (undefined8 *)0x0) {
    lVar15 = unaff_x20 - unaff_x22;
    if (uVar7 <= (ulong)(lVar15 / 0x60)) break;
    FUN_1086f11d8(&uStack_520,puVar2 + 3);
    FUN_1086878a8(puVar2 + 9);
    uStack_9c8 = uStack_518;
    uStack_9d0 = uStack_520;
    uStack_9c0 = uStack_510;
    uStack_510 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_9b0 = uStack_500;
    uStack_9b8 = uStack_508;
    uStack_9a8 = uStack_4f8;
    uStack_500 = 0;
    uStack_4f8 = 0;
    uStack_508 = 0;
    uStack_998 = puVar2[10];
    uStack_9a0 = puVar2[9];
    uStack_990 = puVar2[0xb];
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    uStack_978 = puVar2[0xe];
    uStack_980 = puVar2[0xd];
    uStack_988 = puVar2[0xc];
    uVar6 = *(ulong *)(param_1 + 0x98);
    uVar8 = uVar6 - 1;
    uVar5 = puVar2[1];
    if ((uVar6 & uVar8) == 0) {
      uVar5 = uVar8 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar10 = 0;
      if (uVar6 != 0) {
        uVar10 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar10 * uVar6;
    }
    puVar14 = (undefined8 *)*puVar2;
    lVar9 = *(long *)(param_1 + 0x90);
    puVar12 = *(undefined8 **)(lVar9 + uVar5 * 8);
    do {
      puVar11 = puVar12;
      puVar12 = (undefined8 *)*puVar11;
    } while ((undefined8 *)*puVar11 != puVar2);
    puVar12 = puVar14;
    if (puVar11 == puVar16) {
LAB_108683b28:
      if (puVar14 == (undefined8 *)0x0) {
LAB_108683b60:
        *(undefined8 *)(lVar9 + uVar5 * 8) = 0;
        puVar12 = (undefined8 *)*puVar2;
        goto LAB_108683b68;
      }
      uVar10 = puVar14[1];
      if ((uVar6 & uVar8) == 0) {
        uVar13 = uVar10 & uVar8;
      }
      else {
        uVar13 = uVar10;
        if (uVar6 <= uVar10) {
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = uVar10 / uVar6;
          }
          uVar13 = uVar10 - uVar13 * uVar6;
        }
      }
      if (uVar13 != uVar5) goto LAB_108683b60;
LAB_108683b70:
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar8 * uVar6;
      }
      if (uVar10 != uVar5) {
        *(undefined8 **)(lVar9 + uVar10 * 8) = puVar11;
        puVar12 = (undefined8 *)*puVar2;
      }
    }
    else {
      uVar10 = puVar11[1];
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar13 = 0;
        if (uVar6 != 0) {
          uVar13 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar13 * uVar6;
      }
      if (uVar10 != uVar5) goto LAB_108683b28;
LAB_108683b68:
      if (puVar12 != (undefined8 *)0x0) {
        uVar10 = puVar12[1];
        goto LAB_108683b70;
      }
    }
    *puVar11 = puVar12;
    *puVar2 = 0;
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + -1;
    uStack_70 = 1;
    puStack_80 = puVar2;
    puStack_78 = puVar16;
    func_0x000108687cd8();
    func_0x0001086877a0();
    FUN_10868713c(&uStack_520);
    if (unaff_x20 < unaff_x24) {
      func_0x000108687948(unaff_x20,&uStack_9d0);
      uVar13 = unaff_x22;
      uVar10 = unaff_x20;
    }
    else {
      if (0x2aaaaaaaaaaaaaa < lVar15 / 0x60 + 1U) {
        func_0x000108687b5c();
        FUN_108687990();
LAB_108683d80:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x108683d84);
        (*pcVar3)();
      }
      func_0x000108687d00();
      uVar5 = extraout_x8_00;
      if (0x155555555555554 < extraout_x9_00) {
        uVar5 = 0x2aaaaaaaaaaaaaa;
      }
      if (uVar5 == 0) {
        lVar9 = 0;
      }
      else {
        if (0x2aaaaaaaaaaaaaa < uVar5) {
          func_0x000108687b5c();
          func_0x000104bd35f4();
          goto LAB_108683d80;
        }
        lVar9 = uVar5 * 0x60;
        __Znwm();
      }
      uVar10 = lVar9 + lVar15;
      func_0x000108687948(uVar10,&uStack_9d0);
      uVar13 = uVar10 + (lVar15 / -0x60) * 0x60;
      uVar8 = uVar13;
      for (uVar6 = unaff_x22; uVar4 = unaff_x22, uVar6 != unaff_x20; uVar6 = uVar6 + 0x60) {
        func_0x000108687948(uVar8,uVar6);
        uVar8 = uVar8 + 0x60;
      }
      for (; uVar4 != unaff_x20; uVar4 = uVar4 + 0x60) {
        FUN_10868799c();
      }
      unaff_x24 = lVar9 + uVar5 * 0x60;
      if (unaff_x22 != 0) {
        __ZdlPv(unaff_x22);
      }
    }
    unaff_x20 = uVar10 + 0x60;
    FUN_10868799c(&uStack_9d0);
    puVar2 = puVar14;
    unaff_x22 = uVar13;
  }
  func_0x000108687b5c();
  if (*(long *)(param_1 + 0xa8) != 0) {
    bStack_88 = 1;
  }
  if (unaff_x22 != unaff_x20) {
    func_0x000108687cec(unaff_x20 - unaff_x22);
    (*extraout_x10_00)();
  }
  for (; unaff_x22 != unaff_x20; unaff_x22 = unaff_x22 + 0x60) {
    func_0x000108687ca8();
    FUN_1086f21dc(param_1 + 400,unaff_x22);
  }
  bVar1 = bStack_88 | bVar1;
  func_0x0001086879bc(&uStack_a0);
  if ((bVar1 & 1) != 0) {
    FUN_108683e04(param_1,*(undefined8 *)(param_1 + 0x178));
  }
  return;
}



/* Entry: 108683f68; end: 108683f7b;  */

void FUN_108683f68(void)

{
  func_0x000108687208();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108683f7c; end: 108683fe3;  */

void FUN_108683f7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108687c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x158) + 0x18))(*(long **)(param_1 + 0x158),param_1 + 0x130,1);
  return;
}



/* Entry: 108683fe4; end: 108684033;  */

long * FUN_108683fe4(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x000107c28b60(lVar1);
    func_0x000108687b8c();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108684034; end: 108684073;  */

long * FUN_108684034(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  func_0x000107c28c88(param_1 + 0x11);
  func_0x000107c28c88(param_1 + 0xf);
  func_0x000107c2882c(param_1 + 10);
  func_0x000107c2882c(param_1 + 5);
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x000107c28b60(lVar1);
    func_0x000108687b8c();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108684074; end: 1086840c3;  */

long * FUN_108684074(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    FUN_1086840c4(lVar1);
    func_0x000108687b8c();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1086840c4; end: 10868410f;  */

long FUN_1086840c4(void)

{
  long unaff_x19;
  
  func_0x000108687cc0();
  func_0x000104be1594(unaff_x19 + 0x18);
  func_0x000100292090();
  func_0x0001006994ec();
  return unaff_x19;
}



/* Entry: 108684110; end: 108684127;  */

void FUN_108684110(undefined8 *param_1)

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



/* Entry: 108684128; end: 108684177;  */

long * FUN_108684128(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_108684178(lVar1);
    func_0x000108687b8c();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108684178; end: 10868426b;  */

void FUN_108684178(void)

{
  func_0x000108687ccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10868426c; end: 10868426f;  */

void FUN_10868426c(void)

{
  return;
}



/* Entry: 108684270; end: 10868429f;  */

void FUN_108684270(long param_1)

{
  func_0x000107c321a4();
  *(undefined1 *)(param_1 + 0x428) = 0;
  FUN_1086842a0();
  return;
}



/* Entry: 1086842a0; end: 1086842b3;  */

void FUN_1086842a0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x428) == '\x01') {
    func_0x000104be07d0();
    *(undefined1 *)(param_1 + 0x428) = 1;
    return;
  }
  return;
}



/* Entry: 1086842b4; end: 1086842e7;  */

void FUN_1086842b4(long param_1)

{
  func_0x000104be07d0();
  *(undefined1 *)(param_1 + 0x428) = 1;
  return;
}



/* Entry: 1086842e8; end: 10868430f;  */

void FUN_1086842e8(void)

{
  func_0x000107c32144();
  func_0x000107c321c4();
  FUN_108684310();
  return;
}



/* Entry: 108684310; end: 108684357;  */

void FUN_108684310(void)

{
  long in_x3;
  
  func_0x000107c321a8();
  if (in_x3 != 0) {
    func_0x0001006a005c();
    FUN_108684358();
    func_0x0001006a00c4();
    FUN_10868438c();
  }
  func_0x000107c3215c();
  FUN_10868445c();
  return;
}



/* Entry: 108684358; end: 10868438b;  */

void FUN_108684358(undefined8 param_1)

{
  undefined1 in_CY;
  undefined8 *unaff_x19;
  
  func_0x000108687c00();
  if ((bool)in_CY) {
    func_0x0001052907f4();
    func_0x0001006a00d8();
    func_0x0001006a010c();
    FUN_1086843b4();
    unaff_x19[1] = param_1;
  }
  else {
    func_0x0001006998e4();
    func_0x000105290874();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    func_0x0001006a00b8(0x48);
  }
  return;
}



/* Entry: 10868438c; end: 1086843b3;  */

void FUN_10868438c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086843b4();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1086843b4; end: 1086843c7;  */

void FUN_1086843b4(void)

{
  FUN_1086843c8();
  return;
}



/* Entry: 1086843c8; end: 108684417;  */

void FUN_1086843c8(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    func_0x0001006a01b0();
    FUN_108684418();
    func_0x000108687d28();
  }
  func_0x0001006a0758();
  func_0x000105290a00();
  return;
}



/* Entry: 108684418; end: 10868445b;  */

void FUN_108684418(void)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c3219c();
  func_0x000104be0ccc();
  func_0x000107c321f4();
  func_0x000107c279a0();
  uVar1 = *(undefined4 *)(unaff_x20 + 0x40);
  *(undefined1 *)(unaff_x19 + 0x44) = *(undefined1 *)(unaff_x20 + 0x44);
  *(undefined4 *)(unaff_x19 + 0x40) = uVar1;
  return;
}



/* Entry: 10868445c; end: 108684483;  */

void FUN_10868445c(void)

{
  uint extraout_w8;
  
  func_0x000107c321a0();
  if ((extraout_w8 & 1) == 0) {
    func_0x000104be163c();
  }
  return;
}



/* Entry: 108684484; end: 1086844b7;  */

void FUN_108684484(void)

{
  func_0x000108687044();
  func_0x0001006a07dc();
  return;
}



/* Entry: 1086844b8; end: 1086844df;  */

undefined4 * FUN_1086844b8(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_1086844e0(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1086844e0; end: 10868450f;  */

void FUN_1086844e0(long param_1)

{
  func_0x000107c321a4();
  *(undefined1 *)(param_1 + 0x228) = 0;
  FUN_108684510();
  return;
}



/* Entry: 108684510; end: 108684523;  */

void FUN_108684510(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_108684540();
    *(undefined1 *)(param_1 + 0x228) = 1;
    return;
  }
  return;
}



/* Entry: 108684524; end: 10868453f;  */

void FUN_108684524(long param_1)

{
  FUN_108684540();
  *(undefined1 *)(param_1 + 0x228) = 1;
  return;
}



/* Entry: 108684540; end: 1086846a7;  */

void FUN_108684540(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c32168();
  func_0x0001006a03e0();
  func_0x000107c321f4();
  func_0x0001006a042c();
  func_0x000107c32218();
  func_0x0001006a07e8();
  func_0x0001006a0828(unaff_x19 + 0x60,unaff_x20 + 0x60);
  func_0x000107c27994(unaff_x19 + 0x78,unaff_x20 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar1;
  func_0x000107c27994(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xc0);
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar1;
  func_0x000107c279a0(unaff_x19 + 200,unaff_x20 + 200);
  func_0x000107c279ac(unaff_x19 + 0xe8,unaff_x20 + 0xe8);
  func_0x0001006a099c(unaff_x19 + 0x100,unaff_x20 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x148);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x158);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x150);
  *(undefined1 *)(unaff_x19 + 0x160) = *(undefined1 *)(unaff_x20 + 0x160);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x140) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x158) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x150) = uVar3;
  func_0x0001006a09e0(unaff_x19 + 0x168,unaff_x20 + 0x168);
  func_0x0001006a0a34(unaff_x19 + 0x198,unaff_x20 + 0x198);
  func_0x0001006a0d08(unaff_x19 + 0x1c0,unaff_x20 + 0x1c0);
  return;
}



/* Entry: 1086846a8; end: 1086846c3;  */

void FUN_1086846a8(long param_1)

{
  FUN_1086846c4();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 1086846c4; end: 1086846f7;  */

undefined8 * FUN_1086846c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_1086846f8(param_1 + 3,param_2 + 3);
  return param_1;
}


