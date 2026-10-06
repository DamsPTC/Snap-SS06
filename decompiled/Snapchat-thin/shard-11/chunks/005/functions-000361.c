/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10869aa68; end: 10869ab4b;  */

void FUN_10869aa68(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_58 [24];
  
  func_0x00010869b720();
  FUN_10869ad4c(auStack_58,*(undefined8 *)(param_3 + 0x10),0);
  FUN_108869f84(&lStack_70);
  for (lVar2 = lStack_70 + 8; lVar2 + -8 != lStack_68; lVar2 = lVar2 + 0x18) {
    lVar1 = unaff_x20;
    func_0x00010869af60();
    if ((lVar1 == 0) && (lVar1 = unaff_x19, func_0x00010869af60(), lVar1 == 0)) {
      FUN_10869b200();
      if ((*(byte *)(lVar2 + 8) & 1) == 0) {
        FUN_10867b1ac();
      }
    }
  }
  FUN_10869ae8c(&lStack_70);
  func_0x000107c27ae4(auStack_58);
  return;
}



/* Entry: 10869ab4c; end: 10869abfb;  */

void FUN_10869ab4c(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [56];
  undefined1 auStack_48 [32];
  char cStack_28;
  
  if ((*(char *)(param_1 + 0x120) == '\x01') &&
     (*(char *)(param_1 + 300) != '\x01' || 4 < *(int *)(param_1 + 0x128) - 2U)) {
    FUN_10886b684(auStack_80,param_2,param_1,*(undefined8 *)(param_1 + 0x118));
    func_0x00010869b6f0();
    func_0x00010869b6a4();
    if (cStack_28 == '\x01') {
      func_0x00010869b6ac(auStack_48);
      func_0x00010869b6d8();
      func_0x00010869b6bc();
      func_0x00010869b69c();
      return;
    }
    func_0x00010869b69c();
  }
  func_0x00010869b748();
  return;
}



/* Entry: 10869abfc; end: 10869ac87;  */

void FUN_10869abfc(undefined1 *param_1)

{
  long *plVar1;
  long lStack_50;
  undefined1 auStack_48 [32];
  char cStack_28;
  
  func_0x00010869b4cc(&lStack_50);
  if (cStack_28 == '\x01') {
    func_0x00010869b708();
    if (lStack_50 != 0) {
      plVar1 = &lStack_50;
      FUN_10869b4e4(plVar1);
      FUN_10869b64c(param_1,plVar1);
      goto LAB_10869ac64;
    }
  }
  else {
    func_0x00010869b708();
  }
  *param_1 = 0;
  param_1[0x20] = 0;
LAB_10869ac64:
  FUN_10869af40(auStack_48);
  return;
}



/* Entry: 10869ac88; end: 10869ad4b;  */

void FUN_10869ac88(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_b0 [56];
  undefined1 auStack_78 [32];
  char cStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  byte bStack_40;
  char cStack_38;
  
  func_0x00010869b770(*(undefined8 *)(param_2 + 0x30));
  FUN_10869a650(auStack_50);
  if ((cStack_38 == '\x01') && ((bStack_40 & 1) != 0)) {
    FUN_10886b684(auStack_b0,param_3,param_1,uStack_48);
    func_0x00010869b6f0();
    func_0x00010869b6a4();
    if (cStack_58 == '\x01') {
      func_0x00010869b6ac(auStack_78);
      func_0x00010869b6d8();
      func_0x00010869b6bc();
      func_0x00010869b69c();
      return;
    }
    func_0x00010869b69c();
  }
  func_0x00010869b748();
  return;
}



/* Entry: 10869ad4c; end: 10869ada3;  */

undefined8 * FUN_10869ad4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2;
  FUN_10869ae18(param_2,param_3);
  FUN_10869ada4(param_1,param_2,param_3,uVar1);
  return param_1;
}



/* Entry: 10869ada4; end: 10869ae17;  */

void FUN_10869ada4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010869b720();
    func_0x000107c27dd8();
    FUN_10869ae38();
  }
  uStack_38 = 1;
  func_0x00010867b9d0(&uStack_40);
  return;
}



/* Entry: 10869ae18; end: 10869ae37;  */

long FUN_10869ae18(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  for (; param_1 != (long *)param_2; param_1 = (long *)*param_1) {
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}



/* Entry: 10869ae38; end: 10869ae6b;  */

void FUN_10869ae38(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10869ae6c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10869ae6c; end: 10869ae8b;  */

void FUN_10869ae6c(undefined8 param_1,long *param_2,long param_3,undefined8 *param_4)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    *param_4 = param_2[2];
    param_4 = param_4 + 1;
  }
  return;
}



/* Entry: 10869ae8c; end: 10869aebf;  */

undefined8 FUN_10869ae8c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10869aec0(&uStack_28);
  return param_1;
}



/* Entry: 10869aec0; end: 10869aed7;  */

void FUN_10869aec0(undefined8 *param_1)

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



/* Entry: 10869aed8; end: 10869af27;  */

void FUN_10869aed8(long param_1,undefined8 param_2,undefined4 *param_3)

{
  func_0x000107c27994();
  *(undefined4 *)(param_1 + 0x18) = *param_3;
  return;
}



/* Entry: 10869af28; end: 10869af3f;  */

void FUN_10869af28(long param_1)

{
  func_0x00010869b784();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10869af40; end: 10869afaf;  */

void FUN_10869af40(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10869afb0; end: 10869b1af;  */

undefined1  [16] FUN_10869afb0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  long *aplStack_58 [3];
  
  uVar7 = *param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar5 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10869b05c;
          uVar5 = plVar8[1];
          if (uVar5 != uVar7) break;
          if (plVar8[2] == uVar7) {
            uVar2 = 0;
            goto LAB_10869b188;
          }
        }
        if ((uVar9 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar9 <= uVar5) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar5 / uVar9;
          }
          uVar5 = uVar5 - uVar1 * uVar9;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_10869b05c:
  FUN_10869b1b0(aplStack_58,param_1,uVar7);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    func_0x000107c28a7c(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar3 * uVar9;
      }
    }
  }
  plVar8 = aplStack_58[0];
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
    *(long **)(lVar4 + unaff_x23 * 8) = plVar6;
    if (*aplStack_58[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        uVar7 = uVar7 - uVar3 * uVar9;
      }
      *(long **)(lVar4 + uVar7 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x000107c28a88(aplStack_58);
  uVar2 = 1;
LAB_10869b188:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = plVar8;
  return auVar10;
}



/* Entry: 10869b1b0; end: 10869b1ff;  */

void FUN_10869b1b0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  puVar1[2] = *param_4;
  return;
}



/* Entry: 10869b200; end: 10869b25f;  */

void FUN_10869b200(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000100c5494c();
  if (lVar1 != 0) {
    func_0x00010869b230(param_1,lVar1);
  }
  return;
}



/* Entry: 10869b260; end: 10869b37b;  */

