/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102695d4c; end: 102695d5b;  */

undefined1  [16] FUN_102695d4c(void)

{
  return ZEXT816(0x110534458);
}



/* Entry: 102695d5c; end: 102695dc7;  */

void FUN_102695d5c(void)

{
  func_0x000107c61168(&PTR_PTR_112857460);
  return;
}



/* Entry: 102695dc8; end: 102695e37;  */

void FUN_102695dc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026962cc;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102695e38; end: 102695e83;  */

void FUN_102695e38(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1026962d0;
  plVar2[5] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[6] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102694940,lVar1,lVar3);
  return;
}



/* Entry: 102695e84; end: 102695ef3;  */

void FUN_102695e84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026962d4;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102695ef4; end: 102695f5f;  */

void FUN_102695ef4(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102695f60; end: 102695f9f;  */

void FUN_102695f60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102695fa0,0,0);
  return;
}



/* Entry: 102695fa0; end: 102695faf;  */

void FUN_102695fa0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102695fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 102695fb0; end: 1026961ab;  */

undefined *
FUN_102695fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  func_0x000107c613fc(lVar1,0x30,7);
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  puVar3 = PTR_PTR_1126b5be8;
  func_0x000107c610f8(PTR_PTR_1126b5be8);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  puVar7 = PTR___sSSN_11034da80;
  lVar4 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar2);
  lVar2 = lVar1;
  func_0x000107c5fc48(lVar1,puVar7);
  func_0x000107c61574(lVar1);
  func_0x000107c45794(puVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
  puVar5 = PTR_PTR_1126b1a40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = puVar5;
  func_0x000107c5e7ec();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x00010011df08();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
  }
  puVar7 = puVar6;
  func_0x000107c5e870(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  puVar5 = puVar7;
  func_0x000107c5e500(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  puVar7 = puVar5;
  func_0x000107c3ecc8(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  return puVar7;
}



/* Entry: 1026961ac; end: 1026961c3;  */

long FUN_1026961ac(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 1026961c4; end: 102696213;  */

void FUN_1026961c4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102696214;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102694eec,lVar1,lVar2);
  return;
}



/* Entry: 102696214; end: 10269624f;  */

void FUN_102696214(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010269624c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102696250; end: 1026962bf;  */

void FUN_102696250(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026962dc;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1026962c0; end: 1026962df;  */

void FUN_1026962c0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010269624c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026962e0; end: 1026963bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1026962e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  double dVar5;
  
  lVar1 = _DAT_112eb3d18;
  lVar3 = *(long *)(unaff_x20 + _DAT_112eb3d18);
  func_0x000107c5dbc0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5e07c();
    func_0x000107c615e8(lVar3);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61174(uVar4);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3ec60();
    func_0x000107c61170(unaff_x20);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar5 = 1.79769313486232e+308;
    func_0x000107c5b098(uVar4);
    func_0x000107c61170(uVar4);
    return dVar5 + 40.0;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026963bc);
  (*pcVar2)();
}



/* Entry: 1026963bc; end: 102696413; -[_TtC26MapRequestRealTimeLocation44MapRequestRealTimeLocationTrayViewController initWithCoder:] */

void FUN_1026963bc(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010ef218f0,
                      "MapRequestRealTimeLocation/MapRequestRealTimeLocationTrayViewController.swift"
                      ,0x4d,2,10,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102696414);
  (*pcVar1)();
}



/* Entry: 102696414; end: 1026966bf;  */

/* WARNING: Possible PIC construction at 0x000102696460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026964d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026964f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102696544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102696564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026965b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026965d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102696638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102696658: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269663c) */
/* WARNING: Removing unreachable block (ram,0x0001026965d8) */
/* WARNING: Removing unreachable block (ram,0x0001026966bc) */
/* WARNING: Removing unreachable block (ram,0x00010269660c) */
/* WARNING: Removing unreachable block (ram,0x0001026965b8) */
/* WARNING: Removing unreachable block (ram,0x000102696568) */
/* WARNING: Removing unreachable block (ram,0x0001026966b8) */
/* WARNING: Removing unreachable block (ram,0x00010269659c) */
/* WARNING: Removing unreachable block (ram,0x000102696548) */
/* WARNING: Removing unreachable block (ram,0x0001026964f8) */
/* WARNING: Removing unreachable block (ram,0x0001026966b4) */
/* WARNING: Removing unreachable block (ram,0x00010269652c) */
/* WARNING: Removing unreachable block (ram,0x0001026964d8) */
/* WARNING: Removing unreachable block (ram,0x000102696464) */
/* WARNING: Removing unreachable block (ram,0x0001026966b0) */
/* WARNING: Removing unreachable block (ram,0x0001026964bc) */
/* WARNING: Removing unreachable block (ram,0x00010269665c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102696414(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c5a050(*(undefined8 *)(unaff_x20 + _DAT_112eb3d18),param_2,0);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026966b0);
  (*pcVar1)();
}



/* Entry: 1026966c0; end: 10269671f; -[_TtC26MapRequestRealTimeLocation44MapRequestRealTimeLocationTrayViewController initWithNibName:bundle:] */

void FUN_1026966c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRequestRealTimeLocation.MapRequestRealTimeLocationTrayViewController",0x47
                      ,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026966ec);
  (*pcVar1)();
}



/* Entry: 102696720; end: 10269672f; -[_TtC26MapRequestRealTimeLocation44MapRequestRealTimeLocationTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102696720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb3d18));
  return;
}



/* Entry: 102696730; end: 10269674f;  */

void FUN_102696730(void)

{
  func_0x000107c61168(&PTR_PTR_112857560);
  return;
}



