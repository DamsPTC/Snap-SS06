/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1042cb7ec; end: 1042cbba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306bbb8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306bbc0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306bbc8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306bbd0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306bbd8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306bbe0) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306bbe8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306bbf0);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11306bbf8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11306bc00) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11306bc08) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11306bc10) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11306bc18) = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306bc20);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_11306bc28) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_11306bc30) = param_19;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306bc38);
  *puVar1 = param_20;
  puVar1[1] = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_11306bc40) = param_22;
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042cbba8; end: 1042cbdbb; -[SCAdWebViewLoadTrackInfo initWithDomDownloadLatency:domLoadLatency:firstContentfulPaintLatency:fullLoadLatency:loadProgress:hasSubsequentNavigation:userAgent:pageURL:navigationStartTimestampMs:responseStartLatencyMs:domInteractiveLatencyMs:domContentLoadedStartLatencyMs:domCompleteLatencyMs:resolvedPageUrl:serverRedirectCount:serverRedirectResolvedTsMs:serverRedirectResolvedUrl:hasPostClickEngagement:] */

void FUN_1042cbba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,long param_16,
                  undefined8 param_17,undefined8 param_18,long param_19,undefined8 param_20)

{
  long lVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_9 == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_80 = param_2;
    uStack_78 = param_9;
  }
  if (param_10 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_90 = param_2;
    uStack_88 = param_10;
  }
  if (param_16 == 0) {
    uStack_a0 = 0;
    uStack_b0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_b0 = param_2;
    uStack_a0 = param_16;
  }
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  lVar1 = param_19;
  _objc_retain();
  _objc_retain();
  if (lVar1 == 0) {
    param_19 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar1);
  }
  func_0x0001042cb9cc(param_3,param_4,param_5,param_6,param_7,param_8,uStack_78,uStack_80,uStack_88,
                      uStack_90,param_11,param_12,param_13,param_14,param_15,uStack_a0,uStack_b0,
                      param_17,param_18,param_19,param_2,param_20);
  return;
}



/* Entry: 1042cbdbc; end: 1042cc247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cbdbc(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _swift_getObjectType();
  if (*(char *)(param_1 + 8) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bbb8) = puVar2;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bbc0) = puVar2;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bbc8) = puVar2;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bbd0) = puVar2;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11306bbd8) = puVar2;
  if (*(char *)(param_1 + 0x49) == '\x02') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010bff91e0();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bbe0) = puVar2;
  uStack_68 = *(undefined8 *)(param_1 + 0x58);
  uStack_70 = *(undefined8 *)(param_1 + 0x50);
  uStack_78 = *(undefined8 *)(param_1 + 0x68);
  uStack_80 = *(undefined8 *)(param_1 + 0x60);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306bbe8);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306bbf0);
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_1042cdf90(&uStack_70,&uStack_90,0x112d35ff8,&UNK_10d900cd0);
    FUN_1042cdf90(&uStack_80,&uStack_90,0x112d35ff8,&UNK_10d900cd0);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_1042cdf90(&uStack_70,&uStack_90,0x112d35ff8,&UNK_10d900cd0);
    FUN_1042cdf90(&uStack_80,&uStack_90,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bbf8) = puVar2;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bc00) = puVar2;
  if (*(char *)(param_1 + 0x98) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bc08) = puVar2;
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bc10) = puVar2;
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bc18) = puVar2;
  uStack_88 = *(undefined8 *)(param_1 + 200);
  uStack_90 = *(undefined8 *)(param_1 + 0xc0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306bc20);
  puVar1[1] = uStack_88;
  *puVar1 = uStack_90;
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    FUN_1042cdf90(&uStack_90,&uStack_a0,0x112d35ff8,&UNK_10d900cd0);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_1042cdf90(&uStack_90,&uStack_a0,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bc28) = puVar2;
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bc30) = puVar2;
  uStack_98 = *(undefined8 *)(param_1 + 0xf8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xf0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306bc38);
  puVar1[1] = uStack_98;
  *puVar1 = uStack_a0;
  if (*(char *)(param_1 + 0x100) == '\x02') {
    FUN_1042cdf90(&uStack_a0,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
    func_0x0001017e2180(param_1);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_1042cdf90(&uStack_a0,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010bff91e0();
    func_0x0001017e2180(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_11306bc40) = puVar2;
  _objc_msgSendSuper2(&stack0xffffffffffffff40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042cc248; end: 1042cc27b; -[SCAdWebViewLoadTrackInfo hash] */

undefined8 FUN_1042cc248(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042ca8a8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042cc27c; end: 1042cc2fb; -[SCAdWebViewLoadTrackInfo isEqual:] */

uint FUN_1042cc27c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1042cade4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042cc2fc; end: 1042cc2ff; -[SCAdWebViewLoadTrackInfo copyWithZone:] */

void FUN_1042cc2fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042cc300; end: 1042cc85f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cc300(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f39c0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f39e0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f3a00);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar3 = 0xd000000000000011;
  uVar1 = uVar3;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f3a20);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4f52505f44414f4c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f52505f44414f4c,0xed00005353455247);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f3660);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306bbe8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306bbe8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4547415f52455355;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4547415f52455355,0xea0000000000544e);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11306bbf0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306bbf0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4c52555f45474150;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c52555f45474150,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1f3a40);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f3a60);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f3a80);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f3aa0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f3ad0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306bc20))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306bc20);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f3af0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar3);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f3b10);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f3b30);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306bc38))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306bc38);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar3 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f3b50);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar3);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f3b70);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1042cc860; end: 1042cc8af; -[SCAdWebViewLoadTrackInfo encodeWithCoder:] */

void FUN_1042cc860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042cc300(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042cc8b0; end: 1042cc8df;  */

void FUN_1042cc8b0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042cc8e0(param_1);
  return;
}



/* Entry: 1042cc8e0; end: 1042cd75f;  */

undefined8 FUN_1042cc8e0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f39c0);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_f8 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
    uStack_f8 = uStack_c0;
    if ((int)puVar4 == 0) {
      uStack_f8 = 0;
    }
  }
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f39e0);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_100 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
    uStack_100 = uStack_c0;
    if ((int)puVar4 == 0) {
      uStack_100 = 0;
    }
  }
  uVar2 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f3a00);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_120 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
    uStack_120 = uStack_c0;
    if ((int)puVar4 == 0) {
      uStack_120 = 0;
    }
  }
  uVar9 = 0xd000000000000011;
  uVar2 = uVar9;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f3a20);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_128 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
    uStack_128 = uStack_c0;
    if ((int)puVar4 == 0) {
      uStack_128 = 0;
    }
  }
  uVar2 = 0x4f52505f44414f4c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f52505f44414f4c,0xed00005353455247);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_110 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
    uStack_110 = uStack_c0;
    if ((int)puVar4 == 0) {
      uStack_110 = 0;
    }
  }
  uVar2 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f3660);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_118 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
    uStack_118 = uStack_c0;
    if ((int)puVar4 == 0) {
      uStack_118 = 0;
    }
  }
  uVar2 = 0x4547415f52455355;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4547415f52455355,0xea0000000000544e);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_140 = 0;
    lVar3 = 0;
  }
  else {
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar3 = lStack_b8;
    uStack_140 = uStack_c0;
    if ((int)puVar4 == 0) {
      uStack_140 = 0;
      lVar3 = 0;
    }
  }
  uVar2 = 0x4c52555f45474150;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c52555f45474150,0xe800000000000000);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar5 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_148 = 0;
    lStack_108 = 0;
  }
  else {
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    uStack_148 = uStack_c0;
    lStack_108 = lStack_b8;
    if ((int)puVar4 == 0) {
      uStack_148 = 0;
      lStack_108 = 0;
    }
  }
  uVar2 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1f3a40);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar5 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_c8 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
    uStack_c8 = uStack_c0;
    if ((int)puVar4 == 0) {
      uStack_c8 = 0;
    }
  }
  uVar2 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f3a60);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar5 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_d0 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
    uStack_d0 = uStack_c0;
    if ((int)puVar4 == 0) {
      uStack_d0 = 0;
    }
  }
  uVar2 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f3a80);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar5 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_d8 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
    uStack_d8 = uStack_c0;
    if ((int)puVar4 == 0) {
      uStack_d8 = 0;
    }
  }
  uVar2 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f3aa0);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar5 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_e0 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
    uStack_e0 = uStack_c0;
    if ((int)puVar4 == 0) {
      uStack_e0 = 0;
    }
  }
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f3ad0);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar5 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_e8 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
    uStack_e8 = uStack_c0;
    if ((int)puVar4 == 0) {
      uStack_e8 = 0;
    }
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f3af0);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if (lVar5 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uStack_150 = 0;
    lVar5 = 0;
  }
  else {
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_b8;
    uStack_150 = uStack_c0;
    if ((int)puVar4 == 0) {
      uStack_150 = 0;
      lVar5 = 0;
    }
  }
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f3b10);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
    uVar2 = uStack_c0;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar9 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f3b30);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar9,6);
    uVar9 = uStack_c0;
    if ((int)puVar4 == 0) {
      uVar9 = 0;
    }
  }
  uVar10 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f3b50);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uVar10 = 0;
    lVar6 = 0;
  }
  else {
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar10 = uStack_c0;
    lVar6 = lStack_b8;
    if ((int)puVar4 == 0) {
      uVar10 = 0;
      lVar6 = 0;
    }
  }
  uVar7 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f3b70);
  lVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (lVar8 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar8);
    _swift_unknownObjectRelease(lVar8);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar7,6);
    uVar7 = uStack_c0;
    if ((int)puVar4 == 0) {
      uVar7 = 0;
    }
  }
  if (lVar3 == 0) {
    uStack_140 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_140,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  if (lStack_108 == 0) {
    uStack_148 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_148,lStack_108);
    _swift_bridgeObjectRelease(lStack_108);
  }
  if (lVar5 == 0) {
    uStack_150 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_150,lVar5);
    _swift_bridgeObjectRelease(lVar5);
  }
  if (lVar6 == 0) {
    uVar10 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,lVar6);
    _swift_bridgeObjectRelease(lVar6);
  }
  func_0x00010c00e280();
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(uVar10);
  _objc_release(param_1);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar7);
  return unaff_x20;
}



