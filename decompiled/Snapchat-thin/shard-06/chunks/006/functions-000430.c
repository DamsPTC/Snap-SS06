/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c314e8; end: 104c314fb;  */

void FUN_104c314e8(undefined8 *param_1)

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



/* Entry: 104c314fc; end: 104c3151f;  */

void FUN_104c314fc(void)

{
  func_0x000104c34268();
  FUN_104c31520();
  return;
}



/* Entry: 104c31520; end: 104c31533;  */

void FUN_104c31520(undefined8 *param_1)

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



/* Entry: 104c31534; end: 104c315d3;  */

long FUN_104c31534(long param_1)

{
  func_0x000104c31558(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 104c315d4; end: 104c31603;  */

/* WARNING: Possible PIC construction at 0x000104c315f4: Changing call to branch */

long * FUN_104c315d4(long *param_1,long *param_2,long param_3,long *param_4)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  int extraout_w10;
  long lVar5;
  long *plStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  if ((long *)(param_1[1] - *param_1 >> 4) <= param_2) {
    func_0x000104c34744();
    lVar4 = param_4[1];
    lVar5 = *param_4;
    param_1[1] = param_4[1];
    *param_1 = lVar5;
    if (lVar4 != 0) {
      do {
        func_0x000104c346d0();
      } while (extraout_w10 != 0);
    }
    *(undefined4 *)(param_1 + 3) = 4;
    param_1[2] = param_3;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    lStack_88 = *param_2;
    lStack_80 = lStack_88 + param_2[1];
    uStack_78 = 99;
    while( true ) {
      iVar2 = (int)&lStack_88;
      FUN_104c2f230();
      if (iVar2 == 0) break;
      switch(uStack_78._4_4_) {
      case 1:
        plVar3 = &lStack_88;
        FUN_104c317e4();
        plStack_a8 = plVar3;
        FUN_104c31778(param_1 + 3,&plStack_a8);
        break;
      case 2:
        func_0x000104c346ec();
        param_1[0xd] = lStack_a0;
        param_1[0xc] = (long)plStack_a8;
        param_1[0xf] = lStack_90;
        param_1[0xe] = lStack_98;
        break;
      case 3:
        uVar1 = SUB81(&lStack_88,0);
        FUN_104c319cc();
        *(undefined1 *)(param_1 + 0xb) = uVar1;
        break;
      case 4:
        func_0x000104c346ec();
        param_1[0x11] = lStack_a0;
        param_1[0x10] = (long)plStack_a8;
        param_1[0x13] = lStack_90;
        param_1[0x12] = lStack_98;
        break;
      default:
        FUN_104c2f2fc(&lStack_88);
      }
    }
    return param_1;
  }
  return (long *)(*param_1 + (long)param_2 * 0x10);
}



/* Entry: 104c31604; end: 104c31777;  */

undefined8 * FUN_104c31604(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar4 = param_4[1];
  uVar5 = *param_4;
  param_1[1] = param_4[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000104c346d0();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(param_1 + 3) = 4;
  param_1[2] = param_3;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  lStack_68 = *param_2;
  lStack_60 = lStack_68 + param_2[1];
  uStack_58 = 99;
  while( true ) {
    iVar2 = (int)&lStack_68;
    FUN_104c2f230();
    if (iVar2 == 0) break;
    switch(uStack_58._4_4_) {
    case 1:
      plVar3 = &lStack_68;
      FUN_104c317e4();
      plStack_88 = plVar3;
      FUN_104c31778(param_1 + 3,&plStack_88);
      break;
    case 2:
      func_0x000104c346ec();
      param_1[0xd] = uStack_80;
      param_1[0xc] = plStack_88;
      param_1[0xf] = uStack_70;
      param_1[0xe] = uStack_78;
      break;
    case 3:
      uVar1 = SUB81(&lStack_68,0);
      FUN_104c319cc();
      *(undefined1 *)(param_1 + 0xb) = uVar1;
      break;
    case 4:
      func_0x000104c346ec();
      param_1[0x11] = uStack_80;
      param_1[0x10] = plStack_88;
      param_1[0x13] = uStack_70;
      param_1[0x12] = uStack_78;
      break;
    default:
      FUN_104c2f2fc(&lStack_68);
    }
  }
  return param_1;
}



/* Entry: 104c31778; end: 104c317e3;  */

long * FUN_104c31778(long *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 in_ZR;
  long *plVar2;
  int iVar3;
  byte *pbVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  byte *pbVar7;
  ulong uVar8;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_28;
  
  func_0x000100060994();
  auStack_68[0] = 3;
  uStack_60 = *param_2;
  iVar3 = (int)auStack_68;
  uStack_28 = extraout_x8;
  FUN_104c317ec();
  plVar2 = (long *)auStack_68;
  FUN_104c319e0();
  func_0x000100060b40(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  pbVar4 = (byte *)plVar2[1];
  pbVar7 = (byte *)*plVar2;
  if ((pbVar4 != pbVar7) && (bVar1 = *pbVar7, -1 < (long)(char)bVar1)) {
    *plVar2 = (long)(pbVar7 + 1);
    return (long *)(long)(char)bVar1;
  }
  pbVar7 = (byte *)*plVar2;
  if (9 < (long)pbVar4 - (long)pbVar7) {
    pbVar4 = pbVar7 + 1;
    plVar5 = (long *)((ulong)*pbVar7 & 0x7f);
    if ((char)*pbVar7 < '\0') {
      plVar5 = (long *)((ulong)plVar5 | ((ulong)pbVar7[1] & 0x7f) << 7);
      if ((char)pbVar7[1] < '\0') {
        plVar5 = (long *)((ulong)plVar5 | ((ulong)pbVar7[2] & 0x7f) << 0xe);
        if ((char)pbVar7[2] < '\0') {
          plVar5 = (long *)((ulong)plVar5 | ((ulong)pbVar7[3] & 0x7f) << 0x15);
          if ((char)pbVar7[3] < '\0') {
            plVar5 = (long *)((ulong)plVar5 | ((ulong)pbVar7[4] & 0x7f) << 0x1c);
            if ((char)pbVar7[4] < '\0') {
              plVar5 = (long *)((ulong)plVar5 | ((ulong)pbVar7[5] & 0x7f) << 0x23);
              if ((char)pbVar7[5] < '\0') {
                plVar5 = (long *)((ulong)plVar5 | ((ulong)pbVar7[6] & 0x7f) << 0x2a);
                if ((char)pbVar7[6] < '\0') {
                  plVar5 = (long *)((ulong)plVar5 | ((ulong)pbVar7[7] & 0x7f) << 0x31);
                  if ((char)pbVar7[7] < '\0') {
                    pbVar4 = pbVar7 + 9;
                    plVar5 = (long *)((ulong)plVar5 | ((ulong)pbVar7[8] & 0x7f) << 0x38);
                    if ((char)pbVar7[8] < '\0') {
                      if ((long)(char)*pbVar4 < 0) goto LAB_104c2f4f8;
                      plVar5 = (long *)((ulong)plVar5 | (long)(char)*pbVar4 << 0x3f);
                      pbVar4 = pbVar7 + 10;
                    }
                  }
                  else {
                    pbVar4 = pbVar7 + 8;
                  }
                }
                else {
                  pbVar4 = pbVar7 + 7;
                }
              }
              else {
                pbVar4 = pbVar7 + 6;
              }
            }
            else {
              pbVar4 = pbVar7 + 5;
            }
          }
          else {
            pbVar4 = pbVar7 + 4;
          }
        }
        else {
          pbVar4 = pbVar7 + 3;
        }
      }
      else {
        pbVar4 = pbVar7 + 2;
      }
    }
LAB_104c2f444:
    *plVar2 = (long)pbVar4;
    return plVar5;
  }
  uVar6 = 0;
  uVar8 = 0;
  while (pbVar7 != pbVar4) {
    bVar1 = *pbVar7;
    if (-1 < (char)bVar1) {
      plVar5 = (long *)((ulong)bVar1 << (uVar8 & 0x3f) | uVar6);
      pbVar4 = pbVar7 + 1;
      goto LAB_104c2f444;
    }
    uVar6 = ((ulong)bVar1 & 0x7f) << (uVar8 & 0x3f) | uVar6;
    uVar8 = (ulong)((int)uVar8 + 7);
    pbVar7 = pbVar7 + 1;
  }
  func_0x000104c34438();
  func_0x000104c3419c();
LAB_104c2f4f8:
  func_0x000104c34438();
  func_0x000104c343bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return plVar2;
}



/* Entry: 104c317e4; end: 104c317eb;  */

long * FUN_104c317e4(long *param_1)

{
  byte bVar1;
  byte *pbVar2;
  long *plVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  
  pbVar2 = (byte *)param_1[1];
  pbVar5 = (byte *)*param_1;
  if ((pbVar2 != pbVar5) && (bVar1 = *pbVar5, -1 < (long)(char)bVar1)) {
    *param_1 = (long)(pbVar5 + 1);
    return (long *)(long)(char)bVar1;
  }
  pbVar5 = (byte *)*param_1;
  if (9 < (long)pbVar2 - (long)pbVar5) {
    pbVar2 = pbVar5 + 1;
    plVar3 = (long *)((ulong)*pbVar5 & 0x7f);
    if ((char)*pbVar5 < '\0') {
      plVar3 = (long *)((ulong)plVar3 | ((ulong)pbVar5[1] & 0x7f) << 7);
      if ((char)pbVar5[1] < '\0') {
        plVar3 = (long *)((ulong)plVar3 | ((ulong)pbVar5[2] & 0x7f) << 0xe);
        if ((char)pbVar5[2] < '\0') {
          plVar3 = (long *)((ulong)plVar3 | ((ulong)pbVar5[3] & 0x7f) << 0x15);
          if ((char)pbVar5[3] < '\0') {
            plVar3 = (long *)((ulong)plVar3 | ((ulong)pbVar5[4] & 0x7f) << 0x1c);
            if ((char)pbVar5[4] < '\0') {
              plVar3 = (long *)((ulong)plVar3 | ((ulong)pbVar5[5] & 0x7f) << 0x23);
              if ((char)pbVar5[5] < '\0') {
                plVar3 = (long *)((ulong)plVar3 | ((ulong)pbVar5[6] & 0x7f) << 0x2a);
                if ((char)pbVar5[6] < '\0') {
                  plVar3 = (long *)((ulong)plVar3 | ((ulong)pbVar5[7] & 0x7f) << 0x31);
                  if ((char)pbVar5[7] < '\0') {
                    pbVar2 = pbVar5 + 9;
                    plVar3 = (long *)((ulong)plVar3 | ((ulong)pbVar5[8] & 0x7f) << 0x38);
                    if ((char)pbVar5[8] < '\0') {
                      if ((long)(char)*pbVar2 < 0) goto LAB_104c2f4f8;
                      plVar3 = (long *)((ulong)plVar3 | (long)(char)*pbVar2 << 0x3f);
                      pbVar2 = pbVar5 + 10;
                    }
                  }
                  else {
                    pbVar2 = pbVar5 + 8;
                  }
                }
                else {
                  pbVar2 = pbVar5 + 7;
                }
              }
              else {
                pbVar2 = pbVar5 + 6;
              }
            }
            else {
              pbVar2 = pbVar5 + 5;
            }
          }
          else {
            pbVar2 = pbVar5 + 4;
          }
        }
        else {
          pbVar2 = pbVar5 + 3;
        }
      }
      else {
        pbVar2 = pbVar5 + 2;
      }
    }
LAB_104c2f444:
    *param_1 = (long)pbVar2;
    return plVar3;
  }
  uVar4 = 0;
  uVar6 = 0;
  while (pbVar5 != pbVar2) {
    bVar1 = *pbVar5;
    if (-1 < (char)bVar1) {
      plVar3 = (long *)((ulong)bVar1 << (uVar6 & 0x3f) | uVar4);
      pbVar2 = pbVar5 + 1;
      goto LAB_104c2f444;
    }
    uVar4 = ((ulong)bVar1 & 0x7f) << (uVar6 & 0x3f) | uVar4;
    uVar6 = (ulong)((int)uVar6 + 7);
    pbVar5 = pbVar5 + 1;
  }
  func_0x000104c34438();
  func_0x000104c3419c();
LAB_104c2f4f8:
  func_0x000104c34438();
  func_0x000104c343bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return param_1;
}



/* Entry: 104c317ec; end: 104c3181f;  */

void FUN_104c317ec(undefined4 *param_1)

{
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x000104c342bc();
  FUN_104c31820(*param_1,unaff_x20 + 2);
  func_0x000104c34398();
  func_0x000104c31830();
  *unaff_x20 = *unaff_x19;
  return;
}



/* Entry: 104c31820; end: 104c318bb;  */

void FUN_104c31820(int param_1,long param_2)

{
  undefined1 uStack_21;
  
  if (param_1 == 4) {
    return;
  }
  if (param_1 == 3) {
    return;
  }
  if (param_1 == 2) {
    return;
  }
  if (param_1 == 1) {
    return;
  }
  if (param_1 != 0) {
    return;
  }
  if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107eb090)[*(uint *)(param_2 + 0x28)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 104c318bc; end: 104c318eb;  */

void FUN_104c318bc(long param_1,long param_2)

{
  FUN_104c318ec();
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return;
}



/* Entry: 104c318ec; end: 104c3190f;  */

void FUN_104c318ec(void)

{
  func_0x000104c34818();
  FUN_104c31910();
  return;
}



/* Entry: 104c31910; end: 104c31953;  */

void FUN_104c31910(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001000d03a8();
  FUN_104c2f714();
  iVar1 = *(int *)(unaff_x20 + 0x28);
  if (iVar1 != -1) {
    func_0x000104c3453c(&PTR_FUN_1107eb108);
    *(int *)(unaff_x19 + 0x28) = iVar1;
  }
  return;
}



/* Entry: 104c31954; end: 104c3199b;  */

void FUN_104c31954(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 104c3199c; end: 104c319cb;  */

void FUN_104c3199c(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = (uint)param_2;
  FUN_104c2f61c();
  lVar2 = *param_2;
  *param_1 = lVar2 - (ulong)uVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar2;
  return;
}



/* Entry: 104c319cc; end: 104c319df;  */

void FUN_104c319cc(void)

{
  func_0x000104c34718();
  return;
}



/* Entry: 104c319e0; end: 104c31a03;  */

void FUN_104c319e0(void)

{
  func_0x000104c3463c();
  FUN_104c31820();
  return;
}



/* Entry: 104c31a04; end: 104c31a3f;  */

undefined8 * FUN_104c31a04(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  
  func_0x000104c3464c();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_104c31a40();
  }
  else {
    uVar2 = *param_2;
    extraout_x8[1] = param_2[1];
    *extraout_x8 = uVar2;
    puVar1 = extraout_x8 + 2;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 104c31a40; end: 104c31a9b;  */

void FUN_104c31a40(void)

{
  func_0x000104c34188();
  FUN_104c31a9c();
  func_0x000104c34298();
  func_0x000104c345c4();
  FUN_104c31af0();
  func_0x000104c3454c();
  func_0x000104c343b0();
  FUN_104c31ac4();
  func_0x000104c344d0();
  FUN_104c31b5c();
  return;
}



/* Entry: 104c31a9c; end: 104c31ac3;  */

undefined8 FUN_104c31a9c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3c == 0) {
    func_0x000104c3482c();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_104c31ae4();
  func_0x000104c340f0();
  func_0x000104c34088();
  return param_1;
}



/* Entry: 104c31ac4; end: 104c31ae3;  */

void FUN_104c31ac4(void)

{
  func_0x000104c340f0();
  func_0x000104c34088();
  return;
}



/* Entry: 104c31ae4; end: 104c31aef;  */

void FUN_104c31ae4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000104c341c0();
  func_0x000104c342d0();
  if (param_2 != 0) {
    func_0x000104c31b20(param_4);
  }
  func_0x000104c3465c();
  return;
}



/* Entry: 104c31af0; end: 104c31b3f;  */

void FUN_104c31af0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000104c342d0();
  if (param_2 != 0) {
    func_0x000104c31b20(param_4);
  }
  func_0x000104c3465c();
  return;
}



/* Entry: 104c31b40; end: 104c31b5b;  */

long * FUN_104c31b40(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  FUN_104bd35f4();
  FUN_104c31b88();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c31b5c; end: 104c31b87;  */

long * FUN_104c31b5c(long *param_1)

{
  FUN_104c31b88();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c31b88; end: 104c31bab;  */

void FUN_104c31b88(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 104c31bac; end: 104c31bcf;  */

undefined8 FUN_104c31bac(undefined8 param_1)

{
  FUN_104c31bd0();
  return param_1;
}



/* Entry: 104c31bd0; end: 104c31c03;  */

void FUN_104c31bd0(undefined4 *param_1)

{
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x000104c342bc();
  FUN_104c31c04(*param_1,unaff_x20 + 2);
  func_0x000104c34398();
  func_0x000104c31c14();
  *unaff_x20 = *unaff_x19;
  return;
}



/* Entry: 104c31c04; end: 104c31c5b;  */

void FUN_104c31c04(int param_1,undefined8 param_2)

{
  if (param_1 == 7) {
    return;
  }
  if (param_1 == 6) {
    return;
  }
  if (param_1 != 5) {
    if (param_1 == 4) {
      func_0x000104c34268(param_2);
      func_0x000104c31ccc();
      return;
    }
    if (param_1 != 3) {
      if (param_1 == 2) {
        func_0x000104c34268(param_2);
        func_0x000104c31d7c();
        return;
      }
      if (param_1 == 1) {
        func_0x000104c34268(param_2);
        func_0x000104c31e14();
        return;
      }
      if (param_1 == 0) {
        func_0x000104c34268(param_2);
        func_0x000104c31ea0();
        return;
      }
      return;
    }
  }
  func_0x000104c34268(param_2);
  FUN_104c31c80();
  return;
}



/* Entry: 104c31c5c; end: 104c31c7f;  */

void FUN_104c31c5c(void)

{
  func_0x000104c34268();
  FUN_104c31c80();
  return;
}



/* Entry: 104c31c80; end: 104c31ca7;  */

void FUN_104c31c80(undefined8 *param_1)

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



/* Entry: 104c31ca8; end: 104c31cf7;  */

void FUN_104c31ca8(void)

{
  func_0x000104c34268();
  func_0x000104c31ccc();
  return;
}



/* Entry: 104c31cf8; end: 104c31cff;  */

void FUN_104c31cf8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104c342bc(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    func_0x000104c345bc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104c31d00; end: 104c31d2f;  */

void FUN_104c31d00(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104c342bc();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    func_0x000104c345bc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104c31d30; end: 104c31d57;  */

void FUN_104c31d30(int param_1,undefined8 param_2)

{
  if (param_1 == 2) {
    func_0x000104c34268(param_2);
    func_0x000104c31d7c();
  }
  else if (param_1 == 1) {
    func_0x000104c34268(param_2);
    func_0x000104c31e14();
  }
  else {
    if (param_1 != 0) {
      return;
    }
    func_0x000104c34268(param_2);
    func_0x000104c31ea0();
  }
  return;
}



/* Entry: 104c31d58; end: 104c31da7;  */

void FUN_104c31d58(void)

{
  func_0x000104c34268();
  func_0x000104c31d7c();
  return;
}



/* Entry: 104c31da8; end: 104c31daf;  */

void FUN_104c31da8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104c342bc(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    func_0x000104c345bc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104c31db0; end: 104c31ddf;  */

void FUN_104c31db0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104c342bc();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    func_0x000104c345bc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104c31de0; end: 104c31def;  */

void FUN_104c31de0(int param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    return;
  }
  func_0x000104c34268(param_2);
  func_0x000104c31ea0();
  return;
}



/* Entry: 104c31df0; end: 104c31e3f;  */

void FUN_104c31df0(void)

{
  func_0x000104c34268();
  func_0x000104c31e14();
  return;
}



/* Entry: 104c31e40; end: 104c31e47;  */

void FUN_104c31e40(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104c342bc(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    FUN_104c31ca8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104c31e48; end: 104c31ecb;  */

void FUN_104c31e48(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104c342bc();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    FUN_104c31ca8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104c31ecc; end: 104c31ed3;  */

void FUN_104c31ecc(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104c342bc(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    FUN_104c3365c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104c31ed4; end: 104c31f07;  */

void FUN_104c31ed4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104c342bc();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    FUN_104c3365c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104c31f08; end: 104c31f7b;  */

void FUN_104c31f08(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 6) {
    uVar1 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar1;
    return;
  }
  if ((((param_1 != 5) && (param_1 != 4)) && (param_1 != 3)) &&
     (((param_1 != 2 && (param_1 != 1)) && (param_1 != 0)))) {
    return;
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uVar1 = *param_2;
  param_3[1] = param_2[1];
  *param_3 = uVar1;
  param_3[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 104c31f7c; end: 104c31fb7;  */

long FUN_104c31f7c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_104c31fb8();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_104c31fbc();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x18;
}



/* Entry: 104c31fb8; end: 104c31fbb;  */

void FUN_104c31fb8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 104c31fbc; end: 104c32017;  */

void FUN_104c31fbc(void)

{
  func_0x000104c34188();
  func_0x000104c3461c();
  FUN_104c32018();
  func_0x000104c34298();
  func_0x000104c345c4();
  FUN_104c32068();
  func_0x000104c343e8();
  func_0x000104c343b0();
  FUN_104c32038();
  func_0x000104c344d0();
  func_0x000104c321bc();
  return;
}



/* Entry: 104c32018; end: 104c32037;  */

long * FUN_104c32018(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    FUN_104c3205c();
    func_0x000104c34220();
    FUN_104c320dc();
    func_0x000104c34088();
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



/* Entry: 104c32038; end: 104c3205b;  */

void FUN_104c32038(void)

{
  func_0x000104c34220();
  FUN_104c320dc();
  func_0x000104c34088();
  return;
}



/* Entry: 104c3205c; end: 104c32067;  */

void FUN_104c3205c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000104c341c0();
  func_0x000104c342d0();
  if (param_2 != 0) {
    func_0x000104c32098(param_4);
  }
  func_0x000104c342e0();
  return;
}



/* Entry: 104c32068; end: 104c320b7;  */

void FUN_104c32068(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000104c342d0();
  if (param_2 != 0) {
    func_0x000104c32098(param_4);
  }
  func_0x000104c342e0();
  return;
}



/* Entry: 104c320b8; end: 104c320db;  */

void FUN_104c320b8(undefined8 param_1,ulong param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  undefined1 auStack_60 [48];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  FUN_104bd35f4();
  func_0x000104c34278();
  lVar1 = extraout_x8;
  while (lVar1 != param_3) {
    func_0x000104c341dc();
    lVar1 = extraout_x8_00;
  }
  func_0x000104c347d4();
  FUN_104c32124();
  FUN_104c32150(auStack_60);
  return;
}



/* Entry: 104c320dc; end: 104c32123;  */

void FUN_104c320dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  undefined1 auStack_50 [48];
  
  func_0x000104c34278();
  lVar1 = extraout_x8;
  while (lVar1 != param_3) {
    func_0x000104c341dc();
    lVar1 = extraout_x8_00;
  }
  func_0x000104c347d4();
  FUN_104c32124();
  FUN_104c32150(auStack_50);
  return;
}



/* Entry: 104c32124; end: 104c3214f;  */

void FUN_104c32124(long param_1)

{
  long unaff_x19;
  
  func_0x000104c347b4();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x18) {
    FUN_104c31c5c();
  }
  return;
}



/* Entry: 104c32150; end: 104c3217f;  */

long FUN_104c32150(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_104c32180(param_1);
  }
  return param_1;
}



/* Entry: 104c32180; end: 104c3218f;  */

void FUN_104c32180(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000104c346b0();
  while (param_3 != param_5) {
    func_0x000104c345bc();
  }
  return;
}



/* Entry: 104c32190; end: 104c321e7;  */

void FUN_104c32190(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    func_0x000104c345bc();
  }
  return;
}



/* Entry: 104c321e8; end: 104c321ef;  */

void FUN_104c321e8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104c342bc(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    func_0x000104c346e0();
  }
  return;
}



/* Entry: 104c321f0; end: 104c3221b;  */

void FUN_104c321f0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104c342bc();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    func_0x000104c346e0();
  }
  return;
}



/* Entry: 104c3221c; end: 104c322cf;  */

void FUN_104c3221c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined8 *puVar3;
  long unaff_x21;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar3 = puVar2 + 3;
    puVar2[2] = 0;
  }
  else {
    func_0x000104c3461c((long)puVar2 - *param_1);
    FUN_104c322d0(param_1);
    func_0x000104c34298();
    lVar1 = 0;
    if (unaff_x21 != 0) {
      lVar1 = extraout_x8 / unaff_x21;
    }
    FUN_104c32320(auStack_58,param_2,lVar1,param_1 + 2);
    *puStack_48 = 0;
    puStack_48[1] = 0;
    puStack_48[2] = 0;
    puStack_48 = puStack_48 + 3;
    func_0x000104c343b0();
    FUN_104c322f0();
    puVar3 = (undefined8 *)param_1[1];
    func_0x000104c32474(auStack_58);
  }
  param_1[1] = (long)puVar3;
  return;
}



/* Entry: 104c322d0; end: 104c322ef;  */

long * FUN_104c322d0(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    FUN_104c32314();
    func_0x000104c34220();
    FUN_104c32394();
    func_0x000104c34088();
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



/* Entry: 104c322f0; end: 104c32313;  */

void FUN_104c322f0(void)

{
  func_0x000104c34220();
  FUN_104c32394();
  func_0x000104c34088();
  return;
}



/* Entry: 104c32314; end: 104c3231f;  */

void FUN_104c32314(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000104c341c0();
  func_0x000104c342d0();
  if (param_2 != 0) {
    func_0x000104c32350(param_4);
  }
  func_0x000104c342e0();
  return;
}



/* Entry: 104c32320; end: 104c3236f;  */

void FUN_104c32320(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000104c342d0();
  if (param_2 != 0) {
    func_0x000104c32350(param_4);
  }
  func_0x000104c342e0();
  return;
}



/* Entry: 104c32370; end: 104c32393;  */

void FUN_104c32370(undefined8 param_1,ulong param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  undefined1 auStack_60 [48];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  FUN_104bd35f4();
  func_0x000104c34278();
  lVar1 = extraout_x8;
  while (lVar1 != param_3) {
    func_0x000104c341dc();
    lVar1 = extraout_x8_00;
  }
  func_0x000104c347d4();
  FUN_104c323dc();
  FUN_104c32408(auStack_60);
  return;
}



/* Entry: 104c32394; end: 104c323db;  */

void FUN_104c32394(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  undefined1 auStack_50 [48];
  
  func_0x000104c34278();
  lVar1 = extraout_x8;
  while (lVar1 != param_3) {
    func_0x000104c341dc();
    lVar1 = extraout_x8_00;
  }
  func_0x000104c347d4();
  FUN_104c323dc();
  FUN_104c32408(auStack_50);
  return;
}



/* Entry: 104c323dc; end: 104c32407;  */

void FUN_104c323dc(long param_1)

{
  long unaff_x19;
  
  func_0x000104c347b4();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x18) {
    FUN_104c31c5c();
  }
  return;
}



/* Entry: 104c32408; end: 104c32437;  */

long FUN_104c32408(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_104c32438(param_1);
  }
  return param_1;
}



/* Entry: 104c32438; end: 104c32447;  */

void FUN_104c32438(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000104c346b0();
  while (param_3 != param_5) {
    func_0x000104c345bc();
  }
  return;
}



/* Entry: 104c32448; end: 104c3249f;  */

void FUN_104c32448(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    func_0x000104c345bc();
  }
  return;
}



/* Entry: 104c324a0; end: 104c324a7;  */

void FUN_104c324a0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104c342bc(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    func_0x000104c346e0();
  }
  return;
}



/* Entry: 104c324a8; end: 104c3250f;  */

void FUN_104c324a8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104c342bc();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    func_0x000104c346e0();
  }
  return;
}



