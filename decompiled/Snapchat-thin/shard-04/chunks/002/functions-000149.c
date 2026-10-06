/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032022a4; end: 10320232f;  */

undefined * FUN_1032022a4(undefined8 param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103202330);
    (*pcVar1)();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
    func_0x000107c5fc70(param_2,&UNK_11076a028);
    *(undefined **)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x20) = param_1;
    param_2 = param_2 + -1;
    if (param_2 != (undefined *)0x0) {
      puVar3 = (undefined8 *)(puVar2 + 0x28);
      do {
        FUN_103202330(param_1);
        *puVar3 = param_1;
        param_2 = param_2 + -1;
        puVar3 = puVar3 + 1;
      } while (param_2 != (undefined *)0x0);
    }
    FUN_103202330(param_1);
  }
  return puVar2;
}



/* Entry: 103202330; end: 10320233f;  */

void FUN_103202330(ulong param_1)

{
  if (param_1 < 0xb) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 103202340; end: 10320236b;  */

/* WARNING: Possible PIC construction at 0x000103202358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010320235c) */

void FUN_103202340(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *param_1 = *param_2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 10320236c; end: 103202377;  */

void FUN_10320236c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c549b0();
  func_0x000107c61170(puVar1);
  func_0x000107c4348c(0,0,uVar7,uVar8,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52610();
  lVar2 = 0x112ea49e8;
  func_0x0001000285a8(0x112ea49e8,&UNK_10db2c3c0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  uVar8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar2 + 0x20) = uVar8;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  func_0x000107c61174(uVar8);
  func_0x000107c5c5fc(uVar7);
  func_0x000107c61180();
  uVar8 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  *(undefined **)(lVar2 + 0x28) = puVar3;
  *(undefined8 *)(lVar2 + 0x30) = uVar8;
  *(undefined **)(lVar2 + 0x38) = puVar1;
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar1);
  lVar4 = lVar2;
  func_0x00010254d530(lVar2);
  func_0x000107c61588(lVar2);
  uVar8 = 0x112ea49f0;
  func_0x0001000285a8(0x112ea49f0,&UNK_10dab7b80);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),2,uVar8);
  func_0x000107c5fadc(uVar5,uVar6);
  lVar2 = lVar4;
  func_0x00010254a080(lVar4);
  func_0x000107c6142c(lVar4);
  uVar6 = 0;
  func_0x000100eca28c(0);
  uVar8 = uVar6;
  func_0x000100ecbdec();
  lVar4 = lVar2;
  func_0x000107c5f9dc(lVar2,uVar6,PTR___sypN_11034f1a8 + 8,uVar8);
  func_0x000107c6142c(lVar2);
  func_0x000107c422b8(0x4010000000000000,0x4010000000000000,uVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 103202378; end: 103202397;  */

void FUN_103202378(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103202398; end: 1032023c7;  */

void FUN_103202398(long param_1,long param_2)

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



/* Entry: 1032023c8; end: 1032024db;  */

undefined * FUN_1032023c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b58e0;
  func_0x000107c610f8(PTR_PTR_1126b58e0);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_2,param_3);
  puVar2 = puVar1;
  func_0x000107c5e458(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar2);
  uVar3 = param_1;
  func_0x000107c5c7d8(param_1);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5e820(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c51820(param_1);
  func_0x000107c5e770(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c45120(param_1);
  func_0x000107c5e5a4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  puVar2 = puVar1;
  func_0x000107c3ecc8(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1032024dc; end: 1032024e3;  */

void FUN_1032024dc(long param_1)

{
  long lStack_30;
  undefined1 uStack_28;
  
  if (param_1 != 0) {
    uStack_28 = 0;
    lStack_30 = param_1;
    func_0x000107c61174();
    func_0x000100087f6c(&lStack_30);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1032024e4; end: 103202523;  */

void FUN_1032024e4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103202524; end: 10320256f;  */

void FUN_103202524(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *param_2;
  lStack_48 = 0;
  uVar2 = 0;
  FUN_1032024e4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = 0;
  FUN_1032024e4(0,0x112ea4a00,&PTR_PTR_1126bea48);
  uVar4 = uVar3;
  func_0x000100120cb0();
  func_0x000107c5f9e0(uVar6,&lStack_48,uVar2,uVar3,uVar4);
  if (lStack_48 != 0) {
    *param_1 = uVar5;
    param_1[1] = lStack_48;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ff678);
  (*pcVar1)();
}



/* Entry: 103202570; end: 103202647;  */

undefined8 FUN_103202570(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f4c308;
  func_0x0001000285a8(0x112f4c308,&UNK_10db9cd10);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103202648; end: 103202653;  */

void FUN_103202648(void)

{
  return;
}



/* Entry: 103202654; end: 10320269f;  */

undefined8 * FUN_103202654(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 1032026a0; end: 1032026db;  */

undefined8 * FUN_1032026a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 1032026dc; end: 1032027ab;  */

int FUN_1032026dc(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1032027ac; end: 1032027df;  */

undefined8 * FUN_1032027ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 1032027e0; end: 10320283b;  */

undefined8 * FUN_1032027e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10320283c; end: 103202877;  */

undefined8 * FUN_10320283c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103202878; end: 10320298b;  */

int FUN_103202878(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10320298c; end: 103202a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10320298c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_112fc2130);
  func_0x000107c6157c(uVar3);
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(lStack_48);
  func_0x000100083b20(&lStack_50);
  uVar2 = *(undefined8 *)(lStack_50 + _DAT_1130190c8);
  func_0x000107c61174();
  func_0x000107c61170();
  param_1[3] = &UNK_110625818;
  func_0x00010320348c();
  param_1[4] = lStack_50;
  *param_1 = uVar3;
  param_1[1] = lVar1;
  param_1[2] = uVar2;
  return;
}



/* Entry: 103202a70; end: 103202a83;  */

void FUN_103202a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110624ac0;
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c613fc(&UNK_110624ac0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_103202b50,puVar1);
  return;
}



/* Entry: 103202a84; end: 103202b1b;  */

void FUN_103202a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c613fc(param_4,0x28,7);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  *(undefined8 *)(param_4 + 0x18) = param_2;
  *(undefined8 *)(param_4 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_5,param_4);
  return;
}



/* Entry: 103202b1c; end: 103202b4f;  */

void FUN_103202b1c(void)

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



/* Entry: 103202b50; end: 103202c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103202b50(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 in_x3;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  uVar6 = *(undefined8 *)(lStack_48 + _DAT_112fc2130);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(lVar2);
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  func_0x000107c4456c();
  func_0x000107c61180();
  func_0x000107c61170(lStack_48);
  if (lVar2 != 0) {
    func_0x000100083b20(&lStack_50);
    uVar3 = *(undefined8 *)(lStack_50 + _DAT_1130190c8);
    func_0x000107c61174();
    func_0x000107c61170(lStack_50);
    FUN_10320e0a8();
    param_1[3] = &UNK_110625e40;
    uVar4 = uVar6;
    func_0x00010320344c();
    param_1[4] = uVar4;
    puVar5 = &UNK_110624c70;
    func_0x000107c613fc(&UNK_110624c70,0x30,7);
    *param_1 = puVar5;
    *(undefined8 *)(puVar5 + 0x10) = uVar6;
    *(long *)(puVar5 + 0x18) = lVar2;
    *(undefined8 *)(puVar5 + 0x20) = uVar3;
    *(undefined8 *)(puVar5 + 0x28) = in_x3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103202c74);
  (*pcVar1)();
}



/* Entry: 103202c74; end: 103202c7f;  */

void FUN_103202c74(undefined8 param_1)

{
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103202c80,param_1);
  return;
}



/* Entry: 103202c80; end: 103202cbb;  */

void FUN_103202c80(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000100083b20(auStack_50);
  FUN_103208100(param_1,uStack_40,uStack_38);
  return;
}



/* Entry: 103202cbc; end: 103202d83;  */

void FUN_103202cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110624ae8;
  func_0x000107c613fc(&UNK_110624ae8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_103202d84,puVar1);
  return;
}



/* Entry: 103202d84; end: 103202f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103202d84(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long alStack_90 [6];
  
  func_0x000100083b20(alStack_90);
  func_0x000100083b20(alStack_90);
  lVar3 = alStack_90[0];
  lVar2 = *(long *)(alStack_90[0] + _DAT_1130190c8);
  func_0x000107c61174();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x000100083b20(alStack_90);
    lVar2 = alStack_90[0];
    func_0x000107c5b4b0();
    func_0x000107c61180();
    func_0x000107c61170(alStack_90[0]);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103202f58);
      (*pcVar1)();
    }
    func_0x000100083b20(&lStack_98);
    lVar4 = lStack_98;
    func_0x000107c4456c();
    func_0x000107c61180();
    func_0x000107c61170(lStack_98);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103202f5c);
      (*pcVar1)();
    }
    lVar5 = lVar3;
    func_0x000107c4057c();
    func_0x000100083b20(&uStack_a0);
    uVar6 = uStack_a0;
    func_0x000107c4cdb8();
    func_0x000107c61180();
    func_0x000107c61170(uStack_a0);
    func_0x000100083b20(&lStack_a8);
    lVar7 = lStack_a8;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103202f60);
      (*pcVar1)();
    }
    param_1[3] = &UNK_1106259a8;
    func_0x00010320340c();
    param_1[4] = lStack_a8;
    puVar8 = &UNK_110624c48;
    func_0x000107c613fc(&UNK_110624c48,0x38,7);
    *param_1 = puVar8;
    func_0x000107c615e8(lVar3);
    *(long *)(puVar8 + 0x10) = lVar2;
    *(long *)(puVar8 + 0x18) = lVar4;
    puVar8[0x20] = (char)lVar5;
    *(undefined8 *)(puVar8 + 0x28) = uVar6;
    *(long *)(puVar8 + 0x30) = lVar7;
  }
  return;
}



/* Entry: 103202f60; end: 103202f6b;  */

void FUN_103202f60(undefined8 param_1)

{
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x103202fc4,param_1);
  return;
}



/* Entry: 103202f6c; end: 103203063;  */

void FUN_103202f6c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 103203064; end: 10320332b;  */

void FUN_103203064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110624b10;
  func_0x000107c613fc(&UNK_110624b10,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(0x103203120,puVar1);
  return;
}



/* Entry: 10320332c; end: 10320338b;  */

undefined1  [16] FUN_10320332c(void)

{
  return ZEXT816(0x110624b38);
}



/* Entry: 10320338c; end: 1032034cb;  */

void FUN_10320338c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c558 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9db78;
  func_0x000107c61520(&DAT_10db9db78,&UNK_110625bf0);
  puRam0000000112f4c558 = puVar1;
  return;
}



/* Entry: 1032034cc; end: 1032036f3;  */

long FUN_1032034cc(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0x10;
  *(undefined8 *)(lVar1 + 0x10) = 8;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar2 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112f4b528;
  func_0x0001000285a8(0x112f4b528,&UNK_10db9ab20);
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[3];
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  uVar2 = 0x112f4b530;
  func_0x0001000285a8(0x112f4b530,&UNK_10db9ab28);
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0x78) = unaff_x20[5];
  *(undefined8 *)(lVar1 + 0x70) = uVar2;
  uVar2 = 0x112f4c580;
  func_0x0001000285a8(0x112f4c580,&UNK_10db9d0b0);
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 0xa0) = unaff_x20[7];
  *(undefined8 *)(lVar1 + 0x98) = uVar2;
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  uVar3 = unaff_x20[8];
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  *(undefined8 *)(lVar1 + 200) = unaff_x20[9];
  *(undefined8 *)(lVar1 + 0xc0) = uVar3;
  *(undefined8 *)(lVar1 + 0xf0) = uStack_b8;
  *(undefined8 *)(lVar1 + 0xe8) = uStack_c0;
  uStack_c8 = unaff_x20[0xd];
  uStack_d0 = unaff_x20[0xc];
  uStack_d8 = unaff_x20[0xf];
  uStack_e0 = unaff_x20[0xe];
  *(undefined8 *)(lVar1 + 0x118) = uStack_c8;
  *(undefined8 *)(lVar1 + 0x110) = uStack_d0;
  *(undefined8 *)(lVar1 + 0xd8) = uVar2;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x100) = uVar2;
  *(undefined ***)(lVar1 + 0x108) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x128) = uVar2;
  *(undefined ***)(lVar1 + 0x130) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x150) = uVar2;
  *(undefined ***)(lVar1 + 0x158) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[0xe];
  *(undefined8 *)(lVar1 + 0x140) = unaff_x20[0xf];
  *(undefined8 *)(lVar1 + 0x138) = uVar2;
  FUN_1032038fc(&uStack_70,auStack_f0,0x112f4b538,&UNK_10db9ab30);
  FUN_1032038fc(&uStack_80,auStack_f0,0x112f4b528,&UNK_10db9ab20);
  FUN_1032038fc(&uStack_90,auStack_f0,0x112f4b530,&UNK_10db9ab28);
  FUN_1032038fc(&uStack_a0,auStack_f0,0x112f4c580,&UNK_10db9d0b0);
  FUN_1032038fc(&uStack_b0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  FUN_1032038fc(&uStack_c0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  FUN_1032038fc(&uStack_d0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  FUN_1032038fc(&uStack_e0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 1032036f4; end: 103203747;  */

void FUN_1032036f4(undefined8 *param_1)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  
  FUN_1032037f8(&uStack_a0);
  func_0x000103203e38(&uStack_a0);
  param_1[9] = uStack_58;
  param_1[8] = uStack_60;
  param_1[0xb] = uStack_48;
  param_1[10] = uStack_50;
  param_1[0xd] = uStack_38;
  param_1[0xc] = uStack_40;
  param_1[0xf] = uStack_28;
  param_1[0xe] = uStack_30;
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  return;
}



/* Entry: 103203748; end: 10320374b;  */

long FUN_103203748(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0x10;
  *(undefined8 *)(lVar1 + 0x10) = 8;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar2 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112f4b528;
  func_0x0001000285a8(0x112f4b528,&UNK_10db9ab20);
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[3];
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  uVar2 = 0x112f4b530;
  func_0x0001000285a8(0x112f4b530,&UNK_10db9ab28);
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0x78) = unaff_x20[5];
  *(undefined8 *)(lVar1 + 0x70) = uVar2;
  uVar2 = 0x112f4c580;
  func_0x0001000285a8(0x112f4c580,&UNK_10db9d0b0);
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 0xa0) = unaff_x20[7];
  *(undefined8 *)(lVar1 + 0x98) = uVar2;
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  uVar3 = unaff_x20[8];
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  *(undefined8 *)(lVar1 + 200) = unaff_x20[9];
  *(undefined8 *)(lVar1 + 0xc0) = uVar3;
  *(undefined8 *)(lVar1 + 0xf0) = uStack_b8;
  *(undefined8 *)(lVar1 + 0xe8) = uStack_c0;
  uStack_c8 = unaff_x20[0xd];
  uStack_d0 = unaff_x20[0xc];
  uStack_d8 = unaff_x20[0xf];
  uStack_e0 = unaff_x20[0xe];
  *(undefined8 *)(lVar1 + 0x118) = uStack_c8;
  *(undefined8 *)(lVar1 + 0x110) = uStack_d0;
  *(undefined8 *)(lVar1 + 0xd8) = uVar2;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x100) = uVar2;
  *(undefined ***)(lVar1 + 0x108) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x128) = uVar2;
  *(undefined ***)(lVar1 + 0x130) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x150) = uVar2;
  *(undefined ***)(lVar1 + 0x158) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[0xe];
  *(undefined8 *)(lVar1 + 0x140) = unaff_x20[0xf];
  *(undefined8 *)(lVar1 + 0x138) = uVar2;
  FUN_1032038fc(&uStack_70,auStack_f0,0x112f4b538,&UNK_10db9ab30);
  FUN_1032038fc(&uStack_80,auStack_f0,0x112f4b528,&UNK_10db9ab20);
  FUN_1032038fc(&uStack_90,auStack_f0,0x112f4b530,&UNK_10db9ab28);
  FUN_1032038fc(&uStack_a0,auStack_f0,0x112f4c580,&UNK_10db9d0b0);
  FUN_1032038fc(&uStack_b0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  FUN_1032038fc(&uStack_c0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  FUN_1032038fc(&uStack_d0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  FUN_1032038fc(&uStack_e0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 10320374c; end: 103203773;  */

void FUN_10320374c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x000103b93a60();
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 103203774; end: 1032037f7;  */

long FUN_103203774(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  lVar3 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar4 = 0x112f4c588;
  func_0x0001000285a8(0x112f4c588,&UNK_10db9d0c0);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(undefined ***)(lVar3 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  return lVar3;
}



/* Entry: 1032037f8; end: 1032038fb;  */

/* WARNING: Possible PIC construction at 0x0001032038a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032038a8) */

void FUN_1032037f8(void)

{
  undefined **ppuVar1;
  
  func_0x00010326c18c();
  func_0x000107c5faec();
  func_0x000107c5faec();
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0d958);
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0ea78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0ead8;
  func_0x000107c5faec();
  func_0x000103b93ea8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(ppuVar1[1]);
  return;
}



/* Entry: 1032038fc; end: 1032039c7;  */

undefined8 FUN_1032038fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1032039c8; end: 103203a7b;  */

undefined8 * FUN_1032039c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
  uVar6 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar6;
  uVar7 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar7;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar7);
  return param_1;
}



/* Entry: 103203a7c; end: 103203ba7;  */

undefined8 * FUN_103203a7c(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103203ba8; end: 103203c4b;  */

undefined8 * FUN_103203ba8(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xf];
  uVar2 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103203c4c; end: 103203d0b;  */

int FUN_103203c4c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103203d0c; end: 103203d7b;  */

undefined8 * FUN_103203d0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103203d7c; end: 103203e4f;  */

int FUN_103203d7c(int *param_1,int param_2)

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



/* Entry: 103203e50; end: 103203e93;  */

void FUN_103203e50(long param_1,long *param_2,long param_3)

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



/* Entry: 103203e94; end: 103203eb3;  */

void FUN_103203e94(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 103203eb4; end: 103203ee3;  */

void FUN_103203eb4(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  func_0x000107c61170(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1[2]);
  return;
}



/* Entry: 103203ee4; end: 103203fa3;  */

undefined8 * FUN_103203ee4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c615f0(uVar2);
  return param_1;
}



/* Entry: 103203fa4; end: 103203fef;  */

undefined8 * FUN_103203fa4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 103203ff0; end: 103204087;  */

int FUN_103203ff0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103204088; end: 103204847;  */

/* WARNING: Removing unreachable block (ram,0x0001032043bc) */

void FUN_103204088(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined ***pppuVar12;
  undefined8 *puStack_328;
  undefined **ppuStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined **ppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_108 = param_2[0xd];
  uStack_110 = param_2[0xc];
  uStack_f8 = param_2[0xf];
  uStack_100 = param_2[0xe];
  uStack_f0 = param_2[0x10];
  uStack_148 = param_2[5];
  uStack_150 = param_2[4];
  uStack_138 = param_2[7];
  uStack_140 = param_2[6];
  uStack_128 = param_2[9];
  uStack_130 = param_2[8];
  uStack_118 = param_2[0xb];
  uStack_120 = param_2[10];
  uStack_168 = param_2[1];
  uStack_170 = *param_2;
  uStack_158 = param_2[3];
  uStack_160 = param_2[2];
  puVar2 = &UNK_10db9d310;
  func_0x000107c614e0(&UNK_10db9d310);
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  iVar1 = (int)&uStack_e0;
  FUN_10320498c();
  if (iVar1 == 1) {
    func_0x000107c61574(puVar2);
  }
  else {
    uStack_228 = uStack_98;
    uStack_230 = uStack_a0;
    uStack_218 = uStack_88;
    uStack_220 = uStack_90;
    uStack_208 = uStack_78;
    uStack_210 = uStack_80;
    uStack_1f8 = uStack_68;
    uStack_200 = uStack_70;
    uStack_268 = uStack_d8;
    uStack_270 = uStack_e0;
    uStack_258 = uStack_c8;
    uStack_260 = uStack_d0;
    uStack_248 = uStack_b8;
    uStack_250 = uStack_c0;
    uStack_238 = uStack_a8;
    uStack_240 = uStack_b0;
    uStack_1e8 = uStack_d8;
    uStack_1f0 = uStack_e0;
    uStack_1d8 = uStack_c8;
    uStack_1e0 = uStack_d0;
    uStack_1c8 = uStack_b8;
    uStack_1d0 = uStack_c0;
    uStack_1b8 = uStack_a8;
    uStack_1c0 = uStack_b0;
    uStack_188 = uStack_78;
    uStack_190 = uStack_80;
    uStack_178 = uStack_68;
    uStack_180 = uStack_70;
    uStack_1a8 = uStack_98;
    uStack_1b0 = uStack_a0;
    uStack_198 = uStack_88;
    uStack_1a0 = uStack_90;
    FUN_1032049a4(&uStack_270,&ppuStack_2f0);
    puVar3 = &uStack_1f0;
    FUN_103205f88(puVar3,&uStack_170,puVar2);
    uVar6 = 0x112f4c5b8;
    func_0x0001032049e0(&uStack_e0,0x112f4c5b8,&UNK_10db9d330);
    func_0x000107c61574(puVar2);
    if (puVar3 == (undefined8 *)0x0) goto LAB_103204390;
    ppuVar10 = &PTR____CFConstantStringClassReference_110ebeb58;
    func_0x000107c5faec();
    func_0x000107c61170(&PTR____CFConstantStringClassReference_110ebeb58);
    ppuStack_320 = ppuVar10;
    uStack_318 = uVar6;
    func_0x000107c61434(uVar6);
    pppuVar4 = &ppuStack_320;
    func_0x000107c6061c(pppuVar4,PTR___sSSN_11034da80);
    puVar5 = puVar3;
    func_0x000107c3ac74();
    func_0x000107c61180();
    func_0x000107c615e8(pppuVar4);
    if (puVar5 == (undefined8 *)0x0) {
      func_0x000107c6142c(uVar6);
      uStack_318 = 0;
      ppuStack_320 = (undefined **)0x0;
      lStack_308 = 0;
      uStack_310 = 0;
    }
    else {
      func_0x000107c60234(&ppuStack_320,puVar5);
      func_0x000107c615e8(puVar5);
      func_0x000107c6142c(uVar6);
    }
    uStack_2e8 = uStack_318;
    ppuStack_2f0 = ppuStack_320;
    lStack_2d8 = lStack_308;
    uStack_2e0 = uStack_310;
    if (lStack_308 == 0) {
      func_0x000107c61170(puVar3);
      func_0x0001032049e0(&ppuStack_2f0,0x112d387f8,&UNK_10d902650);
      goto LAB_103204390;
    }
    uVar6 = 0;
    func_0x000103204a20(0,0x112d4ed88,&PTR_PTR_1126b15c8);
    ppuVar7 = &puStack_328;
    pppuVar4 = &ppuStack_2f0;
    func_0x000107c6147c(ppuVar7,pppuVar4,PTR___sypN_11034f1a8 + 8,uVar6,6);
    if (((ulong)ppuVar7 & 1) != 0) {
      puVar5 = puStack_328;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (puVar5 != (undefined8 *)0x0) {
        puVar8 = puVar5;
        func_0x000107c5faec();
        pppuVar12 = pppuVar4;
        func_0x000107c61170(puVar5);
        puVar5 = puStack_328;
        func_0x000107c3e9e8();
        func_0x000107c61180();
        puVar11 = puStack_328;
        func_0x000107c40cdc();
        func_0x000107c61180();
        if (puVar11 != (undefined8 *)0x0) {
          puVar9 = puVar11;
          func_0x000107c4f3b8();
          func_0x000107c61180();
          func_0x000107c61170(puVar11);
          if (puVar9 != (undefined8 *)0x0) {
            puVar11 = puVar9;
            func_0x000107c5faec();
            func_0x000107c61170(puVar9);
            func_0x000107c61170(puStack_328);
            func_0x000107c61170(puVar3);
            goto LAB_103204370;
          }
        }
        func_0x000107c61170(puStack_328);
        func_0x000107c61170(puVar3);
        puVar11 = (undefined8 *)0x0;
        pppuVar12 = (undefined ***)0x0;
LAB_103204370:
        *param_1 = puVar8;
        param_1[1] = pppuVar4;
        param_1[2] = puVar5;
        param_1[3] = puVar11;
        param_1[4] = pppuVar12;
        return;
      }
      func_0x000107c61170(puVar3);
      puVar3 = puStack_328;
    }
    func_0x000107c61170(puVar3);
  }
LAB_103204390:
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 103204848; end: 103204943;  */

code * FUN_103204848(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar5 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar6 = unaff_x20[2];
  uVar2 = 0x112f4c5a8;
  func_0x0001000285a8(0x112f4c5a8,&UNK_10db9d300);
  pcVar3 = FUN_103204088;
  func_0x0001000bfde0(FUN_103204088,0,uVar2);
  uVar2 = 0x1032043c0;
  func_0x00010487de38(0x1032043c0,0);
  func_0x000107c61574(pcVar3);
  puVar4 = &UNK_110624fb8;
  func_0x000107c613fc(&UNK_110624fb8,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar1);
  func_0x000107c615f0(uVar6);
  uVar5 = 0x112d36838;
  func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
  pcVar3 = FUN_103204944;
  func_0x00010068b194(FUN_103204944,puVar4,uVar5);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar4);
  return pcVar3;
}



/* Entry: 103204944; end: 10320494f;  */

void FUN_103204944(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_68;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(ulong *)(unaff_x20 + 0x20);
  lVar9 = param_1[1];
  if (lVar9 == 0) {
    func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
    uStack_68 = 0;
    func_0x000100854cb0(&uStack_68);
    return;
  }
  uVar7 = *param_1;
  uVar8 = param_1[2];
  uVar6 = param_1[4];
  if (uVar6 == 0) {
    func_0x000107c61174(uVar8);
  }
  else {
    uVar10 = param_1[3];
    uVar1 = uVar10 & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar1 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      FUN_103204950(uVar7,lVar9,uVar8,uVar10,uVar6);
      func_0x000107c61434(uVar6);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        uVar3 = 0xd00000000000001e;
        func_0x000107c5fadc(0xd00000000000001e,0x800000010f1311a0);
        func_0x000107c3ebd4();
        func_0x000107c61170(uVar3);
        if ((uVar5 & 1) != 0) {
          lVar4 = lVar2;
          func_0x000107c614f0(lVar2);
          uVar7 = 0x112d38280;
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          func_0x000107c61538();
          FUN_10326db34(uVar10,uVar6,0x5a0,uVar7,lVar4);
          func_0x000107c6142c(lVar9);
          func_0x000107c615e8(lVar2);
          func_0x000107c61430(uVar6,2);
          func_0x000107c61170(uVar8);
          return;
        }
        func_0x000107c615e8(lVar2);
      }
      func_0x000107c6142c(uVar6);
      goto LAB_103204798;
    }
    func_0x000107c61174(uVar8);
    func_0x000107c61434(uVar6);
  }
  func_0x000107c61434(lVar9);
LAB_103204798:
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
    uStack_68 = 0;
    func_0x000100854cb0(&uStack_68);
    func_0x000107c6142c(lVar9);
  }
  else {
    lVar2 = lVar4;
    func_0x000107c614f0();
    FUN_10326d3a8(uVar7,lVar9,uVar8,lVar2);
    func_0x000107c6142c(lVar9);
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61170(uVar8);
  func_0x000107c6142c(uVar6);
  return;
}



/* Entry: 103204950; end: 10320498b;  */

void FUN_103204950(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_2 != 0) {
    func_0x000107c61434(param_5);
    func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(param_3);
    return;
  }
  return;
}



