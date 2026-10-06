/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10417f780; end: 10417f78b;  */

void FUN_10417f780(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  undefined8 auStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  auStack_80[0] = *unaff_x20;
  puVar2 = &UNK_10dcdb118;
  _swift_getWitnessTable(&UNK_10dcdb118,param_2);
  uVar3 = param_2;
  __sSlsE7isEmptySbvg(param_2,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = 0;
    __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,uVar6);
    __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
    if ((uVar3 & 1) == 0) {
      func_0x000104182454(0,uVar6);
      FUN_104181fc8();
    }
    uVar5 = *unaff_x20;
    puStack_58 = auStack_50;
    pcStack_60 = FUN_104180d2c;
    uVar4 = 0x112d393f0;
    uStack_70 = uVar6;
    uStack_68 = uVar6;
    uStack_40 = uVar6;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    FUN_1040fee4c(param_1,0x10418152c,auStack_80,uVar5,&UNK_11074b8b8,uVar6,uVar4,uVar6,
                  PTR___ss5ErrorWS_11034ee10,auStack_88);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10417f2ec);
  (*pcVar1)();
}



/* Entry: 10417f78c; end: 10417f7f3;  */

void FUN_10417f78c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dcdb1f8;
  _swift_getWitnessTable(&UNK_10dcdb1f8,param_3);
  __sSmsSMRzrlE9removeAll5whereySb7ElementSTQzKXE_tKF(param_1,param_2,param_3,puVar1,param_4);
  return;
}



/* Entry: 10417f7f4; end: 10417f833;  */

void FUN_10417f7f4(long *param_1,long param_2,long *param_3,long *param_4,long *param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  
  if (param_2 < *param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10417f82c);
    (*pcVar1)();
  }
  if (*param_3 != 0) {
    if (*param_4 == *param_3) {
      *(long *)(*param_5 + 0x10) = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ss15ContiguousArrayVMa_11034e678)(0,param_6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10417f830);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10417f834);
  (*pcVar1)();
}



/* Entry: 10417f834; end: 10417fbbb;  */

long FUN_10417f834(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  
  lVar4 = 0;
  uStack_f0 = param_1;
  __sSqMa(0,param_6);
  lStack_120 = *(long *)(lVar4 + -8);
  lStack_118 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_150 = *(long *)(param_7 + -8);
  lStack_128 = (long)&lStack_150 - extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_150 + 0x40));
  lVar9 = ((long)&lStack_150 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_f8 = *(undefined8 *)(param_8 + 8);
  lVar4 = 0;
  lStack_148 = lVar9;
  _swift_getAssociatedTypeWitness
            (0,uStack_f8,param_7,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
  lStack_138 = *(long *)(lVar4 + -8);
  lStack_130 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_138 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_140 = lVar9 - extraout_x8_01;
  uVar5 = 0xff;
  lStack_e0 = param_2;
  uStack_d8 = param_3;
  lStack_d0 = param_4;
  lStack_c8 = param_5;
  __sSrMa(0xff,param_6);
  puVar6 = PTR___sSryxGSlsMc_11034e1a8;
  _swift_getWitnessTable(PTR___sSryxGSlsMc_11034e1a8,uVar5);
  uVar7 = 0;
  __ss5SliceVMa(0,uVar5,puVar6);
  __ss5SliceV4basexvg(alStack_78);
  lVar4 = alStack_78[0];
  if (alStack_78[0] != 0) {
    lStack_98 = param_2;
    uStack_90 = param_3;
    uStack_88 = param_4;
    uStack_80 = param_5;
    __ss5SliceV10startIndex0C0Qzvg(&lStack_a0,uVar7);
    lVar4 = lVar4 + *(long *)(*(long *)(param_6 + -8) + 0x48) * lStack_a0;
  }
  lStack_e0 = param_2;
  uStack_d8 = param_3;
  lStack_d0 = param_4;
  lStack_c8 = param_5;
  __ss5SliceV8endIndex0C0Qzvg(alStack_78,uVar7);
  uStack_110 = param_3;
  uStack_108 = param_4;
  uStack_100 = param_5;
  lStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_80 = param_5;
  __ss5SliceV10startIndex0C0Qzvg(&lStack_a0,uVar7);
  lVar8 = alStack_78[0] - lStack_a0;
  __sSr5start5countSryxGSpyxGSg_SitcfC(lVar4,lVar8,param_6);
  uVar2 = uStack_f0;
  uVar5 = uStack_f8;
  lStack_d0 = param_6;
  lStack_c8 = param_7;
  lStack_c0 = param_8;
  lStack_b8 = lVar4;
  lStack_b0 = lVar8;
  __sST32withContiguousStorageIfAvailableyqd__Sgqd__SRy7ElementQzGKXEKlFTj
            (&lStack_98,FUN_1041812f8,&lStack_e0,PTR___sSiN_11034deb0,param_7,uStack_f8);
  lVar9 = lStack_98;
  if ((char)uStack_90 == '\x01') {
    (**(code **)(lStack_150 + 0x10))(lStack_148,uVar2,param_7);
    lVar1 = lStack_140;
    lVar9 = lStack_140;
    __sST13_copyContents12initializing8IteratorQz_SitSry7ElementQzG_tFTj
              (lStack_140,lVar4,lVar8,param_7,uVar5);
    lVar4 = lStack_130;
    _swift_getAssociatedConformanceWitness
              (uVar5,param_7,lStack_130,PTR___sSTTL_11034db40,PTR___sST8IteratorST_StTn_11034db38);
    lVar8 = lStack_128;
    __sSt4next7ElementQzSgyFTj(lStack_128,lVar4,uVar5);
    (**(code **)(lStack_138 + 8))(lVar1,lVar4);
    lVar4 = lVar8;
    (**(code **)(*(long *)(param_6 + -8) + 0x30))(lVar8,1,param_6);
    (**(code **)(lStack_120 + 8))(lVar8,lStack_118);
    if ((int)lVar4 != 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10417fb68);
      (*pcVar3)();
    }
  }
  uStack_d8 = uStack_110;
  lStack_d0 = uStack_108;
  lStack_c8 = uStack_100;
  lStack_e0 = param_2;
  __ss5SliceV10startIndex0C0Qzvg(&lStack_98,uVar7);
  if (SCARRY8(lStack_98,lVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10417fbbc);
    (*pcVar3)();
  }
  return lStack_98 + lVar9;
}



/* Entry: 10417fbbc; end: 10417fc6f;  */

undefined8 FUN_10417fbbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 auStack_48 [3];
  
  uVar1 = 0;
  uStack_90 = param_2;
  uStack_60 = param_2;
  uStack_58 = param_1;
  func_0x000104181120();
  uStack_80 = 0x1041813fc;
  puStack_78 = auStack_70;
  uVar2 = 0x112d393f0;
  uStack_88 = uVar1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  FUN_1040fee4c(auStack_48,0x104181468,auStack_a0,param_1,&UNK_11074b8b8,param_2,uVar2,uVar1,
                PTR___ss5ErrorWS_11034ee10,auStack_a8);
  return auStack_48[0];
}



/* Entry: 10417fc70; end: 10417fcab;  */

void FUN_10417fc70(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  (**(code **)(lVar1 + 0x10))
            (param_1,param_3 + *(long *)(lVar1 + 0x48) * *(long *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10417fcac; end: 10417fccf;  */

void FUN_10417fcac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000104182474(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x18),param_3);
  return;
}



/* Entry: 10417fcd0; end: 10417fcff;  */

void FUN_10417fcd0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000104182938(*(undefined8 *)(unaff_x20 + 0x18),param_1,param_2,
                      *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10417fd00; end: 10417fd2b;  */

void FUN_10417fd00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_104182460(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10),PTR___sytN_11034f1b0 + 8,param_3);
  return;
}



/* Entry: 10417fd2c; end: 10417fde7;  */

undefined8 FUN_10417fd2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 auStack_48 [3];
  
  uVar1 = 0;
  uStack_90 = param_3;
  uStack_60 = param_3;
  uStack_58 = param_2;
  uStack_50 = param_1;
  func_0x000104181120(0,param_3);
  uStack_80 = 0x1041813c0;
  puStack_78 = auStack_70;
  uVar2 = 0x112d393f0;
  uStack_88 = uVar1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  FUN_1040fee4c(auStack_48,0x1041813dc,auStack_a0,param_1,&UNK_11074b8b8,param_3,uVar2,uVar1,
                PTR___ss5ErrorWS_11034ee10,auStack_a8);
  return auStack_48[0];
}



