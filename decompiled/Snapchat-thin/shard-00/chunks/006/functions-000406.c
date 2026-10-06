/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10086e2f0; end: 10086e3e3;  */

void FUN_10086e2f0(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *UNRECOVERED_JUMPTABLE;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  
  iVar7 = (int)*param_1 + 0x10;
  FUN_1006716a8();
  if (iVar7 == 0) {
    return;
  }
  pbVar1 = (byte *)(*param_1 + 0xa8);
  do {
    bVar2 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
  lVar9 = *param_1;
  if (*(char *)(lVar9 + 0xb8) != '\x01') {
    uVar10 = *(long *)(lVar9 + 0xe0) + 1;
    uVar12 = *(ulong *)(lVar9 + 0xa0);
    uVar6 = 0;
    if (uVar12 != 0) {
      uVar6 = uVar10 / uVar12;
    }
    *(ulong *)(lVar9 + 0xe0) = uVar10 - uVar6 * uVar12;
    *(long *)(lVar9 + 0xe8) = *(long *)(lVar9 + 0xe8) + 1;
    *pbVar1 = 0;
    lVar9 = *param_1;
    pbVar1 = (byte *)(lVar9 + 0x58);
    do {
      bVar2 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
    if (*(long *)(lVar9 + 0x98) != 0) {
      uVar10 = *(ulong *)(lVar9 + 0x90);
      puVar11 = (undefined8 *)
                ((*(undefined8 **)(lVar9 + 0x78))[uVar10 / 0xaa] + (uVar10 % 0xaa) * 0x18);
      UNRECOVERED_JUMPTABLE = (code *)*puVar11;
      puVar3 = (undefined8 *)puVar11[1];
      plVar13 = (long *)puVar11[2];
      *(ulong *)(lVar9 + 0x90) = uVar10 + 1;
      *(long *)(lVar9 + 0x98) = *(long *)(lVar9 + 0x98) + -1;
      if (0x153 < uVar10 + 1) {
        func_0x000107c60e14(**(undefined8 **)(lVar9 + 0x78));
        *(long *)(lVar9 + 0x78) = *(long *)(lVar9 + 0x78) + 8;
        *(long *)(lVar9 + 0x90) = *(long *)(lVar9 + 0x90) + -0xaa;
      }
      *pbVar1 = 0;
      if (plVar13 == (long *)0x0) {
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100671800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(puVar3);
          return;
        }
        (*(code *)*puVar3)(puVar3);
      }
      else {
        (**(code **)(*plVar13 + 0x10))(plVar13,UNRECOVERED_JUMPTABLE,puVar3);
      }
      return;
    }
    *(int *)(lVar9 + 0x68) = *(int *)(lVar9 + 0x68) + 1;
    *pbVar1 = 0;
    return;
  }
  FUN_1006716e8(lVar9 + 0x10);
  uVar8 = 0x10;
  func_0x000107c60e30(0x10);
  func_0x0001086772d8();
  func_0x000107c60e54(uVar8,&PTR_DAT_110a61998,&DAT_1086772d4);
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10086e3c4);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 10086e3e4; end: 10086e3eb;  */

void FUN_10086e3e4(long param_1)

{
  long lVar1;
  long lVar2;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long extraout_x8;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + -8;
  func_0x0001005f9b68(*(undefined8 *)(param_1 + 0x148));
  if ((extraout_w8 >> 1 & 1) == 0) {
    plVar3 = *(long **)(param_1 + 0xf8);
    func_0x0001008527c4();
    uStack_58 = 0;
    uStack_50 = 0;
    lStack_68 = extraout_x8 + 0x10;
    uStack_60 = 0;
    uStack_48 = 0x1ed;
    lVar1 = param_1 + 0x180;
    FUN_1005e3518();
    lStack_40 = lVar1;
    (**(code **)(*plVar3 + 0x18))(plVar3,&lStack_68,&lStack_40);
    FUN_1005505e4(&lStack_68);
    func_0x0001005ed540(param_1 + 0x150);
    return;
  }
  func_0x0001005f9b68(*(undefined8 *)(param_1 + 0x128));
  if ((extraout_w8_00 >> 1 & 1) != 0) {
    func_0x0001005f9b68(*(undefined8 *)(param_1 + 0x128));
    if ((extraout_w8_01 >> 5 & 1) == 0) {
      lVar2 = param_1 + 0x128;
      func_0x00010086e5b8();
      if (*(char *)(lVar2 + 4) != '\x01') goto LAB_10086e498;
    }
    func_0x00010872f714(lVar1);
  }
LAB_10086e498:
  func_0x0001005f9b68(*(undefined8 *)(param_1 + 0x130));
  if (((extraout_w8_02 >> 1 & 1) != 0) && (lVar2 = lVar1, FUN_1005fcfb8(), (int)lVar2 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    lStack_40 = lVar1;
    FUN_1005effd0(&uStack_38);
    lStack_68 = lStack_40;
    uStack_60 = uStack_38;
    uStack_38 = 0;
    FUN_10086e630(&uStack_70,&lStack_68,uVar4);
    func_0x0001005f0270();
    func_0x0001005f0278();
    uVar4 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x130) = uStack_70;
    uStack_70 = uVar4;
    FUN_10086e6a0();
  }
  return;
}



/* Entry: 10086e3ec; end: 10086e533;  */

void FUN_10086e3ec(long param_1)

{
  long lVar1;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long extraout_x8;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001005f9b68(*(undefined8 *)(param_1 + 0x150));
  if ((extraout_w8 >> 1 & 1) == 0) {
    plVar2 = *(long **)(param_1 + 0x100);
    func_0x0001008527c4();
    uStack_58 = 0;
    uStack_50 = 0;
    lStack_68 = extraout_x8 + 0x10;
    uStack_60 = 0;
    uStack_48 = 0x1ed;
    lVar1 = param_1 + 0x188;
    FUN_1005e3518();
    lStack_40 = lVar1;
    (**(code **)(*plVar2 + 0x18))(plVar2,&lStack_68,&lStack_40);
    FUN_1005505e4(&lStack_68);
    func_0x0001005ed540(param_1 + 0x158);
    return;
  }
  func_0x0001005f9b68(*(undefined8 *)(param_1 + 0x130));
  if ((extraout_w8_00 >> 1 & 1) != 0) {
    func_0x0001005f9b68(*(undefined8 *)(param_1 + 0x130));
    if ((extraout_w8_01 >> 5 & 1) == 0) {
      lVar1 = param_1 + 0x130;
      func_0x00010086e5b8();
      if (*(char *)(lVar1 + 4) != '\x01') goto LAB_10086e498;
    }
    func_0x00010872f714(param_1);
  }
LAB_10086e498:
  func_0x0001005f9b68(*(undefined8 *)(param_1 + 0x138));
  if (((extraout_w8_02 >> 1 & 1) != 0) && (lVar1 = param_1, FUN_1005fcfb8(), (int)lVar1 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    lStack_40 = param_1;
    FUN_1005effd0(&uStack_38);
    lStack_68 = lStack_40;
    uStack_60 = uStack_38;
    uStack_38 = 0;
    FUN_10086e630(&uStack_70,&lStack_68,uVar3);
    func_0x0001005f0270();
    func_0x0001005f0278();
    uVar3 = *(undefined8 *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x138) = uStack_70;
    uStack_70 = uVar3;
    FUN_10086e6a0();
  }
  return;
}



/* Entry: 10086e534; end: 10086e593;  */

void FUN_10086e534(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined1 auStack_48 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 1 & 1) != 0) {
    return;
  }
  plVar2 = (long *)0x10;
  func_0x000107c60e30();
  func_0x00010533b550();
  func_0x000107c60e54(plVar2,&PTR_DAT_11087c380,&DAT_10533b554);
  func_0x00010533bda8();
  func_0x000107c60e40();
  func_0x00010533bca4();
  FUN_10086e534();
  if (((uint)*(undefined8 *)(*plVar2 + 0x10) >> 5 & 1) == 0) {
    return;
  }
  func_0x000107c314fc(auStack_48);
  func_0x000107c60e08(auStack_48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10086e618);
  (*pcVar1)();
}