/* Entry: 10320498c; end: 1032049a3;  */

int FUN_10320498c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032049a4; end: 103204a5f;  */

undefined8 FUN_1032049a4(undefined8 param_1,undefined8 param_2)

{
  FUN_1032039c8(param_2,param_1);
  return param_2;
}



/* Entry: 103204a60; end: 103204a67;  */

undefined8 * FUN_103204a60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c615f0(uVar2);
  return param_1;
}



/* Entry: 103204a68; end: 103204aab;  */

void FUN_103204a68(void)

{
  undefined8 uStack_28;
  
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  uStack_28 = 0;
  func_0x000100854cb0(&uStack_28);
  return;
}



/* Entry: 103204aac; end: 103204acb;  */

undefined1  [16] FUN_103204aac(void)

{
  return ZEXT816(0x110624ff8);
}



/* Entry: 103204acc; end: 103204c33;  */

void FUN_103204acc(long *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_2d0 [128];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_e8 = param_2[0xd];
  uStack_f0 = param_2[0xc];
  uStack_d8 = param_2[0xf];
  uStack_e0 = param_2[0xe];
  uStack_d0 = param_2[0x10];
  uStack_128 = param_2[5];
  uStack_130 = param_2[4];
  uStack_118 = param_2[7];
  uStack_120 = param_2[6];
  uStack_108 = param_2[9];
  uStack_110 = param_2[8];
  uStack_f8 = param_2[0xb];
  uStack_100 = param_2[10];
  uStack_148 = param_2[1];
  uStack_150 = *param_2;
  uStack_138 = param_2[3];
  uStack_140 = param_2[2];
  puVar2 = &UNK_10db9d3a0;
  func_0x000107c614e0(&UNK_10db9d3a0);
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  iVar1 = (int)&uStack_c0;
  FUN_10320498c();
  if (iVar1 == 1) {
    func_0x000107c61574(puVar2);
    puVar4 = (undefined8 *)0x0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uStack_208 = uStack_78;
    uStack_210 = uStack_80;
    uStack_1f8 = uStack_68;
    uStack_200 = uStack_70;
    uStack_1e8 = uStack_58;
    uStack_1f0 = uStack_60;
    uStack_1d8 = uStack_48;
    uStack_1e0 = uStack_50;
    uStack_248 = uStack_b8;
    uStack_250 = uStack_c0;
    uStack_238 = uStack_a8;
    uStack_240 = uStack_b0;
    uStack_228 = uStack_98;
    uStack_230 = uStack_a0;
    uStack_218 = uStack_88;
    uStack_220 = uStack_90;
    uStack_1c8 = uStack_b8;
    uStack_1d0 = uStack_c0;
    uStack_1b8 = uStack_a8;
    uStack_1c0 = uStack_b0;
    uStack_1a8 = uStack_98;
    uStack_1b0 = uStack_a0;
    uStack_198 = uStack_88;
    uStack_1a0 = uStack_90;
    uStack_168 = uStack_58;
    uStack_170 = uStack_60;
    uStack_158 = uStack_48;
    uStack_160 = uStack_50;
    uStack_188 = uStack_78;
    uStack_190 = uStack_80;
    uStack_178 = uStack_68;
    uStack_180 = uStack_70;
    FUN_1032049a4(&uStack_250,auStack_2d0);
    puVar4 = &uStack_1d0;
    puVar3 = &uStack_150;
    FUN_1032060e4(puVar4,puVar3,puVar2);
    func_0x000103204ddc(&uStack_c0);
    func_0x000107c61574(puVar2);
    *param_1 = (long)puVar4;
    param_1[1] = (long)puVar3;
    puVar2 = &UNK_10db9d3c8;
    func_0x000107c614e0(&UNK_10db9d3c8);
    FUN_1032049a4(&uStack_250,auStack_2d0);
    puVar4 = &uStack_1d0;
    FUN_103205fac(puVar4,&uStack_150,puVar2);
    func_0x000103204ddc(&uStack_c0);
    func_0x000107c61574(puVar2);
  }
  param_1[2] = (long)puVar4;
  return;
}