/* Entry: 1042cd760; end: 1042cd787; -[SCAdWebViewLoadTrackInfo initWithCoder:] */

void FUN_1042cd760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042cc8e0();
  return;
}



/* Entry: 1042cd788; end: 1042cd7c7; -[SCAdWebViewLoadTrackInfo description] */

void FUN_1042cd788(void)

{
  undefined1 auStack_128 [264];
  
  _objc_retain();
  FUN_1042cd98c(auStack_128);
  func_0x0001017e2180(auStack_128);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042cd7c8; end: 1042cd843; -[SCAdWebViewLoadTrackInfo init] */

void FUN_1042cd7c8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdWebViewTrackLoadInfoWrapper.swift",0x32,2,0xf7,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042cd810);
  (*pcVar1)();
}



/* Entry: 1042cd844; end: 1042cd98b; -[SCAdWebViewLoadTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cd844(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bbb8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bbc0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bbc8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bbd0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bbd8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bbe0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bbe8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bbf0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bbf8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bc00));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bc08));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bc10));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bc18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bc20 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bc28));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bc30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bc38 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306bc40));
  return;
}



/* Entry: 1042cd98c; end: 1042cdf8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cd98c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined1 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  undefined8 uVar22;
  undefined1 uVar23;
  undefined8 uVar24;
  undefined8 uStack_460;
  long lStack_458;
  long lStack_438;
  long lStack_428;
  long lStack_418;
  long lStack_408;
  undefined1 uStack_3dc;
  long lStack_3d0;
  long lStack_3c0;
  long lStack_3b0;
  long lStack_3a0;
  undefined1 auStack_390 [264];
  long lStack_288;
  undefined1 uStack_280;
  long lStack_278;
  undefined1 uStack_270;
  long lStack_268;
  undefined1 uStack_260;
  long lStack_258;
  undefined1 uStack_250;
  undefined8 uStack_248;
  undefined1 uStack_240;
  undefined1 uStack_23f;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined1 uStack_210;
  long lStack_208;
  undefined1 uStack_200;
  long lStack_1f8;
  undefined1 uStack_1f0;
  long lStack_1e8;
  undefined1 uStack_1e0;
  long lStack_1d8;
  undefined1 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined1 uStack_1b0;
  long lStack_1a8;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  long lStack_180;
  undefined1 uStack_178;
  long lStack_170;
  undefined1 uStack_168;
  long lStack_160;
  undefined1 uStack_158;
  long lStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined1 uStack_108;
  long lStack_100;
  undefined1 uStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  long lStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 uStack_a8;
  long lStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  lStack_3a0 = *(long *)(param_3 + _DAT_11306bbb8);
  bVar1 = lStack_3a0 == 0;
  if (bVar1) {
    lStack_3a0 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  lStack_3b0 = *(long *)(param_3 + _DAT_11306bbc0);
  bVar2 = lStack_3b0 == 0;
  if (bVar2) {
    lStack_3b0 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  lStack_3c0 = *(long *)(param_3 + _DAT_11306bbc8);
  bVar3 = lStack_3c0 == 0;
  if (bVar3) {
    lStack_3c0 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  lStack_3d0 = *(long *)(param_3 + _DAT_11306bbd0);
  bVar4 = lStack_3d0 == 0;
  if (bVar4) {
    lStack_3d0 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  bVar5 = *(long *)(param_3 + _DAT_11306bbd8) == 0;
  if (bVar5) {
    param_2 = 0;
  }
  else {
    func_0x00010bf885a0();
  }
  lVar14 = *(long *)(param_3 + _DAT_11306bbe0);
  if (lVar14 == 0) {
    uStack_3dc = 2;
  }
  else {
    func_0x00010bf1f3c0();
    uStack_3dc = (undefined1)lVar14;
  }
  uVar10 = *(undefined8 *)(param_3 + _DAT_11306bbe8);
  uVar12 = ((undefined8 *)(param_3 + _DAT_11306bbe8))[1];
  uVar11 = *(undefined8 *)(param_3 + _DAT_11306bbf0);
  uVar13 = ((undefined8 *)(param_3 + _DAT_11306bbf0))[1];
  lStack_408 = *(long *)(param_3 + _DAT_11306bbf8);
  bVar6 = lStack_408 == 0;
  if (bVar6) {
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar12);
    lStack_408 = 0;
  }
  else {
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar12);
    func_0x00010c067fc0();
  }
  lStack_418 = *(long *)(param_3 + _DAT_11306bc00);
  bVar7 = lStack_418 == 0;
  if (bVar7) {
    lStack_418 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  lStack_428 = *(long *)(param_3 + _DAT_11306bc08);
  bVar8 = lStack_428 == 0;
  if (bVar8) {
    lStack_428 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  lStack_438 = *(long *)(param_3 + _DAT_11306bc10);
  bVar9 = lStack_438 == 0;
  if (bVar9) {
    lStack_438 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  lVar14 = _DAT_11306bc28;
  lVar15 = *(long *)(param_3 + _DAT_11306bc18);
  if (lVar15 == 0) {
    uVar22 = *(undefined8 *)(param_3 + _DAT_11306bc20);
    uVar20 = ((undefined8 *)(param_3 + _DAT_11306bc20))[1];
    puVar16 = &UNK_10dce60a8;
    _swift_getKeyPath(&UNK_10dce60a8);
    lVar19 = *(long *)(param_3 + lVar14);
    _swift_bridgeObjectRetain(uVar20);
    lVar15 = 0;
    lVar14 = 0;
    uVar23 = 1;
    uVar18 = 1;
    if (lVar19 != 0) goto LAB_1042cdc58;
  }
  else {
    func_0x00010c067fc0();
    lVar14 = _DAT_11306bc28;
    uVar22 = *(undefined8 *)(param_3 + _DAT_11306bc20);
    uVar20 = ((undefined8 *)(param_3 + _DAT_11306bc20))[1];
    puVar16 = &UNK_10dce60a8;
    _swift_getKeyPath(&UNK_10dce60a8);
    lVar19 = *(long *)(param_3 + lVar14);
    _swift_bridgeObjectRetain(uVar20);
    uVar23 = 0;
    if (lVar19 == 0) {
      lVar14 = 0;
      uVar18 = 1;
    }
    else {
LAB_1042cdc58:
      _objc_retain();
      _objc_retain();
      lVar14 = lVar19;
      func_0x00010c067fc0();
      _objc_release(lVar19);
      _objc_release(lVar19);
      uVar18 = 0;
    }
  }
  _swift_release(puVar16);
  lVar19 = _DAT_11306bc40;
  lStack_458 = *(long *)(param_3 + _DAT_11306bc30);
  if (lStack_458 == 0) {
    uStack_460 = *(undefined8 *)(param_3 + _DAT_11306bc38);
    uVar24 = ((undefined8 *)(param_3 + _DAT_11306bc38))[1];
    puVar16 = &UNK_10dce60d8;
    _swift_getKeyPath(&UNK_10dce60d8);
    lVar19 = *(long *)(param_3 + lVar19);
    _swift_bridgeObjectRetain(uVar24);
    if (lVar19 == 0) {
      _objc_release(param_3);
      _swift_release(puVar16);
      lStack_458 = 0;
      uVar21 = 1;
      uStack_188 = 2;
      goto LAB_1042cddc0;
    }
    lStack_458 = 0;
    uVar21 = 1;
  }
  else {
    func_0x00010c067fc0();
    lVar19 = _DAT_11306bc40;
    uStack_460 = *(undefined8 *)(param_3 + _DAT_11306bc38);
    uVar24 = ((undefined8 *)(param_3 + _DAT_11306bc38))[1];
    puVar16 = &UNK_10dce60d8;
    _swift_getKeyPath(&UNK_10dce60d8);
    lVar19 = *(long *)(param_3 + lVar19);
    _swift_bridgeObjectRetain(uVar24);
    if (lVar19 == 0) {
      _objc_release(param_3);
      _swift_release(puVar16);
      uVar21 = 0;
      uStack_188 = 2;
      goto LAB_1042cddc0;
    }
    uVar21 = 0;
  }
  _objc_retain();
  _objc_retain();
  lVar17 = lVar19;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  _objc_release(lVar19);
  _objc_release(lVar19);
  _swift_release(puVar16);
  uStack_188 = (char)lVar17;
LAB_1042cddc0:
  lStack_288 = lStack_3a0;
  lStack_180 = lStack_3a0;
  lStack_278 = lStack_3b0;
  lStack_170 = lStack_3b0;
  lStack_268 = lStack_3c0;
  lStack_160 = lStack_3c0;
  lStack_258 = lStack_3d0;
  lStack_150 = lStack_3d0;
  uStack_23f = uStack_3dc;
  lStack_218 = lStack_408;
  lStack_110 = lStack_408;
  lStack_208 = lStack_418;
  lStack_100 = lStack_418;
  lStack_1f8 = lStack_428;
  lStack_f0 = lStack_428;
  lStack_1e8 = lStack_438;
  lStack_e0 = lStack_438;
  uStack_280 = bVar1;
  uStack_270 = bVar2;
  uStack_260 = bVar3;
  uStack_250 = bVar4;
  uStack_248 = param_2;
  uStack_240 = bVar5;
  uStack_238 = uVar10;
  uStack_230 = uVar12;
  uStack_228 = uVar11;
  uStack_220 = uVar13;
  uStack_210 = bVar6;
  uStack_200 = bVar7;
  uStack_1f0 = bVar8;
  uStack_1e0 = bVar9;
  lStack_1d8 = lVar15;
  uStack_1d0 = uVar23;
  uStack_1c8 = uVar22;
  uStack_1c0 = uVar20;
  lStack_1b8 = lVar14;
  uStack_1b0 = uVar18;
  lStack_1a8 = lStack_458;
  uStack_1a0 = uVar21;
  uStack_198 = uStack_460;
  uStack_190 = uVar24;
  uStack_178 = bVar1;
  uStack_168 = bVar2;
  uStack_158 = bVar3;
  uStack_148 = bVar4;
  uStack_140 = param_2;
  uStack_138 = bVar5;
  uStack_137 = uStack_23f;
  uStack_130 = uVar10;
  uStack_128 = uVar12;
  uStack_120 = uVar11;
  uStack_118 = uVar13;
  uStack_108 = bVar6;
  uStack_f8 = bVar7;
  uStack_e8 = bVar8;
  uStack_d8 = bVar9;
  lStack_d0 = lVar15;
  uStack_c8 = uVar23;
  uStack_c0 = uVar22;
  uStack_b8 = uVar20;
  lStack_b0 = lVar14;
  uStack_a8 = uVar18;
  lStack_a0 = lStack_458;
  uStack_98 = uVar21;
  uStack_90 = uStack_460;
  uStack_88 = uVar24;
  uStack_80 = uStack_188;
  func_0x000101880464(&lStack_288,auStack_390);
  func_0x0001017e2180(&lStack_180);
  _memcpy(param_1,&lStack_288,0x101);
  return;
}



/* Entry: 1042cdf90; end: 1042cdfd7;  */