/* Entry: 10086e594; end: 10086e5db;  */

void FUN_10086e594(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  FUN_10086e534();
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return;
  }
  func_0x000107c314fc(auStack_28);
  func_0x000107c60e08(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10086e618);
  (*pcVar1)();
}



/* Entry: 10086e5dc; end: 10086e623;  */

void FUN_10086e5dc(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return;
  }
  func_0x000107c314fc(auStack_28);
  func_0x000107c60e08(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10086e618);
  (*pcVar1)();
}



/* Entry: 10086e624; end: 10086e62f;  */

void FUN_10086e624(void)

{
  return;
}



/* Entry: 10086e630; end: 10086e69f;  */

void FUN_10086e630(void)

{
  FUN_1005f0188();
  FUN_1005f0208();
  func_0x0001005f0210(FUN_100871d88);
  FUN_1005f03ac();
  func_0x0001005f0424();
  func_0x0001005f023c();
  func_0x0001005f0254();
  return;
}



/* Entry: 10086e6a0; end: 10086e6a7;  */

void FUN_10086e6a0(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *in_stack_00000000;
  
  if (in_stack_00000000 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_00000000 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*in_stack_00000000 + 0x10))(in_stack_00000000,0);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*in_stack_00000000 + 8))(in_stack_00000000);
      }
    }
  }
  return;
}



/* Entry: 10086e6a8; end: 10086e6af; -[SCNMessagingSyncFeedUpdateMetadata resetFeed] */

undefined1 FUN_10086e6a8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10086e6b0; end: 10086e6b7; -[SCNMessagingFeedUpdateMetadata paginationUpdate] */

undefined8 FUN_10086e6b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10086e6b8; end: 10086e8eb; -[SCNativeFeedManager _updateQueryFeedParametersForPaginationUpdate:feedEntries:updateType:fetchContext:] */

/* WARNING: Possible PIC construction at 0x00010086e830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010086e84c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010086e88c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010086e89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010086e8ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010086e778: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010086e8b0) */
/* WARNING: Removing unreachable block (ram,0x00010086e8a0) */
/* WARNING: Removing unreachable block (ram,0x00010086e890) */
/* WARNING: Removing unreachable block (ram,0x00010086e850) */
/* WARNING: Removing unreachable block (ram,0x00010086e834) */
/* WARNING: Removing unreachable block (ram,0x00010086e77c) */

