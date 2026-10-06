/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8d3db0; end: 10b8d3ebb;  */

void FUN_10b8d3db0(long *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  long extraout_x8;
  int extraout_w11;
  long lVar5;
  undefined8 uStack_58;
  long lStack_50;
  undefined4 uStack_44;
  
  lVar1 = param_2 + 0x70;
  puVar4 = &uStack_44;
  uStack_44 = param_3;
  FUN_10b8d3ebc();
  if (*(long *)(param_2 + 0x70) + *(long *)(param_2 + 0x88) == lVar1) {
    *param_1 = 0;
  }
  else {
    lVar5 = *(long *)(puVar4 + 2);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
      do {
        func_0x00010b8d7258();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar5;
    lVar2 = param_2 + 0x70;
    FUN_10b8d3ee0(lVar2,lVar1);
    func_0x00010b8d74a8();
    while (lVar1 = lVar5, FUN_10b8c6828(), lVar1 != 0) {
      lVar3 = lVar5;
      FUN_10b8c685c(lVar5,lVar1 + -1);
      FUN_10b8d3db0(&lStack_50,param_2,*(undefined4 *)(lVar3 + 0x1ac));
      lVar1 = lStack_50;
      func_0x0001080d289c(lStack_50);
      if (lVar1 == 0) {
        FUN_10b8c6128(lVar3,lVar2);
      }
    }
    func_0x00010b8d7750();
    FUN_10b8c60ec();
    if (lVar5 == *(long *)(param_2 + 0xa0)) {
      uStack_58 = 0;
      FUN_10b8d3f18(param_2,&uStack_58,0);
      func_0x0001080d289c(uStack_58);
    }
  }
  return;
}



/* Entry: 10b8d3ebc; end: 10b8d3edf;  */

void FUN_10b8d3ebc(int param_1)

{
  func_0x00010b8d72e0();
  FUN_10b8d5fd8();
  func_0x00010b8d75f0();
  FUN_10b8d5ff4();
  if (param_1 == 0) {
    func_0x00010b8d75e0();
  }
  else {
    func_0x00010b8d743c();
  }
  return;
}



/* Entry: 10b8d3ee0; end: 10b8d3f17;  */

undefined1  [16] FUN_10b8d3ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b8d7348();
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10b8d6090(&uStack_40);
  func_0x00010b8d7420();
  FUN_10b8d60c4();
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 10b8d3f18; end: 10b8d406b;  */

void FUN_10b8d3f18(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar3 = (long *)(param_1 + 0xa0);
  lVar2 = *plVar3;
  *plVar3 = 0;
  lVar1 = param_1;
  lStack_48 = lVar2;
  if (lVar2 != 0) {
    lStack_50 = 0;
    FUN_10b8d40d4(param_1,&lStack_48,&lStack_50);
    lVar1 = lStack_50;
    func_0x0001080c5c80(lStack_50);
  }
  func_0x00010b8d7358();
  FUN_10b8c7c98(plVar3,param_2);
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_10b8c6128(*(long *)(param_1 + 0xa0),lVar1);
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar5 = *plVar3;
      FUN_10b98b344(&lStack_50,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xd0));
      func_0x00010b8c6418(lVar5,lVar1,&lStack_50);
      func_0x00010b8a2000(lStack_50);
    }
    if (param_3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0xa0);
      (**(code **)(**(long **)(param_1 + 0x30) + 0x20))(&uStack_58);
      func_0x00010b8d7450(&lStack_50);
      FUN_10b8d2e48();
      FUN_10b8c8af8(uVar4,lVar1,&lStack_50);
      func_0x0001080d2890(lStack_50);
      func_0x000107c278f8(uStack_58);
    }
    if ((**(byte **)(*plVar3 + 0x18) >> 2 & 1) != 0) {
      func_0x00010b8d39d4(param_1);
    }
  }
  func_0x00010b8d7750();
  FUN_10b8d40d4();
  if (((lVar2 != 0) && (*plVar3 != 0)) && (*(int *)(*plVar3 + 0x1ac) != *(int *)(lVar2 + 0x1ac))) {
    FUN_10b8d3db0(&uStack_60,param_1);
    func_0x0001080d289c(uStack_60);
  }
  func_0x0001080d289c(lVar2);
  return;
}



/* Entry: 10b8d406c; end: 10b8d40d3;  */

void FUN_10b8d406c(long param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w11;
  long *unaff_x19;
  long unaff_x20;
  undefined4 uStack_24;
  
  uStack_24 = param_2;
  func_0x00010b8d74fc();
  param_1 = param_1 + 0x70;
  puVar1 = &uStack_24;
  FUN_10b8d3ebc();
  if (*(long *)(unaff_x20 + 0x70) + *(long *)(unaff_x20 + 0x88) == param_1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(puVar1 + 2);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
      do {
        func_0x00010b8d7258();
        lVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
  }
  *unaff_x19 = lVar2;
  return;
}



/* Entry: 10b8d40d4; end: 10b8d415b;  */

void FUN_10b8d40d4(long *param_1,long *param_2,long *param_3)

{
  undefined8 uStack_38;
  
  func_0x00010b8d3398();
  if (*param_2 != 0) {
    uStack_38 = 0;
    FUN_10b8c688c(*param_2,param_1,param_3,&uStack_38);
    func_0x0001080da468(uStack_38);
  }
  if (*param_3 != 0) {
    func_0x00010b951e90();
    (**(code **)(*param_1 + 0x38))();
  }
  if (*param_2 != 0) {
    FUN_10b8c67d0();
  }
  return;
}



/* Entry: 10b8d415c; end: 10b8d43b7;  */

void FUN_10b8d415c(long param_1,long *param_2)

{
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 uStack_48;
  undefined4 uStack_3c;
  undefined1 auStack_38 [16];
  char cStack_28;
  
  func_0x00010b8d72e0();
  uStack_3c = *(undefined4 *)(*param_2 + 0x1ac);
  FUN_10b8d617c(auStack_38,param_1 + 0x70,&uStack_3c);
  if (cStack_28 == '\x01') {
    *(undefined8 *)(*unaff_x19 + 0x1d0) = unaff_x20;
  }
  else {
    FUN_10b8d3db0(&uStack_48);
    func_0x0001080d289c(uStack_48);
    FUN_10b8d415c();
  }
  return;
}



/* Entry: 10b8d43b8; end: 10b8d43cf;  */

/* WARNING: Possible PIC construction at 0x00010b8d8ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8d8f54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8d8ef4) */
/* WARNING: Removing unreachable block (ram,0x00010b8d8f0c) */
/* WARNING: Removing unreachable block (ram,0x00010b8d8f38) */
/* WARNING: Removing unreachable block (ram,0x00010b8d8f14) */
/* WARNING: Removing unreachable block (ram,0x00010b8d8f58) */
/* WARNING: Removing unreachable block (ram,0x00010b8d8f80) */
/* WARNING: Removing unreachable block (ram,0x00010b8d8fec) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9034) */
/* WARNING: Removing unreachable block (ram,0x00010b8d90d4) */
/* WARNING: Removing unreachable block (ram,0x00010b8d90dc) */
/* WARNING: Removing unreachable block (ram,0x00010b8d90f4) */
/* WARNING: Removing unreachable block (ram,0x00010b8d90f8) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9120) */
/* WARNING: Removing unreachable block (ram,0x00010b8d90e8) */
/* WARNING: Removing unreachable block (ram,0x00010b8d912c) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9134) */
/* WARNING: Removing unreachable block (ram,0x00010b8d914c) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9150) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9178) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9140) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9184) */
/* WARNING: Removing unreachable block (ram,0x00010b8d91d4) */
/* WARNING: Removing unreachable block (ram,0x00010b8d93cc) */
/* WARNING: Removing unreachable block (ram,0x00010b8d91e0) */
/* WARNING: Removing unreachable block (ram,0x00010b8d91e4) */
/* WARNING: Removing unreachable block (ram,0x00010b8d91ec) */
/* WARNING: Removing unreachable block (ram,0x00010b8d91a4) */
/* WARNING: Removing unreachable block (ram,0x00010b8d91f4) */
/* WARNING: Removing unreachable block (ram,0x00010b8d91b4) */
/* WARNING: Removing unreachable block (ram,0x00010b8d91c0) */
/* WARNING: Removing unreachable block (ram,0x00010b8d91c4) */
/* WARNING: Removing unreachable block (ram,0x00010b8d91cc) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9200) */
/* WARNING: Removing unreachable block (ram,0x00010b8d920c) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9210) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9218) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9220) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9228) */
/* WARNING: Removing unreachable block (ram,0x00010b8d922c) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9234) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9270) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9278) */
/* WARNING: Removing unreachable block (ram,0x00010b8d927c) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9284) */
/* WARNING: Removing unreachable block (ram,0x00010b8d92e4) */
/* WARNING: Removing unreachable block (ram,0x00010b8d92ec) */
/* WARNING: Removing unreachable block (ram,0x00010b8d92f4) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9334) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9348) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9350) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9358) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9360) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9364) */
/* WARNING: Removing unreachable block (ram,0x00010b8d9374) */
/* WARNING: Removing unreachable block (ram,0x00010b8d903c) */
/* WARNING: Removing unreachable block (ram,0x00010b8d8f88) */
/* WARNING: Removing unreachable block (ram,0x00010b8d8fbc) */
/* WARNING: Removing unreachable block (ram,0x00010b8d8f98) */
/* WARNING: Removing unreachable block (ram,0x00010b8d8fdc) */

undefined1  [16] FUN_10b8d43b8(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 in_ZR;
  long lVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  
  lVar3 = *(long *)(param_1 + 0xa8);
  if (lVar3 == 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2;
    return auVar2 << 0x40;
  }
  param_1 = param_1 + 0x20;
  func_0x00010b8da578();
  if (((*(byte *)(lVar3 + 0x90) & 1) == 0) &&
     (((*(long *)(lVar3 + 0x38) != 0 || (*(long *)(lVar3 + 0x68) != 0)) &&
      (*(long *)(lVar3 + 0x20) != 0)))) {
    *(undefined8 *)(lVar3 + 0x88) = 0;
    param_1 = *(long *)(lVar3 + 0x30);
    uVar4 = 0x10b8d8ef4;
    lVar3 = *(long *)(lVar3 + 0x28);
  }
  else {
    func_0x00010b8da488(extraout_x8);
    if ((bool)in_ZR) {
      auVar5._8_8_ = param_1;
      auVar5._0_8_ = lVar3;
      return auVar5;
    }
    uVar4 = 0x10b8d93d8;
    ___stack_chk_fail();
  }
  lStack_170 = lVar3;
  lStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  uStack_158 = uVar4;
  func_0x00010b8d9668(&lStack_170);
  auVar1._8_8_ = lStack_168;
  auVar1._0_8_ = lStack_170;
  return auVar1;
}



/* Entry: 10b8d43d0; end: 10b8d4457;  */

long FUN_10b8d43d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x220);
  if (lVar1 == 0) {
    func_0x00010b8d442c(&lStack_28);
    lVar1 = lStack_28;
    lStack_28 = 0;
    lVar2 = *(long *)(param_1 + 0x220);
    *(long *)(param_1 + 0x220) = lVar1;
    if (lVar2 != 0) {
      func_0x00010b8d7400();
      lVar1 = lStack_28;
      lStack_28 = 0;
      if (lVar1 != 0) {
        func_0x00010b8d7400();
      }
    }
    lVar1 = *(long *)(param_1 + 0x220);
  }
  return lVar1;
}



