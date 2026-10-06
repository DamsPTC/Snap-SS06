/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086ee1b8; end: 1086ee1bb;  */

undefined8 * FUN_1086ee1b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a627a0;
  func_0x000107c28cac(param_1 + 1);
  return param_1;
}



/* Entry: 1086ee1bc; end: 1086ee1cf;  */

void FUN_1086ee1bc(void)

{
  FUN_108687d5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ee1d0; end: 1086ee28b;  */

bool FUN_1086ee1d0(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  code *extraout_x8;
  
  func_0x000107c32940();
  func_0x000107c2937c();
  if (param_1 != 0) {
    ppuVar1 = &PTR_PTR_11327f548;
    if (*(undefined ***)(param_3 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_3 + 0x18);
    }
    FUN_108652998(param_1,param_2,ppuVar1[7],param_3);
    func_0x0001086ee8f8();
    (*extraout_x8)();
  }
  return param_1 != 0;
}



/* Entry: 1086ee28c; end: 1086ee38b;  */

undefined1  [16] FUN_1086ee28c(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  code *extraout_x8;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_50 [8];
  long lStack_48;
  ulong uStack_40;
  char cStack_38;
  
  func_0x000107c32940();
  func_0x000107c2937c();
  if (param_1 == 0) {
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    FUN_108652940(auStack_50);
    cVar2 = cStack_38;
    lVar1 = lStack_48;
    if (cStack_38 == '\0') {
      uVar7 = 0;
    }
    else {
      cStack_38 = '\0';
      uVar7 = uStack_40;
    }
    lStack_48 = 0;
    FUN_1086ee7f4(auStack_50);
    func_0x0001086ee8f8();
    (*extraout_x8)();
    bVar3 = lVar1 != 0;
    uVar6 = 0;
    if (bVar3) {
      uVar6 = uVar7 & 0xffffffffffffff00;
    }
    uVar5 = 0;
    if (bVar3) {
      uVar5 = uVar7 & 0xff;
    }
    bVar4 = cVar2 != '\0';
    uVar7 = 0;
    if (bVar4) {
      uVar7 = uVar6;
    }
    uVar6 = 0;
    if (bVar4) {
      uVar6 = uVar5;
    }
    uVar5 = 0;
    if (bVar4) {
      uVar5 = (ulong)bVar3;
    }
  }
  auVar8._0_8_ = uVar6 | uVar7;
  auVar8._8_8_ = uVar5;
  return auVar8;
}



/* Entry: 1086ee38c; end: 1086ee703;  */

void FUN_1086ee38c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x19;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_190;
  undefined1 auStack_188 [32];
  undefined1 auStack_168 [48];
  byte bStack_138;
  undefined1 auStack_130 [8];
  long lStack_128;
  undefined1 auStack_120 [80];
  char cStack_d0;
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar8 = param_1;
  func_0x000107c32948();
  func_0x000107c2937c();
  if (lVar8 != 0) {
    func_0x00010865296c(auStack_130,lVar8 + 0xf0,param_2);
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),7);
    lStack_190 = 0;
    auStack_188[0] = 0;
    bStack_138 = 0;
    if (cStack_d0 == '\0') {
      lVar8 = 0;
    }
    else {
      FUN_1086530b0(auStack_188,auStack_120);
      FUN_108652f70(auStack_120);
      lVar8 = lStack_190;
    }
    uVar6 = 0;
    lStack_190 = lStack_128;
    lStack_128 = lVar8;
    while (((bStack_138 & 1) != 0 && (lStack_190 != 0))) {
      if ((bStack_138 & 1) == 0) {
        uVar7 = *(undefined8 *)(lStack_190 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_98,lStack_190 + 0x58);
        func_0x000107c27f54(auStack_80,&UNK_10f2e0451,auStack_98);
        func_0x00010bcc7444(uVar7,0x65,auStack_80);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
      }
      FUN_1088b68dc(auStack_c8,0,auStack_168);
      if (uVar6 < unaff_x19[2]) {
        FUN_10865317c(uVar6,auStack_c8);
        uVar1 = uVar6;
      }
      else {
        lVar8 = uVar6 - *unaff_x19;
        uVar10 = lVar8 / 0x30 + 1;
        if (0x555555555555555 < uVar10) {
          func_0x0001086ee7a4();
LAB_1086ee6dc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1086ee6e0);
          (*pcVar2)();
        }
        uVar4 = (long)(unaff_x19[2] - *unaff_x19) / 0x30;
        uVar5 = uVar4 * 2;
        if (uVar5 < uVar10 || uVar5 - uVar10 == 0) {
          uVar5 = uVar10;
        }
        if (0x2aaaaaaaaaaaaa9 < uVar4) {
          uVar5 = 0x555555555555555;
        }
        if (uVar5 == 0) {
          lVar3 = 0;
        }
        else {
          if (0x555555555555555 < uVar5) {
            func_0x000104bd35f4();
            goto LAB_1086ee6dc;
          }
          lVar3 = uVar5 * 0x30;
          __Znwm();
        }
        uVar1 = lVar3 + lVar8;
        FUN_10865317c(uVar1,auStack_c8);
        uVar9 = *unaff_x19;
        uVar11 = uVar1 + ((long)(uVar6 - uVar9) / -0x30) * 0x30;
        uVar4 = uVar11;
        for (uVar10 = uVar9; uVar10 != uVar6; uVar10 = uVar10 + 0x30) {
          FUN_10865317c(uVar4,uVar10);
          uVar4 = uVar4 + 0x30;
        }
        for (; uVar9 != uVar6; uVar9 = uVar9 + 0x30) {
          FUN_1088b6940(uVar9);
        }
        uVar6 = *unaff_x19;
        *unaff_x19 = uVar11;
        unaff_x19[2] = lVar3 + uVar5 * 0x30;
        if (uVar6 != 0) {
          __ZdlPv();
        }
      }
      uVar6 = uVar1 + 0x30;
      unaff_x19[1] = uVar6;
      FUN_1088b6940(auStack_c8);
      FUN_108652ec4(&lStack_190);
    }
    func_0x0001086ee908();
    FUN_1086531ec(auStack_188);
    FUN_1086ee828(auStack_130);
  }
  return;
}



/* Entry: 1086ee704; end: 1086ee78b;  */

void FUN_1086ee704(long param_1,undefined8 param_2)

{
  code *extraout_x8;
  
  func_0x000107c32940();
  func_0x000107c2937c();
  if (param_1 != 0) {
    FUN_108651ed8(param_1 + 0x1f0,param_2);
    func_0x0001086ee8f8();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 1086ee78c; end: 1086ee78f;  */

undefined8 * FUN_1086ee78c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a66550;
  func_0x000107c29384(param_1 + 3);
  func_0x000107c29388(param_1 + 1);
  return param_1;
}



/* Entry: 1086ee790; end: 1086ee7b7;  */

void FUN_1086ee790(void)

{
  FUN_1086ee7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ee7b8; end: 1086ee7f3;  */

undefined8 * FUN_1086ee7b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a66550;
  func_0x000107c29384(param_1 + 3);
  func_0x000107c29388(param_1 + 1);
  return param_1;
}



/* Entry: 1086ee7f4; end: 1086ee827;  */

undefined8 * FUN_1086ee7f4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000107c31408(uVar1);
  return param_1;
}



/* Entry: 1086ee828; end: 1086ee897;  */

undefined8 * FUN_1086ee828(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_108652f70(param_1 + 2);
  }
  FUN_1086531ec((ulong)&uStack_80 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_1086531ec(param_1 + 2);
  return param_1;
}



/* Entry: 1086ee898; end: 1086ee91f;  */

