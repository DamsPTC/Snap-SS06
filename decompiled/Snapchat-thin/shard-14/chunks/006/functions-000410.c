/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b52c120; end: 10b52c14b;  */

long FUN_10b52c120(long param_1)

{
  func_0x00010b534518();
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b52c14c; end: 10b52c14f;  */

long FUN_10b52c14c(long param_1)

{
  func_0x00010b534518();
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b52c150; end: 10b52c163;  */

void FUN_10b52c150(void)

{
  FUN_10b52c120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52c164; end: 10b52c16f;  */

undefined ** FUN_10b52c164(void)

{
  return &PTR_DAT_110cffd80;
}



/* Entry: 10b52c170; end: 10b52c19f;  */

void FUN_10b52c170(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534610();
  func_0x000107c282c0();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b52c1a0; end: 10b52c28f;  */

long * FUN_10b52c1a0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined1 *puVar1;
  char in_NG;
  char in_OV;
  undefined8 *puVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  undefined8 *unaff_x23;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  func_0x00010b534274();
  uVar6 = (ulong)(*(uint *)(param_1 + 3) & ((int)*(uint *)(param_1 + 3) >> 0x1f ^ 0xffffffffU));
  do {
    if (uVar6 == 0) {
      if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
        return unaff_x20;
      }
      func_0x00010b534550();
      if ((long)param_3 < 0) {
        param_3 = *(ulong *)(extraout_x8 + 0x10);
      }
      func_0x00010b534648();
      if ((long)(int)param_3 <= *param_1 - (long)param_4) {
        _memcpy(param_4);
        return (long *)((long)param_4 + (long)(int)param_3);
      }
      while( true ) {
        iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        param_3 = (ulong)(uint)(iVar3 - iVar4);
        if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        puVar1 = (undefined1 *)((long)param_4 + (long)iVar4);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    func_0x00010b534530();
    puVar2 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      puVar2 = (undefined8 *)*unaff_x23;
    }
    func_0x00010b534858(puVar2);
    lVar5 = (long)*(char *)((long)unaff_x23 + 0x17);
    if (lVar5 < 0) {
      lVar5 = unaff_x23[1];
      in_OV = SBORROW8(lVar5,0x7f);
      in_NG = lVar5 + -0x7f < 0;
      if (lVar5 < 0x80) goto LAB_10b52c20c;
LAB_10b52c248:
      param_2 = 1;
      param_1 = unaff_x19;
      func_0x00010b534b3c();
      unaff_x20 = param_1;
    }
    else {
LAB_10b52c20c:
      func_0x00010b534c2c();
      if (in_NG != in_OV) goto LAB_10b52c248;
      *(undefined1 *)unaff_x20 = 10;
      *(char *)((long)unaff_x20 + 1) = (char)lVar5;
      if (*(char *)((long)unaff_x23 + 0x17) < '\0') {
        unaff_x23 = (undefined8 *)*unaff_x23;
      }
      param_1 = (long *)((long)unaff_x20 + 2);
      func_0x00010b534864();
      unaff_x20 = (long *)((long)unaff_x20 + 2 + lVar5);
    }
    uVar6 = uVar6 - 1;
  } while( true );
}



/* Entry: 10b52c290; end: 10b52c2df;  */

void FUN_10b52c290(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010b534aac();
  while (unaff_x22 != 0) {
    func_0x00010b534438();
    func_0x00010b5349fc();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
  }
  func_0x00010b534bbc();
  return;
}



/* Entry: 10b52c2e0; end: 10b52c2e3;  */

void FUN_10b52c2e0(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b5344bc();
  func_0x00010598fce8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52c2e4; end: 10b52c313;  */

void FUN_10b52c2e4(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b5344bc();
  func_0x00010598fce8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52c314; end: 10b52c347;  */

long FUN_10b52c314(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b52c348; end: 10b52c34b;  */

long FUN_10b52c348(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b52c34c; end: 10b52c35f;  */

void FUN_10b52c34c(void)

{
  FUN_10b52c314();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52c360; end: 10b52c36b;  */

undefined ** FUN_10b52c360(void)

{
  return &PTR_DAT_110cffde0;
}



/* Entry: 10b52c36c; end: 10b52c447;  */

void FUN_10b52c36c(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x00010b534798();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b534af0();
  }
  func_0x00010b534764();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b52c448; end: 10b52c44b;  */

void FUN_10b52c448(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53424c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010b534958();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5349bc();
    if (extraout_x8 == 0) {
      func_0x000108c6f470();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010b534ae0();
    }
  }
  func_0x00010b534400();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b53423c();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52c44c; end: 10b52c4a7;  */

void FUN_10b52c44c(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53424c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010b534958();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5349bc();
    if (extraout_x8 == 0) {
      func_0x000108c6f470();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010b534ae0();
    }
  }
  func_0x00010b534400();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b53423c();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52c4a8; end: 10b52c4cf;  */

undefined8 FUN_10b52c4a8(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52c4d0; end: 10b52c4d3;  */

undefined8 FUN_10b52c4d0(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52c4d4; end: 10b52c4e7;  */

void FUN_10b52c4d4(void)

{
  FUN_10b52c4a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52c4e8; end: 10b52c4f3;  */

undefined ** FUN_10b52c4e8(void)

{
  return &PTR_DAT_110cffe40;
}



/* Entry: 10b52c4f4; end: 10b52c51f;  */

void FUN_10b52c4f4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b52c520; end: 10b52c59f;  */

long * FUN_10b52c520(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  plVar2 = param_2;
  func_0x00010b534118();
  if ((long)plVar2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52c56c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar2 == 0) goto LAB_10b52c56c;
  param_4 = (long *)&UNK_10f777782;
  func_0x00010b534528();
  func_0x00010b5341cc();
  param_1 = unaff_x22;
  param_2 = unaff_x22;
LAB_10b52c56c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5349b0();
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



/* Entry: 10b52c5a0; end: 10b52c5f7;  */

void FUN_10b52c5a0(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5340e0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b52c5f8; end: 10b52c5fb;  */

void FUN_10b52c5f8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52c5fc; end: 10b52c643;  */

void FUN_10b52c5fc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52c644; end: 10b52c66b;  */

undefined8 FUN_10b52c644(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52c66c; end: 10b52c66f;  */

undefined8 FUN_10b52c66c(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52c670; end: 10b52c683;  */

void FUN_10b52c670(void)

{
  FUN_10b52c644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52c684; end: 10b52c68f;  */

undefined ** FUN_10b52c684(void)

{
  return &PTR_DAT_110cffea0;
}



/* Entry: 10b52c690; end: 10b52c6bb;  */

void FUN_10b52c690(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b52c6bc; end: 10b52c73b;  */

long * FUN_10b52c6bc(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  plVar2 = param_2;
  func_0x00010b534118();
  if ((long)plVar2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52c708;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar2 == 0) goto LAB_10b52c708;
  param_4 = (long *)&UNK_10f7777d3;
  func_0x00010b534528();
  func_0x00010b5341cc();
  param_1 = unaff_x22;
  param_2 = unaff_x22;
LAB_10b52c708:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5349b0();
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



/* Entry: 10b52c73c; end: 10b52c793;  */

void FUN_10b52c73c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5340e0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b52c794; end: 10b52c797;  */

void FUN_10b52c794(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52c798; end: 10b52c7df;  */

void FUN_10b52c798(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52c7e0; end: 10b52c807;  */

undefined8 FUN_10b52c7e0(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52c808; end: 10b52c80b;  */

undefined8 FUN_10b52c808(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52c80c; end: 10b52c81f;  */

void FUN_10b52c80c(void)

{
  FUN_10b52c7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52c820; end: 10b52c82b;  */

undefined ** FUN_10b52c820(void)

{
  return &PTR_DAT_110cfff00;
}



/* Entry: 10b52c82c; end: 10b52c91b;  */

void FUN_10b52c82c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b52c91c; end: 10b52c91f;  */

void FUN_10b52c91c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52c920; end: 10b52c967;  */

void FUN_10b52c920(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52c968; end: 10b52c997;  */

undefined8 FUN_10b52c968(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  func_0x00010b53465c();
  func_0x00010b534840();
  return param_1;
}



/* Entry: 10b52c998; end: 10b52c99b;  */

undefined8 FUN_10b52c998(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  func_0x00010b53465c();
  func_0x00010b534840();
  return param_1;
}



/* Entry: 10b52c99c; end: 10b52c9af;  */

void FUN_10b52c99c(void)

{
  FUN_10b52c968();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52c9b0; end: 10b52c9bb;  */

undefined ** FUN_10b52c9b0(void)

{
  return &PTR_DAT_110cfff58;
}



/* Entry: 10b52c9bc; end: 10b52c9ef;  */

void FUN_10b52c9bc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
  func_0x00010b5349d0();
  func_0x00010b534838();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b52c9f0; end: 10b52cad3;  */

long * FUN_10b52c9f0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010b534088();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10b52ca20;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b52ca20:
      param_4 = (long *)&UNK_10f77781c;
      func_0x00010b534528();
      func_0x00010b53402c();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010b534460();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10b52ca54;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b52ca54:
      param_4 = (long *)&UNK_10f77785d;
      func_0x00010b534528();
      func_0x00010b534074();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010b534580(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52caa0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b52caa0;
  param_4 = (long *)&UNK_10f777899;
  func_0x00010b534528();
  func_0x00010b53412c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b52caa0:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
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



/* Entry: 10b52cad4; end: 10b52cb63;  */

void FUN_10b52cad4(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long unaff_x19;
  
  func_0x00010b5340e0();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5345d4();
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5345d4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
  }
  func_0x00010b534bbc();
  return;
}



/* Entry: 10b52cb64; end: 10b52cb67;  */

void FUN_10b52cb64(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  func_0x00010b534344();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b5349d8();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534b20();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52cb68; end: 10b52cbf3;  */

void FUN_10b52cb68(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  func_0x00010b534344();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b5349d8();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534b20();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52cbf4; end: 10b52cc1f;  */

undefined8 FUN_10b52cbf4(undefined8 param_1)

{
  func_0x00010b534518();
  FUN_10b52cc20(param_1);
  return param_1;
}



/* Entry: 10b52cc20; end: 10b52cc57;  */

undefined8 FUN_10b52cc20(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000108c6fae8(param_1 + 0x10);
  if (extraout_x8 != 0) {
    func_0x000108c6f9f8();
  }
  return unaff_x19;
}



/* Entry: 10b52cc58; end: 10b52cc5b;  */

undefined8 FUN_10b52cc58(undefined8 param_1)

{
  func_0x00010b534518();
  FUN_10b52cc20(param_1);
  return param_1;
}



/* Entry: 10b52cc5c; end: 10b52cc6f;  */

void FUN_10b52cc5c(void)

{
  FUN_10b52cbf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52cc70; end: 10b52cc7b;  */

undefined ** FUN_10b52cc70(void)

{
  return &PTR_DAT_110cfffb0;
}



/* Entry: 10b52cc7c; end: 10b52ccc3;  */

void FUN_10b52cc7c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534610();
  func_0x000108c6f45c();
  func_0x00010b534900();
  func_0x000107c3025c(unaff_x19 + 0x30);
  func_0x000107c3025c(unaff_x19 + 0x38);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x40) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b52ccc4; end: 10b52ce0b;  */

long * FUN_10b52ccc4(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010b534274();
  func_0x00010b534580(param_1[5]);
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10b52cd00;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b52cd00:
      param_4 = (long *)&UNK_10f7778d4;
      func_0x00010b534528();
      func_0x00010b53402c();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010b534580(*(undefined8 *)(unaff_x21 + 0x30));
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10b52cd38;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b52cd38:
      param_4 = (long *)&UNK_10f77791f;
      func_0x00010b534528();
      func_0x00010b534074();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010b534580(*(undefined8 *)(unaff_x21 + 0x38));
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 == (long *)0x0) goto LAB_10b52cd84;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b52cd84;
  param_4 = (long *)&UNK_10f777967;
  func_0x00010b534528();
  func_0x00010b53412c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b52cd84:
  if (*(char *)(unaff_x21 + 0x40) == '\x01') {
    func_0x00010b534320();
    param_2 = param_1;
    func_0x00010b5348f8();
    func_0x00010b534b04();
    unaff_x20 = param_1;
  }
  iVar4 = *(int *)(unaff_x21 + 0x18);
  for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
    func_0x00010b534058();
    param_3 = (ulong)*(uint *)(param_2 + 4);
    param_1 = (long *)0x5;
    func_0x00010b5342c4();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
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



/* Entry: 10b52ce0c; end: 10b52cebb;  */

void FUN_10b52ce0c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long unaff_x19;
  int unaff_w20;
  long unaff_x22;
  
  func_0x00010b5349e0();
  func_0x00010b5342d0();
  while (unaff_x22 != 0) {
    func_0x00010b534ad8();
    func_0x00010b5348a0();
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b5345d4();
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x30));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b5345d4();
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x38));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b5345d4();
  }
  iVar1 = unaff_w20 + (uint)*(byte *)(unaff_x19 + 0x40) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar2 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x44) = iVar1;
  return;
}



/* Entry: 10b52cebc; end: 10b52cebf;  */

void FUN_10b52cebc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5344bc();
  func_0x000108c6cd6c();
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534b18();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x38);
    func_0x000107c30248();
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x40) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52cec0; end: 10b52cf73;  */

void FUN_10b52cec0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5344bc();
  func_0x000108c6cd6c();
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534b18();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x38);
    func_0x000107c30248();
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x40) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52cf74; end: 10b52cf9b;  */

undefined8 FUN_10b52cf74(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52cf9c; end: 10b52cf9f;  */

undefined8 FUN_10b52cf9c(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52cfa0; end: 10b52cfb3;  */

void FUN_10b52cfa0(void)

{
  FUN_10b52cf74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52cfb4; end: 10b52cfbf;  */

undefined ** FUN_10b52cfb4(void)

{
  return &PTR_DAT_110d00010;
}



/* Entry: 10b52cfc0; end: 10b52cfeb;  */

void FUN_10b52cfc0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b52cfec; end: 10b52d06b;  */

long * FUN_10b52cfec(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  plVar2 = param_2;
  func_0x00010b534118();
  if ((long)plVar2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52d038;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar2 == 0) goto LAB_10b52d038;
  param_4 = (long *)&UNK_10f7779ae;
  func_0x00010b534528();
  func_0x00010b5341cc();
  param_1 = unaff_x22;
  param_2 = unaff_x22;
LAB_10b52d038:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5349b0();
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



/* Entry: 10b52d06c; end: 10b52d0c3;  */

void FUN_10b52d06c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5340e0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b52d0c4; end: 10b52d0c7;  */

void FUN_10b52d0c4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52d0c8; end: 10b52d15f;  */

void FUN_10b52d0c8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52d160; end: 10b52d197;  */

long FUN_10b52d160(long param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x00010b52d110(param_1);
  }
  return param_1;
}



/* Entry: 10b52d198; end: 10b52d19b;  */

long FUN_10b52d198(long param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x00010b52d110(param_1);
  }
  return param_1;
}



/* Entry: 10b52d19c; end: 10b52d1af;  */

void FUN_10b52d19c(void)

{
  FUN_10b52d160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52d1b0; end: 10b52d1bb;  */

undefined ** FUN_10b52d1b0(void)

{
  return &PTR_DAT_110d00080;
}



/* Entry: 10b52d1bc; end: 10b52d1ef;  */

void FUN_10b52d1bc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
  func_0x00010b52d110();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b52d1f0; end: 10b52d287;  */

long * FUN_10b52d1f0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b534088();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52d234;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b52d234;
  param_4 = (long *)&UNK_10f777a08;
  func_0x00010b534528();
  func_0x00010b53402c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b52d234:
  if (*(int *)(unaff_x21 + 0x24) == 2) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x18) + 0x18);
    param_1 = (long *)0x2;
    func_0x00010b5342c4();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
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



/* Entry: 10b52d288; end: 10b52d2ff;  */

long FUN_10b52d288(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5340e0();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x24) == 2) {
    FUN_10b52d06c(*(undefined8 *)(unaff_x19 + 0x18));
    func_0x00010b534014();
    func_0x00010b534470();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x20) = (int)param_1;
  return param_1;
}



/* Entry: 10b52d300; end: 10b52d3b7;  */

void FUN_10b52d300(ulong *param_1,long param_2,ulong *param_3)

{
  int iVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b534170();
  puVar2 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x00010b534784();
    puVar2 = unaff_x22;
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x24) == iVar1) {
      if (iVar1 == 2) {
        func_0x00010b534ba4();
        FUN_10b52d0c8();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x24) != 0) {
        param_1 = unaff_x21;
        func_0x00010b52d110();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
      if (iVar1 == 2) {
        FUN_10b5331ec();
        unaff_x21[3] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b53423c();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52d3b8; end: 10b52d4bf;  */

void FUN_10b52d3b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010b534b64();
  *unaff_x19 = &PTR_FUN_110cfed18;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5341ac();
  }
  func_0x00010b534be8(*(undefined4 *)(unaff_x20 + 0x10));
  unaff_x19[5] = unaff_x21;
  FUN_10b52dadc(unaff_x19 + 3,unaff_x20 + 0x18);
  lVar3 = unaff_x20 + 0x30;
  func_0x00010b5349c8();
  unaff_x19[6] = lVar3;
  lVar3 = unaff_x20 + 0x38;
  func_0x00010b5349c8();
  unaff_x19[7] = lVar3;
  lVar3 = unaff_x20 + 0x40;
  func_0x00010b5349c8();
  unaff_x19[8] = lVar3;
  uVar1 = *(uint *)(unaff_x19 + 2);
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x21;
    FUN_10b533238();
  }
  unaff_x19[9] = uVar4;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x21;
    func_0x000108c6f470();
  }
  unaff_x19[10] = uVar4;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x21;
    func_0x000108c6f470();
  }
  unaff_x19[0xb] = uVar4;
  if ((uVar1 >> 3 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x000106af6730();
  }
  unaff_x19[0xc] = unaff_x21;
  uVar2 = *(undefined4 *)(unaff_x20 + 0x68);
  *(undefined1 *)((long)unaff_x19 + 0x6c) = *(undefined1 *)(unaff_x20 + 0x6c);
  *(undefined4 *)(unaff_x19 + 0xd) = uVar2;
  return;
}



/* Entry: 10b52d4c0; end: 10b52d4eb;  */

undefined8 FUN_10b52d4c0(undefined8 param_1)

{
  func_0x00010b534518();
  FUN_10b52d4ec(param_1);
  return param_1;
}



/* Entry: 10b52d4ec; end: 10b52d563;  */

undefined8 FUN_10b52d4ec(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b52cbf4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010bceb594();
  }
  __ZdlPv();
  func_0x00010b534758(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x00010b534654();
  }
  return unaff_x19;
}



/* Entry: 10b52d564; end: 10b52d567;  */

undefined8 FUN_10b52d564(undefined8 param_1)

{
  func_0x00010b534518();
  FUN_10b52d4ec(param_1);
  return param_1;
}



/* Entry: 10b52d568; end: 10b52d57b;  */

void FUN_10b52d568(void)

{
  FUN_10b52d4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52d57c; end: 10b52d587;  */

undefined ** FUN_10b52d57c(void)

{
  return &PTR_DAT_110d000f0;
}



/* Entry: 10b52d588; end: 10b52d637;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b52d588(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  func_0x000107c3025c(param_1 + 0x40);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b52cc7c(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b535efc(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b535efc(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010bceb634(*(undefined8 *)(param_1 + 0x60));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b52d638; end: 10b52d81f;  */

long * FUN_10b52d638(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar6;
  long *unaff_x22;
  undefined8 *puVar7;
  int iVar8;
  
  func_0x00010b534738();
  func_0x00010b534580(param_1[6]);
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      unaff_x22 = (long *)*unaff_x22;
      goto LAB_10b52d678;
    }
  }
  else if ((int)param_2 != 0) {
LAB_10b52d678:
    param_4 = (long *)&UNK_10f777a5b;
    func_0x00010b534528();
    func_0x00010b534310();
    func_0x00010b534790();
    param_1 = unaff_x22;
    unaff_x21 = unaff_x22;
  }
  uVar4 = *(ulong *)(unaff_x20 + 0x38) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    param_2 = (long *)0x2;
    param_1 = unaff_x19;
    func_0x00010b534790();
    unaff_x21 = param_1;
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  puVar7 = (undefined8 *)(ulong)uVar2;
  if ((uVar2 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x48);
    uVar4 = (ulong)*(uint *)((long)param_2 + 0x44);
    param_1 = (long *)0x3;
    func_0x00010b534164();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    func_0x00010b5342f4();
    param_2 = param_1;
    func_0x00010b5348f8();
    func_0x00010b5343b4();
    unaff_x21 = param_1;
  }
  iVar6 = *(int *)(unaff_x20 + 0x20);
  while (iVar6 != 0) {
    func_0x00010b5340c4();
    uVar4 = (ulong)*(uint *)(param_2 + 4);
    param_1 = (long *)0x5;
    func_0x00010b534164();
    func_0x00010b5348b8();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x50);
    uVar4 = (ulong)*(uint *)(param_2 + 4);
    param_1 = (long *)0x6;
    func_0x00010b534164();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x58);
    uVar4 = (ulong)*(uint *)(param_2 + 4);
    param_1 = (long *)0x7;
    func_0x00010b534164();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x60);
    uVar4 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x8;
    func_0x00010b534164();
    unaff_x21 = param_1;
  }
  func_0x00010b534580(*(undefined8 *)(unaff_x20 + 0x40));
  if ((long)param_2 < 0) {
    if (puVar7[1] == 0) goto LAB_10b52d7b4;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if ((int)param_2 == 0) goto LAB_10b52d7b4;
  param_4 = (long *)&UNK_10f777a9c;
  func_0x00010b534528(puVar7);
  func_0x00010b5344b0();
  param_1 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_10b52d7b4:
  plVar3 = param_1;
  if (*(char *)(unaff_x20 + 0x6c) == '\x01') {
    func_0x00010b5342f4();
    plVar3 = (long *)0x50;
    func_0x000107c280a8(0x50,param_1);
    func_0x00010b534354();
    unaff_x21 = plVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010b534550();
  if ((long)uVar4 < 0) {
    uVar4 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534aa0();
  if (*plVar3 - (long)param_4 < (long)(int)uVar4) {
    while( true ) {
      iVar8 = ((int)*plVar3 - (int)param_4) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar8);
      if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar8);
      param_4 = plVar3;
      func_0x000107c303e4(plVar3,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar6);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)uVar4);
}



/* Entry: 10b52d820; end: 10b52d94b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b52d820(long param_1)

{
  uint uVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b5349e0();
  func_0x00010b5342d0();
  while (unaff_x22 != 0) {
    param_1 = *unaff_x21;
    FUN_10b52d288();
    func_0x00010b534394();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b5345d4();
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c28098();
    func_0x00010b5345d4();
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x40));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b5345d4();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b52ce0c(*(undefined8 *)(unaff_x19 + 0x48));
      func_0x00010b534014();
      func_0x00010b534470();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000108c6cd50(*(undefined8 *)(unaff_x19 + 0x50));
      func_0x00010b5345d4();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000108c6cd50(*(undefined8 *)(unaff_x19 + 0x58));
      func_0x00010b5345d4();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000106af66dc(*(undefined8 *)(unaff_x19 + 0x60));
      func_0x00010b5345d4();
    }
  }
  if (*(int *)(unaff_x19 + 0x68) != 0) {
    func_0x00010b53414c();
    func_0x00010b534a28();
  }
  iVar2 = unaff_w20 + (uint)*(byte *)(unaff_x19 + 0x6c) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar3 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(unaff_x19 + 0x14) = iVar2;
  return;
}



/* Entry: 10b52d94c; end: 10b52d94f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b52d94c(ulong *param_1,long param_2)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x00010b53424c();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010b5347ec();
  }
  func_0x00010b534c08();
  FUN_10b52dadc();
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x30));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x38));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x38);
    func_0x000107c30248();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x40));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x40);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar3;
        FUN_10b533238();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_10b52cec0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5346c4();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x58);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5346c4();
        *(ulong **)(unaff_x21 + 0x58) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        func_0x000106af6730();
        *(ulong **)(unaff_x21 + 0x60) = puVar3;
        param_1 = puVar3;
      }
      else {
        func_0x00010bceb618();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  if (*(char *)(unaff_x20 + 0x6c) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x6c) = 1;
  }
  func_0x00010b5340f4();
  if ((extraout_x8_02 & 1) != 0) {
    func_0x00010b53423c();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52d950; end: 10b52dadb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b52d950(ulong *param_1,long param_2)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x00010b53424c();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010b5347ec();
  }
  func_0x00010b534c08();
  FUN_10b52dadc();
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x30));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x38));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x38);
    func_0x000107c30248();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x40));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x40);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar3;
        FUN_10b533238();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_10b52cec0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5346c4();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x58);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5346c4();
        *(ulong **)(unaff_x21 + 0x58) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        func_0x000106af6730();
        *(ulong **)(unaff_x21 + 0x60) = puVar3;
        param_1 = puVar3;
      }
      else {
        func_0x00010bceb618();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  if (*(char *)(unaff_x20 + 0x6c) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x6c) = 1;
  }
  func_0x00010b5340f4();
  if ((extraout_x8_02 & 1) != 0) {
    func_0x00010b53423c();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b52dadc; end: 10b52dafb;  */

void FUN_10b52dadc(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b52dafc; end: 10b52db1f;  */

undefined8 FUN_10b52dafc(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b52db20; end: 10b52db23;  */

undefined8 FUN_10b52db20(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b52db24; end: 10b52db37;  */

void FUN_10b52db24(void)

{
  FUN_10b52dafc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52db38; end: 10b52dbc3;  */

undefined ** FUN_10b52db38(void)

{
  return &PTR_DAT_110d00148;
}



/* Entry: 10b52dbc4; end: 10b52dbe7;  */

undefined8 FUN_10b52dbc4(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b52dbe8; end: 10b52dbeb;  */

undefined8 FUN_10b52dbe8(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b52dbec; end: 10b52dbff;  */

void FUN_10b52dbec(void)

{
  FUN_10b52dbc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52dc00; end: 10b52dc7b;  */

undefined ** FUN_10b52dc00(void)

{
  return &PTR_DAT_110d001a8;
}



/* Entry: 10b52dc7c; end: 10b52dccb;  */

long FUN_10b52dc7c(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  func_0x00010b534840();
  func_0x00010b5349a8();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b535bd4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b535bd4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b52dccc; end: 10b52dccf;  */

long FUN_10b52dccc(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  func_0x00010b534840();
  func_0x00010b5349a8();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b535bd4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b535bd4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b52dcd0; end: 10b52dce3;  */

void FUN_10b52dcd0(void)

{
  FUN_10b52dc7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