/* Entry: 10b8d4458; end: 10b8d446f;  */

undefined8 FUN_10b8d4458(void)

{
  return 2;
}



/* Entry: 10b8d4470; end: 10b8d4527;  */

void FUN_10b8d4470(void)

{
  long unaff_x19;
  
  func_0x00010b8d777c();
  func_0x00010b8d71e8();
  func_0x00010b8d44bc(unaff_x19 + 0xe0);
  if ((*(byte *)(unaff_x19 + 0x1da) & 1) == 0) {
    FUN_10b8d4528();
  }
  func_0x00010b8d73a4();
  return;
}



/* Entry: 10b8d4528; end: 10b8d4597;  */

void FUN_10b8d4528(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  code **unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  code *pcStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  undefined8 uStack_28;
  
  func_0x00010b8d7104();
  uStack_28 = extraout_x8;
  if (*(long *)(param_1 + 0x108) != 0) {
    unaff_x19 = &pcStack_58;
    pcStack_58 = FUN_10b8d4f60;
    ppuStack_50 = &PTR_FUN_110d721f8;
    lStack_48 = param_1;
    (**(code **)(*(long *)(param_1 + 0x20) + 0x30))(&pcStack_58);
    func_0x00010b8d71f4(ppuStack_50);
  }
  func_0x00010b8d70d8(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b8d72e0();
    *(int *)(param_2 + 0x1e8) = *(int *)(param_2 + 0x1e8) + 1;
    if (*(long *)(param_2 + 0xd8) == 0) {
      *unaff_x20 = 0;
      uVar1 = 0x40;
      __Znwm();
      func_0x00010b951cdc();
      uStack_a8 = uVar1;
      func_0x00010b8d7450();
      func_0x00010b8d48d4();
      FUN_10b8d5350(uStack_a8);
      func_0x00010b8d4894((long *)(param_2 + 0xd8));
    }
    else {
      do {
        func_0x00010b8d72d0();
      } while (extraout_w11 != 0);
      *unaff_x20 = extraout_x8_00;
    }
    if (*(int *)(unaff_x19 + 0x3d) == 1) {
      uVar1 = *unaff_x20;
      FUN_10b8d2d9c(&uStack_b0,unaff_x19);
      func_0x00010b951d78(uVar1,&uStack_b0);
      func_0x0001080c5c80(uStack_b0);
    }
    return;
  }
  return;
}



/* Entry: 10b8d4598; end: 10b8d4667;  */

void FUN_10b8d4598(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  int extraout_w11;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b8d72e0();
  *(int *)(param_2 + 0x1e8) = *(int *)(param_2 + 0x1e8) + 1;
  if (*(long *)(param_2 + 0xd8) == 0) {
    *unaff_x20 = 0;
    uVar1 = 0x40;
    __Znwm();
    func_0x00010b951cdc();
    uStack_48 = uVar1;
    func_0x00010b8d7450();
    func_0x00010b8d48d4();
    FUN_10b8d5350(uStack_48);
    func_0x00010b8d4894((long *)(param_2 + 0xd8));
  }
  else {
    do {
      func_0x00010b8d72d0();
    } while (extraout_w11 != 0);
    *unaff_x20 = extraout_x8;
  }
  if (*(int *)(unaff_x19 + 0x1e8) == 1) {
    uVar1 = *unaff_x20;
    FUN_10b8d2d9c(&uStack_50);
    func_0x00010b951d78(uVar1,&uStack_50);
    func_0x0001080c5c80(uStack_50);
  }
  return;
}



/* Entry: 10b8d4668; end: 10b8d46ff;  */

void FUN_10b8d4668(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int extraout_w8;
  int iVar2;
  long unaff_x19;
  long *unaff_x20;
  long lVar3;
  long lStack_88;
  long lStack_58;
  undefined8 uStack_50;
  
  if (0 < *(int *)(param_1 + 0x1e8)) {
    func_0x00010b8d74b0();
    iVar2 = extraout_w8;
    if (param_3 != 0) {
      lVar3 = *unaff_x20;
      func_0x00010b951e90(lVar3);
      *(undefined1 *)(lVar3 + 0x38) = 1;
      iVar2 = *(int *)(unaff_x19 + 0x1e8);
    }
    if (iVar2 == 1) {
      func_0x00010b951dd4(*unaff_x20);
      iVar2 = *(int *)(unaff_x19 + 0x1e8);
    }
    *(int *)(unaff_x19 + 0x1e8) = iVar2 + -1;
    return;
  }
  func_0x0001080df67c(&lStack_58,&UNK_10f7cb7af);
  func_0x00010b8d76f0(lStack_58,uStack_50,&UNK_10f7cb7e7);
  uVar1 = (uint)uStack_50;
  func_0x00010b8d757c();
  FUN_10bd3f4e0();
  if (*(byte *)(lStack_58 + 0x1e0) != uVar1) {
    *(char *)(lStack_58 + 0x1e0) = (char)uVar1;
    lVar3 = *(long *)(lStack_58 + 0xa0);
    if (lVar3 != 0) {
      if (((uint)*(ulong *)(lVar3 + 0x1c8) >> 4 & 1) == 0) {
        *(ulong *)(lVar3 + 0x1c8) = *(ulong *)(lVar3 + 0x1c8) | 0x10;
        *(undefined8 *)(lVar3 + 0x198) = 0;
        func_0x00010b8cf8c0();
        if (lStack_88 == 0) {
          func_0x00010b8cfc9c();
        }
        else {
          FUN_10b8c67d0(lStack_88);
        }
        func_0x00010b8cf9a4();
      }
      return;
    }
  }
  return;
}



