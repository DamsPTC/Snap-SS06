/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9521bc; end: 10b9521c7;  */

void FUN_10b9521bc(void)

{
  Hint_Prefetch(0x1133fb3b0,0,0,0);
  Hint_Prefetch(PTR_DAT_1133fb3b0,0,0,0);
  return;
}



/* Entry: 10b9521c8; end: 10b9521f3;  */

undefined8 FUN_10b9521c8(undefined8 param_1)

{
  func_0x00010b952bec();
  FUN_10b9521f4(param_1);
  return param_1;
}



/* Entry: 10b9521f4; end: 10b95222b;  */

long FUN_10b9521f4(long param_1)

{
  func_0x000107c30258(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b9520f8();
  }
  __ZdlPv();
  func_0x000107c282b4(param_1 + 0x30);
  FUN_10b952758(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b95222c; end: 10b95222f;  */

undefined8 FUN_10b95222c(undefined8 param_1)

{
  func_0x00010b952bec();
  FUN_10b9521f4(param_1);
  return param_1;
}



/* Entry: 10b952230; end: 10b952243;  */

void FUN_10b952230(void)

{
  FUN_10b9521c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b952244; end: 10b95224f;  */

void FUN_10b952244(void)

{
  Hint_Prefetch(0x1133fb4a8,0,0,0);
  Hint_Prefetch(PTR_DAT_1133fb4a8,0,0,0);
  return;
}



/* Entry: 10b952250; end: 10b952293;  */

long FUN_10b952250(long param_1)

{
  func_0x00010b952bec();
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c282b4(param_1 + 0x40);
  func_0x000107c282b4(param_1 + 0x28);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b952294; end: 10b952297;  */

long FUN_10b952294(long param_1)

{
  func_0x00010b952bec();
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c282b4(param_1 + 0x40);
  func_0x000107c282b4(param_1 + 0x28);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b952298; end: 10b9522ab;  */

void FUN_10b952298(void)

{
  FUN_10b952250();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9522ac; end: 10b9522b7;  */

void FUN_10b9522ac(void)

{
  Hint_Prefetch(0x1133fb640,0,0,0);
  Hint_Prefetch(PTR_DAT_1133fb640,0,0,0);
  return;
}



/* Entry: 10b9522b8; end: 10b9522e7;  */

long FUN_10b9522b8(long param_1)

{
  func_0x00010b952bec();
  func_0x000107c30258(param_1 + 0x10);
  func_0x00010b952c58();
  return param_1;
}



/* Entry: 10b9522e8; end: 10b9522eb;  */

long FUN_10b9522e8(long param_1)

{
  func_0x00010b952bec();
  func_0x000107c30258(param_1 + 0x10);
  func_0x00010b952c58();
  return param_1;
}



/* Entry: 10b9522ec; end: 10b9522ff;  */

void FUN_10b9522ec(void)

{
  FUN_10b9522b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b952300; end: 10b95230b;  */

void FUN_10b952300(void)

{
  Hint_Prefetch(0x1133fb798,0,0,0);
  Hint_Prefetch(PTR_DAT_1133fb798,0,0,0);
  return;
}



/* Entry: 10b95230c; end: 10b9523a3;  */

long FUN_10b95230c(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  func_0x00010b952bec();
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    return param_1;
  }
  if (iVar1 == 2) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b952370;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b9522b8();
    }
  }
  else {
    if (iVar1 != 1) goto LAB_10b952370;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b952370;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b952250();
    }
  }
  __ZdlPv();
LAB_10b952370:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}



/* Entry: 10b9523a4; end: 10b9523a7;  */

long FUN_10b9523a4(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  func_0x00010b952bec();
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    return param_1;
  }
  if (iVar1 == 2) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b952370;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b9522b8();
    }
  }
  else {
    if (iVar1 != 1) goto LAB_10b952370;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b952370;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b952250();
    }
  }
  __ZdlPv();
LAB_10b952370:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}



/* Entry: 10b9523a8; end: 10b9523bb;  */

void FUN_10b9523a8(void)

{
  FUN_10b95230c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9523bc; end: 10b9523c7;  */

void FUN_10b9523bc(void)

{
  Hint_Prefetch(0x1133fb890,0,0,0);
  Hint_Prefetch(PTR_DAT_1133fb890,0,0,0);
  return;
}



/* Entry: 10b9523c8; end: 10b9523f3;  */

undefined8 FUN_10b9523c8(undefined8 param_1)

{
  func_0x00010b952bec();
  FUN_10b9523f4(param_1);
  return param_1;
}



/* Entry: 10b9523f4; end: 10b952423;  */

undefined8 FUN_10b9523f4(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b9525bc();
  }
  __ZdlPv();
  func_0x00010b952c60(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x00010b952c2c();
  }
  return unaff_x19;
}



/* Entry: 10b952424; end: 10b952427;  */

undefined8 FUN_10b952424(undefined8 param_1)

{
  func_0x00010b952bec();
  FUN_10b9523f4(param_1);
  return param_1;
}



/* Entry: 10b952428; end: 10b95243b;  */

void FUN_10b952428(void)

