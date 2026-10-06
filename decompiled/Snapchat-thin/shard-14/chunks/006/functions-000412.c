/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b53154c; end: 10b53159f;  */

void FUN_10b53154c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5344bc();
  func_0x0001098cc038();
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



/* Entry: 10b5315a0; end: 10b5315cb;  */

long FUN_10b5315a0(long param_1)

{
  func_0x00010b534518();
  FUN_10b531b98(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5315cc; end: 10b5315cf;  */

long FUN_10b5315cc(long param_1)

{
  func_0x00010b534518();
  FUN_10b531b98(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5315d0; end: 10b5315e3;  */

void FUN_10b5315d0(void)

{
  FUN_10b5315a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5315e4; end: 10b5315ef;  */

undefined ** FUN_10b5315e4(void)

{
  return &PTR_DAT_110d00688;
}



/* Entry: 10b5315f0; end: 10b531683;  */

long * FUN_10b5315f0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5342b4();
  lVar2 = param_1[3];
  while ((int)lVar2 != 0) {
    func_0x00010b5343e4();
    param_3 = (ulong)*(uint *)(param_2 + 0x30);
    func_0x00010b5343c0();
    func_0x00010b534bdc();
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b53425c();
    func_0x00010b5346f8();
    func_0x00010b5343b4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b534550();
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



/* Entry: 10b531684; end: 10b5316ef;  */

long FUN_10b531684(void)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b5349e0();
  func_0x00010b5342d0();
  while (unaff_x22 != 0) {
    FUN_10b5316f0(*unaff_x21);
    func_0x00010b5348a0();
    unaff_x21 = unaff_x21 + 1;
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x00010b53414c();
    func_0x00010b534a28();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x2c) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b5316f0; end: 10b53170b;  */

long FUN_10b5316f0(long param_1)

{
  long extraout_x8;
  
  FUN_10b5314d4();
  func_0x00010b534014();
  return param_1 + extraout_x8;
}



/* Entry: 10b53170c; end: 10b531907;  */

void FUN_10b53170c(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5344bc();
  FUN_10b53170c();
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
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



/* Entry: 10b531908; end: 10b531927;  */

void FUN_10b531908(void)

{
  func_0x00010b53487c();
  FUN_10b5289dc();
  return;
}



/* Entry: 10b531928; end: 10b53194f;  */

void FUN_10b531928(void)

{
  long extraout_x8;
  
  func_0x00010b534758();
  if (extraout_x8 != 0) {
    func_0x00010b534654();
  }
  return;
}



/* Entry: 10b531950; end: 10b531977;  */

void FUN_10b531950(void)

{
  long extraout_x8;
  
  func_0x00010b534758();
  if (extraout_x8 != 0) {
    func_0x00010b534654();
  }
  return;
}



/* Entry: 10b531978; end: 10b53199f;  */

void FUN_10b531978(void)

{
  long extraout_x8;
  
  func_0x00010b534758();
  if (extraout_x8 != 0) {
    func_0x00010b534654();
  }
  return;
}



/* Entry: 10b5319a0; end: 10b5319bf;  */

void FUN_10b5319a0(void)

{
  func_0x00010b53487c();
  func_0x00010b531090();
  return;
}



/* Entry: 10b5319c0; end: 10b5319e7;  */

void FUN_10b5319c0(void)

{
  long extraout_x8;
  
  func_0x00010b534758();
  if (extraout_x8 != 0) {
    func_0x00010b534654();
  }
  return;
}



/* Entry: 10b5319e8; end: 10b531a0f;  */

void FUN_10b5319e8(void)

{
  long extraout_x8;
  
  func_0x00010b534758();
  if (extraout_x8 != 0) {
    func_0x00010b534654();
  }
  return;
}



/* Entry: 10b531a10; end: 10b531a37;  */

void FUN_10b531a10(void)

{
  long extraout_x8;
  
  func_0x00010b534758();
  if (extraout_x8 != 0) {
    func_0x00010b534654();
  }
  return;
}



/* Entry: 10b531a38; end: 10b531a5f;  */

void FUN_10b531a38(void)

{
  long extraout_x8;
  
  func_0x00010b534758();
  if (extraout_x8 != 0) {
    func_0x00010b534654();
  }
  return;
}



/* Entry: 10b531a60; end: 10b531a87;  */

void FUN_10b531a60(void)

{
  long extraout_x8;
  
  func_0x00010b534758();
  if (extraout_x8 != 0) {
    func_0x00010b534654();
  }
  return;
}



/* Entry: 10b531a88; end: 10b531aaf;  */

void FUN_10b531a88(void)

{
  long extraout_x8;
  
  func_0x00010b534758();
  if (extraout_x8 != 0) {
    func_0x00010b534654();
  }
  return;
}



/* Entry: 10b531ab0; end: 10b531ad7;  */

void FUN_10b531ab0(void)

{
  long extraout_x8;
  
  func_0x00010b534758();
  if (extraout_x8 != 0) {
    func_0x00010b534654();
  }
  return;
}



/* Entry: 10b531ad8; end: 10b531aff;  */

void FUN_10b531ad8(void)

{
  long extraout_x8;
  
  func_0x00010b534758();
  if (extraout_x8 != 0) {
    func_0x00010b534654();
  }
  return;
}



/* Entry: 10b531b00; end: 10b531b27;  */

void FUN_10b531b00(void)

{
  long extraout_x8;
  
  func_0x00010b534758();
  if (extraout_x8 != 0) {
    func_0x00010b534654();
  }
  return;
}



/* Entry: 10b531b28; end: 10b531b4f;  */

void FUN_10b531b28(void)

{
  long extraout_x8;
  
  func_0x00010b534758();
  if (extraout_x8 != 0) {
    func_0x00010b534654();
  }
  return;
}



/* Entry: 10b531b50; end: 10b531b77;  */

void FUN_10b531b50(void)

{
  long extraout_x8;
  
  func_0x00010b534758();
  if (extraout_x8 != 0) {
    func_0x00010b534654();
  }
  return;
}



/* Entry: 10b531b78; end: 10b531b97;  */

void FUN_10b531b78(void)

{
  func_0x00010b53487c();
  FUN_10b53170c();
  return;
}



/* Entry: 10b531b98; end: 10b531bbf;  */

void FUN_10b531b98(void)

{
  long extraout_x8;
  
  func_0x00010b534758();
  if (extraout_x8 != 0) {
    func_0x00010b534654();
  }
  return;
}



/* Entry: 10b531bc0; end: 10b532a4f;  */

void FUN_10b531bc0(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  
  lVar1 = param_1;
  if (param_1 == 0) {
    func_0x00010b53480c();
  }
  else {
    func_0x00010b5346cc();
  }
  func_0x00010b534300(&PTR_FUN_110cfdd28);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(long *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = extraout_x8;
  *(undefined4 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  return;
}



/* Entry: 10b532a50; end: 10b532a77;  */

void FUN_10b532a50(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b532a78; end: 10b532aa7;  */

undefined8 * FUN_10b532a78(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010b53461c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5345ec();
  }
  else {
    func_0x00010b534420();
  }
  func_0x00010b534714();
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d222c8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 10b532aa8; end: 10b532b03;  */

undefined8 * FUN_10b532aa8(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010b534674();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5345ec();
  }
  else {
    func_0x00010b534b58();
  }
  *param_1 = &PTR_FUN_110cfdeb8;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b527bfc();
  return param_1;
}



/* Entry: 10b532b04; end: 10b532b5f;  */

undefined8 * FUN_10b532b04(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010b534674();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5345ec();
  }
  else {
    func_0x00010b534b58();
  }
  *param_1 = &PTR_FUN_110cfde68;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b527d40();
  return param_1;
}



/* Entry: 10b532b60; end: 10b532c3f;  */

void FUN_10b532b60(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010b53461c();
  if (param_1 == 0) {
    func_0x00010b5346f0();
  }
  else {
    func_0x00010b5346b8();
  }
  func_0x00010b5347b0();
  func_0x00010b5347bc(&PTR_FUN_110cfe6d8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5341ac();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    FUN_10b532aa8();
  }
  *(undefined8 *)(unaff_x21 + 0x18) = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_10b532b04();
  }
  *(undefined8 *)(unaff_x21 + 0x20) = unaff_x20;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x21 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x21 + 0x28) = uVar2;
  return;
}



/* Entry: 10b532c40; end: 10b532c6f;  */

undefined8 * FUN_10b532c40(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  func_0x00010b53461c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5345ec();
  }
  else {
    func_0x00010b534420();
  }
  func_0x00010b534714();
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d01110;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b535aec(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x20);
  return param_1;
}



/* Entry: 10b532c70; end: 10b532cd7;  */

void FUN_10b532c70(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010b53461c();
  if (param_1 == 0) {
    func_0x00010b5345ec();
  }
  else {
    func_0x00010b534420();
  }
  func_0x00010b5347b0();
  func_0x00010b5347bc(&PTR_FUN_110cfebd8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5341ac();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) != 0) {
    FUN_10b532c40();
  }
  func_0x00010b534bc8();
  return;
}



/* Entry: 10b532cd8; end: 10b532d3b;  */

undefined8 * FUN_10b532cd8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *unaff_x20;
  
  func_0x00010b53461c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b53458c();
  }
  else {
    func_0x00010b534594();
    param_1 = unaff_x20;
  }
  func_0x00010b534714();
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110d020f8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b53cfac();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(param_3 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 - 1U < 2) {
    FUN_10b53cef4(param_2,*(undefined8 *)(param_3 + 0x10));
    param_1[2] = param_2;
  }
  return param_1;
}



/* Entry: 10b532d3c; end: 10b532da3;  */

void FUN_10b532d3c(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x00010b5345e0();
  if (param_1 == 0) {
    func_0x00010b5345ec();
  }
  else {
    func_0x00010b5342e8();
  }
  func_0x00010b5346d8();
  func_0x00010b5346e4(&PTR_FUN_110cfeae8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5341ac();
  }
  func_0x00010b5345b4();
  *(long *)(unaff_x21 + 0x18) = param_1;
  if ((*(byte *)(unaff_x21 + 0x10) & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010b53482c();
  }
  *(long *)(unaff_x21 + 0x20) = param_1;
  return;
}



/* Entry: 10b532da4; end: 10b532dd3;  */

undefined8 * FUN_10b532da4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010b53461c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5346f0();
  }
  else {
    func_0x00010b5346b8();
  }
  func_0x00010b534714();
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d050a0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b537450(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  param_1[6] = *(undefined8 *)(param_3 + 0x30);
  return param_1;
}



/* Entry: 10b532dd4; end: 10b532fd7;  */

void FUN_10b532dd4(long param_1)

{
  undefined1 in_ZR;
  int extraout_w8;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534870();
  if (param_1 == 0) {
    func_0x00010b53458c();
  }
  else {
    func_0x00010b534594();
    param_1 = unaff_x20;
  }
  func_0x00010b534c40();
  func_0x00010b534bfc(&PTR_FUN_110cfed68);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5341ac();
  }
  func_0x00010b534b90();
  if ((bool)in_ZR) {
    func_0x00010b534c20();
    FUN_10b532da4();
  }
  else {
    if (extraout_w8 != 1) {
      return;
    }
    func_0x00010b534c20();
    FUN_10b532d3c();
  }
  *(long *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 10b532fd8; end: 10b533027;  */

long FUN_10b532fd8(long param_1)

{
  func_0x00010b534674();
  if (param_1 == 0) {
    func_0x00010b5345f4();
  }
  else {
    func_0x00010b5343d8();
  }
  func_0x00010b534748(&PTR_FUN_110cfe138);
  FUN_10b52a4f4();
  return param_1;
}



/* Entry: 10b533028; end: 10b533063;  */

undefined8 * FUN_10b533028(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  func_0x00010b53461c();
  if (param_1 == 0) {
    unaff_x20 = (undefined8 *)0x68;
    __Znwm();
  }
  else {
    param_2 = 0x68;
    FUN_10b4d80e0();
  }
  func_0x00010b534714();
  unaff_x20[1] = param_2;
  *unaff_x20 = &PTR_FUN_110d12b80;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(unaff_x20 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b59b204(unaff_x20 + 2,param_2,param_3 + 0x10);
  func_0x00010598fd00(unaff_x20 + 5,param_2,param_3 + 0x28);
  func_0x00010598fd00(unaff_x20 + 8,param_2,param_3 + 0x40);
  *(undefined4 *)(unaff_x20 + 0xc) = 0;
  unaff_x20[0xb] = *(undefined8 *)(param_3 + 0x58);
  return unaff_x20;
}



/* Entry: 10b533064; end: 10b5330cb;  */

void FUN_10b533064(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010b53461c();
  if (param_1 == 0) {
    func_0x00010b5345ec();
  }
  else {
    func_0x00010b534420();
  }
  func_0x00010b5347b0();
  func_0x00010b5347bc(&PTR_FUN_110cfedb8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5341ac();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) != 0) {
    FUN_10b533028();
  }
  func_0x00010b534bc8();
  return;
}



/* Entry: 10b5330cc; end: 10b5331eb;  */

undefined8 * FUN_10b5330cc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  func_0x00010b53461c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5346f0();
  }
  else {
    func_0x00010b5346b8();
  }
  func_0x00010b534714();
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d12d60;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b59c060();
  }
  lVar2 = param_3 + 0x10;
  func_0x000107c2809c(lVar2,param_2);
  param_1[2] = lVar2;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  *(undefined4 *)(param_1 + 6) = 0;
  iVar1 = *(int *)(param_3 + 0x34);
  *(int *)((long)param_1 + 0x34) = iVar1;
  param_1[4] = *(undefined8 *)(param_3 + 0x20);
  if (iVar1 == 3) {
    FUN_10b59bfa0(param_2,*(undefined8 *)(param_3 + 0x28));
    param_1[5] = param_2;
  }
  return param_1;
}