/* Entry: 10b8d4700; end: 10b8d471f;  */

void FUN_10b8d4700(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uStack_28;
  
  if (*(byte *)(param_1 + 0x1e0) != param_2) {
    *(char *)(param_1 + 0x1e0) = (char)param_2;
    lVar1 = *(long *)(param_1 + 0xa0);
    if (lVar1 != 0) {
      if (((uint)*(ulong *)(lVar1 + 0x1c8) >> 4 & 1) == 0) {
        *(ulong *)(lVar1 + 0x1c8) = *(ulong *)(lVar1 + 0x1c8) | 0x10;
        *(undefined8 *)(lVar1 + 0x198) = 0;
        func_0x00010b8cf8c0();
        if (uStack_28 == 0) {
          func_0x00010b8cfc9c();
        }
        else {
          FUN_10b8c67d0(uStack_28);
        }
        func_0x00010b8cf9a4();
      }
      return;
    }
  }
  return;
}



/* Entry: 10b8d4720; end: 10b8d478b;  */

void FUN_10b8d4720(void)

{
  int iVar1;
  long unaff_x20;
  
  func_0x00010b8d74fc();
  func_0x00010b8d76a8();
  iVar1 = *(int *)(unaff_x20 + 0x1e4);
  *(int *)(unaff_x20 + 0x1e4) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined1 *)(unaff_x20 + 0x1db) = *(undefined1 *)(unaff_x20 + 0x1da);
    *(undefined1 *)(unaff_x20 + 0x1da) = 1;
  }
  func_0x00010b8ce368();
  FUN_10b8d493c();
  func_0x0001080d26d8(unaff_x20);
  func_0x00010b8d73a4();
  return;
}



/* Entry: 10b8d478c; end: 10b8d47af;  */

void FUN_10b8d478c(long param_1,long param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  code **unaff_x19;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  code *pcStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  undefined8 uStack_28;
  
  iVar1 = *(int *)(param_1 + 0x1e4) + -1;
  uVar2 = iVar1 == 0;
  *(int *)(param_1 + 0x1e4) = iVar1;
  if ((!(bool)uVar2) ||
     (*(byte *)(param_1 + 0x1da) = *(byte *)(param_1 + 0x1db), (*(byte *)(param_1 + 0x1db) & 1) != 0
     )) {
    return;
  }
  func_0x00010b8d7104();
  uStack_28 = extraout_x8;
  if (*(long *)(param_1 + 0x108) != 0) {
    unaff_x19 = &pcStack_58;
    pcStack_58 = FUN_10b8d4f60;
    ppuStack_50 = &PTR_FUN_110d721f8;
    lStack_48 = param_1;
    (**(code **)(*(long *)(param_1 + 0x20) + 0x30))(&pcStack_58);
    func_0x00010b8d71f4(ppuStack_50);
  }
  func_0x00010b8d70d8(uStack_28);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010b8d72e0();
    *(int *)(param_2 + 0x1e8) = *(int *)(param_2 + 0x1e8) + 1;
    if (*(long *)(param_2 + 0xd8) == 0) {
      *unaff_x20 = 0;
      uVar3 = 0x40;
      __Znwm();
      func_0x00010b951cdc();
      uStack_a8 = uVar3;
      func_0x00010b8d7450();
      func_0x00010b8d48d4();
      FUN_10b8d5350(uStack_a8);
      func_0x00010b8d4894((long *)(param_2 + 0xd8));
    }
    else {
      do {
        func_0x00010b8d72d0();
      } while (extraout_w11 != 0);
      *unaff_x20 = extraout_x8_00;
    }
    if (*(int *)(unaff_x19 + 0x3d) == 1) {
      uVar3 = *unaff_x20;
      FUN_10b8d2d9c(&uStack_b0,unaff_x19);
      func_0x00010b951d78(uVar3,&uStack_b0);
      func_0x0001080c5c80(uStack_b0);
    }
    return;
  }
  return;
}



/* Entry: 10b8d47b0; end: 10b8d4833;  */

void FUN_10b8d47b0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x40;
    FUN_10b8d4834();
    lVar2 = *(long *)(lVar3 + 0x40);
    lVar3 = *(long *)(lVar3 + 0x58);
    lStack_40 = lVar1;
    plStack_38 = param_2;
    while (lStack_40 != lVar2 + lVar3) {
      func_0x00010b8d7770(&lStack_48);
      func_0x00010b8d312c();
      lVar1 = lStack_48;
      func_0x0001080d2890(lStack_48);
      if (lVar1 == 0) {
        func_0x00010b8d7770();
        FUN_10b8d2ff4();
      }
      FUN_10b8d4860(&lStack_40);
    }
  }
  return;
}



/* Entry: 10b8d4834; end: 10b8d485f;  */

undefined1  [16] FUN_10b8d4834(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10b8d70a0(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b8d4860; end: 10b8d493b;  */

long * FUN_10b8d4860(long *param_1)

{
  param_1[1] = param_1[1] + 0x10;
  *param_1 = *param_1 + 1;
  FUN_10b8d70a0();
  return param_1;
}



/* Entry: 10b8d493c; end: 10b8d498b;  */

void FUN_10b8d493c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x00010b8d7258();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *param_1 = lVar1;
  param_1[1] = 0;
  param_1[2] = *(long *)(param_3 + 8);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_3 + 0x10);
  *(undefined1 *)((long)param_1 + 0x19) = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined1 *)(param_3 + 0x10) = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* Entry: 10b8d498c; end: 10b8d4a23;  */

void FUN_10b8d498c(void)

{
  undefined1 in_ZR;
  
  func_0x00010b8d7430();
  if (!(bool)in_ZR) {
    func_0x00010b8d7154();
    func_0x0001080d26d8();
  }
  return;
}



/* Entry: 10b8d4a24; end: 10b8d4a9f;  */