void FUN_10869b260(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_10869b314;
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
    if (uVar8 == uVar3) goto LAB_10869b314;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10869b314:
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



/* Entry: 10869b37c; end: 10869b3d7;  */

undefined8 * FUN_10869b37c(undefined8 *param_1)

{
  undefined8 uVar1;
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
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_10869b3d8(param_1 + 1,&uStack_50);
  FUN_10869af40((ulong)&uStack_50 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_10869af40(param_1 + 2);
  return param_1;
}



/* Entry: 10869b3d8; end: 10869b3ff;  */

undefined8 * FUN_10869b3d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_10869b400(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10869b400; end: 10869b423;  */

undefined8 FUN_10869b400(undefined8 param_1)

{
  FUN_10869b424();
  return param_1;
}



/* Entry: 10869b424; end: 10869b44b;  */

void FUN_10869b424(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        func_0x000107c27914();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return;
    }
    FUN_10869b4b4();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010869b714();
    func_0x000107c3194c();
    *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
    return;
  }
  return;
}



/* Entry: 10869b44c; end: 10869b473;  */

void FUN_10869b44c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010869b714();
  func_0x000107c3194c();
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10869b474; end: 10869b4b3;  */

void FUN_10869b474(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10869b4b4; end: 10869b4e3;  */

void FUN_10869b4b4(long param_1,long param_2)

{
  func_0x00010869b784();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 10869b4e4; end: 10869b573;  */

long * FUN_10869b4e4(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_50,*param_1 + 0x58);
    func_0x000107c27f54(auStack_38,&UNK_10f4b09b7,auStack_50);
    func_0x00010bcc7444(uVar1,0x65,auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  }
  return param_1 + 1;
}



/* Entry: 10869b574; end: 10869b5a7;  */

void FUN_10869b574(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010869b714();
  FUN_10869b5a8(param_1 + 8,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 10869b5a8; end: 10869b61f;  */

void FUN_10869b5a8(long param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010869b714();
  cVar2 = *(char *)(param_1 + 0x20);
  if (cVar2 != *(char *)(param_2 + 0x20)) {
    if (cVar2 == '\0') {
      func_0x00010869b498();
    }
    else {
      func_0x00010869b498();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0x20) == '\x01') {
      func_0x000107c27914();
      *(undefined1 *)(unaff_x19 + 0x20) = 0;
    }
    return;
  }
  if (cVar2 != '\0') {
    func_0x00010869b714();
    FUN_10867c53c();
    uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
    *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
    *(undefined4 *)(unaff_x19 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 10869b620; end: 10869b64b;  */

void FUN_10869b620(void)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010869b714();
  FUN_10867c53c();
  uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x18) = uVar1;
  return;
}



/* Entry: 10869b64c; end: 10869b667;  */

void FUN_10869b64c(long param_1)

{
  FUN_10869b4b4();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10869b668; end: 10869b7ab;  */

void FUN_10869b668(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10869b7ac; end: 10869ba2f;  */

void FUN_10869b7ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long *param_5,
                  long *param_6)

{
  bool bVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  byte *pbVar5;
  ulong uVar6;
  code *extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x10;
  byte bVar7;
  long lVar8;
  long lVar9;
  long *aplStack_b0 [2];
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    FUN_10867a634(&uStack_88,param_1 + 0x60);
    if (uStack_88 != 0) {
      uVar6 = uStack_88;
      func_0x00010869eed4();
      (*extraout_x8)();
      if ((uVar6 & 1) == 0) {
        func_0x00010869ef40();
        return;
      }
    }
    func_0x00010869ef40();
  }
  if (param_3 != 0) {
    uVar6 = param_1 + 0x58;
    func_0x0001006b4678(uVar6,param_3 + 0x18);
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  lVar8 = *param_6;
  lVar9 = param_6[1];
  if (lVar9 - lVar8 != 0) {
    uVar6 = lVar9 - lVar8 >> 5;
    if (0xaaaaaaaaaaaaaaa < uVar6) {
      func_0x00010869ca0c();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10869b9ec);
      (*pcVar3)();
    }
    FUN_10869ca94(&uStack_88,uVar6,0,&uStack_90);
    func_0x00010869ef7c(uStack_80);
    uVar6 = extraout_x8_00 + extraout_x9 * extraout_x10;
    _memcpy(uVar6);
    uVar2 = uStack_90;
    uStack_90 = uStack_70;
    uStack_98 = uStack_78;
    uStack_78 = uStack_a0;
    uStack_70 = uVar2;
    uStack_88 = uStack_a0;
    uStack_80 = uStack_a0;
    uStack_a0 = uVar6;
    FUN_10869cb30(&uStack_88);
    lVar8 = *param_6;
    lVar9 = param_6[1];
  }
  for (; lVar8 != lVar9; lVar8 = lVar8 + 0x20) {
    uStack_88 = *(ulong *)(lVar8 + 0x18);
    uStack_80 = uStack_80 & 0xffffffffffffff00;
    uStack_78 = uStack_78 & 0xffffffffffffff00;
    FUN_10869cb80(&uStack_a0,&uStack_88);
  }
  FUN_10869beac(aplStack_b0,param_1 + 0x70);
  if ((aplStack_b0[0] == (long *)0x0) ||
     ((**(code **)(*aplStack_b0[0] + 0x30))
                (aplStack_b0[0],param_2,param_3,param_4,param_5,&uStack_a0),
     (int)aplStack_b0[0] == 0)) {
    bVar7 = 0;
  }
  else {
    pbVar5 = (byte *)(param_1 + 0xb0);
    func_0x000107c289e8();
    bVar7 = *pbVar5;
  }
  if (*param_6 == param_6[1]) {
    lVar8 = *param_5;
    lVar9 = param_5[1];
    do {
      if (lVar8 == lVar9) {
        if ((bVar7 & 1) != 0) goto LAB_10869b9a4;
        bVar1 = false;
        goto LAB_10869b950;
      }
      iVar4 = (int)lVar8 + 0x50;
      FUN_108844938();
      lVar8 = lVar8 + 0x1a8;
    } while (iVar4 != 0x1f);
  }
  bVar1 = true;
LAB_10869b950:
  FUN_10869bee8(&uStack_88,param_1,param_5,param_3);
  if ((bVar7 & 1) == 0) {
    FUN_10869bfb8(param_1,param_2,param_3,param_4,&uStack_88,param_6);
  }
  if (bVar1) {
    func_0x00010869ef50(param_1,param_2,param_5,&uStack_88);
  }
  func_0x000107c27a08(&uStack_88);
LAB_10869b9a4:
  func_0x00010869ee7c();
  FUN_10869ccc0(&uStack_a0);
  return;
}



/* Entry: 10869ba30; end: 10869ba43;  */

/* WARNING: Removing unreachable block (ram,0x00010869b818) */

void FUN_10869ba30(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  byte *pbVar5;
  ulong uVar6;
  code *extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x10;
  byte bVar7;
  long lVar8;
  long lVar9;
  long *aplStack_b0 [2];
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    FUN_10867a634(&uStack_88,param_1 + 0x60);
    if (uStack_88 != 0) {
      uVar6 = uStack_88;
      func_0x00010869eed4();
      (*extraout_x8)();
      if ((uVar6 & 1) == 0) {
        func_0x00010869ef40();
        return;
      }
    }
    func_0x00010869ef40();
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  lVar8 = *param_4;
  lVar9 = param_4[1];
  if (lVar9 - lVar8 != 0) {
    uVar6 = lVar9 - lVar8 >> 5;
    if (0xaaaaaaaaaaaaaaa < uVar6) {
      func_0x00010869ca0c();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10869b9ec);
      (*pcVar3)();
    }
    FUN_10869ca94(&uStack_88,uVar6,0,&uStack_90);
    func_0x00010869ef7c(uStack_80);
    uVar6 = extraout_x8_00 + extraout_x9 * extraout_x10;
    _memcpy(uVar6);
    uVar2 = uStack_90;
    uStack_90 = uStack_70;
    uStack_98 = uStack_78;
    uStack_78 = uStack_a0;
    uStack_70 = uVar2;
    uStack_88 = uStack_a0;
    uStack_80 = uStack_a0;
    uStack_a0 = uVar6;
    FUN_10869cb30(&uStack_88);
    lVar8 = *param_4;
    lVar9 = param_4[1];
  }
  for (; lVar8 != lVar9; lVar8 = lVar8 + 0x20) {
    uStack_88 = *(ulong *)(lVar8 + 0x18);
    uStack_80 = uStack_80 & 0xffffffffffffff00;
    uStack_78 = uStack_78 & 0xffffffffffffff00;
    FUN_10869cb80(&uStack_a0,&uStack_88);
  }
  FUN_10869beac(aplStack_b0,param_1 + 0x70);
  if ((aplStack_b0[0] == (long *)0x0) ||
     ((**(code **)(*aplStack_b0[0] + 0x30))(aplStack_b0[0],param_2,0,0,param_3,&uStack_a0),
     (int)aplStack_b0[0] == 0)) {
    bVar7 = 0;
  }
  else {
    pbVar5 = (byte *)(param_1 + 0xb0);
    func_0x000107c289e8();
    bVar7 = *pbVar5;
  }
  if (*param_4 == param_4[1]) {
    lVar8 = *param_3;
    lVar9 = param_3[1];
    do {
      if (lVar8 == lVar9) {
        if ((bVar7 & 1) != 0) goto LAB_10869b9a4;
        bVar1 = false;
        goto LAB_10869b950;
      }
      iVar4 = (int)lVar8 + 0x50;
      FUN_108844938();
      lVar8 = lVar8 + 0x1a8;
    } while (iVar4 != 0x1f);
  }
  bVar1 = true;
LAB_10869b950:
  FUN_10869bee8(&uStack_88,param_1,param_3,0);
  if ((bVar7 & 1) == 0) {
    FUN_10869bfb8(param_1,param_2,0,0,&uStack_88,param_4);
  }
  if (bVar1) {
    func_0x00010869ef50(param_1,param_2,param_3,&uStack_88);
  }
  func_0x000107c27a08(&uStack_88);
LAB_10869b9a4:
  func_0x00010869ee7c();
  FUN_10869ccc0(&uStack_a0);
  return;
}



/* Entry: 10869ba44; end: 10869bb13;  */

void FUN_10869ba44(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x000107c27acc(&uStack_58,param_3[1] - *param_3 >> 5);
  lVar1 = param_3[1];
  for (lVar2 = *param_3; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    func_0x000107c28944(&uStack_58,lVar2 + 0x18);
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x00010869ef50(param_1,param_2,&uStack_70,&uStack_88);
  func_0x00010869ee0c();
  func_0x00010869ee84();
  func_0x000107c27ae4(&uStack_58);
  return;
}



/* Entry: 10869bb14; end: 10869beab;  */

void FUN_10869bb14(long param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined ***pppuVar7;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 unaff_x19;
  long lVar8;
  long unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_f8 [40];
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong auStack_a0 [2];
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  func_0x00010869edb0();
  FUN_10867a634(auStack_a0,param_1 + 0x60);
  if (auStack_a0[0] != 0) {
    func_0x00010869eed4();
    (*extraout_x8)();
    if ((auStack_a0[0] & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
      func_0x000107c287d8(uVar3);
      puVar4 = (undefined8 *)(unaff_x20 + 0xe0);
      FUN_108679cf0();
      uVar10 = *puVar4;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      func_0x000108684e9c(&uStack_d0,param_5);
      lVar8 = 0;
      lVar13 = 0;
      for (uVar11 = 0; uVar11 < (ulong)((param_4[1] - *param_4) / 0x5d8); uVar11 = uVar11 + 1) {
        plVar9 = param_4;
        FUN_10869c488(param_4,uVar11);
        if (((char)plVar9[0x7a] == '\x01') && ((int)plVar9[10] == 0x1f)) {
          if ((ulong)((param_3[1] - *param_3) / 0x1a8) <= uVar11) {
            func_0x00010869d3f4();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10869be14);
            (*pcVar2)();
          }
          uVar5 = *param_3 + lVar8;
          func_0x0001088427c4(uVar5,uVar3,uVar10);
          uVar1 = uStack_b0;
          uVar12 = uStack_c8;
          if ((uVar5 & 1) == 0) {
            if (uStack_c8 < uStack_c0) {
              func_0x0001006a025c(uStack_c8,plVar9);
              uVar12 = uVar12 + 0x20;
            }
            else {
              puVar6 = &uStack_d0;
              func_0x000104be77f0(puVar6,((long)(uStack_c8 - uStack_d0) >> 5) + 1);
              func_0x000104be74ec(&ppuStack_90,puVar6,(long)(uStack_c8 - uStack_d0) >> 5,&uStack_c0)
              ;
              func_0x0001006a025c(lStack_80,plVar9);
              lStack_80 = lStack_80 + 0x20;
              func_0x000104be74b4(&uStack_d0,&ppuStack_90);
              uVar12 = uStack_c8;
              func_0x000104be769c(&ppuStack_90);
            }
            lVar13 = lVar13 + 1;
            uStack_c8 = uVar12;
          }
          else if (uStack_b0 < uStack_a8) {
            func_0x0001006a01bc(uStack_b0,plVar9);
            uStack_b0 = uVar1 + 0x5d8;
          }
          else {
            puVar6 = &uStack_b8;
            func_0x00010069e634(puVar6,(long)(uStack_b0 - uStack_b8) / 0x5d8 + 1);
            func_0x00010069e6e8(&ppuStack_90,puVar6,(long)(uStack_b0 - uStack_b8) / 0x5d8,&uStack_a8
                               );
            func_0x0001006a01bc(lStack_80,plVar9);
            lStack_80 = lStack_80 + 0x5d8;
            func_0x00010069e804(&uStack_b8,&ppuStack_90);
            uVar12 = uStack_b0;
            func_0x00010069e9c0(&ppuStack_90);
            uStack_b0 = uVar12;
          }
        }
        lVar8 = lVar8 + 0x1a8;
      }
      if (lVar13 != 0) {
        plVar9 = *(long **)(unaff_x20 + 0x90);
        lStack_80 = 0;
        uStack_78 = 0;
        ppuStack_90 = &PTR_FUN_110a609a8;
        uStack_88 = 0;
        uStack_70 = 0x2cb;
        pppuVar7 = &ppuStack_90;
        FUN_10869c4b8(pppuVar7,0x81028b);
        func_0x000107c2884c(auStack_f8,pppuVar7);
        (**(code **)(*plVar9 + 0x50))(plVar9,auStack_f8);
        func_0x000107c2882c(auStack_f8);
        func_0x000107c2882c(&ppuStack_90);
      }
      if ((uStack_b8 != uStack_b0) || (uStack_d0 != uStack_c8)) {
        func_0x00010869eed4(*(undefined8 *)(unaff_x20 + 0xa0),unaff_x19);
        (*extraout_x8_00)();
      }
      func_0x000104be1274(&uStack_d0);
      func_0x000107c27a08(&uStack_b8);
    }
  }
  func_0x000107c28a70(auStack_a0);
  return;
}



/* Entry: 10869beac; end: 10869bee7;  */

void FUN_10869beac(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10869bee8; end: 10869bfb7;  */

void FUN_10869bee8(undefined8 *param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_618 [1496];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010869eeac(param_3[1]);
  func_0x000104be6ea0();
  lVar1 = param_3[1];
  for (lVar2 = *param_3; lVar2 != lVar1; lVar2 = lVar2 + 0x1a8) {
    if ((param_4 == 0) || ((*(byte *)(lVar2 + 0x28) & 1) == 0)) {
      FUN_1086e0ad4(auStack_618,*(undefined8 *)(param_2 + 0x18),lVar2);
      func_0x00010869ee58();
      func_0x00010069e558();
    }
    else {
      func_0x000107c29260(auStack_618,*(undefined8 *)(param_2 + 0x18),lVar2,param_4);
      func_0x00010869ee58();
      func_0x00010069e558();
    }
    func_0x00010869edf8();
  }
  return;
}



/* Entry: 10869bfb8; end: 10869c08b;  */

void FUN_10869bfb8(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined1 auStack_898 [1064];
  undefined1 auStack_470 [1064];
  char cStack_48;
  
  auStack_470[0] = 0;
  cStack_48 = '\0';
  if ((param_4 != 0) && (param_3 != 0)) {
    func_0x0001006b46a8(auStack_898,*(undefined8 *)(param_1 + 0x28),param_3);
    if (cStack_48 == '\x01') {
      FUN_10869cd0c(auStack_470,auStack_898);
    }
    else {
      func_0x000105294d00(auStack_470,auStack_898);
    }
    func_0x00010869ee2c();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x18))
            (*(long **)(param_1 + 8),param_2,auStack_470,param_5,param_6);
  func_0x000104be16c8(auStack_470);
  return;
}



/* Entry: 10869c08c; end: 10869c157;  */

void FUN_10869c08c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  ulong auStack_460 [133];
  undefined1 uStack_38;
  
  FUN_10869beac(&plStack_478,param_1 + 0x70);
  if (plStack_478 != (long *)0x0) {
    auStack_460[0] = 0;
    auStack_460[1] = 0;
    auStack_460[2] = 0;
    (**(code **)(*plStack_478 + 0x38))(plStack_478,param_2,param_2,auStack_460);
    func_0x00010869ee84();
  }
  func_0x000107c28ec4(&plStack_478);
  auStack_460[0] = auStack_460[0] & 0xffffffffffffff00;
  uStack_38 = 0;
  plStack_478 = (long *)0x0;
  uStack_470 = 0;
  uStack_468 = 0;
  (**(code **)(**(long **)(param_1 + 8) + 0x18))
            (*(long **)(param_1 + 8),param_2,auStack_460,&plStack_478,param_3);
  func_0x00010869ee0c();
  func_0x000104be16c8(auStack_460);
  return;
}



/* Entry: 10869c158; end: 10869c323;  */

void FUN_10869c158(long param_1,long param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  long unaff_x19;
  long lVar5;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *aplStack_60 [2];
  
  func_0x00010869ee64();
  uVar3 = param_1 + 0x58;
  func_0x0001006b4678(uVar3,param_2 + 0x18);
  if ((uVar3 & 1) != 0) {
    return;
  }
  FUN_10869beac(aplStack_60,unaff_x19 + 0x70);
  if (aplStack_60[0] == (long *)0x0) {
    iVar2 = 0;
  }
  else {
    (**(code **)(*aplStack_60[0] + 0x38))();
    iVar2 = (int)aplStack_60[0];
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x00010869eeac(param_3[1]);
  func_0x000104be6ea0(&uStack_78);
  lVar1 = param_3[1];
  for (lVar5 = *param_3; lVar5 != lVar1; lVar5 = lVar5 + 0x1a8) {
    if (*(char *)(lVar5 + 0x28) == '\x01') {
      func_0x000107c29260(&uStack_650,*(undefined8 *)(unaff_x19 + 0x18),lVar5);
      func_0x00010869ef10();
    }
    else {
      FUN_1086e0ad4(&uStack_650,*(undefined8 *)(unaff_x19 + 0x18),lVar5);
      func_0x00010869ef10();
    }
    func_0x00010869ef08();
  }
  uStack_650 = 0;
  uStack_648 = 0;
  uStack_640 = 0;
  FUN_10869bb14();
  func_0x000104be1274(&uStack_650);
  if (iVar2 != 0) {
    pbVar4 = (byte *)(unaff_x19 + 0xb0);
    func_0x000107c289e8();
    if ((*pbVar4 & 1) != 0) goto LAB_10869c29c;
  }
  func_0x0001006b46a8(&uStack_650,*(undefined8 *)(unaff_x19 + 0x28));
  (**(code **)(**(long **)(unaff_x19 + 8) + 0x40))(*(long **)(unaff_x19 + 8),&uStack_650,&uStack_78)
  ;
  func_0x0001006b74f4(&uStack_650);
LAB_10869c29c:
  func_0x000107c27a08(&uStack_78);
  func_0x000107c28ec4(aplStack_60);
  return;
}



/* Entry: 10869c324; end: 10869c487;  */

void FUN_10869c324(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  code *extraout_x8;
  ulong auStack_78 [3];
  long *aplStack_60 [2];
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    FUN_10867a634(auStack_78,param_1 + 0x60);
    if (auStack_78[0] != 0) {
      func_0x00010869eed4();
      (*extraout_x8)();
      if ((auStack_78[0] & 1) == 0) {
        func_0x000107c28a70(auStack_78);
        return;
      }
    }
    func_0x000107c28a70(auStack_78);
  }
  uVar2 = param_1 + 0x58;
  func_0x0001006b4678(uVar2,param_3 + 0x18);
  if ((uVar2 & 1) != 0) {
    return;
  }
  FUN_10869beac(aplStack_60,param_1 + 0x70);
  if (aplStack_60[0] == (long *)0x0) {
    iVar1 = 0;
  }
  else {
    (**(code **)(*aplStack_60[0] + 0x38))(aplStack_60[0],param_2,param_3,param_5);
    iVar1 = (int)aplStack_60[0];
  }
  FUN_10869bee8(auStack_78,param_1,param_5,param_3);
  func_0x00010869ef50(param_1,param_2,param_5,auStack_78);
  if (iVar1 != 0) {
    pbVar3 = (byte *)(param_1 + 0xb0);
    func_0x000107c289e8();
    if ((*pbVar3 & 1) != 0) goto LAB_10869c42c;
  }
  FUN_10869bfb8(param_1,param_2,param_3,param_4,auStack_78,param_6);
LAB_10869c42c:
  func_0x00010869ee0c();
  func_0x000107c28ec4(aplStack_60);
  return;
}



/* Entry: 10869c488; end: 10869c4b7;  */

long * FUN_10869c488(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  if ((ulong)((param_1[1] - *param_1) / 0x5d8) <= param_2) {
    func_0x00010869d3e8();
    if (((uint)(param_2 >> 0x11) & 0x7fff) < 0x47) {
      puVar1 = (&PTR_DAT_113268bb8)[param_2 >> 0x10 & 0xffff];
    }
    else {
      puVar1 = &UNK_10f3158b1;
    }
    func_0x000107c278b8(auStack_48,puVar1);
    func_0x00010869ee58();
    func_0x000107c28824();
    func_0x00010869ee00();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    return param_1;
  }
  return (long *)(*param_1 + param_2 * 0x5d8);
}



/* Entry: 10869c4b8; end: 10869c553;  */

undefined8 FUN_10869c4b8(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined1 auStack_38 [24];
  
  if (((uint)(param_2 >> 0x11) & 0x7fff) < 0x47) {
    puVar1 = (&PTR_DAT_113268bb8)[param_2 >> 0x10 & 0xffff];
  }
  else {
    puVar1 = &UNK_10f3158b1;
  }
  func_0x000107c278b8(auStack_38,puVar1);
  func_0x00010869ee58();
  func_0x000107c28824();
  func_0x00010869ee00();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  return param_1;
}



/* Entry: 10869c554; end: 10869c863;  */

void FUN_10869c554(long param_1,undefined8 param_2,long param_3,ulong *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  ulong uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined1 uStack_658;
  ulong uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  char cStack_630;
  undefined **ppuStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined4 uStack_608;
  ulong uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 uStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  long lStack_5c0;
  long lStack_28;
  long lStack_20;
  undefined8 uStack_18;
  ulong auStack_10 [2];
  
  func_0x00010869ef58();
  func_0x00010869edb0();
  FUN_10867a634(auStack_10,param_1 + 0x60);
  if (auStack_10[0] != 0) {
    func_0x00010869eed4();
    (*extraout_x8)();
    if ((auStack_10[0] & 1) != 0) {
      uVar3 = unaff_x20 + 0x58;
      func_0x0001006b4678(uVar3,unaff_x19 + 0x18);
      if ((uVar3 & 1) == 0) {
        lVar4 = *(long *)(unaff_x20 + 0x80);
        func_0x000107c287d8();
        lVar5 = param_3;
        FUN_10869c864();
        if (lVar4 < lVar5) {
          lStack_28 = 0;
          lStack_20 = 0;
          uStack_18 = 0;
          func_0x00010869eeac(param_4[1]);
          func_0x000104be6ea0(&lStack_28);
          uVar1 = param_4[1];
          for (uVar3 = *param_4; uVar3 != uVar1; uVar3 = uVar3 + 0x1a8) {
            uVar6 = uVar3;
            func_0x000107c28e64();
            if ((uVar6 & 1) == 0) {
              func_0x000107c29260(&uStack_600,*(undefined8 *)(unaff_x20 + 0x18),uVar3);
              func_0x00010069e558(&lStack_28,&uStack_600);
              func_0x00010069ea28(&uStack_600);
            }
          }
          lVar5 = lStack_28;
          if (lStack_28 != lStack_20) {
            FUN_10869d400(lStack_28,lStack_20,LZCOUNT((lStack_20 - lStack_28) / 0x5d8) << 1 ^ 0x7e,1
                         );
            lVar5 = lStack_20;
          }
          if ((ulong)((lVar5 - lStack_28) / 0x5d8) < *(ulong *)(param_3 + 0x28)) {
            uStack_618 = 0;
            uStack_610 = 0;
            ppuStack_628 = &PTR_FUN_110a609a8;
            uStack_620 = 0;
            uStack_608 = 0x2d0;
            (**(code **)(**(long **)(unaff_x20 + 0x90) + 0x50))
                      (*(long **)(unaff_x20 + 0x90),&ppuStack_628);
            func_0x000107c2882c(&ppuStack_628);
          }
          uStack_648 = uStack_648 & 0xffffffffffffff00;
          cStack_630 = '\0';
          if ((*(byte *)(param_3 + 0x50) & 1) == 0) {
            uStack_5e8 = false;
            uStack_670 = uStack_670 & 0xffffffffffffff00;
            uStack_658 = 0;
          }
          else {
            FUN_108844410(&uStack_600,param_3 + 0x30);
            FUN_10869c888(&uStack_648,&uStack_600);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_600);
            uStack_5e8 = false;
            uStack_670 = uStack_670 & 0xffffffffffffff00;
            uStack_658 = 0;
            if (cStack_630 == '\x01') {
              uStack_668 = uStack_640;
              uStack_670 = uStack_648;
              uStack_660 = uStack_638;
              uStack_640 = 0;
              uStack_638 = 0;
              uStack_648 = 0;
              uStack_5e8 = true;
              uStack_658 = 1;
            }
          }
          uVar2 = uStack_18;
          lVar4 = lStack_20;
          lVar5 = lStack_28;
          lStack_28 = 0;
          lStack_20 = 0;
          uStack_18 = 0;
          uVar7 = *(undefined8 *)(param_3 + 0x58);
          FUN_10869c864();
          uStack_600 = uStack_600 & 0xffffffffffffff00;
          if ((bool)uStack_5e8) {
            uStack_5f8 = uStack_668;
            uStack_600 = uStack_670;
            uStack_5f0 = uStack_660;
            uStack_668 = 0;
            uStack_660 = 0;
            uStack_670 = 0;
          }
          lStack_5e0 = lVar5;
          lStack_5d8 = lVar4;
          uStack_5d0 = uVar2;
          uStack_5c8 = uVar7;
          lStack_5c0 = param_3;
          func_0x00010869ee0c();
          func_0x000104be7858(&uStack_670);
          (**(code **)(**(long **)(unaff_x20 + 0xa0) + 0x18))();
          func_0x000104be7830(&uStack_600);
          func_0x000104be7858(&uStack_648);
          func_0x000107c27a08(&lStack_28);
        }
      }
    }
  }
  func_0x000107c28a70(auStack_10);
  return;
}



/* Entry: 10869c864; end: 10869c887;  */

long FUN_10869c864(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + 0x58);
  uVar3 = *(ulong *)(param_1 + 0x60);
  lVar1 = 0x7fffffffffffffff;
  if (lVar2 <= (long)(uVar3 ^ 0x7fffffffffffffff)) {
    lVar1 = uVar3 + lVar2;
  }
  if (-1 < (long)uVar3) {
    lVar2 = lVar1;
  }
  return lVar2;
}



/* Entry: 10869c888; end: 10869c8db;  */

undefined8 * FUN_10869c888(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    func_0x000107c27b9c(param_1);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}



/* Entry: 10869c8dc; end: 10869c8eb;  */

void FUN_10869c8dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010869c8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  return;
}



