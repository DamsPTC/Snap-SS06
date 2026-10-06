/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014f92b8; end: 1014f931b;  */

/* WARNING: Possible PIC construction at 0x0001014f92cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014f92d0) */

void FUN_1014f92b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1014f931c; end: 1014f937f;  */

undefined8 * FUN_1014f931c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1014f9380; end: 1014f93c3;  */

undefined8 * FUN_1014f9380(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1014f93c4; end: 1014f945b;  */

int FUN_1014f93c4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1014f945c; end: 1014f949b;  */

/* WARNING: Possible PIC construction at 0x0001014f9470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014f9480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014f9474) */
/* WARNING: Removing unreachable block (ram,0x0001014f9484) */

void FUN_1014f945c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1014f949c; end: 1014f9517;  */

undefined8 * FUN_1014f949c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 1014f9518; end: 1014f95e3;  */

undefined8 * FUN_1014f9518(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1014f95e4; end: 1014f9657;  */

undefined8 * FUN_1014f95e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1014f9658; end: 1014f9703;  */

int FUN_1014f9658(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1014f9704; end: 1014f974b;  */

/* WARNING: Possible PIC construction at 0x0001014f9718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014f9728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014f9738: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014f972c) */
/* WARNING: Removing unreachable block (ram,0x0001014f971c) */
/* WARNING: Removing unreachable block (ram,0x0001014f973c) */

void FUN_1014f9704(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1014f974c; end: 1014f97df;  */

undefined8 * FUN_1014f974c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  param_1[0xc] = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  return param_1;
}



/* Entry: 1014f97e0; end: 1014f98d3;  */

undefined8 * FUN_1014f97e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xc] = param_2[0xc];
  return param_1;
}



/* Entry: 1014f98d4; end: 1014f995f;  */

undefined8 * FUN_1014f98d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[0xc] = param_2[0xc];
  return param_1;
}



/* Entry: 1014f9960; end: 1014f9a2f;  */

int FUN_1014f9960(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1014f9a30; end: 1014f9bff;  */

void FUN_1014f9a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1014f9c00; end: 1014f9c07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014f9c00(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_1014f00ac();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112daaec8) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1014f9c08; end: 1014f9c33;  */

void FUN_1014f9c08(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014f9c34; end: 1014f9c53;  */

void FUN_1014f9c34(void)

{
  func_0x0001014f9aa4();
  return;
}



/* Entry: 1014f9c54; end: 1014f9c5b;  */

undefined8 FUN_1014f9c54(void)

{
  return 0;
}



/* Entry: 1014f9c5c; end: 1014f9c7b;  */

void FUN_1014f9c5c(void)

{
  func_0x000107c61168(&PTR_PTR_112dab750);
  return;
}



/* Entry: 1014f9c7c; end: 1014f9cdf; -[_TtC14SIGCodematizer34SIGCodematizerExportViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014f9c7c(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112dab7f8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SIGCodematizer/SIGCodematizerExportViewController.swift",0x37,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014f9ce0);
  (*pcVar1)();
}



/* Entry: 1014f9ce0; end: 1014fa277;  */

/* WARNING: Possible PIC construction at 0x0001014f9e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014f9e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014f9e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014f9e5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014f9f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014f9f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014f9fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014fa018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014fa048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014fa068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014fa090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014fa0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014fa0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014fa108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014fa138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014fa158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014fa180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014fa1c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014fa1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014fa22c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014fa23c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014fa230) */
/* WARNING: Removing unreachable block (ram,0x0001014fa1e4) */
/* WARNING: Removing unreachable block (ram,0x0001014fa1c4) */
/* WARNING: Removing unreachable block (ram,0x0001014fa184) */
/* WARNING: Removing unreachable block (ram,0x0001014fa274) */
/* WARNING: Removing unreachable block (ram,0x0001014fa198) */
/* WARNING: Removing unreachable block (ram,0x0001014fa15c) */
/* WARNING: Removing unreachable block (ram,0x0001014fa13c) */
/* WARNING: Removing unreachable block (ram,0x0001014fa10c) */
/* WARNING: Removing unreachable block (ram,0x0001014fa270) */
/* WARNING: Removing unreachable block (ram,0x0001014fa120) */
/* WARNING: Removing unreachable block (ram,0x0001014fa0e4) */
/* WARNING: Removing unreachable block (ram,0x0001014fa0c4) */
/* WARNING: Removing unreachable block (ram,0x0001014fa094) */
/* WARNING: Removing unreachable block (ram,0x0001014fa26c) */
/* WARNING: Removing unreachable block (ram,0x0001014fa0a8) */
/* WARNING: Removing unreachable block (ram,0x0001014fa06c) */
/* WARNING: Removing unreachable block (ram,0x0001014fa04c) */
/* WARNING: Removing unreachable block (ram,0x0001014fa01c) */
/* WARNING: Removing unreachable block (ram,0x0001014fa268) */
/* WARNING: Removing unreachable block (ram,0x0001014fa030) */
/* WARNING: Removing unreachable block (ram,0x0001014f9fac) */
/* WARNING: Removing unreachable block (ram,0x0001014f9f98) */
/* WARNING: Removing unreachable block (ram,0x0001014f9f50) */
/* WARNING: Removing unreachable block (ram,0x0001014fa264) */
/* WARNING: Removing unreachable block (ram,0x0001014f9f64) */
/* WARNING: Removing unreachable block (ram,0x0001014f9e60) */
/* WARNING: Removing unreachable block (ram,0x0001014f9e50) */
/* WARNING: Removing unreachable block (ram,0x0001014f9e40) */
/* WARNING: Removing unreachable block (ram,0x0001014f9e30) */
/* WARNING: Removing unreachable block (ram,0x0001014fa240) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014f9ce0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dab7f0);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112dab7f0))[1];
  puVar3 = PTR_PTR_1126a7588;
  func_0x000107c610f8(PTR_PTR_1126a7588);
  uVar4 = 0x6974616d65646f43;
  func_0x000107c5fadc(0x6974616d65646f43,0xeb0000000072657a);
  func_0x000107c5fadc(0x7270206b63697551,0xed00007765697665);
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef896b0);
  func_0x000107c5fadc(0xd000000000000029,0x800000010ef896d0);
  func_0x000107c5fadc(0x622074726f707845,0xed0000656c646e75);
  func_0x000107c5fadc(0x79706f43,0xe400000000000000);
  func_0x000107c48d60(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1014fa278; end: 1014fa32b; -[_TtC14SIGCodematizer34SIGCodematizerExportViewController viewDidLoad] */

void FUN_1014fa278(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar3 = PTR_s_viewDidLoad_112684cd8;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar3);
  lVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5c5e8();
    func_0x000107c61180();
    func_0x000107c52b50(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    FUN_1014f9ce0();
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014fa32c);
  (*pcVar1)();
}



/* Entry: 1014fa32c; end: 1014fa37f;  */

void FUN_1014fa32c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1014fa380();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1014fa380; end: 1014fa477;  */

/* WARNING: Possible PIC construction at 0x0001014fa3e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014fa424: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014fa3e8) */
/* WARNING: Removing unreachable block (ram,0x0001014fa460) */
/* WARNING: Removing unreachable block (ram,0x0001014fa468) */
/* WARNING: Removing unreachable block (ram,0x0001014fa3f0) */
/* WARNING: Removing unreachable block (ram,0x0001014fa3f8) */
/* WARNING: Removing unreachable block (ram,0x0001014fa43c) */
/* WARNING: Removing unreachable block (ram,0x0001014fa408) */
/* WARNING: Removing unreachable block (ram,0x0001014fa428) */

void FUN_1014fa380(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c4d508();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c5de94();
    func_0x000107c61180();
    uVar1 = 0;
    FUN_1014fb31c(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c5fc54(unaff_x20,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1014fa478; end: 1014fa5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014fa478(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_1;
    }
    uVar12 = 0;
    if (uVar1 != 0) {
      uVar12 = param_2;
    }
    uVar10 = *(undefined8 *)(param_3 + _DAT_112dab7b8);
    uVar3 = *(undefined8 *)(param_3 + _DAT_112dab7c8);
    uVar6 = ((undefined8 *)(param_3 + _DAT_112dab7c8))[1];
    uVar4 = *(undefined8 *)(param_3 + _DAT_112dab7d0);
    uVar7 = ((undefined8 *)(param_3 + _DAT_112dab7d0))[1];
    uVar5 = *(undefined8 *)(param_3 + _DAT_112dab7d8);
    uVar8 = ((undefined8 *)(param_3 + _DAT_112dab7d8))[1];
    uVar11 = *(undefined8 *)(param_3 + _DAT_112dab7e0);
    puVar9 = &UNK_1103d3bc0;
    func_0x000107c613fc(&UNK_1103d3bc0,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,param_3);
    func_0x000107c6157c(puVar9);
    func_0x0001014ef018(uVar3,uVar6,uVar2,uVar12,uVar4,uVar7,uVar5,uVar8,uVar11,0x1014fb1e4,puVar9,
                        uVar12,uVar10);
    func_0x000107c61170(param_3);
    func_0x000107c61578(puVar9,2);
  }
  return;
}



/* Entry: 1014fa5c8; end: 1014fa66f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014fa5c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
    func_0x000107c61168(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
    func_0x000107c43d80();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112dab7f0);
    func_0x000107c5fadc(uVar2,((undefined8 *)(param_1 + _DAT_112dab7f0))[1]);
    func_0x000107c59a00(puVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1014fa670; end: 1014fa74b;  */

void FUN_1014fa670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_1103d3c60;
  func_0x000107c613fc(&UNK_1103d3c60,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  uStack_50 = 0x1014fb1ec;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103d3c78;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_4);
  func_0x000107c614b0(param_3);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar1);
  func_0x000100162d98("SIGCodematizerExportViewController.exportCompletion",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1014fa74c; end: 1014fab1f;  */

void FUN_1014fa74c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  ulong uVar11;
  long extraout_x12;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar1 + -8);
  lVar14 = *(long *)(lVar16 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = auStack_d0 + -(lVar14 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)puVar13 - extraout_x12;
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (param_2 == 0) {
      if (param_4 != 0) {
        func_0x000107c5ed80(lVar12,param_3,param_4);
        lVar4 = 0x112d38dc0;
        func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
        func_0x000107c613fc();
        *(undefined8 *)(lVar4 + 0x18) = 2;
        *(undefined8 *)(lVar4 + 0x10) = 1;
        *(long *)(lVar4 + 0x38) = lVar1;
        func_0x0001000a9d90(lVar4 + 0x20);
        pcVar17 = *(code **)(lVar16 + 0x10);
        (*pcVar17)();
        puVar5 = PTR_PTR_1126aeb08;
        func_0x000107c610f8(PTR_PTR_1126aeb08);
        lVar6 = lVar4;
        func_0x000107c5fc48(lVar4,PTR___sypN_11034f1a8 + 8);
        func_0x000107c61574(lVar4);
        func_0x000107c4555c(puVar5);
        func_0x000107c61170(lVar6);
        puVar7 = &UNK_1103d3bc0;
        func_0x000107c613fc(&UNK_1103d3bc0,0x18,7);
        func_0x000107c61614(puVar7 + 0x10,param_1);
        (*pcVar17)(puVar13,lVar12,lVar1);
        uVar11 = (ulong)*(byte *)(lVar16 + 0x50);
        uVar15 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
        uVar18 = lVar14 + uVar15 + 7 & 0xfffffffffffffff8;
        puVar8 = &UNK_1103d3cb0;
        func_0x000107c613fc(&UNK_1103d3cb0,uVar18 + 8,uVar11 | 7);
        (**(code **)(lVar16 + 0x20))(puVar8 + uVar15,puVar13,lVar1);
        *(undefined **)(puVar8 + uVar18) = puVar7;
        pcStack_88 = FUN_1014fb1f8;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        pcStack_98 = FUN_1014fada0;
        puStack_90 = &UNK_1103d3cc8;
        ppuVar9 = &puStack_a8;
        puStack_80 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        puVar7 = puStack_80;
        func_0x000107c61174(puVar5);
        func_0x000107c61574(puVar7);
        func_0x000107c5363c(puVar5);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61170(puVar5);
        func_0x000107c4f018(param_1);
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar5);
        (**(code **)(lVar16 + 8))(lVar12,lVar1);
        return;
      }
    }
    else {
      func_0x000107c614cc(param_2,auStack_b0,auStack_c8);
      func_0x000107c614b0(param_2);
      uVar3 = uStack_c0;
      uVar10 = uStack_b8;
      func_0x000107c60640(uStack_c0,uStack_b8);
      uVar2 = 0x462074726f707845;
      func_0x000107c5fadc(0x462074726f707845,0xed000064656c6961);
      func_0x000107c5fadc(uVar3,uVar10);
      func_0x000107c6142c(uVar10);
      puVar7 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
      func_0x000107c61168(PTR__OBJC_CLASS___UIAlertController_1126aeb78);
      func_0x000107c3dac0();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
      uVar3 = 0x4b4f;
      func_0x000107c5fadc(0x4b4f,0xe200000000000000);
      puVar8 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
      func_0x000107c61168(PTR__OBJC_CLASS___UIAlertAction_1126aeb80);
      func_0x000107c3cffc();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      func_0x000107c3d598(puVar7);
      func_0x000107c61170(puVar8);
      func_0x000107c4f018(param_1);
      func_0x000107c61170(puVar7);
      func_0x000107c614ac(param_2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1014fab20; end: 1014fac63;  */

void FUN_1014fab20(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 in_x4;
  undefined8 in_x5;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  lVar5 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)&puStack_80 - (lVar5 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(lVar7,in_x4,lVar1);
  uVar4 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  uVar6 = lVar5 + uVar9 + 7 & 0xfffffffffffffff8;
  puVar2 = &UNK_1103d3d00;
  func_0x000107c613fc(&UNK_1103d3d00,uVar6 + 8,uVar4 | 7);
  (**(code **)(lVar8 + 0x20))(puVar2 + uVar9,lVar7,lVar1);
  *(undefined8 *)(puVar2 + uVar6) = in_x5;
  pcStack_60 = FUN_1014fb2dc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1103d3d18;
  ppuVar3 = &puStack_80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_58;
  func_0x000107c6157c(in_x5);
  func_0x000107c61574(puVar2);
  func_0x000100162d98("SIGCodematizerExportViewController.cleanup",ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1014fac64; end: 1014fad9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014fac64(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5ed90();
  auStack_50[0] = 0;
  puVar4 = puVar2;
  func_0x000107c4ff50();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  uVar10 = auStack_50[0];
  if ((int)puVar4 == 0) {
    uVar5 = auStack_50[0];
    func_0x000107c61174(auStack_50[0]);
    func_0x000107c5ed30();
    func_0x000107c61170(uVar5);
    func_0x000107c61654();
    func_0x000107c614ac(uVar10);
  }
  else {
    func_0x000107c61174(auStack_50[0]);
  }
  puVar9 = auStack_50;
  uVar10 = 0;
  lVar11 = 0;
  func_0x000107c61428(param_2 + 0x10,puVar9,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar6 = 0;
  if (param_2 != 0) {
    pcVar1 = *(code **)(param_2 + _DAT_112dab7e8);
    lVar6 = ((undefined8 *)(param_2 + _DAT_112dab7e8))[1];
    func_0x000107c6157c(lVar6);
    func_0x000107c61170(param_2);
    (*pcVar1)();
    func_0x000107c61574();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  pcVar1 = *(code **)(lVar6 + 0x20);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    func_0x000107c5fc54(lVar11,PTR___sypN_11034f1a8 + 8);
  }
  func_0x000107c6157c(uVar5);
  puVar7 = puVar9;
  func_0x000107c61174(puVar9);
  uVar8 = param_5;
  func_0x000107c61174(param_5);
  (*pcVar1)(puVar9,uVar10,lVar11,param_5);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar11);
  return;
}



/* Entry: 1014fada0; end: 1014fae53;  */

void FUN_1014fada0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5fc54(param_4,PTR___sypN_11034f1a8 + 8);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  uVar4 = param_5;
  func_0x000107c61174(param_5);
  (*pcVar1)(param_2,param_3,param_4,param_5);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1014fae54; end: 1014faeb3; -[_TtC14SIGCodematizer34SIGCodematizerExportViewController initWithNibName:bundle:] */

void FUN_1014fae54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SIGCodematizer.SIGCodematizerExportViewController",0x31,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014fae80);
  (*pcVar1)();
}



/* Entry: 1014faeb4; end: 1014faf6f; -[_TtC14SIGCodematizer34SIGCodematizerExportViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014faed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014faf2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014faed4) */
/* WARNING: Removing unreachable block (ram,0x0001014faf30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014faeb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dab7b8));
  return;
}



/* Entry: 1014faf70; end: 1014faf8f;  */

void FUN_1014faf70(void)

{
  func_0x000107c61168(&PTR_PTR_1127dd130);
  return;
}



/* Entry: 1014faf90; end: 1014fafa7;  */

void FUN_1014faf90(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1014fa380();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1014fafa8; end: 1014fb0cf;  */

undefined8
FUN_1014fafa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar4 = &puStack_f0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1103d3bd8;
  ppuVar2 = &puStack_90;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000107c60bc4(ppuVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  pcStack_b0 = FUN_100c75f50;
  puStack_a8 = &UNK_1103d3c00;
  ppuVar3 = &puStack_c0;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  func_0x000107c60bc4(ppuVar3);
  puStack_f0 = puVar1;
  uStack_e8 = 0x42000000;
  puStack_e0 = &UNK_1000f6b44;
  puStack_d8 = &UNK_1103d3c28;
  uStack_d0 = param_5;
  uStack_c8 = param_6;
  func_0x000107c60bc4(&puStack_f0);
  func_0x000107c47c0c();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_68);
  return unaff_x20;
}



/* Entry: 1014fb0d0; end: 1014fb12b;  */

void FUN_1014fb0d0(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x0001014fcd40();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112dab828;
  plVar5 = (long *)&UNK_10d953aa0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1014fb12c; end: 1014fb14f;  */

void FUN_1014fb12c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112da9a18;
  plVar5 = (long *)&UNK_10d953a90;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1014fb31c(0,0x112d6d848,&PTR_PTR_1126b9fa8);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1014fb150; end: 1014fb1c7;  */

void FUN_1014fb150(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1014fb31c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1014fb1c8; end: 1014fb1f7;  */

void FUN_1014fb1c8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1014fb1f8; end: 1014fb26f;  */

void FUN_1014fb1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  uVar4 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xffffffffffffff8));
  lVar3 = 0;
  func_0x000107c5ede0(0,param_2,param_3,param_4);
  lVar9 = *(long *)(lVar3 + -8);
  lVar6 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)&puStack_80 - (lVar6 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar9 + 0x10))(lVar8,unaff_x20 + uVar5,lVar3);
  uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar10 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  uVar7 = lVar6 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar1 = &UNK_1103d3d00;
  func_0x000107c613fc(&UNK_1103d3d00,uVar7 + 8,uVar5 | 7);
  (**(code **)(lVar9 + 0x20))(puVar1 + uVar10,lVar8,lVar3);
  *(undefined8 *)(puVar1 + uVar7) = uVar4;
  pcStack_60 = FUN_1014fb2dc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1103d3d18;
  ppuVar2 = &puStack_80;
  puStack_58 = puVar1;
  func_0x000107c60bc4(ppuVar2);
  puVar1 = puStack_58;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(puVar1);
  func_0x000100162d98("SIGCodematizerExportViewController.cleanup",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1014fb270; end: 1014fb2db;  */

void FUN_1014fb270(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  lVar4 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + (lVar4 + uVar3 + 7 & 0xfffffffffffffff8)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014fb2dc; end: 1014fb31b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014fb2dc(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 in_x4;
  ulong uVar13;
  long unaff_x20;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  lVar9 = 0;
  func_0x000107c5ede0();
  uVar13 = (ulong)*(byte *)(*(long *)(lVar9 + -8) + 0x50);
  lVar9 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar9 + -8) + 0x40) +
                    (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)) + 7 & 0xffffffffffffff8));
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5ed90();
  auStack_50[0] = 0;
  puVar4 = puVar2;
  func_0x000107c4ff50();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  uVar11 = auStack_50[0];
  if ((int)puVar4 == 0) {
    uVar5 = auStack_50[0];
    func_0x000107c61174(auStack_50[0]);
    func_0x000107c5ed30();
    func_0x000107c61170(uVar5);
    func_0x000107c61654();
    func_0x000107c614ac(uVar11);
  }
  else {
    func_0x000107c61174(auStack_50[0]);
  }
  puVar10 = auStack_50;
  uVar11 = 0;
  lVar12 = 0;
  func_0x000107c61428(lVar9 + 0x10,puVar10,0);
  lVar9 = lVar9 + 0x10;
  func_0x000107c61618();
  lVar6 = 0;
  if (lVar9 != 0) {
    pcVar1 = *(code **)(lVar9 + _DAT_112dab7e8);
    lVar6 = ((undefined8 *)(lVar9 + _DAT_112dab7e8))[1];
    func_0x000107c6157c(lVar6);
    func_0x000107c61170(lVar9);
    (*pcVar1)();
    func_0x000107c61574();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  pcVar1 = *(code **)(lVar6 + 0x20);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  if (lVar12 == 0) {
    lVar12 = 0;
  }
  else {
    func_0x000107c5fc54(lVar12,PTR___sypN_11034f1a8 + 8);
  }
  func_0x000107c6157c(uVar5);
  puVar7 = puVar10;
  func_0x000107c61174(puVar10);
  uVar8 = in_x4;
  func_0x000107c61174(in_x4);
  (*pcVar1)(puVar10,uVar11,lVar12,in_x4);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar12);
  return;
}