/* Entry: 102696750; end: 10269712b;  */

void FUN_102696750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb3d48,&UNK_10dac9f50);
  puVar1 = &UNK_110534638;
  func_0x000107c613fc(&UNK_110534638,0x208,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  *(undefined8 *)(puVar1 + 0xf0) = param_29;
  *(undefined8 *)(puVar1 + 0xf8) = param_30;
  *(undefined8 *)(puVar1 + 0x100) = param_31;
  *(undefined8 *)(puVar1 + 0x108) = param_32;
  *(undefined8 *)(puVar1 + 0x110) = param_33;
  *(undefined8 *)(puVar1 + 0x118) = param_34;
  *(undefined8 *)(puVar1 + 0x120) = param_35;
  *(undefined8 *)(puVar1 + 0x128) = param_36;
  *(undefined8 *)(puVar1 + 0x130) = param_37;
  *(undefined8 *)(puVar1 + 0x138) = param_38;
  *(undefined8 *)(puVar1 + 0x140) = param_39;
  *(undefined8 *)(puVar1 + 0x148) = param_40;
  *(undefined8 *)(puVar1 + 0x150) = param_41;
  *(undefined8 *)(puVar1 + 0x158) = param_42;
  *(undefined8 *)(puVar1 + 0x160) = param_43;
  *(undefined8 *)(puVar1 + 0x168) = param_44;
  *(undefined8 *)(puVar1 + 0x170) = param_45;
  *(undefined8 *)(puVar1 + 0x178) = param_46;
  *(undefined8 *)(puVar1 + 0x180) = param_47;
  *(undefined8 *)(puVar1 + 0x188) = param_48;
  *(undefined8 *)(puVar1 + 400) = param_49;
  *(undefined8 *)(puVar1 + 0x198) = param_50;
  *(undefined8 *)(puVar1 + 0x1a0) = param_51;
  *(undefined8 *)(puVar1 + 0x1a8) = param_52;
  *(undefined8 *)(puVar1 + 0x1b0) = param_53;
  *(undefined8 *)(puVar1 + 0x1b8) = param_54;
  *(undefined8 *)(puVar1 + 0x1c0) = param_55;
  *(undefined8 *)(puVar1 + 0x1c8) = param_56;
  *(undefined8 *)(puVar1 + 0x1d0) = param_57;
  *(undefined8 *)(puVar1 + 0x1d8) = param_58;
  *(undefined8 *)(puVar1 + 0x1e0) = param_59;
  *(undefined8 *)(puVar1 + 0x1e8) = param_60;
  *(undefined8 *)(puVar1 + 0x1f0) = param_61;
  *(undefined8 *)(puVar1 + 0x1f8) = param_62;
  *(undefined8 *)(puVar1 + 0x200) = param_63;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(param_63);
  func_0x0001000823a8(FUN_10269712c,puVar1);
  return;
}



/* Entry: 10269712c; end: 1026971e7;  */

void FUN_10269712c(void)

{
  long unaff_x20;
  
  func_0x000102696c24(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                      *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                      *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                      *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                      *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                      *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                      *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                      *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                      *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                      *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                      *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                      *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                      *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                      *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                      *(undefined8 *)(unaff_x20 + 0x200));
  return;
}



/* Entry: 1026971e8; end: 1026971f7;  */

undefined1  [16] FUN_1026971e8(void)

{
  return ZEXT816(0x110534660);
}



/* Entry: 1026971f8; end: 1026977f7;  */

