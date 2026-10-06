/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d448e8; end: 101d44937;  */

void FUN_101d448e8(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e28208 != 0) {
    return;
  }
  puVar1 = &UNK_11047a878;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e28208 = param_1;
  return;
}



/* Entry: 101d44938; end: 101d4493f;  */

void FUN_101d44938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101d44940; end: 101d449af;  */

undefined8 * FUN_101d44940(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101d449b0; end: 101d44aa7;  */

int FUN_101d449b0(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 101d44aa8; end: 101d44ae3; -[_TtC40SCMemPlatBackupJobSchedulingServicesImpl20EmptyBackupScheduler init] */

void FUN_101d44aa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000101d44b14();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101d44ae4; end: 101d44b33;  */

void FUN_101d44ae4(void)

{
  func_0x000101d44b14();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101d44b34; end: 101d44b3b;  */

undefined8 FUN_101d44b34(void)

{
  return 1;
}



/* Entry: 101d44b3c; end: 101d44bdb;  */

void FUN_101d44b3c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d44bdc; end: 101d44beb;  */

void FUN_101d44bdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d44bec; end: 101d44c97; -[_TtC40SCMemPlatBackupJobSchedulingServicesImpl20EmptyBackupScheduler scheduleBackupJobWithJobConfig:] */

void FUN_101d44bec(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
  func_0x000107c61534();
  lVar1 = 0;
  func_0x00010095c380();
  lVar2 = lVar1;
  FUN_101d44c98();
  puVar3 = &UNK_11047a9c0;
  func_0x000107c613f8(&UNK_11047a9c0,lVar2,0,0);
  func_0x00010488ade0();
  func_0x000107c614ac(puVar3);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  uVar4 = uVar5;
  func_0x000107c6157c(uVar5);
  func_0x000103edf384();
  func_0x000107c61574(lVar1);
  func_0x000107c61574(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 101d44c98; end: 101d44cd7;  */

void FUN_101d44c98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e28238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da10614;
  func_0x000107c61520(&UNK_10da10614,&UNK_11047a9c0);
  puRam0000000112e28238 = puVar1;
  return;
}



/* Entry: 101d44cd8; end: 101d44dc7;  */

uint FUN_101d44cd8(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 101d44dc8; end: 101d44e07;  */

void FUN_101d44dc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e28240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da105ec;
  func_0x000107c61520(&UNK_10da105ec,&UNK_11047a9c0);
  puRam0000000112e28240 = puVar1;
  return;
}



/* Entry: 101d44e08; end: 101d44e17;  */

void FUN_101d44e08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d44e18; end: 101d44e37;  */

void FUN_101d44e18(void)

{
  func_0x000107c61168(&PTR_PTR_112e28288);
  return;
}



/* Entry: 101d44e38; end: 101d44f7f;  */

void FUN_101d44e38(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  func_0x000107c3ddfc();
  func_0x000107c61180();
  if (param_2 == (undefined1 *)0x0) {
    func_0x000107c30904();
  }
  else {
    puVar1 = param_2;
    func_0x000107c49804();
    func_0x000107c61170();
    func_0x000107c30904();
    if ((((int)param_2 == 0) && ((int)puVar1 != 0)) && ((int)puVar1 != 1)) {
      FUN_101d456e8();
      func_0x000107c613f8(&UNK_11047aac0,param_2,0,0);
      *param_2 = 3;
      func_0x000107c61654();
      return;
    }
  }
  lVar2 = 0x112e28318;
  func_0x0001000285a8(0x112e28318,&UNK_10da17640);
  func_0x000107c61538();
  puVar3 = PTR_PTR_1126ae740;
  func_0x000107c610f8(PTR_PTR_1126ae740);
  func_0x000107c453e4();
  for (lVar4 = *(long *)(lVar2 + 0x10); lVar4 != 0; lVar4 = lVar4 + -1) {
    func_0x000107c3d810(puVar3);
  }
  func_0x000107c6142c(lVar2);
  func_0x000107c527c4(param_1);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 101d44f80; end: 101d450af;  */

void FUN_101d44f80(undefined8 param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long unaff_x21;
  
  puVar1 = PTR_PTR_1126b7240;
  func_0x000107c610f8(PTR_PTR_1126b7240);
  func_0x000107c453e4();
  puVar2 = param_2;
  func_0x000107c4d5ac();
  func_0x000107c61180();
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
    func_0x000107c49804();
    func_0x000107c61170();
    if (((int)puVar3 != 0) && ((int)puVar3 != 1)) {
      FUN_101d456e8();
      func_0x000107c613f8(&UNK_11047aac0,puVar2,0,0);
      *puVar2 = 1;
      func_0x000107c61654();
      goto LAB_101d45090;
    }
    func_0x000107c56a40(puVar1);
  }
  FUN_101d44e38(puVar1,param_2);
  if (unaff_x21 == 0) {
    func_0x000107c49b38();
    func_0x000107c61180();
    if (param_2 != (undefined1 *)0x0) {
      func_0x000107c3ebcc();
      func_0x000107c61170(param_2);
    }
    func_0x000107c52c2c(puVar1);
    func_0x000107c55958(param_1);
  }
LAB_101d45090:
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101d450b0; end: 101d45133;  */

/* WARNING: Removing unreachable block (ram,0x000101d45130) */
/* WARNING: Removing unreachable block (ram,0x000101d4512c) */
/* WARNING: Removing unreachable block (ram,0x000101d45128) */

void FUN_101d450b0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c5ca4c();
  func_0x000107c61180();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c5d384();
    if (999 < (uint)lVar1) {
      func_0x000107c55970(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 101d45134; end: 101d451cf;  */

void FUN_101d45134(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  func_0x000107c42b5c();
  func_0x000107c61180();
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
    func_0x000107c49804();
    func_0x000107c61170();
    if ((uint)puVar1 < 3) {
      func_0x000107c54734(param_1);
    }
    else {
      FUN_101d456e8();
      func_0x000107c613f8(&UNK_11047aac0,param_2,0,0);
      *param_2 = 5;
      func_0x000107c61654();
    }
  }
  return;
}



/* Entry: 101d451d0; end: 101d452d3;  */

undefined * FUN_101d451d0(undefined1 *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  
  puVar1 = PTR_PTR_1126b7238;
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  func_0x000107c49644();
  func_0x000107c61180();
  if (param_1 == (undefined1 *)0x0) {
    func_0x000107c57f50(puVar1);
    return puVar1;
  }
  puVar2 = param_1;
  func_0x000107c49820();
  if (puVar2 == (undefined1 *)0x0) {
    func_0x000107c57f50(puVar1);
  }
  else {
    puVar2 = param_1;
    func_0x000107c49820();
    if (((long)puVar2 < 1) || (puVar2 = param_1, func_0x000107c5d388(), (ulong)puVar2 >> 0x20 != 0))
    {
      FUN_101d456e8();
      func_0x000107c613f8(&UNK_11047aac0,puVar2,0,0);
      *puVar2 = 6;
      func_0x000107c61654();
      func_0x000107c61170(puVar1);
      func_0x000107c61170(param_1);
      return puVar1;
    }
    func_0x000107c5d384(param_1);
    func_0x000107c57f4c(puVar1);
  }
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 101d452d4; end: 101d4550b;  */

undefined * FUN_101d452d4(double param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  
  puVar2 = PTR_PTR_1126b7230;
  func_0x000107c610f8(PTR_PTR_1126b7230);
  func_0x000107c453e4();
  func_0x000107c50800();
  func_0x000107c61180();
  if (param_2 == (undefined1 *)0x0) {
    func_0x000107c57ed0(puVar2);
  }
  else {
    puVar3 = param_2;
    func_0x000107c50834();
    if ((uint)puVar3 < 3) {
      func_0x000107c57ed0(puVar2);
      puVar3 = param_2;
      func_0x000107c5080c();
      uVar4 = 8;
      if ((0.0 <= param_1) && (param_1 <= 4294967295.0)) {
        func_0x000107c5080c(param_2);
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101d454ec);
          (*pcVar1)();
        }
        if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101d454f0);
          (*pcVar1)();
        }
        if (4294967296.0 <= param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101d454f4);
          (*pcVar1)();
        }
        func_0x000107c57ecc(puVar2);
        puVar3 = param_2;
        func_0x000107c4c814();
        uVar4 = 9;
        if ((0.0 <= param_1) && (param_1 <= 4294967295.0)) {
          func_0x000107c4c814(param_2);
          if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101d454f8);
            (*pcVar1)();
          }
          if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101d454fc);
            (*pcVar1)();
          }
          if (4294967296.0 <= param_1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101d45500);
            (*pcVar1)();
          }
          func_0x000107c5632c(puVar2);
          puVar3 = param_2;
          func_0x000107c4c86c();
          uVar4 = 10;
          if ((0.0 <= param_1) && (param_1 <= 4294967295.0)) {
            func_0x000107c4c86c(param_2);
            if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101d45504);
              (*pcVar1)();
            }
            if (-1.0 < param_1) {
              if (param_1 < 4294967296.0) {
                func_0x000107c56358(puVar2);
                func_0x000107c61170(param_2);
                return puVar2;
              }
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101d4550c);
              (*pcVar1)();
            }
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101d45508);
            (*pcVar1)();
          }
        }
      }
    }
    else {
      uVar4 = 7;
    }
    FUN_101d456e8();
    func_0x000107c613f8(&UNK_11047aac0,puVar3,0,0);
    *puVar3 = uVar4;
    func_0x000107c61654();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_2);
  }
  return puVar2;
}