/* Entry: 10b5331ec; end: 10b533237;  */

void FUN_10b5331ec(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010b5345e0();
  if (param_1 == 0) {
    func_0x00010b53458c();
  }
  else {
    func_0x00010b534230();
  }
  func_0x00010b5346d8();
  func_0x00010b5346e4(&PTR_FUN_110cfe368);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5341ac();
  }
  func_0x00010b534414();
  func_0x00010b534630();
  return;
}



/* Entry: 10b533238; end: 10b5332cb;  */

void FUN_10b533238(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010b53461c();
  if (param_1 == 0) {
    func_0x00010b534920();
  }
  else {
    func_0x00010b534928();
  }
  func_0x00010b5347b0();
  func_0x00010b5347bc(&PTR_FUN_110cfe958);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5341ac();
  }
  func_0x00010b534a0c();
  func_0x000108c6ef28();
  lVar1 = unaff_x19 + 0x28;
  func_0x00010b5346b0();
  *(long *)(unaff_x21 + 0x28) = lVar1;
  lVar1 = unaff_x19 + 0x30;
  func_0x00010b5346b0();
  *(long *)(unaff_x21 + 0x30) = lVar1;
  lVar1 = unaff_x19 + 0x38;
  func_0x00010b5346b0();
  *(long *)(unaff_x21 + 0x38) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x44) = 0;
  *(undefined1 *)(unaff_x21 + 0x40) = *(undefined1 *)(unaff_x19 + 0x40);
  return;
}



