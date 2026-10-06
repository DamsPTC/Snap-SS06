/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104043444; end: 104043463;  */

void FUN_104043444(void)

{
  _objc_opt_self(&PTR_PTR_112980578);
  return;
}



/* Entry: 104043464; end: 10404355f;  */

undefined8 FUN_104043464(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x11304dbb8;
  func_0x0001000285a8(0x11304dbb8,&UNK_10dd22560);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104043560; end: 10404363f;  */

undefined1  [16] FUN_104043560(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x11304dc80,auStack_48,0,0);
  uVar3 = uRam000000011304dc88;
  uVar2 = uRam000000011304dc80;
  uVar1 = uRam000000011304dc80 & 0xffffffffffff;
  if ((uRam000000011304dc88 & 0x2000000000000000) != 0) {
    uVar1 = uRam000000011304dc88 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uRam000000011304dc88);
    __ss11_StringGutsV4growyySiF(0x2d);
    _swift_bridgeObjectRelease(0xe000000000000000);
    __sSS6appendyySSF(uVar2,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    __sSS6appendyySSF(0xd000000000000024,0x800000010f1e07b0);
    uVar4 = 0x2f2f3a70747468;
    uVar5 = 0xe700000000000000;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 104043640; end: 104043647;  */

void FUN_104043640(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF
            (auStack_68,*(undefined8 *)(&UNK_10dcc69c8 + (ulong)bVar1 * 8),0xe400000000000000);
  _swift_bridgeObjectRelease(0xe400000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104043648; end: 104043673;  */

void FUN_104043648(undefined8 param_1)

{
  byte *unaff_x20;
  
  __sSS4hash4intoys6HasherVz_tF
            (param_1,*(undefined8 *)(&UNK_10dcc69c8 + (ulong)*unaff_x20 * 8),0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe400000000000000);
  return;
}



/* Entry: 104043674; end: 10404367b;  */

void FUN_104043674(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __sSS4hash4intoys6HasherVz_tF
            (auStack_68,*(undefined8 *)(&UNK_10dcc69c8 + (ulong)bVar1 * 8),0xe400000000000000);
  _swift_bridgeObjectRelease(0xe400000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10404367c; end: 1040436a7;  */

void FUN_10404367c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1040444ec(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1040436a8; end: 1040436c3;  */

void FUN_1040436a8(undefined8 *param_1)

{
  byte *unaff_x20;
  
  *param_1 = *(undefined8 *)(&UNK_10dcc69c8 + (ulong)*unaff_x20 * 8);
  param_1[1] = 0xe400000000000000;
  return;
}



/* Entry: 1040436c4; end: 104043703;  */

void FUN_1040436c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11304dcf8;
  func_0x0001000285a8(0x11304dcf8,&UNK_10dcc65c0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 104043704; end: 10404379f;  */

undefined1  [16] FUN_104043704(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  uVar2 = 0x34204c5255;
  if (bVar4 != 4) {
    uVar2 = 0x35204c5255;
  }
  uVar5 = 0x33204c5255;
  if (bVar4 != 3) {
    uVar5 = uVar2;
  }
  uVar2 = 0x31204c5255;
  if (bVar4 != 1) {
    uVar2 = 0x32204c5255;
  }
  uVar1 = 0x656e6f4e;
  if (bVar4 != 0) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe400000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xe500000000000000;
  }
  uVar3 = 0xe500000000000000;
  if (bVar4 < 3) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 1040437a0; end: 10404380b;  */

void FUN_1040437a0(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0x4265707974;
  if (cVar2 != '\x01') {
    uVar1 = 0x4165707974;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,0xe500000000000000);
  _swift_bridgeObjectRelease(0xe500000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10404380c; end: 10404384b;  */

void FUN_10404380c(undefined8 param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x4265707974;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x4165707974;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe500000000000000);
  return;
}



/* Entry: 10404384c; end: 1040438b3;  */

void FUN_10404384c(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  uVar1 = 0x4265707974;
  if (cVar2 != '\x01') {
    uVar1 = 0x4165707974;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,0xe500000000000000);
  _swift_bridgeObjectRelease(0xe500000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1040438b4; end: 10404392b;  */

void FUN_1040438b4(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10404392c; end: 10404395b;  */

void FUN_10404392c(undefined8 *param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x4265707974;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x4165707974;
  }
  *param_1 = uVar1;
  param_1[1] = 0xe500000000000000;
  return;
}



/* Entry: 10404395c; end: 10404399b;  */

void FUN_10404395c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11304dd58;
  func_0x0001000285a8(0x11304dd58,&UNK_10dcc65d0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 10404399c; end: 1040439c7;  */

undefined1  [16] FUN_10404399c(void)

{
  undefined8 uVar1;
  char *unaff_x20;
  undefined1 auVar2 [16];
  
  uVar1 = 0x422065707954;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x412065707954;
  }
  auVar2._8_8_ = 0xe600000000000000;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 1040439c8; end: 104043c47;  */

void FUN_1040439c8(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0xed00007265767265;
  uVar3 = 0x657263536c6c7566;
  if (bVar2 != 2) {
    uVar3 = 0x65726353666c6168;
  }
  uVar4 = 0x5374636570736572;
  if (bVar2 != 0) {
    uVar5 = 0xe800000000000000;
    uVar4 = 0x64656c6261736964;
  }
  uVar1 = 0xea00000000006e65;
  if (bVar2 < 2) {
    uVar1 = uVar5;
    uVar3 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar3,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104043c48; end: 104043cdb;  */

void FUN_104043c48(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  uVar5 = 0xed00007265767265;
  uVar3 = 0x657263536c6c7566;
  if (bVar2 != 2) {
    uVar3 = 0x65726353666c6168;
  }
  uVar4 = 0x5374636570736572;
  if (bVar2 != 0) {
    uVar5 = 0xe800000000000000;
    uVar4 = 0x64656c6261736964;
  }
  uVar1 = 0xea00000000006e65;
  if (bVar2 < 2) {
    uVar1 = uVar5;
    uVar3 = uVar4;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}



/* Entry: 104043cdc; end: 104043d1b;  */

void FUN_104043cdc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11304dd60;
  func_0x0001000285a8(0x11304dd60,&UNK_10dcc65d8);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 104043d1c; end: 104043dc7;  */

undefined1  [16] FUN_104043d1c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar3 = *unaff_x20;
  uVar5 = 0x2074636570736552;
  uVar4 = 0x726353206c6c7546;
  if (bVar3 != 2) {
    uVar4 = 0x72635320666c6148;
  }
  uVar1 = 0xee00726576726553;
  if (bVar3 != 0) {
    uVar5 = 0xd00000000000001b;
    uVar1 = 0x800000010f1e07f0;
  }
  uVar2 = 0xeb000000006e6565;
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 104043dc8; end: 104043f07;  */

undefined8 FUN_104043dc8(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x11304df58,auStack_38,0,0);
  return uRam000000011304df58;
}



/* Entry: 104043f08; end: 104043f17;  */

undefined1  [16] FUN_104043f08(void)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x11304e0e0,auStack_38,0,0);
  auVar1._8_8_ = uRam000000011304e0e8;
  auVar1._0_8_ = uRam000000011304e0e0;
  _swift_bridgeObjectRetain(uRam000000011304e0e8);
  return auVar1;
}



/* Entry: 104043f18; end: 1040441b7;  */

undefined1 FUN_104043f18(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x11304e128,auStack_38,0,0);
  return uRam000000011304e128;
}



/* Entry: 1040441b8; end: 10404421f;  */

void FUN_1040441b8(void)

{
  double dVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x11304e228,auStack_48,0,0);
  dVar1 = dRam000000011304e228;
  if (dRam000000011304e228 != 0.0) {
    _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x00010c00e360(dVar1);
  }
  return;
}



/* Entry: 104044220; end: 10404434b;  */

void FUN_104044220(long param_1)

{
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010bf3aaa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10404434c; end: 1040444eb;  */

void FUN_10404434c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  double dVar9;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(0x11304e2a8,auStack_68,0,0);
  if (cRam000000011304e2a8 == '\x01') {
    lVar2 = 0x11304e2e8;
    puVar4 = auStack_80;
    _swift_beginAccess(0x11304e2e8,puVar4,0,0);
    if (cRam000000011304e2e8 == '\0') {
      func_0x00010af47454();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1040444e8);
        (*pcVar1)();
      }
      lVar3 = lVar2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      puVar6 = puVar4;
      _objc_release();
      func_0x00010af4746c();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1040444ec);
        (*pcVar1)();
      }
    }
    else {
      func_0x00010af47484();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1040444e4);
        (*pcVar1)();
      }
      lVar3 = lVar2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      puVar6 = puVar4;
      _objc_release();
      func_0x00010af4749c();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1040443f4);
        (*pcVar1)();
      }
    }
    lVar5 = lVar2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar8 = puVar6;
    _objc_release();
    func_0x00010af474b4();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040444e0);
      (*pcVar1)();
    }
    lVar7 = lVar2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar2);
    _swift_beginAccess(0x11304e328,auStack_98,0,0);
    dVar9 = (double)lRam000000011304e328;
  }
  else {
    lVar3 = 0;
    puVar4 = (undefined1 *)0x0;
    lVar5 = 0;
    puVar6 = (undefined1 *)0x0;
    lVar7 = 0;
    puVar8 = (undefined1 *)0x0;
    dVar9 = 0.0;
  }
  *param_1 = lVar3;
  param_1[1] = (long)puVar4;
  param_1[2] = lVar5;
  param_1[3] = (long)puVar6;
  param_1[4] = lVar7;
  param_1[5] = (long)puVar8;
  param_1[6] = (long)dVar9;
  return;
}



