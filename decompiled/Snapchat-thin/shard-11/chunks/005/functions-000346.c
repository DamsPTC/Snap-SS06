/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108664ed0; end: 108664efb;  */

void FUN_108664ed0(long param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108664efc; end: 108664f0b;  */

void FUN_108664efc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108664f0c; end: 108664fe3;  */

ulong * FUN_108664f0c(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *unaff_x19;
  ulong *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  func_0x000108667280();
  if (unaff_x19 + 2 == param_1) {
    puStack_60 = unaff_x19 + 4;
    uStack_50 = param_3[1];
    uStack_58 = *param_3;
    uStack_48 = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_1 = unaff_x19 + 1;
    puStack_40 = (undefined1 *)&puStack_60;
    uStack_38 = param_2;
    FUN_108664fe4(param_1,&UNK_10dd5b8f9,&uStack_38,&puStack_40);
    func_0x000107c27914(&uStack_58);
  }
  else {
    func_0x000107c27cfc(param_1 + 8,param_3);
  }
  func_0x0001086671b4();
  if (*unaff_x19 < unaff_x19[6]) {
    func_0x0001086652fc(unaff_x19 + 1,*(undefined8 *)(unaff_x19[4] + 0x10));
    FUN_108664ffc(unaff_x19 + 4);
  }
  return param_1 + 8;
}



/* Entry: 108664fe4; end: 108664ffb;  */

void FUN_108664fe4(void)

{
  FUN_108665020();
  return;
}



/* Entry: 108664ffc; end: 10866501f;  */

void FUN_108664ffc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  lVar1 = *plVar3;
  plVar2 = (long *)plVar3[1];
  *(long **)(lVar1 + 8) = plVar2;
  *plVar2 = lVar1;
  param_1[2] = param_1[2] + -1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar3);
  return;
}



/* Entry: 108665020; end: 108665037;  */

void FUN_108665020(void)

{
  FUN_108665038();
  return;
}



/* Entry: 108665038; end: 1086650bf;  */

undefined1  [16] FUN_108665038(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_40;
  long alStack_38 [3];
  
  FUN_1086650c0(alStack_38);
  plVar2 = param_1;
  FUN_108665118(param_1,&uStack_40,alStack_38[0] + 0x20);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_108665190(param_1,uStack_40,plVar2,alStack_38[0]);
    lVar3 = alStack_38[0];
    alStack_38[0] = 0;
  }
  FUN_108665284(alStack_38);
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 1086650c0; end: 108665117;  */

void FUN_1086650c0(long param_1)

{
  long lVar1;
  long *extraout_x8;
  
  func_0x000108666ff0();
  lVar1 = 0x58;
  __Znwm();
  *extraout_x8 = lVar1;
  extraout_x8[1] = param_1 + 8;
  extraout_x8[2] = 1;
  FUN_108665210(lVar1 + 0x20,&stack0xffffffffffffffe8,&stack0xffffffffffffffe0);
  return;
}



/* Entry: 108665118; end: 10866518f;  */

long * FUN_108665118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar3;
  long *plVar4;
  
  func_0x0001086672c4();
  plVar3 = (long *)(unaff_x20 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_108664d0c(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_108665180;
    }
    plVar2 = plVar4 + 4;
    FUN_108664d0c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_108665180:
  *unaff_x19 = plVar4;
  return plVar3;
}



/* Entry: 108665190; end: 1086651db;  */