/* Entry: 103204c34; end: 103204c7f;  */

ulong FUN_103204c34(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_2[1];
  uVar1 = (ulong)(uVar2 == 0 && uVar3 == 0);
  if (uVar2 != 0 && uVar3 != 0) {
    uVar1 = *param_1;
    if (uVar1 != *param_2 || uVar2 != uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )();
      return uVar1;
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 103204c80; end: 103204d2b;  */

void FUN_103204c80(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      lVar2 = param_3;
      func_0x000107c614f0(param_3);
      func_0x000107c615f0(param_3);
      FUN_103207188(param_1,param_2,lVar2);
      func_0x000107c615e8(param_3);
      return;
    }
  }
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  uStack_38 = 0;
  func_0x000100854cb0(&uStack_38);
  return;
}



/* Entry: 103204d2c; end: 103204d3b;  */

void FUN_103204d2c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_38;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  if ((uVar2 != 0) && (uVar4 != 0)) {
    uVar3 = uVar1 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar3 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar3 != 0) {
      uVar3 = uVar4;
      func_0x000107c614f0(uVar4);
      func_0x000107c615f0(uVar4);
      FUN_103207188(uVar1,uVar2,uVar3);
      func_0x000107c615e8(uVar4);
      return;
    }
  }
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  uStack_38 = 0;
  func_0x000100854cb0(&uStack_38);
  return;
}