/* Entry: 10b5332cc; end: 10b5332fb;  */

undefined8 * FUN_10b5332cc(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010b53461c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5345ec();
  }
  else {
    func_0x00010b534420();
  }
  func_0x00010b534714();
  *param_1 = &PTR_FUN_110d01218;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b535b88();
  return param_1;
}



/* Entry: 10b5332fc; end: 10b53330f;  */

void FUN_10b5332fc(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b533310; end: 10b533367;  */

undefined8 * FUN_10b533310(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010b534674();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5345f4();
  }
  else {
    func_0x00010b5343d8();
  }
  *param_1 = &PTR_FUN_110cfdfa8;
  param_1[1] = unaff_x21;
  func_0x00010b534bb0();
  func_0x00010b5289ec();
  return param_1;
}



/* Entry: 10b533368; end: 10b533643;  */

void FUN_10b533368(long param_1)

{
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x21;
  
  func_0x00010b5345e0();
  if (param_1 == 0) {
    func_0x00010b5346f0();
  }
  else {
    func_0x00010b534454();
  }
  func_0x00010b5346d8();
  func_0x00010b5346e4(&PTR_FUN_110cfeea8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5341ac();
  }
  func_0x00010b534908();
  FUN_10b531908(unaff_x21 + 0x18);
  if ((*(byte *)(unaff_x21 + 0x10) & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    FUN_10b532c70();
  }
  *(undefined8 *)(unaff_x21 + 0x30) = unaff_x19;
  return;
}



/* Entry: 10b533644; end: 10b53369b;  */

undefined8 * FUN_10b533644(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010b534674();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5345f4();
  }
  else {
    func_0x00010b5343d8();
  }
  *param_1 = &PTR_FUN_110cfe0e8;
  param_1[1] = unaff_x21;
  func_0x00010b534bb0();
  FUN_10b52acc0();
  return param_1;
}