void FUN_10b8d4a24(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        FUN_10b8d4aa0(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x10;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10b8d4aa0; end: 10b8d4ac7;  */

undefined8 FUN_10b8d4aa0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000108105060(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b8d4ac8; end: 10b8d4bcf;  */

void FUN_10b8d4ac8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long extraout_x8;
  int extraout_w11;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  plVar1 = *(long **)(param_1 + 0x10);
  plVar3 = plVar1 + 0x19;
  if (*plVar3 != **(long **)(param_1 + 0x18)) {
    FUN_10b8c6a50(plVar3);
    func_0x00010b8d7358();
    lStack_38 = plVar1[0x19];
    if ((lStack_38 != 0) && (*(long *)(lStack_38 + 0x10) != 0)) {
      do {
        func_0x00010b8d7258();
        lStack_38 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x00010b951d78();
    func_0x0001080c5c80(lStack_38);
    plVar2 = plVar1;
    FUN_10b8d4720(auStack_60);
    plVar5 = (long *)plVar1[0x14];
    if (plVar5 != (long *)0x0) {
      func_0x00010b8d7358();
      FUN_10b8c6120(plVar5,plVar2);
      plVar2 = plVar5;
    }
    if (*plVar3 != 0) {
      *(undefined1 *)(*plVar3 + 0x18) = 0;
    }
    func_0x00010b8d7750();
    FUN_10b8d40d4();
    if (plVar1[0x19] == 0) {
      lVar4 = plVar1[0x14];
      if (lVar4 != 0) {
        func_0x00010b8d7358();
        func_0x00010b8c7318(lVar4,plVar2);
      }
    }
    else if (*(char *)((long)plVar1 + 0x1de) == '\x01') {
      func_0x00010b8d7358();
      func_0x00010b951e90();
      (**(code **)(*plVar2 + 0x50))();
    }
    func_0x00010b8d49b4(auStack_60);
  }
  return;
}



/* Entry: 10b8d4bd0; end: 10b8d4beb;  */

void FUN_10b8d4bd0(void)

{
  return;
}



/* Entry: 10b8d4bec; end: 10b8d4c47;  */

void FUN_10b8d4bec(long param_1)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (*(long *)(*plVar2 + 0xa0) == 0) {
    *(undefined8 *)plVar2[1] = 0;
  }
  else {
    uVar3 = *(undefined4 *)plVar2[2];
    uVar4 = *(undefined4 *)plVar2[4];
    func_0x00010b8caa08(*(long *)(*plVar2 + 0xa0),*(undefined4 *)plVar2[3],*(undefined4 *)plVar2[5],
                        *(undefined4 *)plVar2[6]);
    puVar1 = (undefined4 *)plVar2[1];
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
  }
  return;
}



/* Entry: 10b8d4c48; end: 10b8d4c5b;  */

void FUN_10b8d4c48(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8d4c5c; end: 10b8d4ca7;  */

void FUN_10b8d4c5c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d72138;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  uVar6 = puVar2[3];
  uVar5 = puVar2[2];
  uVar4 = puVar2[5];
  uVar3 = puVar2[4];
  uVar8 = puVar2[1];
  uVar7 = *puVar2;
  puVar1[6] = puVar2[6];
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  puVar1[5] = uVar4;
  puVar1[4] = uVar3;
  puVar1[1] = uVar8;
  *puVar1 = uVar7;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b8d4ca8; end: 10b8d4d0f;  */

void FUN_10b8d4ca8(long param_1)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(char *)(lVar2 + 0x1dc) != '\x01') {
    return;
  }
  lVar3 = *(long *)(lVar2 + 0xa0);
  if (lVar3 != 0) {
    lVar1 = lVar2;
    if (*(long *)(lVar3 + 0x10) != 0) {
      do {
        func_0x00010b8d74bc();
      } while (extraout_w10 != 0);
    }
    if (*(char *)(lVar2 + 0x1dd) == '\x01') {
      *(undefined1 *)(lVar2 + 0x1dd) = 0;
      func_0x00010b8d74a8();
      func_0x00010b8ca9b4(*(undefined4 *)(lVar2 + 0x1b8),*(undefined4 *)(lVar2 + 0x1bc),lVar3,lVar1,
                          *(undefined4 *)(lVar2 + 0x1c0));
    }
    lVar1 = lVar2;
    func_0x00010b8d33f0(lVar2);
    func_0x00010b8d74a8();
    FUN_10b8c7500(lVar3,lVar1);
    FUN_10b8d3474(lVar2);
  }
  if (lVar3 == 0) {
    return;
  }
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10b8d4d10; end: 10b8d4d8b;  */

void FUN_10b8d4d10(long param_1)

{
  undefined8 uVar1;
  int extraout_w10;
  long lVar2;
  long *plVar3;
  undefined1 auStack_48 [24];
  
  plVar3 = *(long **)(param_1 + 0x10);
  lVar2 = *plVar3;
  uVar1 = *(undefined8 *)(*(long *)(lVar2 + 0x28) + 0x20);
  func_0x00010b8a3d8c(auStack_48,uVar1,plVar3 + 1);
  lVar2 = *(long *)(lVar2 + 0xa0);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x10) != 0) {
      do {
        func_0x00010b8d74bc();
      } while (extraout_w10 != 0);
    }
    func_0x00010b8d7358();
    FUN_10b8cb824(lVar2,uVar1,auStack_48,(char)plVar3[4]);
  }
  func_0x0001080d289c(lVar2);
  func_0x000108a64da4(auStack_48);
  return;
}



/* Entry: 10b8d4d8c; end: 10b8d4dbf;  */