undefined8 FUN_1042cdf90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1042cdfd8; end: 1042cdff7;  */

void FUN_1042cdfd8(void)

{
  _objc_opt_self(&PTR_PTR_112995b30);
  return;
}



/* Entry: 1042cdff8; end: 1042ce003;  */

undefined * FUN_1042cdff8(void)

{
  return PTR_s_boolValue_1125a5698;
}



/* Entry: 1042ce004; end: 1042ce147;  */

void FUN_1042ce004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  FUN_1042ce438(param_1,param_2,param_3);
  return;
}



/* Entry: 1042ce148; end: 1042ce277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042ce148(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar2 = &lStack_68;
    _swift_dynamicCast(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11306bc70);
      uVar5 = *(undefined8 *)(lStack_68 + _DAT_11306bc70);
      _swift_bridgeObjectRetain(uVar5);
      func_0x00010422a66c(uVar4,uVar5);
      _swift_bridgeObjectRelease(uVar5);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11306bc78);
      uVar6 = *(undefined8 *)(lStack_68 + _DAT_11306bc78);
      _swift_bridgeObjectRetain(uVar6);
      func_0x00010422a680(uVar5,uVar6);
      _swift_bridgeObjectRelease(uVar6);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11306bc80);
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_11306bc80);
      _swift_bridgeObjectRetain(uVar7);
      func_0x00010422a694(uVar6,uVar7);
      _objc_release(lStack_68);
      _swift_bridgeObjectRelease(uVar7);
      uVar3 = (uint)uVar4 & (uint)uVar5 & (uint)uVar6;
      goto LAB_1042ce25c;
    }
  }
  uVar3 = 0;
LAB_1042ce25c:
  return uVar3 & 1;
}



/* Entry: 1042ce278; end: 1042ce28b; -[SCAdWebViewUserInteractionInfo contentAreaTaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ce278(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306bc70);
  FUN_1042c2ec8(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042ce28c; end: 1042ce29f; -[SCAdWebViewUserInteractionInfo contentAreaScrolls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ce28c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306bc78);
  FUN_1042c2864(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042ce2a0; end: 1042ce2b3; -[SCAdWebViewUserInteractionInfo featureInteractions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ce2a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306bc80);
  FUN_1042c3478(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042ce2b4; end: 1042ce2ff;  */

