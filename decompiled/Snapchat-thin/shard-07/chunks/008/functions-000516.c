/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105993940; end: 105993953;  */

void FUN_105993940(void)

{
  FUN_1059938dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105993954; end: 10599395f;  */

undefined ** FUN_105993954(void)

{
  return &PTR_DAT_1108c7c18;
}



/* Entry: 105993960; end: 105993a37;  */

void FUN_105993960(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001059939b0(param_1[3]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000105993a08(param_1[4]);
    }
  }
  func_0x00010599bf1c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 105993a38; end: 105993b27;  */

long * FUN_105993a38(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010599bbc4();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    func_0x00010599bcbc();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010599c238();
    func_0x00010599bd60();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bdb4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 105993b28; end: 105993b5f;  */

long FUN_105993b28(long param_1)

{
  long extraout_x8;
  
  FUN_10599414c();
  func_0x00010599bb0c();
  return param_1 + extraout_x8;
}



/* Entry: 105993b60; end: 105993b63;  */

void FUN_105993b60(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010599bb44();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  func_0x00010599c220();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        FUN_10599a800();
        *(ulong **)(unaff_x21 + 0x18) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x000105993bec();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010599c0ac();
      if (param_1 == (ulong *)0x0) {
        func_0x00010599c140();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x000105993d50();
      }
    }
  }
  func_0x00010599bb84();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010599bba4();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 105993b64; end: 105993e63;  */

void FUN_105993b64(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010599bb44();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  func_0x00010599c220();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        FUN_10599a800();
        *(ulong **)(unaff_x21 + 0x18) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x000105993bec();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010599c0ac();
      if (param_1 == (ulong *)0x0) {
        func_0x00010599c140();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x000105993d50();
      }
    }
  }
  func_0x00010599bb84();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010599bba4();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 105993e64; end: 105993ee3;  */

void FUN_105993e64(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x38) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_105993ec0;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1059950f0();
    }
  }
  else {
    if (*(int *)(param_1 + 0x38) != 1) goto LAB_105993ec0;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_105993ec0;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_105994c20();
    }
  }
  __ZdlPv();
LAB_105993ec0:
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 105993ee4; end: 105993f0f;  */

undefined8 FUN_105993ee4(undefined8 param_1)

{
  func_0x00010599bd80();
  FUN_105993f10(param_1);
  return param_1;
}



/* Entry: 105993f10; end: 105993f5f;  */

void FUN_105993f10(void)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00010599bfd0();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_105994868();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_105994644();
  }
  __ZdlPv();
  if (*(int *)(unaff_x19 + 0x38) == 0) {
    return;
  }
  if (*(int *)(unaff_x19 + 0x38) == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_105993ec0;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_1059950f0();
    }
  }
  else {
    if (*(int *)(unaff_x19 + 0x38) != 1) goto LAB_105993ec0;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_105993ec0;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_105994c20();
    }
  }
  __ZdlPv();
LAB_105993ec0:
  *(undefined4 *)(unaff_x19 + 0x38) = 0;
  return;
}



/* Entry: 105993f60; end: 105993f63;  */

undefined8 FUN_105993f60(undefined8 param_1)

{
  func_0x00010599bd80();
  FUN_105993f10(param_1);
  return param_1;
}



/* Entry: 105993f64; end: 105993f77;  */

void FUN_105993f64(void)

{
  FUN_105993ee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105993f78; end: 105993f8b;  */

undefined8 FUN_105993f78(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 105993f8c; end: 10599405b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_105993f8c(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010599bcc8();
  func_0x00010599c0dc();
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_105994910(unaff_x19[5]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10598f91c(unaff_x19[6]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10598f91c(unaff_x19[7]);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_105994910(unaff_x19[8]);
    }
  }
  func_0x00010599bf1c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
    *(undefined1 *)*unaff_x19 = 0;
    unaff_x19[1] = 0;
    return;
  }
  *(undefined1 *)unaff_x19 = 0;
  *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
  return;
}



/* Entry: 10599405c; end: 10599414b;  */

long * FUN_10599405c(long param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  func_0x00010599bd24();
  uVar2 = *(uint *)(param_1 + 0x38);
  plVar3 = (long *)(ulong)uVar2;
  if (uVar2 == 1) {
    lVar4 = 0x10;
LAB_105994094:
    param_2 = *(long *)(unaff_x21 + 0x30);
    param_3 = (ulong)*(uint *)(param_2 + lVar4);
    func_0x00010599bc2c();
    unaff_x20 = plVar3;
  }
  else if (uVar2 == 2) {
    lVar4 = 0x14;
    goto LAB_105994094;
  }
  uVar2 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x20);
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    plVar3 = (long *)0x3;
    func_0x00010599bc2c();
    unaff_x20 = plVar3;
  }
  func_0x00010599be50(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_105994100;
  }
  else if ((int)param_2 == 0) goto LAB_105994100;
  param_4 = (long *)&UNK_10f318020;
  func_0x00010599bdd4();
  func_0x00010599bc4c();
  plVar3 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_105994100:
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x14);
    plVar3 = (long *)0x5;
    func_0x00010599bc2c();
    unaff_x20 = plVar3;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010599bdb4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010599bffc();
  if (*plVar3 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar6 = ((int)*plVar3 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      param_3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar6);
      param_4 = plVar3;
      func_0x000107c303e4(plVar3,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10599414c; end: 1059941ff;  */

void FUN_10599414c(long param_1)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  
  func_0x00010599bc38();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000105994a68(*(undefined8 *)(unaff_x19 + 0x20));
      func_0x00010599bae8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001059947c0(*(undefined8 *)(unaff_x19 + 0x28));
      func_0x00010599bae8();
    }
  }
  if (*(int *)(unaff_x19 + 0x38) == 2) {
    FUN_105995668(*(undefined8 *)(unaff_x19 + 0x30));
  }
  else {
    if (*(int *)(unaff_x19 + 0x38) != 1) goto LAB_1059941d8;
    func_0x000105994ca4(*(undefined8 *)(unaff_x19 + 0x30));
  }
  func_0x00010599bae8();