/* Entry: 1014fb31c; end: 1014fb35b;  */

void FUN_1014fb31c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1014fb35c; end: 1014fb383;  */

void FUN_1014fb35c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1014fb384; end: 1014fc8ff;  */

undefined1  [16] FUN_1014fb384(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  long unaff_x20;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  uVar15 = param_1;
  FUN_1014fc900();
  if ((uVar15 & 1) != 0) {
    uVar15 = *(ulong *)(unaff_x20 + 0x100);
    if (uVar15 >> 0x3e == 0) {
      uVar19 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar19 = uVar15 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar15) {
        uVar19 = uVar15;
      }
      func_0x000107c60480();
    }
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar19 != 0) {
      puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100403514(0,uVar19 & ((long)uVar19 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014fbbb4);
        (*pcVar1)();
      }
      uVar17 = 0;
      do {
        puVar4 = puStack_a0;
        uVar18 = uVar15;
        if ((uVar15 & 0xc000000000000001) == 0) {
          uVar16 = *(ulong *)(uVar15 + uVar17 * 8 + 0x20);
          func_0x000107c6157c(uVar16);
        }
        else {
          uVar16 = uVar17;
          FUN_1014fcf1c(uVar17);
        }
        uVar2 = param_1;
        FUN_1014fb384();
        func_0x000107c61574(uVar16);
        uVar16 = *(ulong *)(puVar4 + 0x10);
        puStack_a0 = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar16) {
          func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar16 + 1,1);
        }
        uVar17 = uVar17 + 1;
        *(ulong *)(puStack_a0 + 0x10) = uVar16 + 1;
        *(ulong *)(puStack_a0 + uVar16 * 0x10 + 0x20) = uVar2;
        *(ulong *)(puStack_a0 + uVar16 * 0x10 + 0x28) = uVar18;
        puVar4 = puStack_a0;
      } while (uVar19 != uVar17);
    }
    uVar10 = 0x112d38270;
    puStack_a0 = puVar4;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar7 = uVar10;
    func_0x00010011d734();
    uVar6 = 10;
    uVar12 = 0xe100000000000000;
    func_0x000107c5fa80(10,0xe100000000000000,uVar10,uVar7);
    goto LAB_1014fbb84;
  }
  puVar3 = (undefined *)0x2020;
  uVar10 = 0xe200000000000000;
  func_0x000107c5fbc0(0x2020,0xe200000000000000,param_1);
  puVar4 = (undefined *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  puVar14 = puVar4;
  func_0x000107c613fc();
  *(undefined8 *)(puVar14 + 0x18) = 2;
  *(undefined8 *)(puVar14 + 0x10) = 1;
  puStack_a0 = puVar3;
  uStack_98 = uVar10;
  func_0x000107c5fb78(0x202d,0xe200000000000000);
  puVar3 = *(undefined **)(unaff_x20 + 0x10);
  func_0x000107c5fb78(puVar3,*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined **)(puVar14 + 0x20) = puStack_a0;
  *(undefined8 *)(puVar14 + 0x28) = uStack_98;
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    puVar3 = *(undefined **)(unaff_x20 + 0x30);
    puStack_a0 = (undefined *)0x203a6376;
    uStack_98 = 0xe400000000000000;
    puStack_70 = puVar14;
    func_0x000107c5fb78();
    uVar10 = uStack_98;
    puVar9 = puStack_a0;
    uVar15 = *(ulong *)(puVar14 + 0x10);
    if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar15) {
      puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
      func_0x0001000d182c(puVar3,uVar15 + 1,1,puVar14);
      puVar14 = puVar3;
    }
    *(ulong *)(puVar14 + 0x10) = uVar15 + 1;
    *(undefined **)(puVar14 + uVar15 * 0x10 + 0x20) = puVar9;
    *(undefined8 *)(puVar14 + uVar15 * 0x10 + 0x28) = uVar10;
  }
  puStack_70 = puVar14;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    puVar3 = *(undefined **)(unaff_x20 + 0x20);
    puStack_a0 = (undefined *)0x203a656c75646f6d;
    uStack_98 = 0xe800000000000000;
    func_0x000107c5fb78();
    uVar10 = uStack_98;
    puVar9 = puStack_a0;
    uVar15 = *(ulong *)(puVar14 + 0x10);
    if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar15) {
      puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
      func_0x0001000d182c(puVar3,uVar15 + 1,1,puVar14);
      puVar14 = puVar3;
    }
    *(ulong *)(puVar14 + 0x10) = uVar15 + 1;
    *(undefined **)(puVar14 + uVar15 * 0x10 + 0x20) = puVar9;
    *(undefined8 *)(puVar14 + uVar15 * 0x10 + 0x28) = uVar10;
    puStack_70 = puVar14;
  }
  puVar14 = puStack_70;
  uVar15 = *(ulong *)(unaff_x20 + 0x48);
  if (uVar15 != 0) {
    puVar3 = *(undefined **)(unaff_x20 + 0x40);
    uVar19 = (ulong)puVar3 & 0xffffffffffff;
    if ((uVar15 & 0x2000000000000000) != 0) {
      uVar19 = uVar15 >> 0x38 & 0xf;
    }
    if (uVar19 != 0) {
      puStack_a0 = (undefined *)0x203a6469;
      uStack_98 = 0xe400000000000000;
      func_0x000107c5fb78();
      uVar10 = uStack_98;
      puVar9 = puStack_a0;
      uVar15 = *(ulong *)(puVar14 + 0x10);
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar15) {
        puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
        func_0x0001000d182c(puVar3,uVar15 + 1,1,puVar14);
        puVar14 = puVar3;
      }
      *(ulong *)(puVar14 + 0x10) = uVar15 + 1;
      *(undefined **)(puVar14 + uVar15 * 0x10 + 0x20) = puVar9;
      *(undefined8 *)(puVar14 + uVar15 * 0x10 + 0x28) = uVar10;
      puStack_70 = puVar14;
    }
  }
  puVar14 = puStack_70;
  uVar15 = *(ulong *)(unaff_x20 + 0x68);
  if (uVar15 != 0) {
    uVar19 = *(ulong *)(unaff_x20 + 0x60) & 0xffffffffffff;
    if ((uVar15 & 0x2000000000000000) != 0) {
      uVar19 = uVar15 >> 0x38 & 0xf;
    }
    if (uVar19 != 0) {
      puStack_a0 = (undefined *)0x22203a74786574;
      uStack_98 = 0xe700000000000000;
      uStack_e0 = 10;
      uStack_d8 = 0xe100000000000000;
      uStack_80 = 0x20;
      uStack_78 = 0xe100000000000000;
      uStack_c0 = *(ulong *)(unaff_x20 + 0x60);
      uStack_b8 = uVar15;
      FUN_100e8b654();
      puVar11 = &uStack_80;
      func_0x000107c601fc(&uStack_e0,puVar11,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                          PTR___sSSN_11034da80,puVar3,puVar3,puVar3);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar11);
      func_0x000107c5fb78(0x22,0xe100000000000000);
      uVar10 = uStack_98;
      puVar3 = puStack_a0;
      uVar15 = *(ulong *)(puVar14 + 0x10);
      puVar9 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar15) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
        func_0x0001000d182c(puVar9,uVar15 + 1,1,puVar14);
      }
      *(ulong *)(puVar9 + 0x10) = uVar15 + 1;
      *(undefined **)(puVar9 + uVar15 * 0x10 + 0x20) = puVar3;
      *(undefined8 *)(puVar9 + uVar15 * 0x10 + 0x28) = uVar10;
      puStack_70 = puVar9;
    }
  }
  puVar3 = puStack_70;
  lVar13 = *(long *)(unaff_x20 + 0x80);
  if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
    lVar13 = *(long *)(lVar13 + 0x20);
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c61434(lVar13);
    func_0x000107c5fb78(0x203a6e6f69746361,0xe800000000000000);
    if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1014fb7c8:
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      func_0x000107c61434(lVar13);
      lVar5 = 0x6c43746567726174;
      uVar15 = 0xeb00000000737361;
      func_0x000100029284(0x6c43746567726174);
      if ((uVar15 & 1) == 0) {
        func_0x000107c6142c(lVar13);
        goto LAB_1014fb7c8;
      }
      func_0x0001000bb420(*(long *)(lVar13 + 0x38) + lVar5 * 0x20,&uStack_c0);
      func_0x000107c6142c(lVar13);
    }
    uStack_d8 = uStack_b8;
    uStack_e0 = uStack_c0;
    lStack_c8 = lStack_a8;
    uStack_d0 = uStack_b0;
    if (lStack_a8 == 0) {
      puStack_88 = PTR___sSSN_11034da80;
      puStack_a0 = (undefined *)0x3f;
      uStack_98 = 0xe100000000000000;
    }
    else {
      func_0x000100102924(&uStack_e0,&puStack_a0);
    }
    puVar14 = PTR___sypN_11034f1a8;
    func_0x000107c603d0(&puStack_a0,&uStack_80,PTR___sypN_11034f1a8 + 8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000100183ab8(&puStack_a0);
    func_0x000107c5fb78(0x2e,0xe100000000000000);
    if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1014fb898:
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      func_0x000107c61434(lVar13);
      lVar5 = 0x6e6f69746361;
      uVar15 = 0;
      func_0x000100029284(0x6e6f69746361);
      if ((uVar15 & 1) == 0) {
        func_0x000107c6142c(lVar13);
        goto LAB_1014fb898;
      }
      func_0x0001000bb420(*(long *)(lVar13 + 0x38) + lVar5 * 0x20,&uStack_c0);
      func_0x000107c6142c(lVar13);
    }
    func_0x000107c6142c(lVar13);
    uStack_d8 = uStack_b8;
    uStack_e0 = uStack_c0;
    lStack_c8 = lStack_a8;
    uStack_d0 = uStack_b0;
    if (lStack_a8 == 0) {
      puStack_88 = PTR___sSSN_11034da80;
      puStack_a0 = (undefined *)0x3f;
      uStack_98 = 0xe100000000000000;
    }
    else {
      func_0x000100102924(&uStack_e0,&puStack_a0);
    }
    func_0x000107c603d0(&puStack_a0,&uStack_80,puVar14 + 8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000100183ab8(&puStack_a0);
    uVar7 = uStack_78;
    uVar10 = uStack_80;
    uVar15 = *(ulong *)(puVar3 + 0x10);
    puVar14 = puVar3;
    if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar15) {
      puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
      func_0x0001000d182c(puVar14,uVar15 + 1,1,puVar3);
    }
    *(ulong *)(puVar14 + 0x10) = uVar15 + 1;
    *(undefined8 *)(puVar14 + uVar15 * 0x10 + 0x20) = uVar10;
    *(undefined8 *)(puVar14 + uVar15 * 0x10 + 0x28) = uVar7;
    puStack_70 = puVar14;
  }
  puVar3 = puStack_70;
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    puStack_a0 = (undefined *)0x72756f5361746164;
    uStack_98 = 0xec000000203a6563;
    func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + 0x90));
    uVar10 = uStack_98;
    puVar14 = puStack_a0;
    uVar15 = *(ulong *)(puVar3 + 0x10);
    puVar9 = puVar3;
    if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar15) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
      func_0x0001000d182c(puVar9,uVar15 + 1,1,puVar3);
    }
    *(ulong *)(puVar9 + 0x10) = uVar15 + 1;
    *(undefined **)(puVar9 + uVar15 * 0x10 + 0x20) = puVar14;
    *(undefined8 *)(puVar9 + uVar15 * 0x10 + 0x28) = uVar10;
    puStack_70 = puVar9;
  }
  puVar3 = puStack_70;
  if (*(long *)(unaff_x20 + 0xa8) != 0) {
    puStack_a0 = (undefined *)0x65746167656c6564;
    uStack_98 = 0xea0000000000203a;
    func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + 0xa0));
    uVar10 = uStack_98;
    puVar14 = puStack_a0;
    uVar15 = *(ulong *)(puVar3 + 0x10);
    puVar9 = puVar3;
    if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar15) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
      func_0x0001000d182c(puVar9,uVar15 + 1,1,puVar3);
    }
    *(ulong *)(puVar9 + 0x10) = uVar15 + 1;
    *(undefined **)(puVar9 + uVar15 * 0x10 + 0x20) = puVar14;
    *(undefined8 *)(puVar9 + uVar15 * 0x10 + 0x28) = uVar10;
    puStack_70 = puVar9;
  }
  puVar3 = puStack_70;
  func_0x000107c613fc(puVar4,0x30,7);
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  uVar10 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar7 = uVar10;
  func_0x00010011d734();
  uVar6 = 0x207c20;
  uVar15 = 0xe300000000000000;
  func_0x000107c5fa80(0x207c20,0xe300000000000000,uVar10);
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  *(ulong *)(puVar4 + 0x28) = uVar15;
  uVar19 = *(ulong *)(unaff_x20 + 0x100);
  puStack_a0 = puVar4;
  if (uVar19 >> 0x3e == 0) {
    uVar17 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar17 = uVar19 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar19) {
      uVar17 = uVar19;
    }
    func_0x000107c60480();
  }
  if (uVar17 != 0) {
    if (SCARRY8(param_1,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014fbc38);
      (*pcVar1)();
    }
    if ((long)uVar17 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014fbc3c);
      (*pcVar1)();
    }
    uVar18 = 0;
    do {
      if ((uVar19 & 0xc000000000000001) == 0) {
        uVar16 = *(ulong *)(uVar19 + uVar18 * 8 + 0x20);
        func_0x000107c6157c(uVar16);
      }
      else {
        uVar16 = uVar18;
        uVar15 = uVar19;
        FUN_1014fcf1c(uVar18);
      }
      uVar8 = param_1 + 1;
      FUN_1014fb384();
      uVar2 = uVar8 & 0xffffffffffff;
      if ((uVar15 & 0x2000000000000000) != 0) {
        uVar2 = uVar15 >> 0x38 & 0xf;
      }
      if (uVar2 == 0) {
        func_0x000107c6142c(uVar15);
        func_0x000107c61574(uVar16);
      }
      else {
        uVar2 = *(ulong *)(puVar4 + 0x10);
        puVar14 = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
          puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
          func_0x0001000d182c(puVar14,uVar2 + 1,1,puVar4);
        }
        *(ulong *)(puVar14 + 0x10) = uVar2 + 1;
        *(ulong *)(puVar14 + uVar2 * 0x10 + 0x20) = uVar8;
        *(ulong *)(puVar14 + uVar2 * 0x10 + 0x28) = uVar15;
        func_0x000107c61574(uVar16);
        puVar4 = puVar14;
        puStack_a0 = puVar14;
      }
      uVar18 = uVar18 + 1;
    } while (uVar17 != uVar18);
  }
  uVar6 = 10;
  uVar12 = 0xe100000000000000;
  func_0x000107c5fa80(10,0xe100000000000000,uVar10,uVar7);
  func_0x000107c6142c(puVar3);