void FUN_1042ce2b4(long param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  (*param_4)(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042ce300; end: 1042ce373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ce300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306bc70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306bc78) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306bc80) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042ce374; end: 1042ce437; -[SCAdWebViewUserInteractionInfo initWithContentAreaTaps:contentAreaScrolls:featureInteractions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ce374(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  uVar2 = 0;
  FUN_1042c2ec8(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar2);
  uVar2 = 0;
  FUN_1042c2864(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar2);
  uVar2 = 0;
  FUN_1042c3478(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,uVar2);
  *(undefined8 *)(param_1 + _DAT_11306bc70) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306bc78) = param_4;
  *(undefined8 *)(param_1 + _DAT_11306bc80) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042ce438; end: 1042ce817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ce438(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_e0 [16];
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  
  _swift_getObjectType();
  lVar9 = *(long *)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar9 != 0) {
    puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010420a054(0,lVar9,0);
    puVar8 = puStack_a0;
    lVar4 = 0;
    FUN_1042c2ec8();
    puVar7 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar10 = puVar7[-2];
      uVar11 = puVar7[-1];
      uVar12 = *puVar7;
      lVar5 = lVar4;
      _objc_allocWithZone();
      *(undefined8 *)(lVar5 + _DAT_11306b940) = uVar10;
      puVar1 = (undefined8 *)(lVar5 + _DAT_11306b948);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      plVar6 = &lStack_b0;
      lStack_b0 = lVar5;
      lStack_a8 = lVar4;
      _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
      uVar2 = *(ulong *)(puVar8 + 0x10);
      puStack_a0 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
        func_0x00010420a054(1 < *(ulong *)(puVar8 + 0x18),uVar2 + 1,1);
      }
      puVar7 = puVar7 + 3;
      *(ulong *)(puStack_a0 + 0x10) = uVar2 + 1;
      *(long **)(puStack_a0 + uVar2 * 8 + 0x20) = plVar6;
      lVar9 = lVar9 + -1;
      puVar8 = puStack_a0;
    } while (lVar9 != 0);
  }
  *(undefined **)(unaff_x20 + _DAT_11306bc70) = puVar8;
  lVar9 = *(long *)(param_2 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar9 != 0) {
    puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010420a020(0,lVar9,0);
    puVar8 = puStack_a0;
    lVar4 = 0;
    FUN_1042c2864();
    puVar7 = (undefined8 *)(param_2 + 0x28);
    do {
      uVar10 = puVar7[-1];
      uVar11 = *puVar7;
      uVar12 = puVar7[1];
      uVar13 = puVar7[2];
      uVar14 = puVar7[3];
      uVar15 = puVar7[4];
      lVar5 = lVar4;
      _objc_allocWithZone();
      *(undefined8 *)(lVar5 + _DAT_11306b8f8) = uVar10;
      puVar1 = (undefined8 *)(lVar5 + _DAT_11306b900);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      *(undefined8 *)(lVar5 + _DAT_11306b908) = uVar13;
      puVar1 = (undefined8 *)(lVar5 + _DAT_11306b910);
      *puVar1 = uVar14;
      puVar1[1] = uVar15;
      plVar6 = &lStack_c0;
      lStack_c0 = lVar5;
      lStack_b8 = lVar4;
      _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
      uVar2 = *(ulong *)(puVar8 + 0x10);
      puStack_a0 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
        func_0x00010420a020(1 < *(ulong *)(puVar8 + 0x18),uVar2 + 1,1);
      }
      puVar7 = puVar7 + 6;
      *(ulong *)(puStack_a0 + 0x10) = uVar2 + 1;
      *(long **)(puStack_a0 + uVar2 * 8 + 0x20) = plVar6;
      lVar9 = lVar9 + -1;
      puVar8 = puStack_a0;
    } while (lVar9 != 0);
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_11306bc78) = puVar8;
  lVar9 = *(long *)(param_3 + 0x10);
  if (lVar9 == 0) {
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_a0 = puVar3;
    func_0x000104209fec(0,lVar9,0);
    puVar8 = puStack_a0;
    lVar4 = 0;
    FUN_1042c3478();
    puVar7 = (undefined8 *)(param_3 + 0x28);
    do {
      uVar10 = puVar7[-1];
      uVar11 = *puVar7;
      lVar5 = lVar4;
      _objc_allocWithZone();
      *(undefined8 *)(lVar5 + _DAT_11306b978) = uVar10;
      *(undefined8 *)(lVar5 + _DAT_11306b980) = uVar11;
      plVar6 = &lStack_d0;
      lStack_d0 = lVar5;
      lStack_c8 = lVar4;
      _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
      uVar2 = *(ulong *)(puVar8 + 0x10);
      puStack_a0 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
        func_0x000104209fec(1 < *(ulong *)(puVar8 + 0x18),uVar2 + 1,1);
      }
      puVar8 = puStack_a0;
      puVar7 = puVar7 + 2;
      *(ulong *)(puStack_a0 + 0x10) = uVar2 + 1;
      *(long **)(puStack_a0 + uVar2 * 8 + 0x20) = plVar6;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_11306bc80) = puVar8;
  _objc_msgSendSuper2(auStack_e0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042ce818; end: 1042ce84b; -[SCAdWebViewUserInteractionInfo hash] */

undefined8 FUN_1042ce818(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001042ce04c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042ce84c; end: 1042ce8cb; -[SCAdWebViewUserInteractionInfo isEqual:] */

uint FUN_1042ce84c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1042ce148(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042ce8cc; end: 1042ce8cf; -[SCAdWebViewUserInteractionInfo copyWithZone:] */

void FUN_1042ce8cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042ce8d0; end: 1042cea1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ce8d0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bc70);
  uVar1 = 0;
  FUN_1042c2ec8(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f3bd0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bc78);
  uVar1 = 0;
  FUN_1042c2864(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f3bf0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bc80);
  uVar1 = 0;
  FUN_1042c3478(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f3c10);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1042cea20; end: 1042cea6f; -[SCAdWebViewUserInteractionInfo encodeWithCoder:] */

void FUN_1042cea20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042ce8d0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042cea70; end: 1042cea9f;  */

void FUN_1042cea70(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042ceaa0(param_1);
  return;
}



/* Entry: 1042ceaa0; end: 1042cee0b;  */

undefined8 FUN_1042ceaa0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f3bd0);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
  }
  else {
    uVar2 = 0x11306bc88;
    func_0x0001000285a8(0x11306bc88,&UNK_10dce6108);
    puVar1 = PTR___sypN_11034f1a8;
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar2,6);
    uVar2 = uStack_98;
    if (((ulong)puVar4 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_1042cedb4;
    }
    uVar5 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f3bf0);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (lVar3 == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 != 0) {
      uVar5 = 0x11306bc90;
      func_0x0001000285a8(0x11306bc90,&UNK_10dce6110);
      puVar4 = &uStack_98;
      _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar5,6);
      uVar5 = uStack_98;
      if (((ulong)puVar4 & 1) == 0) {
        _objc_release(param_1);
      }
      else {
        uVar6 = 0xd000000000000014;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f3c10)
        ;
        lVar3 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        if (lVar3 == 0) {
          uStack_88 = 0;
          uStack_90 = 0;
          lStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
          _swift_unknownObjectRelease(lVar3);
        }
        uStack_68 = uStack_88;
        uStack_70 = uStack_90;
        lStack_58 = lStack_78;
        uStack_60 = uStack_80;
        if (lStack_78 == 0) {
          _objc_release(param_1);
          _swift_bridgeObjectRelease(uVar5);
          goto LAB_1042ceda4;
        }
        uVar6 = 0x11306bc98;
        func_0x0001000285a8(0x11306bc98,&UNK_10dce6118);
        puVar4 = &uStack_98;
        _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar6,6);
        if (((ulong)puVar4 & 1) != 0) {
          uVar7 = 0;
          FUN_1042c2ec8(0);
          uVar6 = uVar2;
          __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar7);
          _swift_bridgeObjectRelease(uVar2);
          uVar7 = 0;
          FUN_1042c2864(0);
          uVar2 = uVar5;
          __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar5,uVar7);
          _swift_bridgeObjectRelease(uVar5);
          uVar7 = 0;
          FUN_1042c3478(0);
          uVar5 = uStack_98;
          __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uStack_98,uVar7);
          _swift_bridgeObjectRelease(uStack_98);
          func_0x00010c002d40();
          _objc_release(uVar6);
          _objc_release(uVar2);
          _objc_release(uVar5);
          _objc_release(param_1);
          return unaff_x20;
        }
        _objc_release(param_1);
        _swift_bridgeObjectRelease(uVar5);
      }
      _swift_bridgeObjectRelease(uVar2);
      goto LAB_1042cedb4;
    }
    _objc_release(param_1);
LAB_1042ceda4:
    _swift_bridgeObjectRelease(uVar2);
  }
  func_0x00010006e7f4(&uStack_70);
LAB_1042cedb4:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1042cee0c; end: 1042cee33; -[SCAdWebViewUserInteractionInfo initWithCoder:] */

void FUN_1042cee0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042ceaa0();
  return;
}



/* Entry: 1042cee34; end: 1042cee97; -[SCAdWebViewUserInteractionInfo description] */

void FUN_1042cee34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042cef5c();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042cee98; end: 1042cef13; -[SCAdWebViewUserInteractionInfo init] */

void FUN_1042cee98(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdWebViewUserInteractionInfoWrapper.swift",0x38,2,0x5e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042ceee0);
  (*pcVar1)();
}