void FUN_1026971f8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 auStack_70 [2];
  
  uVar5 = *param_2;
  func_0x0001000285a8(0x112eb3d58,&UNK_10dac9fc0);
  puVar1 = auStack_70;
  auStack_70[0] = uVar5;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001026a0f98();
  func_0x000100082720("MapRoutingGrapheneLoggerServiceProvider",0x27,2);
  func_0x0001000285a8(0x112eb3d60,&UNK_10dac9fc8);
  puVar3 = &UNK_1105346a8;
  func_0x000107c613fc(&UNK_1105346a8,0x218,7);
  *(undefined8 *)(puVar3 + 0x10) = param_8;
  *(undefined8 *)(puVar3 + 0x18) = param_13;
  *(undefined8 *)(puVar3 + 0x20) = param_21;
  *(undefined8 *)(puVar3 + 0x28) = param_65;
  *(undefined8 *)(puVar3 + 0x30) = param_23;
  *(undefined8 *)(puVar3 + 0x38) = param_26;
  *(undefined8 *)(puVar3 + 0x40) = param_30;
  *(undefined8 *)(puVar3 + 0x48) = param_37;
  *(undefined8 *)(puVar3 + 0x50) = param_41;
  *(undefined8 **)(puVar3 + 0x58) = puVar1;
  *(undefined8 *)(puVar3 + 0x60) = param_51;
  *(undefined8 *)(puVar3 + 0x68) = param_47;
  *(undefined8 *)(puVar3 + 0x70) = param_49;
  *(undefined8 *)(puVar3 + 0x78) = param_29;
  *(undefined8 *)(puVar3 + 0x80) = param_39;
  *(undefined8 *)(puVar3 + 0x88) = param_36;
  *(undefined8 *)(puVar3 + 0x90) = param_63;
  *(undefined8 *)(puVar3 + 0x98) = param_33;
  *(undefined8 *)(puVar3 + 0xa0) = param_16;
  *(undefined8 *)(puVar3 + 0xa8) = param_7;
  *(undefined8 *)(puVar3 + 0xb0) = param_44;
  *(undefined8 *)(puVar3 + 0xb8) = param_55;
  *(undefined8 *)(puVar3 + 0xc0) = param_12;
  *(undefined8 *)(puVar3 + 200) = param_60;
  *(undefined8 *)(puVar3 + 0xd0) = param_22;
  *(undefined8 *)(puVar3 + 0xd8) = param_59;
  *(undefined8 *)(puVar3 + 0xe0) = param_20;
  *(undefined8 *)(puVar3 + 0xe8) = param_24;
  *(undefined8 *)(puVar3 + 0xf0) = param_57;
  *(undefined8 *)(puVar3 + 0xf8) = param_17;
  *(undefined8 *)(puVar3 + 0x100) = param_58;
  *(undefined8 *)(puVar3 + 0x108) = param_19;
  *(undefined8 *)(puVar3 + 0x110) = param_56;
  *(undefined8 *)(puVar3 + 0x118) = param_28;
  *(undefined8 *)(puVar3 + 0x120) = param_27;
  *(undefined8 *)(puVar3 + 0x128) = param_53;
  *(undefined8 *)(puVar3 + 0x130) = param_5;
  *(undefined8 *)(puVar3 + 0x138) = param_42;
  *(undefined8 *)(puVar3 + 0x140) = param_6;
  *(undefined8 *)(puVar3 + 0x148) = param_25;
  *(undefined8 *)(puVar3 + 0x150) = param_61;
  *(undefined8 *)(puVar3 + 0x158) = param_46;
  *(undefined8 *)(puVar3 + 0x160) = param_50;
  *(undefined8 *)(puVar3 + 0x168) = param_14;
  *(undefined8 *)(puVar3 + 0x170) = param_15;
  *(undefined8 *)(puVar3 + 0x178) = param_32;
  *(undefined8 *)(puVar3 + 0x180) = param_64;
  *(undefined8 *)(puVar3 + 0x188) = param_40;
  *(undefined8 *)(puVar3 + 400) = param_52;
  *(undefined8 *)(puVar3 + 0x198) = param_9;
  *(undefined8 *)(puVar3 + 0x1a0) = param_45;
  *(undefined8 *)(puVar3 + 0x1a8) = param_43;
  *(undefined8 *)(puVar3 + 0x1b0) = param_10;
  *(undefined8 *)(puVar3 + 0x1b8) = param_11;
  *(undefined8 *)(puVar3 + 0x1c0) = param_54;
  *(undefined8 *)(puVar3 + 0x1c8) = param_18;
  *(undefined8 **)(puVar3 + 0x1d0) = puVar2;
  *(undefined8 *)(puVar3 + 0x1d8) = param_3;
  *(undefined8 *)(puVar3 + 0x1e0) = param_38;
  *(undefined8 *)(puVar3 + 0x1e8) = param_4;
  *(undefined8 *)(puVar3 + 0x1f0) = param_62;
  *(undefined8 *)(puVar3 + 0x1f8) = param_31;
  *(undefined8 *)(puVar3 + 0x200) = param_34;
  *(undefined8 *)(puVar3 + 0x208) = param_35;
  *(undefined8 *)(puVar3 + 0x210) = param_48;
  func_0x000107c6157c();
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_48);
  uVar5 = 0x102697b38;
  func_0x0001000823a8(0x102697b38,puVar3);
  func_0x000100082720("MapRoutePluginRegistryServiceProvider",0x25,2);
  uVar4 = uVar5;
  FUN_1026ac5b4();
  func_0x0001002acff8("MapRouterEntryPointProvider",0x1b,2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar5);
  *param_1 = uVar4;
  return;
}



/* Entry: 1026977f8; end: 102697a0b;  */

void FUN_1026977f8(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102697a0c; end: 102697bf3;  */

void FUN_102697a0c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1026971f8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200));
  return;
}



/* Entry: 102697bf4; end: 102698c7b;  */

/* WARNING: Possible PIC construction at 0x000102697f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102697f14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102697f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102697f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102697f44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102697f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102697f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102697f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102697f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102697f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102697fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102697fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102697fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102697fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102697fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102697ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102698004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102698014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102698024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102698034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102698044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102698054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102698064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102698074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102698084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102698094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026980a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026980b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026980c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026980d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026980e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026980f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026980e8) */
/* WARNING: Removing unreachable block (ram,0x0001026980d8) */
/* WARNING: Removing unreachable block (ram,0x0001026980c8) */
/* WARNING: Removing unreachable block (ram,0x0001026980b8) */
/* WARNING: Removing unreachable block (ram,0x0001026980a8) */
/* WARNING: Removing unreachable block (ram,0x000102698098) */
/* WARNING: Removing unreachable block (ram,0x000102698088) */
/* WARNING: Removing unreachable block (ram,0x000102698078) */
/* WARNING: Removing unreachable block (ram,0x000102698068) */
/* WARNING: Removing unreachable block (ram,0x000102698058) */
/* WARNING: Removing unreachable block (ram,0x000102698048) */
/* WARNING: Removing unreachable block (ram,0x000102698038) */
/* WARNING: Removing unreachable block (ram,0x000102698028) */
/* WARNING: Removing unreachable block (ram,0x000102698018) */
/* WARNING: Removing unreachable block (ram,0x000102698008) */
/* WARNING: Removing unreachable block (ram,0x000102697ff8) */
/* WARNING: Removing unreachable block (ram,0x000102697fe8) */
/* WARNING: Removing unreachable block (ram,0x000102697fd8) */
/* WARNING: Removing unreachable block (ram,0x000102697fc8) */
/* WARNING: Removing unreachable block (ram,0x000102697fb8) */
/* WARNING: Removing unreachable block (ram,0x000102697fa8) */
/* WARNING: Removing unreachable block (ram,0x000102697f98) */
/* WARNING: Removing unreachable block (ram,0x000102697f88) */
/* WARNING: Removing unreachable block (ram,0x000102697f78) */
/* WARNING: Removing unreachable block (ram,0x000102697f68) */
/* WARNING: Removing unreachable block (ram,0x000102697f58) */
/* WARNING: Removing unreachable block (ram,0x000102697f48) */
/* WARNING: Removing unreachable block (ram,0x000102697f38) */
/* WARNING: Removing unreachable block (ram,0x000102697f28) */
/* WARNING: Removing unreachable block (ram,0x000102697f18) */
/* WARNING: Removing unreachable block (ram,0x000102697f08) */
/* WARNING: Removing unreachable block (ram,0x0001026980f8) */