/* Entry: 103204d3c; end: 103204e23;  */

code * FUN_103204d3c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  
  uVar1 = 0x112f4c5c0;
  func_0x0001000285a8(0x112f4c5c0,&UNK_10db9d398);
  pcVar2 = FUN_103204acc;
  func_0x0001000bfde0(FUN_103204acc,0,uVar1);
  pcVar3 = FUN_103204c34;
  func_0x00010487de38(FUN_103204c34,0);
  func_0x000107c61574(pcVar2);
  uVar1 = 0x112d36838;
  func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
  pcVar2 = FUN_103204d2c;
  func_0x00010068b194(FUN_103204d2c,0,uVar1);
  func_0x000107c61574(pcVar3);
  return pcVar2;
}



/* Entry: 103204e24; end: 103204e37;  */

bool FUN_103204e24(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103204e38; end: 103204f13;  */

void FUN_103204e38(void)

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



/* Entry: 103204f14; end: 1032050ef;  */

void FUN_103204f14(undefined1 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2d0 [128];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_e8 = param_2[0xd];
  uStack_f0 = param_2[0xc];
  uStack_d8 = param_2[0xf];
  uStack_e0 = param_2[0xe];
  uStack_d0 = param_2[0x10];
  uStack_128 = param_2[5];
  uStack_130 = param_2[4];
  uStack_118 = param_2[7];
  uStack_120 = param_2[6];
  uStack_108 = param_2[9];
  uStack_110 = param_2[8];
  uStack_f8 = param_2[0xb];
  uStack_100 = param_2[10];
  uStack_148 = param_2[1];
  uStack_150 = *param_2;
  uStack_138 = param_2[3];
  uStack_140 = param_2[2];
  puVar4 = &UNK_10db9d4c0;
  func_0x000107c614e0(&UNK_10db9d4c0);
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  iVar3 = (int)&uStack_c0;
  FUN_10320498c();
  if (iVar3 == 1) {
    func_0x000107c61574(puVar4);
  }
  else {
    uStack_208 = uStack_78;
    uStack_210 = uStack_80;
    uStack_1f8 = uStack_68;
    uStack_200 = uStack_70;
    uStack_1e8 = uStack_58;
    uStack_1f0 = uStack_60;
    uStack_1d8 = uStack_48;
    uStack_1e0 = uStack_50;
    uStack_248 = uStack_b8;
    uStack_250 = uStack_c0;
    uStack_238 = uStack_a8;
    uStack_240 = uStack_b0;
    uStack_228 = uStack_98;
    uStack_230 = uStack_a0;
    uStack_218 = uStack_88;
    uStack_220 = uStack_90;
    uStack_1c8 = uStack_b8;
    uStack_1d0 = uStack_c0;
    uStack_1b8 = uStack_a8;
    uStack_1c0 = uStack_b0;
    uStack_1a8 = uStack_98;
    uStack_1b0 = uStack_a0;
    uStack_198 = uStack_88;
    uStack_1a0 = uStack_90;
    uStack_168 = uStack_58;
    uStack_170 = uStack_60;
    uStack_158 = uStack_48;
    uStack_160 = uStack_50;
    uStack_188 = uStack_78;
    uStack_190 = uStack_80;
    uStack_178 = uStack_68;
    uStack_180 = uStack_70;
    FUN_1032049a4(&uStack_250,auStack_2d0);
    puVar5 = &uStack_1d0;
    FUN_103207138(puVar5,&uStack_150,puVar4);
    func_0x000103204ddc(&uStack_c0);
    func_0x000107c61574(puVar4);
    if (((ulong)puVar5 & 1) != 0) {
      uVar2 = 3;
      goto LAB_1032050d4;
    }
    puVar4 = &UNK_10db9d4e8;
    func_0x000107c614e0(&UNK_10db9d4e8);
    FUN_1032049a4(&uStack_250,auStack_2d0);
    puVar5 = &uStack_1d0;
    FUN_103207138(puVar5,&uStack_150,puVar4);
    func_0x000103204ddc(&uStack_c0);
    func_0x000107c61574(puVar4);
    if (((ulong)puVar5 & 1) != 0) {
      uVar2 = 2;
      goto LAB_1032050d4;
    }
    puVar4 = &UNK_10db9d508;
    func_0x000107c614e0(&UNK_10db9d508);
    FUN_1032049a4(&uStack_250,auStack_2d0);
    puVar5 = &uStack_1d0;
    puVar6 = &uStack_150;
    FUN_1032060e4(puVar5,puVar6,puVar4);
    func_0x000103204ddc(&uStack_c0);
    func_0x000107c61574(puVar4);
    if (puVar6 != (undefined8 *)0x0) {
      func_0x000107c6142c(puVar6);
      uVar1 = (ulong)puVar5 & 0xffffffffffff;
      if (((ulong)puVar6 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)puVar6 >> 0x38 & 0xf;
      }
      uVar2 = uVar1 == 0;
      goto LAB_1032050d4;
    }
  }
  uVar2 = 1;
LAB_1032050d4:
  *param_1 = uVar2;
  return;
}



/* Entry: 1032050f0; end: 10320515f;  */

void FUN_1032050f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f4c5d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4c5c8;
  func_0x00010002969c(0x112f4c5c8,&UNK_10db9d3f0);
  uVar2 = uVar1;
  FUN_103205160();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112f4c5d0 = puVar3;
  return;
}