/* Entry: 1042cef14; end: 1042cef5b; -[SCAdWebViewUserInteractionInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cef14(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bc70));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bc78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306bc80));
  return;
}



/* Entry: 1042cef5c; end: 1042cf323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1042cef5c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar5 = *(ulong *)(param_1 + _DAT_11306bc70);
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    func_0x00010420a0c0(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1042cf31c);
      (*pcVar3)();
    }
    uVar7 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar5 + uVar7 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar4 = uVar7;
        func_0x000104209940(uVar7,uVar5);
      }
      uVar8 = *(undefined8 *)(uVar4 + _DAT_11306b940);
      uVar9 = *(undefined8 *)(uVar4 + _DAT_11306b948);
      uVar10 = ((undefined8 *)(uVar4 + _DAT_11306b948))[1];
      _objc_release();
      uVar4 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
        func_0x00010420a0c0(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
      }
      uVar7 = uVar7 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puVar1 + uVar4 * 0x18 + 0x20) = uVar8;
      *(undefined8 *)(puVar1 + uVar4 * 0x18 + 0x28) = uVar9;
      *(undefined8 *)(puVar1 + uVar4 * 0x18 + 0x30) = uVar10;
    } while (uVar6 != uVar7);
  }
  uVar5 = *(ulong *)(param_1 + _DAT_11306bc78);
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    func_0x00010420a0a4(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1042cf320);
      (*pcVar3)();
    }
    uVar7 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar5 + uVar7 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar4 = uVar7;
        func_0x0001042097a4(uVar7,uVar5);
      }
      uVar8 = *(undefined8 *)(uVar4 + _DAT_11306b8f8);
      uVar9 = *(undefined8 *)(uVar4 + _DAT_11306b900);
      uVar10 = ((undefined8 *)(uVar4 + _DAT_11306b900))[1];
      uVar11 = *(undefined8 *)(uVar4 + _DAT_11306b908);
      uVar12 = *(undefined8 *)(uVar4 + _DAT_11306b910);
      uVar13 = ((undefined8 *)(uVar4 + _DAT_11306b910))[1];
      _objc_release();
      uVar4 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
        func_0x00010420a0a4(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
      }
      uVar7 = uVar7 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puVar2 + uVar4 * 0x30 + 0x20) = uVar8;
      *(undefined8 *)(puVar2 + uVar4 * 0x30 + 0x28) = uVar9;
      *(undefined8 *)(puVar2 + uVar4 * 0x30 + 0x30) = uVar10;
      *(undefined8 *)(puVar2 + uVar4 * 0x30 + 0x38) = uVar11;
      *(undefined8 *)(puVar2 + uVar4 * 0x30 + 0x40) = uVar12;
      *(undefined8 *)(puVar2 + uVar4 * 0x30 + 0x48) = uVar13;
    } while (uVar6 != uVar7);
  }
  uVar5 = *(ulong *)(param_1 + _DAT_11306bc80);
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    func_0x00010420a088(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1042cf324);
      (*pcVar3)();
    }
    uVar7 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar5 + uVar7 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar4 = uVar7;
        func_0x000104209608(uVar7,uVar5);
      }
      uVar8 = *(undefined8 *)(uVar4 + _DAT_11306b978);
      uVar9 = *(undefined8 *)(uVar4 + _DAT_11306b980);
      _objc_release();
      uVar4 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
        func_0x00010420a088(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
      }
      uVar7 = uVar7 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puVar2 + uVar4 * 0x10 + 0x20) = uVar8;
      *(undefined8 *)(puVar2 + uVar4 * 0x10 + 0x28) = uVar9;
    } while (uVar6 != uVar7);
  }
  return puVar1;
}



/* Entry: 1042cf324; end: 1042cf343;  */

void FUN_1042cf324(void)

{
  _objc_opt_self(&PTR_PTR_112995c88);
  return;
}



/* Entry: 1042cf344; end: 1042cf38b;  */

void FUN_1042cf344(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_1042d0fc0(&uStack_50);
  _objc_release(param_2);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = CONCAT71(uStack_37,uStack_38);
  param_1[2] = uStack_40;
  *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,uStack_37);
  return;
}



/* Entry: 1042cf38c; end: 1042cf3d3;  */

void FUN_1042cf38c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(param_4 + 0x10))(param_4,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042cf3d4; end: 1042cf4a7;  */

void FUN_1042cf3d4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1042cf4a8; end: 1042cf4c7;  */

void FUN_1042cf4a8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1042cf4c8; end: 1042cf4fb; -[SCAdWebviewLifecycleEvent description] */

void FUN_1042cf4c8(void)

{
  undefined1 auStack_40 [48];
  
  FUN_1042d0fc0(auStack_40);
  func_0x000102d078d4(auStack_40);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042cf4fc; end: 1042cf543; -[SCAdWebviewLifecycleEvent init] */

void FUN_1042cf4fc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdWebviewLifecycleEventWrapper.swift",0x33,2,0xa1,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042cf544);
  (*pcVar1)();
}



/* Entry: 1042cf544; end: 1042cf577; -[SCAdWebviewLifecycleEvent hash] */

undefined8 FUN_1042cf544(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042cf578();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042cf578; end: 1042cfdc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cf578(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_11306bcc8));
  if (((undefined8 *)(unaff_x20 + _DAT_11306bcd0))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bcd0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bcd8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306bcd8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306bce0))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bce0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bce8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306bce8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306bcf0))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bcf0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bcf8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306bcf8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306bd00))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bd00);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bd08) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306bd08);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306bd10))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bd10);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bd18) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306bd18);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306bd20))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bd20);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bd28) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306bd28);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306bd30))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bd30);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bd38) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306bd38);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306bd40))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bd40);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bd48) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306bd48);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306bd50))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bd50);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bd58) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306bd58);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306bd60))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bd60);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bd68) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306bd68);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306bd70))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bd70);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bd78) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306bd78);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306bd80))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bd80);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_11306bd88))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bd88);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bd90) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306bd90);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306bd98))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bd98);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bda0) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306bda0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11306bda8))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(ulong *)(unaff_x20 + _DAT_11306bda8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306bdb0))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bdb0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bdb8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306bdb8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042d0588; end: 1042d0607; -[SCAdWebviewLifecycleEvent isEqual:] */

uint FUN_1042d0588(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1042cfdc4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042d0608; end: 1042d060b; -[SCAdWebviewLifecycleEvent copyWithZone:] */

void FUN_1042d0608(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042d060c; end: 1042d0617; +[SCAdWebviewLifecycleEvent viewWithAdIdentifier:snapIndex:] */

void FUN_1042d060c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  FUN_1042d1398();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042d0618; end: 1042d0627; +[SCAdWebviewLifecycleEvent pageLoadedWithAdIdentifier:snapIndex:] */

void FUN_1042d0618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x1042d1624)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042d0628; end: 1042d0637; +[SCAdWebviewLifecycleEvent clickWithAdIdentifier:snapIndex:] */

void FUN_1042d0628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x1042d18b0)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042d0638; end: 1042d0643; +[SCAdWebviewLifecycleEvent attachmentPresentedWithAdIdentifier:snapIndex:] */

void FUN_1042d0638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x1042d1b40)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042d0644; end: 1042d064f; +[SCAdWebviewLifecycleEvent navigationStartWithAdIdentifier:snapIndex:] */

void FUN_1042d0644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x1042d1dd0)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042d0650; end: 1042d065b; +[SCAdWebviewLifecycleEvent htmlDownloadedWithAdIdentifier:snapIndex:] */

void FUN_1042d0650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x1042d2060)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042d065c; end: 1042d0667; +[SCAdWebviewLifecycleEvent domContentLoadedWithAdIdentifier:snapIndex:] */

void FUN_1042d065c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x1042d22f0)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042d0668; end: 1042d0673; +[SCAdWebviewLifecycleEvent paintWithAdIdentifier:snapIndex:] */

void FUN_1042d0668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x1042d2580)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042d0674; end: 1042d067f; +[SCAdWebviewLifecycleEvent fullyLoadedWithAdIdentifier:snapIndex:] */

void FUN_1042d0674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x1042d2810)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042d0680; end: 1042d068b; +[SCAdWebviewLifecycleEvent navigationFinishWithAdIdentifier:snapIndex:] */