void FUN_102697bf4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1105346d0;
  func_0x000107c613fc(&UNK_1105346d0,0x218,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  uVar2 = 0x112eb3d68;
  func_0x0001000285a8(0x112eb3d68,&UNK_10daca010);
  func_0x000107c613fc();
  pcVar3 = FUN_102698c7c;
  func_0x0001000841fc(FUN_102698c7c,puVar1,uVar2);
  func_0x000100084214("MapRoutePluginRegistryServiceProvider",0x25,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102698c7c; end: 102698db3;  */

void FUN_102698c7c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000102698124(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                      *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                      *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                      *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                      *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                      *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                      *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                      *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                      *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                      *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                      *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                      *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                      *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                      *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                      *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                      *(undefined8 *)(unaff_x20 + 0x210));
  return;
}



/* Entry: 102698db4; end: 102698eb7;  */

/* WARNING: Possible PIC construction at 0x000102698e44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102698e48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102698db4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb80b8);
  uVar3 = ((undefined8 *)(param_1 + _DAT_112eb80b8))[1];
  puVar1 = PTR_PTR_1126b1e08;
  func_0x000107c61168(PTR_PTR_1126b1e08);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112eb80c0);
  func_0x000107c4c458(param_2);
  func_0x000107c61180();
  func_0x000107c423a8(uVar2,uVar3,uVar4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 102698eb8; end: 102698ebf;  */

/* WARNING: Possible PIC construction at 0x000102698e44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102698e48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102698eb8(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = *unaff_x20;
  lVar4 = unaff_x20[1];
  puVar1 = (undefined8 *)(lVar2 + _DAT_112eb80b8);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  puVar3 = PTR_PTR_1126b1e08;
  func_0x000107c61168(PTR_PTR_1126b1e08);
  uVar7 = *(undefined8 *)(lVar2 + _DAT_112eb80c0);
  func_0x000107c4c458(lVar4);
  func_0x000107c61180();
  func_0x000107c423a8(uVar5,uVar6,uVar7,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
  return;
}



/* Entry: 102698ec0; end: 102698ee7;  */

/* WARNING: Possible PIC construction at 0x000102698ed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102698ed8) */

void FUN_102698ec0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 102698ee8; end: 102698f43;  */

undefined8 * FUN_102698ee8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102698f44; end: 102698f7f;  */

undefined8 * FUN_102698f44(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102698f80; end: 10269901b;  */

int FUN_102698f80(ulong *param_1,int param_2)

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



/* Entry: 10269901c; end: 102699043;  */

/* WARNING: Possible PIC construction at 0x000102699030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102699034) */

void FUN_10269901c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 102699044; end: 10269909f;  */

undefined8 * FUN_102699044(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1026990a0; end: 1026990db;  */

undefined8 * FUN_1026990a0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1026990dc; end: 10269916f;  */

int FUN_1026990dc(ulong *param_1,int param_2)

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



/* Entry: 102699170; end: 10269922f;  */

/* WARNING: Possible PIC construction at 0x0001026991f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026991f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102699170(long param_1,long param_2)

{
  undefined *puVar1;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    func_0x000107c517a4();
  }
  else {
    puVar1 = *(undefined **)(param_1 + _DAT_112eb89a0);
    func_0x000107c5fadc(puVar1,((undefined8 *)(param_1 + _DAT_112eb89a0))[1]);
    func_0x000107c5fadc(*(undefined8 *)(param_1 + _DAT_112eb89a8),
                        ((undefined8 *)(param_1 + _DAT_112eb89a8))[1]);
    func_0x000107c4bd0c(param_2);
    func_0x000107c615e8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102699230; end: 10269923f;  */

/* WARNING: Possible PIC construction at 0x0001026991f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026991f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102699230(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  lVar3 = unaff_x20[1];
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    func_0x000107c517a4();
  }
  else {
    puVar1 = (undefined8 *)(lVar2 + _DAT_112eb89a0);
    puVar4 = (undefined *)*puVar1;
    func_0x000107c5fadc(puVar4,puVar1[1]);
    puVar1 = (undefined8 *)(lVar2 + _DAT_112eb89a8);
    func_0x000107c5fadc(*puVar1,puVar1[1]);
    func_0x000107c4bd0c(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 102699240; end: 102699353;  */

/* WARNING: Possible PIC construction at 0x000102699278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102699310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102699334: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102699314) */
/* WARNING: Removing unreachable block (ram,0x00010269927c) */
/* WARNING: Removing unreachable block (ram,0x000102699338) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102699240(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112eb3e18);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eb3e20);
    puVar2 = PTR_PTR_1126af668;
    func_0x000107c610f8(PTR_PTR_1126af668);
    func_0x000107c47d3c();
    func_0x000107c3ed20(uVar4,param_2,puVar2,puVar1,0,0x27,0);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102699354; end: 1026993b3; -[_TtC23MapRouterImplementation23AddFriendsModalWorkflow init] */

void FUN_102699354(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.AddFriendsModalWorkflow",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102699380);
  (*pcVar1)();
}



/* Entry: 1026993b4; end: 10269941f; -[_TtC23MapRouterImplementation23AddFriendsModalWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026993b4(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112eb3e10),
                      ((undefined8 *)(param_1 + _DAT_112eb3e10))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb3e18));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb3e20));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb3e28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb3e30));
  return;
}



/* Entry: 102699420; end: 10269943f;  */

void FUN_102699420(void)

{
  func_0x000107c61168(&PTR_PTR_112857620);
  return;
}



/* Entry: 102699440; end: 102699443;  */

/* WARNING: Possible PIC construction at 0x000102699278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102699310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102699334: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102699314) */
/* WARNING: Removing unreachable block (ram,0x00010269927c) */
/* WARNING: Removing unreachable block (ram,0x000102699338) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102699440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112eb3e18);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eb3e20);
    puVar2 = PTR_PTR_1126af668;
    func_0x000107c610f8(PTR_PTR_1126af668);
    func_0x000107c47d3c();
    func_0x000107c3ed20(uVar4,param_2,puVar2,puVar1,0,0x27,0);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102699444; end: 10269949b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102699444(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112eb3e10);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10269949c; end: 1026994f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269949c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb3e10);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 1026994f8; end: 102699537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026994f8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb3e10;
  func_0x000107c61428(unaff_x20 + _DAT_112eb3e10,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_102699538;
  return auVar2;
}



/* Entry: 102699538; end: 10269953b;  */

void FUN_102699538(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10269953c; end: 1026995ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269953c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112eb3e18);
  lVar2 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  func_0x000107c56a0c(*(undefined8 *)(unaff_x20 + _DAT_112eb3e30));
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb3e10);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  pcVar5 = (code *)*puVar1;
  if (pcVar5 != (code *)0x0) {
    uVar4 = puVar1[1];
    func_0x000107c6157c(uVar4);
    (*pcVar5)();
    func_0x00010058d43c(pcVar5,uVar4);
  }
  return;
}



/* Entry: 1026995f0; end: 1026995f3; -[_TtC23MapRouterImplementation23AddFriendsModalWorkflow addFriendsWorkflowCompleted:] */

void FUN_1026995f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10269953c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026995f4; end: 1026995f7; -[_TtC23MapRouterImplementation23AddFriendsModalWorkflow addFriendsWorkflowSkipped:] */

void FUN_1026995f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10269953c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026995f8; end: 102699663;  */

void FUN_1026995f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102699664,uVar1,uVar2);
  return;
}