void FUN_108665190(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x000107c27be4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1086651dc; end: 1086651e7;  */

void FUN_1086651dc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_3;
  uStack_20 = *param_4;
  FUN_108665210(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1086651e8; end: 10866520f;  */

void FUN_1086651e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_108665210(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 108665210; end: 10866525b;  */

undefined8 * FUN_108665210(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_2 = (undefined8 *)*param_2;
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
  FUN_10866525c(param_1 + 3,*param_3);
  return param_1;
}



/* Entry: 10866525c; end: 108665283;  */

void FUN_10866525c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 108665284; end: 1086652a7;  */

undefined8 FUN_108665284(undefined8 param_1)

{
  FUN_1086652a8(param_1,0);
  return param_1;
}



/* Entry: 1086652a8; end: 1086652bf;  */

void FUN_1086652a8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010866715c();
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1086652c0; end: 108665327;  */

void FUN_1086652c0(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010866715c();
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 108665328; end: 10866537b;  */

long FUN_108665328(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x000107c27be0();
  if (*param_1 == param_2) {
    *param_1 = lVar1;
  }
  param_1[2] = param_1[2] + -1;
  func_0x00010530d618(param_1[1],param_2);
  return lVar1;
}



/* Entry: 10866537c; end: 10866537f;  */

void FUN_10866537c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61100;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108665380; end: 108665393;  */

void FUN_108665380(void)

{
  func_0x0001086653e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108665394; end: 1086653f7;  */

void FUN_108665394(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010866539c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086653f8; end: 10866548f;  */

void FUN_1086653f8(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *plVar4;
  
  plVar1 = *(long **)(param_2 + 0x38);
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar1 == (long *)(param_1 + 0x20)) {
    func_0x0001086672c4();
    plVar1 = (long *)0x18;
    __Znwm();
    plVar1[2] = unaff_x19;
    lVar3 = *plVar4;
    *(long **)(lVar3 + 8) = plVar1;
    *plVar1 = lVar3;
    *plVar4 = (long)plVar1;
    plVar1[1] = (long)plVar4;
    *(long *)(unaff_x20 + 0x30) = *(long *)(unaff_x20 + 0x30) + 1;
    *(long **)(unaff_x19 + 0x38) = plVar1;
  }
  else if ((plVar4 != plVar1) && (plVar2 = (long *)plVar1[1], plVar4 != plVar2)) {
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    lVar3 = *plVar4;
    *(long **)(lVar3 + 8) = plVar1;
    *plVar1 = lVar3;
    *plVar4 = (long)plVar1;
    plVar1[1] = (long)plVar4;
  }
  return;
}



/* Entry: 108665490; end: 1086654d3;  */

long * FUN_108665490(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c27914(lVar1 + 0x20);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1086654d4; end: 1086654ef;  */

void FUN_1086654d4(long param_1)

{
  FUN_10865696c();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1086654f0; end: 10866551f;  */

void FUN_1086654f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  func_0x000108664160(param_1,*puVar1);
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 108665520; end: 108665667;  */

void FUN_108665520(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [24];
  char cStack_58;
  
  lVar4 = param_1 + 0x68;
  FUN_108662304(lVar4);
  FUN_1086644a4(param_1 + 0x50,lVar4);
  lVar4 = *(long *)(param_1 + 0x78);
  func_0x000108666ee4();
  func_0x000108666b34();
  FUN_10866113c();
  if ((*(byte *)(lVar4 + 0x40) & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x78);
    lVar1 = *(long *)(param_1 + 0x58);
    for (lVar4 = *(long *)(param_1 + 0x50); lVar4 != lVar1; lVar4 = lVar4 + 0x40) {
      if ((*(int *)(lVar4 + 0x18) == 1) && (*(char *)(lVar4 + 0x38) == '\x01')) {
        lVar2 = *(long *)(lVar4 + 0x28);
        for (lVar5 = *(long *)(lVar4 + 0x20); lVar5 != lVar2; lVar5 = lVar5 + 0x38) {
          lVar3 = lVar6 + 0x130;
          func_0x000108667178();
          if (lVar3 == 0) {
            func_0x000108667334();
            FUN_108657bec(auStack_70);
            if (cStack_58 == '\x01') {
              func_0x000108667170(lVar6 + 0x130);
            }
            func_0x000108667218();
          }
        }
      }
    }
  }
  func_0x000108666ef4();
  func_0x000108666f6c();
  func_0x000108666dd8();
  func_0x000108666dc8();
  func_0x000108666ac4();
  func_0x000108666ad4();
  return;
}



/* Entry: 108665668; end: 10866569b;  */

void FUN_108665668(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x68);
  func_0x000108666b34();
  func_0x000108666dd8();
  func_0x000108666dc8();
  func_0x000108666ac4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10866569c; end: 10866597b;  */

void FUN_10866569c(long param_1)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long extraout_x8;
  long lVar10;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1 + 0x90;
  FUN_108662304(lVar4);
  FUN_1086644a4(param_1 + 0xa8,lVar4);
  func_0x000108666f54();
  func_0x000108666e30();
  lVar4 = *(long *)(param_1 + 0xa8);
  lVar1 = *(long *)(param_1 + 0xb0);
  func_0x0001086670e4(lVar1 - lVar4);
  if (!(bool)in_CY || (bool)in_ZR) {
    lVar9 = *(long *)(param_1 + 0xf8);
    lVar10 = *(long *)(param_1 + 0xe0);
    func_0x000108666dac();
    for (; lVar4 != lVar1; lVar4 = lVar4 + 0x40) {
      FUN_108847298(param_1 + 0xc0,lVar4);
      iVar2 = *(int *)(lVar4 + 0x18);
      if (iVar2 == 1) {
        if ((*(char *)(lVar4 + 0x38) != '\x01') ||
           (*(long *)(lVar4 + 0x20) == *(long *)(lVar4 + 0x28))) {
          func_0x000108666adc();
          func_0x00010866693c();
          func_0x000108666d58(0xee);
          func_0x000108666918();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x108665928);
          (*pcVar3)();
        }
      }
      else if ((iVar2 == 0) || (iVar2 == 2)) {
        func_0x000108666968();
        func_0x000108666d50();
        goto LAB_108665890;
      }
      lVar5 = param_1 + 0xc0;
      func_0x0001006760a8(lVar5,lVar10 + 0x58);
      if ((int)lVar5 != 0) {
        uVar7 = *(ulong *)(lVar4 + 0x20);
        uVar8 = *(ulong *)(lVar4 + 0x28);
        do {
          if (uVar7 == uVar8) {
            lStack_98 = 0;
            lStack_90 = 0;
            uStack_88 = 0;
            FUN_108662340((ulong *)(lVar4 + 0x20),*(undefined8 *)(param_1 + 0xf8),&lStack_98,
                          lVar9 + 0x30);
            func_0x000108666b6c();
            break;
          }
          uVar6 = uVar7;
          func_0x0001006760a8();
          uVar7 = uVar7 + 0x38;
        } while ((uVar6 & 1) == 0);
      }
      uVar7 = *(ulong *)(lVar4 + 0x20);
      FUN_108662428(uVar7,*(undefined8 *)(lVar4 + 0x28));
      lStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0x1fc;
      uVar8 = uVar7;
      lStack_98 = extraout_x8 + 0x10;
      func_0x000108666c34();
      func_0x000108667268();
      func_0x000107c2884c(param_1 + 0x50,uVar8);
      func_0x000108667090();
      func_0x000108666de0();
      func_0x000108666f74();
      func_0x000108666ae4();
      if ((uVar7 & 1) == 0) {
        **(undefined1 **)(param_1 + 0x100) = 0;
      }
      func_0x000108666d50();
    }
    FUN_108681a98(param_1 + 0x20,0x203);
    lVar1 = *(long *)(param_1 + 0xb0);
    for (lVar4 = *(long *)(param_1 + 0xa8); lVar4 != lVar1; lVar4 = lVar4 + 0x40) {
      FUN_108847298(&lStack_98,lVar4);
      lStack_68 = lStack_90 - lStack_98;
      lStack_70 = lStack_98;
      FUN_108662450(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),
                    *(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8),&lStack_70,
                    *(undefined8 *)(lVar4 + 0x20),*(undefined8 *)(lVar4 + 0x28),
                    *(undefined8 *)(param_1 + 0x108));
      func_0x000108666b6c();
    }
    func_0x000108681b7c(param_1 + 0x20);
    func_0x000108666be0();
  }
  else {
    func_0x000108666968();
  }
LAB_108665890:
  func_0x000108666f5c();
  func_0x000108666db8();
  func_0x000108667134();
  func_0x000108666ac4();
  func_0x000108666ad4();
  return;
}



/* Entry: 10866597c; end: 1086659af;  */

void FUN_10866597c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x90);
  func_0x000108666e30();
  func_0x000108666db8();
  func_0x000108667134();
  func_0x000108666ac4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086659b0; end: 108665bc7;  */

void FUN_1086659b0(long param_1)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  
  lVar5 = param_1 + 0xb0;
  FUN_10866291c(lVar5);
  FUN_10865a17c(param_1 + 0x20,lVar5);
  func_0x000108666ec4();
  func_0x000108666b54();
  plVar7 = (long *)(param_1 + 0x28);
  lVar5 = *plVar7;
  bVar1 = *(byte *)(param_1 + 0x40);
  lVar6 = *(long *)(param_1 + 0x30);
  func_0x000108666c34();
  func_0x000108666f44();
  func_0x000108667018();
  func_0x000108666de8();
  func_0x000108666b4c();
  func_0x000108666ae4();
  if ((bVar1 & lVar5 != lVar6) != 0) {
    FUN_10865a5a8(param_1 + 0x98,plVar7);
    puVar8 = *(undefined1 **)(param_1 + 0xe8);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    FUN_108662428(uVar4,*(undefined8 *)(param_1 + 0xa0));
    *puVar8 = (char)uVar4;
    func_0x000108666c34();
    func_0x000108666af4();
    func_0x000107c2884c(param_1 + 0x70,uVar4);
    func_0x000108667018();
    func_0x000108666de8();
    cVar2 = *(char *)(param_1 + 0xf9);
    pbVar9 = *(byte **)(param_1 + 0xe8);
    func_0x000107c2882c(param_1 + 0x70);
    func_0x000108666ae4();
    if ((cVar2 == '\x01') && ((*pbVar9 & 1) == 0)) {
      func_0x000108666bd8(param_1 + 0x10,0xe3);
    }
    else {
      func_0x000108666e38();
      func_0x000108666eb4();
      func_0x000108666be0();
    }
    FUN_108648f24(plVar7);
    func_0x000108667120();
    func_0x000108666ac4();
    func_0x000108666ad4();
    return;
  }
  func_0x000108666adc();
  func_0x00010866693c();
  func_0x000108666d58(0xf4);
  func_0x000108666918();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x108665b50);
  (*pcVar3)();
}



/* Entry: 108665bc8; end: 108665bf7;  */

void FUN_108665bc8(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xb0);
  func_0x000108666b54();
  func_0x000108667120();
  func_0x000108666ac4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108665bf8; end: 108666073;  */

void FUN_108665bf8(long *param_1,long *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  long *plVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  byte bVar9;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  ulong *puVar10;
  ulong *extraout_x8;
  ulong *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined1 extraout_w9;
  uint extraout_w9_00;
  undefined8 extraout_x9;
  uint extraout_w10;
  uint uVar11;
  uint extraout_w10_00;
  uint extraout_w10_01;
  ulong uVar12;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar13;
  long *plVar14;
  ulong *puVar15;
  long unaff_x24;
  undefined *unaff_x25;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar15 = (ulong *)(param_1 + 0x3f);
  plVar7 = param_1 + 0x56;
  plVar13 = param_1 + 0x59;
  plVar14 = param_1 + 0x5a;
  bVar9 = *(byte *)(param_1 + 99);
  puVar10 = (ulong *)(ulong)bVar9;
  uVar12 = (ulong)(byte)puVar10[0x21be7fac];
  uVar11 = (uint)(byte)puVar10[0x21be7fac] * 4 + 0x8665c44;
  plVar4 = param_1;
  plVar6 = param_1;
  puVar5 = puVar15;
  switch(bVar9) {
  default:
    FUN_108660f60();
    break;
  case 1:
    FUN_108660f60();
    break;
  case 2:
    plVar4 = plVar7;
  case 6:
    FUN_10866291c(plVar4);
    FUN_10865a17c(puVar15,plVar4);
    func_0x000107c27f9c(plVar7);
code_r0x000108665c6c:
    func_0x000108666f34();
    func_0x000108667110();
    uVar11 = (uint)*puVar15;
    if (uVar11 == 1) {
      if ((char)param_1[0x43] != '\x01') {
code_r0x000108665f64:
        func_0x000108666adc();
        func_0x00010866693c();
        func_0x000108666d58(0xee);
        func_0x000108666918();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x108666018);
        (*pcVar2)();
      }
      in_CY = (ulong)param_1[0x41] <= (ulong)param_1[0x40];
      in_ZR = false;
      if (param_1[0x40] == param_1[0x41]) goto code_r0x000108665f64;
code_r0x000108665ce8:
      param_1[0x57] = 0;
      param_1[0x58] = 0;
      *plVar7 = 0;
      plVar4 = (long *)(param_1[0x5c] + 0x18);
      FUN_1086682a4(plVar14,plVar4,param_1[0x5c] + 0x58);
code_r0x000108665d04:
      puVar10 = (ulong *)*plVar14;
code_r0x000108665d08:
      *plVar13 = (long)puVar10;
code_r0x000108665d0c:
code_r0x000108665d10:
      do {
        func_0x00010866694c();
        uVar11 = extraout_w10;
code_r0x000108665d14:
      } while (uVar11 != 0);
code_r0x000108665d18:
      puVar10 = (ulong *)*plVar13;
code_r0x000108665d1c:
      func_0x000108666be8(puVar10);
      if ((extraout_w8_00 >> 1 & 1) == 0) {
code_r0x000108665d24:
        bVar9 = 3;
code_r0x000108665d28:
        *(byte *)(param_1 + 99) = bVar9;
        puVar15 = (ulong *)*plVar13;
        func_0x00010866692c();
        unaff_x24 = *plVar4;
        if (unaff_x24 == 0) {
          func_0x000107c3a5c0();
          unaff_x24 = *plVar4;
        }
        puVar10 = puVar15 + 2;
code_r0x000108665d48:
code_r0x000108665d4c:
        do {
          if (*puVar10 == 0) {
code_r0x000108665d60:
            func_0x000108666a88();
            puVar10 = extraout_x8_00;
            uVar11 = extraout_w10_01;
            uVar12 = extraout_x11_00;
          }
          else {
            func_0x000108666c88();
            puVar10 = extraout_x8;
            uVar12 = extraout_x11;
            uVar11 = extraout_w10_00;
code_r0x000108665d58:
          }
          if ((uVar12 & 1) != 0) {
            func_0x000108666b74();
            if ((bool)in_ZR) {
              func_0x000108666a54();
              uVar3 = extraout_w8;
              if ((bool)in_CY) {
                uVar3 = extraout_w9;
              }
              func_0x000108666b10();
              *(undefined1 *)plVar4 = uVar3;
              func_0x000108666a2c(0);
              puVar15[0x12] = (ulong)plVar4;
            }
            func_0x000108666b5c();
            *(long *)(extraout_x8_02 + 0x20) = unaff_x24;
            func_0x000108666a10(puVar15[0x12]);
            puVar15[2] = 0;
            return;
          }
code_r0x000108665d68:
        } while ((uVar11 >> 1 & 1) == 0);
      }
code_r0x000108665d6c:
      FUN_10866291c(plVar13);
      plVar6 = plVar13;
code_r0x000108665d74:
      plVar4 = param_1 + 0x44;
      param_2 = plVar6;
code_r0x000108665d7c:
      FUN_10865a17c(plVar4,param_2);
code_r0x000108665d80:
code_r0x000108665d8c:
      func_0x000108666f34();
code_r0x000108665d90:
      func_0x000108666ca4();
      func_0x00010866709c();
      plVar14 = (long *)(ulong)(extraout_w8_01 & extraout_w9_00);
      uStack_68 = 0;
      uStack_60 = 0;
      unaff_x25 = &UNK_110a60998;
code_r0x000108665dac:
      puStack_78 = unaff_x25 + 0x10;
      lStack_70 = 0;
      uStack_58 = 0x1fb;
code_r0x000108665dc0:
      func_0x000108666c34();
      param_2 = plVar4;
code_r0x000108665dc8:
      func_0x000107c2884c(param_1 + 0x49,param_2);
code_r0x000108665dd0:
      func_0x000108667018();
code_r0x000108665dd4:
code_r0x000108665dd8:
      func_0x000108666de8();
code_r0x000108665ddc:
      plVar4 = param_1 + 0x49;
code_r0x000108665de0:
      func_0x000107c2882c(plVar4);
code_r0x000108665de4:
      func_0x000108666ae4();
code_r0x000108665de8:
      if (((ulong)plVar14 & 1) != 0) {
        param_2 = param_1 + 0x45;
        plVar4 = plVar7;
code_r0x000108665df4:
        FUN_10865a5a8(plVar4,param_2);
      }
code_r0x000108665df8:
      plVar13 = (long *)param_1[0x56];
      goto code_r0x000108665dfc;
    }
    in_CY = 1 < uVar11;
    in_ZR = uVar11 == 2;
    if (!(bool)in_ZR) {
      if (uVar11 == 0) goto code_r0x000108665f64;
      goto code_r0x000108665ce8;
    }
    func_0x000108666968();
    goto code_r0x000108665f04;
  case 3:
    goto code_r0x000108665d6c;
  case 7:
    goto code_r0x000108665c6c;
  case 8:
  case 0x2e:
  case 0x55:
  case 0x89:
  case 0xa6:
  case 0xeb:
    goto code_r0x000108665d7c;
  case 9:
  case 0x56:
  case 0xa7:
    goto code_r0x000108665d14;
  case 10:
  case 0x11:
  case 0x12:
  case 0x57:
  case 0x5e:
  case 0x5f:
  case 0xa8:
  case 0xaf:
  case 0xb0:
  case 0xed:
  case 0xf8:
  case 0xf9:
    goto code_r0x000108665e10;
  case 0xb:
  case 0x16:
  case 0x34:
  case 0x42:
  case 0x58:
  case 99:
  case 0x76:
  case 0x7e:
  case 0x96:
  case 0x9b:
  case 0xa1:
  case 0xa9:
  case 0xb4:
  case 199:
  case 0xcf:
  case 0xe2:
  case 0xe6:
  case 0xee:
  case 0xfd:
    goto code_r0x000108665dfc;
  case 0xc:
  case 0x13:
  case 0x59:
  case 0x60:
  case 0x82:
  case 0xaa:
  case 0xb1:
  case 0xd3:
  case 0xe7:
  case 0xef:
  case 0xf3:
  case 0xfa:
    goto code_r0x000108665dc8;
  case 0xd:
  case 0x1c:
  case 0x38:
  case 0x3e:
  case 0x5a:
  case 0x69:
  case 0x7a:
  case 0xab:
  case 0xba:
  case 0xcb:
  case 0xdf:
  case 0xf0:
    goto code_r0x000108665e04;
  case 0xe:
  case 0x5b:
  case 0xac:
  case 0xf5:
    goto code_r0x000108665d28;
  case 0xf:
  case 0x5c:
  case 0xad:
  case 0xf6:
    goto code_r0x000108665df8;
  case 0x10:
  case 0x20:
  case 0x21:
  case 0x3d:
  case 0x5d:
  case 0x6d:
  case 0x6e:
  case 0x73:
  case 0x84:
  case 0xae:
  case 0xbe:
  case 0xbf:
  case 0xc4:
  case 0xd5:
  case 0xdb:
  case 0xe4:
  case 0xf7:
    goto code_r0x000108665dd8;
  case 0x14:
  case 0x17:
  case 0x61:
  case 100:
  case 0x85:
  case 0xb2:
  case 0xb5:
  case 0xd6:
  case 0xfb:
  case 0xfe:
    goto code_r0x000108665de0;
  case 0x15:
  case 0x40:
  case 0x62:
  case 0x7c:
  case 0x99:
  case 0xb3:
  case 0xcd:
  case 0xfc:
    goto code_r0x000108665de8;
  case 0x18:
  case 0x32:
  case 0x65:
  case 0x9c:
  case 0xb6:
    goto code_r0x000108665d1c;
  case 0x19:
  case 0x35:
  case 0x3c:
  case 0x66:
  case 0x77:
  case 0x97:
  case 0xa2:
  case 0xb7:
  case 200:
  case 0xdc:
  case 0xf1:
    goto code_r0x000108665dd0;
  case 0x1a:
  case 0x36:
  case 0x67:
  case 0x78:
  case 0x81:
  case 0xb8:
  case 0xc9:
  case 0xd2:
  case 0xdd:
  case 0xe5:
    goto code_r0x000108665e0c;
  case 0x1b:
  case 0x37:
  case 0x68:
  case 0x79:
  case 0x86:
  case 0xb9:
  case 0xca:
  case 0xd7:
  case 0xde:
    goto code_r0x000108665e28;
  case 0x1d:
  case 0x39:
  case 0x3f:
  case 0x6a:
  case 0x7b:
  case 0x80:
  case 0x83:
  case 0x8b:
  case 0x98:
  case 0xbb:
  case 0xcc:
  case 0xd1:
  case 0xd4:
  case 0xe0:
  case 0xe3:
  case 0xf4:
    goto code_r0x000108665e14;
  case 0x1e:
  case 0x41:
  case 0x6b:
  case 0x7d:
  case 0x9a:
  case 0xbc:
  case 0xce:
    goto code_r0x000108665e00;
  case 0x1f:
  case 0x6c:
  case 0x8c:
  case 0xbd:
    goto code_r0x000108665d10;
  case 0x22:
  case 0x6f:
  case 0x74:
  case 0xc0:
  case 0xc5:
  case 0xe8:
    goto code_r0x000108665df4;
  case 0x23:
  case 0x30:
  case 0x31:
  case 0x71:
  case 0x8f:
  case 0x90:
  case 0xc2:
  case 0xd8:
  case 0xff:
    goto code_r0x000108665d08;
  case 0x24:
  case 0x70:
  case 0xc1:
    goto code_r0x000108665d0c;
  case 0x25:
  case 0x2c:
  case 0x2d:
  case 0x2f:
  case 0x8d:
  case 0x8e:
  case 0x92:
  case 0x93:
  case 0x9d:
  case 0x9e:
    goto code_r0x000108665dc0;
  case 0x26:
    goto code_r0x000108665d60;
  case 0x27:
  case 0x2b:
    goto code_r0x000108665d74;
  case 0x28:
    goto code_r0x000108665d80;
  case 0x29:
    goto code_r0x000108665d4c;
  case 0x2a:
    goto code_r0x000108665d48;
  case 0x33:
  case 0x3a:
  case 0x43:
  case 0x72:
  case 0x75:
  case 0x87:
  case 0xc3:
  case 0xc6:
  case 0xe9:
    goto code_r0x000108665d58;
  case 0x3b:
code_r0x000108665e24:
    uStack_68 = 0;
    goto code_r0x000108665e28;
  case 0x7f:
  case 0x8a:
  case 0xd0:
    goto code_r0x000108665d90;
  case 0x91:
    goto code_r0x000108665d04;
  case 0x94:
  case 0x9f:
    goto code_r0x000108665ddc;
  case 0x95:
  case 0xa0:
    goto code_r0x000108665e18;
  case 0xa3:
  case 0xe1:
    goto code_r0x000108665d68;
  case 0xa4:
  case 0xa5:
    goto code_r0x000108665dac;
  case 0xd9:
    goto code_r0x000108665d18;
  case 0xda:
    goto code_r0x000108665dd4;
  case 0xea:
    goto code_r0x000108665d8c;
  case 0xec:
    goto code_r0x000108665d24;
  case 0xf2:
    goto code_r0x000108665de4;
  }
  uVar12 = *puVar5;
  func_0x000107c27f9c(puVar15);
  func_0x000108667108();
  if ((uVar12 >> 0x20 & 1) == 0) {
    FUN_108661d58();
  }
  else {
    FUN_108662958(param_1 + 2,uVar12);
  }
code_r0x000108665f08:
  func_0x000108666dc0();
  func_0x000108666e28();
  func_0x000108666ac4();
  func_0x000108666ad4();
  return;
code_r0x000108665dfc:
  plVar14 = (long *)param_1[0x57];
code_r0x000108665e00:
  do {
    param_2 = (long *)param_1[0x5f];
code_r0x000108665e04:
    if (plVar13 == plVar14) {
      puStack_78 = (undefined *)0x0;
      lStack_70 = 0;
      goto code_r0x000108665e24;
    }
code_r0x000108665e0c:
    plVar4 = plVar13;
    plVar13 = plVar4;
code_r0x000108665e10:
    func_0x0001006760a8();
code_r0x000108665e14:
    plVar13 = plVar13 + 7;
code_r0x000108665e18:
  } while (((ulong)plVar4 & 1) == 0);
  goto code_r0x000108665e3c;
code_r0x000108665e28:
  FUN_108662340(plVar7,param_2,&puStack_78,param_2 + 6);
  func_0x000108666b6c();
  plVar4 = plVar7;
code_r0x000108665e3c:
  func_0x0001086671e4();
  plVar7 = plVar4;
  func_0x0001086671c0();
  uVar11 = (uint)plVar4 & (uint)plVar7;
  uVar3 = uVar11 == 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_78 = unaff_x25 + 0x10;
  lStack_70 = 0;
  uStack_58 = 0x1fc;
  func_0x000108666c34();
  func_0x000108666af4();
  func_0x000107c2884c(param_1 + 0x4e,plVar7);
  func_0x000108667018();
  func_0x000108666de8();
  func_0x000107c2882c(param_1 + 0x4e);
  func_0x000108666ae4();
  if (((uVar11 & 1) == 0) && (func_0x00010866730c(), (bool)uVar3)) {
    FUN_1086610e8(param_1 + 2,0x1f00e3);
  }
  else {
    func_0x000108666fc0(param_1[0x62]);
    uVar1 = extraout_x9;
    if (!(bool)uVar3) {
      uVar1 = extraout_x8_01;
    }
    ppuVar8 = &puStack_78;
    func_0x00010865ed24(ppuVar8,uVar1);
    func_0x0001086669f8();
    func_0x000108666eb4();
    func_0x0001086669f8();
    puStack_78 = ppuVar8[0xb];
    lStack_70 = (long)ppuVar8[0xc] - (long)puStack_78;
    func_0x000108666eb4();
    func_0x000108666be0();
  }
  func_0x000108666f04();
  func_0x000108666f14();
code_r0x000108665f04:
  func_0x000108666dd0();
  goto code_r0x000108665f08;
}