LAB_1014fbb84:
  func_0x000107c6142c(puVar4);
  auVar20._8_8_ = uVar12;
  auVar20._0_8_ = uVar6;
  return auVar20;
}



/* Entry: 1014fc900; end: 1014fcb1b;  */

uint FUN_1014fc900(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  puVar3 = PTR_s_in_the_capture__10ef89400_0x30_112dab980;
  uVar6 = uRam0000000112dab978;
  if ((((*(long *)(unaff_x20 + 0x48) == 0) && (*(long *)(unaff_x20 + 0x68) == 0)) &&
      (*(long *)(unaff_x20 + 0x80) == 0)) &&
     ((*(long *)(unaff_x20 + 0x98) == 0 && (*(long *)(unaff_x20 + 0x78) == 0)))) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c61434(PTR_s_in_the_capture__10ef89400_0x30_112dab980);
    func_0x000107c5fbb4(uVar6,puVar3,uVar1,uVar2);
    func_0x000107c6142c(puVar3);
    puVar3 = PTR_s_UITransitionView_112dab990;
    uVar7 = uRam0000000112dab988;
    if ((uVar6 & 1) == 0) {
      func_0x000107c61434(PTR_s_UITransitionView_112dab990);
      func_0x000107c5fbb4(uVar7,puVar3,uVar1,uVar2);
      func_0x000107c6142c(puVar3);
      puVar3 = PTR_s_UIDropShadowView_112dab9a0;
      uVar6 = uRam0000000112dab998;
      if ((uVar7 & 1) == 0) {
        func_0x000107c61434(PTR_s_UIDropShadowView_112dab9a0);
        func_0x000107c5fbb4(uVar6,puVar3,uVar1,uVar2);
        func_0x000107c6142c(puVar3);
        puVar3 = PTR_s_UILayoutContainerView_112dab9b0;
        uVar7 = uRam0000000112dab9a8;
        if ((uVar6 & 1) == 0) {
          func_0x000107c61434(PTR_s_UILayoutContainerView_112dab9b0);
          func_0x000107c5fbb4(uVar7,puVar3,uVar1,uVar2);
          func_0x000107c6142c(puVar3);
          puVar3 = PTR_s_UINavigationTransitionView_112dab9c0;
          uVar6 = uRam0000000112dab9b8;
          if ((uVar7 & 1) == 0) {
            func_0x000107c61434(PTR_s_UINavigationTransitionView_112dab9c0);
            func_0x000107c5fbb4(uVar6,puVar3,uVar1,uVar2);
            func_0x000107c6142c(puVar3);
            puVar3 = PTR_s_ortViewController_swift_10ef89790_0x20_112dab9d0;
            uVar7 = uRam0000000112dab9c8;
            if ((uVar6 & 1) == 0) {
              func_0x000107c61434(PTR_s_ortViewController_swift_10ef89790_0x20_112dab9d0);
              func_0x000107c5fbb4(uVar7,puVar3,uVar1,uVar2);
              func_0x000107c6142c(puVar3);
              puVar3 = PTR_s_UIInputSetContainerView_112dab9e0;
              uVar6 = uRam0000000112dab9d8;
              if ((uVar7 & 1) == 0) {
                func_0x000107c61434(PTR_s_UIInputSetContainerView_112dab9e0);
                func_0x000107c5fbb4(uVar6,puVar3,uVar1,uVar2);
                func_0x000107c6142c(puVar3);
                uVar4 = uRam0000000112dab9f0;
                uVar8 = uRam0000000112dab9e8;
                if ((uVar6 & 1) == 0) {
                  func_0x000107c61434(uRam0000000112dab9f0);
                  func_0x000107c5fbb4(uVar8,uVar4,uVar1,uVar2);
                  func_0x000107c6142c(uVar4);
                  return (uint)uVar8 & 1;
                }
              }
            }
          }
        }
      }
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 1014fcb1c; end: 1014fcc9b;  */

void FUN_1014fcb1c(void)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_a8 [72];
  
  func_0x0001000285a8(0x112d46b30,&UNK_10d917640);
  lVar6 = 0x11;
  func_0x000107c602e8();
  lVar13 = 0;
  lVar1 = lVar6 + 0x38;
  do {
    uVar3 = *(ulong *)(lVar13 * 0x10 + 0x112daba80);
    uVar4 = *(ulong *)(lVar13 * 0x10 + 0x112daba88);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c61434(uVar4);
    puVar7 = auStack_a8;
    func_0x000107c5fb58(puVar7,uVar3,uVar4);
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar12 = (ulong)puVar7 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar12 >> 6;
    uVar9 = *(ulong *)(lVar1 + uVar8 * 8);
    uVar10 = 1L << (uVar12 & 0x3f);
    if ((uVar10 & uVar9) != 0) {
      do {
        puVar2 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar12 * 0x10);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        if ((uVar8 == uVar3 && uVar9 == uVar4) ||
           (func_0x000107c605b8(uVar8,uVar9,uVar3,uVar4,0), (uVar8 & 1) != 0)) {
          func_0x000107c6142c(uVar4);
          goto LAB_1014fcb84;
        }
        uVar12 = uVar12 + 1 & ~uVar11;
        uVar8 = uVar12 >> 6;
        uVar9 = *(ulong *)(lVar1 + uVar8 * 8);
        uVar10 = 1L << (uVar12 & 0x3f);
      } while ((uVar10 & uVar9) != 0);
    }
    *(ulong *)(lVar1 + uVar8 * 8) = uVar10 | uVar9;
    puVar2 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar12 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1014fcc9c);
      (*pcVar5)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
LAB_1014fcb84:
    lVar13 = lVar13 + 1;
    if (lVar13 == 0x11) {
      func_0x000107c61408(0x112daba80,0x11,PTR___sSSN_11034da80);
      lRam0000000112daba50 = lVar6;
      return;
    }
  } while( true );
}