/* Entry: 103205160; end: 10320519f;  */

void FUN_103205160(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c5d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9d48c;
  func_0x000107c61520(&UNK_10db9d48c,&UNK_110625160);
  puRam0000000112f4c5d8 = puVar1;
  return;
}



/* Entry: 1032051a0; end: 103205413;  */

void FUN_1032051a0(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_48;
  
  bVar2 = *param_1;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      uVar4 = 0x112f4c5c0;
      func_0x0001000285a8(0x112f4c5c0,&UNK_10db9d398);
      pcVar5 = FUN_103204acc;
      func_0x0001000bfde0(FUN_103204acc,0,uVar4);
      pcVar3 = FUN_103204c34;
      func_0x00010487de38(FUN_103204c34,0);
      func_0x000107c61574(pcVar5);
      uVar4 = 0x112d36838;
      func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
      func_0x00010068b194(FUN_103204d2c,0,uVar4);
      func_0x000107c61574(pcVar3);
      return;
    }
    uVar7 = *param_2;
    uVar1 = param_2[1];
    uVar8 = param_2[2];
    uVar4 = 0x112f4c5a8;
    func_0x0001000285a8(0x112f4c5a8,&UNK_10db9d300);
    pcVar5 = FUN_103204088;
    func_0x0001000bfde0(FUN_103204088,0,uVar4);
    uVar4 = 0x1032043c0;
    func_0x00010487de38(0x1032043c0,0);
    func_0x000107c61574(pcVar5);
    puVar6 = &UNK_1106251d0;
    func_0x000107c613fc(&UNK_1106251d0,0x28,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar7;
    *(undefined8 *)(puVar6 + 0x18) = uVar1;
    *(undefined8 *)(puVar6 + 0x20) = uVar8;
    func_0x000107c61174(uVar7);
    func_0x000107c61174(uVar1);
    func_0x000107c615f0(uVar8);
    uVar7 = 0x112d36838;
    func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
    func_0x00010068b194(0x1032059bc,puVar6,uVar7);
    func_0x000107c61574(uVar4);
  }
  else {
    if (bVar2 != 2) {
      func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
      uStack_48 = 0;
      func_0x000100854cb0(&uStack_48);
      return;
    }
    uVar7 = param_2[3];
    uVar1 = param_2[4];
    uVar4 = 0;
    func_0x000103205970(0);
    pcVar5 = FUN_103205b20;
    func_0x0001000d5158(FUN_103205b20,0,uVar4);
    uVar4 = 0x103205bf4;
    func_0x00010487de38(0x103205bf4,0);
    func_0x000107c61574(pcVar5);
    puVar6 = &UNK_1106251a8;
    func_0x000107c613fc(&UNK_1106251a8,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar7;
    *(undefined8 *)(puVar6 + 0x18) = uVar1;
    func_0x000107c61174(uVar7);
    func_0x000107c61174(uVar1);
    uVar7 = 0x112d36838;
    func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
    func_0x00010068b194(FUN_1032059b4,puVar6,uVar7);
    func_0x000107c61574(uVar4);
  }
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 103205414; end: 10320541f;  */

void FUN_103205414(byte *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_48;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  bVar3 = *param_1;
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      uVar7 = 0x112f4c5c0;
      func_0x0001000285a8(0x112f4c5c0,&UNK_10db9d398,uVar8);
      pcVar5 = FUN_103204acc;
      func_0x0001000bfde0(FUN_103204acc,0,uVar7);
      pcVar4 = FUN_103204c34;
      func_0x00010487de38(FUN_103204c34,0);
      func_0x000107c61574(pcVar5);
      uVar8 = 0x112d36838;
      func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
      func_0x00010068b194(FUN_103204d2c,0,uVar8);
      func_0x000107c61574(pcVar4);
      return;
    }
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar7 = 0x112f4c5a8;
    func_0x0001000285a8(0x112f4c5a8,&UNK_10db9d300,uVar8);
    pcVar5 = FUN_103204088;
    func_0x0001000bfde0(FUN_103204088,0,uVar7);
    uVar8 = 0x1032043c0;
    func_0x00010487de38(0x1032043c0,0);
    func_0x000107c61574(pcVar5);
    puVar6 = &UNK_1106251d0;
    func_0x000107c613fc(&UNK_1106251d0,0x28,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar1;
    *(undefined8 *)(puVar6 + 0x18) = uVar2;
    *(undefined8 *)(puVar6 + 0x20) = uVar9;
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar2);
    func_0x000107c615f0(uVar9);
    uVar7 = 0x112d36838;
    func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
    func_0x00010068b194(0x1032059bc,puVar6,uVar7);
    func_0x000107c61574(uVar8);
  }
  else {
    if (bVar3 != 2) {
      func_0x0001000285a8(0x112d755d0,&UNK_10d936160,uVar8);
      uStack_48 = 0;
      func_0x000100854cb0(&uStack_48);
      return;
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar8 = 0;
    func_0x000103205970(0);
    pcVar5 = FUN_103205b20;
    func_0x0001000d5158(FUN_103205b20,0,uVar8);
    uVar8 = 0x103205bf4;
    func_0x00010487de38(0x103205bf4,0);
    func_0x000107c61574(pcVar5);
    puVar6 = &UNK_1106251a8;
    func_0x000107c613fc(&UNK_1106251a8,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar7;
    *(undefined8 *)(puVar6 + 0x18) = uVar1;
    func_0x000107c61174(uVar7);
    func_0x000107c61174(uVar1);
    uVar7 = 0x112d36838;
    func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
    func_0x00010068b194(FUN_1032059b4,puVar6,uVar7);
    func_0x000107c61574(uVar8);
  }
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 103205420; end: 10320553b;  */

undefined8 FUN_103205420(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  
  uVar8 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  uVar9 = unaff_x20[4];
  uVar4 = 0x112f4c5c8;
  func_0x0001000285a8(0x112f4c5c8,&UNK_10db9d3f0);
  pcVar5 = FUN_103204f14;
  func_0x0001000bfde0(FUN_103204f14,0,uVar4);
  pcVar6 = pcVar5;
  FUN_1032050f0();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar5);
  puVar7 = &UNK_110625180;
  func_0x000107c613fc(&UNK_110625180,0x40,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar8;
  *(undefined8 *)(puVar7 + 0x18) = uVar2;
  *(undefined8 *)(puVar7 + 0x20) = uVar1;
  *(undefined8 *)(puVar7 + 0x28) = uVar3;
  *(undefined8 *)(puVar7 + 0x30) = uVar9;
  *(undefined8 *)(puVar7 + 0x38) = param_1;
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(param_1);
  uVar4 = 0x112d36838;
  func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
  uVar8 = 0x1032059c8;
  func_0x00010068b194(0x1032059c8,puVar7,uVar4);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  return uVar8;
}



/* Entry: 10320553c; end: 1032055a7;  */

long FUN_10320553c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1032055a8; end: 103205613;  */

undefined8 * FUN_1032055a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar4 = param_2[4];
  param_1[4] = uVar4;
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  return param_1;
}



/* Entry: 103205614; end: 1032056b7;  */

undefined8 * FUN_103205614(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1032056b8; end: 10320571b;  */

undefined8 * FUN_1032056b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10320571c; end: 103205923;  */

int FUN_10320571c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103205924; end: 1032059b3;  */

void FUN_103205924(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032059b4; end: 1032059cb;  */

undefined8 * FUN_1032059b4(ulong *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uStack_68;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  puVar9 = (undefined8 *)*param_1;
  lVar7 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = puVar9;
    func_0x000107c44b14();
    if ((int)puVar3 != 0) {
      puVar3 = puVar9;
      func_0x000107c5b384();
      func_0x000107c61180();
      if (puVar3 != (undefined8 *)0x0) {
        puVar4 = puVar3;
        func_0x000107c44960();
        if (((ulong)puVar4 & 1) != 0) {
          puVar4 = puVar3;
          func_0x000107c4c070();
          func_0x000107c61180();
          if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103205e8c);
            (*pcVar1)();
          }
          puVar12 = puVar4;
          func_0x000107c49c24();
          func_0x000107c61170(puVar4);
          if (((ulong)puVar12 & 1) == 0) {
            puVar4 = puVar3;
            func_0x000107c4c070();
            func_0x000107c61180();
            if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103205e90);
              (*pcVar1)();
            }
            puVar12 = puVar4;
            func_0x000107c4c07c();
            func_0x000107c61180();
            func_0x000107c61170(puVar4);
            if (puVar12 != (undefined8 *)0x0) {
              puVar9 = puVar12;
              func_0x000107c5faec(puVar12);
              func_0x000107c61170(puVar12);
              lVar6 = lVar2;
              func_0x000107c614f0(lVar2);
              uVar5 = 0x112d38280;
              func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
              func_0x000107c61538();
              FUN_10326db34(puVar9,lVar7,0x5a0,uVar5,lVar6);
              func_0x000107c615e8(lVar2);
              func_0x000107c61170(puVar3);
              func_0x000107c6142c(lVar7);
              return puVar9;
            }
          }
        }
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(puVar3);
        goto LAB_103205e6c;
      }
    }
    func_0x000107c615e8(lVar2);
  }
