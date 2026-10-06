/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c97bf8; end: 100c97c47;  */

void FUN_100c97bf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97c48; end: 100c97c73;  */

void FUN_100c97c48(void)

{
  FUN_100e21ec4(0x112d3a128,0x100e21e2c,&UNK_10d9038d4);
  return;
}



/* Entry: 100c97c74; end: 100c97cb3;  */

void FUN_100c97c74(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100c97cb4; end: 100c97cb7;  */

void FUN_100c97cb4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c97cb8; end: 100c97cef;  */

void FUN_100c97cb8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c97cf0; end: 100c97d13;  */

void FUN_100c97cf0(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97d14; end: 100c97d17;  */

void FUN_100c97d14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100e24fb4(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined1 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97d18; end: 100c97d93;  */

void FUN_100c97d18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97d94; end: 100c97db7;  */

void FUN_100c97d94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97db8; end: 100c97e07;  */

void FUN_100c97db8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97e08; end: 100c97e33;  */

long FUN_100c97e08(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100c97e34; end: 100c97ec7;  */

void FUN_100c97e34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d3a218 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d903cbc;
  func_0x000107c61520(&UNK_10d903cbc,&UNK_1103572b8);
  puRam0000000112d3a218 = puVar1;
  return;
}



/* Entry: 100c97ec8; end: 100c97ef3;  */

long FUN_100c97ec8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100c97ef4; end: 100c97efb;  */

/* WARNING: Possible PIC construction at 0x000100e284ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e284b0) */
/* WARNING: Removing unreachable block (ram,0x000100e27330) */
/* WARNING: Removing unreachable block (ram,0x000100e2733c) */
/* WARNING: Removing unreachable block (ram,0x000100e27338) */

undefined8 FUN_100c97ef4(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  bVar1 = *(byte *)(param_1 + 6) >> 5;
  if (bVar1 < 2) {
    if ((bVar1 != 0) && (bVar1 != 1)) {
      return *param_1;
    }
  }
  else if ((bVar1 != 2) && (bVar1 != 3)) {
    return *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (uVar2,uVar2,param_1[2],param_1[3],param_1[4],param_1[5]);
  return uVar2;
}



/* Entry: 100c97efc; end: 100c97feb;  */

void FUN_100c97efc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97fec; end: 100c97ff7;  */

void FUN_100c97fec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97ff8; end: 100c9801b;  */

void FUN_100c97ff8(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c9801c; end: 100c9801f;  */

void FUN_100c9801c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98020; end: 100c98067;  */

void FUN_100c98020(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98068; end: 100c9809b;  */

void FUN_100c98068(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c9809c; end: 100c980bf;  */

void FUN_100c9809c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c980c0; end: 100c980cf;  */

void FUN_100c980c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c980d0; end: 100c9811f;  */

void FUN_100c980d0(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98120; end: 100c98143;  */

void FUN_100c98120(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98144; end: 100c981c7;  */

void FUN_100c98144(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c981c8; end: 100c981fb;  */

bool FUN_100c981c8(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100c981fc; end: 100c98227;  */

long FUN_100c981fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100c98228; end: 100c98243;  */

void FUN_100c98228(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  if (2 < *(long *)(unaff_x20 + 0x28) - 1U) {
    func_0x000107c6142c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98244; end: 100c982c3;  */

void FUN_100c98244(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c982c4; end: 100c982d3;  */

void FUN_100c982c4(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100c982d4; end: 100c982ff;  */

void FUN_100c982d4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98300; end: 100c98313;  */

void FUN_100c98300(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98314; end: 100c98337;  */

void FUN_100c98314(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98338; end: 100c9838f;  */

void FUN_100c98338(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98390; end: 100c98403;  */

void FUN_100c98390(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98404; end: 100c98423;  */

undefined8 * FUN_100c98404(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_100e38cc4(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100c98424; end: 100c98447;  */

void FUN_100c98424(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98448; end: 100c9845f;  */

undefined8 * FUN_100c98448(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 100c98460; end: 100c984ff;  */

void FUN_100c98460(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98500; end: 100c98513;  */

void FUN_100c98500(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98514; end: 100c98537;  */

void FUN_100c98514(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98538; end: 100c9859f;  */

/* WARNING: Possible PIC construction at 0x000100c98580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c98584) */

void FUN_100c98538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_100e43c70(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c985a0; end: 100c985ab;  */

void FUN_100c985a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_makeContainerViewControllerWithP_11260b628;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3,param_4);
  func_0x000107c61180();
  func_0x000107c5677c();
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c985ac; end: 100c98663;  */

void FUN_100c985ac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98664; end: 100c9866f;  */

void FUN_100c98664(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98670; end: 100c986bf;  */

void FUN_100c98670(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c986c0; end: 100c986d3;  */

bool FUN_100c986c0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100c986d4; end: 100c986eb;  */

void FUN_100c986d4(void)

{
  undefined1 *unaff_x20;
  
  func_0x000100e4b26c(*unaff_x20);
  return;
}



/* Entry: 100c986ec; end: 100c986f3;  */

void FUN_100c986ec(void)

{
  undefined1 *unaff_x20;
  
  func_0x000107c6069c(*unaff_x20);
  return;
}



/* Entry: 100c986f4; end: 100c98713;  */

void FUN_100c986f4(undefined8 param_1,undefined1 param_2)

{
  func_0x000107c6069c(param_2);
  return;
}



/* Entry: 100c98714; end: 100c9872b;  */

void FUN_100c98714(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000100e4b4a8(param_1,*unaff_x20);
  return;
}



/* Entry: 100c9872c; end: 100c987c7;  */

void FUN_100c9872c(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_100e4c6ac();
  *param_1 = uVar1;
  return;
}



/* Entry: 100c987c8; end: 100c987f3;  */

void FUN_100c987c8(void)

{
  func_0x000100e7a474();
  func_0x000100e7ab48();
  func_0x000100e7a388();
  return;
}



/* Entry: 100c987f4; end: 100c9881f;  */

void FUN_100c987f4(void)

{
  func_0x000100e7a474();
  func_0x000100e7bb70();
  func_0x000100e7a388();
  return;
}



/* Entry: 100c98820; end: 100c98823;  */

void FUN_100c98820(undefined8 *param_1)

{
  long extraout_x8;
  ulong unaff_x19;
  undefined8 uVar1;
  code *pcVar2;
  
  func_0x000103c31f74();
  uVar1 = *param_1;
  func_0x000100e7c23c("SCComposerCOFStoring");
  pcVar2 = *(code **)(extraout_x8 + 0xa8);
  func_0x000100e7b03c();
  (*pcVar2)(0xd000000000000014,unaff_x19 | 0x8000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 100c98824; end: 100c9884f;  */

void FUN_100c98824(void)

{
  func_0x000100e7a474();
  func_0x000100e7a874();
  func_0x000100e7a388();
  return;
}



/* Entry: 100c98850; end: 100c9887b;  */

void FUN_100c98850(void)

{
  func_0x000100e7a474();
  func_0x000100e7ad44();
  func_0x000100e7a388();
  return;
}



/* Entry: 100c9887c; end: 100c988a7;  */

void FUN_100c9887c(void)

{
  func_0x000100e7a474();
  func_0x000100e7ab48();
  func_0x000100e7a388();
  return;
}



/* Entry: 100c988a8; end: 100c988ab;  */

void FUN_100c988a8(undefined8 *param_1)

{
  long extraout_x8;
  undefined8 uVar1;
  code *pcVar2;
  
  func_0x000103c31f74();
  uVar1 = *param_1;
  func_0x000100e7c23c("SCValdiINavigator");
  pcVar2 = *(code **)(extraout_x8 + 0xa8);
  func_0x000100e7b03c();
  func_0x000100e7b5f0();
  (*pcVar2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 100c988ac; end: 100c988cf;  */

void FUN_100c988ac(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e67458();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100c988d0; end: 100c988fb;  */

void FUN_100c988d0(void)

{
  func_0x000100e7a474();
  func_0x000100e7a874();
  func_0x000100e7a388();
  return;
}



/* Entry: 100c988fc; end: 100c98927;  */

void FUN_100c988fc(void)

{
  func_0x000100e7a474();
  func_0x000100e7b244();
  func_0x000100e7a388();
  return;
}



/* Entry: 100c98928; end: 100c98963;  */

void FUN_100c98928(void)

{
  func_0x000100e7a474();
  func_0x0001000285a8(0x112d42df0,&UNK_10d9093f8);
  func_0x000100e7a388();
  return;
}



/* Entry: 100c98964; end: 100c9898f;  */

void FUN_100c98964(void)

{
  func_0x000100e7a474();
  func_0x000100e7ad44();
  func_0x000100e7a388();
  return;
}



/* Entry: 100c98990; end: 100c98997;  */

void FUN_100c98990(undefined8 *param_1)

{
  long extraout_x8;
  undefined8 uVar1;
  code *pcVar2;
  
  func_0x000103c31f74();
  uVar1 = *param_1;
  func_0x000100e7c23c("SCValdiViewFactory");
  pcVar2 = *(code **)(extraout_x8 + 0xb0);
  func_0x000100e7b03c();
  func_0x000100e7b6bc();
  (*pcVar2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 100c98998; end: 100c989c3;  */

void FUN_100c98998(void)

{
  func_0x000100e7a474();
  func_0x000100e7baf0();
  func_0x000100e7a388();
  return;
}



/* Entry: 100c989c4; end: 100c989db;  */

void FUN_100c989c4(void)

{
  func_0x000100e7b6dc();
  func_0x000100e7b090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c989dc; end: 100c98a2b;  */

void FUN_100c989dc(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 100c98a2c; end: 100c98a43;  */

void FUN_100c98a2c(void)

{
  func_0x000100e7bb54();
  func_0x000100e7ad8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98a44; end: 100c98c13;  */

void FUN_100c98a44(void)

{
  func_0x000100e7b6dc();
  func_0x000100e7b090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98c14; end: 100c98c33;  */

void FUN_100c98c14(undefined8 param_1,undefined1 param_2)

{
  func_0x000107c6069c(param_2);
  return;
}



/* Entry: 100c98c34; end: 100c98c47;  */

bool FUN_100c98c34(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100c98c48; end: 100c98c5f;  */

void FUN_100c98c48(void)

{
  undefined1 *unaff_x20;
  
  FUN_100e7dd40(*unaff_x20);
  return;
}



/* Entry: 100c98c60; end: 100c98c67;  */

void FUN_100c98c60(void)

{
  undefined1 *unaff_x20;
  
  func_0x000107c6069c(*unaff_x20);
  return;
}



/* Entry: 100c98c68; end: 100c98c7f;  */

void FUN_100c98c68(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000100e7ddd8(param_1,*unaff_x20);
  return;
}



/* Entry: 100c98c80; end: 100c98ccb;  */

void FUN_100c98c80(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_100e7e00c();
  *param_1 = uVar1;
  return;
}



/* Entry: 100c98ccc; end: 100c98cef;  */

void FUN_100c98ccc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98cf0; end: 100c98d07;  */

int FUN_100c98cf0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = -1;
    goto LAB_100e81224;
  }
  if (param_2 < 0xfd) {
LAB_100e81218:
    iVar2 = *param_1 - 4;
    if (*param_1 < 4) {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
joined_r0x000100e811fc:
      if (uVar1 == 0) goto LAB_100e81218;
    }
    else {
      if (iVar2 != 2) {
        uVar1 = (uint)param_1[1];
        goto joined_r0x000100e811fc;
      }
      uVar1 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) == 0) goto LAB_100e81218;
    }
    iVar2 = ((uint)*param_1 | uVar1 << 8) - 4;
  }
LAB_100e81224:
  return iVar2 + 1;
}



/* Entry: 100c98d08; end: 100c98d4f;  */

void FUN_100c98d08(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98d50; end: 100c98d7b;  */

long FUN_100c98d50(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100c98d7c; end: 100c98d7f;  */

void FUN_100c98d7c(void)

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



/* Entry: 100c98d80; end: 100c98da7;  */

void FUN_100c98d80(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100c98da8; end: 100c98dc3;  */

void FUN_100c98da8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100c98dc4; end: 100c98e07;  */

undefined8 * FUN_100c98dc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000100e84c64(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 100c98e08; end: 100c98e0b;  */

void FUN_100c98e08(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98e0c; end: 100c98e37;  */

void FUN_100c98e0c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98e38; end: 100c98e4f;  */

undefined1 FUN_100c98e38(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 100c98e50; end: 100c98ecb;  */

void FUN_100c98e50(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98ecc; end: 100c98eeb;  */

void FUN_100c98ecc(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 100c98eec; end: 100c98f0f;  */

void FUN_100c98eec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98f10; end: 100c98f13;  */

void FUN_100c98f10(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98f14; end: 100c98f3f;  */

void FUN_100c98f14(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98f40; end: 100c98f5b;  */

void FUN_100c98f40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98f5c; end: 100c98fb3;  */

void FUN_100c98f5c(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c98fb4; end: 100c98fcb;  */

bool FUN_100c98fb4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100c98fcc; end: 100c98ff3;  */

void FUN_100c98fcc(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100c98ff4; end: 100c9906f;  */

void FUN_100c98ff4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100c99070; end: 100c99097;  */

void FUN_100c99070(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100c99098; end: 100c990af;  */

void FUN_100c99098(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100c990b0; end: 100c99107;  */

uint FUN_100c990b0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  FUN_100e995d0(&uStack_90,&uStack_50);
  return uVar1 & 1;
}