/* Entry: 1014fcc9c; end: 1014fcd5f;  */

void FUN_1014fcc9c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61610(unaff_x20 + 0x108);
  return;
}



/* Entry: 1014fcd60; end: 1014fcf1b;  */

ulong FUN_1014fcd60(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014fce44);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014fce48);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1014fe8f4(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014fcf1c);
  (*pcVar2)();
}



/* Entry: 1014fcf1c; end: 1014fd0af;  */

ulong FUN_1014fcf1c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014fcfe4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014fcfe8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001014fcd40();
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar5 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x0001014fcd40();
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar5 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000016,0x800000010d953b20);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar5 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014fd0b0);
  (*pcVar2)();
}



/* Entry: 1014fd0b0; end: 1014fd0e7;  */

void FUN_1014fd0b0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1014fd0e8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1014fd0e8; end: 1014fd3a7;  */

undefined * FUN_1014fd0e8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014fd200);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112daafc8;
    func_0x0001000285a8(0x112daafc8,&UNK_10d953b60);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1103d3988);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x18 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 1014fd3a8; end: 1014fd873;  */

undefined1  [16] FUN_1014fd3a8(undefined *param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar4 = &uStack_60;
  func_0x000107c614f0();
  uVar1 = 0x112dab9f8;
  puStack_50 = param_1;
  func_0x0001000285a8(0x112dab9f8,&UNK_10db30990);
  ppuVar2 = &puStack_50;
  func_0x000107c5fb20(ppuVar2,uVar1);
  puVar3 = (undefined *)0x2e;
  uVar8 = 0;
  FUN_10143c25c(0x2e,0xe100000000000000,ppuVar2,uVar1);
  if ((uVar8 & 0xff) == 1) {
    func_0x000107c6142c(uVar1);
    func_0x000107c614e8(param_1);
    puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c61168();
    puVar6 = puVar3;
    func_0x000107c3ee00();
    func_0x000107c61180();
    FUN_1014fe8f4(0,0x112daba40,&PTR__OBJC_CLASS___NSBundle_1126aea78);
    func_0x000107c4c12c();
    func_0x000107c61180();
    puVar14 = puVar6;
    puVar7 = puVar3;
    func_0x000107c60118();
    func_0x000107c61170(puVar3);
    if (((ulong)puVar14 & 1) == 0) {
      puVar14 = puVar6;
      func_0x000107c3ee10();
      func_0x000107c61180();
      puVar3 = puVar14;
      func_0x000107c5faec();
      func_0x000107c61170(puVar14);
      uStack_60 = 0x2f;
      uStack_58 = 0xe100000000000000;
      puStack_50 = puVar3;
      puStack_48 = puVar7;
      FUN_100e8b654();
      puVar3 = PTR___sSSN_11034da80;
      func_0x000107c601dc(&uStack_60,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar14,puVar14);
      func_0x000107c6142c(puVar7);
      plVar12 = (long *)((long)puVar4 + 0x10);
      puVar13 = (undefined1 *)puVar4;
      if (*plVar12 == 0) {
LAB_1014fd638:
        func_0x000107c6142c(puVar13);
        puVar7 = puVar6;
        func_0x000107c3ee08();
        func_0x000107c61180();
        if (puVar7 == (undefined *)0x0) goto LAB_1014fd678;
        puVar14 = puVar7;
        func_0x000107c5faec();
        func_0x000107c61170(puVar7);
      }
      else {
        puVar14 = (undefined *)0x6f77656d6172662e;
        puVar7 = (undefined *)plVar12[*plVar12 * 2];
        puVar13 = (undefined1 *)(plVar12 + *plVar12 * 2)[1];
        func_0x000107c61434(puVar13);
        func_0x000107c6142c(puVar4);
        puVar3 = (undefined *)0xea00000000006b72;
        puVar5 = puVar14;
        puVar10 = puVar13;
        func_0x000107c5fbb8(0x6f77656d6172662e,0xea00000000006b72,puVar7,puVar13);
        if (((ulong)puVar5 & 1) == 0) goto LAB_1014fd638;
        func_0x000107c5fb5c(0x6f77656d6172662e,0xea00000000006b72);
        puVar9 = puVar13;
        func_0x0001014fd31c();
        func_0x000107c6142c(puVar13);
        func_0x000107c5fb2c(puVar14,puVar7,puVar9,puVar10);
        func_0x000107c6142c(puVar10);
        puVar3 = puVar7;
      }
      func_0x000107c61170(puVar6);
      goto LAB_1014fd688;
    }
LAB_1014fd678:
    func_0x000107c61170(puVar6);
  }
  else {
    puVar14 = (undefined *)0xf;
    uVar11 = uVar1;
    func_0x000107c5fbd8(0xf,puVar3,ppuVar2,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c5fb2c(puVar14,puVar3,ppuVar2,uVar11);
    func_0x000107c6142c(uVar11);
    if (lRam0000000112daba48 != -1) {
      func_0x000107c61568(0x112daba48,FUN_1014fcb1c);
    }
    puVar6 = puVar14;
    func_0x0001000f66f0(puVar14,puVar3,uRam0000000112daba50);
    if (((ulong)puVar6 & 1) == 0) goto LAB_1014fd688;
    func_0x000107c6142c(puVar3);
  }
  puVar14 = (undefined *)0x0;
  puVar3 = (undefined *)0x0;
LAB_1014fd688:
  auVar15._8_8_ = puVar3;
  auVar15._0_8_ = puVar14;
  return auVar15;
}



/* Entry: 1014fd874; end: 1014fdfe7;  */

undefined * FUN_1014fd874(undefined *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  undefined *puStack_1a0;
  ulong uStack_198;
  undefined1 auStack_190 [64];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar14 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  func_0x000107c61168(PTR__OBJC_CLASS___UIControl_1126c3e60);
  puVar6 = param_1;
  func_0x000107c6148c(param_1,puVar14);
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c61174();
    puVar14 = puVar6;
    func_0x000107c3dbac();
    func_0x000107c61180();
    puVar7 = puVar14;
    func_0x000107c5fe10();
    func_0x000107c61170(puVar14);
    if (*(long *)(puVar7 + 0x10) == 0) {
      func_0x000107c61170(param_1);
      puVar14 = puVar7;
    }
    else {
      lVar18 = 0;
      uVar16 = 1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
      uVar17 = 0xffffffffffffffff;
      if ((puVar7[0x20] & 0x3f) < 6) {
        uVar17 = ~(-1L << (uVar16 & 0x3f));
      }
      uVar17 = uVar17 & *(ulong *)(puVar7 + 0x38);
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      while( true ) {
        while (uVar17 != 0) {
          uVar21 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
          uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
          uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
          uVar17 = uVar17 - 1 & uVar17;
          lVar8 = *(long *)(puVar7 + 0x30) + LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) * 0x28 +
                  lVar18 * 0xa00;
          func_0x0001007bbd18(lVar8,&uStack_98);
          uStack_b8 = uStack_90;
          uStack_c0 = uStack_98;
          uStack_a8 = uStack_80;
          uStack_b0 = uStack_88;
          uStack_a0 = uStack_78;
          func_0x000107c602bc();
          puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x000107c61168(PTR__OBJC_CLASS___NSNull_1126aef28);
          lVar20 = lVar8;
          func_0x000107c6148c(lVar8,puVar9);
          func_0x000107c61170(lVar8);
          if (lVar20 == 0) {
            puStack_1a0 = PTR___ss11AnyHashableVN_11034e448;
            uVar10 = 0x112daba38;
            func_0x0001000285a8(0x112daba38,&UNK_10d953ba8);
            ppuVar11 = &puStack_1a0;
            func_0x000107c5fb18();
            uVar21 = 1;
            do {
              func_0x000107c602bc();
              puVar9 = puVar6;
              func_0x000107c3d010();
              func_0x000107c61180();
              func_0x000107c61170();
              if (puVar9 != (undefined *)0x0) {
                puVar13 = puVar9;
                func_0x000107c5fc54(puVar9,PTR___sSSN_11034da80);
                func_0x000107c61170(puVar9);
                lVar20 = *(long *)(puVar13 + 0x10);
                if (lVar20 != 0) {
                  func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
                  puVar19 = (undefined8 *)(puVar13 + 0x28);
                  do {
                    uStack_110 = puVar19[-1];
                    uVar12 = *puVar19;
                    uStack_150 = 0x6c43746567726174;
                    uStack_148 = 0xeb00000000737361;
                    puStack_128 = PTR___sSSN_11034da80;
                    uStack_120 = 0x6e6f69746361;
                    uStack_118 = 0xe600000000000000;
                    puStack_f8 = PTR___sSSN_11034da80;
                    uStack_f0 = 0x746e657665;
                    uStack_e8 = 0xe500000000000000;
                    puStack_c8 = PTR___sSuN_11034e220;
                    lVar8 = 3;
                    ppuStack_140 = ppuVar11;
                    uStack_138 = uVar10;
                    uStack_108 = uVar12;
                    uStack_e0 = uVar21;
                    func_0x000107c60498();
                    func_0x000100216788(&uStack_150,&puStack_1a0);
                    uVar3 = uStack_198;
                    puVar9 = puStack_1a0;
                    func_0x000107c61434(uVar12);
                    func_0x000107c61434(uVar10);
                    func_0x000107c6157c(lVar8);
                    puVar13 = puVar9;
                    uVar15 = uVar3;
                    func_0x000100029284();
                    if ((uVar15 & 1) != 0) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1014fddf0);
                      (*pcVar4)();
                    }
                    lVar1 = lVar8 + 0x40;
                    uVar15 = (ulong)puVar13 >> 3 & 0x1ffffffffffffff8;
                    *(ulong *)(lVar1 + uVar15) =
                         *(ulong *)(lVar1 + uVar15) | 1L << ((ulong)puVar13 & 0x3f);
                    puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + (long)puVar13 * 0x10);
                    *puVar2 = puVar9;
                    puVar2[1] = uVar3;
                    func_0x000100102924(auStack_190,*(long *)(lVar8 + 0x38) + (long)puVar13 * 0x20);
                    if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1014fddf4);
                      (*pcVar4)();
                    }
                    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
                    func_0x000100216788(&uStack_120,&puStack_1a0);
                    uVar3 = uStack_198;
                    puVar9 = puStack_1a0;
                    puVar13 = puStack_1a0;
                    uVar15 = uStack_198;
                    func_0x000100029284();
                    if ((uVar15 & 1) != 0) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1014fddf8);
                      (*pcVar4)();
                    }
                    uVar15 = (ulong)puVar13 >> 3 & 0x1ffffffffffffff8;
                    *(ulong *)(lVar1 + uVar15) =
                         *(ulong *)(lVar1 + uVar15) | 1L << ((ulong)puVar13 & 0x3f);
                    puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + (long)puVar13 * 0x10);
                    *puVar2 = puVar9;
                    puVar2[1] = uVar3;
                    func_0x000100102924(auStack_190,*(long *)(lVar8 + 0x38) + (long)puVar13 * 0x20);
                    if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1014fddfc);
                      (*pcVar4)();
                    }
                    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
                    func_0x000100216788(&uStack_f0,&puStack_1a0);
                    uVar3 = uStack_198;
                    puVar9 = puStack_1a0;
                    puVar13 = puStack_1a0;
                    uVar15 = uStack_198;
                    func_0x000100029284();
                    if ((uVar15 & 1) != 0) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1014fde00);
                      (*pcVar4)();
                    }
                    uVar15 = (ulong)puVar13 >> 3 & 0x1ffffffffffffff8;
                    *(ulong *)(lVar1 + uVar15) =
                         *(ulong *)(lVar1 + uVar15) | 1L << ((ulong)puVar13 & 0x3f);
                    puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + (long)puVar13 * 0x10);
                    *puVar2 = puVar9;
                    puVar2[1] = uVar3;
                    func_0x000100102924(auStack_190,*(long *)(lVar8 + 0x38) + (long)puVar13 * 0x20);
                    func_0x000107c61574(lVar8);
                    uVar12 = 0x112d4b5f0;
                    func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
                    func_0x000107c61408(&uStack_150,3,uVar12);
                    if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1014fde04);
                      (*pcVar4)();
                    }
                    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
                    puVar9 = puVar14;
                    func_0x000107c61558();
                    puVar13 = puVar14;
                    if (((ulong)puVar9 & 1) == 0) {
                      puVar13 = (undefined *)0x0;
                      FUN_1014f1044(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
                    }
                    uVar3 = *(ulong *)(puVar13 + 0x10);
                    puVar14 = puVar13;
                    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar3) {
                      puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
                      FUN_1014f1044(puVar14,uVar3 + 1,1,puVar13);
                    }
                    puVar19 = puVar19 + 2;
                    *(ulong *)(puVar14 + 0x10) = uVar3 + 1;
                    *(long *)(puVar14 + uVar3 * 8 + 0x20) = lVar8;
                    lVar20 = lVar20 + -1;
                  } while (lVar20 != 0);
                }
                func_0x000107c6142c();
              }
              bVar5 = uVar21 < 0x7800001;
              uVar21 = uVar21 << 1;
            } while (bVar5);
            func_0x000107c6142c(uVar10);
            func_0x0001007bbff0(&uStack_c0);
          }
          else {
            func_0x0001007bbff0(&uStack_c0);
          }
        }
        bVar5 = SCARRY8(lVar18,1);
        lVar18 = lVar18 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014fddec);
          (*pcVar4)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar18) break;
        uVar17 = *(ulong *)((long)(puVar7 + 0x38) + lVar18 * 8);
      }
      func_0x000107c61574(puVar7);
      lVar18 = *(long *)(puVar14 + 0x10);
      func_0x000107c61170(param_1);
      if (lVar18 != 0) {
        return puVar14;
      }
    }
    func_0x000107c6142c(puVar14);
  }
  return (undefined *)0x0;
}