/* Entry: 104c32510; end: 104c32513;  */

void FUN_104c32510(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 104c32514; end: 104c3256f;  */

void FUN_104c32514(void)

{
  func_0x000104c34188();
  func_0x000104c3461c();
  FUN_104c32570();
  func_0x000104c34298();
  func_0x000104c345c4();
  FUN_104c325c0();
  func_0x000104c343e8();
  func_0x000104c343b0();
  FUN_104c32590();
  func_0x000104c344d0();
  func_0x000104c32718();
  return;
}



/* Entry: 104c32570; end: 104c3258f;  */

long * FUN_104c32570(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    FUN_104c325b4();
    func_0x000104c34220();
    FUN_104c32634();
    func_0x000104c34088();
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



/* Entry: 104c32590; end: 104c325b3;  */

void FUN_104c32590(void)

{
  func_0x000104c34220();
  FUN_104c32634();
  func_0x000104c34088();
  return;
}



/* Entry: 104c325b4; end: 104c325bf;  */

void FUN_104c325b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000104c341c0();
  func_0x000104c342d0();
  if (param_2 != 0) {
    func_0x000104c325f0(param_4);
  }
  func_0x000104c342e0();
  return;
}



/* Entry: 104c325c0; end: 104c3260f;  */

void FUN_104c325c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000104c342d0();
  if (param_2 != 0) {
    func_0x000104c325f0(param_4);
  }
  func_0x000104c342e0();
  return;
}