LAB_103205e6c:
  puVar3 = puVar9;
  lVar2 = lVar6;
  func_0x000107c44fd8();
  func_0x000107c61180();
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
    func_0x000107c5faec();
    lVar7 = lVar2;
    func_0x000107c61170(puVar3);
    func_0x000107c3e950();
    func_0x000107c61180();
    if (puVar9 != (undefined8 *)0x0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        puVar3 = puVar9;
        func_0x000107c3e544();
        func_0x000107c61180();
        if (puVar3 == (undefined8 *)0x0) {
          puVar12 = (undefined8 *)0x0;
          lVar10 = 0;
          lVar13 = lVar7;
        }
        else {
          puVar12 = puVar3;
          func_0x000107c5faec();
          lVar13 = lVar7;
          func_0x000107c61170(puVar3);
          lVar10 = lVar7;
        }
        puVar3 = puVar9;
        func_0x000107c51d04();
        func_0x000107c61180();
        if (puVar3 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
          lVar13 = 0;
        }
        else {
          puVar11 = puVar3;
          func_0x000107c5faec();
          func_0x000107c61170(puVar3);
        }
        if (lVar10 == 0) {
          puVar12 = (undefined8 *)0x0;
        }
        else {
          func_0x000107c5fadc(puVar12,lVar10);
          func_0x000107c6142c(lVar10);
        }
        if (lVar13 == 0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          func_0x000107c5fadc(puVar11,lVar13);
          func_0x000107c6142c(lVar13);
        }
        lVar7 = lVar6;
        func_0x000107c614f0(lVar6);
        puVar8 = PTR_PTR_1126b14b8;
        func_0x000107c610f8(PTR_PTR_1126b14b8);
        func_0x000107c4598c();
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar11);
        FUN_10326d3a8(puVar4,lVar2,puVar8,lVar7);
        func_0x000107c61170(puVar9);
        func_0x000107c615e8(lVar6);
        func_0x000107c6142c(lVar2);
        func_0x000107c61170(puVar8);
        return puVar4;
      }
      func_0x000107c61170(puVar9);
    }
    func_0x000107c6142c(lVar2);
  }
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  uStack_68 = 0;
  puVar9 = &uStack_68;
  func_0x000100854cb0(puVar9);
  return puVar9;
}