void FUN_10b8d4d8c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x000104bfe1e0(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b8d4dc0; end: 10b8d4dc3;  */

void FUN_10b8d4dc0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8d4dc4; end: 10b8d4e0f;  */

void FUN_10b8d4dc4(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d72198;
  lVar1 = 0x28;
  __Znwm();
  func_0x00010b8d7724(*puVar2);
  *(undefined1 *)(lVar1 + 0x20) = *(undefined1 *)(puVar2 + 4);
  param_1[1] = lVar1;
  return;
}



/* Entry: 10b8d4e10; end: 10b8d4e8b;  */

void FUN_10b8d4e10(double param_1,long param_2)

{
  undefined1 in_ZR;
  double *pdVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  double dStack_50;
  undefined2 uStack_48;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  pdVar1 = &dStack_50;
  func_0x00010b8d7104();
  uVar2 = **(undefined8 **)(param_2 + 0x10);
  uStack_28 = extraout_x8;
  FUN_10b9a74e4();
  dStack_50 = param_1 * 1000.0;
  uStack_48 = 6;
  func_0x000105275910(auStack_40,uVar2,&dStack_50,1);
  func_0x000104bda914(auStack_40);
  FUN_10b9a8d98();
  func_0x00010b8d70d8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)((long)pdVar1 + 8) != 0) {
    func_0x000104bda388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8d4e8c; end: 10b8d4eab;  */

void FUN_10b8d4e8c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104bda388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8d4eac; end: 10b8d4eaf;  */

void FUN_10b8d4eac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8d4eb0; end: 10b8d4f43;  */

void FUN_10b8d4eb0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d721b8;
  puVar1 = param_1;
  func_0x00010b8d76c8();
  uVar2 = 0;
  if (*plVar3 != 0) {
    do {
      func_0x00010b8d72d0();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *puVar1 = uVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b8d4f44; end: 10b8d4f5f;  */

void FUN_10b8d4f44(void)

{
  return;
}



/* Entry: 10b8d4f60; end: 10b8d527b;  */

void FUN_10b8d4f60(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_238;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  code *pcStack_220;
  undefined1 auStack_218 [40];
  undefined8 uStack_1f0;
  long alStack_1e8 [5];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [88];
  undefined1 uStack_150;
  undefined8 *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 auStack_130 [24];
  undefined8 uStack_70;
  
  func_0x00010b8d7104();
  lVar3 = *(long *)(param_1 + 0x10);
  uStack_70 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  if ((*(byte *)(lVar3 + 0x208) & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x208) = 1;
    *(long *)(lVar3 + 0x200) = param_1;
  }
  func_0x00010b8c3d48(auStack_230,lVar3 + 0x20);
  puVar5 = &uStack_238;
  FUN_10b8d4598(puVar5,lVar3);
  iVar2 = (int)puVar5;
  lVar7 = *(long *)(lVar3 + 0x1f0);
  *(undefined1 *)(lVar3 + 0x1da) = 1;
  lStack_138 = 4;
  lStack_140 = 0;
  puStack_148 = auStack_130;
  if (*(long *)(lVar3 + 0x38) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(lVar3 + 0x38) + 0x40) + 0x38);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
      do {
        func_0x00010b8d74bc();
      } while (extraout_w10 != 0);
    }
    lVar6 = lVar4;
    FUN_10b9292c4();
    iVar2 = (int)lVar6;
  }
  auStack_1a8[0] = 0;
  uStack_150 = 0;
  func_0x000105c3b044();
  if (iVar2 != 0) {
    FUN_10b8c74ac(auStack_1a8,&UNK_10f7cb723);
  }
  while (*(long *)(lVar3 + 0x108) != 0) {
    func_0x00010b8d7690();
    puVar5 = (undefined8 *)(extraout_x8_00 + extraout_x9 * 0x78);
    pcStack_220 = (code *)*puVar5;
    (**(code **)(puVar5[1] + 0x10))(auStack_218);
    uStack_1f0 = puVar5[6];
    (**(code **)(puVar5[7] + 0x10))(alStack_1e8,puVar5 + 7);
    uStack_1b8 = puVar5[0xd];
    uStack_1c0 = puVar5[0xc];
    uStack_1b0 = puVar5[0xe];
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    func_0x00010b8d7690();
    FUN_10b8d52a0(extraout_x8_01 + extraout_x9_00 * 0x78);
    uVar8 = *(long *)(lVar3 + 0x100) + 1;
    *(long *)(lVar3 + 0x108) = *(long *)(lVar3 + 0x108) + -1;
    *(ulong *)(lVar3 + 0x100) = uVar8;
    if (0x43 < uVar8) {
      __ZdlPv(**(undefined8 **)(lVar3 + 0xe8));
      *(long *)(lVar3 + 0xe8) = *(long *)(lVar3 + 0xe8) + 8;
      *(long *)(lVar3 + 0x100) = *(long *)(lVar3 + 0x100) + -0x22;
    }
    (*pcStack_220)(&pcStack_220);
    if ((*(byte *)(alStack_1e8[0] + 8) & 1) == 0) {
      puVar5 = puStack_148 + lStack_140 * 6;
      if (lStack_140 == lStack_138) {
        FUN_10b8d6f14(auStack_228,&puStack_148,puVar5,&uStack_1f0);
      }
      else {
        *puVar5 = uStack_1f0;
        (**(code **)(alStack_1e8[0] + 0x10))(puVar5 + 1,alStack_1e8);
        lStack_140 = lStack_140 + 1;
      }
    }
    FUN_10b8d52a0(&pcStack_220);
  }
  *(undefined1 *)(lVar3 + 0x1da) = 0;
  puVar5 = puStack_148;
  for (lVar6 = lStack_140 * 0x30; lVar6 != 0; lVar6 = lVar6 + -0x30) {
    (*(code *)*puVar5)();
    puVar5 = puVar5 + 6;
  }
  if (lVar4 != 0) {
    func_0x00010b9292f8(lVar4);
  }
  lVar6 = *(long *)(lVar3 + 0x1f0);
  if ((lVar7 != lVar6) && (*(long *)(lVar3 + 0x38) != 0)) {
    FUN_10b9422dc(*(long *)(lVar3 + 0x38),lVar3);
  }
  if (lVar4 != 0) {
    FUN_10b929334(lVar4);
  }
  uVar1 = lVar7 == lVar6;
  lVar7 = lVar3;
  FUN_10b8d4668(lVar3,&uStack_238,!(bool)uVar1);
  __ZNSt3__16chrono12steady_clock3nowEv();
  if ((*(byte *)(lVar3 + 0x218) & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x218) = 1;
  }
  *(long *)(lVar3 + 0x210) = lVar7;
  *(long *)(lVar3 + 0x1f8) = (lVar7 - param_1) + *(long *)(lVar3 + 0x1f8);
  FUN_10b8d2998(lVar3);
  func_0x0001080e8dd4(auStack_1a8);
  FUN_10b8d6f08(lVar4);
  func_0x00010b8d52dc(puStack_148,lStack_140);
  if ((lStack_138 != 0) && (uVar1 = auStack_130 == puStack_148, !(bool)uVar1)) {
    __ZdlPv();
  }
  FUN_10b8d5350(uStack_238);
  func_0x00010b8c3d80(auStack_230);
  func_0x00010b8d70d8(uStack_70);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10b8d527c; end: 10b8d529f;  */

void FUN_10b8d527c(void)

{
  return;
}



/* Entry: 10b8d52a0; end: 10b8d5313;  */

long FUN_10b8d52a0(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x60);
  func_0x00010b8d76c0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010b8d76c0(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10b8d5314; end: 10b8d532b;  */

void FUN_10b8d5314(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8d532c; end: 10b8d534f;  */

undefined8 * FUN_10b8d532c(undefined8 *param_1)

{
  FUN_10b8d5350(*param_1);
  return param_1;
}



/* Entry: 10b8d5350; end: 10b8d53c7;  */

void FUN_10b8d5350(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x00010b8d76ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b8d53c8; end: 10b8d544b;  */

void FUN_10b8d53c8(byte param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *unaff_x20;
  
  func_0x00010b8d74fc();
  FUN_10b8d544c();
  plVar4 = unaff_x20;
  plVar5 = param_2;
  func_0x00010b8d5468();
  if (((ulong)plVar5 & 1) != 0) {
    plVar5 = (long *)(unaff_x20[1] + (long)plVar4 * 0x10);
    lVar6 = *param_2;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plVar5 = lVar6;
    plVar5[1] = 0;
    *(byte *)(*unaff_x20 + (long)plVar4) = param_1 & 0x7f;
    func_0x00010b8d70ec();
  }
  func_0x00010b8d7648();
  return;
}



/* Entry: 10b8d544c; end: 10b8d553f;  */

void FUN_10b8d544c(void)

{
  func_0x00010b8d7600();
  func_0x00010b8d5524();
  return;
}



/* Entry: 10b8d5540; end: 10b8d55b3;  */

void FUN_10b8d5540(long *param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  func_0x00010b8d74b0();
  FUN_10b8d55b4();
  lVar2 = unaff_x19[5];
  lVar1 = *unaff_x19;
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + (long)param_1) == -2) {
      lVar2 = 0;
    }
    else {
      param_1 = unaff_x19;
      func_0x00010b8d5600();
      func_0x00010b8d7770();
      FUN_10b8d55b4();
      lVar1 = *unaff_x19;
      lVar2 = unaff_x19[5];
    }
  }
  unaff_x19[2] = unaff_x19[2] + 1;
  unaff_x19[5] = lVar2 - (ulong)(*(char *)(lVar1 + (long)param_1) == -0x80);
  return;
}



/* Entry: 10b8d55b4; end: 10b8d562f;  */

ulong FUN_10b8d55b4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_2 = param_2 >> 7;
  while( true ) {
    param_2 = param_2 & param_1[3];
    uVar1 = *(ulong *)(*param_1 + param_2) & ~*(ulong *)(*param_1 + param_2) << 7 &
            0x8080808080808080;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_2 = lVar2 + param_2;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_2 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[3];
}



/* Entry: 10b8d5630; end: 10b8d56fb;  */

void FUN_10b8d5630(long *param_1,long param_2)

{
  long lVar1;
  long **pplVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plStack_58;
  
  lVar1 = *param_1;
  lVar4 = param_1[1];
  lVar5 = param_1[3];
  FUN_10b8d5878();
  param_1[3] = param_2;
  for (lVar6 = 0; lVar5 != lVar6; lVar6 = lVar6 + 1) {
    if (-1 < *(char *)(lVar1 + lVar6)) {
      pplVar2 = &plStack_58;
      plStack_58 = param_1 + 5;
      FUN_10b8d591c(pplVar2,lVar4);
      plVar3 = param_1;
      FUN_10b8d55b4(param_1,pplVar2);
      *(byte *)(*param_1 + (long)plVar3) = (byte)pplVar2 & 0x7f;
      func_0x00010b8d70ec();
      FUN_10b8d5940(param_1 + 5,param_1[1] + (long)plVar3 * 0x10,lVar4);
    }
    lVar4 = lVar4 + 0x10;
  }
  if (lVar5 != 0) {
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10b8d56fc; end: 10b8d5877;  */

void FUN_10b8d56fc(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  long *plVar6;
  long **pplVar7;
  long *plVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  long *aplStack_60 [3];
  undefined8 uStack_48;
  
  plVar6 = param_1;
  func_0x00010b8d7104();
  func_0x00010b8d7218();
  plVar1 = param_1 + 5;
  for (uVar10 = 0; uVar10 != param_1[3]; uVar10 = uVar10 + 1) {
    if (*(char *)(*param_1 + uVar10) == -2) {
      pplVar7 = aplStack_60;
      aplStack_60[0] = plVar1;
      FUN_10b8d591c(aplStack_60,param_1[1] + uVar10 * 0x10);
      plVar8 = param_1;
      param_2 = (undefined1 *)pplVar7;
      FUN_10b8d55b4();
      uVar9 = param_1[3] & (ulong)pplVar7 >> 7;
      if ((((long)plVar8 - uVar9 ^ uVar10 - uVar9) & param_1[3]) < 8) {
        *(byte *)(*param_1 + uVar10) = (byte)pplVar7 & 0x7f;
        func_0x00010b8d70ec();
        plVar6 = plVar8;
      }
      else {
        cVar3 = *(char *)(*param_1 + (long)plVar8);
        bVar4 = (byte)pplVar7 & 0x7f;
        *(byte *)(*param_1 + (long)plVar8) = bVar4;
        *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)(plVar8 + -1)) + 1) = bVar4;
        if (cVar3 == -0x80) {
          param_2 = (undefined1 *)(param_1[1] + (long)plVar8 * 0x10);
          func_0x00010b8d74cc();
          *(undefined1 *)(*param_1 + uVar10) = 0x80;
          func_0x00010b8d72b0(*param_1);
          *(undefined1 *)(extraout_x8 + 1) = 0x80;
          plVar6 = plVar8;
        }
        else {
          plVar6 = plVar8;
          func_0x00010b8d7450();
          FUN_10b8d5940();
          func_0x00010b8d74cc();
          param_2 = (undefined1 *)(param_1[1] + (long)plVar8 * 0x10);
          func_0x00010b8d74cc();
          uVar10 = uVar10 - 1;
        }
      }
    }
  }
  uVar5 = uVar10 == 7;
  lVar2 = 6;
  if (!(bool)uVar5) {
    lVar2 = uVar10 - (uVar10 >> 3);
  }
  func_0x00010b8d74f0(lVar2);
  func_0x00010b8d70d8(uStack_48);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8d72e0();
  lVar2 = ((ulong)param_2 & 0xfffffffffffffff8) + 0x10;
  plVar6 = plVar6 + 5;
  FUN_10b8d58dc(plVar6,lVar2 + (long)param_2 * 0x10);
  *plVar1 = (long)plVar6;
  param_1[6] = (long)plVar6 + lVar2;
  _memset();
  *(undefined1 *)(*plVar1 + (long)param_1) = 0xff;
  lVar2 = 6;
  if (param_1 != (long *)0x7) {
    lVar2 = (long)param_1 - ((ulong)param_1 >> 3);
  }
  func_0x00010b8d7610(lVar2);
  return;
}