/* Entry: 1040444ec; end: 1040445b3;  */

ulong FUN_1040444ec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Entry: 1040445b4; end: 1040445bf;  */

void FUN_1040445b4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf3aaa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 1040445c0; end: 10404462b;  */

void FUN_1040445c0(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e538 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc65e0;
  _swift_getWitnessTable(&UNK_10dcc65e0,&UNK_110739218);
  puRam000000011304e538 = puVar1;
  return;
}



/* Entry: 10404462c; end: 10404463f;  */

void FUN_10404462c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104044640();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x104044680)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104044640; end: 1040446bf;  */

void FUN_104044640(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc6688;
  _swift_getWitnessTable(&UNK_10dcc6688,&UNK_110739218);
  puRam000000011304e550 = puVar1;
  return;
}



/* Entry: 1040446c0; end: 1040446c3;  */

void FUN_1040446c0(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e560 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc66dc;
  _swift_getWitnessTable(&UNK_10dcc66dc,&UNK_1107392a8);
  puRam000000011304e560 = puVar1;
  return;
}



/* Entry: 1040446c4; end: 10404472f;  */

void FUN_1040446c4(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e560 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc66dc;
  _swift_getWitnessTable(&UNK_10dcc66dc,&UNK_1107392a8);
  puRam000000011304e560 = puVar1;
  return;
}