void FUN_10086e6b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  if (param_3 != 0) {
    func_0x000107c5ca64();
    if (param_3 < 1) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x000107c5c734(uVar3);
      func_0x000107c61180();
      FUN_10063b130(param_5);
      func_0x000107c61180();
      func_0x0001064e9ff0(uVar3,param_5,1);
      param_6 = param_5;
    }
    else {
      if (param_5 == 1) {
        param_3 = param_1;
        func_0x000107c3c1e4();
        func_0x000107c61180();
      }
      else if (param_5 == 0) {
        param_3 = param_1;
        func_0x000107c3c1e8();
        func_0x000107c61180();
      }
      else {
        FUN_10060654c();
        func_0x000107c61180();
      }
      func_0x000107c61174(param_1);
      func_0x000107c611a4(param_1);
      lVar1 = param_3;
      func_0x000107c4e300();
      lVar2 = *(long *)(param_1 + 0x38);
      func_0x000107c4e300();
      if (lVar2 < lVar1) {
        func_0x000107c4e300(param_3);
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        func_0x000107c5c734(uVar3);
        func_0x000107c61180();
        FUN_10063b130(param_5);
        func_0x000107c61180();
        func_0x0001064ea164(uVar3,param_3 == 0x7fffffffffffffff,param_5,1);
        param_6 = param_5;
      }
      else {
        func_0x000107c61174(param_3);
        param_6 = *(long *)(param_1 + 0x38);
        *(long *)(param_1 + 0x38) = param_3;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10086e8ec; end: 10086e8f3; -[SCNMessagingFeedPaginationUpdate timestamp] */

undefined8 FUN_10086e8ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10086e8f4; end: 10086ea63; -[SCNativeFeedManager _queryFeedParametersForSyncPaginationUpdate:feedEntries:fetchContext:] */

void FUN_10086e8f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_5);
  func_0x000107c611a4(param_1);
  lVar6 = *(long *)(param_1 + 0x38);
  func_0x000107c61174(lVar6);
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4c870();
  func_0x000107c61170(lVar1);
  uVar3 = param_5;
  FUN_10086f11c();
  func_0x000107c61170(param_5);
  if ((uVar3 & 1) == 0) {
    lVar1 = 0x14;
    if (0 < lVar2) {
      lVar1 = lVar2;
    }
    lVar2 = param_4;
    func_0x000107c40808();
    if (lVar2 != lVar1) {
      param_1 = lVar6;
      func_0x000107c40674(lVar6);
      func_0x000107c61180();
      goto LAB_10086e9e8;
    }
  }
  func_0x000107c3b184(param_1,param_2,param_3,param_4,0);
  func_0x000107c61180();
LAB_10086e9e8:
  puVar4 = PTR_PTR_1126ba4c0;
  func_0x000107c610f4(PTR_PTR_1126ba4c0);
  uVar5 = param_3;
  func_0x000107c5ca64(param_3);
  lVar2 = lVar6;
  func_0x000107c44994(lVar6);
  func_0x000107c47d50(puVar4,param_2,uVar5,param_1,lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10086ea64; end: 10086ea6b;  */

void FUN_10086ea64(void)

{
  return;
}



/* Entry: 10086ea6c; end: 10086ee0f;  */

void FUN_10086ea6c(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uStack_240;
  undefined1 auStack_238 [24];
  long lStack_220;
  byte bStack_218;
  undefined1 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong auStack_150 [6];
  undefined1 auStack_120 [8];
  ulong uStack_118;
  undefined1 auStack_110 [32];
  char cStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [64];
  ulong auStack_78 [7];
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
  FUN_10002b838(auStack_d0,&UNK_10f4b27f8);
  FUN_10054b97c(auStack_b8,uVar5,auStack_d0);
  func_0x000107c60ca0(auStack_d0);
  lStack_e8 = 0;
  lStack_e0 = 0;
  uStack_d8 = 0;
  plVar2 = *(long **)(param_1 + 0x58);
  (**(code **)(*plVar2 + 0x10))();
  FUN_10086eeb0(auStack_120,*(undefined8 *)(param_1 + 0x18),(long)plVar2 - *(long *)(param_1 + 0x78)
               );
  uStack_240 = 0;
  auStack_238[0] = 0;
  bStack_218 = 0;
  if (cStack_f0 == '\0') {
    uVar3 = 0;
  }
  else {
    func_0x00010872a3b8(auStack_238,auStack_110);
    FUN_10086f59c(auStack_110);
    uVar3 = uStack_240;
  }
  uStack_240 = uStack_118;
  auStack_150[3] = 0;
  auStack_150[2] = 0;
  auStack_150[5] = 0;
  auStack_150[4] = 0;
  auStack_150[1] = 0;
  auStack_150[0] = 0;
  uStack_118 = uVar3;
  while( true ) {
    if ((((bStack_218 & 1) == 0) && ((auStack_150[5] & 1) == 0)) || (uStack_240 == auStack_150[0]))
    break;
    if ((bStack_218 & 1) == 0) {
      uVar5 = *(undefined8 *)(uStack_240 + 8);
      func_0x000107c60c94(auStack_78,uStack_240 + 0x58);
      FUN_1004c3cd0(auStack_78 + 3,&UNK_10f2e0451,auStack_78);
      func_0x000107c313a4(uVar5,0x65,auStack_78 + 3);
      func_0x000107c60ca0(auStack_78 + 3);
      func_0x000107c60ca0(auStack_78);
    }
    func_0x000108866b68(*(undefined8 *)(param_1 + 0x18),auStack_238);
    func_0x000108868114(*(undefined8 *)(param_1 + 0x18),auStack_238);
    auStack_78[0] = auStack_78[0] & 0xffffffff00000000;
    FUN_10054f8dc(&uStack_170,auStack_238);
    auStack_78[4] = uStack_168;
    auStack_78[3] = uStack_170;
    auStack_78[5] = uStack_160;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_170 = 0;
    func_0x0001086fae4c(&lStack_e8,auStack_78,auStack_78 + 3);
    FUN_100100fec(auStack_78 + 3);
    FUN_100100fec(&uStack_170);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x70))
              (*(long **)(param_1 + 0x68),0x67,
               (long)plVar2 - (lStack_220 + *(long *)(param_1 + 0x78)));
    FUN_10086f0b0(&uStack_240);
  }
  FUN_10086f5c0();
  FUN_10086f5cc(auStack_238);
  FUN_10054cbac(auStack_b8);
  lVar1 = lStack_e0;
  for (lVar4 = lStack_e8; lVar4 != lVar1; lVar4 = lVar4 + 0x20) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x38))(*(long **)(param_1 + 0x28),lVar4 + 8);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x38))(*(long **)(param_1 + 0x38),lVar4 + 8);
  }
  if (lStack_e8 != lStack_e0) {
    auStack_150[0] = 0;
    auStack_150[1] = 0;
    auStack_150[2] = 0;
    auStack_78[3] = 0;
    auStack_78[4] = 0;
    auStack_78[5] = 0;
    auStack_78[0] = 0;
    auStack_78[1] = 0;
    auStack_78[2] = 0;
    uStack_240 = uStack_240 & 0xffffffffffffff00;
    uStack_178 = 0;
    (**(code **)(**(long **)(param_1 + 0x48) + 0x10))
              (*(long **)(param_1 + 0x48),auStack_150,auStack_78 + 3,&lStack_e8,auStack_78,
               &uStack_240);
    FUN_100633354(&uStack_240);
    func_0x0001006333b4(auStack_78);
    func_0x000100633408(auStack_78 + 3);
    func_0x00010063350c(auStack_150);
  }
  FUN_10086fb50(auStack_120);
  func_0x000100633494(&lStack_e8);
  FUN_10054d120(auStack_b8);
  return;
}