/* Entry: 102699664; end: 10269973f;  */

void FUN_102699664(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  
  lVar11 = *(long *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(lVar11 + 0x40);
  lVar5 = *(long *)(lVar11 + 0x48);
  func_0x0001000a8868(lVar11 + 0x28,uVar2);
  lVar9 = *(long *)(lVar11 + 0x20);
  uVar3 = *(undefined8 *)(lVar9 + 0x10);
  uVar6 = *(undefined8 *)(lVar9 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar6;
  uVar4 = *(undefined8 *)(lVar9 + 0x20);
  uVar7 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar7;
  uVar12 = *(undefined8 *)(lVar11 + 0x58);
  piVar10 = *(int **)(lVar5 + 8);
  iVar1 = *piVar10;
  plVar8 = (long *)(ulong)(uint)piVar10[1];
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar7);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_102699740;
                    /* WARNING: Could not recover jumptable at 0x00010269973c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(uVar3,uVar6,uVar4,uVar7,0,uVar12,2,uVar2,lVar5);
  return;
}



/* Entry: 102699740; end: 1026997e3;  */

void FUN_102699740(undefined8 param_1,undefined1 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0x60) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x58));
  uVar2 = *(undefined8 *)(lVar4 + 0x48);
  uVar3 = *(undefined8 *)(lVar4 + 0x50);
  if (unaff_x20 == 0) {
    func_0x000107c6142c(uVar3);
    func_0x000107c6142c(uVar2);
    *(undefined1 *)(lVar4 + 0x68) = param_2;
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    pcVar1 = FUN_1026997e4;
  }
  else {
    func_0x000107c614ac();
    func_0x000107c6142c(uVar3);
    func_0x000107c6142c(uVar2);
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    pcVar1 = FUN_102699870;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1026997e4; end: 10269986f;  */

void FUN_1026997e4(void)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  if (cVar1 == '\x01') {
    lVar3 = *(long *)(unaff_x22 + 0x28);
    func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
    pcVar2 = *(code **)(lVar3 + 0x10);
    if (pcVar2 != (code *)0x0) {
      uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x18);
      func_0x000107c6157c(uVar4);
      (*pcVar2)();
      func_0x00010058d43c(pcVar2,uVar4);
    }
  }
  else {
    FUN_1026998e0(*(undefined8 *)(unaff_x22 + 0x60));
  }
                    /* WARNING: Could not recover jumptable at 0x00010269986c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102699870; end: 1026998df;  */

