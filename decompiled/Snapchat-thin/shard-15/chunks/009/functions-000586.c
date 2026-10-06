/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd359b0; end: 10bd35a5b;  */

long FUN_10bd359b0(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar2 = param_2 - (long)param_1;
  lVar3 = lVar2 >> 3;
  lVar5 = param_3 - param_2 >> 3;
  lVar7 = lVar3;
  if (lVar3 == lVar5) {
    FUN_10bd35a5c(param_1,param_2,param_2);
  }
  else {
    do {
      lVar4 = lVar5;
      lVar5 = 0;
      if (lVar4 != 0) {
        lVar5 = lVar7 / lVar4;
      }
      lVar5 = lVar7 - lVar5 * lVar4;
      lVar7 = lVar4;
    } while (lVar5 != 0);
    puVar6 = param_1 + lVar4;
    while (puVar6 != param_1) {
      puVar6 = puVar6 + -1;
      uVar8 = *puVar6;
      puVar1 = (undefined8 *)(lVar2 + (long)puVar6);
      puVar10 = puVar6;
      do {
        puVar9 = puVar1;
        *puVar10 = *puVar9;
        lVar5 = param_3 - (long)puVar9 >> 3;
        puVar1 = (undefined8 *)((long)puVar9 + lVar2);
        if (lVar5 <= lVar3) {
          puVar1 = param_1 + (lVar3 - lVar5);
        }
        puVar10 = puVar9;
      } while (puVar1 != puVar6);
      *puVar9 = uVar8;
    }
    param_2 = (param_3 - param_2) + (long)param_1;
  }
  return param_2;
}



/* Entry: 10bd35a5c; end: 10bd3660f;  */

undefined1  [16]
FUN_10bd35a5c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2 && puVar1 != param_4; puVar2 = puVar2 + 1) {
    uVar3 = *puVar2;
    *puVar2 = *puVar1;
    *puVar1 = uVar3;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10bd36610; end: 10bd36683;  */

undefined8 * FUN_10bd36610(void)

{
  undefined8 *puVar1;
  
  if ((bRam0000000113847388 & 1) == 0) {
    puVar1 = (undefined8 *)0x113847388;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      func_0x00010bd3755c();
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      FUN_10bd36684();
      puRam0000000113847380 = puVar1;
      ___cxa_guard_release(0x113847388);
    }
  }
  return puRam0000000113847380;
}



/* Entry: 10bd36684; end: 10bd366af;  */

undefined8 FUN_10bd36684(undefined8 param_1)

{
  func_0x000107c30378(FUN_10bd373bc,param_1);
  return param_1;
}



/* Entry: 10bd366b0; end: 10bd36707;  */

void FUN_10bd366b0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (param_1[1] - *param_1) * 0x10000000 >> 0x20;
  lVar2 = lVar1 + 1;
  lVar1 = lVar1 * 0x10;
  do {
    lVar1 = lVar1 + -0x10;
    FUN_10bd36708(*param_1 + lVar1);
    lVar2 = lVar2 + -1;
  } while (1 < lVar2);
  param_1[1] = *param_1;
  return;
}



/* Entry: 10bd36708; end: 10bd3674f;  */

void FUN_10bd36708(long param_1)

{
  if (*(int *)(param_1 + 4) == 4) {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_10bd02384();
    }
  }
  else {
    if (*(int *)(param_1 + 4) != 3) {
      return;
    }
    if (*(long *)(param_1 + 8) != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd36750; end: 10bd367a7;  */

void FUN_10bd36750(undefined8 param_1,long *param_2)

{
  long lVar1;
  long unaff_x22;
  
  if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
    func_0x00010bd374f4();
    for (lVar1 = 0; unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
      func_0x00010bd37570();
      func_0x00010bd375bc();
    }
  }
  return;
}



/* Entry: 10bd367a8; end: 10bd36817;  */

void FUN_10bd367a8(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined1 auStack_48 [40];
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 4)) {
    return;
  }
  if (param_2 >> 0x3c != 0) {
    FUN_10bd36ee8();
    func_0x00010bd374ec();
    func_0x00010bd374e4();
    plVar1 = param_1;
    if (*(int *)((long)param_1 + 4) == 4) {
      func_0x00010bd3755c();
      plVar1[1] = 0;
      plVar1[2] = 0;
      *plVar1 = 0;
      FUN_10bd36750();
    }
    else {
      if (*(int *)((long)param_1 + 4) != 3) {
        return;
      }
      func_0x00010bd3755c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    }
    param_1[1] = (long)plVar1;
    return;
  }
  FUN_10bd36f70(auStack_48,param_2,param_1[1] - *param_1 >> 4);
  func_0x00010bd37550();
  func_0x00010bd374ec();
  return;
}



/* Entry: 10bd36818; end: 10bd36883;  */

void FUN_10bd36818(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (*(int *)((long)param_1 + 4) == 4) {
    func_0x00010bd3755c();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    FUN_10bd36750();
  }
  else {
    if (*(int *)((long)param_1 + 4) != 3) {
      return;
    }
    func_0x00010bd3755c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  }
  param_1[1] = puVar1;
  return;
}



/* Entry: 10bd36884; end: 10bd368db;  */

void FUN_10bd36884(undefined8 param_1,long *param_2)

{
  long lVar1;
  long unaff_x22;
  
  if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
    func_0x00010bd374f4();
    for (lVar1 = 0; unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
      func_0x00010bd37570();
      func_0x00010bd375bc();
    }
  }
  return;
}



/* Entry: 10bd368dc; end: 10bd3691b;  */

void FUN_10bd368dc(long *param_1,undefined8 *param_2)

{
  if (*param_1 == param_1[1]) {
    FUN_10bd37124(param_1,param_2);
  }
  else {
    FUN_10bd3691c(param_1,param_1[1],*param_2,param_2[1]);
  }
  param_2[1] = *param_2;
  return;
}



/* Entry: 10bd3691c; end: 10bd36927;  */

long FUN_10bd3691c(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  lVar4 = (long)param_4 - (long)param_3 >> 4;
  if (0 < lVar4) {
    puVar3 = (undefined8 *)param_1[1];
    if (param_1[2] - (long)puVar3 >> 4 < lVar4) {
      plVar2 = param_1;
      FUN_10bd370e4(param_1,lVar4 + ((long)puVar3 - *param_1 >> 4));
      FUN_10bd36f70(&lStack_68,plVar2,param_2 - *param_1 >> 4,param_1 + 2);
      lVar1 = lStack_60;
      puVar3 = puStack_58 + lVar4 * 2;
      for (lVar4 = lVar4 << 4; lVar4 != 0; lVar4 = lVar4 + -0x10) {
        uVar6 = *param_3;
        puStack_58[1] = param_3[1];
        *puStack_58 = uVar6;
        param_3 = param_3 + 2;
        puStack_58 = puStack_58 + 2;
      }
      puStack_58 = puVar3;
      _memcpy(puVar3,param_2,param_1[1] - param_2);
      puStack_58 = (undefined8 *)((long)puStack_58 + (param_1[1] - param_2));
      param_1[1] = param_2;
      lVar4 = lStack_60 - (param_2 - *param_1);
      _memcpy(lVar4);
      lStack_68 = *param_1;
      *param_1 = lVar4;
      lVar4 = param_1[2];
      param_1[2] = lStack_50;
      param_1[1] = (long)puStack_58;
      lStack_60 = lStack_68;
      puStack_58 = (undefined8 *)lStack_68;
      lStack_50 = lVar4;
      func_0x00010bd374ec();
      param_2 = lVar1;
    }
    else {
      lVar1 = (long)puVar3 - param_2 >> 4;
      if (lVar1 < lVar4) {
        puVar5 = (undefined8 *)(((long)puVar3 - param_2) + (long)param_3);
        for (; puVar5 != param_4; puVar5 = puVar5 + 2) {
          uVar6 = *puVar5;
          puVar3[1] = puVar5[1];
          *puVar3 = uVar6;
          puVar3 = puVar3 + 2;
        }
        param_1[1] = (long)puVar3;
        if (lVar1 < 1) {
          return param_2;
        }
        func_0x00010bd37598();
        FUN_10bd37310();
        lVar4 = lVar1;
      }
      else {
        func_0x00010bd37598();
        FUN_10bd37310();
      }
      func_0x00010bd37350(param_3,lVar4,param_2);
    }
  }
  return param_2;
}



/* Entry: 10bd36928; end: 10bd369a7;  */

long FUN_10bd36928(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  if (lVar4 == lVar1) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1[2] - lVar4;
    for (; lVar4 != lVar1; lVar4 = lVar4 + 0x10) {
      if (*(int *)(lVar4 + 4) == 4) {
        lVar2 = *(long *)(lVar4 + 8);
        FUN_10bd369a8(lVar2);
        lVar3 = lVar2 + lVar3;
      }
      else if (*(int *)(lVar4 + 4) == 3) {
        lVar2 = *(long *)(lVar4 + 8);
        func_0x00010b4cf314(lVar2);
        lVar3 = lVar3 + lVar2 + 0x18;
      }
    }
  }
  return lVar3;
}



/* Entry: 10bd369a8; end: 10bd369c3;  */

long FUN_10bd369a8(int param_1)

{
  FUN_10bd36928();
  return (long)param_1 + 0x18;
}



/* Entry: 10bd369c4; end: 10bd369ef;  */

void FUN_10bd369c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 unaff_w20;
  long unaff_x21;
  
  func_0x00010bd37544();
  lVar1 = *(long *)(unaff_x21 + 8);
  *(undefined4 *)(lVar1 + -0x10) = unaff_w20;
  *(undefined4 *)(lVar1 + -0xc) = 0;
  *(undefined8 *)(lVar1 + -8) = param_3;
  return;
}



/* Entry: 10bd369f0; end: 10bd36a2f;  */

undefined8 * FUN_10bd369f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    FUN_10bd3736c();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 10bd36a30; end: 10bd36a8f;  */

void FUN_10bd36a30(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 unaff_w20;
  long unaff_x21;
  
  func_0x00010bd37544();
  lVar1 = *(long *)(unaff_x21 + 8);
  *(undefined4 *)(lVar1 + -0x10) = unaff_w20;
  *(undefined4 *)(lVar1 + -0xc) = 1;
  *(undefined4 *)(lVar1 + -8) = param_3;
  return;
}



/* Entry: 10bd36a90; end: 10bd36af7;  */

void FUN_10bd36a90(undefined8 *param_1)

{
  undefined4 unaff_w19;
  long unaff_x20;
  long lVar1;
  
  func_0x00010bd375d4();
  lVar1 = *(long *)(unaff_x20 + 8);
  *(undefined4 *)(lVar1 + -0x10) = unaff_w19;
  *(undefined4 *)(lVar1 + -0xc) = 3;
  func_0x00010bd3755c();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined8 **)(lVar1 + -8) = param_1;
  return;
}



/* Entry: 10bd36af8; end: 10bd36b77;  */

undefined8 FUN_10bd36af8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  lVar1 = param_2;
  FUN_10bd3776c(param_2,&uStack_38);
  if (((int)lVar1 == 0) || (*(char *)(param_2 + 0x24) != '\x01')) {
    uVar2 = 0;
  }
  else {
    FUN_10bd368dc(param_1,&uStack_38);
    uVar2 = 1;
  }
  FUN_10bd02384(&uStack_38);
  return uVar2;
}



/* Entry: 10bd36b78; end: 10bd36b9b;  */

undefined8 FUN_10bd36b78(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bd37564();
  FUN_10bd023ac();
  func_0x00010bd37598();
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  lVar1 = param_2;
  FUN_10bd3776c(param_2,&uStack_38);
  if (((int)lVar1 == 0) || (*(char *)(param_2 + 0x24) != '\x01')) {
    uVar2 = 0;
  }
  else {
    FUN_10bd368dc(param_1,&uStack_38);
    uVar2 = 1;
  }
  FUN_10bd02384(&uStack_38);
  return uVar2;
}



/* Entry: 10bd36b9c; end: 10bd36bf7;  */

uint FUN_10bd36b9c(undefined8 param_1)

{
  undefined1 auStack_70 [36];
  byte bStack_4c;
  
  func_0x000106e5f700(auStack_70);
  FUN_10bd36b78(param_1,auStack_70);
  func_0x00010b4d3fe8(auStack_70);
  return (uint)param_1 & (uint)bStack_4c;
}



/* Entry: 10bd36bf8; end: 10bd36c2f;  */

void FUN_10bd36bf8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  ppuStack_30 = &PTR_DAT_110cf0f18;
  uStack_18 = 0;
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_3;
  FUN_10bd36b9c(param_1,&ppuStack_30);
  return;
}



/* Entry: 10bd36c30; end: 10bd36dd3;  */

undefined8 FUN_10bd36c30(void)

{
  func_0x00010bd37564();
  FUN_10bd37a78();
  func_0x000107c2ba4c();
  func_0x00010bd37598();
  func_0x00010bd36c74();
  return 1;
}



/* Entry: 10bd36dd4; end: 10bd36df7;  */

void FUN_10bd36dd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10bd36df8(param_1,&uStack_18);
  return;
}



/* Entry: 10bd36df8; end: 10bd36ee7;  */

undefined8 * FUN_10bd36df8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_40 [16];
  
  puVar5 = (undefined8 *)((ulong)param_1 >> 3);
  if ((int)puVar5 == 0) {
LAB_10bd36e64:
    param_1 = (undefined8 *)0x0;
  }
  else {
    switch((ulong)param_1 & 7) {
    case 0:
      func_0x000107c302a4(param_3,auStack_40);
      param_1 = param_3;
      if (param_3 != (undefined8 *)0x0) {
        func_0x00010bd375a4();
        func_0x00010bd373d4();
      }
      break;
    case 1:
      func_0x00010bd375a4(param_1,param_2,*param_3);
      func_0x00010bd373dc();
      param_1 = param_3 + 1;
      break;
    case 2:
      func_0x00010bd375a4();
      FUN_10bd373e4();
      break;
    case 3:
      func_0x00010bd375a4();
      FUN_10bd37438();
      break;
    case 4:
      FUN_10bdb2a00(auStack_40,&UNK_10f83678a,0x516);
      puVar3 = &UNK_10f83682f;
      func_0x00010b4d32c0(auStack_40);
      func_0x00010ae6c700(auStack_40);
      plVar1 = (long *)&UNK_10f836783;
      func_0x000104bd47e8();
      func_0x00010bd37564();
      puVar6 = (undefined8 *)(*(long *)(puVar3 + 8) - (plVar1[1] - *plVar1));
      puVar2 = puVar6;
      _memcpy(puVar6);
      param_3[1] = puVar6;
      uVar4 = *puVar5;
      puVar5[1] = uVar4;
      *puVar5 = param_3[1];
      param_3[1] = uVar4;
      uVar4 = puVar5[1];
      puVar5[1] = param_3[2];
      param_3[2] = uVar4;
      uVar4 = puVar5[2];
      puVar5[2] = param_3[3];
      param_3[3] = uVar4;
      *param_3 = param_3[1];
      return puVar2;
    case 5:
      func_0x00010bd375a4(param_1,param_2,*(undefined4 *)param_3);
      func_0x00010bd374c8();
      param_1 = (undefined8 *)((long)param_3 + 4);
      break;
    default:
      goto LAB_10bd36e64;
    }
  }
  return param_1;
}



/* Entry: 10bd36ee8; end: 10bd36efb;  */

void FUN_10bd36ee8(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  plVar1 = (long *)&UNK_10f836783;
  func_0x000104bd47e8();
  func_0x00010bd37564();
  lVar3 = *(long *)(param_2 + 8) - (plVar1[1] - *plVar1);
  _memcpy(lVar3);
  unaff_x19[1] = lVar3;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10bd36efc; end: 10bd36f6f;  */

void FUN_10bd36efc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010bd37564();
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



/* Entry: 10bd36f70; end: 10bd36fdb;  */

long * FUN_10bd36f70(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010bd36fb8();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10bd36fdc; end: 10bd36ff7;  */

long * FUN_10bd36fdc(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10bd37024();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bd36ff8; end: 10bd37023;  */

long * FUN_10bd36ff8(long *param_1)

{
  FUN_10bd37024();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bd37024; end: 10bd37047;  */

void FUN_10bd37024(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10bd37048; end: 10bd3708b;  */

undefined8 * FUN_10bd37048(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    FUN_10bd3708c();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 10bd3708c; end: 10bd370e3;  */

undefined8 FUN_10bd3708c(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *puStack_38;
  
  func_0x00010bd3752c();
  func_0x00010bd37510();
  uVar1 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar1;
  func_0x00010bd37550();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010bd374ec();
  return uVar1;
}



/* Entry: 10bd370e4; end: 10bd37123;  */

long * FUN_10bd370e4(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0xfffffffffffffff;
    }
    return plVar1;
  }
  FUN_10bd36ee8();
  func_0x00010bd37564();
  func_0x00010bd37158();
  uVar2 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar2;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return param_1;
}



/* Entry: 10bd37124; end: 10bd37187;  */

void FUN_10bd37124(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010bd37564();
  func_0x00010bd37158();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 10bd37188; end: 10bd3730f;  */

long FUN_10bd37188(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  if (0 < param_5) {
    puVar3 = (undefined8 *)param_1[1];
    if (param_1[2] - (long)puVar3 >> 4 < param_5) {
      plVar2 = param_1;
      FUN_10bd370e4(param_1,param_5 + ((long)puVar3 - *param_1 >> 4));
      FUN_10bd36f70(&lStack_68,plVar2,param_2 - *param_1 >> 4,param_1 + 2);
      lVar1 = lStack_60;
      puVar3 = puStack_58 + param_5 * 2;
      for (param_5 = param_5 << 4; param_5 != 0; param_5 = param_5 + -0x10) {
        uVar6 = *param_3;
        puStack_58[1] = param_3[1];
        *puStack_58 = uVar6;
        param_3 = param_3 + 2;
        puStack_58 = puStack_58 + 2;
      }
      puStack_58 = puVar3;
      _memcpy(puVar3,param_2,param_1[1] - param_2);
      puStack_58 = (undefined8 *)((long)puStack_58 + (param_1[1] - param_2));
      param_1[1] = param_2;
      lVar5 = lStack_60 - (param_2 - *param_1);
      _memcpy(lVar5);
      lStack_68 = *param_1;
      *param_1 = lVar5;
      lVar5 = param_1[2];
      param_1[2] = lStack_50;
      param_1[1] = (long)puStack_58;
      lStack_60 = lStack_68;
      puStack_58 = (undefined8 *)lStack_68;
      lStack_50 = lVar5;
      func_0x00010bd374ec();
      param_2 = lVar1;
    }
    else {
      lVar1 = (long)puVar3 - param_2 >> 4;
      if (lVar1 < param_5) {
        puVar4 = (undefined8 *)(((long)puVar3 - param_2) + (long)param_3);
        for (; puVar4 != param_4; puVar4 = puVar4 + 2) {
          uVar6 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar6;
          puVar3 = puVar3 + 2;
        }
        param_1[1] = (long)puVar3;
        if (lVar1 < 1) {
          return param_2;
        }
        func_0x00010bd37598();
        FUN_10bd37310();
        param_5 = lVar1;
      }
      else {
        func_0x00010bd37598();
        FUN_10bd37310();
      }
      func_0x00010bd37350(param_3,param_5,param_2);
    }
  }
  return param_2;
}



/* Entry: 10bd37310; end: 10bd3736b;  */

void FUN_10bd37310(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar3 = puVar1;
  for (puVar2 = (undefined8 *)(param_2 + ((long)puVar1 - (long)param_4)); puVar2 < param_3;
      puVar2 = puVar2 + 2) {
    uVar4 = *puVar2;
    puVar3[1] = puVar2[1];
    *puVar3 = uVar4;
    puVar3 = puVar3 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar3;
  if (puVar1 != param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)((long)puVar1 - ((long)puVar1 - (long)param_4));
    return;
  }
  return;
}



/* Entry: 10bd3736c; end: 10bd373bb;  */

undefined8 FUN_10bd3736c(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *puStack_38;
  
  func_0x00010bd3752c();
  func_0x00010bd37510();
  *puStack_38 = 0;
  puStack_38[1] = 0;
  func_0x00010bd37550();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010bd374ec();
  return uVar1;
}



/* Entry: 10bd373bc; end: 10bd373d3;  */

void FUN_10bd373bc(long param_1)

{
  if (param_1 != 0) {
    FUN_10bd02384();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd373d4; end: 10bd373e3;  */

void FUN_10bd373d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 unaff_w20;
  long unaff_x21;
  
  func_0x00010bd37544(*param_1);
  lVar1 = *(long *)(unaff_x21 + 8);
  *(undefined4 *)(lVar1 + -0x10) = unaff_w20;
  *(undefined4 *)(lVar1 + -0xc) = 0;
  *(undefined8 *)(lVar1 + -8) = param_3;
  return;
}



/* Entry: 10bd373e4; end: 10bd37437;  */

void FUN_10bd373e4(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lStack_28;
  
  uVar1 = *param_1;
  lStack_28 = param_3;
  FUN_10bd36a90(uVar1);
  plVar2 = &lStack_28;
  func_0x000107c30264(plVar2);
  if (lStack_28 != 0) {
    func_0x000107c30268(param_4,lStack_28,plVar2,uVar1);
  }
  return;
}



/* Entry: 10bd37438; end: 10bd374c7;  */

undefined8 * FUN_10bd37438(undefined8 *param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  
  iVar1 = *(int *)(param_4 + 0x58);
  *(int *)(param_4 + 0x58) = iVar1 + -1;
  if (0 < iVar1) {
    *(int *)(param_4 + 0x5c) = *(int *)(param_4 + 0x5c) + 1;
    uVar3 = *param_1;
    func_0x00010bd36ac4();
    puVar4 = &uStack_38;
    uStack_38 = uVar3;
    func_0x00010bd36d40(puVar4,param_3,param_4);
    *(ulong *)(param_4 + 0x58) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_4 + 0x58) >> 0x20) + -1,
                  (int)*(undefined8 *)(param_4 + 0x58) + 1);
    uVar2 = *(uint *)(param_4 + 0x50);
    *(undefined4 *)(param_4 + 0x50) = 0;
    if (uVar2 != (param_2 << 3 | 3U)) {
      puVar4 = (undefined8 *)0x0;
    }
    return puVar4;
  }
  return (undefined8 *)0x0;
}



/* Entry: 10bd374c8; end: 10bd375df;  */

void FUN_10bd374c8(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 unaff_w20;
  long unaff_x21;
  
  func_0x00010bd37544(*param_1);
  lVar1 = *(long *)(unaff_x21 + 8);
  *(undefined4 *)(lVar1 + -0x10) = unaff_w20;
  *(undefined4 *)(lVar1 + -0xc) = 1;
  *(undefined4 *)(lVar1 + -8) = param_3;
  return;
}



/* Entry: 10bd375e0; end: 10bd3776b;  */

ulong FUN_10bd375e0(ulong param_1,uint param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uStack_48;
  
  if (param_2 < 8) goto code_r0x00010bd37600;
  uVar3 = 0;
  switch(param_2 & 7) {
  case 0:
    func_0x00010bd3cbc0();
    func_0x000106e5f2b8();
    uVar3 = param_1;
    if ((param_3 != 0) && ((int)param_1 != 0)) {
      func_0x00010bd3cd4c();
      FUN_10bd369c4();
    }
    break;
  case 1:
    func_0x00010bd3cbc0();
    func_0x00010b4d3900();
    uVar3 = param_1;
    if ((param_3 != 0) && ((int)param_1 != 0)) {
      func_0x00010bd3cd4c();
      func_0x00010bd36a60();
    }
    break;
  case 2:
    uVar3 = param_1;
    func_0x00010bd3cbc0();
    func_0x000106e5f1dc();
    if ((int)uVar3 != 0) {
      if (param_3 == 0) {
        func_0x000106e5f5c4(param_1,uStack_48);
        if ((param_1 & 1) != 0) {
          return 1;
        }
      }
      else {
        func_0x00010bd3cd4c();
        func_0x00010bd36a90();
        func_0x00010b4d450c(param_1,uVar3,uStack_48);
        if ((int)param_1 != 0) {
          return 1;
        }
      }
    }
    goto code_r0x00010bd37600;
  case 3:
    iVar1 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x34) = iVar1 + -1;
    if (0 < iVar1) {
      if (param_3 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = param_1;
        func_0x00010bd3cd4c();
        func_0x00010bd36ac4();
      }
      uVar2 = param_1;
      FUN_10bd3776c(param_1,uVar3);
      if ((int)uVar2 != 0) {
        if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x38)) {
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
        }
        return (ulong)(*(uint *)(param_1 + 0x20) == (param_2 & 0xfffffff8 | 4));
      }
    }
code_r0x00010bd37600:
    uVar3 = 0;
    break;
  case 5:
    func_0x00010bd3cbc0();
    func_0x00010b4d3924();
    uVar3 = param_1;
    if ((param_3 != 0) && ((int)param_1 != 0)) {
      func_0x00010bd3cd4c();
      FUN_10bd36a30();
    }
  }
  return uVar3;
}



