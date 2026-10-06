/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a91634; end: 104a9163f;  */

void FUN_104a91634(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x0001008dbf84();
  puVar1 = (undefined8 *)(lVar2 + 0x50);
  func_0x0001004bd910(puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x0001008dc014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)();
  return;
}



/* Entry: 104a91640; end: 104a91687;  */

void FUN_104a91640(long param_1)

{
  undefined1 uStack_21;
  
  func_0x000100612044(param_1 + 0x28,"health_cancel");
  func_0x000104a8dc38(*(undefined8 *)(param_1 + 0xd8),&uStack_21,"cancel");
  return;
}



/* Entry: 104a91688; end: 104a9172f;  */

void FUN_104a91688(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)0x30;
  func_0x000100460200();
  *puVar1 = FUN_104a91640;
  puVar1[1] = param_1;
  puVar2 = puVar1 + 2;
  puVar1[3] = &UNK_1004be1e0;
  puVar1[4] = puVar1;
  puVar1[5] = 0;
  FUN_104adfedc();
  *(byte *)(puVar2 + 2) = *(byte *)(puVar2 + 2) | 0x40;
  uVar3 = *(ulong *)(puVar2[1] + 0x98);
  if (uVar3 != 4) {
    *(undefined8 *)(puVar2[1] + 0x98) = 4;
    if ((uVar3 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  lVar4 = *(long *)(param_1 + 0xd8);
  func_0x0001008dbf84();
  puVar2 = (undefined8 *)(lVar4 + 0x50);
  func_0x0001004bd910(puVar2,0);
                    /* WARNING: Could not recover jumptable at 0x0001008dc014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar2)();
  return;
}



/* Entry: 104a91730; end: 104a91937;  */

void FUN_104a91730(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  long lVar4;
  long *plVar5;
  undefined8 ***pppuStack_60;
  ulong uStack_58;
  byte bStack_49;
  ulong uStack_48;
  
  if (*(char *)(param_1 + 0xaf0) == '\0') {
    func_0x000104a8dc38(*(undefined8 *)(param_1 + 0xd8),&pppuStack_60,"recv_message_ready");
  }
  else {
    lVar1 = param_1 + 0x9c8;
    lVar2 = *(long *)(param_1 + 8) + 0x38;
    func_0x000100460448(lVar2);
    lVar4 = *(long *)(param_1 + 8);
    plVar5 = *(long **)(lVar4 + 0x78);
    if (plVar5 != (long *)0x0) {
      FUN_104ad7b2c(&pppuStack_60,lVar1);
      ppppuVar3 = (undefined8 ****)pppuStack_60;
      if (-1 < (char)bStack_49) {
        uStack_58 = (ulong)bStack_49;
        ppppuVar3 = &pppuStack_60;
      }
      (**(code **)(*plVar5 + 0x30))(&uStack_48,plVar5,lVar4,ppppuVar3,uStack_58);
      if ((char)bStack_49 < '\0') {
        __ZdlPv(pppuStack_60);
      }
      if (uStack_48 != 0) {
        if (*(long *)(*(long *)(param_1 + 8) + 0x20) != 0) {
          func_0x000104a8472c(&pppuStack_60,&uStack_48,1);
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                              ,0x17d,1,
                              "%s %p: SubchannelStreamClient CallState %p: failed to parse response message: %s"
                             );
          if ((char)bStack_49 < '\0') {
            __ZdlPv(pppuStack_60);
          }
        }
        FUN_104a911d4(param_1);
        if ((uStack_48 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
    }
    func_0x000100466b80(lVar2);
    *(undefined1 *)(param_1 + 0xb18) = 1;
    func_0x000100614b50(lVar1);
    *(long *)(param_1 + 0x1d0) = param_1 + 0xe0;
    *(long *)(param_1 + 0x140) = lVar1;
    *(undefined8 *)(param_1 + 0xb00) = 0x104a91418;
    *(long *)(param_1 + 0xb08) = param_1;
    *(undefined8 *)(param_1 + 0xb10) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(long *)(param_1 + 0x158) = param_1 + 0xaf8;
    *(byte *)(param_1 + 0x1d8) = *(byte *)(param_1 + 0x1d8) | 0x10;
    FUN_104a91448(param_1,param_1 + 0x1c8);
  }
  return;
}



/* Entry: 104a91938; end: 104a9198f;  */

long FUN_104a91938(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 104a91990; end: 104a919b7;  */

void FUN_104a91990(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000100837538();
  }
  return;
}



/* Entry: 104a919b8; end: 104a919bb;  */

long FUN_104a919b8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001005a5960(*(long *)(param_1 + 0x18) + 8);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 104a919bc; end: 104a91a03;  */

/* WARNING: Possible PIC construction at 0x00010061202c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100612030) */

void FUN_104a919bc(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar3;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar3 + 0x18);
  if (lVar2 != 0) {
    func_0x0001005a5960(lVar2 + 8);
    *(undefined8 *)(lVar3 + 0x18) = 0;
  }
  while( true ) {
    lVar2 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    *(long *)((long)register0x00000008 + -0x30) = lVar2;
    *(long *)((long)register0x00000008 + -0x28) = param_2;
    if (param_2 == 0x7fffffffffffffff) {
      return;
    }
    lVar3 = *(long *)(lVar2 + 0x10);
    if (*(long *)(lVar3 + 0x18) == 0) break;
    func_0x000107c2c22c();
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x48) = lVar3;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &UNK_100612014;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x40);
    param_2 = *(long *)(lVar2 + 0x10);
    unaff_x30 = &UNK_100612030;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_1 = *(long *)(lVar2 + 8);
    unaff_x19 = lVar2;
  }
  uVar1 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000100611f20(uVar1,(undefined1 *)((long)register0x00000008 + -0x30),
                      (undefined1 *)((long)register0x00000008 + -0x28));
  *(undefined8 *)(lVar3 + 0x18) = uVar1;
  return;
}



/* Entry: 104a91a04; end: 104a91a07;  */

void FUN_104a91a04(void)

{
  return;
}



/* Entry: 104a91a08; end: 104a91b53;  */

void FUN_104a91a08(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_2 + 0x10);
  if ((bVar1 >> 6 & 1) == 0) {
    if ((bVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(param_2 + 8);
      *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar2 + 0x48);
      uVar3 = *(undefined8 *)(lVar2 + 0x38);
      *(code **)(lVar4 + 0x50) = FUN_104a91ba8;
      *(long *)(lVar4 + 0x58) = param_1;
      *(undefined8 *)(lVar4 + 0x60) = 0;
      *(undefined8 *)(lVar4 + 0x68) = uVar3;
      *(long *)(*(long *)(param_2 + 8) + 0x48) = lVar4 + 0x48;
      bVar1 = *(byte *)(param_2 + 0x10);
    }
    if ((bVar1 >> 5 & 1) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x90);
      *(undefined **)(lVar4 + 0x28) = &UNK_100830ae4;
      *(long *)(lVar4 + 0x30) = lVar4;
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(undefined8 *)(lVar4 + 0x40) = uVar3;
      *(long *)(*(long *)(param_2 + 8) + 0x90) = lVar4 + 0x20;
    }
  }
  else if (*(long *)(lVar4 + 0x18) != 0) {
    func_0x0001005a5960(*(long *)(lVar4 + 0x18) + 8);
    *(undefined8 *)(lVar4 + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000100614e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))((undefined8 *)(param_1 + 0x18),param_2);
  return;
}



/* Entry: 104a91b54; end: 104a91ba7;  */

void FUN_104a91b54(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  puVar6 = *(undefined8 **)(*param_1 + 0x10);
  func_0x000100612044(puVar6[1],"got on_complete from cancel_stream batch");
  plVar4 = (long *)*puVar6;
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    plVar3 = plVar4;
    func_0x000100836ca0();
    if ((((ulong)plVar3 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*plVar3 + 0x28) >> 1 & 1) != 0)) {
      uStack_28 = 0;
      func_0x0001004c1168(plVar4 + 1,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      func_0x00010084dad0();
      return;
    }
    uStack_38 = 0;
    func_0x0001004bd7e8(&uStack_29,plVar4 + 1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
    return;
  }
  return;
}



/* Entry: 104a91ba8; end: 104a91c3f;  */

