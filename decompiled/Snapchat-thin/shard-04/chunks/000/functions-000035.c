/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102fb7fdc; end: 102fb801f;  */

void FUN_102fb7fdc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined4 *)(unaff_x20 + 0x30) = 0;
  *(undefined1 *)(unaff_x20 + 0x34) = 1;
  *(undefined4 *)(unaff_x20 + 0x38) = 0;
  *(undefined1 *)(unaff_x20 + 0x3c) = 1;
  *(undefined4 *)(unaff_x20 + 0x40) = 0;
  *(undefined1 *)(unaff_x20 + 0x44) = 1;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined4 *)(unaff_x20 + 0x58) = 0;
  *(undefined1 *)(unaff_x20 + 0x5c) = 1;
  *(undefined4 *)(unaff_x20 + 0x60) = 0;
  *(undefined1 *)(unaff_x20 + 100) = 1;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 102fb8020; end: 102fb804b; -[_TtC16JobConfigUtility16JobConfigBuilder initWithTypeIdentifier:] */

undefined8 FUN_102fb8020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  FUN_102fb7fdc();
  return param_1;
}



/* Entry: 102fb804c; end: 102fb818b;  */

undefined * FUN_102fb804c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b7228;
  func_0x000107c610f8(PTR_PTR_1126b7228);
  func_0x000107c453e4();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c5597c(puVar1);
  func_0x000107c61170(uVar3);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
    func_0x000107c5596c(puVar1);
    func_0x000107c61170(uVar3);
  }
  if (*(char *)(unaff_x20 + 0x34) != '\x01') {
    func_0x000107c55960(puVar1);
  }
  if (*(char *)(unaff_x20 + 0x3c) != '\x01') {
    func_0x000107c55968(puVar1);
  }
  if (*(char *)(unaff_x20 + 0x44) != '\x01') {
    func_0x000107c54734(puVar1);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x000107c55958(puVar1);
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    func_0x000107c55974(puVar1);
  }
  if (*(char *)(unaff_x20 + 0x5c) != '\x01') {
    func_0x000107c55978(puVar1);
  }
  if (*(char *)(unaff_x20 + 100) != '\x01') {
    func_0x000107c55970(puVar1);
  }
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    func_0x000107c57ec0(puVar1);
  }
  return puVar1;
}



/* Entry: 102fb818c; end: 102fb81f7; -[_TtC16JobConfigUtility16JobConfigBuilder build] */

void FUN_102fb818c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_102fb804c();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102fb81f8; end: 102fb8227;  */

void FUN_102fb81f8(undefined4 param_1)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0x30) = param_1;
  *(undefined1 *)(unaff_x20 + 0x34) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102fb8228; end: 102fb8293;  */

void FUN_102fb8228(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  func_0x000107c61170(uVar1);
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102fb8294; end: 102fb831b;  */

void FUN_102fb8294(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126b7238;
  func_0x000107c610f8();
  func_0x000107c453e4();
  bVar1 = *(byte *)(param_1 + 0x18);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x000107c57f50(puVar2,param_2,(uint)*(undefined8 *)(param_1 + 0x10) & 1);
    }
    else {
      func_0x000107c57c1c(puVar2);
    }
  }
  else if (bVar1 == 2) {
    func_0x000107c57f4c(puVar2);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined **)(unaff_x20 + 0x50) = puVar2;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102fb831c; end: 102fb833b;  */

void FUN_102fb831c(undefined4 param_1)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0x58) = param_1;
  *(undefined1 *)(unaff_x20 + 0x5c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102fb833c; end: 102fb8373;  */

void FUN_102fb833c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  FUN_102fb8784();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x68) = param_1;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102fb8374; end: 102fb83d7;  */

void FUN_102fb8374(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102fb83d8; end: 102fb8477;  */

void FUN_102fb83d8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105f6980;
  if (lRam0000000112f2e320 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f2e320 = param_1;
  }
  return;
}



/* Entry: 102fb8478; end: 102fb84bb;  */

void FUN_102fb8478(long param_1,long *param_2,long param_3)

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



/* Entry: 102fb84bc; end: 102fb85db;  */