/* Entry: 1032059cc; end: 1032059f3;  */

/* WARNING: Possible PIC construction at 0x0001032059e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032059e4) */

void FUN_1032059cc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 1032059f4; end: 103205a4f;  */

undefined8 * FUN_1032059f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103205a50; end: 103205a8b;  */

undefined8 * FUN_103205a50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103205a8c; end: 103205b1f;  */

int FUN_103205a8c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103205b20; end: 103205f7f;  */

void FUN_103205b20(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_2 + 0x88);
  lVar2 = *(long *)(param_2 + 0x90);
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  puVar1 = &UNK_10db9d570;
  func_0x000107c614e0(&UNK_10db9d570);
  if (lVar2 == 0) {
    func_0x000107c61574();
  }
  else {
    func_0x000107c61434(lVar2);
    FUN_103206b9c(lVar3,lVar2,uVar4,puVar1);
    func_0x000107c61574(puVar1);
    func_0x000107c6142c(lVar2);
    if (lVar3 == 0) goto LAB_103205bd8;
    lVar2 = lVar3;
    func_0x000107c3e39c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5d8c4();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      goto LAB_103205bd8;
    }
  }
  lVar3 = 0;
LAB_103205bd8:
  *param_1 = lVar3;
  return;
}



/* Entry: 103205f80; end: 103205f87;  */

undefined8 * FUN_103205f80(ulong *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uStack_68;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  puVar9 = (undefined8 *)*param_1;
  lVar7 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = puVar9;
    func_0x000107c44b14();
    if ((int)puVar3 != 0) {
      puVar3 = puVar9;
      func_0x000107c5b384();
      func_0x000107c61180();
      if (puVar3 != (undefined8 *)0x0) {
        puVar4 = puVar3;
        func_0x000107c44960();
        if (((ulong)puVar4 & 1) != 0) {
          puVar4 = puVar3;
          func_0x000107c4c070();
          func_0x000107c61180();
          if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103205e8c);
            (*pcVar1)();
          }
          puVar12 = puVar4;
          func_0x000107c49c24();
          func_0x000107c61170(puVar4);
          if (((ulong)puVar12 & 1) == 0) {
            puVar4 = puVar3;
            func_0x000107c4c070();
            func_0x000107c61180();
            if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103205e90);
              (*pcVar1)();
            }
            puVar12 = puVar4;
            func_0x000107c4c07c();
            func_0x000107c61180();
            func_0x000107c61170(puVar4);
            if (puVar12 != (undefined8 *)0x0) {
              puVar9 = puVar12;
              func_0x000107c5faec(puVar12);
              func_0x000107c61170(puVar12);
              lVar6 = lVar2;
              func_0x000107c614f0(lVar2);
              uVar5 = 0x112d38280;
              func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
              func_0x000107c61538();
              FUN_10326db34(puVar9,lVar7,0x5a0,uVar5,lVar6);
              func_0x000107c615e8(lVar2);
              func_0x000107c61170(puVar3);
              func_0x000107c6142c(lVar7);
              return puVar9;
            }
          }
        }
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(puVar3);
        goto LAB_103205e6c;
      }
    }
    func_0x000107c615e8(lVar2);
  }
LAB_103205e6c:
  puVar3 = puVar9;
  lVar2 = lVar6;
  func_0x000107c44fd8();
  func_0x000107c61180();
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
    func_0x000107c5faec();
    lVar7 = lVar2;
    func_0x000107c61170(puVar3);
    func_0x000107c3e950();
    func_0x000107c61180();
    if (puVar9 != (undefined8 *)0x0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        puVar3 = puVar9;
        func_0x000107c3e544();
        func_0x000107c61180();
        if (puVar3 == (undefined8 *)0x0) {
          puVar12 = (undefined8 *)0x0;
          lVar10 = 0;
          lVar13 = lVar7;
        }
        else {
          puVar12 = puVar3;
          func_0x000107c5faec();
          lVar13 = lVar7;
          func_0x000107c61170(puVar3);
          lVar10 = lVar7;
        }
        puVar3 = puVar9;
        func_0x000107c51d04();
        func_0x000107c61180();
        if (puVar3 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
          lVar13 = 0;
        }
        else {
          puVar11 = puVar3;
          func_0x000107c5faec();
          func_0x000107c61170(puVar3);
        }
        if (lVar10 == 0) {
          puVar12 = (undefined8 *)0x0;
        }
        else {
          func_0x000107c5fadc(puVar12,lVar10);
          func_0x000107c6142c(lVar10);
        }
        if (lVar13 == 0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          func_0x000107c5fadc(puVar11,lVar13);
          func_0x000107c6142c(lVar13);
        }
        lVar7 = lVar6;
        func_0x000107c614f0(lVar6);
        puVar8 = PTR_PTR_1126b14b8;
        func_0x000107c610f8(PTR_PTR_1126b14b8);
        func_0x000107c4598c();
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar11);
        FUN_10326d3a8(puVar4,lVar2,puVar8,lVar7);
        func_0x000107c61170(puVar9);
        func_0x000107c615e8(lVar6);
        func_0x000107c6142c(lVar2);
        func_0x000107c61170(puVar8);
        return puVar4;
      }
      func_0x000107c61170(puVar9);
    }
    func_0x000107c6142c(lVar2);
  }
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  uStack_68 = 0;
  puVar9 = &uStack_68;
  func_0x000100854cb0(puVar9);
  return puVar9;
}



/* Entry: 103205f88; end: 103205fab;  */

void FUN_103205f88(void)

{
  FUN_103206334();
  return;
}



/* Entry: 103205fac; end: 1032060e3;  */

undefined8 FUN_103205fac(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_100 [4];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_100;
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  lVar5 = *(long *)(param_2 + 0x80);
  func_0x000107c614bc(&uStack_c0,&uStack_b0,param_3);
  uStack_e0 = uStack_c0;
  uStack_d8 = uStack_b8;
  func_0x000107c61434(uStack_b8);
  puVar2 = &uStack_e0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_b8);
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    func_0x000107c60234(auStack_100,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_b8);
    func_0x000100102924(auStack_100,&uStack_e0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0x112d7a598;
  func_0x0001000285a8(0x112d7a598,&UNK_10d939e10);
  func_0x000107c6147c(auStack_100,&uStack_e0,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_100[0] = 0;
  }
  return auStack_100[0];
}