/* Entry: 101d4550c; end: 101d456e7;  */

undefined8 * FUN_101d4550c(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long unaff_x21;
  
  puVar2 = (undefined8 *)PTR_PTR_1126b7228;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = puVar2;
  func_0x00010216074c();
  uVar4 = *puVar3;
  uVar1 = puVar3[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5597c(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c55968(puVar2);
  func_0x000107c55978(puVar2);
  puVar5 = param_1;
  func_0x000107c5d264();
  func_0x000107c61180();
  if (puVar5 != (undefined1 *)0x0) {
    func_0x000107c5596c(puVar2);
    func_0x000107c61170(puVar5);
  }
  FUN_101d44f80(puVar2,param_1);
  if (unaff_x21 == 0) {
    FUN_101d450b0(puVar2,param_1);
    FUN_101d45134(puVar2,param_1);
    puVar5 = param_1;
    FUN_101d451d0(param_1);
    func_0x000107c55974(puVar2);
    func_0x000107c61170(puVar5);
    puVar5 = param_1;
    FUN_101d452d4(param_1);
    func_0x000107c57ec0(puVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c4e65c();
    func_0x000107c61180();
    if (param_1 == (undefined1 *)0x0) {
      return puVar2;
    }
    puVar5 = param_1;
    func_0x000107c49804();
    func_0x000107c61170();
    if ((uint)puVar5 < 2) {
      func_0x000107c55960(puVar2);
      return puVar2;
    }
    FUN_101d456e8();
    func_0x000107c613f8(&UNK_11047aac0,param_1,0,0);
    *param_1 = 0xc;
    func_0x000107c61654();
  }
  func_0x000107c61170(puVar2);
  return puVar2;
}



/* Entry: 101d456e8; end: 101d45727;  */

void FUN_101d456e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e282e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da10734;
  func_0x000107c61520(&UNK_10da10734,&UNK_11047aac0);
  puRam0000000112e282e0 = puVar1;
  return;
}



/* Entry: 101d45728; end: 101d4588b;  */

int FUN_101d45728(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf3 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xc) {
      iVar2 = 4;
    }
    if (param_2 + 0xc >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101d457a4;
        goto LAB_101d45788;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101d45788:
      return ((uint)*param_1 | uVar1 << 8) - 0xc;
    }
  }
LAB_101d457a4:
  iVar2 = *param_1 - 0xd;
  if (*param_1 < 0xd) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101d4588c; end: 101d45937;  */

void FUN_101d4588c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d45938; end: 101d4595f;  */

void FUN_101d45938(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d45960; end: 101d4599f;  */

void FUN_101d45960(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e283b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da106cc;
  func_0x000107c61520(&UNK_10da106cc,&UNK_11047aac0);
  puRam0000000112e283b0 = puVar1;
  return;
}



/* Entry: 101d459a0; end: 101d45a23;  */

void FUN_101d459a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 101d45a24; end: 101d45c57;  */

void FUN_101d45a24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar3 = &UNK_11047ab40;
  func_0x000107c613fc(&UNK_11047ab40,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  func_0x0001000285a8(0x112e283b8,&UNK_10da10780);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar5);
  pcVar4 = FUN_101d45c58;
  func_0x0001000bdd8c(FUN_101d45c58,puVar3);
  func_0x0001002ae9d0(0);
  func_0x000107c610f8();
  FUN_102160818(pcVar4);
  return;
}



/* Entry: 101d45c58; end: 101d45c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d45c58(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_50;
  long lStack_48;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  uVar8 = 0x112e284a0;
  func_0x0001000285a8(0x112e284a0,&UNK_10da107d0);
  uVar2 = *(undefined8 *)(lVar4 + _DAT_11307e6a8);
  func_0x0001000bda74(uVar2,uVar8);
  func_0x0001000285a8(0x112e284a8,&UNK_10da107d8);
  func_0x000107c613fc();
  pcVar3 = FUN_101d45c64;
  func_0x0001000bdd8c(FUN_101d45c64,0);
  uVar8 = *(undefined8 *)(lVar5 + _DAT_112ff4aa8);
  lVar4 = *(long *)(lVar7 + _DAT_113080730);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c4a598();
    func_0x000107c615e8(lVar4);
    if ((int)lVar5 != 0) {
      lVar5 = 0;
      FUN_101d44388();
      lVar4 = lVar5;
      func_0x000107c610f8();
      *(undefined8 *)(lVar4 + _DAT_112e281c0) = uVar2;
      *(code **)(lVar4 + _DAT_112e281c8) = pcVar3;
      *(undefined8 *)(lVar4 + _DAT_112e281d0) = uVar8;
      puVar1 = PTR_s_init_1125d9248;
      lStack_50 = lVar4;
      lStack_48 = lVar5;
      func_0x000107c6157c(uVar8);
      func_0x000107c61154(&lStack_50,puVar1);
      goto LAB_101d45c3c;
    }
  }
  plVar6 = (long *)0x0;
  func_0x000101d44b14();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar2);
LAB_101d45c3c:
  *param_1 = plVar6;
  return;
}



/* Entry: 101d45c64; end: 101d45ca7;  */

void FUN_101d45c64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_101d44e18();
  uVar2 = uVar1;
  func_0x000107c613fc();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11047aa30;
  *param_1 = uVar2;
  return;
}