LAB_1059941d8:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010599c1b4();
  }
  func_0x00010599bf88();
  return;
}



/* Entry: 105994200; end: 105994203;  */

void FUN_105994200(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  ulong *puVar3;
  ulong *puVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010599bbb4();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar3 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    func_0x00010599bff0();
    puVar3 = unaff_x22;
  }
  func_0x00010599bcd4();
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599bf5c();
  }
  func_0x00010599c220();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010599c0ac();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar3;
        func_0x00010599a96c();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_105994204();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010599c1e0();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar3;
        func_0x00010599aa38();
        unaff_x21[5] = (ulong)param_1;
      }
      else {
        func_0x000105994330();
      }
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | unaff_w23;
  iVar1 = *(int *)(unaff_x20 + 0x38);
  if (iVar1 == 0) goto LAB_105993d2c;
  iVar2 = (int)unaff_x21[7];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_105993e64();
    }
    *(int *)(unaff_x21 + 7) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[6];
      func_0x00010599c0a0(*(undefined4 *)(unaff_x20 + 0x38));
      FUN_10599440c();
      goto LAB_105993d2c;
    }
    FUN_10599ab18();
  }
  else {
    if (iVar1 != 1) goto LAB_105993d2c;
    if (iVar2 == 1) {
      param_1 = (ulong *)unaff_x21[6];
      func_0x00010599c04c(*(undefined4 *)(unaff_x20 + 0x38));
      FUN_105994400();
      goto LAB_105993d2c;
    }
    FUN_10599aac8();
  }
  unaff_x21[6] = (ulong)puVar3;
  param_1 = puVar3;
LAB_105993d2c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010599bba4();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 105994204; end: 1059943ff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_105994204(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010599bbb4();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    func_0x00010599bff0();
  }
  func_0x00010599bcd4();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599bf5c();
  }
  func_0x00010599be38(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599c160();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010599c1e0();
      if (param_1 == (ulong *)0x0) {
        func_0x00010599c148();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_105994b5c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x00010599be70();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_10598fc3c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x00010599be70();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_10598fc3c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        func_0x00010599c148();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_105994b5c();
      }
    }
  }
  func_0x00010599bb84();
  if ((extraout_x8_01 & 1) != 0) {
    func_0x00010599bba4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 105994400; end: 10599440b;  */

void FUN_105994400(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10599440c; end: 105994643;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10599440c(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010599bb44();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_105995808();
  func_0x00010599be38(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x0001001a53d4();
  }
  func_0x00010599be38(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x38);
    func_0x0001001a53d4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010599c148();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
      }
      else {
        FUN_105994b5c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00010599ae74();
        *(ulong **)(unaff_x21 + 0x48) = puVar2;
      }
      else {
        FUN_10599581c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x50);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00010599aed8();
        *(ulong **)(unaff_x21 + 0x50) = puVar2;
      }
      else {
        func_0x00010599587c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x58);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00010599af4c();
        *(ulong **)(unaff_x21 + 0x58) = puVar2;
      }
      else {
        func_0x000105995948();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010599be70();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        FUN_10598fc3c();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010599be70();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        FUN_10598fc3c();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00010599aff0();
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        func_0x000105995a28();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_10599b07c();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_105995b1c();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x80);
    if (puVar2 == (ulong *)0x0) {
      FUN_10599b0d4();
      *(ulong **)(unaff_x21 + 0x80) = unaff_x22;
      puVar2 = unaff_x22;
    }
    else {
      FUN_105995b3c();
    }
  }
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x88) = 1;
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)(unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  func_0x00010599bb84();
  if ((extraout_x8_01 & 1) == 0) {
    return;
  }
  func_0x00010599bba4();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 105994644; end: 10599466f;  */

undefined8 FUN_105994644(undefined8 param_1)

{
  func_0x00010599bd80();
  FUN_105994670(param_1);
  return param_1;
}



/* Entry: 105994670; end: 1059946a7;  */

void FUN_105994670(void)

{
  long unaff_x19;
  
  func_0x00010599bfd0();
  func_0x00010599c1ac();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_10598f898();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059946a8; end: 1059946ab;  */

undefined8 FUN_1059946a8(undefined8 param_1)

{
  func_0x00010599bd80();
  FUN_105994670(param_1);
  return param_1;
}



/* Entry: 1059946ac; end: 1059946bf;  */

void FUN_1059946ac(void)

{
  FUN_105994644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059946c0; end: 1059946cb;  */

undefined ** FUN_1059946c0(void)

{
  return &PTR_DAT_1108c7ca8;
}



/* Entry: 1059946cc; end: 105994863;  */

long * FUN_1059946cc(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  func_0x00010599bbf0();
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_1059946fc;
  }
  else if ((int)param_2 != 0) {
LAB_1059946fc:
    param_4 = (long *)&UNK_10f31804d;
    func_0x00010599bdd4();
    param_2 = 3;
    param_1 = unaff_x19;
    func_0x00010599bc4c();
    unaff_x20 = param_1;
  }
  func_0x00010599be50(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_105994758;
  }
  else if ((int)param_2 == 0) goto LAB_105994758;
  param_4 = (long *)&UNK_10f31807a;
  func_0x00010599bdd4();
  func_0x00010599bc4c();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_105994758:
  uVar2 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x38);
    param_1 = (long *)0x5;
    func_0x00010599bc2c();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x30) + 0x38);
    param_1 = (long *)0x6;
    func_0x00010599bc2c();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010599bdb4();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010599bffc();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        param_3 = (ulong)(uint)(iVar3 - iVar4);
        if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar4);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 105994864; end: 105994867;  */