{
  FUN_10b9523c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b95243c; end: 10b952447;  */

void FUN_10b95243c(void)

{
  Hint_Prefetch(0x1133fb960,0,0,0);
  Hint_Prefetch(PTR_DAT_1133fb960,0,0,0);
  return;
}



/* Entry: 10b952448; end: 10b95247b;  */

long FUN_10b952448(long param_1)

{
  func_0x00010b952bec();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b95202c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b95247c; end: 10b95247f;  */

long FUN_10b95247c(long param_1)

{
  func_0x00010b952bec();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b95202c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b952480; end: 10b952493;  */

void FUN_10b952480(void)

{
  FUN_10b952448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b952494; end: 10b95249f;  */

void FUN_10b952494(void)

{
  Hint_Prefetch(0x1133fba40,0,0,0);
  Hint_Prefetch(PTR_DAT_1133fba40,0,0,0);
  return;
}



/* Entry: 10b9524a0; end: 10b9524d7;  */

long FUN_10b9524a0(long param_1)

{
  func_0x00010b952bec();
  func_0x00010b952c58();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b9523c8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b9524d8; end: 10b9524db;  */

long FUN_10b9524d8(long param_1)

{
  func_0x00010b952bec();
  func_0x00010b952c58();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b9523c8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b9524dc; end: 10b9524ef;  */

void FUN_10b9524dc(void)

{
  FUN_10b9524a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9524f0; end: 10b9524fb;  */

void FUN_10b9524f0(void)

{
  Hint_Prefetch(0x1133fbb50,0,0,0);
  Hint_Prefetch(PTR_DAT_1133fbb50,0,0,0);
  return;
}



/* Entry: 10b9524fc; end: 10b95253f;  */

long FUN_10b9524fc(long param_1)

{
  func_0x00010b952bec();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b95202c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b9523c8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b952540; end: 10b952543;  */

long FUN_10b952540(long param_1)

{
  func_0x00010b952bec();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b95202c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b9523c8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b952544; end: 10b952557;  */

void FUN_10b952544(void)

{
  FUN_10b9524fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b952558; end: 10b952563;  */

void FUN_10b952558(void)

{
  Hint_Prefetch(0x1133fbc48,0,0,0);
  Hint_Prefetch(PTR_DAT_1133fbc48,0,0,0);
  return;
}



/* Entry: 10b952564; end: 10b952597;  */

long FUN_10b952564(long param_1)

{
  func_0x00010b952bec();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b9523c8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b952598; end: 10b95259b;  */

long FUN_10b952598(long param_1)

{
  func_0x00010b952bec();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b9523c8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b95259c; end: 10b9525af;  */

void FUN_10b95259c(void)

{
  FUN_10b952564();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9525b0; end: 10b9525bb;  */

void FUN_10b9525b0(void)

{
  Hint_Prefetch(0x1133fbd50,0,0,0);
  Hint_Prefetch(PTR_DAT_1133fbd50,0,0,0);
  return;
}



/* Entry: 10b9525bc; end: 10b9525e7;  */

undefined8 FUN_10b9525bc(undefined8 param_1)

{
  func_0x00010b952bec();
  FUN_10b9525e8(param_1);
  return param_1;
}



/* Entry: 10b9525e8; end: 10b952673;  */

undefined8 FUN_10b9525e8(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_10b9523c8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_10b9523c8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_10b9525bc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_10b9525bc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x000107c303ac();
  }
  FUN_10b9527d4(param_1 + 0x60);
  FUN_10b9527fc(param_1 + 0x48);
  FUN_10b9527fc(param_1 + 0x30);
  func_0x00010b952c60(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x00010b952c2c();
  }
  return unaff_x19;
}



/* Entry: 10b952674; end: 10b952677;  */

undefined8 FUN_10b952674(undefined8 param_1)

{
  func_0x00010b952bec();
  FUN_10b9525e8(param_1);
  return param_1;
}



/* Entry: 10b952678; end: 10b95268b;  */

void FUN_10b952678(void)

{
  FUN_10b9525bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b95268c; end: 10b952697;  */

void FUN_10b95268c(void)

{
  Hint_Prefetch(0x1133fbe50,0,0,0);
  Hint_Prefetch(PTR_DAT_1133fbe50,0,0,0);
  return;
}



/* Entry: 10b952698; end: 10b9526c3;  */

long FUN_10b952698(long param_1)

{
  func_0x00010b952bec();
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b9526c4; end: 10b9526c7;  */

long FUN_10b9526c4(long param_1)

{
  func_0x00010b952bec();
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b9526c8; end: 10b9526db;  */

void FUN_10b9526c8(void)

{
  FUN_10b952698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9526dc; end: 10b952757;  */

void FUN_10b9526dc(void)

{
  Hint_Prefetch(0x1133fc098,0,0,0);
  Hint_Prefetch(PTR_DAT_1133fc098,0,0,0);
  return;
}



/* Entry: 10b952758; end: 10b95277f;  */

void FUN_10b952758(void)

{
  long extraout_x8;
  
  func_0x00010b952c60();
  if (extraout_x8 != 0) {
    func_0x00010b952c2c();
  }
  return;
}



/* Entry: 10b952780; end: 10b9527ab;  */

long FUN_10b952780(long param_1)

{
  func_0x000107c282b4(param_1 + 0x20);
  FUN_10b952758(param_1 + 8);
  return param_1;
}



/* Entry: 10b9527ac; end: 10b9527d3;  */

void FUN_10b9527ac(void)

{
  long extraout_x8;
  
  func_0x00010b952c60();
  if (extraout_x8 != 0) {
    func_0x00010b952c2c();
  }
  return;
}



/* Entry: 10b9527d4; end: 10b9527fb;  */

void FUN_10b9527d4(void)

{
  long extraout_x8;
  
  func_0x00010b952c60();
  if (extraout_x8 != 0) {
    func_0x00010b952c2c();
  }
  return;
}



/* Entry: 10b9527fc; end: 10b952823;  */

void FUN_10b9527fc(void)

{
  long extraout_x8;
  
  func_0x00010b952c60();
  if (extraout_x8 != 0) {
    func_0x00010b952c2c();
  }
  return;
}



/* Entry: 10b952824; end: 10b952bc7;  */

void FUN_10b952824(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b952c44();
  }
  else {
    func_0x00010b952c18();
  }
  *puVar1 = &PTR_FUN_110d79080;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b952bc8; end: 10b952c6b;  */

void FUN_10b952bc8(undefined8 *param_1)

{
  Hint_Prefetch(param_1,0,0,0);
  Hint_Prefetch(*param_1,0,0,0);
  return;
}



/* Entry: 10b952c6c; end: 10b95c9b3;  */

void FUN_10b952c6c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = 0x10b95a310;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = 0x3f800000;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b95c9b4; end: 10b95ca83;  */

void FUN_10b95c9b4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puStack_40;
  undefined1 auStack_38 [8];
  
  lVar2 = param_2[8];
  if (lVar2 == 0) {
    lVar4 = param_2[1];
    puVar1 = (undefined8 *)0x60;
    __Znwm();
    *puVar1 = &PTR_DAT_110d79838;
    puVar1[1] = 1;
    *(undefined1 *)(puVar1 + 10) = 0;
    puVar1[0xb] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[6] = 0;
    puVar3 = (undefined8 *)(*param_2 + lVar4 * 8);
    puStack_40 = puVar1;
    if (lVar4 == param_2[2]) {
      FUN_10b95dfc8(auStack_38,param_2,puVar3,&puStack_40);
      puVar3 = puStack_40;
    }
    else {
      *puVar3 = puVar1;
      param_2[1] = lVar4 + 1;
      puVar3 = (undefined8 *)0x0;
    }
    FUN_10b95df9c(puVar3);
  }
  else {
    lVar4 = *(long *)(param_2[7] + lVar2 * 8 + -8);
    param_2[8] = lVar2 + -1;
  }
  *param_1 = (long)param_2;
  param_1[1] = lVar4;
  return;
}



/* Entry: 10b95ca84; end: 10b95cb8f;  */

undefined8 * FUN_10b95ca84(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_30 [16];
  
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xc] = &UNK_10dd5b8b0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = &UNK_10dd5b8b0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = &UNK_10dd5b8b0;
  param_1[0x1d] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  puVar1 = param_1 + 9;
  func_0x00010b95cb1c(puVar1);
  FUN_10b960cfc(auStack_30,&UNK_10f7cee73,6);
  func_0x00010b95cb64(puVar1,auStack_30);
  FUN_10b960da4(auStack_30);
  return param_1;
}



/* Entry: 10b95cb90; end: 10b95ccbb;  */

undefined **
FUN_10b95cb90(undefined8 param_1,long param_2,undefined *param_3,undefined8 param_4,long *param_5)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined ***pppuVar14;
  undefined **ppuVar15;
  undefined8 extraout_x8;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined8 *extraout_x8_00;
  undefined *extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar18;
  undefined **ppuVar19;
  undefined ***pppuVar20;
  undefined ***pppuVar21;
  undefined *puVar22;
  undefined **appuStack_250 [2];
  undefined **ppuStack_240;
  undefined *puStack_238;
  undefined **ppuStack_230;
  undefined ***pppuStack_228;
  undefined ***pppuStack_220;
  long *plStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  undefined **ppuStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  undefined8 *puStack_1e0;
  long *plStack_1d8;
  long lStack_1d0;
  undefined **ppuStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *apuStack_100 [4];
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [32];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar7 = param_2;
  func_0x00010b95e6f4();
  ppuStack_a8 = &PTR_DAT_110d79838;
  uStack_a0 = 1;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  pppuVar10 = *(undefined ****)(lVar7 + 8);
  ppuVar15 = *(undefined ***)(param_2 + 0x10);
  iVar4 = (int)&ppuStack_a8;
  uStack_48 = extraout_x8;
  func_0x00010b96171c();
  ppuVar19 = (undefined **)0x0;
  if (iVar4 != 0) {
    func_0x00010b95b318();
    ppuStack_118 = apuStack_100;
    uStack_108 = 4;
    uStack_110 = 0;
    puStack_e0 = auStack_c8;
    uStack_d0 = 4;
    uStack_d8 = 0;
    pppuVar20 = &ppuStack_a8;
    pppuVar11 = (undefined ***)0x1;
    func_0x00010b961564();
    pppuVar10 = pppuVar11;
    pppuVar21 = pppuVar20;
    do {
      ppuVar19 = (undefined **)(ulong)(pppuVar21 == pppuVar11);
      in_ZR = 1;
      if (pppuVar21 == pppuVar11) break;
      in_ZR = *(char *)(pppuVar21 + 1) == '\x04';
      if ((bool)in_ZR) {
        ppuVar15 = *pppuVar21;
        param_3 = (undefined *)(ulong)*(uint *)((long)pppuVar21 + 0xc);
      }
      else {
        param_3 = (undefined *)0x0;
        ppuVar15 = (undefined **)0x0;
      }
      pppuVar10 = &ppuStack_118;
      func_0x00010b95e78c();
      pppuVar21 = pppuVar21 + 2;
    } while (((ulong)pppuVar20 & 1) != 0);
    func_0x00010b95dcb8(&ppuStack_118);
  }
  pppuVar20 = &ppuStack_a8;
  func_0x00010b96121c();
  func_0x00010b95e6a0(uStack_48);
  if ((bool)in_ZR) {
    return ppuVar19;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10b95ccbc;
  puVar5 = auStack_1a0;
  puStack_130 = &stack0xfffffffffffffff0;
  FUN_10b95c9b4();
  func_0x00010b95e75c();
  func_0x00010b96171c();
  if ((int)puVar5 == 0) {
    ppuVar15 = (undefined **)0x0;
    goto LAB_10b95d060;
  }
  func_0x000107c31084();
  puVar6 = puVar5;
  func_0x00010b95e75c();
  uVar12 = 1;
  func_0x00010b961524();
  func_0x000107c3107c(&uStack_1a8,puVar5,puVar6,uVar12);
  pppuVar21 = pppuVar20 + 0xc;
  puVar13 = &uStack_1a8;
  func_0x000108931e7c();
  if ((undefined ***)((long)pppuVar20[0xc] + (long)pppuVar20[0xf]) == pppuVar21) {
    ppuVar19 = pppuVar20[3];
    ppuVar8 = pppuVar20[4];
    puVar18 = (undefined8 *)((long)ppuVar8 - (long)ppuVar19);
    ppuVar2 = (undefined **)((long)puVar18 / 0x18);
    if (ppuVar8 < pppuVar20[5]) {
      *ppuVar8 = (undefined *)0x0;
      ppuVar8[1] = (undefined *)0x0;
      ppuVar19 = ppuVar8 + 3;
      ppuVar8[2] = (undefined *)0x0;
    }
    else {
      uVar1 = (long)ppuVar2 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar1) {
        FUN_10bdb4034();
LAB_10b95d078:
        func_0x000104bfe188();
        pcStack_208 = FUN_10b95d07c;
        ppuStack_240 = ppuVar15;
        puStack_238 = param_3;
        ppuStack_230 = ppuVar2;
        pppuStack_228 = pppuVar20;
        pppuStack_220 = pppuVar10;
        plStack_218 = param_5;
        ppuStack_210 = &puStack_130;
        func_0x00010b95e7b8();
        pppuVar21 = pppuVar21 + 0x18;
        FUN_10b95d594();
        if ((undefined ***)((long)pppuVar10[0x18] + (long)pppuVar10[0x1b]) == pppuVar21) {
          if ((*param_5 == 0) || (*(int *)(*param_5 + 0xc) == 0)) {
            pppuVar20 = (undefined ***)0x0;
          }
          else {
            FUN_10b960fec(appuStack_250,param_5);
            pppuVar20 = pppuVar10;
            FUN_10b95d07c(pppuVar10,appuStack_250);
            FUN_10b960da4(appuStack_250);
          }
          pppuVar21 = pppuVar10 + 9;
          ppuVar15 = (undefined **)((long)pppuVar10[10] - (long)*pppuVar21 >> 6);
          appuStack_250[0] = ppuVar15;
          func_0x00010b95cb1c(pppuVar21);
          func_0x00010b95cb64();
          pppuVar10 = pppuVar10 + 0x18;
          FUN_10b95d660(pppuVar10,param_5);
          *pppuVar10 = ppuVar15;
          func_0x000108ad54ec(*pppuVar21 + (long)pppuVar20 * 8 + 5,appuStack_250);
        }
        else {
          appuStack_250[0] = (undefined **)puVar13[2];
        }
        return appuStack_250[0];
      }
      uVar3 = ((long)pppuVar20[5] - (long)ppuVar19) / 0x18;
      uStack_1e8 = uVar3 * 2;
      if (uStack_1e8 < uVar1 || uStack_1e8 - uVar1 == 0) {
        uStack_1e8 = uVar1;
      }
      if (0x555555555555554 < uVar3) {
        uStack_1e8 = 0xaaaaaaaaaaaaaaa;
      }
      puStack_1e0 = puVar18;
      if (0xaaaaaaaaaaaaaaa < uStack_1e8) goto LAB_10b95d078;
      lVar7 = uStack_1e8 * 0x18;
      __Znwm();
      puVar13 = (undefined8 *)(lVar7 + (long)puStack_1e0);
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      ppuStack_1f8 = (undefined **)(puVar13 + ((long)puStack_1e0 / -0x18) * 3);
      ppuVar16 = ppuStack_1f8;
      for (ppuVar17 = ppuVar19; lStack_1f0 = lVar7, puStack_1e0 = puVar13, ppuVar17 != ppuVar8;
          ppuVar17 = ppuVar17 + 3) {
        *ppuVar16 = *ppuVar17;
        *ppuVar17 = (undefined *)0x0;
        puVar22 = ppuVar17[1];
        ppuVar16[2] = ppuVar17[2];
        ppuVar16[1] = puVar22;
        ppuVar16 = ppuVar16 + 3;
      }
      for (; ppuVar19 != ppuVar8; ppuVar19 = ppuVar19 + 3) {
        func_0x000107c278f4(ppuVar19);
      }
      ppuVar17 = (undefined **)(lStack_1f0 + uStack_1e8 * 0x18);
      ppuVar8 = pppuVar20[3];
      ppuVar19 = (undefined **)(puStack_1e0 + 3);
      pppuVar20[3] = ppuStack_1f8;
      pppuVar20[4] = ppuVar19;
      pppuVar20[5] = ppuVar17;
      if (ppuVar8 != (undefined **)0x0) {
        __ZdlPv();
      }
    }
    pppuVar20[4] = ppuVar19;
    func_0x000107c31068(ppuVar19 + -3,&uStack_1a8);
    ppuVar19[-2] = (undefined *)ppuVar15;
    ppuVar19[-1] = param_3;
    pppuVar21 = pppuVar20 + 0xc;
    FUN_10b8a3cf8(pppuVar21,&uStack_1a8);
    *pppuVar21 = ppuVar2;
    func_0x00010b95e75c();
    uVar12 = 2;
    func_0x00010b961524();
    pppuVar11 = &ppuStack_1c8;
    FUN_10b960cfc(pppuVar11,pppuVar21,uVar12);
    if ((lStack_1c0 == 0) || (*(int *)(lStack_1c0 + 0xc) == 0)) {
      pppuVar21 = (undefined ***)0x0;
    }
    else {
      pppuVar11 = pppuVar20;
      FUN_10b95d07c(pppuVar20,&ppuStack_1c8);
      pppuVar21 = pppuVar11;
    }
    func_0x00010b95e75c();
    pppuVar14 = (undefined ***)0x4;
    func_0x00010b961564();
    pppuVar9 = pppuVar11;
    do {
      if (pppuVar9 == pppuVar14) {
        func_0x00010b95e75c();
        pppuVar10 = (undefined ***)0x5;
        func_0x00010b961564();
        goto LAB_10b95cfcc;
      }
      pppuVar11 = pppuVar20;
      FUN_10b95d15c(pppuVar20,ppuVar2,pppuVar21,&ppuStack_1c8,pppuVar10,pppuVar9,param_5);
      pppuVar9 = pppuVar9 + 2;
    } while (((ulong)pppuVar11 & 1) != 0);
    ppuVar15 = (undefined **)0x0;
    goto LAB_10b95d050;
  }
  func_0x000107c31084();
  puStack_188 = &UNK_1003ab990;
  puStack_190 = &uStack_1a8;
  func_0x000107c2793c(&UNK_10f7cee7a);
  func_0x00010b95e768(&ppuStack_1c8);
  func_0x000107c31080(&uStack_1b0,pppuVar21,&ppuStack_1c8);
  FUN_10b99f560(&puStack_190,&uStack_1b0);
  FUN_10b99ff08(param_5,&puStack_190);
  func_0x000104bda960(puStack_190);
  func_0x000107c278f8(uStack_1b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_1c8);
  ppuVar15 = (undefined **)0x0;
  goto LAB_10b95d058;
  while( true ) {
    puVar13 = (undefined8 *)0x0;
    if (ppuStack_1c8 != (undefined **)0x0) {
      do {
        func_0x00010b95e6d8();
        puVar13 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    puVar22 = (undefined *)0x0;
    puStack_190 = puVar13;
    if (lStack_1c0 != 0) {
      do {
        func_0x00010b95e6d8();
        puVar22 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    puStack_188 = puVar22;
    func_0x00010b95e7a4(&plStack_1d8);
    pppuVar9 = pppuVar20;
    func_0x00010b95e77c(pppuVar20,ppuVar2,pppuVar21,&puStack_190,
                        *(undefined8 *)(*plStack_1d8 + lStack_1d0 * 8),pppuVar11);
    FUN_10b95ddcc(&plStack_1d8);
    FUN_10b960da4(&puStack_190);
    pppuVar11 = pppuVar11 + 2;
    if (((ulong)pppuVar9 & 1) == 0) break;
LAB_10b95cfcc:
    ppuVar15 = (undefined **)(ulong)(pppuVar11 == pppuVar10);
    if (pppuVar11 == pppuVar10) break;
  }
LAB_10b95d050:
  FUN_10b960da4(&ppuStack_1c8);
LAB_10b95d058:
  func_0x000107c278f8(uStack_1a8);
LAB_10b95d060:
  FUN_10b95ddcc(auStack_1a0);
  return ppuVar15;
}



/* Entry: 10b95ccbc; end: 10b95d07b;  */

ulong FUN_10b95ccbc(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *extraout_x8;
  undefined *extraout_x8_00;
  undefined *puVar13;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong auStack_130 [2];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long *plStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 *puStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 *puStack_70;
  undefined *puStack_68;
  
  puVar4 = auStack_80;
  FUN_10b95c9b4();
  func_0x00010b95e75c();
  func_0x00010b96171c();
  if ((int)puVar4 == 0) {
    uVar17 = 0;
    goto LAB_10b95d060;
  }
  func_0x000107c31084();
  puVar5 = puVar4;
  func_0x00010b95e75c();
  uVar9 = 1;
  func_0x00010b961524();
  func_0x000107c3107c(&uStack_88,puVar4,puVar5,uVar9);
  plVar16 = param_1 + 0xc;
  puVar10 = &uStack_88;
  func_0x000108931e7c();
  if ((long *)(param_1[0xc] + param_1[0xf]) == plVar16) {
    puVar18 = (undefined8 *)param_1[3];
    puVar2 = (undefined8 *)param_1[4];
    puVar14 = (undefined8 *)((long)puVar2 - (long)puVar18);
    lVar15 = (long)puVar14 / 0x18;
    if (puVar2 < (undefined8 *)param_1[5]) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar10 = puVar2 + 3;
      puVar2[2] = 0;
    }
    else {
      uVar17 = lVar15 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar17) {
        FUN_10bdb4034();
LAB_10b95d078:
        func_0x000104bfe188();
        pcStack_e8 = FUN_10b95d07c;
        uStack_120 = param_3;
        uStack_118 = param_4;
        lStack_110 = lVar15;
        plStack_108 = param_1;
        lStack_100 = param_2;
        plStack_f8 = param_5;
        puStack_f0 = &stack0xfffffffffffffff0;
        func_0x00010b95e7b8();
        plVar16 = plVar16 + 0x18;
        FUN_10b95d594();
        if ((long *)(*(long *)(param_2 + 0xc0) + *(long *)(param_2 + 0xd8)) == plVar16) {
          if ((*param_5 == 0) || (*(int *)(*param_5 + 0xc) == 0)) {
            lVar15 = 0;
          }
          else {
            FUN_10b960fec(auStack_130,param_5);
            lVar15 = param_2;
            FUN_10b95d07c(param_2,auStack_130);
            FUN_10b960da4(auStack_130);
          }
          plVar16 = (long *)(param_2 + 0x48);
          uVar17 = *(long *)(param_2 + 0x50) - *plVar16 >> 6;
          auStack_130[0] = uVar17;
          func_0x00010b95cb1c(plVar16);
          func_0x00010b95cb64();
          puVar8 = (ulong *)(param_2 + 0xc0);
          FUN_10b95d660(puVar8,param_5);
          *puVar8 = uVar17;
          func_0x000108ad54ec(*plVar16 + lVar15 * 0x40 + 0x28,auStack_130);
        }
        else {
          auStack_130[0] = puVar10[2];
        }
        return auStack_130[0];
      }
      uVar3 = (param_1[5] - (long)puVar18) / 0x18;
      uStack_c8 = uVar3 * 2;
      if (uStack_c8 < uVar17 || uStack_c8 - uVar17 == 0) {
        uStack_c8 = uVar17;
      }
      if (0x555555555555554 < uVar3) {
        uStack_c8 = 0xaaaaaaaaaaaaaaa;
      }
      puStack_c0 = puVar14;
      if (0xaaaaaaaaaaaaaaa < uStack_c8) goto LAB_10b95d078;
      lVar6 = uStack_c8 * 0x18;
      __Znwm();
      puVar1 = (undefined8 *)(lVar6 + (long)puStack_c0);
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      puStack_d8 = puVar1 + ((long)puStack_c0 / -0x18) * 3;
      puVar14 = puStack_d8;
      for (puVar10 = puVar18; lStack_d0 = lVar6, puStack_c0 = puVar1, puVar10 != puVar2;
          puVar10 = puVar10 + 3) {
        *puVar14 = *puVar10;
        *puVar10 = 0;
        uVar9 = puVar10[1];
        puVar14[2] = puVar10[2];
        puVar14[1] = uVar9;
        puVar14 = puVar14 + 3;
      }
      for (; puVar18 != puVar2; puVar18 = puVar18 + 3) {
        func_0x000107c278f4(puVar18);
      }
      lVar6 = param_1[3];
      puVar10 = puStack_c0 + 3;
      param_1[3] = (long)puStack_d8;
      param_1[4] = (long)puVar10;
      param_1[5] = lStack_d0 + uStack_c8 * 0x18;
      if (lVar6 != 0) {
        __ZdlPv();
      }
    }
    param_1[4] = (long)puVar10;
    func_0x000107c31068(puVar10 + -3,&uStack_88);
    puVar10[-2] = param_3;
    puVar10[-1] = param_4;
    plVar16 = param_1 + 0xc;
    FUN_10b8a3cf8(plVar16,&uStack_88);
    *plVar16 = lVar15;
    func_0x00010b95e75c();
    uVar9 = 2;
    func_0x00010b961524();
    plVar7 = &lStack_a8;
    FUN_10b960cfc(plVar7,plVar16,uVar9);
    if ((lStack_a0 == 0) || (*(int *)(lStack_a0 + 0xc) == 0)) {
      plVar16 = (long *)0x0;
    }
    else {
      plVar7 = param_1;
      FUN_10b95d07c(param_1,&lStack_a8);
      plVar16 = plVar7;
    }
    func_0x00010b95e75c();
    plVar11 = (long *)0x4;
    func_0x00010b961564();
    plVar12 = plVar7;
    do {
      if (plVar12 == plVar11) {
        func_0x00010b95e75c();
        plVar12 = (long *)0x5;
        func_0x00010b961564();
        goto LAB_10b95cfcc;
      }
      plVar7 = param_1;
      FUN_10b95d15c(param_1,lVar15,plVar16,&lStack_a8,param_2,plVar12,param_5);
      plVar12 = plVar12 + 2;
    } while (((ulong)plVar7 & 1) != 0);
    uVar17 = 0;
    goto LAB_10b95d050;
  }
  func_0x000107c31084();
  puStack_68 = &UNK_1003ab990;
  puStack_70 = &uStack_88;
  func_0x000107c2793c(&UNK_10f7cee7a);
  func_0x00010b95e768(&lStack_a8);
  func_0x000107c31080(&uStack_90,plVar16,&lStack_a8);
  FUN_10b99f560(&puStack_70,&uStack_90);
  FUN_10b99ff08(param_5,&puStack_70);
  func_0x000104bda960(puStack_70);
  func_0x000107c278f8(uStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_a8);
  uVar17 = 0;
  goto LAB_10b95d058;
  while( true ) {
    puVar10 = (undefined8 *)0x0;
    if (lStack_a8 != 0) {
      do {
        func_0x00010b95e6d8();
        puVar10 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puVar13 = (undefined *)0x0;
    puStack_70 = puVar10;
    if (lStack_a0 != 0) {
      do {
        func_0x00010b95e6d8();
        puVar13 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    puStack_68 = puVar13;
    func_0x00010b95e7a4(&plStack_b8);
    plVar11 = param_1;
    func_0x00010b95e77c(param_1,lVar15,plVar16,&puStack_70,
                        *(undefined8 *)(*plStack_b8 + lStack_b0 * 8),plVar7);
    FUN_10b95ddcc(&plStack_b8);
    FUN_10b960da4(&puStack_70);
    plVar7 = plVar7 + 2;
    if (((ulong)plVar11 & 1) == 0) break;
LAB_10b95cfcc:
    uVar17 = (ulong)(plVar7 == plVar12);
    if (plVar7 == plVar12) break;
  }
LAB_10b95d050:
  FUN_10b960da4(&lStack_a8);
LAB_10b95d058:
  func_0x000107c278f8(uStack_88);
LAB_10b95d060:
  FUN_10b95ddcc(auStack_80);
  return uVar17;
}



/* Entry: 10b95d07c; end: 10b95d15b;  */

long FUN_10b95d07c(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x19;
  long unaff_x20;
  long lVar2;
  long *plVar3;
  long lVar4;
  long alStack_50 [2];
  
  func_0x00010b95e7b8();
  param_1 = param_1 + 0xc0;
  FUN_10b95d594();
  if (*(long *)(unaff_x20 + 0xc0) + *(long *)(unaff_x20 + 0xd8) == param_1) {
    if ((*unaff_x19 == 0) || (*(int *)(*unaff_x19 + 0xc) == 0)) {
      lVar2 = 0;
    }
    else {
      FUN_10b960fec(alStack_50);
      lVar2 = unaff_x20;
      FUN_10b95d07c();
      FUN_10b960da4(alStack_50);
    }
    plVar3 = (long *)(unaff_x20 + 0x48);
    lVar4 = *(long *)(unaff_x20 + 0x50) - *plVar3 >> 6;
    alStack_50[0] = lVar4;
    func_0x00010b95cb1c(plVar3);
    func_0x00010b95cb64();
    plVar1 = (long *)(unaff_x20 + 0xc0);
    FUN_10b95d660();
    *plVar1 = lVar4;
    func_0x000108ad54ec(*plVar3 + lVar2 * 0x40 + 0x28,alStack_50);
  }
  else {
    alStack_50[0] = *(long *)(param_2 + 0x10);
  }
  return alStack_50[0];
}



/* Entry: 10b95d15c; end: 10b95d593;  */

bool FUN_10b95d15c(ulong param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar8;
  undefined8 extraout_x8_02;
  undefined8 uVar9;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_70 = 0;
  if (*param_4 != 0) {
    do {
      func_0x00010b95e6d8();
      lStack_70 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  lStack_68 = 0;
  if (param_4[1] != 0) {
    do {
      func_0x00010b95e6d8();
      lStack_68 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  iVar2 = (int)&plStack_80;
  func_0x00010b95e7a4();
  func_0x00010b95e750();
  func_0x00010b95e77c();
  if (iVar2 != 0) {
    lVar3 = *(long *)(*plStack_80 + lStack_78 * 8);
    lVar6 = 3;
    func_0x00010b961564();
    lVar4 = *(long *)(*plStack_80 + lStack_78 * 8);
    lVar7 = 4;
    func_0x00010b961564();
    if (lVar3 == lVar6 && lVar4 == lVar7) {
      bVar1 = true;
      goto LAB_10b95d2f8;
    }
    FUN_10b95d07c(param_1,&lStack_70);
    do {
      if (lVar3 == lVar6) goto LAB_10b95d2e4;
      func_0x00010b95e750();
      FUN_10b95d15c();
      lVar3 = lVar3 + 0x10;
    } while ((param_1 & 1) != 0);
  }
  bVar1 = false;
  goto LAB_10b95d2f8;
  while( true ) {
    uVar8 = 0;
    if (lStack_70 != 0) {
      do {
        func_0x00010b95e6d8();
        uVar8 = extraout_x8_01;
      } while (extraout_w11_01 != 0);
    }
    uVar9 = 0;
    uStack_90 = uVar8;
    if (lStack_68 != 0) {
      do {
        func_0x00010b95e6d8();
        uVar9 = extraout_x8_02;
      } while (extraout_w11_02 != 0);
    }
    uVar5 = 0;
    uStack_88 = uVar9;
    func_0x00010b95e7a4();
    func_0x00010b95e750();
    func_0x00010b95e77c();
    FUN_10b95ddcc(auStack_a0);
    FUN_10b960da4(&uStack_90);
    lVar4 = lVar4 + 0x10;
    if ((uVar5 & 1) == 0) break;
LAB_10b95d2e4:
    bVar1 = lVar4 == lVar7;
    if (bVar1) break;
  }
LAB_10b95d2f8:
  FUN_10b95ddcc(&plStack_80);
  FUN_10b960da4(&lStack_70);
  return bVar1;
}



/* Entry: 10b95d594; end: 10b95d65f;  */

long FUN_10b95d594(ulong param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x19;
  
  func_0x00010b95e7ac();
  lVar5 = 0;
  uVar6 = param_1 >> 7;
  uVar4 = unaff_x19[3];
  while( true ) {
    uVar6 = uVar6 & uVar4;
    uVar7 = *(ulong *)(*unaff_x19 + uVar6);
    uVar1 = uVar7 ^ (param_1 & 0x7f) * 0x101010101010101;
    for (uVar1 = uVar1 + 0xfefefefefefefeff & (uVar1 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar1 != 0; uVar1 = uVar1 - 1 & uVar1) {
      uVar3 = (uVar1 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar1 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar6 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar4;
      plVar2 = (long *)(unaff_x19[1] + uVar3 * 0x18);
      if ((*plVar2 == *param_2) && (plVar2[1] == param_2[1])) goto LAB_10b95d650;
    }
    uVar3 = uVar4;
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar5 = lVar5 + 8;
    uVar6 = lVar5 + uVar6;
  }
LAB_10b95d650:
  return *unaff_x19 + uVar3;
}



/* Entry: 10b95d660; end: 10b95d773;  */

long FUN_10b95d660(ulong param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x19;
  long *plVar8;
  
  func_0x00010b95e7ac();
  lVar5 = 0;
  uVar6 = param_1 >> 7;
  while( true ) {
    uVar6 = uVar6 & unaff_x19[3];
    uVar7 = *(ulong *)(*unaff_x19 + uVar6);
    uVar2 = uVar7 ^ (param_1 & 0x7f) * 0x101010101010101;
    for (uVar2 = uVar2 + 0xfefefefefefefeff & (uVar2 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
      uVar1 = (uVar2 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar2 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      lVar3 = unaff_x19[1];
      plVar8 = (long *)(uVar6 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & unaff_x19[3])
      ;
      plVar4 = (long *)(lVar3 + (long)plVar8 * 0x18);
      if ((*plVar4 == *param_2) && (plVar4[1] == param_2[1])) goto LAB_10b95d760;
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar5 = lVar5 + 8;
    uVar6 = lVar5 + uVar6;
  }
  plVar8 = unaff_x19;
  FUN_10b95e274();
  lVar5 = unaff_x19[1] + (long)plVar8 * 0x18;
  func_0x00010b95dd88(lVar5,param_2);
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(byte *)(*unaff_x19 + (long)plVar8) = (byte)param_1 & 0x7f;
  func_0x00010b95e734();
  lVar3 = unaff_x19[1];
LAB_10b95d760:
  return lVar3 + (long)plVar8 * 0x18 + 0x10;
}



/* Entry: 10b95d774; end: 10b95da03;  */

long FUN_10b95d774(long *param_1,long *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *unaff_x24;
  undefined4 *puVar12;
  undefined1 auStack_128 [16];
  undefined8 *puStack_118;
  long *plStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [8];
  ulong uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar4 = auStack_c0;
  func_0x00010b95b208(puVar4);
  puVar1 = (undefined1 *)param_1[4];
  for (puVar10 = (undefined1 *)param_1[3]; puVar10 != puVar1; puVar10 = puVar10 + 0x18) {
    unaff_x24 = auStack_b0;
    func_0x00010b95e784();
    puVar4 = puVar10;
    FUN_10b9a5e5c(auStack_d8);
    if ((*(ulong *)(unaff_x24 + 8) & 1) != 0) {
      func_0x00010b95e7c4();
    }
    func_0x00010b95e770();
    func_0x00010b95e708();
    *(undefined8 *)(unaff_x24 + 0x18) = *(undefined8 *)(puVar10 + 8);
    *(int *)(unaff_x24 + 0x20) = (int)*(undefined8 *)(puVar10 + 0x10);
  }
  lVar2 = param_1[7];
  for (lVar9 = param_1[6]; lVar9 != lVar2; lVar9 = lVar9 + 0x20) {
    puVar4 = auStack_98;
    func_0x00010b95e784();
    func_0x00010b95e724();
    if ((*(ulong *)(unaff_x24 + 8) & 1) != 0) {
      func_0x00010b95e7c4();
    }
    func_0x00010b95e770();
    func_0x00010b95e708();
    *(int *)(unaff_x24 + 0x18) = (int)*(undefined8 *)(lVar9 + 0x10);
  }
  lVar2 = param_1[10];
  for (lVar9 = param_1[9]; lVar9 != lVar2; lVar9 = lVar9 + 0x40) {
    func_0x00010b95e784(auStack_80);
    func_0x00010b95e724();
    if ((*(ulong *)(unaff_x24 + 8) & 1) != 0) {
      func_0x00010b95e7c4();
    }
    puVar4 = unaff_x24 + 0x40;
    func_0x000107c3024c(puVar4,auStack_d8);
    func_0x00010b95e708();
    puVar3 = *(undefined4 **)(lVar9 + 0x18);
    for (puVar12 = *(undefined4 **)(lVar9 + 0x10); puVar12 != puVar3; puVar12 = puVar12 + 2) {
      puVar4 = unaff_x24 + 0x10;
      func_0x000107c29100(puVar4,*puVar12);
    }
    puVar3 = *(undefined4 **)(lVar9 + 0x30);
    for (puVar12 = *(undefined4 **)(lVar9 + 0x28); puVar12 != puVar3; puVar12 = puVar12 + 2) {
      puVar4 = unaff_x24 + 0x28;
      func_0x000107c29100(puVar4,*puVar12);
    }
  }
  if (param_2 != param_1) {
    lVar9 = *param_1;
    lVar2 = param_1[1];
    uVar8 = lVar2 - lVar9;
    plVar6 = param_2 + 2;
    lVar7 = *param_2;
    if ((ulong)(*plVar6 - lVar7) < uVar8) {
      if (lVar7 != 0) {
        func_0x00010b95bf84(param_2);
        __ZdlPv(*param_2);
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
      }
      plVar5 = param_2;
      func_0x00010b95bc08(param_2,(long)uVar8 / 0x18);
      if ((long *)0xaaaaaaaaaaaaaaa < plVar5) {
        func_0x00010b95bcd8();
        pcStack_e8 = FUN_10b95da04;
        plVar6 = plVar5;
        plStack_100 = param_2;
        puStack_f8 = param_3;
        puStack_f0 = &stack0xfffffffffffffff0;
        FUN_10b95da8c();
        FUN_10b95dbc4(auStack_128,plVar6,plVar5[1] - *plVar5 >> 6,plVar5 + 2);
        puStack_118[1] = 0;
        *puStack_118 = 0;
        puStack_118[3] = 0;
        puStack_118[2] = 0;
        puStack_118[5] = 0;
        puStack_118[4] = 0;
        puStack_118[7] = 0;
        puStack_118[6] = 0;
        puStack_118 = puStack_118 + 8;
        FUN_10b95dacc(plVar5,auStack_128);
        lVar9 = plVar5[1];
        FUN_10b95dc4c(auStack_128);
        return lVar9;
      }
      func_0x00010b95bd30();
      *param_2 = (long)plVar6;
      param_2[1] = (long)plVar6;
      param_2[2] = (long)(plVar6 + (long)plVar5 * 3);
    }
    else {
      uVar11 = param_2[1] - lVar7;
      if (uVar8 <= uVar11) {
        func_0x00010b95e750();
        func_0x00010b95df2c();
        func_0x00010b95bf8c(param_2,puVar4);
        goto LAB_10b95d9a4;
      }
      func_0x00010b95df2c(lVar9,lVar9 + uVar11);
      lVar9 = lVar9 + uVar11;
    }
    FUN_10b95dedc(param_2,lVar9,lVar2);
  }
LAB_10b95d9a4:
  if (param_3 != auStack_c0) {
    uVar8 = *(ulong *)(param_3 + 8);
    if ((uVar8 & 1) != 0) {
      uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
    }
    if ((uStack_b8 & 1) != 0) {
      uStack_b8 = *(ulong *)(uStack_b8 & 0xfffffffffffffffe);
    }
    if (uVar8 == uStack_b8) {
      func_0x00010b962e68(param_3,auStack_c0);
    }
    else {
      FUN_10b962e30();
    }
  }
  FUN_10b962b60(auStack_c0);
  return 1;
}



/* Entry: 10b95da04; end: 10b95da8b;  */

long FUN_10b95da04(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_10b95da8c(param_1,(param_1[1] - *param_1 >> 6) + 1);
  FUN_10b95dbc4(auStack_48,plVar1,param_1[1] - *param_1 >> 6,param_1 + 2);
  puStack_38[1] = 0;
  *puStack_38 = 0;
  puStack_38[3] = 0;
  puStack_38[2] = 0;
  puStack_38[5] = 0;
  puStack_38[4] = 0;
  puStack_38[7] = 0;
  puStack_38[6] = 0;
  puStack_38 = puStack_38 + 8;
  FUN_10b95dacc(param_1,auStack_48);
  lVar2 = param_1[1];
  FUN_10b95dc4c(auStack_48);
  return lVar2;
}



/* Entry: 10b95da8c; end: 10b95dacb;  */

ulong FUN_10b95da8c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  ulong *unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  
  if (param_2 >> 0x3a == 0) {
    uVar4 = (long)(param_1[2] - *param_1) >> 5;
    if (uVar4 <= param_2) {
      uVar4 = param_2;
    }
    if (0x7fffffffffffffbf < param_1[2] - *param_1) {
      uVar4 = 0x3ffffffffffffff;
    }
    return uVar4;
  }
  FUN_10b95dbb8();
  func_0x00010b95e7b8();
  uVar5 = *param_1;
  uVar2 = param_1[1];
  uVar1 = *(long *)(param_2 + 8) + (uVar5 - uVar2);
  uVar3 = uVar1;
  for (uVar4 = uVar5; uVar4 != uVar2; uVar4 = uVar4 + 0x40) {
    func_0x00010b95dd88(uVar3,uVar4);
    *(undefined8 *)(uVar3 + 0x10) = 0;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    *(undefined8 *)(uVar3 + 0x20) = 0;
    uVar6 = *(undefined8 *)(uVar4 + 0x10);
    *(undefined8 *)(uVar3 + 0x18) = *(undefined8 *)(uVar4 + 0x18);
    *(undefined8 *)(uVar3 + 0x10) = uVar6;
    *(undefined8 *)(uVar3 + 0x20) = *(undefined8 *)(uVar4 + 0x20);
    *(undefined8 *)(uVar4 + 0x10) = 0;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    *(undefined8 *)(uVar4 + 0x20) = 0;
    *(undefined8 *)(uVar3 + 0x28) = 0;
    *(undefined8 *)(uVar3 + 0x30) = 0;
    *(undefined8 *)(uVar3 + 0x38) = 0;
    uVar6 = *(undefined8 *)(uVar4 + 0x28);
    *(undefined8 *)(uVar3 + 0x30) = *(undefined8 *)(uVar4 + 0x30);
    *(undefined8 *)(uVar3 + 0x28) = uVar6;
    *(undefined8 *)(uVar3 + 0x38) = *(undefined8 *)(uVar4 + 0x38);
    *(undefined8 *)(uVar4 + 0x28) = 0;
    *(undefined8 *)(uVar4 + 0x30) = 0;
    *(undefined8 *)(uVar4 + 0x38) = 0;
    uVar3 = uVar3 + 0x40;
  }
  for (; uVar5 != uVar2; uVar5 = uVar5 + 0x40) {
    uVar3 = uVar5;
    func_0x00010b95c23c(uVar5);
  }
  unaff_x19[1] = uVar1;
  uVar4 = *unaff_x20;
  *unaff_x20 = uVar1;
  unaff_x20[1] = uVar4;
  unaff_x19[1] = uVar4;
  uVar4 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar4;
  uVar4 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar4;
  *unaff_x19 = unaff_x19[1];
  return uVar3;
}



/* Entry: 10b95dacc; end: 10b95dbb7;  */

void FUN_10b95dacc(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  func_0x00010b95e7b8();
  lVar5 = *param_1;
  lVar2 = param_1[1];
  lVar1 = *(long *)(param_2 + 8) + (lVar5 - lVar2);
  lVar3 = lVar1;
  for (lVar4 = lVar5; lVar4 != lVar2; lVar4 = lVar4 + 0x40) {
    func_0x00010b95dd88(lVar3,lVar4);
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    uVar6 = *(undefined8 *)(lVar4 + 0x10);
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar3 + 0x10) = uVar6;
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar4 + 0x20);
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
    *(undefined8 *)(lVar3 + 0x28) = uVar6;
    *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar4 + 0x38);
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    lVar3 = lVar3 + 0x40;
  }
  for (; lVar5 != lVar2; lVar5 = lVar5 + 0x40) {
    func_0x00010b95c23c(lVar5);
  }
  unaff_x19[1] = lVar1;
  lVar4 = *unaff_x20;
  *unaff_x20 = lVar1;
  unaff_x20[1] = lVar4;
  unaff_x19[1] = lVar4;
  lVar4 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar4;
  lVar4 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar4;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b95dbb8; end: 10b95dbc3;  */

long * FUN_10b95dbb8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b95dc0c();
  }
  lVar1 = param_4 + param_3 * 0x40;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x40;
  return param_1;
}



/* Entry: 10b95dbc4; end: 10b95dc2f;  */

long * FUN_10b95dbc4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b95dc0c();
  }
  lVar1 = param_4 + param_3 * 0x40;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x40;
  return param_1;
}



/* Entry: 10b95dc30; end: 10b95dc4b;  */

long * FUN_10b95dc30(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3a == 0) {
    plVar1 = (long *)(param_2 << 6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bfe188();
  FUN_10b95dc78();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b95dc4c; end: 10b95dc77;  */

long * FUN_10b95dc4c(long *param_1)

{
  FUN_10b95dc78();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b95dc78; end: 10b95dc7f;  */

void FUN_10b95dc78(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b95e7b8(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x40;
    func_0x00010b95c23c();
  }
  return;
}



/* Entry: 10b95dc80; end: 10b95dd6b;  */

void FUN_10b95dc80(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b95e7b8();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x40;
    func_0x00010b95c23c();
  }
  return;
}



/* Entry: 10b95dd6c; end: 10b95ddcb;  */

void FUN_10b95dd6c(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b95ddcc; end: 10b95dedb;  */

long * FUN_10b95ddcc(long *param_1)

{
  func_0x00010b95fb00(*(long *)(*(long *)*param_1 + param_1[1] * 8) + 0x20);
  func_0x000108134484(*param_1 + 0x38,param_1 + 1);
  return param_1;
}



/* Entry: 10b95dedc; end: 10b95df77;  */

void FUN_10b95dedc(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000104c6257c(lVar1,param_2);
    lVar1 = lVar1 + 0x18;
  }
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10b95df78; end: 10b95df9b;  */

undefined8 * FUN_10b95df78(undefined8 *param_1)

{
  FUN_10b95df9c(*param_1);
  return param_1;
}



/* Entry: 10b95df9c; end: 10b95dfc7;  */

void FUN_10b95df9c(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010b95dfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b95dfc8; end: 10b95e0fb;  */

void FUN_10b95dfc8(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  uVar3 = param_2[2];
  uVar1 = param_2[1] + 1;
  if (uVar1 - uVar3 <= 0xfffffffffffffff - uVar3) {
    if (uVar3 >> 0x3d == 0) {
      uVar7 = (uVar3 << 3) / 5;
    }
    else {
      uVar7 = uVar3 << 3;
      if (4 < uVar3 >> 0x3d) {
        uVar7 = 0xffffffffffffffff;
      }
    }
    if (0xffffffffffffffe < uVar7) {
      uVar7 = 0xfffffffffffffff;
    }
    uVar3 = uVar1;
    if (uVar1 <= uVar7) {
      uVar3 = uVar7;
    }
    if (uVar1 >> 0x3c == 0) {
      lVar9 = *param_2;
      lVar4 = uVar3 << 3;
      __Znwm();
      lVar2 = *param_2;
      lVar5 = param_2[1];
      for (lVar6 = 0; puVar8 = (undefined8 *)(lVar2 + lVar6), puVar8 != param_3; lVar6 = lVar6 + 8)
      {
        *(undefined8 *)(lVar4 + lVar6) = *puVar8;
        *puVar8 = 0;
      }
      *(undefined8 *)(lVar4 + lVar6) = *param_4;
      *param_4 = 0;
      for (puVar8 = param_3; lVar6 = lVar6 + 8, puVar8 != (undefined8 *)(lVar2 + lVar5 * 8);
          puVar8 = puVar8 + 1) {
        *(undefined8 *)(lVar4 + lVar6) = *puVar8;
        *puVar8 = 0;
      }
      if (lVar2 != 0) {
        func_0x00010b95dd08(param_2);
        FUN_10b95dd6c(param_2,param_2,param_2[2]);
        lVar5 = param_2[1];
      }
      *param_2 = lVar4;
      param_2[1] = lVar5 + 1;
      param_2[2] = uVar3;
      *param_1 = (long)param_3 + (lVar4 - lVar9);
      return;
    }
  }
  _abort();
  FUN_10b9610c0();
  func_0x00010b95e798();
  return;
}



/* Entry: 10b95e0fc; end: 10b95e11b;  */

void FUN_10b95e0fc(void)

{
  FUN_10b9610c0();
  func_0x00010b95e798();
  return;
}



/* Entry: 10b95e11c; end: 10b95e273;  */

void FUN_10b95e11c(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined1 **ppuVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined1 auStack_3a0 [64];
  undefined1 auStack_360 [8];
  undefined1 auStack_358 [8];
  undefined1 *puStack_350;
  undefined8 uStack_348;
  undefined1 auStack_2b0 [72];
  long lStack_268;
  undefined **ppuStack_260;
  undefined1 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [504];
  undefined8 uStack_48;
  
  puVar1 = auStack_3a0;
  puVar2 = auStack_3a0;
  func_0x00010b95e6f4();
  uStack_48 = extraout_x8;
  func_0x000107c2837c(auStack_3a0);
  func_0x000107c28378(auStack_3a0,param_2);
  lVar9 = *param_2;
  *param_2 = (long)puVar1;
  param_2[1] = param_2[1] + (lVar9 - (long)puVar1);
  puStack_258 = auStack_240;
  ppuStack_260 = &PTR_DAT_11099bc38;
  uStack_248 = 500;
  uStack_250 = 0;
  lVar9 = param_3[3];
  lStack_268 = lVar9;
  func_0x000107c284f4(auStack_2b0,&ppuStack_260);
  func_0x000107c284ec(&puStack_350,auStack_2b0);
  if (lVar9 != 0) {
    lVar9 = *(long *)(puStack_350 + -0x18);
    func_0x00010bd490d0(auStack_360,&lStack_268);
    func_0x0001080c9df4(auStack_358,(long)&puStack_350 + lVar9,auStack_360);
    __ZNSt3__16localeD1Ev(auStack_358);
    __ZNSt3__16localeD1Ev(auStack_360);
  }
  FUN_10b961110(&puStack_350);
  func_0x000107c284fc((long)&puStack_350 + *(long *)(puStack_350 + -0x18),5);
  func_0x000107c283e0(&ppuStack_260,uStack_250);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(&puStack_350);
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(auStack_2b0);
  puStack_350 = puStack_258;
  uStack_348 = uStack_250;
  ppuVar5 = &puStack_350;
  func_0x000107c28388(auStack_3a0,ppuVar5,param_3);
  pppuVar3 = &ppuStack_260;
  func_0x000107c283e8();
  *param_3 = puVar2;
  func_0x00010b95e6a0(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppuVar8 = *pppuVar3;
  ppuVar10 = pppuVar3[3];
  ppuVar4 = ppuVar8;
  FUN_10b95e33c(ppuVar8,ppuVar10,ppuVar5);
  ppuVar7 = pppuVar3[5];
  if (ppuVar7 != (undefined **)0x0) goto LAB_10b95e2bc;
  if (*(char *)((long)ppuVar8 + (long)ppuVar4) == -2) {
    ppuVar7 = (undefined **)0x0;
    goto LAB_10b95e2bc;
  }
  if (ppuVar10 == (undefined **)0x0) {
    uVar6 = 1;
LAB_10b95e310:
    FUN_10b95e37c(pppuVar3,uVar6);
  }
  else {
    if ((undefined **)((long)ppuVar10 - ((ulong)ppuVar10 >> 3) >> 1) < pppuVar3[2]) {
      uVar6 = (long)ppuVar10 << 1 | 1;
      goto LAB_10b95e310;
    }
    func_0x00010b95e498(pppuVar3);
  }
  ppuVar8 = *pppuVar3;
  ppuVar4 = ppuVar8;
  FUN_10b95e33c(ppuVar8,pppuVar3[3],ppuVar5);
  ppuVar7 = pppuVar3[5];
LAB_10b95e2bc:
  pppuVar3[2] = (undefined **)((long)pppuVar3[2] + 1);
  pppuVar3[5] = (undefined **)
                ((long)ppuVar7 - (ulong)(*(char *)((long)ppuVar8 + (long)ppuVar4) == -0x80));
  return;
}



/* Entry: 10b95e274; end: 10b95e33b;  */

void FUN_10b95e274(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_10b95e33c(lVar3,uVar4,param_2);
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_10b95e2bc;
  if (*(char *)(lVar3 + lVar1) == -2) {
    lVar2 = 0;
    goto LAB_10b95e2bc;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_10b95e310:
    FUN_10b95e37c(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_10b95e310;
    }
    func_0x00010b95e498(param_1);
  }
  lVar3 = *param_1;
  lVar1 = lVar3;
  FUN_10b95e33c(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_10b95e2bc:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 10b95e33c; end: 10b95e37b;  */

ulong FUN_10b95e33c(long param_1,ulong param_2,ulong param_3)

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



/* Entry: 10b95e37c; end: 10b95e653;  */

void FUN_10b95e37c(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x18;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_10b95e654();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_10b95e33c(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_10b95e674(param_1[1] + lVar4 * 0x18,lVar5);
    }
    lVar5 = lVar5 + 0x18;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b95e654; end: 10b95e673;  */

void FUN_10b95e654(void)

{
  FUN_10b9610c0();
  func_0x00010b95e798();
  return;
}



/* Entry: 10b95e674; end: 10b95e69f;  */

/* WARNING: Possible PIC construction at 0x00010b960db8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b960dbc) */

long FUN_10b95e674(long param_1,long param_2)

{
  func_0x00010b95dd88();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x00010007e5d0(param_2 + 8);
  func_0x0001003a8cb8();
  return param_2;
}



/* Entry: 10b95e6a0; end: 10b95e7e3;  */

void FUN_10b95e6a0(void)

{
  return;
}



/* Entry: 10b95e7e4; end: 10b960cfb;  */

undefined8 FUN_10b95e7e4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x00010b95f6b8(param_1,&uStack_28,0);
  return param_1;
}



/* Entry: 10b960cfc; end: 10b960da3;  */

undefined8 * FUN_10b960cfc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  param_1[1] = 0;
  *param_1 = 0;
  puVar1 = &uStack_40;
  uStack_40 = param_2;
  uStack_38 = param_3;
  func_0x00010b96119c();
  if (puVar1 == (undefined8 *)0xffffffffffffffff) {
    func_0x000107c31084();
    func_0x000107c3107c(auStack_48);
  }
  else {
    func_0x00010b96117c();
    func_0x00010b9a6bac(auStack_48);
    func_0x00010b9611b4();
    func_0x00010b961194();
    func_0x000107c31084();
    func_0x00010b9a6bac(auStack_48);
  }
  func_0x000107c31060(param_1 + 1,auStack_48);
  func_0x00010b961194();
  return param_1;
}



/* Entry: 10b960da4; end: 10b960e67;  */

/* WARNING: Possible PIC construction at 0x00010b960db8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b960dbc) */

long FUN_10b960da4(long param_1)

{
  func_0x00010007e5d0(param_1 + 8);
  func_0x0001003a8cb8();
  return param_1;
}



/* Entry: 10b960e68; end: 10b960f6b;  */

void FUN_10b960e68(long *param_1)

{
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  long lVar1;
  undefined1 auStack_58 [8];
  long *plStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c31084();
  func_0x000107c3107c(&plStack_50);
  if ((*param_1 == 0) || (*(int *)(*param_1 + 0xc) == 0)) {
    func_0x000107c31064(param_1,param_1 + 1);
  }
  else {
    do {
      func_0x00010b96116c();
    } while (extraout_w11 != 0);
    uStack_40 = 0;
    if (param_1[1] != 0) {
      do {
        func_0x00010b96116c();
        uStack_40 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    func_0x0001077fb660(auStack_58,auStack_48,2,&UNK_10f7ceece,1);
    func_0x00010b9611b4();
    func_0x00010b961194();
    lVar1 = 8;
    do {
      func_0x000107c278f4(auStack_48 + lVar1);
      lVar1 = lVar1 + -8;
    } while (lVar1 != -8);
  }
  func_0x000107c31060(param_1 + 1,&plStack_50);
  func_0x000107c278f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
  extraout_x8_00[2] = 0;
  if ((*plStack_50 != 0) && (*(int *)(*plStack_50 + 0xc) != 0)) {
    func_0x00010b9611a8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc
              (extraout_x8_00,1,0x2e);
  }
  func_0x00010b9611a8();
  return;
}



/* Entry: 10b960f6c; end: 10b960f7b;  */

void FUN_10b960f6c(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*param_2 != 0) && (*(int *)(*param_2 + 0xc) != 0)) {
    func_0x00010b9611a8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc(param_1,1,0x2e);
  }
  func_0x00010b9611a8();
  return;
}



/* Entry: 10b960f7c; end: 10b960feb;  */

void FUN_10b960f7c(long *param_1,undefined8 param_2)

{
  if ((*param_1 != 0) && (*(int *)(*param_1 + 0xc) != 0)) {
    func_0x00010b9611a8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc(param_2,1,0x2e);
  }
  func_0x00010b9611a8();
  return;
}



/* Entry: 10b960fec; end: 10b9610bf;  */

void FUN_10b960fec(undefined8 *param_1,long *param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  int extraout_w11;
  undefined8 *puVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    puStack_40 = &UNK_10f7d0ef0;
    uStack_38 = 0;
  }
  else {
    puStack_40 = (undefined *)(lVar2 + 0x18);
    uStack_38 = (ulong)*(uint *)(lVar2 + 0xc);
  }
  ppuVar1 = &puStack_40;
  func_0x00010b96119c();
  if (ppuVar1 == (undefined **)0xffffffffffffffff) {
    uStack_58 = 0;
    if (*param_2 == 0) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      do {
        func_0x00010b96116c();
        uVar3 = extraout_x8;
        uVar4 = uStack_58;
      } while (extraout_w11 != 0);
    }
    uStack_58 = 0;
    puVar5 = &uStack_58;
    *param_1 = uVar4;
    param_1[1] = uVar3;
  }
  else {
    func_0x00010b96117c();
    puVar5 = &uStack_48;
    func_0x00010b9a6bac(&uStack_48);
    func_0x000107c31084();
    func_0x00010b9a6bac(&uStack_50);
    uVar4 = uStack_48;
    uVar3 = uStack_50;
    uStack_50 = 0;
    uStack_48 = 0;
    *param_1 = uVar4;
    param_1[1] = uVar3;
  }
  func_0x000107c278f8(0);
  func_0x000107c278f8(*puVar5);
  return;
}



/* Entry: 10b9610c0; end: 10b96110f;  */

long FUN_10b9610c0(long *param_1)

{
  return ((param_1[1] * -0x395b586ca42e166b ^ (ulong)(param_1[1] * -0x395b586ca42e166b) >> 0x2f) *
          -0x395b586ca42e166b ^
         (*param_1 * -0x395b586ca42e166b ^ (ulong)(*param_1 * -0x395b586ca42e166b) >> 0x2f) *
         0x35a98f4d286a90b9 + 0xe6546b64) * -0x395b586ca42e166b + 0xe6546b64;
}



/* Entry: 10b961110; end: 10b96115b;  */

undefined8 FUN_10b961110(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  FUN_10b960f6c(auStack_38,param_2);
  func_0x00010813de5c(param_1,auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return param_1;
}



/* Entry: 10b96115c; end: 10b9611bf;  */

void FUN_10b96115c(void)

{
  return;
}



/* Entry: 10b9611c0; end: 10b962343;  */

undefined8 * FUN_10b9611c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_110d79838;
  param_1[1] = 1;
  param_1[2] = param_2;
  plVar1 = (long *)*param_3;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[3] = plVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  return param_1;
}



/* Entry: 10b962344; end: 10b96236f;  */

long FUN_10b962344(long param_1)

{
  func_0x00010b963084();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}