/* Entry: 10869c8ec; end: 10869c92b;  */

void FUN_10869c8ec(void)

{
  code *extraout_x8;
  long *unaff_x19;
  
  func_0x00010869ee8c();
  func_0x00010869ee58(*(undefined8 *)(*unaff_x19 + 0x10));
  (*extraout_x8)();
  func_0x00010869ee2c();
  return;
}



/* Entry: 10869c92c; end: 10869c96b;  */

void FUN_10869c92c(void)

{
  code *extraout_x8;
  long *unaff_x19;
  
  func_0x00010869ee8c();
  func_0x00010869ee58(*(undefined8 *)(*unaff_x19 + 0x38));
  (*extraout_x8)();
  func_0x00010869ee2c();
  return;
}



/* Entry: 10869c96c; end: 10869c9e3;  */

void FUN_10869c96c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long *aplStack_40 [2];
  
  func_0x00010869edb0();
  FUN_10869beac(aplStack_40,unaff_x20 + 0x70);
  if (aplStack_40[0] != (long *)0x0) {
    (**(code **)(*aplStack_40[0] + 0x40))(aplStack_40[0],param_3);
  }
  func_0x00010869ee7c();
  (**(code **)(**(long **)(unaff_x20 + 8) + 0x20))();
  return;
}