void FUN_105994864(ulong *param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  
  func_0x00010599bbb4();
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    func_0x00010599bff0();
  }
  func_0x00010599bcd4();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599bf5c();
  }
  func_0x00010599be38(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599c160();
  }
  func_0x00010599c220();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010599c1e0();
      if (param_1 == (ulong *)0x0) {
        func_0x00010599be70();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10598fc3c();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x00010599be70();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_10598fc3c();
      }
    }
  }
  func_0x00010599bb84();
  if ((extraout_x8_01 & 1) == 0) {
    return;
  }
  func_0x00010599bba4();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 105994868; end: 105994893;  */

undefined8 FUN_105994868(undefined8 param_1)

{
  func_0x00010599bd80();
  FUN_105994894(param_1);
  return param_1;
}



/* Entry: 105994894; end: 1059948eb;  */

void FUN_105994894(void)

{
  long unaff_x19;
  
  func_0x00010599bfd0();
  func_0x00010599c1ac();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_105996334();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_105996334();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059948ec; end: 1059948ef;  */

undefined8 FUN_1059948ec(undefined8 param_1)

{
  func_0x00010599bd80();
  FUN_105994894(param_1);
  return param_1;
}



/* Entry: 1059948f0; end: 105994903;  */

void FUN_1059948f0(void)

{
  FUN_105994868();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105994904; end: 10599490f;  */

undefined ** FUN_105994904(void)

{
  return &PTR_DAT_1108c7cf0;
}



/* Entry: 105994910; end: 10599493f;  */

void FUN_105994910(long param_1)

{
  ulong *puVar1;
  
  FUN_1059962b8();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 105994940; end: 105994b3b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_105994940(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long *unaff_x22;
  int iVar5;
  
  func_0x00010599bbf0();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar3 = (long *)*unaff_x22;
      goto LAB_105994970;
    }
  }
  else {
    plVar3 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_105994970:
      param_4 = (long *)&UNK_10f3180a6;
      func_0x00010599bdd4();
      func_0x00010599bc18();
      param_1 = plVar3;
      unaff_x20 = plVar3;
    }
  }
  func_0x00010599be50(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1059949c0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1059949c0;
  param_4 = (long *)&UNK_10f3180cf;
  func_0x00010599bdd4();
  func_0x00010599c0c0();
  func_0x00010599bc4c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1059949c0:
  uVar2 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x18);
    param_1 = (long *)0x3;
    func_0x00010599bc2c();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x30) + 0x38);
    param_1 = (long *)0x4;
    func_0x00010599bc2c();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    param_1 = (long *)0x5;
    func_0x00010599bc2c();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x40) + 0x18);
    param_1 = (long *)0x6;
    func_0x00010599bc2c();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010599bdb4();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010599bffc();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        param_3 = (ulong)(uint)(iVar4 - iVar5);
        if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar5);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 105994b3c; end: 105994b57;  */

long FUN_105994b3c(long param_1)

{
  long extraout_x8;
  
  func_0x0001059963f4();
  func_0x00010599bb0c();
  return param_1 + extraout_x8;
}



/* Entry: 105994b58; end: 105994b5b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_105994b58(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010599bbb4();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    func_0x00010599bff0();
  }
  func_0x00010599bcd4();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599bf5c();
  }
  func_0x00010599be38(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599c160();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010599c1e0();
      if (param_1 == (ulong *)0x0) {
        func_0x00010599c148();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_105994b5c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x00010599be70();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_10598fc3c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x00010599be70();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_10598fc3c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        func_0x00010599c148();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_105994b5c();
      }
    }
  }
  func_0x00010599bb84();
  if ((extraout_x8_01 & 1) != 0) {
    func_0x00010599bba4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 105994b5c; end: 105994c1f;  */