void FUN_102699870(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  pcVar1 = *(code **)(lVar2 + 0x10);
  if (pcVar1 != (code *)0x0) {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x18);
    func_0x000107c6157c(uVar3);
    (*pcVar1)();
    func_0x00010058d43c(pcVar1,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001026998dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026998e0; end: 102699aeb;  */

void FUN_1026998e0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  code *pcVar7;
  long alStack_58 [3];
  
  puVar1 = PTR_PTR_1126b2070;
  func_0x000107c610f8(PTR_PTR_1126b2070);
  func_0x000107c453e4();
  if (param_1 == 0) {
    uVar2 = 0x796669746f7073;
    func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
    func_0x000107c59a10(puVar1);
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b2078;
    func_0x000107c610f8(PTR_PTR_1126b2078);
    func_0x000107c453e4();
    uVar2 = 0x72702d636973756d;
    func_0x000107c5fadc(0x72702d636973756d,0xee0072656469766f);
    func_0x000107c559a4(puVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c5a104(puVar3);
    puVar4 = PTR_PTR_1126b2080;
    func_0x000107c610f8(PTR_PTR_1126b2080);
    func_0x000107c453e4();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61168(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x000107c3e174();
    func_0x000107c61180();
    func_0x000107c538d8(puVar4);
    func_0x000107c61170(puVar5);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
    func_0x000107c51a88(uVar2);
    func_0x000107c61180();
    uVar6 = 0x676e6f733a707061;
    func_0x000107c5fadc(0x676e6f733a707061,0xee0064656464615f);
    func_0x000107c424e0(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar6);
    func_0x000107c61428(unaff_x20 + 0x10,alStack_58,0,0);
    pcVar7 = *(code **)(unaff_x20 + 0x10);
    if (pcVar7 == (code *)0x0) {
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar1);
    }
    else {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
      func_0x000107c6157c(uVar2);
      (*pcVar7)();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar1);
      func_0x00010058d43c(pcVar7,uVar2);
    }
    return;
  }
  alStack_58[0] = param_1;
  func_0x000107c60614(&UNK_11053e480,alStack_58,&UNK_11053e480,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x102699aec);
  (*pcVar7)();
}



/* Entry: 102699aec; end: 102699b4f;  */

void FUN_102699aec(void)

{
  long unaff_x20;
  
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102699b50; end: 102699c0b;  */

/* WARNING: Possible PIC construction at 0x000102699ba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102699bac) */

void FUN_102699b50(void)

{
  func_0x000107c6157c();
  func_0x0001001ca524(0x72,0,0x3c,4,0,0,&UNK_10daca1d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 102699c0c; end: 102699c5b;  */

void FUN_102699c0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x00010058d43c(uVar1,uVar2);
  return;
}



/* Entry: 102699c5c; end: 102699c8b;  */

undefined1  [16] FUN_102699c5c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0x10,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = FUN_102699c8c;
  return auVar1;
}



/* Entry: 102699c8c; end: 102699c8f;  */

void FUN_102699c8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 102699c90; end: 102699ce3;  */

void FUN_102699c90(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102699ce4;
  plVar3[5] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[7] = lVar1;
  plVar3[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102699664,lVar1,lVar2);
  return;
}



/* Entry: 102699ce4; end: 102699d1f;  */

void FUN_102699ce4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102699d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102699d20; end: 102699d87;  */

long FUN_102699d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000107c613fc(param_5,0x60,7);
  *(undefined8 *)(param_5 + 0x10) = 0;
  *(undefined8 *)(param_5 + 0x18) = 0;
  *(undefined8 *)(param_5 + 0x20) = param_1;
  FUN_102699d88(param_2,param_5 + 0x28);
  *(undefined8 *)(param_5 + 0x50) = param_3;
  *(undefined8 *)(param_5 + 0x58) = param_4;
  return param_5;
}



/* Entry: 102699d88; end: 102699d9f;  */

undefined8 * FUN_102699d88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 102699da0; end: 102699e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102699da0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  FUN_1026e3784(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar2 = puVar1;
  FUN_1026e36d8();
  puStack_40 = puVar2;
  func_0x00010008a7c8(&uStack_38,&puStack_40);
  func_0x000100083b20(&puStack_40);
  func_0x000107c61574(uStack_38);
  lVar4 = _DAT_112eb3f38;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112eb3f38);
  *(undefined **)(unaff_x20 + _DAT_112eb3f38) = puStack_40;
  func_0x000107c615e8(uVar3);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (lVar4 != 0) {
    func_0x000107c615f0(lVar4);
    func_0x000107c4ee7c();
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 102699ea0; end: 102699eff; -[_TtC23MapRouterImplementation33ArrivalNotificationsModalWorkflow init] */

void FUN_102699ea0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.ArrivalNotificationsModalWorkflow",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102699ecc);
  (*pcVar1)();
}



/* Entry: 102699f00; end: 102699f5b; -[_TtC23MapRouterImplementation33ArrivalNotificationsModalWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102699f00(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112eb3f20),
                      ((undefined8 *)(param_1 + _DAT_112eb3f20))[1]);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb3f28));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb3f30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb3f38));
  return;
}



/* Entry: 102699f5c; end: 102699f7b;  */

void FUN_102699f5c(void)

{
  func_0x000107c61168(&PTR_PTR_112857700);
  return;
}



/* Entry: 102699f7c; end: 102699f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102699f7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  FUN_1026e3784(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar2 = puVar1;
  FUN_1026e36d8();
  puStack_40 = puVar2;
  func_0x00010008a7c8(&uStack_38,&puStack_40);
  func_0x000100083b20(&puStack_40);
  func_0x000107c61574(uStack_38);
  lVar4 = _DAT_112eb3f38;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112eb3f38);
  *(undefined **)(unaff_x20 + _DAT_112eb3f38) = puStack_40;
  func_0x000107c615e8(uVar3);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (lVar4 != 0) {
    func_0x000107c615f0(lVar4);
    func_0x000107c4ee7c();
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 102699f80; end: 102699fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102699f80(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112eb3f20);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 102699fd8; end: 10269a033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102699fd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb3f20);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 10269a034; end: 10269a073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269a034(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb3f20;
  func_0x000107c61428(unaff_x20 + _DAT_112eb3f20,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10269a074;
  return auVar2;
}



/* Entry: 10269a074; end: 10269a077;  */

void FUN_10269a074(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10269a078; end: 10269a117; -[_TtC23MapRouterImplementation33ArrivalNotificationsModalWorkflow upsellScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269a078(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb3f38);
  *(undefined8 *)(param_1 + _DAT_112eb3f38) = 0;
  func_0x000107c61174();
  func_0x000107c615e8(uVar2);
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb3f20);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 == (code *)0x0) {
    func_0x000107c61170(param_1);
  }
  else {
    uVar2 = puVar1[1];
    func_0x000107c6157c(uVar2);
    (*pcVar3)();
    func_0x000107c61170(param_1);
    func_0x00010058d43c(pcVar3,uVar2);
  }
  return;
}