/* Entry: 10869c9e4; end: 10869c9f7;  */

void FUN_10869c9e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010869c9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  return;
}



/* Entry: 10869c9f8; end: 10869ca1f;  */

void FUN_10869c9f8(void)

{
  FUN_10869ed04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10869ca20; end: 10869ca93;  */

void FUN_10869ca20(undefined8 param_1,long param_2)

{
  long extraout_x8;
  undefined8 uVar1;
  long extraout_x9;
  long extraout_x10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010869edb0();
  func_0x00010869ef7c(*(undefined8 *)(param_2 + 8));
  lVar2 = extraout_x8 + extraout_x9 * extraout_x10;
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



/* Entry: 10869ca94; end: 10869cb03;  */

long * FUN_10869ca94(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010869cae0();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 10869cb04; end: 10869cb2f;  */

long * FUN_10869cb04(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = (long *)(param_2 * 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10869cb5c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10869cb30; end: 10869cb5b;  */

long * FUN_10869cb30(long *param_1)

{
  FUN_10869cb5c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10869cb5c; end: 10869cb7f;  */

void FUN_10869cb5c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x18;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10869cb80; end: 10869cbcb;  */

undefined8 * FUN_10869cb80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    puVar1 = puVar1 + 3;
  }
  else {
    puVar1 = param_1;
    FUN_10869cbcc();
  }
  param_1[1] = puVar1;
  return puVar1 + -3;
}



/* Entry: 10869cbcc; end: 10869cc6f;  */

long FUN_10869cbcc(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x00010869ee64();
  FUN_10869cc70();
  FUN_10869ca94(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x18,unaff_x19 + 2);
  uVar3 = unaff_x20[1];
  uVar2 = *unaff_x20;
  puStack_48[2] = unaff_x20[2];
  puStack_48[1] = uVar3;
  *puStack_48 = uVar2;
  puStack_48 = puStack_48 + 3;
  func_0x00010869ee58();
  FUN_10869ca20();
  lVar1 = unaff_x19[1];
  FUN_10869cb30(auStack_58);
  return lVar1;
}



/* Entry: 10869cc70; end: 10869ccbf;  */

long * FUN_10869cc70(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plStack_38;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    func_0x00010869ca0c();
    plStack_38 = param_1;
    FUN_10869ccf4(&plStack_38);
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    plVar2 = (long *)0xaaaaaaaaaaaaaaa;
  }
  return plVar2;
}



/* Entry: 10869ccc0; end: 10869ccf3;  */

undefined8 FUN_10869ccc0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10869ccf4(&uStack_28);
  return param_1;
}



/* Entry: 10869ccf4; end: 10869cd0b;  */

void FUN_10869ccf4(undefined8 *param_1)

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



/* Entry: 10869cd0c; end: 10869ce7f;  */

void FUN_10869cd0c(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x00010869ee64();
  func_0x000107c3194c();
  func_0x000107c27c54(unaff_x19 + 0x18,unaff_x20 + 0x18);
  func_0x00010869ce30(unaff_x19 + 0x38,unaff_x20 + 0x38);
  _memcpy(unaff_x19 + 0x50,unaff_x20 + 0x50,0x50);
  func_0x000107c28904(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  func_0x000107c28904(unaff_x19 + 0xb8,unaff_x20 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd0);
  *(undefined4 *)(unaff_x19 + 0xd8) = *(undefined4 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar2;
  func_0x000107c28904(unaff_x19 + 0xe0,unaff_x20 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x121);
  *(undefined8 *)(unaff_x19 + 0x129) = *(undefined8 *)(unaff_x20 + 0x129);
  *(undefined8 *)(unaff_x19 + 0x121) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x110) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x108) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x120) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x118) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x100) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar2;
  FUN_10869ce80(unaff_x19 + 0x138,unaff_x20 + 0x138);
  *(undefined4 *)(unaff_x19 + 0x200) = *(undefined4 *)(unaff_x20 + 0x200);
  FUN_10869d054(unaff_x19 + 0x208,unaff_x20 + 0x208);
  _memcpy(unaff_x19 + 0x220,unaff_x20 + 0x220,0x80);
  func_0x000107c28908(unaff_x19 + 0x2a0,unaff_x20 + 0x2a0);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x2d0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x2c0);
  *(undefined8 *)(unaff_x19 + 0x2c8) = *(undefined8 *)(unaff_x20 + 0x2c8);
  *(undefined8 *)(unaff_x19 + 0x2c0) = uVar2;
  *(undefined1 *)(unaff_x19 + 0x2d0) = uVar1;
  FUN_10869d0a4(unaff_x19 + 0x2d8,unaff_x20 + 0x2d8);
  FUN_10869d160(unaff_x19 + 0x2f8,unaff_x20 + 0x2f8);
  FUN_10869d378(unaff_x19 + 0x3d8,unaff_x20 + 0x3d8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x419);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x411);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x3f8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x410);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x408);
  *(undefined8 *)(unaff_x19 + 0x400) = *(undefined8 *)(unaff_x20 + 0x400);
  *(undefined8 *)(unaff_x19 + 0x3f8) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x410) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x408) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x419) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x411) = uVar2;
  return;
}