/* Entry: 10b53369c; end: 10b5336cb;  */

long FUN_10b53369c(long param_1)

{
  func_0x00010b53461c();
  if (param_1 == 0) {
    func_0x00010b5345f4();
  }
  else {
    func_0x00010b5344a4();
  }
  func_0x00010b534714();
  func_0x00010b5354e0(&PTR_FUN_110d00ca0);
  func_0x00010b534c4c();
  return param_1;
}



/* Entry: 10b5336cc; end: 10b533773;  */

void FUN_10b5336cc(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010b534870();
  if (param_1 == 0) {
    func_0x00010b534930();
  }
  else {
    func_0x00010b534938();
  }
  func_0x00010b534c40();
  func_0x00010b534bfc(&PTR_FUN_110cfef98);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5341ac();
  }
  func_0x00010b534be8(*(undefined4 *)(unaff_x21 + 0x10));
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x20;
  FUN_10b52b7dc(unaff_x19 + 0x18,unaff_x21 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x20;
  func_0x00010b52b7ec((undefined8 *)(unaff_x19 + 0x30),unaff_x21 + 0x30);
  if ((*(byte *)(unaff_x19 + 0x10) & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_10b533064();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = unaff_x20;
  return;
}



/* Entry: 10b533774; end: 10b533a9b;  */

void FUN_10b533774(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010b53461c();
  if (param_1 == 0) {
    func_0x00010b5345ec();
  }
  else {
    func_0x00010b534420();
  }
  func_0x00010b5347b0();
  func_0x00010b5347bc(&PTR_FUN_110cfe1d8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5341ac();
  }
  func_0x00010b534680();
  func_0x00010b534a64();
  return;
}



/* Entry: 10b533a9c; end: 10b533ad7;  */

undefined8 * FUN_10b533a9c(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010b53461c();
  if (param_1 == 0) {
    __Znwm(0x70);
  }
  else {
    FUN_10b4d80e0();
  }
  func_0x00010b534714();
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
  return unaff_x19;
}



/* Entry: 10b533ad8; end: 10b533b27;  */

long FUN_10b533ad8(long param_1)

{
  func_0x00010b534674();
  if (param_1 == 0) {
    func_0x00010b5345f4();
  }
  else {
    func_0x00010b5343d8();
  }
  func_0x00010b534748(&PTR_FUN_110cfe688);
  func_0x00010b52daec();
  return param_1;
}



/* Entry: 10b533b28; end: 10b533b77;  */

long FUN_10b533b28(long param_1)

{
  func_0x00010b534674();
  if (param_1 == 0) {
    func_0x00010b5345f4();
  }
  else {
    func_0x00010b5343d8();
  }
  func_0x00010b534748(&PTR_FUN_110cfe228);
  func_0x00010b52dbb4();
  return param_1;
}



/* Entry: 10b533b78; end: 10b533c33;  */

void FUN_10b533b78(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010b53461c();
  if (param_1 == 0) {
    func_0x00010b534930();
  }
  else {
    func_0x00010b534938();
  }
  func_0x00010b5347b0();
  func_0x00010b5347bc(&PTR_FUN_110cfe778);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5341ac();
  }
  *(undefined4 *)(unaff_x21 + 0x10) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  lVar2 = unaff_x19 + 0x18;
  func_0x00010b5346b0();
  *(long *)(unaff_x21 + 0x18) = lVar2;
  lVar2 = unaff_x19 + 0x20;
  func_0x00010b5346b0();
  *(long *)(unaff_x21 + 0x20) = lVar2;
  lVar2 = unaff_x19 + 0x28;
  func_0x00010b5346b0();
  *(long *)(unaff_x21 + 0x28) = lVar2;
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x20;
    FUN_10b5332cc();
  }
  *(undefined8 *)(unaff_x21 + 0x30) = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_10b5332cc();
  }
  *(undefined8 *)(unaff_x21 + 0x38) = unaff_x20;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x21 + 0x48) = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x21 + 0x40) = uVar3;
  return;
}