/* Entry: 108666074; end: 1086660fb;  */

/* WARNING: Removing unreachable block (ram,0x0001086662e8) */

void FUN_108666074(ulong *param_1,ulong param_2,long param_3)

{
  long *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  char cVar4;
  code *pcVar5;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar6;
  bool bVar7;
  ulong *puVar8;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  ulong *puVar9;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  undefined1 extraout_w9;
  ulong *extraout_x9;
  undefined *puVar10;
  long lVar11;
  long extraout_x9_00;
  int extraout_w10;
  undefined8 *puVar12;
  long extraout_x11;
  undefined8 *extraout_x11_00;
  ulong *unaff_x20;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  ulong unaff_x22;
  ulong uVar16;
  ulong *unaff_x23;
  ulong uVar17;
  long unaff_x24;
  ulong unaff_x26;
  ulong *unaff_x27;
  undefined8 in_stack_00000000;
  
  puVar9 = (ulong *)(ulong)(byte)param_1[99];
  puVar10 = &UNK_10df3fd64;
  puVar12 = (undefined8 *)(ulong)*(byte *)((long)puVar9 + 0x10df3fd64);
  puVar8 = param_1;
  switch((byte)param_1[99]) {
  default:
    func_0x000107c27f9c(param_1 + 0x3f);
    func_0x000108667108();
    break;
  case 2:
    func_0x000107c27f9c(param_1 + 0x56);
    func_0x000107c27f9c(param_1 + 0x59);
    func_0x000108667110();
    break;
  case 3:
    func_0x000107c27f9c(param_1 + 0x59);
    func_0x000107c27f9c(param_1 + 0x5a);
    FUN_108648f44(param_1 + 0x56);
    func_0x000108666dd0();
    break;
  case 4:
  case 0x2a:
  case 0x51:
  case 0x85:
  case 0xa2:
  case 0xe7:
    do {
      unaff_x22 = unaff_x22 + 0x30;
code_r0x0001086661dc:
      param_1[0x1e] = unaff_x22;
      in_CY = param_1[0x1d] <= unaff_x22;
      in_ZR = unaff_x22 == param_1[0x1d];
code_r0x0001086661e8:
      if ((bool)in_ZR) {
        uVar16 = param_1[0x19];
        *(undefined1 *)(param_1[0x1b] + 0x48) = *(undefined1 *)((long)param_1 + 0x131);
        func_0x000108666f2c();
        func_0x000108666b3c();
        FUN_108667c48(param_1 + 4,(undefined1 *)((long)param_1 + 0x104),
                      (undefined1 *)((long)param_1 + 0x114),
                      *(ulong *)(uVar16 + 0x60) & 0xfffffffffffffffc);
        puVar13 = *(undefined1 **)(param_1[0x18] + 0x28);
        func_0x000107c2825c(param_1 + 0xe);
        func_0x000108667054();
        (*extraout_x8_00)(puVar13,0x201,&stack0x00000000);
        uVar15 = 0x2000f0;
        if ((param_1[7] & 1) == 0) {
LAB_108666530:
          func_0x000108666adc();
          func_0x00010866693c();
          *(undefined4 *)(puVar13 + 8) = uVar15;
          func_0x000108666918();
LAB_108666540:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x108666544);
          (*pcVar5)();
        }
        uVar16 = param_1[0x18];
        func_0x000108666f2c();
        func_0x000108666b3c();
        if ((*(byte *)(uVar16 + 0xf0) & 1) == 0) {
          lVar11 = *(long *)param_1[0x1c];
          FUN_108657b48(&stack0x00000000,lVar11,((long *)param_1[0x1c])[1] - lVar11);
          func_0x0001052b2b60(uVar16 + 0xd8,&stack0x00000000);
          puVar13 = (undefined1 *)register0x00000008;
          func_0x000107c279c4();
          if ((*(byte *)(uVar16 + 0xf0) & 1) == 0) {
            uVar15 = 0x2000f2;
            goto LAB_108666530;
          }
        }
        func_0x000108667078();
        uVar14 = *(undefined8 *)(uVar16 + 0xd8);
        uVar15 = *(undefined4 *)(extraout_x9_00 + 0x30);
        func_0x00010539283c(extraout_x8_01 + 0x60);
        uVar16 = param_1[0x19];
        FUN_108655060();
        func_0x0001086649e8();
        if ((*(ulong *)(uVar16 + 8) & 1) != 0) {
          func_0x000108666c58();
        }
        func_0x000108666eec(uVar16 + 0x28,(undefined1 *)((long)param_1 + 0x104));
        if ((*(ulong *)(uVar16 + 8) & 1) != 0) {
          func_0x000108666c58();
        }
        func_0x0001086671f0(uVar16 + 0x10);
        if ((*(ulong *)(uVar16 + 8) & 1) != 0) {
          func_0x000108666c58();
        }
        func_0x000108666eec(uVar16 + 0x18,param_1 + 0x24);
        if ((*(ulong *)(uVar16 + 8) & 1) != 0) {
          func_0x000108666c58();
        }
        func_0x00010539283c(uVar16 + 0x20,uVar14);
        *(undefined4 *)(uVar16 + 0x30) = uVar15;
        puVar3 = (undefined8 *)param_1[0x12];
        for (puVar12 = (undefined8 *)param_1[0x11]; puVar12 != puVar3; puVar12 = puVar12 + 2) {
          func_0x000108655070(*puVar12);
          puVar12[1] = 0;
          FUN_1089088c8();
        }
        uVar14 = *(undefined8 *)(param_1[0x18] + 0x28);
        func_0x000107c2825c(param_1 + 0xe);
        func_0x000108667054();
        (*extraout_x8_02)(uVar14,0x204,&stack0x00000000);
        func_0x000108666be0();
        func_0x000108666ebc();
        goto LAB_108666510;
      }
code_r0x0001086661ec:
      unaff_x23 = (ulong *)0x48;
      __Znwm();
      puVar8 = unaff_x23;
      func_0x000108666e78();
      if ((bool)in_CY) {
        func_0x0001086670cc();
        if (extraout_x11 != 0) {
          FUN_108664368();
          goto LAB_108666540;
        }
        func_0x000108666e58();
code_r0x00010866621c:
        func_0x000108667164();
        puVar9 = (ulong *)param_1[6];
code_r0x000108666224:
        *puVar9 = unaff_x22;
        puVar9[1] = (ulong)unaff_x23;
        unaff_x27 = puVar9 + 2;
code_r0x00010866622c:
        puVar9 = (ulong *)param_1[5];
code_r0x000108666230:
        param_2 = param_1[0x11];
        puVar10 = (undefined *)param_1[0x12];
code_r0x000108666234:
        param_3 = (long)puVar10 - param_2;
code_r0x000108666238:
        unaff_x23 = (ulong *)((long)puVar9 - param_3);
code_r0x00010866623c:
        puVar8 = unaff_x23;
        unaff_x23 = puVar8;
code_r0x000108666240:
        _memcpy();
code_r0x000108666244:
        uVar16 = param_1[0x11];
        param_1[0x11] = (ulong)unaff_x23;
        param_1[0x12] = (ulong)unaff_x27;
        func_0x000108666c3c(uVar16);
      }
      else {
        *extraout_x9 = unaff_x22;
        extraout_x9[1] = (ulong)unaff_x23;
        unaff_x27 = extraout_x9 + 2;
code_r0x000108666208:
      }
LAB_108666250:
      param_1[0x1f] = (ulong)unaff_x27;
code_r0x000108666254:
      puVar9 = (ulong *)(ulong)(uint)param_1[0x20];
code_r0x000108666258:
code_r0x00010866625c:
      func_0x0001086670b4(puVar9);
      puVar12 = extraout_x11_00;
code_r0x000108666260:
      param_1[0x12] = (ulong)unaff_x27;
code_r0x000108666268:
      puVar10 = (undefined *)*puVar12;
      puVar9 = (ulong *)puVar12[1];
code_r0x00010866626c:
      puVar9 = (ulong *)((long)puVar9 - (long)puVar10);
code_r0x000108666270:
      func_0x000108666d38(puVar9);
code_r0x000108666274:
code_r0x000108666280:
      puVar9 = param_1 + 0x17;
code_r0x000108666284:
      FUN_10866134c(puVar9);
      param_1[4] = param_1[0x17];
      do {
        func_0x00010866694c();
      } while (extraout_w10 != 0);
      func_0x000108666be8(param_1[4]);
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x26) = 0;
        uVar16 = param_1[4];
        uVar17 = *unaff_x20;
        if (uVar17 == 0) {
          func_0x000107c3a5c0();
          uVar17 = *puVar8;
        }
        plVar1 = (long *)(uVar16 + 0x10);
        do {
          lVar11 = *plVar1;
          if (lVar11 == 0) {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = unaff_x24;
              cVar4 = ExclusiveMonitorsStatus();
            }
            bVar7 = cVar4 == '\0';
            if (bVar7) {
              uVar6 = 1;
              func_0x000108666b74();
              if (bVar7) {
                func_0x000108666a54();
                uVar2 = extraout_w8;
                if ((bool)uVar6) {
                  uVar2 = extraout_w9;
                }
                func_0x000108666b10();
                *(undefined1 *)puVar8 = uVar2;
                func_0x000108666a2c(0);
                *(ulong **)(uVar16 + 0x90) = puVar8;
              }
              func_0x000108666b5c();
              *(ulong *)(extraout_x8 + 0x20) = uVar17;
              func_0x000108666a10(*(undefined8 *)(uVar16 + 0x90));
              *(undefined8 *)(uVar16 + 0x10) = 0;
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar11 >> 1 & 1) == 0);
      }
      func_0x000108667154();
      uVar16 = *puVar8;
      func_0x000108666bd0();
      func_0x000108666b54();
      if ((uVar16 >> 0x20 & 1) != 0) goto LAB_108666348;