/* Entry: 10869ce80; end: 10869cea3;  */

undefined8 FUN_10869ce80(undefined8 param_1)

{
  FUN_10869cea4();
  return param_1;
}



/* Entry: 10869cea4; end: 10869cecb;  */

void FUN_10869cea4(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0xc0);
  if (cVar1 != *(char *)(param_2 + 0xc0)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xc0) == '\x01') {
        func_0x0001006b7cb8();
        *(undefined1 *)(param_1 + 0xc0) = 0;
      }
      return;
    }
    func_0x0001006b7c08();
    *(undefined1 *)(param_1 + 0xc0) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010869edb0();
    func_0x0001052b2b60();
    func_0x00010869ef70();
    FUN_10869cf4c();
    func_0x000107c27c54(unaff_x20 + 0x40,unaff_x19 + 0x40);
    FUN_10869cfbc(unaff_x20 + 0x60,unaff_x19 + 0x60);
    *(undefined8 *)(unaff_x20 + 0x98) = *(undefined8 *)(unaff_x19 + 0x98);
    func_0x000107c3194c(unaff_x20 + 0xa0,unaff_x19 + 0xa0);
    *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)(unaff_x19 + 0xb8);
    return;
  }
  return;
}



/* Entry: 10869cecc; end: 10869cf27;  */

void FUN_10869cecc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010869edb0();
  func_0x0001052b2b60();
  func_0x00010869ef70();
  FUN_10869cf4c();
  func_0x000107c27c54(unaff_x20 + 0x40,unaff_x19 + 0x40);
  FUN_10869cfbc(unaff_x20 + 0x60,unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x98) = *(undefined8 *)(unaff_x19 + 0x98);
  func_0x000107c3194c(unaff_x20 + 0xa0,unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)(unaff_x19 + 0xb8);
  return;
}



/* Entry: 10869cf28; end: 10869cf4b;  */

void FUN_10869cf28(long param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    func_0x0001006b7cb8();
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  return;
}



/* Entry: 10869cf4c; end: 10869cf6f;  */

undefined8 FUN_10869cf4c(undefined8 param_1)

{
  FUN_10869cf70();
  return param_1;
}



/* Entry: 10869cf70; end: 10869cf97;  */

void FUN_10869cf70(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x000107c27914();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x0001006203d4();
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return;
  }
  return;
}



/* Entry: 10869cf98; end: 10869cfbb;  */

void FUN_10869cf98(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10869cfbc; end: 10869cfdf;  */

undefined8 FUN_10869cfbc(undefined8 param_1)

{
  FUN_10869cfe0();
  return param_1;
}



/* Entry: 10869cfe0; end: 10869d007;  */

void FUN_10869cfe0(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 != *(char *)(param_2 + 0x30)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x30) == '\x01') {
        func_0x000104be0e14();
        *(undefined1 *)(param_1 + 0x30) = 0;
      }
      return;
    }
    func_0x000104bfaed0();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010869eda4();
    func_0x000107c3194c(unaff_x20 + 0x18,unaff_x19 + 0x18);
    return;
  }
  return;
}



/* Entry: 10869d008; end: 10869d02f;  */

void FUN_10869d008(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010869eda4();
  func_0x000107c3194c(unaff_x20 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 10869d030; end: 10869d053;  */

void FUN_10869d030(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000104be0e14();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10869d054; end: 10869d0a3;  */

void FUN_10869d054(void)

{
  func_0x00010869edb0();
  func_0x00010869d074();
  func_0x00010869ed88();
  return;
}



/* Entry: 10869d0a4; end: 10869d0c7;  */

undefined8 FUN_10869d0a4(undefined8 param_1)

{
  FUN_10869d0c8();
  return param_1;
}



/* Entry: 10869d0c8; end: 10869d0ef;  */

void FUN_10869d0c8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x0001006b6d94();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010869edb0();
    func_0x00010869d134();
    func_0x00010869ed88();
    return;
  }
  return;
}



/* Entry: 10869d0f0; end: 10869d113;  */

void FUN_10869d0f0(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0001006b6d94();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10869d114; end: 10869d15f;  */

void FUN_10869d114(void)

{
  func_0x00010869edb0();
  func_0x00010869d134();
  func_0x00010869ed88();
  return;
}



/* Entry: 10869d160; end: 10869d183;  */

undefined8 FUN_10869d160(undefined8 param_1)

{
  FUN_10869d184();
  return param_1;
}



/* Entry: 10869d184; end: 10869d1ab;  */

void FUN_10869d184(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0xd8);
  if (cVar1 != *(char *)(param_2 + 0xd8)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xd8) == '\x01') {
        func_0x000107c27a00();
        *(undefined1 *)(param_1 + 0xd8) = 0;
      }
      return;
    }
    func_0x00010066df28();
    *(undefined1 *)(param_1 + 0xd8) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010869edb0();
    func_0x0001006b7d24();
    FUN_10869d27c(unaff_x20 + 0x78,unaff_x19 + 0x78);
    *(undefined2 *)(unaff_x20 + 0xd0) = *(undefined2 *)(unaff_x19 + 0xd0);
    return;
  }
  return;
}



/* Entry: 10869d1ac; end: 10869d1df;  */

