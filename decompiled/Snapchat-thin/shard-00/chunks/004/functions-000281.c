/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006250a0; end: 1006250e7;  */

long FUN_1006250a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1000b6d7c();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1006250e8; end: 100625103;  */

void FUN_1006250e8(undefined8 param_1)

{
  FUN_1006250a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x28,7);
  return;
}



/* Entry: 100625104; end: 10062517f;  */

long * FUN_100625104(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000100125af4(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_100625170;
    }
    plVar2 = plVar4 + 4;
    func_0x000100125af4(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_100625170:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 100625180; end: 100625223;  */

undefined1  [16]
FUN_100625180(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_100625104(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_100625264(alStack_60,param_1,param_3,param_4,param_5);
    FUN_100625460(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
    alStack_60[0] = 0;
    FUN_1006254c8(alStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 100625224; end: 100625257;  */

long FUN_100625224(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_100625180(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x38;
}



/* Entry: 100625258; end: 100625263;  */

void FUN_100625258(void)

{
  return;
}



/* Entry: 100625264; end: 1006252bb;  */

void FUN_100625264(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  
  lVar1 = 0x58;
  func_0x000107c60e20();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 0;
  FUN_1006252bc(lVar1 + 0x20,*param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1006252bc; end: 1006252db;  */

void FUN_1006252bc(long param_1)

{
  func_0x000107c60c94();
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1006252dc; end: 1006252fb;  */

void FUN_1006252dc(undefined8 param_1)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  uStack_50 = param_1;
  FUN_100087bd4(FUN_100625438,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 1006252fc; end: 10062534f;  */

void FUN_1006252fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_50 = param_2;
  uStack_48 = param_1;
  uStack_40 = param_4;
  FUN_100087bd4(FUN_100625438,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 100625350; end: 100625437;  */

void FUN_100625350(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x18,auStack_68,0x21,0);
  uVar4 = *(ulong *)(param_1 + 0x18);
  uVar2 = uVar4;
  func_0x000107c61558();
  *(ulong *)(param_1 + 0x18) = uVar4;
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1000c9a00(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *(ulong *)(param_1 + 0x18) = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_1000c9a00(uVar4,uVar2 + 1,1,uVar3);
  }
  *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
  lVar1 = uVar4 + uVar2 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  *(ulong *)(param_1 + 0x18) = uVar4;
  func_0x000107c614a8(auStack_68);
  func_0x000107c615f0(param_2);
  return;
}



/* Entry: 100625438; end: 100625453;  */

void FUN_100625438(void)

{
  long unaff_x20;
  
  FUN_100625350(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 100625454; end: 10062545f;  */

void FUN_100625454(void)

{
  return;
}



/* Entry: 100625460; end: 1006254af;  */

void FUN_100625460(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  FUN_10002c5b0(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1006254b0; end: 1006254c7;  */

void FUN_1006254b0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x20);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1006254c8; end: 1006254eb;  */

undefined8 FUN_1006254c8(undefined8 param_1)

{
  FUN_1006254b0(param_1,0);
  return param_1;
}



/* Entry: 1006254ec; end: 1006254f3;  */

undefined1 * FUN_1006254ec(void)

{
  FUN_1001a3db4(&stack0x00000028);
  FUN_100625524(&stack0x00000030);
  return &stack0x00000020;
}



/* Entry: 1006254f4; end: 100625523;  */

long FUN_1006254f4(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  FUN_100625524(param_1 + 0x10);
  return param_1;
}



/* Entry: 100625524; end: 100625553;  */

long * FUN_100625524(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1000681a0(param_1);
  }
  return param_1;
}



/* Entry: 100625554; end: 100625583;  */

long FUN_100625554(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  FUN_100067de0(param_1 + 0x10);
  return param_1;
}



/* Entry: 100625584; end: 100625597;  */

void FUN_100625584(void)

{
  FUN_100625554();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100625598; end: 1006255a7;  */

void FUN_100625598(void)

{
  return;
}



/* Entry: 1006255a8; end: 1006256bb; -[SCNGrpcUnifiedGrpcService unaryCall:request:callOptionsBuilder:handler:] */

void FUN_1006255a8(void)

{
  long unaff_x23;
  undefined8 uVar1;
  undefined1 auStack_98 [72];
  undefined1 auStack_50 [16];
  
  FUN_100625c6c();
  FUN_10061a020();
  func_0x00010061a028();
  func_0x00010061a030();
  uVar1 = *(undefined8 *)(unaff_x23 + 0x18);
  func_0x00010061a038();
  func_0x000100625c88();
  FUN_100625dac();
  FUN_100626074(auStack_98);
  func_0x000100626334();
  FUN_100629f48(auStack_98);
  FUN_100629f6c();
  FUN_10062a034();
  FUN_1006235bc();
  FUN_10062a0c4(auStack_50);
  func_0x000107c61180();
  func_0x00010062a258();
  func_0x00010062388c();
  func_0x000100623894();
  func_0x00010062389c();
  func_0x0001006238a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1006256bc; end: 1006256cf;  */

void FUN_1006256bc(void)

{
  return;
}



/* Entry: 1006256d0; end: 100625773;  */

long FUN_1006256d0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar2 = param_3 + 0x20;
    func_0x000100125af4(lVar2,param_2);
    lVar1 = 8;
    if (-1 < (char)lVar2) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 100625774; end: 1006257df;  */

void FUN_100625774(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1006257e0; end: 1006258ef;  */

void FUN_1006257e0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  ulong uStack_40;
  byte bStack_31;
  
  plVar3 = (long *)(param_1 + 0x70);
  iVar2 = (int)*plVar3;
  func_0x000100625780();
  if (*(int *)(param_1 + 0x90) != iVar2) {
    *(int *)(param_1 + 0x90) = iVar2;
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    for (puVar4 = *(undefined8 **)(param_1 + 0x58); puVar4 != puVar1; puVar4 = puVar4 + 2) {
      (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,*(undefined4 *)(param_1 + 0x90));
    }
    FUN_10002b838(auStack_60,"");
    FUN_10002b838(auStack_78,"");
    FUN_10060fea4(auStack_48,*(undefined4 *)(param_1 + 0x54),auStack_60,auStack_78);
    FUN_10060ff50();
    func_0x000107c60ca0(auStack_60);
    if (-1 < (char)bStack_31) {
      uStack_40 = (ulong)bStack_31;
    }
    if ((uStack_40 != 0) && (0 < *plVar3)) {
      FUN_1006258f0(*(undefined8 *)(param_1 + 0x98),auStack_48,plVar3);
    }
    func_0x000107c60ca0(auStack_48);
  }
  return;
}



/* Entry: 1006258f0; end: 10062593f;  */

void FUN_1006258f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010061094c();
  puVar1 = param_1;
  FUN_100625224(param_1,param_2);
  uVar2 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  puVar1[1] = param_3[1];
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  FUN_100625940(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 4);
  return;
}



/* Entry: 100625940; end: 100625ac3;  */

long * FUN_100625940(long *param_1,undefined8 param_2,uint param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  code *unaff_x20;
  undefined8 *puVar5;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [16];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  long alStack_280 [4];
  byte abStack_260 [536];
  undefined8 uStack_48;
  
  FUN_1006109d4();
  uStack_48 = extraout_x8;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    if (unaff_x19[0xd] == 0) goto LAB_100625a6c;
  }
  else if (*(char *)((long)param_1 + 0x77) == '\0') goto LAB_100625a6c;
  unaff_x20 = (code *)alStack_280;
  uVar4 = 4;
  FUN_100625ac4(alStack_280,unaff_x19 + 0xc,4);
  param_3 = (uint)uVar4;
  in_ZR = 0;
  if ((abStack_260[*(long *)(alStack_280[0] + -0x18)] & 5) == 0) {
    func_0x000100624fc4();
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    puVar5 = (undefined8 *)*unaff_x19;
    unaff_x20 = FUN_100625038;
    while( true ) {
      param_3 = (uint)uVar4;
      in_ZR = puVar5 == unaff_x19 + 1;
      if ((bool)in_ZR) break;
      puVar1 = &uStack_2a0;
      FUN_100627dec(puVar1,FUN_100625038);
      uVar4 = puVar1[1];
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_1001a53d4(puVar1 + 2,puVar5 + 4,uVar4);
      puVar1[3] = puVar5[7];
      puVar1[4] = puVar5[8];
      puVar1[5] = puVar5[9];
      puVar1[6] = puVar5[10];
      FUN_10002c7d4();
    }
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    puVar2 = auStack_2b0;
    FUN_1001a556c(puVar2,&uStack_2c8);
    if (((ulong)puVar2 & 1) != 0) {
      func_0x0001006282fc(alStack_280,&uStack_2c8);
    }
    FUN_100628854(alStack_280);
    func_0x000107c60ca0(&uStack_2c8);
    FUN_1006254ec();
  }
  param_1 = alStack_280;
  func_0x000100628b10();
LAB_100625a6c:
  FUN_1006256bc(uStack_48);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000107c60ca0(&uStack_2c8);
    FUN_1006254ec();
    func_0x000100628b10(alStack_280);
    plVar3 = param_1;
    func_0x000107c60bd8();
    FUN_1000daea0();
    plVar3[0x3a] = 0;
    *plVar3 = (long)&PTR_SUB_11087cb40;
    plVar3[0x34] = (long)&PTR_DAT_11087cb68;
    FUN_100625b7c();
    *param_1 = (long)&PTR_SUB_11087cb40;
    param_1[0x34] = (long)&PTR_DAT_11087cb68;
    FUN_1000daff0(param_1 + 1);
    plVar3 = param_1 + 1;
    func_0x0001000db26c(plVar3,unaff_x20,param_3 | 0x10);
    if (plVar3 == (long *)0x0) {
      FUN_100456928();
      func_0x000100456934();
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 100625ac4; end: 100625b7b;  */

void FUN_100625ac4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  FUN_1000daea0();
  param_1[0x3a] = 0;
  *param_1 = &PTR_SUB_11087cb40;
  param_1[0x34] = &PTR_DAT_11087cb68;
  FUN_100625b7c();
  *unaff_x19 = &PTR_SUB_11087cb40;
  unaff_x19[0x34] = &PTR_DAT_11087cb68;
  FUN_1000daff0(unaff_x19 + 1);
  puVar1 = unaff_x19 + 1;
  func_0x0001000db26c();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100456928();
    func_0x000100456934();
  }
  return;
}



/* Entry: 100625b7c; end: 100625b9b;  */

void FUN_100625b7c(void)

{
  FUN_1000daf64();
  FUN_1000dafa4();
  return;
}



/* Entry: 100625b9c; end: 100625c0f; -[SCLensCarouselFunnelServices initWithLensCarouselFunnelLogger:] */

undefined1 * FUN_100625b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270a280;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100625c10; end: 100625c17;  */

void FUN_100625c10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100625c18; end: 100625c6b;  */

void FUN_100625c18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100625c6c; end: 100625c93;  */

void FUN_100625c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 100625c94; end: 100625cd3;  */

void FUN_100625c94(void)

{
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  FUN_1000fefc4();
  FUN_100625cd4(auStack_38,auStack_28);
  func_0x0001000ff1a4();
  func_0x0001000ff220();
  return;
}



/* Entry: 100625cd4; end: 100625cef;  */

void FUN_100625cd4(void)

{
  FUN_1000feff0();
  FUN_100625cf0();
  return;
}



/* Entry: 100625cf0; end: 100625d4f;  */

void FUN_100625cf0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *unaff_x19;
  long lStack_30;
  
  FUN_1000ff05c();
  func_0x0001000ff074();
  FUN_100625d50(lStack_30,param_2);
  *unaff_x19 = lStack_30 + 0x18;
  unaff_x19[1] = lStack_30;
  func_0x0001000ff160();
  func_0x0001000ff178();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3a968();
  func_0x000107c3a990();
  FUN_1000ff104();
  FUN_100625d78();
  return;
}



/* Entry: 100625d50; end: 100625d77;  */

void FUN_100625d50(void)

{
  FUN_1000ff104();
  FUN_100625d78();
  return;
}



/* Entry: 100625d78; end: 100625d7f;  */

void FUN_100625d78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  
  uVar1 = *param_2;
  FUN_1000ff150();
  *param_1 = extraout_x8;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  func_0x000107c607f4(uVar1);
  return;
}



/* Entry: 100625d80; end: 100625dab;  */

void FUN_100625d80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  
  FUN_1000ff150();
  *param_1 = extraout_x8;
  param_1[1] = param_2;
  param_1[2] = param_2;
  func_0x000107c607f4(param_2);
  return;
}



/* Entry: 100625dac; end: 100625db7;  */

void FUN_100625dac(void)

{
  long unaff_x21;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  func_0x000107c61174();
  if (unaff_x21 == 0) {
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
  }
  else {
    FUN_100625e0c(&stack0x00000018);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100625db8; end: 100625e0b;  */

void FUN_100625db8(undefined8 *param_1,long param_2)

{
  func_0x000107c61174(param_2);
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_100625e0c(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100625e0c; end: 100625f07;  */

void FUN_100625e0c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126e0040;
    func_0x000107c61158(PTR_PTR_1126e0040);
    uVar3 = param_2;
    func_0x000107c6115c(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61174(param_2);
      ppuStack_38 = &PTR_DAT_110ccfea8;
      uStack_40 = param_2;
      FUN_1000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_100625f14);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_1000df524(&uStack_30);
      func_0x000107c61170(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_100626018(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_100626008();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100625f08; end: 100625f13;  */

undefined ** FUN_100625f08(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 100625f14; end: 100626007;  */

void FUN_100625f14(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110ccfee8;
  puVar1[3] = &PTR_DAT_110ccff60;
  puVar2 = puVar5;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar3 = puVar2;
  FUN_1000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_100626008();
    } while (extraout_w10 != 0);
  }
  func_0x000107c61174(puVar5);
  puVar1[6] = puVar5;
  func_0x000107c61108(puVar2);
  func_0x000107c61170(puVar5);
  puVar1[3] = &PTR_DAT_110ccff38;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_100626018(&uStack_50);
  return;
}



/* Entry: 100626008; end: 100626017;  */

void FUN_100626008(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100626018; end: 10062603f;  */

long FUN_100626018(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100626040; end: 100626047;  */

void FUN_100626040(void)

{
  return;
}



/* Entry: 100626048; end: 100626073;  */

void FUN_100626048(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 100626074; end: 100626167;  */

void FUN_100626074(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126e0078;
    func_0x000107c61158(PTR_PTR_1126e0078);
    uVar3 = param_2;
    func_0x000107c6115c(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61174(param_2);
      ppuStack_38 = &PTR_DAT_110cd0638;
      uStack_40 = param_2;
      FUN_1000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_1006261f4);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_1000df524(&uStack_30);
      func_0x000107c61170(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_1006262fc(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_1006262ec();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x00010062632c();
  return;
}



/* Entry: 100626168; end: 10062616f;  */

void FUN_100626168(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f7dc8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100626170; end: 1006261f3;  */

void FUN_100626170(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f7dc8,param_2,&UNK_1029f7dcc,param_2,&UNK_1029f7df4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006261f4; end: 1006262eb;  */

void FUN_1006261f4(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110cd0678;
  puVar1[3] = &PTR_DAT_110cd06f0;
  puVar2 = puVar5;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar3 = puVar2;
  FUN_1000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_1006262ec();
    } while (extraout_w10 != 0);
  }
  func_0x000107c61174(puVar5);
  puVar1[6] = puVar5;
  func_0x000107c61108(puVar2);
  func_0x000107c61170(puVar5);
  puVar1[3] = &PTR_DAT_110cd06c8;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1006262fc(&uStack_50);
  return;
}



/* Entry: 1006262ec; end: 1006262fb;  */

void FUN_1006262ec(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1006262fc; end: 100626323;  */

long FUN_1006262fc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100626324; end: 10062635f;  */

void FUN_100626324(void)

{
  return;
}



/* Entry: 100626360; end: 10062660f;  */

void FUN_100626360(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,undefined8 *param_6)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_260 [176];
  undefined1 auStack_1b0 [184];
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 auStack_90 [16];
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (*param_5 == 0) {
    func_0x000107c2c02c(auStack_260);
  }
  else {
    func_0x000100626350();
  }
  func_0x0001006270f0();
  FUN_1006271fc(&uStack_70);
  uStack_78 = 0;
  FUN_100627258(param_4,&uStack_78);
  if ((int)param_4 == 0) {
    plVar6 = (long *)*param_6;
    auStack_90[0] = 0;
    uStack_80 = 0;
    FUN_10002b838(&puStack_f8,&UNK_10f73f83d);
    uStack_a8 = uStack_e8;
    uStack_b0 = uStack_f0;
    puStack_b8 = puStack_f8;
    puStack_e0 = (undefined8 *)CONCAT44(puStack_e0._4_4_,0xd);
    puStack_f8 = (undefined8 *)0x0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    puStack_c0 = (undefined8 *)CONCAT44(puStack_c0._4_4_,0xd);
    uStack_d0 = 0;
    uStack_c8 = 0;
    puStack_d8 = (undefined8 *)0x0;
    uStack_a0 = 1;
    (**(code **)(*plVar6 + 0x10))(plVar6,auStack_90,&puStack_c0);
    FUN_10083872c(&puStack_c0);
    func_0x000107c35328();
    func_0x000107c60ca0(&puStack_f8);
    FUN_1000ff348(auStack_90);
  }
  else {
    puVar3 = (undefined8 *)0x58;
    func_0x000107c60e20();
    plVar7 = puVar3 + 1;
    *plVar7 = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_DAT_110ccd5c0;
    puVar8 = puVar3 + 3;
    *puVar8 = &PTR_DAT_110ccd610;
    plVar6 = puVar3 + 4;
    func_0x000107c60c94(plVar6,param_3);
    lVar5 = *(long *)(param_2 + 0x38);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    puVar3[8] = *(undefined8 *)(param_2 + 0x38);
    puVar3[7] = uVar4;
    if (lVar5 != 0) {
      do {
        func_0x00010061d3f0();
      } while (extraout_w10 != 0);
    }
    lVar5 = param_6[1];
    uVar4 = *param_6;
    puVar3[10] = param_6[1];
    puVar3[9] = uVar4;
    if (lVar5 != 0) {
      do {
        func_0x00010061d3f0();
      } while (extraout_w10_00 != 0);
    }
    uVar4 = *(undefined8 *)(param_2 + 8);
    if (*(char *)((long)puVar3 + 0x37) < '\0') {
      plVar6 = (long *)*plVar6;
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puStack_e0 = puVar8;
    puStack_d8 = puVar3;
    puStack_c0 = puVar8;
    puStack_b8 = puVar3;
    FUN_100601d8c(uVar4,plVar6,&uStack_78,param_2 + 0x18,auStack_1b0,&puStack_e0,&uStack_70);
    func_0x00010061cd5c(&puStack_e0);
    FUN_100629e74(&puStack_c0);
  }
  FUN_100629e98(&puStack_c0,uStack_70,uStack_68);
  param_1[1] = puStack_b8;
  *param_1 = puStack_c0;
  puStack_c0 = (undefined8 *)0x0;
  puStack_b8 = (undefined8 *)0x0;
  FUN_100629f14(&puStack_c0);
  FUN_100601aa4(&uStack_78);
  FUN_100608514(&uStack_70);
  FUN_100629f38();
  func_0x000100629f40();
  return;
}



/* Entry: 100626610; end: 100626677;  */

void FUN_100626610(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c3ecc8(uVar2);
  func_0x000107c61180();
  FUN_100626a84(param_1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 100626678; end: 100626683;  */

undefined ** FUN_100626678(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 100626684; end: 1006266af;  */

void FUN_100626684(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1006266b0; end: 100626747; -[SCNGrpcCallOptionsBuilder build] */

void FUN_1006266b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126de908;
  func_0x000107c610f4(PTR_PTR_1126de908);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x18));
  func_0x000107c61180();
  func_0x000107c48424(puVar3,param_2,uVar1,uVar2,puVar4,*(undefined8 *)(param_1 + 0x20),0,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100626748; end: 10062674f;  */

void FUN_100626748(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f80b4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100626750; end: 1006267d3;  */

void FUN_100626750(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f80b4,param_2,&UNK_1029f80b8,param_2,&UNK_1029f80e0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006267d4; end: 1006267df;  */

undefined ** FUN_1006267d4(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1006267e0; end: 10062680b;  */

void FUN_1006267e0(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 10062680c; end: 1006269ef; -[SCNGrpcCallOptions initWithRpcTimeoutMs:additionalHeaders:requireAuth:clientSwitchboardConfigKey:feature:attestation:consistentTrackingId:] */

undefined1 *
FUN_10062680c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_11270b0a8;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_100626a7c(uVar3);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_100626a7c(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    FUN_100626a7c(uVar3);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    FUN_100626a7c(uVar3);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006269f0; end: 1006269f7;  */

void FUN_1006269f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f8238);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006269f8; end: 100626a7b;  */

void FUN_1006269f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f8238,param_2,&UNK_1029f823c,param_2,&UNK_1029f8264,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100626a7c; end: 100626a83;  */

void FUN_100626a7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100626a84; end: 100626cef;  */

void FUN_100626a84(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [56];
  
  func_0x000107c61174();
  uVar1 = param_2;
  func_0x000107c50950();
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_10011b600();
  uVar3 = param_2;
  func_0x000107c3d980();
  func_0x000107c61180();
  FUN_100626d00(auStack_98);
  uVar4 = param_2;
  func_0x000107c5046c();
  func_0x000107c61180();
  uVar5 = uVar4;
  FUN_10011c84c();
  uVar6 = param_2;
  func_0x000107c3fbd4();
  func_0x000107c61180();
  FUN_100114864(auStack_b8);
  func_0x000107c42e38(param_2);
  func_0x000107c61180();
  FUN_100114864(auStack_d8);
  uVar7 = param_2;
  func_0x000107c3e334();
  func_0x000107c61180();
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    func_0x000107c61174(uVar7);
    func_0x000107c49820(uVar7);
    func_0x00010062705c();
    uVar7 = uVar7 & 0xffffffff | 0x100000000;
  }
  func_0x000107c40264(param_2);
  func_0x000107c61180();
  FUN_100114864(auStack_f8);
  func_0x000100626ef0(param_1,uVar2,param_3 & 0xff,auStack_98,uVar5 & 0xffff,auStack_b8,auStack_d8,
                      uVar7,auStack_f8);
  FUN_1001148fc(auStack_f8);
  func_0x000100627054();
  func_0x00010062705c();
  FUN_1001148fc(auStack_d8);
  func_0x000100627064();
  FUN_1001148fc(auStack_b8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  FUN_10062706c(auStack_98);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  FUN_10062708c();
  return;
}



/* Entry: 100626cf0; end: 100626cf7; -[SCNGrpcCallOptions rpcTimeoutMs] */

undefined8 FUN_100626cf0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100626cf8; end: 100626cff; -[SCNGrpcCallOptions additionalHeaders] */

undefined8 FUN_100626cf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100626d00; end: 100626d6f;  */

void FUN_100626d00(undefined1 *param_1,long param_2)

{
  undefined1 auStack_48 [40];
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[0x28] = 0;
  }
  else {
    FUN_100626d7c(auStack_48,param_2);
    FUN_100626ea4(param_1,auStack_48);
    func_0x00010028ad98(auStack_48);
  }
  FUN_100626ec0();
  return;
}



/* Entry: 100626d70; end: 100626d7b;  */

void FUN_100626d70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100626d7c; end: 100626e7b;  */

void FUN_100626d7c(void)

{
  undefined8 unaff_x19;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  FUN_100626d70();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x5812000000;
  puStack_70 = &UNK_105632d20;
  puStack_68 = &UNK_105632d2c;
  pcStack_60 = "";
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0x3f800000;
  func_0x000107c40808();
  FUN_100626e7c(&uStack_58,unaff_x19);
  func_0x000107c429c4();
  FUN_10028b0c8();
  func_0x000100626e90();
  func_0x00010028ad98(&uStack_58);
  func_0x000100626e9c();
  return;
}



/* Entry: 100626e7c; end: 100626ea3;  */

void FUN_100626e7c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  plVar4 = (long *)(long)((float)param_2 / *(float *)(param_1 + 4));
  plVar2 = param_1;
  plVar3 = plVar4;
  if ((long)plVar4 - 1U == 0) {
    plVar4 = (long *)0x2;
  }
  else if (((ulong)plVar4 & (long)plVar4 - 1U) != 0) {
    func_0x000107c60c44();
    plVar2 = plVar4;
  }
  plVar8 = (long *)param_1[1];
  if (plVar4 <= plVar8) {
    if (plVar4 < plVar8) {
      plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
        func_0x000107c60c44();
      }
      else if ((long *)0x1 < plVar2) {
        plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 - 1) & 0x3fU));
      }
      if (plVar4 <= plVar2) {
        plVar4 = plVar2;
      }
      if (plVar4 < plVar8) goto LAB_10028b168;
    }
    return;
  }
LAB_10028b168:
  func_0x0001002a9f08();
  if (plVar3 == (long *)0x0) {
    FUN_1002aa02c(plVar2);
    plVar2[1] = 0;
  }
  else {
    plVar4 = plVar2 + 1;
    FUN_1002a9f14(plVar4);
    FUN_1002aa02c(plVar2,plVar4);
    plVar2[1] = (long)plVar3;
    lVar5 = *plVar2;
    for (plVar4 = (long *)0x0; plVar3 != plVar4; plVar4 = (long *)((long)plVar4 + 1)) {
      *(undefined8 *)(lVar5 + (long)plVar4 * 8) = 0;
    }
    plVar4 = (long *)plVar2[2];
    if (plVar4 != (long *)0x0) {
      plVar8 = (long *)plVar4[1];
      uVar6 = (long)plVar3 - 1;
      uVar1 = 0;
      if (plVar3 != (long *)0x0) {
        uVar1 = (ulong)plVar8 / (ulong)plVar3;
      }
      plVar7 = plVar8;
      if (plVar3 <= plVar8) {
        plVar7 = (long *)((long)plVar8 - uVar1 * (long)plVar3);
      }
      if (((ulong)plVar3 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar8 & uVar6);
      }
      *(long **)(lVar5 + (long)plVar7 * 8) = plVar2 + 2;
      while (plVar2 = plVar4, plVar4 = (long *)*plVar2, plVar4 != (long *)0x0) {
        plVar8 = (long *)plVar4[1];
        if (((ulong)plVar3 & uVar6) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar6);
        }
        else if (plVar3 <= plVar8) {
          uVar1 = 0;
          if (plVar3 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)plVar3;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)plVar3);
        }
        if (plVar8 != plVar7) {
          if (*(long *)(lVar5 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar8 * 8) = plVar2;
            plVar7 = plVar8;
          }
          else {
            *plVar2 = *plVar4;
            *plVar4 = **(undefined8 **)(lVar5 + (long)plVar8 * 8);
            **(long **)(lVar5 + (long)plVar8 * 8) = (long)plVar4;
            plVar4 = plVar2;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 100626ea4; end: 100626ebf;  */

void FUN_100626ea4(long param_1)

{
  FUN_10028acf0();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 100626ec0; end: 100626ec7;  */

void FUN_100626ec0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100626ec8; end: 100626ecf; -[SCNGrpcCallOptions requireAuth] */

undefined8 FUN_100626ec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100626ed0; end: 100626ed7; -[SCNGrpcCallOptions clientSwitchboardConfigKey] */

undefined8 FUN_100626ed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100626ed8; end: 100626edf; -[SCNGrpcCallOptions feature] */

undefined8 FUN_100626ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100626ee0; end: 100626ee7; -[SCNGrpcCallOptions attestation] */

undefined8 FUN_100626ee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100626ee8; end: 100626f0b; -[SCNGrpcCallOptions consistentTrackingId] */

undefined8 FUN_100626ee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100626f0c; end: 100626f37;  */

undefined1 * FUN_100626f0c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  func_0x000100626ef8();
  return param_1;
}



/* Entry: 100626f38; end: 100627037;  */

undefined8 *
FUN_100626f38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined2 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_100626f0c(param_1 + 2,param_4);
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined2 *)(param_1 + 8) = param_5;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(char *)(param_6 + 3) == '\x01') {
    uVar2 = param_6[1];
    uVar1 = *param_6;
    param_1[0xb] = param_6[2];
    param_1[10] = uVar2;
    param_1[9] = uVar1;
    param_6[1] = 0;
    param_6[2] = 0;
    *param_6 = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(char *)(param_7 + 3) == '\x01') {
    uVar2 = param_7[1];
    uVar1 = *param_7;
    param_1[0xf] = param_7[2];
    param_1[0xe] = uVar2;
    param_1[0xd] = uVar1;
    param_7[1] = 0;
    param_7[2] = 0;
    *param_7 = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x11] = param_8;
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(char *)(param_9 + 3) == '\x01') {
    uVar2 = param_9[1];
    uVar1 = *param_9;
    param_1[0x14] = param_9[2];
    param_1[0x13] = uVar2;
    param_1[0x12] = uVar1;
    param_9[1] = 0;
    param_9[2] = 0;
    *param_9 = 0;
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  return param_1;
}



/* Entry: 100627038; end: 100627053;  */

void FUN_100627038(long param_1)

{
  FUN_10028acf0();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 100627054; end: 10062706b;  */

void FUN_100627054(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10062706c; end: 10062708b;  */

void FUN_10062706c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010028ad98();
  }
  return;
}



/* Entry: 10062708c; end: 100627093;  */

void FUN_10062708c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100627094; end: 1006270e7; -[SCNGrpcCallOptions .cxx_destruct] */

void FUN_100627094(long param_1)

{
  FUN_1006270e8(param_1 + 0x38);
  FUN_1006270e8(param_1 + 0x30);
  FUN_1006270e8(param_1 + 0x28);
  FUN_1006270e8(param_1 + 0x20);
  FUN_1006270e8(param_1 + 0x18);
  FUN_1006270e8(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1006270e8; end: 1006270fb;  */

void FUN_1006270e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 1006270fc; end: 1006271df;  */

undefined8 * FUN_1006270fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  FUN_100626f0c(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined2 *)(param_1 + 8) = uVar1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar3 = param_2[10];
    uVar2 = param_2[9];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[9] = uVar2;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[9] = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    uVar3 = param_2[0xe];
    uVar2 = param_2[0xd];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar3;
    param_1[0xd] = uVar2;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0xd] = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  uVar2 = param_2[0x11];
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x11] = uVar2;
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(char *)(param_2 + 0x15) == '\x01') {
    uVar3 = param_2[0x13];
    uVar2 = param_2[0x12];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar3;
    param_1[0x12] = uVar2;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x12] = 0;
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  return param_1;
}



/* Entry: 1006271e0; end: 1006271fb;  */

void FUN_1006271e0(long param_1)

{
  FUN_1006270fc();
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}



/* Entry: 1006271fc; end: 100627257;  */

void FUN_1006271fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110ccd570;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  param_1[1] = puVar1;
  puVar1[4] = 0x32aaaba7;
  puVar1[3] = 0;
  *param_1 = puVar1 + 3;
  return;
}



/* Entry: 100627258; end: 10062734b;  */

ulong FUN_100627258(long *param_1,long *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_x8;
  long lStack_60;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  plVar3 = param_1;
  func_0x0001004a5cbc();
  plVar3 = (long *)*plVar3;
  uStack_38 = extraout_x8;
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x10))();
    param_1 = (long *)*param_1;
    if (param_1 != (long *)0x0) {
      (**(code **)(*param_1 + 0x18))();
      lVar6 = (long)(int)param_1;
      goto LAB_1006272b8;
    }
  }
  lVar6 = 0;
LAB_1006272b8:
  (**(code **)(*plRam0000000113815c70 + 0x198))(auStack_58,plRam0000000113815c70,plVar3,lVar6);
  plVar3 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0xf0))(plRam0000000113815c70,auStack_58,1);
  lStack_60 = *param_2;
  *param_2 = (long)plVar3;
  uVar2 = plVar3 == (long *)0x0;
  bVar1 = !(bool)uVar2;
  FUN_100601aa4(&lStack_60);
  puVar4 = auStack_58;
  FUN_100601aec();
  FUN_1004b5c80(uStack_38);
  if ((bool)uVar2) {
    return (ulong)bVar1;
  }
  func_0x000107c60e78();
  FUN_1008629c8();
  FUN_100601aec();
  func_0x000107c3528c();
  uVar5 = *(ulong *)(puVar4 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdba2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFDataGetLength_11034a580)(uVar5);
  return uVar5;
}



/* Entry: 10062734c; end: 10062735f;  */

void FUN_10062734c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFDataGetLength_11034a580)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100627360; end: 10062753b;  */

undefined8 * FUN_100627360(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_2 + 7) == '\x01') {
    FUN_10028b0c8(param_1 + 2,param_2 + 2);
    *(undefined1 *)(param_1 + 7) = 1;
  }
  uVar1 = *(undefined2 *)(param_2 + 8);
  puVar3 = param_1 + 9;
  *(undefined1 *)puVar3 = 0;
  *(undefined2 *)(param_1 + 8) = uVar1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(char *)(param_2 + 0xc) == '\x01') {
    if (*(char *)((long)param_2 + 0x5f) < '\0') {
      FUN_100033dac(puVar3,param_2[9],param_2[10]);
    }
    else {
      uVar4 = param_2[10];
      uVar2 = param_2[9];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar4;
      *puVar3 = uVar2;
    }
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  puVar3 = param_1 + 0xd;
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    if (*(char *)((long)param_2 + 0x7f) < '\0') {
      FUN_100033dac(puVar3,param_2[0xd],param_2[0xe]);
    }
    else {
      uVar4 = param_2[0xe];
      uVar2 = param_2[0xd];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar4;
      *puVar3 = uVar2;
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  uVar2 = param_2[0x11];
  puVar3 = param_1 + 0x12;
  *(undefined1 *)puVar3 = 0;
  param_1[0x11] = uVar2;
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(char *)(param_2 + 0x15) == '\x01') {
    if (*(char *)((long)param_2 + 0xa7) < '\0') {
      FUN_100033dac(puVar3,param_2[0x12],param_2[0x13]);
    }
    else {
      uVar4 = param_2[0x13];
      uVar2 = param_2[0x12];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar4;
      *puVar3 = uVar2;
    }
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  return param_1;
}



/* Entry: 10062753c; end: 100627557;  */

void FUN_10062753c(long param_1)

{
  FUN_100627360();
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}



/* Entry: 100627558; end: 1006275bb;  */

void FUN_100627558(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x40;
  func_0x000107c60e20();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  param_5 = (undefined8 *)*param_5;
  uVar3 = param_5[1];
  uVar2 = *param_5;
  puVar1[4] = param_5[2];
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  return;
}