/* Entry: 104c32610; end: 104c32633;  */

void FUN_104c32610(undefined8 param_1,ulong param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  undefined1 auStack_60 [48];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  FUN_104bd35f4();
  func_0x000104c34278();
  lVar1 = extraout_x8;
  while (lVar1 != param_3) {
    func_0x000104c341dc();
    lVar1 = extraout_x8_00;
  }
  func_0x000104c347d4();
  FUN_104c3267c();
  FUN_104c326a8(auStack_60);
  return;
}



/* Entry: 104c32634; end: 104c3267b;  */

void FUN_104c32634(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  undefined1 auStack_50 [48];
  
  func_0x000104c34278();
  lVar1 = extraout_x8;
  while (lVar1 != param_3) {
    func_0x000104c341dc();
    lVar1 = extraout_x8_00;
  }
  func_0x000104c347d4();
  FUN_104c3267c();
  FUN_104c326a8(auStack_50);
  return;
}



/* Entry: 104c3267c; end: 104c326a7;  */

void FUN_104c3267c(long param_1)

{
  long unaff_x19;
  
  func_0x000104c347b4();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x18) {
    FUN_104c31ca8();
  }
  return;
}



/* Entry: 104c326a8; end: 104c326d7;  */

long FUN_104c326a8(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_104c326d8(param_1);
  }
  return param_1;
}