/* Entry: 10086ee10; end: 10086eeaf; -[SCFriendsFeedFetchContext isEqual:] */

long FUN_10086ee10(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10086ee94;
    uVar1 = param_1;
    func_0x000107c61158(param_1);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10086ee94;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x000107c49cec();
      goto LAB_10086ee94;
    }
  }
  lVar3 = 1;
LAB_10086ee94:
  func_0x000107c61170(param_3);
  return lVar3;
}



/* Entry: 10086eeb0; end: 10086ef2f;  */

void FUN_10086eeb0(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001005ed810();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c341bc();
      func_0x000107c34228();
      FUN_10054f908();
      func_0x000107c34160();
      func_0x000107c3424c();
      func_0x000107c34390();
      func_0x00010054f944();
      func_0x000107c34384();
    }
  }
  func_0x0001005ed930(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_10086ef30();
  return;
}



/* Entry: 10086ef30; end: 10086ef53;  */

void FUN_10086ef30(void)

{
  func_0x0001005ed940();
  FUN_10086ef54();
  func_0x0001005edc50();
  func_0x0001005edc5c();
  FUN_1005edcc0();
  func_0x0001005edd60();
  FUN_10086f05c();
  return;
}



/* Entry: 10086ef54; end: 10086effb;  */

long FUN_10086ef54(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      FUN_1005ecd30();
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_10086efc8;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_10086efc8:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  func_0x0001005edc5c();
  FUN_1005edcc0();
  func_0x0001005edd60();
  FUN_10086f05c();
  return param_1;
}



/* Entry: 10086effc; end: 10086f053;  */

void FUN_10086effc(void)

{
  func_0x0001005edc5c();
  FUN_1005edcc0();
  func_0x0001005edd60();
  FUN_10086f05c();
  return;
}



/* Entry: 10086f054; end: 10086f05b; -[SCGhostToFeedStepMetric stepTimeInSecs] */

undefined8 FUN_10086f054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10086f05c; end: 10086f07f;  */

void FUN_10086f05c(void)

{
  FUN_1005ec7e4();
  FUN_10086f080();
  return;
}



/* Entry: 10086f080; end: 10086f0af;  */

void FUN_10086f080(long param_1)

{
  FUN_1005ee89c();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_10086f0b0();
  return;
}



/* Entry: 10086f0b0; end: 10086f11b;  */

void FUN_10086f0b0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_40 [32];
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (FUN_10054c3a4(), (int)lVar1 != 0)) {
    func_0x00010872a45c(auStack_40,*param_1);
    func_0x00010872a424(param_1 + 1,auStack_40);
    func_0x00010872a4d0();
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[5] == '\x01') {
    FUN_100100fec();
    *(undefined1 *)(plVar2 + 4) = 0;
  }
  return;
}



/* Entry: 10086f11c; end: 10086f16f;  */

uint FUN_10086f11c(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c61174();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x000107c5d028();
    uVar2 = 1;
    if (uVar1 < 10) {
      uVar2 = 0x86 >> (ulong)((uint)uVar1 & 0x1f);
    }
  }
  func_0x000107c61170(param_1);
  return uVar2 & 1;
}



/* Entry: 10086f170; end: 10086f3cf; -[SCNativeFeedManager _conversationIdForPaginationUpdate:feedEntries:updateType:] */

void FUN_10086f170(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar1 = param_4;
  func_0x000107c5086c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4080c();
  lVar4 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
LAB_10086f30c:
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x000107c5c734(uVar6);
      func_0x000107c61180();
      FUN_10063b130(param_5);
      func_0x000107c61180();
      FUN_10086f3ec(uVar6,param_5,1);
      func_0x000107c61170(param_5);
      func_0x000107c61170(uVar6);
      lVar2 = param_4;
      func_0x000107c4aa28(param_4);
      func_0x000107c61180();
      func_0x000107c40674();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
LAB_10086f380:
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
        func_0x000107c60e78();
        func_0x000107c61160(PTR_PTR_1126ba0c0);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      return;
    }
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        func_0x000107c61128(lVar1);
      }
      lVar8 = *(long *)(lVar9 * 8);
      lVar3 = lVar8;
      func_0x000107c4a9c4();
      if (0 < lVar3) {
        lVar2 = param_3;
        func_0x000107c5ca64();
        lVar4 = lVar8;
        func_0x000107c4a9c4();
        if (lVar2 != lVar4) {
          lVar2 = param_3;
          func_0x000107c5ca64(param_3);
          lVar4 = lVar8;
          func_0x000107c4a9c4(lVar8);
          uVar5 = *(undefined8 *)(param_1 + 0x30);
          func_0x000107c5c734(uVar5);
          func_0x000107c61180();
          uVar6 = param_5;
          FUN_10063b130(param_5);
          func_0x000107c61180();
          func_0x0001064e9e04(uVar5,lVar4 < lVar2,uVar6,1);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar5);
        }
        func_0x000107c40674();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        if (lVar8 == 0) goto LAB_10086f30c;
        goto LAB_10086f380;
      }
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar1;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 10086f3d0; end: 10086f3eb;  */

void FUN_10086f3d0(void)