void FUN_105994b5c(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00010599bb44();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_105994c04;
  func_0x00010599c088();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_1059962b8();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x00010599bc74();
      func_0x00010599c0a0();
      func_0x000105996220();
      goto LAB_105994c04;
    }
    func_0x00010599be64();
    func_0x00010599b1e4();
  }
  else {
    if (iVar1 != 1) goto LAB_105994c04;
    if (unaff_w24 == 1) {
      func_0x00010599bc74();
      func_0x00010599c114();
      FUN_10599610c();
      goto LAB_105994c04;
    }
    func_0x00010599be64();
    func_0x00010599b144();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_105994c04:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bba4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 105994c20; end: 105994c43;  */

undefined8 FUN_105994c20(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 105994c44; end: 105994c57;  */

void FUN_105994c44(void)

{
  FUN_105994c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105994c58; end: 105994cd3;  */

undefined ** FUN_105994c58(void)

{
  return &PTR_DAT_1108c7d38;
}



/* Entry: 105994cd4; end: 105994d1f;  */

void FUN_105994cd4(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010599bed0();
  if (extraout_w8 == 1) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_105995b74();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 105994d20; end: 105994d53;  */

long FUN_105994d20(long param_1)

{
  func_0x00010599bd80();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_105994cd4(param_1);
  }
  return param_1;
}



/* Entry: 105994d54; end: 105994d57;  */

long FUN_105994d54(long param_1)

{
  func_0x00010599bd80();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_105994cd4(param_1);
  }
  return param_1;
}



/* Entry: 105994d58; end: 105994d6b;  */

void FUN_105994d58(void)

{
  FUN_105994d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105994d6c; end: 105994d7b;  */

long FUN_105994d6c(long param_1)

{
  func_0x00010599bd80();
  func_0x00010599bf64();
  func_0x00010599c1ac();
  func_0x000100067de0(param_1 + 0x28);
  func_0x000100067de0(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_1059964e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_105998b18();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_105996d4c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 105994d7c; end: 105994e63;  */

void FUN_105994d7c(long param_1)

{
  ulong *puVar1;
  
  FUN_105994cd4();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 105994e64; end: 1059950ef;  */

void FUN_105994e64(ulong *param_1)

{
  int iVar1;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x00010599bb44();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        func_0x000105994ef0();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_105994cd4();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x00010599be64();
        func_0x00010599ad44();
        unaff_x21[2] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bba4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1059950f0; end: 1059951bb;  */

long FUN_1059950f0(long param_1)

{
  func_0x00010599bd80();
  func_0x000100067de0(param_1 + 0x30);
  func_0x000100067de0(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_105996334();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_1059970e4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_105997d1c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_105998794();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_1059998c4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_105999c00();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_10599892c();
  }
  __ZdlPv();
  FUN_105999e4c(param_1 + 0x18);
  return param_1;
}



/* Entry: 1059951bc; end: 1059951cf;  */

void FUN_1059951bc(void)

{
  FUN_1059950f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059951d0; end: 1059951db;  */

undefined ** FUN_1059951d0(void)

{
  return &PTR_DAT_1108c7dd8;
}



/* Entry: 1059951dc; end: 105995397;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1059951dc(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    FUN_1053936e4(param_1 + 0x18);
  }
  func_0x00010029b2d4(param_1 + 0x30);
  func_0x00010029b2d4(param_1 + 0x38);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_105994910(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001059952cc(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000105995304(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000105995334(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10598f91c(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_10598f91c(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x000105995364(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_105995398(*(undefined8 *)(param_1 + 0x78));
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    FUN_1059953ac(*(undefined8 *)(param_1 + 0x80));
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 105995398; end: 1059953ab;  */

void FUN_105995398(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1059953ac; end: 1059953eb;  */

void FUN_1059953ac(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    FUN_1053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1059953ec; end: 105995667;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1059953ec(long *param_1,long param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long extraout_x8;
  long unaff_x20;
  long *unaff_x21;
  int iVar7;
  long *unaff_x22;
  int iVar8;
  
  plVar5 = param_3;
  func_0x00010599bfac();
  func_0x00010599be50(param_1[6]);
  if (param_2 < 0) {
    param_2 = 0;
    if (unaff_x22[1] != 0) goto LAB_105995430;
  }
  else if ((int)param_2 != 0) {
LAB_105995430:
    func_0x00010599bdd4();
    param_2 = 1;
    param_1 = param_3;
    func_0x00010599bd08();
    unaff_x21 = param_1;
  }
  func_0x00010599be50(*(undefined8 *)(unaff_x20 + 0x38));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_105995488;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_105995488;
  func_0x00010599bdd4();
  func_0x00010599c0c0();
  func_0x00010599bd08();
  param_1 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_105995488:
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x18);
    param_1 = (long *)0x3;
    func_0x00010599bbd4();
    unaff_x21 = param_1;
  }
  iVar8 = *(int *)(unaff_x20 + 0x20);
  for (iVar7 = 0; iVar8 != iVar7; iVar7 = iVar7 + 1) {
    uVar6 = *(ulong *)(unaff_x20 + 0x18);
    puVar1 = (ulong *)(unaff_x20 + 0x18);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + (long)iVar7 * 8 + 7);
    }
    plVar5 = (long *)(ulong)*(uint *)(*puVar1 + 0x18);
    param_1 = (long *)0x4;
    func_0x00010599bbd4();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x48) + 0x14);
    param_1 = (long *)0x5;
    func_0x00010599bbd4();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x18);
    param_1 = (long *)0x6;
    func_0x00010599bbd4();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + 0x18);
    param_1 = (long *)0x7;
    func_0x00010599bbd4();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x38);
    param_1 = (long *)0x8;
    func_0x00010599bbd4();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x38);
    param_1 = (long *)0x9;
    func_0x00010599bbd4();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x70) + 0x20);
    param_1 = (long *)0xa;
    func_0x00010599bbd4();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x78) + 0x14);
    param_1 = (long *)0xb;
    func_0x00010599bbd4();
    unaff_x21 = param_1;
  }
  plVar3 = param_1;
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    func_0x00010599c1a0();
    plVar3 = (long *)0x60;
    func_0x0001001a59d0(0x60,param_1);
    func_0x00010599c170();
    unaff_x21 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    func_0x00010599c1a0();
    unaff_x21 = (long *)0x68;
    func_0x0001001a59d0(0x68,plVar3);
    func_0x00010599bfc4();
  }
  if ((uVar2 >> 8 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x80) + 0x28);
    unaff_x21 = (long *)0xf;
    func_0x00010599bbd4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010599bdb4();
  if ((long)plVar5 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if ((long)(int)plVar5 <= *param_3 - (long)unaff_x21) {
    _memcpy(unaff_x21,lVar4,(ulong)plVar5 & 0xffffffff);
    return (long *)((long)unaff_x21 + (long)(int)plVar5);
  }
  while( true ) {
    iVar8 = ((int)*param_3 - (int)unaff_x21) + 0x10;
    iVar7 = (int)plVar5;
    plVar5 = (long *)(ulong)(uint)(iVar7 - iVar8);
    if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
    func_0x00010b4d5738();
    lVar4 = (long)unaff_x21 + (long)iVar8;
    unaff_x21 = param_3;
    func_0x000107c303e4(param_3,lVar4);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x21 + (long)iVar7);
}