void FUN_1086ee898(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086ee8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1086ee920; end: 1086eea47;  */

undefined8
FUN_1086ee920(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  code *extraout_x8;
  long unaff_x19;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [64];
  
  func_0x0001086ef07c();
  FUN_1086eea48();
  lVar1 = *(long *)(unaff_x19 + 8);
  FUN_1086eea64();
  uVar2 = 0;
  if ((param_1 != 0) && (lVar1 != 0)) {
    func_0x000107c278b8(auStack_a8,&UNK_10f4b17dc);
    func_0x000107c31420(auStack_90,lVar1,auStack_a8);
    func_0x0001086ef060();
    FUN_108653408(param_1,param_2,param_3,param_4);
    FUN_1086534bc(param_1,param_2,param_5);
    func_0x000107c31428(auStack_90);
    func_0x0001086ef02c();
    (*extraout_x8)();
    func_0x0001086ef058();
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1086eea48; end: 1086eea63;  */

void FUN_1086eea48(void)

{
  func_0x000107c29380();
  return;
}



/* Entry: 1086eea64; end: 1086eea87;  */

void FUN_1086eea64(void)

{
  func_0x000107c29380();
  return;
}



/* Entry: 1086eea88; end: 1086eeba7;  */

undefined8 FUN_1086eea88(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *extraout_x8;
  long unaff_x19;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [64];
  
  if (*param_2 == param_2[1]) {
    uVar3 = 0;
  }
  else {
    func_0x0001086ef07c();
    FUN_1086eea48();
    lVar2 = *(long *)(unaff_x19 + 8);
    FUN_1086eea64();
    uVar3 = 0;
    if ((param_1 != 0) && (lVar2 != 0)) {
      func_0x000107c278b8(auStack_88,&UNK_10f4b17ea);
      func_0x000107c31420(auStack_70,lVar2,auStack_88);
      func_0x0001086ef060();
      lVar1 = param_2[1];
      for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
        FUN_108653408(param_1,lVar2,*(undefined4 *)(lVar2 + 0x18),lVar2 + 0x20);
      }
      func_0x000107c31428(auStack_70);
      func_0x0001086ef02c();
      (*extraout_x8)();
      func_0x0001086ef058();
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* Entry: 1086eeba8; end: 1086eede3;  */

void FUN_1086eeba8(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 *extraout_x8;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_110 [8];
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char cStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  undefined1 auStack_68 [24];
  
  func_0x0001086ef03c();
  lVar2 = *(long *)(param_1 + 8);
  FUN_1086eea48();
  if (lVar2 == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
    return;
  }
  FUN_108653388(auStack_110);
  uStack_88 = uStack_88 & 0xffffffffffffff00;
  bStack_70 = 0;
  if (cStack_e8 != '\0') {
    uStack_80 = uStack_f8;
    uStack_88 = uStack_100;
    uStack_78 = uStack_f0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0;
    bStack_70 = 1;
    FUN_10865376c(&uStack_100);
  }
  lVar2 = lStack_108;
  lStack_90 = lStack_108;
  lStack_108 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (cStack_e8 == '\0') {
    func_0x000108653790((ulong)&uStack_c0 | 8);
  }
  else {
    func_0x000108653790((ulong)&uStack_c0 | 8);
    if (lVar2 != 0) {
      if ((bStack_70 & 1) == 0) {
        uVar3 = *(undefined8 *)(lStack_90 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_68,lStack_90 + 0x58);
        func_0x000107c27f54(&uStack_c0,&UNK_10f2e0451,auStack_68);
        func_0x00010bcc7444(uVar3,0x65,&uStack_c0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
      }
      uStack_d8 = uStack_80;
      uStack_e0 = uStack_88;
      uStack_d0 = uStack_78;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_88 = 0;
      bVar1 = true;
      goto LAB_1086eecd8;
    }
  }
  bVar1 = false;
  uStack_e0 = uStack_e0 & 0xffffffffffffff00;
LAB_1086eecd8:
  uStack_c8 = bVar1;
  func_0x000108653790(&uStack_88);
  FUN_1086eef74(auStack_110);
  (**(code **)(**(long **)(unaff_x20 + 0x18) + 0x10))(*(long **)(unaff_x20 + 0x18),0xf);
  if (bVar1) {
    func_0x000105c41160(extraout_x8,&uStack_e0);
  }
  else {
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
  }
  func_0x000108653790(&uStack_e0);
  return;
}



/* Entry: 1086eede4; end: 1086eee5b;  */

void FUN_1086eede4(long param_1,undefined8 param_2)

{
  code *extraout_x8;
  
  func_0x0001086ef07c();
  FUN_1086eea48();
  if (param_1 != 0) {
    FUN_108651ed8(param_1 + 0x200,param_2);
    func_0x0001086ef02c();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 1086eee5c; end: 1086eef1f;  */

void FUN_1086eee5c(long param_1)

{
  code *extraout_x8;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  char cStack_37;
  
  func_0x0001086ef07c();
  FUN_1086eea48();
  if (param_1 != 0) {
    FUN_1086533e4(auStack_48,param_1 + 0x78);
    if (cStack_37 != '\0') {
      cStack_37 = '\0';
    }
    uStack_40 = 0;
    FUN_1086eefe0(auStack_48);
    func_0x0001086ef02c();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 1086eef20; end: 1086eef23;  */

undefined8 * FUN_1086eef20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a665c0;
  func_0x000107c29384(param_1 + 3);
  func_0x000107c29388(param_1 + 1);
  return param_1;
}



/* Entry: 1086eef24; end: 1086eef37;  */

void FUN_1086eef24(void)

{
  FUN_1086eef38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086eef38; end: 1086eef73;  */

undefined8 * FUN_1086eef38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a665c0;
  func_0x000107c29384(param_1 + 3);
  func_0x000107c29388(param_1 + 1);
  return param_1;
}



/* Entry: 1086eef74; end: 1086eefdf;  */

undefined8 * FUN_1086eef74(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 5) != '\0') {
    FUN_10865376c(param_1 + 2);
  }
  func_0x000108653790((ulong)&uStack_50 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  func_0x000108653790(param_1 + 2);
  return param_1;
}



/* Entry: 1086eefe0; end: 1086ef00f;  */

undefined8 * FUN_1086eefe0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined2 *)(param_1 + 2) = 0;
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000107c31408(uVar1);
  return param_1;
}



/* Entry: 1086ef010; end: 1086ef087;  */

void FUN_1086ef010(void)

{
  return;
}



/* Entry: 1086ef088; end: 1086ef113;  */

void FUN_1086ef088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *extraout_x8;
  
  func_0x000107c32978();
  func_0x000107c2938c();
  FUN_108651e3c(param_1,param_2,param_3);
  func_0x000107c32954();
  (*extraout_x8)(param_1,9);
  return;
}



/* Entry: 1086ef114; end: 1086ef1cb;  */

char FUN_1086ef114(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  char cVar3;
  code *extraout_x8;
  undefined1 auStack_50 [8];
  long lStack_48;
  char cStack_38;
  
  func_0x000107c32978();
  func_0x000107c2938c();
  FUN_108651e10(auStack_50,param_1 + 0x78,param_2);
  cVar3 = cStack_38;
  lVar2 = lStack_48;
  if (cStack_38 != '\0') {
    cStack_38 = '\0';
  }
  lStack_48 = 0;
  FUN_1086ef2ac(auStack_50);
  func_0x000107c32954();
  (*extraout_x8)();
  cVar1 = '\0';
  if (lVar2 != 0) {
    cVar1 = cVar3;
  }
  return cVar1;
}



/* Entry: 1086ef1cc; end: 1086ef243;  */

void FUN_1086ef1cc(long param_1,undefined8 param_2)

{
  code *extraout_x8;
  
  func_0x000107c32978();
  func_0x000107c2938c();
  FUN_108651ed8(param_1 + 0x178,param_2);
  func_0x000107c32954();
  (*extraout_x8)();
  return;
}



/* Entry: 1086ef244; end: 1086ef247;  */

undefined8 * FUN_1086ef244(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a66630;
  func_0x000107c29384(param_1 + 3);
  func_0x000107c29388(param_1 + 1);
  return param_1;
}



/* Entry: 1086ef248; end: 1086ef25b;  */

void FUN_1086ef248(void)

{
  FUN_1086ef25c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ef25c; end: 1086ef297;  */

undefined8 * FUN_1086ef25c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a66630;
  func_0x000107c29384(param_1 + 3);
  func_0x000107c29388(param_1 + 1);
  return param_1;
}



/* Entry: 1086ef298; end: 1086ef2ab;  */

undefined8 * FUN_1086ef298(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  uVar2 = *puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c31408(uVar2);
  return puVar1;
}



/* Entry: 1086ef2ac; end: 1086ef2df;  */

undefined8 * FUN_1086ef2ac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000107c31408(uVar1);
  return param_1;
}



/* Entry: 1086ef2e0; end: 1086ef33f;  */

void FUN_1086ef2e0(void)

{
  return;
}



/* Entry: 1086ef340; end: 1086ef3b7;  */

undefined8 FUN_1086ef340(char *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lStack_28;
  
  plVar1 = (long *)(param_1 + 8);
  lStack_28 = *plVar1;
  do {
    if (lStack_28 == 0) goto LAB_1086ef39c;
    plVar2 = plVar1;
    func_0x000107c27ff0(plVar1,&lStack_28,lStack_28 + 1,5);
  } while ((int)plVar2 == 0);
  if (*param_1 == '\x01') {
    FUN_1086ef3b8(param_1);
LAB_1086ef39c:
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 1086ef3b8; end: 1086ef3db;  */

void FUN_1086ef3b8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__17promiseIvE9set_valueEv_1103468a8)(param_1 + 0x10);
    return;
  }
  return;
}



/* Entry: 1086ef3dc; end: 1086ef423;  */

long FUN_1086ef3dc(long param_1)

{
  long lVar1;
  undefined1 uStack_21;
  
  uStack_21 = 0;
  lVar1 = param_1;
  func_0x000107315604(param_1,&uStack_21,1,5);
  if ((int)lVar1 != 0) {
    FUN_1086ef3b8(param_1);
  }
  return param_1 + 0x18;
}



/* Entry: 1086ef424; end: 1086ef4d7;  */

ulong FUN_1086ef424(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *extraout_x8;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_1086ef4d8();
  if (lVar1 == 0) {
    uVar2 = 0x100000000;
    uVar3 = 10;
  }
  else {
    FUN_10865230c(lVar1 + 0x78,param_2,param_3);
    func_0x0001086ef8ac();
    (*extraout_x8)();
    uVar3 = 0;
    uVar2 = 0;
  }
  return uVar2 | uVar3;
}



/* Entry: 1086ef4d8; end: 1086ef4f3;  */

void FUN_1086ef4d8(void)

{
  func_0x000107c29380();
  return;
}



/* Entry: 1086ef4f4; end: 1086ef717;  */

void FUN_1086ef4f4(undefined1 *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  code *extraout_x8;
  undefined8 uVar4;
  undefined1 auStack_1c0 [8];
  long lStack_1b8;
  undefined1 auStack_1b0 [72];
  char cStack_168;
  undefined1 auStack_160 [72];
  char cStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  undefined1 auStack_a8 [72];
  byte bStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(param_2 + 8);
  FUN_1086ef4d8();
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[0x48] = 0;
    return;
  }
  FUN_1086522e0(auStack_1c0);
  lStack_b0 = 0;
  auStack_a8[0] = 0;
  bStack_60 = 0;
  if (cStack_168 == '\0') {
    lVar3 = 0;
  }
  else {
    func_0x00010865274c(auStack_a8,auStack_1b0);
    func_0x000108652728(auStack_1b0);
    lVar3 = lStack_b0;
  }
  lVar1 = lStack_1b8;
  lStack_b0 = lStack_1b8;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_1b8 = lVar3;
  if ((bStack_60 & 1) == 0) {
    func_0x0001086ef8d8();
  }
  else {
    func_0x0001086ef8d8();
    if (lVar1 != 0) {
      if ((bStack_60 & 1) == 0) {
        uVar4 = *(undefined8 *)(lStack_b0 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_58,lStack_b0 + 0x58);
        func_0x000107c27f54(&uStack_110,&UNK_10f2e0451,auStack_58);
        func_0x00010bcc7444(uVar4,0x65,&uStack_110);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
      }
      FUN_1086527cc(auStack_160,auStack_a8);
      cStack_118 = '\x01';
      goto LAB_1086ef61c;
    }
  }
  cStack_118 = '\0';
  auStack_160[0] = 0;
LAB_1086ef61c:
  FUN_10865281c(auStack_a8);
  FUN_1086ef810(auStack_1c0);
  func_0x0001086ef8ac();
  (*extraout_x8)();
  bVar2 = cStack_118 != '\x01';
  if (bVar2) {
    *param_1 = 0;
  }
  else {
    FUN_1086edf6c(param_1,auStack_160);
  }
  param_1[0x48] = !bVar2;
  FUN_10865281c(auStack_160);
  return;
}



/* Entry: 1086ef718; end: 1086ef7b7;  */

bool FUN_1086ef718(long param_1,undefined8 param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_1086ef4d8();
  if (lVar1 != 0) {
    FUN_108651ed8(lVar1 + 0x100,param_2);
    func_0x0001086ef8ac();
    (*extraout_x8)();
  }
  return lVar1 != 0;
}



/* Entry: 1086ef7b8; end: 1086ef7bb;  */

undefined8 * FUN_1086ef7b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a666a0;
  func_0x000107c29384(param_1 + 3);
  func_0x000107c29388(param_1 + 1);
  return param_1;
}



/* Entry: 1086ef7bc; end: 1086ef7cf;  */

void FUN_1086ef7bc(void)

{
  FUN_1086ef7d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ef7d0; end: 1086ef80f;  */

undefined8 * FUN_1086ef7d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a666a0;
  func_0x000107c29384(param_1 + 3);
  func_0x000107c29388(param_1 + 1);
  return param_1;
}



/* Entry: 1086ef810; end: 1086ef883;  */

undefined8 * FUN_1086ef810(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 0xb) != '\0') {
    FUN_108652728(param_1 + 2);
  }
  FUN_10865281c((ulong)&uStack_80 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_10865281c(param_1 + 2);
  return param_1;
}