code_r0x000108666160:
      puVar9 = (ulong *)param_1[0x1f];
code_r0x000108666164:
code_r0x000108666168:
      puVar9 = (ulong *)puVar9[-1];
code_r0x00010866616c:
      unaff_x23 = (ulong *)(ulong)(uint)puVar9[3];
code_r0x000108666170:
code_r0x000108666174:
      param_1[6] = 0;
      param_1[7] = 0;
code_r0x000108666178:
      param_1[4] = unaff_x26;
      param_1[5] = 0;
      puVar9 = (ulong *)0x205;
code_r0x000108666180:
      *(int *)(param_1 + 8) = (int)puVar9;
code_r0x000108666184:
      func_0x000107c278b8(param_1 + 0x14);
      func_0x000107c28af4(unaff_x23);
      func_0x00010866713c();
      puVar9 = (ulong *)param_1[0x1b];
code_r0x0001086661a4:
      func_0x000108666c64(puVar9);
code_r0x0001086661a8:
code_r0x0001086661ac:
      FUN_108660fe8();
code_r0x0001086661b4:
      func_0x000108666f44();
code_r0x0001086661bc:
      func_0x000108667090();
code_r0x0001086661c4:
      func_0x000108666de0();
      unaff_x22 = param_1[0x1e];
      func_0x000108666b4c();
code_r0x0001086661d0:
      func_0x000108666f3c();
      func_0x000108666c80();
    } while( true );
  case 5:
  case 0x52:
  case 0xa3:
  case 0xfc:
    goto code_r0x000108666170;
  case 6:
  case 0xd:
  case 0xe:
  case 0x53:
  case 0x5a:
  case 0x5b:
  case 0xa4:
  case 0xab:
  case 0xac:
  case 0xe9:
  case 0xf4:
  case 0xf5:
    goto code_r0x00010866626c;
  case 7:
  case 0x12:
  case 0x30:
  case 0x3e:
  case 0x54:
  case 0x5f:
  case 0x72:
  case 0x7a:
  case 0x92:
  case 0x97:
  case 0x9d:
  case 0xa5:
  case 0xb0:
  case 0xc3:
  case 0xcb:
  case 0xde:
  case 0xe2:
  case 0xea:
  case 0xf9:
  case 0xff:
    goto code_r0x000108666258;
  case 8:
  case 0xf:
  case 0x55:
  case 0x5c:
  case 0x7e:
  case 0xa6:
  case 0xad:
  case 0xcf:
  case 0xe3:
  case 0xeb:
  case 0xef:
  case 0xf6:
    goto code_r0x000108666224;
  case 9:
  case 0x18:
  case 0x34:
  case 0x3a:
  case 0x56:
  case 0x65:
  case 0x76:
  case 0xa7:
  case 0xb6:
  case 199:
  case 0xdb:
  case 0xec:
    goto code_r0x000108666260;
  case 10:
  case 0x57:
  case 0xa8:
  case 0xf1:
    goto code_r0x000108666184;
  case 0xb:
  case 0x58:
  case 0xa9:
  case 0xf2:
    goto code_r0x000108666254;
  case 0xc:
  case 0x1c:
  case 0x1d:
  case 0x39:
  case 0x59:
  case 0x69:
  case 0x6a:
  case 0x6f:
  case 0x80:
  case 0xaa:
  case 0xba:
  case 0xbb:
  case 0xc0:
  case 0xd1:
  case 0xd7:
  case 0xe0:
  case 0xf3:
    goto code_r0x000108666234;
  case 0x10:
  case 0x13:
  case 0x5d:
  case 0x60:
  case 0x81:
  case 0xae:
  case 0xb1:
  case 0xd2:
  case 0xf7:
  case 0xfa:
    goto code_r0x00010866623c;
  case 0x11:
  case 0x3c:
  case 0x5e:
  case 0x78:
  case 0x95:
  case 0xaf:
  case 0xc9:
  case 0xf8:
    goto code_r0x000108666244;
  case 0x14:
  case 0x2e:
  case 0x61:
  case 0x98:
  case 0xb2:
    goto code_r0x000108666178;
  case 0x15:
  case 0x31:
  case 0x38:
  case 0x62:
  case 0x73:
  case 0x93:
  case 0x9e:
  case 0xb3:
  case 0xc4:
  case 0xd8:
  case 0xed:
    goto code_r0x00010866622c;
  case 0x16:
  case 0x32:
  case 99:
  case 0x74:
  case 0x7d:
  case 0xb4:
  case 0xc5:
  case 0xce:
  case 0xd9:
  case 0xe1:
    goto code_r0x000108666268;
  case 0x17:
  case 0x33:
  case 100:
  case 0x75:
  case 0x82:
  case 0xb5:
  case 0xc6:
  case 0xd3:
  case 0xda:
    goto code_r0x000108666284;
  case 0x19:
  case 0x35:
  case 0x3b:
  case 0x66:
  case 0x77:
  case 0x7c:
  case 0x7f:
  case 0x87:
  case 0x94:
  case 0xb7:
  case 200:
  case 0xcd:
  case 0xd0:
  case 0xdc:
  case 0xdf:
  case 0xf0:
    goto code_r0x000108666270;
  case 0x1a:
  case 0x3d:
  case 0x67:
  case 0x79:
  case 0x96:
  case 0xb8:
  case 0xca:
  case 0xfe:
    goto code_r0x00010866625c;
  case 0x1b:
  case 0x68:
  case 0x88:
  case 0xb9:
    goto code_r0x00010866616c;
  case 0x1e:
  case 0x6b:
  case 0x70:
  case 0xbc:
  case 0xc1:
  case 0xe4:
    goto LAB_108666250;
  case 0x1f:
  case 0x2c:
  case 0x2d:
  case 0x6d:
  case 0x8b:
  case 0x8c:
  case 0xbe:
  case 0xd4:
  case 0xfb:
    goto code_r0x000108666164;
  case 0x20:
  case 0x6c:
  case 0xbd:
    goto code_r0x000108666168;
  case 0x21:
  case 0x28:
  case 0x29:
  case 0x2b:
  case 0x89:
  case 0x8a:
  case 0x8e:
  case 0x8f:
  case 0x99:
  case 0x9a:
    goto code_r0x00010866621c;
  case 0x22:
    goto code_r0x0001086661bc;
  case 0x23:
  case 0x27:
    goto code_r0x0001086661d0;
  case 0x24:
    goto code_r0x0001086661dc;
  case 0x25:
    goto code_r0x0001086661a8;
  case 0x26:
    goto code_r0x0001086661a4;
  case 0x2f:
  case 0x36:
  case 0x3f:
  case 0x6e:
  case 0x71:
  case 0x83:
  case 0xbf:
  case 0xc2:
  case 0xe5:
    goto code_r0x0001086661b4;
  case 0x37:
    goto code_r0x000108666280;
  case 0x7b:
  case 0x86:
  case 0xcc:
    goto code_r0x0001086661ec;
  case 0x8d:
    goto code_r0x000108666160;
  case 0x90:
  case 0x9b:
    goto code_r0x000108666238;
  case 0x91:
  case 0x9c:
    goto code_r0x000108666274;
  case 0x9f:
  case 0xdd:
    goto code_r0x0001086661c4;
  case 0xa0:
  case 0xa1:
    goto code_r0x000108666208;
  case 0xd5:
    goto code_r0x000108666174;
  case 0xd6:
    goto code_r0x000108666230;
  case 0xe6:
    goto code_r0x0001086661e8;
  case 0xe8:
    goto code_r0x000108666180;
  case 0xee:
    goto code_r0x000108666240;
  case 0xfd:
    goto code_r0x0001086661ac;
  }
  func_0x000108666dc0();
  func_0x000108666e28();
  func_0x000108666ac4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
LAB_108666348:
  uVar16 = param_1[3];
  do {
    in_stack_00000000 = 0;
    lVar11 = uVar16 + 0x10;
    func_0x000108666ab8(lVar11,&stack0x00000000);
    if ((int)lVar11 != 0) {
      func_0x000108666b94();
      break;
    }
  } while (((uint)in_stack_00000000 >> 1 & 1) == 0);
  func_0x0001086671cc();
LAB_108666510:
  func_0x000108666e18();
  func_0x000108666ac4();
  func_0x000108666ad4();
  return;
}



/* Entry: 1086660fc; end: 1086665bf;  */

/* WARNING: Removing unreachable block (ram,0x0001086662e8) */

void FUN_1086660fc(ulong *param_1)