undefined * FUN_102fb84bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  
  puVar1 = PTR_PTR_1126b7240;
  func_0x000107c610f8(PTR_PTR_1126b7240);
  func_0x000107c453e4();
  if (*(char *)(unaff_x20 + 0x14) != '\x01') {
    func_0x000107c56a40(puVar1,param_2,*(undefined4 *)(unaff_x20 + 0x10));
  }
  if (*(char *)(unaff_x20 + 0x1c) != '\x01') {
    func_0x000107c52c2c(puVar1,param_2,*(undefined4 *)(unaff_x20 + 0x18));
  }
  if (*(char *)(unaff_x20 + 0x24) != '\x01') {
    func_0x000107c598cc(puVar1,param_2,*(undefined4 *)(unaff_x20 + 0x20));
  }
  if (*(char *)(unaff_x20 + 0x2c) != '\x01') {
    func_0x000107c52bc8(puVar1,param_2,*(undefined4 *)(unaff_x20 + 0x28));
  }
  lVar3 = *(long *)(unaff_x20 + 0x30);
  if (lVar3 != 0) {
    puVar2 = PTR_PTR_1126ae740;
    func_0x000107c610f8(PTR_PTR_1126ae740);
    func_0x000107c61434(lVar3);
    func_0x000107c453e4(puVar2);
    lVar4 = *(long *)(lVar3 + 0x10);
    if (lVar4 != 0) {
      puVar5 = (undefined4 *)(lVar3 + 0x20);
      do {
        func_0x000107c3d810(puVar2,param_2,*puVar5);
        lVar4 = lVar4 + -1;
        puVar5 = puVar5 + 1;
      } while (lVar4 != 0);
    }
    func_0x000107c6142c(lVar3);
    func_0x000107c527c4(puVar1,param_2,puVar2);
    func_0x000107c61170(puVar2);
  }
  if (*(char *)(unaff_x20 + 0x3c) != '\x01') {
    func_0x000107c5277c(puVar1,param_2,*(undefined4 *)(unaff_x20 + 0x38));
  }
  return puVar1;
}



/* Entry: 102fb85dc; end: 102fb862b;  */

void FUN_102fb85dc(void)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined4 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x14) = 1;
  *(undefined4 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x1c) = 1;
  *(undefined4 *)(unaff_x20 + 0x20) = 0;
  *(undefined1 *)(unaff_x20 + 0x24) = 1;
  *(undefined4 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0x2c) = 1;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined4 *)(unaff_x20 + 0x38) = 0;
  *(undefined1 *)(unaff_x20 + 0x3c) = 1;
  return;
}



/* Entry: 102fb862c; end: 102fb8663;  */

void FUN_102fb862c(void)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x14) = 1;
  *(undefined4 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x1c) = 1;
  *(undefined4 *)(unaff_x20 + 0x20) = 0;
  *(undefined1 *)(unaff_x20 + 0x24) = 1;
  *(undefined4 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0x2c) = 1;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined4 *)(unaff_x20 + 0x38) = 0;
  *(undefined1 *)(unaff_x20 + 0x3c) = 1;
  return;
}



/* Entry: 102fb8664; end: 102fb8697; -[_TtC16JobConfigUtility20JobConstraintBuilder init] */

void FUN_102fb8664(long param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}



/* Entry: 102fb8698; end: 102fb86cb; -[_TtC16JobConfigUtility20JobConstraintBuilder build] */

void FUN_102fb8698(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_102fb84bc();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102fb86cc; end: 102fb86fb;  */

void FUN_102fb86cc(undefined4 param_1)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102fb86fc; end: 102fb872f;  */

void FUN_102fb86fc(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  func_0x000107c6142c(uVar1);
  func_0x000107c61434(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102fb8730; end: 102fb873f;  */

void FUN_102fb8730(undefined4 param_1)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0x38) = param_1;
  *(undefined1 *)(unaff_x20 + 0x3c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102fb8740; end: 102fb8783;  */

void FUN_102fb8740(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102fb8784; end: 102fb8813;  */

undefined * FUN_102fb8784(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126b7230;
  func_0x000107c610f8(PTR_PTR_1126b7230);
  func_0x000107c453e4();
  if (*(char *)(unaff_x20 + 0x14) != '\x01') {
    func_0x000107c57ed0(puVar1,param_2,*(undefined4 *)(unaff_x20 + 0x10));
  }
  if (*(char *)(unaff_x20 + 0x1c) != '\x01') {
    func_0x000107c57ecc(puVar1,param_2,*(undefined4 *)(unaff_x20 + 0x18));
  }
  if (*(char *)(unaff_x20 + 0x24) != '\x01') {
    func_0x000107c5632c(puVar1,param_2,*(undefined4 *)(unaff_x20 + 0x20));
  }
  if (*(char *)(unaff_x20 + 0x2c) != '\x01') {
    func_0x000107c56358(puVar1,param_2,*(undefined4 *)(unaff_x20 + 0x28));
  }
  return puVar1;
}



/* Entry: 102fb8814; end: 102fb8857;  */

void FUN_102fb8814(void)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined4 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x14) = 1;
  *(undefined4 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x1c) = 1;
  *(undefined4 *)(unaff_x20 + 0x20) = 0;
  *(undefined1 *)(unaff_x20 + 0x24) = 1;
  *(undefined4 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0x2c) = 1;
  return;
}



/* Entry: 102fb8858; end: 102fb8883;  */

void FUN_102fb8858(void)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x14) = 1;
  *(undefined4 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x1c) = 1;
  *(undefined4 *)(unaff_x20 + 0x20) = 0;
  *(undefined1 *)(unaff_x20 + 0x24) = 1;
  *(undefined4 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0x2c) = 1;
  return;
}