/* Entry: 10b8d5878; end: 10b8d58db;  */

void FUN_10b8d5878(long param_1,ulong param_2)

{
  long lVar1;
  ulong unaff_x19;
  long *unaff_x20;
  
  func_0x00010b8d72e0();
  lVar1 = (param_2 & 0xfffffffffffffff8) + 0x10;
  param_1 = param_1 + 0x28;
  FUN_10b8d58dc(param_1,lVar1 + param_2 * 0x10);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_1 + lVar1;
  _memset();
  *(undefined1 *)(*unaff_x20 + unaff_x19) = 0xff;
  lVar1 = 6;
  if (unaff_x19 != 7) {
    lVar1 = unaff_x19 - (unaff_x19 >> 3);
  }
  func_0x00010b8d7610(lVar1);
  return;
}



/* Entry: 10b8d58dc; end: 10b8d591b;  */

void FUN_10b8d58dc(undefined8 param_1,long param_2)

{
  undefined1 uStack_11;
  
  func_0x00010b8d5900(&uStack_11,param_2 + 7U >> 3);
  return;
}



/* Entry: 10b8d591c; end: 10b8d5923;  */

void FUN_10b8d591c(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010b8d7314(param_1,*param_2,param_2 + 1);
  return;
}



/* Entry: 10b8d5924; end: 10b8d593f;  */

void FUN_10b8d5924(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010b8d7314(param_1,*param_2);
  return;
}



/* Entry: 10b8d5940; end: 10b8d5953;  */

undefined8 FUN_10b8d5940(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  func_0x000108105060(param_3 + 1);
  func_0x00010007e5d0(param_3);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b8d5954; end: 10b8d5987;  */

void FUN_10b8d5954(int param_1)

{
  FUN_10b8d5988();
  if (param_1 == 0) {
    func_0x00010b8d75e0();
  }
  else {
    func_0x00010b8d743c();
  }
  return;
}



/* Entry: 10b8d5988; end: 10b8d5a43;  */

bool FUN_10b8d5988(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar1 = 0;
  uVar4 = param_3 >> 7;
  uVar2 = param_1[3];
  lVar3 = *param_1;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    uVar6 = *(ulong *)(lVar3 + uVar4);
    uVar5 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    lVar7 = *param_2;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar8 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar4 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
      *param_4 = uVar8;
      if (*(long *)(param_1[1] + uVar8 * 0x10) == lVar7) goto LAB_10b8d73f4;
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
LAB_10b8d73f4:
  return uVar5 != 0;
}



/* Entry: 10b8d5a44; end: 10b8d5aab;  */

void FUN_10b8d5a44(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long *unaff_x20;
  
  uVar4 = (uint)param_2;
  func_0x00010b8d74fc();
  FUN_10b8d5aac();
  lVar3 = param_1;
  func_0x00010b8d7750();
  func_0x00010b8d5ac8();
  if ((uVar4 & 1) != 0) {
    lVar2 = *unaff_x20;
    puVar1 = (undefined4 *)(unaff_x20[1] + lVar3 * 0x10);
    *puVar1 = *param_2;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(byte *)(lVar2 + lVar3) = (byte)param_1 & 0x7f;
    func_0x00010b8d70ec();
  }
  func_0x00010b8d7648();
  return;
}



/* Entry: 10b8d5aac; end: 10b8d5b7b;  */

void FUN_10b8d5aac(void)

{
  func_0x00010b8d7600();
  func_0x00010b8d5b60();
  return;
}



/* Entry: 10b8d5b7c; end: 10b8d5c07;  */

void FUN_10b8d5b7c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b8d74b0();
  func_0x00010b8d7678();
  FUN_10b8d5c08();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 == 0) {
    if (*(char *)(unaff_x21 + param_1) == -2) {
      lVar1 = 0;
    }
    else {
      if ((unaff_x22 == 0) || (unaff_x22 - (unaff_x22 >> 3) >> 1 < *(ulong *)(unaff_x19 + 0x10))) {
        FUN_10b8d5c38();
      }
      else {
        func_0x00010b8d5cc0();
      }
      func_0x00010b8d775c();
      FUN_10b8d5c08();
      lVar1 = *(long *)(unaff_x19 + 0x28);
    }
  }
  func_0x00010b8d745c(lVar1);
  return;
}



/* Entry: 10b8d5c08; end: 10b8d5c37;  */