void FUN_10869d1ac(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010869edb0();
  func_0x0001006b7d24();
  FUN_10869d27c(unaff_x20 + 0x78,unaff_x19 + 0x78);
  *(undefined2 *)(unaff_x20 + 0xd0) = *(undefined2 *)(unaff_x19 + 0xd0);
  return;
}



/* Entry: 10869d1e0; end: 10869d203;  */

void FUN_10869d1e0(long param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    func_0x000107c27a00();
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  return;
}



/* Entry: 10869d204; end: 10869d257;  */

void FUN_10869d204(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010869eda4();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x20) = *(undefined1 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  func_0x000107c28908(unaff_x20 + 0x28,unaff_x19 + 0x28);
  func_0x000107c27c54(unaff_x20 + 0x48,unaff_x19 + 0x48);
  uVar1 = *(undefined1 *)(unaff_x19 + 0x6c);
  *(undefined4 *)(unaff_x20 + 0x68) = *(undefined4 *)(unaff_x19 + 0x68);
  *(undefined1 *)(unaff_x20 + 0x6c) = uVar1;
  return;
}



/* Entry: 10869d258; end: 10869d27b;  */

void FUN_10869d258(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x000107c279f0();
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}



/* Entry: 10869d27c; end: 10869d29f;  */

undefined8 FUN_10869d27c(undefined8 param_1)

{
  FUN_10869d2a0();
  return param_1;
}



/* Entry: 10869d2a0; end: 10869d313;  */

void FUN_10869d2a0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 10);
  if (cVar1 == *(char *)(param_2 + 10)) {
    if (cVar1 != '\0') {
      func_0x00010869edb0();
      func_0x000107c27b9c();
      *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
      func_0x00010869ef70();
      func_0x000107c27b9c();
      uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
      *(undefined1 *)(unaff_x20 + 0x48) = *(undefined1 *)(unaff_x19 + 0x48);
      *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
      *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 10) == '\x01') {
        func_0x000104be1234();
        *(undefined1 *)(param_1 + 10) = 0;
      }
      return;
    }
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    uVar3 = param_2[5];
    uVar2 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[4] = uVar2;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    uVar3 = param_2[8];
    uVar2 = param_2[7];
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    param_1[8] = uVar3;
    param_1[7] = uVar2;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return;
}



/* Entry: 10869d314; end: 10869d353;  */

void FUN_10869d314(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010869edb0();
  func_0x000107c27b9c();
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  func_0x00010869ef70();
  func_0x000107c27b9c();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined1 *)(unaff_x20 + 0x48) = *(undefined1 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  return;
}



/* Entry: 10869d354; end: 10869d377;  */

void FUN_10869d354(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x000104be1234();
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 10869d378; end: 10869d39b;  */

undefined8 FUN_10869d378(undefined8 param_1)

{
  FUN_10869d39c();
  return param_1;
}



/* Entry: 10869d39c; end: 10869d3c3;  */

void FUN_10869d39c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x000107c27914();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x0001006203d4();
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return;
  }
  return;
}



/* Entry: 10869d3c4; end: 10869d3ff;  */

void FUN_10869d3c4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10869d400; end: 10869d66b;  */

/* WARNING: Possible PIC construction at 0x00010869d78c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010869d790) */
/* WARNING: Removing unreachable block (ram,0x00010869d7a0) */
/* WARNING: Removing unreachable block (ram,0x00010869d7b8) */
/* WARNING: Removing unreachable block (ram,0x00010869d7cc) */
/* WARNING: Removing unreachable block (ram,0x00010869d7fc) */
/* WARNING: Removing unreachable block (ram,0x00010869ee9c) */
/* WARNING: Removing unreachable block (ram,0x00010869d7e4) */