/* Entry: 102fb8884; end: 102fb88ab; -[_TtC16JobConfigUtility15JobRetryBuilder init] */

void FUN_102fb8884(long param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}



/* Entry: 102fb88ac; end: 102fb88df; -[_TtC16JobConfigUtility15JobRetryBuilder build] */

void FUN_102fb88ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_102fb8784();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102fb88e0; end: 102fb891f;  */

void FUN_102fb88e0(undefined4 param_1)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102fb8920; end: 102fb893f;  */

void FUN_102fb8920(void)

{
  func_0x000107c61168(&PTR_PTR_112f2e468);
  return;
}



/* Entry: 102fb8940; end: 102fb89b7;  */

undefined * FUN_102fb8940(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126b7248;
  func_0x000107c610f8(PTR_PTR_1126b7248);
  func_0x000107c453e4();
  if (*(char *)(unaff_x20 + 0x14) != '\x01') {
    func_0x000107c59ce4(puVar1,param_2,*(undefined4 *)(unaff_x20 + 0x10));
  }
  if (*(char *)(unaff_x20 + 0x1c) != '\x01') {
    func_0x000107c57d34(puVar1,param_2,*(undefined4 *)(unaff_x20 + 0x18));
  }
  if (*(char *)(unaff_x20 + 0x24) != '\x01') {
    func_0x000107c54a78(puVar1,param_2,*(undefined4 *)(unaff_x20 + 0x20));
  }
  return puVar1;
}



/* Entry: 102fb89b8; end: 102fb89e3;  */

void FUN_102fb89b8(void)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 0xff;
  return;
}



/* Entry: 102fb89e4; end: 102fb89f7;  */

void FUN_102fb89e4(void)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 0xff;
  return;
}



/* Entry: 102fb89f8; end: 102fb8a43;  */

void FUN_102fb89f8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  *(char *)(unaff_x20 + 0x18) = (char)param_2;
  FUN_102fb8a44(uVar2,uVar1);
  func_0x000102fb8a6c(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102fb8a44; end: 102fb8a7f;  */

void FUN_102fb8a44(undefined8 param_1,char param_2)

{
  if (param_2 == -1) {
    return;
  }
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 102fb8a80; end: 102fb8ae3;  */

void FUN_102fb8a80(void)

{
  long unaff_x20;
  
  FUN_102fb8a44(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102fb8ae4; end: 102fb8b07;  */

void FUN_102fb8ae4(void)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x14) = 1;
  *(undefined4 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x1c) = 1;
  *(undefined4 *)(unaff_x20 + 0x20) = 0;
  *(undefined1 *)(unaff_x20 + 0x24) = 1;
  return;
}



/* Entry: 102fb8b08; end: 102fb8b27; -[_TtC16JobConfigUtility31JobTimingRecurringConfigBuilder init] */

void FUN_102fb8b08(long param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  return;
}



/* Entry: 102fb8b28; end: 102fb8b5b; -[_TtC16JobConfigUtility31JobTimingRecurringConfigBuilder build] */

void FUN_102fb8b28(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_102fb8940();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102fb8b5c; end: 102fb8b8b;  */

void FUN_102fb8b5c(undefined4 param_1)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0x18) = param_1;
  *(undefined1 *)(unaff_x20 + 0x1c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102fb8b8c; end: 102fb8bdb;  */

undefined8 * FUN_102fb8b8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000102fb8a6c(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000102fb8a58(uVar3,uVar2);
  return param_1;
}



/* Entry: 102fb8bdc; end: 102fb8c17;  */

undefined8 * FUN_102fb8bdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000102fb8a58(uVar3,uVar2);
  return param_1;
}



/* Entry: 102fb8c18; end: 102fb8cc7;  */

int FUN_102fb8c18(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102fb8cc8; end: 102fb8d07;  */

void FUN_102fb8cc8(void)

{
  func_0x000107c61168(&PTR_PTR_112f2e520);
  return;
}



/* Entry: 102fb8d08; end: 102fb8d0f;  */

undefined8 * FUN_102fb8d08(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000102fb8a6c(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 102fb8d10; end: 102fb8fc7;  */

long FUN_102fb8d10(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102fb8fc8; end: 102fb905f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb8fc8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f2e630) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102fb9060; end: 102fb90bf; -[_TtC22SecurityConfigServices22SecurityConfigServices init] */

void FUN_102fb9060(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SecurityConfigServices.SecurityConfigServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb908c);
  (*pcVar1)();
}



/* Entry: 102fb90c0; end: 102fb90cf; -[_TtC22SecurityConfigServices22SecurityConfigServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb90c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f2e630));
  return;
}



/* Entry: 102fb90d0; end: 102fb9117;  */

void FUN_102fb90d0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db72990,0x3a,2);
  uRam00000001138068e0 = uStack_38;
  uRam00000001138068d8 = uStack_40;
  uRam00000001138068f0 = uStack_28;
  uRam00000001138068e8 = uStack_30;
  uRam0000000113806900 = uStack_18;
  uRam00000001138068f8 = uStack_20;
  return;
}



/* Entry: 102fb9118; end: 102fb91e3;  */

void FUN_102fb9118(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x78);
          goto LAB_102fb91b0;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x78);
          goto LAB_102fb91b0;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x78);
        }
        else {
          if (lVar1 != 4) goto LAB_102fb91c0;
          pcVar3 = *(code **)(param_3 + 0x168);
        }