/* Entry: 10b533c34; end: 10b533c83;  */

long FUN_10b533c34(long param_1)

{
  func_0x00010b534674();
  if (param_1 == 0) {
    func_0x00010b5345f4();
  }
  else {
    func_0x00010b5343d8();
  }
  func_0x00010b534748(&PTR_FUN_110cfddc8);
  FUN_10b52e114();
  return param_1;
}



/* Entry: 10b533c84; end: 10b533cdb;  */

undefined8 * FUN_10b533c84(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010b534674();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5345f4();
  }
  else {
    func_0x00010b5343d8();
  }
  *param_1 = &PTR_FUN_110cfe458;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  func_0x00010b52e1dc();
  return param_1;
}



/* Entry: 10b533cdc; end: 10b533d77;  */

void FUN_10b533cdc(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010b5345e0();
  if (param_1 == 0) {
    func_0x00010b53458c();
  }
  else {
    func_0x00010b534230();
  }
  func_0x00010b5346d8();
  func_0x00010b5346e4(&PTR_FUN_110cfe4f8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5341ac();
  }
  func_0x00010b534414();
  func_0x00010b534630();
  return;
}



/* Entry: 10b533d78; end: 10b533dcf;  */

undefined8 * FUN_10b533d78(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010b534674();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5345f4();
  }
  else {
    func_0x00010b5343d8();
  }
  *param_1 = &PTR_FUN_110cfe2c8;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  FUN_10b52e668();
  return param_1;
}