/* Entry: 101d45ca8; end: 101d45ccb;  */

/* WARNING: Possible PIC construction at 0x000101d45cb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d45cb8) */

void FUN_101d45ca8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d45ccc; end: 101d45d1f;  */

void FUN_101d45ccc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d45d20; end: 101d45d9f;  */

void FUN_101d45d20(undefined8 param_1)

{
  if (lRam0000000112e283e8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e68e314);
  return;
}



/* Entry: 101d45da0; end: 101d45e67;  */

void FUN_101d45da0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_11047ab68;
  func_0x000107c613fc(&UNK_11047ab68,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  func_0x0001000285a8(0x112e283b8,&UNK_10da10780);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  pcVar3 = FUN_101d45e9c;
  func_0x0001000bdd8c(FUN_101d45e9c,puVar2);
  uVar4 = 0;
  func_0x0001002ae9d0(0);
  func_0x000107c610f8();
  FUN_102160818(pcVar3,uVar4);
  *param_1 = pcVar3;
  return;
}



/* Entry: 101d45e68; end: 101d45e9b;  */

void FUN_101d45e68(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d45e9c; end: 101d45e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d45e9c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_50;
  long lStack_48;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  uVar8 = 0x112e284a0;
  func_0x0001000285a8(0x112e284a0,&UNK_10da107d0);
  uVar2 = *(undefined8 *)(lVar4 + _DAT_11307e6a8);
  func_0x0001000bda74(uVar2,uVar8);
  func_0x0001000285a8(0x112e284a8,&UNK_10da107d8);
  func_0x000107c613fc();
  pcVar3 = FUN_101d45c64;
  func_0x0001000bdd8c(FUN_101d45c64,0);
  uVar8 = *(undefined8 *)(lVar5 + _DAT_112ff4aa8);
  lVar4 = *(long *)(lVar7 + _DAT_113080730);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c4a598();
    func_0x000107c615e8(lVar4);
    if ((int)lVar5 != 0) {
      lVar5 = 0;
      FUN_101d44388();
      lVar4 = lVar5;
      func_0x000107c610f8();
      *(undefined8 *)(lVar4 + _DAT_112e281c0) = uVar2;
      *(code **)(lVar4 + _DAT_112e281c8) = pcVar3;
      *(undefined8 *)(lVar4 + _DAT_112e281d0) = uVar8;
      puVar1 = PTR_s_init_1125d9248;
      lStack_50 = lVar4;
      lStack_48 = lVar5;
      func_0x000107c6157c(uVar8);
      func_0x000107c61154(&lStack_50,puVar1);
      goto LAB_101d45c3c;
    }
  }
  plVar6 = (long *)0x0;
  func_0x000101d44b14();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar2);
LAB_101d45c3c:
  *param_1 = plVar6;
  return;
}



/* Entry: 101d45ea0; end: 101d45ecf;  */

void FUN_101d45ea0(void)

{
  func_0x000100c0bca4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101d45ed0; end: 101d45f27; -[_TtC34SCMemPlatBackupMonitorServicesImpl14BackupEventBus .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101d45eec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d45ef0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d45ed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e284b8));
  return;
}



/* Entry: 101d45f28; end: 101d45fc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d45f28(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x00010006c804();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e284c8);
  *(undefined8 *)(unaff_x20 + _DAT_112e284c8) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  func_0x000100070bfc();
  func_0x00010006c804();
  uStack_38 = param_1;
  func_0x000100087c34(&uStack_38);
  func_0x000100070bfc();
  return;
}



/* Entry: 101d45fc4; end: 101d45fdb;  */

void FUN_101d45fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100c0bdd4(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_3);
  func_0x000103bca3c8(param_1,param_2,param_3,0);
  FUN_101d45f28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101d45fdc; end: 101d460eb;  */

void FUN_101d45fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000100c0bdd4(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_3);
  func_0x000103bca3c8(param_1,param_2,param_3,param_6);
  FUN_101d45f28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101d460ec; end: 101d460f3;  */