/* Entry: 104c326d8; end: 104c326e7;  */

void FUN_104c326d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000104c346b0();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    FUN_104c31ca8();
  }
  return;
}



/* Entry: 104c326e8; end: 104c32743;  */

void FUN_104c326e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    FUN_104c31ca8();
  }
  return;
}



/* Entry: 104c32744; end: 104c3274b;  */

void FUN_104c32744(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104c342bc(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    FUN_104c31ca8();
  }
  return;
}



/* Entry: 104c3274c; end: 104c3277f;  */

void FUN_104c3274c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104c342bc();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    FUN_104c31ca8();
  }
  return;
}



/* Entry: 104c32780; end: 104c327d3;  */

void FUN_104c32780(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_2 <= (ulong)(*(long *)(*param_1 + -8) + param_1[3])) {
    return;
  }
  if (param_2 == 7) {
    lVar4 = 8;
  }
  else {
    lVar4 = (long)(param_2 - 1) / 7 + param_2;
  }
  uVar5 = 0xffffffffffffffff >> (LZCOUNT(lVar4) & 0x3fU);
  if (lVar4 == 0) {
    uVar5 = 1;
  }
  lVar1 = *param_1;
  lVar7 = param_1[1];
  lVar8 = param_1[2];
  param_1[2] = uVar5;
  FUN_104c32974();
  lVar9 = param_1[1];
  for (lVar4 = 0; lVar8 != lVar4; lVar4 = lVar4 + 1) {
    if (-1 < *(char *)(lVar1 + lVar4)) {
      lVar6 = lVar7;
      FUN_104c2fe38();
      plVar3 = param_1;
      func_0x000100061de0(param_1,lVar6);
      bVar2 = (byte)lVar6 & 0x7f;
      uVar5 = param_1[2];
      lVar6 = *param_1;
      *(byte *)(lVar6 + (long)plVar3) = bVar2;
      *(byte *)(lVar6 + ((long)plVar3 - 7U & uVar5) + (uVar5 & 7)) = bVar2;
      func_0x000104c329c4(param_1,lVar9 + (long)plVar3 * 0x78,lVar7);
    }
    lVar7 = lVar7 + 0x78;
  }
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
  return;
}