/* Entry: 1086ef884; end: 1086ef91b;  */

void FUN_1086ef884(void)

{
  return;
}



/* Entry: 1086ef91c; end: 1086efa13;  */

/* WARNING: Possible PIC construction at 0x0001086ef974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086ef988: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086ef978) */
/* WARNING: Removing unreachable block (ram,0x0001086ef980) */
/* WARNING: Removing unreachable block (ram,0x0001086ef98c) */
/* WARNING: Removing unreachable block (ram,0x0001086efa1c) */

void FUN_1086ef91c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = param_1;
  func_0x0001086efe58(param_1,9);
  *puVar1 = &PTR_DAT_110a66700;
  if (param_4 < 6) {
    uVar2 = *(undefined8 *)(&UNK_10df478c8 + (ulong)param_4 * 8);
  }
  else {
    uVar2 = 0xd;
  }
  lVar3 = param_1[8];
  if (lVar3 != 3) {
    param_1[8] = lVar3 + 1;
    *(undefined1 *)((long)param_1 + lVar3 * 0x10 + 0xc) = 0;
    param_1[lVar3 * 2 + 2] = uVar2;
    if ((*(byte *)(param_1 + lVar3 * 2 + 3) & 1) == 0) {
      *(undefined1 *)(param_1 + lVar3 * 2 + 3) = 1;
    }
  }
  return;
}



/* Entry: 1086efa14; end: 1086efabb;  */

void FUN_1086efa14(void)

{
  return;
}



/* Entry: 1086efabc; end: 1086efb03;  */

void FUN_1086efabc(long param_1)

{
  long *plVar1;
  undefined1 auStack_80 [96];
  
  plVar1 = *(long **)(param_1 + 8);
  FUN_1086efb04(auStack_80);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_80,1);
  func_0x0001086efe28();
  return;
}



/* Entry: 1086efb04; end: 1086efcc3;  */

void FUN_1086efb04(undefined8 param_1,ulong *param_2)

{
  code *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined1 auStack_f8 [48];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 *apuStack_98 [3];
  undefined1 uStack_79;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  uint uStack_58;
  
  func_0x000107c278b8(auStack_b0,&UNK_10f4b1c70);
  puVar2 = param_2;
  (**(code **)*param_2)(param_2);
  func_0x0001086efa3c();
  func_0x000107c278b8(auStack_c8,puVar2);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_100 = 0x3f800000;
  (**(code **)(*param_2 + 8))();
  lVar4 = 3;
  do {
    if ((*(byte *)((long)param_2 + 0xc) & 1) == 0) break;
    uStack_60 = *param_2;
    uStack_58 = (uint)param_2[1];
    if (uStack_58 == 0xffffffff) {
      func_0x00010563ab98();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1086efc74);
      (*pcVar1)();
    }
    apuStack_98[0] = &uStack_79;
    (*(code *)(&PTR_FUN_110a66a40)[uStack_58])(auStack_78,apuStack_98,(long)&uStack_60 + 4);
    uVar3 = uStack_60 & 0xff;
    func_0x0001086efa64(uVar3);
    func_0x000107c278b8(apuStack_98,uVar3);
    func_0x000107c27e80(&uStack_120,apuStack_98);
    func_0x000107c27b9c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_98);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
    param_2 = param_2 + 2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  func_0x000107c27f0c(auStack_f8,&uStack_120);
  func_0x000105979974(param_1,auStack_b0,auStack_c8,auStack_f8);
  func_0x000107c27bb0(auStack_f8);
  func_0x000107c278e0(&uStack_120);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  return;
}