{
  func_0x000107c61160(PTR_PTR_1126ba0c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10086f3ec; end: 10086f55f;  */

undefined * FUN_10086f3ec(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      puVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110928570,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    FUN_10007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      func_0x000107c60e14(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  return (undefined *)(ulong)(byte)puVar1[8];
}



/* Entry: 10086f560; end: 10086f567; -[SCNativeQueryFeedParameters hasMoreEntries] */

undefined1 FUN_10086f560(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10086f568; end: 10086f56f; -[SCNativeQueryFeedParameters paginationTimestamp] */

undefined8 FUN_10086f568(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10086f570; end: 10086f57b; -[SCNativeQueryFeedParameters .cxx_destruct] */

void FUN_10086f570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10086f57c; end: 10086f583; -[SCNMessagingSyncFeedUpdateMetadata queryTriggered] */

undefined1 FUN_10086f57c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10086f584; end: 10086f58b; -[SCNMessagingSyncFeedUpdateMetadata syncMetadata] */

undefined8 FUN_10086f584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10086f58c; end: 10086f593; -[SCNMessagingSyncFeedMetadata conversationsSyncFailed] */

undefined8 FUN_10086f58c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10086f594; end: 10086f59b; -[SCNMessagingSyncFeedMetadata conversationsSyncSuccess] */

undefined8 FUN_10086f594(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10086f59c; end: 10086f5bf;  */

void FUN_10086f59c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_100100fec();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10086f5c0; end: 10086f5cb;  */

void FUN_10086f5c0(void)

{
  if (*(char *)(((ulong)&stack0x000000f0 | 8) + 0x20) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 10086f5cc; end: 10086f5eb;  */

void FUN_10086f5cc(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 10086f5ec; end: 10086fa8f; -[SCFriendsFeedEntryStore _logSyncFeedMetricsForMetadata:syncResult:fetchContext:] */

undefined *
FUN_10086f5ec(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,long param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  puVar1 = param_4;
  func_0x000107c4ce84();
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(puVar1);
  if (puVar4 != (undefined *)0x0) {
    puVar1 = param_4;
    func_0x000107c4ce84(param_4);
    func_0x000107c61180();
    puVar4 = puVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c4223c();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar1);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c3d8a8(param_1);
    func_0x000107c61170(uVar2);
  }
  puVar1 = param_4;
  func_0x000107c4ce84();
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(puVar1);
  if (puVar4 != (undefined *)0x0) {
    puVar1 = param_4;
    func_0x000107c4ce84(param_4);
    func_0x000107c61180();
    puVar4 = puVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c4223c();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar1);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c3d664(param_1);
    func_0x000107c61170(uVar2);
  }
  puVar1 = param_4;
  func_0x000107c4ce84();
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(puVar1);
  if (puVar4 != (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    puVar1 = param_4;
    func_0x000107c4ce84(param_4);
    func_0x000107c61180();
    puVar4 = puVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    puVar3 = puVar4;
    func_0x000107c5d384();
    func_0x000107c3d8a4(uVar2,param_3,(ulong)puVar3 & 0xffffffff);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar2);
  }
  puVar1 = param_4;
  func_0x000107c4ce84();
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(puVar1);
  if (puVar4 != (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    puVar1 = param_4;
    func_0x000107c4ce84(param_4);
    func_0x000107c61180();
    puVar4 = puVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    puVar3 = puVar4;
    func_0x000107c5d384();
    func_0x000107c3d8ac(uVar2,param_3,(ulong)puVar3 & 0xffffffff);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c6071c();
  if (param_5 == 2) {
    puVar4 = *(undefined **)(param_2 + 0x18);
    func_0x000107c5c734(puVar4);
    func_0x000107c61180();
    puVar1 = PTR_PTR_1126ba490;
    func_0x000107c5c3bc(param_1,PTR_PTR_1126ba490);
    func_0x000107c61180();
    func_0x000107c41d78(puVar4,param_3,puVar1);
LAB_10086fa34:
    func_0x000107c61170(puVar1);
  }
  else {
    if (param_5 == 1) {
      puVar4 = *(undefined **)(param_2 + 0x18);
      func_0x000107c5c734(puVar4);
      func_0x000107c61180();
      puVar1 = param_4;
      func_0x000107c4070c(param_4);
      func_0x000107c61180();
      puVar3 = puVar1;
      func_0x000107c40808();
      func_0x000107c3d8a0(puVar4,param_3,puVar3);
      goto LAB_10086fa34;
    }
    if (param_5 != 0) goto LAB_10086fa44;
    puVar4 = PTR_PTR_1126ba0a8;
    func_0x000107c42d74(param_1,PTR_PTR_1126ba0a8,param_3,
                        &PTR____CFConstantStringClassReference_110de9b58);
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = param_6;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_70,1);
    func_0x000107c61180();
    func_0x000107c4bb20(uVar2,param_3,puVar4,puVar1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    puVar1 = PTR_PTR_1126ba490;
    func_0x000107c42d7c(PTR_PTR_1126ba490,param_3,&PTR____CFConstantStringClassReference_110de9b58);
    func_0x000107c61180();
    func_0x000107c41d78(uVar2,param_3,puVar1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(puVar4);
LAB_10086fa44:
  func_0x000107c61170(param_6);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_4;
  }
  func_0x000107c60e78();
  return *(undefined **)(param_4 + 0x10);
}



/* Entry: 10086fa90; end: 10086fa97; -[SCNMessagingSyncFeedMetadata metrics] */

undefined8 FUN_10086fa90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10086fa98; end: 10086faf3; -[SCFriendsFeedReadyLogger addSyncFeedWireTimeMs:] */

void FUN_10086fa98(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_100870110;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_2;
  uStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_2 + 0x18),param_3,&puStack_40);
  return;
}



/* Entry: 10086faf4; end: 10086fb4f; -[SCFriendsFeedReadyLogger addEelDecryptLatencyUs:] */

void FUN_10086faf4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1008703ac;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_2;
  uStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_2 + 0x18),param_3,&puStack_40);
  return;
}



/* Entry: 10086fb50; end: 10086fbbb;  */

undefined8 * FUN_10086fb50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 6) != '\0') {
    FUN_10086f59c(param_1 + 2);
  }
  FUN_10086f5cc((ulong)&uStack_50 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_10054cac4(uVar1);
  FUN_10086f5cc(param_1 + 2);
  return param_1;
}



/* Entry: 10086fbbc; end: 10086fbd7;  */

void FUN_10086fbbc(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10086fbd8; end: 10086fbdf;  */

void FUN_10086fbd8(void)

{
  long lVar1;
  long unaff_x29;
  
  lVar1 = unaff_x29 + -0xe0;
  FUN_100562400();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10086fbe0; end: 10086fc57; -[SCFriendsFeedReadyLogger addSyncEelMessageCount:] */

void FUN_10086fbe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  uStack_30 = 0x1008703bc;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_40);
  return;
}



/* Entry: 10086fc58; end: 10086fcaf; -[SCFriendsFeedReadyLogger addSyncMessageCount:] */

void FUN_10086fc58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  uStack_30 = 0x1008703c8;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_40);
  return;
}



/* Entry: 10086fcb0; end: 10087009f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10086fcb0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  undefined1 auStack_318 [72];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x000107c614f0();
  uVar10 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113039088) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113039090) = uVar10;
  *(undefined8 *)(unaff_x20 + _DAT_113039098) = param_1[2];
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_1130390a0);
  uVar10 = param_1[3];
  uVar12 = param_1[6];
  uVar11 = param_1[5];
  puVar4[1] = param_1[4];
  *puVar4 = uVar10;
  puVar4[3] = uVar12;
  puVar4[2] = uVar11;
  uStack_1f8 = param_1[8];
  uStack_200 = param_1[7];
  uStack_1e8 = param_1[10];
  uStack_1f0 = param_1[9];
  uStack_1d8 = param_1[0xc];
  uStack_1e0 = param_1[0xb];
  uStack_1c8 = param_1[0xe];
  uStack_1d0 = param_1[0xd];
  uStack_1c0 = param_1[0xf];
  lVar3 = 0;
  FUN_1008700d0();
  lVar9 = lVar3;
  func_0x000107c610f8();
  uStack_198 = param_1[10];
  uStack_1a0 = param_1[9];
  uStack_188 = param_1[0xc];
  uStack_190 = param_1[0xb];
  uStack_178 = param_1[0xe];
  uStack_180 = param_1[0xd];
  uStack_170 = param_1[0xf];
  uStack_1a8 = param_1[8];
  uStack_1b0 = param_1[7];
  uVar10 = 0;
  func_0x0001008700f0(0);
  func_0x000107c610f8();
  FUN_100870190(&uStack_200,&uStack_c0);
  puVar4 = &uStack_1b0;
  FUN_1008701cc();
  *(undefined8 **)(lVar9 + _DAT_113039158) = puVar4;
  plVar8 = &lStack_210;
  lStack_210 = lVar9;
  lStack_208 = lVar3;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  func_0x000100870338(&uStack_200);
  plVar7 = (long *)0x0;
  *(long **)(unaff_x20 + _DAT_1130390a8) = plVar8;
  uStack_98 = param_1[0x15];
  uStack_a0 = param_1[0x14];
  uStack_88 = param_1[0x17];
  lStack_90 = param_1[0x16];
  uStack_80 = param_1[0x18];
  uStack_b8 = param_1[0x11];
  uStack_c0 = param_1[0x10];
  uStack_a8 = param_1[0x13];
  uStack_b0 = param_1[0x12];
  if (lStack_90 != 2) {
    uStack_138 = param_1[0x15];
    uStack_140 = param_1[0x14];
    uStack_128 = param_1[0x17];
    uStack_130 = param_1[0x16];
    uStack_120 = param_1[0x18];
    uStack_158 = param_1[0x11];
    uStack_160 = param_1[0x10];
    uStack_148 = param_1[0x13];
    uStack_150 = param_1[0x12];
    lVar9 = lVar3;
    func_0x000107c610f8();
    uStack_e8 = param_1[0x15];
    uStack_f0 = param_1[0x14];
    uStack_d8 = param_1[0x17];
    uStack_e0 = param_1[0x16];
    uStack_d0 = param_1[0x18];
    uStack_108 = param_1[0x11];
    uStack_110 = param_1[0x10];
    uStack_f8 = param_1[0x13];
    uStack_100 = param_1[0x12];
    func_0x000107c610f8(uVar10);
    FUN_100870190(&uStack_160,&uStack_260);
    puVar4 = &uStack_110;
    FUN_1008701cc();
    *(undefined8 **)(lVar9 + _DAT_113039158) = puVar4;
    plVar7 = &lStack_348;
    lStack_348 = lVar9;
    lStack_340 = lVar3;
    func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
    FUN_10087036c(&uStack_c0,0x113038f58,&UNK_10dcb4540);
  }
  *(long **)(unaff_x20 + _DAT_1130390b0) = plVar7;
  uStack_228 = param_1[0x20];
  lStack_230 = param_1[0x1f];
  uStack_248 = param_1[0x1c];
  uStack_250 = param_1[0x1b];
  uStack_238 = param_1[0x1e];
  uStack_240 = param_1[0x1d];
  uStack_220 = param_1[0x21];
  uStack_258 = param_1[0x1a];
  uStack_260 = param_1[0x19];
  if (lStack_230 == 2) {
    plVar8 = (long *)0x0;
  }
  else {
    uStack_2b8 = param_1[0x1c];
    uStack_2c0 = param_1[0x1b];
    uStack_2a8 = param_1[0x1e];
    uStack_2b0 = param_1[0x1d];
    uStack_298 = param_1[0x20];
    uStack_2a0 = param_1[0x1f];
    uStack_290 = param_1[0x21];
    uStack_2c8 = param_1[0x1a];
    uStack_2d0 = param_1[0x19];
    lVar5 = 0;
    func_0x000103f9d750();
    lVar9 = lVar5;
    func_0x000107c610f8();
    lVar6 = lVar3;
    func_0x000107c610f8();
    uStack_148 = param_1[0x1c];
    uStack_150 = param_1[0x1b];
    uStack_138 = param_1[0x1e];
    uStack_140 = param_1[0x1d];
    uStack_128 = param_1[0x20];
    uStack_130 = param_1[0x1f];
    uStack_120 = param_1[0x21];
    uStack_158 = param_1[0x1a];
    uStack_160 = param_1[0x19];
    func_0x000107c610f8(uVar10);
    func_0x000103f9cc58(&uStack_2d0,auStack_318);
    puVar4 = &uStack_160;
    FUN_1008701cc();
    *(undefined8 **)(lVar6 + _DAT_113039158) = puVar4;
    plVar8 = &lStack_328;
    lStack_328 = lVar6;
    lStack_320 = lVar3;
    func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
    *(long **)(lVar9 + _DAT_113039220) = plVar8;
    plVar8 = &lStack_338;
    lStack_338 = lVar9;
    lStack_330 = lVar5;
    func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
    FUN_10087036c(&uStack_260,0x113038f60,&UNK_10dcb4548);
  }
  *(long **)(unaff_x20 + _DAT_1130390b8) = plVar8;
  lVar9 = param_1[0x23];
  if (lVar9 == 1) {
    plVar8 = (long *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x22);
    lVar6 = 0;
    FUN_1008709c0();
    lVar3 = lVar6;
    func_0x000107c610f8();
    *(byte *)(lVar3 + _DAT_113039250) = (byte)uVar1 & 1;
    *(byte *)(lVar3 + _DAT_113039258) = (byte)((uint)uVar1 >> 8) & 1;
    *(byte *)(lVar3 + _DAT_113039260) = (byte)((uint)uVar1 >> 0x10) & 1;
    *(long *)(lVar3 + _DAT_113039268) = lVar9;
    puVar2 = PTR_s_init_1125d9248;
    lStack_280 = lVar3;
    lStack_278 = lVar6;
    func_0x000107c61174(lVar9);
    plVar8 = &lStack_280;
    func_0x000107c61154(plVar8,puVar2);
  }
  *(long **)(unaff_x20 + _DAT_1130390c0) = plVar8;
  func_0x000107c61154(&stack0xfffffffffffffd90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1008700a0; end: 1008700cf;  */

undefined8 FUN_1008700a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10086fcb0();
  FUN_100870a64(param_1);
  return uVar1;
}