/* Entry: 10bd3776c; end: 10bd377ef;  */

bool FUN_10bd3776c(void)

{
  byte *pbVar1;
  bool bVar2;
  ulong *puVar3;
  uint uVar4;
  ulong *unaff_x20;
  
  func_0x00010bd3cd40();
  do {
    pbVar1 = (byte *)*unaff_x20;
    if ((pbVar1 < (byte *)unaff_x20[1]) && (uVar4 = (uint)*pbVar1, -1 < (char)*pbVar1)) {
      *unaff_x20 = (ulong)(pbVar1 + 1);
    }
    else {
      puVar3 = unaff_x20;
      func_0x00010b4d4c50();
      uVar4 = (uint)puVar3;
    }
    *(uint *)(unaff_x20 + 4) = uVar4;
    bVar2 = (uVar4 & 7) == 4;
  } while ((uVar4 != 0 && !bVar2) && (puVar3 = unaff_x20, FUN_10bd375e0(), ((ulong)puVar3 & 1) != 0)
          );
  return uVar4 == 0 || bVar2;
}



/* Entry: 10bd377f0; end: 10bd379b7;  */

long * FUN_10bd377f0(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x00010bd3caf8();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar4);
      func_0x000107c280ac(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x000107c280a4();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar5,uVar4,param_3);
      func_0x00010bd3ca0c();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 10bd379b8; end: 10bd37a77;  */

undefined8 FUN_10bd379b8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = 0;
  for (lVar6 = 0; lVar6 < (int)((ulong)(param_1[1] - *param_1) >> 4); lVar6 = lVar6 + 1) {
    puVar4 = (uint *)(*param_1 + lVar5);
    if (puVar4[1] == 3) {
      uVar3 = param_3;
      func_0x000107c28094(param_3);
      func_0x00010bd3ce28();
      uVar1 = 0x10;
      func_0x000107c280a8(0x10,uVar3);
      uVar2 = (ulong)*puVar4;
      func_0x000107c280a8(uVar2,uVar1);
      uVar3 = 0x1a;
      func_0x000107c280a8(0x1a,uVar2);
      func_0x00010bd36cf8(puVar4,uVar3,param_3);
      func_0x00010bd3ca0c();
      param_2 = 0xc;
      func_0x000107c280a8(0xc,puVar4);
    }
    lVar5 = lVar5 + 0x10;
  }
  return param_2;
}



/* Entry: 10bd37a78; end: 10bd37beb;  */

long FUN_10bd37a78(long *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = 0;
  piVar1 = (int *)*param_1;
  uVar5 = (uint)((ulong)(param_1[1] - (long)piVar1) >> 4);
  uVar8 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
  do {
    if (uVar8 == 0) {
      return lVar7;
    }
    switch(piVar1[1]) {
    case 0:
      func_0x00010bd3c9f0(*piVar1 << 3);
      lVar7 = lVar7 + (ulong)((int)LZCOUNT(*(undefined8 *)(piVar1 + 2)) * -9 + 0x280U >> 6);
      lVar4 = extraout_x8;
      goto code_r0x00010bd37ba4;
    case 1:
      func_0x00010bd3c9f0(*piVar1 << 3 | 5);
      lVar7 = lVar7 + extraout_x8_02 + 4;
      break;
    case 2:
      func_0x00010bd3c9f0(*piVar1 << 3 | 1);
      lVar7 = lVar7 + extraout_x8_01 + 8;
      break;
    case 3:
      lVar6 = *(long *)(piVar1 + 2);
      lVar4 = (long)*(char *)(lVar6 + 0x17);
      lVar3 = lVar4;
      if (lVar4 < 0) {
        lVar3 = *(long *)(lVar6 + 8);
      }
      if (*(char *)(lVar6 + 0x17) < '\0') {
        lVar4 = *(long *)(lVar6 + 8);
      }
      lVar7 = lVar7 + (ulong)((int)LZCOUNT(*piVar1 << 3 | 2) * -9 + 0x160U >> 6) +
              (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6);
      goto code_r0x00010bd37ba4;
    case 4:
      iVar2 = *piVar1;
      lVar4 = *(long *)(piVar1 + 2);
      FUN_10bd37a78(lVar4);
      func_0x00010bd3c9f0(iVar2 << 3 | 4);
      lVar7 = lVar4 + lVar7 + (ulong)((int)LZCOUNT(iVar2 << 3 | 3) * -9 + 0x160U >> 6);
      lVar4 = extraout_x8_00;
code_r0x00010bd37ba4:
      lVar7 = lVar7 + lVar4;
    }
    piVar1 = piVar1 + 4;
    uVar8 = uVar8 - 1;
  } while( true );
}



/* Entry: 10bd37bec; end: 10bd37c6f;  */

long FUN_10bd37bec(long *param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar5;
  ulong uVar4;
  
  lVar2 = 0;
  uVar3 = (uint)((ulong)(param_1[1] - *param_1) >> 4);
  plVar1 = (long *)(*param_1 + 8);
  for (uVar4 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)); uVar4 != 0; uVar4 = uVar4 - 1) {
    if (*(int *)((long)plVar1 + -4) == 3) {
      lVar5 = (long)*(char *)(*plVar1 + 0x17);
      if (lVar5 < 0) {
        lVar5 = *(long *)(*plVar1 + 8);
      }
      lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)plVar1[-1]) * -9 + 0x160U >> 6) + 4 +
              (long)(int)lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6);
    }
    plVar1 = plVar1 + 2;
  }
  return lVar2;
}



/* Entry: 10bd37c70; end: 10bd37da3;  */

void FUN_10bd37c70(ulong param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar2 = param_1;
  uVar5 = param_2;
  uStack_48 = param_2;
  FUN_10bd2b4f4();
  FUN_10bd2b4f4(param_1);
  if ((*(byte *)(*(long *)(uVar2 + 0x20) + 0x50) & 1) == 0) {
    do {
      uVar3 = param_3;
      func_0x000107c302ac(param_3,&uStack_48);
      if ((uVar3 & 1) != 0) {
        return;
      }
      func_0x00010bd3ce0c(uStack_48,&uStack_60);
      if (uStack_48 == 0) {
        return;
      }
      if (((uint)uStack_60 == 0) || (((uint)uStack_60 & 7) == 4)) {
        *(uint *)(param_3 + 0x50) = (uint)uStack_60 - 1;
        return;
      }
      uVar1 = (uint)uStack_60 >> 3;
      uVar3 = uVar2;
      FUN_10bcee2d0(uVar2,uVar1);
      if (uVar3 == 0) {
        uVar3 = uVar2;
        FUN_10bd25980(uVar2,uVar1);
        if ((int)uVar3 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(ulong *)(param_3 + 0x60);
          if (uVar3 == 0) {
            uVar3 = uVar5;
            FUN_10bd20c44(uVar5,uVar1);
          }
          else {
            FUN_10bcedf04(uVar3,uVar2,uVar1);
          }
        }
      }
      uVar4 = param_1;
      FUN_10bd381d8(param_1,uStack_48,param_3,uStack_60 & 0xffffffff,uVar5,uVar3);
      uStack_48 = uVar4;
    } while (uVar4 != 0);
  }
  else {
    uStack_60 = param_1;
    uStack_58 = uVar2;
    uStack_50 = uVar5;
    FUN_10bd37da4(&uStack_60,param_2,param_3);
  }
  return;
}



/* Entry: 10bd37da4; end: 10bd381d7;  */

byte *****
FUN_10bd37da4(byte *****param_1,byte *****param_2,byte *****param_3,byte *****param_4,
             undefined8 param_5,byte *****param_6)

{
  uint uVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  byte ****ppppbVar4;
  byte *****pppppbVar5;
  byte ****ppppbVar6;
  byte *****pppppbVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long extraout_x8_00;
  long extraout_x8_01;
  byte *****unaff_x21;
  byte *****unaff_x22;
  byte *****pppppbVar11;
  int iVar12;
  undefined8 unaff_x23;
  long lVar13;
  byte ****unaff_x26;
  undefined8 *puStack_298;
  undefined1 auStack_1f0 [112];
  byte ***pppbStack_180;
  undefined8 uStack_178;
  byte ****ppppbStack_170;
  undefined8 uStack_168;
  byte ****ppppbStack_160;
  byte ****ppppbStack_158;
  byte ****ppppbStack_150;
  byte ****ppppbStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  uint uStack_12c;
  byte ****ppppbStack_128;
  byte ****ppppbStack_120;
  uint auStack_118 [3];
  uint uStack_10c;
  byte ****ppppbStack_108;
  byte ****ppppbStack_100;
  ulong uStack_f8;
  byte ****ppppbStack_f0;
  byte ***apppbStack_e8 [10];
  int iStack_98;
  undefined8 uStack_78;
  
  pppppbVar5 = param_1;
  pppppbVar7 = param_3;
  func_0x00010bd3c95c();
  ppppbStack_128 = (byte ****)param_2;
  uStack_78 = extraout_x8;
  do {
    func_0x00010bd3cbc0();
    func_0x000107c302ac();
    pppppbVar11 = (byte *****)ppppbStack_128;
    if (((ulong)pppppbVar5 & 1) != 0) goto LAB_10bd3816c;
    param_2 = (byte *****)&uStack_12c;
    func_0x00010bd3ce0c();
    if ((byte *****)ppppbStack_128 == (byte *****)0x0) break;
    if ((uStack_12c == 0) || (in_ZR = 1, (uStack_12c & 7) == 4)) {
      *(uint *)(param_3 + 10) = uStack_12c - 1;
      pppppbVar11 = (byte *****)ppppbStack_128;
      goto LAB_10bd3816c;
    }
    in_ZR = uStack_12c == 0xb;
    if ((bool)in_ZR) {
      iVar12 = *(int *)(param_3 + 0xb);
      iVar2 = iVar12 + -1;
      in_ZR = iVar2 == 0;
      *(int *)(param_3 + 0xb) = iVar2;
      if (iVar12 < 1) break;
      unaff_x23 = 0;
      *(int *)((long)param_3 + 0x5c) = *(int *)((long)param_3 + 0x5c) + 1;
      uStack_f8 = 0;
      unaff_x26 = *param_1;
      uVar1 = *(uint *)((long)param_1[2] + 0x24);
      ppppbStack_108 = (byte ****)0x0;
      ppppbStack_100 = (byte ****)0x0;
      pppppbVar5 = (byte *****)ppppbStack_128;
      unaff_x21 = (byte *****)0x0;
      ppppbStack_f0 = (byte ****)(byte *****)ppppbStack_128;
LAB_10bd37e60:
      do {
        func_0x00010bd3cad0();
        func_0x000107c302ac();
        unaff_x22 = (byte *****)ppppbStack_f0;
        if (((ulong)pppppbVar5 & 1) != 0) goto LAB_10bd38128;
        pppppbVar5 = (byte *****)((long)ppppbStack_f0 + 1);
        uStack_10c = (uint)*(byte *)ppppbStack_f0;
        iVar12 = (int)unaff_x23;
        if (uStack_10c == 0x1a) {
          if (iVar12 == 1) {
            ppppbVar4 = param_1[1];
            ppppbStack_f0 = (byte ****)pppppbVar5;
            FUN_10bd25980(ppppbVar4,unaff_x21);
            if ((int)ppppbVar4 == 0) {
              param_6 = (byte *****)0x0;
            }
            else {
              param_6 = (byte *****)param_3[0xc];
              if (param_6 == (byte *****)0x0) {
                param_6 = (byte *****)param_1[2];
                FUN_10bd20c44(param_6,unaff_x21);
              }
              else {
                FUN_10bcedf04(param_6,param_1[1],unaff_x21);
              }
            }
            pppppbVar5 = (byte *****)*param_1;
            param_4 = (byte *****)((long)unaff_x21 << 3 | 2);
            pppppbVar7 = param_3;
            FUN_10bd381d8();
            unaff_x23 = 3;
            param_2 = (byte *****)ppppbStack_f0;
          }
          else {
            if (iVar12 == 0) {
              pppppbVar11 = &ppppbStack_f0;
              ppppbStack_f0 = (byte ****)pppppbVar5;
              func_0x000107c30264();
              param_2 = (byte *****)ppppbStack_f0;
              if ((byte *****)ppppbStack_f0 == (byte *****)0x0) break;
              param_4 = &ppppbStack_108;
              pppppbVar5 = param_3;
              func_0x000107c30268();
              param_2 = (byte *****)ppppbStack_f0;
              pppppbVar7 = pppppbVar11;
              ppppbStack_f0 = (byte ****)pppppbVar5;
              if (pppppbVar5 == (byte *****)0x0) break;
              unaff_x23 = 2;
              goto LAB_10bd37e60;
            }
            pppppbVar11 = &ppppbStack_f0;
            ppppbStack_f0 = (byte ****)pppppbVar5;
            func_0x000107c30264();
            param_2 = (byte *****)ppppbStack_f0;
            if ((byte *****)ppppbStack_f0 == (byte *****)0x0) break;
            pppppbVar5 = param_3;
            func_0x00010b4d334c();
            param_2 = (byte *****)ppppbStack_f0;
            pppppbVar7 = pppppbVar11;
          }
        }
        else {
          if (*(byte *)ppppbStack_f0 == 0x10) {
            param_2 = (byte *****)auStack_118;
            ppppbStack_f0 = (byte ****)pppppbVar5;
            func_0x00010b4c39d0();
            ppppbStack_f0 = (byte ****)pppppbVar5;
            if ((pppppbVar5 == (byte *****)0x0) ||
               (pppppbVar11 = (byte *****)(ulong)auStack_118[0], auStack_118[0] == 0)) break;
            if (iVar12 == 0) {
              unaff_x23 = 1;
              unaff_x21 = pppppbVar11;
            }
            else if (iVar12 == 2) {
              ppppbVar4 = param_3[0xc];
              if (ppppbVar4 == (byte ****)0x0) {
                ppppbVar4 = param_1[2];
                FUN_10bd20c44(ppppbVar4,pppppbVar11);
              }
              else {
                FUN_10bcedf04(ppppbVar4,param_1[1],pppppbVar11);
              }
              if ((ppppbVar4 == (byte ****)0x0) ||
                 (ppppbVar6 = ppppbVar4, func_0x00010bd3cd90(), ppppbVar6 == (byte ****)0x0)) {
                pppppbVar7 = (byte *****)ppppbStack_100;
                param_2 = (byte *****)ppppbStack_108;
                if (-1 < (long)uStack_f8) {
                  pppppbVar7 = (byte *****)(uStack_f8 >> 0x38);
                  param_2 = &ppppbStack_108;
                }
                uVar10 = *(ulong *)((long)unaff_x26 + (ulong)uVar1);
                if ((uVar10 & 1) == 0) {
                  param_4 = (byte *****)((long)unaff_x26 + (ulong)uVar1);
                  func_0x00010bd2b26c();
                }
                else {
                  param_4 = (byte *****)((uVar10 & 0xfffffffffffffffe) + 8);
                }
                pppppbVar5 = pppppbVar11;
                FUN_10bd1a534();
              }
              else {
                unaff_x21 = (byte *****)param_1[2];
                if ((*(byte *)((long)ppppbVar4 + 1) >> 5 & 1) == 0) {
                  FUN_10bd2002c(unaff_x21,*param_1,ppppbVar4);
                }
                else {
                  FUN_10bd20468(unaff_x21,*param_1,ppppbVar4,param_3[0xd]);
                }
                param_4 = &ppppbStack_108;
                func_0x00010b4c3a9c(apppbStack_e8,param_3,&ppppbStack_120);
                pppppbVar7 = (byte *****)apppbStack_e8;
                pppppbVar5 = unaff_x21;
                param_2 = (byte *****)ppppbStack_120;
                func_0x000107c3032c();
                if ((pppppbVar5 == (byte *****)0x0) || (iStack_98 != 0)) break;
              }
              unaff_x23 = 3;
              unaff_x21 = pppppbVar11;
            }
            goto LAB_10bd37e60;
          }
          param_2 = (byte *****)&uStack_10c;
          ppppbVar4 = ppppbStack_f0;
          ppppbStack_f0 = (byte ****)pppppbVar5;
          func_0x00010bd3ce0c();
          pppppbVar5 = (byte *****)(ulong)uStack_10c;
          if ((uStack_10c == 0) || ((uStack_10c & 7) == 4)) {
            *(uint *)(param_3 + 10) = uStack_10c - 1;
            unaff_x22 = (byte *****)ppppbStack_f0;
            goto LAB_10bd38128;
          }
          param_2 = (byte *****)0x0;
          param_4 = param_3;
          func_0x00010b4d2404();
          pppppbVar7 = (byte *****)ppppbStack_f0;
        }
        ppppbStack_f0 = (byte ****)pppppbVar5;
      } while (pppppbVar5 != (byte *****)0x0);
      unaff_x22 = (byte *****)0x0;
LAB_10bd38128:
      pppppbVar5 = (byte *****)0x0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      param_3[0xb] = (byte ****)
                     CONCAT44((int)((ulong)param_3[0xb] >> 0x20) + -1,(int)param_3[0xb] + 1);
      iVar12 = *(int *)(param_3 + 10);
      *(undefined4 *)(param_3 + 10) = 0;
      in_ZR = iVar12 == 0xb;
      if (!(bool)in_ZR) break;
    }
    else {
      unaff_x21 = (byte *****)(ulong)(uStack_12c >> 3);
      ppppbVar4 = param_1[1];
      FUN_10bd25980(ppppbVar4,unaff_x21);
      if ((int)ppppbVar4 == 0) {
        param_6 = (byte *****)0x0;
      }
      else {
        param_6 = (byte *****)param_3[0xc];
        if (param_6 == (byte *****)0x0) {
          param_6 = (byte *****)param_1[2];
          FUN_10bd20c44(param_6,unaff_x21);
        }
        else {
          FUN_10bcedf04(param_6,param_1[1],unaff_x21);
        }
      }
      pppppbVar5 = (byte *****)*param_1;
      param_4 = (byte *****)(ulong)uStack_12c;
      pppppbVar7 = param_3;
      FUN_10bd381d8();
      param_2 = (byte *****)ppppbStack_128;
      unaff_x22 = pppppbVar5;
    }
    ppppbStack_128 = (byte ****)unaff_x22;
  } while (unaff_x22 != (byte *****)0x0);
  pppppbVar11 = (byte *****)0x0;
LAB_10bd3816c:
  func_0x00010bd3c884(uStack_78);
  if ((bool)in_ZR) {
    return pppppbVar11;
  }
  ___stack_chk_fail();
  pppppbVar5 = &ppppbStack_108;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bd3ca34();
  uStack_178 = 2;
  pcStack_138 = FUN_10bd381d8;
  pppbStack_180 = (byte ***)unaff_x26;
  ppppbStack_170 = (byte ****)&ppppbStack_108;
  uStack_168 = unaff_x23;
  ppppbStack_160 = (byte ****)unaff_x22;
  ppppbStack_158 = (byte ****)unaff_x21;
  ppppbStack_150 = (byte ****)param_1;
  ppppbStack_148 = (byte ****)pppppbVar11;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bd3c95c();
  if (param_6 == (byte *****)0x0) {
LAB_10bd382dc:
    func_0x00010bd3c96c();
    func_0x00010bd1b8b8();
    func_0x00010bd3c86c();
    if ((bool)in_ZR) {
      func_0x00010bd3cb2c(param_4,pppppbVar5,param_2,pppppbVar7);
      FUN_10bd36df8();
      return param_4;
    }
  }
  else {
    uVar1 = (uint)param_4 & 7;
    pppppbVar5 = param_6;
    func_0x00010787827c();
    uVar3 = *(uint *)(&UNK_10e5b4b0c + ((ulong)pppppbVar5 & 0xffffffff) * 4) <= uVar1;
    in_ZR = uVar1 == *(uint *)(&UNK_10e5b4b0c + ((ulong)pppppbVar5 & 0xffffffff) * 4);
    if (!(bool)in_ZR) {
      FUN_10bcf1590();
      uVar3 = 1 < uVar1;
      in_ZR = uVar1 == 2;
      pppppbVar5 = param_6;
      if ((!(bool)in_ZR) || ((int)param_6 == 0)) goto LAB_10bd382dc;
      func_0x00010bd3ce60();
      func_0x00010bd3cb20();
      pppppbVar5 = param_6;
      if (!(bool)uVar3 || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bd382b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(ushort *)(&UNK_10e60c17a + extraout_x8_01 * 2) * 4 + 0x10bd382b4))();
        return param_6;
      }
    }
    func_0x00010bd3ce60();
    func_0x00010bd3cb20();
    if (!(bool)uVar3 || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bd38260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e60c19e)[extraout_x8_00] * 4 + 0x10bd38264))();
      return pppppbVar5;
    }
    func_0x00010bd3c86c();
    if ((bool)in_ZR) {
      pppppbVar7 = (byte *****)0x0;
      func_0x00010bd3cb2c(0,pcStack_138);
      return pppppbVar7;
    }
  }
  ___stack_chk_fail();
  pppppbVar7 = (byte *****)0x367;
  FUN_10bdb2a00(auStack_1f0,&UNK_10f83683c,0x367);
  FUN_10bce4100(auStack_1f0,&UNK_10f836872);
  puVar8 = auStack_1f0;
  func_0x00010ae6c700();
  func_0x00010bd3cda0();
  func_0x00010bd3ca34();
  puVar9 = puVar8;
  FUN_10bd2b4f4();
  FUN_10bd2b4f4(puVar8);
  puStack_298 = (undefined8 *)0x0;
  if (*(char *)(*(long *)(puVar9 + 0x20) + 0x53) == '\x01') {
    for (lVar13 = 0; lVar13 < *(int *)(puVar9 + 4); lVar13 = lVar13 + 1) {
      func_0x00010bd3ce84();
    }
  }
  else {
    func_0x00010bd3c96c();
    FUN_10bd1d54c();
  }
  for (; puStack_298 != (undefined8 *)0x0; puStack_298 = puStack_298 + 1) {
    func_0x00010bd3c978(*puStack_298);
    FUN_10bd38cf0();
  }
  if (*(char *)(*(long *)(puVar9 + 0x20) + 0x50) == '\x01') {
    func_0x00010bd3c96c();
    FUN_10bd1b89c();
    func_0x00010bd3cc90();
    FUN_10bd379b8();
  }
  else {
    func_0x00010bd3c96c();
    FUN_10bd1b89c();
    func_0x00010bd3cc90();
    FUN_10bd377f0();
  }
  func_0x00010bd3ca28();
  return pppppbVar7;
}



/* Entry: 10bd381d8; end: 10bd38bd3;  */