/* Entry: 10b533dd0; end: 10b533e1f;  */

long FUN_10b533dd0(long param_1)

{
  func_0x00010b534674();
  if (param_1 == 0) {
    func_0x00010b5345f4();
  }
  else {
    func_0x00010b5343d8();
  }
  func_0x00010b534748(&PTR_FUN_110cfe278);
  func_0x00010b52e784();
  return param_1;
}



/* Entry: 10b533e20; end: 10b533e6b;  */

void FUN_10b533e20(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010b53461c();
  if (param_1 == 0) {
    func_0x00010b5345ec();
  }
  else {
    func_0x00010b534420();
  }
  func_0x00010b5347b0();
  func_0x00010b5347bc(&PTR_FUN_110cfe188);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5341ac();
  }
  func_0x00010b534680();
  func_0x00010b534a64();
  return;
}



/* Entry: 10b533e6c; end: 10b533ee3;  */

void FUN_10b533e6c(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010b53461c();
  if (param_1 == 0) {
    func_0x00010b53480c();
  }
  else {
    func_0x00010b534b30();
  }
  func_0x00010b5347b0();
  func_0x00010b5347bc(&PTR_FUN_110cfdd28);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5341ac();
  }
  func_0x00010b534a0c();
  func_0x00010598fd00();
  lVar1 = unaff_x19 + 0x28;
  func_0x00010b5346b0();
  *(long *)(unaff_x21 + 0x28) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x38) = 0;
  *(undefined8 *)(unaff_x21 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  return;
}



/* Entry: 10b533ee4; end: 10b533f93;  */