/* Entry: 10417fde8; end: 10417fe4f;  */

void FUN_10417fde8(undefined1 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(param_2 + 0x10);
  FUN_104183798(lVar2,*(undefined8 *)(param_2 + 8),param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10)
               );
  if ((lVar2 == 0) || (lVar2 == *(long *)(lVar1 + 8))) {
    uVar3 = 0;
  }
  else {
    *(undefined8 *)(lVar1 + 8) = 0;
    *(long *)(lVar1 + 0x10) = lVar2;
    uVar3 = 1;
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 10417fe50; end: 10417fe77;  */

void FUN_10417fe50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000104182474(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                      PTR___sSbN_11034dd40,param_3);
  return;
}



/* Entry: 10417fe78; end: 10417ff1b;  */

void FUN_10417fe78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 auStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = PTR___ss5NeverOs5ErrorsWP_11034ee90;
  puVar1 = PTR___ss5NeverON_11034ee88;
  FUN_1040f6364(auStack_70,FUN_1040f6358,0,param_1,&UNK_11074b8b8,param_2,PTR___ss5NeverON_11034ee88
                ,PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  uStack_60 = param_2;
  uStack_58 = param_1;
  FUN_10417c3a8(auStack_70[0],FUN_10418135c,auStack_70,param_2,puVar1,puVar2);
  return;
}



/* Entry: 10417ff1c; end: 10417fff3;  */

undefined8
FUN_10417ff1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 auStack_50 [4];
  
  uVar1 = 0xff;
  uStack_a0 = param_4;
  uStack_70 = param_4;
  uStack_68 = param_1;
  uStack_60 = param_2;
  uStack_58 = param_3;
  func_0x000104181120(0xff,param_4);
  uVar2 = 0;
  _swift_getTupleTypeMetadata2(0,uVar1,PTR___sSiN_11034deb0,0,0);
  pcStack_90 = FUN_10418126c;
  puStack_88 = auStack_80;
  uVar1 = 0x112d393f0;
  uStack_98 = uVar2;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  FUN_1040fee4c(auStack_50,0x104181288,auStack_b0,param_3,&UNK_11074b8b8,param_4,uVar1,uVar2,
                PTR___ss5ErrorWS_11034ee10,auStack_b8);
  return auStack_50[0];
}



/* Entry: 10417fff4; end: 10418002f;  */

void FUN_10417fff4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10417c818(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104180030; end: 104180083;  */

undefined1  [16] FUN_104180030(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_3 - param_1;
  if (SBORROW8(param_3,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104180080);
    (*pcVar2)();
  }
  if ((long)param_2 < 1) {
    if (((long)uVar1 < 1) && ((long)param_2 < (long)uVar1)) goto LAB_104180060;
  }
  else if ((-1 < (long)uVar1) && (uVar1 < param_2)) {
LAB_104180060:
    return ZEXT816(1) << 0x40;
  }
  if (SCARRY8(param_1,param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104180084);
    (*pcVar2)();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1 + param_2;
  return auVar3;
}



/* Entry: 104180084; end: 1041800e3;  */

void FUN_104180084(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  FUN_1041824d8(lVar2,param_2,param_3,lVar1);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (param_1,param_3 + *(long *)(*(long *)(lVar1 + -8) + 0x48) * lVar2,lVar1);
  return;
}



/* Entry: 1041800e4; end: 10418021b;  */

void FUN_1041800e4(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  code *pcStack_88;
  long *plStack_80;
  long alStack_70 [2];
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104180218);
    (*pcVar1)();
  }
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  FUN_1040f6364(alStack_70,FUN_1040f6358,0,*unaff_x20,&UNK_11074b8b8,uVar4,
                PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90)
  ;
  if (param_2 < alStack_70[0]) {
    uVar2 = 0;
    __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,uVar4);
    __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
    if ((uVar2 & 1) == 0) {
      func_0x000104182454(0,uVar4);
      FUN_104181fc8();
    }
    uVar5 = *unaff_x20;
    pcStack_88 = FUN_10418120c;
    plStack_80 = alStack_70;
    uVar3 = 0x112d393f0;
    uStack_90 = uVar4;
    uStack_60 = uVar4;
    lStack_58 = param_2;
    uStack_50 = param_1;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    FUN_1040fee4c(0x1041815b8,auStack_a0,uVar5,&UNK_11074b8b8,uVar4,uVar3,PTR___sytN_11034f1b0 + 8,
                  PTR___ss5ErrorWS_11034ee10,auStack_a8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10418021c);
  (*pcVar1)();
}



/* Entry: 10418021c; end: 10418026f;  */

void FUN_10418021c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10417cd00(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10))
  ;
  return;
}



/* Entry: 104180270; end: 104180673;  */

void FUN_104180270(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long extraout_x8;
  undefined8 uVar8;
  long extraout_x12;
  long extraout_x13;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 auStack_180 [2];
  long alStack_170 [3];
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  code *pcStack_f8;
  long *plStack_f0;
  long alStack_e0 [2];
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar5 = 0;
  lStack_138 = param_5;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar12 = (long)alStack_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_130 = param_1;
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x104180660);
    (*pcVar10)();
  }
  uVar11 = *unaff_x20;
  uVar9 = *(undefined8 *)(param_4 + 0x10);
  lStack_140 = extraout_x13;
  FUN_1040f6364(alStack_e0,FUN_1040f6358,0,uVar11,&UNK_11074b8b8,uVar9,PTR___ss5NeverON_11034ee88,
                PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  if (alStack_e0[0] < param_2) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x104180664);
    (*pcVar10)();
  }
  lVar3 = param_2 - lStack_130;
  if (SBORROW8(param_2,lStack_130)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x104180668);
    (*pcVar10)();
  }
  lVar6 = lStack_138;
  uStack_158 = param_3;
  lStack_150 = lVar12 - extraout_x12;
  lStack_148 = lVar5;
  __sSl5countSivgTj(lStack_138,param_6);
  lVar5 = lVar6 - lVar3;
  if (!SBORROW8(lVar6,lVar3)) {
    FUN_1040f6364(alStack_e0,FUN_1040f6358,0,uVar11,&UNK_11074b8b8,uVar9,PTR___ss5NeverON_11034ee88,
                  PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
    lVar1 = alStack_e0[0] + lVar5;
    if (SCARRY8(alStack_e0[0],lVar5)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x104180670);
      (*pcVar10)();
    }
    uVar7 = 0;
    alStack_170[2] = lVar5;
    __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,uVar9);
    __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
    FUN_1040f6364(alStack_e0,0x104181fbc,0,*unaff_x20,&UNK_11074b8b8,uVar9,
                  PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,
                  PTR___ss5NeverOs5ErrorsWP_11034ee90);
    if ((alStack_e0[0] < lVar1) || ((uVar7 & 1) == 0)) {
      uVar11 = 0;
      func_0x000104182454(0,uVar9);
      FUN_10418215c(lVar1,0,uVar11);
    }
    lVar1 = lStack_130;
    lVar5 = lStack_138;
    uVar11 = uStack_158;
    if (lVar3 <= lVar6) {
      lVar6 = lVar3;
    }
    lVar2 = lStack_130 + lVar6;
    if (!SCARRY8(lStack_130,lVar6)) {
      alStack_170[1] = 0;
      alStack_170[0] = lVar3;
      __sSl10startIndex0B0QzvgTj(lVar12,lStack_138,param_6);
      lVar3 = lStack_150;
      __sSl5index_8offsetBy5IndexQzAD_SitFTj(lStack_150,lVar12,lVar6,lVar5,param_6);
      lVar4 = lStack_148;
      pcVar10 = *(code **)(lStack_140 + 8);
      (*pcVar10)(lVar12,lStack_148);
      uVar8 = *unaff_x20;
      lStack_c8 = lVar5;
      lStack_b8 = lVar1;
      uStack_a0 = uVar11;
      lStack_98 = lVar3;
      lStack_90 = alStack_170[2];
      lStack_80 = alStack_170[0];
      pcStack_f8 = FUN_1041811d0;
      plStack_f0 = alStack_e0;
      uVar11 = 0x112d393f0;
      uStack_100 = uVar9;
      uStack_d0 = uVar9;
      uStack_c0 = param_6;
      lStack_b0 = param_2;
      lStack_a8 = lVar2;
      lStack_88 = lVar6;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      *(undefined1 **)((lVar12 - extraout_x12) + -0x10) = auStack_118;
      FUN_1040fee4c(0x1041815a4,auStack_110,uVar8,&UNK_11074b8b8,uVar9,uVar11,
                    PTR___sytN_11034f1b0 + 8,PTR___ss5ErrorWS_11034ee10);
      (*pcVar10)(lVar3,lVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x104180674);
    (*pcVar10)();
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10418066c);
  (*pcVar10)();
}