/* Entry: 1086efcc4; end: 1086efd03;  */

void FUN_1086efcc4(void)

{
  long *unaff_x19;
  
  FUN_1086efe00();
  func_0x0001086efe44((double)*unaff_x19,0x412e848000000000);
  func_0x0001086efe38();
  func_0x0001086efe28();
  return;
}



/* Entry: 1086efd04; end: 1086efd43;  */

void FUN_1086efd04(void)

{
  long *unaff_x19;
  
  FUN_1086efe00();
  func_0x0001086efe44((double)*unaff_x19,0x408f400000000000);
  func_0x0001086efe38();
  func_0x0001086efe28();
  return;
}



/* Entry: 1086efd44; end: 1086efd83;  */

void FUN_1086efd44(void)

{
  long *unaff_x20;
  
  FUN_1086efe00();
  (**(code **)(*unaff_x20 + 0x20))();
  func_0x0001086efe28();
  return;
}



/* Entry: 1086efd84; end: 1086efd87;  */

undefined8 * FUN_1086efd84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a669e8;
  func_0x00010595d480(param_1 + 1);
  return param_1;
}



/* Entry: 1086efd88; end: 1086efd9b;  */

void FUN_1086efd88(void)

{
  FUN_1086efdd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086efd9c; end: 1086efdc7;  */

undefined8 FUN_1086efd9c(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  ulong uVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  uVar1 = (ulong)*param_3;
  func_0x0001086efa8c(uVar1);
  func_0x00010002b82c(param_1,uVar1);
  func_0x000107c613d0(uVar1);
  func_0x000107c60c50(unaff_x20,unaff_x19,uVar1);
  return unaff_x20;
}



/* Entry: 1086efdc8; end: 1086efdcf;  */

void FUN_1086efdc8(undefined8 param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__19to_stringEi_110346938)(*param_2);
  return;
}



/* Entry: 1086efdd0; end: 1086efdff;  */

undefined8 * FUN_1086efdd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a669e8;
  func_0x00010595d480(param_1 + 1);
  return param_1;
}



/* Entry: 1086efe00; end: 1086efecf;  */

void FUN_1086efe00(undefined8 param_1,ulong *param_2)

{
  code *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined1 auStack_f8 [48];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 *apuStack_98 [3];
  undefined1 uStack_79;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  uint uStack_58;
  
  func_0x000107c278b8(auStack_b0,&UNK_10f4b1c70);
  puVar2 = param_2;
  (**(code **)*param_2)(param_2);
  func_0x0001086efa3c();
  func_0x000107c278b8(auStack_c8,puVar2);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_100 = 0x3f800000;
  (**(code **)(*param_2 + 8))();
  lVar4 = 3;
  do {
    if ((*(byte *)((long)param_2 + 0xc) & 1) == 0) break;
    uStack_60 = *param_2;
    uStack_58 = (uint)param_2[1];
    if (uStack_58 == 0xffffffff) {
      func_0x00010563ab98();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1086efc74);
      (*pcVar1)();
    }
    apuStack_98[0] = &uStack_79;
    (*(code *)(&PTR_FUN_110a66a40)[uStack_58])(auStack_78,apuStack_98,(long)&uStack_60 + 4);
    uVar3 = uStack_60 & 0xff;
    func_0x0001086efa64(uVar3);
    func_0x000107c278b8(apuStack_98,uVar3);
    func_0x000107c27e80(&uStack_120,apuStack_98);
    func_0x000107c27b9c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_98);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
    param_2 = param_2 + 2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  func_0x000107c27f0c(auStack_f8,&uStack_120);
  func_0x000105979974();
  func_0x000107c27bb0(auStack_f8);
  func_0x000107c278e0(&uStack_120);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  return;
}



/* Entry: 1086efed0; end: 1086eff4f;  */

/* WARNING: Possible PIC construction at 0x0001086eff14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086eff18) */
/* WARNING: Removing unreachable block (ram,0x0001086eff34) */
/* WARNING: Removing unreachable block (ram,0x0001086eff24) */
/* WARNING: Removing unreachable block (ram,0x0001086eff38) */

void FUN_1086efed0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = param_1;
  func_0x0001086efe58(param_1,5);
  *puVar1 = &PTR_DAT_110a66aa8;
  uVar2 = (ulong)*(byte *)(param_3 + 8);
  FUN_1086eff50();
  lVar3 = param_1[8];
  if (lVar3 != 3) {
    param_1[8] = lVar3 + 1;
    *(undefined1 *)((long)param_1 + lVar3 * 0x10 + 0xc) = 3;
    param_1[lVar3 * 2 + 2] = uVar2 & 0xffffffff;
    if ((*(byte *)(param_1 + lVar3 * 2 + 3) & 1) == 0) {
      *(undefined1 *)(param_1 + lVar3 * 2 + 3) = 1;
    }
  }
  return;
}



/* Entry: 1086eff50; end: 1086eff73;  */

undefined1 FUN_1086eff50(int param_1)

{
  if (param_1 - 5U < 10) {
    return (&UNK_10df47b00)[param_1 - 5U];
  }
  return 0x14;
}



/* Entry: 1086eff74; end: 1086f009b;  */

void FUN_1086eff74(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = param_1;
  func_0x0001086efe58(param_1,6);
  *puVar1 = &PTR_DAT_110a66ac8;
  uVar2 = (ulong)*(byte *)(param_2 + 8);
  FUN_1086eff50();
  lVar3 = param_1[8];
  if (lVar3 != 3) {
    param_1[8] = lVar3 + 1;
    *(undefined1 *)((long)param_1 + lVar3 * 0x10 + 0xc) = 3;
    param_1[lVar3 * 2 + 2] = uVar2 & 0xffffffff;
    if ((*(byte *)(param_1 + lVar3 * 2 + 3) & 1) == 0) {
      *(undefined1 *)(param_1 + lVar3 * 2 + 3) = 1;
    }
  }
  return;
}



/* Entry: 1086f009c; end: 1086f009f;  */

undefined8 * FUN_1086f009c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a66b50;
  func_0x0001086f00e4(param_1 + 1);
  return param_1;
}



/* Entry: 1086f00a0; end: 1086f00b3;  */

void FUN_1086f00a0(void)

{
  FUN_1086f00b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086f00b4; end: 1086f010f;  */

undefined8 * FUN_1086f00b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a66b50;
  func_0x0001086f00e4(param_1 + 1);
  return param_1;
}



/* Entry: 1086f0110; end: 1086f012f;  */

void FUN_1086f0110(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x0001086f0120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x10))();
  return;
}



/* Entry: 1086f0130; end: 1086f017f;  */

void FUN_1086f0130(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c3194c();
  if (*(char *)(param_2 + 0x440) == '\x01') {
    FUN_1086f03c4(param_1 + 0x18,param_2 + 0x18);
  }
  FUN_1086f0180(param_1,param_2 + 0x448);
  for (puVar1 = *(undefined8 **)(param_2 + 0x460); puVar1 != *(undefined8 **)(param_2 + 0x468);
      puVar1 = puVar1 + 4) {
    uStack_38 = puVar1[3];
    FUN_1086f0a58(param_1 + 0x470,&uStack_38);
    uStack_60 = uStack_38;
    uStack_50 = puVar1[1];
    uStack_58 = *puVar1;
    uStack_48 = puVar1[2];
    uStack_40 = puVar1[3];
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    func_0x0001086f03ac(param_1 + 0x470,&uStack_60);
    func_0x000107c27914(&uStack_58);
    func_0x0001086f04dc(param_1 + 0x448,&uStack_38);
  }
  return;
}



/* Entry: 1086f0180; end: 1086f022b;  */

void FUN_1086f0180(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uStack_628;
  undefined1 auStack_620 [1496];
  undefined8 uStack_48;
  
  for (lVar1 = *param_2; lVar1 != param_2[1]; lVar1 = lVar1 + 0x5d8) {
    uStack_48 = *(undefined8 *)(lVar1 + 0x18);
    func_0x0001086f04dc(param_1 + 0x448,&uStack_48);
    uStack_628 = uStack_48;
    func_0x000107c27a88(auStack_620,lVar1);
    FUN_1086f0394(param_1 + 0x448,&uStack_628);
    func_0x000107c27a10(auStack_620);
    FUN_1086f0a58(param_1 + 0x470,&uStack_48);
  }
  return;
}