/* Entry: 1032060e4; end: 10320620b;  */

undefined1  [16] FUN_1032060e4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_100;
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  lVar4 = *(long *)(param_2 + 0x80);
  func_0x000107c614bc(&uStack_c0,&uStack_b0,param_3);
  uStack_e0 = uStack_c0;
  uStack_d8 = uStack_b8;
  func_0x000107c61434(uStack_b8);
  puVar2 = &uStack_e0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_b8);
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    func_0x000107c60234(&uStack_100,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_b8);
    func_0x000100102924(&uStack_100,&uStack_e0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(&uStack_100,&uStack_e0,uVar3,PTR___sSSN_11034da80,6);
  if (iVar1 == 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
  }
  auVar5._8_8_ = uStack_f8;
  auVar5._0_8_ = uStack_100;
  return auVar5;
}



/* Entry: 10320620c; end: 103206333;  */

undefined1 FUN_10320620c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_100 [32];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_100;
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  lVar4 = *(long *)(param_2 + 0x80);
  func_0x000107c614bc(&uStack_c0,&uStack_b0,param_3);
  uStack_e0 = uStack_c0;
  uStack_d8 = uStack_b8;
  func_0x000107c61434(uStack_b8);
  puVar2 = &uStack_e0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_b8);
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    func_0x000107c60234(auStack_100,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_b8);
    func_0x000100102924(auStack_100,&uStack_e0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_100,&uStack_e0,uVar3,PTR___sSbN_11034dd40,6);
  if (iVar1 == 0) {
    auStack_100[0] = 2;
  }
  return auStack_100[0];
}



/* Entry: 103206334; end: 10320647f;  */

undefined8
FUN_103206334(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_120 [4];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  iVar1 = (int)auStack_120;
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_68 = param_1[0xd];
  uStack_70 = param_1[0xc];
  uStack_58 = param_1[0xf];
  uStack_60 = param_1[0xe];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  lVar5 = *(long *)(param_2 + 0x80);
  func_0x000107c614bc(&uStack_e0,&uStack_d0,param_3);
  uStack_100 = uStack_e0;
  uStack_f8 = uStack_d8;
  func_0x000107c61434(uStack_d8);
  puVar2 = &uStack_100;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_d8);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
  }
  else {
    func_0x000107c60234(auStack_120,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_d8);
    func_0x000100102924(auStack_120,&uStack_100);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  FUN_1032070f0(0,param_4,param_5);
  func_0x000107c6147c(auStack_120,&uStack_100,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_120[0] = 0;
  }
  return auStack_120[0];
}



/* Entry: 103206480; end: 1032065ab;  */

undefined1  [16] FUN_103206480(undefined8 *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 auStack_f0 [4];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = (uint)auStack_f0;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  lVar4 = *(long *)(param_2 + 0x70);
  func_0x000107c614bc(&uStack_b0,&uStack_a0,param_3);
  uStack_d0 = uStack_b0;
  uStack_c8 = uStack_a8;
  func_0x000107c61434(uStack_a8);
  puVar2 = &uStack_d0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_a8);
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c60234(auStack_f0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_a8);
    func_0x000100102924(auStack_f0,&uStack_d0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_f0,&uStack_d0,uVar3,PTR___sSiN_11034deb0,6);
  if (uVar1 == 0) {
    auStack_f0[0] = 0;
  }
  auVar5._8_4_ = uVar1 ^ 1;
  auVar5._0_8_ = auStack_f0[0];
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 1032065ac; end: 1032066d3;  */

undefined1 FUN_1032065ac(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_f0 [32];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_f0;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  lVar4 = *(long *)(param_2 + 0x70);
  func_0x000107c614bc(&uStack_b0,&uStack_a0,param_3);
  uStack_d0 = uStack_b0;
  uStack_c8 = uStack_a8;
  func_0x000107c61434(uStack_a8);
  puVar2 = &uStack_d0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_a8);
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c60234(auStack_f0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_a8);
    func_0x000100102924(auStack_f0,&uStack_d0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_f0,&uStack_d0,uVar3,PTR___sSbN_11034dd40,6);
  if (iVar1 == 0) {
    auStack_f0[0] = 2;
  }
  return auStack_f0[0];
}



/* Entry: 1032066d4; end: 10320680f;  */

undefined8 FUN_1032066d4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_f0 [4];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_f0;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  lVar5 = *(long *)(param_2 + 0x70);
  func_0x000107c614bc(&uStack_b0,&uStack_a0,param_3);
  uStack_d0 = uStack_b0;
  uStack_c8 = uStack_a8;
  func_0x000107c61434(uStack_a8);
  puVar2 = &uStack_d0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_a8);
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c60234(auStack_f0,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_a8);
    func_0x000100102924(auStack_f0,&uStack_d0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  FUN_1032070f0(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c6147c(auStack_f0,&uStack_d0,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_f0[0] = 0;
  }
  return auStack_f0[0];
}



/* Entry: 103206810; end: 103206937;  */

undefined1  [16] FUN_103206810(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_f0;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  lVar4 = *(long *)(param_2 + 0x70);
  func_0x000107c614bc(&uStack_b0,&uStack_a0,param_3);
  uStack_d0 = uStack_b0;
  uStack_c8 = uStack_a8;
  func_0x000107c61434(uStack_a8);
  puVar2 = &uStack_d0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_a8);
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c60234(&uStack_f0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_a8);
    func_0x000100102924(&uStack_f0,&uStack_d0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(&uStack_f0,&uStack_d0,uVar3,PTR___sSSN_11034da80,6);
  if (iVar1 == 0) {
    uStack_e8 = 0;
    uStack_f0 = 0;
  }
  auVar5._8_8_ = uStack_e8;
  auVar5._0_8_ = uStack_f0;
  return auVar5;
}



/* Entry: 103206938; end: 103206a5f;  */

undefined8 FUN_103206938(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_c0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  
  iVar1 = (int)auStack_c0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  lVar5 = *(long *)(param_2 + 0x40);
  func_0x000107c614bc(&uStack_80,&uStack_70,param_3);
  uStack_a0 = uStack_80;
  uStack_98 = uStack_78;
  func_0x000107c61434(uStack_78);
  puVar2 = &uStack_a0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_78);
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(auStack_c0,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_78);
    func_0x000100102924(auStack_c0,&uStack_a0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0x112f4c628;
  func_0x0001000285a8(0x112f4c628,&UNK_10db9d590);
  func_0x000107c6147c(auStack_c0,&uStack_a0,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_c0[0] = 0;
  }
  return auStack_c0[0];
}



/* Entry: 103206a60; end: 103206b77;  */

undefined1 FUN_103206a60(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  
  iVar1 = (int)auStack_c0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  lVar4 = *(long *)(param_2 + 0x40);
  func_0x000107c614bc(&uStack_80,&uStack_70,param_3);
  uStack_a0 = uStack_80;
  uStack_98 = uStack_78;
  func_0x000107c61434(uStack_78);
  puVar2 = &uStack_a0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_78);
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(auStack_c0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_78);
    func_0x000100102924(auStack_c0,&uStack_a0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_c0,&uStack_a0,uVar3,PTR___sSbN_11034dd40,6);
  if (iVar1 == 0) {
    auStack_c0[0] = 2;
  }
  return auStack_c0[0];
}



/* Entry: 103206b78; end: 103206b9b;  */

void FUN_103206b78(void)

{
  FUN_103206334();
  return;
}



/* Entry: 103206b9c; end: 103206cbb;  */

undefined8 FUN_103206b9c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_90 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_90;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c614bc(&uStack_50,&uStack_40,param_4);
  uStack_70 = uStack_50;
  uStack_68 = uStack_48;
  func_0x000107c61434(uStack_48);
  puVar2 = &uStack_70;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_3 == 0) {
    func_0x000107c6142c(uStack_48);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(auStack_90,param_3);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(uStack_48);
    func_0x000100102924(auStack_90,&uStack_70);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  FUN_1032070f0(0,0x112f4c620,&PTR_PTR_1126c93c8);
  func_0x000107c6147c(auStack_90,&uStack_70,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_90[0] = 0;
  }
  return auStack_90[0];
}


