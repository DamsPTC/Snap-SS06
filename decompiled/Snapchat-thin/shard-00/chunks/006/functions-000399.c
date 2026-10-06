/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100852d54; end: 100852d5b;  */

undefined8 * FUN_100852d54(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long unaff_x19;
  long *plVar6;
  
  puVar2 = (undefined8 *)(unaff_x19 + 0x50);
  plVar6 = (long *)*puVar2;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar5 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0,puVar2);
      do {
        uVar5 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return puVar2;
}



/* Entry: 100852d5c; end: 100852ddb;  */

void FUN_100852d5c(long param_1)

{
  undefined1 auStack_68 [48];
  undefined1 auStack_38 [24];
  
  FUN_1005fc488(auStack_68,*(undefined8 *)(param_1 + 0x18));
  FUN_100852e2c(auStack_38,auStack_68);
  FUN_1005fced4(auStack_68);
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),auStack_38);
  *(undefined1 *)(param_1 + 0x2d) = 1;
  func_0x0001005fb56c(auStack_38);
  return;
}



/* Entry: 100852ddc; end: 100852e2b;  */

void FUN_100852ddc(long param_1,long *param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if ((param_2 != param_4) && (plVar1 = (long *)param_4[1], param_2 != plVar1)) {
    lVar2 = *param_4;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    lVar2 = *param_2;
    *(long **)(lVar2 + 8) = param_4;
    *param_4 = lVar2;
    *param_2 = (long)param_4;
    param_4[1] = (long)param_2;
    *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + -1;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  }
  return;
}



/* Entry: 100852e2c; end: 100852edb;  */

void FUN_100852e2c(undefined8 param_1)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  FUN_1005fcdc8(auStack_80);
  FUN_100852edc(auStack_58,auStack_80);
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  FUN_100852edc(auStack_a8,&uStack_d0);
  FUN_100852f3c(param_1,auStack_58,auStack_a8);
  FUN_10085304c();
  func_0x000100853054();
  FUN_100852f2c();
  func_0x000100853060(auStack_80);
  return;
}



/* Entry: 100852edc; end: 100852f2b;  */

void FUN_100852edc(void)

{
  FUN_100692dd4();
  func_0x000100852f0c();
  func_0x000100692e90();
  func_0x000100852f0c();
  FUN_100852f2c();
  return;
}



/* Entry: 100852f2c; end: 100852f3b;  */

void FUN_100852f2c(void)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 100852f3c; end: 100852fb7;  */

void FUN_100852f3c(void)

{
  undefined1 auStack_58 [40];
  
  func_0x000100692eb4();
  FUN_100852fb8(auStack_58);
  func_0x000100692fa4();
  FUN_100852fb8();
  func_0x000100692fb0();
  FUN_100852fd8();
  FUN_100852f2c();
  FUN_10085304c();
  return;
}



/* Entry: 100852fb8; end: 100852fd7;  */

void FUN_100852fb8(void)

{
  FUN_100692e14();
  FUN_100606fd8();
  return;
}



/* Entry: 100852fd8; end: 10085304b;  */

void FUN_100852fd8(void)

{
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100692fbc();
  FUN_100693040();
  while ((((*(byte *)(unaff_x20 + 0x20) & 1) != 0 || ((*(byte *)(unaff_x19 + 0x20) & 1) != 0)) &&
         (func_0x0001086b0720(), extraout_x8 != extraout_x9))) {
    func_0x0001086afc30();
    FUN_10069c690();
    FUN_1005fc848();
  }
  func_0x00010069304c();
  FUN_1005fade8();
  return;
}



/* Entry: 10085304c; end: 100853077;  */

void FUN_10085304c(void)