ulong FUN_10bd381d8(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                   undefined8 param_5,ulong param_6)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined8 unaff_x30;
  undefined8 *puStack_168;
  undefined1 auStack_c0 [112];
  
  func_0x00010bd3c95c();
  if (param_6 == 0) {
LAB_10bd382dc:
    func_0x00010bd3c96c();
    func_0x00010bd1b8b8();
    func_0x00010bd3c86c();
    if ((bool)in_ZR) {
      func_0x00010bd3cb2c(param_4,param_1,param_2,param_3);
      FUN_10bd36df8();
      return param_4;
    }
  }
  else {
    uVar1 = (uint)param_4 & 7;
    uVar3 = param_6;
    func_0x00010787827c();
    uVar2 = *(uint *)(&UNK_10e5b4b0c + (uVar3 & 0xffffffff) * 4) <= uVar1;
    in_ZR = uVar1 == *(uint *)(&UNK_10e5b4b0c + (uVar3 & 0xffffffff) * 4);
    if (!(bool)in_ZR) {
      FUN_10bcf1590();
      uVar2 = 1 < uVar1;
      in_ZR = uVar1 == 2;
      param_1 = param_6;
      if ((!(bool)in_ZR) || ((int)param_6 == 0)) goto LAB_10bd382dc;
      func_0x00010bd3ce60();
      func_0x00010bd3cb20();
      uVar3 = param_6;
      if (!(bool)uVar2 || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bd382b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(ushort *)(&UNK_10e60c17a + extraout_x8_00 * 2) * 4 + 0x10bd382b4))();
        return param_6;
      }
    }
    func_0x00010bd3ce60();
    func_0x00010bd3cb20();
    if (!(bool)uVar2 || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bd38260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e60c19e)[extraout_x8] * 4 + 0x10bd38264))();
      return uVar3;
    }
    func_0x00010bd3c86c();
    if ((bool)in_ZR) {
      uVar3 = 0;
      func_0x00010bd3cb2c(0,unaff_x30);
      return uVar3;
    }
  }
  ___stack_chk_fail();
  uVar3 = 0x367;
  FUN_10bdb2a00(auStack_c0,&UNK_10f83683c,0x367);
  FUN_10bce4100(auStack_c0,&UNK_10f836872);
  puVar4 = auStack_c0;
  func_0x00010ae6c700();
  func_0x00010bd3cda0();
  func_0x00010bd3ca34();
  puVar5 = puVar4;
  FUN_10bd2b4f4();
  FUN_10bd2b4f4(puVar4);
  puStack_168 = (undefined8 *)0x0;
  if (*(char *)(*(long *)(puVar5 + 0x20) + 0x53) == '\x01') {
    for (lVar6 = 0; lVar6 < *(int *)(puVar5 + 4); lVar6 = lVar6 + 1) {
      func_0x00010bd3ce84();
    }
  }
  else {
    func_0x00010bd3c96c();
    FUN_10bd1d54c();
  }
  for (; puStack_168 != (undefined8 *)0x0; puStack_168 = puStack_168 + 1) {
    func_0x00010bd3c978(*puStack_168);
    FUN_10bd38cf0();
  }
  if (*(char *)(*(long *)(puVar5 + 0x20) + 0x50) == '\x01') {
    func_0x00010bd3c96c();
    FUN_10bd1b89c();
    func_0x00010bd3cc90();
    FUN_10bd379b8();
  }
  else {
    func_0x00010bd3c96c();
    FUN_10bd1b89c();
    func_0x00010bd3cc90();
    FUN_10bd377f0();
  }
  func_0x00010bd3ca28();
  return uVar3;
}



/* Entry: 10bd38bd4; end: 10bd38cef;  */

undefined8 FUN_10bd38bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puStack_68;
  
  lVar1 = param_1;
  FUN_10bd2b4f4();
  FUN_10bd2b4f4(param_1);
  puStack_68 = (undefined8 *)0x0;
  if (*(char *)(*(long *)(lVar1 + 0x20) + 0x53) == '\x01') {
    for (lVar2 = 0; lVar2 < *(int *)(lVar1 + 4); lVar2 = lVar2 + 1) {
      func_0x00010bd3ce84();
    }
  }
  else {
    func_0x00010bd3c96c();
    FUN_10bd1d54c();
  }
  for (; puStack_68 != (undefined8 *)0x0; puStack_68 = puStack_68 + 1) {
    func_0x00010bd3c978(*puStack_68);
    FUN_10bd38cf0();
  }
  if (*(char *)(*(long *)(lVar1 + 0x20) + 0x50) == '\x01') {
    func_0x00010bd3c96c();
    FUN_10bd1b89c();
    func_0x00010bd3cc90();
    FUN_10bd379b8();
  }
  else {
    func_0x00010bd3c96c();
    FUN_10bd1b89c();
    func_0x00010bd3cc90();
    FUN_10bd377f0();
  }
  func_0x00010bd3ca28();
  return param_3;
}



/* Entry: 10bd38cf0; end: 10bd3a18b;  */

/* WARNING: Possible PIC construction at 0x00010bd38d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd3a208: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd38d94) */
/* WARNING: Removing unreachable block (ram,0x00010bd38de8) */
/* WARNING: Removing unreachable block (ram,0x00010bd3a20c) */
/* WARNING: Removing unreachable block (ram,0x00010bd3a3a8) */
/* WARNING: Removing unreachable block (ram,0x00010bd3a60c) */
/* WARNING: Removing unreachable block (ram,0x00010bd3a3c0) */
/* WARNING: Removing unreachable block (ram,0x00010bd3a230) */

byte ******
FUN_10bd38cf0(byte ******param_1,byte ******param_2,byte ******param_3,byte ******param_4)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  byte ******ppppppbVar6;
  byte ******ppppppbVar7;
  byte ******ppppppbVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  byte ******ppppppbVar16;
  byte ******ppppppbVar17;
  byte *****pppppbVar18;
  byte *****pppppbVar19;
  byte ******ppppppbVar20;
  byte *****pppppbStack_170;
  byte *****pppppbStack_168;
  byte *****apppppbStack_160 [2];
  byte *****pppppbStack_150;
  byte *****pppppbStack_148;
  byte *****pppppbStack_140;
  undefined1 uStack_138;
  byte *****pppppbStack_130;
  byte *****pppppbStack_128;
  byte *****pppppbStack_120;
  byte *****pppppbStack_118;
  byte *****pppppbStack_110;
  byte *****pppppbStack_108;
  byte *****pppppbStack_100;
  byte *****pppppbStack_d0;
  byte *****pppppbStack_c8;
  byte *****pppppbStack_c0;
  byte *****pppppbStack_b8;
  byte *****apppppbStack_b0 [4];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  
  ppppppbVar8 = param_2;
  func_0x00010bd3c95c();
  uStack_80 = extraout_x8;
  func_0x00010bd3cbf8();
  if ((*(byte *)((long)param_1 + 1) >> 3 & 1) != 0) {
    in_CY = *(char *)(param_1[4][4] + 10) != '\0';
    in_ZR = 0;
    if (*(char *)(param_1[4][4] + 10) == '\x01') {
      ppppppbVar6 = param_1;
      func_0x00010b91adc8();
      in_CY = 9 < (uint)ppppppbVar6;
      in_ZR = (uint)ppppppbVar6 == 10;
      if (((bool)in_ZR) && ((*(byte *)((long)param_1 + 1) >> 5 & 1) == 0)) {
        FUN_10bd2b4f4();
        func_0x00010bd3cc84();
        func_0x000107c28094();
        func_0x00010bd3ce28();
        uVar12 = 0x10;
        goto code_r0x0001001a59d8;
      }
    }
  }
  ppppppbVar6 = param_1;
  func_0x00010b91c030();
  uVar3 = in_ZR;
  if ((int)ppppppbVar6 == 0) {
LAB_10bd38e40:
    uVar12 = (uint)ppppppbVar6;
    if ((*(byte *)((long)param_1 + 1) >> 5 & 1) == 0) {
      if ((*(byte *)((long)param_1[4][4] + 0x53) & 1) == 0) {
        func_0x00010bd3c8bc();
        FUN_10bd1d188();
      }
      else {
        uVar12 = 1;
      }
      pppppbStack_150 = (byte *****)0x0;
      pppppbStack_148 = (byte *****)0x0;
      pppppbStack_140 = (byte *****)0x0;
    }
    else {
      func_0x00010bd3c8bc();
      FUN_10bd1d250();
      uVar12 = (uint)ppppppbVar6;
      pppppbStack_150 = (byte *****)0x0;
      pppppbStack_148 = (byte *****)0x0;
      pppppbStack_140 = (byte *****)0x0;
      in_CY = 1 < uVar12;
      uVar3 = uVar12 == 2;
      if ((1 < (int)uVar12) && (ppppppbVar7 = param_1, func_0x00010b91c030(), (int)ppppppbVar7 != 0)
         ) {
        in_CY = *(byte *)((long)param_4 + 0x3a) != 0;
        uVar3 = 0;
        if (*(byte *)((long)param_4 + 0x3a) == 1) {
          pppppbStack_170 = (byte *****)0x0;
          pppppbStack_168 = (byte *****)0x0;
          apppppbStack_160[0] = (byte *****)0x0;
          ppppppbVar7 = apppppbStack_160;
          uVar9 = (ulong)ppppppbVar6 & 0xffffffff;
          apppppbStack_b0[0] = (byte *****)ppppppbVar7;
          FUN_10bd34c34();
          pppppbStack_b8 = (byte *****)(ppppppbVar7 + uVar9);
          ppppppbVar17 = (byte ******)
                         ((long)ppppppbVar7 - ((long)pppppbStack_168 - (long)pppppbStack_170));
          ppppppbVar6 = (byte ******)pppppbStack_170;
          pppppbStack_d0 = (byte *****)ppppppbVar7;
          pppppbStack_c8 = (byte *****)ppppppbVar7;
          pppppbStack_c0 = (byte *****)ppppppbVar7;
          _memcpy(ppppppbVar17);
          pppppbVar18 = apppppbStack_160[0];
          apppppbStack_160[0] = pppppbStack_b8;
          pppppbStack_168 = pppppbStack_c0;
          pppppbStack_c0 = pppppbStack_170;
          pppppbStack_b8 = pppppbVar18;
          pppppbStack_d0 = pppppbStack_170;
          pppppbStack_c8 = pppppbStack_170;
          pppppbStack_170 = (byte *****)ppppppbVar17;
          FUN_10bd34c74(&pppppbStack_d0);
          FUN_10bd2b4f4(param_2);
          ppppppbVar7 = ppppppbVar6;
          FUN_10bd210a8(ppppppbVar6,param_2,param_1,10,0);
          ppppppbVar17 = ppppppbVar6;
          FUN_10bd2b968(ppppppbVar6,param_1);
          ppppppbVar20 = (byte ******)ppppppbVar6[0xb];
          ppppppbVar6 = ppppppbVar17;
          func_0x00010bd3cd90();
          (*(code *)(*ppppppbVar20)[2])(ppppppbVar20,ppppppbVar6);
          (*(code *)(*ppppppbVar20)[2])();
          ppppppbVar6 = ppppppbVar20;
          pppppbStack_d0 = (byte *****)ppppppbVar7;
          pppppbStack_c8 = (byte *****)ppppppbVar17;
          func_0x00010bd3cd70((*ppppppbVar17)[10]);
          pppppbStack_b8 = (byte *****)ppppppbVar20;
          while( true ) {
            ppppppbVar20 = ppppppbVar6;
            pppppbStack_120 = (byte *****)ppppppbVar7;
            pppppbStack_118 = (byte *****)ppppppbVar17;
            func_0x00010bd3cd70((*ppppppbVar17)[0xb]);
            pppppbStack_108 = (byte *****)0x0;
            pppppbStack_110 = (byte *****)ppppppbVar20;
            func_0x00010bd3cc9c((*ppppppbVar17)[0xe]);
            iVar5 = (int)ppppppbVar20;
            (*extraout_x8_00)();
            ppppppbVar20 = &pppppbStack_120;
            FUN_10bd3bea0();
            if (iVar5 != 0) break;
            func_0x00010bd3cc9c((*ppppppbVar17)[0x10]);
            (*extraout_x8_01)();
            ppppppbVar6 = &pppppbStack_170;
            pppppbStack_120 = (byte *****)ppppppbVar20;
            FUN_10bd34a88(ppppppbVar6,&pppppbStack_120);
            func_0x00010bd3cc9c((*ppppppbVar17)[0xd]);
            (*extraout_x8_02)();
          }
          ppppppbVar7 = &pppppbStack_d0;
          pppppbStack_c0 = (byte *****)ppppppbVar6;
          FUN_10bd3bea0();
          func_0x00010bd3cd90();
          pppppbVar19 = pppppbStack_168;
          pppppbVar18 = pppppbStack_170;
          pppppbStack_128 = ppppppbVar7[7];
          uVar9 = (long)pppppbStack_168 - (long)pppppbStack_170 >> 3;
          pppppbStack_d0 = (byte *****)0x0;
          pppppbStack_c8 = (byte *****)0x0;
          in_CY = 0x80 < uVar9;
          uVar3 = uVar9 == 0x81;
          if (0x80 < (long)uVar9) {
            FUN_10bd34f70(&pppppbStack_120,uVar9);
            FUN_10bd34fc8(&pppppbStack_d0,&pppppbStack_120);
            FUN_10bd3520c(&pppppbStack_120);
          }
          FUN_10bd3bef0(pppppbVar18,pppppbVar19,&pppppbStack_128,uVar9,pppppbStack_d0,pppppbStack_c8
                       );
          FUN_10bd3520c(&pppppbStack_d0);
          if ((byte ******)pppppbStack_150 != (byte ******)0x0) {
            pppppbStack_148 = pppppbStack_150;
            __ZdlPv();
          }
          pppppbStack_148 = pppppbStack_168;
          pppppbStack_150 = pppppbStack_170;
          pppppbStack_140 = apppppbStack_160[0];
          pppppbStack_168 = (byte *****)0x0;
          apppppbStack_160[0] = (byte *****)0x0;
          pppppbStack_170 = (byte *****)0x0;
          FUN_10bd34cc4(&pppppbStack_170);
        }
      }
    }
    FUN_10bcf1560();
    if ((int)param_1 == 0) {
      uVar15 = 0;
      pppppbStack_c8 = (byte *****)&pppppbStack_150;
      uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
      pppppbStack_d0 = (byte *****)param_2;
      pppppbStack_c0 = (byte *****)ppppppbVar8;
      while( true ) {
        uVar2 = uVar12 <= uVar15;
        uVar4 = uVar15 == uVar12;
        uVar3 = 1;
        if ((bool)uVar4) break;
        func_0x00010bd3c8cc();
        func_0x00010bd3ce00();
        func_0x00010bd3cb20();
        if (!(bool)uVar2 || (bool)uVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bd392e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10e60c1b0)[extraout_x8_04] * 4 + 0x10bd392ec))();
          return param_1;
        }
        uVar15 = uVar15 + 1;
      }
LAB_10bd39efc:
      FUN_10bd34cc4(&pppppbStack_150);
      goto LAB_10bd39f04;
    }
    if (uVar12 == 0) goto LAB_10bd39efc;
    func_0x00010bd3c8cc();
    func_0x00010bd3ce00();
    func_0x00010bd3cb20();
    if (!(bool)in_CY || (bool)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bd39270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(&UNK_10e60c1c2 + extraout_x8_03 * 2) * 4 + 0x10bd39274))();
      return param_1;
    }
  }
  else {
    func_0x00010bd3c8bc();
    func_0x00010bd21278();
    if (((ulong)ppppppbVar6[1] & 1) != 0) {
      func_0x00010bd3ccfc();
      uVar3 = 1;
      if ((bool)in_ZR) goto LAB_10bd38e40;
    }
    if (*(byte *)((long)param_4 + 0x3a) == 1) {
      pppppbStack_170 = (byte *****)0x0;
      pppppbStack_168 = (byte *****)0x0;
      apppppbStack_160[0] = (byte *****)0x0;
      func_0x00010bd3c8bc(&pppppbStack_d0);
      FUN_10bd20ba4();
      ppppppbVar6 = ppppppbVar8;
      ppppppbVar7 = param_4;
      while( true ) {
        FUN_10bd20bf4(&pppppbStack_120,ppppppbVar8,param_2,param_1);
        func_0x00010bd3cc40();
        pppppbVar18 = pppppbStack_168;
        if (ppppppbVar6 == ppppppbVar7) break;
        if (pppppbStack_168 < apppppbStack_160[0]) {
          FUN_10bd2ae08(pppppbStack_168,apppppbStack_b0);
          ppppppbVar17 = (byte ******)(pppppbVar18 + 4);
        }
        else {
          lVar14 = (long)pppppbStack_168 - (long)pppppbStack_170;
          uVar9 = (lVar14 >> 5) + 1;
          if (uVar9 >> 0x3b != 0) {
            func_0x00010bd3b168();
LAB_10bd39f44:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd39f48);
            (*pcVar1)();
          }
          uVar13 = (long)apppppbStack_160[0] - (long)pppppbStack_170 >> 4;
          if (uVar13 <= uVar9) {
            uVar13 = uVar9;
          }
          if (0x7fffffffffffffdf < (ulong)((long)apppppbStack_160[0] - (long)pppppbStack_170)) {
            uVar13 = 0x7ffffffffffffff;
          }
          pppppbStack_100 = (byte *****)apppppbStack_160;
          if (uVar13 == 0) {
            pppppbVar18 = (byte *****)0x0;
          }
          else {
            if (uVar13 >> 0x3b != 0) {
              func_0x000104bd35f4();
              goto LAB_10bd39f44;
            }
            pppppbVar18 = (byte *****)(uVar13 << 5);
            __Znwm();
          }
          lVar14 = (long)pppppbVar18 + lVar14;
          pppppbStack_120 = pppppbVar18;
          pppppbStack_118 = (byte *****)lVar14;
          pppppbStack_110 = (byte *****)lVar14;
          pppppbStack_108 = pppppbVar18 + uVar13 * 4;
          FUN_10bd2ae08(lVar14,apppppbStack_b0);
          ppppppbVar7 = (byte ******)pppppbStack_168;
          ppppppbVar16 = (byte ******)pppppbStack_170;
          ppppppbVar17 = (byte ******)(lVar14 + 0x20);
          ppppppbVar6 = (byte ******)((long)pppppbStack_170 + (lVar14 - (long)pppppbStack_168));
          pppppbStack_148 = (byte *****)&pppppbStack_130;
          pppppbStack_140 = (byte *****)&pppppbStack_128;
          uStack_138 = 0;
          pppppbStack_128 = (byte *****)ppppppbVar6;
          pppppbStack_150 = (byte *****)apppppbStack_160;
          pppppbStack_130 = (byte *****)ppppppbVar6;
          pppppbStack_110 = (byte *****)ppppppbVar17;
          for (ppppppbVar20 = (byte ******)pppppbStack_170; ppppppbVar20 != ppppppbVar7;
              ppppppbVar20 = ppppppbVar20 + 4) {
            FUN_10bd2ae08(pppppbStack_128,ppppppbVar20);
            pppppbStack_128 = pppppbStack_128 + 4;
          }
          uStack_138 = 1;
          for (; ppppppbVar16 != ppppppbVar7; ppppppbVar16 = ppppppbVar16 + 4) {
            FUN_10bd22954(ppppppbVar16);
          }
          FUN_10bd3b17c(&pppppbStack_150);
          pppppbStack_110 = pppppbStack_170;
          pppppbStack_108 = apppppbStack_160[0];
          pppppbStack_120 = pppppbStack_170;
          pppppbStack_118 = pppppbStack_170;
          pppppbStack_170 = (byte *****)ppppppbVar6;
          pppppbStack_168 = (byte *****)ppppppbVar17;
          apppppbStack_160[0] = pppppbVar18 + uVar13 * 4;
          func_0x00010bd3b1c0(&pppppbStack_120);
        }
        pppppbStack_168 = (byte *****)ppppppbVar17;
        FUN_10bd21e18(&pppppbStack_d0);
      }
      func_0x00010bd3cb78(&pppppbStack_d0);
      ppppppbVar8 = (byte ******)pppppbStack_170;
      if (pppppbStack_170 != pppppbStack_168) {
        FUN_10bd3b208(pppppbStack_170,pppppbStack_168,
                      LZCOUNT((long)pppppbStack_168 - (long)pppppbStack_170 >> 5) << 1 ^ 0x7e,1);
        ppppppbVar8 = (byte ******)pppppbStack_170;
      }
      for (; uVar3 = ppppppbVar8 == (byte ******)pppppbStack_168, !(bool)uVar3;
          ppppppbVar8 = ppppppbVar8 + 4) {
        pppppbStack_d0 = (byte *****)0x0;
        pppppbStack_c8 = (byte *****)((ulong)pppppbStack_c8 & 0xffffffff00000000);
        func_0x00010bd3c8bc();
        FUN_10bd20afc();
        ppppppbVar6 = param_1;
        FUN_10bd3a18c(param_1,ppppppbVar8,&pppppbStack_d0,param_3,param_4);
        param_3 = ppppppbVar6;
      }
      FUN_10bd3be58(&pppppbStack_170);
    }
    else {
      func_0x00010bd3c8bc(&pppppbStack_d0);
      FUN_10bd20ba4();
      while( true ) {
        func_0x00010bd3c8bc(&pppppbStack_120);
        FUN_10bd20bf4();
        func_0x00010bd3cc40();
        uVar3 = ppppppbVar8 == param_4;
        if ((bool)uVar3) break;
        FUN_10bd3a18c(param_1,apppppbStack_b0,auStack_90,param_3,param_4);
        func_0x00010bd3cef8();
        FUN_10bd21e18();
      }
      FUN_10bd22954(apppppbStack_b0);
    }
LAB_10bd39f04:
    func_0x00010bd3c884(uStack_80);
    if ((bool)uVar3) {
      return param_3;
    }
    ___stack_chk_fail();
  }
  puVar10 = &UNK_10f83683c;
  uVar11 = 0x535;
  FUN_10bdb2a00(&pppppbStack_d0,&UNK_10f83683c,0x535);
  FUN_10bd3ac08(&pppppbStack_d0);
  func_0x00010ae6c700();
  ppppppbVar8 = &pppppbStack_150;
  FUN_10bd34cc4();
  func_0x00010bd3ca34();
  ppppppbVar6 = ppppppbVar8;
  FUN_10bcee28c();
  pppppbVar18 = ppppppbVar6[7];
  ppppppbVar6 = ppppppbVar8;
  FUN_10bcee28c();
  pppppbVar19 = ppppppbVar6[7];
  FUN_10bd3af28(pppppbVar18,puVar10);
  param_2 = (byte ******)(pppppbVar19 + 0xb);
  FUN_10bd3b010(param_2,uVar11);
  func_0x00010bd3caf8();
  uVar12 = *(int *)((long)ppppppbVar8 + 4) << 3 | 2;
code_r0x0001001a59d8:
  while( true ) {
    if (uVar12 < 0x80) break;
    *(byte *)param_2 = (byte)uVar12 | 0x80;
    uVar12 = uVar12 >> 7;
    param_2 = (byte ******)((long)param_2 + 1);
  }
  *(byte *)param_2 = (byte)uVar12;
  return (byte ******)((long)param_2 + 1);
}



/* Entry: 10bd3a18c; end: 10bd3a66f;  */

void FUN_10bd3a18c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_x30;
  
  lVar2 = param_1;
  FUN_10bcee28c();
  uVar5 = *(undefined8 *)(lVar2 + 0x38);
  lVar2 = param_1;
  FUN_10bcee28c();
  lVar6 = *(long *)(lVar2 + 0x38);
  uVar3 = uVar5;
  FUN_10bd3af28(uVar5,param_2);
  lVar2 = lVar6 + 0x58;
  FUN_10bd3b010(lVar2,param_3);
  iVar1 = (int)lVar2;
  func_0x00010bd3caf8();
  uVar4 = (ulong)(*(int *)(param_1 + 4) << 3 | 2);
  func_0x000107c280a8(uVar4,lVar2);
  func_0x000107c280a8((int)uVar3 + iVar1 + 2,uVar4);
  func_0x00010bd3ca0c();
  func_0x00010787827c(uVar5);
  func_0x00010bd3cb20();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bd3a244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e60c1e6)[extraout_x8] * 4 + 0x10bd3a248))();
    return;
  }
  func_0x00010bd3caf8();
  func_0x00010787827c(lVar6 + 0x58);
  func_0x00010bd3cb20();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bd3a3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e60c1f8)[extraout_x8_00] * 4 + 0x10bd3a3d8))();
    return;
  }
  func_0x00010bd3cb04(uVar5,unaff_x30);
  return;
}



/* Entry: 10bd3a670; end: 10bd3abe3;  */