/* Entry: 10269a118; end: 10269a247;  */

/* WARNING: Possible PIC construction at 0x00010269a154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010269a204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010269a220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269a208) */
/* WARNING: Removing unreachable block (ram,0x00010269a158) */
/* WARNING: Removing unreachable block (ram,0x00010269a224) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269a118(void)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112eb3f90);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000104523254(0);
    func_0x000107c610f8();
    func_0x000104522fdc(8,0,1);
    func_0x000107c610f8(PTR_PTR_1126b3530);
    func_0x000107c4807c();
    func_0x000104522c9c(0);
    func_0x00010452281c(*(undefined8 *)(unaff_x20 + _DAT_112eb3f70),
                        ((undefined8 *)(unaff_x20 + _DAT_112eb3f70))[1]);
    func_0x000104520f00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10269a248; end: 10269a3e3;  */

/* WARNING: Possible PIC construction at 0x00010269a2e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010269a324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010269a338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010269a3b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269a33c) */
/* WARNING: Removing unreachable block (ram,0x00010269a328) */
/* WARNING: Removing unreachable block (ram,0x00010269a2e4) */
/* WARNING: Removing unreachable block (ram,0x00010269a2f0) */
/* WARNING: Removing unreachable block (ram,0x00010269a37c) */
/* WARNING: Removing unreachable block (ram,0x00010269a380) */
/* WARNING: Removing unreachable block (ram,0x00010269a30c) */
/* WARNING: Removing unreachable block (ram,0x00010269a3bc) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269a248(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112eb3f78);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb3f80);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5fadc(*(undefined8 *)(unaff_x20 + _DAT_112eb3f70),
                        ((undefined8 *)(unaff_x20 + _DAT_112eb3f70))[1]);
    func_0x000107c4e680(lVar2);
    func_0x000107c61180();
    lVar1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 10269a3e4; end: 10269a443; -[_TtC23MapRouterImplementation17ChatModalWorkflow init] */

void FUN_10269a3e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.ChatModalWorkflow",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10269a410);
  (*pcVar1)();
}



/* Entry: 10269a444; end: 10269a4e3; -[_TtC23MapRouterImplementation17ChatModalWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010269a488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010269a4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010269a4c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269a4ac) */
/* WARNING: Removing unreachable block (ram,0x00010269a48c) */
/* WARNING: Removing unreachable block (ram,0x00010269a4cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269a444(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112eb3f68),
                      ((undefined8 *)(param_1 + _DAT_112eb3f68))[1]);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb3f70 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb3f78));
  return;
}



/* Entry: 10269a4e4; end: 10269a503;  */

void FUN_10269a4e4(void)

{
  func_0x000107c61168(&PTR_PTR_1128577d8);
  return;
}



/* Entry: 10269a504; end: 10269a507;  */

/* WARNING: Possible PIC construction at 0x00010269a154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010269a204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010269a220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269a208) */
/* WARNING: Removing unreachable block (ram,0x00010269a158) */
/* WARNING: Removing unreachable block (ram,0x00010269a224) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269a504(void)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112eb3f90);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000104523254(0);
    func_0x000107c610f8();
    func_0x000104522fdc(8,0,1);
    func_0x000107c610f8(PTR_PTR_1126b3530);
    func_0x000107c4807c();
    func_0x000104522c9c(0);
    func_0x00010452281c(*(undefined8 *)(unaff_x20 + _DAT_112eb3f70),
                        ((undefined8 *)(unaff_x20 + _DAT_112eb3f70))[1]);
    func_0x000104520f00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10269a508; end: 10269a55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269a508(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112eb3f68);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10269a560; end: 10269a5bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269a560(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb3f68);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 10269a5bc; end: 10269a5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269a5bc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb3f68;
  func_0x000107c61428(unaff_x20 + _DAT_112eb3f68,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10269a5fc;
  return auVar2;
}



/* Entry: 10269a5fc; end: 10269a5ff;  */

void FUN_10269a5fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10269a600; end: 10269a6ef; -[_TtC23MapRouterImplementation17ChatModalWorkflow chatScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x00010269a634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269a638) */

void FUN_10269a600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010269a64c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10269a6f0; end: 10269a7b3;  */

/* WARNING: Possible PIC construction at 0x00010269a79c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269a7a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269a6f0(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112eb4010);
  lVar1 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  puVar2 = &UNK_1105349b8;
  func_0x000107c613fc(&UNK_1105349b8,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  func_0x000107c61174();
  func_0x0001001ca524(0x72,0,0x3c,4,0,0,&UNK_10daca288,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10269a7b4; end: 10269a81b;  */