LAB_102fb91b0:
        (*pcVar3)();
      }
LAB_102fb91c0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 102fb91e4; end: 102fb92df;  */

void FUN_102fb91e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int *unaff_x20;
  long unaff_x21;
  
  if ((*unaff_x20 != 0) &&
     ((**(code **)(param_3 + 0x28))(*unaff_x20,1,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  if ((unaff_x20[1] != 0) &&
     ((**(code **)(param_3 + 0x28))(unaff_x20[1],2,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  if ((unaff_x20[2] != 0) &&
     ((**(code **)(param_3 + 0x28))(unaff_x20[2],3,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 4);
  uVar2 = *(ulong *)(unaff_x20 + 6);
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
      goto LAB_102fb929c;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_102fb92bc;
  }
  else {
    if (uVar4 != 2) goto LAB_102fb92bc;
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
LAB_102fb929c:
    if (lVar5 == lVar6) goto LAB_102fb92bc;
  }
  (**(code **)(param_3 + 0x78))(lVar1,uVar2,4,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_102fb92bc:
  func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 10),param_2
                      ,param_3);
  return;
}



/* Entry: 102fb92e0; end: 102fb931b;  */

void FUN_102fb92e0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 102fb931c; end: 102fb934b;  */

undefined1  [16] FUN_102fb931c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 102fb934c; end: 102fb937f;  */

void FUN_102fb934c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 102fb9380; end: 102fb9393;  */

undefined1  [16] FUN_102fb9380(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x102fb9390;
  return auVar1;
}



/* Entry: 102fb9394; end: 102fb93bb;  */

void FUN_102fb9394(void)

{
  FUN_102fb9118();
  return;
}



/* Entry: 102fb93bc; end: 102fb93bf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102fb93bc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 102fb93c0; end: 102fb93f7;  */

uint FUN_102fb93c0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_102fb9a54();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 102fb93f8; end: 102fb9523;  */

/* WARNING: Possible PIC construction at 0x000102fb9440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000102fb9444) */
/* WARNING: Removing unreachable block (ram,0x000102fb9448) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102fb93f8(int *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  long lVar23;
  int *unaff_x20;
  undefined8 uVar24;
  ulong uVar25;
  byte *pbVar26;
  long lVar27;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar28;
  undefined8 uVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  puVar28 = &stack0xfffffffffffffff0;
  if ((*unaff_x20 != *param_1 || unaff_x20[1] != param_1[1]) || unaff_x20[2] != param_1[2]) {
    return (byte *)0x0;
  }
  pbVar11 = *(byte **)(param_1 + 8);
  pbVar13 = *(byte **)(param_1 + 10);
  uVar24 = *(undefined8 *)(unaff_x20 + 8);
  uVar25 = *(ulong *)(unaff_x20 + 10);
  pbVar10 = *(byte **)(unaff_x20 + 4);
  pbVar26 = *(byte **)(unaff_x20 + 6);
  lVar23 = *(long *)(param_1 + 4);
  uVar15 = *(ulong *)(param_1 + 6);
  uVar29 = 0x102fb9444;
  puVar7 = &stack0xffffffffffffffc0;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = pbVar13;
    *(ulong *)(puVar7 + -0x30) = uVar25;
    *(undefined8 *)(puVar7 + -0x28) = uVar24;
    *(int **)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = pbVar11;
    *(undefined1 **)(puVar7 + -0x10) = puVar28;
    *(undefined8 *)(puVar7 + -8) = uVar29;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar15 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar12 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar15 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar18,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar19 = (ulong)(iVar18 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar15 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar19 < 1) goto code_r0x000100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar26;
            puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar12 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            uVar24 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          pbVar13 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar12 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar12);
            func_0x000107c5ec38();
            pbVar11 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)pbVar13 <= (long)pbVar12) {
                pbVar12 = pbVar13;
              }
              pbVar12 = pbVar12 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar17 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar12 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar27 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar27,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar27 - (long)pbVar12);
          }
          pbVar13 = unaff_x24 + -lVar27;
          if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          pbVar11 = pbVar10;
          unaff_x25 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            if ((long)pbVar13 <= (long)pbVar12) {
              pbVar12 = pbVar13;
            }
            pbVar12 = pbVar12 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (int *)((ulong)pbVar26 & 0x3fffffffffffffff);
        uVar24 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar12,lVar23,uVar15);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        uVar25 = uVar15;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar19 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = pbVar13;
    *(ulong *)(puVar7 + -0xb0) = uVar25;
    *(undefined8 *)(puVar7 + -0xa8) = uVar24;
    *(int **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = pbVar11;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar22 = *(byte **)(pbVar9 + 0x18);
    bVar30 = pbVar9[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar13 = pbVar10;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar23 = *(long *)pbVar12;
          uVar24 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar24);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar30 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar16 = *(byte **)(pbVar12 + 0x10);
        lVar23 = *(long *)pbVar12;
        uVar24 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar24);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar10;
        pbVar13 = pbVar26;
        if ((pbVar10 == pbVar14) && (pbVar26 == pbVar16)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        lVar23 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar10 == pbVar16)) {
          if (((pbVar9[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar23 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar23);
          func_0x000107c61174();
          pbVar10 = pbVar22;
          func_0x000107c60118();
          func_0x000107c61170(pbVar22);
          func_0x000107c61170(lVar23);
          pbVar22 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar22 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar13,pbVar14,pbVar16,0);
      return pbVar11;
    }
    lVar27 = *(long *)(pbVar9 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar10 == pbVar16)) &&
           (pbVar11 = pbVar26, pbVar13 = pbVar22, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar16 = *(byte **)(pbVar12 + 0x18),
           pbVar26 == *(byte **)(pbVar12 + 0x10) && pbVar22 == *(byte **)(pbVar12 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar12[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar16 = *(byte **)(pbVar12 + 0x10);
      lVar23 = *(long *)(pbVar12 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar16 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar10;
        pbVar13 = pbVar26;
        if ((pbVar10 != pbVar14) || (pbVar26 != pbVar16)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar12 + 0x18)) && (lVar27 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar27,*(byte **)(pbVar12 + 0x18),lVar23,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar23 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar30 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar12 + 0x20);
        lVar23 = *(long *)(pbVar12 + 0x18);
        bVar30 = pbVar12[8] | (byte)lVar23;
        bVar31 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
        bVar32 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar33 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar34 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar35 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar36 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar37 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar38 = pbVar12[0x10] | (byte)lVar27;
        bVar39 = pbVar12[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar40 = pbVar12[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar41 = pbVar12[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar42 = pbVar12[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar43 = pbVar12[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar44 = pbVar12[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar45 = pbVar12[0x17] | (byte)((ulong)lVar27 >> 0x38);
        auVar46[1] = bVar31;
        auVar46[0] = bVar30;
        auVar46[2] = bVar32;
        auVar46[3] = bVar33;
        auVar46[4] = bVar34;
        auVar46[5] = bVar35;
        auVar46[6] = bVar36;
        auVar46[7] = bVar37;
        auVar46[8] = bVar38;
        auVar46[9] = bVar39;
        auVar46[10] = bVar40;
        auVar46[0xb] = bVar41;
        auVar46[0xc] = bVar42;
        auVar46[0xd] = bVar43;
        auVar46[0xe] = bVar44;
        auVar46[0xf] = bVar45;
        auVar3[1] = bVar31;
        auVar3[0] = bVar30;
        auVar3[2] = bVar32;
        auVar3[3] = bVar33;
        auVar3[4] = bVar34;
        auVar3[5] = bVar35;
        auVar3[6] = bVar36;
        auVar3[7] = bVar37;
        auVar3[8] = bVar38;
        auVar3[9] = bVar39;
        auVar3[10] = bVar40;
        auVar3[0xb] = bVar41;
        auVar3[0xc] = bVar42;
        auVar3[0xd] = bVar43;
        auVar3[0xe] = bVar44;
        auVar3[0xf] = bVar45;
        auVar46 = NEON_ext(auVar46,auVar3,8,1);
        if (CONCAT17(bVar37 | auVar46[7],
                     CONCAT16(bVar36 | auVar46[6],
                              CONCAT15(bVar35 | auVar46[5],
                                       CONCAT14(bVar34 | auVar46[4],
                                                CONCAT13(bVar33 | auVar46[3],
                                                         CONCAT12(bVar32 | auVar46[2],
                                                                  CONCAT11(bVar31 | auVar46[1],
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar12 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar27 == 0)) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 2) {
          return (byte *)0x0;
        }
      }
      lVar27 = *(long *)(pbVar12 + 0x20);
      lVar23 = *(long *)(pbVar12 + 0x18);
      bVar30 = pbVar12[8] | (byte)lVar23;
      bVar31 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
      bVar32 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar33 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar34 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar35 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar36 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar37 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar38 = pbVar12[0x10] | (byte)lVar27;
      bVar39 = pbVar12[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar40 = pbVar12[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar41 = pbVar12[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar42 = pbVar12[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar43 = pbVar12[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar44 = pbVar12[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar45 = pbVar12[0x17] | (byte)((ulong)lVar27 >> 0x38);
      auVar1[1] = bVar31;
      auVar1[0] = bVar30;
      auVar1[2] = bVar32;
      auVar1[3] = bVar33;
      auVar1[4] = bVar34;
      auVar1[5] = bVar35;
      auVar1[6] = bVar36;
      auVar1[7] = bVar37;
      auVar1[8] = bVar38;
      auVar1[9] = bVar39;
      auVar1[10] = bVar40;
      auVar1[0xb] = bVar41;
      auVar1[0xc] = bVar42;
      auVar1[0xd] = bVar43;
      auVar1[0xe] = bVar44;
      auVar1[0xf] = bVar45;
      auVar2[1] = bVar31;
      auVar2[0] = bVar30;
      auVar2[2] = bVar32;
      auVar2[3] = bVar33;
      auVar2[4] = bVar34;
      auVar2[5] = bVar35;
      auVar2[6] = bVar36;
      auVar2[7] = bVar37;
      auVar2[8] = bVar38;
      auVar2[9] = bVar39;
      auVar2[10] = bVar40;
      auVar2[0xb] = bVar41;
      auVar2[0xc] = bVar42;
      auVar2[0xd] = bVar43;
      auVar2[0xe] = bVar44;
      auVar2[0xf] = bVar45;
      auVar46 = NEON_ext(auVar1,auVar2,8,1);
      lVar23 = CONCAT17(bVar37 | auVar46[7],
                        CONCAT16(bVar36 | auVar46[6],
                                 CONCAT15(bVar35 | auVar46[5],
                                          CONCAT14(bVar34 | auVar46[4],
                                                   CONCAT13(bVar33 | auVar46[3],
                                                            CONCAT12(bVar32 | auVar46[2],
                                                                     CONCAT11(bVar31 | auVar46[1],
                                                                              bVar30 | auVar46[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar12 + 8);
    uVar15 = *(ulong *)(pbVar12 + 0x10);
    lVar27 = *(long *)pbVar12;
    uVar24 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar27,uVar24);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    puVar28 = *(undefined1 **)(puVar7 + -0x90);
    uVar29 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(int **)(puVar7 + -0xa0);
    pbVar11 = *(byte **)(puVar7 + -0x98);
    uVar25 = *(ulong *)(puVar7 + -0xb0);
    uVar24 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    pbVar13 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 102fb9524; end: 102fb955f;  */

void FUN_102fb9524(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2e680;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2e680,&UNK_10db72988);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102fb9560; end: 102fb96ef;  */

void FUN_102fb9560(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *(undefined4 *)(unaff_x20 + 1);
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102fb96f0; end: 102fb972f;  */

void FUN_102fb96f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db728c0;
  func_0x000107c61520(&UNK_10db728c0,&UNK_1105f6d40);
  puRam0000000112f2e668 = puVar1;
  return;
}



/* Entry: 102fb9730; end: 102fb9753;  */

void FUN_102fb9730(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102fb9754();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102fb9754; end: 102fb9793;  */

void FUN_102fb9754(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e670 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72898;
  func_0x000107c61520(&UNK_10db72898,&UNK_1105f6d40);
  puRam0000000112f2e670 = puVar1;
  return;
}



/* Entry: 102fb9794; end: 102fb97bf;  */

void FUN_102fb9794(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102fb96f0();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102fb714c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102fb97c0; end: 102fb97c3;  */

void FUN_102fb97c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72900;
  func_0x000107c61520(&UNK_10db72900,&UNK_1105f6d40);
  puRam0000000112f2e678 = puVar1;
  return;
}



/* Entry: 102fb97c4; end: 102fb9803;  */

void FUN_102fb97c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72900;
  func_0x000107c61520(&UNK_10db72900,&UNK_1105f6d40);
  puRam0000000112f2e678 = puVar1;
  return;
}



/* Entry: 102fb9804; end: 102fb985b;  */

long FUN_102fb9804(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102fb985c; end: 102fb993b;  */

undefined8 * FUN_102fb985c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 102fb993c; end: 102fb9993;  */

undefined8 * FUN_102fb993c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 102fb9994; end: 102fb9a53;  */

int FUN_102fb9994(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102fb9a54; end: 102fb9a93;  */

void FUN_102fb9a54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db7286c;
  func_0x000107c61520(&DAT_10db7286c,&UNK_1105f6d40);
  puRam0000000112f2e688 = puVar1;
  return;
}



/* Entry: 102fb9a94; end: 102fb9ab3;  */

void FUN_102fb9a94(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  return;
}



/* Entry: 102fb9ab4; end: 102fb9b37;  */

undefined8 FUN_102fb9ab4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f2e690;
  func_0x0001000285a8(0x112f2e690,&UNK_10db729d0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102fb9b38; end: 102fb9b7f;  */

uint FUN_102fb9b38(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_102fbbcf4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102fb9b80; end: 102fb9bab;  */

void FUN_102fb9b80(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_102fbc064();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102fb9bac; end: 102fb9beb;  */

void FUN_102fb9bac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f2e700;
  func_0x0001000285a8(0x112f2e700,&UNK_10db729d8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102fb9bec; end: 102fb9c1b;  */

void FUN_102fb9bec(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_102fbc064();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102fb9c1c; end: 102fb9d0f;  */

void FUN_102fb9c1c(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_68 [72];
  
  lVar2 = *unaff_x20;
  lVar1 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  if ((char)lVar1 == '\x01') {
    lVar2 = *(long *)(&UNK_10db73270 + lVar2 * 8);
  }
  func_0x000107c60690(lVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102fb9d10; end: 102fb9d57;  */

bool FUN_102fb9d10(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if ((char)param_1[1] == '\x01') {
    lVar1 = *(long *)(&UNK_10db73270 + lVar1 * 8);
  }
  lVar2 = *param_2;
  if ((char)param_2[1] == '\x01') {
    lVar2 = *(long *)(&UNK_10db73270 + lVar2 * 8);
  }
  return lVar1 == lVar2;
}



/* Entry: 102fb9d58; end: 102fb9d87;  */

void FUN_102fb9d58(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102fb9d88; end: 102fb9d8f;  */

undefined8 FUN_102fb9d88(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 102fb9d90; end: 102fb9dcf;  */

void FUN_102fb9d90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f2e770;
  func_0x0001000285a8(0x112f2e770,&UNK_10db729e0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102fb9dd0; end: 102fb9ddb;  */

void FUN_102fb9dd0(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x102fbc08c)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102fb9ddc; end: 102fb9e0f;  */

void FUN_102fb9ddc(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102fb9e10; end: 102fb9e1b;  */

void FUN_102fb9e10(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 102fb9e1c; end: 102fb9ec7;  */

void FUN_102fb9e1c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102fb9ec8; end: 102fb9edb;  */

bool FUN_102fb9ec8(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102fb9edc; end: 102fb9f23;  */

void FUN_102fb9edc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db73240,0x2d,2);
  uRam0000000113806910 = uStack_38;
  uRam0000000113806908 = uStack_40;
  uRam0000000113806920 = uStack_28;
  uRam0000000113806918 = uStack_30;
  uRam0000000113806930 = uStack_18;
  uRam0000000113806928 = uStack_20;
  return;
}



/* Entry: 102fb9f24; end: 102fba00b;  */

/* WARNING: Removing unreachable block (ram,0x000102fba008) */

void FUN_102fb9f24(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x1a0);
        FUN_102fbc098();
        (*pcVar3)(unaff_x20 + 0x10,&UNK_1105f71b0,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x60);
        }
        else {
          if (lVar1 != 1) goto LAB_102fb9fb0;
          pcVar3 = *(code **)(param_3 + 0x60);
        }
        (*pcVar3)();
      }
LAB_102fb9fb0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 102fba00c; end: 102fba0df;  */

void FUN_102fba00c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  if (((*unaff_x20 == 0) ||
      ((**(code **)(param_3 + 0x20))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
     ((lVar1 = unaff_x20[1], lVar1 == 0 ||
      ((**(code **)(param_3 + 0x20))(lVar1,2,param_2,param_3), unaff_x21 == 0)))) {
    lVar2 = unaff_x20[2];
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      FUN_102fbc098();
      (*pcVar3)(lVar2,3,&UNK_1105f71b0,lVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 102fba0e0; end: 102fba137;  */

void FUN_102fba0e0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  return;
}



/* Entry: 102fba138; end: 102fba15f;  */

void FUN_102fba138(void)

{
  FUN_102fb9f24();
  return;
}



/* Entry: 102fba160; end: 102fba197;  */

uint FUN_102fba160(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000102fbdbbc();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 102fba198; end: 102fba1df;  */

uint FUN_102fba198(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  FUN_102fbc4c0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102fba1e0; end: 102fba27f;  */

/* WARNING: Possible PIC construction at 0x000102fba22c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fba23c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fba230) */
/* WARNING: Removing unreachable block (ram,0x000102fba240) */

void FUN_102fba1e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2e778 != -1) {
    func_0x000107c61568(0x112f2e778,FUN_102fb9edc);
  }
  uVar5 = uRam0000000113806930;
  uVar4 = uRam0000000113806928;
  uVar3 = uRam0000000113806920;
  uVar2 = uRam0000000113806918;
  uVar1 = uRam0000000113806910;
  *param_1 = uRam0000000113806908;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102fba280; end: 102fba293;  */

void FUN_102fba280(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2e8b0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2e8b0,&UNK_10db73100);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102fba294; end: 102fba3a7;  */

void FUN_102fba294(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_50 = unaff_x20[2];
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_40 = unaff_x20[4];
  uStack_48 = unaff_x20[3];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102fba3a8; end: 102fba437;  */

uint FUN_102fba3a8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_102fbc4c0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102fba438; end: 102fba55b;  */

/* WARNING: Removing unreachable block (ram,0x000102fba4fc) */
/* WARNING: Removing unreachable block (ram,0x000102fba558) */
/* WARNING: Removing unreachable block (ram,0x000102fba528) */

void FUN_102fba438(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000102fbc64c();
          (*pcVar4)();
        }
        else if (lVar1 == 2) {
          FUN_102fba55c();
        }
      }
      else if (lVar1 == 3) {
        (**(code **)(param_3 + 0x138))(unaff_x20 + 0x50,param_2,param_3);
      }
      else if (lVar1 == 4) {
        FUN_102fba7cc();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 102fba55c; end: 102fba7cb;  */

/* WARNING: Removing unreachable block (ram,0x000102fba720) */

void FUN_102fba55c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x21;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auStack_170 [64];
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uVar11 = param_1[7];
  uVar10 = param_1[9];
  uVar7 = uVar11 & uVar10 & 0x3000000000000000;
  puVar4 = param_1;
  if (uVar7 != 0x3000000000000000 && (uVar10 & 0x2000000000000000) == 0) {
    uVar8 = param_1[8];
    uVar5 = param_1[5];
    uVar2 = param_1[6];
    lVar1 = param_1[3];
    uVar3 = param_1[4];
    uVar12 = param_1[2];
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_f0 = uVar12;
    lStack_e8 = lVar1;
    uStack_e0 = uVar3;
    uStack_d8 = uVar5;
    uStack_d0 = uVar2;
    uStack_c8 = uVar11;
    uStack_c0 = uVar8;
    uStack_b8 = uVar10;
    FUN_102fb6cc4(&uStack_f0,auStack_170);
    puVar4 = &uStack_130;
    FUN_102fbdbfc(puVar4,0x112f2e8c8,&UNK_10db73200);
    uStack_b0 = uVar12;
    lStack_a8 = lVar1;
    uStack_a0 = uVar3;
    uStack_98 = uVar5;
    uStack_90 = uVar2;
    uStack_88 = uVar11;
    uStack_80 = uVar8;
    uStack_78 = uVar10;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_102fbcbc8();
  (*pcVar9)(&uStack_b0,&UNK_1105f7358,puVar4,param_3,param_4);
  uVar11 = uStack_78;
  uVar12 = uStack_80;
  uVar10 = uStack_88;
  uVar8 = uStack_90;
  uVar3 = uStack_98;
  uVar2 = uStack_a0;
  lVar1 = lStack_a8;
  uVar5 = uStack_b0;
  if (unaff_x21 == 0) {
    lStack_e8 = lStack_a8;
    uStack_f0 = uStack_b0;
    uStack_d8 = uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    uStack_b8 = uStack_78;
    uStack_c0 = uStack_80;
    if (lStack_a8 != 0) {
      if (uVar7 == 0x3000000000000000) {
        lStack_128 = lStack_a8;
        uStack_130 = uStack_b0;
        uStack_118 = uStack_98;
        uStack_120 = uStack_a0;
        uStack_108 = uStack_88;
        uStack_110 = uStack_90;
        uStack_f8 = uStack_78;
        uStack_100 = uStack_80;
        func_0x000102fb9b04(&uStack_130,auStack_170);
      }
      else {
        pcVar9 = *(code **)(param_4 + 8);
        lStack_128 = lStack_a8;
        uStack_130 = uStack_b0;
        uStack_118 = uStack_98;
        uStack_120 = uStack_a0;
        uStack_108 = uStack_88;
        uStack_110 = uStack_90;
        uStack_f8 = uStack_78;
        uStack_100 = uStack_80;
        func_0x000102fb9b04(&uStack_130,auStack_170);
        (*pcVar9)(param_3,param_4);
      }
      FUN_102fbdbfc(&uStack_b0,0x112f2e8c8,&UNK_10db73200);
      lStack_128 = param_1[3];
      uStack_130 = param_1[2];
      uStack_118 = param_1[5];
      uStack_120 = param_1[4];
      uStack_108 = param_1[7];
      uStack_110 = param_1[6];
      uStack_f8 = param_1[9];
      uStack_100 = param_1[8];
      param_1[3] = lVar1;
      param_1[2] = uVar5;
      param_1[5] = uVar3;
      param_1[4] = uVar2;
      param_1[6] = uVar8;
      param_1[7] = uVar10 & 0xcfffffffffffffff;
      param_1[8] = uVar12;
      param_1[9] = uVar11 & 0xcfffffffffffffff;
      uVar5 = 0x112f2e690;
      puVar6 = &UNK_10db729d0;
      puVar4 = &uStack_130;
      goto LAB_102fba680;
    }
  }
  uVar5 = 0x112f2e8c8;
  puVar6 = &UNK_10db73200;
  puVar4 = &uStack_b0;
LAB_102fba680:
  FUN_102fbdbfc(puVar4,uVar5,puVar6);
  return;
}