int * FUN_10bd3a670(int *param_1,long *param_2)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int *piVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  int *piVar6;
  long lVar7;
  long lVar8;
  undefined8 unaff_x30;
  long alStack_108 [2];
  undefined4 uStack_f8;
  long alStack_b8 [4];
  int aiStack_98 [8];
  long alStack_78 [2];
  undefined8 uStack_68;
  
  func_0x00010bd3c95c();
  uStack_68 = extraout_x8;
  func_0x00010bd3cbf8();
  piVar6 = param_1;
  func_0x00010b91c030();
  piVar2 = piVar6;
  if ((int)piVar6 != 0) {
    func_0x00010bd3c8ac();
    func_0x00010bd21278();
    if (((*(ulong *)(piVar6 + 2) & 1) == 0) ||
       (piVar2 = piVar6, func_0x00010bd3ccfc(), !(bool)in_ZR)) {
      func_0x00010bd3c978(alStack_b8);
      FUN_10bd22860();
      plVar3 = alStack_108;
      func_0x00010bd3c978();
      FUN_10bd22860();
      func_0x00010bd3ce50();
      lVar7 = plVar3[7];
      func_0x00010bd3ce50();
      lVar8 = plVar3[7];
      param_2 = alStack_b8;
      FUN_10bd28990(piVar6);
      piVar6 = (int *)0x0;
      alStack_108[0] = 0;
      alStack_108[1] = 0;
      uStack_f8 = 0;
      while (in_ZR = alStack_b8[0] == alStack_108[0], !(bool)in_ZR) {
        lVar4 = lVar7;
        FUN_10bd3af28(lVar7,aiStack_98);
        lVar5 = lVar8 + 0x58;
        param_2 = alStack_78;
        FUN_10bd3b010(lVar5);
        func_0x00010bd3cee4(lVar4 + lVar5 + 2);
        piVar6 = (int *)((long)piVar6 + extraout_x9 + extraout_x8_00);
        FUN_10bd21e18(alStack_b8);
      }
      func_0x00010bd3cb78(alStack_108);
      piVar2 = aiStack_98;
      FUN_10bd22954();
      goto LAB_10bd3ab78;
    }
  }
  if ((*(byte *)((long)param_1 + 1) >> 5 & 1) == 0) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x20) + 0x53) & 1) == 0) {
      func_0x00010bd3c8ac();
      FUN_10bd1d188();
    }
  }
  else {
    func_0x00010bd3c8ac();
    FUN_10bd1d250();
  }
  func_0x00010bd3ce60();
  func_0x00010bd3cb20();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bd3a7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e60c20a)[extraout_x8_01] * 4 + 0x10bd3a7d8))();
    return piVar2;
  }
  piVar6 = (int *)0x0;
LAB_10bd3ab78:
  func_0x00010bd3c884(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd3cb78(alStack_108);
    func_0x00010bd3cb78(alStack_b8);
    func_0x00010bd3ca34();
    piVar2[0] = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    iVar1 = (int)*param_2;
    if (iVar1 != 0) {
      func_0x00010598df1c(piVar2,0,iVar1);
      *piVar2 = iVar1;
      func_0x00010598e0b8(param_2[1],iVar1,*(undefined8 *)(piVar2 + 2));
    }
    return piVar2;
  }
  func_0x00010bd3cd0c(piVar6,unaff_x30);
  return piVar6;
}



/* Entry: 10bd3abe4; end: 10bd3ac07;  */

int * FUN_10bd3abe4(int *param_1,int *param_2)

{
  int iVar1;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = *param_2;
  if (iVar1 != 0) {
    func_0x00010598df1c(param_1,0,iVar1);
    *param_1 = iVar1;
    func_0x00010598e0b8(*(undefined8 *)(param_2 + 2),iVar1,*(undefined8 *)(param_1 + 2));
  }
  return param_1;
}



/* Entry: 10bd3ac08; end: 10bd3ac33;  */

undefined8 FUN_10bd3ac08(undefined8 param_1)

{
  func_0x00010ae6bd08(param_1,&UNK_10f83687e,0x12);
  return param_1;
}



/* Entry: 10bd3ac34; end: 10bd3ac7f;  */

/* WARNING: Possible PIC construction at 0x00010bd200d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd200e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd20104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd204c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd20108) */
/* WARNING: Removing unreachable block (ram,0x00010bd20110) */
/* WARNING: Removing unreachable block (ram,0x00010bd20118) */
/* WARNING: Removing unreachable block (ram,0x00010bd200e4) */
/* WARNING: Removing unreachable block (ram,0x00010bd200ec) */
/* WARNING: Removing unreachable block (ram,0x00010bd200f4) */
/* WARNING: Removing unreachable block (ram,0x00010bd200d8) */
/* WARNING: Removing unreachable block (ram,0x00010bd204cc) */
/* WARNING: Removing unreachable block (ram,0x00010bd204d4) */
/* WARNING: Removing unreachable block (ram,0x00010bd204e0) */
/* WARNING: Removing unreachable block (ram,0x00010bd204f0) */
/* WARNING: Removing unreachable block (ram,0x00010bd20534) */
/* WARNING: Removing unreachable block (ram,0x00010bd204f8) */
/* WARNING: Removing unreachable block (ram,0x00010bd20504) */
/* WARNING: Removing unreachable block (ram,0x00010bd2054c) */
/* WARNING: Removing unreachable block (ram,0x00010bd20554) */
/* WARNING: Removing unreachable block (ram,0x00010bd2055c) */
/* WARNING: Removing unreachable block (ram,0x00010bd20570) */

ulong * FUN_10bd3ac34(undefined8 *param_1,ulong *param_2,ulong *param_3,undefined8 param_4,
                     ulong param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined *puVar14;
  long lVar15;
  ulong *puVar16;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 *unaff_x21;
  ulong *puVar17;
  long *unaff_x22;
  ulong uVar18;
  ulong **unaff_x29;
  undefined8 unaff_x30;
  undefined1 *in_stack_00000010;
  undefined *in_stack_00000018;
  ulong uStack_c8;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong *puStack_50;
  ulong *puStack_48;
  
  if ((*(byte *)((long)param_2 + 1) >> 5 & 1) == 0) {
    puVar16 = (ulong *)param_1[2];
    puVar13 = (ulong *)0x0;
    puVar9 = puVar16;
    func_0x00010bd24c30(puVar16,*param_1);
    if ((bool)in_ZR) {
      func_0x00010bd24f7c();
      if ((bool)in_CY) {
        func_0x00010bd24f14();
        puVar17 = puVar13;
        goto LAB_10bd20014;
      }
      puVar17 = puVar13;
      func_0x00010bd24ce4();
      in_CY = 9 < (uint)puVar9;
      in_ZR = 0;
      if ((uint)puVar9 == 10) {
        if (puVar13 == (ulong *)0x0) {
          puVar13 = (ulong *)puVar16[0xb];
        }
        if ((*(byte *)((long)param_2 + 1) >> 3 & 1) != 0) {
          uVar12 = puVar16[5];
          uVar2 = *(undefined4 *)((long)param_2 + 4);
          func_0x00010bd252d0();
          puVar1 = (undefined8 *)((long)unaff_x21 + (ulong)(uint)uVar12);
          puVar8 = puVar1;
          func_0x00010b4bf3a0(puVar1,uVar2);
          if ((puVar8 != (undefined8 *)0x0) && ((*(byte *)((long)puVar8 + 10) & 1) == 0)) {
            puVar16 = (ulong *)*puVar8;
            if ((*(byte *)((long)puVar8 + 10) >> 4 & 1) != 0) {
              (**(code **)(*puVar13 + 0x10))(puVar13,puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bd18cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*puVar16 + 0x18))(puVar16,puVar13,*puVar1);
              return puVar16;
            }
            return puVar16;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bd18c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*puVar13 + 0x10))(puVar13,puVar9);
          return puVar13;
        }
        func_0x00010bd24f2c();
        if (puVar9 == (ulong *)0x0) {
LAB_10bd1ff94:
          func_0x00010bd24f34();
          FUN_10bd1be78();
          puVar9 = (ulong *)0x0;
          if ((ulong *)*puVar16 != (ulong *)0x0) {
            return (ulong *)*puVar16;
          }
        }
        else {
          puVar9 = puVar16;
          func_0x00010bd24f34();
          FUN_10bd1bdd4();
          if (((ulong)puVar9 & 1) != 0) goto LAB_10bd1ff94;
        }
        func_0x00010bd24ee4();
        puVar4 = (undefined1 *)register0x00000008;
        param_2 = unaff_x19;
        puVar16 = unaff_x20;
        plVar10 = unaff_x22;
        goto SUB_10bd1fe44;
      }
    }
    else {
      func_0x00010bd24e70();
      puVar17 = puVar13;
LAB_10bd20014:
      func_0x00010bd24e38();
    }
    plVar10 = (long *)*puVar16;
    func_0x00010bd250f8(plVar10,param_2,&UNK_10f835400);
    puVar4 = &stack0xffffffffffffff90;
    puStack_48 = (ulong *)0x10bd2002c;
    unaff_x29 = &puStack_50;
    puStack_50 = (ulong *)&stack0xfffffffffffffff0;
    func_0x00010bd24b74();
    if ((bool)in_ZR) {
      func_0x00010bd24f7c();
      if ((bool)in_CY) {
        func_0x00010bd24f14();
        goto LAB_10bd20144;
      }
      func_0x00010bd24c80();
      if ((int)plVar10 != 10) goto LAB_10bd20148;
      if (puVar17 == (ulong *)0x0) {
        puVar17 = (ulong *)unaff_x21[0xb];
      }
      if ((*(byte *)((long)param_2 + 1) >> 3 & 1) != 0) {
        puVar1 = (undefined8 *)((long)puVar16 + (ulong)*(uint *)(unaff_x21 + 5));
        uVar12 = (ulong)*(uint *)((long)param_2 + 4);
        puVar8 = puVar1;
        func_0x00010b4c0fe8(puVar1,uVar12,puVar17);
        puVar8[2] = param_2;
        if ((uVar12 & 1) == 0) {
          bVar3 = *(byte *)((long)puVar8 + 10);
          *(byte *)((long)puVar8 + 10) = bVar3 & 0xf0;
          param_2 = (ulong *)*puVar8;
          if ((bVar3 >> 4 & 1) != 0) {
            func_0x00010bd1a754();
            func_0x00010bd1a660();
                    /* WARNING: Could not recover jumptable at 0x00010bd18d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_2 + 0x28))(param_2,puVar8,*puVar1);
            return param_2;
          }
        }
        else {
          func_0x00010787827c();
          *(char *)(puVar8 + 1) = (char)param_2;
          *(undefined1 *)((long)puVar8 + 9) = 0;
          *(undefined1 *)((long)puVar8 + 0xb) = 0;
          func_0x00010bd1a754();
          func_0x00010bd1a660();
          *(byte *)((long)puVar8 + 10) = *(byte *)((long)puVar8 + 10) & 0xf;
          func_0x00010bd1a734();
          *puVar8 = param_2;
          *(byte *)((long)puVar8 + 10) = *(byte *)((long)puVar8 + 10) & 0xf0;
        }
        return param_2;
      }
      func_0x00010bd24b3c();
      unaff_x22 = plVar10;
      func_0x00010bd24f2c();
      if (unaff_x22 == (long *)0x0) {
        func_0x00010bd24c14();
        FUN_10bd1cd90();
LAB_10bd200bc:
        puVar9 = (ulong *)*plVar10;
        if (puVar9 != (ulong *)0x0) {
          return puVar9;
        }
        func_0x00010bd24e64();
        unaff_x30 = 0x10bd20108;
SUB_10bd1fe44:
        *(long **)(puVar4 + -0x30) = plVar10;
        *(undefined8 **)(puVar4 + -0x28) = unaff_x21;
        *(ulong **)(puVar4 + -0x20) = puVar16;
        *(ulong **)(puVar4 + -0x18) = param_2;
        *(ulong ***)(puVar4 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar4 + -8) = unaff_x30;
        func_0x00010bd24f94();
        puVar13 = (ulong *)puVar9[0xb];
        func_0x000107c3a8e8();
        if (puVar13 != puVar9) {
          if (((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) &&
             ((*(byte *)(param_2[7] + 0x8c) & 1) == 0)) {
            func_0x00010bd24ee4();
            FUN_10bd1ff04();
            if ((((ulong)puVar9 & 1) == 0) && (func_0x00010bd24f2c(), puVar9 == (ulong *)0x0)) {
              puVar13 = puVar16 + 1;
              FUN_10bd24740(puVar13,param_2);
              puVar9 = (ulong *)0x0;
              if ((ulong *)*puVar13 != (ulong *)0x0) {
                return (ulong *)*puVar13;
              }
            }
          }
          puVar16 = (ulong *)puVar16[0xb];
          func_0x00010bd252d0();
                    /* WARNING: Could not recover jumptable at 0x00010bd1feb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*puVar16 + 0x10))(puVar16,puVar9);
          return puVar16;
        }
        puVar9 = (ulong *)param_2[10];
        if (puVar9 != (ulong *)0x0) {
          return puVar9;
        }
        puVar16 = (ulong *)puVar16[0xb];
        func_0x00010bd252d0();
        (**(code **)(*puVar16 + 0x10))(puVar16,puVar9);
        param_2[10] = (ulong)puVar16;
        return puVar16;
      }
      func_0x00010bd24ba4();
      if (((ulong)unaff_x22 & 1) != 0) goto LAB_10bd200bc;
      func_0x00010bd24d7c();
      func_0x00010bd24c14();
    }
    else {
      func_0x00010bd24e70();
LAB_10bd20144:
      func_0x00010bd24e38();
LAB_10bd20148:
      unaff_x22 = (long *)*unaff_x21;
      func_0x00010bd250f8(unaff_x22,param_2,&UNK_10f83540b);
    }
    puStack_90 = puVar16;
    puStack_88 = param_2;
    func_0x00010bd24b60();
    if (unaff_x22 == (long *)0x0) {
      func_0x00010bd24c14();
      FUN_10bd1cd90();
    }
    else {
      func_0x00010bd24c14();
      FUN_10bd202f4();
    }
    func_0x00010bd24c14();
    puVar9 = puStack_88;
    puVar16 = puStack_90;
  }
  else {
    uVar12 = *(ulong *)param_1[1];
    uVar18 = ((ulong *)param_1[1])[1];
    uVar5 = uVar18 <= uVar12;
    uVar6 = uVar12 == uVar18;
    if (!(bool)uVar6) {
      return *(ulong **)(uVar12 + (long)(int)param_3 * 8);
    }
    puVar16 = (ulong *)param_1[2];
    puVar9 = (ulong *)*param_1;
    func_0x00010bd24bdc();
    if ((bool)uVar6) {
      func_0x00010bd256f0();
      if (!(bool)uVar5 || (bool)uVar6) {
        func_0x00010bd24f20();
        puVar13 = param_3;
        goto LAB_10bd20454;
      }
      puVar13 = param_3;
      func_0x00010bd24df4();
      uVar5 = 9 < (uint)puVar16;
      uVar6 = 0;
      unaff_x19 = param_3;
      if ((uint)puVar16 == 10) {
        if ((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) {
          func_0x00010bd255a4();
          if ((int)puVar16 == 0) {
            func_0x00010bd24c70();
            func_0x00010bd1bd98();
          }
          else {
            func_0x00010bd24c70();
            func_0x00010bd1bd5c();
            func_0x00010bd28a08();
          }
          func_0x00010bd24ef8();
          return puVar16;
        }
        func_0x00010bd2567c();
        func_0x00010b4c52f4();
        if (puVar16 == (ulong *)0x0) {
          func_0x00010b4c5038();
          func_0x00010b4c52d4();
          func_0x00010b4c5068();
          func_0x00010b4c52cc();
          puVar14 = &SUB_10b4c02cc;
          func_0x000107c398f0();
          in_stack_00000010 = &stack0xfffffffffffffff0;
          in_stack_00000018 = puVar14;
          func_0x00010b4c5360();
          puVar16[2] = param_5;
          if (((ulong)puVar9 & 1) == 0) {
            puVar9 = (ulong *)*puVar16;
          }
          else {
            *(char *)(puVar16 + 1) = (char)unaff_x22;
            *(undefined1 *)((long)puVar16 + 9) = 1;
            puVar9 = (ulong *)&stack0xffffffffffffffd8;
            func_0x00010b4c37a4();
            *puVar16 = (ulong)puVar9;
          }
          func_0x000107c303b8();
          return puVar9;
        }
        func_0x00010b4c5154();
        return puVar16;
      }
    }
    else {
      func_0x00010bd24e70();
      puVar13 = param_3;
LAB_10bd20454:
      func_0x00010bd2506c();
    }
    iVar7 = (int)*unaff_x22;
    puVar16 = (ulong *)&UNK_10f83543d;
    func_0x00010bd24fb8();
    puStack_50 = param_2;
    puStack_48 = unaff_x19;
    func_0x00010bd24bdc();
    if (!(bool)uVar6) {
      func_0x00010bd24e70();
LAB_10bd20598:
      func_0x00010bd2506c();
LAB_10bd2059c:
      puVar9 = (ulong *)*unaff_x22;
      func_0x00010bd24fb8();
      uVar12 = puVar9[1];
      puVar13 = puVar9;
      puStack_90 = puVar16;
      puStack_88 = unaff_x19;
      func_0x000107c28174();
      if ((int)uVar12 < (int)puVar13) {
        uVar12 = puVar9[1];
        *(int *)(puVar9 + 1) = (int)uVar12 + 1;
        if ((*puVar9 & 1) != 0) {
          puVar9 = (ulong *)(*puVar9 + (long)(int)uVar12 * 8 + 7);
        }
        puVar9 = (ulong *)*puVar9;
      }
      else {
        puVar9 = (ulong *)0x0;
      }
      return puVar9;
    }
    func_0x00010bd256f0();
    if (!(bool)uVar5 || (bool)uVar6) {
      func_0x00010bd24f20();
      goto LAB_10bd20598;
    }
    func_0x00010bd25080();
    unaff_x19 = puVar9;
    if (iVar7 != 10) goto LAB_10bd2059c;
    if (puVar13 == (ulong *)0x0) {
      puVar13 = (ulong *)unaff_x22[0xb];
    }
    if ((*(byte *)((long)puVar16 + 1) >> 3 & 1) != 0) {
      puVar9 = (ulong *)((long)puVar9 + (ulong)*(uint *)(unaff_x22 + 5));
      FUN_10bd18e40(puVar9,puVar16,puVar13);
      puVar16 = (ulong *)*puVar9;
      FUN_10bd18f80();
      if (puVar16 == (ulong *)0x0) {
        puVar13 = (ulong *)*puVar9;
        if ((int)puVar13[1] == 0) {
          func_0x00010bd1a754();
          func_0x00010bd1a660();
          if (puVar16 == (ulong *)0x0) {
            func_0x0001088914a0(&puStack_90,&UNK_10f8349d4);
            FUN_10bdb2a88(&stack0xffffffffffffff80,&UNK_10f834996,0xeb,puStack_90,puStack_88);
            puVar9 = (ulong *)&stack0xffffffffffffff80;
            func_0x00010ae6c700();
            uVar12 = puVar9[1];
            puVar16 = puVar9;
            func_0x000107c28174();
            if ((int)uVar12 < (int)puVar16) {
              uVar12 = puVar9[1];
              *(int *)(puVar9 + 1) = (int)uVar12 + 1;
              if ((*puVar9 & 1) != 0) {
                puVar9 = (ulong *)(*puVar9 + (long)(int)uVar12 * 8 + 7);
              }
              puVar9 = (ulong *)*puVar9;
            }
            else {
              puVar9 = (ulong *)0x0;
            }
            return puVar9;
          }
        }
        else {
          if ((*puVar13 & 1) != 0) {
            puVar13 = (ulong *)(*puVar13 + 7);
          }
          puVar16 = (ulong *)*puVar13;
        }
        func_0x00010bd1a734();
        FUN_10bd1a34c(*puVar9,puVar16);
      }
      return puVar16;
    }
    func_0x00010bd255a4();
  }
  puStack_90 = puVar16;
  puStack_88 = puVar9;
  func_0x00010bd24b28();
  if (unaff_x22 != (long *)0x0) {
    func_0x00010bd24c98();
    return (ulong *)((long)puVar9 + ((ulong)unaff_x22 & 0xffffffff));
  }
  func_0x00010bd24c40();
  puVar9 = puStack_88;
  func_0x00010bd24af8();
  if ((int)unaff_x22 == 0) {
    func_0x00010bd24c8c();
    return (ulong *)((long)puVar9 + ((ulong)unaff_x22 & 0xffffffff));
  }
  func_0x00010bd24c40();
  puVar16 = puStack_88;
  puVar9 = puStack_90;
  func_0x00010bd24fac();
  plVar10 = unaff_x22;
  func_0x00010bd24e7c();
  FUN_10bd20d94();
  uVar12 = (ulong)*(uint *)((long)unaff_x22 + 0x44);
  lVar15 = *(long *)((long)puVar9 + uVar12);
  if (lVar15 != *(long *)(unaff_x22[1] + uVar12)) goto LAB_10bd20cfc;
  uVar18 = (ulong)*(uint *)(unaff_x22 + 9);
  uVar11 = puVar9[1];
  if ((uVar11 & 1) == 0) {
    if (uVar11 == 0) goto LAB_10bd20cdc;
LAB_10bd20cc0:
    func_0x00010888f420(uVar11,uVar18,8);
    uVar18 = uVar11;
  }
  else {
    uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
    if (uVar11 != 0) goto LAB_10bd20cc0;
LAB_10bd20cdc:
    __Znwm();
  }
  *(ulong *)((long)puVar9 + uVar12) = uVar18;
  _memcpy();
  lVar15 = *(long *)((long)puVar9 + (ulong)*(uint *)((long)unaff_x22 + 0x44));
LAB_10bd20cfc:
  puVar13 = (ulong *)(lVar15 + ((ulong)plVar10 & 0xffffffff));
  puVar17 = puVar13;
  if ((*(byte *)((long)puVar16 + 1) >> 5 & 1) != 0) {
    uVar12 = puVar9[1];
    if ((uVar12 & 1) != 0) {
      uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
    }
    puVar17 = (ulong *)*puVar13;
    if (puVar17 == (ulong *)&UNK_10e5b4a80) {
      func_0x00010bd24e30();
      iVar7 = (int)puVar17;
      uStack_c8 = uVar12;
      if ((iVar7 < 9) ||
         ((func_0x00010bd24e30(), iVar7 == 9 && (func_0x00010bd25454(), iVar7 == 1)))) {
        puVar17 = &uStack_c8;
        func_0x00010b4c361c();
      }
      else {
        puVar17 = &uStack_c8;
        func_0x00010b4cd460();
      }
      *puVar13 = (ulong)puVar17;
    }
  }
  return puVar17;
}



/* Entry: 10bd3ac80; end: 10bd3ad73;  */

long FUN_10bd3ac80(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = param_1;
  FUN_10bd2b4f4();
  FUN_10bd2b4f4(param_1);
  if (*(char *)(*(long *)(lVar1 + 0x20) + 0x53) == '\x01') {
    for (lVar3 = 0; lVar3 < *(int *)(lVar1 + 4); lVar3 = lVar3 + 1) {
      func_0x00010bd3ce84();
    }
  }
  else {
    func_0x00010bd3ca4c();
    FUN_10bd1d54c();
  }
  lVar3 = 0;
  for (plVar4 = (long *)0x0; plVar4 != (long *)0x0; plVar4 = plVar4 + 1) {
    lVar2 = *plVar4;
    FUN_10bd3ad74(lVar2,param_1);
    lVar3 = lVar2 + lVar3;
  }
  if (*(char *)(*(long *)(lVar1 + 0x20) + 0x50) == '\x01') {
    func_0x00010bd3ca4c();
    FUN_10bd1b89c();
    FUN_10bd37bec();
  }
  else {
    func_0x00010bd3ca4c();
    FUN_10bd1b89c();
    FUN_10bd37a78();
  }
  func_0x00010bd3ca28();
  return param_1 + lVar3;
}



/* Entry: 10bd3ad74; end: 10bd3af27;  */

uint * FUN_10bd3ad74(uint *param_1,uint *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  int extraout_w9;
  ulong uVar6;
  
  puVar4 = param_1;
  puVar3 = param_2;
  func_0x00010bd3cbf8();
  uVar5 = (uint)*(byte *)((long)param_1 + 1);
  if (((*(byte *)((long)param_1 + 1) >> 3 & 1) != 0) &&
     (in_ZR = 0, *(char *)(*(long *)(*(long *)(param_1 + 8) + 0x20) + 0x50) == '\x01')) {
    puVar4 = param_1;
    puVar2 = puVar3;
    func_0x00010b91adc8();
    uVar5 = (uint)*(byte *)((long)param_1 + 1);
    in_ZR = (int)puVar4 == 10;
    if (((bool)in_ZR) && ((*(byte *)((long)param_1 + 1) >> 5 & 1) == 0)) {
      FUN_10bd2b4f4(param_2);
      uVar5 = param_1[1];
      func_0x00010bd3cc90(puVar2);
      func_0x00010bd3cc7c();
      func_0x00010bd3caec();
      return (uint *)((long)puVar2 +
                     (ulong)((int)LZCOUNT((int)puVar2) * -9 + 0x160U >> 6) +
                     (ulong)((int)LZCOUNT(uVar5) * -9 + 0x160U >> 6) + 4);
    }
  }
  if ((uVar5 >> 5 & 1) == 0) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x20) + 0x53) & 1) != 0) {
      uVar6 = 1;
      goto LAB_10bd3ae98;
    }
    func_0x00010bd3cc90();
    FUN_10bd1d188();
    puVar4 = puVar3;
  }
  else {
    puVar4 = param_1;
    func_0x00010b91c030();
    if ((int)puVar4 != 0) {
      puVar4 = puVar3;
      func_0x00010bd3cc90();
      func_0x00010bd21278();
      if (((*(ulong *)(puVar4 + 2) & 1) == 0) || (func_0x00010bd3ccfc(), !(bool)in_ZR)) {
        (*(code *)**(undefined8 **)puVar4)();
        uVar6 = (ulong)*puVar4;
        goto LAB_10bd3ae98;
      }
    }
    func_0x00010bd3cc90();
    FUN_10bd1d250();
    puVar4 = puVar3;
  }
  uVar6 = (ulong)puVar4 & 0xffffffff;