void FUN_104a91ba8(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  ulong uStack_30;
  undefined1 uStack_21;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar6 + 0x68);
  if ((*(byte *)(lVar4 + 1) >> 3 & 1) == 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x180);
  }
  func_0x000100611fc0(param_1,uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x70);
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar5 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010082b8d4(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a91c40; end: 104a91c47;  */

void FUN_104a91c40(void)

{
  return;
}



/* Entry: 104a91c48; end: 104a91c7b;  */

void FUN_104a91c48(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1107c3680;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a91c7c; end: 104a91c7f;  */

void FUN_104a91c7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a91c80; end: 104a91cbb;  */

long FUN_104a91c80(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c36e0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a91cbc; end: 104a91cc7;  */

undefined ** FUN_104a91cbc(void)

{
  return &PTR_DAT_1107c36e0;
}



/* Entry: 104a91cc8; end: 104a91e53;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong ***** FUN_104a91cc8(ulong *****param_1,ulong *****param_2,long param_3,undefined8 *param_4)

{
  ulong ***pppuVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  ulong *puVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***pppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  code *pcVar11;
  bool bVar12;
  undefined **ppuVar13;
  ulong ****ppppuVar14;
  ulong *****pppppuVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined8 ****ppppuVar18;
  undefined8 *****pppppuVar19;
  ulong *****pppppuVar20;
  ulong ***pppuVar21;
  undefined8 *extraout_x8;
  undefined8 *****pppppuVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  ulong ****ppppuVar28;
  ulong uVar29;
  undefined8 ****ppppuStack_340;
  undefined8 ****ppppuStack_338;
  undefined8 ****ppppuStack_330;
  long *plStack_320;
  ulong **ppuStack_318;
  ulong *puStack_310;
  ulong **ppuStack_308;
  undefined8 ****ppppuStack_300;
  undefined8 ****ppppuStack_2f8;
  undefined8 ****ppppuStack_2f0;
  undefined8 ***pppuStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 ***pppuStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 ***pppuStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  ulong ***pppuStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 uStack_279;
  ulong ****ppppuStack_278;
  ulong uStack_270;
  byte bStack_261;
  ulong **ppuStack_260;
  undefined8 ***pppuStack_258;
  undefined8 ***pppuStack_250;
  undefined8 ***pppuStack_248;
  undefined8 ****ppppuStack_240;
  undefined8 ***pppuStack_238;
  undefined8 ***pppuStack_230;
  undefined8 ***pppuStack_228;
  undefined8 ***pppuStack_220;
  undefined8 ***pppuStack_218;
  undefined8 ***pppuStack_210;
  undefined8 ***pppuStack_208;
  undefined8 ***pppuStack_200;
  undefined4 uStack_1f8;
  undefined8 uStack_1f4;
  int iStack_1ec;
  undefined8 ***pppuStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 ***pppuStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 ***pppuStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  int iStack_1b4;
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  ulong ****ppppuStack_1a0;
  ulong ***pppuStack_198;
  ulong ***pppuStack_190;
  ulong ***pppuStack_188;
  ulong ***pppuStack_180;
  ulong **ppuStack_178;
  ulong ***pppuStack_170;
  ulong ***pppuStack_168;
  ulong ***pppuStack_160;
  ulong ***pppuStack_158;
  ulong ***pppuStack_150;
  undefined1 *puStack_140;
  long lStack_138;
  undefined1 auStack_130 [32];
  undefined8 ****ppppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 ***pppuStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 ***pppuStack_f0;
  long lStack_e0;
  ulong ****appppuStack_58 [4];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = (ulong ****)0x0;
  ppuVar13 = &PTR___tlv_bootstrap_11340d8b8;
  pppppuVar20 = param_2;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)();
  uVar10 = uStack_1ac._4_4_;
  uVar9 = uStack_1f4._4_4_;
  ppppuVar28 = (ulong ****)*ppuVar13;
  do {
    pppuVar21 = *ppppuVar28;
    pppuVar1 = pppuVar21 + 0x42;
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(ppppuVar28,0x10);
    if (bVar12) {
      *ppppuVar28 = pppuVar1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uStack_1f4._4_4_ = uVar9;
  uStack_1ac._4_4_ = uVar10;
  if (ppppuVar28[2] < pppuVar1) {
    pppppuVar20 = (ulong *****)0x210;
    ppppuVar14 = ppppuVar28;
    uVar7 = uStack_1f4;
    uVar8 = uStack_1ac;
    func_0x0001004bbee0();
    uVar8 = uStack_1ac;
    uVar7 = uStack_1f4;
  }
  else {
    ppppuVar14 = (ulong ****)((long)ppppuVar28 + (long)(pppuVar21 + 6));
    uVar7 = uStack_1f4;
    uVar8 = uStack_1ac;
  }
  uStack_1ac = uVar8;
  uStack_1f4 = uVar7;
  uVar10 = uStack_1ac._4_4_;
  uVar9 = uStack_1f4._4_4_;
  *(undefined4 *)ppppuVar14 = 0;
  ppppuVar14[0x3f] = (ulong ***)0x0;
  ppppuVar14[0x40] = (ulong ***)0x0;
  ppppuVar14[0x3e] = (ulong ***)ppppuVar28;
  *param_1 = ppppuVar14;
  pppppuVar15 = param_2;
  uVar7 = uStack_1f4;
  uStack_1f4._4_4_ = uVar9;
  uVar8 = uStack_1ac;
  uStack_1ac._4_4_ = uVar10;
  func_0x00010ae770f8();
  uVar8 = uStack_1ac;
  uVar7 = uStack_1f4;
  *(uint *)ppppuVar14 = *(uint *)ppppuVar14 | 0x400;
  *(int *)(ppppuVar14 + 0x31) = (int)pppppuVar15;
  ppppuVar28 = *param_2;
  uVar9 = uStack_1f4._4_4_;
  uVar10 = uStack_1ac._4_4_;
  if (ppppuVar28 != (ulong ****)0x0) {
    if (((ulong)ppppuVar28 & 1) == 0) {
      puVar16 = &UNK_10e52c0f3;
      bVar12 = ((ulong)ppppuVar28 & 3) != 2;
      if (bVar12) {
        puVar16 = (undefined *)0x0;
      }
      uVar29 = 0x1b;
      if (bVar12) {
        uVar29 = 0;
      }
    }
    else if ((char)*(byte *)((long)ppppuVar28 + 0x1e) < '\0') {
      puVar16 = *(undefined **)((long)ppppuVar28 + 7);
      uVar29 = *(ulong *)((long)ppppuVar28 + 0xf);
    }
    else {
      puVar16 = (undefined *)((long)ppppuVar28 + 7);
      uVar29 = (ulong)*(byte *)((long)ppppuVar28 + 0x1e);
    }
    ppppuVar28 = *param_1;
    func_0x0001004b6808(appppuStack_58,puVar16,uVar29);
    uStack_1ac = uVar8;
    uStack_1f4 = uVar7;
    uVar10 = uStack_1ac._4_4_;
    uVar9 = uStack_1f4._4_4_;
    pppppuVar20 = appppuStack_58;
    uVar7 = uStack_1f4;
    uStack_1f4._4_4_ = uVar9;
    uVar8 = uStack_1ac;
    uStack_1ac._4_4_ = uVar10;
    func_0x00010084bde4(ppppuVar28);
    uVar10 = uStack_1ac._4_4_;
    uVar9 = uStack_1f4._4_4_;
    pppppuVar15 = (ulong *****)appppuStack_58[0];
    uVar7 = uStack_1f4;
    uVar8 = uStack_1ac;
    if ((ulong *****)0x1 < appppuStack_58[0]) {
      do {
        ppppuVar28 = (ulong ****)*appppuStack_58[0];
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(appppuStack_58[0],0x10);
        if (bVar12) {
          *appppuStack_58[0] = (ulong ***)((long)ppppuVar28 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((ulong ****)((long)ppppuVar28 + -1) == (ulong ****)0x0) {
        uStack_1f4._4_4_ = uVar9;
        uStack_1ac._4_4_ = uVar10;
        (*(code *)appppuStack_58[0][1])();
        uVar10 = uStack_1ac._4_4_;
        uVar9 = uStack_1f4._4_4_;
        pppppuVar15 = (ulong *****)appppuStack_58[0];
        uVar7 = uStack_1f4;
        uVar8 = uStack_1ac;
      }
    }
  }
  uStack_1ac._4_4_ = uVar10;
  uStack_1f4._4_4_ = uVar9;
  uStack_1ac = uVar8;
  uStack_1f4 = uVar7;
  uVar10 = uStack_1ac._4_4_;
  uVar9 = uStack_1f4._4_4_;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  uVar7 = uStack_1f4;
  uStack_1f4._4_4_ = uVar9;
  uVar8 = uStack_1ac;
  uStack_1ac._4_4_ = uVar10;
  ___stack_chk_fail();
  uVar9 = uStack_1ac._4_4_;
  uVar7 = uStack_1f4;
  uVar8 = uStack_1ac;
  if ((int)pppppuVar20 != 0) {
    uStack_1ac._4_4_ = uVar9;
    FUN_104bd46a0();
    uStack_1f4 = uVar7;
    uVar8 = uStack_1ac;
    uVar7 = uStack_1f4;
    func_0x0001004b6d90(appppuStack_58);
    uStack_1ac = uVar8;
    uStack_1f4 = uVar7;
    uVar8 = uStack_1ac;
    uVar7 = uStack_1f4;
    uVar9 = uStack_1ac._4_4_;
  }
  uStack_1ac._4_4_ = uVar9;
  uStack_1ac = uVar8;
  uStack_1f4 = uVar7;
  uVar10 = uStack_1ac._4_4_;
  uVar9 = uStack_1f4._4_4_;
  uVar7 = uStack_1f4;
  uStack_1f4._4_4_ = uVar9;
  uVar8 = uStack_1ac;
  uStack_1ac._4_4_ = uVar10;
  __Unwind_Resume(pppppuVar15);
  uVar8 = uStack_1ac;
  uVar7 = uStack_1f4;
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000100480b50(pppppuVar20,"grpc.parse_fault_injection_method_config",0);
  uStack_1ac = uVar8;
  uStack_1f4 = uVar7;
  uVar8 = uStack_1ac;
  uVar7 = uStack_1f4;
  if (((ulong)pppppuVar20 & 1) == 0) {
    *extraout_x8 = 0;
    goto LAB_104a929c0;
  }
  ppppuStack_300 = (undefined8 *****)0x0;
  ppppuStack_2f8 = (undefined8 *****)0x0;
  ppppuStack_2f0 = (undefined8 *****)0x0;
  ppuStack_318 = (ulong **)0x0;
  puStack_310 = (ulong *)0x0;
  param_3 = param_3 + 0x20;
  ppuStack_308 = (ulong **)0x0;
  FUN_104a92c14(param_3,"faultInjectionPolicy",0x14,&plStack_320,&ppuStack_318,1);
  uStack_1ac = uVar8;
  uStack_1f4 = uVar7;
  uVar8 = uStack_1ac;
  uVar7 = uStack_1f4;
  if ((int)param_3 != 0) {
    ppppuStack_338 = (undefined8 *****)0x0;
    ppppuStack_330 = (undefined8 *****)0x0;
    ppppuStack_340 = (undefined8 *****)0x0;
    lVar27 = *plStack_320;
    if (plStack_320[1] != lVar27) {
      lVar25 = 0;
      uVar29 = 0;
      do {
        pppuStack_230 = (undefined8 ****)0x0;
        pppuStack_238 = (undefined8 ****)0x0;
        pppuStack_220 = (undefined8 ****)0x0;
        pppuStack_228 = (undefined8 ****)0x0;
        pppuStack_210 = (undefined8 ****)0x0;
        pppuStack_218 = (undefined8 ****)0x0;
        pppuStack_208 = (undefined8 ****)0x0;
        uStack_1f4 = 0;
        uStack_1f4._4_4_ = 0;
        pppuStack_200 = (undefined8 ****)0x0;
        uStack_1f8 = 0;
        ppppuStack_240 = (undefined8 ****)((ulong)ppppuStack_240 & 0xffffffff00000000);
        iStack_1ec = 100;
        pppuStack_1e0 = (undefined8 ****)0x0;
        pppuStack_1e8 = (undefined8 ****)0x0;
        pppuStack_1d0 = (undefined8 ****)0x0;
        pppuStack_1d8 = (undefined8 ****)0x0;
        uStack_1c0 = 0;
        pppuStack_1c8 = (undefined8 ****)0x0;
        iStack_1b4 = 0;
        uStack_1b0 = 0;
        uStack_1bc = 0;
        uStack_1b8 = 0;
        uStack_1ac = 0xffffffff00000064;
        uStack_1ac._4_4_ = 0xffffffff;
        pppuStack_258 = (undefined8 ****)0x0;
        pppuStack_250 = (undefined8 ****)0x0;
        pppuStack_248 = (undefined8 ****)0x0;
        if (*(int *)(lVar27 + lVar25) == 5) {
          uVar17 = lVar27 + lVar25 + 0x20;
          pppuStack_198 = (ulong ***)0x0;
          ppppuStack_1a0 = (ulong ****)0x0;
          pppuStack_190 = (ulong ***)0x0;
          uVar24 = uVar17;
          FUN_104a92fdc(uVar17,"abortCode",9,&ppppuStack_1a0,&pppuStack_258,0);
          uVar9 = uStack_1ac._4_4_;
          uVar7 = uStack_1f4;
          uVar8 = uStack_1ac;
          if ((int)uVar24 != 0) {
            pppppuVar20 = (ulong *****)ppppuStack_1a0;
            if (-1 < (long)pppuStack_190) {
              pppppuVar20 = &ppppuStack_1a0;
            }
            uVar10 = uStack_1f4._4_4_;
            uStack_1f4 = uVar7;
            uVar7 = uStack_1f4;
            uStack_1f4._4_4_ = uVar10;
            uStack_1ac._4_4_ = uVar9;
            FUN_104ab13b0(pppppuVar20,&ppppuStack_240);
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            uVar9 = uStack_1ac._4_4_;
            if (((ulong)pppppuVar20 & 1) == 0) {
              uStack_2a8 = 0;
              uStack_2a0 = 0;
              pppuStack_2b0 = (undefined8 ****)0x0;
              uVar9 = uStack_1f4._4_4_;
              uStack_1f4 = uVar7;
              uVar10 = uStack_1ac._4_4_;
              uStack_1ac = uVar8;
              uVar7 = uStack_1f4;
              uStack_1f4._4_4_ = uVar9;
              uVar8 = uStack_1ac;
              uStack_1ac._4_4_ = uVar10;
              FUN_104ab5920(&pppuStack_170,2,"field:abortCode error:failed to parse status code",
                            0x31,&ppppuStack_278,&pppuStack_2b0);
              uVar8 = uStack_1ac;
              uVar7 = uStack_1f4;
              if (pppuStack_250 < pppuStack_248) {
                *pppuStack_250 = pppuStack_170;
                pppuStack_170 = (ulong ***)0x36;
                pppuStack_250 = pppuStack_250 + 1;
              }
              else {
                lVar27 = (long)pppuStack_250 - (long)pppuStack_258 >> 3;
                uVar24 = lVar27 + 1;
                uStack_1f4 = uVar7;
                uStack_1ac = uVar8;
                if (uVar24 >> 0x3d != 0) {
                  uVar9 = uStack_1f4._4_4_;
                  uVar10 = uStack_1ac._4_4_;
                  uVar7 = uStack_1f4;
                  uStack_1f4._4_4_ = uVar9;
                  uVar8 = uStack_1ac;
                  uStack_1ac._4_4_ = uVar10;
                  FUN_104a83ee4(&pppuStack_258);
                  uVar8 = uStack_1ac;
                  uVar7 = uStack_1f4;
                  goto LAB_104a92a38;
                }
                uVar23 = (long)pppuStack_248 - (long)pppuStack_258 >> 2;
                if (uVar23 <= uVar24) {
                  uVar23 = uVar24;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)pppuStack_248 - (long)pppuStack_258)) {
                  uVar23 = 0x1fffffffffffffff;
                }
                if (uVar23 == 0) {
                  ppppuVar18 = (undefined8 ****)0x0;
                  pppuStack_f0 = &pppuStack_248;
                }
                else {
                  ppppuVar18 = &pppuStack_248;
                  uVar9 = uStack_1f4._4_4_;
                  uVar10 = uStack_1ac._4_4_;
                  pppuStack_f0 = &pppuStack_248;
                  uVar7 = uStack_1f4;
                  uStack_1f4._4_4_ = uVar9;
                  uVar8 = uStack_1ac;
                  uStack_1ac._4_4_ = uVar10;
                  FUN_104a83ef8();
                  uVar8 = uStack_1ac;
                  uVar7 = uStack_1f4;
                }
                uStack_1ac = uVar8;
                uStack_1f4 = uVar7;
                uVar10 = uStack_1ac._4_4_;
                uVar8 = uStack_1ac;
                uVar9 = uStack_1f4._4_4_;
                uVar7 = uStack_1f4;
                ppppuVar2 = ppppuVar18 + lVar27;
                uStack_1f4._4_4_ = uVar9;
                uStack_1ac._4_4_ = uVar10;
                *ppppuVar2 = pppuStack_170;
                pppuStack_170 = (ulong ***)0x36;
                uVar9 = uStack_1f4._4_4_;
                uStack_1f4 = uVar7;
                uVar10 = uStack_1ac._4_4_;
                uStack_1ac = uVar8;
                ppppuStack_110 = ppppuVar18;
                pppuStack_108 = ppppuVar2;
                pppuStack_100 = ppppuVar2 + 1;
                pppuStack_f8 = ppppuVar18 + uVar23;
                uVar7 = uStack_1f4;
                uStack_1f4._4_4_ = uVar9;
                uVar8 = uStack_1ac;
                uStack_1ac._4_4_ = uVar10;
                FUN_104a83e70(&pppuStack_258,&ppppuStack_110);
                uVar8 = uStack_1ac;
                uVar7 = uStack_1f4;
                pppuVar6 = pppuStack_250;
                uVar9 = uStack_1f4._4_4_;
                uStack_1f4 = uVar7;
                uVar10 = uStack_1ac._4_4_;
                uStack_1ac = uVar8;
                uVar7 = uStack_1f4;
                uStack_1f4._4_4_ = uVar9;
                uVar8 = uStack_1ac;
                uStack_1ac._4_4_ = uVar10;
                FUN_104a84040(&ppppuStack_110);
                uVar8 = uStack_1ac;
                uVar7 = uStack_1f4;
                pppuStack_250 = pppuVar6;
                if (((ulong)pppuStack_170 & 1) != 0) {
                  uVar9 = uStack_1f4._4_4_;
                  uStack_1f4 = uVar7;
                  uVar10 = uStack_1ac._4_4_;
                  uStack_1ac = uVar8;
                  uVar7 = uStack_1f4;
                  uStack_1f4._4_4_ = uVar9;
                  uVar8 = uStack_1ac;
                  uStack_1ac._4_4_ = uVar10;
                  func_0x00010084dad0();
                  uVar8 = uStack_1ac;
                  uVar7 = uStack_1f4;
                }
              }
              uStack_1ac = uVar8;
              uStack_1f4 = uVar7;
              uVar10 = uStack_1ac._4_4_;
              uVar9 = uStack_1f4._4_4_;
              ppppuStack_110 = &pppuStack_2b0;
              uVar7 = uStack_1f4;
              uStack_1f4._4_4_ = uVar9;
              uVar8 = uStack_1ac;
              uStack_1ac._4_4_ = uVar10;
              func_0x000100482b64(&ppppuStack_110);
              uVar8 = uStack_1ac;
              uVar7 = uStack_1f4;
              uVar9 = uStack_1ac._4_4_;
            }
          }
          uStack_1ac._4_4_ = uVar9;
          uStack_1ac = uVar8;
          uStack_1f4 = uVar7;
          uVar10 = uStack_1ac._4_4_;
          uVar9 = uStack_1f4._4_4_;
          uVar24 = uVar17;
          uVar7 = uStack_1f4;
          uStack_1f4._4_4_ = uVar9;
          uVar8 = uStack_1ac;
          uStack_1ac._4_4_ = uVar10;
          FUN_104a92fdc(uVar17,"abortMessage",0xc,&pppuStack_238,&pppuStack_258,0);
          uVar8 = uStack_1ac;
          uVar7 = uStack_1f4;
          if ((uVar24 & 1) == 0) {
            uVar9 = uStack_1f4._4_4_;
            uStack_1f4 = uVar7;
            uVar10 = uStack_1ac._4_4_;
            uStack_1ac = uVar8;
            uVar7 = uStack_1f4;
            uStack_1f4._4_4_ = uVar9;
            uVar8 = uStack_1ac;
            uStack_1ac._4_4_ = uVar10;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                      (&pppuStack_238,"Fault injected");
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
          }
          uStack_1ac = uVar8;
          uStack_1f4 = uVar7;
          uVar10 = uStack_1ac._4_4_;
          uVar9 = uStack_1f4._4_4_;
          uVar7 = uStack_1f4;
          uStack_1f4._4_4_ = uVar9;
          uVar8 = uStack_1ac;
          uStack_1ac._4_4_ = uVar10;
          FUN_104a92fdc(uVar17,"abortCodeHeader",0xf,&pppuStack_220,&pppuStack_258,0);
          uVar8 = uStack_1ac;
          uVar7 = uStack_1f4;
          uVar9 = uStack_1f4._4_4_;
          uStack_1f4 = uVar7;
          uVar10 = uStack_1ac._4_4_;
          uStack_1ac = uVar8;
          uVar7 = uStack_1f4;
          uStack_1f4._4_4_ = uVar9;
          uVar8 = uStack_1ac;
          uStack_1ac._4_4_ = uVar10;
          FUN_104a92fdc(uVar17,"abortPercentageHeader",0x15,&pppuStack_208,&pppuStack_258,0);
          uVar8 = uStack_1ac;
          uVar7 = uStack_1f4;
          uVar9 = uStack_1f4._4_4_;
          uStack_1f4 = uVar7;
          uVar10 = uStack_1ac._4_4_;
          uStack_1ac = uVar8;
          uVar7 = uStack_1f4;
          uStack_1f4._4_4_ = uVar9;
          uVar8 = uStack_1ac;
          uStack_1ac._4_4_ = uVar10;
          FUN_104a932fc(uVar17,"abortPercentageNumerator",0x18,(long)&uStack_1f4 + 4,&pppuStack_258,
                        0);
          uVar8 = uStack_1ac;
          uVar7 = uStack_1f4;
          uVar24 = uVar17;
          uVar9 = uStack_1f4._4_4_;
          uStack_1f4 = uVar7;
          uVar10 = uStack_1ac._4_4_;
          uStack_1ac = uVar8;
          uVar7 = uStack_1f4;
          uStack_1f4._4_4_ = uVar9;
          uVar8 = uStack_1ac;
          uStack_1ac._4_4_ = uVar10;
          FUN_104a932fc(uVar17,"abortPercentageDenominator",0x1a,&iStack_1ec,&pppuStack_258,0);
          uVar8 = uStack_1ac;
          uVar7 = uStack_1f4;
          if (((((int)uVar24 != 0) && (iStack_1ec != 100)) && (iStack_1ec != 10000)) &&
             (iStack_1ec != 1000000)) {
            uStack_2c0 = 0;
            uStack_2b8 = 0;
            pppuStack_2c8 = (undefined8 ****)0x0;
            uVar9 = uStack_1f4._4_4_;
            uStack_1f4 = uVar7;
            uVar10 = uStack_1ac._4_4_;
            uStack_1ac = uVar8;
            uVar7 = uStack_1f4;
            uStack_1f4._4_4_ = uVar9;
            uVar8 = uStack_1ac;
            uStack_1ac._4_4_ = uVar10;
            FUN_104ab5920(&pppuStack_170,2,
                          "field:abortPercentageDenominator error:Denominator can only be one of 100, 10000, 1000000"
                          ,0x59,&ppppuStack_278,&pppuStack_2c8);
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            if (pppuStack_250 < pppuStack_248) {
              *pppuStack_250 = pppuStack_170;
              pppuStack_170 = (ulong ***)0x36;
              pppuStack_250 = pppuStack_250 + 1;
            }
            else {
              lVar27 = (long)pppuStack_250 - (long)pppuStack_258 >> 3;
              uVar24 = lVar27 + 1;
              uStack_1f4 = uVar7;
              uStack_1ac = uVar8;
              if (uVar24 >> 0x3d != 0) {
                uVar9 = uStack_1f4._4_4_;
                uVar10 = uStack_1ac._4_4_;
                uVar7 = uStack_1f4;
                uStack_1f4._4_4_ = uVar9;
                uVar8 = uStack_1ac;
                uStack_1ac._4_4_ = uVar10;
                FUN_104a83ee4(&pppuStack_258);
                uVar10 = uStack_1ac._4_4_;
                uVar9 = uStack_1f4._4_4_;
                uVar7 = uStack_1f4;
                uVar8 = uStack_1ac;
                uStack_1f4._4_4_ = uVar9;
                uStack_1ac._4_4_ = uVar10;
                goto LAB_104a92a38;
              }
              uVar23 = (long)pppuStack_248 - (long)pppuStack_258 >> 2;
              if (uVar23 <= uVar24) {
                uVar23 = uVar24;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)pppuStack_248 - (long)pppuStack_258)) {
                uVar23 = 0x1fffffffffffffff;
              }
              if (uVar23 == 0) {
                ppppuVar18 = (undefined8 ****)0x0;
                pppuStack_f0 = &pppuStack_248;
              }
              else {
                ppppuVar18 = &pppuStack_248;
                uVar9 = uStack_1f4._4_4_;
                uVar10 = uStack_1ac._4_4_;
                pppuStack_f0 = &pppuStack_248;
                uVar7 = uStack_1f4;
                uStack_1f4._4_4_ = uVar9;
                uVar8 = uStack_1ac;
                uStack_1ac._4_4_ = uVar10;
                FUN_104a83ef8();
                uVar8 = uStack_1ac;
                uVar7 = uStack_1f4;
              }
              uStack_1ac = uVar8;
              uStack_1f4 = uVar7;
              uVar10 = uStack_1ac._4_4_;
              uVar8 = uStack_1ac;
              uVar9 = uStack_1f4._4_4_;
              uVar7 = uStack_1f4;
              ppppuVar2 = ppppuVar18 + lVar27;
              uStack_1f4._4_4_ = uVar9;
              uStack_1ac._4_4_ = uVar10;
              *ppppuVar2 = pppuStack_170;
              pppuStack_170 = (ulong ***)0x36;
              uVar9 = uStack_1f4._4_4_;
              uStack_1f4 = uVar7;
              uVar10 = uStack_1ac._4_4_;
              uStack_1ac = uVar8;
              ppppuStack_110 = ppppuVar18;
              pppuStack_108 = ppppuVar2;
              pppuStack_100 = ppppuVar2 + 1;
              pppuStack_f8 = ppppuVar18 + uVar23;
              uVar7 = uStack_1f4;
              uStack_1f4._4_4_ = uVar9;
              uVar8 = uStack_1ac;
              uStack_1ac._4_4_ = uVar10;
              FUN_104a83e70(&pppuStack_258,&ppppuStack_110);
              uVar8 = uStack_1ac;
              uVar7 = uStack_1f4;
              pppuVar6 = pppuStack_250;
              uVar9 = uStack_1f4._4_4_;
              uStack_1f4 = uVar7;
              uVar10 = uStack_1ac._4_4_;
              uStack_1ac = uVar8;
              uVar7 = uStack_1f4;
              uStack_1f4._4_4_ = uVar9;
              uVar8 = uStack_1ac;
              uStack_1ac._4_4_ = uVar10;
              FUN_104a84040(&ppppuStack_110);
              uVar8 = uStack_1ac;
              uVar7 = uStack_1f4;
              pppuStack_250 = pppuVar6;
              if (((ulong)pppuStack_170 & 1) != 0) {
                uVar9 = uStack_1f4._4_4_;
                uStack_1f4 = uVar7;
                uVar10 = uStack_1ac._4_4_;
                uStack_1ac = uVar8;
                uVar7 = uStack_1f4;
                uStack_1f4._4_4_ = uVar9;
                uVar8 = uStack_1ac;
                uStack_1ac._4_4_ = uVar10;
                func_0x00010084dad0();
                uVar8 = uStack_1ac;
                uVar7 = uStack_1f4;
              }
            }
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar10 = uStack_1ac._4_4_;
            uVar9 = uStack_1f4._4_4_;
            ppppuStack_110 = &pppuStack_2c8;
            uVar7 = uStack_1f4;
            uStack_1f4._4_4_ = uVar9;
            uVar8 = uStack_1ac;
            uStack_1ac._4_4_ = uVar10;
            func_0x000100482b64(&ppppuStack_110);
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
          }
          uStack_1ac = uVar8;
          uStack_1f4 = uVar7;
          uVar10 = uStack_1ac._4_4_;
          uVar9 = uStack_1f4._4_4_;
          uVar7 = uStack_1f4;
          uStack_1f4._4_4_ = uVar9;
          uVar8 = uStack_1ac;
          uStack_1ac._4_4_ = uVar10;
          FUN_104ac973c(uVar17,"delay",5,&pppuStack_1e8,&pppuStack_258,0);
          uVar8 = uStack_1ac;
          uVar7 = uStack_1f4;
          uVar9 = uStack_1f4._4_4_;
          uStack_1f4 = uVar7;
          uVar10 = uStack_1ac._4_4_;
          uStack_1ac = uVar8;
          uVar7 = uStack_1f4;
          uStack_1f4._4_4_ = uVar9;
          uVar8 = uStack_1ac;
          uStack_1ac._4_4_ = uVar10;
          FUN_104a92fdc(uVar17,"delayHeader",0xb,&pppuStack_1e0,&pppuStack_258,0);
          uVar8 = uStack_1ac;
          uVar7 = uStack_1f4;
          uVar9 = uStack_1f4._4_4_;
          uStack_1f4 = uVar7;
          uVar10 = uStack_1ac._4_4_;
          uStack_1ac = uVar8;
          uVar7 = uStack_1f4;
          uStack_1f4._4_4_ = uVar9;
          uVar8 = uStack_1ac;
          uStack_1ac._4_4_ = uVar10;
          FUN_104a92fdc(uVar17,"delayPercentageHeader",0x15,&pppuStack_1c8,&pppuStack_258,0);
          uVar8 = uStack_1ac;
          uVar7 = uStack_1f4;
          uVar9 = uStack_1f4._4_4_;
          uStack_1f4 = uVar7;
          uVar10 = uStack_1ac._4_4_;
          uStack_1ac = uVar8;
          uVar7 = uStack_1f4;
          uStack_1f4._4_4_ = uVar9;
          uVar8 = uStack_1ac;
          uStack_1ac._4_4_ = uVar10;
          FUN_104a932fc(uVar17,"delayPercentageNumerator",0x18,&uStack_1b0,&pppuStack_258,0);
          uVar8 = uStack_1ac;
          uVar7 = uStack_1f4;
          uVar24 = uVar17;
          uVar9 = uStack_1f4._4_4_;
          uStack_1f4 = uVar7;
          uVar10 = uStack_1ac._4_4_;
          uStack_1ac = uVar8;
          uVar7 = uStack_1f4;
          uStack_1f4._4_4_ = uVar9;
          uVar8 = uStack_1ac;
          uStack_1ac._4_4_ = uVar10;
          FUN_104a932fc(uVar17,"delayPercentageDenominator",0x1a,&uStack_1ac,&pppuStack_258,0);
          uVar8 = uStack_1ac;
          uVar7 = uStack_1f4;
          if ((((int)uVar24 != 0) && (uStack_1ac._0_4_ = (int)uVar8, (int)uStack_1ac != 100)) &&
             (((int)uStack_1ac != 10000 && ((int)uStack_1ac != 1000000)))) {
            uStack_2d8 = 0;
            uStack_2d0 = 0;
            pppuStack_2e0 = (undefined8 ****)0x0;
            uVar9 = uStack_1f4._4_4_;
            uStack_1f4 = uVar7;
            uVar10 = uStack_1ac._4_4_;
            uStack_1ac = uVar8;
            uVar7 = uStack_1f4;
            uStack_1f4._4_4_ = uVar9;
            uVar8 = uStack_1ac;
            uStack_1ac._4_4_ = uVar10;
            FUN_104ab5920(&pppuStack_170,2,
                          "field:delayPercentageDenominator error:Denominator can only be one of 100, 10000, 1000000"
                          ,0x59,&ppppuStack_278,&pppuStack_2e0);
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            if (pppuStack_250 < pppuStack_248) {
              *pppuStack_250 = pppuStack_170;
              pppuStack_170 = (ulong ***)0x36;
              pppuStack_250 = pppuStack_250 + 1;
            }
            else {
              lVar27 = (long)pppuStack_250 - (long)pppuStack_258 >> 3;
              uVar24 = lVar27 + 1;
              uStack_1f4 = uVar7;
              uStack_1ac = uVar8;
              if (uVar24 >> 0x3d != 0) {
                uVar9 = uStack_1f4._4_4_;
                uVar10 = uStack_1ac._4_4_;
                uVar7 = uStack_1f4;
                uStack_1f4._4_4_ = uVar9;
                uVar8 = uStack_1ac;
                uStack_1ac._4_4_ = uVar10;
                FUN_104a83ee4(&pppuStack_258);
                uVar8 = uStack_1ac;
                uVar7 = uStack_1f4;
                goto LAB_104a92a38;
              }
              uVar23 = (long)pppuStack_248 - (long)pppuStack_258 >> 2;
              if (uVar23 <= uVar24) {
                uVar23 = uVar24;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)pppuStack_248 - (long)pppuStack_258)) {
                uVar23 = 0x1fffffffffffffff;
              }
              if (uVar23 == 0) {
                ppppuVar18 = (undefined8 ****)0x0;
                pppuStack_f0 = &pppuStack_248;
              }
              else {
                ppppuVar18 = &pppuStack_248;
                uVar9 = uStack_1f4._4_4_;
                uVar10 = uStack_1ac._4_4_;
                pppuStack_f0 = &pppuStack_248;
                uVar7 = uStack_1f4;
                uStack_1f4._4_4_ = uVar9;
                uVar8 = uStack_1ac;
                uStack_1ac._4_4_ = uVar10;
                FUN_104a83ef8();
                uVar8 = uStack_1ac;
                uVar7 = uStack_1f4;
              }
              uStack_1ac = uVar8;
              uStack_1f4 = uVar7;
              uVar10 = uStack_1ac._4_4_;
              uVar8 = uStack_1ac;
              uVar9 = uStack_1f4._4_4_;
              uVar7 = uStack_1f4;
              ppppuVar2 = ppppuVar18 + lVar27;
              uStack_1f4._4_4_ = uVar9;
              uStack_1ac._4_4_ = uVar10;
              *ppppuVar2 = pppuStack_170;
              pppuStack_170 = (ulong ***)0x36;
              uVar9 = uStack_1f4._4_4_;
              uStack_1f4 = uVar7;
              uVar10 = uStack_1ac._4_4_;
              uStack_1ac = uVar8;
              ppppuStack_110 = ppppuVar18;
              pppuStack_108 = ppppuVar2;
              pppuStack_100 = ppppuVar2 + 1;
              pppuStack_f8 = ppppuVar18 + uVar23;
              uVar7 = uStack_1f4;
              uStack_1f4._4_4_ = uVar9;
              uVar8 = uStack_1ac;
              uStack_1ac._4_4_ = uVar10;
              FUN_104a83e70(&pppuStack_258,&ppppuStack_110);
              uVar8 = uStack_1ac;
              uVar7 = uStack_1f4;
              pppuVar6 = pppuStack_250;
              uVar9 = uStack_1f4._4_4_;
              uStack_1f4 = uVar7;
              uVar10 = uStack_1ac._4_4_;
              uStack_1ac = uVar8;
              uVar7 = uStack_1f4;
              uStack_1f4._4_4_ = uVar9;
              uVar8 = uStack_1ac;
              uStack_1ac._4_4_ = uVar10;
              FUN_104a84040(&ppppuStack_110);
              uVar8 = uStack_1ac;
              uVar7 = uStack_1f4;
              pppuStack_250 = pppuVar6;
              if (((ulong)pppuStack_170 & 1) != 0) {
                uVar9 = uStack_1f4._4_4_;
                uStack_1f4 = uVar7;
                uVar10 = uStack_1ac._4_4_;
                uStack_1ac = uVar8;
                uVar7 = uStack_1f4;
                uStack_1f4._4_4_ = uVar9;
                uVar8 = uStack_1ac;
                uStack_1ac._4_4_ = uVar10;
                func_0x00010084dad0();
                uVar8 = uStack_1ac;
                uVar7 = uStack_1f4;
              }
            }
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar10 = uStack_1ac._4_4_;
            uVar9 = uStack_1f4._4_4_;
            ppppuStack_110 = &pppuStack_2e0;
            uVar7 = uStack_1f4;
            uStack_1f4._4_4_ = uVar9;
            uVar8 = uStack_1ac;
            uStack_1ac._4_4_ = uVar10;
            func_0x000100482b64(&ppppuStack_110);
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
          }
          uStack_1ac = uVar8;
          uStack_1f4 = uVar7;
          uVar10 = uStack_1ac._4_4_;
          uVar9 = uStack_1f4._4_4_;
          uVar7 = uStack_1f4;
          uStack_1f4._4_4_ = uVar9;
          uVar8 = uStack_1ac;
          uStack_1ac._4_4_ = uVar10;
          FUN_104a932fc(uVar17,"maxFaults",9,(long)&uStack_1ac + 4,&pppuStack_258,0);
          uVar8 = uStack_1ac;
          uVar7 = uStack_1f4;
          uVar9 = uStack_1f4._4_4_;
          uVar10 = uStack_1ac._4_4_;
          if (pppuStack_258 != pppuStack_250) {
            ppppuStack_110 = (undefined8 ****)0x10f2334dc;
            pppuStack_108 = (undefined8 ****)0x2b;
            uVar17 = uVar29;
            uStack_1f4 = uVar7;
            uStack_1ac = uVar8;
            uVar7 = uStack_1f4;
            uStack_1f4._4_4_ = uVar9;
            uVar8 = uStack_1ac;
            uStack_1ac._4_4_ = uVar10;
            func_0x00010ae8b9f0(uVar29,auStack_130);
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            lStack_138 = uVar17 - (long)auStack_130;
            uVar9 = uStack_1f4._4_4_;
            uStack_1f4 = uVar7;
            uVar10 = uStack_1ac._4_4_;
            uStack_1ac = uVar8;
            puStack_140 = auStack_130;
            uVar7 = uStack_1f4;
            uStack_1f4._4_4_ = uVar9;
            uVar8 = uStack_1ac;
            uStack_1ac._4_4_ = uVar10;
            func_0x00010047c83c(&ppppuStack_278,&ppppuStack_110,&puStack_140);
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            uVar17 = uStack_270;
            pppppuVar20 = (ulong *****)ppppuStack_278;
            if (-1 < (char)bStack_261) {
              uVar17 = (ulong)bStack_261;
              pppppuVar20 = &ppppuStack_278;
            }
            uVar9 = uStack_1f4._4_4_;
            uStack_1f4 = uVar7;
            uVar10 = uStack_1ac._4_4_;
            uStack_1ac = uVar8;
            uVar7 = uStack_1f4;
            uStack_1f4._4_4_ = uVar9;
            uVar8 = uStack_1ac;
            uStack_1ac._4_4_ = uVar10;
            FUN_104a92f34(&ppuStack_178,&ppuStack_260,pppppuVar20,uVar17,&pppuStack_258);
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            if (puStack_310 < ppuStack_308) {
              *puStack_310 = (ulong)ppuStack_178;
              ppuStack_178 = (ulong **)0x36;
              puStack_310 = puStack_310 + 1;
            }
            else {
              lVar27 = (long)puStack_310 - (long)ppuStack_318 >> 3;
              uVar17 = lVar27 + 1;
              if (uVar17 >> 0x3d != 0) goto LAB_104a92a0c;
              uVar24 = (long)ppuStack_308 - (long)ppuStack_318 >> 2;
              if (uVar24 <= uVar17) {
                uVar24 = uVar17;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_308 - (long)ppuStack_318)) {
                uVar24 = 0x1fffffffffffffff;
              }
              pppuStack_150 = &ppuStack_308;
              if (uVar24 == 0) {
                ppppuVar28 = (ulong ****)0x0;
              }
              else {
                ppppuVar28 = (ulong ****)&ppuStack_308;
                uVar9 = uStack_1f4._4_4_;
                uStack_1f4 = uVar7;
                uVar10 = uStack_1ac._4_4_;
                uStack_1ac = uVar8;
                uVar7 = uStack_1f4;
                uStack_1f4._4_4_ = uVar9;
                uVar8 = uStack_1ac;
                uStack_1ac._4_4_ = uVar10;
                FUN_104a83ef8();
                uVar8 = uStack_1ac;
                uVar7 = uStack_1f4;
              }
              uStack_1ac = uVar8;
              uStack_1f4 = uVar7;
              uVar10 = uStack_1ac._4_4_;
              uVar8 = uStack_1ac;
              uVar9 = uStack_1f4._4_4_;
              uVar7 = uStack_1f4;
              ppppuVar14 = ppppuVar28 + lVar27;
              uStack_1f4._4_4_ = uVar9;
              uStack_1ac._4_4_ = uVar10;
              *ppppuVar14 = (ulong ***)ppuStack_178;
              ppuStack_178 = (ulong **)0x36;
              uVar9 = uStack_1f4._4_4_;
              uStack_1f4 = uVar7;
              uVar10 = uStack_1ac._4_4_;
              uStack_1ac = uVar8;
              pppuStack_170 = (ulong ***)ppppuVar28;
              pppuStack_168 = (ulong ***)ppppuVar14;
              pppuStack_160 = (ulong ***)(ppppuVar14 + 1);
              pppuStack_158 = (ulong ***)(ppppuVar28 + uVar24);
              uVar7 = uStack_1f4;
              uStack_1f4._4_4_ = uVar9;
              uVar8 = uStack_1ac;
              uStack_1ac._4_4_ = uVar10;
              FUN_104a83e70(&ppuStack_318,&pppuStack_170);
              uVar8 = uStack_1ac;
              uVar7 = uStack_1f4;
              puVar4 = puStack_310;
              uVar9 = uStack_1f4._4_4_;
              uStack_1f4 = uVar7;
              uVar10 = uStack_1ac._4_4_;
              uStack_1ac = uVar8;
              uVar7 = uStack_1f4;
              uStack_1f4._4_4_ = uVar9;
              uVar8 = uStack_1ac;
              uStack_1ac._4_4_ = uVar10;
              FUN_104a84040(&pppuStack_170);
              uVar8 = uStack_1ac;
              uVar7 = uStack_1f4;
              puStack_310 = puVar4;
              if (((ulong)ppuStack_178 & 1) != 0) {
                uVar9 = uStack_1f4._4_4_;
                uStack_1f4 = uVar7;
                uVar10 = uStack_1ac._4_4_;
                uStack_1ac = uVar8;
                uVar7 = uStack_1f4;
                uStack_1f4._4_4_ = uVar9;
                uVar8 = uStack_1ac;
                uStack_1ac._4_4_ = uVar10;
                func_0x00010084dad0();
                uVar8 = uStack_1ac;
                uVar7 = uStack_1f4;
              }
            }
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar10 = uStack_1ac._4_4_;
            uVar9 = uStack_1f4._4_4_;
            uVar7 = uStack_1f4;
            uVar8 = uStack_1ac;
            if ((char)bStack_261 < '\0') {
              uStack_1f4._4_4_ = uVar9;
              uStack_1ac._4_4_ = uVar10;
              __ZdlPv(ppppuStack_278);
              uVar8 = uStack_1ac;
              uVar7 = uStack_1f4;
              uVar9 = uStack_1f4._4_4_;
              uVar10 = uStack_1ac._4_4_;
            }
          }
          uStack_1ac._4_4_ = uVar10;
          uStack_1f4._4_4_ = uVar9;
          uStack_1ac = uVar8;
          uStack_1f4 = uVar7;
          uVar10 = uStack_1ac._4_4_;
          uVar9 = uStack_1f4._4_4_;
          if (ppppuStack_338 < ppppuStack_330) {
            *(undefined4 *)ppppuStack_338 = ppppuStack_240._0_4_;
            uStack_1ac._4_4_ = uVar10;
            uStack_1f4._4_4_ = uVar9;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            ppppuStack_338[3] = pppuStack_228;
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            ppppuStack_338[2] = pppuStack_230;
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            ppppuStack_338[1] = pppuStack_238;
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            pppuStack_230 = (undefined8 ****)0x0;
            pppuStack_228 = (undefined8 ****)0x0;
            pppuStack_238 = (undefined8 ****)0x0;
            ppppuStack_338[5] = pppuStack_218;
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            ppppuStack_338[4] = pppuStack_220;
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            ppppuStack_338[6] = pppuStack_210;
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            pppuStack_218 = (undefined8 ****)0x0;
            pppuStack_210 = (undefined8 ****)0x0;
            pppuStack_220 = (undefined8 ****)0x0;
            ppppuStack_338[9] = (undefined8 ****)CONCAT84(uVar7,uStack_1f8);
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            ppppuStack_338[8] = pppuStack_200;
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            ppppuStack_338[7] = pppuStack_208;
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            pppuStack_200 = (undefined8 ****)0x0;
            pppuStack_208 = (undefined8 ****)0x0;
            ppppuVar18 = (undefined8 ****)CONCAT44(iStack_1ec,uStack_1f4._4_4_);
            ppppuStack_338[0xb] = pppuStack_1e8;
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            ppppuStack_338[10] = ppppuVar18;
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            ppppuStack_338[0xe] = pppuStack_1d0;
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            ppppuStack_338[0xd] = pppuStack_1d8;
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            ppppuStack_338[0xc] = pppuStack_1e0;
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            pppuStack_1e0 = (undefined8 ****)0x0;
            pppuStack_1d8 = (undefined8 ****)0x0;
            pppuStack_1d0 = (undefined8 ****)0x0;
            ppppuStack_338[0x11] = (undefined8 ****)CONCAT44(iStack_1b4,uStack_1b8);
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            ppppuStack_338[0x10] = (undefined8 ****)CONCAT44(uStack_1bc,uStack_1c0);
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            ppppuStack_338[0xf] = pppuStack_1c8;
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            pppuStack_1c8 = (undefined8 ****)0x0;
            uStack_1c0 = 0;
            uStack_1bc = 0;
            uStack_1b8 = 0;
            iStack_1b4 = 0;
            ppppuVar18 = (undefined8 ****)CONCAT84(uVar8,uStack_1b0);
            *(undefined4 *)(ppppuStack_338 + 0x13) = uStack_1ac._4_4_;
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            ppppuStack_338[0x12] = ppppuVar18;
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            pppppuVar22 = (undefined8 *****)(ppppuStack_338 + 0x14);
          }
          else {
            pppppuVar22 = &ppppuStack_340;
            uVar7 = uStack_1f4;
            uStack_1f4._4_4_ = uVar9;
            uVar8 = uStack_1ac;
            uStack_1ac._4_4_ = uVar10;
            FUN_104a93ce4(pppppuVar22,&ppppuStack_240);
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
          }
          uStack_1ac = uVar8;
          uStack_1f4 = uVar7;
          uVar10 = uStack_1ac._4_4_;
          uVar9 = uStack_1f4._4_4_;
          pppppuVar20 = (ulong *****)ppppuStack_1a0;
          ppppuStack_338 = pppppuVar22;
          uVar7 = uStack_1f4;
          uVar8 = uStack_1ac;
          uStack_1f4._4_4_ = uVar9;
          uStack_1ac._4_4_ = uVar10;
          if ((long)pppuStack_190 < 0) {
LAB_104a9282c:
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar10 = uStack_1ac._4_4_;
            uVar9 = uStack_1f4._4_4_;
            uVar7 = uStack_1f4;
            uStack_1f4._4_4_ = uVar9;
            uVar8 = uStack_1ac;
            uStack_1ac._4_4_ = uVar10;
            __ZdlPv(pppppuVar20);
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
          }
        }
        else {
          ppppuStack_110 = (undefined8 ****)0x10f2332e4;
          pppuStack_108 = (undefined8 ****)0x1b;
          uVar17 = uVar29;
          func_0x00010ae8b9f0(uVar29,auStack_130);
          uVar9 = uStack_1ac._4_4_;
          uVar7 = uStack_1f4;
          lStack_138 = uVar17 - (long)auStack_130;
          pppuStack_170 = (ulong ***)0x10f233300;
          pppuStack_168 = (ulong ***)0x15;
          uVar10 = uStack_1f4._4_4_;
          uStack_1f4 = uVar7;
          puStack_140 = auStack_130;
          uVar7 = uStack_1f4;
          uStack_1f4._4_4_ = uVar10;
          uVar8 = uStack_1ac;
          uStack_1ac._4_4_ = uVar9;
          func_0x000100066c24(&ppppuStack_278,&ppppuStack_110,&puStack_140,&pppuStack_170);
          uVar9 = uStack_1ac._4_4_;
          uVar7 = uStack_1f4;
          uVar17 = uStack_270;
          pppppuVar20 = (ulong *****)ppppuStack_278;
          if (-1 < (char)bStack_261) {
            uVar17 = (ulong)bStack_261;
            pppppuVar20 = &ppppuStack_278;
          }
          uStack_290 = 0;
          uStack_288 = 0;
          pppuStack_298 = (ulong ***)0x0;
          uVar10 = uStack_1f4._4_4_;
          uStack_1f4 = uVar7;
          uVar7 = uStack_1f4;
          uStack_1f4._4_4_ = uVar10;
          uVar8 = uStack_1ac;
          uStack_1ac._4_4_ = uVar9;
          FUN_104ab5920(&ppuStack_260,2,pppppuVar20,uVar17,&uStack_279,&pppuStack_298);
          uVar10 = uStack_1ac._4_4_;
          uVar9 = uStack_1f4._4_4_;
          uStack_1f4._4_4_ = uVar9;
          uStack_1ac._4_4_ = uVar10;
          if (puStack_310 < ppuStack_308) {
            *puStack_310 = (ulong)ppuStack_260;
            ppuStack_260 = (ulong **)0x36;
            puStack_310 = puStack_310 + 1;
            uVar7 = uStack_1f4;
            uVar8 = uStack_1ac;
          }
          else {
            lVar27 = (long)puStack_310 - (long)ppuStack_318 >> 3;
            uVar17 = lVar27 + 1;
            if (uVar17 >> 0x3d != 0) {
              uVar7 = uStack_1f4;
              uVar8 = uStack_1ac;
              FUN_104a83ee4(&ppuStack_318);
              uVar8 = uStack_1ac;
              uVar7 = uStack_1f4;
              goto LAB_104a92a38;
            }
            uVar24 = (long)ppuStack_308 - (long)ppuStack_318 >> 2;
            if (uVar24 <= uVar17) {
              uVar24 = uVar17;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_308 - (long)ppuStack_318)) {
              uVar24 = 0x1fffffffffffffff;
            }
            pppuStack_180 = &ppuStack_308;
            if (uVar24 == 0) {
              ppppuVar28 = (ulong ****)0x0;
              uVar7 = uStack_1f4;
              uVar8 = uStack_1ac;
            }
            else {
              ppppuVar28 = (ulong ****)&ppuStack_308;
              uVar7 = uStack_1f4;
              uVar8 = uStack_1ac;
              FUN_104a83ef8();
              uVar8 = uStack_1ac;
              uVar7 = uStack_1f4;
            }
            uStack_1ac = uVar8;
            uStack_1f4 = uVar7;
            uVar10 = uStack_1ac._4_4_;
            uVar8 = uStack_1ac;
            uVar9 = uStack_1f4._4_4_;
            uVar7 = uStack_1f4;
            ppppuVar14 = ppppuVar28 + lVar27;
            uStack_1f4._4_4_ = uVar9;
            uStack_1ac._4_4_ = uVar10;
            *ppppuVar14 = (ulong ***)ppuStack_260;
            ppuStack_260 = (ulong **)0x36;
            uVar9 = uStack_1f4._4_4_;
            uStack_1f4 = uVar7;
            uVar10 = uStack_1ac._4_4_;
            uStack_1ac = uVar8;
            ppppuStack_1a0 = ppppuVar28;
            pppuStack_198 = (ulong ***)ppppuVar14;
            pppuStack_190 = (ulong ***)(ppppuVar14 + 1);
            pppuStack_188 = (ulong ***)(ppppuVar28 + uVar24);
            uVar7 = uStack_1f4;
            uStack_1f4._4_4_ = uVar9;
            uVar8 = uStack_1ac;
            uStack_1ac._4_4_ = uVar10;
            FUN_104a83e70(&ppuStack_318,&ppppuStack_1a0);
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            puVar4 = puStack_310;
            uVar9 = uStack_1f4._4_4_;
            uStack_1f4 = uVar7;
            uVar10 = uStack_1ac._4_4_;
            uStack_1ac = uVar8;
            uVar7 = uStack_1f4;
            uStack_1f4._4_4_ = uVar9;
            uVar8 = uStack_1ac;
            uStack_1ac._4_4_ = uVar10;
            FUN_104a84040(&ppppuStack_1a0);
            uVar8 = uStack_1ac;
            uVar7 = uStack_1f4;
            puStack_310 = puVar4;
            if (((ulong)ppuStack_260 & 1) != 0) {
              uVar9 = uStack_1f4._4_4_;
              uStack_1f4 = uVar7;
              uVar10 = uStack_1ac._4_4_;
              uStack_1ac = uVar8;
              uVar7 = uStack_1f4;
              uStack_1f4._4_4_ = uVar9;
              uVar8 = uStack_1ac;
              uStack_1ac._4_4_ = uVar10;
              func_0x00010084dad0();
              uVar8 = uStack_1ac;
              uVar7 = uStack_1f4;
            }
          }
          uStack_1ac = uVar8;
          uStack_1f4 = uVar7;
          uVar10 = uStack_1ac._4_4_;
          uVar9 = uStack_1f4._4_4_;
          ppppuStack_1a0 = &pppuStack_298;
          uVar7 = uStack_1f4;
          uStack_1f4._4_4_ = uVar9;
          uVar8 = uStack_1ac;
          uStack_1ac._4_4_ = uVar10;
          func_0x000100482b64(&ppppuStack_1a0);
          uVar8 = uStack_1ac;
          uVar7 = uStack_1f4;
          pppppuVar20 = (ulong *****)ppppuStack_278;
          if ((char)bStack_261 < '\0') goto LAB_104a9282c;
        }
        uStack_1ac = uVar8;
        uStack_1f4 = uVar7;
        uVar10 = uStack_1ac._4_4_;
        uVar9 = uStack_1f4._4_4_;
        ppppuStack_110 = &pppuStack_258;
        uVar7 = uStack_1f4;
        uStack_1f4._4_4_ = uVar9;
        uVar8 = uStack_1ac;
        uStack_1ac._4_4_ = uVar10;
        func_0x000100482b64(&ppppuStack_110);
        uVar8 = uStack_1ac;
        uVar7 = uStack_1f4;
        if (iStack_1b4 < 0) {
          uVar9 = uStack_1f4._4_4_;
          uStack_1f4 = uVar7;
          uVar10 = uStack_1ac._4_4_;
          uStack_1ac = uVar8;
          uVar7 = uStack_1f4;
          uStack_1f4._4_4_ = uVar9;
          uVar8 = uStack_1ac;
          uStack_1ac._4_4_ = uVar10;
          __ZdlPv(pppuStack_1c8);
          uVar8 = uStack_1ac;
          uVar7 = uStack_1f4;
        }
        uStack_1ac = uVar8;
        uStack_1f4 = uVar7;
        uVar10 = uStack_1ac._4_4_;
        uVar9 = uStack_1f4._4_4_;
        uVar7 = uStack_1f4;
        uVar8 = uStack_1ac;
        if ((long)pppuStack_1d0 < 0) {
          uStack_1f4._4_4_ = uVar9;
          uStack_1ac._4_4_ = uVar10;
          __ZdlPv(pppuStack_1e0);
          uVar8 = uStack_1ac;
          uVar7 = uStack_1f4;
          uVar9 = uStack_1f4._4_4_;
          uVar10 = uStack_1ac._4_4_;
        }
        uStack_1ac._4_4_ = uVar10;
        uStack_1f4._4_4_ = uVar9;
        uStack_1ac = uVar8;
        uStack_1f4 = uVar7;
        uVar10 = uStack_1ac._4_4_;
        uVar9 = uStack_1f4._4_4_;
        uVar7 = uStack_1f4;
        uVar8 = uStack_1ac;
        if (uStack_1f4._3_1_ < '\0') {
          uStack_1f4._4_4_ = uVar9;
          uStack_1ac._4_4_ = uVar10;
          __ZdlPv(pppuStack_208);
          uVar8 = uStack_1ac;
          uVar7 = uStack_1f4;
          uVar9 = uStack_1f4._4_4_;
          uVar10 = uStack_1ac._4_4_;
        }
        uStack_1ac._4_4_ = uVar10;
        uStack_1f4._4_4_ = uVar9;
        uStack_1ac = uVar8;
        uStack_1f4 = uVar7;
        uVar10 = uStack_1ac._4_4_;
        uVar9 = uStack_1f4._4_4_;
        uVar7 = uStack_1f4;
        uVar8 = uStack_1ac;
        if ((long)pppuStack_210 < 0) {
          uStack_1f4._4_4_ = uVar9;
          uStack_1ac._4_4_ = uVar10;
          __ZdlPv(pppuStack_220);
          uVar8 = uStack_1ac;
          uVar7 = uStack_1f4;
          uVar9 = uStack_1f4._4_4_;
          uVar10 = uStack_1ac._4_4_;
        }
        uStack_1ac._4_4_ = uVar10;
        uStack_1f4._4_4_ = uVar9;
        uStack_1ac = uVar8;
        uStack_1f4 = uVar7;
        uVar10 = uStack_1ac._4_4_;
        uVar9 = uStack_1f4._4_4_;
        uVar7 = uStack_1f4;
        uVar8 = uStack_1ac;
        if ((long)pppuStack_228 < 0) {
          uStack_1f4._4_4_ = uVar9;
          uStack_1ac._4_4_ = uVar10;
          __ZdlPv(pppuStack_238);
          uVar8 = uStack_1ac;
          uVar7 = uStack_1f4;
          uVar9 = uStack_1f4._4_4_;
          uVar10 = uStack_1ac._4_4_;
        }
        uStack_1ac._4_4_ = uVar10;
        uStack_1f4._4_4_ = uVar9;
        uStack_1ac = uVar8;
        uStack_1f4 = uVar7;
        uVar10 = uStack_1ac._4_4_;
        uVar9 = uStack_1f4._4_4_;
        uVar29 = uVar29 + 1;
        lVar27 = *plStack_320;
        lVar25 = lVar25 + 0x50;
        uVar7 = uStack_1f4;
        uVar8 = uStack_1ac;
        uStack_1f4._4_4_ = uVar9;
        uStack_1ac._4_4_ = uVar10;
      } while (uVar29 < (ulong)((plStack_320[1] - lVar27 >> 4) * -0x3333333333333333));
    }
    uStack_1ac = uVar8;
    uStack_1f4 = uVar7;
    uVar10 = uStack_1ac._4_4_;
    uVar9 = uStack_1f4._4_4_;
    uVar7 = uStack_1f4;
    uStack_1f4._4_4_ = uVar9;
    uVar8 = uStack_1ac;
    uStack_1ac._4_4_ = uVar10;
    FUN_104a94244(&ppppuStack_300);
    uVar8 = uStack_1ac;
    uVar7 = uStack_1f4;
    ppppuStack_2f8 = ppppuStack_338;
    ppppuStack_300 = ppppuStack_340;
    ppppuStack_2f0 = ppppuStack_330;
    ppppuStack_338 = (undefined8 *****)0x0;
    ppppuStack_330 = (undefined8 *****)0x0;
    ppppuStack_340 = (undefined8 *****)0x0;
    ppppuStack_240 = &ppppuStack_340;
    uVar9 = uStack_1f4._4_4_;
    uStack_1f4 = uVar7;
    uVar10 = uStack_1ac._4_4_;
    uStack_1ac = uVar8;
    uVar7 = uStack_1f4;
    uStack_1f4._4_4_ = uVar9;
    uVar8 = uStack_1ac;
    uStack_1ac._4_4_ = uVar10;
    FUN_104a941c0(&ppppuStack_240);
    uVar8 = uStack_1ac;
    uVar7 = uStack_1f4;
  }
  uStack_1ac = uVar8;
  uStack_1f4 = uVar7;
  uVar10 = uStack_1ac._4_4_;
  uVar9 = uStack_1f4._4_4_;
  uVar7 = uStack_1f4;
  uStack_1f4._4_4_ = uVar9;
  uVar8 = uStack_1ac;
  uStack_1ac._4_4_ = uVar10;
  FUN_104a92f34(&ppppuStack_240,&ppppuStack_110,"Fault injection parser",0x16,&ppuStack_318);
  uVar8 = uStack_1ac;
  uVar7 = uStack_1f4;
  pppppuVar22 = (undefined8 *****)ppppuStack_240;
  pppppuVar19 = (undefined8 *****)*param_4;
  if ((undefined8 *****)ppppuStack_240 == pppppuVar19) {
LAB_104a92930:
    uStack_1ac = uVar8;
    uStack_1f4 = uVar7;
    uVar10 = uStack_1ac._4_4_;
    uVar9 = uStack_1f4._4_4_;
    uVar7 = uStack_1f4;
    uVar8 = uStack_1ac;
    if (((ulong)pppppuVar19 & 1) != 0) {
      uStack_1f4._4_4_ = uVar9;
      uStack_1ac._4_4_ = uVar10;
      func_0x00010084dad0();
      uVar8 = uStack_1ac;
      uVar7 = uStack_1f4;
      uVar9 = uStack_1f4._4_4_;
      uVar10 = uStack_1ac._4_4_;
    }
    uStack_1ac._4_4_ = uVar10;
    uStack_1f4._4_4_ = uVar9;
    uStack_1ac = uVar8;
    uStack_1f4 = uVar7;
    uVar10 = uStack_1ac._4_4_;
    uVar9 = uStack_1f4._4_4_;
    pppppuVar22 = (undefined8 *****)*param_4;
    uVar7 = uStack_1f4;
    uVar8 = uStack_1ac;
    uStack_1f4._4_4_ = uVar9;
    uStack_1ac._4_4_ = uVar10;
  }
  else {
    *param_4 = ppppuStack_240;
    ppppuStack_240 = (undefined8 *****)0x36;
    if (((ulong)pppppuVar19 & 1) != 0) {
      uVar9 = uStack_1f4._4_4_;
      uStack_1f4 = uVar7;
      uVar10 = uStack_1ac._4_4_;
      uStack_1ac = uVar8;
      uVar7 = uStack_1f4;
      uStack_1f4._4_4_ = uVar9;
      uVar8 = uStack_1ac;
      uStack_1ac._4_4_ = uVar10;
      func_0x00010084dad0();
      uVar8 = uStack_1ac;
      uVar7 = uStack_1f4;
      pppppuVar19 = (undefined8 *****)ppppuStack_240;
      goto LAB_104a92930;
    }
  }
  uStack_1ac = uVar8;
  uStack_1f4 = uVar7;
  uVar10 = uStack_1ac._4_4_;
  uVar9 = uStack_1f4._4_4_;
  ppppuVar2 = ppppuStack_2f8;
  ppppuVar18 = ppppuStack_300;
  uStack_1f4._4_4_ = uVar9;
  uStack_1ac._4_4_ = uVar10;
  if ((pppppuVar22 == (undefined8 *****)0x0) && (ppppuStack_300 != ppppuStack_2f8)) {
    puVar26 = (undefined8 *)0x20;
    uVar7 = uStack_1f4;
    uVar8 = uStack_1ac;
    __Znwm();
    uVar8 = uStack_1ac;
    uVar7 = uStack_1f4;
    ppppuVar5 = ppppuStack_2f0;
    ppppuStack_300 = (undefined8 *****)0x0;
    ppppuStack_2f8 = (undefined8 *****)0x0;
    ppppuStack_2f0 = (undefined8 *****)0x0;
    *puVar26 = &PTR_FUN_1107c3760;
    puVar26[1] = ppppuVar18;
    puVar26[2] = ppppuVar2;
    puVar26[3] = ppppuVar5;
    pppuStack_238 = (undefined8 ****)0x0;
    pppuStack_230 = (undefined8 ****)0x0;
    ppppuStack_240 = (ulong ****)0x0;
    ppppuStack_110 = &ppppuStack_240;
    uVar9 = uStack_1f4._4_4_;
    uStack_1f4 = uVar7;
    uVar10 = uStack_1ac._4_4_;
    uStack_1ac = uVar8;
    uVar7 = uStack_1f4;
    uStack_1f4._4_4_ = uVar9;
    uVar8 = uStack_1ac;
    uStack_1ac._4_4_ = uVar10;
    FUN_104a941c0(&ppppuStack_110);
    uVar8 = uStack_1ac;
    uVar7 = uStack_1f4;
  }
  else {
    puVar26 = (undefined8 *)0x0;
    uVar7 = uStack_1f4;
    uVar8 = uStack_1ac;
  }
  uStack_1ac = uVar8;
  uStack_1f4 = uVar7;
  uVar10 = uStack_1ac._4_4_;
  uVar9 = uStack_1f4._4_4_;
  *extraout_x8 = puVar26;
  ppppuStack_240 = (undefined8 ****)&ppuStack_318;
  uVar7 = uStack_1f4;
  uStack_1f4._4_4_ = uVar9;
  uVar8 = uStack_1ac;
  uStack_1ac._4_4_ = uVar10;
  func_0x000100482b64(&ppppuStack_240);
  uVar8 = uStack_1ac;
  uVar7 = uStack_1f4;
  ppppuStack_240 = &ppppuStack_300;
  pppppuVar20 = &ppppuStack_240;
  uVar9 = uStack_1f4._4_4_;
  uStack_1f4 = uVar7;
  uVar10 = uStack_1ac._4_4_;
  uStack_1ac = uVar8;
  uVar7 = uStack_1f4;
  uStack_1f4._4_4_ = uVar9;
  uVar8 = uStack_1ac;
  uStack_1ac._4_4_ = uVar10;
  FUN_104a941c0(pppppuVar20);
  uVar8 = uStack_1ac;
  uVar7 = uStack_1f4;
LAB_104a929c0:
  uStack_1ac = uVar8;
  uStack_1f4 = uVar7;
  uVar10 = uStack_1ac._4_4_;
  uVar9 = uStack_1f4._4_4_;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
    return pppppuVar20;
  }
  uVar7 = uStack_1f4;
  uStack_1f4._4_4_ = uVar9;
  uVar8 = uStack_1ac;
  uStack_1ac._4_4_ = uVar10;
  ___stack_chk_fail();
  uVar8 = uStack_1ac;
  uVar7 = uStack_1f4;
LAB_104a92a0c:
  uStack_1ac = uVar8;
  uStack_1f4 = uVar7;
  uVar10 = uStack_1ac._4_4_;
  uVar9 = uStack_1f4._4_4_;
  uVar7 = uStack_1f4;
  uStack_1f4._4_4_ = uVar9;
  uVar8 = uStack_1ac;
  uStack_1ac._4_4_ = uVar10;
  FUN_104a83ee4(&ppuStack_318);
  uVar8 = uStack_1ac;
  uVar7 = uStack_1f4;
LAB_104a92a38:
  uStack_1ac = uVar8;
  uStack_1f4 = uVar7;
  uVar10 = uStack_1ac._4_4_;
  uVar9 = uStack_1f4._4_4_;
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x104a92a3c);
  uVar7 = uStack_1f4;
  uStack_1f4._4_4_ = uVar9;
  uVar8 = uStack_1ac;
  uStack_1ac._4_4_ = uVar10;
  (*pcVar11)();
}



/* Entry: 104a91e54; end: 104a92c13;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_104a91e54(undefined8 *param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 *param_5)

{
  ulong **ppuVar1;
  undefined8 **ppuVar2;
  ulong *puVar3;
  undefined8 **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  ulong ***pppuVar10;
  ulong uVar11;
  undefined8 **ppuVar12;
  ulong **ppuVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  undefined8 **ppuStack_2e0;
  undefined8 **ppuStack_2d8;
  undefined8 **ppuStack_2d0;
  long *plStack_2c0;
  long lStack_2b8;
  ulong *puStack_2b0;
  ulong *puStack_2a8;
  undefined8 **ppuStack_2a0;
  undefined8 **ppuStack_298;
  undefined8 **ppuStack_290;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_219;
  undefined8 **ppuStack_218;
  ulong uStack_210;
  byte bStack_201;
  ulong *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 **ppuStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_194;
  int iStack_18c;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  int iStack_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  ulong **ppuStack_140;
  ulong **ppuStack_138;
  ulong **ppuStack_130;
  ulong **ppuStack_128;
  ulong **ppuStack_120;
  ulong *puStack_118;
  ulong **ppuStack_110;
  ulong **ppuStack_108;
  ulong **ppuStack_100;
  ulong **ppuStack_f8;
  ulong **ppuStack_f0;
  undefined1 *puStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [32];
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000100480b50(param_3,"grpc.parse_fault_injection_method_config",0);
  uVar8 = uStack_14c._4_4_;
  uVar7 = uStack_194._4_4_;
  uStack_194._4_4_ = uVar7;
  uStack_14c._4_4_ = uVar8;
  if ((param_3 & 1) == 0) {
    *param_1 = 0;
    uVar5 = uStack_194;
    uVar6 = uStack_14c;
    goto LAB_104a929c0;
  }
  ppuStack_2a0 = (undefined8 ***)0x0;
  ppuStack_298 = (undefined8 ***)0x0;
  ppuStack_290 = (undefined8 ***)0x0;
  lStack_2b8 = 0;
  puStack_2b0 = (ulong *)0x0;
  param_4 = param_4 + 0x20;
  puStack_2a8 = (ulong *)0x0;
  uVar5 = uStack_194;
  uVar6 = uStack_14c;
  FUN_104a92c14(param_4,"faultInjectionPolicy",0x14,&plStack_2c0,&lStack_2b8,1);
  uVar6 = uStack_14c;
  uVar5 = uStack_194;
  if ((int)param_4 != 0) {
    ppuStack_2d8 = (undefined8 ***)0x0;
    ppuStack_2d0 = (undefined8 ***)0x0;
    ppuStack_2e0 = (undefined8 ***)0x0;
    lVar20 = *plStack_2c0;
    if (plStack_2c0[1] != lVar20) {
      lVar18 = 0;
      uVar21 = 0;
      do {
        puStack_1d0 = (undefined8 **)0x0;
        puStack_1d8 = (undefined8 **)0x0;
        puStack_1c0 = (undefined8 **)0x0;
        puStack_1c8 = (undefined8 **)0x0;
        puStack_1b0 = (undefined8 **)0x0;
        puStack_1b8 = (undefined8 **)0x0;
        puStack_1a8 = (undefined8 **)0x0;
        uStack_194 = 0;
        uStack_194._4_4_ = 0;
        puStack_1a0 = (undefined8 **)0x0;
        uStack_198 = 0;
        ppuStack_1e0 = (undefined8 **)((ulong)ppuStack_1e0 & 0xffffffff00000000);
        iStack_18c = 100;
        puStack_180 = (undefined8 **)0x0;
        puStack_188 = (undefined8 **)0x0;
        puStack_170 = (undefined8 **)0x0;
        puStack_178 = (undefined8 **)0x0;
        uStack_160 = 0;
        puStack_168 = (undefined8 **)0x0;
        iStack_154 = 0;
        uStack_150 = 0;
        uStack_15c = 0;
        uStack_158 = 0;
        uStack_14c = 0xffffffff00000064;
        uStack_14c._4_4_ = 0xffffffff;
        puStack_1f8 = (undefined8 **)0x0;
        puStack_1f0 = (undefined8 **)0x0;
        puStack_1e8 = (undefined8 **)0x0;
        if (*(int *)(lVar20 + lVar18) == 5) {
          uVar11 = lVar20 + lVar18 + 0x20;
          ppuStack_138 = (ulong **)0x0;
          ppuStack_140 = (ulong **)0x0;
          ppuStack_130 = (ulong **)0x0;
          uVar17 = uVar11;
          FUN_104a92fdc(uVar11,"abortCode",9,&ppuStack_140,&puStack_1f8,0);
          uVar7 = uStack_14c._4_4_;
          uVar5 = uStack_194;
          uVar6 = uStack_14c;
          if ((int)uVar17 != 0) {
            pppuVar10 = (ulong ***)ppuStack_140;
            if (-1 < (long)ppuStack_130) {
              pppuVar10 = &ppuStack_140;
            }
            uVar8 = uStack_194._4_4_;
            uStack_194 = uVar5;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar8;
            uStack_14c._4_4_ = uVar7;
            FUN_104ab13b0(pppuVar10,&ppuStack_1e0);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            uVar7 = uStack_14c._4_4_;
            if (((ulong)pppuVar10 & 1) == 0) {
              uStack_248 = 0;
              uStack_240 = 0;
              puStack_250 = (undefined8 **)0x0;
              uVar7 = uStack_194._4_4_;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uStack_14c = uVar6;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              FUN_104ab5920(&ppuStack_110,2,"field:abortCode error:failed to parse status code",0x31
                            ,&ppuStack_218,&puStack_250);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              if (puStack_1f0 < puStack_1e8) {
                *puStack_1f0 = ppuStack_110;
                ppuStack_110 = (ulong **)0x36;
                puStack_1f0 = puStack_1f0 + 1;
              }
              else {
                lVar20 = (long)puStack_1f0 - (long)puStack_1f8 >> 3;
                uVar17 = lVar20 + 1;
                uStack_194 = uVar5;
                uStack_14c = uVar6;
                if (uVar17 >> 0x3d != 0) {
                  uVar7 = uStack_194._4_4_;
                  uVar8 = uStack_14c._4_4_;
                  uVar5 = uStack_194;
                  uStack_194._4_4_ = uVar7;
                  uVar6 = uStack_14c;
                  uStack_14c._4_4_ = uVar8;
                  FUN_104a83ee4(&puStack_1f8);
                  uVar6 = uStack_14c;
                  uVar5 = uStack_194;
                  goto LAB_104a92a38;
                }
                uVar16 = (long)puStack_1e8 - (long)puStack_1f8 >> 2;
                if (uVar16 <= uVar17) {
                  uVar16 = uVar17;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)puStack_1e8 - (long)puStack_1f8)) {
                  uVar16 = 0x1fffffffffffffff;
                }
                if (uVar16 == 0) {
                  ppuVar12 = (undefined8 **)0x0;
                  ppuStack_90 = &puStack_1e8;
                }
                else {
                  ppuVar12 = &puStack_1e8;
                  uVar7 = uStack_194._4_4_;
                  uVar8 = uStack_14c._4_4_;
                  ppuStack_90 = &puStack_1e8;
                  uVar5 = uStack_194;
                  uStack_194._4_4_ = uVar7;
                  uVar6 = uStack_14c;
                  uStack_14c._4_4_ = uVar8;
                  FUN_104a83ef8();
                  uVar6 = uStack_14c;
                  uVar5 = uStack_194;
                }
                uStack_14c = uVar6;
                uStack_194 = uVar5;
                uVar8 = uStack_14c._4_4_;
                uVar6 = uStack_14c;
                uVar7 = uStack_194._4_4_;
                uVar5 = uStack_194;
                ppuVar2 = ppuVar12 + lVar20;
                uStack_194._4_4_ = uVar7;
                uStack_14c._4_4_ = uVar8;
                *ppuVar2 = ppuStack_110;
                ppuStack_110 = (ulong **)0x36;
                uVar7 = uStack_194._4_4_;
                uStack_194 = uVar5;
                uVar8 = uStack_14c._4_4_;
                uStack_14c = uVar6;
                ppuStack_b0 = ppuVar12;
                ppuStack_a8 = ppuVar2;
                ppuStack_a0 = ppuVar2 + 1;
                ppuStack_98 = ppuVar12 + uVar16;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                FUN_104a83e70(&puStack_1f8,&ppuStack_b0);
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
                puVar19 = puStack_1f0;
                uVar7 = uStack_194._4_4_;
                uStack_194 = uVar5;
                uVar8 = uStack_14c._4_4_;
                uStack_14c = uVar6;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                FUN_104a84040(&ppuStack_b0);
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
                puStack_1f0 = puVar19;
                if (((ulong)ppuStack_110 & 1) != 0) {
                  uVar7 = uStack_194._4_4_;
                  uStack_194 = uVar5;
                  uVar8 = uStack_14c._4_4_;
                  uStack_14c = uVar6;
                  uVar5 = uStack_194;
                  uStack_194._4_4_ = uVar7;
                  uVar6 = uStack_14c;
                  uStack_14c._4_4_ = uVar8;
                  func_0x00010084dad0();
                  uVar6 = uStack_14c;
                  uVar5 = uStack_194;
                }
              }
              uStack_14c = uVar6;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uVar7 = uStack_194._4_4_;
              ppuStack_b0 = &puStack_250;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              func_0x000100482b64(&ppuStack_b0);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              uVar7 = uStack_14c._4_4_;
            }
          }
          uStack_14c._4_4_ = uVar7;
          uStack_14c = uVar6;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uVar7 = uStack_194._4_4_;
          uVar17 = uVar11;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_104a92fdc(uVar11,"abortMessage",0xc,&puStack_1d8,&puStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          if ((uVar17 & 1) == 0) {
            uVar7 = uStack_194._4_4_;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uStack_14c = uVar6;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                      (&puStack_1d8,"Fault injected");
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
          }
          uStack_14c = uVar6;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uVar7 = uStack_194._4_4_;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_104a92fdc(uVar11,"abortCodeHeader",0xf,&puStack_1c0,&puStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uStack_14c = uVar6;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_104a92fdc(uVar11,"abortPercentageHeader",0x15,&puStack_1a8,&puStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uStack_14c = uVar6;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_104a932fc(uVar11,"abortPercentageNumerator",0x18,(long)&uStack_194 + 4,&puStack_1f8,0)
          ;
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar17 = uVar11;
          uVar7 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uStack_14c = uVar6;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_104a932fc(uVar11,"abortPercentageDenominator",0x1a,&iStack_18c,&puStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          if (((((int)uVar17 != 0) && (iStack_18c != 100)) && (iStack_18c != 10000)) &&
             (iStack_18c != 1000000)) {
            uStack_260 = 0;
            uStack_258 = 0;
            puStack_268 = (undefined8 **)0x0;
            uVar7 = uStack_194._4_4_;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uStack_14c = uVar6;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            FUN_104ab5920(&ppuStack_110,2,
                          "field:abortPercentageDenominator error:Denominator can only be one of 100, 10000, 1000000"
                          ,0x59,&ppuStack_218,&puStack_268);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            if (puStack_1f0 < puStack_1e8) {
              *puStack_1f0 = ppuStack_110;
              ppuStack_110 = (ulong **)0x36;
              puStack_1f0 = puStack_1f0 + 1;
            }
            else {
              lVar20 = (long)puStack_1f0 - (long)puStack_1f8 >> 3;
              uVar17 = lVar20 + 1;
              uStack_194 = uVar5;
              uStack_14c = uVar6;
              if (uVar17 >> 0x3d != 0) {
                uVar7 = uStack_194._4_4_;
                uVar8 = uStack_14c._4_4_;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                FUN_104a83ee4(&puStack_1f8);
                uVar8 = uStack_14c._4_4_;
                uVar7 = uStack_194._4_4_;
                uVar5 = uStack_194;
                uVar6 = uStack_14c;
                uStack_194._4_4_ = uVar7;
                uStack_14c._4_4_ = uVar8;
                goto LAB_104a92a38;
              }
              uVar16 = (long)puStack_1e8 - (long)puStack_1f8 >> 2;
              if (uVar16 <= uVar17) {
                uVar16 = uVar17;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)puStack_1e8 - (long)puStack_1f8)) {
                uVar16 = 0x1fffffffffffffff;
              }
              if (uVar16 == 0) {
                ppuVar12 = (undefined8 **)0x0;
                ppuStack_90 = &puStack_1e8;
              }
              else {
                ppuVar12 = &puStack_1e8;
                uVar7 = uStack_194._4_4_;
                uVar8 = uStack_14c._4_4_;
                ppuStack_90 = &puStack_1e8;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                FUN_104a83ef8();
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
              }
              uStack_14c = uVar6;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uVar6 = uStack_14c;
              uVar7 = uStack_194._4_4_;
              uVar5 = uStack_194;
              ppuVar2 = ppuVar12 + lVar20;
              uStack_194._4_4_ = uVar7;
              uStack_14c._4_4_ = uVar8;
              *ppuVar2 = ppuStack_110;
              ppuStack_110 = (ulong **)0x36;
              uVar7 = uStack_194._4_4_;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uStack_14c = uVar6;
              ppuStack_b0 = ppuVar12;
              ppuStack_a8 = ppuVar2;
              ppuStack_a0 = ppuVar2 + 1;
              ppuStack_98 = ppuVar12 + uVar16;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              FUN_104a83e70(&puStack_1f8,&ppuStack_b0);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              puVar19 = puStack_1f0;
              uVar7 = uStack_194._4_4_;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uStack_14c = uVar6;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              FUN_104a84040(&ppuStack_b0);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              puStack_1f0 = puVar19;
              if (((ulong)ppuStack_110 & 1) != 0) {
                uVar7 = uStack_194._4_4_;
                uStack_194 = uVar5;
                uVar8 = uStack_14c._4_4_;
                uStack_14c = uVar6;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                func_0x00010084dad0();
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
              }
            }
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uVar7 = uStack_194._4_4_;
            ppuStack_b0 = &puStack_268;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            func_0x000100482b64(&ppuStack_b0);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
          }
          uStack_14c = uVar6;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uVar7 = uStack_194._4_4_;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_104ac973c(uVar11,"delay",5,&puStack_188,&puStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uStack_14c = uVar6;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_104a92fdc(uVar11,"delayHeader",0xb,&puStack_180,&puStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uStack_14c = uVar6;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_104a92fdc(uVar11,"delayPercentageHeader",0x15,&puStack_168,&puStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uStack_14c = uVar6;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_104a932fc(uVar11,"delayPercentageNumerator",0x18,&uStack_150,&puStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar17 = uVar11;
          uVar7 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uStack_14c = uVar6;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_104a932fc(uVar11,"delayPercentageDenominator",0x1a,&uStack_14c,&puStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          if ((((int)uVar17 != 0) && (uStack_14c._0_4_ = (int)uVar6, (int)uStack_14c != 100)) &&
             (((int)uStack_14c != 10000 && ((int)uStack_14c != 1000000)))) {
            uStack_278 = 0;
            uStack_270 = 0;
            puStack_280 = (undefined8 **)0x0;
            uVar7 = uStack_194._4_4_;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uStack_14c = uVar6;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            FUN_104ab5920(&ppuStack_110,2,
                          "field:delayPercentageDenominator error:Denominator can only be one of 100, 10000, 1000000"
                          ,0x59,&ppuStack_218,&puStack_280);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            if (puStack_1f0 < puStack_1e8) {
              *puStack_1f0 = ppuStack_110;
              ppuStack_110 = (ulong **)0x36;
              puStack_1f0 = puStack_1f0 + 1;
            }
            else {
              lVar20 = (long)puStack_1f0 - (long)puStack_1f8 >> 3;
              uVar17 = lVar20 + 1;
              uStack_194 = uVar5;
              uStack_14c = uVar6;
              if (uVar17 >> 0x3d != 0) {
                uVar7 = uStack_194._4_4_;
                uVar8 = uStack_14c._4_4_;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                FUN_104a83ee4(&puStack_1f8);
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
                goto LAB_104a92a38;
              }
              uVar16 = (long)puStack_1e8 - (long)puStack_1f8 >> 2;
              if (uVar16 <= uVar17) {
                uVar16 = uVar17;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)puStack_1e8 - (long)puStack_1f8)) {
                uVar16 = 0x1fffffffffffffff;
              }
              if (uVar16 == 0) {
                ppuVar12 = (undefined8 **)0x0;
                ppuStack_90 = &puStack_1e8;
              }
              else {
                ppuVar12 = &puStack_1e8;
                uVar7 = uStack_194._4_4_;
                uVar8 = uStack_14c._4_4_;
                ppuStack_90 = &puStack_1e8;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                FUN_104a83ef8();
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
              }
              uStack_14c = uVar6;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uVar6 = uStack_14c;
              uVar7 = uStack_194._4_4_;
              uVar5 = uStack_194;
              ppuVar2 = ppuVar12 + lVar20;
              uStack_194._4_4_ = uVar7;
              uStack_14c._4_4_ = uVar8;
              *ppuVar2 = ppuStack_110;
              ppuStack_110 = (ulong **)0x36;
              uVar7 = uStack_194._4_4_;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uStack_14c = uVar6;
              ppuStack_b0 = ppuVar12;
              ppuStack_a8 = ppuVar2;
              ppuStack_a0 = ppuVar2 + 1;
              ppuStack_98 = ppuVar12 + uVar16;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              FUN_104a83e70(&puStack_1f8,&ppuStack_b0);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              puVar19 = puStack_1f0;
              uVar7 = uStack_194._4_4_;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uStack_14c = uVar6;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              FUN_104a84040(&ppuStack_b0);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              puStack_1f0 = puVar19;
              if (((ulong)ppuStack_110 & 1) != 0) {
                uVar7 = uStack_194._4_4_;
                uStack_194 = uVar5;
                uVar8 = uStack_14c._4_4_;
                uStack_14c = uVar6;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                func_0x00010084dad0();
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
              }
            }
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uVar7 = uStack_194._4_4_;
            ppuStack_b0 = &puStack_280;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            func_0x000100482b64(&ppuStack_b0);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
          }
          uStack_14c = uVar6;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uVar7 = uStack_194._4_4_;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          FUN_104a932fc(uVar11,"maxFaults",9,(long)&uStack_14c + 4,&puStack_1f8,0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uVar8 = uStack_14c._4_4_;
          if (puStack_1f8 != puStack_1f0) {
            ppuStack_b0 = (undefined8 **)0x10f2334dc;
            ppuStack_a8 = (undefined8 **)0x2b;
            uVar11 = uVar21;
            uStack_194 = uVar5;
            uStack_14c = uVar6;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            func_0x00010ae8b9f0(uVar21,auStack_d0);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            lStack_d8 = uVar11 - (long)auStack_d0;
            uVar7 = uStack_194._4_4_;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uStack_14c = uVar6;
            puStack_e0 = auStack_d0;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            func_0x00010047c83c(&ppuStack_218,&ppuStack_b0,&puStack_e0);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            uVar11 = uStack_210;
            pppuVar10 = (ulong ***)ppuStack_218;
            if (-1 < (char)bStack_201) {
              uVar11 = (ulong)bStack_201;
              pppuVar10 = &ppuStack_218;
            }
            uVar7 = uStack_194._4_4_;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uStack_14c = uVar6;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            FUN_104a92f34(&puStack_118,&puStack_200,pppuVar10,uVar11,&puStack_1f8);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            if (puStack_2b0 < puStack_2a8) {
              *puStack_2b0 = (ulong)puStack_118;
              puStack_118 = (ulong *)0x36;
              puStack_2b0 = puStack_2b0 + 1;
            }
            else {
              lVar20 = (long)puStack_2b0 - lStack_2b8 >> 3;
              uVar11 = lVar20 + 1;
              if (uVar11 >> 0x3d != 0) goto LAB_104a92a0c;
              uVar17 = (long)puStack_2a8 - lStack_2b8 >> 2;
              if (uVar17 <= uVar11) {
                uVar17 = uVar11;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)puStack_2a8 - lStack_2b8)) {
                uVar17 = 0x1fffffffffffffff;
              }
              ppuStack_f0 = &puStack_2a8;
              if (uVar17 == 0) {
                ppuVar13 = (ulong **)0x0;
              }
              else {
                ppuVar13 = &puStack_2a8;
                uVar7 = uStack_194._4_4_;
                uStack_194 = uVar5;
                uVar8 = uStack_14c._4_4_;
                uStack_14c = uVar6;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                FUN_104a83ef8();
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
              }
              uStack_14c = uVar6;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uVar6 = uStack_14c;
              uVar7 = uStack_194._4_4_;
              uVar5 = uStack_194;
              ppuVar1 = ppuVar13 + lVar20;
              uStack_194._4_4_ = uVar7;
              uStack_14c._4_4_ = uVar8;
              *ppuVar1 = puStack_118;
              puStack_118 = (ulong *)0x36;
              uVar7 = uStack_194._4_4_;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uStack_14c = uVar6;
              ppuStack_110 = ppuVar13;
              ppuStack_108 = ppuVar1;
              ppuStack_100 = ppuVar1 + 1;
              ppuStack_f8 = ppuVar13 + uVar17;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              FUN_104a83e70(&lStack_2b8,&ppuStack_110);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              puVar3 = puStack_2b0;
              uVar7 = uStack_194._4_4_;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uStack_14c = uVar6;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              FUN_104a84040(&ppuStack_110);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              puStack_2b0 = puVar3;
              if (((ulong)puStack_118 & 1) != 0) {
                uVar7 = uStack_194._4_4_;
                uStack_194 = uVar5;
                uVar8 = uStack_14c._4_4_;
                uStack_14c = uVar6;
                uVar5 = uStack_194;
                uStack_194._4_4_ = uVar7;
                uVar6 = uStack_14c;
                uStack_14c._4_4_ = uVar8;
                func_0x00010084dad0();
                uVar6 = uStack_14c;
                uVar5 = uStack_194;
              }
            }
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uVar7 = uStack_194._4_4_;
            uVar5 = uStack_194;
            uVar6 = uStack_14c;
            if ((char)bStack_201 < '\0') {
              uStack_194._4_4_ = uVar7;
              uStack_14c._4_4_ = uVar8;
              __ZdlPv(ppuStack_218);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              uVar7 = uStack_194._4_4_;
              uVar8 = uStack_14c._4_4_;
            }
          }
          uStack_14c._4_4_ = uVar8;
          uStack_194._4_4_ = uVar7;
          uStack_14c = uVar6;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uVar7 = uStack_194._4_4_;
          if (ppuStack_2d8 < ppuStack_2d0) {
            *(undefined4 *)ppuStack_2d8 = ppuStack_1e0._0_4_;
            uStack_14c._4_4_ = uVar8;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppuStack_2d8[3] = puStack_1c8;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppuStack_2d8[2] = puStack_1d0;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppuStack_2d8[1] = puStack_1d8;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            puStack_1d0 = (undefined8 **)0x0;
            puStack_1c8 = (undefined8 **)0x0;
            puStack_1d8 = (undefined8 **)0x0;
            ppuStack_2d8[5] = puStack_1b8;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppuStack_2d8[4] = puStack_1c0;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppuStack_2d8[6] = puStack_1b0;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            puStack_1b8 = (undefined8 **)0x0;
            puStack_1b0 = (undefined8 **)0x0;
            puStack_1c0 = (undefined8 **)0x0;
            ppuStack_2d8[9] = (undefined8 **)CONCAT84(uVar5,uStack_198);
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppuStack_2d8[8] = puStack_1a0;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppuStack_2d8[7] = puStack_1a8;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            puStack_1a0 = (undefined8 **)0x0;
            puStack_1a8 = (undefined8 **)0x0;
            ppuVar12 = (undefined8 **)CONCAT44(iStack_18c,uStack_194._4_4_);
            ppuStack_2d8[0xb] = puStack_188;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppuStack_2d8[10] = ppuVar12;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppuStack_2d8[0xe] = puStack_170;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppuStack_2d8[0xd] = puStack_178;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppuStack_2d8[0xc] = puStack_180;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            puStack_180 = (undefined8 **)0x0;
            puStack_178 = (undefined8 **)0x0;
            puStack_170 = (undefined8 **)0x0;
            ppuStack_2d8[0x11] = (undefined8 **)CONCAT44(iStack_154,uStack_158);
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppuStack_2d8[0x10] = (undefined8 **)CONCAT44(uStack_15c,uStack_160);
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppuStack_2d8[0xf] = puStack_168;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            puStack_168 = (undefined8 **)0x0;
            uStack_160 = 0;
            uStack_15c = 0;
            uStack_158 = 0;
            iStack_154 = 0;
            ppuVar12 = (undefined8 **)CONCAT84(uVar6,uStack_150);
            *(undefined4 *)(ppuStack_2d8 + 0x13) = uStack_14c._4_4_;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            ppuStack_2d8[0x12] = ppuVar12;
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            pppuVar15 = (undefined8 ***)(ppuStack_2d8 + 0x14);
          }
          else {
            pppuVar15 = &ppuStack_2e0;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            FUN_104a93ce4(pppuVar15,&ppuStack_1e0);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
          }
          uStack_14c = uVar6;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uVar7 = uStack_194._4_4_;
          pppuVar10 = (ulong ***)ppuStack_140;
          ppuStack_2d8 = pppuVar15;
          uVar5 = uStack_194;
          uVar6 = uStack_14c;
          uStack_194._4_4_ = uVar7;
          uStack_14c._4_4_ = uVar8;
          if ((long)ppuStack_130 < 0) {
LAB_104a9282c:
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uVar7 = uStack_194._4_4_;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            __ZdlPv(pppuVar10);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
          }
        }
        else {
          ppuStack_b0 = (undefined8 **)0x10f2332e4;
          ppuStack_a8 = (undefined8 **)0x1b;
          uVar11 = uVar21;
          func_0x00010ae8b9f0(uVar21,auStack_d0);
          uVar7 = uStack_14c._4_4_;
          uVar5 = uStack_194;
          lStack_d8 = uVar11 - (long)auStack_d0;
          ppuStack_110 = (ulong **)0x10f233300;
          ppuStack_108 = (ulong **)0x15;
          uVar8 = uStack_194._4_4_;
          uStack_194 = uVar5;
          puStack_e0 = auStack_d0;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar8;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar7;
          func_0x000100066c24(&ppuStack_218,&ppuStack_b0,&puStack_e0,&ppuStack_110);
          uVar7 = uStack_14c._4_4_;
          uVar5 = uStack_194;
          uVar11 = uStack_210;
          pppuVar10 = (ulong ***)ppuStack_218;
          if (-1 < (char)bStack_201) {
            uVar11 = (ulong)bStack_201;
            pppuVar10 = &ppuStack_218;
          }
          uStack_230 = 0;
          uStack_228 = 0;
          puStack_238 = (ulong **)0x0;
          uVar8 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar8;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar7;
          FUN_104ab5920(&puStack_200,2,pppuVar10,uVar11,&uStack_219,&puStack_238);
          uVar8 = uStack_14c._4_4_;
          uVar7 = uStack_194._4_4_;
          uStack_194._4_4_ = uVar7;
          uStack_14c._4_4_ = uVar8;
          if (puStack_2b0 < puStack_2a8) {
            *puStack_2b0 = (ulong)puStack_200;
            puStack_200 = (ulong *)0x36;
            puStack_2b0 = puStack_2b0 + 1;
            uVar5 = uStack_194;
            uVar6 = uStack_14c;
          }
          else {
            lVar20 = (long)puStack_2b0 - lStack_2b8 >> 3;
            uVar11 = lVar20 + 1;
            if (uVar11 >> 0x3d != 0) {
              uVar5 = uStack_194;
              uVar6 = uStack_14c;
              FUN_104a83ee4(&lStack_2b8);
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
              goto LAB_104a92a38;
            }
            uVar17 = (long)puStack_2a8 - lStack_2b8 >> 2;
            if (uVar17 <= uVar11) {
              uVar17 = uVar11;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)puStack_2a8 - lStack_2b8)) {
              uVar17 = 0x1fffffffffffffff;
            }
            ppuStack_120 = &puStack_2a8;
            if (uVar17 == 0) {
              ppuVar13 = (ulong **)0x0;
              uVar5 = uStack_194;
              uVar6 = uStack_14c;
            }
            else {
              ppuVar13 = &puStack_2a8;
              uVar5 = uStack_194;
              uVar6 = uStack_14c;
              FUN_104a83ef8();
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
            }
            uStack_14c = uVar6;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uVar6 = uStack_14c;
            uVar7 = uStack_194._4_4_;
            uVar5 = uStack_194;
            ppuVar1 = ppuVar13 + lVar20;
            uStack_194._4_4_ = uVar7;
            uStack_14c._4_4_ = uVar8;
            *ppuVar1 = puStack_200;
            puStack_200 = (ulong *)0x36;
            uVar7 = uStack_194._4_4_;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uStack_14c = uVar6;
            ppuStack_140 = ppuVar13;
            ppuStack_138 = ppuVar1;
            ppuStack_130 = ppuVar1 + 1;
            ppuStack_128 = ppuVar13 + uVar17;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            FUN_104a83e70(&lStack_2b8,&ppuStack_140);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            puVar3 = puStack_2b0;
            uVar7 = uStack_194._4_4_;
            uStack_194 = uVar5;
            uVar8 = uStack_14c._4_4_;
            uStack_14c = uVar6;
            uVar5 = uStack_194;
            uStack_194._4_4_ = uVar7;
            uVar6 = uStack_14c;
            uStack_14c._4_4_ = uVar8;
            FUN_104a84040(&ppuStack_140);
            uVar6 = uStack_14c;
            uVar5 = uStack_194;
            puStack_2b0 = puVar3;
            if (((ulong)puStack_200 & 1) != 0) {
              uVar7 = uStack_194._4_4_;
              uStack_194 = uVar5;
              uVar8 = uStack_14c._4_4_;
              uStack_14c = uVar6;
              uVar5 = uStack_194;
              uStack_194._4_4_ = uVar7;
              uVar6 = uStack_14c;
              uStack_14c._4_4_ = uVar8;
              func_0x00010084dad0();
              uVar6 = uStack_14c;
              uVar5 = uStack_194;
            }
          }
          uStack_14c = uVar6;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uVar7 = uStack_194._4_4_;
          ppuStack_140 = &puStack_238;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          func_0x000100482b64(&ppuStack_140);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          pppuVar10 = (ulong ***)ppuStack_218;
          if ((char)bStack_201 < '\0') goto LAB_104a9282c;
        }
        uStack_14c = uVar6;
        uStack_194 = uVar5;
        uVar8 = uStack_14c._4_4_;
        uVar7 = uStack_194._4_4_;
        ppuStack_b0 = &puStack_1f8;
        uVar5 = uStack_194;
        uStack_194._4_4_ = uVar7;
        uVar6 = uStack_14c;
        uStack_14c._4_4_ = uVar8;
        func_0x000100482b64(&ppuStack_b0);
        uVar6 = uStack_14c;
        uVar5 = uStack_194;
        if (iStack_154 < 0) {
          uVar7 = uStack_194._4_4_;
          uStack_194 = uVar5;
          uVar8 = uStack_14c._4_4_;
          uStack_14c = uVar6;
          uVar5 = uStack_194;
          uStack_194._4_4_ = uVar7;
          uVar6 = uStack_14c;
          uStack_14c._4_4_ = uVar8;
          __ZdlPv(puStack_168);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
        }
        uStack_14c = uVar6;
        uStack_194 = uVar5;
        uVar8 = uStack_14c._4_4_;
        uVar7 = uStack_194._4_4_;
        uVar5 = uStack_194;
        uVar6 = uStack_14c;
        if ((long)puStack_170 < 0) {
          uStack_194._4_4_ = uVar7;
          uStack_14c._4_4_ = uVar8;
          __ZdlPv(puStack_180);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uVar8 = uStack_14c._4_4_;
        }
        uStack_14c._4_4_ = uVar8;
        uStack_194._4_4_ = uVar7;
        uStack_14c = uVar6;
        uStack_194 = uVar5;
        uVar8 = uStack_14c._4_4_;
        uVar7 = uStack_194._4_4_;
        uVar5 = uStack_194;
        uVar6 = uStack_14c;
        if (uStack_194._3_1_ < '\0') {
          uStack_194._4_4_ = uVar7;
          uStack_14c._4_4_ = uVar8;
          __ZdlPv(puStack_1a8);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uVar8 = uStack_14c._4_4_;
        }
        uStack_14c._4_4_ = uVar8;
        uStack_194._4_4_ = uVar7;
        uStack_14c = uVar6;
        uStack_194 = uVar5;
        uVar8 = uStack_14c._4_4_;
        uVar7 = uStack_194._4_4_;
        uVar5 = uStack_194;
        uVar6 = uStack_14c;
        if ((long)puStack_1b0 < 0) {
          uStack_194._4_4_ = uVar7;
          uStack_14c._4_4_ = uVar8;
          __ZdlPv(puStack_1c0);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uVar8 = uStack_14c._4_4_;
        }
        uStack_14c._4_4_ = uVar8;
        uStack_194._4_4_ = uVar7;
        uStack_14c = uVar6;
        uStack_194 = uVar5;
        uVar8 = uStack_14c._4_4_;
        uVar7 = uStack_194._4_4_;
        uVar5 = uStack_194;
        uVar6 = uStack_14c;
        if ((long)puStack_1c8 < 0) {
          uStack_194._4_4_ = uVar7;
          uStack_14c._4_4_ = uVar8;
          __ZdlPv(puStack_1d8);
          uVar6 = uStack_14c;
          uVar5 = uStack_194;
          uVar7 = uStack_194._4_4_;
          uVar8 = uStack_14c._4_4_;
        }
        uStack_14c._4_4_ = uVar8;
        uStack_194._4_4_ = uVar7;
        uStack_14c = uVar6;
        uStack_194 = uVar5;
        uVar8 = uStack_14c._4_4_;
        uVar7 = uStack_194._4_4_;
        uVar21 = uVar21 + 1;
        lVar20 = *plStack_2c0;
        lVar18 = lVar18 + 0x50;
        uVar5 = uStack_194;
        uVar6 = uStack_14c;
        uStack_194._4_4_ = uVar7;
        uStack_14c._4_4_ = uVar8;
      } while (uVar21 < (ulong)((plStack_2c0[1] - lVar20 >> 4) * -0x3333333333333333));
    }
    uStack_14c = uVar6;
    uStack_194 = uVar5;
    uVar8 = uStack_14c._4_4_;
    uVar7 = uStack_194._4_4_;
    uVar5 = uStack_194;
    uStack_194._4_4_ = uVar7;
    uVar6 = uStack_14c;
    uStack_14c._4_4_ = uVar8;
    FUN_104a94244(&ppuStack_2a0);
    uVar6 = uStack_14c;
    uVar5 = uStack_194;
    ppuStack_298 = ppuStack_2d8;
    ppuStack_2a0 = ppuStack_2e0;
    ppuStack_290 = ppuStack_2d0;
    ppuStack_2d8 = (undefined8 ***)0x0;
    ppuStack_2d0 = (undefined8 ***)0x0;
    ppuStack_2e0 = (undefined8 ***)0x0;
    ppuStack_1e0 = &ppuStack_2e0;
    uVar7 = uStack_194._4_4_;
    uStack_194 = uVar5;
    uVar8 = uStack_14c._4_4_;
    uStack_14c = uVar6;
    uVar5 = uStack_194;
    uStack_194._4_4_ = uVar7;
    uVar6 = uStack_14c;
    uStack_14c._4_4_ = uVar8;
    FUN_104a941c0(&ppuStack_1e0);
    uVar6 = uStack_14c;
    uVar5 = uStack_194;
  }
  uStack_14c = uVar6;
  uStack_194 = uVar5;
  uVar8 = uStack_14c._4_4_;
  uVar7 = uStack_194._4_4_;
  uVar5 = uStack_194;
  uStack_194._4_4_ = uVar7;
  uVar6 = uStack_14c;
  uStack_14c._4_4_ = uVar8;
  FUN_104a92f34(&ppuStack_1e0,&ppuStack_b0,"Fault injection parser",0x16,&lStack_2b8);
  uVar6 = uStack_14c;
  uVar5 = uStack_194;
  pppuVar15 = (undefined8 ***)ppuStack_1e0;
  pppuVar14 = (undefined8 ***)*param_5;
  if ((undefined8 ***)ppuStack_1e0 == pppuVar14) {
LAB_104a92930:
    uStack_14c = uVar6;
    uStack_194 = uVar5;
    uVar8 = uStack_14c._4_4_;
    uVar7 = uStack_194._4_4_;
    uVar5 = uStack_194;
    uVar6 = uStack_14c;
    if (((ulong)pppuVar14 & 1) != 0) {
      uStack_194._4_4_ = uVar7;
      uStack_14c._4_4_ = uVar8;
      func_0x00010084dad0();
      uVar6 = uStack_14c;
      uVar5 = uStack_194;
      uVar7 = uStack_194._4_4_;
      uVar8 = uStack_14c._4_4_;
    }
    uStack_14c._4_4_ = uVar8;
    uStack_194._4_4_ = uVar7;
    uStack_14c = uVar6;
    uStack_194 = uVar5;
    uVar8 = uStack_14c._4_4_;
    uVar7 = uStack_194._4_4_;
    pppuVar15 = (undefined8 ***)*param_5;
    uVar5 = uStack_194;
    uVar6 = uStack_14c;
    uStack_194._4_4_ = uVar7;
    uStack_14c._4_4_ = uVar8;
  }
  else {
    *param_5 = ppuStack_1e0;
    ppuStack_1e0 = (undefined8 ***)0x36;
    if (((ulong)pppuVar14 & 1) != 0) {
      uVar7 = uStack_194._4_4_;
      uStack_194 = uVar5;
      uVar8 = uStack_14c._4_4_;
      uStack_14c = uVar6;
      uVar5 = uStack_194;
      uStack_194._4_4_ = uVar7;
      uVar6 = uStack_14c;
      uStack_14c._4_4_ = uVar8;
      func_0x00010084dad0();
      uVar6 = uStack_14c;
      uVar5 = uStack_194;
      pppuVar14 = (undefined8 ***)ppuStack_1e0;
      goto LAB_104a92930;
    }
  }
  uStack_14c = uVar6;
  uStack_194 = uVar5;
  uVar8 = uStack_14c._4_4_;
  uVar7 = uStack_194._4_4_;
  ppuVar2 = ppuStack_298;
  ppuVar12 = ppuStack_2a0;
  if ((pppuVar15 == (undefined8 ***)0x0) && (ppuStack_2a0 != ppuStack_298)) {
    puVar19 = (undefined8 *)0x20;
    uVar5 = uStack_194;
    uStack_194._4_4_ = uVar7;
    uVar6 = uStack_14c;
    uStack_14c._4_4_ = uVar8;
    __Znwm();
    uVar6 = uStack_14c;
    uVar5 = uStack_194;
    ppuVar4 = ppuStack_290;
    ppuStack_2a0 = (undefined8 ***)0x0;
    ppuStack_298 = (undefined8 ***)0x0;
    ppuStack_290 = (undefined8 ***)0x0;
    *puVar19 = &PTR_FUN_1107c3760;
    puVar19[1] = ppuVar12;
    puVar19[2] = ppuVar2;
    puVar19[3] = ppuVar4;
    puStack_1d8 = (undefined8 **)0x0;
    puStack_1d0 = (undefined8 **)0x0;
    ppuStack_1e0 = (undefined8 **)0x0;
    ppuStack_b0 = &ppuStack_1e0;
    uVar7 = uStack_194._4_4_;
    uStack_194 = uVar5;
    uVar8 = uStack_14c._4_4_;
    uStack_14c = uVar6;
    uVar5 = uStack_194;
    uStack_194._4_4_ = uVar7;
    uVar6 = uStack_14c;
    uStack_14c._4_4_ = uVar8;
    FUN_104a941c0(&ppuStack_b0);
    uVar6 = uStack_14c;
    uVar5 = uStack_194;
  }
  else {
    puVar19 = (undefined8 *)0x0;
    uVar5 = uStack_194;
    uVar6 = uStack_14c;
    uStack_194._4_4_ = uVar7;
    uStack_14c._4_4_ = uVar8;
  }
  uStack_14c = uVar6;
  uStack_194 = uVar5;
  uVar8 = uStack_14c._4_4_;
  uVar7 = uStack_194._4_4_;
  *param_1 = puVar19;
  ppuStack_1e0 = (undefined8 **)&lStack_2b8;
  uVar5 = uStack_194;
  uStack_194._4_4_ = uVar7;
  uVar6 = uStack_14c;
  uStack_14c._4_4_ = uVar8;
  func_0x000100482b64(&ppuStack_1e0);
  uVar6 = uStack_14c;
  uVar5 = uStack_194;
  ppuStack_1e0 = &ppuStack_2a0;
  uVar7 = uStack_194._4_4_;
  uStack_194 = uVar5;
  uVar8 = uStack_14c._4_4_;
  uStack_14c = uVar6;
  uVar5 = uStack_194;
  uStack_194._4_4_ = uVar7;
  uVar6 = uStack_14c;
  uStack_14c._4_4_ = uVar8;
  FUN_104a941c0(&ppuStack_1e0);
  uVar6 = uStack_14c;
  uVar5 = uStack_194;
LAB_104a929c0:
  uStack_14c = uVar6;
  uStack_194 = uVar5;
  uVar8 = uStack_14c._4_4_;
  uVar7 = uStack_194._4_4_;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  uVar5 = uStack_194;
  uStack_194._4_4_ = uVar7;
  uVar6 = uStack_14c;
  uStack_14c._4_4_ = uVar8;
  ___stack_chk_fail();
  uVar6 = uStack_14c;
  uVar5 = uStack_194;
LAB_104a92a0c:
  uStack_14c = uVar6;
  uStack_194 = uVar5;
  uVar8 = uStack_14c._4_4_;
  uVar7 = uStack_194._4_4_;
  uVar5 = uStack_194;
  uStack_194._4_4_ = uVar7;
  uVar6 = uStack_14c;
  uStack_14c._4_4_ = uVar8;
  FUN_104a83ee4(&lStack_2b8);
  uVar6 = uStack_14c;
  uVar5 = uStack_194;
LAB_104a92a38:
  uStack_14c = uVar6;
  uStack_194 = uVar5;
  uVar8 = uStack_14c._4_4_;
  uVar7 = uStack_194._4_4_;
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x104a92a3c);
  uVar5 = uStack_194;
  uStack_194._4_4_ = uVar7;
  uVar6 = uStack_14c;
  uStack_14c._4_4_ = uVar8;
  (*pcVar9)();
}



/* Entry: 104a92c14; end: 104a92f33;  */

/* WARNING: Removing unreachable block (ram,0x000104a92cdc) */

void FUN_104a92c14(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long *param_5,
                  int param_6)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  char ***pppcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong auStack_168 [3];
  undefined1 uStack_149;
  undefined8 **ppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  ulong uStack_130;
  ulong *puStack_128;
  ulong *puStack_120;
  ulong *puStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  char *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  char **ppcStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104a6fa5c(&ppcStack_98);
    goto LAB_104a92eb8;
  }
  if (param_3 < 0x17) {
    uStack_88 = CONCAT17((char)param_3,(undefined7)uStack_88);
    pppcVar4 = &ppcStack_98;
    if (param_3 != 0) goto LAB_104a92cb0;
  }
  else {
    uVar1 = (param_3 & 0xfffffffffffffff8) + 8;
    if ((param_3 | 7) != 0x17) {
      uVar1 = param_3 | 7;
    }
    pppcVar4 = (char ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppcStack_98 = (char **)pppcVar4;
    uStack_90 = param_3;
LAB_104a92cb0:
    _memmove(pppcVar4,param_2,param_3);
  }
  *(undefined1 *)((long)pppcVar4 + param_3) = 0;
  lVar9 = param_1;
  func_0x000100484044(param_1,&ppcStack_98);
  if (param_1 + 8 == lVar9) {
    if (param_6 == 0) goto LAB_104a92e68;
    ppcStack_98 = (char **)0x10f233508;
    uStack_90 = 6;
    pcStack_f8 = " error:does not exist.";
    uStack_f0 = 0x16;
    uStack_c8 = param_2;
    uStack_c0 = param_3;
    func_0x000100066c24(&ppuStack_148,&ppcStack_98,&uStack_c8,&pcStack_f8);
    pppuVar2 = (undefined8 ***)ppuStack_148;
    if (-1 < (char)bStack_131) {
      uStack_140 = (ulong)bStack_131;
      pppuVar2 = &ppuStack_148;
    }
    auStack_168[1] = 0;
    auStack_168[2] = 0;
    auStack_168[0] = 0;
    FUN_104ab5920(&uStack_130,2,pppuVar2,uStack_140,&uStack_149,auStack_168);
    puVar5 = (ulong *)(param_5 + 2);
    puVar7 = (ulong *)param_5[1];
    if (puVar7 < (ulong *)*puVar5) {
      *puVar7 = uStack_130;
      uStack_130 = 0x36;
      param_5[1] = (long)(puVar7 + 1);
LAB_104a92e44:
      puStack_128 = auStack_168;
      func_0x000100482b64(&puStack_128);
      if ((char)bStack_131 < '\0') {
        __ZdlPv(ppuStack_148);
      }
      goto LAB_104a92e68;
    }
    lVar9 = (long)puVar7 - *param_5 >> 3;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar6 = (long)*puVar5 - *param_5;
      uVar8 = (long)uVar6 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar8 = 0x1fffffffffffffff;
      }
      puStack_108 = puVar5;
      if (uVar8 == 0) {
        puStack_128 = (ulong *)0x0;
      }
      else {
        FUN_104a83ef8();
        puStack_128 = puVar5;
      }
      puStack_120 = puStack_128 + lVar9;
      puStack_110 = puStack_128 + uVar8;
      puStack_118 = puStack_120 + 1;
      *puStack_120 = uStack_130;
      uStack_130 = 0x36;
      FUN_104a83e70(param_5,&puStack_128);
      lVar9 = param_5[1];
      FUN_104a84040(&puStack_128);
      param_5[1] = lVar9;
      if ((uStack_130 & 1) != 0) {
        func_0x00010084dad0();
      }
      goto LAB_104a92e44;
    }
  }
  else {
    FUN_104ac94fc(lVar9 + 0x38,param_2,param_3,param_4,param_5);
LAB_104a92e68:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_104a83ee4(param_5);
LAB_104a92eb8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a92ebc);
  (*pcVar3)();
}