void FUN_10869d400(ulong param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong unaff_x24;
  ulong uVar12;
  ulong uVar13;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_bb0 [1496];
  undefined1 auStack_5d8 [1408];
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  long lStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  ulong uStack_18;
  long lStack_8;
  
  func_0x00010869ef58();
  uVar8 = param_2;
  uVar13 = param_1;
LAB_10869d424:
  uVar9 = uVar8 - 0x5d8;
  lVar10 = uVar8 - 0xbb0;
LAB_10869d430:
  param_3 = -param_3;
LAB_10869d438:
  param_3 = param_3 + 1;
  uVar6 = uVar8 - uVar13;
  uVar12 = (long)uVar6 / 0x5d8;
  cVar2 = SBORROW8(uVar12,5);
  cVar3 = (long)(uVar12 - 5) < 0;
  switch(uVar12) {
  case 0:
  case 1:
    return;
  case 2:
    func_0x00010869ee70(*(undefined8 *)(uVar8 - 8));
    if (cVar3 == cVar2) {
      return;
    }
    func_0x00010869ee40(uVar13,uVar9);
    goto code_r0x00010869dee0;
  case 3:
    lVar10 = uVar13 + 0x5d8;
    uVar12 = uVar13;
    uVar6 = uVar9;
    func_0x00010869ee40();
    uStack_30 = param_4;
    uStack_28 = uVar13;
    uStack_20 = uVar9;
    uStack_18 = uVar8;
    lVar11 = *(long *)(lVar10 + 0x5d0);
    lVar7 = *(long *)(uVar6 + 0x5d0);
    if (lVar11 < *(long *)(uVar12 + 0x5d0)) {
      cVar2 = SBORROW8(lVar7,lVar11);
      cVar3 = lVar7 - lVar11 < 0;
      puVar1 = &uStack_30;
      if (lVar11 <= lVar7) {
        FUN_10869dee0(uVar12,lVar10);
        func_0x00010869ef90(*(undefined8 *)(uVar6 + 0x5d0));
        puVar1 = &uStack_30;
        if (cVar3 == cVar2) {
          return;
        }
      }
    }
    else {
      cVar2 = SBORROW8(lVar7,lVar11);
      cVar3 = lVar7 - lVar11 < 0;
      if (lVar11 <= lVar7) {
        return;
      }
      FUN_10869dee0(lVar10,uVar6);
      func_0x00010869ee70(*(undefined8 *)(lVar10 + 0x5d0));
      if (cVar3 == cVar2) {
        return;
      }
      func_0x00010869eebc();
      puVar1 = &uStack_30;
    }
    goto LAB_10869ef28;
  case 4:
    uVar6 = uVar13 + 0xbb0;
    uVar5 = uVar9;
    func_0x00010869ee40(uVar13,uVar13 + 0x5d8);
    break;
  case 5:
    uVar12 = uVar13 + 0xbb0;
    uVar4 = uVar13 + 0x1188;
    func_0x00010869ee40(uVar13,uVar13 + 0x5d8,uVar12,uVar4,uVar9);
    unaff_x29 = &stack0xfffffffffffffff0;
    uVar6 = uVar12;
    uVar5 = uVar4;
    uStack_40 = unaff_x24;
    lStack_38 = lVar10;
    uStack_30 = param_4;
    uStack_28 = uVar13;
    uStack_20 = uVar9;
    uStack_18 = uVar8;
    func_0x00010869edb0();
    unaff_x30 = 0x10869d790;
    register0x00000008 = (BADSPACEBASE *)&uStack_40;
    uVar13 = uVar12;
    param_4 = uVar4;
    break;
  default:
    if ((long)uVar6 < 0x8c40) {
      func_0x00010869eebc();
      if ((param_4 & 1) == 0) {
        func_0x00010869ee40();
        if (param_1 != param_2) {
          uStack_30 = param_4;
          uStack_28 = uVar13;
          uStack_20 = uVar9;
          uStack_18 = uVar8;
          func_0x00010869edb0();
          while( true ) {
            uVar13 = uVar9;
            uVar9 = uVar13 + 0x5d8;
            cVar2 = SBORROW8(uVar9,uVar8);
            cVar3 = (long)(uVar9 - uVar8) < 0;
            if (uVar9 == uVar8) break;
            func_0x00010869ee70(*(undefined8 *)(uVar13 + 0xba8));
            if (cVar3 != cVar2) {
              func_0x00010869ef1c();
              do {
                uVar12 = uVar13;
                FUN_10869df24(uVar12 + 0x5d8,uVar12);
                uVar13 = uVar12 - 0x5d8;
              } while (lStack_38 < *(long *)(uVar12 - 8));
              func_0x00010869eef8(uVar12);
              func_0x00010869edf8();
            }
          }
        }
        return;
      }
      func_0x00010869ee40();
      if (param_1 == param_2) {
        return;
      }
      uStack_50 = 0x5d8;
      lStack_48 = param_3;
      uStack_40 = unaff_x24;
      lStack_38 = lVar10;
      uStack_30 = param_4;
      uStack_28 = uVar13;
      uStack_20 = uVar9;
      uStack_18 = uVar8;
      func_0x00010869edb0();
      lVar10 = 0;
      goto LAB_10869d834;
    }
    if (param_3 != 1) {
      uVar12 = uVar13 + (uVar12 >> 1) * 0x5d8;
      cVar2 = SBORROW8(uVar6,0x2ec01);
      cVar3 = (long)(uVar6 - 0x2ec01) < 0;
      if (uVar6 < 0x2ec01) {
        param_1 = uVar12;
        param_2 = uVar13;
        FUN_10869d66c(uVar12,uVar13,uVar9);
      }
      else {
        func_0x00010869eec8();
        FUN_10869d66c();
        param_1 = uVar12 - 0x5d8;
        FUN_10869d66c(uVar13 + 0x5d8,param_1,lVar10);
        FUN_10869d66c(uVar13 + 0xbb0,uVar12 + 0x5d8,uVar8 - 0x1188);
        param_2 = uVar12;
        FUN_10869d66c(param_1,uVar12,uVar12 + 0x5d8);
        func_0x00010869eec8();
        FUN_10869dee0();
      }
      unaff_x24 = param_1;
      if (((param_4 & 1) == 0) &&
         (func_0x00010869ee70(*(undefined8 *)(uVar13 - 8)), unaff_x24 = param_1, cVar3 == cVar2)) {
        func_0x00010869eebc();
        FUN_10869db48();
        uVar13 = param_1;
        goto LAB_10869d54c;
      }
      func_0x00010869eebc();
      FUN_10869dc5c();
      param_1 = unaff_x24;
      if ((param_2 & 1) != 0) {
        uVar12 = unaff_x24;
        func_0x00010869eec8();
        FUN_10869dd58();
        param_1 = unaff_x24 + 0x5d8;
        param_2 = uVar8;
        FUN_10869dd58();
        if ((int)param_1 == 0) goto code_r0x00010869d520;
        param_3 = -param_3;
        uVar8 = unaff_x24;
        if ((uVar12 & 1) != 0) {
          return;
        }
        goto LAB_10869d424;
      }
      goto LAB_10869d528;
    }
    func_0x00010869eebc();
    uVar13 = uVar8;
    func_0x00010869ee40();
    if (param_1 == param_2) {
      return;
    }
    func_0x00010869ef58();
    func_0x00010869edb0();
    lVar10 = (long)(param_2 - param_1) / 0x5d8;
    uVar12 = uVar8;
    if (0x5d8 < (long)(param_2 - param_1)) {
      uVar6 = lVar10 - 2U >> 1;
      lVar11 = uVar9 + uVar6 * 0x5d8;
      do {
        FUN_10869ebe8(uVar9,lVar10,lVar11);
        uVar6 = uVar6 - 1;
        lVar11 = lVar11 + -0x5d8;
      } while (-1 < (long)uVar6);
    }
    for (; uVar12 != uVar13; uVar12 = uVar12 + 0x5d8) {
      if (*(long *)(uVar12 + 0x5d0) < *(long *)(uVar8 - 8)) {
        FUN_10869dee0(uVar12,uVar9);
        FUN_10869ebe8(uVar9,lVar10,uVar9);
      }
    }
    do {
      if (lVar10 < 2) {
        func_0x00010869ee40();
        return;
      }
      func_0x00010069e734(auStack_bb0,uVar9);
      uVar12 = 0;
      uVar13 = uVar9;
      do {
        lVar11 = uVar13 + uVar12 * 0x5d8;
        uVar4 = uVar12 << 1 | 1;
        uVar6 = uVar12 * 2 + 2;
        uVar5 = lVar11 + 0x5d8U;
        uVar12 = uVar4;
        if (((long)uVar6 < lVar10) &&
           (uVar5 = lVar11 + 0xbb0, uVar12 = uVar6,
           *(long *)(lVar11 + 0x1180) <= *(long *)(lVar11 + 0xba8))) {
          uVar5 = lVar11 + 0x5d8U;
          uVar12 = uVar4;
        }
        FUN_10869df24(uVar13,uVar5);
        uVar13 = uVar5;
      } while ((long)uVar12 <= (long)(lVar10 - 2U >> 1));
      uVar8 = uVar8 - 0x5d8;
      if (uVar5 == uVar8) {
        FUN_10869df24(uVar5,auStack_bb0);
      }
      else {
        FUN_10869df24(uVar5,uVar8);
        FUN_10869df24(uVar8,auStack_bb0);
        uVar13 = (uVar5 - uVar9) + 0x5d8;
        if (0x5d8 < (long)uVar13) {
          uVar12 = uVar13 / 0x5d8 - 2 >> 1;
          uVar13 = uVar9 + uVar12 * 0x5d8;
          if (*(long *)(uVar13 + 0x5d0) < *(long *)(uVar5 + 0x5d0)) {
            func_0x00010069e734(auStack_5d8,uVar5);
            do {
              uVar6 = uVar13;
              FUN_10869df24(uVar5,uVar6);
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1 >> 1;
              uVar13 = uVar9 + uVar12 * 0x5d8;
              uVar5 = uVar6;
            } while (*(long *)(uVar13 + 0x5d0) < lStack_8);
            FUN_10869df24(uVar6,auStack_5d8);
            func_0x00010069ea28(auStack_5d8);
          }
        }
      }
      func_0x00010869ef08();
      lVar10 = lVar10 + -1;
    } while( true );
  }
  *(ulong *)((long)register0x00000008 + -0x30) = param_4;
  *(ulong *)((long)register0x00000008 + -0x28) = uVar13;
  *(ulong *)((long)register0x00000008 + -0x20) = uVar9;
  *(ulong *)((long)register0x00000008 + -0x18) = uVar8;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010869edb0();
  FUN_10869d66c();
  func_0x00010869ee70(*(undefined8 *)(uVar5 + 0x5d0));
  if (cVar3 != cVar2) {
    func_0x00010869ef00(uVar6);
    func_0x00010869ef90(*(undefined8 *)(uVar6 + 0x5d0));
    if ((cVar3 != cVar2) &&
       (func_0x00010869ef48(uVar8), *(long *)(uVar8 + 0x5d0) < *(long *)(uVar8 - 8))) {
      func_0x00010869efb0();
      unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
      unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
      puVar1 = (ulong *)((long)register0x00000008 + -0x30);
LAB_10869ef28:
      uVar9 = *(ulong *)((long)puVar1 + 0x10);
      uVar8 = *(ulong *)((long)puVar1 + 0x18);
      register0x00000008 = (BADSPACEBASE *)((long)puVar1 + 0x30);
code_r0x00010869dee0:
      *(undefined8 *)((long)register0x00000008 + -0x30) = 0x5d8;
      *(long *)((long)register0x00000008 + -0x28) = param_3;
      *(ulong *)((long)register0x00000008 + -0x20) = uVar9;
      *(ulong *)((long)register0x00000008 + -0x18) = uVar8;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      func_0x00010869edb0();
      func_0x00010869ef1c();
      func_0x00010869efb0();
      FUN_10869df24();
      func_0x00010869ee58();
      FUN_10869df24();
      func_0x00010869edf8();
      return;
    }
  }
  return;
LAB_10869d834:
  if (param_1 + 0x5d8 == uVar8) {
    return;
  }
  if (*(long *)(param_1 + 0xba8) < *(long *)(param_1 + 0x5d0)) {
    func_0x00010869ee34();
    lVar11 = lVar10;
    do {
      lVar7 = uVar9 + lVar11;
      FUN_10869df24(lVar7 + 0x5d8,lVar7);
      uVar13 = uVar9;
      if (lVar11 == 0) goto LAB_10869d890;
      lVar11 = lVar11 + -0x5d8;
    } while (lStack_58 < *(long *)(lVar7 + -8));
    uVar13 = uVar9 + lVar11 + 0x5d8;
LAB_10869d890:
    func_0x00010869eef8(uVar13);
    func_0x00010869edf8();
  }
  lVar10 = lVar10 + 0x5d8;
  param_1 = param_1 + 0x5d8;
  goto LAB_10869d834;
code_r0x00010869d520:
  uVar13 = unaff_x24 + 0x5d8;
  if ((uVar12 & 1) == 0) goto LAB_10869d528;
  goto LAB_10869d438;
LAB_10869d528:
  func_0x00010869eec8();
  FUN_10869d400();
  uVar12 = unaff_x24;
  uVar13 = unaff_x24 + 0x5d8;
LAB_10869d54c:
  param_4 = 0;
  param_3 = -param_3;
  unaff_x24 = uVar12;
  goto LAB_10869d430;
}



/* Entry: 10869d66c; end: 10869d767;  */

void FUN_10869d66c(long param_1,long param_2,long param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_2 + 0x5d0);
  lVar4 = *(long *)(param_3 + 0x5d0);
  if (lVar3 < *(long *)(param_1 + 0x5d0)) {
    cVar1 = SBORROW8(lVar4,lVar3);
    cVar2 = lVar4 - lVar3 < 0;
    if (lVar3 <= lVar4) {
      FUN_10869dee0(param_1,param_2);
      func_0x00010869ef90(*(undefined8 *)(param_3 + 0x5d0));
      if (cVar2 == cVar1) {
        return;
      }
    }
code_r0x00010869dee0:
    func_0x00010869edb0();
    func_0x00010869ef1c();
    func_0x00010869efb0();
    FUN_10869df24();
    func_0x00010869ee58();
    FUN_10869df24();
    func_0x00010869edf8();
    return;
  }
  cVar1 = SBORROW8(lVar4,lVar3);
  cVar2 = lVar4 - lVar3 < 0;
  if (lVar4 < lVar3) {
    FUN_10869dee0(param_2,param_3);
    func_0x00010869ee70(*(undefined8 *)(param_2 + 0x5d0));
    if (cVar2 != cVar1) {
      func_0x00010869eebc();
      goto code_r0x00010869dee0;
    }
  }
  return;
}



/* Entry: 10869d768; end: 10869d803;  */