/* Entry: 1014fdfe8; end: 1014fe137;  */

undefined * FUN_1014fdfe8(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lStack_58;
  
  func_0x000107c4d68c();
  func_0x000107c61180();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != 0) {
    do {
      lVar2 = param_1;
      func_0x000107c614f0();
      lStack_58 = lVar2;
      func_0x000107c61174();
      uVar3 = 0x112daba20;
      func_0x0001000285a8(0x112daba20,&UNK_10d953b98);
      plVar4 = &lStack_58;
      func_0x000107c5fb18();
      puVar5 = puVar7;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar1 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000d182c(puVar7,uVar1 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
      *(long **)(puVar7 + uVar1 * 0x10 + 0x20) = plVar4;
      *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x28) = uVar3;
      lVar2 = param_1;
      func_0x000107c4d68c();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_1);
      param_1 = lVar2;
    } while (lVar2 != 0);
  }
  if (*(long *)(puVar7 + 0x10) == 0) {
    func_0x000107c6142c(puVar7);
    puVar7 = (undefined *)0x0;
  }
  return puVar7;
}



/* Entry: 1014fe138; end: 1014fe8f3;  */

ulong FUN_1014fe138(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5,long param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong *puVar19;
  undefined *puVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puStack_138;
  undefined *puStack_110;
  ulong uStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined *puStack_c0;
  ulong uStack_b8;
  ulong auStack_b0 [2];
  
  uVar17 = param_5;
  func_0x000107c49eac();
  if (((uVar17 & 1) != 0) || (func_0x000107c3dc40(param_5), param_1 <= 0.0)) {
    return 0;
  }
  uVar17 = param_5;
  func_0x000107c5c3b0();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_1014fe8f4(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar3 = uVar17;
  func_0x000107c5fc54(uVar17,uVar2);
  func_0x000107c61170(uVar17);
  if (uVar3 >> 0x3e == 0) {
    uVar17 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar17 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar17 = uVar3;
    }
    func_0x000107c60480();
  }
  uStack_b8 = uVar3 & 0xffffffffffffff8;
  puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = 0;
  while (uVar17 != uVar8) {
    if ((uVar3 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uStack_b8 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014fe8d4);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(uVar3 + uVar8 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar4 = uVar8;
      FUN_1014fcd60(uVar8,uVar3,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
    }
    uVar9 = uVar8 + 1;
    if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014fe8d0);
      (*pcVar1)();
    }
    uVar11 = uVar4;
    func_0x000107c60ea0();
    if (SCARRY8(param_6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014fe8d8);
      (*pcVar1)();
    }
    uVar12 = uVar4;
    FUN_1014fe138(uVar4,param_6 + 1);
    func_0x000107c60e9c(uVar11);
    func_0x000107c61170(uVar4);
    uVar8 = uVar8 + 1;
    if (uVar12 != 0) {
      puVar6 = puStack_c0;
      func_0x000107c61550();
      if ((((int)puVar6 == 0) || ((long)puStack_c0 < 0)) ||
         (puVar6 = puStack_c0, ((ulong)puStack_c0 >> 0x3e & 1) != 0)) {
        if ((ulong)puStack_c0 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puStack_c0 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puStack_c0 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_c0) {
            puVar5 = puStack_c0;
          }
          func_0x000107c60480(puVar5);
        }
        puVar6 = (undefined *)0x0;
        FUN_1014f1174(0,puVar5 + 1,1,puStack_c0);
      }
      uVar4 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar8 = *(ulong *)(uVar4 + 0x10);
      puStack_c0 = puVar6;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar8) {
        puStack_c0 = (undefined *)(ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_1014f1174(puStack_c0,uVar8 + 1,1,puVar6);
        uVar4 = (ulong)puStack_c0 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar4 + 0x10) = uVar8 + 1;
      *(ulong *)(uVar4 + uVar8 * 8 + 0x20) = uVar12;
      uVar8 = uVar9;
    }
  }
  func_0x000107c6142c(uVar3);
  uVar17 = param_5;
  func_0x000107c614f0();
  puVar6 = (undefined *)0x112dab9f8;
  auStack_b0[0] = uVar17;
  func_0x0001000285a8(0x112dab9f8,&UNK_10db30990);
  puVar7 = auStack_b0;
  func_0x000107c5fb18();
  uVar3 = param_5;
  puVar14 = puVar6;
  FUN_1014fd3a8();
  uVar17 = param_5;
  puVar5 = puVar14;
  func_0x000107c4d68c();
  func_0x000107c61180();
  puVar20 = PTR__OBJC_CLASS___UIViewController_1126af898;
  while (PTR__OBJC_CLASS___UIViewController_1126af898 = puVar20, uVar17 != 0) {
    func_0x000107c61168();
    uVar8 = uVar17;
    func_0x000107c6148c();
    if (uVar8 != 0) {
      func_0x000107c614f0();
      puStack_138 = (undefined *)0x112daaff8;
      auStack_b0[0] = uVar8;
      func_0x0001000285a8(0x112daaff8,&UNK_10d953990);
      puVar15 = auStack_b0;
      func_0x000107c5fb18();
      puVar5 = puStack_138;
      func_0x000107c61170(uVar17);
      goto LAB_1014fe424;
    }
    uVar8 = uVar17;
    func_0x000107c4d68c();
    func_0x000107c61180();
    func_0x000107c61170(uVar17);
    uVar17 = uVar8;
    puVar5 = puVar20;
    puVar20 = PTR__OBJC_CLASS___UIViewController_1126af898;
  }
  puVar15 = (ulong *)0x0;
  puStack_138 = (undefined *)0x0;