{
  long *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  char cVar4;
  code *pcVar5;
  undefined1 uVar6;
  bool bVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  ulong *puVar11;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  undefined1 extraout_w9;
  ulong *extraout_x9;
  long lVar12;
  long extraout_x9_00;
  int extraout_w10;
  long extraout_x11;
  long *extraout_x11_00;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 auStack_80 [4];
  
  puVar8 = param_1;
  func_0x00010866692c();
  puVar9 = puVar8;
  func_0x000108666dac();
  while( true ) {
    func_0x000108667154();
    uVar16 = *puVar9;
    func_0x000108666bd0();
    func_0x000108666b54();
    if ((uVar16 >> 0x20 & 1) != 0) break;
    uVar15 = *(undefined4 *)(*(long *)(param_1[0x1f] - 8) + 0x18);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = extraout_x8 + 0x10;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 8) = 0x205;
    func_0x000107c278b8(param_1 + 0x14,&UNK_10f4afe60);
    func_0x000107c28af4(uVar15);
    func_0x00010866713c();
    func_0x000108666c64(param_1[0x1b]);
    FUN_108660fe8();
    func_0x000108666f44();
    func_0x000108667090();
    func_0x000108666de0();
    uVar16 = param_1[0x1e];
    func_0x000108666b4c();
    func_0x000108666f3c();
    func_0x000108666c80();
    uVar16 = uVar16 + 0x30;
    param_1[0x1e] = uVar16;
    uVar6 = param_1[0x1d] <= uVar16;
    if (uVar16 == param_1[0x1d]) {
      uVar16 = param_1[0x19];
      *(undefined1 *)(param_1[0x1b] + 0x48) = *(undefined1 *)((long)param_1 + 0x131);
      func_0x000108666f2c();
      func_0x000108666b3c();
      FUN_108667c48(param_1 + 4,(undefined1 *)((long)param_1 + 0x104),
                    (undefined1 *)((long)param_1 + 0x114),
                    *(ulong *)(uVar16 + 0x60) & 0xfffffffffffffffc);
      puVar13 = *(undefined8 **)(param_1[0x18] + 0x28);
      func_0x000107c2825c(param_1 + 0xe);
      func_0x000108667054();
      (*extraout_x8_01)(puVar13,0x201,auStack_80);
      uVar15 = 0x2000f0;
      if ((param_1[7] & 1) == 0) {
LAB_108666530:
        func_0x000108666adc();
        func_0x00010866693c();
        *(undefined4 *)(puVar13 + 1) = uVar15;
        func_0x000108666918();
LAB_108666540:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x108666544);
        (*pcVar5)();
      }
      uVar16 = param_1[0x18];
      func_0x000108666f2c();
      func_0x000108666b3c();
      if ((*(byte *)(uVar16 + 0xf0) & 1) == 0) {
        lVar12 = *(long *)param_1[0x1c];
        FUN_108657b48(auStack_80,lVar12,((long *)param_1[0x1c])[1] - lVar12);
        func_0x0001052b2b60(uVar16 + 0xd8,auStack_80);
        puVar13 = auStack_80;
        func_0x000107c279c4();
        if ((*(byte *)(uVar16 + 0xf0) & 1) == 0) {
          uVar15 = 0x2000f2;
          goto LAB_108666530;
        }
      }
      func_0x000108667078();
      uVar14 = *(undefined8 *)(uVar16 + 0xd8);
      uVar15 = *(undefined4 *)(extraout_x9_00 + 0x30);
      func_0x00010539283c(extraout_x8_02 + 0x60);
      uVar16 = param_1[0x19];
      FUN_108655060();
      func_0x0001086649e8();
      if ((*(ulong *)(uVar16 + 8) & 1) != 0) {
        func_0x000108666c58();
      }
      func_0x000108666eec(uVar16 + 0x28,(undefined1 *)((long)param_1 + 0x104));
      if ((*(ulong *)(uVar16 + 8) & 1) != 0) {
        func_0x000108666c58();
      }
      func_0x0001086671f0(uVar16 + 0x10);
      if ((*(ulong *)(uVar16 + 8) & 1) != 0) {
        func_0x000108666c58();
      }
      func_0x000108666eec(uVar16 + 0x18,param_1 + 0x24);
      if ((*(ulong *)(uVar16 + 8) & 1) != 0) {
        func_0x000108666c58();
      }
      func_0x00010539283c(uVar16 + 0x20,uVar14);
      *(undefined4 *)(uVar16 + 0x30) = uVar15;
      puVar3 = (undefined8 *)param_1[0x12];
      for (puVar13 = (undefined8 *)param_1[0x11]; puVar13 != puVar3; puVar13 = puVar13 + 2) {
        func_0x000108655070(*puVar13);
        puVar13[1] = 0;
        FUN_1089088c8();
      }
      uVar14 = *(undefined8 *)(param_1[0x18] + 0x28);
      func_0x000107c2825c(param_1 + 0xe);
      func_0x000108667054();
      (*extraout_x8_03)(uVar14,0x204,auStack_80);
      func_0x000108666be0();
      func_0x000108666ebc();
      goto LAB_108666510;
    }
    puVar10 = (ulong *)0x48;
    __Znwm();
    puVar9 = puVar10;
    func_0x000108666e78();
    if ((bool)uVar6) {
      func_0x0001086670cc();
      if (extraout_x11 != 0) {
        FUN_108664368();
        goto LAB_108666540;
      }
      func_0x000108666e58();
      func_0x000108667164();
      puVar11 = (ulong *)param_1[6];
      *puVar11 = uVar16;
      puVar11[1] = (ulong)puVar10;
      puVar11 = puVar11 + 2;
      puVar10 = (ulong *)(param_1[5] - (param_1[0x12] - param_1[0x11]));
      puVar9 = puVar10;
      _memcpy();
      uVar16 = param_1[0x11];
      param_1[0x11] = (ulong)puVar10;
      param_1[0x12] = (ulong)puVar11;
      func_0x000108666c3c(uVar16);
    }
    else {
      *extraout_x9 = uVar16;
      extraout_x9[1] = (ulong)puVar10;
      puVar11 = extraout_x9 + 2;
    }
    param_1[0x1f] = (ulong)puVar11;
    func_0x0001086670b4((int)param_1[0x20]);
    param_1[0x12] = (ulong)puVar11;
    func_0x000108666d38(extraout_x11_00[1] - *extraout_x11_00);
    FUN_10866134c(param_1 + 0x17);
    param_1[4] = param_1[0x17];
    do {
      func_0x00010866694c();
    } while (extraout_w10 != 0);
    func_0x000108666be8(param_1[4]);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x26) = 0;
      uVar16 = param_1[4];
      uVar17 = *puVar8;
      if (uVar17 == 0) {
        func_0x000107c3a5c0();
        uVar17 = *puVar9;
      }
      plVar1 = (long *)(uVar16 + 0x10);
      do {
        lVar12 = *plVar1;
        if (lVar12 == 0) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          bVar7 = cVar4 == '\0';
          if (bVar7) {
            uVar6 = 1;
            func_0x000108666b74();
            if (bVar7) {
              func_0x000108666a54();
              uVar2 = extraout_w8;
              if ((bool)uVar6) {
                uVar2 = extraout_w9;
              }
              func_0x000108666b10();
              *(undefined1 *)puVar9 = uVar2;
              func_0x000108666a2c(0);
              *(ulong **)(uVar16 + 0x90) = puVar9;
            }
            func_0x000108666b5c();
            *(ulong *)(extraout_x8_00 + 0x20) = uVar17;
            func_0x000108666a10(*(undefined8 *)(uVar16 + 0x90));
            *(undefined8 *)(uVar16 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar12 >> 1 & 1) == 0);
    }
  }
  uVar16 = param_1[3];
  do {
    auStack_80[0] = 0;
    lVar12 = uVar16 + 0x10;
    func_0x000108666ab8(lVar12,auStack_80);
    if ((int)lVar12 != 0) {
      func_0x000108666b94();
      break;
    }
  } while (((uint)auStack_80[0] >> 1 & 1) == 0);
  func_0x0001086671cc();
LAB_108666510:
  func_0x000108666e18();
  func_0x000108666ac4();
  func_0x000108666ad4();
  return;
}



/* Entry: 1086665c0; end: 1086665eb;  */

void FUN_1086665c0(void)

{
  func_0x000108666f94();
  func_0x000107c27f9c();
  func_0x000108666b54();
  func_0x000108666e18();
  func_0x000108666ac4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086665ec; end: 1086668ef;  */

/* WARNING: Removing unreachable block (ram,0x000108666670) */
/* WARNING: Removing unreachable block (ram,0x00010866674c) */
/* WARNING: Removing unreachable block (ram,0x000108666764) */
/* WARNING: Removing unreachable block (ram,0x00010866675c) */
/* WARNING: Removing unreachable block (ram,0x00010866676c) */
/* WARNING: Removing unreachable block (ram,0x00010866678c) */
/* WARNING: Removing unreachable block (ram,0x000108666784) */
/* WARNING: Removing unreachable block (ram,0x000108666790) */

void FUN_1086665ec(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint *puVar8;
  long lVar9;
  uint extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_w9;
  long *extraout_x9;
  long *plVar10;
  long lVar11;
  long alStack_a0 [5];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar8 = (uint *)(param_1 + 0x20);
  FUN_108660f60();
  uVar3 = *puVar8;
  uVar5 = puVar8[1];
  func_0x000108666bd0();
  func_0x000108666b34();
  lVar9 = *(long *)(param_1 + 0xd0);
  lVar11 = *(long *)(param_1 + 0xb8);
  *(undefined4 *)(lVar9 + 0x38) = 0;
  *(undefined1 *)(lVar9 + 0x3c) = 0;
  *(uint *)(lVar9 + 0x40) = uVar3;
  *(byte *)(lVar9 + 0x44) = (byte)uVar5;
  func_0x000108666e98();
  uVar7 = true;
  uVar6 = 1;
  lVar9 = *extraout_x9;
  lVar2 = extraout_x9[1];
  func_0x000108666c64();
  uVar4 = extraout_w8 & 0xffff | 0x60000;
  if ((bool)uVar7) {
    uVar4 = uVar4 + 1;
  }
  plVar10 = *(long **)(lVar11 + 0x28);
  func_0x000108666dac();
  uStack_78 = 0;
  uStack_70 = 0;
  func_0x0001086672e4();
  func_0x000108667180();
  func_0x000107c278b8(alStack_a0,PTR_DAT_113268ca0);
  func_0x000108666d38(lVar2 - lVar9);
  lVar9 = 0x6b0;
  if (!(bool)uVar6 || (bool)uVar7) {
    lVar9 = 0x6b8;
  }
  func_0x000107c28824(puVar8,alStack_a0,*(undefined8 *)((long)&PTR_s_success_113269028 + lVar9));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_a0);
  FUN_108660fe8(puVar8,uVar4);
  lVar9 = param_1 + 0xa0;
  func_0x000107c2825c();
  alStack_a0[0] = lVar9;
  func_0x0001086671d8(*(undefined8 *)(*plVar10 + 0x18));
  func_0x000108666ecc();
  uStack_78 = 0;
  uStack_70 = 0;
  func_0x000108666dac();
  func_0x0001086672e4();
  func_0x000108667180();
  FUN_108660fe8();
  func_0x000107c2884c(param_1 + 0x20,lVar9);
  func_0x000108666ecc();
  func_0x000108666fe0(*(undefined8 *)(param_1 + 0xc0));
  uVar1 = extraout_w8_00;
  if ((bool)uVar6) {
    uVar1 = extraout_w9;
  }
  func_0x000108666cec(uVar1,param_1 + 0x20);
  if (((byte)uVar5 & 1) != 0) {
    if (0x46 < uVar3 >> 0x11) {
      func_0x000108666d7c();
    }
    func_0x000107c278b8(param_1 + 0x70);
    if (0x2b7 < (uVar3 & 0xffff)) {
      func_0x000108666d64();
    }
    func_0x000108667128();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x70);
  }
  func_0x00010866720c();
  func_0x000108667368();
  func_0x000108666f1c();
  func_0x000108666b4c();
  func_0x000108666df0();
  func_0x000108666c80();
  func_0x000108666ac4();
  func_0x000108666ad4();
  return;
}



/* Entry: 1086668f0; end: 108666917;  */

void FUN_1086668f0(void)

{
  func_0x000108666f94();
  func_0x000107c27f9c();
  func_0x000108666b34();
  func_0x000108666ac4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108666918; end: 1086673b7;  */

void FUN_108666918(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_110346bf8)(param_1,&PTR_DAT_110a60fc8,FUN_108661348);
  return;
}



/* Entry: 1086673b8; end: 10866744f;  */

undefined1  [16] FUN_1086673b8(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  if (param_2 == 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar1 = 1;
  }
  else if (*(ulong *)(param_1 + 0x20) < param_2) {
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    if (param_2 < *(ulong *)(param_1 + 0x28)) {
      uVar2 = (ulong)*(byte *)(param_1 + 8);
      if (1 < uVar2) {
        dVar4 = (double)uVar2;
        _pow(dVar4,(double)(param_2 - 1));
        uVar2 = (ulong)dVar4;
      }
      uVar2 = *(long *)(param_1 + 0x10) * uVar2;
    }
    else {
      uVar2 = *(ulong *)(param_1 + 0x18);
    }
    uVar3 = uVar2 & 0xffffffffffffff00;
    uVar1 = 1;
  }
  auVar5._0_8_ = uVar3 | uVar2 & 0xff;
  auVar5._8_8_ = uVar1;
  return auVar5;
}



/* Entry: 108667450; end: 108667457;  */

void FUN_108667450(void)

{
  return;
}



/* Entry: 108667458; end: 1086674c3;  */

long FUN_108667458(long param_1,long param_2,long param_3)

{
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uStack_31 = (undefined1)((ulong)param_3 >> 8);
  func_0x000107c28458(param_1,&uStack_31);
  uStack_32 = (undefined1)param_3;
  func_0x000107c28458(param_1,&uStack_32);
  func_0x000104bd9994(param_1,*(undefined8 *)(param_1 + 8),param_2,param_2 + param_3);
  return param_1;
}



/* Entry: 1086674c4; end: 1086674ef;  */

void FUN_1086674c4(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uStack_14;
  
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_108667458(param_1,&uStack_14,4);
  return;
}



/* Entry: 1086674f0; end: 1086674f3;  */

long FUN_1086674f0(long param_1,long param_2,long param_3)

{
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uStack_31 = (undefined1)((ulong)param_3 >> 8);
  func_0x000107c28458(param_1,&uStack_31);
  uStack_32 = (undefined1)param_3;
  func_0x000107c28458(param_1,&uStack_32);
  func_0x000104bd9994(param_1,*(undefined8 *)(param_1 + 8),param_2,param_2 + param_3);
  return param_1;
}



/* Entry: 1086674f4; end: 1086679ef;  */