void FUN_10869d768(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010869edb0();
  func_0x00010869d6fc();
  lVar3 = *(long *)(param_5 + 0x5d0);
  lVar4 = *(long *)(param_4 + 0x5d0);
  cVar1 = SBORROW8(lVar3,lVar4);
  cVar2 = lVar3 - lVar4 < 0;
  if (lVar3 < lVar4) {
    FUN_10869dee0(param_4,param_5);
    func_0x00010869ee70(*(undefined8 *)(param_4 + 0x5d0));
    if (cVar2 != cVar1) {
      func_0x00010869ef00(param_3);
      func_0x00010869ef90(*(undefined8 *)(param_3 + 0x5d0));
      if (cVar2 != cVar1) {
        func_0x00010869ef48();
        if (*(long *)(unaff_x19 + 0x5d0) < *(long *)(unaff_x20 + 0x5d0)) {
          func_0x00010869efb0();
          func_0x00010869edb0();
          func_0x00010869ef1c();
          func_0x00010869efb0();
          FUN_10869df24();
          func_0x00010869ee58();
          FUN_10869df24();
          func_0x00010869edf8();
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10869d804; end: 10869d8bf;  */

void FUN_10869d804(long param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uStack_58;
  
  if (param_1 != param_2) {
    func_0x00010869edb0();
    lVar2 = 0;
    while (param_1 + 0x5d8 != unaff_x19) {
      if (*(long *)(param_1 + 0xba8) < *(long *)(param_1 + 0x5d0)) {
        func_0x00010869ee34();
        lVar3 = lVar2;
        do {
          lVar1 = unaff_x20 + lVar3;
          FUN_10869df24(lVar1 + 0x5d8,lVar1);
          if (lVar3 == 0) break;
          lVar3 = lVar3 + -0x5d8;
        } while (uStack_58 < *(long *)(lVar1 + -8));
        func_0x00010869eef8();
        func_0x00010869edf8();
      }
      lVar2 = lVar2 + 0x5d8;
      param_1 = param_1 + 0x5d8;
    }
  }
  return;
}



/* Entry: 10869d8c0; end: 10869d947;  */

void FUN_10869d8c0(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    func_0x00010869edb0();
    while( true ) {
      lVar3 = unaff_x20;
      unaff_x20 = lVar3 + 0x5d8;
      cVar1 = SBORROW8(unaff_x20,unaff_x19);
      cVar2 = unaff_x20 - unaff_x19 < 0;
      if (unaff_x20 == unaff_x19) break;
      func_0x00010869ee70(*(undefined8 *)(lVar3 + 0xba8));
      if (cVar2 != cVar1) {
        func_0x00010869ef1c();
        do {
          lVar4 = lVar3;
          FUN_10869df24(lVar4 + 0x5d8,lVar4);
          lVar3 = lVar4 + -0x5d8;
        } while (uStack_38 < *(long *)(lVar4 + -8));
        func_0x00010869eef8(lVar4);
        func_0x00010869edf8();
      }
    }
  }
  return;
}



/* Entry: 10869d948; end: 10869db47;  */

void FUN_10869d948(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_bb0 [1496];
  undefined1 auStack_5d8 [1488];
  long lStack_8;
  
  if (param_1 != param_2) {
    func_0x00010869ef58();
    func_0x00010869edb0();
    lVar5 = (param_2 - param_1) / 0x5d8;
    lVar3 = unaff_x19;
    if (0x5d8 < param_2 - param_1) {
      uVar6 = lVar5 - 2U >> 1;
      do {
        FUN_10869ebe8();
        uVar6 = uVar6 - 1;
      } while (-1 < (long)uVar6);
    }
    for (; lVar3 != param_3; lVar3 = lVar3 + 0x5d8) {
      if (*(long *)(lVar3 + 0x5d0) < *(long *)(unaff_x20 + 0x5d0)) {
        FUN_10869dee0(lVar3);
        FUN_10869ebe8();
      }
    }
    for (; 1 < lVar5; lVar5 = lVar5 + -1) {
      func_0x00010069e734(auStack_bb0);
      uVar6 = 0;
      lVar3 = unaff_x20;
      do {
        lVar4 = lVar3 + uVar6 * 0x5d8;
        uVar2 = uVar6 << 1 | 1;
        uVar1 = uVar6 * 2 + 2;
        lVar3 = lVar4 + 0x5d8;
        uVar6 = uVar2;
        if (((long)uVar1 < lVar5) &&
           (lVar3 = lVar4 + 0xbb0, uVar6 = uVar1,
           *(long *)(lVar4 + 0x1180) <= *(long *)(lVar4 + 0xba8))) {
          lVar3 = lVar4 + 0x5d8;
          uVar6 = uVar2;
        }
        FUN_10869df24();
      } while ((long)uVar6 <= (long)(lVar5 - 2U >> 1));
      unaff_x19 = unaff_x19 + -0x5d8;
      if (lVar3 == unaff_x19) {
        FUN_10869df24(lVar3,auStack_bb0);
      }
      else {
        FUN_10869df24(lVar3,unaff_x19);
        FUN_10869df24(unaff_x19,auStack_bb0);
        uVar6 = (lVar3 - unaff_x20) + 0x5d8;
        if (0x5d8 < (long)uVar6) {
          uVar6 = uVar6 / 0x5d8 - 2 >> 1;
          lVar4 = unaff_x20 + uVar6 * 0x5d8;
          if (*(long *)(lVar4 + 0x5d0) < *(long *)(lVar3 + 0x5d0)) {
            func_0x00010069e734(auStack_5d8,lVar3);
            do {
              lVar7 = lVar4;
              FUN_10869df24(lVar3,lVar7);
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1 >> 1;
              lVar4 = unaff_x20 + uVar6 * 0x5d8;
              lVar3 = lVar7;
            } while (*(long *)(lVar4 + 0x5d0) < lStack_8);
            FUN_10869df24(lVar7,auStack_5d8);
            func_0x00010069ea28(auStack_5d8);
          }
        }
      }
      func_0x00010869ef08();
    }
    func_0x00010869ee40();
  }
  return;
}



/* Entry: 10869db48; end: 10869dc5b;  */

ulong FUN_10869db48(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x19;
  undefined1 auStack_618 [1488];
  long lStack_48;
  
  func_0x00010869ee00();
  func_0x00010069e734();
  uVar2 = unaff_x19;
  if (lStack_48 < *(long *)(param_2 - 8)) {
    do {
      uVar3 = uVar2 + 0x5d8;
      plVar1 = (long *)(uVar2 + 0xba8);
      uVar2 = uVar3;
    } while (*plVar1 <= lStack_48);
  }
  else {
    do {
      uVar3 = uVar2 + 0x5d8;
      if (param_2 <= uVar3) break;
      plVar1 = (long *)(uVar2 + 0xba8);
      uVar2 = uVar3;
    } while (*plVar1 <= lStack_48);
  }
  uVar2 = param_2;
  if (uVar3 < param_2) {
    do {
      param_2 = uVar2 - 0x5d8;
      plVar1 = (long *)(uVar2 - 8);
      uVar2 = param_2;
    } while (lStack_48 < *plVar1);
  }
  while (uVar3 < param_2) {
    func_0x00010869ef00(uVar3);
    do {
      plVar1 = (long *)(uVar3 + 0xba8);
      uVar3 = uVar3 + 0x5d8;
    } while (*plVar1 <= lStack_48);
    do {
      plVar1 = (long *)(param_2 - 8);
      param_2 = param_2 - 0x5d8;
    } while (lStack_48 < *plVar1);
  }
  if (unaff_x19 != uVar3 - 0x5d8) {
    FUN_10869df24();
  }
  FUN_10869df24(uVar3 - 0x5d8,auStack_618);
  func_0x00010869edf8();
  return uVar3;
}



/* Entry: 10869dc5c; end: 10869dd57;  */

void FUN_10869dc5c(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long unaff_x19;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x23;
  undefined1 auStack_618 [1488];
  long lStack_48;
  
  func_0x00010869ee00();
  func_0x00010069e734();
  lVar2 = 0;
  do {
    lVar5 = lVar2;
    lVar2 = lVar5 + 0x5d8;
  } while (*(long *)(unaff_x19 + lVar5 + 0xba8) < lStack_48);
  uVar6 = unaff_x19 + lVar2;
  cVar3 = SBORROW8(lVar2,0x5d8);
  cVar4 = lVar5 < 0;
  if (lVar2 == 0x5d8) {
    do {
      cVar3 = SBORROW8(uVar6,param_2);
      cVar4 = (long)(uVar6 - param_2) < 0;
      uVar7 = param_2;
      if (param_2 <= uVar6) break;
      func_0x00010869ef9c();
      uVar7 = unaff_x23;
    } while (cVar4 == cVar3);
  }
  else {
    do {
      func_0x00010869ef9c();
      uVar7 = unaff_x23;
    } while (cVar4 == cVar3);
  }
  while (uVar6 < uVar7) {
    func_0x00010869ef48(uVar6);
    do {
      plVar1 = (long *)(uVar6 + 0xba8);
      uVar6 = uVar6 + 0x5d8;
    } while (*plVar1 < lStack_48);
    do {
      plVar1 = (long *)(uVar7 - 8);
      uVar7 = uVar7 - 0x5d8;
    } while (lStack_48 <= *plVar1);
  }
  if (unaff_x19 != uVar6 - 0x5d8) {
    FUN_10869df24();
  }
  FUN_10869df24(uVar6 - 0x5d8,auStack_618);
  func_0x00010869edf8();
  func_0x00010869efb0();
  return;
}