/* Entry: 104044730; end: 104044743;  */

void FUN_104044730(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104044744();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x104044784)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104044744; end: 1040447c3;  */

void FUN_104044744(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e578 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc6788;
  _swift_getWitnessTable(&UNK_10dcc6788,&UNK_1107392a8);
  puRam000000011304e578 = puVar1;
  return;
}



/* Entry: 1040447c4; end: 1040447c7;  */

void FUN_1040447c4(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc67dc;
  _swift_getWitnessTable(&UNK_10dcc67dc,&UNK_110739338);
  puRam000000011304e588 = puVar1;
  return;
}



/* Entry: 1040447c8; end: 104044833;  */

void FUN_1040447c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc67dc;
  _swift_getWitnessTable(&UNK_10dcc67dc,&UNK_110739338);
  puRam000000011304e588 = puVar1;
  return;
}



/* Entry: 104044834; end: 104044877;  */

void FUN_104044834(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 104044878; end: 10404488b;  */

void FUN_104044878(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1040448bc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1040448fc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10404488c; end: 1040448bb;  */

void FUN_10404488c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1040448bc; end: 10404493b;  */

void FUN_1040448bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e5a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc6888;
  _swift_getWitnessTable(&UNK_10dcc6888,&UNK_110739338);
  puRam000000011304e5a0 = puVar1;
  return;
}



/* Entry: 10404493c; end: 104044ddb;  */

int FUN_10404493c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1040449b8;
        goto LAB_10404499c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10404499c:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1040449b8:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104044ddc; end: 104044fbf;  */

undefined1  [16] FUN_104044ddc(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_18;
  
  uVar3 = 0xee00726576726553;
  uVar2 = 0x2074636570736552;
  switch(param_1) {
  case 0:
    goto code_r0x000104044e34;
  case 1:
    uVar3 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e55;
code_r0x000104044e34:
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = uVar2;
    return auVar4;
  case 2:
    auVar10._8_8_ = 0xea00000000006874;
    auVar10._0_8_ = 0x646957206c6c6946;
    return auVar10;
  case 3:
    auVar11._8_8_ = 0xeb00000000746867;
    auVar11._0_8_ = 0x696548206c6c6946;
    return auVar11;
  case 4:
    auVar7._8_8_ = 0xe300000000000000;
    auVar7._0_8_ = 0x746946;
    return auVar7;
  case 5:
    auVar13._8_8_ = 0xe600000000000000;
    auVar13._0_8_ = 0x726564616548;
    return auVar13;
  case 6:
    auVar15._8_8_ = 0xe400000000000000;
    auVar15._0_8_ = 0x746c6954;
    return auVar15;
  case 7:
    auVar12._8_8_ = 0xe800000000000000;
    auVar12._0_8_ = 0x6c6573756f726143;
    return auVar12;
  case 8:
    auVar17._8_8_ = 0xe900000000000077;
    auVar17._0_8_ = 0x6f68736564696c53;
    return auVar17;
  case 9:
    auVar9._8_8_ = 0xe90000000000006c;
    auVar9._0_8_ = 0x6c6154206f686345;
    return auVar9;
  case 10:
    auVar16._8_8_ = 0xe900000000000065;
    auVar16._0_8_ = 0x646957206f686345;
    return auVar16;
  case 0xb:
    auVar6._8_8_ = 0xec000000726f6c6f;
    auVar6._0_8_ = 0x4320746573657250;
    return auVar6;
  case 0xc:
    auVar8._8_8_ = 0xea00000000006c6c;
    auVar8._0_8_ = 0x6154206574696857;
    return auVar8;
  case 0xd:
    auVar14._8_8_ = 0xea00000000006564;
    auVar14._0_8_ = 0x6957206574696857;
    return auVar14;
  case 0xe:
    auVar5._8_8_ = 0xe400000000000000;
    auVar5._0_8_ = 0x64697247;
    return auVar5;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_1107394f8,&uStack_18,&UNK_1107394f8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104044fc0);
    (*pcVar1)();
  }
}