/* Entry: 1086f022c; end: 1086f02db;  */

void FUN_1086f022c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  for (puVar1 = (undefined8 *)*param_2; puVar1 != (undefined8 *)param_2[1]; puVar1 = puVar1 + 4) {
    uStack_38 = puVar1[3];
    FUN_1086f0a58(param_1 + 0x470,&uStack_38);
    uStack_60 = uStack_38;
    uStack_50 = puVar1[1];
    uStack_58 = *puVar1;
    uStack_48 = puVar1[2];
    uStack_40 = puVar1[3];
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    func_0x0001086f03ac(param_1 + 0x470,&uStack_60);
    func_0x000107c27914(&uStack_58);
    func_0x0001086f04dc(param_1 + 0x448,&uStack_38);
  }
  return;
}



/* Entry: 1086f02dc; end: 1086f0393;  */

void FUN_1086f02dc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x000105294cc0(param_1 + 3,param_2 + 3);
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  puVar3 = param_2 + 0x8b;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  while (puVar3 = (undefined8 *)*puVar3, puVar3 != (undefined8 *)0x0) {
    func_0x000107c27aa8(param_1 + 0x89,puVar3 + 3);
  }
  puVar3 = param_2 + 0x90;
  while (puVar3 = (undefined8 *)*puVar3, puVar3 != (undefined8 *)0x0) {
    func_0x000104be7704(param_1 + 0x8c,puVar3 + 3);
  }
  FUN_1086f0434(param_2 + 0x89);
  if (param_2[0x91] != 0) {
    func_0x0001086841fc(param_2 + 0x8e,param_2[0x90]);
    param_2[0x90] = 0;
    lVar2 = param_2[0x8f];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(param_2[0x8e] + lVar1 * 8) = 0;
    }
    param_2[0x91] = 0;
  }
  return;
}



/* Entry: 1086f0394; end: 1086f03c3;  */

void FUN_1086f0394(void)

{
  FUN_1086f0750();
  return;
}



/* Entry: 1086f03c4; end: 1086f03e7;  */

undefined8 FUN_1086f03c4(undefined8 param_1)

{
  FUN_1086f03e8();
  return param_1;
}



/* Entry: 1086f03e8; end: 1086f040f;  */

void FUN_1086f03e8(long param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  cVar2 = *(char *)(param_1 + 0x428);
  if (cVar2 != *(char *)(param_2 + 0x428)) {
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x428) == '\x01') {
        func_0x000107c27a60();
        *(undefined1 *)(param_1 + 0x428) = 0;
      }
      return;
    }
    func_0x0001006b7234();
    *(undefined1 *)(param_1 + 0x428) = 1;
    return;
  }
  if (cVar2 != '\0') {
    func_0x00010869ee64();
    func_0x000107c3194c();
    func_0x000107c27c54(unaff_x19 + 0x18,unaff_x20 + 0x18);
    func_0x00010869ce30(unaff_x19 + 0x38,unaff_x20 + 0x38);
    _memcpy(unaff_x19 + 0x50,unaff_x20 + 0x50,0x50);
    func_0x000107c28904(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
    func_0x000107c28904(unaff_x19 + 0xb8,unaff_x20 + 0xb8);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xd0);
    *(undefined4 *)(unaff_x19 + 0xd8) = *(undefined4 *)(unaff_x20 + 0xd8);
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar3;
    func_0x000107c28904(unaff_x19 + 0xe0,unaff_x20 + 0xe0);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x100);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xf8);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x110);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x108);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x120);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x118);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x121);
    *(undefined8 *)(unaff_x19 + 0x129) = *(undefined8 *)(unaff_x20 + 0x129);
    *(undefined8 *)(unaff_x19 + 0x121) = uVar9;
    *(undefined8 *)(unaff_x19 + 0x110) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x108) = uVar5;
    *(undefined8 *)(unaff_x19 + 0x120) = uVar8;
    *(undefined8 *)(unaff_x19 + 0x118) = uVar7;
    *(undefined8 *)(unaff_x19 + 0x100) = uVar4;
    *(undefined8 *)(unaff_x19 + 0xf8) = uVar3;
    FUN_10869ce80(unaff_x19 + 0x138,unaff_x20 + 0x138);
    *(undefined4 *)(unaff_x19 + 0x200) = *(undefined4 *)(unaff_x20 + 0x200);
    FUN_10869d054(unaff_x19 + 0x208,unaff_x20 + 0x208);
    _memcpy(unaff_x19 + 0x220,unaff_x20 + 0x220,0x80);
    func_0x000107c28908(unaff_x19 + 0x2a0,unaff_x20 + 0x2a0);
    uVar1 = *(undefined1 *)(unaff_x20 + 0x2d0);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x2c0);
    *(undefined8 *)(unaff_x19 + 0x2c8) = *(undefined8 *)(unaff_x20 + 0x2c8);
    *(undefined8 *)(unaff_x19 + 0x2c0) = uVar3;
    *(undefined1 *)(unaff_x19 + 0x2d0) = uVar1;
    FUN_10869d0a4(unaff_x19 + 0x2d8,unaff_x20 + 0x2d8);
    FUN_10869d160(unaff_x19 + 0x2f8,unaff_x20 + 0x2f8);
    FUN_10869d378(unaff_x19 + 0x3d8,unaff_x20 + 0x3d8);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x419);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x411);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x3f8);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x410);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x408);
    *(undefined8 *)(unaff_x19 + 0x400) = *(undefined8 *)(unaff_x20 + 0x400);
    *(undefined8 *)(unaff_x19 + 0x3f8) = uVar7;
    *(undefined8 *)(unaff_x19 + 0x410) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x408) = uVar5;
    *(undefined8 *)(unaff_x19 + 0x419) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x411) = uVar3;
    return;
  }
  return;
}



/* Entry: 1086f0410; end: 1086f0433;  */

void FUN_1086f0410(long param_1)

{
  if (*(char *)(param_1 + 0x428) == '\x01') {
    func_0x000107c27a60();
    *(undefined1 *)(param_1 + 0x428) = 0;
  }
  return;
}



/* Entry: 1086f0434; end: 1086f050b;  */