void FUN_101d460ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  func_0x000100c0bdd4(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_3);
  if (param_5 == '\x01') {
    func_0x000103bca3c8();
  }
  else {
    func_0x000103bca570(param_1,param_2,param_3,5,param_4);
  }
  FUN_101d45f28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101d460f4; end: 101d4619f;  */

void FUN_101d460f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000100c0bdd4(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_3);
  if (param_5 == '\x01') {
    func_0x000103bca3c8();
  }
  else {
    func_0x000103bca570(param_1,param_2,param_3,param_8,param_4);
  }
  FUN_101d45f28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101d461a0; end: 101d461bf;  */

void FUN_101d461a0(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 101d461c0; end: 101d461cf;  */

void FUN_101d461c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d461d0; end: 101d46243;  */

void FUN_101d461d0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112e28500,&UNK_10da10840);
  func_0x000107c613fc();
  puVar1 = &UNK_100c0bcc4;
  func_0x0001000bdd8c(&UNK_100c0bcc4,0);
  uVar2 = 0;
  func_0x000100289924(0);
  func_0x000107c610f8();
  func_0x00010078ea34(puVar1,uVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 101d46244; end: 101d46257;  */

bool FUN_101d46244(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101d46258; end: 101d46303;  */

void FUN_101d46258(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d46304; end: 101d46313;  */

void FUN_101d46304(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d46314; end: 101d46333;  */

void FUN_101d46314(void)

{
  func_0x000107c61168(&PTR_PTR_112e28610);
  return;
}



/* Entry: 101d46334; end: 101d4635b;  */

void FUN_101d46334(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11047ad08;
  if (lRam0000000112e28670 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e28670 = param_1;
  }
  return;
}



/* Entry: 101d4635c; end: 101d4639f;  */

void FUN_101d4635c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101d463a0; end: 101d46537;  */

bool FUN_101d463a0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101d46538; end: 101d46577;  */

void FUN_101d46538(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e28680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da109c0;
  func_0x000107c61520(&UNK_10da109c0,&UNK_11047adb8);
  puRam0000000112e28680 = puVar1;
  return;
}



/* Entry: 101d46578; end: 101d46587;  */

void FUN_101d46578(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d46588; end: 101d465d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d46588(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e28688) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101d465d4; end: 101d4662f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d465d4(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112e28688) = param_1;
  func_0x000101d46610();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101d46630; end: 101d46873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d46630(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  long lStack_78;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)&puStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d3bf08,&UNK_10d913340);
  func_0x000107c613fc();
  lVar3 = 0;
  func_0x00010095c380();
  if (2147483647.0 <= param_1) {
    param_1 = 2147483647.0;
  }
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d4686c);
    (*pcVar1)();
  }
  if (param_1 <= -2147483649.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d46870);
    (*pcVar1)();
  }
  if (2147483648.0 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d46874);
    (*pcVar1)();
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e28688);
  func_0x000107c5fadc(param_2,param_3);
  func_0x0001010415e8(0);
  (**(code **)(lVar9 + 0x68))
            (lVar7,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
             ,lVar2);
  lVar4 = lVar7;
  func_0x000104188018(lVar7,0,0);
  (**(code **)(lVar9 + 8))(lVar7,lVar2);
  pcStack_80 = FUN_101d468c8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101529600;
  puStack_88 = &UNK_11047ae20;
  ppuVar5 = &puStack_a0;
  lStack_78 = lVar3;
  func_0x000107c60bc4(ppuVar5);
  lVar2 = lStack_78;
  func_0x000107c6157c(lVar3);
  func_0x000107c61574(lVar2);
  func_0x000107c49808(uVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar4);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar8 = uVar6;
  func_0x000107c6157c(uVar6);
  func_0x000103edf0bc();
  func_0x000107c61574(lVar3);
  func_0x000107c61574(uVar6);
  return uVar8;
}



/* Entry: 101d46874; end: 101d468c7;  */

void FUN_101d46874(void)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  puStack_28 = puVar1;
  func_0x000100b60084(&puStack_28);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101d468c8; end: 101d468eb;  */

void FUN_101d468c8(void)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  puStack_28 = puVar1;
  func_0x000100b60084(&puStack_28);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101d468ec; end: 101d468f7; -[_TtC27SCMemPlatBackupServicesImpl21MemPlatBackupCofStore getIntConfigWithConfigKey:defaultValue:] */

void FUN_101d468ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_101d46630(param_1,param_4,param_3);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 101d468f8; end: 101d46ad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d468f8(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  long lStack_78;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&puStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d3bf08,&UNK_10d913340);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e28688);
  func_0x000107c5fadc(param_2,param_3);
  func_0x0001010415e8(0);
  (**(code **)(lVar8 + 0x68))
            (lVar7,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
             ,lVar1);
  lVar3 = lVar7;
  func_0x000104188018(lVar7,0,0);
  (**(code **)(lVar8 + 8))(lVar7,lVar1);
  pcStack_80 = FUN_101d46b34;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1015298e4;
  puStack_88 = &UNK_11047ae48;
  ppuVar4 = &puStack_a0;
  lStack_78 = lVar2;
  func_0x000107c60bc4(ppuVar4);
  lVar1 = lStack_78;
  func_0x000107c6157c(lVar2);
  func_0x000107c61574(lVar1);
  func_0x000107c436e0((float)param_1,uVar6);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar3);
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  uVar6 = uVar5;
  func_0x000107c6157c(uVar5);
  func_0x000103edf0bc();
  func_0x000107c61574(lVar2);
  func_0x000107c61574(uVar5);
  return uVar6;
}



/* Entry: 101d46ad8; end: 101d46b33;  */

void FUN_101d46ad8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46978(param_1);
  puStack_38 = puVar1;
  func_0x000100b60084(&puStack_38);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101d46b34; end: 101d46b3b;  */