/* Entry: 105995668; end: 1059957eb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_105995668(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  
  lVar3 = param_1;
  func_0x00010599befc();
  while (unaff_x22 != 0) {
    lVar3 = *unaff_x21;
    func_0x000105994e0c();
    func_0x00010599c058();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010599be44(*(undefined8 *)(param_1 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    func_0x0001001a5744();
    func_0x00010599bdc0();
  }
  func_0x00010599be44(*(undefined8 *)(param_1 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    func_0x0001001a5744();
    func_0x00010599bdc0();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_105994b3c(*(undefined8 *)(param_1 + 0x40));
      func_0x00010599bdc0();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001059971e8(*(undefined8 *)(param_1 + 0x48));
      func_0x00010599bae8();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000105997dd4(*(undefined8 *)(param_1 + 0x50));
      func_0x00010599bae8();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_1059957ec(*(undefined8 *)(param_1 + 0x58));
      func_0x00010599bdc0();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_105990458(*(undefined8 *)(param_1 + 0x60));
      func_0x00010599bdc0();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_105990458(*(undefined8 *)(param_1 + 0x68));
      func_0x00010599bdc0();
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_1059999c0(*(undefined8 *)(param_1 + 0x70));
      func_0x00010599bae8();
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_105999cb0(*(undefined8 *)(param_1 + 0x78));
      func_0x00010599bae8();
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    FUN_105998a14(*(undefined8 *)(param_1 + 0x80));
    func_0x00010599bae8();
  }
  iVar2 = unaff_w20 + (uint)*(byte *)(param_1 + 0x88) * 2;
  if (*(int *)(param_1 + 0x8c) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x8c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010599c1b4();
    lVar3 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 1059957ec; end: 105995807;  */

long FUN_1059957ec(long param_1)

{
  long extraout_x8;
  
  FUN_1059988a4();
  func_0x00010599bb0c();
  return param_1 + extraout_x8;
}



/* Entry: 105995808; end: 10599581b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_105995808(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010599bb44();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_105995808();
  func_0x00010599be38(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x0001001a53d4();
  }
  func_0x00010599be38(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x38);
    func_0x0001001a53d4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010599c148();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
      }
      else {
        FUN_105994b5c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00010599ae74();
        *(ulong **)(unaff_x21 + 0x48) = puVar2;
      }
      else {
        FUN_10599581c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x50);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00010599aed8();
        *(ulong **)(unaff_x21 + 0x50) = puVar2;
      }
      else {
        func_0x00010599587c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x58);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00010599af4c();
        *(ulong **)(unaff_x21 + 0x58) = puVar2;
      }
      else {
        func_0x000105995948();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010599be70();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        FUN_10598fc3c();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010599be70();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        FUN_10598fc3c();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00010599aff0();
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        func_0x000105995a28();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_10599b07c();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_105995b1c();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x80);
    if (puVar2 == (ulong *)0x0) {
      FUN_10599b0d4();
      *(ulong **)(unaff_x21 + 0x80) = unaff_x22;
      puVar2 = unaff_x22;
    }
    else {
      FUN_105995b3c();
    }
  }
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x88) = 1;
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)(unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  func_0x00010599bb84();
  if ((extraout_x8_01 & 1) == 0) {
    return;
  }
  func_0x00010599bba4();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10599581c; end: 10599587b;  */

void FUN_10599581c(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010599bbb4();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010599c22c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010599c25c();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x00010599b3a8();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_105997240();
    }
  }
  func_0x00010599bde8();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010599bba4();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10599587c; end: 105995b1b;  */