{
  long unaff_x21;
  
  if (*(char *)(unaff_x21 + 0x20) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 100853078; end: 1008530df;  */

void FUN_100853078(long param_1)

{
  long unaff_x19;
  undefined1 auStack_38 [24];
  
  func_0x000100632ab0();
  FUN_1005fa4a0(param_1 + 0xe0,0xb);
  FUN_100632cbc();
  FUN_1008530e0();
  func_0x0001005fad5c();
  FUN_1005fa4a0(unaff_x19 + 0xe0,0xb);
  FUN_1005facd8();
  FUN_1005fae10();
  func_0x0001008530ec();
  FUN_1008530f8();
  func_0x0001005fb56c(auStack_38);
  return;
}



/* Entry: 1008530e0; end: 1008530f7;  */

undefined1 * FUN_1008530e0(void)

{
  return &stack0x00000008;
}



/* Entry: 1008530f8; end: 1008531fb;  */

void FUN_1008530f8(long *param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lStack_b0;
  undefined **ppuStack_a8;
  long lStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_48;
  
  FUN_100550738();
  lVar1 = *param_1;
  ppuVar3 = (undefined **)param_1[9];
  lVar2 = param_1[8];
  lStack_b0 = lVar2;
  ppuStack_a8 = ppuVar3;
  uStack_48 = extraout_x8;
  if (param_1[9] != 0) {
    do {
      func_0x000100550664();
    } while (extraout_w10 != 0);
  }
  FUN_1008531fc();
  FUN_10028c49c();
  lVar1 = *(long *)(lVar1 + 0x10);
  func_0x000100853218();
  lVar1 = *(long *)(lVar1 + 0x70);
  lStack_80 = 0x100853360;
  ppuStack_78 = &PTR_FUN_110a66d98;
  func_0x000107c60e20(0x28);
  func_0x000100853220();
  func_0x000100853250();
  func_0x000100853260();
  FUN_100853290();
  if (lVar1 == 0) {
    func_0x000100853298();
    lStack_80 = lVar2;
    ppuStack_78 = ppuVar3;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000100550664();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001005fb044();
    param_2 = &lStack_80;
    (*extraout_x8_01)();
    func_0x0001008532a8();
  }
  FUN_1008532b0(&lStack_b0);
  func_0x0001005508d0(uStack_48);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x0001008532a8();
    FUN_1008532b0(&lStack_b0);
    func_0x0001086f2e08();
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    return;
  }
  return;
}



/* Entry: 1008531fc; end: 10085326f;  */

void FUN_1008531fc(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 100853270; end: 10085328f;  */

void FUN_100853270(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1008532b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100853290; end: 1008532af;  */

void FUN_100853290(void)

{
  long unaff_x21;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x21 + 8);
  return;
}



/* Entry: 1008532b0; end: 1008532d3;  */

long FUN_1008532b0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001005fb53c();
  func_0x0001005fb56c();
  lVar1 = unaff_x19;
  func_0x0001005528ec();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1008532d4; end: 100853307;  */

void FUN_1008532d4(void)

{
  return;
}



/* Entry: 100853308; end: 100853357;  */

void FUN_100853308(undefined8 param_1)

{
  func_0x000100853300();
  FUN_1005fbb50();
  FUN_1005f9654();
  func_0x0001005f965c();
  func_0x0001005f96a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 100853358; end: 100853373;  */

void FUN_100853358(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100853374; end: 1008533db;  */

void FUN_100853374(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10060ab28(param_2);
  func_0x000107c61180();
  func_0x000107c4dd58(uVar2);
  FUN_10060ab20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1008533dc; end: 10085341b; -[SCGroupsDataPublisher onTopGroupsUpdated:] */

void FUN_1008533dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100504554(param_3,&PTR___NSConcreteGlobalBlock_110895198);
  func_0x000107c4d664(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10085341c; end: 10085343b; -[SCMainCameraViewController shouldAddBottomCardCorners] */

uint FUN_10085341c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9aa0;
  func_0x000107c5abfc(PTR_PTR_1126b9aa0);
  return (uint)puVar1 ^ 1;
}



/* Entry: 10085343c; end: 100853473; +[SCCameraCapriUtils shouldFlatBottomCorner] */

uint FUN_10085343c(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x000107c49b2c();
  if ((uVar2 & 1) == 0) {
    func_0x000107c3c890(param_1);
    uVar1 = (uint)param_1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 100853474; end: 100853477; +[SCCameraCapriUtils isCapriFooterTranslucentOnCamera] */

void FUN_100853474(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isCapriFooterTranslucentOnCamer_11256d470);
  return;
}



/* Entry: 100853478; end: 10085347b; +[SCCameraCapriUtils _isCapriFooterTranslucentOnCamera] */

undefined *
FUN_100853478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c517cc(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  uVar4 = param_3;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c51724();
  uVar5 = uVar4;
  uVar6 = param_4;
  FUN_10052b600();
  dVar3 = (double)(int)puVar2;
  FUN_10052b668(dVar3);
  FUN_10052b6cc(uVar4,param_4,param_1,param_3,dVar3,param_2,uVar5,uVar6);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 10085347c; end: 100853517;  */

undefined8
FUN_10085347c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar3;
  
  func_0x000107c517cc(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  uVar5 = param_3;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c51724();
  iVar1 = (int)puVar3;
  uVar6 = uVar5;
  uVar7 = param_4;
  FUN_10052b600();
  dVar4 = (double)iVar1;
  FUN_10052b668(dVar4);
  FUN_100853534(uVar5,param_4,param_1,param_3,dVar4,param_2,uVar6,uVar7);
  func_0x000107c61170(puVar2);
  return uVar5;
}



/* Entry: 100853518; end: 100853533; +[SCCameraCapriUtils _spaceBetweenViewFinderAndCapriFooterExists] */

bool FUN_100853518(double param_1)

{
  FUN_10085347c();
  return param_1 != 0.0;
}



/* Entry: 100853534; end: 10085362f;  */

double FUN_100853534(double param_1,double param_2,undefined8 param_3,double param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    uint param_9)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = param_1;
  FUN_10052ba54();
  FUN_100456ca0();
  uVar1 = param_9;
  FUN_100456ca0();
  dVar3 = 1.7777777777777777;
  dVar4 = dVar3;
  if ((uVar1 & param_2 < param_1) == 0) {
    dVar4 = 0.5625;
  }
  dVar5 = dVar3;
  if (uVar1 == 0) {
    dVar5 = 0.5625;
  }
  if ((param_9 & param_2 < param_1) == 0) {
    dVar3 = 0.5625;
    dVar5 = dVar4;
  }
  dVar4 = param_1;
  if (param_2 * dVar5 <= param_1) {
    dVar4 = param_2 * dVar5;
  }
  FUN_10052b8c4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return (((param_2 - param_4) - dVar2) - (double)(float)(int)((double)(float)(int)dVar4 / dVar3)) -
         param_1;
}



/* Entry: 100853630; end: 100853647; -[SCMainCameraViewController shouldAddTopCardCorners] */

uint FUN_100853630(uint param_1)

{
  func_0x000107c5ab34();
  return param_1 ^ 1;
}



/* Entry: 100853648; end: 1008536e7;  */

void FUN_100853648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c61174(param_8);
  func_0x000107c3ad38(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
  func_0x000107c3ad3c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 1008536e8; end: 10085380f;  */

/* WARNING: Possible PIC construction at 0x000100853764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008537e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100853768) */
/* WARNING: Removing unreachable block (ram,0x0001008537e4) */

void FUN_1008536e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_d4;
  
  func_0x000107c61174(param_3);
  func_0x000107c3b1b0(in_d4,param_1,param_2,param_4);
  func_0x000107c61180();
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c5a81c(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100853810; end: 100853957;  */

void FUN_100853810(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  
  dVar4 = 13.0;
  if (((param_4 & 1) == 0) && (dVar4 = param_1, param_1 <= 0.0)) {
    func_0x000107c3c400(param_2);
    dVar4 = param_1;
  }
  puVar1 = PTR_PTR_1126b52f0;
  func_0x000107c610f4(PTR_PTR_1126b52f0);
  func_0x000107c469a4(0,0,dVar4,dVar4);
  func_0x000107c3b014(dVar4,param_2);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab30();
  puVar2 = puVar1;
  func_0x000107c5a92c(puVar1);
  func_0x000107c61180();
  func_0x000107c57274();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  puVar2 = puVar1;
  func_0x000107c5a92c(puVar1);
  func_0x000107c61180();
  func_0x000107c549bc();
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd4);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab24();
  puVar3 = puVar1;
  func_0x000107c5a92c(puVar1);
  func_0x000107c61180();
  func_0x000107c549b4();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100853958; end: 1008539f3;  */

void FUN_100853958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c3e898(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  func_0x000107c61180();
  func_0x000107c4d154(0,param_1);
  func_0x000107c3d5b0(param_1,param_1,param_1,0x400921fb54442d18,0x4012d97c7f3321d2,puVar1,param_3,1
                     );
  func_0x000107c3d738(0,0,puVar1);
  func_0x000107c3d738(0,param_1,puVar1);
  func_0x000107c3fc28(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008539f4; end: 100853a57;  */

/* WARNING: Possible PIC construction at 0x000100853a34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100853a38) */

void FUN_1008539f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c517c8(param_1);
  func_0x000107c61180();
  func_0x000107c3d798();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100853a58; end: 100853aaf;  */

void FUN_100853a58(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = param_1;
  func_0x000107c61134(param_1,0x1137f48a9);
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610fc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x000107c58bf8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100853ab0; end: 100853abf;  */

void FUN_100853ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)(param_1,0x1137f48a9,param_3,1);
  return;
}



/* Entry: 100853ac0; end: 100853c23;  */

void FUN_100853ac0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
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
  
  func_0x000107c61174(param_8);
  uVar1 = param_6;
  func_0x000107c3b1b0(param_5,param_6,param_7,param_9);
  func_0x000107c61180();
  func_0x000107c6088c(&uStack_90,0xbff0000000000000,0x3ff0000000000000);
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  func_0x000107c5a03c(uVar1,param_7,&uStack_c0);
  uVar2 = uVar1;
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c5a81c(0x3ff0000000000000);
  func_0x000107c61170(uVar2);
  dVar3 = param_1;
  func_0x000107c609b4(param_1,param_2,param_3,param_4);
  dVar4 = dVar3;
  func_0x000107c3ec60(uVar1);
  func_0x000107c609bc();
  func_0x000107c609c8(param_1,param_2,param_3,param_4);
  dVar5 = param_1;
  func_0x000107c3ec60(uVar1);
  func_0x000107c609c0();
  func_0x000107c532b4(dVar3 - dVar4,param_1 + dVar5,uVar1);
  func_0x000107c52ab8(uVar1,param_7,0x21);
  func_0x000107c3d89c(param_8,param_7,uVar1);
  func_0x000107c61170(param_8);
  func_0x000107c3d8e4(param_6,param_7,uVar1);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100853c24; end: 100853c2b; -[SCLegacyCameraResourcesImpl context] */

undefined8 FUN_100853c24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 100853c2c; end: 100853d07; -[SCCameraOverlayView enableAccessibilityForCameraTimer] */

/* WARNING: Possible PIC construction at 0x000100853c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100853c94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100853cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100853c98) */
/* WARNING: Removing unreachable block (ram,0x000100853c64) */
/* WARNING: Removing unreachable block (ram,0x000100853cc4) */

void FUN_100853c2c(undefined8 param_1)

{
  func_0x000107c3f250();
  func_0x000107c61180();
  func_0x000107c520f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100853d08; end: 100853d1f;  */

void FUN_100853d08(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e98ab8;
  FUN_1000f5ff4(&PTR____CFConstantStringClassReference_110e98ab8,
                &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    FUN_10002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 100853d20; end: 100853d2f; -[SCCameraTimerImpl accessibilityTraits] */

undefined8 FUN_100853d20(void)

{
  return *(undefined8 *)PTR__UIAccessibilityTraitButton_110345920;
}



/* Entry: 100853d30; end: 10085419f; -[SCCameraViewControllerStartupWorkflow _addObservers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100853d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127626f0);
  *(undefined **)(param_1 + _DAT_1127626f0) = puVar1;
  func_0x000107c61170(uVar4);
  func_0x000107c61144(auStack_80,param_3);
  uVar4 = param_3;
  func_0x000107c3dfac(param_3);
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x000107c5e39c();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_10700bce4;
  puStack_90 = &UNK_110846510;
  func_0x000107c6111c(auStack_88,auStack_80);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  uVar4 = param_3;
  func_0x000107c3dfac(param_3);
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x000107c419f0();
  func_0x000107c61180();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_100c78a40;
  puStack_b8 = &UNK_110846510;
  func_0x000107c6111c(auStack_b0,auStack_80);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  uVar4 = param_3;
  func_0x000107c3dfac(param_3);
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x000107c5e370();
  func_0x000107c61180();
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  puStack_e8 = &UNK_10700bd10;
  puStack_e0 = &UNK_110846510;
  func_0x000107c6111c(auStack_d8,auStack_80);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  uVar4 = param_3;
  func_0x000107c3dfac(param_3);
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x000107c41b80();
  func_0x000107c61180();
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_10700bd3c;
  puStack_108 = &UNK_110846510;
  func_0x000107c6111c(auStack_100,auStack_80);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  uVar4 = param_3;
  func_0x000107c3dfac(param_3);
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x000107c4ad84();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_128,auStack_80);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61180();
  func_0x000107c3d7bc();
  func_0x000107c3d7bc(puVar1);
  func_0x000107c3d7bc(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_128);
  func_0x000107c61120(auStack_100);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008541a0; end: 1008541af; -[SCCameraViewController applicationLifecycleEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008541a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127624d0);
}



/* Entry: 1008541b0; end: 1008541bf; -[SCApplicationLifecycleEventsImpl legacyStartupComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008541b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091de8));
  return;
}



/* Entry: 1008541c0; end: 1008541c7; -[SCRequestManager setContexts:] */

void FUN_1008541c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1835f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setContexts__11263e798);
  return;
}



/* Entry: 1008541c8; end: 1008541cf; -[SCNetworkManager setContexts:] */

void FUN_1008541c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1835f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setContexts__11263e798);
  return;
}



/* Entry: 1008541d0; end: 100854257; -[SCRequestScheduler setContexts:] */

/* WARNING: Possible PIC construction at 0x000100854220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100854224) */
/* WARNING: Removing unreachable block (ram,0x00010085423c) */
/* WARNING: Removing unreachable block (ram,0x000100854230) */
/* WARNING: Removing unreachable block (ram,0x000100854244) */

void FUN_1008541d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b19f8;
  func_0x000107c61174(param_3);
  func_0x000107c4cdf0(puVar1);
  func_0x000107c61180();
  func_0x000107c40404(param_3,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100854258; end: 10085425f; -[SCRequestScheduler _setContexts:withQueuePerformer:] */

void FUN_100854258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setContexts_withQueuePerformer__1125865b0,param_3,param_4,0);
  return;
}



/* Entry: 100854260; end: 10085439f; -[SCRequestScheduler _setContexts:withQueuePerformer:withRequestManagerMode:] */

void FUN_100854260(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x000107c4168c(param_1);
    func_0x000107c61180();
    func_0x000107c40624();
    func_0x000107c61170(uVar1);
    uVar2 = param_3;
    func_0x000107c40808();
    uVar3 = param_3;
    if (0x40 < uVar2) {
      func_0x000107c5c274(param_3,param_2,0,0x40);
      func_0x000107c61180();
      func_0x000107c61170(param_3);
    }
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_100854dc0;
    puStack_60 = &UNK_110844b80;
    uStack_58 = param_1;
    uStack_50 = uVar3;
    uStack_48 = param_5;
    func_0x000107c61174(uVar3);
    ppuVar4 = &puStack_78;
    func_0x000107c61184();
    if (param_4 == 0) {
      (*(code *)ppuVar4[2])(ppuVar4);
    }
    else {
      func_0x000107c4f7e8(param_1);
      func_0x000107c61180();
      func_0x000107c4e524();
      func_0x000107c61170(param_1);
    }
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(uStack_50);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 1008543a0; end: 1008543b7; -[SCRequestScheduler delegate] */

void FUN_1008543a0(long param_1)

{
  func_0x000107c61148(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008543b8; end: 100854407; -[SCNetworkManager contextsDidChangeForRequestScheduler:] */

/* WARNING: Possible PIC construction at 0x0001008543f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008543f8) */

void FUN_1008543b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c4168c(param_1);
  func_0x000107c61180();
  func_0x000107c40620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100854408; end: 10085441f; -[SCNetworkManager delegate] */

void FUN_100854408(long param_1)

{
  func_0x000107c61148(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100854420; end: 10085446f; -[SCRequestManager contextsDidChangeForNetworkManager:] */

/* WARNING: Possible PIC construction at 0x00010085445c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100854460) */

void FUN_100854420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c4168c(param_1);
  func_0x000107c61180();
  func_0x000107c40628();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100854470; end: 100854487; -[SCRequestManager delegate] */

void FUN_100854470(long param_1)

{
  func_0x000107c61148(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100854488; end: 10085448f; +[SCAttributedCameraTask viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100854488(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 1;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100854490; end: 1008544cf;  */

/* WARNING: Possible PIC construction at 0x0001008544ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008544b0) */

void FUN_100854490(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x20,param_2 + 0x20);
  return;
}



/* Entry: 1008544d0; end: 10085454f; +[SCViewControllerLifecycleEvent viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008544d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_113082590) = 0;
  *(undefined1 *)(lVar1 + _DAT_113082598) = 2;
  *(undefined1 *)(lVar1 + _DAT_1130825a0) = 2;
  *(undefined1 *)(lVar1 + _DAT_1130825a8) = 2;
  *(undefined1 *)(lVar1 + _DAT_1130825b0) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100854550; end: 10085466b;  */

void FUN_100854550(long param_1,undefined8 param_2)

{
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10087cc3c;
  puStack_68 = &UNK_11090b190;
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c6111c(auStack_48,param_1 + 0x38);
  func_0x000107c6111c(auStack_88,param_1 + 0x38);
  func_0x000107c4c7b0(param_2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10085466c; end: 1008547db; -[SCViewControllerLifecycleEvent matchViewDidLoad:viewWillAppear:viewDidAppear:viewWillDisappear:viewDidDisappear:] */

void FUN_10085466c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x0001008546f4(FUN_1008547dc,auStack_40,FUN_10087ba04,auStack_60,FUN_1008c4c28,auStack_80,
                      &UNK_10450b6c0,auStack_a0,&UNK_10450b6c4,auStack_c0);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1008547dc; end: 1008547ef;  */

void FUN_1008547dc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001008547e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1008547f0; end: 100854863;  */

void FUN_1008547f0(undefined1 *param_1)

{
  undefined1 auStack_80 [16];
  undefined1 *puStack_70;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  *param_1 = 0;
  puStack_70 = param_1;
  puStack_50 = param_1;
  puStack_30 = param_1;
  func_0x0001008546f4(FUN_100854864,0,0x10087d3f8,auStack_40,0x1008c8c94,auStack_60,&UNK_102a3584c,
                      auStack_80,&UNK_102a34af4,0);
  return;
}



/* Entry: 100854864; end: 100854867;  */

void FUN_100854864(void)

{
  return;
}



/* Entry: 100854868; end: 1008548db;  */

void FUN_100854868(undefined8 *param_1)

{
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  *param_1 = 0;
  puStack_50 = param_1;
  puStack_30 = param_1;
  func_0x0001008546f4(FUN_1008548dc,0,FUN_10087d408,auStack_40,0x1008c8c98,0,&UNK_102b2b9f4,0,
                      &UNK_102b2bc44,auStack_60);
  return;
}



/* Entry: 1008548dc; end: 1008548df;  */

void FUN_1008548dc(void)

{
  return;
}



/* Entry: 1008548e0; end: 100854b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008548e0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long **pplVar5;
  undefined8 uVar6;
  long *unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  long **pplStack_90;
  long lStack_88;
  long *aplStack_80 [3];
  long *plStack_68;
  
  lVar9 = *unaff_x20;
  (**(code **)((long)unaff_x20 + _DAT_113094e08))();
  lVar1 = 0;
  FUN_1006b9d40(0,*(undefined8 *)(lVar9 + 0x58));
  uVar7 = *(undefined8 *)((long)unaff_x20 + _DAT_113094e00);
  puVar2 = &UNK_1107a8f08;
  func_0x000107c613fc(&UNK_1107a8f08,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_1107a8f30;
  func_0x000107c613fc(&UNK_1107a8f30,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x50);
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(uVar7);
  plVar4 = param_1;
  FUN_100854f30(param_1,uVar7,FUN_10085551c,puVar3);
  func_0x000107c61574(uVar7);
  pcVar8 = *(code **)(*param_1 + 0x58);
  puVar2 = &DAT_10dd3c9b0;
  aplStack_80[0] = plVar4;
  func_0x000107c61520(&DAT_10dd3c9b0,lVar1);
  pplVar5 = aplStack_80;
  lVar9 = lVar1;
  (*pcVar8)(pplVar5,lVar1,puVar2);
  FUN_10006c804();
  plStack_68 = plVar4;
  func_0x000107c61428((long)unaff_x20 + _DAT_113094e20,aplStack_80,0x21,0);
  puVar2 = &UNK_10dd3c970;
  func_0x000107c61520(&UNK_10dd3c970,lVar1);
  uVar7 = 0;
  func_0x000107c5fe38(0,lVar1,puVar2);
  func_0x000107c5fe24(&pplStack_90,&plStack_68,uVar7);
  func_0x000107c614a8(aplStack_80);
  if (pplStack_90 == (long **)0x0) {
    pplStack_90 = pplVar5;
    lStack_88 = lVar9;
    plStack_68 = plVar4;
    func_0x000107c61428((long)unaff_x20 + _DAT_113094e18,aplStack_80,0x21,0);
    func_0x000107c6157c(plVar4);
    func_0x000107c615f0(pplVar5);
    uVar7 = 0x113094ed8;
    FUN_10002969c(0x113094ed8,&UNK_10dd3b9a0);
    uVar6 = 0;
    func_0x000107c5fa34(0,lVar1,uVar7,puVar2);
    func_0x000107c5fa44(&pplStack_90,&plStack_68,uVar6);
    func_0x000107c614a8(aplStack_80);
  }
  else {
    func_0x000107c61574();
    func_0x000107c614f0(pplVar5);
    (**(code **)(lVar9 + 8))();
  }
  FUN_100070bfc();
  func_0x000107c61574(param_1);
  func_0x000107c61574(plVar4);
  func_0x000107c615e8(pplVar5);
  return;
}



/* Entry: 100854b44; end: 100854b63;  */

void FUN_100854b44(void)

{
  FUN_1008548e0();
  return;
}



/* Entry: 100854b64; end: 100854b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100854b64(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_90 [16];
  undefined8 **ppuStack_80;
  long lStack_78;
  undefined8 auStack_70 [2];
  undefined8 **ppuStack_60;
  long lStack_58;
  undefined8 *puStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar7 = *param_1;
  FUN_1000285a8(0x112d3b3f8,&UNK_10d904aa0);
  puVar3 = auStack_70;
  auStack_70[0] = uVar7;
  func_0x000100854cb0();
  uVar4 = *(ulong *)(lVar1 + _DAT_113074f68);
  puStack_48 = puVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x000107c5bde4();
    func_0x000107c61180();
    if (uVar5 != 0) {
      uVar6 = uVar5;
      func_0x000107c49b34();
      if (((uVar6 & 1) != 0) && (lVar2 != 0)) {
        ppuStack_80 = &puStack_48;
        lStack_78 = lVar2;
        ppuStack_60 = ppuStack_80;
        lStack_58 = lVar2;
        func_0x000107c6157c(lVar2);
        func_0x0001008546f4(&UNK_102b2ba2c,0,&UNK_102b2ba30,0,&UNK_102b2ba34,0,&UNK_102b2bc80,
                            auStack_70,&UNK_102b2bca8,auStack_90);
        func_0x000107c61574(lVar2);
        func_0x000107c615e8(uVar4);
        func_0x000107c615e8(uVar5);
        return puStack_48;
      }
      func_0x000107c615e8(uVar4);
      uVar4 = uVar5;
    }
    func_0x000107c615e8(uVar4);
  }
  return puVar3;
}



/* Entry: 100854b6c; end: 100854d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100854b6c(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [16];
  undefined8 **ppuStack_80;
  long lStack_78;
  undefined8 auStack_70 [2];
  undefined8 **ppuStack_60;
  long lStack_58;
  undefined8 *puStack_48;
  
  uVar5 = *param_1;
  FUN_1000285a8(0x112d3b3f8,&UNK_10d904aa0);
  puVar1 = auStack_70;
  auStack_70[0] = uVar5;
  func_0x000100854cb0();
  uVar2 = *(ulong *)(param_2 + _DAT_113074f68);
  puStack_48 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c5bde4();
    func_0x000107c61180();
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c49b34();
      if (((uVar4 & 1) != 0) && (param_3 != 0)) {
        ppuStack_80 = &puStack_48;
        lStack_78 = param_3;
        ppuStack_60 = ppuStack_80;
        lStack_58 = param_3;
        func_0x000107c6157c(param_3);
        func_0x0001008546f4(&UNK_102b2ba2c,0,&UNK_102b2ba30,0,&UNK_102b2ba34,0,&UNK_102b2bc80,
                            auStack_70,&UNK_102b2bca8,auStack_90);
        func_0x000107c61574(param_3);
        func_0x000107c615e8(uVar2);
        func_0x000107c615e8(uVar3);
        return puStack_48;
      }
      func_0x000107c615e8(uVar2);
      uVar2 = uVar3;
    }
    func_0x000107c615e8(uVar2);
  }
  return puVar1;
}



/* Entry: 100854d40; end: 100854d4f;  */

void FUN_100854d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e8219b8);
  return;
}



/* Entry: 100854d50; end: 100854dbf;  */

void FUN_100854d50(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x88);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61524(param_1,0,1,&lStack_28,param_1 + 0x90);
  }
  return;
}



/* Entry: 100854dc0; end: 100854edf;  */

void FUN_100854dc0(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c4061c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c49cf0();
  func_0x000107c61170(uVar2);
  if ((uVar3 & 1) != 0) {
    return;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x000107c3c748();
  if (iVar1 != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x4c) = 1;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x000107c3c768();
  if (iVar1 != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x4c) = 0;
  }
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x49) == '\x01') {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x49) = 0;
  }
  puVar4 = PTR_PTR_1126dfeb8;
  func_0x000107c420ec();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined **)(*(long *)(param_1 + 0x20) + 8) = puVar4;
  func_0x000107c61170(uVar6);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c4061c();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c40404();
  *(char *)(*(long *)(param_1 + 0x20) + 0x18) = (char)uVar6;
  func_0x000107c61170(uVar5);
  func_0x000107c53c74(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bea3230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setCurrentContextsForRunningNSU_112586630);
  return;
}



/* Entry: 100854ee0; end: 100854f2f;  */

void FUN_100854ee0(undefined8 param_1)

{
  long *unaff_x20;
  
  func_0x000107c613fc();
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x88) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90),param_1);
  FUN_100087bcc();
  return;
}



/* Entry: 100854f30; end: 100854f8f;  */

void FUN_100854f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c613fc();
  FUN_100854f90(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 100854f90; end: 10085502b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100854f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c5eec4(unaff_x20 + _DAT_1138154f0);
  lVar2 = _DAT_1130969c8;
  *(undefined8 *)(unaff_x20 + _DAT_1130969c8) = 0;
  lVar3 = _DAT_1130969d0;
  func_0x000107c61644(unaff_x20 + _DAT_1130969d0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  func_0x000107c61574(uVar4);
  func_0x000107c61634(unaff_x20 + lVar3,param_2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130969d8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Entry: 10085502c; end: 100855097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085502c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_1130969d0;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000100087f6c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100855098; end: 100855127;  */

void FUN_100855098(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  (**(code **)(param_3 + 0x18))((long)unaff_x20 + *(long *)(lVar1 + 0x90));
  (**(code **)(param_3 + 0x20))(param_2,param_3);
  FUN_1000b66c4(0,*(undefined8 *)(lVar1 + 0x88));
  func_0x000107c6157c();
  FUN_1000b6858();
  return;
}



/* Entry: 100855128; end: 10085523b;  */

void FUN_100855128(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_106219510;
  puStack_30 = &UNK_106219520;
  puStack_28 = PTR____kCFBooleanTrue_11034ab68;
  func_0x000107c4c7b0(param_2);
  uVar1 = puStack_48[5];
  func_0x000107c61174(uVar1);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(puStack_28);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10085523c; end: 100855287; -[SCCompactMappedObserver next:] */

void FUN_10085523c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  (**(code **)(lVar1 + 0x10))(lVar1,param_3);
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4d664(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100855288; end: 10085528b;  */

void FUN_100855288(void)

{
  return;
}



/* Entry: 10085528c; end: 1008553e7; -[SCDebounceObserver next:] */

void FUN_10085528c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c60f28();
  }
  func_0x000107c61144(auStack_48,*(undefined8 *)(param_1 + 8));
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  puStack_68 = &UNK_10bcb90cc;
  puStack_60 = &UNK_110841fb0;
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c61174(param_3);
  uVar1 = 0;
  uStack_58 = param_3;
  FUN_1008553e8(0,&puStack_78);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000107c61170(uVar2);
  uVar1 = 0;
  func_0x000107c60f94(0,(long)(*(double *)(param_1 + 0x10) * 1000000000.0));
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c4f7c0(uVar2);
  func_0x000107c61180();
  FUN_10058c530(uVar1,uVar2,*(undefined8 *)(param_1 + 0x20));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uStack_58);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c611f0(param_1 + 0x28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008553e8; end: 10085549f;  */

undefined8 FUN_1008553e8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  func_0x000107c61174(param_2);
  if ((bRam0000000113817d08 & 1) == 0) {
    iVar1 = 0x13817d08;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_block_create");
      pcRam0000000113817d00 = pcVar3;
      func_0x000107c60e4c(0x113817d08);
    }
  }
  pcVar3 = pcRam0000000113817d00;
  uVar2 = param_2;
  FUN_10002a3a8(param_2);
  func_0x000107c61180();
  (*pcVar3)(param_1,uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 1008554a0; end: 1008554fb;  */

/* WARNING: Possible PIC construction at 0x0001008554c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008554c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008554a0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130969c8);
  *(undefined8 *)(unaff_x20 + _DAT_1130969c8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1008554fc; end: 10085551b;  */

void FUN_1008554fc(void)

{
  FUN_1008554a0();
  return;
}



/* Entry: 10085551c; end: 100855523;  */

void FUN_10085551c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_100855580(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100855524; end: 10085557f;  */

void FUN_100855524(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_100855580(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100855580; end: 100855733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100855580(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *unaff_x20;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long alStack_60 [2];
  
  lVar8 = *unaff_x20;
  FUN_10006c804();
  lVar1 = _DAT_113094e18;
  uStack_68 = param_1;
  func_0x000107c61428((long)unaff_x20 + _DAT_113094e18,auStack_80,0x21,0);
  uVar2 = 0xff;
  FUN_1006b9d40(0xff,*(undefined8 *)(lVar8 + 0x58));
  uVar6 = 0x113094ed8;
  FUN_10002969c(0x113094ed8,&UNK_10dd3b9a0);
  puVar3 = &UNK_10dd3c970;
  func_0x000107c61520(&UNK_10dd3c970,uVar2);
  uVar4 = 0;
  func_0x000107c5fa34(0,uVar2,uVar6,puVar3);
  func_0x000107c5f9f0(alStack_60,&uStack_68,uVar4);
  func_0x000107c614a8(auStack_80);
  if (alStack_60[0] == 0) {
    uStack_68 = param_1;
    func_0x000107c61428((long)unaff_x20 + _DAT_113094e20,auStack_80,0x21,0);
    uVar6 = 0;
    func_0x000107c5fe38(0,uVar2,puVar3);
    func_0x000107c6157c(param_1);
    func_0x000107c5fe20(alStack_60,&uStack_68,uVar6);
    func_0x000107c614a8(auStack_80);
    func_0x000107c61574(alStack_60[0]);
  }
  else {
    func_0x000107c615e8();
    if (*(char *)((long)unaff_x20 + _DAT_113094e28) == '\x01') {
      uVar7 = *(ulong *)((long)unaff_x20 + lVar1);
      uVar5 = uVar7;
      func_0x000107c61434();
      func_0x000107c5fa18();
      func_0x000107c6142c(uVar7);
      FUN_100070bfc();
      if ((uVar5 & 1) == 0) {
        return;
      }
      func_0x000100c7f554();
      return;
    }
  }
  FUN_100070bfc();
  return;
}



/* Entry: 100855734; end: 10085576f;  */

void FUN_100855734(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_100855770(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 100855770; end: 10085581b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100855770(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,unaff_x20 + _DAT_1138154f0,lVar1);
  FUN_10085581c();
  func_0x000107c5fa50(param_1,lVar1,puVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 10085581c; end: 10085585f;  */

void FUN_10085581c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d6c668 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5eec8(0xff);
  puVar2 = PTR___s10Foundation4UUIDVSHAAMc_110350c48;
  func_0x000107c61520(PTR___s10Foundation4UUIDVSHAAMc_110350c48,uVar1);
  puRam0000000112d6c668 = puVar2;
  return;
}



/* Entry: 100855860; end: 1008558ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100855860(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_1138154f0;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  func_0x000107c5eec8();
                    /* WARNING: Could not recover jumptable at 0x0001008558a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 1008558ac; end: 10085599b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1008558ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  pcVar6 = *(code **)(lVar5 + 0x10);
  (*pcVar6)(lVar4,param_1 + _DAT_1138154f0,lVar1);
  (*pcVar6)(puVar3,param_2 + _DAT_1138154f0,lVar1);
  lVar2 = lVar4;
  func_0x000107c5eeb4(lVar4,puVar3);
  pcVar6 = *(code **)(lVar5 + 8);
  (*pcVar6)(puVar3,lVar1);
  (*pcVar6)(lVar4,lVar1);
  return (uint)lVar2 & 1;
}



/* Entry: 10085599c; end: 1008559bb;  */

uint FUN_10085599c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1008558ac(uVar1,*param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 1008559bc; end: 1008559bf;  */

void FUN_1008559bc(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lStack_48;
  
  lVar4 = unaff_x20[3];
  if (lVar4 != 0) {
    lVar5 = *unaff_x20;
    plVar1 = unaff_x20 + 2;
    func_0x000107c61648();
    if (plVar1 != (long *)0x0) {
      pcVar6 = *(code **)(*plVar1 + 0x78);
      uVar2 = 0;
      lStack_48 = lVar4;
      FUN_1000876dc(0,*(undefined8 *)(lVar5 + 0x50));
      func_0x000107c6157c(lVar4);
      puVar3 = &DAT_10dd3c860;
      func_0x000107c61520(&DAT_10dd3c860,uVar2);
      (*pcVar6)(&lStack_48,uVar2,puVar3);
      func_0x000107c61574(lVar4);
      func_0x000107c61574(plVar1);
    }
    lVar4 = unaff_x20[3];
    unaff_x20[3] = 0;
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 1008559c0; end: 100855a6f;  */

void FUN_1008559c0(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lStack_48;
  
  lVar4 = unaff_x20[3];
  if (lVar4 != 0) {
    lVar5 = *unaff_x20;
    plVar1 = unaff_x20 + 2;
    func_0x000107c61648();
    if (plVar1 != (long *)0x0) {
      pcVar6 = *(code **)(*plVar1 + 0x78);
      uVar2 = 0;
      lStack_48 = lVar4;
      FUN_1000876dc(0,*(undefined8 *)(lVar5 + 0x50));
      func_0x000107c6157c(lVar4);
      puVar3 = &DAT_10dd3c860;
      func_0x000107c61520(&DAT_10dd3c860,uVar2);
      (*pcVar6)(&lStack_48,uVar2,puVar3);
      func_0x000107c61574(lVar4);
      func_0x000107c61574(plVar1);
    }
    lVar4 = unaff_x20[3];
    unaff_x20[3] = 0;
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 100855a70; end: 100855a73;  */

void FUN_100855a70(void)

{
  return;
}



/* Entry: 100855a74; end: 100855acb;  */

void FUN_100855a74(long *param_1)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  FUN_1000b6d7c();
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x88) + -8) + 8))
            ((long)param_1 + *(long *)(*param_1 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)
            (param_1,*(undefined4 *)(*param_1 + 0x30),*(undefined2 *)(*param_1 + 0x34));
  return;
}



/* Entry: 100855acc; end: 100855b3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100855acc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_1138154f0;
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_1130969c8));
  func_0x000107c61640(unaff_x20 + _DAT_1130969d0);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_1130969d8 + 8));
  return;
}



/* Entry: 100855b40; end: 100855bf3;  */

void FUN_100855b40(void)

{
  FUN_100855acc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100855bf4; end: 100855d7b;  */

void FUN_100855bf4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  puStack_68 = &UNK_106218710;
  puStack_60 = &UNK_106218720;
  uStack_58 = 0;
  func_0x000107c6111c(auStack_90,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar2);
  func_0x000107c6111c(auStack_88,param_1 + 0x30);
  func_0x000107c4c7b0(param_2);
  uVar1 = puStack_78[5];
  func_0x000107c61174(uVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_90);
  func_0x000107c60bcc(&uStack_80,8);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