/* Entry: 104a92f34; end: 104a92fd3;  */

void FUN_104a92f34(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  *param_1 = 0;
  if (param_5[1] - *param_5 != 0) {
    FUN_104aba878(&lStack_38,2,param_3,param_4,param_2,param_5[1] - *param_5 >> 3);
    if (lStack_38 != 0) {
      *param_1 = lStack_38;
    }
    lVar1 = *param_5;
    lVar2 = param_5[1];
    if (lVar2 != lVar1) {
      do {
        lVar2 = lVar2 + -8;
        FUN_104a713e4(param_5 + 2,lVar2);
      } while (lVar2 != lVar1);
    }
    param_5[1] = lVar1;
  }
  return;
}



/* Entry: 104a92fd4; end: 104a92fdb;  */

void FUN_104a92fd4(void)

{
  return;
}



/* Entry: 104a92fdc; end: 104a932fb;  */

/* WARNING: Removing unreachable block (ram,0x000104a930a4) */

void FUN_104a92fdc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long *param_5,
                  int param_6)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  char ***pppcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong auStack_168 [3];
  undefined1 uStack_149;
  undefined8 **ppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  ulong uStack_130;
  ulong *puStack_128;
  ulong *puStack_120;
  ulong *puStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  char *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  char **ppcStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104a6fa5c(&ppcStack_98);
    goto LAB_104a93280;
  }
  if (param_3 < 0x17) {
    uStack_88 = CONCAT17((char)param_3,(undefined7)uStack_88);
    pppcVar4 = &ppcStack_98;
    if (param_3 != 0) goto LAB_104a93078;
  }
  else {
    uVar1 = (param_3 & 0xfffffffffffffff8) + 8;
    if ((param_3 | 7) != 0x17) {
      uVar1 = param_3 | 7;
    }
    pppcVar4 = (char ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppcStack_98 = (char **)pppcVar4;
    uStack_90 = param_3;
LAB_104a93078:
    _memmove(pppcVar4,param_2,param_3);
  }
  *(undefined1 *)((long)pppcVar4 + param_3) = 0;
  lVar9 = param_1;
  func_0x000100484044(param_1,&ppcStack_98);
  if (param_1 + 8 == lVar9) {
    if (param_6 == 0) goto LAB_104a93230;
    ppcStack_98 = (char **)0x10f233508;
    uStack_90 = 6;
    pcStack_f8 = " error:does not exist.";
    uStack_f0 = 0x16;
    uStack_c8 = param_2;
    uStack_c0 = param_3;
    func_0x000100066c24(&ppuStack_148,&ppcStack_98,&uStack_c8,&pcStack_f8);
    pppuVar2 = (undefined8 ***)ppuStack_148;
    if (-1 < (char)bStack_131) {
      uStack_140 = (ulong)bStack_131;
      pppuVar2 = &ppuStack_148;
    }
    auStack_168[1] = 0;
    auStack_168[2] = 0;
    auStack_168[0] = 0;
    FUN_104ab5920(&uStack_130,2,pppuVar2,uStack_140,&uStack_149,auStack_168);
    puVar5 = (ulong *)(param_5 + 2);
    puVar7 = (ulong *)param_5[1];
    if (puVar7 < (ulong *)*puVar5) {
      *puVar7 = uStack_130;
      uStack_130 = 0x36;
      param_5[1] = (long)(puVar7 + 1);
LAB_104a9320c:
      puStack_128 = auStack_168;
      func_0x000100482b64(&puStack_128);
      if ((char)bStack_131 < '\0') {
        __ZdlPv(ppuStack_148);
      }
      goto LAB_104a93230;
    }
    lVar9 = (long)puVar7 - *param_5 >> 3;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar6 = (long)*puVar5 - *param_5;
      uVar8 = (long)uVar6 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar8 = 0x1fffffffffffffff;
      }
      puStack_108 = puVar5;
      if (uVar8 == 0) {
        puStack_128 = (ulong *)0x0;
      }
      else {
        FUN_104a83ef8();
        puStack_128 = puVar5;
      }
      puStack_120 = puStack_128 + lVar9;
      puStack_110 = puStack_128 + uVar8;
      puStack_118 = puStack_120 + 1;
      *puStack_120 = uStack_130;
      uStack_130 = 0x36;
      FUN_104a83e70(param_5,&puStack_128);
      lVar9 = param_5[1];
      FUN_104a84040(&puStack_128);
      param_5[1] = lVar9;
      if ((uStack_130 & 1) != 0) {
        func_0x00010084dad0();
      }
      goto LAB_104a9320c;
    }
  }
  else {
    FUN_104a9368c(lVar9 + 0x38,param_2,param_3,param_4,param_5);
LAB_104a93230:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_104a83ee4(param_5);
LAB_104a93280:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a93284);
  (*pcVar3)();
}