ulong FUN_10b8d5c08(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b8d5c38; end: 10b8d5dcb;  */

void FUN_10b8d5c38(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00010b8d72f4();
  func_0x00010b8d738c();
  func_0x00010b8d74d4();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x00010b8d7610(uVar1);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x22;
  for (; unaff_x24 != unaff_x25; unaff_x25 = unaff_x25 + 1) {
    if (-1 < *(char *)(unaff_x19 + unaff_x25)) {
      lVar2 = unaff_x21;
      FUN_10b8d5dcc();
      func_0x00010b8d7660();
      FUN_10b8d5c08();
      *(byte *)(unaff_x23 + lVar2) = (byte)unaff_x22 & 0x7f;
      func_0x00010b8d7120();
      func_0x00010b8d7524();
      FUN_10b8d5de8();
    }
    unaff_x21 = unaff_x21 + 0x10;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8d5dcc; end: 10b8d5de7;  */

void FUN_10b8d5dcc(undefined4 *param_1)

{
  func_0x00010b8d7314(param_1,*param_1);
  return;
}



/* Entry: 10b8d5de8; end: 10b8d5e03;  */

undefined8 * FUN_10b8d5de8(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 2) = *puVar1;
  *puVar1 = 0;
  func_0x0001080da468(*puVar1);
  return puVar1;
}



/* Entry: 10b8d5e04; end: 10b8d5e37;  */

void FUN_10b8d5e04(int param_1)

{
  FUN_10b8d5e38();
  if (param_1 == 0) {
    func_0x00010b8d75e0();
  }
  else {
    func_0x00010b8d743c();
  }
  return;
}



/* Entry: 10b8d5e38; end: 10b8d5eb7;  */

bool FUN_10b8d5e38(long param_1,int *param_2,undefined8 param_3,ulong *param_4)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x9;
  long extraout_x10;
  ulong extraout_x11;
  long extraout_x12;
  ulong extraout_x13;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x00010b8d7790();
  lVar2 = extraout_x8;
  uVar3 = extraout_x13;
  while( true ) {
    uVar3 = uVar3 & extraout_x9;
    uVar5 = *(ulong *)(extraout_x10 + uVar3);
    iVar1 = *param_2;
    for (uVar4 = (uVar5 ^ extraout_x11) + extraout_x12 & (uVar5 ^ extraout_x11 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar6 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar3 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & extraout_x9;
      *param_4 = uVar6;
      if (*(int *)(*(long *)(param_1 + 8) + uVar6 * 0x10) == iVar1) goto LAB_10b8d73f4;
    }
    if ((uVar5 & ~uVar5 << 6 & 0x8080808080808080) != 0) break;
    lVar2 = lVar2 + 8;
    uVar3 = lVar2 + uVar3;
  }
LAB_10b8d73f4:
  return uVar4 != 0;
}



/* Entry: 10b8d5eb8; end: 10b8d5eeb;  */

long * FUN_10b8d5eb8(long *param_1)

{
  param_1[1] = param_1[1] + 0x10;
  *param_1 = *param_1 + 1;
  FUN_10b8d5f1c();
  return param_1;
}



/* Entry: 10b8d5eec; end: 10b8d5f1b;  */

void FUN_10b8d5eec(undefined8 param_1,ulong *param_2,long param_3)

{
  undefined1 in_ZR;
  bool bVar1;
  long *plVar2;
  ulong extraout_x8;
  ulong uVar3;
  ulong extraout_x9;
  long extraout_x10;
  long extraout_x11;
  undefined1 extraout_w12;
  undefined1 uVar4;
  undefined8 extraout_x13;
  ulong uVar5;
  
  func_0x00010b8d7348();
  plVar2 = (long *)(param_3 + 8);
  func_0x00010b8b5d14();
  func_0x00010b8d7420();
  func_0x00010b8d75a8();
  uVar3 = extraout_x8;
  uVar4 = extraout_w12;
  if ((!(bool)in_ZR) && (uVar5 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar5 != 0)) {
    uVar5 = uVar5 >> 7;
    uVar3 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(extraout_x13) >> 3) +
            ((uint)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) < 8;
    uVar3 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)(extraout_x10 + extraout_x11) = uVar4;
  *(undefined1 *)(*plVar2 + (plVar2[3] & 7U) + (plVar2[3] & extraout_x9) + 1) = uVar4;
  plVar2[5] = plVar2[5] + uVar3;
  return;
}



/* Entry: 10b8d5f1c; end: 10b8d5f53;  */

void FUN_10b8d5f1c(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00010b8d7200();
    func_0x00010b8d7360();
    pcVar1 = extraout_x8;
  }
  return;
}



/* Entry: 10b8d5f54; end: 10b8d5fa3;  */

void FUN_10b8d5f54(long *param_1,ulong *param_2)

{
  undefined1 in_ZR;
  bool bVar1;
  ulong extraout_x8;
  ulong uVar2;
  ulong extraout_x9;
  long extraout_x10;
  long extraout_x11;
  undefined1 extraout_w12;
  undefined1 uVar3;
  undefined8 extraout_x13;
  ulong uVar4;
  
  func_0x00010b8d75a8();
  uVar2 = extraout_x8;
  uVar3 = extraout_w12;
  if ((!(bool)in_ZR) && (uVar4 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar4 != 0)) {
    uVar4 = uVar4 >> 7;
    uVar2 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(extraout_x13) >> 3) +
            ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) < 8;
    uVar2 = (ulong)bVar1;
    uVar3 = 0x80;
    if (!bVar1) {
      uVar3 = 0xfe;
    }
  }
  *(undefined1 *)(extraout_x10 + extraout_x11) = uVar3;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & extraout_x9) + 1) = uVar3;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 10b8d5fa4; end: 10b8d5fd7;  */

void FUN_10b8d5fa4(int param_1)

{
  FUN_10b8d5ff4();
  if (param_1 == 0) {
    func_0x00010b8d75e0();
  }
  else {
    func_0x00010b8d743c();
  }
  return;
}



/* Entry: 10b8d5fd8; end: 10b8d5ff3;  */

void FUN_10b8d5fd8(void)

{
  func_0x00010b8d7600();
  FUN_10b8d6074();
  return;
}



/* Entry: 10b8d5ff4; end: 10b8d6073;  */

bool FUN_10b8d5ff4(long param_1,int *param_2,undefined8 param_3,ulong *param_4)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x9;
  long extraout_x10;
  ulong extraout_x11;
  long extraout_x12;
  ulong extraout_x13;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x00010b8d7790();
  lVar2 = extraout_x8;
  uVar3 = extraout_x13;
  while( true ) {
    uVar3 = uVar3 & extraout_x9;
    uVar5 = *(ulong *)(extraout_x10 + uVar3);
    iVar1 = *param_2;
    for (uVar4 = (uVar5 ^ extraout_x11) + extraout_x12 & (uVar5 ^ extraout_x11 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar6 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar3 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & extraout_x9;
      *param_4 = uVar6;
      if (*(int *)(*(long *)(param_1 + 8) + uVar6 * 0x10) == iVar1) goto LAB_10b8d73f4;
    }
    if ((uVar5 & ~uVar5 << 6 & 0x8080808080808080) != 0) break;
    lVar2 = lVar2 + 8;
    uVar3 = lVar2 + uVar3;
  }
LAB_10b8d73f4:
  return uVar4 != 0;
}



/* Entry: 10b8d6074; end: 10b8d608f;  */

void FUN_10b8d6074(undefined8 param_1,int *param_2)

{
  func_0x00010b8d7314(param_1,(long)*param_2);
  return;
}



/* Entry: 10b8d6090; end: 10b8d60c3;  */

long * FUN_10b8d6090(long *param_1)

{
  param_1[1] = param_1[1] + 0x10;
  *param_1 = *param_1 + 1;
  FUN_10b8d60f4();
  return param_1;
}



/* Entry: 10b8d60c4; end: 10b8d60f3;  */

void FUN_10b8d60c4(undefined8 param_1,ulong *param_2,long param_3)

{
  undefined1 in_ZR;
  bool bVar1;
  long *plVar2;
  ulong extraout_x8;
  ulong uVar3;
  ulong extraout_x9;
  long extraout_x10;
  long extraout_x11;
  undefined1 extraout_w12;
  undefined1 uVar4;
  undefined8 extraout_x13;
  ulong uVar5;
  
  func_0x00010b8d7348();
  plVar2 = (long *)(param_3 + 8);
  func_0x0001080da474();
  func_0x00010b8d7420();
  func_0x00010b8d75a8();
  uVar3 = extraout_x8;
  uVar4 = extraout_w12;
  if ((!(bool)in_ZR) && (uVar5 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar5 != 0)) {
    uVar5 = uVar5 >> 7;
    uVar3 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(extraout_x13) >> 3) +
            ((uint)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) < 8;
    uVar3 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)(extraout_x10 + extraout_x11) = uVar4;
  *(undefined1 *)(*plVar2 + (plVar2[3] & 7U) + (plVar2[3] & extraout_x9) + 1) = uVar4;
  plVar2[5] = plVar2[5] + uVar3;
  return;
}



/* Entry: 10b8d60f4; end: 10b8d612b;  */

void FUN_10b8d60f4(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00010b8d7200();
    func_0x00010b8d7360();
    pcVar1 = extraout_x8;
  }
  return;
}



/* Entry: 10b8d612c; end: 10b8d617b;  */

void FUN_10b8d612c(long *param_1,ulong *param_2)

{
  undefined1 in_ZR;
  bool bVar1;
  ulong extraout_x8;
  ulong uVar2;
  ulong extraout_x9;
  long extraout_x10;
  long extraout_x11;
  undefined1 extraout_w12;
  undefined1 uVar3;
  undefined8 extraout_x13;
  ulong uVar4;
  
  func_0x00010b8d75a8();
  uVar2 = extraout_x8;
  uVar3 = extraout_w12;
  if ((!(bool)in_ZR) && (uVar4 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar4 != 0)) {
    uVar4 = uVar4 >> 7;
    uVar2 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(extraout_x13) >> 3) +
            ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) < 8;
    uVar2 = (ulong)bVar1;
    uVar3 = 0x80;
    if (!bVar1) {
      uVar3 = 0xfe;
    }
  }
  *(undefined1 *)(extraout_x10 + extraout_x11) = uVar3;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & extraout_x9) + 1) = uVar3;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 10b8d617c; end: 10b8d620f;  */