undefined4
FUN_1086674f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 **ppuVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined4 uVar14;
  long extraout_x8;
  undefined **ppuVar15;
  long extraout_x8_00;
  undefined *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long extraout_x11;
  undefined **ppuVar20;
  undefined8 *puStack_128;
  long lStack_120;
  undefined4 *puStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [24];
  byte bStack_e0;
  long lStack_d8;
  long lStack_d0;
  byte bStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  long lStack_b0;
  byte bStack_a0;
  undefined4 uStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  
  ppuVar15 = &PTR_PTR_113280c30;
  if (*(undefined ***)(param_1 + 0x28) != (undefined **)0x0) {
    ppuVar15 = *(undefined ***)(param_1 + 0x28);
  }
  if (((ulong)ppuVar15[2] & 1) == 0) {
    uVar14 = 0;
  }
  else {
    iVar5 = *(int *)(ppuVar15[0xd] + 0x1c);
    if (iVar5 == 5) {
      uVar10 = param_4;
      FUN_108657e30(param_4,param_5);
      uStack_70 = (undefined4)uVar10;
      uStack_6c = (undefined1)((ulong)uVar10 >> 0x20);
      bVar9 = *(undefined ***)(param_1 + 0x28) == (undefined **)0x0;
      ppuVar15 = &PTR_PTR_113280c30;
      if (!bVar9) {
        ppuVar15 = *(undefined ***)(param_1 + 0x28);
      }
      func_0x000108667c34(ppuVar15[0xd]);
      if (bVar9) {
        ppuVar15 = *(undefined ***)(extraout_x8 + 0x10);
      }
      else {
        ppuVar15 = &PTR_PTR_113280818;
      }
      bVar9 = *(undefined ***)(param_1 + 0x20) == (undefined **)0x0;
      ppuVar20 = &PTR_PTR_11327fd48;
      if (!bVar9) {
        ppuVar20 = *(undefined ***)(param_1 + 0x20);
      }
      func_0x000108667c34(ppuVar20[3]);
      if (bVar9) {
        ppuVar20 = *(undefined ***)(extraout_x8_00 + 0x10);
      }
      else {
        ppuVar20 = &PTR_PTR_113280230;
      }
      puStack_88 = (undefined8 *)0x0;
      puStack_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      ppuVar2 = &PTR_PTR_11326cb58;
      if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(param_1 + 0x18);
      }
      func_0x00010865ed24(&uStack_b8,ppuVar2);
      func_0x000108667be4(ppuVar15[4]);
      uStack_98 = *(undefined4 *)(extraout_x11 + 0x30);
      ppuStack_90 = ppuVar20 + 2;
      func_0x000108667c20();
      puVar16 = ppuVar20[5];
      ppuVar2 = ppuVar20 + 5;
      if (((ulong)puVar16 & 1) != 0) {
        ppuVar2 = (undefined **)(puVar16 + 7);
      }
      puVar19 = puStack_88;
      puVar4 = puStack_80;
      for (lVar17 = (long)*(int *)(ppuVar20 + 6) << 3; puStack_88 = puVar19, puStack_80 = puVar4,
          lVar17 != 0; lVar17 = lVar17 + -8) {
        puVar16 = *ppuVar2;
        ppuVar20 = &PTR_PTR_11326cb58;
        if (*(undefined ***)(puVar16 + 0x38) != (undefined **)0x0) {
          ppuVar20 = *(undefined ***)(puVar16 + 0x38);
        }
        func_0x00010865ed24(&uStack_b8,ppuVar20);
        func_0x000108667be4(*(undefined8 *)(puVar16 + 0x30));
        uStack_98 = *(undefined4 *)(puVar16 + 0x40);
        ppuStack_90 = (undefined **)(puVar16 + 0x18);
        func_0x000108667c20();
        ppuVar2 = ppuVar2 + 1;
        puVar19 = puStack_88;
        puVar4 = puStack_80;
      }
      bVar9 = false;
      uStack_b8 = 0;
      bStack_a0 = 0;
      while ((puVar19 != puVar4 && ((bStack_a0 & 1) == 0))) {
        func_0x000108657b5c(&lStack_d8,puVar19[2],puVar19[3]);
        if ((bStack_c0 & 1) != 0) {
          puVar12 = (ulong *)(lStack_d0 - lStack_d8);
          FUN_108657bec(auStack_f8,lStack_d8,puVar12,param_6,param_7);
          if ((bStack_e0 & 1) != 0) {
            func_0x0001086647cc(puVar19[5]);
            while( true ) {
              uVar13 = *(ulong *)puVar19[5];
              puVar3 = (ulong *)puVar19[5];
              if ((uVar13 & 1) != 0) {
                puVar3 = (ulong *)(uVar13 + 7);
              }
              if ((puVar12 == puVar3) || ((bStack_a0 & 1) != 0)) break;
              puVar12 = puVar12 + -1;
              puVar18 = (undefined8 *)(*(ulong *)(*puVar12 + 0x10) & 0xfffffffffffffffc);
              cVar8 = *(char *)((long)puVar18 + 0x17);
              puStack_128 = (undefined8 *)*puVar18;
              if (-1 < (long)cVar8) {
                puStack_128 = puVar18;
              }
              lStack_120 = puVar18[1];
              if (-1 < cVar8) {
                lStack_120 = (long)cVar8;
              }
              uStack_100 = 5;
              ppuVar11 = &puStack_128;
              puStack_108 = &uStack_70;
              func_0x000108664790(ppuVar11,&puStack_108);
              if (((ulong)ppuVar11 & 1) != 0) {
                FUN_1086690c4(&puStack_128,*(ulong *)(*puVar12 + 0x18) & 0xfffffffffffffffc,*puVar19
                              ,puVar19[1],lStack_d8,lStack_d0 - lStack_d8,
                              *(undefined4 *)(puVar19 + 4),param_2,param_3,param_4,param_5,
                              *(undefined4 *)(*puVar12 + 0x20));
                func_0x0001052b2b60(&uStack_b8,&puStack_128);
                func_0x000107c279c4(&puStack_128);
                bVar9 = true;
              }
            }
          }
          func_0x000107c279c4(auStack_f8);
        }
        func_0x000108667c2c();
        puVar19 = puVar19 + 6;
      }
      if ((bStack_a0 & 1) == 0) {
        uVar14 = 5;
        if (!bVar9) {
          uVar14 = 2;
        }
      }
      else {
        puVar19 = (undefined8 *)((ulong)ppuVar15[2] & 0xfffffffffffffffc);
        bVar6 = *(byte *)((long)puVar19 + 0x17);
        ppuVar15 = &PTR_PTR_113280c30;
        if (*(undefined ***)(param_1 + 0x28) != (undefined **)0x0) {
          ppuVar15 = *(undefined ***)(param_1 + 0x28);
        }
        uVar13 = puVar19[1];
        if (-1 < (char)bVar6) {
          uVar13 = (ulong)bVar6;
        }
        puVar4 = (undefined8 *)*puVar19;
        if (-1 < (char)bVar6) {
          puVar4 = puVar19;
        }
        FUN_1086692c8(&lStack_d8,CONCAT71(uStack_b7,uStack_b8),
                      lStack_b0 - CONCAT71(uStack_b7,uStack_b8),puVar4,uVar13,
                      (ulong)ppuVar15[0xc] & 0xfffffffffffffffc);
        if ((bStack_c0 & 1) == 0) {
          uVar14 = 5;
        }
        else {
          lVar17 = param_1;
          FUN_108653db8();
          uVar13 = *(ulong *)(lVar17 + 8);
          if ((uVar13 & 1) != 0) {
            uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
          }
          func_0x00010539283c(lVar17 + 0x60,lStack_d8,lStack_d0 - lStack_d8,uVar13);
          FUN_108653db8(param_1);
          FUN_1086679f0();
          FUN_108667a24(param_1);
          FUN_1089076f4();
          uVar14 = 0;
        }
        func_0x000108667c2c();
      }
      func_0x000108667c18();
      func_0x000108667bb8(&puStack_88);
    }
    else if (iVar5 == 6) {
      lVar17 = *(long *)(ppuVar15[0xd] + 0x10);
      puVar19 = (undefined8 *)(*(ulong *)(lVar17 + 0x18) & 0xfffffffffffffffc);
      bVar6 = *(byte *)((long)puVar19 + 0x17);
      uVar13 = puVar19[1];
      if (-1 < (char)bVar6) {
        uVar13 = (ulong)bVar6;
      }
      puVar18 = (undefined8 *)(*(ulong *)(lVar17 + 0x10) & 0xfffffffffffffffc);
      bVar7 = *(byte *)((long)puVar18 + 0x17);
      puVar4 = (undefined8 *)*puVar19;
      if (-1 < (char)bVar6) {
        puVar4 = puVar19;
      }
      uVar1 = puVar18[1];
      if (-1 < (char)bVar7) {
        uVar1 = (ulong)bVar7;
      }
      puVar19 = (undefined8 *)*puVar18;
      if (-1 < (char)bVar7) {
        puVar19 = puVar18;
      }
      FUN_1086692c8(&uStack_b8,puVar4,uVar13,puVar19,uVar1,(ulong)ppuVar15[0xc] & 0xfffffffffffffffc
                   );
      if (bStack_a0 == '\x01') {
        lVar17 = param_1;
        FUN_108653db8();
        uVar13 = *(ulong *)(lVar17 + 8);
        if ((uVar13 & 1) != 0) {
          uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
        }
        func_0x00010539283c(lVar17 + 0x60,CONCAT71(uStack_b7,uStack_b8),
                            lStack_b0 - CONCAT71(uStack_b7,uStack_b8),uVar13);
        FUN_108653db8(param_1);
        FUN_1086679f0();
        uVar14 = 0;
      }
      else {
        uVar14 = 5;
      }
      func_0x000108667c18();
    }
    else {
      uVar14 = 3;
    }
  }
  return uVar14;
}



/* Entry: 1086679f0; end: 108667a23;  */

void FUN_1086679f0(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x00010890c800();
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  return;
}



/* Entry: 108667a24; end: 108667a33;  */

void FUN_108667a24(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000100684fd0();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 108667a34; end: 108667b6b;  */

void FUN_108667a34(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    uVar12 = param_2[1];
    uVar11 = *param_2;
    uVar13 = param_2[2];
    uVar15 = param_2[5];
    uVar14 = param_2[4];
    puVar8[3] = param_2[3];
    puVar8[2] = uVar13;
    puVar8[5] = uVar15;
    puVar8[4] = uVar14;
    puVar8[1] = uVar12;
    *puVar8 = uVar11;
    puVar8 = puVar8 + 6;
  }
  else {
    puVar9 = (undefined8 *)*param_1;
    lVar10 = (long)puVar8 - (long)puVar9;
    uVar5 = lVar10 / 0x30 + 1;
    if (0x555555555555555 < uVar5) {
      FUN_108667b6c();
LAB_108667b68:
      func_0x000104bd35f4();
      puVar4 = &DAT_10f62a4d8;
      func_0x000104bd47e8();
      if (*(long *)(puVar4 + 0x20) == 0) {
        uVar5 = *(ulong *)(puVar4 + 8);
        if ((uVar5 & 1) != 0) {
          uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        func_0x000100684fd0();
        *(ulong *)(puVar4 + 0x20) = uVar5;
      }
      return;
    }
    uVar2 = ((long)param_1[2] - (long)puVar9) / 0x30;
    uVar7 = uVar2 * 2;
    if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
      uVar7 = uVar5;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar2) {
      uVar7 = 0x555555555555555;
    }
    if (uVar7 == 0) {
      lVar3 = 0;
    }
    else {
      if (0x555555555555555 < uVar7) goto LAB_108667b68;
      lVar3 = uVar7 * 0x30;
      __Znwm();
    }
    puVar1 = (undefined8 *)(lVar3 + lVar10);
    uVar11 = *param_2;
    uVar13 = param_2[3];
    uVar12 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar11;
    puVar1[3] = uVar13;
    puVar1[2] = uVar12;
    uVar11 = param_2[4];
    puVar1[5] = param_2[5];
    puVar1[4] = uVar11;
    puVar6 = puVar1 + (lVar10 / -0x30) * 6;
    for (; puVar9 != puVar8; puVar9 = puVar9 + 6) {
      uVar12 = puVar9[1];
      uVar11 = *puVar9;
      uVar13 = puVar9[2];
      uVar15 = puVar9[5];
      uVar14 = puVar9[4];
      puVar6[3] = puVar9[3];
      puVar6[2] = uVar13;
      puVar6[5] = uVar15;
      puVar6[4] = uVar14;
      puVar6[1] = uVar12;
      *puVar6 = uVar11;
      puVar6 = puVar6 + 6;
    }
    puVar8 = puVar1 + 6;
    uVar5 = *param_1;
    *param_1 = (ulong)(puVar1 + (lVar10 / -0x30) * 6);
    param_1[1] = (ulong)puVar8;
    param_1[2] = lVar3 + uVar7 * 0x30;
    if (uVar5 != 0) {
      __ZdlPv(uVar5);
    }
  }
  param_1[1] = (ulong)puVar8;
  return;
}



/* Entry: 108667b6c; end: 108667b7f;  */

void FUN_108667b6c(void)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (*(long *)(puVar1 + 0x20) == 0) {
    uVar2 = *(ulong *)(puVar1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000100684fd0();
    *(ulong *)(puVar1 + 0x20) = uVar2;
  }
  return;
}



/* Entry: 108667b80; end: 108667be3;  */

void FUN_108667b80(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000100684fd0();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 108667be4; end: 108667c47;  */

void FUN_108667be4(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  long unaff_x29;
  
  puVar3 = (ulong *)(param_1 & 0xfffffffffffffffc);
  puVar1 = (ulong *)*puVar3;
  if (-1 < *(char *)((long)puVar3 + 0x17)) {
    puVar1 = puVar3;
  }
  *(ulong **)(unaff_x29 + -0x98) = puVar1;
  uVar2 = puVar3[1];
  if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)puVar3 + 0x17);
  }
  *(ulong *)(unaff_x29 + -0x90) = uVar2;
  return;
}



/* Entry: 108667c48; end: 108667cdf;  */