void FUN_10599587c(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00010599bb44();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10599592c;
  func_0x00010599c088();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_105997ca0();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x00010599bc74();
      func_0x00010599c04c();
      func_0x000105997bdc();
      goto LAB_10599592c;
    }
    func_0x00010599be64();
    FUN_10599b56c();
  }
  else {
    if (iVar1 != 1) goto LAB_10599592c;
    if (unaff_w24 == 1) {
      func_0x00010599bc74();
      func_0x00010599c04c();
      FUN_105997b14();
      goto LAB_10599592c;
    }
    func_0x00010599be64();
    FUN_10599b51c();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10599592c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bba4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 105995b1c; end: 105995b3b;  */

void FUN_105995b1c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 105995b3c; end: 105995b73;  */

void FUN_105995b3c(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x00010599bddc();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_105998a78();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bd88();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 105995b74; end: 105995c1f;  */

long FUN_105995b74(long param_1)

{
  func_0x00010599bd80();
  func_0x00010599bf64();
  func_0x00010599c1ac();
  func_0x000100067de0(param_1 + 0x28);
  func_0x000100067de0(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_1059964e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_105998b18();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_105996d4c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 105995c20; end: 105995c33;  */

void FUN_105995c20(void)

{
  FUN_105995b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105995c34; end: 105995c3f;  */

undefined ** FUN_105995c34(void)

{
  return &PTR_DAT_1108c7e20;
}



/* Entry: 105995c40; end: 105995d7f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_105995c40(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010599bcc8();
  func_0x00010599c0dc();
  func_0x00010029b2d4(unaff_x19 + 5);
  func_0x00010029b2d4(unaff_x19 + 6);
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000105995cfc(unaff_x19[7]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000105993a08(unaff_x19[8]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10598f91c(unaff_x19[9]);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10598f91c(unaff_x19[10]);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10598f91c(unaff_x19[0xb]);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_10598f91c(unaff_x19[0xc]);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x000105995d3c(unaff_x19[0xd]);
    }
  }
  func_0x00010599bf1c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
    *(undefined1 *)*unaff_x19 = 0;
    unaff_x19[1] = 0;
    return;
  }
  *(undefined1 *)unaff_x19 = 0;
  *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
  return;
}



/* Entry: 105995d80; end: 105995f87;  */

long * FUN_105995d80(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long unaff_x20;
  long *unaff_x21;
  int iVar5;
  long *unaff_x22;
  int iVar6;
  
  plVar4 = param_3;
  func_0x00010599bfac();
  func_0x00010599be50(*(undefined8 *)(param_1 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (unaff_x22[1] != 0) goto LAB_105995dc0;
  }
  else if ((int)param_2 != 0) {
LAB_105995dc0:
    func_0x00010599bdd4();
    param_2 = 1;
    unaff_x21 = param_3;
    func_0x00010599bd08();
  }
  func_0x00010599be50(*(undefined8 *)(unaff_x20 + 0x20));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_105995e00;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_105995e00:
      func_0x00010599bdd4();
      func_0x00010599c0c0();
      func_0x00010599bd08();
      unaff_x21 = plVar2;
    }
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x38);
    plVar4 = (long *)(ulong)*(uint *)(param_2 + 0x14);
    unaff_x21 = (long *)0x3;
    func_0x00010599bbd4();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x40);
    plVar4 = (long *)(ulong)*(uint *)(param_2 + 0x18);
    unaff_x21 = (long *)0x4;
    func_0x00010599bbd4();
  }
  func_0x00010599be50(*(undefined8 *)(unaff_x20 + 0x28));
  if (param_2 < 0) {
    param_2 = 0;
    if (unaff_x22[1] != 0) goto LAB_105995e70;
  }
  else if ((int)param_2 != 0) {
LAB_105995e70:
    func_0x00010599bdd4();
    param_2 = 5;
    unaff_x21 = param_3;
    func_0x00010599bd08();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x48);
    plVar4 = (long *)(ulong)*(uint *)(param_2 + 0x38);
    unaff_x21 = (long *)0x6;
    func_0x00010599bbd4();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x50);
    plVar4 = (long *)(ulong)*(uint *)(param_2 + 0x38);
    unaff_x21 = (long *)0x7;
    func_0x00010599bbd4();
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x58);
    plVar4 = (long *)(ulong)*(uint *)(param_2 + 0x38);
    unaff_x21 = (long *)0x8;
    func_0x00010599bbd4();
  }
  func_0x00010599be50(*(undefined8 *)(unaff_x20 + 0x30));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_105995f20;
  }
  else if ((int)param_2 == 0) goto LAB_105995f20;
  func_0x00010599bdd4();
  unaff_x21 = param_3;
  func_0x00010599bd08(param_3,9);
LAB_105995f20:
  if ((uVar1 >> 5 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x38);
    unaff_x21 = (long *)0xa;
    func_0x00010599bbd4();
  }
  if ((uVar1 >> 6 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x14);
    unaff_x21 = (long *)0xb;
    func_0x00010599bbd4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010599bdb4();
  if ((long)plVar4 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x21 < (long)(int)plVar4) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)unaff_x21) + 0x10;
      iVar5 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      lVar3 = (long)unaff_x21 + (long)iVar6;
      unaff_x21 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x21 + (long)iVar5);
  }
  _memcpy(unaff_x21,lVar3,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)unaff_x21 + (long)(int)plVar4);
}



/* Entry: 105995f88; end: 1059960cf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_105995f88(long param_1)

{
  uint uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x19;
  
  func_0x00010599bc38();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
  }
  func_0x00010599be44(*(undefined8 *)(unaff_x19 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x00010599bdc0();
  }
  func_0x00010599be44(*(undefined8 *)(unaff_x19 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x00010599bdc0();
  }
  func_0x00010599be44(*(undefined8 *)(unaff_x19 + 0x30));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x00010599bdc0();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001059960d0(*(undefined8 *)(unaff_x19 + 0x38));
      func_0x00010599bdc0();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000105993b44(*(undefined8 *)(unaff_x19 + 0x40));
      func_0x00010599bdc0();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_105990458(*(undefined8 *)(unaff_x19 + 0x48));
      func_0x00010599bdc0();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_105990458(*(undefined8 *)(unaff_x19 + 0x50));
      func_0x00010599bdc0();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_105990458(*(undefined8 *)(unaff_x19 + 0x58));
      func_0x00010599bdc0();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_105990458(*(undefined8 *)(unaff_x19 + 0x60));
      func_0x00010599bdc0();
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x0001059960ec(*(undefined8 *)(unaff_x19 + 0x68));
      func_0x00010599bdc0();
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010599c1b4();
  }
  func_0x00010599bf88();
  return;
}



/* Entry: 1059960d0; end: 105996107;  */