void FUN_10b8d617c(byte param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x00010b8d74fc();
  FUN_10b8d5fd8();
  plVar2 = unaff_x20;
  uVar3 = param_2;
  FUN_10b8d6210();
  if ((uVar3 & 1) != 0) {
    FUN_10b8d6530(unaff_x20[1] + (long)plVar2 * 0x10,param_2,param_3);
    *(byte *)(*unaff_x20 + (long)plVar2) = param_1 & 0x7f;
    func_0x00010b8d70ec();
  }
  lVar1 = unaff_x20[1];
  *unaff_x19 = *unaff_x20 + (long)plVar2;
  unaff_x19[1] = lVar1 + (long)plVar2 * 0x10;
  *(char *)(unaff_x19 + 2) = (char)uVar3;
  return;
}



/* Entry: 10b8d6210; end: 10b8d62a7;  */

undefined1  [16] FUN_10b8d6210(ulong param_1)

{
  undefined8 uVar1;
  ulong extraout_x8;
  ulong uVar2;
  long extraout_x9;
  long lVar3;
  ulong extraout_x10;
  long extraout_x11;
  ulong extraout_x12;
  int extraout_w13;
  long extraout_x14;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  func_0x00010b8d731c();
  uVar4 = extraout_x8;
  lVar3 = extraout_x9;
  while( true ) {
    uVar4 = uVar4 & extraout_x10;
    uVar5 = *(ulong *)(extraout_x11 + uVar4);
    for (uVar6 = (uVar5 ^ extraout_x12) + extraout_x14 & (uVar5 ^ extraout_x12 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar2 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar4 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & extraout_x10;
      if (*(int *)(*(long *)(param_1 + 8) + uVar2 * 0x10) == extraout_w13) {
        uVar1 = 0;
        goto LAB_10b8d6288;
      }
    }
    if ((uVar5 & ~uVar5 << 6 & 0x8080808080808080) != 0) break;
    lVar3 = lVar3 + 8;
    uVar4 = lVar3 + uVar4;
  }
  FUN_10b8d62a8();
  uVar1 = 1;
  uVar2 = param_1;
LAB_10b8d6288:
  auVar7._8_8_ = uVar1;
  auVar7._0_8_ = uVar2;
  return auVar7;
}



/* Entry: 10b8d62a8; end: 10b8d6333;  */

void FUN_10b8d62a8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b8d74b0();
  func_0x00010b8d7678();
  FUN_10b8d6334();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 == 0) {
    if (*(char *)(unaff_x21 + param_1) == -2) {
      lVar1 = 0;
    }
    else {
      if ((unaff_x22 == 0) || (unaff_x22 - (unaff_x22 >> 3) >> 1 < *(ulong *)(unaff_x19 + 0x10))) {
        FUN_10b8d6364();
      }
      else {
        func_0x00010b8d63ec();
      }
      func_0x00010b8d775c();
      FUN_10b8d6334();
      lVar1 = *(long *)(unaff_x19 + 0x28);
    }
  }
  func_0x00010b8d745c(lVar1);
  return;
}



/* Entry: 10b8d6334; end: 10b8d6363;  */

ulong FUN_10b8d6334(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b8d6364; end: 10b8d64f7;  */

void FUN_10b8d6364(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00010b8d72f4();
  func_0x00010b8d738c();
  func_0x00010b8d74d4();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x00010b8d7610(uVar1);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x22;
  for (; unaff_x24 != unaff_x25; unaff_x25 = unaff_x25 + 1) {
    if (-1 < *(char *)(unaff_x19 + unaff_x25)) {
      lVar2 = unaff_x21;
      FUN_10b8d64f8();
      func_0x00010b8d7660();
      FUN_10b8d6334();
      *(byte *)(unaff_x23 + lVar2) = (byte)unaff_x22 & 0x7f;
      func_0x00010b8d7120();
      func_0x00010b8d7524();
      FUN_10b8d6514();
    }
    unaff_x21 = unaff_x21 + 0x10;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8d64f8; end: 10b8d6513;  */

void FUN_10b8d64f8(int *param_1)

{
  func_0x00010b8d7314(param_1,(long)*param_1);
  return;
}



/* Entry: 10b8d6514; end: 10b8d652f;  */

undefined8 * FUN_10b8d6514(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 2) = *puVar1;
  *puVar1 = 0;
  func_0x0001080d289c(*puVar1);
  return puVar1;
}



/* Entry: 10b8d6530; end: 10b8d6553;  */

void FUN_10b8d6530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_10b8d6554(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 10b8d6554; end: 10b8d658f;  */

void FUN_10b8d6554(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  *param_1 = *(undefined4 *)*param_2;
  lVar1 = *(long *)*param_3;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x00010b8d7258();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(long *)(param_1 + 2) = lVar1;
  return;
}



/* Entry: 10b8d6590; end: 10b8d65af;  */

void FUN_10b8d6590(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b8d65b0(&uStack_11,param_1);
  return;
}



/* Entry: 10b8d65b0; end: 10b8d661b;  */

void FUN_10b8d65b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  int extraout_w11;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x00010b8d7104();
  uStack_28 = extraout_x8;
  FUN_10b8d6638(auStack_40,1);
  FUN_10b8d6690(lStack_30,param_3);
  lVar3 = lStack_30;
  lStack_30 = 0;
  FUN_10b8d661c(param_1,lVar3 + 0x18);
  FUN_10b8d6750();
  func_0x00010b8d70d8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8_00 = puVar2;
  extraout_x8_00[1] = lVar3;
  puVar1 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2 + 8;
  }
  if ((puVar1 != (undefined1 *)0x0) &&
     ((*(long *)(puVar1 + 8) == 0 || (*(long *)(*(long *)(puVar1 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_10b8d661c;
    lStack_58 = extraout_x8_00[1];
    puStack_60 = puVar2;
    puStack_50 = &stack0xfffffffffffffff0;
    if (lStack_58 != 0) {
      do {
        func_0x00010b8d7258();
      } while (extraout_w11 != 0);
    }
    func_0x00010b8d76d8();
    func_0x000107c284e8(&puStack_60);
    return;
  }
  return;
}



/* Entry: 10b8d661c; end: 10b8d6637;  */

void FUN_10b8d661c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x00010b8d7258();
      } while (extraout_w11 != 0);
    }
    func_0x00010b8d76d8();
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b8d6638; end: 10b8d665f;  */

long FUN_10b8d6638(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b8d6660();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b8d6660; end: 10b8d668f;  */

undefined8 * FUN_10b8d6660(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x1745d1745d1745e) {
    puVar1 = (undefined8 *)(param_2 * 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d72228;
  func_0x00010b8d66e0(param_1 + 3);
  return param_1;
}



/* Entry: 10b8d6690; end: 10b8d66bf;  */

undefined8 * FUN_10b8d6690(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d72228;
  func_0x00010b8d66e0(param_1 + 3);
  return param_1;
}



/* Entry: 10b8d66c0; end: 10b8d66c3;  */

void FUN_10b8d66c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d72228;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8d66c4; end: 10b8d66d7;  */

void FUN_10b8d66c4(void)

{
  func_0x00010b8d66e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8d66d8; end: 10b8d66f7;  */

void FUN_10b8d66d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8d7718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8d66f8; end: 10b8d674f;  */

void FUN_10b8d66f8(long param_1,long param_2,undefined8 param_3)

{
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x00010b8d7258();
      } while (extraout_w11 != 0);
    }
    func_0x00010b8d76d8();
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8d6750; end: 10b8d675f;  */

void FUN_10b8d6750(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8d6760; end: 10b8d677b;  */

void FUN_10b8d6760(void)

{
  undefined1 uStack_11;
  
  FUN_10b8d677c(&uStack_11);
  return;
}