void FUN_108667c48(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined8 *extraout_x10;
  undefined4 uStack_1d8;
  undefined1 uStack_1d4;
  undefined1 *puStack_1d0;
  undefined8 *puStack_1c0;
  undefined1 ***pppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_154 [16];
  undefined1 auStack_144 [12];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined4 uStack_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined ***pppuStack_d8;
  undefined8 uStack_d0;
  undefined8 auStack_c8 [6];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR_DAT_110d9ac68;
  puVar1 = param_2;
  uVar3 = param_4;
  func_0x0001009dfe5c();
  uStack_50 = param_2[1];
  uStack_58 = *param_2;
  uStack_48 = *param_3;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  pppuVar2 = &ppuStack_68;
  uVar4 = param_4;
  puStack_60 = puVar1;
  func_0x00010bcd5884(param_1);
  func_0x000108668f74(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_78 = FUN_108667ce0;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = &uStack_e8;
  puStack_f8 = param_6;
  uStack_f0 = param_7;
  uStack_e8 = uVar3;
  uStack_e0 = param_5;
  pppuStack_d8 = pppuVar2;
  uStack_d0 = uVar4;
  puStack_90 = param_3;
  uStack_88 = param_4;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010bcd5604(auStack_c8,&pppuStack_d8);
  func_0x00010bcd58bc(extraout_x8,auStack_c8,&puStack_f8);
  func_0x000108668f74(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_108 = FUN_108667d54;
  uStack_130 = param_1;
  puStack_128 = param_2;
  puStack_120 = param_3;
  ppuStack_110 = &puStack_80;
  func_0x000107c31eb4();
  uStack_138 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_170 = auStack_c8[0];
  uStack_178 = uStack_d0;
  uStack_190 = pppuStack_d8._0_4_;
  uStack_1a0 = uStack_e8;
  uStack_198 = uStack_e0;
  uVar4 = uStack_f0;
  puVar6 = extraout_x10;
  puStack_188 = puVar1;
  uStack_180 = param_5;
  puStack_168 = auStack_154;
  FUN_10866918c(param_6,param_7,puStack_f8,uStack_f0,extraout_x10,param_9,uStack_100);
  uVar7 = (undefined4)param_9;
  if (((ulong)param_6 & 1) == 0) {
    *extraout_x8_00 = 0;
    extraout_x8_00[0x18] = 0;
  }
  else {
    param_6 = auStack_154;
    uVar4 = 0xc;
    puVar6 = param_3;
    uVar3 = extraout_x8;
    FUN_108667ce0(extraout_x8_00,param_6,0x10,auStack_144,0xc,param_3);
    uVar7 = (undefined4)uVar3;
  }
  func_0x000108668f74(uStack_138);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uStack_1a8 = 0x108667e14;
  puStack_1d0 = auStack_154;
  puStack_1c0 = param_3;
  pppuStack_1b0 = &ppuStack_110;
  func_0x00010539283c(param_6 + 0x18);
  FUN_108657e30(uVar4,puVar6);
  uStack_1d8 = (undefined4)uVar4;
  uStack_1d4 = (undefined1)((ulong)uVar4 >> 0x20);
  uVar5 = *(ulong *)(param_6 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  func_0x00010539283c(param_6 + 0x10,&uStack_1d8,5,uVar5);
  *(undefined4 *)(param_6 + 0x20) = uVar7;
  return;
}



/* Entry: 108667ce0; end: 108667d53;  */

void FUN_108667ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 *extraout_x8;
  undefined8 extraout_x10;
  undefined8 unaff_x20;
  undefined4 uStack_168;
  undefined1 uStack_164;
  undefined1 *puStack_160;
  undefined1 auStack_e4 [16];
  undefined1 auStack_d4 [12];
  undefined8 uStack_c8;
  undefined4 uStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [48];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = param_2;
  uStack_60 = param_3;
  func_0x00010bcd5604(auStack_58,&uStack_68);
  func_0x00010bcd58bc(param_1,auStack_58,&puStack_88);
  func_0x000108668f74(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107c31eb4();
  uStack_c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = uStack_80;
  uVar3 = extraout_x10;
  FUN_10866918c(param_6,param_7,puStack_88,uStack_80,extraout_x10,param_9,uStack_90);
  uVar4 = (undefined4)param_9;
  if (((ulong)param_6 & 1) == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
  }
  else {
    param_6 = auStack_e4;
    uVar1 = 0xc;
    FUN_108667ce0(extraout_x8,param_6,0x10,auStack_d4);
    uVar4 = (undefined4)param_1;
    uVar3 = unaff_x20;
  }
  func_0x000108668f74(uStack_c8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puStack_160 = auStack_e4;
  func_0x00010539283c(param_6 + 0x18);
  FUN_108657e30(uVar1,uVar3);
  uStack_168 = (undefined4)uVar1;
  uStack_164 = (undefined1)((ulong)uVar1 >> 0x20);
  uVar2 = *(ulong *)(param_6 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x00010539283c(param_6 + 0x10,&uStack_168,5,uVar2);
  *(undefined4 *)(param_6 + 0x20) = uVar4;
  return;
}



/* Entry: 108667d54; end: 108667e9f;  */

void FUN_108667d54(void)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined1 *in_x4;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 in_x5;
  undefined8 in_x7;
  undefined1 *extraout_x8;
  undefined8 extraout_x10;
  undefined4 unaff_w19;
  undefined8 unaff_x20;
  undefined4 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  undefined1 *puStack_d0;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [12];
  undefined8 uStack_38;
  
  func_0x000107c31eb4();
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = extraout_x10;
  FUN_10866918c(in_x4,in_x5,in_stack_00000008,in_stack_00000010,extraout_x10,in_x7,in_stack_00000000
               );
  uVar3 = (undefined4)in_x7;
  if (((ulong)in_x4 & 1) == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
  }
  else {
    in_x4 = auStack_54;
    in_stack_00000010 = 0xc;
    uVar3 = unaff_w19;
    FUN_108667ce0(extraout_x8,in_x4,0x10,auStack_44);
    uVar2 = unaff_x20;
  }
  func_0x000108668f74(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puStack_d0 = auStack_54;
  func_0x00010539283c(in_x4 + 0x18);
  FUN_108657e30(in_stack_00000010,uVar2);
  uStack_d8 = (undefined4)in_stack_00000010;
  uStack_d4 = (undefined1)((ulong)in_stack_00000010 >> 0x20);
  uVar1 = *(ulong *)(in_x4 + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x00010539283c(in_x4 + 0x10,&uStack_d8,5,uVar1);
  *(undefined4 *)(in_x4 + 0x20) = uVar3;
  return;
}



/* Entry: 108667ea0; end: 108667fcf;  */

bool FUN_108667ea0(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  int extraout_w9;
  long *extraout_x9;
  long *extraout_x9_00;
  undefined8 *extraout_x9_01;
  undefined8 *extraout_x9_02;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  
  plVar8 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  func_0x000108669084(*param_1);
  plVar4 = plVar8;
  if (!(bool)in_ZR) {
    plVar4 = extraout_x9;
  }
  plVar1 = plVar4 + (int)plVar8[1];
  for (lVar12 = (long)(int)plVar8[1] << 3; plVar8 = plVar1, lVar12 != 0; lVar12 = lVar12 + -8) {
    in_ZR = *(undefined ***)(*plVar4 + 0x30) == (undefined **)0x0;
    ppuVar3 = &PTR_PTR_11326cb58;
    if (!(bool)in_ZR) {
      ppuVar3 = *(undefined ***)(*plVar4 + 0x30);
    }
    uVar9 = param_2;
    func_0x0001006933e4(param_2,ppuVar3);
    plVar8 = plVar4;
    if ((uVar9 & 1) != 0) break;
    plVar4 = plVar4 + 1;
  }
  func_0x000108669084(*param_1);
  plVar4 = param_1;
  if (!(bool)in_ZR) {
    plVar4 = extraout_x9_00;
  }
  uVar6 = plVar8 == plVar4 + (int)param_1[1];
  if ((bool)uVar6) {
    bVar7 = false;
  }
  else {
    lVar12 = *plVar8;
    puVar10 = (undefined8 *)(lVar12 + 0x18);
    func_0x000108669084(*puVar10);
    puVar5 = puVar10;
    if (!(bool)uVar6) {
      puVar5 = extraout_x9_01;
    }
    puVar2 = puVar5 + *(int *)(lVar12 + 0x20);
    for (lVar13 = (long)*(int *)(lVar12 + 0x20) << 3; puVar11 = puVar2, lVar13 != 0;
        lVar13 = lVar13 + -8) {
      func_0x000108669008(*puVar5);
      uVar6 = extraout_w9 == 0;
      uVar9 = 0;
      FUN_108664790(&uStack_60,auStack_50);
      puVar11 = puVar5;
      if ((uVar9 & 1) != 0) break;
      puVar5 = puVar5 + 1;
    }
    func_0x000108669084(*(undefined8 *)(lVar12 + 0x18));
    if (!(bool)uVar6) {
      puVar10 = extraout_x9_02;
    }
    bVar7 = puVar11 != puVar10 + *(int *)(lVar12 + 0x20);
  }
  return bVar7;
}



/* Entry: 108667fd0; end: 1086680b3;  */

undefined8 FUN_108667fd0(ulong param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 extraout_x8;
  ulong *puVar6;
  undefined8 extraout_x8_00;
  ulong uVar7;
  long *extraout_x9;
  ulong uVar8;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  long *plVar9;
  long lVar10;
  
  uVar7 = *(ulong *)(param_1 + 0x10);
  uVar5 = (uVar7 & 1) == 0;
  cVar3 = '\0';
  cVar4 = '\0';
  puVar6 = (ulong *)(param_1 + 0x10);
  if (!(bool)uVar5) {
    puVar6 = (ulong *)(uVar7 + 7);
  }
  lVar10 = (long)*(int *)(param_1 + 0x18) << 3;
  uVar7 = param_1;
  do {
    if (lVar10 == 0) {
      plVar9 = (long *)(param_1 + 0x28);
      func_0x000108669084(*plVar9);
      if (!(bool)uVar5) {
        plVar9 = extraout_x9;
      }
      plVar1 = plVar9 + *(int *)(param_1 + 0x30);
      do {
        if (plVar9 == plVar1) {
          return 0;
        }
        puVar6 = (ulong *)(*plVar9 + 0x18);
        uVar8 = *puVar6;
        cVar3 = '\0';
        cVar4 = '\0';
        if ((uVar8 & 1) != 0) {
          puVar6 = (ulong *)(uVar8 + 7);
        }
        lVar10 = (long)*(int *)(*plVar9 + 0x20) << 3;
        while (lVar10 != 0) {
          func_0x000108669008(*(ulong *)(*puVar6 + 0x10) & 0xfffffffffffffffc);
          uVar2 = extraout_x10_00;
          if (cVar3 == cVar4) {
            uVar2 = extraout_x8_00;
          }
          func_0x000108668fc8(uVar2);
          lVar10 = lVar10 + -8;
          puVar6 = puVar6 + 1;
          if ((uVar7 & 1) != 0) {
            return 1;
          }
        }
        plVar9 = plVar9 + 1;
      } while( true );
    }
    func_0x000108669008(*(ulong *)(*puVar6 + 0x10) & 0xfffffffffffffffc);
    uVar2 = extraout_x10;
    if (cVar3 == cVar4) {
      uVar2 = extraout_x8;
    }
    func_0x000108668fc8(uVar2);
    lVar10 = lVar10 + -8;
    puVar6 = puVar6 + 1;
  } while ((uVar7 & 1) == 0);
  return 1;
}



/* Entry: 1086680b4; end: 10866825f;  */

long FUN_1086680b4(long param_1,long param_2,undefined8 param_3,int param_4,long param_5,
                  long param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_60 [16];
  
  iVar4 = (int)&lStack_80;
  ppuVar1 = &PTR_PTR_11326cb58;
  if (*(undefined ***)(param_1 + 0x68) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x68);
  }
  ppuVar7 = &PTR_PTR_113280c30;
  if (*(undefined ***)(param_1 + 0x78) != (undefined **)0x0) {
    ppuVar7 = *(undefined ***)(param_1 + 0x78);
  }
  ppuVar2 = &PTR_PTR_113280bc8;
  if ((undefined **)ppuVar7[0xd] != (undefined **)0x0) {
    ppuVar2 = (undefined **)ppuVar7[0xd];
  }
  if (*(int *)((long)ppuVar2 + 0x1c) == 5) {
    ppuVar7 = (undefined **)ppuVar2[2];
  }
  else {
    ppuVar7 = &PTR_PTR_113280818;
  }
  puVar8 = ppuVar7[4];
  iVar3 = *(int *)(ppuVar7 + 6);
  uVar5 = param_3;
  func_0x0001006933e4(param_3,ppuVar1);
  if ((int)uVar5 != 0) {
    lStack_80 = param_5;
    lStack_78 = param_6;
    func_0x000108669008((ulong)puVar8 & 0xfffffffffffffffc);
    FUN_108664790(&lStack_80,auStack_60);
    if ((iVar4 != 0) && (iVar3 == param_4)) {
      return param_2 + 0x10;
    }
  }
  param_2 = param_2 + 0x28;
  func_0x000107c303b0(param_2,FUN_108668aa8);
  func_0x000107c289c8(&lStack_80,param_5,param_5 + param_6);
  uVar6 = *(ulong *)(param_2 + 8);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  func_0x000107c3024c(param_2 + 0x30,&lStack_80,uVar6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_80);
  *(int *)(param_2 + 0x40) = param_4;
  func_0x000107c29ee4(&lStack_80,param_3);
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  if (*(long *)(param_2 + 0x38) == 0) {
    uVar6 = *(ulong *)(param_2 + 8);
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    func_0x000107c287e0();
    *(ulong *)(param_2 + 0x38) = uVar6;
  }
  func_0x000107c287d0();
  func_0x000107c2a2e0(&lStack_80);
  return param_2 + 0x18;
}



/* Entry: 108668260; end: 1086682a3;  */

ulong FUN_108668260(undefined8 *param_1)

{
  byte *pbVar1;
  
  if (param_1[1] == 5) {
    pbVar1 = (byte *)*param_1;
    return (ulong)*pbVar1 << 0x20 | (ulong)pbVar1[1] << 0x18 | (ulong)pbVar1[2] << 0x10 |
           (ulong)pbVar1[3] << 8 | (ulong)pbVar1[4];
  }
  return 0;
}



/* Entry: 1086682a4; end: 108668367;  */

void FUN_1086682a4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  func_0x000108668b04(auStack_88);
  FUN_108668368(param_1,auStack_88);
  plVar1 = (long *)*param_2;
  FUN_108847238(auStack_70,param_3);
  (**(code **)(*plVar1 + 0x10))(auStack_58,plVar1,auStack_70);
  FUN_1086683b0(auStack_88,auStack_58);
  FUN_108648f24(auStack_50);
  func_0x000107c27914(auStack_70);
  func_0x00010866904c();
  return;
}



/* Entry: 108668368; end: 1086683af;  */

void FUN_108668368(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  func_0x000107c31e9c();
  return;
}



/* Entry: 1086683b0; end: 1086683d7;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1086683b0(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x0001086690b0();
  FUN_108668bf0();
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 1086683d8; end: 10866846b;  */

void FUN_1086683d8(void)

{
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c31eb4();
  FUN_108668cc0(auStack_60);
  FUN_10866846c(extraout_x8,auStack_60);
  (**(code **)(*(long *)*unaff_x20 + 0x20))(auStack_48);
  FUN_1086684b4(auStack_60,auStack_48);
  func_0x00010864a454(auStack_48);
  func_0x00010866904c();
  return;
}



/* Entry: 10866846c; end: 1086684b3;  */

void FUN_10866846c(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  func_0x000107c31e9c();
  return;
}



/* Entry: 1086684b4; end: 10866854b;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1086684b4(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x0001086690b0();
  FUN_108668dc4();
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 10866854c; end: 1086685ef;  */

void FUN_10866854c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [64];
  undefined1 auStack_28 [8];
  
  *param_1 = 0;
  param_1[0x38] = 0;
  func_0x000107c289c4(auStack_28,1000000000,0x4501ad,0);
  (**(code **)(*(long *)*param_2 + 0x30))(auStack_68);
  FUN_108668a1c(param_1,auStack_68);
  FUN_1086566c8(auStack_68);
  func_0x000107c28850(auStack_28);
  func_0x000107c27f98(auStack_28);
  return;
}



/* Entry: 1086685f0; end: 108668653;  */

/* WARNING: Possible PIC construction at 0x000108668620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108668624) */
/* WARNING: Removing unreachable block (ram,0x000108668628) */

bool FUN_1086685f0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  if (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20)) {
    return false;
  }
  func_0x000107c31eb4();
  puVar6 = (ulong *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  puVar7 = (ulong *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  bVar3 = *(byte *)((long)puVar6 + 0x17);
  uVar1 = puVar6[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)puVar7 + 0x17);
  uVar2 = puVar7[1];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (uVar1 == uVar2) {
    puVar5 = (ulong *)*puVar6;
    if (-1 < (char)bVar3) {
      puVar5 = puVar6;
    }
    puVar6 = (ulong *)*puVar7;
    if (-1 < (char)bVar4) {
      puVar6 = puVar7;
    }
    func_0x000107c610b0(puVar5,puVar6);
    return (int)puVar5 == 0;
  }
  return false;
}



/* Entry: 108668654; end: 10866865f;  */

void FUN_108668654(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_3 - param_2 >> 6;
  if ((ulong)(param_1[2] - *param_1 >> 6) < uVar2) {
    FUN_108668738(param_1);
    plVar1 = param_1;
    FUN_10864aaec(param_1,uVar2);
    FUN_108664554(param_1,plVar1);
  }
  else {
    lVar3 = param_1[1] - *param_1;
    if (uVar2 <= (ulong)(lVar3 >> 6)) {
      FUN_108668770(param_2);
      lVar3 = param_1[1];
      while (lVar3 != param_3) {
        lVar3 = lVar3 + -0x40;
        func_0x00010864a504();
      }
      param_1[1] = param_3;
      return;
    }
    FUN_108668770(param_2,param_2 + lVar3);
    param_2 = param_2 + lVar3;
  }
  plVar1 = param_1 + 2;
  FUN_1086645c0(plVar1,param_2,param_3,param_1[1]);
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 108668660; end: 108668737;  */

void FUN_108668660(long *param_1,long param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  
  if ((ulong)(param_1[2] - *param_1 >> 6) < param_4) {
    FUN_108668738(param_1);
    plVar1 = param_1;
    FUN_10864aaec(param_1,param_4);
    FUN_108664554(param_1,plVar1);
  }
  else {
    lVar2 = param_1[1] - *param_1;
    if (param_4 <= (ulong)(lVar2 >> 6)) {
      FUN_108668770(param_2);
      lVar2 = param_1[1];
      while (lVar2 != param_3) {
        lVar2 = lVar2 + -0x40;
        func_0x00010864a504();
      }
      param_1[1] = param_3;
      return;
    }
    FUN_108668770(param_2,param_2 + lVar2);
    param_2 = param_2 + lVar2;
  }
  plVar1 = param_1 + 2;
  FUN_1086645c0(plVar1,param_2,param_3,param_1[1]);
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 108668738; end: 10866876f;  */

void FUN_108668738(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10864a4c4();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 108668770; end: 10866879b;  */

void FUN_108668770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10866879c(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10866879c; end: 1086687f7;  */

undefined1  [16] FUN_10866879c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0x40) {
    FUN_1086687f8(lVar1,param_2);
    lVar1 = lVar1 + 0x40;
    param_4 = param_4 + 0x40;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 1086687f8; end: 108668823;  */

void FUN_1086687f8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c31eb4();
  func_0x000107c27cfc();
  func_0x00010865a558(unaff_x20 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 108668824; end: 10866885b;  */

void FUN_108668824(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_108668908(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x40;
  return;
}



/* Entry: 10866885c; end: 108668907;  */

long FUN_10866885c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10864aaec(param_1,(param_1[1] - *param_1 >> 6) + 1);
  FUN_10864a744(auStack_58,plVar1,param_1[1] - *param_1 >> 6,param_1 + 2);
  FUN_108668908(lStack_48,param_2,param_3);
  lStack_48 = lStack_48 + 0x40;
  FUN_10864a6c4(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x00010864a990(auStack_58);
  return lVar2;
}



/* Entry: 108668908; end: 108668983;  */

undefined8 FUN_108668908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [24];
  
  func_0x000107c27994(auStack_48);
  FUN_10865a17c(auStack_70,param_3);
  FUN_10864cea0(param_1,auStack_48,auStack_70);
  FUN_108648f24(auStack_68);
  func_0x000107c27914(auStack_48);
  return param_1;
}



/* Entry: 108668984; end: 108668a1b;  */

undefined8 FUN_108668984(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  if (((uint)(param_2 >> 0x11) & 0x7fff) < 0x47) {
    puVar2 = (&PTR_DAT_113268bb8)[param_2 >> 0x10 & 0xffff];
  }
  else {
    puVar2 = &UNK_10f3158b1;
  }
  func_0x000107c278b8(auStack_38,puVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x2b8) {
    puVar2 = (&PTR_s_success_113269028)[uVar1];
  }
  else {
    puVar2 = &UNK_10f3158c2;
  }
  func_0x000107c28824(param_1,auStack_38,puVar2);
  func_0x000108669098();
  return param_1;
}



/* Entry: 108668a1c; end: 108668a3f;  */

undefined8 FUN_108668a1c(undefined8 param_1)

{
  FUN_108668a40();
  return param_1;
}



/* Entry: 108668a40; end: 108668a67;  */

void FUN_108668a40(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 != *(char *)(param_2 + 0x38)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x38) == '\x01') {
        func_0x000108649af0();
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
      return;
    }
    FUN_10864c1a8();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c31e1c();
    func_0x000107c3194c();
    func_0x000107c3194c(unaff_x20 + 0x18,unaff_x19 + 0x18);
    *(undefined4 *)(unaff_x20 + 0x30) = *(undefined4 *)(unaff_x19 + 0x30);
    return;
  }
  return;
}



/* Entry: 108668a68; end: 108668aa7;  */

void FUN_108668a68(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000108649af0();
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 108668aa8; end: 108668b2f;  */

void FUN_108668aa8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x48);
  }
  *puVar1 = &PTR_FUN_110a91000;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



/* Entry: 108668b30; end: 108668b6f;  */

void FUN_108668b30(void)

{
  __Znwm(200);
  FUN_108668b70();
  func_0x00010866903c();
  func_0x000107c31e9c();
  return;
}



/* Entry: 108668b70; end: 108668b97;  */

void FUN_108668b70(undefined8 *param_1)

{
  func_0x000107c31510();
  *param_1 = &PTR_FUN_110a61260;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 108668b98; end: 108668b9b;  */

undefined8 * FUN_108668b98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61260;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_108648f24(param_1 + 0x14);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108668b9c; end: 108668baf;  */

void FUN_108668b9c(void)

{
  FUN_108668bb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108668bb0; end: 108668bef;  */

undefined8 * FUN_108668bb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61260;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_108648f24(param_1 + 0x14);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108668bf0; end: 108668c43;  */

undefined8 FUN_108668bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  uint uStack_38;
  
  func_0x000107c31eb4();
  do {
    func_0x000108668f98();
    if ((int)param_1 != 0) {
      FUN_108668c44(unaff_x20 + 0x98,param_3);
      func_0x000108668fb0();
      return param_1;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return param_1;
}



/* Entry: 108668c44; end: 108668ca3;  */

void FUN_108668c44(void)

{
  func_0x000107c31eb4();
  func_0x000108668c70();
  FUN_108668ca4();
  return;
}



/* Entry: 108668ca4; end: 108668cbf;  */

void FUN_108668ca4(long param_1)

{
  func_0x00010864a8e8();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 108668cc0; end: 108668ceb;  */

undefined8 FUN_108668cc0(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_108668cec(auStack_30);
  func_0x000108669018();
  return param_1;
}



/* Entry: 108668cec; end: 108668d2b;  */

void FUN_108668cec(void)

{
  __Znwm(0xb8);
  FUN_108668d2c();
  func_0x00010866903c();
  func_0x000107c31e9c();
  return;
}



/* Entry: 108668d2c; end: 108668d57;  */

void FUN_108668d2c(undefined8 *param_1)

{
  func_0x000107c31510();
  *param_1 = &PTR_FUN_110a612a0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return;
}



/* Entry: 108668d58; end: 108668d5b;  */

undefined8 * FUN_108668d58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a612a0;
  FUN_108668da4(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108668d5c; end: 108668d6f;  */

void FUN_108668d5c(void)

{
  FUN_108668d70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108668d70; end: 108668da3;  */

undefined8 * FUN_108668d70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a612a0;
  FUN_108668da4(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108668da4; end: 108668dc3;  */

void FUN_108668da4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010864a454();
  }
  return;
}



/* Entry: 108668dc4; end: 108668e17;  */

undefined8 FUN_108668dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  uint uStack_38;
  
  func_0x000107c31eb4();
  do {
    func_0x000108668f98();
    if ((int)param_1 != 0) {
      FUN_108668e18(unaff_x20 + 0x98,param_3);
      func_0x000108668fb0();
      return param_1;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return param_1;
}



/* Entry: 108668e18; end: 108668e43;  */

void FUN_108668e18(void)

{
  func_0x000107c31eb4();
  FUN_108668e44();
  FUN_108668e68();
  return;
}



/* Entry: 108668e44; end: 108668e67;  */

void FUN_108668e44(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010864a454();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 108668e68; end: 108668e93;  */

void FUN_108668e68(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 108668e94; end: 108668efb;  */

void FUN_108668e94(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x28;
  lVar1 = param_1 + 0x30;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x000107c27f9c(lVar1);
    lVar1 = lVar2;
    lVar2 = param_1 + 0x38;
  }
  func_0x000107c27f9c(lVar2);
  func_0x000107c27f9c(lVar1);
  func_0x000107c31e98();
  func_0x000107c31ea4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108668efc; end: 108668f37;  */

void FUN_108668efc(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x000107c31ea8();
    func_0x000107c31ed0();
  }
  func_0x000107c31ea4();
  func_0x000107c31e98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}