long FUN_1059960d0(long param_1)

{
  long extraout_x8;
  
  func_0x000105996604();
  func_0x00010599bb0c();
  return param_1 + extraout_x8;
}



/* Entry: 105996108; end: 10599610b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_105996108(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010599bbb4();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010599bff0();
    puVar2 = unaff_x22;
  }
  func_0x00010599bcd4();
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599bf5c();
  }
  func_0x00010599be38(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599c160();
  }
  func_0x00010599be38(*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x0001001a53d4();
  }
  func_0x00010599be38(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x30);
    func_0x0001001a53d4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010599b144();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        func_0x00010599610c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        func_0x00010599c140();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        func_0x000105993d50();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        func_0x00010599be70();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_10598fc3c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        func_0x00010599be70();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_10598fc3c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x58);
      if (param_1 == (ulong *)0x0) {
        func_0x00010599be70();
        *(ulong **)(unaff_x21 + 0x58) = param_1;
      }
      else {
        FUN_10598fc3c();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        func_0x00010599be70();
        *(ulong **)(unaff_x21 + 0x60) = param_1;
      }
      else {
        FUN_10598fc3c();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x68);
      if (param_1 == (ulong *)0x0) {
        func_0x00010599b1e4();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x000105996220();
      }
    }
  }
  func_0x00010599bb84();
  if ((extraout_x8_03 & 1) == 0) {
    return;
  }
  func_0x00010599bba4();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10599610c; end: 1059962b7;  */

void FUN_10599610c(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010599bb44();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      param_1 = unaff_x22;
      func_0x000105992a20();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_105996684();
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x28);
  if (iVar2 == 0) goto LAB_105996204;
  iVar3 = (int)unaff_x21[5];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      param_1 = unaff_x21;
      FUN_105996460();
    }
    *(int *)(unaff_x21 + 5) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      param_1 = (ulong *)unaff_x21[4];
      func_0x00010599c0a0(*(undefined4 *)(unaff_x20 + 0x28));
      FUN_1059967a0();
      goto LAB_105996204;
    }
    func_0x00010599b2e8();
  }
  else {
    if (iVar2 != 1) goto LAB_105996204;
    if (iVar3 == 1) {
      param_1 = (ulong *)unaff_x21[4];
      func_0x00010599c114(*(undefined4 *)(unaff_x20 + 0x28));
      FUN_105996718();
      goto LAB_105996204;
    }
    func_0x00010599b278();
  }
  unaff_x21[4] = (ulong)unaff_x22;
  param_1 = unaff_x22;
LAB_105996204:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bba4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1059962b8; end: 105996333;  */

void FUN_1059962b8(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00010599bed0();
  if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_105996310;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_105996d4c();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_105996310;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_105996310;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1059964e0();
    }
  }
  __ZdlPv();
LAB_105996310:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 105996334; end: 105996367;  */

long FUN_105996334(long param_1)

{
  func_0x00010599bd80();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1059962b8(param_1);
  }
  return param_1;
}



/* Entry: 105996368; end: 10599636b;  */

long FUN_105996368(long param_1)

{
  func_0x00010599bd80();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1059962b8(param_1);
  }
  return param_1;
}



/* Entry: 10599636c; end: 10599637f;  */

void FUN_10599636c(void)

{
  FUN_105996334();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105996380; end: 105996393;  */

long FUN_105996380(long param_1)

{
  func_0x00010599bd80();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_105996b3c();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_105996460(param_1);
  }
  return param_1;
}



/* Entry: 105996394; end: 10599645b;  */

long * FUN_105996394(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  uint extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010599bbc4();
  func_0x00010599c1c0();
  if (extraout_w8 < 2) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x14);
    func_0x00010599bd60();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010599bdb4();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10599645c; end: 10599645f;  */

void FUN_10599645c(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00010599bb44();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_105994c04;
  func_0x00010599c088();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_1059962b8();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x00010599bc74();
      func_0x00010599c0a0();
      func_0x000105996220();
      goto LAB_105994c04;
    }
    func_0x00010599be64();
    func_0x00010599b1e4();
  }
  else {
    if (iVar1 != 1) goto LAB_105994c04;
    if (unaff_w24 == 1) {
      func_0x00010599bc74();
      func_0x00010599c114();
      FUN_10599610c();
      goto LAB_105994c04;
    }
    func_0x00010599be64();
    func_0x00010599b144();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_105994c04:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bba4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 105996460; end: 1059964df;  */

void FUN_105996460(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x28) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1059964bc;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1059969a0();
    }
  }
  else {
    if (*(int *)(param_1 + 0x28) != 1) goto LAB_1059964bc;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1059964bc;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1059967fc();
    }
  }
  __ZdlPv();
LAB_1059964bc:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 1059964e0; end: 105996523;  */

long FUN_1059964e0(long param_1)

{
  func_0x00010599bd80();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_105996b3c();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_105996460(param_1);
  }
  return param_1;
}



/* Entry: 105996524; end: 105996537;  */

void FUN_105996524(void)