LAB_10bd3ae98:
  func_0x00010bd3cc84();
  FUN_10bd3a670();
  puVar3 = param_1;
  FUN_10bcf1560();
  if ((int)puVar3 == 0) {
    uVar5 = param_1[1];
    func_0x00010787827c(param_1);
    iVar1 = (int)param_1;
    func_0x00010bd3c9e0(LZCOUNT(uVar5 << 3));
    puVar4 = (uint *)((long)puVar4 +
                     ((extraout_x8_00 >> 6 & 0x3ffffff) << (iVar1 == 10) & 0xffffffff) * uVar6);
  }
  else if (puVar4 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    func_0x00010bd3c9e0(LZCOUNT(param_1[1] << 3));
    puVar4 = (uint *)((long)puVar4 +
                     (extraout_x8 >> 6 & 0x3ffffff) +
                     (ulong)((uint)(extraout_w9 + (int)LZCOUNT((int)puVar4) * -9) >> 6));
  }
  return puVar4;
}



/* Entry: 10bd3af28; end: 10bd3b00f;  */

long FUN_10bd3af28(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  
  func_0x00010787827c();
  func_0x00010bd3cb20();
  if (!(bool)in_CY || (bool)in_ZR) {
    lVar1 = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bd3af60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e60c21c)[extraout_x8] * 4 + 0x10bd3af64))(4);
    return lVar1;
  }
  func_0x00010bd3ca3c();
  FUN_10bdb2a00();
  func_0x00010bd3cbe8();
  func_0x00010bd3ce14();
  func_0x00010787827c();
  func_0x00010bd3cb20();
  if (!(bool)in_CY || (bool)in_ZR) {
    lVar1 = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bd3b048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e60c22e)[extraout_x8_00] * 4 + 0x10bd3b04c))(4);
    return lVar1;
  }
  func_0x00010bd3ca3c();
  FUN_10bdb2a00();
  func_0x00010bd3cbe8();
  func_0x00010bd3ce14();
  func_0x00010bd3caec();
  func_0x00010bd3c9e0(LZCOUNT((int)param_1));
  return param_1 + (extraout_x8_01 >> 6 & 0x3ffffff);
}



/* Entry: 10bd3b010; end: 10bd3b143;  */

long FUN_10bd3b010(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  
  func_0x00010787827c();
  func_0x00010bd3cb20();
  if (!(bool)in_CY || (bool)in_ZR) {
    lVar1 = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bd3b048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e60c22e)[extraout_x8] * 4 + 0x10bd3b04c))(4);
    return lVar1;
  }
  func_0x00010bd3ca3c();
  FUN_10bdb2a00();
  func_0x00010bd3cbe8();
  func_0x00010bd3ce14();
  func_0x00010bd3caec();
  func_0x00010bd3c9e0(LZCOUNT((int)param_1));
  return param_1 + (extraout_x8_00 >> 6 & 0x3ffffff);
}



/* Entry: 10bd3b144; end: 10bd3b17b;  */

long FUN_10bd3b144(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010bd3caec();
  func_0x00010bd3c9e0(LZCOUNT((int)param_1));
  return param_1 + (extraout_x8 >> 6 & 0x3ffffff);
}



/* Entry: 10bd3b17c; end: 10bd3b207;  */

long FUN_10bd3b17c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      FUN_10bd22954();
    }
  }
  return param_1;
}



/* Entry: 10bd3b208; end: 10bd3b86b;  */

/* WARNING: Possible PIC construction at 0x00010bd3ba8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd3ba90) */
/* WARNING: Removing unreachable block (ram,0x00010bd3ba9c) */
/* WARNING: Removing unreachable block (ram,0x00010bd3bab4) */
/* WARNING: Removing unreachable block (ram,0x00010bd3bac8) */
/* WARNING: Removing unreachable block (ram,0x00010bd3baf0) */
/* WARNING: Removing unreachable block (ram,0x00010bd3bad8) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_10bd3b208(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined1 *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar21;
  long *unaff_x23;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *******unaff_x29;
  long *unaff_x30;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 *******pppppppuStack_c0;
  code *pcStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  
  pplVar4 = &plStack_b0;
  pplVar5 = &plStack_b0;
  plVar13 = param_1;
  plVar17 = param_3;
  func_0x00010bd3c95c();
  uStack_68 = extraout_x8;
LAB_10bd3b240:
  plVar18 = param_2 + -4;
  plStack_b0 = param_2 + -8;
  plVar23 = param_2 + -0xc;
  plVar15 = param_1;
LAB_10bd3b254:
  param_1 = plVar15;
  uVar26 = (long)param_2 - (long)param_1 >> 5;
  uVar9 = uVar26 == 5;
  plVar19 = param_2;
  plVar15 = param_1;
  pppppppuStack_c0 = unaff_x29;
  switch(uVar26) {
  case 0:
  case 1:
    goto LAB_10bd3b7c8;
  case 2:
    plVar13 = plVar18;
    func_0x00010bd3ca70();
    if ((int)plVar13 == 0) goto LAB_10bd3b7c8;
    func_0x00010bd3c884(uStack_68);
    if ((bool)uVar9) {
      func_0x00010bd3cbcc(param_1,plVar18);
      pcStack_b8 = (code *)unaff_x30;
      goto code_r0x00010bd3bca4;
    }
    goto LAB_10bd3b7e8;
  case 3:
    func_0x00010bd3c884(uStack_68);
    if ((bool)uVar9) {
      plVar13 = param_1 + 4;
      plVar17 = plVar18;
      func_0x00010bd3cbcc();
      pplVar6 = &plStack_e0;
      plVar19 = plVar13;
      plStack_e0 = param_3;
      plStack_d8 = plVar18;
      plStack_d0 = param_2;
      plStack_c8 = param_1;
      pcStack_b8 = (code *)unaff_x30;
      func_0x00010bd3ca68();
      plVar18 = plVar19;
      func_0x00010bd3ca4c();
      FUN_10bd3b86c();
      if (((ulong)plVar19 & 1) == 0) {
        if ((int)plVar18 == 0) {
          return plVar18;
        }
        func_0x00010bd3cc84();
        FUN_10bd3bca4();
        func_0x00010bd3ca68();
        iVar12 = (int)plVar13;
        plVar15 = plVar13;
joined_r0x00010bd3b9c4:
        pplVar6 = &plStack_e0;
        if (iVar12 == 0) {
          return plVar15;
        }
      }
      else if ((int)plVar18 == 0) {
        FUN_10bd3bca4(plVar15,plVar13);
        func_0x00010bd3ca4c();
        FUN_10bd3b86c();
        iVar12 = (int)plVar15;
        goto joined_r0x00010bd3b9c4;
      }
      goto LAB_10bd3cdc4;
    }
    goto LAB_10bd3b7e8;
  case 4:
    func_0x00010bd3c884(uStack_68);
    if (!(bool)uVar9) goto LAB_10bd3b7e8;
    func_0x00010bd3ced8();
    func_0x00010bd3cbcc();
    plVar19 = plVar17;
    break;
  case 5:
    func_0x00010bd3c884(uStack_68);
    if (!(bool)uVar9) goto LAB_10bd3b7e8;
    func_0x00010bd3ced8();
    plVar13 = param_1 + 0xc;
    plVar14 = plVar18;
    func_0x00010bd3cbcc();
    pplVar4 = &plStack_f0;
    unaff_x29 = &pppppppuStack_c0;
    plVar19 = plVar17;
    plStack_f0 = plVar23;
    plStack_e8 = unaff_x23;
    plStack_e0 = param_3;
    plStack_d8 = plVar18;
    plStack_d0 = param_2;
    plStack_c8 = param_1;
    func_0x00010bd3cd40();
    unaff_x30 = (long *)0x10bd3ba90;
    plVar18 = plVar17;
    param_3 = plVar13;
    unaff_x23 = plVar14;
    break;
  default:
    goto code_r0x00010bd3b268;
  }
  pplVar6 = (long **)((long)pplVar4 + -0x30);
  *(long **)((long)pplVar4 + -0x30) = param_3;
  *(long **)((long)pplVar4 + -0x28) = plVar18;
  *(long **)((long)pplVar4 + -0x20) = param_2;
  *(long **)((long)pplVar4 + -0x18) = param_1;
  *(undefined8 ********)((long)pplVar4 + -0x10) = unaff_x29;
  *(long **)((long)pplVar4 + -8) = unaff_x30;
  plVar17 = plVar19;
  func_0x00010bd3cd40();
  FUN_10bd3b970();
  func_0x00010bd3c96c();
  FUN_10bd3b86c();
  if ((int)plVar15 != 0) {
    func_0x00010bd3cc08();
    FUN_10bd3bca4();
    func_0x00010bd3ca70();
    plVar15 = plVar19;
    if ((int)plVar19 != 0) {
      func_0x00010bd3ce68();
      func_0x00010bd3cc84();
      FUN_10bd3b86c();
      plVar15 = plVar19;
      if ((int)plVar19 != 0) {
        func_0x00010bd3ca4c();
        pppppppuStack_c0 = *(undefined8 ********)((long)pplVar4 + -0x10);
        pcStack_b8 = *(code **)((long)pplVar4 + -8);
LAB_10bd3cdc4:
        param_2 = pplVar6[2];
        param_1 = pplVar6[3];
        pplVar5 = pplVar6 + 6;
        param_3 = *pplVar6;
        plVar18 = pplVar6[1];
        unaff_x30 = plVar17;
code_r0x00010bd3bca4:
        *(long **)((long)pplVar5 + -0x20) = param_2;
        *(long **)((long)pplVar5 + -0x18) = param_1;
        *(undefined8 ********)((long)pplVar5 + -0x10) = pppppppuStack_c0;
        *(code **)((long)pplVar5 + -8) = pcStack_b8;
        func_0x00010bd3cd40();
        func_0x00010bd3c95c();
        *(undefined8 *)((long)pplVar5 + -0x28) = extraout_x8_00;
        plVar17 = (long *)((long)pplVar5 + -0x48);
        plVar13 = param_2;
        FUN_10bd2ae08();
        func_0x00010bd3ca4c();
        FUN_10bd2a9e4();
        func_0x00010bd3cbc0();
        FUN_10bd2a9e4();
        func_0x00010bd3ca80();
        func_0x00010bd3c884(*(undefined8 *)((long)pplVar5 + -0x28));
        if ((bool)uVar9) {
          return plVar17;
        }
        ___stack_chk_fail();
        plVar15 = plVar17;
        func_0x00010bd3ca34();
        *(ulong *)((long)pplVar5 + -0xa0) = uVar26;
        *(ulong *)((long)pplVar5 + -0x98) = param_4;
        *(long **)((long)pplVar5 + -0x90) = plVar23;
        *(long **)((long)pplVar5 + -0x88) = unaff_x23;
        *(long **)((long)pplVar5 + -0x80) = param_3;
        *(long **)((long)pplVar5 + -0x78) = plVar18;
        *(long **)((long)pplVar5 + -0x70) = param_2;
        *(long **)((long)pplVar5 + -0x68) = plVar17;
        *(undefined1 **)((long)pplVar5 + -0x60) = (undefined1 *)((long)pplVar5 + -0x10);
        *(code **)((long)pplVar5 + -0x58) = FUN_10bd3bd14;
        func_0x00010bd3c95c();
        *(undefined8 *)((long)pplVar5 + -0xa8) = extraout_x8_01;
        uVar9 = (undefined1 *)((long)plVar13 - 2U) == (undefined1 *)0x0;
        plVar17 = plVar15;
        if ((long)plVar13 < 2) goto LAB_10bd3be14;
        plVar23 = (long *)((long)plVar13 - 2U >> 1);
        plVar18 = (long *)((long)unaff_x30 - (long)plVar15 >> 5);
        uVar9 = plVar23 == plVar18;
        param_2 = plVar15;
        if ((long)plVar23 < (long)plVar18) goto LAB_10bd3be14;
        lVar27 = (long)unaff_x30 - (long)plVar15 >> 4;
        plVar17 = (long *)(lVar27 + 1);
        plVar19 = plVar15 + (long)plVar17 * 4;
        plVar18 = (long *)(lVar27 + 2);
        uVar9 = plVar18 == plVar13;
        plVar14 = plVar19;
        plVar25 = plVar17;
        if ((long)plVar18 < (long)plVar13) {
          plVar14 = plVar15;
          func_0x00010bd3cd84();
          uVar9 = (int)plVar14 == 0;
          plVar14 = plVar19 + 4;
          plVar25 = plVar18;
          if ((bool)uVar9) {
            plVar14 = plVar19;
            plVar25 = plVar17;
          }
        }
        plVar17 = plVar14;
        func_0x00010bd3cc00();
        if (((ulong)plVar17 & 1) != 0) goto LAB_10bd3be14;
        FUN_10bd2ae08((undefined1 *)((long)pplVar5 + -200),unaff_x30);
        goto LAB_10bd3bda0;
      }
    }
  }
  return plVar15;
code_r0x00010bd3b268:
  if ((long)uVar26 < 0x18) {
    uVar9 = param_1 == param_2;
    if ((param_4 & 1) == 0) {
      if (!(bool)uVar9) {
        while( true ) {
          plVar17 = param_1;
          param_1 = plVar17 + 4;
          uVar9 = 1;
          if (param_1 == param_2) break;
          plVar13 = param_1;
          func_0x00010bd3ca68();
          if ((int)plVar13 != 0) {
            func_0x00010bd3caa4();
            do {
              plVar13 = plVar17;
              FUN_10bd2a9e4(plVar13 + 4,plVar13);
              uVar26 = 0;
              func_0x00010bd3ca68();
              plVar17 = plVar13 + -4;
            } while ((uVar26 & 1) != 0);
            FUN_10bd2a9e4(plVar13,auStack_88);
            func_0x00010bd3cab0();
          }
        }
      }
      goto LAB_10bd3b7c8;
    }
    if ((bool)uVar9) goto LAB_10bd3b7c8;
    lVar27 = 0;
    plVar17 = param_1;
    goto LAB_10bd3b5b4;
  }
  if (param_3 == (long *)0x0) {
    uVar9 = 1;
    if (param_1 == param_2) goto LAB_10bd3b7c8;
    uVar21 = uVar26 - 2 >> 1;
    plVar17 = param_1 + uVar21 * 4;
    do {
      plVar13 = param_1;
      FUN_10bd3bd14(param_1,uVar26,plVar17);
      uVar21 = uVar21 - 1;
      plVar17 = plVar17 + -4;
    } while (-1 < (long)uVar21);
    do {
      uVar9 = uVar26 - 2 == 0;
      plVar19 = param_2;
      if ((long)uVar26 < 2) goto LAB_10bd3b7c8;
      puVar16 = auStack_a8;
      FUN_10bd2ae08(puVar16,param_1);
      plVar17 = param_1;
      uVar21 = 0;
      do {
        uVar2 = uVar21 << 1 | 1;
        uVar1 = uVar21 * 2 + 2;
        plVar13 = plVar17 + uVar21 * 4 + 4;
        uVar24 = uVar2;
        if ((long)uVar1 < (long)uVar26) {
          func_0x00010bd3cd84();
          plVar13 = plVar17 + uVar21 * 4 + 8;
          uVar24 = uVar1;
          if ((int)puVar16 == 0) {
            plVar13 = plVar17 + uVar21 * 4 + 4;
            uVar24 = uVar2;
          }
        }
        func_0x00010bd3c96c();
        FUN_10bd2a9e4();
        plVar17 = plVar13;
        uVar21 = uVar24;
      } while ((long)uVar24 <= (long)(uVar26 - 2 >> 1));
      param_2 = param_2 + -4;
      if (plVar13 == param_2) {
        FUN_10bd2a9e4(plVar13,auStack_a8);
      }
      else {
        FUN_10bd2a9e4(plVar13,param_2);
        plVar17 = param_2;
        FUN_10bd2a9e4(param_2,auStack_a8);
        lVar27 = (long)((long)plVar13 + (0x20 - (long)param_1)) >> 5;
        plVar13 = plVar17;
        if (1 < lVar27) {
          uVar21 = lVar27 - 2U >> 1;
          func_0x00010bd3c96c();
          FUN_10bd3b86c();
          plVar13 = plVar17;
          if ((int)plVar17 != 0) {
            func_0x00010bd3cd58();
            plVar17 = param_1 + uVar21 * 4;
            do {
              plVar13 = plVar17;
              func_0x00010bd3cc08();
              FUN_10bd2a9e4();
              if (uVar21 == 0) break;
              uVar21 = uVar21 - 1 >> 1;
              plVar17 = param_1 + uVar21 * 4;
              plVar15 = plVar17;
              FUN_10bd3b86c(plVar17,auStack_88);
            } while (((ulong)plVar15 & 1) != 0);
            FUN_10bd2a9e4(plVar13,auStack_88);
            func_0x00010bd3cab0();
          }
        }
      }
      func_0x00010bd3ca80();
      uVar26 = uVar26 - 1;
    } while( true );
  }
  plVar13 = param_1 + (uVar26 >> 1) * 4;
  if (uVar26 < 0x81) {
    plVar17 = plVar18;
    FUN_10bd3b970(plVar13,param_1);
  }
  else {
    func_0x00010bd3cf04();
    FUN_10bd3b970();
    FUN_10bd3b970(param_1 + 4,plVar13 + -4,plStack_b0);
    FUN_10bd3b970(param_1 + 8,plVar13 + 4,plVar23);
    plVar17 = plVar13 + 4;
    FUN_10bd3b970(plVar13 + -4,plVar13);
    func_0x00010bd3cf04();
    FUN_10bd3bca4();
  }
  param_3 = (long *)((long)param_3 + -1);
  if ((param_4 & 1) == 0) {
    plVar13 = param_1 + -4;
    func_0x00010bd3ca70();
    if (((ulong)plVar13 & 1) == 0) {
      func_0x00010bd3caa4();
      puVar16 = auStack_88;
      func_0x00010bd3ca68();
      if (((ulong)puVar16 & 1) == 0) {
        do {
          plVar15 = plVar15 + 4;
          if (param_2 <= plVar15) break;
          func_0x00010bd3ca98();
        } while ((int)puVar16 == 0);
      }
      else {
        do {
          plVar15 = plVar15 + 4;
          func_0x00010bd3ca98();
        } while (((ulong)puVar16 & 1) == 0);
      }
      plVar13 = param_2;
      if (plVar15 < param_2) {
        do {
          plVar13 = plVar13 + -4;
          func_0x00010bd3cd64();
        } while (((ulong)puVar16 & 1) != 0);
      }
      while (plVar15 < plVar13) {
        plVar19 = plVar15;
        FUN_10bd3bca4(plVar15,plVar13);
        do {
          plVar15 = plVar15 + 4;
          func_0x00010bd3ca98();
        } while ((int)plVar19 == 0);
        do {
          plVar13 = plVar13 + -4;
          func_0x00010bd3cd64();
        } while (((ulong)plVar19 & 1) != 0);
      }
      plVar13 = plVar15 + -4;
      if (param_1 != plVar13) {
        FUN_10bd2a9e4(param_1,plVar13);
      }
      FUN_10bd2a9e4(plVar13,auStack_88);
      func_0x00010bd3cab0();
      param_4 = 0;
      goto LAB_10bd3b254;
    }
  }
  func_0x00010bd3caa4();
  lVar27 = 0;
  do {
    puVar16 = (undefined1 *)((long)param_1 + lVar27 + 0x20);
    FUN_10bd3b86c(puVar16,auStack_88);
    lVar27 = lVar27 + 0x20;
  } while (((ulong)puVar16 & 1) != 0);
  unaff_x23 = (long *)((long)param_1 + lVar27);
  plVar13 = param_2;
  plVar15 = unaff_x23;
  if (lVar27 == 0x20) {
    do {
      plVar14 = plVar13;
      if (plVar13 <= unaff_x23) break;
      plVar13 = plVar13 + -4;
      func_0x00010bd3ce34();
      plVar14 = plVar13;
    } while (((ulong)puVar16 & 1) == 0);
  }
  else {
    do {
      plVar13 = plVar13 + -4;
      func_0x00010bd3ce34();
      plVar14 = plVar13;
    } while ((int)puVar16 == 0);
  }
  while (plVar15 < plVar13) {
    FUN_10bd3bca4(plVar15,plVar13);
    do {
      plVar15 = plVar15 + 4;
      plVar19 = plVar15;
      FUN_10bd3b86c(plVar15,auStack_88);
    } while (((ulong)plVar19 & 1) != 0);
    do {
      plVar13 = plVar13 + -4;
      plVar19 = plVar13;
      FUN_10bd3b86c(plVar13,auStack_88);
    } while (((ulong)plVar19 & 1) == 0);
  }
  plVar19 = plVar15 + -4;
  if (param_1 != plVar19) {
    FUN_10bd2a9e4(param_1,plVar19);
  }
  FUN_10bd2a9e4(plVar19,auStack_88);
  func_0x00010bd3cab0();
  uVar9 = unaff_x23 == plVar14;
  if (unaff_x23 < plVar14) goto LAB_10bd3b3e8;
  plVar14 = param_1;
  FUN_10bd3bb04(param_1,plVar19);
  plVar13 = plVar15;
  FUN_10bd3bb04(plVar15,param_2);
  if ((int)plVar13 == 0) goto code_r0x00010bd3b3e4;
  param_2 = plVar19;
  if (((ulong)plVar14 & 1) != 0) goto LAB_10bd3b7c8;
  goto LAB_10bd3b240;
LAB_10bd3b5b4:
  plVar17 = plVar17 + 4;
  uVar9 = 1;
  if (plVar17 == param_2) goto LAB_10bd3b7c8;
  plVar13 = plVar17;
  FUN_10bd3b86c();
  if ((int)plVar13 != 0) {
    func_0x00010bd3cd58();
    lVar20 = lVar27;
    do {
      lVar22 = lVar20;
      FUN_10bd2a9e4((undefined1 *)((long)param_1 + lVar22 + 0x20));
      plVar13 = param_1;
      if (lVar22 == 0) goto LAB_10bd3b60c;
      puVar16 = auStack_88;
      FUN_10bd3b86c(puVar16,(undefined1 *)((long)param_1 + lVar22 + -0x20));
      lVar20 = lVar22 + -0x20;
    } while (((ulong)puVar16 & 1) != 0);
    plVar13 = (long *)((long)param_1 + lVar22);
LAB_10bd3b60c:
    FUN_10bd2a9e4(plVar13,auStack_88);
    func_0x00010bd3cab0();
  }
  lVar27 = lVar27 + 0x20;
  goto LAB_10bd3b5b4;
code_r0x00010bd3b3e4:
  if (((ulong)plVar14 & 1) == 0) {
LAB_10bd3b3e8:
    plVar17 = param_3;
    FUN_10bd3b208(param_1,plVar19,param_3,(uint)param_4 & 1);
    param_4 = 0;
    plVar13 = param_1;
  }
  goto LAB_10bd3b254;
  while( true ) {
    plVar3 = (long *)((long)plVar25 << 1 | 1);
    plVar19 = plVar15 + (long)plVar3 * 4;
    plVar18 = (long *)((long)plVar25 * 2 + 2);
    uVar9 = plVar18 == plVar13;
    plVar14 = plVar19;
    plVar25 = plVar3;
    if ((long)plVar18 < (long)plVar13) {
      func_0x00010bd3cc00();
      uVar9 = (int)plVar14 == 0;
      plVar14 = plVar19 + 4;
      plVar25 = plVar18;
      if ((bool)uVar9) {
        plVar14 = plVar19;
        plVar25 = plVar3;
      }
    }
    plVar18 = plVar14;
    FUN_10bd3b86c(plVar14,(undefined1 *)((long)pplVar5 + -200));
    if ((int)plVar18 != 0) break;
LAB_10bd3bda0:
    plVar17 = plVar14;
    func_0x00010bd3c96c();
    FUN_10bd2a9e4();
    uVar9 = plVar23 == plVar25;
    if ((long)plVar23 < (long)plVar25) break;
  }
  FUN_10bd2a9e4(plVar17,(undefined1 *)((long)pplVar5 + -200));
  func_0x00010bd3ca80();
LAB_10bd3be14:
  func_0x00010bd3c884(*(undefined8 *)((long)pplVar5 + -0xa8));
  if (!(bool)uVar9) {
    ___stack_chk_fail();
    plVar13 = plVar17;
    func_0x00010bd3ca80();
    func_0x00010bd3ca34();
    *(long **)((long)pplVar5 + -0xf0) = param_2;
    *(long **)((long)pplVar5 + -0xe8) = plVar17;
    *(undefined1 **)((long)pplVar5 + -0xe0) = (undefined1 *)((long)pplVar5 + -0x60);
    *(code **)((long)pplVar5 + -0xd8) = FUN_10bd3be58;
    lVar27 = *plVar13;
    if (lVar27 != 0) {
      lVar20 = plVar13[1];
      while (lVar20 != lVar27) {
        lVar20 = lVar20 + -0x20;
        FUN_10bd22954();
      }
      plVar13[1] = lVar27;
      __ZdlPv(*plVar13);
    }
    return plVar13;
  }
  return plVar17;
LAB_10bd3b7c8:
  func_0x00010bd3c884(uStack_68);
  param_2 = plVar19;
  if ((bool)uVar9) {
    func_0x00010bd3cbcc(unaff_x30);
    return unaff_x30;
  }
LAB_10bd3b7e8:
  ___stack_chk_fail();
  uVar10 = SUB84(auStack_88,0);
  FUN_10bd22954();
  func_0x00010bd3ca34();
  pcStack_b8 = FUN_10bd3b86c;
  plStack_d0 = param_2;
  plStack_c8 = plVar13;
  pppppppuStack_c0 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010bd3cd40();
  FUN_10bd28214();
  plVar17 = (long *)0x1;
  switch(uVar10) {
  case 1:
    FUN_10bd28364(param_2);
    iVar11 = (int)param_2;
    iVar12 = iVar11;
    func_0x00010bd3ce74();
    bVar7 = SBORROW4(iVar11,iVar12);
    bVar8 = iVar11 - iVar12 < 0;
    break;
  case 2:
    FUN_10bd282ec(param_2);
    plVar17 = param_2;
    func_0x00010bd3ce7c();
    bVar7 = SBORROW8((long)param_2,(long)plVar17);
    bVar8 = (long)param_2 - (long)plVar17 < 0;
    break;
  case 3:
    FUN_10bd28454(param_2);
    FUN_10bd28454(plVar13);
    bVar8 = (uint)plVar13 <= (uint)param_2;
    goto code_r0x00010bd3b940;
  case 4:
    FUN_10bd283dc(param_2);
    FUN_10bd283dc(plVar13);
    bVar8 = plVar13 <= param_2;
code_r0x00010bd3b940:
    return (long *)(ulong)!bVar8;
  default:
    goto LAB_10bd3b964;
  case 7:
    FUN_10bd284cc(param_2);
    FUN_10bd284cc(plVar13);
    return (long *)(ulong)((uint)plVar13 & ((uint)param_2 ^ 1));
  case 9:
    FUN_10bd28274(param_2);
    FUN_10bd28274(plVar13);
    func_0x000107c27bd4(param_2,plVar13);
    bVar8 = (char)param_2 < '\0';
    bVar7 = false;
  }
  plVar17 = (long *)(ulong)(bVar8 != bVar7);
LAB_10bd3b964:
  return plVar17;
}



/* Entry: 10bd3b86c; end: 10bd3b96f;  */