void FUN_101d46b34(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46978(param_1);
  puStack_38 = puVar1;
  func_0x000100b60084(&puStack_38);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101d46b3c; end: 101d46b47; -[_TtC27SCMemPlatBackupServicesImpl21MemPlatBackupCofStore getFloatConfigWithConfigKey:defaultValue:] */

void FUN_101d46b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_101d468f8(param_1,param_4,param_3);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 101d46b48; end: 101d46bbf;  */

void FUN_101d46b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  (*param_5)(param_1,param_4,param_3);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 101d46bc0; end: 101d46dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_101d46bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  long lStack_68;
  
  lVar1 = 0;
  uStack_98 = param_2;
  func_0x000107c5f804();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112e28690,&UNK_10da109e8);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  puVar3 = PTR_PTR_1126af7d0;
  func_0x000107c610f8(PTR_PTR_1126af7d0);
  func_0x000107c453e4();
  func_0x000107c5ee20(param_3,param_4);
  func_0x000107c5a494(puVar3);
  func_0x000107c61170(param_3);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e28688);
  func_0x000107c5fadc(param_1,uStack_98);
  func_0x0001010415e8(0);
  (**(code **)(lVar9 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1);
  puVar4 = puVar7;
  func_0x000104188018(puVar7,0,0);
  (**(code **)(lVar9 + 8))(puVar7,lVar1);
  pcStack_70 = FUN_101d46eb4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101529f58;
  puStack_78 = &UNK_11047ae70;
  ppuVar5 = &puStack_90;
  lStack_68 = lVar2;
  func_0x000107c60bc4(ppuVar5);
  lVar1 = lStack_68;
  func_0x000107c6157c(lVar2);
  func_0x000107c61574(lVar1);
  func_0x000107c4f554(uVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar4);
  uVar6 = *(undefined8 *)(lVar2 + 0x10);
  uVar8 = uVar6;
  func_0x000107c6157c(uVar6);
  func_0x000103edf0bc();
  func_0x000107c61574(lVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61574(uVar6);
  return uVar8;
}



/* Entry: 101d46dd8; end: 101d46eb3;  */

void FUN_101d46dd8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puStack_38;
  
  func_0x000107c5dc0c();
  func_0x000107c61180();
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    puVar2 = puVar1;
    func_0x000107c5ee20(puVar1,param_2);
    puStack_38 = puVar2;
    func_0x000100b60084(&puStack_38);
    func_0x00010006c090(puVar1,param_2);
    func_0x000107c61170(puVar2);
    return;
  }
  FUN_101d4726c();
  puVar3 = &UNK_11047af40;
  func_0x000107c613f8(&UNK_11047af40,param_1,0,0);
  *param_1 = 0xd000000000000013;
  param_1[1] = 0x800000010f00e1c0;
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar3);
  return;
}



/* Entry: 101d46eb4; end: 101d46ebb;  */

void FUN_101d46eb4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  undefined8 *puStack_38;
  
  func_0x000107c5dc0c();
  func_0x000107c61180();
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    puVar2 = puVar1;
    func_0x000107c5ee20(puVar1,unaff_x20);
    puStack_38 = puVar2;
    func_0x000100b60084(&puStack_38);
    func_0x00010006c090(puVar1,unaff_x20);
    func_0x000107c61170(puVar2);
    return;
  }
  FUN_101d4726c();
  puVar3 = &UNK_11047af40;
  func_0x000107c613f8(&UNK_11047af40,param_1,0,0);
  *param_1 = 0xd000000000000013;
  param_1[1] = 0x800000010f00e1c0;
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar3);
  return;
}



/* Entry: 101d46ebc; end: 101d46f63; -[_TtC27SCMemPlatBackupServicesImpl21MemPlatBackupCofStore getByteArrayConfigWithConfigKey:defaultValue:] */

void FUN_101d46ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  uVar2 = param_2;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_4);
  func_0x000107c61170(uVar1);
  FUN_101d46bc0(param_3,param_2,param_4,uVar2);
  func_0x00010006c090(param_4,uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101d46f64; end: 101d47137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d46f64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d3bf08,&UNK_10d913340);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e28688);
  func_0x000107c5fadc(param_1,param_2);
  func_0x0001010415e8(0);
  (**(code **)(lVar8 + 0x68))
            (lVar7,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
             ,lVar1);
  lVar3 = lVar7;
  func_0x000104188018(lVar7,0,0);
  (**(code **)(lVar8 + 8))(lVar7,lVar1);
  pcStack_70 = FUN_101d4718c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100288f10;
  puStack_78 = &UNK_11047ae98;
  ppuVar4 = &puStack_90;
  lStack_68 = lVar2;
  func_0x000107c60bc4(ppuVar4);
  lVar1 = lStack_68;
  func_0x000107c6157c(lVar2);
  func_0x000107c61574(lVar1);
  func_0x000107c3ebd0(uVar6);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar3);
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  uVar6 = uVar5;
  func_0x000107c6157c(uVar5);
  func_0x000103edf0bc();
  func_0x000107c61574(lVar2);
  func_0x000107c61574(uVar5);
  return uVar6;
}



/* Entry: 101d47138; end: 101d4718b;  */

void FUN_101d47138(void)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  puStack_28 = puVar1;
  func_0x000100b60084(&puStack_28);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101d4718c; end: 101d47193;  */

void FUN_101d4718c(void)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  puStack_28 = puVar1;
  func_0x000100b60084(&puStack_28);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101d47194; end: 101d471ff; -[_TtC27SCMemPlatBackupServicesImpl21MemPlatBackupCofStore getBooleanConfigWithConfigKey:defaultValue:] */

void FUN_101d47194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101d46f64(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101d47200; end: 101d4725b; -[_TtC27SCMemPlatBackupServicesImpl21MemPlatBackupCofStore init] */

void FUN_101d47200(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupServicesImpl.MemPlatBackupCofStore",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d4722c);
  (*pcVar1)();
}



/* Entry: 101d4725c; end: 101d4726b; -[_TtC27SCMemPlatBackupServicesImpl21MemPlatBackupCofStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4725c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e28688));
  return;
}



/* Entry: 101d4726c; end: 101d472ab;  */

void FUN_101d4726c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e286c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da10a2c;
  func_0x000107c61520(&UNK_10da10a2c,&UNK_11047af40);
  puRam0000000112e286c0 = puVar1;
  return;
}



/* Entry: 101d472ac; end: 101d472b3;  */

void FUN_101d472ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101d472b4; end: 101d47323;  */

undefined8 * FUN_101d472b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101d47324; end: 101d473e7;  */