/* Entry: 104a932fc; end: 104a9361b;  */

/* WARNING: Removing unreachable block (ram,0x000104a933c4) */

void FUN_104a932fc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long *param_5,
                  int param_6)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  char ***pppcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong auStack_168 [3];
  undefined1 uStack_149;
  undefined8 **ppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  ulong uStack_130;
  ulong *puStack_128;
  ulong *puStack_120;
  ulong *puStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  char *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  char **ppcStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104a6fa5c(&ppcStack_98);
    goto LAB_104a935a0;
  }
  if (param_3 < 0x17) {
    uStack_88 = CONCAT17((char)param_3,(undefined7)uStack_88);
    pppcVar4 = &ppcStack_98;
    if (param_3 != 0) goto LAB_104a93398;
  }
  else {
    uVar1 = (param_3 & 0xfffffffffffffff8) + 8;
    if ((param_3 | 7) != 0x17) {
      uVar1 = param_3 | 7;
    }
    pppcVar4 = (char ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppcStack_98 = (char **)pppcVar4;
    uStack_90 = param_3;
LAB_104a93398:
    _memmove(pppcVar4,param_2,param_3);
  }
  *(undefined1 *)((long)pppcVar4 + param_3) = 0;
  lVar9 = param_1;
  func_0x000100484044(param_1,&ppcStack_98);
  if (param_1 + 8 == lVar9) {
    if (param_6 == 0) goto LAB_104a93550;
    ppcStack_98 = (char **)0x10f233508;
    uStack_90 = 6;
    pcStack_f8 = " error:does not exist.";
    uStack_f0 = 0x16;
    uStack_c8 = param_2;
    uStack_c0 = param_3;
    func_0x000100066c24(&ppuStack_148,&ppcStack_98,&uStack_c8,&pcStack_f8);
    pppuVar2 = (undefined8 ***)ppuStack_148;
    if (-1 < (char)bStack_131) {
      uStack_140 = (ulong)bStack_131;
      pppuVar2 = &ppuStack_148;
    }
    auStack_168[1] = 0;
    auStack_168[2] = 0;
    auStack_168[0] = 0;
    FUN_104ab5920(&uStack_130,2,pppuVar2,uStack_140,&uStack_149,auStack_168);
    puVar5 = (ulong *)(param_5 + 2);
    puVar7 = (ulong *)param_5[1];
    if (puVar7 < (ulong *)*puVar5) {
      *puVar7 = uStack_130;
      uStack_130 = 0x36;
      param_5[1] = (long)(puVar7 + 1);
LAB_104a9352c:
      puStack_128 = auStack_168;
      func_0x000100482b64(&puStack_128);
      if ((char)bStack_131 < '\0') {
        __ZdlPv(ppuStack_148);
      }
      goto LAB_104a93550;
    }
    lVar9 = (long)puVar7 - *param_5 >> 3;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar6 = (long)*puVar5 - *param_5;
      uVar8 = (long)uVar6 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar8 = 0x1fffffffffffffff;
      }
      puStack_108 = puVar5;
      if (uVar8 == 0) {
        puStack_128 = (ulong *)0x0;
      }
      else {
        FUN_104a83ef8();
        puStack_128 = puVar5;
      }
      puStack_120 = puStack_128 + lVar9;
      puStack_110 = puStack_128 + uVar8;
      puStack_118 = puStack_120 + 1;
      *puStack_120 = uStack_130;
      uStack_130 = 0x36;
      FUN_104a83e70(param_5,&puStack_128);
      lVar9 = param_5[1];
      FUN_104a84040(&puStack_128);
      param_5[1] = lVar9;
      if ((uStack_130 & 1) != 0) {
        func_0x00010084dad0();
      }
      goto LAB_104a9352c;
    }
  }
  else {
    FUN_104a938ec(lVar9 + 0x38,param_2,param_3,param_4,param_5);
LAB_104a93550:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_104a83ee4(param_5);
LAB_104a935a0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a935a4);
  (*pcVar3)();
}