/* Entry: 104180674; end: 104180773;  */

void FUN_104180674(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if (param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104180770);
    (*pcVar1)();
  }
  FUN_1040f6364(&lStack_70,FUN_1040f6358,0,*unaff_x20,&UNK_11074b8b8,*(undefined8 *)(param_6 + 0x10)
                ,PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90
               );
  if (param_5 <= lStack_70) {
    puVar2 = &UNK_10dcdb118;
    lStack_70 = param_1;
    uStack_68 = param_2;
    uStack_60 = param_3;
    _swift_getWitnessTable(&UNK_10dcdb118,param_6);
    uVar3 = 0;
    __ss5SliceVMa(0,param_6,puVar2);
    puVar2 = PTR___ss5SliceVyxGSlsMc_11034eee0;
    _swift_getWitnessTable(PTR___ss5SliceVyxGSlsMc_11034eee0,uVar3);
    FUN_104180270(param_4,param_5,&lStack_70,param_6,uVar3,puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104180774);
  (*pcVar1)();
}



/* Entry: 104180774; end: 1041807ab;  */

void FUN_104180774(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10417d4b0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1041807ac; end: 104180883;  */

void FUN_1041807ac(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,code *param_5,
                  code *param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar1 = PTR___sSlTL_11034dfe8;
  uVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,uVar3,puVar1,PTR___sSl5IndexSl_SLTn_11034dfa0);
  uVar4 = param_2;
  __sSL2leoiySbx_xtFZTj(param_2,param_1,uVar3,param_4);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104180880);
    (*pcVar2)();
  }
  lVar5 = 0;
  (*param_5)(0,uVar3,param_4);
  (*param_6)(param_1,param_2 + (long)*(int *)(lVar5 + 0x24),uVar3,param_4);
  if ((param_1 & 1) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104180884);
  (*pcVar2)();
}



/* Entry: 104180884; end: 1041809bf;  */

long FUN_104180884(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  
  if (-1 < param_2) {
    lVar2 = param_2;
    FUN_104184744(param_2,param_3);
    pcStack_78 = FUN_104181180;
    puStack_70 = auStack_60;
    uStack_80 = param_3;
    uStack_50 = param_3;
    lStack_48 = param_2;
    uStack_40 = param_1;
    _swift_retain();
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    FUN_1040fee4c(0x104181590,auStack_90,lVar2,&UNK_11074b8b8,param_3,uVar3,PTR___sytN_11034f1b0 + 8
                  ,PTR___ss5ErrorWS_11034ee10,auStack_98);
    _swift_release(lVar2);
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104180954);
  (*pcVar1)();
}



/* Entry: 1041809c0; end: 104180a43;  */

void FUN_1041809c0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10417e68c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),FUN_10418114c,
                0x10418157c);
  return;
}



/* Entry: 104180a44; end: 104180c5f;  */

void FUN_104180a44(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  long alStack_b0 [2];
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104180c58);
    (*pcVar2)();
  }
  uVar7 = *unaff_x20;
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  FUN_1040f6364(alStack_b0,FUN_1040f6358,0,uVar7,&UNK_11074b8b8,uVar5,PTR___ss5NeverON_11034ee88,
                PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  if (param_2 <= alStack_b0[0]) {
    lVar3 = param_4;
    __sSl5countSivgTj(param_4,param_5);
    FUN_1040f6364(alStack_b0,FUN_1040f6358,0,uVar7,&UNK_11074b8b8,uVar5,PTR___ss5NeverON_11034ee88,
                  PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
    lVar1 = alStack_b0[0] + lVar3;
    if (!SCARRY8(alStack_b0[0],lVar3)) {
      uVar4 = 0;
      __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,uVar5);
      __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
      FUN_1040f6364(alStack_b0,0x104181fbc,0,*unaff_x20,&UNK_11074b8b8,uVar5,
                    PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,
                    PTR___ss5NeverOs5ErrorsWP_11034ee90);
      if ((alStack_b0[0] < lVar1) || ((uVar4 & 1) == 0)) {
        uVar7 = 0;
        func_0x000104182454(0,uVar5);
        FUN_10418215c(lVar1,0,uVar7);
      }
      uVar6 = *unaff_x20;
      pcStack_c8 = FUN_10418112c;
      plStack_c0 = alStack_b0;
      uVar7 = 0x112d393f0;
      uStack_d0 = uVar5;
      uStack_a0 = uVar5;
      lStack_98 = param_4;
      uStack_90 = param_5;
      uStack_88 = param_1;
      lStack_80 = lVar3;
      lStack_78 = param_2;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      FUN_1040fee4c(0x104181568,auStack_e0,uVar6,&UNK_11074b8b8,uVar5,uVar7,PTR___sytN_11034f1b0 + 8
                    ,PTR___ss5ErrorWS_11034ee10,auStack_e8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104180c60);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104180c5c);
  (*pcVar2)();
}



/* Entry: 104180c60; end: 104180c9f;  */

void FUN_104180c60(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10417eddc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104180ca0; end: 104180cd3;  */

void FUN_104180ca0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_104182708(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),param_1,param_2,
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104180cd4; end: 104180cfb;  */

void FUN_104180cd4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10418330c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104180cfc; end: 104180d2b;  */

void FUN_104180cfc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_104183378(*(undefined8 *)(unaff_x20 + 0x18),param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10))
  ;
  return;
}



/* Entry: 104180d2c; end: 104180d53;  */

void FUN_104180d2c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1041834cc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104180d54; end: 104180d83;  */

void FUN_104180d54(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_104183530(*(undefined8 *)(unaff_x20 + 0x18),param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10))
  ;
  return;
}



/* Entry: 104180d84; end: 104180dab;  */

void FUN_104180d84(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_104183684(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104180dac; end: 104180dcb;  */

void FUN_104180dac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcdafd0,param_1);
  return;
}



/* Entry: 104180dcc; end: 104180def;  */

void FUN_104180dcc(void)

{
  FUN_104180ee4(0x112d4f688,PTR___sSnyxGSksSxRzSZ6StrideRpzrlMc_11034e120);
  return;
}



/* Entry: 104180df0; end: 104180e37;  */

void FUN_104180df0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = &UNK_10dcdb068;
  _swift_getWitnessTable();
  puStack_28 = puVar1;
  _swift_getWitnessTable(PTR___ss5SliceVyxGSksSkRzrlMc_11034eed8,param_1,&puStack_28);
  return;
}



/* Entry: 104180e38; end: 104180e5b;  */

void FUN_104180e38(void)

{
  FUN_104180ee4(0x112f920a0,PTR___sSnyxGSKsSxRzSZ6StrideRpzrlMc_11034e110);
  return;
}



/* Entry: 104180e5c; end: 104180ea3;  */

void FUN_104180e5c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = &UNK_10dcdb0b8;
  _swift_getWitnessTable();
  puStack_28 = puVar1;
  _swift_getWitnessTable(PTR___ss5SliceVyxGSKsSKRzrlMc_11034eec8,param_1,&puStack_28);
  return;
}



/* Entry: 104180ea4; end: 104180ebf;  */

void FUN_104180ea4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcdb000,param_1);
  return;
}



/* Entry: 104180ec0; end: 104180ee3;  */

void FUN_104180ec0(void)

{
  FUN_104180ee4(0x112f920a8,PTR___sSnyxGSlsSxRzSZ6StrideRpzrlMc_11034e128);
  return;
}



/* Entry: 104180ee4; end: 104180f57;  */

void FUN_104180ee4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112d4f678;
    func_0x00010002969c(0x112d4f678,&UNK_10d915670);
    uVar2 = uVar1;
    func_0x000100f79844();
    puStack_40 = PTR___sSiSxsWP_11034dee8;
    uStack_38 = uVar2;
    _swift_getWitnessTable(param_2,uVar1,&puStack_40);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 104180f58; end: 104180f67;  */