void FUN_1086f0434(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x000108684234(param_1,param_1[2]);
    param_1[2] = 0;
    lVar2 = param_1[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 1086f050c; end: 1086f05a7;  */

long FUN_1086f050c(long *param_1,ulong *param_2)

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
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
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
        if (plVar2[2] == uVar4) {
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



/* Entry: 1086f05a8; end: 1086f05d7;  */

undefined8 FUN_1086f05a8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_1086f05d8(auStack_38);
  FUN_1086f06cc(auStack_38);
  return uVar1;
}



/* Entry: 1086f05d8; end: 1086f06cb;  */

void FUN_1086f05d8(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_1086f068c;
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
    if (uVar8 == uVar3) goto LAB_1086f068c;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_1086f068c:
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



/* Entry: 1086f06cc; end: 1086f06ef;  */

undefined8 FUN_1086f06cc(undefined8 param_1)

{
  FUN_1086f06f0(param_1,0);
  return param_1;
}



/* Entry: 1086f06f0; end: 1086f0707;  */

void FUN_1086f06f0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107c27a10(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1086f0708; end: 1086f074f;  */

void FUN_1086f0708(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c27a10(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1086f0750; end: 1086f0783;  */

void FUN_1086f0750(void)

{
  func_0x0001086f0768();
  return;
}



/* Entry: 1086f0784; end: 1086f0a3f;  */

undefined1  [16] FUN_1086f0784(float param_1,float param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar6;
  ulong extraout_x8_01;
  long lVar7;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined8 *puVar8;
  undefined8 *extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  undefined8 *extraout_x9_03;
  long *extraout_x10;
  long *plVar9;
  long *extraout_x10_00;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  long *plVar10;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar11;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined1 auVar12 [16];
  undefined8 *puStack_68;
  
  func_0x0001086f116c();
  if (unaff_x24 != (undefined8 *)0x0) {
    func_0x0001086f114c();
    if ((bool)in_ZR) {
      unaff_x25 = (undefined8 *)(extraout_x8 & (ulong)unaff_x22);
    }
    else {
      unaff_x25 = unaff_x22;
      if (unaff_x24 <= unaff_x22) {
        uVar6 = 0;
        if (unaff_x24 != (undefined8 *)0x0) {
          uVar6 = (ulong)unaff_x22 / (ulong)unaff_x24;
        }
        unaff_x25 = (undefined8 *)((long)unaff_x22 - uVar6 * (long)unaff_x24);
      }
    }
    puVar11 = *(undefined8 **)(*unaff_x19 + (long)unaff_x25 * 8);
    unaff_x20 = (undefined8 *)0x0;
    uVar6 = extraout_x8;
    if (puVar11 != (undefined8 *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (undefined8 *)*puVar11;
          if (unaff_x20 == (undefined8 *)0x0) goto LAB_1086f0824;
          puVar8 = (undefined8 *)unaff_x20[1];
          puVar11 = unaff_x20;
          if (puVar8 != unaff_x22) break;
          if ((undefined8 *)unaff_x20[2] == unaff_x22) {
            uVar5 = 0;
            goto LAB_1086f0a1c;
          }
        }
        if (((ulong)unaff_x24 & uVar6) == 0) {
          puVar8 = (undefined8 *)((ulong)puVar8 & uVar6);
        }
        else if (unaff_x24 <= puVar8) {
          func_0x0001086f1118();
          uVar6 = extraout_x8_00;
          puVar8 = extraout_x9;
        }
      } while (puVar8 == unaff_x25);
    }
  }
LAB_1086f0824:
  puVar11 = (undefined8 *)0x5f0;
  __Znwm();
  func_0x0001086f1018();
  func_0x000107c27a88();
  func_0x0001086f1158();
  if ((unaff_x24 != (undefined8 *)0x0) && (param_1 <= param_2 * (float)unaff_x24))
  goto LAB_1086f09c0;
  func_0x0001086f10c4();
  bVar3 = unaff_x24 == (undefined8 *)0x3;
  func_0x0001086f1084();
  if (bVar3) {
    unaff_x20 = (undefined8 *)0x2;
  }
  else if (((ulong)unaff_x20 & extraout_x8_01) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar11 = unaff_x20;
  }
  unaff_x24 = (undefined8 *)unaff_x19[1];
  bVar3 = unaff_x24 <= unaff_x20;
  uVar4 = unaff_x20 == unaff_x24;
  if (!bVar3 || (bool)uVar4) {
    if (!bVar3) {
      func_0x0001086f10a8();
      if ((bVar3) && (((ulong)unaff_x24 & (long)unaff_x24 - 1U) == 0)) {
        func_0x0001086f1044();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      if (unaff_x20 <= puVar11) {
        unaff_x20 = puVar11;
      }
      uVar4 = unaff_x20 == unaff_x24;
      if (unaff_x20 < unaff_x24) {
        if (unaff_x20 != (undefined8 *)0x0) goto LAB_1086f088c;
        FUN_1086f0a40();
        unaff_x19[1] = 0;
        unaff_x24 = (undefined8 *)0x0;
      }
      else {
        unaff_x24 = (undefined8 *)unaff_x19[1];
      }
    }
  }
  else {
LAB_1086f088c:
    if ((ulong)unaff_x20 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1086f0a30);
      (*pcVar2)();
    }
    __Znwm((long)unaff_x20 << 3);
    FUN_1086f0a40();
    unaff_x19[1] = (long)unaff_x20;
    lVar7 = *unaff_x19;
    for (puVar11 = (undefined8 *)0x0; uVar4 = unaff_x20 == puVar11, !(bool)uVar4;
        puVar11 = (undefined8 *)((long)puVar11 + 1)) {
      *(undefined8 *)(lVar7 + (long)puVar11 * 8) = 0;
    }
    unaff_x24 = unaff_x20;
    if (unaff_x19[2] != 0) {
      func_0x0001086f1138();
      func_0x0001086f1124();
      lVar7 = extraout_x8_02;
      uVar6 = extraout_x9_00;
      plVar10 = extraout_x10;
      puVar11 = extraout_x11;
      while (plVar9 = plVar10, plVar10 = (long *)*plVar9, plVar10 != (long *)0x0) {
        puVar8 = (undefined8 *)plVar10[1];
        if (((ulong)unaff_x20 & uVar6) == 0) {
          puVar8 = (undefined8 *)((ulong)puVar8 & uVar6);
        }
        else if (unaff_x20 <= puVar8) {
          uVar1 = 0;
          if (unaff_x20 != (undefined8 *)0x0) {
            uVar1 = (ulong)puVar8 / (ulong)unaff_x20;
          }
          puVar8 = (undefined8 *)((long)puVar8 - uVar1 * (long)unaff_x20);
        }
        uVar4 = puVar8 == puVar11;
        if (!(bool)uVar4) {
          if (*(long *)(lVar7 + (long)puVar8 * 8) == 0) {
            *(long **)(lVar7 + (long)puVar8 * 8) = plVar9;
            puVar11 = puVar8;
          }
          else {
            func_0x0001086f1064();
            lVar7 = extraout_x8_03;
            uVar6 = extraout_x9_01;
            plVar10 = extraout_x10_00;
            puVar11 = extraout_x11_00;
          }
        }
      }
    }
  }
  func_0x0001086f114c();
  if ((bool)uVar4) {
    unaff_x25 = (undefined8 *)(extraout_x8_04 & (ulong)unaff_x22);
  }
  else {
    unaff_x25 = unaff_x22;
    if (unaff_x24 <= unaff_x22) {
      uVar6 = 0;
      if (unaff_x24 != (undefined8 *)0x0) {
        uVar6 = (ulong)unaff_x22 / (ulong)unaff_x24;
      }
      unaff_x25 = (undefined8 *)((long)unaff_x22 - uVar6 * (long)unaff_x24);
    }
  }
LAB_1086f09c0:
  puVar11 = *(undefined8 **)(*unaff_x19 + (long)unaff_x25 * 8);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0001086f10f4();
    if (extraout_x9_02 != 0) {
      puVar11 = *(undefined8 **)(extraout_x9_02 + 8);
      lVar7 = extraout_x8_05;
      if (((ulong)unaff_x24 & (long)unaff_x24 - 1U) == 0) {
        puVar11 = (undefined8 *)((ulong)puVar11 & (long)unaff_x24 - 1U);
      }
      else if (unaff_x24 <= puVar11) {
        func_0x0001086f1118();
        lVar7 = extraout_x8_06;
        puVar11 = extraout_x9_03;
      }
      *(undefined8 **)(lVar7 + (long)puVar11 * 8) = puStack_68;
    }
  }
  else {
    *puStack_68 = *puVar11;
    *puVar11 = puStack_68;
  }
  func_0x0001086f10dc();
  FUN_1086f06cc();
  uVar5 = 1;
  unaff_x20 = puStack_68;
LAB_1086f0a1c:
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = unaff_x20;
  return auVar12;
}



/* Entry: 1086f0a40; end: 1086f0a57;  */

void FUN_1086f0a40(long *param_1,long param_2)

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



/* Entry: 1086f0a58; end: 1086f0a87;  */

void FUN_1086f0a58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1086f0a88();
  if (lVar1 != 0) {
    FUN_1086f0b24(param_1,lVar1);
  }
  return;
}



/* Entry: 1086f0a88; end: 1086f0b23;  */

long FUN_1086f0a88(long *param_1,ulong *param_2)

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
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
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
        if (plVar2[2] == uVar4) {
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



/* Entry: 1086f0b24; end: 1086f0b53;  */

undefined8 FUN_1086f0b24(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_1086f0b54(auStack_38);
  FUN_1086f0c48(auStack_38);
  return uVar1;
}



/* Entry: 1086f0b54; end: 1086f0c47;  */

void FUN_1086f0b54(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_1086f0c08;
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
    if (uVar8 == uVar3) goto LAB_1086f0c08;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_1086f0c08:
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



/* Entry: 1086f0c48; end: 1086f0c6b;  */

undefined8 FUN_1086f0c48(undefined8 param_1)

{
  FUN_1086f0c6c(param_1,0);
  return param_1;
}



/* Entry: 1086f0c6c; end: 1086f0c83;  */

void FUN_1086f0c6c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107c27914(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1086f0c84; end: 1086f0ccb;  */

void FUN_1086f0c84(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c27914(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1086f0ccc; end: 1086f0cff;  */

void FUN_1086f0ccc(void)

{
  func_0x0001086f0ce4();
  return;
}



/* Entry: 1086f0d00; end: 1086f0fbb;  */

undefined1  [16] FUN_1086f0d00(float param_1,float param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar6;
  ulong extraout_x8_01;
  long lVar7;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined8 *puVar8;
  undefined8 *extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  undefined8 *extraout_x9_03;
  long *extraout_x10;
  long *plVar9;
  long *extraout_x10_00;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  long *plVar10;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar11;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined1 auVar12 [16];
  undefined8 *puStack_68;
  
  func_0x0001086f116c();
  if (unaff_x24 != (undefined8 *)0x0) {
    func_0x0001086f114c();
    if ((bool)in_ZR) {
      unaff_x25 = (undefined8 *)(extraout_x8 & (ulong)unaff_x22);
    }
    else {
      unaff_x25 = unaff_x22;
      if (unaff_x24 <= unaff_x22) {
        uVar6 = 0;
        if (unaff_x24 != (undefined8 *)0x0) {
          uVar6 = (ulong)unaff_x22 / (ulong)unaff_x24;
        }
        unaff_x25 = (undefined8 *)((long)unaff_x22 - uVar6 * (long)unaff_x24);
      }
    }
    puVar11 = *(undefined8 **)(*unaff_x19 + (long)unaff_x25 * 8);
    unaff_x20 = (undefined8 *)0x0;
    uVar6 = extraout_x8;
    if (puVar11 != (undefined8 *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (undefined8 *)*puVar11;
          if (unaff_x20 == (undefined8 *)0x0) goto LAB_1086f0da0;
          puVar8 = (undefined8 *)unaff_x20[1];
          puVar11 = unaff_x20;
          if (puVar8 != unaff_x22) break;
          if ((undefined8 *)unaff_x20[2] == unaff_x22) {
            uVar5 = 0;
            goto LAB_1086f0f98;
          }
        }
        if (((ulong)unaff_x24 & uVar6) == 0) {
          puVar8 = (undefined8 *)((ulong)puVar8 & uVar6);
        }
        else if (unaff_x24 <= puVar8) {
          func_0x0001086f1118();
          uVar6 = extraout_x8_00;
          puVar8 = extraout_x9;
        }
      } while (puVar8 == unaff_x25);
    }
  }
LAB_1086f0da0:
  puVar11 = (undefined8 *)0x38;
  __Znwm();
  func_0x0001086f1018();
  func_0x000107c27a8c();
  func_0x0001086f1158();
  if ((unaff_x24 != (undefined8 *)0x0) && (param_1 <= param_2 * (float)unaff_x24))
  goto LAB_1086f0f3c;
  func_0x0001086f10c4();
  bVar3 = unaff_x24 == (undefined8 *)0x3;
  func_0x0001086f1084();
  if (bVar3) {
    unaff_x20 = (undefined8 *)0x2;
  }
  else if (((ulong)unaff_x20 & extraout_x8_01) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar11 = unaff_x20;
  }
  unaff_x24 = (undefined8 *)unaff_x19[1];
  bVar3 = unaff_x24 <= unaff_x20;
  uVar4 = unaff_x20 == unaff_x24;
  if (!bVar3 || (bool)uVar4) {
    if (!bVar3) {
      func_0x0001086f10a8();
      if ((bVar3) && (((ulong)unaff_x24 & (long)unaff_x24 - 1U) == 0)) {
        func_0x0001086f1044();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      if (unaff_x20 <= puVar11) {
        unaff_x20 = puVar11;
      }
      uVar4 = unaff_x20 == unaff_x24;
      if (unaff_x20 < unaff_x24) {
        if (unaff_x20 != (undefined8 *)0x0) goto LAB_1086f0e08;
        func_0x0001086f0fbc();
        unaff_x19[1] = 0;
        unaff_x24 = (undefined8 *)0x0;
      }
      else {
        unaff_x24 = (undefined8 *)unaff_x19[1];
      }
    }
  }
  else {
LAB_1086f0e08:
    if ((ulong)unaff_x20 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1086f0fac);
      (*pcVar2)();
    }
    __Znwm((long)unaff_x20 << 3);
    func_0x0001086f0fbc();
    unaff_x19[1] = (long)unaff_x20;
    lVar7 = *unaff_x19;
    for (puVar11 = (undefined8 *)0x0; uVar4 = unaff_x20 == puVar11, !(bool)uVar4;
        puVar11 = (undefined8 *)((long)puVar11 + 1)) {
      *(undefined8 *)(lVar7 + (long)puVar11 * 8) = 0;
    }
    unaff_x24 = unaff_x20;
    if (unaff_x19[2] != 0) {
      func_0x0001086f1138();
      func_0x0001086f1124();
      lVar7 = extraout_x8_02;
      uVar6 = extraout_x9_00;
      plVar10 = extraout_x10;
      puVar11 = extraout_x11;
      while (plVar9 = plVar10, plVar10 = (long *)*plVar9, plVar10 != (long *)0x0) {
        puVar8 = (undefined8 *)plVar10[1];
        if (((ulong)unaff_x20 & uVar6) == 0) {
          puVar8 = (undefined8 *)((ulong)puVar8 & uVar6);
        }
        else if (unaff_x20 <= puVar8) {
          uVar1 = 0;
          if (unaff_x20 != (undefined8 *)0x0) {
            uVar1 = (ulong)puVar8 / (ulong)unaff_x20;
          }
          puVar8 = (undefined8 *)((long)puVar8 - uVar1 * (long)unaff_x20);
        }
        uVar4 = puVar8 == puVar11;
        if (!(bool)uVar4) {
          if (*(long *)(lVar7 + (long)puVar8 * 8) == 0) {
            *(long **)(lVar7 + (long)puVar8 * 8) = plVar9;
            puVar11 = puVar8;
          }
          else {
            func_0x0001086f1064();
            lVar7 = extraout_x8_03;
            uVar6 = extraout_x9_01;
            plVar10 = extraout_x10_00;
            puVar11 = extraout_x11_00;
          }
        }
      }
    }
  }
  func_0x0001086f114c();
  if ((bool)uVar4) {
    unaff_x25 = (undefined8 *)(extraout_x8_04 & (ulong)unaff_x22);
  }
  else {
    unaff_x25 = unaff_x22;
    if (unaff_x24 <= unaff_x22) {
      uVar6 = 0;
      if (unaff_x24 != (undefined8 *)0x0) {
        uVar6 = (ulong)unaff_x22 / (ulong)unaff_x24;
      }
      unaff_x25 = (undefined8 *)((long)unaff_x22 - uVar6 * (long)unaff_x24);
    }
  }
LAB_1086f0f3c:
  puVar11 = *(undefined8 **)(*unaff_x19 + (long)unaff_x25 * 8);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0001086f10f4();
    if (extraout_x9_02 != 0) {
      puVar11 = *(undefined8 **)(extraout_x9_02 + 8);
      lVar7 = extraout_x8_05;
      if (((ulong)unaff_x24 & (long)unaff_x24 - 1U) == 0) {
        puVar11 = (undefined8 *)((ulong)puVar11 & (long)unaff_x24 - 1U);
      }
      else if (unaff_x24 <= puVar11) {
        func_0x0001086f1118();
        lVar7 = extraout_x8_06;
        puVar11 = extraout_x9_03;
      }
      *(undefined8 **)(lVar7 + (long)puVar11 * 8) = puStack_68;
    }
  }
  else {
    *puStack_68 = *puVar11;
    *puVar11 = puStack_68;
  }
  func_0x0001086f10dc();
  FUN_1086f0c48();
  uVar5 = 1;
  unaff_x20 = puStack_68;
LAB_1086f0f98:
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = unaff_x20;
  return auVar12;
}



/* Entry: 1086f0fbc; end: 1086f117f;  */

void FUN_1086f0fbc(long *param_1,long param_2)

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



/* Entry: 1086f1180; end: 1086f11b7;  */

undefined8 ** FUN_1086f1180(long param_1,undefined8 *param_2)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plStack_88;
  undefined8 **ppuStack_80;
  undefined8 **ppuStack_78;
  undefined1 uStack_70;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  FUN_1086f11b8(param_1,*(undefined8 *)(param_1 + 8),*param_2,param_2[1]);
  ppuVar3 = *(undefined8 ***)(param_1 + 0x20);
  puVar2 = (undefined8 *)param_2[3];
  puVar10 = (undefined8 *)param_2[4];
  lVar5 = ((long)puVar10 - (long)puVar2) / 0x18;
  if (0 < lVar5) {
    plVar6 = (long *)(param_1 + 0x28);
    puVar8 = *(undefined8 **)(param_1 + 0x20);
    if ((*plVar6 - (long)puVar8) / 0x18 < lVar5) {
      func_0x00010528d470((long *)(param_1 + 0x18),
                          ((long)puVar8 - *(long *)(param_1 + 0x18)) / 0x18 + lVar5);
      func_0x0001086f18c8();
      func_0x00010528d210();
      ppuVar1 = ppuStack_78 + lVar5 * 3;
      for (lVar5 = lVar5 * 0x18; lVar5 != 0; lVar5 = lVar5 + -0x18) {
        *ppuStack_78 = (undefined8 *)0x0;
        ppuStack_78[1] = (undefined8 *)0x0;
        ppuStack_78[2] = (undefined8 *)0x0;
        puVar10 = (undefined8 *)*puVar2;
        ppuStack_78[1] = (undefined8 *)puVar2[1];
        *ppuStack_78 = puVar10;
        ppuStack_78[2] = (undefined8 *)puVar2[2];
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        ppuStack_78 = ppuStack_78 + 3;
        puVar2 = puVar2 + 3;
      }
      ppuStack_78 = ppuVar1;
      func_0x00010528d284(plVar6,ppuVar3,*(undefined8 *)(param_1 + 0x20));
      func_0x0001086f18a8();
      func_0x00010528d284(plVar6);
      func_0x0001086f1884();
      func_0x00010528d384();
      ppuVar3 = ppuStack_80;
    }
    else {
      lVar9 = (long)puVar8 - (long)ppuVar3;
      if (lVar9 / 0x18 < lVar5) {
        ppuStack_80 = &puStack_60;
        ppuStack_78 = &puStack_58;
        puVar7 = puVar8;
        for (puVar4 = (undefined8 *)(lVar9 + (long)puVar2); puVar4 != puVar10; puVar4 = puVar4 + 3)
        {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          uVar11 = *puVar4;
          puVar7[1] = puVar4[1];
          *puVar7 = uVar11;
          puVar7[2] = puVar4[2];
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar7 = puVar7 + 3;
        }
        uStack_70 = 1;
        plStack_88 = plVar6;
        puStack_60 = puVar8;
        puStack_58 = puVar7;
        func_0x00010528d304(&plStack_88);
        *(undefined8 **)(param_1 + 0x20) = puVar7;
        if (lVar9 < 1) {
          return ppuVar3;
        }
        func_0x0001086f186c();
        lVar5 = lVar9 / 0x18;
      }
      else {
        func_0x0001086f186c();
      }
      func_0x0001086f1794(puVar2,lVar5,ppuVar3);
    }
  }
  return ppuVar3;
}



/* Entry: 1086f11b8; end: 1086f11d7;  */

long * FUN_1086f11b8(long *param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 uStack_80;
  long lStack_70;
  long lStack_68;
  
  lVar4 = (param_4 - param_3) / 0x58;
  if (0 < lVar4) {
    plVar2 = param_1 + 2;
    lVar3 = param_1[1];
    if ((*plVar2 - lVar3) / 0x58 < lVar4) {
      func_0x000107c27ef4(param_1,(lVar3 - *param_1) / 0x58 + lVar4);
      func_0x0001086f18c8();
      func_0x000107c27ee4();
      plVar1 = plStack_88 + lVar4 * 0xb;
      for (lVar4 = lVar4 * 0x58; lVar4 != 0; lVar4 = lVar4 + -0x58) {
        func_0x00010528f540(plStack_88,param_3);
        plStack_88 = plStack_88 + 0xb;
        param_3 = param_3 + 0x58;
      }
      plStack_88 = plVar1;
      func_0x000107c27ee8(plVar2,param_2,param_1[1],plVar1);
      func_0x0001086f18a8();
      func_0x000107c27ee8(plVar2);
      func_0x0001086f1884();
      func_0x000107c27ef0();
      param_2 = plStack_90;
    }
    else {
      lVar5 = lVar3 - (long)param_2;
      if (lVar5 / 0x58 < lVar4) {
        plStack_90 = &lStack_70;
        plStack_88 = &lStack_68;
        plStack_98 = plVar2;
        lStack_70 = lVar3;
        for (lVar4 = lVar5 + param_3; lStack_68 = lVar3, lVar4 != param_4; lVar4 = lVar4 + 0x58) {
          func_0x00010528f540(lVar3,lVar4);
          lVar3 = lStack_68 + 0x58;
        }
        uStack_80 = 1;
        func_0x000107c27eec(&plStack_98);
        param_1[1] = lVar3;
        if (lVar5 < 1) {
          return param_2;
        }
        func_0x0001086f1848();
        lVar4 = lVar5 / 0x58;
      }
      else {
        func_0x0001086f1848();
      }
      FUN_1086f14dc(param_3,lVar4,param_2);
    }
  }
  return param_2;
}



/* Entry: 1086f11d8; end: 1086f1227;  */

void FUN_1086f11d8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_1086f17d4(param_1,param_2);
  FUN_10869e39c(param_1 + 3,param_2 + 0x18);
  func_0x000107c27a54(param_2);
  puVar1 = (undefined8 *)(param_2 + 0x18);
  func_0x00010065adc4(puVar1,*puVar1);
  while (puVar1 != unaff_x19) {
    func_0x00010065ae00();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086f1228; end: 1086f13f3;  */

long * FUN_1086f1228(long *param_1,long *param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 uStack_80;
  long lStack_70;
  long lStack_68;
  
  if (0 < param_5) {
    plVar2 = param_1 + 2;
    lVar3 = param_1[1];
    if ((*plVar2 - lVar3) / 0x58 < param_5) {
      func_0x000107c27ef4(param_1,(lVar3 - *param_1) / 0x58 + param_5);
      func_0x0001086f18c8();
      func_0x000107c27ee4();
      plVar1 = plStack_88 + param_5 * 0xb;
      for (param_5 = param_5 * 0x58; param_5 != 0; param_5 = param_5 + -0x58) {
        func_0x00010528f540(plStack_88,param_3);
        plStack_88 = plStack_88 + 0xb;
        param_3 = param_3 + 0x58;
      }
      plStack_88 = plVar1;
      func_0x000107c27ee8(plVar2,param_2,param_1[1],plVar1);
      func_0x0001086f18a8();
      func_0x000107c27ee8(plVar2);
      func_0x0001086f1884();
      func_0x000107c27ef0();
      param_2 = plStack_90;
    }
    else {
      lVar5 = lVar3 - (long)param_2;
      if (lVar5 / 0x58 < param_5) {
        plStack_90 = &lStack_70;
        plStack_88 = &lStack_68;
        plStack_98 = plVar2;
        lStack_70 = lVar3;
        for (lVar4 = lVar5 + param_3; lStack_68 = lVar3, lVar4 != param_4; lVar4 = lVar4 + 0x58) {
          func_0x00010528f540(lVar3,lVar4);
          lVar3 = lStack_68 + 0x58;
        }
        uStack_80 = 1;
        func_0x000107c27eec(&plStack_98);
        param_1[1] = lVar3;
        if (lVar5 < 1) {
          return param_2;
        }
        func_0x0001086f1848();
        param_5 = lVar5 / 0x58;
      }
      else {
        func_0x0001086f1848();
      }
      FUN_1086f14dc(param_3,param_5,param_2);
    }
  }
  return param_2;
}



/* Entry: 1086f13f4; end: 1086f1487;  */

void FUN_1086f13f4(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar1 = lVar3;
  for (uVar2 = param_2 + (lVar3 - param_4); uVar2 < param_3; uVar2 = uVar2 + 0x58) {
    func_0x00010528f540(lVar1,uVar2);
    lVar1 = lVar1 + 0x58;
  }
  *(long *)(param_1 + 8) = lVar1;
  lVar1 = lVar3 + -0x58;
  param_2 = param_2 + (lVar1 - param_4);
  for (param_4 = param_4 - lVar3; param_4 != 0; param_4 = param_4 + 0x58) {
    FUN_1086f1488(lVar1,param_2);
    param_2 = param_2 + -0x58;
    lVar1 = lVar1 + -0x58;
  }
  return;
}



/* Entry: 1086f1488; end: 1086f14db;  */

long FUN_1086f1488(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c3194c();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  func_0x000107c27b9c(param_1 + 0x28,param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return param_1;
}