void FUN_10b533ee4(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010b53461c();
  if (param_1 == 0) {
    func_0x00010b534664();
  }
  else {
    FUN_10b4d80e0();
  }
  func_0x00010b5347b0();
  func_0x00010b5347bc(&PTR_FUN_110cfee58);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5341ac();
  }
  func_0x00010b534a0c();
  FUN_10b531b78();
  *(undefined4 *)(unaff_x21 + 0x2c) = 0;
  *(undefined4 *)(unaff_x21 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 10b533f94; end: 10b533fcf;  */

undefined8 * FUN_10b533f94(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010b53461c();
  if (param_1 == 0) {
    __Znwm(0xa0);
  }
  else {
    FUN_10b4d80e0();
  }
  func_0x00010b534714();
  func_0x00010b54cf58();
  *unaff_x19 = &PTR_FUN_110d04cf8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b54cea8();
  }
  *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  lVar2 = unaff_x20 + 0x18;
  func_0x00010b54ce6c();
  unaff_x19[3] = lVar2;
  lVar2 = unaff_x20 + 0x20;
  func_0x00010b54ce6c();
  unaff_x19[4] = lVar2;
  lVar2 = unaff_x20 + 0x28;
  func_0x00010b54ce6c();
  unaff_x19[5] = lVar2;
  lVar2 = unaff_x20 + 0x30;
  func_0x00010b54ce6c();
  unaff_x19[6] = lVar2;
  lVar2 = unaff_x20 + 0x38;
  func_0x00010b54ce6c();
  unaff_x19[7] = lVar2;
  lVar2 = unaff_x20 + 0x40;
  func_0x00010b54ce6c();
  unaff_x19[8] = lVar2;
  uVar1 = *(uint *)(unaff_x19 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x00010b532cd8();
  }
  unaff_x19[9] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b54ceec();
  }
  unaff_x19[10] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b54ceec();
  }
  unaff_x19[0xb] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_10b54cd5c();
  }
  unaff_x19[0xc] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x00010b532d0c();
  }
  unaff_x19[0xd] = unaff_x21;
  if ((uVar1 >> 5 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x00010b54ceec();
  }
  unaff_x19[0xe] = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x88);
  unaff_x19[0x13] = *(undefined8 *)(unaff_x20 + 0x98);
  unaff_x19[0x12] = uVar6;
  unaff_x19[0x11] = uVar5;
  unaff_x19[0x10] = uVar4;
  unaff_x19[0xf] = uVar3;
  return unaff_x19;
}



/* Entry: 10b533fd0; end: 10b534c5b;  */

void FUN_10b533fd0(void)

{
  return;
}



/* Entry: 10b534c5c; end: 10b534c7f;  */

undefined8 FUN_10b534c5c(undefined8 param_1)

{
  func_0x00010b535478();
  return param_1;
}



/* Entry: 10b534c80; end: 10b534cbb;  */

undefined8 FUN_10b534c80(undefined8 param_1)

{
  func_0x00010b5354e0(&PTR_FUN_110d00ca0);
  func_0x00010b534c4c();
  return param_1;
}



/* Entry: 10b534cbc; end: 10b534cbf;  */

undefined8 FUN_10b534cbc(undefined8 param_1)

{
  func_0x00010b535478();
  return param_1;
}



/* Entry: 10b534cc0; end: 10b534cd3;  */

void FUN_10b534cc0(void)