/* Entry: 104044fc0; end: 104044fd3;  */

bool FUN_104044fc0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104044fd4; end: 1040450ab;  */

void FUN_104044fd4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1040450ac; end: 1040450bf;  */

void FUN_1040450ac(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1040450c0; end: 1040450ff;  */

void FUN_1040450c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11304e7f0;
  func_0x0001000285a8(0x11304e7f0,&UNK_10dcc6a30);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 104045100; end: 104045113;  */

undefined1  [16] FUN_104045100(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0xf) {
    uVar1 = param_1;
  }
  auVar2[8] = 0xe < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 104045114; end: 104045153;  */

void FUN_104045114(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e7f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc6a38;
  _swift_getWitnessTable(&UNK_10dcc6a38,&UNK_1107394f8);
  puRam000000011304e7f8 = puVar1;
  return;
}



/* Entry: 104045154; end: 10404517f;  */

void FUN_104045154(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104045180();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001040451c0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104045180; end: 1040451ff;  */

void FUN_104045180(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc6b00;
  _swift_getWitnessTable(&UNK_10dcc6b00,&UNK_1107394f8);
  puRam000000011304e800 = puVar1;
  return;
}



/* Entry: 104045200; end: 104045203;  */

void FUN_104045200(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011304e810 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11304e818;
  func_0x00010002969c(0x11304e818,&UNK_10dcc6af8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011304e810 = puVar2;
  return;
}



/* Entry: 104045204; end: 104045253;  */

void FUN_104045204(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011304e810 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11304e818;
  func_0x00010002969c(0x11304e818,&UNK_10dcc6af8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011304e810 = puVar2;
  return;
}



/* Entry: 104045254; end: 104045263;  */

undefined1  [16] FUN_104045254(void)

{
  return ZEXT816(0x1107394f8);
}



/* Entry: 104045264; end: 10404530f;  */

undefined1  [16] FUN_104045264(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 2) {
    uVar3 = 0xee007370616e5320;
    uVar2 = 0x6c6c4120706f6f4c;
  }
  else if (lStack_18 == 1) {
    uVar3 = 0xee0070616e532074;
    uVar2 = 0x73614c20706f6f4c;
  }
  else {
    if (lStack_18 != 0) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104045310);
      (*pcVar1)();
    }
    uVar3 = 0x800000010f1e09f0;
    uVar2 = 0xd000000000000010;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 104045310; end: 10404533b;  */

void FUN_104045310(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10404533c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010404537c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10404533c; end: 104045577;  */

void FUN_10404533c(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc8110;
  _swift_getWitnessTable(&UNK_10dcc8110,&UNK_11073a460);
  puRam000000011304e820 = puVar1;
  return;
}



/* Entry: 104045578; end: 10404558b;  */

bool FUN_104045578(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10404558c; end: 104045663;  */

void FUN_10404558c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104045664; end: 104045677;  */

void FUN_104045664(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104045678; end: 1040456b7;  */

void FUN_104045678(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11304e8b8;
  func_0x0001000285a8(0x11304e8b8,&UNK_10dcc6ba0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1040456b8; end: 1040456cb;  */

undefined1  [16] FUN_1040456b8(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0xc) {
    uVar1 = param_1;
  }
  auVar2[8] = 0xb < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1040456cc; end: 10404570b;  */

void FUN_1040456cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e8c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc6ba8;
  _swift_getWitnessTable(&UNK_10dcc6ba8,&UNK_1107395e0);
  puRam000000011304e8c0 = puVar1;
  return;
}



/* Entry: 10404570c; end: 104045737;  */

void FUN_10404570c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104045738();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000104045778();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104045738; end: 1040457b7;  */

void FUN_104045738(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e8c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc6c70;
  _swift_getWitnessTable(&UNK_10dcc6c70,&UNK_1107395e0);
  puRam000000011304e8c8 = puVar1;
  return;
}



/* Entry: 1040457b8; end: 1040457bb;  */

void FUN_1040457b8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011304e8d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11304e8e0;
  func_0x00010002969c(0x11304e8e0,&UNK_10dcc6c68);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011304e8d8 = puVar2;
  return;
}



/* Entry: 1040457bc; end: 10404580b;  */

void FUN_1040457bc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011304e8d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11304e8e0;
  func_0x00010002969c(0x11304e8e0,&UNK_10dcc6c68);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011304e8d8 = puVar2;
  return;
}



/* Entry: 10404580c; end: 10404582f;  */

undefined1  [16] FUN_10404580c(void)

{
  return ZEXT816(0x1107395e0);
}



/* Entry: 104045830; end: 104045907;  */

void FUN_104045830(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104045908; end: 104045913;  */

void FUN_104045908(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104045914; end: 1040459b7;  */

undefined1  [16] FUN_104045914(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 2) {
    if (lStack_18 == 0) {
      uVar3 = 0xe400000000000000;
      uVar2 = 0x656e6f4e;
    }
    else {
      if (lStack_18 != 1) {
LAB_10404599c:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1040459b8);
        (*pcVar1)();
      }
      uVar3 = 0xe600000000000000;
      uVar2 = 0x736164696441;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe700000000000000;
    uVar2 = 0x6c6165724f274c;
  }
  else {
    if (lStack_18 != 3) goto LAB_10404599c;
    uVar3 = 0xe400000000000000;
    uVar2 = 0x61656b49;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1040459b8; end: 1040459f7;  */

void FUN_1040459b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11304e8e8;
  func_0x0001000285a8(0x11304e8e8,&UNK_10dcc6cd0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1040459f8; end: 104045a0b;  */

undefined1  [16] FUN_1040459f8(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 104045a0c; end: 104045a4b;  */

void FUN_104045a0c(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e8f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc6cd8;
  _swift_getWitnessTable(&UNK_10dcc6cd8,&UNK_1107396a0);
  puRam000000011304e8f0 = puVar1;
  return;
}



/* Entry: 104045a4c; end: 104045a77;  */

void FUN_104045a4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104045a78();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000104045ab8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104045a78; end: 104045af7;  */

void FUN_104045a78(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e8f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc6da0;
  _swift_getWitnessTable(&UNK_10dcc6da0,&UNK_1107396a0);
  puRam000000011304e8f8 = puVar1;
  return;
}



/* Entry: 104045af8; end: 104045afb;  */

void FUN_104045af8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011304e908 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11304e910;
  func_0x00010002969c(0x11304e910,&UNK_10dcc6d98);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011304e908 = puVar2;
  return;
}



/* Entry: 104045afc; end: 104045b4b;  */

void FUN_104045afc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011304e908 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11304e910;
  func_0x00010002969c(0x11304e910,&UNK_10dcc6d98);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011304e908 = puVar2;
  return;
}



/* Entry: 104045b4c; end: 104045b73;  */

undefined1  [16] FUN_104045b4c(void)

{
  return ZEXT816(0x1107396a0);
}



/* Entry: 104045b74; end: 104045bb3;  */

void FUN_104045b74(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e968 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc6e08;
  _swift_getWitnessTable(&UNK_10dcc6e08,&UNK_110739760);
  puRam000000011304e968 = puVar1;
  return;
}



/* Entry: 104045bb4; end: 104045c5f;  */

void FUN_104045bb4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104045c60; end: 104045c8b;  */

void FUN_104045c60(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = *param_2 - 5U < 0xfffffffffffffffd;
  lVar1 = 0;
  if (!bVar2) {
    lVar1 = *param_2;
  }
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = bVar2;
  return;
}



/* Entry: 104045c8c; end: 104045d13;  */

undefined1  [16] FUN_104045c8c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 4) {
    uVar3 = 0xe700000000000000;
    uVar2 = 0x746c7561666544;
  }
  else if (lStack_18 == 3) {
    uVar3 = 0xe500000000000000;
    uVar2 = 0x6565726854;
  }
  else {
    if (lStack_18 != 2) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104045d14);
      (*pcVar1)();
    }
    uVar3 = 0xe300000000000000;
    uVar2 = 0x6f7754;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 104045d14; end: 104045d3f;  */

void FUN_104045d14(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104045d40();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000104045d80();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104045d40; end: 104045dbf;  */

void FUN_104045d40(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc6ed0;
  _swift_getWitnessTable(&UNK_10dcc6ed0,&UNK_110739760);
  puRam000000011304e970 = puVar1;
  return;
}



/* Entry: 104045dc0; end: 104045dc3;  */

void FUN_104045dc0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011304e980 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11304e988;
  func_0x00010002969c(0x11304e988,&UNK_10dcc6ec8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011304e980 = puVar2;
  return;
}



/* Entry: 104045dc4; end: 104045e13;  */

void FUN_104045dc4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011304e980 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11304e988;
  func_0x00010002969c(0x11304e988,&UNK_10dcc6ec8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011304e980 = puVar2;
  return;
}



/* Entry: 104045e14; end: 104045e53;  */

void FUN_104045e14(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11304e960;
  func_0x0001000285a8(0x11304e960,&UNK_10dcc6e00);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 104045e54; end: 104045e63;  */

undefined1  [16] FUN_104045e54(void)

{
  return ZEXT816(0x110739760);
}



/* Entry: 104045e64; end: 104045f1b;  */

undefined1  [16] FUN_104045e64(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lStack_18;
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      auVar3._8_8_ = 0xe500000000000000;
      auVar3._0_8_ = 0x5445534e55;
      return auVar3;
    }
    if (param_1 != 1) {
LAB_104045eec:
      lStack_18 = param_1;
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (&UNK_110739820,&lStack_18,&UNK_110739820,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104045f1c);
      (*pcVar1)();
    }
    pcVar2 = "MSEC_V2_ANIMATION_TREATMENT";
  }
  else {
    if (param_1 != 2) {
      if (param_1 == 3) {
        auVar5._8_8_ = 0x800000010ef135d0;
        auVar5._0_8_ = 0xd00000000000001c;
        return auVar5;
      }
      goto LAB_104045eec;
    }
    pcVar2 = "MSEC_V2_MINIMEZED_TREATMENT";
  }
  auVar4._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
  auVar4._0_8_ = 0xd00000000000001b;
  return auVar4;
}



/* Entry: 104045f1c; end: 104045f2f;  */

bool FUN_104045f1c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104045f30; end: 104046007;  */

void FUN_104045f30(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104046008; end: 104046013;  */

void FUN_104046008(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104046014; end: 10404602b;  */

void FUN_104046014(void)

{
  undefined8 *unaff_x20;
  
  FUN_104045e64(*unaff_x20);
  return;
}



/* Entry: 10404602c; end: 10404606b;  */

void FUN_10404602c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11304e9d0;
  func_0x0001000285a8(0x11304e9d0,&UNK_10dcc6f30);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 10404606c; end: 10404607f;  */

undefined1  [16] FUN_10404606c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 104046080; end: 1040460bf;  */

void FUN_104046080(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e9d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc6f38;
  _swift_getWitnessTable(&UNK_10dcc6f38,&UNK_110739820);
  puRam000000011304e9d8 = puVar1;
  return;
}



/* Entry: 1040460c0; end: 1040460eb;  */

void FUN_1040460c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1040460ec();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010404612c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1040460ec; end: 10404616b;  */

void FUN_1040460ec(void)

{
  undefined *puVar1;
  
  if (puRam000000011304e9e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc7000;
  _swift_getWitnessTable(&UNK_10dcc7000,&UNK_110739820);
  puRam000000011304e9e0 = puVar1;
  return;
}