uint FUN_10bd3b86c(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong unaff_x19;
  ulong unaff_x20;
  
  func_0x00010bd3cd40();
  FUN_10bd28214();
  uVar5 = 1;
  switch(param_1) {
  case 1:
    FUN_10bd28364();
    iVar3 = (int)unaff_x20;
    iVar4 = iVar3;
    func_0x00010bd3ce74();
    bVar1 = SBORROW4(iVar3,iVar4);
    bVar2 = iVar3 - iVar4 < 0;
    break;
  case 2:
    FUN_10bd282ec();
    uVar6 = unaff_x20;
    func_0x00010bd3ce7c();
    bVar1 = SBORROW8(unaff_x20,uVar6);
    bVar2 = (long)(unaff_x20 - uVar6) < 0;
    break;
  case 3:
    FUN_10bd28454();
    FUN_10bd28454();
    bVar2 = (uint)unaff_x19 <= (uint)unaff_x20;
    goto code_r0x00010bd3b940;
  case 4:
    FUN_10bd283dc();
    FUN_10bd283dc();
    bVar2 = unaff_x19 <= unaff_x20;
code_r0x00010bd3b940:
    return (uint)!bVar2;
  default:
    goto LAB_10bd3b964;
  case 7:
    FUN_10bd284cc();
    FUN_10bd284cc();
    return (uint)unaff_x19 & ((uint)unaff_x20 ^ 1);
  case 9:
    FUN_10bd28274();
    FUN_10bd28274();
    func_0x000107c27bd4(unaff_x20,unaff_x19);
    bVar2 = (char)unaff_x20 < '\0';
    bVar1 = false;
  }
  uVar5 = (uint)(bVar2 != bVar1);
LAB_10bd3b964:
  return uVar5;
}



/* Entry: 10bd3b970; end: 10bd3ba67;  */

long * FUN_10bd3b970(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar9;
  ulong unaff_x20;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_c8 [32];
  undefined8 uStack_a8;
  long alStack_48 [3];
  
  plVar4 = param_2;
  plVar7 = param_3;
  func_0x00010bd3ca68();
  plVar5 = plVar4;
  func_0x00010bd3ca4c();
  FUN_10bd3b86c();
  plVar6 = param_1;
  if (((ulong)plVar4 & 1) != 0) {
    if ((int)plVar5 == 0) {
      FUN_10bd3bca4(param_1,param_2);
      func_0x00010bd3ca4c();
      FUN_10bd3b86c();
      plVar6 = param_2;
      if ((int)param_1 == 0) {
        return param_1;
      }
    }
LAB_10bd3b9f4:
    func_0x00010bd3cd40(plVar6,param_3);
    func_0x00010bd3c95c();
    plVar4 = alStack_48;
    FUN_10bd2ae08();
    func_0x00010bd3ca4c();
    FUN_10bd2a9e4();
    func_0x00010bd3cbc0();
    FUN_10bd2a9e4();
    func_0x00010bd3ca80();
    func_0x00010bd3c884(extraout_x8);
    if ((bool)in_ZR) {
      return plVar4;
    }
    ___stack_chk_fail();
    func_0x00010bd3ca34();
    func_0x00010bd3c95c();
    uVar3 = unaff_x20 - 2 == 0;
    plVar5 = plVar4;
    uStack_a8 = extraout_x8_00;
    if (1 < (long)unaff_x20) {
      uVar10 = unaff_x20 - 2 >> 1;
      uVar1 = (long)plVar7 - (long)plVar4 >> 5;
      uVar3 = uVar10 == uVar1;
      if ((long)uVar1 <= (long)uVar10) {
        lVar9 = (long)plVar7 - (long)plVar4 >> 4;
        uVar1 = lVar9 + 1;
        plVar5 = plVar4 + uVar1 * 4;
        uVar2 = lVar9 + 2;
        uVar3 = uVar2 == unaff_x20;
        plVar6 = plVar5;
        uVar11 = uVar1;
        if ((long)uVar2 < (long)unaff_x20) {
          plVar6 = plVar4;
          func_0x00010bd3cd84();
          uVar3 = (int)plVar6 == 0;
          plVar6 = plVar5 + 4;
          uVar11 = uVar2;
          if ((bool)uVar3) {
            plVar6 = plVar5;
            uVar11 = uVar1;
          }
        }
        plVar5 = plVar6;
        func_0x00010bd3cc00();
        if (((ulong)plVar5 & 1) == 0) {
          FUN_10bd2ae08(auStack_c8,plVar7);
          do {
            plVar5 = plVar6;
            func_0x00010bd3c96c();
            FUN_10bd2a9e4();
            uVar3 = uVar10 == uVar11;
            if ((long)uVar10 < (long)uVar11) break;
            uVar2 = uVar11 << 1 | 1;
            plVar7 = plVar4 + uVar2 * 4;
            uVar1 = uVar11 * 2 + 2;
            uVar3 = uVar1 == unaff_x20;
            plVar6 = plVar7;
            uVar11 = uVar2;
            if ((long)uVar1 < (long)unaff_x20) {
              func_0x00010bd3cc00();
              uVar3 = (int)plVar6 == 0;
              plVar6 = plVar7 + 4;
              uVar11 = uVar1;
              if ((bool)uVar3) {
                plVar6 = plVar7;
                uVar11 = uVar2;
              }
            }
            plVar7 = plVar6;
            FUN_10bd3b86c(plVar6,auStack_c8);
          } while ((int)plVar7 == 0);
          FUN_10bd2a9e4(plVar5,auStack_c8);
          func_0x00010bd3ca80();
        }
      }
    }
    func_0x00010bd3c884(uStack_a8);
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      func_0x00010bd3ca80();
      func_0x00010bd3ca34();
      lVar9 = *plVar5;
      if (lVar9 != 0) {
        lVar8 = plVar5[1];
        while (lVar8 != lVar9) {
          lVar8 = lVar8 + -0x20;
          FUN_10bd22954();
        }
        plVar5[1] = lVar9;
        __ZdlPv(*plVar5);
      }
      return plVar5;
    }
    return plVar5;
  }
  if ((int)plVar5 != 0) {
    func_0x00010bd3cc84();
    FUN_10bd3bca4();
    plVar5 = param_2;
    func_0x00010bd3ca68();
    param_3 = param_2;
    if ((int)plVar5 != 0) goto LAB_10bd3b9f4;
  }
  return plVar5;
}



/* Entry: 10bd3ba68; end: 10bd3bb03;  */

long * FUN_10bd3ba68(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5
                    )

{
  ulong uVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar9;
  ulong unaff_x20;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_c8 [32];
  undefined8 uStack_a8;
  long lStack_48;
  
  plVar7 = param_3;
  func_0x00010bd3cd40();
  func_0x00010bd3ba04();
  plVar4 = param_5;
  func_0x00010bd3cc00();
  if ((int)plVar4 != 0) {
    FUN_10bd3bca4(param_4,param_5);
    func_0x00010bd3c96c();
    FUN_10bd3b86c();
    plVar4 = param_4;
    if ((int)param_4 != 0) {
      func_0x00010bd3cc08();
      FUN_10bd3bca4();
      func_0x00010bd3ca70();
      plVar4 = param_3;
      if ((int)param_3 != 0) {
        func_0x00010bd3ce68();
        func_0x00010bd3cc84();
        FUN_10bd3b86c();
        plVar4 = param_3;
        if ((int)param_3 != 0) {
          func_0x00010bd3ca4c();
          func_0x00010bd3cd40();
          func_0x00010bd3c95c();
          plVar4 = &lStack_48;
          FUN_10bd2ae08();
          func_0x00010bd3ca4c();
          FUN_10bd2a9e4();
          func_0x00010bd3cbc0();
          FUN_10bd2a9e4();
          func_0x00010bd3ca80();
          func_0x00010bd3c884(extraout_x8);
          if ((bool)in_ZR) {
            return plVar4;
          }
          ___stack_chk_fail();
          func_0x00010bd3ca34();
          func_0x00010bd3c95c();
          uVar3 = unaff_x20 - 2 == 0;
          plVar6 = plVar4;
          uStack_a8 = extraout_x8_00;
          if (1 < (long)unaff_x20) {
            uVar10 = unaff_x20 - 2 >> 1;
            uVar1 = (long)plVar7 - (long)plVar4 >> 5;
            uVar3 = uVar10 == uVar1;
            if ((long)uVar1 <= (long)uVar10) {
              lVar9 = (long)plVar7 - (long)plVar4 >> 4;
              uVar1 = lVar9 + 1;
              plVar6 = plVar4 + uVar1 * 4;
              uVar2 = lVar9 + 2;
              uVar3 = uVar2 == unaff_x20;
              plVar5 = plVar6;
              uVar11 = uVar1;
              if ((long)uVar2 < (long)unaff_x20) {
                plVar5 = plVar4;
                func_0x00010bd3cd84();
                uVar3 = (int)plVar5 == 0;
                plVar5 = plVar6 + 4;
                uVar11 = uVar2;
                if ((bool)uVar3) {
                  plVar5 = plVar6;
                  uVar11 = uVar1;
                }
              }
              plVar6 = plVar5;
              func_0x00010bd3cc00();
              if (((ulong)plVar6 & 1) == 0) {
                FUN_10bd2ae08(auStack_c8,plVar7);
                do {
                  plVar6 = plVar5;
                  func_0x00010bd3c96c();
                  FUN_10bd2a9e4();
                  uVar3 = uVar10 == uVar11;
                  if ((long)uVar10 < (long)uVar11) break;
                  uVar2 = uVar11 << 1 | 1;
                  plVar7 = plVar4 + uVar2 * 4;
                  uVar1 = uVar11 * 2 + 2;
                  uVar3 = uVar1 == unaff_x20;
                  plVar5 = plVar7;
                  uVar11 = uVar2;
                  if ((long)uVar1 < (long)unaff_x20) {
                    func_0x00010bd3cc00();
                    uVar3 = (int)plVar5 == 0;
                    plVar5 = plVar7 + 4;
                    uVar11 = uVar1;
                    if ((bool)uVar3) {
                      plVar5 = plVar7;
                      uVar11 = uVar2;
                    }
                  }
                  plVar7 = plVar5;
                  FUN_10bd3b86c(plVar5,auStack_c8);
                } while ((int)plVar7 == 0);
                FUN_10bd2a9e4(plVar6,auStack_c8);
                func_0x00010bd3ca80();
              }
            }
          }
          func_0x00010bd3c884(uStack_a8);
          if ((bool)uVar3) {
            return plVar6;
          }
          ___stack_chk_fail();
          func_0x00010bd3ca80();
          func_0x00010bd3ca34();
          lVar9 = *plVar6;
          if (lVar9 != 0) {
            lVar8 = plVar6[1];
            while (lVar8 != lVar9) {
              lVar8 = lVar8 + -0x20;
              FUN_10bd22954();
            }
            plVar6[1] = lVar9;
            __ZdlPv(*plVar6);
          }
          return plVar6;
        }
      }
    }
  }
  return plVar4;
}



/* Entry: 10bd3bb04; end: 10bd3bca3;  */

long * FUN_10bd3bb04(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  long lVar11;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_138 [32];
  undefined8 uStack_118;
  long alStack_b8 [4];
  undefined8 uStack_98;
  ulong uStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  lVar11 = param_1;
  uVar10 = param_2;
  func_0x00010bd3c95c();
  lVar11 = (long)(uVar10 - lVar11) >> 5;
  uVar2 = lVar11 == 5;
  plVar4 = (long *)0x1;
  uStack_48 = extraout_x8;
  switch(lVar11) {
  case 0:
  case 1:
    goto LAB_10bd3bc64;
  case 2:
    param_2 = param_2 - 0x20;
    func_0x00010bd3ca4c();
    iVar3 = (int)plVar4;
    FUN_10bd3b86c();
    if (iVar3 != 0) {
      func_0x00010bd3cc84();
      FUN_10bd3bca4();
    }
    break;
  case 3:
    param_3 = param_2 - 0x20;
    FUN_10bd3b970(param_1,param_1 + 0x20);
    break;
  case 4:
    func_0x00010bd3ced8();
    func_0x00010bd3ba04(param_1);
    break;
  case 5:
    func_0x00010bd3ced8();
    FUN_10bd3ba68(param_1);
    break;
  default:
    param_3 = param_1 + 0x40;
    FUN_10bd3b970(param_1,param_1 + 0x20);
    lVar11 = 0;
    iVar3 = 0;
    for (uVar10 = param_1 + 0x60; uVar2 = uVar10 == param_2, !(bool)uVar2; uVar10 = uVar10 + 0x20) {
      uVar13 = uVar10;
      func_0x00010bd3cc00();
      if ((int)uVar13 != 0) {
        FUN_10bd2ae08(auStack_68,uVar10);
        lVar12 = lVar11;
        do {
          FUN_10bd2a9e4(param_1 + lVar12 + 0x60,param_1 + lVar12 + 0x40);
          lVar6 = param_1;
          if (lVar12 == -0x40) goto LAB_10bd3bc28;
          puVar5 = auStack_68;
          FUN_10bd3b86c(puVar5,param_1 + lVar12 + 0x20);
          lVar12 = lVar12 + -0x20;
        } while (((ulong)puVar5 & 1) != 0);
        lVar6 = param_1 + lVar12 + 0x60;
LAB_10bd3bc28:
        FUN_10bd2a9e4(lVar6,auStack_68);
        iVar3 = iVar3 + 1;
        func_0x00010bd3ca80();
        if (iVar3 == 8) {
          uVar2 = uVar10 + 0x20 == param_2;
          plVar4 = (long *)(ulong)(byte)uVar2;
          goto LAB_10bd3bc64;
        }
      }
      lVar11 = lVar11 + 0x20;
    }
  }
  plVar4 = (long *)0x1;
LAB_10bd3bc64:
  func_0x00010bd3c884(uStack_48);
  if ((bool)uVar2) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x00010bd3ca80();
  func_0x00010bd3ca34();
  pcStack_78 = FUN_10bd3bca4;
  uStack_90 = param_2;
  plStack_88 = plVar4;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010bd3cd40();
  func_0x00010bd3c95c();
  plVar4 = alStack_b8;
  uStack_98 = extraout_x8_00;
  FUN_10bd2ae08();
  func_0x00010bd3ca4c();
  FUN_10bd2a9e4();
  func_0x00010bd3cbc0();
  FUN_10bd2a9e4();
  func_0x00010bd3ca80();
  func_0x00010bd3c884(uStack_98);
  if ((bool)uVar2) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x00010bd3ca34();
  func_0x00010bd3c95c();
  uVar2 = param_2 - 2 == 0;
  plVar8 = plVar4;
  uStack_118 = extraout_x8_01;
  if (1 < (long)param_2) {
    uVar13 = param_2 - 2 >> 1;
    uVar10 = param_3 - (long)plVar4 >> 5;
    uVar2 = uVar13 == uVar10;
    if ((long)uVar10 <= (long)uVar13) {
      lVar11 = param_3 - (long)plVar4 >> 4;
      uVar10 = lVar11 + 1;
      plVar8 = plVar4 + uVar10 * 4;
      uVar1 = lVar11 + 2;
      uVar2 = uVar1 == param_2;
      plVar7 = plVar8;
      uVar14 = uVar10;
      if ((long)uVar1 < (long)param_2) {
        plVar7 = plVar4;
        func_0x00010bd3cd84();
        uVar2 = (int)plVar7 == 0;
        plVar7 = plVar8 + 4;
        uVar14 = uVar1;
        if ((bool)uVar2) {
          plVar7 = plVar8;
          uVar14 = uVar10;
        }
      }
      plVar8 = plVar7;
      func_0x00010bd3cc00();
      if (((ulong)plVar8 & 1) == 0) {
        FUN_10bd2ae08(auStack_138,param_3);
        do {
          plVar8 = plVar7;
          func_0x00010bd3c96c();
          FUN_10bd2a9e4();
          uVar2 = uVar13 == uVar14;
          if ((long)uVar13 < (long)uVar14) break;
          uVar1 = uVar14 << 1 | 1;
          plVar9 = plVar4 + uVar1 * 4;
          uVar10 = uVar14 * 2 + 2;
          uVar2 = uVar10 == param_2;
          plVar7 = plVar9;
          uVar14 = uVar1;
          if ((long)uVar10 < (long)param_2) {
            func_0x00010bd3cc00();
            uVar2 = (int)plVar7 == 0;
            plVar7 = plVar9 + 4;
            uVar14 = uVar10;
            if ((bool)uVar2) {
              plVar7 = plVar9;
              uVar14 = uVar1;
            }
          }
          plVar9 = plVar7;
          FUN_10bd3b86c(plVar7,auStack_138);
        } while ((int)plVar9 == 0);
        FUN_10bd2a9e4(plVar8,auStack_138);
        func_0x00010bd3ca80();
      }
    }
  }
  func_0x00010bd3c884(uStack_118);
  if ((bool)uVar2) {
    return plVar8;
  }
  ___stack_chk_fail();
  func_0x00010bd3ca80();
  func_0x00010bd3ca34();
  lVar11 = *plVar8;
  if (lVar11 != 0) {
    lVar12 = plVar8[1];
    while (lVar12 != lVar11) {
      lVar12 = lVar12 + -0x20;
      FUN_10bd22954();
    }
    plVar8[1] = lVar11;
    __ZdlPv(*plVar8);
  }
  return plVar8;
}



/* Entry: 10bd3bca4; end: 10bd3bd13;  */

long * FUN_10bd3bca4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar9;
  ulong unaff_x20;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_c8 [32];
  undefined8 uStack_a8;
  long alStack_48 [4];
  undefined8 uStack_28;
  
  func_0x00010bd3cd40();
  func_0x00010bd3c95c();
  plVar4 = alStack_48;
  uStack_28 = extraout_x8;
  FUN_10bd2ae08();
  func_0x00010bd3ca4c();
  FUN_10bd2a9e4();
  func_0x00010bd3cbc0();
  FUN_10bd2a9e4();
  func_0x00010bd3ca80();
  func_0x00010bd3c884(uStack_28);
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x00010bd3ca34();
  func_0x00010bd3c95c();
  uVar3 = unaff_x20 - 2 == 0;
  plVar6 = plVar4;
  uStack_a8 = extraout_x8_00;
  if (1 < (long)unaff_x20) {
    uVar10 = unaff_x20 - 2 >> 1;
    uVar1 = param_3 - (long)plVar4 >> 5;
    uVar3 = uVar10 == uVar1;
    if ((long)uVar1 <= (long)uVar10) {
      lVar9 = param_3 - (long)plVar4 >> 4;
      uVar1 = lVar9 + 1;
      plVar6 = plVar4 + uVar1 * 4;
      uVar2 = lVar9 + 2;
      uVar3 = uVar2 == unaff_x20;
      plVar5 = plVar6;
      uVar11 = uVar1;
      if ((long)uVar2 < (long)unaff_x20) {
        plVar5 = plVar4;
        func_0x00010bd3cd84();
        uVar3 = (int)plVar5 == 0;
        plVar5 = plVar6 + 4;
        uVar11 = uVar2;
        if ((bool)uVar3) {
          plVar5 = plVar6;
          uVar11 = uVar1;
        }
      }
      plVar6 = plVar5;
      func_0x00010bd3cc00();
      if (((ulong)plVar6 & 1) == 0) {
        FUN_10bd2ae08(auStack_c8,param_3);
        do {
          plVar6 = plVar5;
          func_0x00010bd3c96c();
          FUN_10bd2a9e4();
          uVar3 = uVar10 == uVar11;
          if ((long)uVar10 < (long)uVar11) break;
          uVar2 = uVar11 << 1 | 1;
          plVar7 = plVar4 + uVar2 * 4;
          uVar1 = uVar11 * 2 + 2;
          uVar3 = uVar1 == unaff_x20;
          plVar5 = plVar7;
          uVar11 = uVar2;
          if ((long)uVar1 < (long)unaff_x20) {
            func_0x00010bd3cc00();
            uVar3 = (int)plVar5 == 0;
            plVar5 = plVar7 + 4;
            uVar11 = uVar1;
            if ((bool)uVar3) {
              plVar5 = plVar7;
              uVar11 = uVar2;
            }
          }
          plVar7 = plVar5;
          FUN_10bd3b86c(plVar5,auStack_c8);
        } while ((int)plVar7 == 0);
        FUN_10bd2a9e4(plVar6,auStack_c8);
        func_0x00010bd3ca80();
      }
    }
  }
  func_0x00010bd3c884(uStack_a8);
  if ((bool)uVar3) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x00010bd3ca80();
  func_0x00010bd3ca34();
  lVar9 = *plVar6;
  if (lVar9 != 0) {
    lVar8 = plVar6[1];
    while (lVar8 != lVar9) {
      lVar8 = lVar8 + -0x20;
      FUN_10bd22954();
    }
    plVar6[1] = lVar9;
    __ZdlPv(*plVar6);
  }
  return plVar6;
}