/* Entry: 104a9361c; end: 104a9368b;  */

long FUN_104a9361c(long param_1)

{
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  if (*(char *)(param_1 + 0x77) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x60));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 104a9368c; end: 104a938eb;  */

void FUN_104a9368c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  ulong uVar1;
  int iVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long *unaff_x19;
  long lVar9;
  ulong auStack_148 [3];
  undefined1 uStack_129;
  undefined8 **ppuStack_128;
  ulong uStack_120;
  byte bStack_111;
  ulong uStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  char *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = *param_1;
  if (iVar2 == 4) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_4,param_1 + 2);
    param_5 = unaff_x19;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_4,"");
    pcStack_78 = "field:";
    uStack_70 = 6;
    pcStack_d8 = " error:type should be STRING";
    uStack_d0 = 0x1c;
    uStack_a8 = param_2;
    uStack_a0 = param_3;
    func_0x000100066c24(&ppuStack_128,&pcStack_78,&uStack_a8,&pcStack_d8);
    pppuVar3 = (undefined8 ***)ppuStack_128;
    if (-1 < (char)bStack_111) {
      uStack_120 = (ulong)bStack_111;
      pppuVar3 = &ppuStack_128;
    }
    auStack_148[1] = 0;
    auStack_148[2] = 0;
    auStack_148[0] = 0;
    FUN_104ab5920(&uStack_110,2,pppuVar3,uStack_120,&uStack_129,auStack_148);
    puVar5 = (ulong *)(param_5 + 2);
    puVar7 = (ulong *)param_5[1];
    if (puVar7 < (ulong *)*puVar5) {
      *puVar7 = uStack_110;
      uStack_110 = 0x36;
      param_5[1] = (long)(puVar7 + 1);
    }
    else {
      lVar9 = (long)puVar7 - *param_5 >> 3;
      uVar1 = lVar9 + 1;
      if (uVar1 >> 0x3d != 0) goto LAB_104a9387c;
      uVar6 = (long)*puVar5 - *param_5;
      uVar8 = (long)uVar6 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar8 = 0x1fffffffffffffff;
      }
      puStack_e8 = puVar5;
      if (uVar8 == 0) {
        puStack_108 = (ulong *)0x0;
      }
      else {
        FUN_104a83ef8();
        puStack_108 = puVar5;
      }
      puStack_100 = puStack_108 + lVar9;
      puStack_f0 = puStack_108 + uVar8;
      puStack_f8 = puStack_100 + 1;
      *puStack_100 = uStack_110;
      uStack_110 = 0x36;
      FUN_104a83e70(param_5,&puStack_108);
      lVar9 = param_5[1];
      FUN_104a84040(&puStack_108);
      param_5[1] = lVar9;
      if ((uStack_110 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    puStack_108 = auStack_148;
    func_0x000100482b64(&puStack_108);
    if ((char)bStack_111 < '\0') {
      __ZdlPv(ppuStack_128);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail(iVar2 == 4);
LAB_104a9387c:
  FUN_104a83ee4(param_5);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a93888);
  (*pcVar4)();
}



/* Entry: 104a938ec; end: 104a93ce3;  */

void FUN_104a938ec(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long *param_5)

{
  ulong uVar1;
  undefined8 ******ppppppuVar2;
  code *pcVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong auStack_160 [6];
  undefined1 uStack_129;
  undefined8 *****pppppuStack_128;
  ulong uStack_120;
  byte bStack_111;
  ulong uStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  char *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_1 - 3U < 2) {
    uVar1 = *(ulong *)(param_1 + 4);
    piVar4 = *(int **)(param_1 + 2);
    if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x1f);
      piVar4 = param_1 + 2;
    }
    func_0x000100745164(piVar4,uVar1,&pcStack_78,10);
    *param_4 = pcStack_78._0_4_;
    if (((ulong)piVar4 & 1) == 0) {
      pcStack_78 = "field:";
      uStack_70 = 6;
      pcStack_d8 = " error:failed to parse.";
      uStack_d0 = 0x17;
      uStack_a8 = param_2;
      uStack_a0 = param_3;
      func_0x000100066c24(&pppppuStack_128,&pcStack_78,&uStack_a8,&pcStack_d8);
      ppppppuVar2 = (undefined8 ******)pppppuStack_128;
      if (-1 < (char)bStack_111) {
        uStack_120 = (ulong)bStack_111;
        ppppppuVar2 = &pppppuStack_128;
      }
      auStack_160[1] = 0;
      auStack_160[2] = 0;
      auStack_160[0] = 0;
      FUN_104ab5920(&uStack_110,2,ppppppuVar2,uStack_120,&uStack_129,auStack_160);
      puVar6 = (ulong *)(param_5 + 2);
      puVar8 = (ulong *)param_5[1];
      if (puVar8 < (ulong *)*puVar6) {
        *puVar8 = uStack_110;
        uStack_110 = 0x36;
        param_5[1] = (long)(puVar8 + 1);
        puVar6 = auStack_160;
      }
      else {
        lVar10 = (long)puVar8 - *param_5 >> 3;
        uVar1 = lVar10 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_104a83ee4(param_5);
          goto LAB_104a93c4c;
        }
        uVar7 = (long)*puVar6 - *param_5;
        uVar9 = (long)uVar7 >> 2;
        if (uVar9 <= uVar1) {
          uVar9 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar9 = 0x1fffffffffffffff;
        }
        puStack_e8 = puVar6;
        if (uVar9 == 0) {
          puStack_108 = (ulong *)0x0;
        }
        else {
          FUN_104a83ef8();
          puStack_108 = puVar6;
        }
        puStack_100 = puStack_108 + lVar10;
        puStack_f0 = puStack_108 + uVar9;
        puStack_f8 = puStack_100 + 1;
        *puStack_100 = uStack_110;
        uStack_110 = 0x36;
        FUN_104a83e70(param_5,&puStack_108);
        lVar10 = param_5[1];
        FUN_104a84040(&puStack_108);
        param_5[1] = lVar10;
        puVar6 = auStack_160;
        if ((uStack_110 & 1) != 0) {
          func_0x00010084dad0();
          puVar6 = auStack_160;
        }
      }