void FUN_104180f58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(PTR___ss5SliceVyxGSlsMc_11034eee0,param_1);
  return;
}



/* Entry: 104180f68; end: 104180ff7;  */

void FUN_104180f68(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = &UNK_10dcdb1f8;
  _swift_getWitnessTable();
  puStack_28 = puVar1;
  _swift_getWitnessTable(PTR___ss5SliceVyxGSMsSMRzrlMc_11034eed0,param_1,&puStack_28);
  return;
}



/* Entry: 104180ff8; end: 104181007;  */

void FUN_104180ff8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 104181008; end: 10418105b;  */

undefined8 * FUN_104181008(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 10418105c; end: 104181097;  */

undefined8 * FUN_10418105c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  return param_1;
}



/* Entry: 104181098; end: 10418112b;  */

int FUN_104181098(ulong *param_1,int param_2)

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



/* Entry: 10418112c; end: 10418114b;  */

void FUN_10418112c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10417ebd8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10418114c; end: 10418117f;  */

void FUN_10418114c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1041829f0(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),param_1,param_2,
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104181180; end: 1041811cf;  */

void FUN_104181180(long param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (0 < lVar1) {
    __sSp10initialize9repeating5countyx_SitF
              (*(undefined8 *)(unaff_x20 + 0x20),lVar1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  }
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1041811d0; end: 10418120b;  */

void FUN_1041811d0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10417db54(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10418120c; end: 10418126b;  */

void FUN_10418120c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_1041824d8(lVar2,param_1,param_2,lVar1);
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))
            (param_2 + *(long *)(*(long *)(lVar1 + -8) + 0x48) * lVar2,uVar3,lVar1);
  return;
}



/* Entry: 10418126c; end: 1041812f7;  */

void FUN_10418126c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10417c4e8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1041812f8; end: 10418135b;  */

void FUN_1041812f8(long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  long unaff_x20;
  
  if (param_2 == 0) {
    param_3 = 0;
  }
  else if (param_3 != 0) {
    if (*(long *)(unaff_x20 + 0x30) < param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10418135c);
      (*pcVar1)();
    }
    __sSp10initialize4from5countySPyxG_SitF
              (param_2,param_3,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  }
  *param_1 = param_3;
  return;
}



/* Entry: 10418135c; end: 104181433;  */

void FUN_10418135c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_10417c144(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
                param_3);
  return;
}



/* Entry: 104181434; end: 10418143f;  */

void FUN_104181434(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_104180030(uVar1,param_3,*param_4);
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  return;
}



/* Entry: 104181440; end: 10418147b;  */

void FUN_104181440(void)

{
  func_0x000104180234();
  return;
}



/* Entry: 10418147c; end: 10418148b;  */

undefined8 * FUN_10418147c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 10418148c; end: 1041815cb;  */

void FUN_10418148c(void)

{
  FUN_10417fcac();
  return;
}



/* Entry: 1041815cc; end: 1041815ef;  */

void FUN_1041815cc(long *param_1,long *param_2,long param_3)

{
  code *pcVar1;
  
  if (!SCARRY8(*param_2,param_3)) {
    *param_1 = *param_2 + param_3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100db3634);
  (*pcVar1)();
}



/* Entry: 1041815f0; end: 10418176b;  */

void FUN_1041815f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  __ss6MirrorV22AncestorRepresentationOMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112dcc478;
  func_0x0001000285a8(0x112dcc478,&UNK_10d98eb80);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar6 - extraout_x8_00;
  uVar1 = *(undefined4 *)PTR___ss6MirrorV12DisplayStyleO10collectionyA2DmFWC_11034ef88;
  lVar3 = 0;
  uStack_70 = param_2;
  uStack_68 = param_2;
  __ss6MirrorV12DisplayStyleOMa();
  lVar9 = *(long *)(lVar3 + -8);
  (**(code **)(lVar9 + 0x68))(lVar7,uVar1,lVar3);
  (**(code **)(lVar9 + 0x38))(lVar7,0,1,lVar3);
  uVar4 = 0;
  func_0x000104184750(0,param_3);
  puVar5 = &UNK_10dcdb118;
  _swift_getWitnessTable(&UNK_10dcdb118,uVar4);
  (**(code **)(lVar8 + 0x68))
            (lVar6,*(undefined4 *)
                    PTR___ss6MirrorV22AncestorRepresentationO9generatedyA2DmFWC_11034efd0,lVar2);
  _swift_retain_n(param_2,2);
  __ss6MirrorV_17unlabeledChildren12displayStyle22ancestorRepresentationABx_q_AB07DisplayE0OSgAB08AncestorG0OtcSlR_r0_lufC
            (param_1,&uStack_68,&uStack_70,lVar7,lVar6,uVar4,uVar4,puVar5);
  return;
}



/* Entry: 10418176c; end: 10418177b;  */

void FUN_10418176c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = *unaff_x20;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = 0;
  __ss6MirrorV22AncestorRepresentationOMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112dcc478;
  func_0x0001000285a8(0x112dcc478,&UNK_10d98eb80);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar8 - extraout_x8_00;
  uVar1 = *(undefined4 *)PTR___ss6MirrorV12DisplayStyleO10collectionyA2DmFWC_11034ef88;
  lVar3 = 0;
  uStack_70 = uVar7;
  uStack_68 = uVar7;
  __ss6MirrorV12DisplayStyleOMa();
  lVar11 = *(long *)(lVar3 + -8);
  (**(code **)(lVar11 + 0x68))(lVar9,uVar1,lVar3);
  (**(code **)(lVar11 + 0x38))(lVar9,0,1,lVar3);
  uVar4 = 0;
  func_0x000104184750(0,uVar6);
  puVar5 = &UNK_10dcdb118;
  _swift_getWitnessTable(&UNK_10dcdb118,uVar4);
  (**(code **)(lVar10 + 0x68))
            (lVar8,*(undefined4 *)
                    PTR___ss6MirrorV22AncestorRepresentationO9generatedyA2DmFWC_11034efd0,lVar2);
  _swift_retain_n(uVar7,2);
  __ss6MirrorV_17unlabeledChildren12displayStyle22ancestorRepresentationABx_q_AB07DisplayE0OSgAB08AncestorG0OtcSlR_r0_lufC
            (param_1,&uStack_68,&uStack_70,lVar9,lVar8,uVar4,uVar4,puVar5);
  return;
}



/* Entry: 10418177c; end: 1041817cb;  */

void FUN_10418177c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_28 = param_1;
  func_0x000104184750(0);
  puVar2 = &UNK_10dcdb118;
  _swift_getWitnessTable(&UNK_10dcdb118,uVar1);
  FUN_1041877f0(&uStack_28,uVar1,puVar2);
  return;
}



/* Entry: 1041817cc; end: 1041817ef;  */

void FUN_1041817cc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_28;
  
  uStack_28 = *unaff_x20;
  uVar1 = 0;
  func_0x000104184750(0,*(undefined8 *)(param_1 + 0x10));
  puVar2 = &UNK_10dcdb118;
  _swift_getWitnessTable(&UNK_10dcdb118,uVar1);
  FUN_1041877f0(&uStack_28,uVar1,puVar2);
  return;
}



/* Entry: 1041817f0; end: 10418192f;  */