/* Entry: 10bd3bd14; end: 10bd3be57;  */

long * FUN_10bd3bd14(long *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 extraout_x8;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  func_0x00010bd3c95c();
  uVar3 = param_2 - 2 == 0;
  plVar5 = param_1;
  uStack_58 = extraout_x8;
  if (1 < (long)param_2) {
    uVar9 = param_2 - 2 >> 1;
    uVar1 = param_3 - (long)param_1 >> 5;
    uVar3 = uVar9 == uVar1;
    if ((long)uVar1 <= (long)uVar9) {
      lVar8 = param_3 - (long)param_1 >> 4;
      uVar1 = lVar8 + 1;
      plVar5 = param_1 + uVar1 * 4;
      uVar2 = lVar8 + 2;
      uVar3 = uVar2 == param_2;
      plVar4 = plVar5;
      uVar10 = uVar1;
      if ((long)uVar2 < (long)param_2) {
        plVar4 = param_1;
        func_0x00010bd3cd84();
        uVar3 = (int)plVar4 == 0;
        plVar4 = plVar5 + 4;
        uVar10 = uVar2;
        if ((bool)uVar3) {
          plVar4 = plVar5;
          uVar10 = uVar1;
        }
      }
      plVar5 = plVar4;
      func_0x00010bd3cc00();
      if (((ulong)plVar5 & 1) == 0) {
        FUN_10bd2ae08(auStack_78,param_3);
        do {
          plVar5 = plVar4;
          func_0x00010bd3c96c();
          FUN_10bd2a9e4();
          uVar3 = uVar9 == uVar10;
          if ((long)uVar9 < (long)uVar10) break;
          uVar2 = uVar10 << 1 | 1;
          plVar6 = param_1 + uVar2 * 4;
          uVar1 = uVar10 * 2 + 2;
          uVar3 = uVar1 == param_2;
          plVar4 = plVar6;
          uVar10 = uVar2;
          if ((long)uVar1 < (long)param_2) {
            func_0x00010bd3cc00();
            uVar3 = (int)plVar4 == 0;
            plVar4 = plVar6 + 4;
            uVar10 = uVar1;
            if ((bool)uVar3) {
              plVar4 = plVar6;
              uVar10 = uVar2;
            }
          }
          plVar6 = plVar4;
          FUN_10bd3b86c(plVar4,auStack_78);
        } while ((int)plVar6 == 0);
        FUN_10bd2a9e4(plVar5,auStack_78);
        func_0x00010bd3ca80();
      }
    }
  }
  func_0x00010bd3c884(uStack_58);
  if ((bool)uVar3) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x00010bd3ca80();
  func_0x00010bd3ca34();
  lVar8 = *plVar5;
  if (lVar8 != 0) {
    lVar7 = plVar5[1];
    while (lVar7 != lVar8) {
      lVar7 = lVar7 + -0x20;
      FUN_10bd22954();
    }
    plVar5[1] = lVar8;
    __ZdlPv(*plVar5);
  }
  return plVar5;
}



/* Entry: 10bd3be58; end: 10bd3be9f;  */

long * FUN_10bd3be58(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      FUN_10bd22954();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10bd3bea0; end: 10bd3beef;  */

undefined8 * FUN_10bd3bea0(undefined8 *param_1)

{
  long *plVar1;
  
  (**(code **)(*(long *)param_1[1] + 0x78))((long *)param_1[1],*param_1,param_1[2]);
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10bd3bef0; end: 10bd3c0f7;  */

void FUN_10bd3bef0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                  undefined8 *param_5,long param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puStack_90;
  undefined8 uStack_68;
  
  if (param_4 < 2) {
    return;
  }
  if (param_4 == 2) {
    puVar3 = param_1;
    func_0x00010bd3ce58(param_1,param_2[-1],*param_1);
    if ((int)puVar3 == 0) {
      return;
    }
    uVar6 = *param_1;
    *param_1 = param_2[-1];
    param_2[-1] = uVar6;
    return;
  }
  if (0x80 < (long)param_4) {
    uVar12 = param_4 >> 1;
    puVar3 = param_1 + uVar12;
    puVar2 = param_2;
    lVar10 = param_6;
    func_0x00010bd3cf04();
    if ((long)param_4 <= lVar10) {
      FUN_10bd3c268();
      puVar2 = param_5 + uVar12;
      func_0x00010bd3c978();
      FUN_10bd3c268();
      puVar11 = param_5 + param_4;
      puVar5 = puVar2;
      while( true ) {
        if (param_5 == puVar2) {
          for (; puVar5 != puVar11; puVar5 = puVar5 + 1) {
            *param_1 = *puVar5;
            param_1 = param_1 + 1;
          }
          return;
        }
        if (puVar5 == puVar11) break;
        func_0x00010bd3ce58();
        bVar1 = (int)puVar3 == 0;
        puVar4 = puVar5;
        if (bVar1) {
          puVar4 = param_5;
        }
        lVar10 = 0;
        if (bVar1) {
          lVar10 = 8;
        }
        param_5 = (undefined8 *)((long)param_5 + lVar10);
        lVar10 = 8;
        if (bVar1) {
          lVar10 = 0;
        }
        puVar5 = (undefined8 *)((long)puVar5 + lVar10);
        *param_1 = *puVar4;
        param_1 = param_1 + 1;
      }
      for (; param_5 != puVar2; param_5 = param_5 + 1) {
        *param_1 = *param_5;
        param_1 = param_1 + 1;
      }
      return;
    }
    FUN_10bd3bef0();
    func_0x00010bd3c978();
    FUN_10bd3bef0();
    func_0x00010bd3cf04();
    puVar11 = puVar3;
    lVar10 = param_4 - (param_4 >> 1);
    puStack_90 = param_2;
    while( true ) {
      if (lVar10 == 0) {
        return;
      }
      if (lVar10 <= param_6 || (long)uVar12 <= param_6) break;
      lVar14 = 0;
      puVar4 = puVar11;
      puVar5 = puVar11;
      while( true ) {
        lVar8 = uVar12 - lVar14;
        if (lVar8 == 0) {
          return;
        }
        func_0x00010bd3cd7c();
        if (((ulong)puVar3 & 1) != 0) break;
        puVar5 = puVar5 + 1;
        lVar14 = lVar14 + 1;
        puVar4 = puVar4 + 1;
      }
      if (lVar8 < lVar10) {
        lVar8 = lVar10 / 2;
        puVar9 = puVar2 + lVar8;
        uVar16 = (long)puVar2 - (long)puVar4 >> 3;
        puVar13 = puVar5;
        while (uVar16 != 0) {
          uVar15 = uVar16 >> 1;
          puVar3 = param_3;
          FUN_10bd3c0f8(param_3,*puVar9,puVar13[uVar15]);
          uVar7 = uVar16 + (uVar16 >> 1 ^ 0xffffffffffffffff);
          uVar16 = uVar15;
          if ((int)puVar3 == 0) {
            uVar16 = uVar7;
            puVar13 = puVar13 + uVar15 + 1;
          }
        }
        uVar16 = (long)puVar13 - (long)puVar4 >> 3;
      }
      else {
        if (uVar12 - 1 == lVar14) {
          uVar6 = puVar11[lVar14];
          puVar11[lVar14] = *puVar2;
          *puVar2 = uVar6;
          return;
        }
        uVar16 = lVar8 / 2;
        puVar13 = puVar5 + uVar16;
        uStack_68 = *param_3;
        uVar7 = (long)puStack_90 - (long)puVar2 >> 3;
        puVar3 = puVar2;
        while (puVar9 = puVar3, uVar7 != 0) {
          uVar15 = uVar7 >> 1;
          puVar4 = &uStack_68;
          FUN_10bd3c0f8(puVar4,puVar9[uVar15],puVar11[uVar16 + lVar14]);
          uVar7 = uVar7 + (uVar7 >> 1 ^ 0xffffffffffffffff);
          puVar3 = puVar9 + uVar15 + 1;
          if ((int)puVar4 == 0) {
            uVar7 = uVar15;
            puVar3 = puVar9;
          }
        }
        lVar8 = (long)puVar9 - (long)puVar2 >> 3;
      }
      uVar7 = (uVar12 - uVar16) - lVar14;
      puVar4 = puVar13;
      FUN_10bd358d8(puVar13,puVar2,puVar9);
      if ((long)(uVar16 + lVar8) < (long)(((uVar12 + lVar10) - (uVar16 + lVar8)) - lVar14)) {
        FUN_10bd3c444(puVar5,puVar13,puVar4,param_3,uVar16,lVar8,param_5,param_6);
        puVar3 = puVar5;
        uVar12 = uVar7;
        puVar2 = puVar9;
        puVar11 = puVar4;
        lVar10 = lVar10 - lVar8;
      }
      else {
        puVar3 = puVar4;
        FUN_10bd3c444(puVar4,puVar9,puStack_90,param_3,uVar7,lVar10 - lVar8,param_5,param_6);
        uVar12 = uVar16;
        puVar2 = puVar13;
        puVar11 = puVar5;
        lVar10 = lVar8;
        puStack_90 = puVar4;
      }
    }
    if (lVar10 < (long)uVar12) {
      for (lVar10 = 0; (undefined8 *)((long)puVar2 + lVar10) != puStack_90; lVar10 = lVar10 + 8) {
        *(undefined8 *)((long)param_5 + lVar10) = *(undefined8 *)((long)puVar2 + lVar10);
      }
      puVar5 = (undefined8 *)((long)param_5 + lVar10);
      while( true ) {
        puStack_90 = puStack_90 + -1;
        if (puVar5 == param_5) {
          return;
        }
        if (puVar2 == puVar11) break;
        func_0x00010bd3cd7c();
        puVar4 = puVar5;
        puVar9 = puVar2 + -1;
        puVar13 = puVar2;
        if ((int)puVar3 == 0) {
          puVar4 = puVar5 + -1;
          puVar9 = puVar2;
          puVar13 = puVar5;
        }
        puVar2 = puVar9;
        *puStack_90 = puVar13[-1];
        puVar5 = puVar4;
      }
      while (puVar5 != param_5) {
        puVar5 = puVar5 + -1;
        *puStack_90 = *puVar5;
        puStack_90 = puStack_90 + -1;
      }
      return;
    }
    lVar10 = -(long)param_5;
    puVar4 = param_5;
    for (puVar5 = puVar11; puVar5 != puVar2; puVar5 = puVar5 + 1) {
      *puVar4 = *puVar5;
      lVar10 = lVar10 + -8;
      puVar4 = puVar4 + 1;
    }
    while( true ) {
      if (puVar4 == param_5) {
        return;
      }
      if (puVar2 == puStack_90) break;
      func_0x00010bd3cd7c();
      bVar1 = (int)puVar3 == 0;
      puVar5 = puVar2;
      if (bVar1) {
        puVar5 = param_5;
      }
      lVar14 = 8;
      if (bVar1) {
        lVar14 = 0;
      }
      puVar2 = (undefined8 *)((long)puVar2 + lVar14);
      lVar14 = 0;
      if (bVar1) {
        lVar14 = 8;
      }
      param_5 = (undefined8 *)((long)param_5 + lVar14);
      *puVar11 = *puVar5;
      puVar11 = puVar11 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(puVar11,param_5,-((long)param_5 + lVar10));
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  lVar10 = 0;
  puVar2 = param_1;
  puVar3 = param_1;
  do {
    puVar3 = puVar3 + 1;
    if (puVar3 == param_2) {
      return;
    }
    func_0x00010bd3ce58();
    if ((int)puVar2 != 0) {
      uVar6 = *puVar3;
      lVar14 = lVar10;
      do {
        lVar8 = lVar14;
        puVar11 = (undefined8 *)((long)param_1 + lVar8);
        puVar11[1] = *puVar11;
        puVar5 = param_1;
        if (lVar8 == 0) goto LAB_10bd3bfd8;
        puVar2 = param_3;
        FUN_10bd3c0f8(param_3,uVar6,puVar11[-1]);
        lVar14 = lVar8 + -8;
      } while (((ulong)puVar2 & 1) != 0);
      puVar5 = (undefined8 *)((long)param_1 + lVar8);
LAB_10bd3bfd8:
      *puVar5 = uVar6;
    }
    lVar10 = lVar10 + 8;
  } while( true );
}



/* Entry: 10bd3c0f8; end: 10bd3c267;  */

uint FUN_10bd3c0f8(ulong *param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar9 = param_2;
  func_0x00010bd3cbf8();
  uVar6 = *param_1;
  func_0x00010b91adc8();
  uVar10 = 1;
  switch((int)uVar6) {
  case 1:
    func_0x00010bd3ca58();
    iVar3 = (int)uVar6;
    FUN_10bd1d784();
    iVar4 = iVar3;
    func_0x00010bd3ca4c();
    FUN_10bd1d784();
    bVar2 = SBORROW4(iVar3,iVar4);
    bVar1 = iVar3 - iVar4 < 0;
    goto code_r0x00010bd3c200;
  case 2:
    func_0x00010bd3ca58();
    FUN_10bd1daa0();
    uVar8 = uVar6;
    func_0x00010bd3ca4c();
    FUN_10bd1daa0();
    bVar2 = SBORROW8(uVar6,uVar8);
    bVar1 = (long)(uVar6 - uVar8) < 0;
code_r0x00010bd3c200:
    uVar10 = (uint)(bVar1 != bVar2);
    break;
  case 3:
    func_0x00010bd3ca58();
    uVar5 = (uint)uVar6;
    FUN_10bd1ddc4();
    uVar10 = uVar5;
    func_0x00010bd3ca4c();
    FUN_10bd1ddc4();
    bVar1 = uVar10 <= uVar5;
    goto code_r0x00010bd3c224;
  case 4:
    func_0x00010bd3ca58();
    FUN_10bd1e0e0();
    uVar8 = uVar6;
    func_0x00010bd3ca4c();
    FUN_10bd1e0e0();
    bVar1 = uVar8 <= uVar6;
code_r0x00010bd3c224:
    uVar10 = (uint)!bVar1;
    break;
  case 7:
    func_0x00010bd3ca58();
    uVar5 = (uint)uVar6;
    FUN_10bd1ea8c();
    uVar10 = uVar5;
    func_0x00010bd3ca4c();
    FUN_10bd1ea8c();
    uVar10 = uVar10 & (uVar5 ^ 1);
    break;
  case 9:
    FUN_10bd1edd0(auStack_58,uVar9,param_2,*param_1);
    func_0x00010bd3ca4c(auStack_70);
    FUN_10bd1edd0();
    puVar7 = auStack_58;
    func_0x000107c27bd4(puVar7,auStack_70);
    uVar10 = (uint)((char)puVar7 < '\0');
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  }
  return uVar10;
}



/* Entry: 10bd3c268; end: 10bd3c443;  */

void FUN_10bd3c268(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      puVar3 = param_1;
      func_0x00010bd3cc38(param_1,param_2[-1],*param_1);
      if ((int)puVar3 == 0) {
        *param_5 = *param_1;
        uVar5 = param_2[-1];
      }
      else {
        *param_5 = param_2[-1];
        uVar5 = *param_1;
      }
      param_5[1] = uVar5;
    }
    else if (param_4 == 1) {
      *param_5 = *param_1;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        lVar6 = 0;
        *param_5 = *param_1;
        puVar3 = param_1;
        puVar7 = param_5;
        while (puVar3 = puVar3 + 1, puVar3 != param_2) {
          func_0x00010bd3cc38();
          if ((int)param_1 == 0) {
            puVar7[1] = *puVar3;
          }
          else {
            puVar7[1] = *puVar7;
            for (lVar8 = lVar6; puVar4 = param_5, lVar8 != 0; lVar8 = lVar8 + -8) {
              func_0x00010bd3cc38();
              puVar4 = (undefined8 *)((long)param_5 + lVar8);
              if ((int)param_1 == 0) break;
              *(undefined8 *)((long)param_5 + lVar8) = ((undefined8 *)((long)param_5 + lVar8))[-1];
            }
            *puVar4 = *puVar3;
          }
          lVar6 = lVar6 + 8;
          puVar7 = puVar7 + 1;
        }
      }
    }
    else {
      uVar9 = param_4 >> 1;
      puVar3 = param_1 + uVar9;
      FUN_10bd3bef0(param_1,puVar3,param_3,uVar9,param_5,uVar9);
      lVar6 = param_4 - (param_4 >> 1);
      puVar4 = puVar3;
      FUN_10bd3bef0(puVar3,param_2,param_3,lVar6,param_5 + uVar9,lVar6);
      puVar7 = puVar3;
      for (; param_1 != puVar3; param_1 = (undefined8 *)((long)param_1 + lVar6)) {
        if (puVar7 == param_2) {
          for (; param_1 != puVar3; param_1 = param_1 + 1) {
            *param_5 = *param_1;
            param_5 = param_5 + 1;
          }
          return;
        }
        func_0x00010bd3cc38();
        bVar2 = (int)puVar4 == 0;
        puVar1 = puVar7;
        if (bVar2) {
          puVar1 = param_1;
        }
        lVar6 = 8;
        if (bVar2) {
          lVar6 = 0;
        }
        puVar7 = (undefined8 *)((long)puVar7 + lVar6);
        lVar6 = 0;
        if (bVar2) {
          lVar6 = 8;
        }
        *param_5 = *puVar1;
        param_5 = param_5 + 1;
      }
      for (; puVar7 != param_2; puVar7 = puVar7 + 1) {
        *param_5 = *puVar7;
        param_5 = param_5 + 1;
      }
    }
  }
  return;
}



/* Entry: 10bd3c444; end: 10bd3c7c7;  */

void FUN_10bd3c444(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5,long param_6,undefined8 *param_7,long param_8)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puStack_90;
  undefined8 uStack_68;
  
  puVar3 = param_1;
  puStack_90 = param_3;
  while( true ) {
    if (param_6 == 0) {
      return;
    }
    if (param_6 <= param_8 || param_5 <= param_8) break;
    lVar13 = 0;
    puVar5 = puVar3;
    puVar6 = puVar3;
    while( true ) {
      lVar15 = param_5 - lVar13;
      if (lVar15 == 0) {
        return;
      }
      func_0x00010bd3cd7c();
      if (((ulong)param_1 & 1) != 0) break;
      puVar6 = puVar6 + 1;
      lVar13 = lVar13 + 1;
      puVar5 = puVar5 + 1;
    }
    if (lVar15 < param_6) {
      lVar9 = param_6 / 2;
      puVar11 = param_2 + lVar9;
      uVar1 = (long)param_2 - (long)puVar5 >> 3;
      puVar12 = puVar6;
      while (uVar1 != 0) {
        uVar14 = uVar1 >> 1;
        puVar3 = param_4;
        FUN_10bd3c0f8(param_4,*puVar11,puVar12[uVar14]);
        uVar10 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
        uVar1 = uVar14;
        if ((int)puVar3 == 0) {
          uVar1 = uVar10;
          puVar12 = puVar12 + uVar14 + 1;
        }
      }
      lVar15 = (long)puVar12 - (long)puVar5 >> 3;
    }
    else {
      if (param_5 + -1 == lVar13) {
        uVar8 = puVar3[lVar13];
        puVar3[lVar13] = *param_2;
        *param_2 = uVar8;
        return;
      }
      lVar15 = lVar15 / 2;
      puVar12 = puVar6 + lVar15;
      uStack_68 = *param_4;
      uVar1 = (long)puStack_90 - (long)param_2 >> 3;
      puVar5 = param_2;
      while (puVar11 = puVar5, uVar1 != 0) {
        uVar10 = uVar1 >> 1;
        puVar4 = &uStack_68;
        FUN_10bd3c0f8(puVar4,puVar11[uVar10],puVar3[lVar15 + lVar13]);
        uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
        puVar5 = puVar11 + uVar10 + 1;
        if ((int)puVar4 == 0) {
          uVar1 = uVar10;
          puVar5 = puVar11;
        }
      }
      lVar9 = (long)puVar11 - (long)param_2 >> 3;
    }
    lVar7 = (param_5 - lVar15) - lVar13;
    puVar5 = puVar12;
    FUN_10bd358d8(puVar12,param_2,puVar11);
    if (lVar15 + lVar9 < ((param_5 + param_6) - (lVar15 + lVar9)) - lVar13) {
      FUN_10bd3c444(puVar6,puVar12,puVar5,param_4,lVar15,lVar9,param_7,param_8);
      param_1 = puVar6;
      param_5 = lVar7;
      param_2 = puVar11;
      puVar3 = puVar5;
      param_6 = param_6 - lVar9;
    }
    else {
      param_1 = puVar5;
      FUN_10bd3c444(puVar5,puVar11,puStack_90,param_4,lVar7,param_6 - lVar9,param_7,param_8);
      param_5 = lVar15;
      param_2 = puVar12;
      puVar3 = puVar6;
      param_6 = lVar9;
      puStack_90 = puVar5;
    }
  }
  if (param_6 < param_5) {
    for (lVar13 = 0; (undefined8 *)((long)param_2 + lVar13) != puStack_90; lVar13 = lVar13 + 8) {
      *(undefined8 *)((long)param_7 + lVar13) = *(undefined8 *)((long)param_2 + lVar13);
    }
    puVar6 = (undefined8 *)((long)param_7 + lVar13);
    while (puStack_90 = puStack_90 + -1, puVar6 != param_7) {
      if (param_2 == puVar3) {
        while (puVar6 != param_7) {
          puVar6 = puVar6 + -1;
          *puStack_90 = *puVar6;
          puStack_90 = puStack_90 + -1;
        }
        return;
      }
      func_0x00010bd3cd7c();
      puVar5 = puVar6;
      puVar11 = param_2 + -1;
      puVar12 = param_2;
      if ((int)param_1 == 0) {
        puVar5 = puVar6 + -1;
        puVar11 = param_2;
        puVar12 = puVar6;
      }
      param_2 = puVar11;
      *puStack_90 = puVar12[-1];
      puVar6 = puVar5;
    }
  }
  else {
    lVar13 = -(long)param_7;
    puVar5 = param_7;
    for (puVar6 = puVar3; puVar6 != param_2; puVar6 = puVar6 + 1) {
      *puVar5 = *puVar6;
      lVar13 = lVar13 + -8;
      puVar5 = puVar5 + 1;
    }
    for (; puVar5 != param_7; param_7 = (undefined8 *)((long)param_7 + lVar15)) {
      if (param_2 == puStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(puVar3,param_7,-((long)param_7 + lVar13));
        return;
      }
      func_0x00010bd3cd7c();
      bVar2 = (int)param_1 == 0;
      puVar6 = param_2;
      if (bVar2) {
        puVar6 = param_7;
      }
      lVar15 = 8;
      if (bVar2) {
        lVar15 = 0;
      }
      param_2 = (undefined8 *)((long)param_2 + lVar15);
      lVar15 = 0;
      if (bVar2) {
        lVar15 = 8;
      }
      *puVar3 = *puVar6;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}



/* Entry: 10bd3c7c8; end: 10bd3c86b;  */

ulong FUN_10bd3c7c8(ulong param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uStack_48;
  
  uVar2 = param_1;
  while( true ) {
    if (param_2 <= uVar2) {
      return uVar2;
    }
    func_0x00010bd3cbc0();
    func_0x000107c302a4();
    if (param_1 == 0) break;
    uVar1 = param_3[1];
    FUN_10bcefa5c();
    FUN_10bcee5e4();
    uVar2 = param_1;
    if (uVar1 == 0) {
      param_1 = param_3[2];
      func_0x00010bd1b8b8(param_1,param_3[3]);
      FUN_10bd369c4();
    }
    else {
      param_1 = *param_3;
      func_0x000107c2845c(param_1,uStack_48);
    }
  }
  return 0;
}



/* Entry: 10bd3c86c; end: 10bd3cf0f;  */

void FUN_10bd3c86c(void)

{
  return;
}



/* Entry: 10bd3cf10; end: 10bd3cfc7;  */

void FUN_10bd3cf10(undefined8 *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  uint uStack_34;
  
  while( true ) {
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      return;
    }
    if (param_3 == 0) break;
    uVar2 = param_1[2];
    if (uVar2 == 0) {
      plVar1 = (long *)*param_1;
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 1,&uStack_34);
      if ((int)plVar1 == 0) {
        param_1[2] = 0;
        *(undefined1 *)(param_1 + 4) = 1;
        return;
      }
      uVar2 = (ulong)uStack_34;
      param_1[2] = uVar2;
    }
    if (param_3 <= uVar2) {
      uVar2 = param_3;
    }
    _memcpy(param_1[1],param_2,uVar2);
    param_1[1] = param_1[1] + uVar2;
    param_1[2] = param_1[2] - uVar2;
    param_2 = param_2 + uVar2;
    param_3 = param_3 - uVar2;
    param_1[3] = param_1[3] + uVar2;
  }
  return;
}