/* Entry: 1008700d0; end: 10087010f;  */

void FUN_1008700d0(void)

{
  func_0x000107c61168(&PTR_PTR_112972668);
  return;
}



/* Entry: 100870110; end: 10087011f;  */

void FUN_100870110(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 100870120; end: 10087018f;  */

undefined8 * FUN_100870120(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  lVar1 = param_2[6];
  if (lVar1 == 1) {
    lVar1 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = lVar1;
    param_1[8] = param_2[8];
    return param_1;
  }
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  param_1[6] = lVar1;
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  func_0x000107c61174(lVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 100870190; end: 1008701cb;  */

undefined8 FUN_100870190(undefined8 param_1,undefined8 param_2)

{
  FUN_100870120(param_2,param_1);
  return param_2;
}



/* Entry: 1008701cc; end: 1008702fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008701cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_70;
  long lStack_68;
  
  plVar3 = &lStack_70;
  func_0x000107c614f0();
  uVar7 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113039188);
  puVar1[1] = param_1[1];
  *puVar1 = uVar7;
  uVar7 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113039190) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_113039198) = uVar7;
  uVar7 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_1130391a0) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_1130391a8) = uVar7;
  lVar6 = param_1[6];
  if (lVar6 == 1) {
    plVar3 = (long *)0x0;
  }
  else {
    uVar8 = param_1[8];
    uVar7 = param_1[7];
    lVar4 = 0;
    func_0x000103f9d4c0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(long *)(lVar5 + _DAT_1130391e0) = lVar6;
    *(undefined8 *)(lVar5 + _DAT_1130391e8) = uVar7;
    *(undefined8 *)(lVar5 + _DAT_1130391f0) = uVar8;
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar5;
    lStack_68 = lVar4;
    func_0x000107c61174(lVar6);
    func_0x000107c61174(uVar7);
    func_0x000107c61154(&lStack_70,puVar2);
  }
  *(long **)(unaff_x20 + _DAT_1130391b0) = plVar3;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1008702fc; end: 10087036b;  */

/* WARNING: Possible PIC construction at 0x000100870324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100870328) */

void FUN_1008702fc(long param_1)

{
  if (*(long *)(param_1 + 0x30) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10087036c; end: 1008703ab;  */

undefined8 FUN_10087036c(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1008703ac; end: 1008703d3;  */

void FUN_1008703ac(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe8) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 1008703d4; end: 10087042f; +[SCFriendsFeedReadySyncResult successNoRenderWithSyncTime:] */

void FUN_1008703d4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ba490;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100870430; end: 100870473; -[SCFriendsFeedReadySyncResult internalInit] */

void FUN_100870430(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_1126fd900;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100870474; end: 10087054b; -[SCFriendsFeedReadyLogger didSync:] */

void FUN_100870474(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10087054c; end: 10087055b;  */

undefined1  [16] FUN_10087054c(void)

{
  return ZEXT816(0x11072a450);
}



/* Entry: 10087055c; end: 1008705b7;  */

undefined8 FUN_10087055c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010063350c(param_1 + 0x88);
  func_0x000100633494(param_1 + 0x70);
  func_0x000100870590(param_1 + 0x28);
  FUN_100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1008705b8; end: 1008705cf;  */

void FUN_1008705b8(void)

{
  return;
}



/* Entry: 1008705d0; end: 10087065f;  */

void FUN_1008705d0(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    func_0x0001086f54b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 100870660; end: 10087066b;  */

void FUN_100870660(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010086abf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 10087066c; end: 100870697;  */

undefined8 * FUN_10087066c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a67158;
  FUN_10086ad94(param_1 + 1);
  return param_1;
}



/* Entry: 100870698; end: 1008706ab;  */

void FUN_100870698(void)

{
  FUN_10087066c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1008706ac; end: 1008706b3;  */

void FUN_1008706ac(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008706b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)();
  return;
}



/* Entry: 1008706b4; end: 10087071f;  */

undefined8 FUN_1008706b4(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1008706ac(*(undefined8 *)(param_1 + 0x98));
  (*(code *)**(undefined8 **)(param_1 + 0x68))((undefined8 *)(param_1 + 0x68));
  func_0x0001008670d0(param_1 + 0x48);
  func_0x000100869440(param_1 + 0x38);
  func_0x00010065cc54(param_1 + 0x20);
  func_0x00010086aa9c();
  return unaff_x19;
}



/* Entry: 100870720; end: 10087073f;  */

void FUN_100870720(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001008706fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100870740; end: 10087076b;  */

undefined8 FUN_100870740(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001005fb56c(param_1 + 0x60);
  FUN_100867bf0(param_1 + 0x28);
  FUN_100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10087076c; end: 10087078b;  */

void FUN_10087076c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100870740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10087078c; end: 1008707b3;  */

void FUN_10087078c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1008707b4; end: 1008707fb;  */

undefined8 FUN_1008707b4(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_100868e54(param_1 + 0x58);
  FUN_1004b55ac(param_1 + 0x40);
  func_0x00010054fa34(param_1 + 0x30);
  func_0x000100563508(param_1 + 0x20);
  FUN_100565838(param_1 + 0x10);
  func_0x00010054e7b4();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1008707fc; end: 1008707ff;  */

void FUN_1008707fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100870800; end: 10087082b;  */

undefined8 FUN_100870800(undefined8 param_1)

{
  FUN_1006adf74();
  FUN_10087082c(param_1);
  return param_1;
}



/* Entry: 10087082c; end: 100870863;  */

long FUN_10087082c(long param_1)

{
  FUN_100067de0(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_100870864();
  }
  func_0x000107c60e14();
  FUN_1008708ac(param_1 + 0x48);
  FUN_100870908(param_1 + 0x30);
  FUN_100870930(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 100870864; end: 10087088f;  */

undefined8 FUN_100870864(undefined8 param_1)

{
  FUN_1006575e8();
  FUN_100870890(param_1);
  return param_1;
}



/* Entry: 100870890; end: 1008708ab;  */

void FUN_100870890(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1005f73a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1008708ac; end: 1008708d3;  */

void FUN_1008708ac(void)

{
  long extraout_x8;
  
  FUN_1006b3990();
  if (extraout_x8 != 0) {
    FUN_1006b39c4();
  }
  return;
}



/* Entry: 1008708d4; end: 100870907;  */

long FUN_1008708d4(long param_1)

{
  FUN_1008708ac(param_1 + 0x38);
  FUN_100870908(param_1 + 0x20);
  FUN_100870930(param_1 + 8);
  return param_1;
}



/* Entry: 100870908; end: 10087092f;  */

void FUN_100870908(void)

{
  long extraout_x8;
  
  FUN_1006b3990();
  if (extraout_x8 != 0) {
    FUN_1006b39c4();
  }
  return;
}



/* Entry: 100870930; end: 100870957;  */

void FUN_100870930(void)

{
  long extraout_x8;
  
  FUN_1006b3990();
  if (extraout_x8 != 0) {
    FUN_1006b39c4();
  }
  return;
}



/* Entry: 100870958; end: 1008709bf;  */

int FUN_100870958(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar4 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  uVar2 = (int)uVar4 - 1;
  uVar1 = uVar2;
  if (0x7fffffff < uVar2) {
    uVar1 = 0xffffffff;
  }
  iVar3 = uVar1 - 1;
  if ((int)uVar2 < 1) {
    iVar3 = -1;
  }
  return iVar3 + 1;
}



/* Entry: 1008709c0; end: 1008709df;  */

void FUN_1008709c0(void)

{
  func_0x000107c61168(&PTR_PTR_1129729c0);
  return;
}



/* Entry: 1008709e0; end: 100870a63;  */

/* WARNING: Possible PIC construction at 0x0001008709fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100870a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100870a34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100870a1c) */
/* WARNING: Removing unreachable block (ram,0x000100870a00) */
/* WARNING: Removing unreachable block (ram,0x000100870a38) */

void FUN_1008709e0(long param_1)

{
  if ((((*(long *)(param_1 + 0x68) == 1) && (*(long *)(param_1 + 0xb0) - 1U < 2)) &&
      (*(long *)(param_1 + 0xf8) - 1U < 2)) && (*(long *)(param_1 + 0x118) == 1)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100870a64; end: 100870a97;  */

undefined8 FUN_100870a64(undefined8 param_1)

{
  FUN_1008709e0();
  return param_1;
}



/* Entry: 100870a98; end: 100870ab7;  */

void FUN_100870a98(void)

{
  func_0x000107c61168(&PTR_PTR_112f84150);
  return;
}



/* Entry: 100870ab8; end: 100870ac7;  */

void FUN_100870ab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100850ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 100870ac8; end: 100870afb;  */

undefined8 FUN_100870ac8(undefined8 param_1)

{
  func_0x000100850f2c(&PTR_DAT_110a7b3e8);
  FUN_100850f70();
  FUN_1006b30fc();
  return param_1;
}



/* Entry: 100870afc; end: 100870b03;  */

void FUN_100870afc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100870b04; end: 100870b27;  */

void FUN_100870b04(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100870b28; end: 100870b3f;  */

void FUN_100870b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100870b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 100870b40; end: 100870b73;  */

undefined8 * FUN_100870b40(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a6f4f8;
  func_0x000100870b38(param_1[0xe]);
  *param_1 = &PTR_DAT_110a6f580;
  func_0x000100870b38(param_1[8]);
  func_0x000100870b38(param_1[2]);
  return param_1;
}



/* Entry: 100870b74; end: 100870b7b;  */

void FUN_100870b74(long param_1)

{
  param_1 = param_1 + 8;
  FUN_100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 100870b7c; end: 100870bb7;  */

undefined8 * FUN_100870b7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a6f580;
  func_0x000100870b38(param_1[8]);
  func_0x000100870b38(param_1[2]);
  return param_1;
}



/* Entry: 100870bb8; end: 100870bcf; -[_TtC18LensCarouselLayout20StaticLayoutProvider layout] */

void FUN_100870bb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 100870bd0; end: 100870c17;  */

undefined8 * FUN_100870bd0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a6f3c8;
  FUN_1005fce88(param_1 + 0x29);
  FUN_1006b3a34(param_1 + 0x25);
  FUN_1006b391c(param_1 + 0x1b);
  *param_1 = &PTR_DAT_110a6ba48;
  FUN_100565838(param_1 + 0x17);
  func_0x00010054fa34(param_1 + 0x15);
  func_0x000100563508(param_1 + 0x13);
  FUN_1004b55ac(param_1 + 0x11);
  func_0x000100568bec(param_1 + 0xf);
  FUN_1005620dc(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  FUN_1005fe494(param_1 + 0xb);
  FUN_1005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 100870c18; end: 100870c2f; -[SCLensCarouselLayout scrollZoneExpansionInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100870c18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130390a0);
}