uint FUN_1041817f0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  long alStack_78 [2];
  long lStack_68;
  
  puVar2 = PTR___ss5NeverOs5ErrorsWP_11034ee90;
  puVar1 = PTR___ss5NeverON_11034ee88;
  puVar6 = PTR___sSiN_11034deb0;
  FUN_1040f6364(&lStack_68,FUN_1040f6358,0,param_1,&UNK_11074b8b8,param_3,PTR___ss5NeverON_11034ee88
                ,PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  lVar3 = lStack_68;
  FUN_1040f6364(&lStack_68,FUN_1040f6358,0,param_2,&UNK_11074b8b8,param_3,puVar1,puVar6,puVar2);
  if (lVar3 == lStack_68) {
    uVar4 = 1;
    if ((lVar3 != 0) && (param_1 != param_2)) {
      uVar5 = 0;
      alStack_78[0] = param_2;
      lStack_68 = param_1;
      func_0x000104184750(0,param_3);
      puVar6 = &UNK_10dcdb000;
      _swift_getWitnessTable(&UNK_10dcdb000,uVar5);
      plVar7 = alStack_78;
      __sSTsSQ7ElementRpzrlE13elementsEqualySbqd__STRd__AAQyd__ABRSlF
                (plVar7,uVar5,uVar5,puVar6,puVar6,param_4);
      uVar4 = (uint)plVar7;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4 & 1;
}



/* Entry: 104181930; end: 104181943;  */

uint FUN_104181930(long *param_1,long *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long alStack_78 [2];
  long lStack_68;
  
  puVar2 = PTR___ss5NeverOs5ErrorsWP_11034ee90;
  puVar1 = PTR___ss5NeverON_11034ee88;
  puVar6 = PTR___sSiN_11034deb0;
  uVar11 = *(undefined8 *)(param_4 + -8);
  lVar8 = *param_1;
  lVar9 = *param_2;
  uVar10 = *(undefined8 *)(param_3 + 0x10);
  FUN_1040f6364(&lStack_68,FUN_1040f6358,0,lVar8,&UNK_11074b8b8,uVar10,PTR___ss5NeverON_11034ee88,
                PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  lVar3 = lStack_68;
  FUN_1040f6364(&lStack_68,FUN_1040f6358,0,lVar9,&UNK_11074b8b8,uVar10,puVar1,puVar6,puVar2);
  if (lVar3 == lStack_68) {
    uVar4 = 1;
    if ((lVar3 != 0) && (lVar8 != lVar9)) {
      uVar5 = 0;
      alStack_78[0] = lVar9;
      lStack_68 = lVar8;
      func_0x000104184750(0,uVar10);
      puVar6 = &UNK_10dcdb000;
      _swift_getWitnessTable(&UNK_10dcdb000,uVar5);
      plVar7 = alStack_78;
      __sSTsSQ7ElementRpzrlE13elementsEqualySbqd__STRd__AAQyd__ABRSlF
                (plVar7,uVar5,uVar5,puVar6,puVar6,uVar11);
      uVar4 = (uint)plVar7;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4 & 1;
}



/* Entry: 104181944; end: 104181af7;  */

void FUN_104181944(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = 0;
  uStack_38 = param_2;
  __sSaMa(0,uVar4);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puVar3 = &uStack_38;
  FUN_1040fefb8(puVar3,uVar4,uVar1,puVar2);
  _swift_bridgeObjectRelease(param_2);
  *param_1 = (long)puVar3;
  return;
}



/* Entry: 104181af8; end: 104181b1f;  */

void FUN_104181af8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1041834cc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104181b20; end: 104181b43;  */

void FUN_104181b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_104182460(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x18),param_3);
  return;
}



/* Entry: 104181b44; end: 104181cfb;  */

void FUN_104181b44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  code *pcVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  lVar7 = *(long *)(param_3 + -8);
  lVar3 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSqMa(0,lVar3);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = lVar5 - extraout_x8_00;
  uVar4 = param_2;
  FUN_1040f6364(&uStack_80,FUN_1040f6358,0,param_2,&UNK_11074b8b8,param_3,PTR___ss5NeverON_11034ee88
                ,PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  __ss6HasherV8_combineyySuF(uStack_80);
  lVar3 = param_3;
  FUN_10417bc3c();
  uVar2 = 0;
  uStack_80 = param_2;
  lStack_78 = lVar3;
  uStack_70 = uVar4;
  func_0x000104181120(0,param_3);
  func_0x00010417bc90(lVar1);
  pcVar6 = *(code **)(lVar7 + 0x30);
  lVar3 = lVar1;
  (*pcVar6)(lVar1,1,param_3);
  if ((int)lVar3 != 1) {
    pcVar8 = *(code **)(lVar7 + 0x20);
    do {
      (*pcVar8)(lVar5,lVar1,param_3);
      __sSH4hash4intoys6HasherVz_tFTj(param_1,param_3,param_4);
      (**(code **)(lVar7 + 8))(lVar5,param_3);
      func_0x00010417bc90(lVar1,uVar2);
      lVar3 = lVar1;
      (*pcVar6)(lVar1,1,param_3);
    } while ((int)lVar3 != 1);
  }
  _swift_release(uStack_80);
  return;
}



/* Entry: 104181cfc; end: 104181d57;  */

void FUN_104181cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_104181b44(auStack_78,param_1,param_2,param_3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104181d58; end: 104181d7f;  */

void FUN_104181d58(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar2 = *(undefined8 *)(param_2 + -8);
  uVar3 = *unaff_x20;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_104181b44(auStack_78,uVar3,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104181d80; end: 104181dd3;  */

void FUN_104181d80(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  uVar1 = *(undefined8 *)(param_3 + -8);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_104181b44(auStack_78,*unaff_x20,*(undefined8 *)(param_2 + 0x10),uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104181dd4; end: 104181e0b;  */

void FUN_104181dd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  _swift_getWitnessTable(&UNK_10dcdb3d8,param_1,&uStack_18);
  return;
}



/* Entry: 104181e0c; end: 104181e6b;  */

void FUN_104181e0c(void)

{
  if (lRam0000000113066078 != -1) {
    _swift_once(0x113066078,FUN_1041849c0);
  }
  _swift_retain(uRam0000000113813170);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss20ManagedBufferPointerV06unsafeB6ObjectAByxq_GyXl_tcfC_11034e950)();
  return;
}



/* Entry: 104181e6c; end: 104181fab;  */

void FUN_104181e6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_104184a44(0);
  __ss13ManagedBufferC6create15minimumCapacity16makingHeaderWithAByxq_GSi_xAFKXEtKFZ
            (param_1,FUN_10418232c,0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss20ManagedBufferPointerV06unsafeB6ObjectAByxq_GyXl_tcfC_11034e950)();
  return;
}



/* Entry: 104181fac; end: 104181fc7;  */

undefined1  [16] FUN_104181fac(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x20;
  
  puVar4 = (undefined8 *)*unaff_x20;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  __ss11_StringGutsV4growyySiF(0x14);
  _swift_bridgeObjectRelease(0xe000000000000000);
  uVar2 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF(uVar3,0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x61726f74535f2e3e,0xea00000000006567);
  __ss20ManagedBufferPointerV07_headerC0SpyxGvg(puVar4,&UNK_11074b8b8,uVar3);
  uVar2 = puVar4[1];
  FUN_104184a50(*puVar4,uVar2,puVar4[2]);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar2);
  auVar1._8_8_ = 0xe600000000000000;
  auVar1._0_8_ = 0x3c6575716544;
  return auVar1;
}



/* Entry: 104181fc8; end: 10418215b;  */

void FUN_104181fc8(long param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *unaff_x20;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_58 = auStack_50;
  uStack_60 = 0x1041824c4;
  uVar1 = 0x112d393f0;
  uStack_70 = uVar2;
  lStack_68 = param_1;
  uStack_40 = uVar2;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  FUN_1040fee4c(&uStack_38,FUN_104182368,auStack_80,uVar3,&UNK_11074b8b8,uVar2,uVar1,param_1,
                PTR___ss5ErrorWS_11034ee10,auStack_88);
  _swift_release(uVar3);
  *unaff_x20 = uStack_38;
  return;
}



/* Entry: 10418215c; end: 10418232b;  */

void FUN_10418215c(long param_1,uint param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [8];
  long alStack_b0 [2];
  undefined8 uStack_a0;
  long lStack_98;
  code *pcStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  undefined8 auStack_60 [2];
  
  uVar5 = *unaff_x20;
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  FUN_1040f6364(alStack_b0,0x104181fbc,0,uVar5,&UNK_11074b8b8,uVar4,PTR___ss5NeverON_11034ee88,
                PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  uStack_a0 = uVar4;
  lStack_98 = param_3;
  uStack_70 = uVar4;
  if (alStack_b0[0] < param_1) {
    uVar1 = 0;
    __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,uVar4);
    __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
    uVar5 = *unaff_x20;
    func_0x000104182078(param_1,param_2 & 1,uVar5,uVar4);
    lStack_68 = param_1;
    if ((uVar1 & 1) == 0) {
      puStack_88 = auStack_80;
      pcStack_90 = FUN_10418237c;
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      uVar3 = 0x104182488;
    }
    else {
      puStack_88 = auStack_80;
      pcStack_90 = FUN_1041823b4;
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      uVar3 = 0x10418249c;
    }
  }
  else {
    puStack_88 = auStack_80;
    pcStack_90 = FUN_1041823ec;
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    uVar3 = 0x1041824b0;
  }
  FUN_1040fee4c(auStack_60,uVar3,alStack_b0,uVar5,&UNK_11074b8b8,uVar4,uVar2,param_3,
                PTR___ss5ErrorWS_11034ee10,auStack_b8);
  _swift_release(uVar5);
  *unaff_x20 = auStack_60[0];
  return;
}



/* Entry: 10418232c; end: 104182367;  */

void FUN_10418232c(undefined8 *param_1,undefined8 param_2)

{
  __ss13ManagedBufferC8capacitySivg();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  return;
}



/* Entry: 104182368; end: 10418237b;  */

void FUN_104182368(void)

{
  FUN_10418241c();
  return;
}



/* Entry: 10418237c; end: 1041823b3;  */

void FUN_10418237c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000104183f5c(uVar1,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10));
  *param_1 = uVar1;
  return;
}



/* Entry: 1041823b4; end: 1041823eb;  */

void FUN_1041823b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000104183e3c(uVar1,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10));
  *param_1 = uVar1;
  return;
}