LAB_104a93be4:
      puStack_108 = puVar6;
      func_0x000100482b64(&puStack_108);
      if ((char)bStack_111 < '\0') {
        __ZdlPv(pppppuStack_128);
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail(uVar5);
  }
  else {
    pcStack_78 = "field:";
    uStack_70 = 6;
    pcStack_d8 = " error:type should be NUMBER or STRING";
    uStack_d0 = 0x26;
    uStack_a8 = param_2;
    uStack_a0 = param_3;
    func_0x000100066c24(&pppppuStack_128,&pcStack_78,&uStack_a8,&pcStack_d8);
    ppppppuVar2 = (undefined8 ******)pppppuStack_128;
    if (-1 < (char)bStack_111) {
      uStack_120 = (ulong)bStack_111;
      ppppppuVar2 = &pppppuStack_128;
    }
    auStack_160[4] = 0;
    auStack_160[5] = 0;
    auStack_160[3] = 0;
    FUN_104ab5920(&uStack_110,2,ppppppuVar2,uStack_120,&uStack_129,auStack_160 + 3);
    puVar6 = (ulong *)(param_5 + 2);
    puVar8 = (ulong *)param_5[1];
    if (puVar8 < (ulong *)*puVar6) {
      *puVar8 = uStack_110;
      uStack_110 = 0x36;
      param_5[1] = (long)(puVar8 + 1);
LAB_104a93b88:
      puVar6 = auStack_160 + 3;
      goto LAB_104a93be4;
    }
    lVar10 = (long)puVar8 - *param_5 >> 3;
    uVar1 = lVar10 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar7 = (long)*puVar6 - *param_5;
      uVar9 = (long)uVar7 >> 2;
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar9 = 0x1fffffffffffffff;
      }
      puStack_e8 = puVar6;
      if (uVar9 == 0) {
        puStack_108 = (ulong *)0x0;
      }
      else {
        FUN_104a83ef8();
        puStack_108 = puVar6;
      }
      puStack_100 = puStack_108 + lVar10;
      puStack_f0 = puStack_108 + uVar9;
      puStack_f8 = puStack_100 + 1;
      *puStack_100 = uStack_110;
      uStack_110 = 0x36;
      FUN_104a83e70(param_5,&puStack_108);
      lVar10 = param_5[1];
      FUN_104a84040(&puStack_108);
      param_5[1] = lVar10;
      if ((uStack_110 & 1) != 0) {
        func_0x00010084dad0();
      }
      goto LAB_104a93b88;
    }
  }
  FUN_104a83ee4(param_5);
LAB_104a93c4c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a93c50);
  (*pcVar3)();
}



/* Entry: 104a93ce4; end: 104a93e6f;  */

long * FUN_104a93ce4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar3 = param_1[1] - *param_1 >> 5;
  uVar1 = lVar3 * -0x3333333333333333 + 1;
  if (uVar1 < 0x19999999999999a) {
    plVar5 = param_1 + 2;
    lVar2 = *plVar5 - *param_1 >> 5;
    uVar4 = lVar2 * -0x6666666666666666;
    if (uVar4 < uVar1 || uVar4 - uVar1 == 0) {
      uVar4 = uVar1;
    }
    if (0xcccccccccccccb < (ulong)(lVar2 * -0x3333333333333333)) {
      uVar4 = 0x199999999999999;
    }
    plStack_38 = plVar5;
    if (uVar4 == 0) {
      plStack_58 = (long *)0x0;
    }
    else {
      FUN_104a93ef8();
      plStack_58 = plVar5;
    }
    plStack_50 = plStack_58 + lVar3 * 4;
    plStack_40 = plStack_58 + uVar4 * 0x14;
    *(undefined4 *)plStack_50 = *(undefined4 *)param_2;
    lVar2 = param_2[2];
    lVar3 = param_2[1];
    plStack_50[3] = param_2[3];
    plStack_50[2] = lVar2;
    plStack_50[1] = lVar3;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
    lVar2 = param_2[5];
    lVar3 = param_2[4];
    plStack_50[6] = param_2[6];
    plStack_50[5] = lVar2;
    plStack_50[4] = lVar3;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    lVar2 = param_2[8];
    lVar3 = param_2[7];
    plStack_50[9] = param_2[9];
    plStack_50[8] = lVar2;
    plStack_50[7] = lVar3;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[7] = 0;
    lVar3 = param_2[10];
    plStack_50[0xb] = param_2[0xb];
    plStack_50[10] = lVar3;
    lVar2 = param_2[0xd];
    lVar3 = param_2[0xc];
    plStack_50[0xe] = param_2[0xe];
    plStack_50[0xd] = lVar2;
    plStack_50[0xc] = lVar3;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    lVar2 = param_2[0x10];
    lVar3 = param_2[0xf];
    plStack_50[0x11] = param_2[0x11];
    plStack_50[0x10] = lVar2;
    plStack_50[0xf] = lVar3;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    lVar3 = param_2[0x12];
    *(undefined4 *)(plStack_50 + 0x13) = *(undefined4 *)(param_2 + 0x13);
    plStack_50[0x12] = lVar3;
    plStack_48 = plStack_50 + 0x14;
    FUN_104a93e70(param_1,&plStack_58);
    plVar5 = (long *)param_1[1];
    func_0x000104a9414c(&plStack_58);
    return plVar5;
  }
  FUN_104a93ee4();
  func_0x000104a9414c(&plStack_58);
  __Unwind_Resume();
  plVar5 = param_1 + 2;
  lVar3 = param_1[1];
  func_0x000104a93f3c(plVar5,lVar3,lVar3,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = lVar3;
  lVar2 = *param_1;
  *param_1 = lVar3;
  param_2[1] = lVar2;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar5;
}



/* Entry: 104a93e70; end: 104a93ee3;  */

void FUN_104a93e70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  func_0x000104a93f3c(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 104a93ee4; end: 104a93ef7;  */

undefined1  [16]
FUN_104a93ee4(undefined8 param_1,ulong param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 *param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_104a6fa70();
  if (param_2 < 0x19999999999999a) {
    lVar2 = param_2 * 0xa0;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  FUN_104a7757c();
  puStack_88 = &uStack_70;
  puStack_80 = &uStack_60;
  lVar2 = param_7;
  while (param_3 != param_5) {
    *(undefined4 *)(lVar2 + -0xa0) = param_3[-0x28];
    uVar4 = *(undefined8 *)(param_3 + -0x24);
    uVar3 = *(undefined8 *)(param_3 + -0x26);
    *(undefined8 *)(lVar2 + -0x88) = *(undefined8 *)(param_3 + -0x22);
    *(undefined8 *)(lVar2 + -0x90) = uVar4;
    *(undefined8 *)(lVar2 + -0x98) = uVar3;
    *(undefined8 *)(param_3 + -0x24) = 0;
    *(undefined8 *)(param_3 + -0x22) = 0;
    *(undefined8 *)(param_3 + -0x26) = 0;
    uVar4 = *(undefined8 *)(param_3 + -0x1e);
    uVar3 = *(undefined8 *)(param_3 + -0x20);
    *(undefined8 *)(lVar2 + -0x70) = *(undefined8 *)(param_3 + -0x1c);
    *(undefined8 *)(lVar2 + -0x78) = uVar4;
    *(undefined8 *)(lVar2 + -0x80) = uVar3;
    *(undefined8 *)(param_3 + -0x1e) = 0;
    *(undefined8 *)(param_3 + -0x1c) = 0;
    *(undefined8 *)(param_3 + -0x20) = 0;
    uVar4 = *(undefined8 *)(param_3 + -0x18);
    uVar3 = *(undefined8 *)(param_3 + -0x1a);
    *(undefined8 *)(lVar2 + -0x58) = *(undefined8 *)(param_3 + -0x16);
    *(undefined8 *)(lVar2 + -0x60) = uVar4;
    *(undefined8 *)(lVar2 + -0x68) = uVar3;
    *(undefined8 *)(param_3 + -0x18) = 0;
    *(undefined8 *)(param_3 + -0x16) = 0;
    *(undefined8 *)(param_3 + -0x1a) = 0;
    uVar3 = *(undefined8 *)(param_3 + -0x14);
    *(undefined8 *)(lVar2 + -0x48) = *(undefined8 *)(param_3 + -0x12);
    *(undefined8 *)(lVar2 + -0x50) = uVar3;
    uVar4 = *(undefined8 *)(param_3 + -0xe);
    uVar3 = *(undefined8 *)(param_3 + -0x10);
    *(undefined8 *)(lVar2 + -0x30) = *(undefined8 *)(param_3 + -0xc);
    *(undefined8 *)(lVar2 + -0x38) = uVar4;
    *(undefined8 *)(lVar2 + -0x40) = uVar3;
    *(undefined8 *)(param_3 + -0x10) = 0;
    *(undefined8 *)(param_3 + -0xe) = 0;
    *(undefined8 *)(param_3 + -0xc) = 0;
    uVar4 = *(undefined8 *)(param_3 + -8);
    uVar3 = *(undefined8 *)(param_3 + -10);
    *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(param_3 + -6);
    *(undefined8 *)(lVar2 + -0x20) = uVar4;
    *(undefined8 *)(lVar2 + -0x28) = uVar3;
    *(undefined8 *)(param_3 + -10) = 0;
    *(undefined8 *)(param_3 + -8) = 0;
    *(undefined8 *)(param_3 + -6) = 0;
    uVar3 = *(undefined8 *)(param_3 + -4);
    *(undefined4 *)(lVar2 + -8) = param_3[-2];
    *(undefined8 *)(lVar2 + -0x10) = uVar3;
    lVar2 = lVar2 + -0xa0;
    param_3 = param_3 + -0x28;
  }
  uStack_78 = 1;
  puStack_90 = puVar1;
  uStack_70 = param_6;
  lStack_68 = param_7;
  uStack_60 = param_6;
  lStack_58 = lVar2;
  FUN_104a94054(&puStack_90);
  auVar6._8_8_ = lVar2;
  auVar6._0_8_ = param_6;
  return auVar6;
}



/* Entry: 104a93ef8; end: 104a94053;  */

undefined1  [16]
FUN_104a93ef8(undefined8 param_1,ulong param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 *param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_2 < 0x19999999999999a) {
    lVar1 = param_2 * 0xa0;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  FUN_104a7757c();
  puStack_78 = &uStack_60;
  puStack_70 = &uStack_50;
  lVar1 = param_7;
  while (param_3 != param_5) {
    *(undefined4 *)(lVar1 + -0xa0) = param_3[-0x28];
    uVar3 = *(undefined8 *)(param_3 + -0x24);
    uVar2 = *(undefined8 *)(param_3 + -0x26);
    *(undefined8 *)(lVar1 + -0x88) = *(undefined8 *)(param_3 + -0x22);
    *(undefined8 *)(lVar1 + -0x90) = uVar3;
    *(undefined8 *)(lVar1 + -0x98) = uVar2;
    *(undefined8 *)(param_3 + -0x24) = 0;
    *(undefined8 *)(param_3 + -0x22) = 0;
    *(undefined8 *)(param_3 + -0x26) = 0;
    uVar3 = *(undefined8 *)(param_3 + -0x1e);
    uVar2 = *(undefined8 *)(param_3 + -0x20);
    *(undefined8 *)(lVar1 + -0x70) = *(undefined8 *)(param_3 + -0x1c);
    *(undefined8 *)(lVar1 + -0x78) = uVar3;
    *(undefined8 *)(lVar1 + -0x80) = uVar2;
    *(undefined8 *)(param_3 + -0x1e) = 0;
    *(undefined8 *)(param_3 + -0x1c) = 0;
    *(undefined8 *)(param_3 + -0x20) = 0;
    uVar3 = *(undefined8 *)(param_3 + -0x18);
    uVar2 = *(undefined8 *)(param_3 + -0x1a);
    *(undefined8 *)(lVar1 + -0x58) = *(undefined8 *)(param_3 + -0x16);
    *(undefined8 *)(lVar1 + -0x60) = uVar3;
    *(undefined8 *)(lVar1 + -0x68) = uVar2;
    *(undefined8 *)(param_3 + -0x18) = 0;
    *(undefined8 *)(param_3 + -0x16) = 0;
    *(undefined8 *)(param_3 + -0x1a) = 0;
    uVar2 = *(undefined8 *)(param_3 + -0x14);
    *(undefined8 *)(lVar1 + -0x48) = *(undefined8 *)(param_3 + -0x12);
    *(undefined8 *)(lVar1 + -0x50) = uVar2;
    uVar3 = *(undefined8 *)(param_3 + -0xe);
    uVar2 = *(undefined8 *)(param_3 + -0x10);
    *(undefined8 *)(lVar1 + -0x30) = *(undefined8 *)(param_3 + -0xc);
    *(undefined8 *)(lVar1 + -0x38) = uVar3;
    *(undefined8 *)(lVar1 + -0x40) = uVar2;
    *(undefined8 *)(param_3 + -0x10) = 0;
    *(undefined8 *)(param_3 + -0xe) = 0;
    *(undefined8 *)(param_3 + -0xc) = 0;
    uVar3 = *(undefined8 *)(param_3 + -8);
    uVar2 = *(undefined8 *)(param_3 + -10);
    *(undefined8 *)(lVar1 + -0x18) = *(undefined8 *)(param_3 + -6);
    *(undefined8 *)(lVar1 + -0x20) = uVar3;
    *(undefined8 *)(lVar1 + -0x28) = uVar2;
    *(undefined8 *)(param_3 + -10) = 0;
    *(undefined8 *)(param_3 + -8) = 0;
    *(undefined8 *)(param_3 + -6) = 0;
    uVar2 = *(undefined8 *)(param_3 + -4);
    *(undefined4 *)(lVar1 + -8) = param_3[-2];
    *(undefined8 *)(lVar1 + -0x10) = uVar2;
    lVar1 = lVar1 + -0xa0;
    param_3 = param_3 + -0x28;
  }
  uStack_68 = 1;
  uStack_80 = param_1;
  uStack_60 = param_6;
  lStack_58 = param_7;
  uStack_50 = param_6;
  lStack_48 = lVar1;
  FUN_104a94054(&uStack_80);
  auVar5._8_8_ = lVar1;
  auVar5._0_8_ = param_6;
  return auVar5;
}



/* Entry: 104a94054; end: 104a94087;  */

long FUN_104a94054(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_104a94088(param_1);
  }
  return param_1;
}



/* Entry: 104a94088; end: 104a940d7;  */

void FUN_104a94088(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1[2] + 8);
  lVar3 = *(long *)(param_1[1] + 8);
  if (lVar1 != lVar3) {
    uVar2 = *param_1;
    do {
      FUN_104a940d8(uVar2,lVar1);
      lVar1 = lVar1 + 0xa0;
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 104a940d8; end: 104a941bf;  */

void FUN_104a940d8(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x78));
  }
  if (*(char *)(param_2 + 0x77) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x60));
  }
  if (*(char *)(param_2 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x38));
  }
  if (*(char *)(param_2 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x20));
  }
  if (-1 < *(char *)(param_2 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_2 + 8));
  return;
}



/* Entry: 104a941c0; end: 104a94243;  */

void FUN_104a941c0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0xa0;
        FUN_104a940d8(plVar3 + 2,lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 104a94244; end: 104a942af;  */

void FUN_104a94244(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0xa0;
        FUN_104a940d8(param_1 + 2,lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 104a942b0; end: 104a9439b;  */

undefined8 * FUN_104a942b0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 1;
  *param_1 = &PTR_FUN_1107c3760;
  FUN_104a941c0(&puStack_28);
  return param_1;
}



/* Entry: 104a9439c; end: 104a943af;  */

void FUN_104a9439c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 extraout_x8;
  long lVar2;
  long *plVar3;
  long alStack_78 [3];
  long *plStack_60;
  long lStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_104a6fa70();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = *(long **)(puVar1 + 8);
  func_0x0001008dd084(alStack_78,param_4);
  (**(code **)(*plVar3 + 8))(extraout_x8,plVar3,param_2,param_3,alStack_78);
  if (plStack_60 == alStack_78) {
    lVar2 = 4;
    plVar3 = alStack_78;
LAB_104a94438:
    (**(code **)(*plVar3 + lVar2 * 8))();
  }
  else {
    plVar3 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_104a94438;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_60 == alStack_78) {
    lVar2 = 4;
    plStack_60 = alStack_78;
  }
  else {
    if (plStack_60 == (long *)0x0) goto LAB_104a944a8;
    lVar2 = 5;
  }
  (**(code **)(*plStack_60 + lVar2 * 8))();
LAB_104a944a8:
  __Unwind_Resume(plVar3);
  func_0x000100837090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a943b0; end: 104a944af;  */

void FUN_104a943b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = *(long **)(param_2 + 8);
  func_0x0001008dd084(alStack_68,param_5);
  (**(code **)(*plVar2 + 8))(param_1,plVar2,param_3,param_4,alStack_68);
  if (plStack_50 == alStack_68) {
    lVar1 = 4;
    plVar2 = alStack_68;
LAB_104a94438:
    (**(code **)(*plVar2 + lVar1 * 8))();
  }
  else {
    plVar2 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      lVar1 = 5;
      goto LAB_104a94438;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_50 == alStack_68) {
    lVar1 = 4;
    plStack_50 = alStack_68;
  }
  else {
    if (plStack_50 == (long *)0x0) goto LAB_104a944a8;
    lVar1 = 5;
  }
  (**(code **)(*plStack_50 + lVar1 * 8))();
LAB_104a944a8:
  __Unwind_Resume(plVar2);
  func_0x000100837090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a944b0; end: 104a944c3;  */

void FUN_104a944b0(void)

{
  func_0x000100837090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a944c4; end: 104a944d3;  */

void FUN_104a944c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a944d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}



/* Entry: 104a944d4; end: 104a9451b;  */

void FUN_104a944d4(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x18))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104aab120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x58))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 104a9451c; end: 104a94573;  */

long * FUN_104a9451c(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    func_0x00010ae77b40(param_1);
  }
  return param_1;
}



/* Entry: 104a94574; end: 104a9457b;  */

undefined1  [16]
FUN_104a94574(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104a9457c; end: 104a945cb;  */

long FUN_104a9457c(long param_1)

{
  func_0x0001004b6d90(param_1 + 8);
  return param_1;
}



/* Entry: 104a945cc; end: 104a94623;  */

long * FUN_104a945cc(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    func_0x00010ae77b40(param_1);
  }
  return param_1;
}



/* Entry: 104a94624; end: 104a94723;  */

long * FUN_104a94624(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = *(long **)(param_2 + 8);
  func_0x0001008dd084(alStack_68,param_5);
  (**(code **)(*plVar3 + 8))(param_1,plVar3,param_3,param_4,alStack_68);
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plVar3 = alStack_68;
LAB_104a946ac:
    (**(code **)(*plVar3 + lVar2 * 8))();
  }
  else {
    plVar3 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_104a946ac;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar3;
  }
  ___stack_chk_fail();
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plStack_50 = alStack_68;
  }
  else {
    if (plStack_50 == (long *)0x0) goto SUB_100837090;
    lVar2 = 5;
  }
  (**(code **)(*plStack_50 + lVar2 * 8))();
SUB_100837090:
  __Unwind_Resume();
  *plVar3 = (long)&PTR_FUN_1107c4cb8;
  plVar3[1] = (long)&PTR_FUN_1107c4d10;
  if (plVar3[0x16] == 0) {
    if ((plVar3[0x14] & 1U) != 0) {
      func_0x00010084dad0();
    }
    func_0x0001006153ac(plVar3 + 0xc);
    (**(code **)(*(long *)plVar3[0xb] + 8))();
    *plVar3 = (long)&PTR_FUN_1107c4c40;
    plVar3[1] = (long)&PTR_FUN_1107c4c98;
    return plVar3;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                      ,0x1e5,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100837134);
  (*pcVar1)();
}



/* Entry: 104a94724; end: 104a94727;  */

undefined8 * FUN_104a94724(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_1107c4cb8;
  param_1[1] = &PTR_FUN_1107c4d10;
  if (param_1[0x16] == 0) {
    if ((param_1[0x14] & 1) != 0) {
      func_0x00010084dad0();
    }
    func_0x0001006153ac(param_1 + 0xc);
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_1107c4c40;
    param_1[1] = &PTR_FUN_1107c4c98;
    return param_1;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                      ,0x1e5,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100837134);
  (*pcVar1)();
}



/* Entry: 104a94728; end: 104a9473b;  */

void FUN_104a94728(void)

{
  func_0x000100837090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a9473c; end: 104a9478b;  */

void FUN_104a9473c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  puVar1 = (undefined8 *)plVar2[7];
  plVar2[7] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  (**(code **)(*plVar2 + 8))();
  if (param_3 == 0) {
    return;
  }
  func_0x00010bdaa6b0();
                    /* WARNING: Could not recover jumptable at 0x000104a94798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)plVar2[1] + 0x20))();
  return;
}



/* Entry: 104a9478c; end: 104a9479b;  */

void FUN_104a9478c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a94798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}



/* Entry: 104a9479c; end: 104a947e3;  */

void FUN_104a9479c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x18))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104aab120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x58))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 104a947e4; end: 104a947eb;  */

void FUN_104a947e4(void)

{
  return;
}



/* Entry: 104a947ec; end: 104a9481f;  */