void FUN_1042d0680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x1042d2aa0)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042d068c; end: 1042d06ff; +[SCAdWebviewLifecycleEvent browseWithAdIdentifier:snapIndex:navigationType:] */

void FUN_1042d068c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  FUN_1042d2d30(param_3,param_2,param_4,param_5,uVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042d0700; end: 1042d0703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d0700(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_1042d3794();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11306bcc8) = 0xb;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcd0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcd8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bce0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bce8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcf0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcf8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd08);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd18);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd28);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd30);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd38);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd40);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd48);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd50);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd58);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd60);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd68);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd70);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd78);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd80);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar2 = (long *)(lVar5 + _DAT_11306bd88);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd90);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd98);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bda0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bda8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bdb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 1042d0704; end: 1042d070f; +[SCAdWebviewLifecycleEvent dismissWithAdIdentifier:snapIndex:] */

void FUN_1042d0704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  FUN_1042d2fd8();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042d0710; end: 1042d075f; +[SCAdWebviewLifecycleEvent firstGAWithAdIdentifier:snapIndex:hitTimestampMs:] */

void FUN_1042d0710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  FUN_1042d3268(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 1042d0760; end: 1042d076b; +[SCAdWebviewLifecycleEvent exitAdWithAdIdentifier:snapIndex:] */

void FUN_1042d0760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  FUN_1042d3504();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042d076c; end: 1042d07b7;  */

void FUN_1042d076c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*param_5)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042d07b8; end: 1042d0c87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d07b8(undefined8 param_1,code *param_2,long param_3,code *param_4,undefined8 param_5,
                  code *param_6,undefined8 param_7,code *param_8,undefined8 param_9,code *param_10,
                  undefined4 param_11,undefined4 param_12,code *param_13,undefined4 param_14,
                  undefined4 param_15,code *param_16,undefined4 param_17,undefined4 param_18,
                  code *param_19,undefined4 param_20,undefined4 param_21,code *param_22,
                  undefined4 param_23,undefined4 param_24,code *param_25,undefined8 *param_26,
                  code *param_27,undefined8 *param_28,code *param_29,undefined8 *param_30,
                  code *param_31,undefined4 param_32,undefined4 param_33,code *param_34,
                  undefined8 *param_35)

{
  code *pcVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  puVar3 = (undefined8 *)
           (long)*(int *)(&UNK_100db51d8 + (ulong)*(byte *)(unaff_x20 + _DAT_11306bcc8) * 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(unaff_x20 + _DAT_11306bcc8)) {
  default:
    param_30 = (undefined8 *)(unaff_x20 + _DAT_11306bcd0);
    puVar3 = (undefined8 *)param_30[1];
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c30);
      (*pcVar1)();
    }
    param_26 = (undefined8 *)(unaff_x20 + _DAT_11306bcd8);
    if (*(char *)(param_26 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c60);
      (*pcVar1)();
    }
  case 0x19:
    (*param_2)(*param_30,puVar3,*param_26);
    break;
  case 1:
    param_28 = (undefined8 *)(unaff_x20 + _DAT_11306bce0);
    param_3 = param_28[1];
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c34);
      (*pcVar1)();
    }
    param_35 = (undefined8 *)&DAT_11306b000;
  case 0x14:
    if (*(char *)((undefined8 *)(unaff_x20 + param_35[0x19d]) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c6c);
      (*pcVar1)();
    }
    param_2 = (code *)*param_28;
    pcVar1 = *(code **)(unaff_x20 + param_35[0x19d]);
    param_8 = param_4;
code_r0x0001042d0a94:
    (*param_8)(param_2,param_3,pcVar1);
    break;
  case 2:
    puVar3 = (undefined8 *)(unaff_x20 + _DAT_11306bcf0);
    param_3 = puVar3[1];
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c24);
      (*pcVar1)();
    }
  case 0x15:
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bcf8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c5c);
      (*pcVar1)();
    }
    (*param_6)(*puVar3,param_3,*(undefined8 *)(unaff_x20 + _DAT_11306bcf8));
    break;
  case 3:
    puVar3 = (undefined8 *)&DAT_11306b000;
  case 0xf:
    param_3 = ((undefined8 *)(unaff_x20 + puVar3[0x1a0]))[1];
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c28);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bd08) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c64);
      (*pcVar1)();
    }
    param_2 = *(code **)(unaff_x20 + puVar3[0x1a0]);
    param_4 = *(code **)(unaff_x20 + _DAT_11306bd08);
  case 0x13:
    pcVar1 = param_4;
    goto code_r0x0001042d0a94;
  case 4:
    puVar3 = (undefined8 *)&DAT_11306b000;
  case 0x1a:
    lVar2 = ((undefined8 *)(unaff_x20 + puVar3[0x1a2]))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c18);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bd18) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c50);
      (*pcVar1)();
    }
    (*param_10)(*(undefined8 *)(unaff_x20 + puVar3[0x1a2]),lVar2,
                *(undefined8 *)(unaff_x20 + _DAT_11306bd18));
    break;
  case 5:
    puVar3 = (undefined8 *)&DAT_11306b000;
  case 0x18:
    lVar2 = ((undefined8 *)(unaff_x20 + puVar3[0x1a4]))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c38);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bd28) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c70);
      (*pcVar1)();
    }
    (*param_13)(*(undefined8 *)(unaff_x20 + puVar3[0x1a4]),lVar2,
                *(undefined8 *)(unaff_x20 + _DAT_11306bd28));
    break;
  case 6:
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_11306bd30))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c40);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bd38) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c78);
      (*pcVar1)();
    }
    (*param_16)(*(undefined8 *)(unaff_x20 + _DAT_11306bd30),lVar2,
                *(undefined8 *)(unaff_x20 + _DAT_11306bd38));
    break;
  case 7:
    puVar3 = (undefined8 *)(unaff_x20 + _DAT_11306bd40);
    param_3 = puVar3[1];
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c2c);
      (*pcVar1)();
    }
    param_28 = (undefined8 *)(unaff_x20 + _DAT_11306bd48);
    in_ZR = *(char *)(param_28 + 1) == '\x01';
  case 0x1b:
    if ((bool)in_ZR) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c68);
      (*pcVar1)();
    }
    (*param_19)(*puVar3,param_3,*param_28);
    break;
  case 8:
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_11306bd50))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c48);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bd58) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c80);
      (*pcVar1)();
    }
    (*param_22)(*(undefined8 *)(unaff_x20 + _DAT_11306bd50),lVar2,
                *(undefined8 *)(unaff_x20 + _DAT_11306bd58));
    break;
  case 9:
    puVar3 = (undefined8 *)(unaff_x20 + _DAT_11306bd60);
    param_3 = puVar3[1];
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c20);
      (*pcVar1)();
    }
    param_28 = (undefined8 *)(unaff_x20 + _DAT_11306bd68);
    param_35 = (undefined8 *)(ulong)*(byte *)(param_28 + 1);
  case 0x11:
    if ((int)param_35 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c58);
      (*pcVar1)();
    }
    (*param_25)(*puVar3,param_3,*param_28);
    break;
  case 10:
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_11306bd70))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c44);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bd78) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c7c);
      (*pcVar1)();
    }
    if (((undefined8 *)(unaff_x20 + _DAT_11306bd80))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c88);
      (*pcVar1)();
    }
    (*param_27)(*(undefined8 *)(unaff_x20 + _DAT_11306bd70),lVar2,
                *(undefined8 *)(unaff_x20 + _DAT_11306bd78),
                *(undefined8 *)(unaff_x20 + _DAT_11306bd80));
    break;
  case 0xb:
    puVar3 = (undefined8 *)(unaff_x20 + _DAT_11306bd88);
    param_3 = puVar3[1];
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c14);
      (*pcVar1)();
    }
  case 0x12:
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bd90) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c4c);
      (*pcVar1)();
    }
    (*param_29)(*puVar3,param_3,*(undefined8 *)(unaff_x20 + _DAT_11306bd90));
    break;
  case 0xc:
    param_28 = (undefined8 *)(unaff_x20 + _DAT_11306bd98);
    param_3 = param_28[1];
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c1c);
      (*pcVar1)();
    }
    param_35 = (undefined8 *)(unaff_x20 + _DAT_11306bda0);
  case 0x17:
    if (*(char *)(param_35 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c54);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306bda8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c84);
      (*pcVar1)();
    }
    param_2 = (code *)*param_28;
    param_4 = (code *)*param_35;
    param_1 = *(undefined8 *)(unaff_x20 + _DAT_11306bda8);
  case 0x10:
    (*param_31)(param_1,param_2,param_3,param_4);
    break;
  case 0xd:
    puVar3 = (undefined8 *)(unaff_x20 + _DAT_11306bdb0);
    param_3 = puVar3[1];
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c3c);
      (*pcVar1)();
    }
    param_28 = (undefined8 *)(unaff_x20 + _DAT_11306bdb8);
    param_30 = (undefined8 *)(ulong)*(byte *)(param_28 + 1);
  case 0x16:
    if ((int)param_30 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d0c74);
      (*pcVar1)();
    }
    (*param_34)(*puVar3,param_3,*param_28);
  }
  return;
}