/* Entry: 1041823ec; end: 10418241b;  */

void FUN_1041823ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_104183d28(param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10));
  *param_1 = param_2;
  return;
}



/* Entry: 10418241c; end: 10418244b;  */

void FUN_10418241c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x20))();
  if (unaff_x21 != 0) {
    *param_3 = unaff_x21;
  }
  return;
}



/* Entry: 10418244c; end: 10418245f;  */

void FUN_10418244c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 104182460; end: 1041824d7;  */

void FUN_104182460(void)

{
  func_0x000100db36d0();
  return;
}



/* Entry: 1041824d8; end: 1041824f3;  */

long FUN_1041824d8(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*param_2 <= param_2[2] + param_1) {
    lVar1 = *param_2;
  }
  return (param_2[2] + param_1) - lVar1;
}



/* Entry: 1041824f4; end: 104182597;  */

void FUN_1041824f4(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  lVar3 = param_2[2];
  lVar1 = *param_2 - lVar3;
  if (SBORROW8(*param_2,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104182594);
    (*pcVar2)();
  }
  lVar4 = param_2[1];
  if (lVar1 < lVar4) {
    if (SBORROW8(lVar4,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104182598);
      (*pcVar2)();
    }
    FUN_10418570c(&uStack_48,param_3 + *(long *)(*(long *)(param_4 + -8) + 0x48) * lVar3,lVar1,
                  param_3,lVar4 - lVar1);
  }
  else {
    FUN_104185700(&uStack_48,param_3 + *(long *)(*(long *)(param_4 + -8) + 0x48) * lVar3,lVar4,
                  param_4);
  }
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[3] = uStack_30;
  param_1[2] = uStack_38;
  *(undefined1 *)(param_1 + 4) = uStack_28;
  return;
}



/* Entry: 104182598; end: 1041825cf;  */

void FUN_104182598(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  code *pcVar1;
  
  if (!SBORROW8(param_2,param_1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb76dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSR5start5countSRyxGSPyxGSg_SitcfC_11034d8d0)
              (param_4 + *(long *)(*(long *)(param_5 + -8) + 0x48) * param_1,param_2 - param_1,
               param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041825b8);
  (*pcVar1)();
}



/* Entry: 1041825d0; end: 104182707;  */

void FUN_1041825d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_c0;
  long lStack_b8;
  char cStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  char cStack_60;
  
  if (param_1 != param_2) {
    FUN_104184078(&uStack_a8,param_1,param_2,param_4,param_5,param_6);
    __sSr8mutatingSryxGSRyxG_tcfC(uStack_a8,uStack_a0,param_6);
    uVar1 = 0xff;
    uStack_70 = param_6;
    __sSRMa(0xff,param_6);
    uVar2 = 0;
    __sSqMa(0,uVar1);
    uVar1 = 0;
    __sSrMa(0,param_6);
    func_0x000101889bb8(&uStack_c0,FUN_1041844d8,auStack_80,uVar2,PTR___ss5NeverON_11034ee88,uVar1,
                        PTR___ss5NeverOs5ErrorsWP_11034ee90);
    uVar1 = 0;
    if (lStack_b8 != 0) {
      uVar1 = uStack_c0;
    }
    cStack_60 = cStack_b0;
    if (lStack_b8 == 0 || cStack_b0 == '\x01') {
      cStack_60 = '\x01';
    }
    uStack_70 = uStack_c0;
    if (cStack_b0 != '\x01') {
      uStack_70 = uVar1;
    }
    lStack_68 = lStack_b8;
    uVar1 = 0;
    func_0x000104185930(0,param_6);
    FUN_1041857a0(param_3,uVar1,param_7,param_8);
  }
  return;
}



/* Entry: 104182708; end: 10418283f;  */