LAB_1014fe424:
  uVar17 = param_5;
  func_0x000107c3cf00();
  func_0x000107c61180();
  if (uVar17 == 0) {
    puStack_100 = (undefined *)0x0;
    uStack_f8 = 0;
    puVar20 = puVar5;
  }
  else {
    uStack_f8 = uVar17;
    func_0x000107c5faec();
    puVar20 = puVar5;
    func_0x000107c61170(uVar17);
    puStack_100 = puVar5;
  }
  uVar17 = param_5;
  func_0x000107c3cf04();
  func_0x000107c61180();
  if (uVar17 == 0) {
    puStack_110 = (undefined *)0x0;
    uStack_108 = 0;
    puVar5 = puVar20;
  }
  else {
    uStack_108 = uVar17;
    func_0x000107c5faec();
    puVar5 = puVar20;
    func_0x000107c61170(uVar17);
    puStack_110 = puVar20;
  }
  uVar17 = param_5;
  func_0x0001014fd6c0();
  puVar20 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c61168();
  uVar8 = param_5;
  func_0x000107c6148c();
  if (uVar8 == 0) {
LAB_1014fe560:
    uStack_b8 = 0;
    puVar20 = (undefined *)0x0;
  }
  else {
    uVar4 = param_5;
    func_0x000107c61174(param_5);
    func_0x000107c45034();
    func_0x000107c61180();
    if (uVar8 == 0) {
LAB_1014fe558:
      func_0x000107c61170(uVar4);
      goto LAB_1014fe560;
    }
    uVar9 = uVar8;
    func_0x000107c3cf00();
    func_0x000107c61180();
    if (uVar9 == 0) {
      func_0x000107c61170(uVar8);
      goto LAB_1014fe558;
    }
    uStack_b8 = uVar9;
    func_0x000107c5faec();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar4);
    uVar8 = uStack_b8 & 0xffffffffffff;
    if (((ulong)puVar20 & 0x2000000000000000) != 0) {
      uVar8 = (ulong)puVar20 >> 0x38 & 0xf;
    }
    if (uVar8 == 0) {
      func_0x000107c6142c(puVar20);
      goto LAB_1014fe560;
    }
  }
  uVar8 = param_5;
  FUN_1014fd874();
  uVar4 = param_5;
  func_0x0001014fde04();
  puVar10 = PTR__OBJC_CLASS___UITableView_1126aed40;
  func_0x000107c61168(PTR__OBJC_CLASS___UITableView_1126aed40);
  uVar9 = param_5;
  func_0x000107c6148c(param_5,puVar10);
  if (uVar9 == 0) {
LAB_1014fe618:
    puVar10 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    func_0x000107c61168(PTR__OBJC_CLASS___UICollectionView_1126afd20);
    uVar9 = param_5;
    func_0x000107c6148c(param_5,puVar10);
    if (uVar9 == 0) {
LAB_1014fe6a4:
      puVar18 = (ulong *)0x0;
      uVar2 = 0;
    }
    else {
      uVar11 = param_5;
      func_0x000107c61174(param_5);
      func_0x000107c4129c();
      func_0x000107c61180();
      if (uVar9 == 0) {
        func_0x000107c61170(uVar11);
        goto LAB_1014fe6a4;
      }
      uVar12 = uVar9;
      func_0x000107c614f0();
      uVar2 = 0x112daba10;
      auStack_b0[0] = uVar12;
      func_0x0001000285a8(0x112daba10,&UNK_10d953b80);
      puVar18 = auStack_b0;
      func_0x000107c5fb18();
      func_0x000107c615e8(uVar9);
      func_0x000107c61170(uVar11);
    }
    puVar10 = PTR__OBJC_CLASS___UITableView_1126aed40;
    func_0x000107c61168(PTR__OBJC_CLASS___UITableView_1126aed40);
    uVar9 = param_5;
    func_0x000107c6148c(param_5,puVar10);
    if (uVar9 != 0) goto LAB_1014fe6cc;
LAB_1014fe714:
    puVar10 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    func_0x000107c61168(PTR__OBJC_CLASS___UICollectionView_1126afd20);
    uVar9 = param_5;
    func_0x000107c6148c(param_5,puVar10);
    if (uVar9 == 0) {
      puVar19 = (ulong *)0x0;
      uVar16 = 0;
      goto LAB_1014fe7b0;
    }
    uVar11 = param_5;
    func_0x000107c61174(param_5);
    func_0x000107c4168c();
    func_0x000107c61180();
    if (uVar9 == 0) {
      func_0x000107c61170(uVar11);
      puVar19 = (ulong *)0x0;
      uVar16 = 0;
      goto LAB_1014fe7b0;
    }
    uVar12 = uVar9;
    func_0x000107c614f0();
    uVar16 = 0x112daba00;
    puVar10 = &UNK_10d953b70;
    auStack_b0[0] = uVar12;
  }
  else {
    uVar11 = param_5;
    func_0x000107c61174(param_5);
    uVar12 = uVar9;
    func_0x000107c4129c();
    func_0x000107c61180();
    if (uVar12 == 0) {
      func_0x000107c61170(uVar11);
      goto LAB_1014fe618;
    }
    uVar13 = uVar12;
    func_0x000107c614f0();
    uVar2 = 0x112daba18;
    auStack_b0[0] = uVar13;
    func_0x0001000285a8(0x112daba18,&UNK_10d953b88);
    puVar18 = auStack_b0;
    func_0x000107c5fb18();
    func_0x000107c615e8(uVar12);
    func_0x000107c61170(uVar11);
LAB_1014fe6cc:
    uVar11 = param_5;
    func_0x000107c61174(param_5);
    func_0x000107c4168c();
    func_0x000107c61180();
    if (uVar9 == 0) {
      func_0x000107c61170(uVar11);
      goto LAB_1014fe714;
    }
    uVar12 = uVar9;
    func_0x000107c614f0();
    uVar16 = 0x112daba08;
    puVar10 = &UNK_10d953b78;
    auStack_b0[0] = uVar12;
  }
  func_0x0001000285a8(uVar16,puVar10);
  puVar19 = auStack_b0;
  func_0x000107c5fb18();
  func_0x000107c615e8(uVar9);
  func_0x000107c61170(uVar11);
LAB_1014fe7b0:
  uVar9 = param_5;
  FUN_1014fdfe8();
  func_0x000107c3ec60(param_5);
  func_0x000107c40740(param_5);
  uVar11 = param_5;
  dVar21 = param_1;
  uVar22 = param_2;
  uVar23 = param_3;
  uVar24 = param_4;
  func_0x000107c3ec60();
  func_0x0001014fcd40();
  func_0x000107c613fc();
  func_0x000107c61614(uVar11 + 0x108,0);
  func_0x000107c61604(uVar11 + 0x108,param_5);
  *(ulong **)(uVar11 + 0x10) = puVar7;
  *(undefined **)(uVar11 + 0x18) = puVar6;
  *(ulong *)(uVar11 + 0x20) = uVar3;
  *(undefined **)(uVar11 + 0x28) = puVar14;
  *(ulong **)(uVar11 + 0x30) = puVar15;
  *(undefined **)(uVar11 + 0x38) = puStack_138;
  *(ulong *)(uVar11 + 0x40) = uStack_f8;
  *(undefined **)(uVar11 + 0x48) = puStack_100;
  *(ulong *)(uVar11 + 0x50) = uStack_108;
  *(undefined **)(uVar11 + 0x58) = puStack_110;
  *(ulong *)(uVar11 + 0x60) = uVar17;
  *(undefined **)(uVar11 + 0x68) = puVar5;
  *(ulong *)(uVar11 + 0x70) = uStack_b8;
  *(undefined **)(uVar11 + 0x78) = puVar20;
  *(ulong *)(uVar11 + 0x80) = uVar8;
  *(ulong *)(uVar11 + 0x88) = uVar4;
  *(ulong **)(uVar11 + 0x90) = puVar18;
  *(undefined8 *)(uVar11 + 0x98) = uVar2;
  *(ulong **)(uVar11 + 0xa0) = puVar19;
  *(undefined8 *)(uVar11 + 0xa8) = uVar16;
  *(ulong *)(uVar11 + 0xb0) = uVar9;
  *(double *)(uVar11 + 0xb8) = param_1;
  *(undefined8 *)(uVar11 + 0xc0) = param_2;
  *(undefined8 *)(uVar11 + 200) = param_3;
  *(undefined8 *)(uVar11 + 0xd0) = param_4;
  *(double *)(uVar11 + 0xd8) = dVar21;
  *(undefined8 *)(uVar11 + 0xe0) = uVar22;
  *(undefined8 *)(uVar11 + 0xe8) = uVar23;
  *(undefined8 *)(uVar11 + 0xf0) = uVar24;
  *(long *)(uVar11 + 0xf8) = param_6;
  *(undefined **)(uVar11 + 0x100) = puStack_c0;
  return uVar11;
}



/* Entry: 1014fe8f4; end: 1014fe933;  */

void FUN_1014fe8f4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1014fe934; end: 1014fe99f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014fe934(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1014fed28();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112dabb98) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1014fe9a0; end: 1014fea0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014fe9a0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dabb98) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014fea0c; end: 1014fea6b; -[_TtC43UnauthenticatedScopedFactoryServiceProvider31SCUnauthenticatedScopedServices init] */

void FUN_1014fea0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnauthenticatedScopedFactoryServiceProvider.SCUnauthenticatedScopedServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014fea38);
  (*pcVar1)();
}



/* Entry: 1014fea6c; end: 1014fea7b; -[_TtC43UnauthenticatedScopedFactoryServiceProvider31SCUnauthenticatedScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014fea6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dabb98));
  return;
}



/* Entry: 1014fea7c; end: 1014feae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014fea7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103d3f08;
  func_0x000107c613fc(&UNK_1103d3f08,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1014fedc0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1014feae8; end: 1014feb83;  */

void FUN_1014feae8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103d3e18;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103d3e18;
  return;
}



/* Entry: 1014feb84; end: 1014febbb;  */