/* Entry: 104c327d4; end: 104c327f7;  */

undefined1  [16] FUN_104c327d4(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = *param_1;
  func_0x000104c32af8();
  return auVar1;
}



/* Entry: 104c327f8; end: 104c32863;  */

void FUN_104c327f8(undefined8 *param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_1;
  func_0x000104c2f39c(&uStack_18,param_1[1]);
  return;
}



/* Entry: 104c32864; end: 104c32883;  */

void FUN_104c32864(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    FUN_104c32884(param_1,param_3);
  }
  return;
}



/* Entry: 104c32884; end: 104c328ab;  */

long FUN_104c32884(byte *param_1,byte *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    lVar1 = lVar1 + (ulong)(*param_1 >> 7 ^ 1);
  }
  return lVar1;
}



/* Entry: 104c328ac; end: 104c32973;  */

void FUN_104c328ac(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  param_1[2] = param_2;
  FUN_104c32974();
  lVar9 = param_1[1];
  for (lVar8 = 0; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar5 = lVar6;
      FUN_104c2fe38();
      plVar3 = param_1;
      func_0x000100061de0(param_1,lVar5);
      bVar2 = (byte)lVar5 & 0x7f;
      uVar4 = param_1[2];
      lVar5 = *param_1;
      *(byte *)(lVar5 + (long)plVar3) = bVar2;
      *(byte *)(lVar5 + ((long)plVar3 - 7U & uVar4) + (uVar4 & 7)) = bVar2;
      func_0x000104c329c4(param_1,lVar9 + (long)plVar3 * 0x78,lVar6);
    }
    lVar6 = lVar6 + 0x78;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 104c32974; end: 104c32a17;  */

void FUN_104c32974(long *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uStack_21;
  
  uVar2 = param_1[2] + 0x17U & 0xfffffffffffffff8;
  puVar1 = &uStack_21;
  func_0x000100063148(puVar1,uVar2 + param_1[2] * 0x78);
  *param_1 = (long)(puVar1 + 8);
  param_1[1] = (long)(puVar1 + uVar2);
  func_0x0001000631d0(param_1,0x78);
  return;
}



/* Entry: 104c32a18; end: 104c32a47;  */

undefined4 * FUN_104c32a18(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  FUN_104c32a48(uVar1,param_2 + 2,param_1 + 2);
  return param_1;
}



/* Entry: 104c32a48; end: 104c32acf;  */

void FUN_104c32a48(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_1 == 7) {
    return;
  }
  if (param_1 == 6) {
    *(undefined1 *)param_3 = *(undefined1 *)param_2;
    return;
  }
  if ((param_1 == 5) || (param_1 == 4)) {
    *param_3 = *param_2;
    return;
  }
  if (param_1 == 3) {
    *param_3 = *param_2;
    return;
  }
  if (param_1 != 2) {
    if (param_1 < 2) {
      *param_3 = *param_2;
      param_3[1] = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
    }
    return;
  }
  FUN_104c318ec();
  param_3[6] = 0xffffffffffffffff;
  param_3[6] = param_2[6];
  return;
}



/* Entry: 104c32ad0; end: 104c32b1b;  */

long FUN_104c32ad0(long param_1)

{
  FUN_104c3323c(param_1 + 0x38);
  func_0x000104c345d8();
  return param_1;
}



/* Entry: 104c32b1c; end: 104c32b27;  */

void FUN_104c32b1c(void)

{
  func_0x000104c34744();
  FUN_104c32b5c();
  return;
}



/* Entry: 104c32b28; end: 104c32b2b;  */

void FUN_104c32b28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_104c32b5c(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 104c32b2c; end: 104c32b5b;  */

void FUN_104c32b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_104c32b5c(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}