void FUN_104182708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_d0;
  long lStack_c8;
  char cStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  long lStack_78;
  char cStack_70;
  
  FUN_104184078(&uStack_b8);
  __sSr8mutatingSryxGSRyxG_tcfC(uStack_b8,uStack_b0,param_5);
  uVar1 = 0xff;
  uStack_80 = param_5;
  __sSRMa(0xff,param_5);
  uVar2 = 0;
  __sSqMa(0,uVar1);
  uVar1 = 0;
  __sSrMa(0,param_5);
  func_0x000101889bb8(&uStack_d0,FUN_1041846a4,auStack_90,uVar2,PTR___ss5NeverON_11034ee88,uVar1,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  uVar1 = 0;
  if (lStack_c8 != 0) {
    uVar1 = uStack_d0;
  }
  cStack_70 = cStack_c0;
  if (lStack_c8 == 0 || cStack_c0 == '\x01') {
    cStack_70 = '\x01';
  }
  uStack_80 = uStack_d0;
  if (cStack_c0 != '\x01') {
    uStack_80 = uVar1;
  }
  lStack_78 = lStack_c8;
  func_0x000104185930(0,param_5);
  FUN_104185840();
  FUN_1041837d8(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 104182840; end: 1041829ef;  */

void FUN_104182840(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [40];
  
  lVar2 = *(long *)(param_7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  if (0 < param_2) {
    FUN_104182d58(auStack_68,param_2,param_3,param_4,param_5,param_6);
    (**(code **)(lVar2 + 0x10))
              (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,param_7);
    uVar1 = 0;
    func_0x000104185930(0,param_6);
    func_0x0001041852d4(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar1,param_7,
                        param_8);
    (**(code **)(lVar2 + 8))(param_1,param_7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104182934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1041829f0; end: 104182b53;  */

void FUN_1041829f0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_c0;
  long lStack_b8;
  char cStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  char cStack_60;
  
  if (0 < param_2) {
    lVar2 = *(long *)(param_3 + 8);
    if (SCARRY8(lVar2,param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104182b50);
      (*pcVar1)();
    }
    *(long *)(param_3 + 8) = lVar2 + param_2;
    if (lVar2 + param_2 < lVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104182b54);
      (*pcVar1)();
    }
    FUN_104184078(&uStack_a8);
    __sSr8mutatingSryxGSRyxG_tcfC(uStack_a8,uStack_a0,param_5);
    uVar3 = 0xff;
    uStack_70 = param_5;
    __sSRMa(0xff,param_5);
    uVar4 = 0;
    __sSqMa(0,uVar3);
    uVar5 = 0;
    __sSrMa(0,param_5);
    func_0x000101889bb8(&uStack_c0,0x1041846b8,auStack_80,uVar4,PTR___ss5NeverON_11034ee88,uVar5,
                        PTR___ss5NeverOs5ErrorsWP_11034ee90);
    uVar4 = 0;
    if (lStack_b8 != 0) {
      uVar4 = uStack_c0;
    }
    cStack_60 = cStack_b0;
    if (lStack_b8 == 0 || cStack_b0 == '\x01') {
      cStack_60 = '\x01';
    }
    uStack_70 = uStack_c0;
    if (cStack_b0 != '\x01') {
      uStack_70 = uVar4;
    }
    lStack_68 = lStack_b8;
    uVar4 = 0;
    uStack_c0 = param_1;
    lStack_b8 = param_2;
    func_0x000104185930(0,param_5);
    puVar6 = PTR___sSRyxGSlsMc_11034d8e8;
    _swift_getWitnessTable(PTR___sSRyxGSlsMc_11034d8e8,uVar3);
    func_0x0001041852d4(&uStack_c0,uVar4,uVar3,puVar6);
  }
  return;
}



/* Entry: 104182b54; end: 104182d57;  */

void FUN_104182b54(long *param_1,long *param_2,long param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = param_2[1];
  lVar3 = param_2[2];
  lVar6 = lVar3;
  FUN_104183798(lVar3,lVar4,param_2);
  lVar5 = *param_2;
  if (lVar4 < lVar5) {
    if (lVar3 <= lVar6) {
      lVar4 = lVar5 - lVar6;
      if (lVar5 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104182c84);
        (*pcVar1)();
      }
      if (SBORROW8(lVar5,lVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104182c88);
        (*pcVar1)();
      }
      lVar3 = param_3 + *(long *)(*(long *)(param_4 + -8) + 0x48) * lVar6;
      __sSR5start5countSRyxGSPyxGSg_SitcfC(lVar3,lVar4,param_4);
      __sSr8mutatingSryxGSRyxG_tcfC();
      lVar6 = param_2[2];
      if (lVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104182c8c);
        (*pcVar1)();
      }
      __sSR5start5countSRyxGSPyxGSg_SitcfC(param_3,lVar6,param_4);
      __sSr8mutatingSryxGSRyxG_tcfC();
      bVar2 = lVar6 == 0;
      lVar5 = 0;
      if (!bVar2) {
        lVar5 = param_3;
      }
      goto LAB_104182c5c;
    }
    lVar4 = lVar3 - lVar6;
    if (SBORROW8(lVar3,lVar6)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104182c80);
      (*pcVar1)();
    }
    lVar3 = param_3 + *(long *)(*(long *)(param_4 + -8) + 0x48) * lVar6;
    __sSR5start5countSRyxGSPyxGSg_SitcfC(lVar3,lVar4,param_4);
    __sSr8mutatingSryxGSRyxG_tcfC();
  }
  else {
    lVar3 = param_3 + *(long *)(*(long *)(param_4 + -8) + 0x48) * lVar6;
    lVar4 = 0;
    __sSr5start5countSryxGSpyxGSg_SitcfC(lVar3,0,param_4);
  }
  lVar6 = 0;
  bVar2 = true;
  lVar5 = 0;
LAB_104182c5c:
  *param_1 = lVar3;
  param_1[1] = lVar4;
  param_1[2] = lVar5;
  param_1[3] = lVar6;
  *(bool *)(param_1 + 4) = bVar2;
  return;
}



/* Entry: 104182d58; end: 10418330b;  */

void FUN_104182d58(undefined8 *param_1,long param_2,long param_3,long *param_4,long param_5,
                  long param_6)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  lVar8 = param_4[1];
  lVar7 = lVar8 - param_3;
  if (SBORROW8(lVar8,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1041832dc);
    (*pcVar2)();
  }
  lVar10 = param_4[2];
  if (lVar7 <= param_3) {
    lVar4 = lVar10;
    FUN_104183798(lVar10,lVar8,param_4);
    if (SCARRY8(lVar8,param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1041832e4);
      (*pcVar2)();
    }
    FUN_104183798(lVar10,lVar8 + param_2,param_4);
    lVar9 = 0;
    if (*param_4 <= param_4[2] + param_3) {
      lVar9 = *param_4;
    }
    lVar9 = (param_4[2] + param_3) - lVar9;
    lVar8 = lVar9;
    FUN_104183798(lVar9,param_2,param_4);
    lVar5 = *param_4;
    lVar6 = lVar4;
    if (lVar4 < 1) {
      lVar6 = lVar5;
    }
    lVar1 = lVar10;
    if (lVar10 < 1) {
      lVar1 = lVar5;
    }
    if (lVar6 < lVar9) {
      if (lVar1 < lVar8) {
        if (0 < lVar4) {
          __sSp14moveInitialize4from5countySpyxG_SitF
                    (param_5,lVar4,param_5 + *(long *)(*(long *)(param_6 + -8) + 0x48) * param_2,
                     param_6);
          FUN_104183798(0,lVar4,param_4);
          FUN_104183798(param_2,lVar4,param_4);
        }
        if (SBORROW8(0,param_2)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1041832f4);
          (*pcVar2)();
        }
        if (0 < param_2) {
          lVar10 = *param_4;
          __sSp14moveInitialize4from5countySpyxG_SitF
                    (param_5 + *(long *)(*(long *)(param_6 + -8) + 0x48) * (lVar10 - param_2),
                     param_2,param_5,param_6);
          FUN_104183798(lVar10 - param_2,param_2,param_4);
          FUN_104183798(0,param_2,param_4);
        }
        lVar10 = lVar7 - param_2;
        if (SBORROW8(lVar7,param_2)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104183308);
          (*pcVar2)();
        }
        lVar7 = lVar10 - lVar4;
        if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10418330c);
          (*pcVar2)();
        }
      }
      else {
        if (0 < lVar4) {
          __sSp14moveInitialize4from5countySpyxG_SitF
                    (param_5,lVar4,param_5 + *(long *)(*(long *)(param_6 + -8) + 0x48) * param_2,
                     param_6);
          FUN_104183798(0,lVar4,param_4);
          FUN_104183798(param_2,lVar4,param_4);
          lVar5 = *param_4;
        }
        lVar7 = lVar5 - lVar9;
        if (SBORROW8(lVar5,lVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104183304);
          (*pcVar2)();
        }
      }
    }
    else if (lVar1 < lVar8) {
      if (SBORROW8(0,param_2)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1041832fc);
        (*pcVar2)();
      }
      if (0 < lVar10) {
        __sSp14moveInitialize4from5countySpyxG_SitF
                  (param_5 + *(long *)(*(long *)(param_6 + -8) + 0x48) * (lVar5 - param_2),lVar10,
                   param_5,param_6);
        FUN_104183798(lVar5 - param_2,lVar10,param_4);
        FUN_104183798(0,lVar10,param_4);
      }
      bVar3 = SBORROW8(lVar7,lVar10);
      lVar7 = lVar7 - lVar10;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1041830d4);
        (*pcVar2)();
      }
    }
    if (0 < lVar7) {
      lVar10 = *(long *)(*(long *)(param_6 + -8) + 0x48);
      __sSp14moveInitialize4from5countySpyxG_SitF
                (param_5 + lVar10 * lVar9,lVar7,param_5 + lVar10 * lVar8,param_6);
      FUN_104183798(lVar9,lVar7,param_4);
      FUN_104183798(lVar8,lVar7,param_4);
    }
    if (SCARRY8(param_4[1],param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1041832ec);
      (*pcVar2)();
    }
    param_4[1] = param_4[1] + param_2;
    if (lVar8 < 1) {
      lVar8 = *param_4;
    }
    goto LAB_104183294;
  }
  lVar7 = -param_2;
  if (SBORROW8(0,param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1041832e0);
    (*pcVar2)();
  }
  lVar4 = lVar10;
  FUN_104183798(lVar10,lVar7,param_4);
  lVar8 = 0;
  if (*param_4 <= param_4[2] + param_3) {
    lVar8 = *param_4;
  }
  lVar8 = (param_4[2] + param_3) - lVar8;
  lVar9 = lVar8;
  FUN_104183798(lVar8,lVar7,param_4);
  lVar5 = *param_4;
  lVar6 = lVar8;
  if (lVar8 < 1) {
    lVar6 = lVar5;
  }
  lVar1 = lVar9;
  if (lVar9 < 1) {
    lVar1 = lVar5;
  }
  if (lVar6 < lVar10) {
    lVar6 = lVar5 - lVar10;
    if (lVar1 < lVar4) {
      if (SBORROW8(lVar5,lVar10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1041832f0);
        (*pcVar2)();
      }
      if (0 < lVar6) {
        lVar5 = *(long *)(*(long *)(param_6 + -8) + 0x48);
        __sSp14moveInitialize4from5countySpyxG_SitF
                  (param_5 + lVar5 * lVar10,lVar6,param_5 + lVar5 * lVar4,param_6);
        FUN_104183798(lVar10,lVar6,param_4);
        FUN_104183798(lVar4,lVar6,param_4);
      }
      if (0 < param_2) {
        lVar10 = *param_4;
        __sSp14moveInitialize4from5countySpyxG_SitF
                  (param_5,param_2,
                   param_5 + *(long *)(*(long *)(param_6 + -8) + 0x48) * (lVar10 + lVar7),param_6);
        FUN_104183798(0,param_2,param_4);
        lVar10 = lVar10 + lVar7;
        lVar7 = param_2;
LAB_104183028:
        FUN_104183798(lVar10,lVar7,param_4);
      }
LAB_104183030:
      if (lVar9 < 1) goto LAB_104183268;
      __sSp14moveInitialize4from5countySpyxG_SitF
                (param_5 + *(long *)(*(long *)(param_6 + -8) + 0x48) * param_2,lVar9,param_5,param_6
                );
      FUN_104183798(param_2,lVar9,param_4);
      lVar7 = 0;
      param_3 = lVar9;
    }
    else {
      if (SBORROW8(lVar5,lVar10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104183300);
        (*pcVar2)();
      }
      if (0 < lVar6) {
        lVar5 = *(long *)(*(long *)(param_6 + -8) + 0x48);
        __sSp14moveInitialize4from5countySpyxG_SitF
                  (param_5 + lVar5 * lVar10,lVar6,param_5 + lVar5 * lVar4,param_6);
        FUN_104183798(lVar10,lVar6,param_4);
        FUN_104183798(lVar4,lVar6,param_4);
      }
      if (lVar8 < 1) goto LAB_104183268;
      lVar10 = *param_4;
      __sSp14moveInitialize4from5countySpyxG_SitF
                (param_5,lVar8,
                 param_5 + *(long *)(*(long *)(param_6 + -8) + 0x48) * (lVar10 + lVar7),param_6);
      FUN_104183798(0,lVar8,param_4);
      lVar7 = lVar10 + lVar7;
      param_3 = lVar8;
    }
LAB_104183260:
    FUN_104183798(lVar7,param_3,param_4);
  }
  else {
    if (lVar1 < lVar4) {
      lVar7 = lVar5 - lVar4;
      if (SBORROW8(lVar5,lVar4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1041832f8);
        (*pcVar2)();
      }
      if (0 < lVar7) {
        lVar6 = *(long *)(*(long *)(param_6 + -8) + 0x48);
        __sSp14moveInitialize4from5countySpyxG_SitF
                  (param_5 + lVar6 * lVar10,lVar7,param_5 + lVar6 * lVar4,param_6);
        FUN_104183798(lVar10,lVar7,param_4);
        lVar10 = lVar4;
        goto LAB_104183028;
      }
      goto LAB_104183030;
    }
    if (0 < param_3) {
      lVar7 = *(long *)(*(long *)(param_6 + -8) + 0x48);
      __sSp14moveInitialize4from5countySpyxG_SitF
                (param_5 + lVar7 * lVar10,param_3,param_5 + lVar7 * lVar4,param_6);
      FUN_104183798(lVar10,param_3,param_4);
      lVar7 = lVar4;
      goto LAB_104183260;
    }
  }