int FUN_101d47324(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101d473e8; end: 101d47417;  */

void FUN_101d473e8(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_101d47418(param_1);
  return;
}



/* Entry: 101d47418; end: 101d474cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101d47418(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  *(undefined8 *)(unaff_x20 + _DAT_112e286c8) = param_1;
  FUN_101d474d0();
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_1);
  func_0x000107c61154(&stack0xffffffffffffffc0,puVar3);
  puVar2 = puVar1;
  func_0x000107c308e8();
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c41570();
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61574(param_1);
  return puVar1;
}



/* Entry: 101d474d0; end: 101d474ef;  */

void FUN_101d474d0(void)

{
  func_0x000107c61168(&PTR_PTR_112803018);
  return;
}



/* Entry: 101d474f0; end: 101d47623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d474f0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  FUN_101d4804c(param_1);
  func_0x0001000d224c(&uStack_48);
  pcStack_58 = FUN_101d48478;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_100ff4e14;
  puStack_60 = &UNK_11047af78;
  ppuVar3 = &puStack_78;
  lStack_50 = lVar2;
  func_0x000107c60bc4(ppuVar3);
  lVar1 = lStack_50;
  func_0x000107c6157c(lVar2);
  func_0x000107c61574(lVar1);
  func_0x000107c518e4(uStack_48);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uStack_48);
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  uVar4 = uVar5;
  func_0x000107c6157c(uVar5);
  func_0x000103edf384();
  func_0x000107c61574(lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar5);
  return uVar4;
}



/* Entry: 101d47624; end: 101d47a77;  */

void FUN_101d47624(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [119];
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_1 == 0) {
    func_0x000100b60084();
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x12);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    func_0x000107c5fb78(0xd000000000000021,0x800000010da10a50);
    func_0x000107c5fb78(0x205d,0xe200000000000000);
    func_0x000107c5fb78(0xd000000000000020,0x800000010f00e360);
    func_0x000107c5fb78(0x20,0xe100000000000000);
    uStack_71 = 0;
    func_0x000107c603d0(&uStack_71,&uStack_70,&UNK_11047adb8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0x206874697720,0xe600000000000000);
    func_0x000107c5fb78(0x726f727265206f6e,0xe800000000000000);
    uVar1 = uStack_68;
    uVar2 = uStack_70;
    func_0x000107c5fadc(uStack_70,uStack_68);
    func_0x000107c6142c(uVar1);
    lVar3 = 0x112d39140;
    func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    uStack_70 = 0x6c6961746564;
    uStack_68 = 0xe600000000000000;
    func_0x000107c602d4(lVar3 + 0x20,&uStack_70,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    uVar1 = 0;
    func_0x0001007bbbf8();
    *(undefined8 *)(lVar3 + 0x60) = uVar1;
    *(undefined8 *)(lVar3 + 0x48) = uVar2;
    func_0x000107c61174(uVar2);
    lVar4 = lVar3;
    func_0x000100dfa3f0(lVar3);
    func_0x000107c61588(lVar3);
    func_0x000100e1766c(lVar3 + 0x20);
    lVar3 = lVar4;
    func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar4);
    uVar1 = 0xd000000000000044;
    func_0x000107c5fadc(0xd000000000000044,0x800000010f00e390);
    func_0x000107c2c4c0(0x40,lVar3,uVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar1);
  }
  else {
    func_0x000107c614b0();
    func_0x00010488ade0(param_1);
    func_0x000107c614cc(param_1,auStack_e8,auStack_100);
    uVar1 = uStack_f8;
    uVar5 = uStack_f0;
    func_0x000107c60640(uStack_f8,uStack_f0);
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x12);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    func_0x000107c5fb78(0xd000000000000021,0x800000010da10a50);
    func_0x000107c5fb78(0x205d,0xe200000000000000);
    func_0x000107c5fb78(0xd000000000000020,0x800000010f00e360);
    func_0x000107c5fb78(0x20,0xe100000000000000);
    uStack_71 = 1;
    func_0x000107c603d0(&uStack_71,&uStack_70,&UNK_11047adb8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0x206874697720,0xe600000000000000);
    func_0x000107c5fb78(uVar1,uVar5);
    uVar1 = uStack_68;
    uVar2 = uStack_70;
    func_0x000107c5fadc(uStack_70,uStack_68);
    func_0x000107c6142c(uVar1);
    lVar3 = 0x112d39140;
    func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    uStack_70 = 0x6c6961746564;
    uStack_68 = 0xe600000000000000;
    func_0x000107c602d4(lVar3 + 0x20,&uStack_70,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    uVar1 = 0;
    func_0x0001007bbbf8();
    *(undefined8 *)(lVar3 + 0x60) = uVar1;
    *(undefined8 *)(lVar3 + 0x48) = uVar2;
    func_0x000107c61174(uVar2);
    lVar4 = lVar3;
    func_0x000100dfa3f0(lVar3);
    func_0x000107c61588(lVar3);
    func_0x000100e1766c(lVar3 + 0x20);
    lVar3 = lVar4;
    func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar4);
    uVar1 = 0xd000000000000044;
    func_0x000107c5fadc(0xd000000000000044,0x800000010f00e390);
    func_0x000107c2c4c0(0x40,lVar3,uVar1);
    func_0x000107c6142c(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c614ac(param_1);
  }
  return;
}



/* Entry: 101d47a78; end: 101d47dbb; -[_TtC27SCMemPlatBackupServicesImpl33MemPlatBackupNotificatonScheduler scheduleLocalNotificationWithNotificationData:] */

void FUN_101d47a78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101d474f0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101d47dbc; end: 101d47de3; -[_TtC27SCMemPlatBackupServicesImpl33MemPlatBackupNotificatonScheduler removeBackupLocalNotifications] */

void FUN_101d47dbc(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101d47ad4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101d47de4; end: 101d47e3f; -[_TtC27SCMemPlatBackupServicesImpl33MemPlatBackupNotificatonScheduler init] */

void FUN_101d47de4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupServicesImpl.MemPlatBackupNotificatonScheduler",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d47e10);
  (*pcVar1)();
}



/* Entry: 101d47e40; end: 101d47e4f; -[_TtC27SCMemPlatBackupServicesImpl33MemPlatBackupNotificatonScheduler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d47e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e286c8));
  return;
}



/* Entry: 101d47e50; end: 101d48023;  */