/* Entry: 1042d0c88; end: 1042d0dd3; -[SCAdWebviewLifecycleEvent matchView:pageLoaded:click:attachmentPresented:navigationStart:htmlDownloaded:domContentLoaded:paint:fullyLoaded:navigationFinish:browse:dismiss:firstGA:exitAd:] */

void FUN_1042d0c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
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
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_170 = param_13;
  uStack_190 = param_14;
  uStack_1b0 = param_15;
  uStack_1d0 = param_16;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1042d07b8(FUN_1042d395c,auStack_40,FUN_1042d3a08,auStack_60,0x1042d3a0c,auStack_80,0x1042d3a10
                ,auStack_a0,0x1042d3a14,auStack_c0,0x1042d3a18,auStack_e0,0x1042d3a1c,auStack_100,
                0x1042d3a20,auStack_120,0x1042d3a24,auStack_140,0x1042d3a28,auStack_160,0x1042d3960,
                auStack_180,0x1042d3a2c,auStack_1a0,FUN_1042d3968,auStack_1c0,0x1042d3a30,
                auStack_1e0);
  _objc_release(param_1);
  return;
}



/* Entry: 1042d0dd4; end: 1042d0e47;  */

void FUN_1042d0dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
  (**(code **)(param_6 + 0x10))(param_6,param_1,param_3,param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1042d0e48; end: 1042d0e7b;  */

void FUN_1042d0e48(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1042d0e7c; end: 1042d0fbf; -[SCAdWebviewLifecycleEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d0e7c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bcd0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bce0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bcf0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bd00 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bd10 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bd20 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bd30 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bd40 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bd50 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bd60 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bd70 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bd80 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bd88 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bd98 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306bdb0 + 8))
  ;
  return;
}



/* Entry: 1042d0fc0; end: 1042d1387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d0fc0(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined1 *)(param_2 + _DAT_11306bcc8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 0:
    puVar4 = (undefined8 *)(param_2 + _DAT_11306bcd0);
    lVar3 = puVar4[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d135c);
      (*pcVar2)();
    }
    puVar5 = (undefined8 *)(param_2 + _DAT_11306bcd8);
    if (*(char *)(puVar5 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1034);
      (*pcVar2)();
    }
    break;
  case 1:
    puVar4 = (undefined8 *)(param_2 + _DAT_11306bce0);
    lVar3 = puVar4[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1360);
      (*pcVar2)();
    }
    puVar5 = (undefined8 *)(param_2 + _DAT_11306bce8);
    if (*(char *)(puVar5 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d11e0);
      (*pcVar2)();
    }
    break;
  case 2:
    puVar4 = (undefined8 *)(param_2 + _DAT_11306bcf0);
    lVar3 = puVar4[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1350);
      (*pcVar2)();
    }
    puVar5 = (undefined8 *)(param_2 + _DAT_11306bcf8);
    if (*(char *)(puVar5 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1150);
      (*pcVar2)();
    }
    break;
  case 3:
    puVar4 = (undefined8 *)(param_2 + _DAT_11306bd00);
    lVar3 = puVar4[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1354);
      (*pcVar2)();
    }
    puVar5 = (undefined8 *)(param_2 + _DAT_11306bd08);
    if (*(char *)(puVar5 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1180);
      (*pcVar2)();
    }
    break;
  case 4:
    puVar4 = (undefined8 *)(param_2 + _DAT_11306bd10);
    lVar3 = puVar4[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1344);
      (*pcVar2)();
    }
    puVar5 = (undefined8 *)(param_2 + _DAT_11306bd18);
    if (*(char *)(puVar5 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1094);
      (*pcVar2)();
    }
    break;
  case 5:
    puVar4 = (undefined8 *)(param_2 + _DAT_11306bd20);
    lVar3 = puVar4[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1364);
      (*pcVar2)();
    }
    puVar5 = (undefined8 *)(param_2 + _DAT_11306bd28);
    if (*(char *)(puVar5 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1210);
      (*pcVar2)();
    }
    break;
  case 6:
    puVar4 = (undefined8 *)(param_2 + _DAT_11306bd30);
    lVar3 = puVar4[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d136c);
      (*pcVar2)();
    }
    puVar5 = (undefined8 *)(param_2 + _DAT_11306bd38);
    if (*(char *)(puVar5 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1270);
      (*pcVar2)();
    }
    break;
  case 7:
    puVar4 = (undefined8 *)(param_2 + _DAT_11306bd40);
    lVar3 = puVar4[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1358);
      (*pcVar2)();
    }
    puVar5 = (undefined8 *)(param_2 + _DAT_11306bd48);
    if (*(char *)(puVar5 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d11b0);
      (*pcVar2)();
    }
    break;
  case 8:
    puVar4 = (undefined8 *)(param_2 + _DAT_11306bd50);
    lVar3 = puVar4[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1374);
      (*pcVar2)();
    }
    puVar5 = (undefined8 *)(param_2 + _DAT_11306bd58);
    if (*(char *)(puVar5 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1380);
      (*pcVar2)();
    }
    break;
  case 9:
    puVar4 = (undefined8 *)(param_2 + _DAT_11306bd60);
    lVar3 = puVar4[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d134c);
      (*pcVar2)();
    }
    puVar5 = (undefined8 *)(param_2 + _DAT_11306bd68);
    if (*(char *)(puVar5 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1120);
      (*pcVar2)();
    }
    break;
  case 10:
    lVar6 = ((undefined8 *)(param_2 + _DAT_11306bd70))[1];
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1370);
      (*pcVar2)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_11306bd78) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d137c);
      (*pcVar2)();
    }
    lVar3 = ((undefined8 *)(param_2 + _DAT_11306bd80))[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1388);
      (*pcVar2)();
    }
    uVar8 = *(undefined8 *)(param_2 + _DAT_11306bd70);
    uVar10 = *(undefined8 *)(param_2 + _DAT_11306bd78);
    uVar7 = *(undefined8 *)(param_2 + _DAT_11306bd80);
    _swift_bridgeObjectRetain(lVar6);
    lVar9 = lVar3;
    goto code_r0x0001042d1310;
  case 0xb:
    puVar4 = (undefined8 *)(param_2 + _DAT_11306bd88);
    lVar3 = puVar4[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1340);
      (*pcVar2)();
    }
    puVar5 = (undefined8 *)(param_2 + _DAT_11306bd90);
    if (*(char *)(puVar5 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1064);
      (*pcVar2)();
    }
    break;
  case 0xc:
    lVar3 = ((undefined8 *)(param_2 + _DAT_11306bd98))[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1348);
      (*pcVar2)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_11306bda0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1378);
      (*pcVar2)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_11306bda8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1384);
      (*pcVar2)();
    }
    uVar8 = *(undefined8 *)(param_2 + _DAT_11306bd98);
    uVar10 = *(undefined8 *)(param_2 + _DAT_11306bda0);
    uVar7 = *(undefined8 *)(param_2 + _DAT_11306bda8);
    lVar6 = lVar3;
    lVar9 = 0;
    goto code_r0x0001042d1310;
  case 0xd:
    puVar4 = (undefined8 *)(param_2 + _DAT_11306bdb0);
    lVar3 = puVar4[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1368);
      (*pcVar2)();
    }
    puVar5 = (undefined8 *)(param_2 + _DAT_11306bdb8);
    if (*(char *)(puVar5 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1042d1240);
      (*pcVar2)();
    }
  }
  uVar7 = 0;
  uVar8 = *puVar4;
  uVar10 = *puVar5;
  lVar6 = lVar3;
  lVar9 = 0;
code_r0x0001042d1310:
  _swift_bridgeObjectRetain(lVar3);
  *param_1 = uVar8;
  param_1[1] = lVar6;
  param_1[2] = uVar10;
  param_1[3] = uVar7;
  param_1[4] = lVar9;
  *(undefined1 *)(param_1 + 5) = uVar1;
  return;
}



/* Entry: 1042d1388; end: 1042d1397;  */