/* Entry: 10bd3cfc8; end: 10bd3d033;  */

float FUN_10bd3cfc8(double param_1)

{
  float fVar1;
  
  if (param_1 <= 3.4028234663852886e+38) {
    if (-3.4028234663852886e+38 <= param_1) {
      return (float)param_1;
    }
    if (-3.4028235677973366e+38 <= param_1) {
      fVar1 = -3.4028235e+38;
    }
    else {
      fVar1 = -INFINITY;
    }
  }
  else if (param_1 <= 3.4028235677973366e+38) {
    fVar1 = 3.4028235e+38;
  }
  else {
    fVar1 = INFINITY;
  }
  return fVar1;
}



/* Entry: 10bd3d034; end: 10bd3d1df;  */

double FUN_10bd3d034(long param_1,long *param_2)

{
  long lVar1;
  double dStack_28;
  
  dStack_28 = 0.0;
  lVar1 = param_1;
  _strlen();
  lVar1 = param_1 + lVar1;
  func_0x00010ae87e28(param_1,lVar1,&dStack_28,3);
  if ((int)lVar1 == 0x22) {
    if (dStack_28 <= 1.0) {
      if (dStack_28 < -1.0) {
        dStack_28 = -INFINITY;
      }
    }
    else {
      dStack_28 = INFINITY;
    }
  }
  if (param_2 != (long *)0x0) {
    *param_2 = param_1;
  }
  return dStack_28;
}



/* Entry: 10bd3d1e0; end: 10bd3d313;  */

void FUN_10bd3d1e0(undefined8 param_1,float param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined8 extraout_x8;
  char *pcStack_68;
  undefined8 uStack_60;
  float fStack_54;
  char acStack_50 [24];
  undefined8 uStack_38;
  
  func_0x00010bd3d4e8();
  fStack_54 = param_2;
  uStack_38 = extraout_x8;
  if (param_2 == INFINITY) {
    pcStack_68 = "inf";
    uVar1 = 1;
    goto LAB_10bd3d21c;
  }
  if (param_2 != -INFINITY) {
    uVar1 = !NAN(param_2);
    if (NAN(param_2)) goto LAB_10bd3d308;
    pcStack_68 = "%.*g";
    uStack_60 = 4;
    func_0x00010bd3d4cc(6);
    ___error();
    *param_3 = 0;
    piVar2 = (int *)acStack_50;
    _strtof(piVar2,&pcStack_68);
    if ((((acStack_50[0] == '\0') || (*pcStack_68 != '\0')) || (___error(), *piVar2 != 0)) ||
       (uVar1 = param_2 == fStack_54, !(bool)uVar1)) {
      pcStack_68 = "%.*g";
      uStack_60 = 4;
      func_0x00010bd3d4cc(9);
    }
    FUN_10bd3d368(acStack_50);
    while( true ) {
      func_0x000107c278b8(param_1,acStack_50);
      func_0x00010bd3d4b8(uStack_38);
      if ((bool)uVar1) break;
      ___stack_chk_fail();
LAB_10bd3d308:
      pcStack_68 = "nan";
LAB_10bd3d21c:
      uStack_60 = 3;
LAB_10bd3d240:
      FUN_10bd3d314(acStack_50,0x18,&pcStack_68);
    }
    return;
  }
  pcStack_68 = "-inf";
  uStack_60 = 4;
  uVar1 = 1;
  goto LAB_10bd3d240;
}



/* Entry: 10bd3d314; end: 10bd3d327;  */

ulong FUN_10bd3d314(long param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar1 = param_2 - 1;
  uStack_40 = 0;
  if (param_2 != 0) {
    uStack_40 = uVar1;
  }
  uStack_38 = 0;
  plVar2 = &lStack_48;
  lStack_48 = param_1;
  func_0x000107c2b998(plVar2,&UNK_10ae74340,*param_3,param_3[1],0,0);
  if (((ulong)plVar2 & 1) == 0) {
    ___error();
    *(undefined4 *)plVar2 = 0x16;
    uStack_38 = 0xffffffff;
  }
  else if (param_2 != 0) {
    if (uStack_38 <= uVar1) {
      uVar1 = uStack_38;
    }
    *(undefined1 *)(param_1 + uVar1) = 0;
  }
  return uStack_38;
}



/* Entry: 10bd3d328; end: 10bd3d367;  */

void FUN_10bd3d328(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 in_ZR;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uStack_18;
  
  func_0x00010bd3d4e8();
  func_0x00010bd3d510();
  func_0x00010bd3d4f8();
  func_0x00010bd3d4b8(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = param_1;
  _strchr();
  if (lVar3 == 0) {
    pbVar5 = (byte *)(param_1 + 2);
    while( true ) {
      bVar1 = pbVar5[-2];
      if ((9 < bVar1 - 0x30) &&
         (uVar2 = bVar1 - 0x2b,
         0x3a < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x400000004000005U) == 0)) break;
      pbVar5 = pbVar5 + 1;
    }
    if (bVar1 != 0) {
      bVar1 = pbVar5[-1];
      pbVar5[-2] = 0x2e;
      if ((9 < bVar1 - 0x30) &&
         (((uVar2 = bVar1 - 0x2b, 0x3a < uVar2 ||
           ((1L << ((ulong)uVar2 & 0x3f) & 0x400000004000005U) == 0)) &&
          (pbVar4 = pbVar5, bVar1 != 0)))) {
        do {
          pbVar6 = pbVar4;
          bVar1 = *pbVar6;
          if (bVar1 - 0x30 < 10) break;
          uVar2 = bVar1 - 0x2b;
          pbVar4 = pbVar6 + 1;
        } while ((0x3a < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x400000004000005U) == 0) &&
                 bVar1 != 0);
        pbVar4 = pbVar6;
        _strlen(pbVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(pbVar5 + -1,pbVar6,pbVar4 + 1);
        return;
      }
    }
  }
  return;
}



/* Entry: 10bd3d368; end: 10bd3d477;  */

void FUN_10bd3d368(long param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  lVar3 = param_1;
  _strchr(param_1,0x2e);
  if (lVar3 == 0) {
    pbVar5 = (byte *)(param_1 + 2);
    while( true ) {
      bVar1 = pbVar5[-2];
      if ((9 < bVar1 - 0x30) &&
         (uVar2 = bVar1 - 0x2b,
         0x3a < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x400000004000005U) == 0)) break;
      pbVar5 = pbVar5 + 1;
    }
    if (bVar1 != 0) {
      bVar1 = pbVar5[-1];
      pbVar5[-2] = 0x2e;
      if ((9 < bVar1 - 0x30) &&
         (((uVar2 = bVar1 - 0x2b, 0x3a < uVar2 ||
           ((1L << ((ulong)uVar2 & 0x3f) & 0x400000004000005U) == 0)) &&
          (pbVar4 = pbVar5, bVar1 != 0)))) {
        do {
          pbVar6 = pbVar4;
          bVar1 = *pbVar6;
          if (bVar1 - 0x30 < 10) break;
          uVar2 = bVar1 - 0x2b;
          pbVar4 = pbVar6 + 1;
        } while ((0x3a < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x400000004000005U) == 0) &&
                 bVar1 != 0);
        pbVar4 = pbVar6;
        _strlen(pbVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(pbVar5 + -1,pbVar6,pbVar4 + 1);
        return;
      }
    }
  }
  return;
}



/* Entry: 10bd3d478; end: 10bd3d4b7;  */

/* WARNING: Possible PIC construction at 0x00010bd3d4a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd3d4a4) */
/* WARNING: Removing unreachable block (ram,0x00010bd3d4b4) */
/* WARNING: Removing unreachable block (ram,0x00010bd3d4a8) */

void FUN_10bd3d478(void)

{
  func_0x00010bd3d4e8();
  func_0x00010bd3d510();
  func_0x00010bd3d4f8();
  return;
}



/* Entry: 10bd3d4b8; end: 10bd3d537;  */

void FUN_10bd3d4b8(void)

{
  return;
}



/* Entry: 10bd3d538; end: 10bd3d5df;  */

undefined4 * FUN_10bd3d538(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x1a) = param_3;
  *(undefined8 *)(param_1 + 0x23) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x28] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  *param_1 = 0;
  func_0x00010bcdad2c(param_1 + 0xc,param_1);
  FUN_10bd3d5e0(param_1);
  return param_1;
}



/* Entry: 10bd3d5e0; end: 10bd3d697;  */

void FUN_10bd3d5e0(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined1 *puStack_28;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x98) != 0) {
      iVar1 = *(int *)(param_1 + 0xa0);
      if (iVar1 < *(int *)(param_1 + 0x80)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (*(long *)(param_1 + 0x98),*(long *)(param_1 + 0x78) + (long)iVar1,
                   *(int *)(param_1 + 0x80) - iVar1);
        *(undefined4 *)(param_1 + 0xa0) = 0;
      }
    }
    puStack_28 = (undefined1 *)0x0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    do {
      plVar2 = *(long **)(param_1 + 0x60);
      (**(code **)(*plVar2 + 0x10))(plVar2,&puStack_28,param_1 + 0x80);
      if (((ulong)plVar2 & 1) == 0) {
        uVar3 = 0;
        *(undefined4 *)(param_1 + 0x80) = 0;
        *(undefined1 *)(param_1 + 0x88) = 1;
        goto LAB_10bd3d684;
      }
    } while (*(int *)(param_1 + 0x80) == 0);
    *(undefined1 **)(param_1 + 0x78) = puStack_28;
    uVar3 = *puStack_28;
LAB_10bd3d684:
    *(undefined1 *)(param_1 + 0x70) = uVar3;
  }
  return;
}



/* Entry: 10bd3d698; end: 10bd3d6e3;  */

long FUN_10bd3d698(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x84);
  if (iVar1 != 0 && *(int *)(param_1 + 0x84) <= *(int *)(param_1 + 0x80)) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),iVar1);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 10bd3d6e4; end: 10bd3d757;  */

void FUN_10bd3d6e4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puStack_28;
  
  if (*(char *)(param_1 + 0x70) == '\t') {
    iVar4 = (*(int *)(param_1 + 0x90) / 8) * 8 + 8;
  }
  else {
    if (*(char *)(param_1 + 0x70) == '\n') {
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      *(undefined4 *)(param_1 + 0x90) = 0;
      goto LAB_10bd3d72c;
    }
    iVar4 = *(int *)(param_1 + 0x90) + 1;
  }
  *(int *)(param_1 + 0x90) = iVar4;
LAB_10bd3d72c:
  lVar1 = (long)*(int *)(param_1 + 0x84) + 1;
  iVar4 = (int)lVar1;
  *(int *)(param_1 + 0x84) = iVar4;
  if (iVar4 < *(int *)(param_1 + 0x80)) {
    *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(*(long *)(param_1 + 0x78) + lVar1);
    return;
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x98) != 0) {
      iVar4 = *(int *)(param_1 + 0xa0);
      if (iVar4 < *(int *)(param_1 + 0x80)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (*(long *)(param_1 + 0x98),*(long *)(param_1 + 0x78) + (long)iVar4,
                   *(int *)(param_1 + 0x80) - iVar4);
        *(undefined4 *)(param_1 + 0xa0) = 0;
      }
    }
    puStack_28 = (undefined1 *)0x0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    do {
      plVar2 = *(long **)(param_1 + 0x60);
      (**(code **)(*plVar2 + 0x10))(plVar2,&puStack_28,param_1 + 0x80);
      if (((ulong)plVar2 & 1) == 0) {
        uVar3 = 0;
        *(undefined4 *)(param_1 + 0x80) = 0;
        *(undefined1 *)(param_1 + 0x88) = 1;
        goto LAB_10bd3d684;
      }
    } while (*(int *)(param_1 + 0x80) == 0);
    *(undefined1 **)(param_1 + 0x78) = puStack_28;
    uVar3 = *puStack_28;
LAB_10bd3d684:
    *(undefined1 *)(param_1 + 0x70) = uVar3;
  }
  return;
}



/* Entry: 10bd3d758; end: 10bd3d977;  */

void FUN_10bd3d758(undefined1 *param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [24];
  
  puVar4 = param_1;
LAB_10bd3d7b8:
  do {
    while (cVar1 = param_1[0x70], cVar1 == '\n') {
      if ((param_1[0xad] & 1) == 0) {
        func_0x00010bd3efe4();
        func_0x00010bd3efa8();
LAB_10bd3d94c:
        func_0x00010bd3efbc();
        return;
      }
LAB_10bd3d858:
      func_0x00010bd3efb4();
    }
    if (cVar1 == '\\') {
      func_0x00010bd3efb4();
      bVar2 = param_1[0x70];
      uVar3 = bVar2 - 0x61;
      if ((uVar3 < 0x16 && (1 << (ulong)(uVar3 & 0x1f) & 0x2a2023U) != 0) ||
         (((uVar3 = bVar2 - 0x22, uVar3 < 0x3b &&
           ((1L << ((ulong)uVar3 & 0x3f) & 0x400000020000021U) != 0)) || ((bVar2 & 0xf8) == 0x30))))
      goto LAB_10bd3d858;
      func_0x00010bd3f06c();
      if ((((ulong)puVar4 & 1) == 0) && (func_0x00010bd3f088(), (int)puVar4 == 0)) {
        puVar4 = param_1;
        FUN_10bd3d9ac(param_1,0x75);
        if ((int)puVar4 == 0) {
          puVar4 = param_1;
          FUN_10bd3d9ac(param_1,0x55);
          if ((int)puVar4 == 0) {
            func_0x00010bd3f054();
            func_0x00010bd3efa8();
          }
          else {
            func_0x00010bd3efd0();
            if (((((int)puVar4 != 0) && (func_0x00010bd3efd0(), (int)puVar4 != 0)) &&
                ((func_0x00010bd3efd0(), ((ulong)puVar4 & 1) != 0 ||
                 (puVar4 = param_1, FUN_10bd3d9ac(param_1,0x31), (int)puVar4 != 0)))) &&
               ((((func_0x00010bd3efdc(), (int)puVar4 != 0 &&
                  (func_0x00010bd3efdc(), (int)puVar4 != 0)) &&
                 (func_0x00010bd3efdc(), (int)puVar4 != 0)) &&
                ((func_0x00010bd3efdc(), (int)puVar4 != 0 &&
                 (func_0x00010bd3efdc(), ((ulong)puVar4 & 1) != 0)))))) goto LAB_10bd3d7b8;
            puVar4 = auStack_78;
            func_0x000107c278b8(puVar4,&UNK_10f83695d);
            func_0x00010bd3efa8();
          }
        }
        else {
          func_0x00010bd3efdc();
          if ((((int)puVar4 != 0) && (func_0x00010bd3efdc(), (int)puVar4 != 0)) &&
             ((func_0x00010bd3efdc(), (int)puVar4 != 0 &&
              (func_0x00010bd3efdc(), ((ulong)puVar4 & 1) != 0)))) goto LAB_10bd3d7b8;
          puVar4 = auStack_78;
          func_0x000107c278b8(puVar4,&UNK_10f83692c);
          func_0x00010bd3efa8();
        }
      }
      else {
        func_0x00010bd3efdc();
        if (((ulong)puVar4 & 1) != 0) goto LAB_10bd3d7b8;
        puVar4 = auStack_78;
        func_0x000107c278b8(puVar4,&UNK_10f836903);
        func_0x00010bd3efa8();
      }
      func_0x00010bd3efbc();
      goto LAB_10bd3d7b8;
    }
    if (cVar1 == '\0') {
      func_0x00010bd3efe4();
      func_0x00010bd3efa8();
      goto LAB_10bd3d94c;
    }
    func_0x00010bd3efb4();
    if (cVar1 == param_2) {
      return;
    }
  } while( true );
}



/* Entry: 10bd3d978; end: 10bd3d9ab;  */

void FUN_10bd3d978(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bd3d9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
            (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
             *(undefined4 *)(param_1 + 0x90),puVar2,uVar1);
  return;
}



/* Entry: 10bd3d9ac; end: 10bd3da0b;  */

bool FUN_10bd3d9ac(long param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x70);
  if (cVar1 == param_2) {
    FUN_10bd3d6e4();
  }
  return cVar1 == param_2;
}



/* Entry: 10bd3da0c; end: 10bd3dc27;  */

undefined4 FUN_10bd3da0c(ulong param_1,int param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar4;
  ulong uVar5;
  int extraout_w8;
  undefined4 uVar6;
  uint extraout_w9;
  
  uVar5 = param_1;
  if (param_2 == 0) {
LAB_10bd3da9c:
    iVar4 = (int)uVar5;
    func_0x00010bd3f080();
    if ((param_3 & 1) == 0) {
      func_0x00010bd3f060();
      if (iVar4 != 0) {
        func_0x00010bd3f080();
        goto LAB_10bd3dab0;
      }
      bVar3 = false;
    }
    else {
LAB_10bd3dab0:
      bVar3 = true;
    }
    uVar5 = param_1;
    FUN_10bd3d9ac(param_1,0x65);
    if (((uVar5 & 1) != 0) || (uVar5 = param_1, FUN_10bd3d9ac(param_1,0x45), (int)uVar5 != 0)) {
      uVar5 = param_1;
      FUN_10bd3d9ac(param_1,0x2d);
      if ((uVar5 & 1) == 0) {
        FUN_10bd3d9ac(param_1,0x2b);
      }
      func_0x00010bd3f034();
      if ((bool)in_CY && !(bool)in_ZR) {
        func_0x00010bd3efe4();
        func_0x00010bd3efa8();
        func_0x00010bd3efbc();
      }
      else {
        do {
          func_0x00010bd3efb4();
        } while (*(byte *)(param_1 + 0x70) - 0x30 < 10);
      }
      bVar3 = true;
    }
    in_ZR = *(char *)(param_1 + 0xa4) == '\x01';
    if (((bool)in_ZR) &&
       ((uVar5 = param_1, FUN_10bd3d9ac(param_1,0x66), (uVar5 & 1) != 0 ||
        (uVar5 = param_1, FUN_10bd3d9ac(param_1,0x46), (int)uVar5 != 0)))) {
      bVar3 = true;
    }
  }
  else {
    func_0x00010bd3f06c();
    if (((uVar5 & 1) == 0) && (func_0x00010bd3f088(), (int)uVar5 == 0)) {
      bVar1 = *(byte *)(param_1 + 0x70);
      uVar2 = bVar1 - 0x30;
      in_CY = 8 < uVar2;
      in_ZR = uVar2 == 9;
      if (9 < uVar2) goto LAB_10bd3da9c;
      while ((bVar1 & 0xf8) == 0x30) {
        func_0x00010bd3efb4();
        bVar1 = *(byte *)(param_1 + 0x70);
      }
      uVar2 = bVar1 - 0x30;
      in_ZR = uVar2 == 9;
      if (uVar2 < 10) {
        func_0x00010bd3efe4();
        func_0x00010bd3efa8();
        func_0x00010bd3efbc();
        func_0x00010bd3f080();
      }
    }
    else {
      iVar4 = (int)*(char *)(param_1 + 0x70);
      FUN_10bd3ee50();
      if (iVar4 == 0) {
        func_0x00010bd3efe4();
        func_0x00010bd3efa8();
        func_0x00010bd3efbc();
      }
      else {
        do {
          func_0x00010bd3efb4();
          uVar5 = (ulong)*(char *)(param_1 + 0x70);
          FUN_10bd3ee50();
        } while ((uVar5 & 1) != 0);
      }
    }
    bVar3 = false;
  }
  func_0x00010bd3f044(*(undefined1 *)(param_1 + 0x70));
  if (((!(bool)in_ZR && 0x18 < extraout_w9) && ((bool)in_ZR || extraout_w9 != 0x19)) ||
     (*(char *)(param_1 + 0xac) != '\x01')) {
    if (extraout_w8 != 0x2e) goto LAB_10bd3dbc4;
    if (bVar3) {
      func_0x00010bd3efe4();
      func_0x00010bd3efa8();
    }
    else {
      func_0x00010bd3efe4();
      func_0x00010bd3efa8();
    }
  }
  else {
    func_0x00010bd3efe4();
    func_0x00010bd3efa8();
  }
  func_0x00010bd3efbc();
LAB_10bd3dbc4:
  uVar6 = 3;
  if (bVar3) {
    uVar6 = 4;
  }
  return uVar6;
}



/* Entry: 10bd3dc28; end: 10bd3dcff;  */

void FUN_10bd3dc28(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  while (func_0x00010bd3f034(), !(bool)in_CY || (bool)in_ZR) {
    func_0x00010bd3efb4();
  }
  return;
}



/* Entry: 10bd3dd00; end: 10bd3de7f;  */

void FUN_10bd3dd00(ulong param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x8c);
  iVar2 = *(int *)(param_1 + 0x90);
  if (param_2 != 0) {
    *(long *)(param_1 + 0x98) = param_2;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x84);
  }
  while( true ) {
    while( true ) {
      while (0x2f < *(byte *)(param_1 + 0x70) ||
             (1L << ((ulong)*(byte *)(param_1 + 0x70) & 0x3f) & 0x840000000401U) == 0) {
        FUN_10bd3d6e4();
      }
      uVar4 = param_1;
      FUN_10bd3d9ac(param_1,10);
      iVar3 = (int)uVar4;
      if (iVar3 != 0) break;
      func_0x00010bd3f0a0();
      if ((iVar3 != 0) && (func_0x00010bd3f008(), iVar3 != 0)) {
        if (param_2 == 0) {
          return;
        }
        func_0x00010bd3f0ac();
        lVar5 = (long)*(char *)(param_2 + 0x17);
        if (lVar5 < 0) {
          lVar5 = *(long *)(param_2 + 8);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
                  (param_2,lVar5 + -2,0xffffffffffffffff);
        return;
      }
      iVar3 = 0;
      func_0x00010bd3f008();
      if ((iVar3 == 0) || (*(char *)(param_1 + 0x70) != '*')) {
        if (*(char *)(param_1 + 0x70) == '\0') {
          func_0x00010bd3efe4();
          func_0x00010bd3f0d4();
          func_0x00010bd3efbc();
          (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                    (*(long **)(param_1 + 0x68),uVar1,iVar2 + -2,&UNK_10f836b32,0x17);
          if (param_2 != 0) {
            func_0x00010bd3f0ac();
          }
          return;
        }
      }
      else {
        func_0x00010bd3f054();
        func_0x00010bd3f0d4();
        func_0x00010bd3efbc();
      }
    }
    if (param_2 != 0) {
      func_0x00010bd3f0ac();
    }
    uVar4 = param_1;
    FUN_10bd3de80();
    func_0x00010bd3f0a0();
    if (((int)uVar4 != 0) && (func_0x00010bd3f008(), (uVar4 & 1) != 0)) break;
    if (param_2 != 0) {
      *(long *)(param_1 + 0x98) = param_2;
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x84);
    }
  }
  return;
}



/* Entry: 10bd3de80; end: 10bd3decf;  */

void FUN_10bd3de80(long param_1)

{
  while (*(byte *)(param_1 + 0x70) < 0x21 &&
         (1L << ((ulong)*(byte *)(param_1 + 0x70) & 0x3f) & 0x100003a00U) != 0) {
    func_0x00010bd3efb4();
  }
  return;
}