/* WARNING: Possible PIC construction at 0x000101d48004: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d48008) */

void FUN_101d47e50(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  func_0x000107c308e8();
  if (param_1 != 0) {
    func_0x000107c308e8();
    if (param_1 == 1) {
      uVar5 = 0xef50554b4341425f;
      uVar6 = 0x534549524f4d454d;
      uVar3 = 0xd000000000000022;
      pcVar7 = "DATA_SAVER_SETTINGS";
    }
    else {
      func_0x000107c308e8();
      pcVar7 = "Dev Notificaiton Subtitle";
      uVar6 = 0xd000000000000010;
      if (param_1 == 2) {
        pcVar7 = " Saver Settings Page";
        uVar6 = 0xd000000000000013;
      }
      uVar5 = (ulong)pcVar7 | 0x8000000000000000;
      uVar3 = 0xd000000000000019;
      pcVar7 = "latBackupNotificatonScheduler";
      if (param_1 == 2) {
        uVar3 = 0xd000000000000024;
        pcVar7 = "MEMORIES_ALL_TAB";
      }
    }
    puVar1 = PTR_PTR_1126a9470;
    func_0x000107c610f8(PTR_PTR_1126a9470);
    uVar2 = 0x66746f4e20766544;
    func_0x000107c5fadc(0x66746f4e20766544,0xef6e6f6974616369);
    func_0x000107c5fadc(uVar3,(ulong)pcVar7 | 0x8000000000000000);
    func_0x000107c5fadc(uVar6,uVar5);
    uVar4 = 0x736569726f6d656d;
    func_0x000107c5fadc(0x736569726f6d656d,0xef70756b6361625f);
    func_0x000107c48d90(0x4008000000000000,puVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar4);
    FUN_101d474f0(puVar1);
    func_0x000107c61170();
    func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)((ulong)pcVar7 | 0x8000000000000000);
    return;
  }
  return;
}



/* Entry: 101d48024; end: 101d4804b; -[_TtC27SCMemPlatBackupServicesImpl33MemPlatBackupNotificatonScheduler appMovedToBackground] */