ulong FUN_1042d1388(ulong param_1)

{
  if (0xd < param_1) {
    param_1 = 0xe;
  }
  return param_1;
}



/* Entry: 1042d1398; end: 1042d2d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d1398(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_1042d3794();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11306bcc8) = 0;
  plVar1 = (long *)(lVar5 + _DAT_11306bcd0);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bcd8);
  *puVar2 = param_3;
  *(undefined1 *)(puVar2 + 1) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bce0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bce8);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bcf0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bcf8);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd00);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd08);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd18);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd20);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd28);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd30);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd38);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd40);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd48);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd50);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd58);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd68);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd70);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd78);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd80);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd88);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd90);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bd98);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bda0);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bda8);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bdb0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306bdb8);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 1042d2d30; end: 1042d2fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d2d30(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  FUN_1042d3794();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11306bcc8) = 10;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcd0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcd8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bce0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bce8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcf0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcf8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd08);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd18);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd28);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd30);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd38);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd40);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd48);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd50);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd58);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd60);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd68);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar2 = (long *)(lVar5 + _DAT_11306bd70);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd78);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd80);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd88);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd98);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bda0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bda8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bdb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_5);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 1042d2fd8; end: 1042d3267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d2fd8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_1042d3794();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11306bcc8) = 0xb;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcd0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcd8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bce0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bce8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcf0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcf8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd08);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd18);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd28);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd30);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd38);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd40);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd48);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd50);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd58);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd60);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd68);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd70);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd78);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd80);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar2 = (long *)(lVar5 + _DAT_11306bd88);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd90);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd98);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bda0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bda8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bdb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 1042d3268; end: 1042d3503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d3268(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_2;
  FUN_1042d3794();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11306bcc8) = 0xc;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcd0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcd8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bce0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bce8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcf0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcf8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd08);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd18);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd28);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd30);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd38);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd40);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd48);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd50);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd58);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd60);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd68);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd70);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd78);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd80);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd88);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar2 = (long *)(lVar5 + _DAT_11306bd98);
  *plVar2 = param_2;
  plVar2[1] = param_3;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bda0);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bda8);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bdb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _swift_bridgeObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 1042d3504; end: 1042d3793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d3504(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_1042d3794();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11306bcc8) = 0xd;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcd0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcd8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bce0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bce8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcf0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bcf8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd08);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd18);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd28);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd30);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd38);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd40);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd48);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd50);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd58);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd60);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd68);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd70);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd78);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd80);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd88);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bd98);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bda0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bda8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar2 = (long *)(lVar5 + _DAT_11306bdb0);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306bdb8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 1042d3794; end: 1042d37b3;  */

void FUN_1042d3794(void)

{
  _objc_opt_self(&PTR_PTR_112995d68);
  return;
}



/* Entry: 1042d37b4; end: 1042d391b;  */

int FUN_1042d37b4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf2 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xd) {
      iVar2 = 4;
    }
    if (param_2 + 0xd >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1042d3830;
        goto LAB_1042d3814;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1042d3814:
      return ((uint)*param_1 | uVar1 << 8) - 0xd;
    }
  }
LAB_1042d3830:
  iVar2 = *param_1 - 0xe;
  if (*param_1 < 0xe) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1042d391c; end: 1042d395b;  */

void FUN_1042d391c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306bde8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce61b0;
  _swift_getWitnessTable(&UNK_10dce61b0,&UNK_1107550f8);
  puRam000000011306bde8 = puVar1;
  return;
}



/* Entry: 1042d395c; end: 1042d3967;  */

void FUN_1042d395c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042d3968; end: 1042d39bf;  */

void FUN_1042d3968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(param_1,lVar1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1042d39c0; end: 1042d3a07;  */

void FUN_1042d39c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042d3a08; end: 1042d3a33;  */

void FUN_1042d3a08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042d3a34; end: 1042d3acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d3a34(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  if ((param_2 & 0xff) == 1) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bdf0) = puVar1;
  *(byte *)(unaff_x20 + _DAT_11306bdf8) = (byte)(param_2 >> 8) & 1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042d3ad0; end: 1042d3adf; -[SCStoryAdHintInteractionInfo expandButtonSnapIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d3ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bdf0));
  return;
}



/* Entry: 1042d3ae0; end: 1042d3aef; -[SCStoryAdHintInteractionInfo expandButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042d3ae0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306bdf8);
}



/* Entry: 1042d3af0; end: 1042d3b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d3af0(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306bdf0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11306bdf8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042d3b54; end: 1042d3bc3; -[SCStoryAdHintInteractionInfo initWithExpandButtonSnapIndex:expandButtonTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d3b54(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306bdf0) = param_3;
  *(undefined1 *)(param_1 + _DAT_11306bdf8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1042d3bc4; end: 1042d3bf7; -[SCStoryAdHintInteractionInfo hash] */

undefined8 FUN_1042d3bc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042d3bf8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042d3bf8; end: 1042d3c8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d3bf8(void)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_11306bdf0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306bdf8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042d3c90; end: 1042d3daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042d3c90(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    _swift_dynamicCast(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_11306bdf0);
      lVar7 = *(long *)(lStack_68 + _DAT_11306bdf0);
      uVar5 = (uint)(lVar6 == 0 && lVar7 == 0);
      if (lVar6 != 0 && lVar7 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar7);
        _objc_retain(lVar6);
        lVar4 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar5 = (uint)lVar4;
        _objc_release(lVar6);
        _objc_release(lVar7);
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_11306bdf8);
      bVar2 = *(byte *)(lStack_68 + _DAT_11306bdf8);
      _objc_release(lStack_68);
      uVar5 = uVar5 & ((bVar1 ^ bVar2) ^ 1);
      goto LAB_1042d3d94;
    }
  }
  uVar5 = 0;
LAB_1042d3d94:
  return uVar5 & 1;
}



/* Entry: 1042d3db0; end: 1042d3e2f; -[SCStoryAdHintInteractionInfo isEqual:] */

uint FUN_1042d3db0(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1042d3c90(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042d3e30; end: 1042d3e33; -[SCStoryAdHintInteractionInfo copyWithZone:] */

void FUN_1042d3e30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042d3e34; end: 1042d3e5f; -[SCStoryAdHintInteractionInfo description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d3e34(long param_1)

{
  func_0x00010c067fc0(*(undefined8 *)(param_1 + _DAT_11306bdf0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042d3e60; end: 1042d3edb; -[SCStoryAdHintInteractionInfo init] */

void FUN_1042d3e60(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/StoryAdHintInteractionInfoWrapper.swift",0x36,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d3ea8);
  (*pcVar1)();
}



/* Entry: 1042d3edc; end: 1042d3eeb; -[SCStoryAdHintInteractionInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d3edc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306bdf0));
  return;
}



/* Entry: 1042d3eec; end: 1042d3f0b;  */

void FUN_1042d3eec(void)

{
  _objc_opt_self(&PTR_PTR_112995f18);
  return;
}



/* Entry: 1042d3f0c; end: 1042d3fe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1042d3f0c(undefined8 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_15c0 [8];
  undefined1 auStack_15b0 [2744];
  undefined1 auStack_af8 [2744];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar3 = auStack_15c0;
  _objc_allocWithZone();
  _memcpy(auStack_af8,param_1,0xab2);
  iVar1 = (int)auStack_af8;
  func_0x00010178e478();
  if (iVar1 == 1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _memcpy(auStack_15b0,auStack_af8,0xab2);
    FUN_1042a6cd4(0);
    _objc_allocWithZone();
    puVar2 = auStack_15b0;
    FUN_1042a5b4c();
  }
  *(undefined1 **)(unaff_x20 + _DAT_11306be28) = puVar2;
  _objc_msgSendSuper2(auStack_15c0,PTR_s_init_1125d9248);
  func_0x0001018a331c(param_1);
  return puVar3;
}