LAB_104183268:
  param_4[2] = lVar4;
  if (SCARRY8(param_4[1],param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1041832e8);
    (*pcVar2)();
  }
  param_4[1] = param_4[1] + param_2;
  if (lVar8 < 1) {
    lVar8 = *param_4;
  }
LAB_104183294:
  FUN_104184408(&uStack_88,lVar9,lVar8,param_4,param_5,param_6);
  param_1[1] = uStack_80;
  *param_1 = uStack_88;
  param_1[3] = uStack_70;
  param_1[2] = uStack_78;
  *(undefined1 *)(param_1 + 4) = uStack_68;
  return;
}



/* Entry: 10418330c; end: 104183377;  */

void FUN_10418330c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  if (SBORROW8(param_1[1],1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104183374);
    (*pcVar3)();
  }
  lVar1 = param_1[2] + param_1[1] + -1;
  lVar2 = 0;
  if (*param_1 <= lVar1) {
    lVar2 = *param_1;
  }
  __sSp4movexyF(param_2 + (lVar1 - lVar2) * *(long *)(*(long *)(param_3 + -8) + 0x48),param_3);
  if (!SBORROW8(param_1[1],1)) {
    param_1[1] = param_1[1] + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104183378);
  (*pcVar3)();
}



/* Entry: 104183378; end: 1041834cb;  */

void FUN_104183378(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_c0;
  long lStack_b8;
  char cStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  char cStack_60;
  
  if (0 < param_1) {
    lVar4 = *(long *)(param_2 + 8);
    if (SBORROW8(lVar4,param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1041834c4);
      (*pcVar1)();
    }
    if (lVar4 < lVar4 - param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1041834c8);
      (*pcVar1)();
    }
    FUN_104184078(&uStack_a8,lVar4 - param_1,lVar4,param_2,param_3,param_4);
    __sSr8mutatingSryxGSRyxG_tcfC(uStack_a8,uStack_a0,param_4);
    uVar2 = 0xff;
    uStack_70 = param_4;
    __sSRMa(0xff,param_4);
    uVar3 = 0;
    __sSqMa(0,uVar2);
    uVar2 = 0;
    __sSrMa(0,param_4);
    func_0x000101889bb8(&uStack_c0,0x1041846cc,auStack_80,uVar3,PTR___ss5NeverON_11034ee88,uVar2,
                        PTR___ss5NeverOs5ErrorsWP_11034ee90);
    uVar2 = 0;
    if (lStack_b8 != 0) {
      uVar2 = uStack_c0;
    }
    cStack_60 = cStack_b0;
    if (lStack_b8 == 0 || cStack_b0 == '\x01') {
      cStack_60 = '\x01';
    }
    uStack_70 = uStack_c0;
    if (cStack_b0 != '\x01') {
      uStack_70 = uVar2;
    }
    lStack_68 = lStack_b8;
    func_0x000104185930(0,param_4);
    FUN_104185840();
    if (SBORROW8(*(long *)(param_2 + 8),param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1041834cc);
      (*pcVar1)();
    }
    *(long *)(param_2 + 8) = *(long *)(param_2 + 8) - param_1;
  }
  return;
}



/* Entry: 1041834cc; end: 10418352f;  */

void FUN_1041834cc(long *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  __sSp4movexyF(param_2 + *(long *)(*(long *)(param_3 + -8) + 0x48) * param_1[2],param_3);
  lVar1 = param_1[2] + 1;
  if (SCARRY8(param_1[2],1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10418352c);
    (*pcVar2)();
  }
  if (*param_1 <= lVar1) {
    lVar1 = 0;
  }
  param_1[2] = lVar1;
  if (!SBORROW8(param_1[1],1)) {
    param_1[1] = param_1[1] + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104183530);
  (*pcVar2)();
}



/* Entry: 104183530; end: 104183683;  */

void FUN_104183530(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_c0;
  long lStack_b8;
  char cStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  char cStack_60;
  
  if (0 < param_1) {
    FUN_104184078(&uStack_a8,0,param_1,param_2,param_3,param_4);
    __sSr8mutatingSryxGSRyxG_tcfC(uStack_a8,uStack_a0,param_4);
    uVar2 = 0xff;
    uStack_70 = param_4;
    __sSRMa(0xff,param_4);
    uVar3 = 0;
    __sSqMa(0,uVar2);
    uVar2 = 0;
    __sSrMa(0,param_4);
    func_0x000101889bb8(&uStack_c0,0x1041846e0,auStack_80,uVar3,PTR___ss5NeverON_11034ee88,uVar2,
                        PTR___ss5NeverOs5ErrorsWP_11034ee90);
    uVar2 = 0;
    if (lStack_b8 != 0) {
      uVar2 = uStack_c0;
    }
    cStack_60 = cStack_b0;
    if (lStack_b8 == 0 || cStack_b0 == '\x01') {
      cStack_60 = '\x01';
    }
    uStack_70 = uStack_c0;
    if (cStack_b0 != '\x01') {
      uStack_70 = uVar2;
    }
    lStack_68 = lStack_b8;
    func_0x000104185930(0,param_4);
    FUN_104185840();
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    FUN_104183798(uVar2,param_1,param_2);
    *(undefined8 *)(param_2 + 0x10) = uVar2;
    if (SBORROW8(*(long *)(param_2 + 8),param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104183684);
      (*pcVar1)();
    }
    *(long *)(param_2 + 8) = *(long *)(param_2 + 8) - param_1;
  }
  return;
}