void FUN_101d48024(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101d47e50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101d4804c; end: 101d48477;  */

undefined * FUN_101d4804c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  undefined8 uVar13;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined **ppuStack_180;
  undefined1 *puStack_178;
  undefined1 auStack_170 [256];
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lStack_190 = *(long *)(lVar1 + -8);
  lStack_188 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_190 + 0x40));
  lStack_198 = (long)&lStack_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR__OBJC_CLASS___UNMutableNotificationContent_1126bc388;
  func_0x000107c610f8(PTR__OBJC_CLASS___UNMutableNotificationContent_1126bc388);
  func_0x000107c453e4();
  lVar1 = param_1;
  func_0x000107c5cab0();
  func_0x000107c61180();
  uVar6 = param_2;
  if (lVar1 == 0) {
    func_0x000107c5faec();
    uVar6 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c59e18(puVar2);
  func_0x000107c61170(lVar1);
  lVar1 = param_1;
  func_0x000107c5c38c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c52dcc(puVar2);
  func_0x000107c61170(lVar1);
  lVar1 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  puVar9 = auStack_170;
  func_0x000107c61534();
  uVar13 = 3;
  *(undefined8 *)(lVar1 + 0x18) = 6;
  *(undefined8 *)(lVar1 + 0x10) = 3;
  ppuVar3 = &PTR____CFConstantStringClassReference_110dad058;
  func_0x000107c5faec();
  ppuStack_180 = ppuVar3;
  puStack_178 = puVar9;
  func_0x000107c61434(puVar9);
  puVar8 = PTR___sSSSHsWP_11034da90;
  puVar7 = PTR___sSSN_11034da80;
  puVar10 = PTR___sSSN_11034da80;
  func_0x000107c602d4(lVar1 + 0x20,&ppuStack_180,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar4 = param_1;
  func_0x000107c5d0f0();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5faec();
  puVar11 = puVar10;
  lStack_1a0 = param_1;
  func_0x000107c61170(lVar4);
  *(undefined **)(lVar1 + 0x60) = puVar7;
  *(long *)(lVar1 + 0x48) = lVar5;
  *(undefined **)(lVar1 + 0x50) = puVar10;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f9eef8;
  func_0x000107c5faec();
  ppuStack_180 = ppuVar3;
  puStack_178 = puVar11;
  func_0x000107c61434(puVar11);
  puVar10 = puVar7;
  func_0x000107c602d4(lVar1 + 0x68,&ppuStack_180,puVar7,puVar8);
  *(undefined **)(lVar1 + 0xa8) = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar1 + 0x90) = 1;
  ppuVar3 = &PTR____CFConstantStringClassReference_110e12eb8;
  func_0x000107c5faec();
  ppuStack_180 = ppuVar3;
  puStack_178 = puVar10;
  func_0x000107c61434(puVar10);
  puVar12 = puVar7;
  func_0x000107c602d4(lVar1 + 0xb0,&ppuStack_180,puVar7,puVar8);
  func_0x000107c4e29c();
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  *(undefined **)(lVar1 + 0xf0) = puVar7;
  func_0x000107c6142c(puVar9);
  func_0x000107c6142c(puVar11);
  func_0x000107c6142c(puVar10);
  *(long *)(lVar1 + 0xd8) = lVar4;
  *(undefined **)(lVar1 + 0xe0) = puVar12;
  lVar4 = lVar1;
  func_0x000100dfa3f0(lVar1);
  func_0x000107c61588(lVar1);
  uVar6 = 0x112d377a0;
  func_0x0001000285a8(0x112d377a0,&UNK_10d9016e0);
  func_0x000107c61408(lVar1 + 0x20,3,uVar6);
  lVar1 = lVar4;
  puVar10 = PTR___ss11AnyHashableVN_11034e448;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  func_0x000107c5a360(puVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c51b30(lStack_1a0);
  puVar7 = PTR__OBJC_CLASS___UNTimeIntervalNotificationTrigger_1126ca420;
  func_0x000107c61168(PTR__OBJC_CLASS___UNTimeIntervalNotificationTrigger_1126ca420);
  func_0x000107c5d030(uVar13);
  func_0x000107c61180();
  lVar1 = lStack_198;
  puVar8 = puVar7;
  func_0x000107c5eec4(lStack_198);
  func_0x000107c5eeac();
  (**(code **)(lStack_190 + 8))(lVar1,lStack_188);
  ppuStack_180 = (undefined **)0x6e2d70756b636162;
  puStack_178 = (undefined1 *)0xec0000006669746f;
  func_0x000107c5fb78(puVar8,puVar10);
  func_0x000107c6142c(puVar10);
  puVar9 = puStack_178;
  ppuVar3 = ppuStack_180;
  func_0x000107c61174(puVar2);
  func_0x000107c61174(puVar7);
  func_0x000107c5fadc(ppuVar3,puVar9);
  func_0x000107c6142c(puVar9);
  puVar8 = PTR__OBJC_CLASS___UNNotificationRequest_1126bc390;
  func_0x000107c61168(PTR__OBJC_CLASS___UNNotificationRequest_1126bc390);
  func_0x000107c50454();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(ppuVar3);
  return puVar8;
}



/* Entry: 101d48478; end: 101d484a3;  */

void FUN_101d48478(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [119];
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_1 == 0) {
    func_0x000100b60084();
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x12);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    func_0x000107c5fb78(0xd000000000000021,0x800000010da10a50);
    func_0x000107c5fb78(0x205d,0xe200000000000000);
    func_0x000107c5fb78(0xd000000000000020,0x800000010f00e360);
    func_0x000107c5fb78(0x20,0xe100000000000000);
    uStack_71 = 0;
    func_0x000107c603d0(&uStack_71,&uStack_70,&UNK_11047adb8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0x206874697720,0xe600000000000000);
    func_0x000107c5fb78(0x726f727265206f6e,0xe800000000000000);
    uVar1 = uStack_68;
    uVar2 = uStack_70;
    func_0x000107c5fadc(uStack_70,uStack_68);
    func_0x000107c6142c(uVar1);
    lVar3 = 0x112d39140;
    func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    uStack_70 = 0x6c6961746564;
    uStack_68 = 0xe600000000000000;
    func_0x000107c602d4(lVar3 + 0x20,&uStack_70,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    uVar1 = 0;
    func_0x0001007bbbf8();
    *(undefined8 *)(lVar3 + 0x60) = uVar1;
    *(undefined8 *)(lVar3 + 0x48) = uVar2;
    func_0x000107c61174(uVar2);
    lVar4 = lVar3;
    func_0x000100dfa3f0(lVar3);
    func_0x000107c61588(lVar3);
    func_0x000100e1766c(lVar3 + 0x20);
    lVar3 = lVar4;
    func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar4);
    uVar1 = 0xd000000000000044;
    func_0x000107c5fadc(0xd000000000000044,0x800000010f00e390);
    func_0x000107c2c4c0(0x40,lVar3,uVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar1);
  }
  else {
    func_0x000107c614b0();
    func_0x00010488ade0(param_1);
    func_0x000107c614cc(param_1,auStack_e8,auStack_100);
    uVar1 = uStack_f8;
    uVar5 = uStack_f0;
    func_0x000107c60640(uStack_f8,uStack_f0);
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x12);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    func_0x000107c5fb78(0xd000000000000021,0x800000010da10a50);
    func_0x000107c5fb78(0x205d,0xe200000000000000);
    func_0x000107c5fb78(0xd000000000000020,0x800000010f00e360);
    func_0x000107c5fb78(0x20,0xe100000000000000);
    uStack_71 = 1;
    func_0x000107c603d0(&uStack_71,&uStack_70,&UNK_11047adb8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0x206874697720,0xe600000000000000);
    func_0x000107c5fb78(uVar1,uVar5);
    uVar1 = uStack_68;
    uVar2 = uStack_70;
    func_0x000107c5fadc(uStack_70,uStack_68);
    func_0x000107c6142c(uVar1);
    lVar3 = 0x112d39140;
    func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    uStack_70 = 0x6c6961746564;
    uStack_68 = 0xe600000000000000;
    func_0x000107c602d4(lVar3 + 0x20,&uStack_70,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    uVar1 = 0;
    func_0x0001007bbbf8();
    *(undefined8 *)(lVar3 + 0x60) = uVar1;
    *(undefined8 *)(lVar3 + 0x48) = uVar2;
    func_0x000107c61174(uVar2);
    lVar4 = lVar3;
    func_0x000100dfa3f0(lVar3);
    func_0x000107c61588(lVar3);
    func_0x000100e1766c(lVar3 + 0x20);
    lVar3 = lVar4;
    func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar4);
    uVar1 = 0xd000000000000044;
    func_0x000107c5fadc(0xd000000000000044,0x800000010f00e390);
    func_0x000107c2c4c0(0x40,lVar3,uVar1);
    func_0x000107c6142c(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c614ac(param_1);
  }
  return;
}



/* Entry: 101d484a4; end: 101d4853f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d484a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112e286f8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112e28700) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e28708) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e28710) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e28718) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101d48540; end: 101d485cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d48540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112e286f8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112e28700) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e28708) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e28710) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e28718) = param_4;
  func_0x000101d485b0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101d485d0; end: 101d4864b;  */

void FUN_101d485d0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c3d7bc();
  func_0x000107c3d7bc(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101d4864c; end: 101d486a7; -[_TtC27SCMemPlatBackupServicesImpl30MemPlatBackupRuntimeConditions init] */

void FUN_101d4864c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupServicesImpl.MemPlatBackupRuntimeConditions",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d48678);
  (*pcVar1)();
}



/* Entry: 101d486a8; end: 101d486ff; -[_TtC27SCMemPlatBackupServicesImpl30MemPlatBackupRuntimeConditions .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101d486c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d486e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d486c8) */
/* WARNING: Removing unreachable block (ram,0x000101d486e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d486a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e28700));
  return;
}



/* Entry: 101d48700; end: 101d4878b; -[_TtC27SCMemPlatBackupServicesImpl30MemPlatBackupRuntimeConditions getDeviceNetworkState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101d48700(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112e28710);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61170(param_1);
  }
  else {
    lVar1 = lVar2;
    func_0x000107c40244();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
    if (lVar1 + 1U < 6) {
      return *(undefined4 *)(&UNK_10da10ac4 + (lVar1 + 1U) * 4);
    }
  }
  return 0;
}