{
  FUN_10b534c5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b534cd4; end: 10b534d53;  */

undefined ** FUN_10b534cd4(void)

{
  return &PTR_DAT_110d00e70;
}



/* Entry: 10b534d54; end: 10b534d77;  */

undefined8 FUN_10b534d54(undefined8 param_1)

{
  func_0x00010b535478();
  return param_1;
}



/* Entry: 10b534d78; end: 10b534db3;  */

undefined8 FUN_10b534d78(undefined8 param_1)

{
  func_0x00010b5354e0(&PTR_FUN_110d00de0);
  func_0x00010b534d44();
  return param_1;
}



/* Entry: 10b534db4; end: 10b534db7;  */

undefined8 FUN_10b534db4(undefined8 param_1)

{
  func_0x00010b535478();
  return param_1;
}



/* Entry: 10b534db8; end: 10b534dcb;  */

void FUN_10b534db8(void)

{
  FUN_10b534d54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b534dcc; end: 10b534e57;  */

undefined ** FUN_10b534dcc(void)

{
  return &PTR_DAT_110d00eb8;
}



/* Entry: 10b534e58; end: 10b534e7b;  */

undefined8 FUN_10b534e58(undefined8 param_1)

{
  func_0x00010b535478();
  return param_1;
}



/* Entry: 10b534e7c; end: 10b534ebb;  */

undefined8 * FUN_10b534e7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d00d90;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010b534e3c(param_1,param_3);
  return param_1;
}



/* Entry: 10b534ebc; end: 10b534ebf;  */

undefined8 FUN_10b534ebc(undefined8 param_1)

{
  func_0x00010b535478();
  return param_1;
}



/* Entry: 10b534ec0; end: 10b534ed3;  */

void FUN_10b534ec0(void)

{
  FUN_10b534e58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b534ed4; end: 10b534ef3;  */

undefined ** FUN_10b534ed4(void)

{
  return &PTR_DAT_110d00f00;
}



/* Entry: 10b534ef4; end: 10b534f53;  */

long * FUN_10b534ef4(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int extraout_w8;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b5354ec();
  if (extraout_w8 != 0) {
    func_0x00010b5354d4();
    func_0x00010b535494();
    func_0x00010b5354a4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)uVar3) {
    while( true ) {
      iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar5 = (int)uVar3;
      uVar1 = iVar5 - iVar6;
      uVar3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)uVar3);
}



/* Entry: 10b534f54; end: 10b534f93;  */

long FUN_10b534f54(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00010b53550c();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b534f94; end: 10b534fb7;  */

undefined8 FUN_10b534f94(undefined8 param_1)

{
  func_0x00010b535478();
  return param_1;
}



/* Entry: 10b534fb8; end: 10b534ff3;  */

undefined8 FUN_10b534fb8(undefined8 param_1)

{
  func_0x00010b5354e0(&PTR_FUN_110d00d40);
  func_0x00010b534f84();
  return param_1;
}



/* Entry: 10b534ff4; end: 10b534ff7;  */

undefined8 FUN_10b534ff4(undefined8 param_1)

{
  func_0x00010b535478();
  return param_1;
}



/* Entry: 10b534ff8; end: 10b53500b;  */

void FUN_10b534ff8(void)

{
  FUN_10b534f94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53500c; end: 10b535097;  */

undefined ** FUN_10b53500c(void)

{
  return &PTR_DAT_110d00f48;
}



/* Entry: 10b535098; end: 10b5350bb;  */

undefined8 FUN_10b535098(undefined8 param_1)

{
  func_0x00010b535478();
  return param_1;
}



/* Entry: 10b5350bc; end: 10b5350fb;  */

undefined8 * FUN_10b5350bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d00cf0;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010b53507c(param_1,param_3);
  return param_1;
}



/* Entry: 10b5350fc; end: 10b5350ff;  */

undefined8 FUN_10b5350fc(undefined8 param_1)

{
  func_0x00010b535478();
  return param_1;
}



/* Entry: 10b535100; end: 10b535113;  */

void FUN_10b535100(void)

{
  FUN_10b535098();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b535114; end: 10b535133;  */

undefined ** FUN_10b535114(void)

{
  return &PTR_DAT_110d00f90;
}



/* Entry: 10b535134; end: 10b535193;  */

long * FUN_10b535134(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int extraout_w8;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b5354ec();
  if (extraout_w8 != 0) {
    func_0x00010b5354d4();
    func_0x00010b535494();
    func_0x00010b5354a4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)uVar3) {
    while( true ) {
      iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar5 = (int)uVar3;
      uVar1 = iVar5 - iVar6;
      uVar3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)uVar3);
}



/* Entry: 10b535194; end: 10b5351d3;  */

long FUN_10b535194(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00010b53550c();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5351d4; end: 10b5351f7;  */

undefined8 FUN_10b5351d4(undefined8 param_1)

{
  func_0x00010b535478();
  return param_1;
}



/* Entry: 10b5351f8; end: 10b535233;  */

undefined8 FUN_10b5351f8(undefined8 param_1)

{
  func_0x00010b5354e0(&PTR_FUN_110d00e30);
  func_0x00010b5351c4();
  return param_1;
}



/* Entry: 10b535234; end: 10b535237;  */

undefined8 FUN_10b535234(undefined8 param_1)

{
  func_0x00010b535478();
  return param_1;
}



/* Entry: 10b535238; end: 10b53524b;  */

void FUN_10b535238(void)

{
  FUN_10b5351d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