void FUN_10269a7b4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  plVar2 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10269a81c;
  plVar2[0xb] = param_2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar2[0xc] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[0xd] = lVar3;
  plVar2[0xe] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269aab8,lVar3,lVar4);
  return;
}



/* Entry: 10269a81c; end: 10269a887;  */

void FUN_10269a81c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269a888,uVar3,uVar1);
  return;
}



/* Entry: 10269a888; end: 10269aa4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269a888(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar9 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  puVar1 = PTR_PTR_1126b20d0;
  func_0x000107c610f8(PTR_PTR_1126b20d0);
  func_0x000107c48224();
  puVar2 = PTR_PTR_1126b20d8;
  func_0x000107c610f8(PTR_PTR_1126b20d8);
  func_0x000107c453e4();
  puVar3 = puVar2;
  func_0x000107c5e47c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126ae6d0;
  func_0x000107c610f8(PTR_PTR_1126ae6d0);
  func_0x000107c4831c();
  puVar4 = PTR_PTR_1126b1bb0;
  func_0x000107c61168(PTR_PTR_1126b1bb0);
  func_0x000107c3e6c4();
  func_0x000107c61180();
  puVar5 = puVar4;
  FUN_10269ae40();
  uVar10 = *(undefined8 *)(lVar9 + _DAT_112eb4018);
  uVar6 = *(undefined8 *)(lVar9 + _DAT_112eb3fe8);
  func_0x000107c501bc(uVar6);
  func_0x000107c61180();
  puVar7 = puVar3;
  func_0x000107c3ecc8(puVar3);
  func_0x000107c61180();
  func_0x000107c3ed80(uVar10,param_2,puVar4,puVar5,0,uVar6,1,puVar7,0);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c615e8(uVar6);
  func_0x000107c42c1c(*(undefined8 *)(lVar9 + _DAT_112eb4010),param_2,uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010269aa48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10269aa4c; end: 10269aab7;  */

void FUN_10269aa4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269aab8,uVar1,uVar2);
  return;
}



/* Entry: 10269aab8; end: 10269abdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269aab8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x58) + _DAT_112eb3ff0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x58) + _DAT_112eb3fe0);
    uVar5 = *puVar1;
    lVar4 = puVar1[1];
    func_0x000107c5fadc(uVar5);
    lVar3 = lVar2;
    func_0x000107c4c39c();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(lVar2);
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)(lVar3 + _DAT_112fcd628);
      *(undefined8 *)(unaff_x22 + 0x78) = *puVar1;
      lVar2 = puVar1[1];
      *(long *)(unaff_x22 + 0x80) = lVar2;
      func_0x000107c61434(lVar2);
      func_0x000107c61170();
      if (lVar2 != 0) {
        func_0x00010269b22c();
        *(long *)(unaff_x22 + 0x88) = lVar3;
        *(long *)(unaff_x22 + 0x90) = lVar4;
        if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(FUN_10269abdc,0,0);
          return;
        }
        uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
        func_0x000107c6142c(lVar2);
        goto LAB_10269aba8;
      }
    }
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
LAB_10269aba8:
  func_0x000107c61574(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010269abc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10269abdc; end: 10269acb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269abdc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x58) + _DAT_112eb4008);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x98) = lVar1;
  if (lVar1 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10269acb8;
    func_0x000107c61448(unaff_x22 + 0x10,0);
    FUN_10269b38c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c6142c(uVar2);
  *(undefined8 *)(unaff_x22 + 0xa0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10269ad4c,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 10269acb8; end: 10269acf7;  */

void FUN_10269acb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269acf8,0,0);
  return;
}



/* Entry: 10269acf8; end: 10269ad4b;  */

void FUN_10269acf8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10269ad4c,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 10269ad4c; end: 10269ae3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269ad4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x22;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x22 + 0xa0);
  lVar5 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  lVar5 = *(long *)(lVar5 + _DAT_112eb3fd8);
  uVar2 = *(undefined8 *)(lVar5 + 0x10);
  uVar3 = *(undefined8 *)(lVar5 + 0x18);
  func_0x000107c61434(uVar3);
  func_0x000107c5fadc(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  uVar3 = *(undefined8 *)(lVar5 + 0x20);
  uVar1 = *(undefined8 *)(lVar5 + 0x28);
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  if (lVar7 == 0) {
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
  }
  else {
    puVar6 = *(undefined **)(unaff_x22 + 0xa0);
  }
  puVar4 = PTR_PTR_1126b20c8;
  func_0x000107c61168(PTR_PTR_1126b20c8);
  func_0x000107c437d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010269ae3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar4);
  return;
}



/* Entry: 10269ae40; end: 10269afa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10269ae40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_b0;
  puVar2 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  puVar3 = &UNK_1105349e0;
  func_0x000107c613fc(&UNK_1105349e0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar4 = &UNK_110534a08;
  func_0x000107c613fc(&UNK_110534a08,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
  puVar5 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_10269b804;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100e1779c;
  puStack_68 = &UNK_110534a20;
  ppuVar6 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar6);
  uStack_90 = 0x10269b810;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100e17304;
  puStack_98 = &UNK_110534a48;
  puStack_88 = puVar4;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  func_0x000107c47be0(puVar5);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_88);
  func_0x000107c61574(puStack_58);
  return puVar5;
}



/* Entry: 10269afa8; end: 10269b38b;  */

void FUN_10269afa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = &UNK_110534a80;
  func_0x000107c613fc(&UNK_110534a80,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_4);
  puVar2 = &UNK_110534aa8;
  func_0x000107c613fc(&UNK_110534aa8,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  uStack_50 = 0x10269b834;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_110534ac0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(param_3);
  func_0x000107c60bd0(ppuVar3);
  return;
}