void FUN_104a947ec(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1107c3a70;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a94820; end: 104a94823;  */

void FUN_104a94820(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a94824; end: 104a9485f;  */

long FUN_104a94824(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c3ae0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a94860; end: 104a9487b;  */

undefined ** FUN_104a94860(void)

{
  return &PTR_DAT_1107c3ae0;
}



/* Entry: 104a9487c; end: 104a948bb;  */

void FUN_104a9487c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_DAT_1107c3b10;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 104a948bc; end: 104a948e3;  */

void FUN_104a948bc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1107c3b10;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104a948e4; end: 104a9491f;  */

long FUN_104a948e4(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c3b70);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a94920; end: 104a94933;  */

undefined ** FUN_104a94920(void)

{
  return &PTR_DAT_1107c3b70;
}



/* Entry: 104a94934; end: 104a94967;  */

void FUN_104a94934(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1107c3b90;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a94968; end: 104a9496b;  */

void FUN_104a94968(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a9496c; end: 104a949a7;  */

long FUN_104a9496c(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c3bf0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a949a8; end: 104a949b7;  */

undefined ** FUN_104a949a8(void)

{
  return &PTR_DAT_1107c3bf0;
}



/* Entry: 104a949b8; end: 104a94a37;  */

void FUN_104a949b8(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uStack_28;
  
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    uStack_28 = *param_2;
    if ((uStack_28 & 1) != 0) {
      piVar4 = (int *)(uStack_28 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_104adfc18(lVar3,&uStack_28,*param_1);
    if ((uStack_28 & 1) != 0) {
      func_0x00010084dad0();
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 104a94a38; end: 104a94a4f;  */

void FUN_104a94a38(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_168 [296];
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(lVar2 + 0x18);
  if (((*(uint *)(*(long *)(lVar3 + 8) + 0x30) & 0x80000002) == 0) && (*(int *)(lVar2 + 8) != 0)) {
    func_0x0001004b800c(auStack_168);
    lVar3 = *(long *)(*(long *)(lVar2 + 0x18) + 8);
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
    iVar1 = *(int *)(lVar2 + 8);
    func_0x000104ab17a0(iVar1,uVar4,auStack_168);
    if (iVar1 != 0) {
      func_0x0001006148f8(auStack_168,uVar4);
      *(uint *)(lVar3 + 0x30) = *(uint *)(lVar3 + 0x30) | 0x80000000;
    }
    func_0x0001008301a4(auStack_168);
    lVar3 = *(long *)(lVar2 + 0x18);
  }
  *(undefined8 *)(lVar2 + 0x18) = 0;
  func_0x000100614e94(param_1,lVar3);
  return;
}



/* Entry: 104a94a50; end: 104a94acb;  */

/* WARNING: Type propagation algorithm not settling */

undefined ** FUN_104a94a50(long *param_1,ulong *param_2,uint *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  undefined *****pppppuVar7;
  undefined ****ppppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  uint *puVar11;
  undefined *****pppppuVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined8 uVar15;
  undefined8 *extraout_x8;
  ulong uVar16;
  undefined *puVar17;
  uint uVar18;
  undefined *****pppppuStack_160;
  ulong *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 auStack_140 [8];
  ulong *puStack_138;
  ulong *puStack_130;
  undefined ****ppppuStack_128;
  undefined1 auStack_120 [8];
  undefined ****ppppuStack_118;
  undefined ****ppppuStack_110;
  undefined ****ppppuStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined ****ppppuStack_d0;
  undefined **ppuStack_c8;
  undefined ****ppppuStack_c0;
  ulong uStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  char cStack_a0;
  undefined ****ppppuStack_98;
  long lStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  ulong uStack_38;
  undefined *puStack_30;
  ulong uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = (undefined **)*param_1;
  puVar11 = (uint *)param_1[1];
  uStack_38 = *param_2;
  puStack_30 = &UNK_10ae73f48;
  uStack_28 = (ulong)*param_3;
  puStack_20 = &UNK_1004d50a8;
  puVar13 = &uStack_38;
  uVar15 = 2;
  func_0x0001004d4da0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_104a94acc;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *puVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((uVar3 >> 2 & 1) == 0) {
    func_0x00010084cae4(&ppppuStack_c0,"Missing :method header",0x16);
    pppppuVar12 = &ppppuStack_c0;
    FUN_104a91cc8(&uStack_e0);
    ppuVar10 = &PTR___tlv_bootstrap_11340d8b8;
    (*(code *)PTR___tlv_bootstrap_11340d8b8)();
    puVar6 = (ulong *)*ppuVar10;
    do {
      uVar16 = *puVar6;
      uVar1 = uVar16 + 0x10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar5) {
        *puVar6 = uVar1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar6[2] < uVar1) {
      pppppuVar12 = (undefined *****)0x10;
      func_0x0001004bbee0();
      puVar14 = puVar13;
    }
    else {
      puVar6 = (ulong *)((long)puVar6 + uVar16 + 0x30);
      puVar14 = puVar13;
    }
    *puVar6 = (ulong)&PTR_FUN_1107c3e30;
    puVar6[1] = uStack_e0;
    *extraout_x8 = puVar6;
    ppppuVar8 = ppppuStack_c0;
    if (((ulong)ppppuStack_c0 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    uVar18 = puVar11[0x6a];
    if ((uVar18 == 1 || uVar18 == 3) || ((uVar18 == 2 && (*(char *)((long)ppuVar10 + 9) == '\0'))))
    {
      func_0x00010084cae4(&ppppuStack_c0,"Bad method header",0x11);
      pppppuVar12 = &ppppuStack_c0;
      FUN_104a91cc8(&uStack_d8);
      ppuVar10 = &PTR___tlv_bootstrap_11340d8b8;
      (*(code *)PTR___tlv_bootstrap_11340d8b8)();
      puVar6 = (ulong *)*ppuVar10;
      do {
        uVar16 = *puVar6;
        uVar1 = uVar16 + 0x10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar5) {
          *puVar6 = uVar1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar6[2] < uVar1) {
        pppppuVar12 = (undefined *****)0x10;
        func_0x0001004bbee0();
        puVar14 = puVar13;
      }
      else {
        puVar6 = (ulong *)((long)puVar6 + uVar16 + 0x30);
        puVar14 = puVar13;
      }
      *puVar6 = (ulong)&PTR_FUN_1107c3e30;
      puVar6[1] = uStack_d8;
      *extraout_x8 = puVar6;
      ppppuVar8 = ppppuStack_c0;
      if (((ulong)ppppuStack_c0 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else if ((uVar3 >> 6 & 1) == 0) {
      func_0x00010084cae4(&ppppuStack_c0,"Missing :te header",0x12);
      pppppuVar12 = &ppppuStack_c0;
      FUN_104a91cc8(&uStack_e8);
      ppuVar10 = &PTR___tlv_bootstrap_11340d8b8;
      (*(code *)PTR___tlv_bootstrap_11340d8b8)();
      puVar6 = (ulong *)*ppuVar10;
      do {
        uVar16 = *puVar6;
        uVar1 = uVar16 + 0x10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar5) {
          *puVar6 = uVar1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar6[2] < uVar1) {
        pppppuVar12 = (undefined *****)0x10;
        func_0x0001004bbee0();
        puVar14 = puVar13;
      }
      else {
        puVar6 = (ulong *)((long)puVar6 + uVar16 + 0x30);
        puVar14 = puVar13;
      }
      *puVar6 = (ulong)&PTR_FUN_1107c3e30;
      puVar6[1] = uStack_e8;
      *extraout_x8 = puVar6;
      ppppuVar8 = ppppuStack_c0;
      if (((ulong)ppppuStack_c0 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      *puVar11 = uVar3 & 0xffffffbf;
      if ((char)puVar11[0x66] == '\0') {
        if ((uVar3 >> 4 & 1) == 0) {
          func_0x00010084cae4(&ppppuStack_c0,"Missing :scheme header",0x16);
          pppppuVar12 = &ppppuStack_c0;
          FUN_104a91cc8(&uStack_100);
          ppuVar10 = &PTR___tlv_bootstrap_11340d8b8;
          (*(code *)PTR___tlv_bootstrap_11340d8b8)();
          puVar6 = (ulong *)*ppuVar10;
          do {
            uVar16 = *puVar6;
            uVar1 = uVar16 + 0x10;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar5) {
              *puVar6 = uVar1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (puVar6[2] < uVar1) {
            pppppuVar12 = (undefined *****)0x10;
            func_0x0001004bbee0();
            puVar14 = puVar13;
          }
          else {
            puVar6 = (ulong *)((long)puVar6 + uVar16 + 0x30);
            puVar14 = puVar13;
          }
          *puVar6 = (ulong)&PTR_FUN_1107c3e30;
          puVar6[1] = uStack_100;
          *extraout_x8 = puVar6;
          ppppuVar8 = ppppuStack_c0;
          if (((ulong)ppppuStack_c0 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          *puVar11 = uVar3 & 0xffffffaf;
          if (puVar11[0x68] == 2) {
            func_0x00010084cae4(&ppppuStack_c0,"Bad :scheme header",0x12);
            pppppuVar12 = &ppppuStack_c0;
            FUN_104a91cc8(&uStack_f8);
            ppuVar10 = &PTR___tlv_bootstrap_11340d8b8;
            (*(code *)PTR___tlv_bootstrap_11340d8b8)();
            puVar6 = (ulong *)*ppuVar10;
            do {
              uVar16 = *puVar6;
              uVar1 = uVar16 + 0x10;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
              if (bVar5) {
                *puVar6 = uVar1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (puVar6[2] < uVar1) {
              pppppuVar12 = (undefined *****)0x10;
              func_0x0001004bbee0();
              puVar14 = puVar13;
            }
            else {
              puVar6 = (ulong *)((long)puVar6 + uVar16 + 0x30);
              puVar14 = puVar13;
            }
            *puVar6 = (ulong)&PTR_FUN_1107c3e30;
            puVar6[1] = uStack_f8;
            *extraout_x8 = puVar6;
            ppppuVar8 = ppppuStack_c0;
            if (((ulong)ppppuStack_c0 & 1) != 0) {
              func_0x00010084dad0();
            }
          }
          else {
            uVar18 = uVar3 & 0xffffff8f;
            *puVar11 = uVar18;
            if ((uVar3 & 1) == 0) {
              func_0x00010084cae4(&ppppuStack_d0,"Missing :path header",0x14);
              pppppuVar12 = &ppppuStack_d0;
              FUN_104a91cc8(&ppppuStack_108);
              ppppuStack_c0 = ppppuStack_108;
              pppppuVar7 = &ppppuStack_c0;
              func_0x000104a95778();
              puVar14 = puVar13;
            }
            else {
              puVar14 = puVar13;
              if ((uVar3 >> 1 & 1) == 0) {
                if ((uVar3 >> 0x10 & 1) != 0) {
                  uStack_b8 = *(ulong *)(puVar11 + 0x46);
                  ppppuStack_c0 = *(undefined *****)(puVar11 + 0x44);
                  puStack_a8 = *(ulong **)(puVar11 + 0x4a);
                  puStack_b0 = *(ulong **)(puVar11 + 0x48);
                  puVar11[0x46] = 0;
                  puVar11[0x47] = 0;
                  puVar11[0x44] = 0;
                  puVar11[0x45] = 0;
                  puVar11[0x4a] = 0;
                  puVar11[0x4b] = 0;
                  puVar11[0x48] = 0;
                  puVar11[0x49] = 0;
                  *puVar11 = uVar3 & 0xfffeff8f;
                  func_0x0001004b6d90(puVar11 + 0x44);
                  cStack_a0 = '\x01';
                  func_0x0001008dc020(puVar11,&ppppuStack_c0);
                  if (cStack_a0 != '\0') {
                    func_0x0001004b6d90(&ppppuStack_c0);
                  }
                }
                uVar18 = *puVar11;
              }
              if ((uVar18 >> 1 & 1) != 0) {
                if ((*(char *)(ppuVar10 + 1) == '\0') &&
                   (*puVar11 = uVar18 & 0xffffbfff, (uVar18 >> 0xe & 1) != 0)) {
                  func_0x0001004b6d90(puVar11 + 0x54);
                }
                ppuVar10 = &PTR___tlv_bootstrap_11340d8b8;
                (*(code *)PTR___tlv_bootstrap_11340d8b8)();
                puVar6 = (ulong *)*ppuVar10;
                do {
                  uVar16 = *puVar6;
                  uVar1 = uVar16 + 0x10;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                  if (bVar5) {
                    *puVar6 = uVar1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (puVar6[2] < uVar1) {
                  func_0x0001004bbee0(puVar6,0x10);
                }
                else {
                  puVar6 = (ulong *)((long)puVar6 + uVar16 + 0x30);
                }
                *puVar6 = 0;
                puVar6[1] = 0;
                puVar14 = puVar6;
                FUN_104a95160(&ppppuStack_128,uVar15,puVar11);
                ppppuVar8 = ppppuStack_128;
                ppppuStack_128 = (undefined ****)&PTR_PTR_1130a5848;
                auStack_120[0] = 0;
                ppppuStack_118 = ppppuVar8;
                (**(code **)(PTR_PTR_1130a5848 + 8))(&PTR_PTR_1130a5848);
                auStack_140[0] = 0;
                ppppuStack_d0._0_1_ = 0;
                ppppuStack_118 = (undefined ****)&PTR_PTR_1130a5848;
                ppppuStack_c0 = (undefined ****)((ulong)ppppuStack_c0 & 0xffffffffffffff00);
                uStack_b8 = uStack_b8 & 0xffffffffffffff00;
                cStack_a0 = '\0';
                ppppuStack_98 = ppppuVar8;
                ppuStack_c8 = &PTR_PTR_1130a5848;
                puStack_138 = puVar6;
                puStack_130 = puVar13;
                puStack_b0 = puVar6;
                puStack_a8 = puVar13;
                FUN_104a952a4(&ppppuStack_d0);
                pppppuVar12 = &ppppuStack_c0;
                FUN_104a95198(extraout_x8);
                func_0x000104a95244(&ppppuStack_c0);
                FUN_104a9527c(auStack_140);
                FUN_104a952a4(auStack_120);
                ppppuVar8 = ppppuStack_128;
                (*(code *)(*ppppuStack_128)[1])();
                goto LAB_104a95074;
              }
              func_0x00010084cae4(&ppppuStack_d0,"Missing :authority header",0x19);
              pppppuVar12 = &ppppuStack_d0;
              FUN_104a91cc8(&ppppuStack_110);
              ppppuStack_c0 = ppppuStack_110;
              pppppuVar7 = &ppppuStack_c0;
              func_0x000104a95778();
            }
            *extraout_x8 = pppppuVar7;
            ppppuVar8 = (undefined ****)&ppppuStack_d0;
            func_0x0001004bdf74();
          }
        }
      }
      else {
        func_0x00010084cae4(&ppppuStack_c0,"Bad :te header",0xe);
        pppppuVar12 = &ppppuStack_c0;
        FUN_104a91cc8(&uStack_f0);
        ppuVar10 = &PTR___tlv_bootstrap_11340d8b8;
        (*(code *)PTR___tlv_bootstrap_11340d8b8)();
        puVar6 = (ulong *)*ppuVar10;
        do {
          uVar16 = *puVar6;
          uVar1 = uVar16 + 0x10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar5) {
            *puVar6 = uVar1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar6[2] < uVar1) {
          pppppuVar12 = (undefined *****)0x10;
          func_0x0001004bbee0();
          puVar14 = puVar13;
        }
        else {
          puVar6 = (ulong *)((long)puVar6 + uVar16 + 0x30);
          puVar14 = puVar13;
        }
        *puVar6 = (ulong)&PTR_FUN_1107c3e30;
        puVar6[1] = uStack_f0;
        *extraout_x8 = puVar6;
        ppppuVar8 = ppppuStack_c0;
        if (((ulong)ppppuStack_c0 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
    }
  }
LAB_104a95074:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return (undefined **)ppppuVar8;
  }
  ___stack_chk_fail();
  if (cStack_a0 != '\0') {
    func_0x0001004b6d90(&ppppuStack_c0);
  }
  __Unwind_Resume();
  pcStack_148 = FUN_104a95160;
  pppuVar9 = ppppuVar8[3];
  pppppuStack_160 = pppppuVar12;
  puStack_158 = puVar14;
  ppuStack_150 = &puStack_50;
  if (pppuVar9 != (undefined ***)0x0) {
    (*(code *)(*pppuVar9)[6])(pppuVar9,&pppppuStack_160);
    return (undefined **)pppuVar9;
  }
  FUN_104a71f98();
  ppuVar10 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)();
  ppuVar10 = (undefined **)*ppuVar10;
  do {
    puVar17 = *ppuVar10;
    puVar2 = puVar17 + 0x40;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
    if (bVar5) {
      *ppuVar10 = puVar2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (ppuVar10[2] < puVar2) {
    func_0x0001004bbee0(ppuVar10,0x40);
  }
  else {
    ppuVar10 = (undefined **)((long)ppuVar10 + (long)(puVar17 + 0x30));
  }
  *ppuVar10 = (undefined *)&PTR_FUN_1107c3e68;
  *(undefined1 *)(ppuVar10 + 1) = *(undefined1 *)pppppuVar12;
  *(undefined1 *)(ppuVar10 + 2) = 0;
  ppuVar10[3] = (undefined *)pppppuVar12[2];
  ppuVar10[4] = (undefined *)pppppuVar12[3];
  *(undefined1 *)(ppuVar10 + 5) = 0;
  ppuVar10[6] = (undefined *)pppppuVar12[5];
  pppppuVar12[5] = (undefined ****)&PTR_PTR_1130a5848;
  *pppuVar9 = ppuVar10;
  return (undefined **)pppuVar9;
}



/* Entry: 104a94acc; end: 104a9515f;  */

/* WARNING: Type propagation algorithm not settling */

undefined ****
FUN_104a94acc(undefined8 *param_1,long param_2,uint *param_3,ulong *param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  undefined *****pppppuVar7;
  undefined ****ppppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined *****pppppuVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined *puVar14;
  uint uVar15;
  undefined *****pppppuStack_120;
  ulong *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined1 auStack_100 [8];
  ulong *puStack_f8;
  ulong *puStack_f0;
  undefined ****ppppuStack_e8;
  undefined1 auStack_e0 [8];
  undefined ****ppppuStack_d8;
  undefined ****ppppuStack_d0;
  undefined ****ppppuStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined ****ppppuStack_90;
  undefined **ppuStack_88;
  undefined ****ppppuStack_80;
  ulong uStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  char cStack_60;
  undefined ****ppppuStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *param_3;
  if ((uVar3 >> 2 & 1) == 0) {
    func_0x00010084cae4(&ppppuStack_80,"Missing :method header",0x16);
    pppppuVar11 = &ppppuStack_80;
    FUN_104a91cc8(&uStack_a0);
    ppuVar10 = &PTR___tlv_bootstrap_11340d8b8;
    (*(code *)PTR___tlv_bootstrap_11340d8b8)();
    puVar6 = (ulong *)*ppuVar10;
    do {
      uVar13 = *puVar6;
      uVar1 = uVar13 + 0x10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar5) {
        *puVar6 = uVar1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar6[2] < uVar1) {
      pppppuVar11 = (undefined *****)0x10;
      func_0x0001004bbee0();
      puVar12 = param_4;
    }
    else {
      puVar6 = (ulong *)((long)puVar6 + uVar13 + 0x30);
      puVar12 = param_4;
    }
    *puVar6 = (ulong)&PTR_FUN_1107c3e30;
    puVar6[1] = uStack_a0;
    *param_1 = puVar6;
    ppppuVar8 = ppppuStack_80;
    if (((ulong)ppppuStack_80 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    uVar15 = param_3[0x6a];
    if ((uVar15 == 1 || uVar15 == 3) || ((uVar15 == 2 && (*(char *)(param_2 + 9) == '\0')))) {
      func_0x00010084cae4(&ppppuStack_80,"Bad method header",0x11);
      pppppuVar11 = &ppppuStack_80;
      FUN_104a91cc8(&uStack_98);
      ppuVar10 = &PTR___tlv_bootstrap_11340d8b8;
      (*(code *)PTR___tlv_bootstrap_11340d8b8)();
      puVar6 = (ulong *)*ppuVar10;
      do {
        uVar13 = *puVar6;
        uVar1 = uVar13 + 0x10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar5) {
          *puVar6 = uVar1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar6[2] < uVar1) {
        pppppuVar11 = (undefined *****)0x10;
        func_0x0001004bbee0();
        puVar12 = param_4;
      }
      else {
        puVar6 = (ulong *)((long)puVar6 + uVar13 + 0x30);
        puVar12 = param_4;
      }
      *puVar6 = (ulong)&PTR_FUN_1107c3e30;
      puVar6[1] = uStack_98;
      *param_1 = puVar6;
      ppppuVar8 = ppppuStack_80;
      if (((ulong)ppppuStack_80 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else if ((uVar3 >> 6 & 1) == 0) {
      func_0x00010084cae4(&ppppuStack_80,"Missing :te header",0x12);
      pppppuVar11 = &ppppuStack_80;
      FUN_104a91cc8(&uStack_a8);
      ppuVar10 = &PTR___tlv_bootstrap_11340d8b8;
      (*(code *)PTR___tlv_bootstrap_11340d8b8)();
      puVar6 = (ulong *)*ppuVar10;
      do {
        uVar13 = *puVar6;
        uVar1 = uVar13 + 0x10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar5) {
          *puVar6 = uVar1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar6[2] < uVar1) {
        pppppuVar11 = (undefined *****)0x10;
        func_0x0001004bbee0();
        puVar12 = param_4;
      }
      else {
        puVar6 = (ulong *)((long)puVar6 + uVar13 + 0x30);
        puVar12 = param_4;
      }
      *puVar6 = (ulong)&PTR_FUN_1107c3e30;
      puVar6[1] = uStack_a8;
      *param_1 = puVar6;
      ppppuVar8 = ppppuStack_80;
      if (((ulong)ppppuStack_80 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      *param_3 = uVar3 & 0xffffffbf;
      if ((char)param_3[0x66] == '\0') {
        if ((uVar3 >> 4 & 1) == 0) {
          func_0x00010084cae4(&ppppuStack_80,"Missing :scheme header",0x16);
          pppppuVar11 = &ppppuStack_80;
          FUN_104a91cc8(&uStack_c0);
          ppuVar10 = &PTR___tlv_bootstrap_11340d8b8;
          (*(code *)PTR___tlv_bootstrap_11340d8b8)();
          puVar6 = (ulong *)*ppuVar10;
          do {
            uVar13 = *puVar6;
            uVar1 = uVar13 + 0x10;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar5) {
              *puVar6 = uVar1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (puVar6[2] < uVar1) {
            pppppuVar11 = (undefined *****)0x10;
            func_0x0001004bbee0();
            puVar12 = param_4;
          }
          else {
            puVar6 = (ulong *)((long)puVar6 + uVar13 + 0x30);
            puVar12 = param_4;
          }
          *puVar6 = (ulong)&PTR_FUN_1107c3e30;
          puVar6[1] = uStack_c0;
          *param_1 = puVar6;
          ppppuVar8 = ppppuStack_80;
          if (((ulong)ppppuStack_80 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          *param_3 = uVar3 & 0xffffffaf;
          if (param_3[0x68] == 2) {
            func_0x00010084cae4(&ppppuStack_80,"Bad :scheme header",0x12);
            pppppuVar11 = &ppppuStack_80;
            FUN_104a91cc8(&uStack_b8);
            ppuVar10 = &PTR___tlv_bootstrap_11340d8b8;
            (*(code *)PTR___tlv_bootstrap_11340d8b8)();
            puVar6 = (ulong *)*ppuVar10;
            do {
              uVar13 = *puVar6;
              uVar1 = uVar13 + 0x10;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
              if (bVar5) {
                *puVar6 = uVar1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (puVar6[2] < uVar1) {
              pppppuVar11 = (undefined *****)0x10;
              func_0x0001004bbee0();
              puVar12 = param_4;
            }
            else {
              puVar6 = (ulong *)((long)puVar6 + uVar13 + 0x30);
              puVar12 = param_4;
            }
            *puVar6 = (ulong)&PTR_FUN_1107c3e30;
            puVar6[1] = uStack_b8;
            *param_1 = puVar6;
            ppppuVar8 = ppppuStack_80;
            if (((ulong)ppppuStack_80 & 1) != 0) {
              func_0x00010084dad0();
            }
          }
          else {
            uVar15 = uVar3 & 0xffffff8f;
            *param_3 = uVar15;
            if ((uVar3 & 1) == 0) {
              func_0x00010084cae4(&ppppuStack_90,"Missing :path header",0x14);
              pppppuVar11 = &ppppuStack_90;
              FUN_104a91cc8(&ppppuStack_c8);
              ppppuStack_80 = ppppuStack_c8;
              pppppuVar7 = &ppppuStack_80;
              func_0x000104a95778();
              puVar12 = param_4;
            }
            else {
              puVar12 = param_4;
              if ((uVar3 >> 1 & 1) == 0) {
                if ((uVar3 >> 0x10 & 1) != 0) {
                  uStack_78 = *(ulong *)(param_3 + 0x46);
                  ppppuStack_80 = *(undefined *****)(param_3 + 0x44);
                  puStack_68 = *(ulong **)(param_3 + 0x4a);
                  puStack_70 = *(ulong **)(param_3 + 0x48);
                  param_3[0x46] = 0;
                  param_3[0x47] = 0;
                  param_3[0x44] = 0;
                  param_3[0x45] = 0;
                  param_3[0x4a] = 0;
                  param_3[0x4b] = 0;
                  param_3[0x48] = 0;
                  param_3[0x49] = 0;
                  *param_3 = uVar3 & 0xfffeff8f;
                  func_0x0001004b6d90(param_3 + 0x44);
                  cStack_60 = '\x01';
                  func_0x0001008dc020(param_3,&ppppuStack_80);
                  if (cStack_60 != '\0') {
                    func_0x0001004b6d90(&ppppuStack_80);
                  }
                }
                uVar15 = *param_3;
              }
              if ((uVar15 >> 1 & 1) != 0) {
                if ((*(char *)(param_2 + 8) == '\0') &&
                   (*param_3 = uVar15 & 0xffffbfff, (uVar15 >> 0xe & 1) != 0)) {
                  func_0x0001004b6d90(param_3 + 0x54);
                }
                ppuVar10 = &PTR___tlv_bootstrap_11340d8b8;
                (*(code *)PTR___tlv_bootstrap_11340d8b8)();
                puVar6 = (ulong *)*ppuVar10;
                do {
                  uVar13 = *puVar6;
                  uVar1 = uVar13 + 0x10;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                  if (bVar5) {
                    *puVar6 = uVar1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (puVar6[2] < uVar1) {
                  func_0x0001004bbee0(puVar6,0x10);
                }
                else {
                  puVar6 = (ulong *)((long)puVar6 + uVar13 + 0x30);
                }
                *puVar6 = 0;
                puVar6[1] = 0;
                puVar12 = puVar6;
                FUN_104a95160(&ppppuStack_e8,param_5,param_3);
                ppppuVar8 = ppppuStack_e8;
                ppppuStack_e8 = (undefined ****)&PTR_PTR_1130a5848;
                auStack_e0[0] = 0;
                ppppuStack_d8 = ppppuVar8;
                (**(code **)(PTR_PTR_1130a5848 + 8))(&PTR_PTR_1130a5848);
                auStack_100[0] = 0;
                ppppuStack_90._0_1_ = 0;
                ppppuStack_d8 = (undefined ****)&PTR_PTR_1130a5848;
                ppppuStack_80 = (undefined ****)((ulong)ppppuStack_80 & 0xffffffffffffff00);
                uStack_78 = uStack_78 & 0xffffffffffffff00;
                cStack_60 = '\0';
                ppppuStack_58 = ppppuVar8;
                ppuStack_88 = &PTR_PTR_1130a5848;
                puStack_f8 = puVar6;
                puStack_f0 = param_4;
                puStack_70 = puVar6;
                puStack_68 = param_4;
                FUN_104a952a4(&ppppuStack_90);
                pppppuVar11 = &ppppuStack_80;
                FUN_104a95198(param_1);
                func_0x000104a95244(&ppppuStack_80);
                FUN_104a9527c(auStack_100);
                FUN_104a952a4(auStack_e0);
                ppppuVar8 = ppppuStack_e8;
                (*(code *)(*ppppuStack_e8)[1])();
                goto LAB_104a95074;
              }
              func_0x00010084cae4(&ppppuStack_90,"Missing :authority header",0x19);
              pppppuVar11 = &ppppuStack_90;
              FUN_104a91cc8(&ppppuStack_d0);
              ppppuStack_80 = ppppuStack_d0;
              pppppuVar7 = &ppppuStack_80;
              func_0x000104a95778();
            }
            *param_1 = pppppuVar7;
            ppppuVar8 = (undefined ****)&ppppuStack_90;
            func_0x0001004bdf74();
          }
        }
      }
      else {
        func_0x00010084cae4(&ppppuStack_80,"Bad :te header",0xe);
        pppppuVar11 = &ppppuStack_80;
        FUN_104a91cc8(&uStack_b0);
        ppuVar10 = &PTR___tlv_bootstrap_11340d8b8;
        (*(code *)PTR___tlv_bootstrap_11340d8b8)();
        puVar6 = (ulong *)*ppuVar10;
        do {
          uVar13 = *puVar6;
          uVar1 = uVar13 + 0x10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar5) {
            *puVar6 = uVar1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar6[2] < uVar1) {
          pppppuVar11 = (undefined *****)0x10;
          func_0x0001004bbee0();
          puVar12 = param_4;
        }
        else {
          puVar6 = (ulong *)((long)puVar6 + uVar13 + 0x30);
          puVar12 = param_4;
        }
        *puVar6 = (ulong)&PTR_FUN_1107c3e30;
        puVar6[1] = uStack_b0;
        *param_1 = puVar6;
        ppppuVar8 = ppppuStack_80;
        if (((ulong)ppppuStack_80 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
    }
  }
LAB_104a95074:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppuVar8;
  }
  ___stack_chk_fail();
  if (cStack_60 != '\0') {
    func_0x0001004b6d90(&ppppuStack_80);
  }
  __Unwind_Resume();
  pcStack_108 = FUN_104a95160;
  pppuVar9 = ppppuVar8[3];
  pppppuStack_120 = pppppuVar11;
  puStack_118 = puVar12;
  puStack_110 = &stack0xfffffffffffffff0;
  if (pppuVar9 != (undefined ***)0x0) {
    (*(code *)(*pppuVar9)[6])(pppuVar9,&pppppuStack_120);
    return (undefined ****)pppuVar9;
  }
  FUN_104a71f98();
  ppuVar10 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)();
  ppuVar10 = (undefined **)*ppuVar10;
  do {
    puVar14 = *ppuVar10;
    puVar2 = puVar14 + 0x40;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
    if (bVar5) {
      *ppuVar10 = puVar2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (ppuVar10[2] < puVar2) {
    func_0x0001004bbee0(ppuVar10,0x40);
  }
  else {
    ppuVar10 = (undefined **)((long)ppuVar10 + (long)(puVar14 + 0x30));
  }
  *ppuVar10 = (undefined *)&PTR_FUN_1107c3e68;
  *(undefined1 *)(ppuVar10 + 1) = *(undefined1 *)pppppuVar11;
  *(undefined1 *)(ppuVar10 + 2) = 0;
  ppuVar10[3] = (undefined *)pppppuVar11[2];
  ppuVar10[4] = (undefined *)pppppuVar11[3];
  *(undefined1 *)(ppuVar10 + 5) = 0;
  ppuVar10[6] = (undefined *)pppppuVar11[5];
  pppppuVar11[5] = (undefined ****)&PTR_PTR_1130a5848;
  *pppuVar9 = ppuVar10;
  return (undefined ****)pppuVar9;
}



/* Entry: 104a95160; end: 104a95197;  */

long * FUN_104a95160(long param_1,undefined1 *param_2,undefined8 param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  plVar4 = *(long **)(param_1 + 0x18);
  puStack_20 = param_2;
  uStack_18 = param_3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&puStack_20);
    return plVar4;
  }
  FUN_104a71f98();
  ppuVar5 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)();
  puVar6 = (ulong *)*ppuVar5;
  do {
    uVar7 = *puVar6;
    uVar1 = uVar7 + 0x40;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar3) {
      *puVar6 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar6[2] < uVar1) {
    func_0x0001004bbee0(puVar6,0x40);
  }
  else {
    puVar6 = (ulong *)((long)puVar6 + uVar7 + 0x30);
  }
  *puVar6 = (ulong)&PTR_FUN_1107c3e68;
  *(undefined1 *)(puVar6 + 1) = *param_2;
  *(undefined1 *)(puVar6 + 2) = 0;
  puVar6[3] = *(ulong *)(param_2 + 0x10);
  puVar6[4] = *(ulong *)(param_2 + 0x18);
  *(undefined1 *)(puVar6 + 5) = 0;
  puVar6[6] = *(ulong *)(param_2 + 0x28);
  *(undefined ***)(param_2 + 0x28) = &PTR_PTR_1130a5848;
  *plVar4 = (long)puVar6;
  return plVar4;
}



/* Entry: 104a95198; end: 104a9527b;  */

undefined8 * FUN_104a95198(undefined8 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  ulong *puVar5;
  ulong uVar6;
  
  ppuVar4 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)();
  puVar5 = (ulong *)*ppuVar4;
  do {
    uVar6 = *puVar5;
    uVar1 = uVar6 + 0x40;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar3) {
      *puVar5 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar5[2] < uVar1) {
    func_0x0001004bbee0(puVar5,0x40);
  }
  else {
    puVar5 = (ulong *)((long)puVar5 + uVar6 + 0x30);
  }
  *puVar5 = (ulong)&PTR_FUN_1107c3e68;
  *(undefined1 *)(puVar5 + 1) = *param_2;
  *(undefined1 *)(puVar5 + 2) = 0;
  puVar5[3] = *(ulong *)(param_2 + 0x10);
  puVar5[4] = *(ulong *)(param_2 + 0x18);
  *(undefined1 *)(puVar5 + 5) = 0;
  puVar5[6] = *(ulong *)(param_2 + 0x28);
  *(undefined ***)(param_2 + 0x28) = &PTR_PTR_1130a5848;
  *param_1 = puVar5;
  return param_1;
}



/* Entry: 104a9527c; end: 104a952a3;  */

void FUN_104a9527c(byte *param_1)

{
  code *pcVar1;
  
  if (*param_1 < 2) {
    return;
  }
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a952a0);
  (*pcVar1)();
}



/* Entry: 104a952a4; end: 104a952f3;  */

char * FUN_104a952a4(char *param_1)

{
  code *pcVar1;
  
  if (*param_1 != '\x01') {
    if (*param_1 != '\0') {
      _abort();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104a952ec);
      (*pcVar1)();
    }
    (**(code **)(**(long **)(param_1 + 8) + 8))();
  }
  return param_1;
}



/* Entry: 104a952f4; end: 104a9537b;  */

void FUN_104a952f4(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_2;
  func_0x00010047d6c8(param_2,"grpc.surface_user_agent",0x17);
  func_0x00010047d6c8(param_2,
                      "grpc.http.do_not_use_unless_you_have_permission_from_grpc_team_allow_broken_put_requests"
                      ,0x58);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x101) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 2) =
       CONCAT11((uVar1 & 0xff) != 0,(uVar2 & 0xff) != 0 || ((uint)uVar2 & 0xffff) < 0x100);
  *param_1 = 0;
  param_1[1] = &PTR_DAT_1107c3d48;
  return;
}



/* Entry: 104a9537c; end: 104a9538b;  */

void FUN_104a9537c(void)

{
  return;
}



/* Entry: 104a9538c; end: 104a9548b;  */

void FUN_104a9538c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = *(long **)(param_2 + 8);
  func_0x0001008dd084(alStack_68,param_5);
  (**(code **)(*plVar3 + 8))(param_1,plVar3,param_3,param_4,alStack_68);
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plVar3 = alStack_68;
LAB_104a95414:
    (**(code **)(*plVar3 + lVar2 * 8))();
  }
  else {
    plVar3 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_104a95414;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plStack_50 = alStack_68;
  }
  else {
    if (plStack_50 == (long *)0x0) goto LAB_104a95484;
    lVar2 = 5;
  }
  (**(code **)(*plStack_50 + lVar2 * 8))();
LAB_104a95484:
  __Unwind_Resume();
  plVar1 = (long *)plVar3[1];
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008db094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar3[2] + 0x10))(plVar3 + 2,param_3);
  return;
}



/* Entry: 104a9548c; end: 104a95517;  */

void FUN_104a9548c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008db094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 104a95518; end: 104a9551b;  */

undefined8 * FUN_104a95518(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_1107c4d30;
  param_1[1] = &PTR_FUN_1107c4d88;
  if (param_1[0x16] == 0) {
    func_0x0001006153ac(param_1 + 0x14);
    if ((param_1[0x13] & 1) != 0) {
      func_0x00010084dad0();
    }
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_1107c4c40;
    param_1[1] = &PTR_FUN_1107c4c98;
    return param_1;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                      ,0x3ba,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104aafc80);
  (*pcVar1)();
}



/* Entry: 104a9551c; end: 104a9552f;  */

void FUN_104a9551c(void)

{
  FUN_104aafbdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a95530; end: 104a95537;  */

void FUN_104a95530(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0x10);
  plVar3 = (long *)(lVar4 + 0x48);
  do {
    lVar6 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    return;
  }
  func_0x000107c2c17c();
  lVar6 = *(long *)(lVar4 + 0x10);
  plVar3 = (long *)**(undefined8 **)(lVar4 + 8);
  lVar4 = param_2;
  func_0x000100611dc4();
  if (lVar4 == 0) {
    FUN_104abe96c();
    if (param_2 == 0) {
      return;
    }
    puVar5 = (undefined8 *)(*plVar3 + 0x28);
  }
  else {
    puVar5 = (undefined8 *)(*plVar3 + 0x20);
    param_2 = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000100611e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar3,lVar6 + 0x200,param_2);
  return;
}



/* Entry: 104a95538; end: 104a95587;  */

void FUN_104a95538(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 uStack_31;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  plVar2 = *(long **)(param_1 + 0x10);
  puVar1 = (undefined8 *)plVar2[7];
  plVar2[7] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  (**(code **)(*plVar2 + 8))(plVar2);
  if (param_3 == 0) {
    return;
  }
  func_0x00010bdaa800();
  pcStack_28 = FUN_104a95588;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_104a955b0(&uStack_31,plVar2,param_2);
  return;
}



/* Entry: 104a95588; end: 104a955af;  */

void FUN_104a95588(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_104a955b0(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 104a955b0; end: 104a956df;  */

ulong * FUN_104a955b0(undefined8 *param_1,ulong *param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  ulong auStack_48 [2];
  undefined2 uStack_38;
  
  if (*(int *)(param_4 + 0x14) == 0) {
    func_0x000100560184(auStack_58,*(undefined8 *)(param_4 + 8));
    FUN_104a952f4(auStack_48,auStack_58);
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
      }
    }
    puVar5 = *(undefined8 **)(param_3 + 8);
    if (auStack_48[0] == 0) {
      *puVar5 = &PTR_DAT_1107c3d48;
      *(undefined2 *)(puVar5 + 1) = uStack_38;
      *param_1 = 0;
    }
    else {
      *puVar5 = &PTR_DAT_1107c0cf0;
      uStack_60 = auStack_48[0];
      if ((auStack_48[0] & 1) != 0) {
        piVar6 = (int *)(auStack_48[0] - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_104addba0(param_1,&uStack_60);
      if ((uStack_60 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    puVar4 = auStack_48;
    FUN_104a956e0(puVar4);
    return puVar4;
  }
  func_0x00010bdaa834();
  FUN_104bd46a0();
  func_0x0001004bdf74(&uStack_60);
  FUN_104a956e0(auStack_48);
  __Unwind_Resume();
  if ((*param_2 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_2;
}



/* Entry: 104a956e0; end: 104a9570f;  */

ulong * FUN_104a956e0(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104a95710; end: 104a9572f;  */

void FUN_104a95710(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000104a9571c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 8))();
  return;
}



/* Entry: 104a95730; end: 104a957eb;  */

void FUN_104a95730(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x18))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104aab120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x58))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 104a957ec; end: 104a95803;  */

undefined1  [16] FUN_104a957ec(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  auVar2._8_8_ = 1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 104a95804; end: 104a95a13;  */

undefined1  [16] FUN_104a95804(undefined8 **param_1,undefined8 **param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x21;
  undefined8 **ppuVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 *puStack_50;
  undefined8 **ppuStack_48;
  undefined8 *puStack_40;
  uint uStack_38;
  
  ppuVar7 = &puStack_50;
  ppuVar5 = &puStack_50;
  bVar1 = *(byte *)(param_1 + 1);
  ppuVar3 = param_1;
  if ((bVar1 >> 2 & 1) == 0) {
    ppuVar3 = param_1 + 2;
    if (*(char *)ppuVar3 != '\x01') {
      if (*(char *)ppuVar3 == '\0') {
        puVar6 = param_1[3];
        if (*(char *)(puVar6 + 1) != '\0') {
          param_1[3] = param_1[4];
          param_1[4] = puVar6;
          *(char *)(param_1 + 2) = '\x01';
          goto LAB_104a95854;
        }
        *(undefined1 *)((long)puVar6 + 9) = 1;
        uStack_38 = 0;
        goto LAB_104a9585c;
      }
LAB_104a959f4:
      ppuVar5 = param_2;
      _abort();
SUB_104a95244:
      FUN_104a71e10();
      FUN_104bd46a0();
      func_0x00010047a9b8(&puStack_50);
      __Unwind_Resume();
      if ((*(byte *)(ppuVar3 + 1) >> 1 & 1) == 0) {
        FUN_104a952a4(ppuVar3 + 5);
      }
      FUN_104a9527c(ppuVar3 + 2);
      auVar8._8_8_ = ppuVar5;
      auVar8._0_8_ = ppuVar3 + 1;
      return auVar8;
    }
LAB_104a95854:
    FUN_104a95a1c(&puStack_40);
LAB_104a9585c:
    param_2 = &puStack_40;
    func_0x00010047a8f0(&puStack_50);
    func_0x00010047a9b8(&puStack_40);
    if ((int)ppuStack_48 != 1) {
LAB_104a958bc:
      func_0x00010047a9b8();
      bVar1 = *(byte *)(param_1 + 1);
      ppuVar3 = ppuVar7;
      goto LAB_104a958c8;
    }
    if (puStack_50 == (undefined8 *)0x0) {
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 4;
      goto LAB_104a958bc;
    }
    FUN_104a91cc8(&puStack_40,&puStack_50);
    func_0x00010047a9b8(&puStack_50);
  }
  else {
LAB_104a958c8:
    if ((bVar1 >> 1 & 1) == 0) {
      cVar2 = *(char *)(param_1 + 5);
      if (cVar2 == '\x01') {
        unaff_x21 = param_1[6];
        param_1[6] = (undefined8 *)0x0;
        FUN_104a95ac4(unaff_x21);
        ppuVar7 = (undefined8 **)0x1;
      }
      else {
        if (cVar2 != '\0') goto LAB_104a959f4;
        puVar6 = param_1[6];
        (**(code **)*puVar6)();
        ppuVar3 = &puStack_40;
        puStack_50 = puVar6;
        ppuStack_48 = param_2;
        func_0x000100616694(ppuVar3,&puStack_50);
        unaff_x21 = puStack_40;
        ppuVar7 = (undefined8 **)(ulong)uStack_38;
        if (uStack_38 != 0) {
          if (uStack_38 != 1) goto SUB_104a95244;
          (**(code **)(*param_1[6] + 8))();
          *(char *)(param_1 + 5) = '\x01';
          param_1[6] = (undefined8 *)0x0;
          FUN_104a95ac4(unaff_x21);
        }
      }
      puStack_50 = unaff_x21;
      ppuStack_48 = ppuVar7;
      func_0x000100616694(&puStack_40,&puStack_50);
      if (uStack_38 == 1) {
        if (((*(byte *)((long)puStack_40 + 1) >> 2 & 1) == 0) || (*(int *)(puStack_40 + 0x31) != 0))
        goto LAB_104a959d0;
        *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
        FUN_104a952a4(param_1 + 5);
        param_1[5] = puStack_40;
        unaff_x21 = puStack_40;
      }
      bVar1 = *(byte *)(param_1 + 1);
    }
    if ((bVar1 & 1) == 0) {
      puStack_40 = (undefined8 *)0x0;
      uStack_38 = 1;
      *(byte *)(param_1 + 1) = bVar1 | 1;
      func_0x00010047a9b8(&puStack_40);
      bVar1 = *(byte *)(param_1 + 1);
    }
    if (bVar1 != 7) {
      uVar4 = 0;
      puStack_40 = unaff_x21;
      goto LAB_104a959dc;
    }
    puStack_40 = param_1[5];
    param_1[5] = (undefined8 *)0x0;
  }
LAB_104a959d0:
  uVar4 = 1;
LAB_104a959dc:
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = puStack_40;
  return auVar9;
}



/* Entry: 104a95a14; end: 104a95a1b;  */

byte * FUN_104a95a14(long param_1)

{
  if ((*(byte *)(param_1 + 8) >> 1 & 1) == 0) {
    FUN_104a952a4(param_1 + 0x28);
  }
  FUN_104a9527c(param_1 + 0x10);
  return (byte *)(param_1 + 8);
}



/* Entry: 104a95a1c; end: 104a95ac3;  */

void FUN_104a95a1c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  puVar1 = (undefined8 *)*puVar3;
  FUN_104a95ac4();
  puVar2 = (uint *)*puVar3;
  puVar2[0x69] = 200;
  *puVar2 = *puVar2 | 0x28;
  puVar2[0x67] = 0;
  puVar3 = *(undefined8 **)(param_2 + 8);
  *puVar3 = puVar2;
  *(undefined1 *)(puVar3 + 1) = 1;
  if (*(char *)((long)puVar3 + 9) != '\0') {
    *(undefined1 *)((long)puVar3 + 9) = 0;
    func_0x00010047a478();
    (**(code **)(*(long *)*puVar1 + 0x18))();
  }
  uStack_38 = 1;
  uStack_40 = 0x36;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  func_0x00010047a9b8(&uStack_40);
  return;
}



/* Entry: 104a95ac4; end: 104a95bc3;  */

undefined1  [16] FUN_104a95ac4(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long alStack_118 [8];
  long lStack_d8;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_1 + 1) < '\0') {
    plVar3 = param_1 + 0x26;
    lStack_88 = param_1[0x27];
    plStack_90 = (long *)*plVar3;
    lStack_78 = param_1[0x29];
    lStack_80 = param_1[0x28];
    param_1[0x27] = 0;
    *plVar3 = 0;
    param_1[0x29] = 0;
    param_1[0x28] = 0;
    param_2 = 1;
    FUN_104ad737c(&plStack_70,&plStack_90);
    lVar8 = param_1[0x27];
    plVar4 = (long *)*plVar3;
    lVar6 = param_1[0x29];
    lVar7 = param_1[0x28];
    param_1[0x27] = lStack_68;
    *plVar3 = (long)plStack_70;
    param_1[0x29] = lStack_58;
    param_1[0x28] = lStack_60;
    plStack_70 = plVar4;
    lStack_68 = lVar8;
    lStack_60 = lVar7;
    lStack_58 = lVar6;
    if ((long *)0x1 < plVar4) {
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
    param_1 = plStack_90;
    if ((long *)0x1 < plStack_90) {
      do {
        lVar7 = *plStack_90;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
        if (bVar2) {
          *plStack_90 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_90[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = param_1;
    return auVar12;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_90);
  }
  __Unwind_Resume(param_1);
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)0x2;
  uVar5 = param_2;
  func_0x0001004686b8();
  if ((int)plVar3 != 0) {
    plVar3 = alStack_118;
    func_0x000107c616d0(plVar3,0x40,param_4,&plStack_90);
    if ((int)(uint)plVar3 < 0) {
      plVar4 = (long *)0x0;
      plVar3 = (long *)0x0;
    }
    else if ((uint)plVar3 < 0x40) {
      plVar3 = (long *)0x0;
      plVar4 = alStack_118;
    }
    else {
      plVar3 = (long *)(((ulong)plVar3 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar4 = plVar3;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar4);
    func_0x000100460314();
    uVar5 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    auVar9._8_8_ = uVar5;
    auVar9._0_8_ = plVar3;
    return auVar9;
  }
  func_0x000107c60e78();
  if (uVar5 >> 0x3d == 0) {
    lVar7 = uVar5 << 3;
    func_0x000107c60e20(lVar7);
    auVar10._8_8_ = uVar5;
    auVar10._0_8_ = lVar7;
    return auVar10;
  }
  FUN_104a7757c();
  lVar7 = plVar3[1];
  lVar6 = plVar3[2];
  while (lVar6 != lVar7) {
    plVar3[2] = lVar6 + -8;
    plVar4 = *(long **)(lVar6 + -8);
    *(undefined8 *)(lVar6 + -8) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    lVar6 = plVar3[2];
  }
  if (*plVar3 != 0) {
    func_0x000107c60e14();
  }
  auVar11._8_8_ = uVar5;
  auVar11._0_8_ = plVar3;
  return auVar11;
}



/* Entry: 104a95bc4; end: 104a95bcb;  */

undefined1  [16]
FUN_104a95bc4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104a95bcc; end: 104a96307;  */

/* WARNING: Removing unreachable block (ram,0x000104a95c28) */
/* WARNING: Removing unreachable block (ram,0x000104a95e88) */

void FUN_104a95bcc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  ulong *puVar2;
  code *pcVar3;
  long *plVar4;
  ulong **ppuVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uStack_108;
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
  undefined1 uStack_a1;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong **ppuStack_80;
  ulong **ppuStack_78;
  ulong **ppuStack_70;
  ulong **ppuStack_68;
  ulong **ppuStack_60;
  undefined8 *puStack_58;
  
  puStack_98 = (ulong *)0x0;
  puStack_90 = (ulong *)0x0;
  puStack_88 = (ulong *)0x0;
  func_0x00010002b024(&ppuStack_80,"maxRequestMessageBytes");
  lVar12 = param_4 + 0x20;
  lVar9 = lVar12;
  func_0x000100484044(lVar12,&ppuStack_80);
  if (param_4 + 0x28 == lVar9) {
LAB_104a95e5c:
    iVar8 = -1;
  }
  else {
    if (1 < *(int *)(lVar9 + 0x38) - 3U) {
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c0 = (ulong *)0x0;
      FUN_104ab5920(&puStack_a0,2,"field:maxRequestMessageBytes error:should be of type number",0x3b
                    ,&uStack_a1,&uStack_c0);
      if (puStack_90 < puStack_88) {
        *puStack_90 = (ulong)puStack_a0;
        puStack_a0 = (ulong *)0x36;
        puStack_90 = puStack_90 + 1;
      }
      else {
        lVar9 = (long)puStack_90 - (long)puStack_98 >> 3;
        uVar1 = lVar9 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_104a83ee4(&puStack_98);
          goto LAB_104a961d8;
        }
        ppuVar5 = &puStack_88;
        uVar7 = (long)puStack_88 - (long)puStack_98 >> 2;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)puStack_88 - (long)puStack_98)) {
          uVar7 = 0x1fffffffffffffff;
        }
        ppuStack_60 = ppuVar5;
        if (uVar7 == 0) {
          ppuStack_80 = (ulong **)0x0;
        }
        else {
          FUN_104a83ef8();
          ppuStack_80 = ppuVar5;
        }
        ppuStack_78 = ppuStack_80 + lVar9;
        ppuStack_68 = ppuStack_80 + uVar7;
        ppuVar5 = ppuStack_78 + 1;
        *ppuStack_78 = puStack_a0;
        puStack_a0 = (ulong *)0x36;
        ppuStack_70 = ppuVar5;
        FUN_104a83e70(&puStack_98,&ppuStack_80);
        puVar2 = puStack_90;
        FUN_104a84040(&ppuStack_80);
        puStack_90 = puVar2;
        if (((ulong)puStack_a0 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      ppuStack_80 = (ulong **)&uStack_c0;
LAB_104a95e50:
      func_0x000100482b64(&ppuStack_80);
      goto LAB_104a95e5c;
    }
    plVar4 = (long *)(lVar9 + 0x40);
    if (*(char *)(lVar9 + 0x57) < '\0') {
      plVar4 = (long *)*plVar4;
    }
    iVar8 = (int)plVar4;
    FUN_104a6f25c();
    if (iVar8 == -1) {
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_d8 = (ulong *)0x0;
      FUN_104ab5920(&puStack_a0,2,"field:maxRequestMessageBytes error:should be non-negative",0x39,
                    &uStack_a1,&uStack_d8);
      if (puStack_90 < puStack_88) {
        *puStack_90 = (ulong)puStack_a0;
        puStack_a0 = (ulong *)0x36;
        puStack_90 = puStack_90 + 1;
      }
      else {
        lVar9 = (long)puStack_90 - (long)puStack_98 >> 3;
        uVar1 = lVar9 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_104a83ee4(&puStack_98);
          goto LAB_104a961d8;
        }
        ppuVar5 = &puStack_88;
        uVar7 = (long)puStack_88 - (long)puStack_98 >> 2;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)puStack_88 - (long)puStack_98)) {
          uVar7 = 0x1fffffffffffffff;
        }
        ppuStack_60 = ppuVar5;
        if (uVar7 == 0) {
          ppuStack_80 = (ulong **)0x0;
        }
        else {
          FUN_104a83ef8();
          ppuStack_80 = ppuVar5;
        }
        ppuStack_78 = ppuStack_80 + lVar9;
        ppuStack_68 = ppuStack_80 + uVar7;
        ppuVar5 = ppuStack_78 + 1;
        *ppuStack_78 = puStack_a0;
        puStack_a0 = (ulong *)0x36;
        ppuStack_70 = ppuVar5;
        FUN_104a83e70(&puStack_98,&ppuStack_80);
        puVar2 = puStack_90;
        FUN_104a84040(&ppuStack_80);
        puStack_90 = puVar2;
        if (((ulong)puStack_a0 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      ppuStack_80 = (ulong **)&uStack_d8;
      goto LAB_104a95e50;
    }
  }
  func_0x00010002b024(&ppuStack_80,"maxResponseMessageBytes");
  func_0x000100484044(lVar12,&ppuStack_80);
  if (param_4 + 0x28 == lVar12) {
LAB_104a960b8:
    iVar11 = -1;
  }
  else {
    if (1 < *(int *)(lVar12 + 0x38) - 3U) {
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_f0 = (ulong *)0x0;
      FUN_104ab5920(&puStack_a0,2,"field:maxResponseMessageBytes error:should be of type number",
                    0x3c,&uStack_a1,&uStack_f0);
      if (puStack_90 < puStack_88) {
        *puStack_90 = (ulong)puStack_a0;
        puStack_a0 = (ulong *)0x36;
        puStack_90 = puStack_90 + 1;
      }
      else {
        lVar12 = (long)puStack_90 - (long)puStack_98 >> 3;
        uVar1 = lVar12 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_104a83ee4(&puStack_98);
LAB_104a961d8:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a961dc);
          (*pcVar3)();
        }
        ppuVar5 = &puStack_88;
        uVar7 = (long)puStack_88 - (long)puStack_98 >> 2;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)puStack_88 - (long)puStack_98)) {
          uVar7 = 0x1fffffffffffffff;
        }
        ppuStack_60 = ppuVar5;
        if (uVar7 == 0) {
          ppuStack_80 = (ulong **)0x0;
        }
        else {
          FUN_104a83ef8();
          ppuStack_80 = ppuVar5;
        }
        ppuStack_78 = ppuStack_80 + lVar12;
        ppuStack_68 = ppuStack_80 + uVar7;
        ppuVar5 = ppuStack_78 + 1;
        *ppuStack_78 = puStack_a0;
        puStack_a0 = (ulong *)0x36;
        ppuStack_70 = ppuVar5;
        FUN_104a83e70(&puStack_98,&ppuStack_80);
        puVar2 = puStack_90;
        FUN_104a84040(&ppuStack_80);
        puStack_90 = puVar2;
        if (((ulong)puStack_a0 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      ppuStack_80 = (ulong **)&uStack_f0;
LAB_104a960ac:
      func_0x000100482b64(&ppuStack_80);
      goto LAB_104a960b8;
    }
    plVar4 = (long *)(lVar12 + 0x40);
    if (*(char *)(lVar12 + 0x57) < '\0') {
      plVar4 = (long *)*plVar4;
    }
    iVar11 = (int)plVar4;
    FUN_104a6f25c();
    if (iVar11 == -1) {
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_108 = (ulong *)0x0;
      FUN_104ab5920(&puStack_a0,2,"field:maxResponseMessageBytes error:should be non-negative",0x3a,
                    &uStack_a1,&uStack_108);
      if (puStack_90 < puStack_88) {
        *puStack_90 = (ulong)puStack_a0;
        puStack_a0 = (ulong *)0x36;
        puStack_90 = puStack_90 + 1;
      }
      else {
        lVar12 = (long)puStack_90 - (long)puStack_98 >> 3;
        uVar1 = lVar12 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_104a83ee4(&puStack_98);
          goto LAB_104a961d8;
        }
        ppuVar5 = &puStack_88;
        uVar7 = (long)puStack_88 - (long)puStack_98 >> 2;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)puStack_88 - (long)puStack_98)) {
          uVar7 = 0x1fffffffffffffff;
        }
        ppuStack_60 = ppuVar5;
        if (uVar7 == 0) {
          ppuStack_80 = (ulong **)0x0;
        }
        else {
          FUN_104a83ef8();
          ppuStack_80 = ppuVar5;
        }
        ppuStack_78 = ppuStack_80 + lVar12;
        ppuStack_68 = ppuStack_80 + uVar7;
        ppuVar5 = ppuStack_78 + 1;
        *ppuStack_78 = puStack_a0;
        puStack_a0 = (ulong *)0x36;
        ppuStack_70 = ppuVar5;
        FUN_104a83e70(&puStack_98,&ppuStack_80);
        puVar2 = puStack_90;
        FUN_104a84040(&ppuStack_80);
        puStack_90 = puVar2;
        if (((ulong)puStack_a0 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      ppuStack_80 = (ulong **)&uStack_108;
      goto LAB_104a960ac;
    }
  }
  if (puStack_98 == puStack_90) {
    puVar6 = (undefined8 *)0x10;
    __Znwm();
    *puVar6 = &PTR_DAT_1107c3f58;
    *(int *)(puVar6 + 1) = iVar8;
    *(int *)((long)puVar6 + 0xc) = iVar11;
    goto LAB_104a9617c;
  }
  puStack_58 = (ulong **)0x0;
  FUN_104aba878(&ppuStack_80,2,"Message size parser",0x13,&puStack_a0,
                (long)puStack_90 - (long)puStack_98 >> 3);
  puVar2 = puStack_98;
  if (ppuStack_80 != (ulong **)0x0) {
    puStack_58 = ppuStack_80;
  }
  if (puStack_90 != puStack_98) {
    puVar10 = puStack_90;
    do {
      puVar10 = puVar10 + -1;
      FUN_104a713e4(&puStack_88,puVar10);
    } while (puVar10 != puVar2);
  }
  puStack_90 = puVar2;
  ppuVar5 = (ulong **)*param_5;
  if ((ulong **)puStack_58 == ppuVar5) {
LAB_104a96154:
    if (((ulong)ppuVar5 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *param_5 = puStack_58;
    puStack_58 = (ulong **)0x36;
    if (((ulong)ppuVar5 & 1) != 0) {
      func_0x00010084dad0();
      ppuVar5 = (ulong **)puStack_58;
      goto LAB_104a96154;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_104a9617c:
  *param_1 = puVar6;
  ppuStack_80 = &puStack_98;
  func_0x000100482b64(&ppuStack_80);
  return;
}



/* Entry: 104a96308; end: 104a9631b;  */

void FUN_104a96308(void)

{
  return;
}



/* Entry: 104a9631c; end: 104a9639b;  */

undefined8 * FUN_104a9631c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c3fa0;
  if (param_1[0x11] != 0) {
    FUN_104aba638();
  }
  plVar4 = (long *)param_1[0x23];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  func_0x00010047aa10(param_1 + 0x21);
  func_0x0001005a5f48(param_1 + 2);
  return param_1;
}



/* Entry: 104a9639c; end: 104a9639f;  */

undefined8 * FUN_104a9639c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c3fa0;
  if (param_1[0x11] != 0) {
    FUN_104aba638();
  }
  plVar4 = (long *)param_1[0x23];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  func_0x00010047aa10(param_1 + 0x21);
  func_0x0001005a5f48(param_1 + 2);
  return param_1;
}



/* Entry: 104a963a0; end: 104a963b3;  */

void FUN_104a963a0(void)

{
  FUN_104a9631c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a963b4; end: 104a96463;  */

void FUN_104a963b4(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uStack_38;
  
  func_0x000100460448(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x80) = 1;
  lVar3 = *(long *)(param_1 + 0x118);
  if (lVar3 != 0) {
    uStack_38 = *param_2;
    if ((uStack_38 & 1) != 0) {
      piVar4 = (int *)(uStack_38 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_104adde0c(lVar3,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  func_0x000100466b80(param_1 + 0x10);
  return;
}



/* Entry: 104a96464; end: 104a9653b;  */

void FUN_104a96464(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  undefined1 *puStack_28;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  FUN_104ab5920(&uStack_30,2,"Subchannel disconnected",0x17,&uStack_31,&uStack_50);
  (**(code **)(*param_1 + 0x20))(param_1,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  puStack_28 = (undefined1 *)&uStack_50;
  func_0x000100482b64(&puStack_28);
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return;
}



/* Entry: 104a9653c; end: 104a96543;  */

void FUN_104a9653c(void)

{
  return;
}