void FUN_1014feb84(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1014febbc; end: 1014febc3;  */

undefined8 FUN_1014febbc(void)

{
  return 0x1b;
}



/* Entry: 1014febc4; end: 1014fecf7;  */

void FUN_1014febc4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1103d3f30;
  func_0x000107c613fc(&UNK_1103d3f30,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1014fed98;
  func_0x00010058fa64(FUN_1014fed98,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1014fecf8; end: 1014fed27;  */

undefined ** FUN_1014fecf8(void)

{
  return &PTR_DAT_113067048;
}



/* Entry: 1014fed28; end: 1014fed47;  */

void FUN_1014fed28(void)

{
  func_0x000107c61168(&PTR_PTR_1127dd230);
  return;
}



/* Entry: 1014fed48; end: 1014fed97;  */

undefined1  [16] FUN_1014fed48(void)

{
  return ZEXT816(0x1103d3e68);
}



/* Entry: 1014fed98; end: 1014fedbf;  */

void FUN_1014fed98(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1014fedc0; end: 1014fedd3;  */

void FUN_1014fedc0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1014fedd4; end: 10150049f;  */

void FUN_1014fedd4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  code *pcVar25;
  code *pcVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  code *pcVar29;
  code *pcVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  char *pcVar33;
  char *pcVar34;
  char *pcVar35;
  char *pcVar36;
  code *pcVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  char *pcVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  code *pcVar49;
  code *pcVar50;
  undefined8 uVar51;
  code *pcVar52;
  undefined8 uVar53;
  undefined8 auStack_70 [2];
  
  uVar53 = *param_2;
  func_0x0001000285a8(0x112dabc10,&UNK_10d953e08);
  puVar1 = auStack_70;
  auStack_70[0] = uVar53;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112dabc18,&UNK_10d953e10);
  func_0x000107c6157c(puVar1);
  pcVar2 = FUN_101500538;
  func_0x0001000823a8(FUN_101500538,puVar1);
  func_0x000100082720("AuthFlowTreatmentInfoServicesProviderWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112dabc20,&UNK_10d9540a0);
  puVar3 = &UNK_1103d3fe0;
  func_0x000107c613fc(&UNK_1103d3fe0,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar53 = 0x101500540;
  func_0x0001000823a8(0x101500540,puVar3);
  func_0x000100082720("AuthenticationOrchestrationServicesEntryPointWrapperServiceProvider",0x43,2);
  func_0x0001000285a8(0x112dabc28,&UNK_10d953e20);
  puVar3 = &UNK_1103d4008;
  func_0x000107c613fc(&UNK_1103d4008,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  uVar4 = 0x101500548;
  func_0x0001000823a8(0x101500548,puVar3);
  pcVar5 = "BitmojiUnauthenticatedContentManagerFetchServicesEntryPointWrapperServiceProvider";
  func_0x000100082720("BitmojiUnauthenticatedContentManagerFetchServicesEntryPointWrapperServiceProvider"
                      ,0x51,2);
  func_0x00010150b098();
  pcVar6 = "SCPhoneCodeScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCPhoneCodeScopeExposerSubjectServiceProvider",0x2d,2);
  func_0x00010150b118();
  pcVar7 = "SCRegistrationScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCRegistrationScopeExposerSubjectServiceProvider",0x30,2);
  FUN_10150b164();
  func_0x000100082720("SCUserVerificationScopeExposerSubjectServiceProvider",0x34,2);
  func_0x0001000285a8(0x112dabc30,&UNK_10d954480);
  puVar3 = &UNK_1103d4030;
  func_0x000107c613fc(&UNK_1103d4030,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  *(undefined8 *)(puVar3 + 0x20) = param_6;
  *(undefined8 *)(puVar3 + 0x28) = param_7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  uVar8 = 0x101500550;
  func_0x0001000823a8(0x101500550,puVar3);
  func_0x000100082720("SCAppAttestEntryPointWrapperServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112dabc38,&UNK_10d953e30);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10150055c;
  func_0x0001000823a8(0x10150055c,uVar8);
  func_0x000100082720("SCAppAttestServicesServiceProvider",0x22,2);
  uVar10 = param_8;
  func_0x0001016aa794(param_8,param_9,param_5);
  func_0x000100082720("UnauthenticatedAsyncValdiRuntimeServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112dabc40,&UNK_10d9545e0);
  puVar3 = &UNK_1103d4058;
  func_0x000107c613fc(&UNK_1103d4058,0x50,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_10;
  *(undefined8 *)(puVar3 + 0x20) = param_11;
  *(undefined8 *)(puVar3 + 0x28) = param_12;
  *(undefined8 *)(puVar3 + 0x30) = param_13;
  *(undefined8 *)(puVar3 + 0x38) = param_6;
  *(undefined8 *)(puVar3 + 0x40) = param_7;
  *(undefined8 *)(puVar3 + 0x48) = param_14;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  uVar11 = 0x101500564;
  func_0x0001000823a8(0x101500564,puVar3);
  func_0x000100082720("SCAuthenticationFlowLoggerServiceProviderWrapperServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112dabc48,&UNK_10d953e40);
  func_0x000107c6157c(uVar11);
  uVar12 = 0x101500570;
  func_0x0001000823a8(0x101500570,uVar11);
  func_0x000100082720("SCAuthenticationFlowLoggerServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112dabc50,&UNK_10d953e48);
  func_0x000107c6157c(uVar53);
  uVar13 = 0x101500578;
  func_0x0001000823a8(0x101500578,uVar53);
  func_0x000100082720("SCAuthenticationOrchestrationServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112dabc58,&UNK_10d953e50);
  func_0x000107c6157c(uVar4);
  uVar14 = 0x101500580;
  func_0x0001000823a8(0x101500580,uVar4);
  func_0x000100082720("SCBitmojiUnauthenticatedFetchServicesServiceProvider",0x34,2);
  func_0x0001016aa770(param_8,param_9);
  func_0x000100082720("UnauthenticatedValdiRuntimeProviderServiceProvider",0x32,2);
  uVar15 = param_8;
  func_0x0001016aa7ec(param_8,uVar10);
  func_0x000100082720("UnauthenticatedComposerServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112dabc60,&UNK_10d9547d0);
  puVar3 = &UNK_1103d4080;
  func_0x000107c613fc(&UNK_1103d4080,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_15;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_15);
  uVar16 = 0x101500588;
  func_0x0001000823a8(0x101500588,puVar3);
  func_0x000100082720("SCConfigDeauthProviderEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112dabc68,&UNK_10d953e60);
  func_0x000107c6157c(puVar1);
  uVar17 = 0x101500590;
  func_0x0001000823a8(0x101500590,puVar1);
  func_0x000100082720("SCDeepLinkTIVNonceServiceProviderWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112dabc70,&UNK_10d953e68);
  func_0x000107c6157c(uVar17);
  uVar18 = 0x101500598;
  func_0x0001000823a8(0x101500598,uVar17);
  func_0x000100082720("SCDeepLinkTIVNonceServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112dabc78,&UNK_10d953e70);
  puVar3 = &UNK_1103d40a8;
  func_0x000107c613fc(&UNK_1103d40a8,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  uVar19 = 0x1015005a0;
  func_0x0001000823a8(0x1015005a0,puVar3);
  func_0x000100082720("SCFideliusUnauthenticatedEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112dabc80,&UNK_10d954be0);
  puVar3 = &UNK_1103d40d0;
  func_0x000107c613fc(&UNK_1103d40d0,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_16;
  *(undefined8 *)(puVar3 + 0x20) = param_17;
  *(undefined8 *)(puVar3 + 0x28) = param_18;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  uVar20 = 0x1015005a8;
  func_0x0001000823a8(0x1015005a8,puVar3);
  func_0x000100082720("SCNotificationActionHandlerUnauthenticatedScopedEntryPointWrapperServiceProvider"
                      ,0x50,2);
  func_0x0001000285a8(0x112dabc88,&UNK_10d953e80);
  puVar3 = &UNK_1103d40f8;
  func_0x000107c613fc(&UNK_1103d40f8,0x50,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_19;
  *(undefined8 *)(puVar3 + 0x20) = param_6;
  *(undefined8 *)(puVar3 + 0x28) = param_7;
  *(undefined8 *)(puVar3 + 0x30) = param_11;
  *(undefined8 *)(puVar3 + 0x38) = param_13;
  *(undefined8 *)(puVar3 + 0x40) = param_10;
  *(undefined8 *)(puVar3 + 0x48) = uVar12;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(uVar12);
  pcVar21 = FUN_101500610;
  func_0x0001000823a8(FUN_101500610,puVar3);
  func_0x000100082720("SCOdlvLoggerServicesProviderWrapperServiceProvider",0x32,2);
  func_0x0001000285a8(0x112dabc90,&UNK_10d954f40);
  puVar3 = &UNK_1103d4120;
  func_0x000107c613fc(&UNK_1103d4120,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_16;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_16);
  uVar22 = 0x101500634;
  func_0x0001000823a8(0x101500634,puVar3);
  func_0x000100082720("SCPostponedApplicationDidBecomeActiveUnauthenticatedEntryPointWrapperServiceProvider"
                      ,0x54,2);
  func_0x0001000285a8(0x112dabc98,&UNK_10d953e90);
  puVar3 = &UNK_1103d4148;
  func_0x000107c613fc(&UNK_1103d4148,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  *(undefined8 *)(puVar3 + 0x20) = param_7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  uVar23 = 0x10150063c;
  func_0x0001000823a8(0x10150063c,puVar3);
  func_0x000100082720("SCPreLoginAttestationServiceEntryPointWrapperServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112dabca0,&UNK_10d9552a0);
  func_0x000107c6157c(puVar1);
  uVar24 = 0x101500648;
  func_0x0001000823a8(0x101500648,puVar1);
  func_0x000100082720("SCRedirectToRegInfoServicesEntryPointWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112dabca8,&UNK_10d953ea0);
  puVar3 = &UNK_1103d4170;
  func_0x000107c613fc(&UNK_1103d4170,0x78,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_7;
  *(undefined8 *)(puVar3 + 0x20) = param_11;
  *(undefined8 *)(puVar3 + 0x28) = param_12;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_13;
  *(undefined8 *)(puVar3 + 0x40) = param_10;
  *(undefined8 *)(puVar3 + 0x48) = uVar12;
  *(undefined8 *)(puVar3 + 0x50) = param_5;
  *(undefined8 *)(puVar3 + 0x58) = param_20;
  *(undefined8 *)(puVar3 + 0x60) = param_21;
  *(undefined8 *)(puVar3 + 0x68) = param_14;
  *(undefined8 *)(puVar3 + 0x70) = param_22;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  pcVar25 = FUN_101500650;
  func_0x0001000823a8(FUN_101500650,puVar3);
  func_0x000100082720("SCRegistrationLoggerServicesEntryPointWrapperServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112dabcb0,&UNK_10d955620);
  puVar3 = &UNK_1103d4198;
  func_0x000107c613fc(&UNK_1103d4198,0x40,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  *(undefined8 *)(puVar3 + 0x20) = param_23;
  *(undefined8 *)(puVar3 + 0x28) = param_7;
  *(undefined8 *)(puVar3 + 0x30) = param_24;
  *(undefined8 *)(puVar3 + 0x38) = param_25;
  func_0x000107c6157c();
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  pcVar26 = FUN_10150068c;
  func_0x0001000823a8(FUN_10150068c,puVar3);
  func_0x000100082720("SCUnauthShortLinkServiceProviderWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112dabcb8,&UNK_10d953eb0);
  func_0x000107c6157c(puVar1);
  uVar27 = 0x10150069c;
  func_0x0001000823a8(0x10150069c,puVar1);
  func_0x000100082720("SCUnauthenticatedBadgeEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112dabcc0,&UNK_10d9558f0);
  puVar3 = &UNK_1103d41c0;
  func_0x000107c613fc(&UNK_1103d41c0,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_6);
  uVar28 = 0x1015006a4;
  func_0x0001000823a8(0x1015006a4,puVar3);
  func_0x000100082720("SCUnauthenticatedContactPermissionInfoServicesEntryPointWrapperServiceProvider"
                      ,0x4e,2);
  func_0x0001000285a8(0x112dabcc8,&UNK_10d953ec0);
  puVar3 = &UNK_1103d41e8;
  func_0x000107c613fc(&UNK_1103d41e8,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_26;
  *(undefined8 *)(puVar3 + 0x20) = param_27;
  func_0x000107c6157c();
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  pcVar29 = FUN_1015006e0;
  func_0x0001000823a8(FUN_1015006e0,puVar3);
  func_0x000100082720("SCUnauthenticatedJobSchedulerEntryPointWrapperServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112dabcd0,&UNK_10d955c30);
  puVar3 = &UNK_1103d4210;
  func_0x000107c613fc(&UNK_1103d4210,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_28;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  *(undefined8 *)(puVar3 + 0x28) = param_14;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_28);
  pcVar30 = FUN_101500728;
  func_0x0001000823a8(FUN_101500728,puVar3);
  func_0x000100082720("SCUnauthenticatedStorageEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112dabcd8,&UNK_10d953ed0);
  func_0x000107c6157c(pcVar30);
  uVar31 = 0x101500734;
  func_0x0001000823a8(0x101500734,pcVar30);
  func_0x000100082720("SCUnauthenticatedStorageServicesServiceProvider",0x2f,2);
  uVar32 = param_5;
  FUN_101516638(param_5,param_29);
  pcVar33 = "SCPhoneCodeScopedFactoryServiceProvider";
  func_0x000100082720("SCPhoneCodeScopedFactoryServiceProvider",0x27,2);
  FUN_101521738();
  func_0x000100082720("SCUserVerificationScopedFactoryServiceProvider",0x2e,2);
  pcVar34 = pcVar5;
  FUN_10150b0d8();
  func_0x000100082720("SCPhoneCodeScopeExposerObservableServiceProvider",0x30,2);
  pcVar35 = pcVar6;
  FUN_10150b158();
  func_0x000100082720("SCRegistrationScopeExposerObservableServiceProvider",0x33,2);
  pcVar36 = pcVar7;
  FUN_10150b1f0();
  func_0x000100082720("SCUserVerificationScopeExposerObservableServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar37 = FUN_1014feb84;
  func_0x0001000823a8(FUN_1014feb84,0);
  func_0x000100082720("SCUnauthenticatedScopedServicesCleanupRelayServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112dabce0,&UNK_10d953ee0);
  func_0x000107c6157c(pcVar2);
  uVar38 = 0x10150073c;
  func_0x0001000823a8(0x10150073c,pcVar2);
  func_0x000100082720("AuthFlowTreatmentInfoServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112dabce8,&UNK_10d953ee8);
  func_0x000107c6157c(pcVar21);
  uVar39 = 0x101500744;
  func_0x0001000823a8(0x101500744,pcVar21);
  func_0x000100082720("OdlvLoggerServicesServiceProvider",0x21,2);
  uVar40 = uVar32;
  func_0x00010430e4c8();
  func_0x000100082720("SCPhoneCodeScopeServicesServiceProvider",0x27,2);
  func_0x0001000285a8(0x112dabcf0,&UNK_10d953ef0);
  func_0x000107c6157c(uVar23);
  uVar41 = 0x10150074c;
  func_0x0001000823a8(0x10150074c,uVar23);
  func_0x000100082720("SCPreLoginAttestationServiceServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112dabcf8,&UNK_10d953ef8);
  func_0x000107c6157c(uVar24);
  uVar42 = 0x101500754;
  func_0x0001000823a8(0x101500754,uVar24);
  func_0x000100082720("SCRedirectToRegInfoServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112dabd00,&UNK_10d953f00);
  func_0x000107c6157c(pcVar25);
  uVar43 = 0x10150075c;
  func_0x0001000823a8(0x10150075c,pcVar25);
  func_0x000100082720("SCRegistrationLoggerServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112dabd08,&UNK_10d953f08);
  func_0x000107c6157c(pcVar26);
  uVar44 = 0x101500764;
  func_0x0001000823a8(0x101500764,pcVar26);
  func_0x000100082720("SCUnauthShortLinkServiceServiceProvider",0x27,2);
  func_0x0001000285a8(0x112dabd10,&UNK_10d953f10);
  func_0x000107c6157c(uVar28);
  uVar45 = 0x10150076c;
  func_0x0001000823a8(0x10150076c,uVar28);
  func_0x000100082720("SCUnauthenticatedContactPermissionInfoServicesServiceProvider",0x3d,2);
  pcVar46 = pcVar33;
  func_0x00010430f354();
  func_0x000100082720("SCUserVerificationScopeServicesServiceProvider",0x2e,2);
  FUN_101518bd0(param_30,param_31,param_32,uVar9,param_5,param_3,param_10,param_33,param_34,param_35
                ,param_36,param_37,param_38,param_19,param_39,param_25,uVar41,uVar43,param_12,
                param_4,param_23,param_14);
  func_0x000100082720("SCRegistrationScopedFactoryServiceProvider",0x2a,2);
  uVar47 = param_30;
  func_0x00010430ea3c();
  func_0x000100082720("SCRegistrationScopeServicesServiceProvider",0x2a,2);
  uVar48 = uVar38;
  FUN_10150a868(uVar38,uVar39,uVar9,uVar12,uVar13,uVar14,uVar15,uVar18,pcVar5,uVar40,uVar41,uVar42,
                uVar43,pcVar6,uVar47,uVar44,uVar45,uVar31,pcVar7,pcVar46);
  func_0x000100082720("UnauthenticatedScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112dabd18,&UNK_10d953f18);
  puVar3 = &UNK_1103d4238;
  func_0x000107c613fc(&UNK_1103d4238,0xc0,7);
  *(code **)(puVar3 + 0x10) = pcVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar53;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  *(undefined8 *)(puVar3 + 0x30) = uVar11;
  *(undefined8 *)(puVar3 + 0x38) = uVar16;
  *(undefined8 *)(puVar3 + 0x40) = uVar17;
  *(undefined8 *)(puVar3 + 0x48) = uVar19;
  *(undefined8 *)(puVar3 + 0x50) = uVar20;
  *(code **)(puVar3 + 0x58) = pcVar21;
  *(undefined8 *)(puVar3 + 0x60) = uVar22;
  *(undefined8 *)(puVar3 + 0x68) = uVar23;
  *(undefined8 *)(puVar3 + 0x70) = uVar24;
  *(code **)(puVar3 + 0x78) = pcVar25;
  *(code **)(puVar3 + 0x80) = pcVar26;
  *(undefined8 *)(puVar3 + 0x88) = uVar27;
  *(undefined8 *)(puVar3 + 0x90) = uVar28;
  *(code **)(puVar3 + 0x98) = pcVar29;
  *(undefined8 **)(puVar3 + 0xa0) = puVar1;
  *(code **)(puVar3 + 0xa8) = pcVar37;
  *(code **)(puVar3 + 0xb0) = pcVar30;
  *(undefined8 *)(puVar3 + 0xb8) = uVar48;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar53);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar17);
  func_0x000107c6157c(pcVar30);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(pcVar21);
  func_0x000107c6157c(uVar23);
  func_0x000107c6157c(uVar24);
  func_0x000107c6157c(pcVar25);
  func_0x000107c6157c(pcVar26);
  func_0x000107c6157c(uVar28);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(uVar19);
  func_0x000107c6157c(uVar20);
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(uVar27);
  func_0x000107c6157c(pcVar29);
  func_0x000107c6157c(pcVar37);
  func_0x000107c6157c(uVar48);
  pcVar49 = FUN_101500774;
  func_0x0001000823a8(FUN_101500774,puVar3);
  func_0x000100082720("SCUnauthenticatedScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112dabba0,&UNK_10d953bc0);
  func_0x000107c6157c(pcVar49);
  pcVar50 = FUN_1015007c0;
  func_0x0001000823a8(FUN_1015007c0,pcVar49);
  func_0x000100082720("SCUnauthenticatedScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112dabb90,&UNK_10d953bb0);
  func_0x000107c6157c(pcVar50);
  uVar51 = 0x1015007c8;
  func_0x0001000823a8(0x1015007c8,pcVar50);
  func_0x000100082720("SCUnauthenticatedScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1103d4260;
  func_0x000107c613fc(&UNK_1103d4260,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar51;
  *(code **)(puVar3 + 0x18) = pcVar37;
  func_0x000107c6157c(pcVar37);
  pcVar52 = FUN_1015007fc;
  func_0x0001000823a8(FUN_1015007fc,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar53);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(param_8);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(pcVar21);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(uVar23);
  func_0x000107c61574(uVar24);
  func_0x000107c61574(pcVar25);
  func_0x000107c61574(pcVar26);
  func_0x000107c61574(uVar27);
  func_0x000107c61574(uVar28);
  func_0x000107c61574(pcVar29);
  func_0x000107c61574(pcVar30);
  func_0x000107c61574(uVar31);
  func_0x000107c61574(uVar32);
  func_0x000107c61574(pcVar33);
  func_0x000107c61574(pcVar34);
  func_0x000107c61574(pcVar35);
  func_0x000107c61574(pcVar36);
  func_0x000107c61574(pcVar37);
  func_0x000107c61574(uVar38);
  func_0x000107c61574(uVar39);
  func_0x000107c61574(uVar40);
  func_0x000107c61574(uVar41);
  func_0x000107c61574(uVar42);
  func_0x000107c61574(uVar43);
  func_0x000107c61574(uVar44);
  func_0x000107c61574(uVar45);
  func_0x000107c61574(pcVar46);
  func_0x000107c61574(param_30);
  func_0x000107c61574(uVar47);
  func_0x000107c61574(uVar48);
  func_0x000107c61574(pcVar49);
  func_0x000107c61574(pcVar50);
  func_0x000100082720("SCUnauthenticatedScopeEntryPointProvider",0x28,2);
  *param_1 = pcVar52;
  return;
}



/* Entry: 1015004a0; end: 101500537;  */

void FUN_1015004a0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1014fedd4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130));
  return;
}



/* Entry: 101500538; end: 1015005b3;  */

void FUN_101500538(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_101500a44();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_101514740();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101514608();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1015005b4; end: 10150060f;  */

void FUN_1015005b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101500610; end: 10150064f;  */

void FUN_101500610(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  FUN_101504130();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  *(undefined8 *)(lVar1 + 0x48) = uStack_a0;
  puVar2 = PTR_PTR_1126a75d0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef10af0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef17060);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef26830);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef22f50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar11 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef12da0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef851d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar11 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef8a570);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  puVar12 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined **)(lVar1 + 0x50) = puVar12;
  *param_1 = lVar1;
  return;
}



/* Entry: 101500650; end: 10150068b;  */

void FUN_101500650(void)

{
  long unaff_x20;
  
  FUN_101504fb0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 10150068c; end: 1015006ab;  */

void FUN_10150068c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  FUN_101506ac4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a75f8;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef10af0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12300);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  puVar10 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined **)(lVar1 + 0x40) = puVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 1015006ac; end: 1015006df;  */

void FUN_1015006ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1015006e0; end: 1015006eb;  */

void FUN_1015006e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_101507760();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101507594(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1015006ec; end: 101500727;  */

void FUN_1015006ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101500728; end: 101500773;  */

void FUN_101500728(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_101507d7c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101507abc(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 101500774; end: 1015007bf;  */

void FUN_101500774(void)

{
  long unaff_x20;
  
  FUN_101507e00(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 1015007c0; end: 1015007cf;  */

void FUN_1015007c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112dabbf8,&UNK_10d953db8);
  uVar1 = 0;
  func_0x0001000a1ccc();
  func_0x000100083b20(&uStack_38);
  func_0x0001000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1015007d0; end: 1015007fb;  */

void FUN_1015007d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1015007fc; end: 101500803;  */

void FUN_1015007fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103d3e18;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103d3e18;
  return;
}



/* Entry: 101500804; end: 10150089b;  */

void FUN_101500804(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_101500a44();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_101514740();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101514608();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 10150089c; end: 101500907;  */

long FUN_10150089c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_101514740();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  FUN_101514608();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 101500908; end: 101500933;  */

void FUN_101500908(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101500934; end: 101500987;  */

void FUN_101500934(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101500988; end: 10150098f;  */

undefined8 FUN_101500988(void)

{
  return 0x1b;
}



/* Entry: 101500990; end: 101500a13;  */

void FUN_101500990(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x101500a94,param_2,FUN_101500a98,param_2,0x101500ac0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101500a14; end: 101500a43;  */

undefined ** FUN_101500a14(void)

{
  return &PTR_DAT_113067048;
}



/* Entry: 101500a44; end: 101500a63;  */

void FUN_101500a44(void)

{
  func_0x000107c61168(&PTR_PTR_112dabd88);
  return;
}



/* Entry: 101500a64; end: 101500a97;  */

undefined1  [16] FUN_101500a64(void)

{
  return ZEXT816(0x1103d42b8);
}



/* Entry: 101500a98; end: 101500aeb;  */

void FUN_101500a98(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101500aec; end: 101500bd3;  */

void FUN_101500aec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_101500df0();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_101500d04(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 101500bd4; end: 101500c0f;  */

void FUN_101500bd4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