{
  FUN_1059964e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105996538; end: 10599654b;  */

long FUN_105996538(long param_1)

{
  func_0x00010599bd80();
  func_0x00010599bf64();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10599e398();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10599654c; end: 10599667f;  */

void FUN_10599654c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010599be9c();
  func_0x00010029b2d4(unaff_x19 + 0x18);
  func_0x00010599c0dc();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 105996680; end: 105996683;  */

void FUN_105996680(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010599bb44();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      param_1 = unaff_x22;
      func_0x000105992a20();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_105996684();
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x28);
  if (iVar2 == 0) goto LAB_105996204;
  iVar3 = (int)unaff_x21[5];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      param_1 = unaff_x21;
      FUN_105996460();
    }
    *(int *)(unaff_x21 + 5) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      param_1 = (ulong *)unaff_x21[4];
      func_0x00010599c0a0(*(undefined4 *)(unaff_x20 + 0x28));
      FUN_1059967a0();
      goto LAB_105996204;
    }
    func_0x00010599b2e8();
  }
  else {
    if (iVar2 != 1) goto LAB_105996204;
    if (iVar3 == 1) {
      param_1 = (ulong *)unaff_x21[4];
      func_0x00010599c114(*(undefined4 *)(unaff_x20 + 0x28));
      FUN_105996718();
      goto LAB_105996204;
    }
    func_0x00010599b278();
  }
  unaff_x21[4] = (ulong)unaff_x22;
  param_1 = unaff_x22;
LAB_105996204:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bba4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 105996684; end: 105996717;  */

void FUN_105996684(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010599bd40();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599c0cc();
  }
  func_0x00010599bcd4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x0001001a53d4();
  }
  func_0x00010599be38(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x0001001a53d4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bd88();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 105996718; end: 10599679f;  */

void FUN_105996718(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010599bbb4();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010599bff0();
    puVar1 = unaff_x22;
  }
  func_0x00010599bcd4();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599bf5c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010599c0ac();
    if (param_1 == (ulong *)0x0) {
      FUN_10598f798();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_10599e510();
    }
  }
  func_0x00010599bb84();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010599bba4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1059967a0; end: 1059967fb;  */

void FUN_1059967a0(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010599bbb4();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010599c22c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010599c25c();
    if (extraout_x8 == 0) {
      FUN_10598f798();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010599c120();
    }
  }
  func_0x00010599bde8();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010599bba4();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1059967fc; end: 105996833;  */

long FUN_1059967fc(long param_1)

{
  func_0x00010599bd80();
  func_0x00010599bf64();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10599e398();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 105996834; end: 105996847;  */

void FUN_105996834(void)

{
  FUN_1059967fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105996848; end: 105996853;  */

undefined ** FUN_105996848(void)

{
  return &PTR_DAT_1108c7ef0;
}



/* Entry: 105996854; end: 10599688f;  */

void FUN_105996854(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010599bcc8();
  if ((unaff_x19[2] & 1) != 0) {
    FUN_10599e3ec(unaff_x19[4]);
  }
  func_0x00010599bf1c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 105996890; end: 10599692f;  */

long * FUN_105996890(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010599bd24();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x20);
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    param_1 = (long *)0x1;
    func_0x00010599bc2c();
    unaff_x20 = param_1;
  }
  func_0x00010599be50(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1059968fc;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1059968fc;
  param_4 = (long *)&UNK_10f31821c;
  func_0x00010599bdd4();
  func_0x00010599c0c0();
  func_0x00010599bc4c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1059968fc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010599bdb4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010599bffc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 105996930; end: 10599699b;  */

void FUN_105996930(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x00010599bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_10598f5a0(*(undefined8 *)(unaff_x19 + 0x20));
    func_0x00010599bdc0();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010599c1b4();
  }
  func_0x00010599bf88();
  return;
}



/* Entry: 10599699c; end: 10599699f;  */

void FUN_10599699c(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010599bbb4();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010599bff0();
    puVar1 = unaff_x22;
  }
  func_0x00010599bcd4();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599bf5c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010599c0ac();
    if (param_1 == (ulong *)0x0) {
      FUN_10598f798();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_10599e510();
    }
  }
  func_0x00010599bb84();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010599bba4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1059969a0; end: 1059969d3;  */

long FUN_1059969a0(long param_1)

{
  func_0x00010599bd80();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10599e398();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1059969d4; end: 1059969e7;  */

void FUN_1059969d4(void)

{
  FUN_1059969a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059969e8; end: 1059969f3;  */

undefined ** FUN_1059969e8(void)

{
  return &PTR_DAT_1108c7f38;
}



/* Entry: 1059969f4; end: 105996acf;  */

void FUN_1059969f4(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x00010599bfa0();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010599c150();
  }
  func_0x00010599bf1c();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 105996ad0; end: 105996ad3;  */

void FUN_105996ad0(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010599bbb4();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010599c22c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010599c25c();
    if (extraout_x8 == 0) {
      FUN_10598f798();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010599c120();
    }
  }
  func_0x00010599bde8();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010599bba4();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 105996ad4; end: 105996b3b;  */

void FUN_105996ad4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  lVar1 = param_3;
  func_0x00010599bddc();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_1108c7318;
  if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
    func_0x00010599bb78();
  }
  lVar1 = param_3 + 0x10;
  func_0x00010599bfdc();
  unaff_x19[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x00010599bfdc();
  unaff_x19[3] = lVar1;
  param_3 = param_3 + 0x20;
  func_0x00010599bfdc();
  unaff_x19[4] = param_3;
  *(undefined4 *)(unaff_x19 + 5) = 0;
  return;
}



/* Entry: 105996b3c; end: 105996b67;  */

undefined8 FUN_105996b3c(undefined8 param_1)

{
  func_0x00010599bd80();
  FUN_105996b68(param_1);
  return param_1;
}


