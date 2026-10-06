/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1001088a8; end: 100108a4f; -[GPBFieldDescriptor initWithFieldDescription:descriptorFlags:] */

undefined1 * FUN_1001088a8(undefined8 param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar4 = &uStack_60;
  puStack_58 = PTR_PTR_11270e7f8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined1 *)0x0;
  }
  lVar7 = 0;
  if ((param_4 & 1) != 0) {
    lVar7 = 8;
  }
  puVar1 = (undefined8 *)((long)param_3 + lVar7);
  *(undefined8 **)((long)puVar4 + 8) = puVar1;
  uVar5 = *puVar1;
  func_0x000107c612e4();
  *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
  puVar6 = &DAT_10f3dd81d;
  FUN_100108a50(&DAT_10f3dd81d,*puVar1,0,1);
  *(undefined **)((long)puVar4 + 0x20) = puVar6;
  bVar2 = *(byte *)((long)puVar1 + 0x1e);
  uVar3 = *(ushort *)(*(long *)((long)puVar4 + 8) + 0x1c);
  if ((uVar3 & 0xf02) == 0) {
    if ((*(int *)((long)puVar1 + 0x14) < 0) || ((*(ushort *)((long)puVar1 + 0x1c) >> 5 & 1) != 0))
    goto LAB_100108968;
    puVar6 = &DAT_10f41677d;
    FUN_100108a50(&DAT_10f41677d,*puVar1,0,0);
    *(undefined **)((long)puVar4 + 0x28) = puVar6;
    puVar6 = &UNK_10f8378fd;
    FUN_100108a50(&UNK_10f8378fd,*puVar1,0,1);
    lVar7 = 0x30;
  }
  else {
    puVar6 = (undefined *)0x0;
    FUN_100108a50(0,*puVar1,&UNK_10f8378f6,0);
    lVar7 = 0x28;
  }
  *(undefined **)((long)puVar4 + lVar7) = puVar6;
LAB_100108968:
  if (bVar2 - 0xf < 2) {
    *(undefined8 *)((long)puVar4 + 0x40) = puVar1[1];
  }
  else if (bVar2 == 0x11) {
    (*(code *)puVar1[1])();
    *(undefined **)((long)puVar4 + 0x48) = puVar6;
    if ((param_4 & 1) == 0) {
      return (undefined1 *)puVar4;
    }
    if ((uVar3 & 0xf02) != 0) {
      return (undefined1 *)puVar4;
    }
    *(long *)((long)puVar4 + 0x38) = *param_3;
    return (undefined1 *)puVar4;
  }
  if (((param_4 & 1) != 0) && ((uVar3 & 0xf02) == 0)) {
    lVar7 = *param_3;
    *(long *)((long)puVar4 + 0x38) = lVar7;
    if ((bVar2 == 0xd) && (lVar7 != 0)) {
      puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4();
      func_0x000107c45ae4();
      *(undefined **)((long)puVar4 + 0x38) = puVar6;
    }
  }
  return (undefined1 *)puVar4;
}



/* Entry: 100108a50; end: 100108c13;  */

/* WARNING: Possible PIC construction at 0x000100108bb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100108bbc) */
/* WARNING: Removing unreachable block (ram,0x000100108bd4) */

void FUN_100108a50(long param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  long extraout_x8;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((((param_4 & 1) == 0) && (param_1 == 0)) && (param_3 == 0)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      func_0x000107c60e78();
      uStack_78 = FUN_100108c14;
      func_0x000107c61174(param_3);
      if (*(char *)(param_1 + 0x20) == '\x01') {
        func_0x000107c61144(auStack_a8,param_1);
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d0 = 0xc2000000;
        uStack_c8 = 0x100840938;
        puStack_c0 = &UNK_110841fb0;
        ppuVar6 = &puStack_d8;
        func_0x000107c6111c(auStack_b0,auStack_a8);
        func_0x000107c61174(param_3);
        lStack_b8 = param_3;
        func_0x000107c4e590(uVar5);
        lVar7 = lStack_b8;
      }
      else {
        func_0x000107c61144(auStack_a8,param_1);
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_100 = 0xc2000000;
        pcStack_f8 = FUN_100184ad0;
        puStack_f0 = &UNK_110841fb0;
        ppuVar6 = &puStack_108;
        func_0x000107c6111c(auStack_e0,auStack_a8);
        func_0x000107c61174(param_3);
        lStack_e8 = param_3;
        func_0x000107c4e524(uVar5);
        lVar7 = lStack_e8;
      }
      func_0x000107c61170(lVar7);
      func_0x000107c61120(ppuVar6 + 5);
      func_0x000107c61120(auStack_a8);
      func_0x000107c61170(param_3);
      return;
    }
  }
  else {
    if (param_1 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = param_1;
      func_0x000107c613d0();
    }
    lVar4 = param_2;
    func_0x000107c613d0();
    if (param_3 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = param_3;
      func_0x000107c613d0();
    }
    lVar9 = lVar4 + lVar7 + lVar8;
    lVar1 = lVar9 + 2;
    lVar2 = lVar1;
    if (param_4 == 0) {
      lVar2 = lVar9 + 1;
    }
    puStack_70 = (undefined1 *)&puStack_70;
    (*(code *)PTR____chkstk_darwin_11034bd40)(lVar2 + 0xfU & 0xfffffffffffffff0);
    lVar9 = (long)&puStack_70 - extraout_x8;
    if (param_1 == 0) {
      func_0x000107c610b4(lVar9,param_2,lVar4);
    }
    else {
      func_0x000107c610b4(lVar9,param_1,lVar7);
      func_0x000107c610b4(lVar9 + lVar7,param_2,lVar4);
      uVar3 = *(undefined1 *)(lVar9 + lVar7);
      func_0x000107c60e84();
      *(undefined1 *)(lVar9 + lVar7) = uVar3;
    }
    if (param_3 != 0) {
      func_0x000107c610b4(lVar9 + lVar7 + lVar4,param_3,lVar8);
    }
    if (param_4 != 0) {
      *(undefined1 *)(lVar9 + lVar1 + -2) = 0x3a;
    }
    *(undefined1 *)(lVar9 + lVar2 + -1) = 0;
    param_2 = lVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbfa58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sel_getUid_11034d3b8)(param_2);
  return;
}



/* Entry: 100108c14; end: 100108d5f; -[SCQueuePerformerObserver next:] */

void FUN_100108c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c61144(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x100840938;
    puStack_50 = &UNK_110841fb0;
    ppuVar2 = &puStack_68;
    func_0x000107c6111c(auStack_40,auStack_38);
    func_0x000107c61174(param_3);
    uStack_48 = param_3;
    func_0x000107c4e590(uVar1);
    uVar1 = uStack_48;
  }
  else {
    func_0x000107c61144(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_100184ad0;
    puStack_80 = &UNK_110841fb0;
    ppuVar2 = &puStack_98;
    func_0x000107c6111c(auStack_70,auStack_38);
    func_0x000107c61174(param_3);
    uStack_78 = param_3;
    func_0x000107c4e524(uVar1);
    uVar1 = uStack_78;
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61120(ppuVar2 + 5);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100108d60; end: 100108d6b; +[GPBMessage parseFromData:error:] */

void FUN_100108d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f4110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_parseFromData_extensionRegistry__11261aa58,param_3,0,param_4);
  return;
}



/* Entry: 100108d6c; end: 100108dab; +[GPBMessage parseFromData:extensionRegistry:error:] */

void FUN_100108d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c610f4();
  func_0x000107c46370(param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 100108dac; end: 100108daf; +[GPBMessage alloc] */

void FUN_100108dac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_allocWithZone_11034d1b0)();
  return;
}



/* Entry: 100108db0; end: 100108ddf; +[GPBMessage allocWithZone:] */

void FUN_100108db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c41800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSAllocateObject_1103453e8)(param_1,*(undefined4 *)(lVar1 + 0x18),param_3);
  return;
}



/* Entry: 100108de0; end: 100108e5f; -[GPBMessage initWithData:extensionRegistry:error:] */

ulong FUN_100108de0(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x000107c453e4();
  if (param_1 != 0) {
    if (param_3 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c61158(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x000107c6115c(param_3,puVar1);
      if ((param_3 & 1) == 0) {
        return param_1;
      }
    }
    uVar2 = param_1;
    func_0x000107c4cd60();
    if ((uVar2 & 1) == 0) {
      func_0x000107c61170(param_1);
      param_1 = 0;
    }
  }
  return param_1;
}



/* Entry: 100108e60; end: 100108ebf; -[GPBMessage init] */

undefined1 * FUN_100108e60(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e9c8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c60ef8();
    *(undefined1 **)((long)puVar1 + 0x40) = (undefined1 *)((long)puVar1 + (long)puVar2);
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100108ec0; end: 100108f83; -[GPBMessage mergeFromData:extensionRegistry:error:] */

undefined8
FUN_100108ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e3238;
  func_0x000107c610f4(PTR_PTR_1126e3238);
  func_0x000107c4635c();
  func_0x000107c4cd58(param_1,param_2,puVar1,param_4);
  func_0x000107c3f98c(puVar1,param_2,0);
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  func_0x000107c61170(puVar1);
  return 1;
}



/* Entry: 100108f84; end: 100108ff7; -[GPBCodedInputStream initWithData:] */

undefined1 * FUN_100108f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e7d0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61174();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    uVar2 = param_3;
    func_0x000107c3eea8();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c4adac();
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100108ff8; end: 10010953f; -[GPBMessage mergeFromCodedInputStream:extensionRegistry:] */

void FUN_100108ff8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  lVar6 = param_1;
  func_0x000107c41800();
  uVar8 = *(ulong *)(lVar6 + 8);
  uVar1 = uVar8;
  func_0x000107c40808();
  lVar6 = param_3 + 8;
  FUN_100109554();
  if ((int)lVar6 != 0) {
    uVar9 = 0;
    do {
      uVar4 = uVar1;
      if (uVar1 != 0) {
LAB_100109060:
        if (uVar1 <= uVar9) {
          uVar9 = 0;
        }
        uVar2 = uVar8;
        func_0x000107c4d9a4();
        lVar5 = *(long *)(uVar2 + 8);
        if ((*(ushort *)(lVar5 + 0x1c) & 0xf04) == 0) {
          uVar7 = *(uint *)(&UNK_10e60e064 + (ulong)*(byte *)(lVar5 + 0x1e) * 4);
        }
        else {
          uVar7 = 2;
        }
        if ((uVar7 | *(int *)(lVar5 + 0x10) << 3) != (uint)lVar6) goto code_r0x0001001090a8;
        uVar4 = uVar2;
        func_0x000107c433d8();
        if ((int)uVar4 == 1) {
          uVar4 = uVar2;
          func_0x000107c4a160();
          if ((int)uVar4 != 0) goto LAB_1001091a4;
          goto LAB_1001091f0;
        }
        if ((int)uVar4 != 0) {
          FUN_1003f8844(param_1,uVar2);
          func_0x000107c4f9a4(param_3);
          goto LAB_100109204;
        }
        lVar6 = *(long *)(uVar2 + 8);
        switch(*(undefined1 *)(lVar6 + 0x1e)) {
        case 0:
          lVar6 = param_3 + 8;
          FUN_100109638(lVar6);
          FUN_10011c724(param_1,uVar2,lVar6 != 0);
          goto LAB_1001091b4;
        case 1:
          func_0x0001001095dc(param_3 + 8,4);
          uVar4 = (ulong)*(uint *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
          *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
          goto code_r0x000100109384;
        case 2:
          func_0x0001001095dc(param_3 + 8,4);
          uVar7 = *(uint *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
          *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
          goto code_r0x0001001092dc;
        case 3:
          func_0x0001001095dc(param_3 + 8,4);
          uVar10 = *(undefined4 *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
          *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
          FUN_10035db68(uVar10,param_1,uVar2);
          goto LAB_1001091b4;
        case 4:
          func_0x0001001095dc(param_3 + 8,8);
          lVar6 = *(long *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
          *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
          goto code_r0x000100109298;
        case 5:
          func_0x0001001095dc(param_3 + 8,8);
          uVar4 = *(ulong *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
          *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
          goto code_r0x000100109458;
        case 6:
          func_0x0001001095dc(param_3 + 8,8);
          uVar11 = *(undefined8 *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
          *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
          FUN_1002840a8(uVar11,param_1,uVar2);
          goto LAB_1001091b4;
        case 7:
          uVar4 = param_3 + 8;
          FUN_100109638(uVar4);
          break;
        case 8:
          uVar4 = param_3 + 8;
          FUN_100109638(uVar4);
          goto code_r0x000100109458;
        case 9:
          lVar6 = param_3 + 8;
          FUN_100109638(lVar6);
          uVar7 = -((uint)lVar6 & 1) ^ (uint)lVar6 >> 1;
code_r0x0001001092dc:
          uVar4 = (ulong)uVar7;
          break;
        case 10:
          uVar4 = param_3 + 8;
          FUN_100109638(uVar4);
          uVar4 = -(uVar4 & 1) ^ uVar4 >> 1;
code_r0x000100109458:
          FUN_100265b60(param_1,uVar2,uVar4);
          goto LAB_1001091b4;
        case 0xb:
          uVar4 = param_3 + 8;
          FUN_100109638(uVar4);
code_r0x000100109384:
          FUN_1008aa1cc(param_1,uVar2,uVar4);
          goto LAB_1001091b4;
        case 0xc:
          lVar6 = param_3 + 8;
          FUN_100109638(lVar6);
code_r0x000100109298:
          FUN_1005771f8(param_1,uVar2,lVar6);
          goto LAB_1001091b4;
        case 0xd:
          lVar6 = param_3 + 8;
          FUN_10010cdb0(lVar6);
          goto code_r0x0001001093f4;
        case 0xe:
          lVar6 = param_3 + 8;
          FUN_10010c8fc(lVar6);
code_r0x0001001093f4:
          FUN_100109e00(param_1,uVar2,lVar6);
          goto LAB_1001091b4;
        case 0xf:
          uVar7 = *(uint *)(lVar6 + 0x14);
          if ((int)uVar7 < 0) {
            if (*(int *)(*(long *)(param_1 + 0x40) + (ulong)-uVar7 * 4) != *(int *)(lVar6 + 0x10))
            goto code_r0x0001001094d0;
          }
          else if ((*(uint *)(*(long *)(param_1 + 0x40) + (ulong)(uVar7 >> 5) * 4) >>
                    (ulong)(uVar7 & 0x1f) & 1) == 0) {
code_r0x0001001094d0:
            uVar4 = uVar2;
            func_0x000107c4d160(uVar2);
            func_0x000107c610fc();
            FUN_100109e00(param_1,uVar2,uVar4);
          }
          func_0x000107c4f9ac(param_3);
          goto LAB_1001091b4;
        case 0x10:
          uVar7 = *(uint *)(lVar6 + 0x14);
          if ((int)uVar7 < 0) {
            if (*(int *)(*(long *)(param_1 + 0x40) + (ulong)-uVar7 * 4) != *(int *)(lVar6 + 0x10))
            goto code_r0x00010010947c;
          }
          else if ((*(uint *)(*(long *)(param_1 + 0x40) + (ulong)(uVar7 >> 5) * 4) >>
                    (ulong)(uVar7 & 0x1f) & 1) == 0) {
code_r0x00010010947c:
            uVar4 = uVar2;
            func_0x000107c4d160(uVar2);
            func_0x000107c610fc();
            FUN_100109e00(param_1,uVar2,uVar4);
          }
          func_0x000107c4f99c(param_3);
          goto LAB_1001091b4;
        case 0x11:
          uVar4 = param_3 + 8;
          FUN_100109638(uVar4);
          if (((*(ushort *)(*(long *)(uVar2 + 8) + 0x1c) >> 0xc & 1) != 0) &&
             (uVar3 = uVar2, func_0x000107c4a6c0(), (int)uVar3 == 0)) {
            func_0x000107c31890(param_1);
            func_0x000107c4cd68();
            goto LAB_1001091b4;
          }
          break;
        default:
          goto LAB_1001091b4;
        }
        FUN_10010ce20(param_1,uVar2,uVar4);
        goto LAB_1001091b4;
      }
LAB_100109120:
      lVar6 = param_1;
      func_0x000107c4e390();
      if ((int)lVar6 == 0) {
        return;
      }
LAB_100109204:
      lVar6 = param_3 + 8;
      FUN_100109554();
    } while ((int)lVar6 != 0);
  }
  return;
code_r0x0001001090a8:
  uVar9 = uVar9 + 1;
  uVar4 = uVar4 - 1;
  uVar3 = uVar1;
  if (uVar4 == 0) goto LAB_1001090b8;
  goto LAB_100109060;
LAB_1001090b8:
  if (uVar1 <= uVar9) {
    uVar9 = 0;
  }
  uVar2 = uVar8;
  func_0x000107c4d9a4();
  uVar4 = uVar2;
  func_0x000107c433d8();
  if ((int)uVar4 != 1) goto LAB_100109114;
  lVar5 = *(long *)(uVar2 + 8);
  if (*(byte *)(lVar5 + 0x1e) - 0xd < 4) goto LAB_100109114;
  if ((*(ushort *)(lVar5 + 0x1c) >> 2 & 1) == 0) {
    uVar7 = 2;
  }
  else {
    uVar7 = *(uint *)(&UNK_10e60e064 + (ulong)(uint)*(byte *)(lVar5 + 0x1e) * 4);
  }
  if ((uVar7 | *(int *)(lVar5 + 0x10) << 3) != (uint)lVar6) goto LAB_100109114;
  uVar4 = uVar2;
  func_0x000107c4a160();
  if ((uVar4 & 1) == 0) {
LAB_1001091a4:
    FUN_1004c2694(param_1,uVar2,param_3);
LAB_1001091b4:
    uVar9 = uVar9 + 1;
  }
  else {
LAB_1001091f0:
    FUN_1001099ec(param_1,uVar2,param_3,param_4);
  }
  goto LAB_100109204;
LAB_100109114:
  uVar9 = uVar9 + 1;
  uVar3 = uVar3 - 1;
  if (uVar3 == 0) goto LAB_100109120;
  goto LAB_1001090b8;
}



/* Entry: 100109540; end: 100109553; -[GPBMessage descriptor] */

void FUN_100109540(undefined8 param_1)

{
  func_0x000107c61158();
                    /* WARNING: Could not recover jumptable at 0x00010bf6e770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_descriptor_1125b9380);
  return;
}



/* Entry: 100109554; end: 100109637;  */

void FUN_100109554(long param_1)

{
  uint uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) ||
     (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18))) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = param_1;
    FUN_100109638();
    uVar1 = (uint)lVar2;
    *(uint *)(param_1 + 0x20) = uVar1;
    if (((uVar1 ^ 0xffffffff) & 6) == 0) {
      func_0x000107c3ab00(0xffffffffffffff99,&PTR____CFConstantStringClassReference_11102f4f8);
      uVar1 = *(uint *)(param_1 + 0x20);
    }
    if (uVar1 < 8) {
      func_0x000107c3ab00(0xffffffffffffff99,&PTR____CFConstantStringClassReference_11102f518);
    }
  }
  return;
}



/* Entry: 100109638; end: 1001096bb;  */

ulong FUN_100109638(long *param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    if (0x3f < uVar4) {
      func_0x000107c3ab00(0xffffffffffffff97,&PTR____CFConstantStringClassReference_11102f558);
      return 0;
    }
    func_0x0001001095dc(param_1,1);
    lVar2 = param_1[2];
    param_1[2] = lVar2 + 1;
    bVar1 = *(byte *)(*param_1 + lVar2);
    uVar3 = ((ulong)bVar1 & 0x7f) << (uVar4 & 0x3f) | uVar3;
    uVar4 = uVar4 + 7;
  } while ((char)bVar1 < '\0');
  return uVar3;
}



/* Entry: 1001096bc; end: 1001096db; -[GPBFieldDescriptor fieldType] */

undefined4 FUN_1001096bc(long param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *(ushort *)(*(long *)(param_1 + 8) + 0x1c);
  uVar2 = 0;
  if ((uVar1 & 0xf00) != 0) {
    uVar2 = 2;
  }
  if ((uVar1 & 2) != 0) {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1001096dc; end: 100109763; +[SCRequestRouting shared] */

void FUN_1001096dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_100109764;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137f45e0 != -1) {
    FUN_10002a2fc(0x1137f45e0,&puStack_48);
  }
  uVar1 = uRam00000001137f45e8;
  func_0x000107c61174(uRam00000001137f45e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100109764; end: 10010978b;  */

void FUN_100109764(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c610fc();
  uVar1 = uRam00000001137f45e8;
  uRam00000001137f45e8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10010978c; end: 100109853; -[SCRequestRouting init] */

undefined1 * FUN_10010978c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706078;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126b7f68;
    func_0x000107c5a9bc();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c4d5c0();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c4f7e8();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100109854; end: 100109863; -[GPBFieldDescriptor isPackable] */

ushort FUN_100109854(long param_1)

{
  return *(ushort *)(*(long *)(param_1 + 8) + 0x1c) >> 2 & 1;
}



/* Entry: 100109864; end: 1001099eb;  */

/* WARNING: Possible PIC construction at 0x0001001098ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001098b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100109864(undefined *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  
  bVar1 = *(byte *)(*(long *)(param_1 + 8) + 0x1e);
  switch(bVar1) {
  case 0:
    param_1 = PTR_PTR_1126e30a0;
    break;
  case 1:
  case 0xb:
    param_1 = PTR_PTR_1126beb00;
    break;
  case 2:
  case 7:
  case 9:
    param_1 = PTR_PTR_1126b7828;
    break;
  case 3:
    param_1 = PTR_PTR_1126e3090;
    break;
  case 4:
  case 0xc:
    param_1 = PTR_PTR_1126baf88;
    break;
  case 5:
  case 8:
  case 10:
    param_1 = PTR_PTR_1126c8ba8;
    break;
  case 6:
    param_1 = PTR_PTR_1126e3098;
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (param_2 != 0) {
      puVar2 = PTR_PTR_1126e3228;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_alloc_init_11034d1b8)(puVar2);
    return;
  case 0x11:
    puVar2 = PTR_PTR_1126ae740;
    func_0x000107c610f4();
    func_0x000107c429a8(param_1);
    func_0x000107c429b0();
    func_0x000107c49464();
    param_1 = puVar2;
  default:
    goto LAB_100109920;
  }
  func_0x000107c610fc();
LAB_100109920:
  if (param_2 != 0) {
    if (bVar1 - 0xd < 4) {
      *(long *)(param_1 + _DAT_112796b30) = param_2;
    }
    else {
      *(long *)(param_1 + 8) = param_2;
    }
  }
  return;
}



/* Entry: 1001099ec; end: 100109ccb;  */

/* WARNING: Possible PIC construction at 0x000100109acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100109b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100109ad0) */
/* WARNING: Removing unreachable block (ram,0x000107c4f99c) */
/* WARNING: Removing unreachable block (ram,0x00010c121560) */
/* WARNING: Removing unreachable block (ram,0x000100109b8c) */
/* WARNING: Removing unreachable block (ram,0x000107c4f9ac) */
/* WARNING: Removing unreachable block (ram,0x00010c1216e0) */

void FUN_1001099ec(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000100109988();
  switch(*(undefined1 *)(*(long *)(param_2 + 8) + 0x1e)) {
  case 0:
    FUN_100109638(param_3 + 8);
    break;
  case 1:
  case 2:
    func_0x0001001095dc(param_3 + 8,4);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
    break;
  case 3:
    func_0x0001001095dc(param_3 + 8,4);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
    break;
  case 4:
  case 5:
    func_0x0001001095dc(param_3 + 8,8);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
    break;
  case 6:
    func_0x0001001095dc(param_3 + 8,8);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
    break;
  case 7:
  case 0xb:
    FUN_100109638(param_3 + 8);
    break;
  case 8:
  case 0xc:
    FUN_100109638(param_3 + 8);
    break;
  case 9:
    FUN_100109638(param_3 + 8);
    break;
  case 10:
    FUN_100109638(param_3 + 8);
    break;
  case 0xd:
    param_2 = param_3 + 8;
    FUN_10010cdb0(param_2);
    goto code_r0x000100109c68;
  case 0xe:
    param_2 = param_3 + 8;
    FUN_10010c8fc(param_2);
code_r0x000100109c68:
    func_0x000107c3d798(uVar1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  case 0xf:
    func_0x000107c4d160(param_2);
    func_0x000107c610fc();
    func_0x000107c3d798(uVar1);
    goto code_r0x000107c61170;
  case 0x10:
    func_0x000107c4d160(param_2);
    func_0x000107c610fc();
    func_0x000107c3d798(uVar1);
    goto code_r0x000107c61170;
  case 0x11:
    param_3 = param_3 + 8;
    FUN_100109638(param_3);
    if (((*(ushort *)(*(long *)(param_2 + 8) + 0x1c) >> 0xc & 1) != 0) &&
       (func_0x000107c4a6c0(), (int)param_2 == 0)) {
      func_0x000107c31890(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0cad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010befacf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_addRawValue__11259c4e0,param_3);
    return;
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010befc810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_addValue__11259cba8);
  return;
}



/* Entry: 100109ccc; end: 100109dff; -[SCRequestRouting subscribeToCof:] */

void FUN_100109ccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = param_3;
  func_0x000107c4dab4();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4da88();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c61174(param_3);
  uVar3 = uVar2;
  func_0x000107c5c320();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100109e00; end: 100109fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100109e00(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  
  do {
    lVar6 = param_1;
    lVar10 = *(long *)(param_2 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) == 0) {
      if (*(long *)(param_2 + 0x10) != 0) {
        FUN_10010cd00(lVar6,*(long *)(param_2 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                      *(undefined4 *)(lVar10 + 0x10));
        uVar2 = *(ushort *)(lVar10 + 0x1c);
      }
      if (((uVar2 >> 5 & 1) == 0) || (lVar7 = param_3, func_0x000107c4adac(), lVar7 != 0)) {
        uVar8 = *(uint *)(lVar10 + 0x14);
        lVar7 = *(long *)(lVar6 + 0x40);
        if ((int)uVar8 < 0) {
          uVar9 = 0;
          if (param_3 != 0) {
            uVar9 = *(undefined4 *)(lVar10 + 0x10);
          }
          goto LAB_100109f58;
        }
        uVar11 = (ulong)(uVar8 >> 5);
        uVar8 = 1 << (ulong)(uVar8 & 0x1f);
        if (param_3 == 0) goto LAB_100109f84;
        *(uint *)(lVar7 + uVar11 * 4) = *(uint *)(lVar7 + uVar11 * 4) | uVar8;
      }
      else {
        func_0x000107c61170(param_3);
        uVar8 = *(uint *)(lVar10 + 0x14);
        lVar7 = *(long *)(lVar6 + 0x40);
        if ((int)uVar8 < 0) {
          param_3 = 0;
          uVar9 = 0;
LAB_100109f58:
          *(undefined4 *)(lVar7 + (ulong)-uVar8 * 4) = uVar9;
        }
        else {
          uVar11 = (ulong)(uVar8 >> 5);
          uVar8 = 1 << (ulong)(uVar8 & 0x1f);
LAB_100109f84:
          param_3 = 0;
          *(uint *)(lVar7 + uVar11 * 4) = *(uint *)(lVar7 + uVar11 * 4) & (uVar8 ^ 0xffffffff);
        }
      }
      uVar11 = *(ulong *)(lVar7 + (ulong)*(uint *)(lVar10 + 0x18));
      *(long *)(lVar7 + (ulong)*(uint *)(lVar10 + 0x18)) = param_3;
      if (uVar11 != 0) {
        if ((bVar1 - 0xf < 2) && (*(long *)(uVar11 + 0x20) == lVar6)) {
          func_0x00010029a5f8(uVar11);
        }
        goto LAB_100109fc4;
      }
    }
    else {
      uVar11 = *(ulong *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
      *(long *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_3;
      if (uVar11 != 0) {
        lVar10 = param_2;
        func_0x000107c433d8();
        uVar5 = uVar11;
        if ((int)lVar10 == 1) {
          if (3 < bVar1 - 0xd) {
LAB_100109f38:
            if (*(long *)(uVar11 + 8) == lVar6) {
              *(undefined8 *)(uVar11 + 8) = 0;
            }
            goto LAB_100109fc4;
          }
          puVar4 = PTR_PTR_1126e3228;
          func_0x000107c61158(PTR_PTR_1126e3228);
          func_0x000107c6115c(uVar11,puVar4);
          iVar3 = _DAT_112796b30;
        }
        else {
          func_0x000107c4c354();
          if (((int)param_2 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_100109f38;
          puVar4 = PTR_PTR_1126e3230;
          func_0x000107c61158(PTR_PTR_1126e3230);
          func_0x000107c6115c(uVar11,puVar4);
          iVar3 = _DAT_112796db0;
        }
        if (((uVar5 & 1) != 0) && (*(long *)(uVar11 + (long)iVar3) == lVar6)) {
          *(undefined8 *)(uVar11 + (long)iVar3) = 0;
        }
LAB_100109fc4:
        func_0x000107c61170(uVar11);
      }
    }
    param_1 = *(long *)(lVar6 + 0x20);
    if (param_1 == 0) {
      return;
    }
    param_2 = *(long *)(lVar6 + 0x28);
    if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(lVar6 + 0x30));
      return;
    }
    func_0x000107c61174();
    param_3 = lVar6;
  } while( true );
}



/* Entry: 100109ff0; end: 10010a04f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100109ff0(long param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
code_r0x000100109ff0:
  do {
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == 0) {
      return;
    }
    lVar11 = *(long *)(param_1 + 0x28);
    if (lVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar8,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar9 = *(long *)(lVar11 + 8);
    bVar1 = *(byte *)(lVar9 + 0x1e);
    uVar2 = *(ushort *)(lVar9 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar11 + 0x10) != 0) {
      FUN_10010cd00(lVar8,*(long *)(lVar11 + 0x10),*(undefined4 *)(lVar9 + 0x14),
                    *(undefined4 *)(lVar9 + 0x10));
      uVar2 = *(ushort *)(lVar9 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar11 = param_1, func_0x000107c4adac(), lVar11 != 0)) {
      uVar6 = *(uint *)(lVar9 + 0x14);
      lVar11 = *(long *)(lVar8 + 0x40);
      if ((int)uVar6 < 0) {
        uVar7 = 0;
        if (param_1 != 0) {
          uVar7 = *(undefined4 *)(lVar9 + 0x10);
        }
        goto LAB_100109f58;
      }
      uVar10 = (ulong)(uVar6 >> 5);
      uVar6 = 1 << (ulong)(uVar6 & 0x1f);
      if (param_1 == 0) goto LAB_100109f84;
      *(uint *)(lVar11 + uVar10 * 4) = *(uint *)(lVar11 + uVar10 * 4) | uVar6;
    }
    else {
      func_0x000107c61170(param_1);
      uVar6 = *(uint *)(lVar9 + 0x14);
      lVar11 = *(long *)(lVar8 + 0x40);
      if ((int)uVar6 < 0) {
        param_1 = 0;
        uVar7 = 0;
LAB_100109f58:
        *(undefined4 *)(lVar11 + (ulong)-uVar6 * 4) = uVar7;
      }
      else {
        uVar10 = (ulong)(uVar6 >> 5);
        uVar6 = 1 << (ulong)(uVar6 & 0x1f);
LAB_100109f84:
        param_1 = 0;
        *(uint *)(lVar11 + uVar10 * 4) = *(uint *)(lVar11 + uVar10 * 4) & (uVar6 ^ 0xffffffff);
      }
    }
    uVar10 = *(ulong *)(lVar11 + (ulong)*(uint *)(lVar9 + 0x18));
    *(long *)(lVar11 + (ulong)*(uint *)(lVar9 + 0x18)) = param_1;
    param_1 = lVar8;
  } while (uVar10 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar10 + 0x20) == lVar8)) {
    func_0x00010029a5f8(uVar10);
  }
  goto LAB_100109fc4;
code_r0x000100109e38:
  uVar10 = *(ulong *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar9 + 0x18));
  *(long *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar9 + 0x18)) = param_1;
  param_1 = lVar8;
  if (uVar10 == 0) goto code_r0x000100109ff0;
  lVar9 = lVar11;
  func_0x000107c433d8();
  uVar5 = uVar10;
  if ((int)lVar9 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_100109f38:
      if (*(long *)(uVar10 + 8) == lVar8) {
        *(undefined8 *)(uVar10 + 8) = 0;
      }
      goto LAB_100109fc4;
    }
    puVar4 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar10,puVar4);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar11 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_100109f38;
    puVar4 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar10,puVar4);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar10 + (long)iVar3) == lVar8)) {
    *(undefined8 *)(uVar10 + (long)iVar3) = 0;
  }
LAB_100109fc4:
  func_0x000107c61170(uVar10);
  param_1 = lVar8;
  goto code_r0x000100109ff0;
}



/* Entry: 10010a050; end: 10010a07f; -[SCRequestRouting setCdnSelectionManager:] */

void FUN_10010a050(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10010a080; end: 10010a087; -[GPBFieldDescriptor msgClass] */

undefined8 FUN_10010a080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10010a088; end: 10010a327; -[SCNetworkConnectivityLogger initWithNetworkDeps:] */

undefined8 *
FUN_10010a088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_4);
  puStack_68 = PTR_PTR_112705f70;
  puVar1 = &uStack_70;
  uStack_70 = param_2;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c45454();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126dd6b8;
    func_0x000107c610f4();
    func_0x000107c45cd4();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c6071c();
    puVar1[8] = param_1;
    puVar3 = PTR_PTR_1126dfe50;
    func_0x000107c610f4();
    func_0x000107c48be4(puVar1[8]);
    func_0x000107c61144(auStack_78,puVar1);
    uVar2 = puVar1[2];
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10010ae3c;
    puStack_90 = &UNK_110841fb0;
    func_0x000107c6111c(auStack_80,auStack_78);
    func_0x000107c61174(puVar3);
    puStack_88 = puVar3;
    func_0x000107c4e5e8(uVar2);
    *(undefined4 *)(puVar1 + 7) = 0;
    uVar2 = puVar1[3];
    puVar1[3] = &PTR____CFConstantStringClassReference_110daafd8;
    func_0x000107c61170(uVar2);
    func_0x000107c3c8f0(puVar1);
    puVar4 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[5];
    puVar1[5] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126dfd80;
    func_0x000107c4023c(PTR_PTR_1126dfd80);
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c4d5a4();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_b0,auStack_78);
    puVar6 = puVar5;
    func_0x000107c5c320(puVar5);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61120(auStack_b0);
    func_0x000107c61170(puStack_88);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_4);
  return puVar1;
}



/* Entry: 10010a328; end: 10010a37f; -[SCNetworkConnectivityRecord initWithTS:Status:] */

void FUN_10010a328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705f68;
  uStack_40 = param_2;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10010a380; end: 10010a3e7; -[SCQueuePerformer performWithBarrier:] */

void FUN_10010a380(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = param_1;
    func_0x000107c3becc(param_1);
    func_0x000107c61180();
    func_0x000107c611ec(param_1 + 0x44);
    FUN_10010a3e8(*(undefined8 *)(param_1 + 0x10),lVar1);
    func_0x000107c611f0(param_1 + 0x44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0f7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_perform__11261ba10);
  return;
}



/* Entry: 10010a3e8; end: 10010a49f;  */

/* WARNING: Possible PIC construction at 0x00010010a448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010010a44c) */

void FUN_10010a3e8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  if ((bRam0000000113817cf8 & 1) == 0) {
    iVar1 = 0x13817cf8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_barrier_async");
      pcRam0000000113817cf0 = pcVar2;
      func_0x000107c60e4c(0x113817cf8);
    }
  }
  pcVar2 = pcRam0000000113817cf0;
  FUN_10002a3a8(param_2);
  func_0x000107c61180();
  (*pcVar2)(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10010a4a0; end: 10010a507; +[ConfigResult descriptor] */

void FUN_10010a4a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fd5a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cf57a0,
                        &PTR____CFConstantStringClassReference_110f9f578,
                        &PTR_s_snapchat_cdp_cof_1133fd308,&PTR_DAT_1133fd620,0x11,0x60,0x1c);
    puRam00000001137fd5a8 = puVar1;
  }
  return;
}



/* Entry: 10010a508; end: 10010a55f; -[SCNetworkConnectivityLogger _startScanWifiSSID] */

void FUN_10010a508(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10010aefc;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c4e5e8(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 10010a560; end: 10010a5b7; +[SCAPIClientLogger connectivityMonitor] */

void FUN_10010a560(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = uRam00000001137f4648;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar2;
  FUN_10010fab4();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10010a5b8; end: 10010a5bf;  */

void FUN_10010a5b8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10010a5c0; end: 10010a5f7;  */

void FUN_10010a5c0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10010a5f8; end: 10010a603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010a5f8(void)

{
  long lVar1;
  long lVar2;
  undefined *puStack_30;
  long lStack_28;
  
  FUN_100083b20(&lStack_28);
  lVar1 = *(long *)(lStack_28 + _DAT_113080ad0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_28);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    puStack_30 = PTR_DAT_11269e8b8;
    lVar1 = lVar2;
    func_0x000107c61494(lVar2,1,&puStack_30);
    if (lVar1 == 0) {
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10010a604; end: 10010a69f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010a604(void)

{
  long lVar1;
  long lVar2;
  undefined *puStack_30;
  long lStack_28;
  
  FUN_100083b20(&lStack_28);
  lVar1 = *(long *)(lStack_28 + _DAT_113080ad0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_28);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    puStack_30 = PTR_DAT_11269e8b8;
    lVar1 = lVar2;
    func_0x000107c61494(lVar2,1,&puStack_30);
    if (lVar1 == 0) {
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10010a6a0; end: 10010a72f;  */

void FUN_10010a6a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x0001000ad7c4(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = param_2;
  func_0x0001000ad7c4();
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  uVar3 = uVar2;
  func_0x0001000ad7c4();
  uVar4 = 0;
  FUN_100096edc(0);
  func_0x000107c610f8();
  FUN_10010a730(param_2,uVar1,uVar2,uVar3,uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 10010a730; end: 10010a7eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010a730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_113080ad0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113080ad8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113080ae0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113080ae8) = param_4;
  FUN_100096edc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10010a7ec; end: 10010a81b;  */

void FUN_10010a7ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x00010010a7cc();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 10010a81c; end: 10010ab4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10010a81c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5ffd8();
  lStack_88 = *(long *)(lVar1 + -8);
  lStack_80 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  puVar8 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = _DAT_112daa568;
  lVar10 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_10010ab90(0);
  func_0x000107c610f8();
  uVar3 = 0xffffffffffffffff;
  FUN_10010abb0(0xffffffffffffffff);
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112daa570;
  puVar4 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112daa588;
  uVar3 = 0;
  func_0x000107c5f254();
  func_0x000107c613fc();
  func_0x000107c5f250();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112daa590;
  uVar5 = 0;
  FUN_1000295c4(0);
  func_0x000107c5f808(lVar10);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100029608();
  uVar3 = 0x112d4ac70;
  FUN_1000285a8(0x112d4ac70,&UNK_10d911480);
  uVar6 = uVar3;
  func_0x00010002964c();
  func_0x000107c60264(lVar9,&puStack_68,uVar3,uVar6,lVar2,uVar5);
  (**(code **)(lStack_88 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_80);
  uVar3 = 0xd000000000000014;
  func_0x000107c5ffec(0xd000000000000014,0x800000010ef873a0,lVar10,lVar9,puVar8,0);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112daa598) = 0;
  lVar1 = _DAT_112daa578;
  puVar4 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112daa580) = 0xffffffffffffffff;
  func_0x00010010a7cc();
  puVar7 = (ulong *)&stack0xffffffffffffff88;
  func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
  uVar3 = *(undefined8 *)((long)puVar7 + _DAT_112daa588);
  puVar4 = &UNK_1103d2458;
  func_0x000107c613fc(&UNK_1103d2458,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar7);
  func_0x000107c61174();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(puVar4);
  FUN_10010c6ec(FUN_100112e44,puVar4);
  func_0x000107c5f244(FUN_100112e44,puVar4);
  func_0x000107c61578(puVar4,2);
  func_0x000107c61574(uVar3);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar7) + 0xd8))();
  func_0x000107c61170(puVar7);
  return puVar7;
}



/* Entry: 10010ab4c; end: 10010ab6f;  */

void FUN_10010ab4c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10010ab70; end: 10010ab8f; -[_TtC39NetworkPathMonitorServiceImplementation25NetworkPathMonitorService init] */

void FUN_10010ab70(void)

{
  FUN_10010a81c();
  return;
}



/* Entry: 10010ab90; end: 10010abaf;  */

void FUN_10010ab90(void)

{
  func_0x000107c61168(&PTR_PTR_1129c3c80);
  return;
}



/* Entry: 10010abb0; end: 10010abb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010abb0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113080b18) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10010abb4; end: 10010abff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010abb4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113080b18) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10010ac00; end: 10010accf; -[SCBehaviorSubject initWithValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10010ac00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270e5b8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c9690;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127967f4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127967f4) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126e3010;
    func_0x000107c610f4();
    func_0x000107c47ba0();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127967f8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127967f8) = puVar2;
    func_0x000107c61170(uVar3);
    lVar4 = (long)_DAT_1127967fc;
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10010acd0; end: 10010ae3b; -[SCDevice initWithDeviceModel:hardwareModel:systemName:systemVersion:buildVersion:kernelVersion:] */

undefined1 *
FUN_10010acd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_11270b930;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10010ae3c; end: 10010ae77;  */

void FUN_10010ae3c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 != 0) {
    func_0x000107c428e0(*(undefined8 *)(lVar1 + 8),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10010ae78; end: 10010aef3; -[SCQueueWithCapacity enqueue:] */

void FUN_10010ae78(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    while( true ) {
      uVar3 = *(ulong *)(param_1 + 0x10);
      if (*(ulong *)(param_1 + 0x20) < uVar3) break;
      func_0x000107c417d0(param_1);
      func_0x000107c611b0();
    }
    uVar1 = *(long *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x20);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar1 / uVar3;
    }
    func_0x000107c56bc4(*(undefined8 *)(param_1 + 8),param_2,param_3,uVar1 - uVar2 * uVar3);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10010aef4; end: 10010aefb; -[SCDevice hardwareModel] */

undefined8 FUN_10010aef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10010aefc; end: 10010af87;  */

void FUN_10010aefc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar3 + 0x20) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000107c4f7c0(uVar1);
  func_0x000107c61180();
  func_0x000107c3b348(0x403e000000000000);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(long *)(*(long *)(param_1 + 0x20) + 0x20) = lVar3;
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bee4430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateWifiSSID_112596ab0);
  return;
}



/* Entry: 10010af88; end: 10010af9f; +[SCManagedCaptureDeviceCapabilities captureVideoActiveFormatSize720p] */

undefined1  [16] FUN_10010af88(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4086800000000000;
  auVar1._0_8_ = 0x4094000000000000;
  return auVar1;
}



/* Entry: 10010afa0; end: 10010b02f;  */

undefined * FUN_10010afa0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fd908 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd8(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110fa0138,
                        &UNK_10e602510,&UNK_10e6031d4,0xde,&UNK_10b9b28c4,0,&UNK_10e60354c);
    do {
      if (puRam00000001137fd908 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001137fd908;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fd908,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fd908 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fd908;
}



/* Entry: 10010b030; end: 10010b053; +[GPBEnumDescriptor allocDescriptorForName:valueNames:values:count:enumVerifier:flags:extraTextFormatInfo:] */

void FUN_10010b030(long param_1)

{
  undefined8 in_stack_00000000;
  
  func_0x000107c3dbd4();
  *(undefined8 *)(param_1 + 0x28) = in_stack_00000000;
  return;
}



/* Entry: 10010b054; end: 10010b0cb; +[GPBEnumDescriptor allocDescriptorForName:valueNames:values:count:enumVerifier:flags:] */

void FUN_10010b054(undefined8 param_1)

{
  ulong in_x7;
  
  if ((in_x7 & 0xfffffffd) != 0) {
    func_0x000107c318a0();
  }
  func_0x000107c610f4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c02dc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10010b0cc; end: 10010b157; -[GPBEnumDescriptor initWithName:valueNames:values:count:enumVerifier:flags:] */

undefined1 *
FUN_10010b0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270e800;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c40794();
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined4 *)((long)puVar1 + 0x38) = param_6;
    *(undefined4 *)((long)puVar1 + 0x3c) = param_8;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10010b158; end: 10010b1c7; -[SCCameraDeviceFrameRateConstraint initWithMaxFpsLowerbound:maxFpsUpperbound:minActiveFps:maxActiveFps:kind:] */

void FUN_10010b158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_11270a460;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  return;
}



/* Entry: 10010b1c8; end: 10010b223; -[SCCameraDeviceResolutionConstraint initWithMinHeight:maxHeight:aspectRatio:] */

void FUN_10010b1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a468;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 10010b224; end: 10010b287; -[SCCameraDevicePhotoQualityConstraint initWithMinHeight:maxHeight:shouldRequireHighPhotoQualitySupport:shouldRequireHighestPhotoQualitySupport:] */

void FUN_10010b224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a478;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  return;
}



/* Entry: 10010b288; end: 10010b2cf; -[SCCameraDeviceMediaSubtypeConstraint initWithMediaSubtype:] */

void FUN_10010b288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a470;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10010b2d0; end: 10010b357; -[SCCameraDeviceVideoCaptureSupportConstraint initWithShouldRequireVideoHDR:shouldRequireMultiCam:shouldRequireVideoBinned:shouldRequireVideoStabilizationModeStandard:shouldRequireVideoStabilizationModeCinematic:shouldRequireVideoStabilizationModeCinematicExtended:shouldRequireVideoStabilizationModeAuto:] */

void FUN_10010b2d0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_11270a480;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    *(undefined1 *)((long)puVar1 + 0xc) = param_7;
    *(undefined1 *)((long)puVar1 + 0xd) = param_8;
    *(undefined1 *)((long)puVar1 + 0xe) = param_9;
  }
  return;
}



/* Entry: 10010b358; end: 10010b3a3; -[SCCameraDeviceExposureConstraint initWithMinISO:maxISO:] */

void FUN_10010b358(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a488;
  uStack_30 = param_3;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    *(undefined4 *)((long)puVar1 + 0xc) = param_2;
  }
  return;
}



/* Entry: 10010b3a4; end: 10010b53b; -[SCCameraDeviceSettings initWithFrameRateConstraint:resolutionConstraint:mediaSubtypeConstraint:photoQualityConstraint:videoCaptureCapabilityConstraint:exposureConstraint:featureName:] */

undefined1 *
FUN_10010b3a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_58 = PTR_PTR_11270a458;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    func_0x000107c61170(uVar3);
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



/* Entry: 10010b53c; end: 10010b55f; -[SCCameraDeviceFrameRateConstraint copyWithZone:] */

undefined8 FUN_10010b53c(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 10010b560; end: 10010b583; -[SCCameraDeviceResolutionConstraint copyWithZone:] */

undefined8 FUN_10010b560(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 10010b584; end: 10010b5a7; -[SCCameraDeviceMediaSubtypeConstraint copyWithZone:] */

undefined8 FUN_10010b584(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 10010b5a8; end: 10010b5cb; -[SCCameraDevicePhotoQualityConstraint copyWithZone:] */

undefined8 FUN_10010b5a8(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 10010b5cc; end: 10010b5ef; -[SCCameraDeviceVideoCaptureSupportConstraint copyWithZone:] */

undefined8 FUN_10010b5cc(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 10010b5f0; end: 10010b613; -[SCCameraDeviceExposureConstraint copyWithZone:] */

undefined8 FUN_10010b5f0(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 10010b614; end: 10010b68f; -[SCCameraCaptureFormatSelectionFrameworkConfigurationImpl deviceSettingsFromCofKey:fallbackDeviceSettings:] */

void FUN_10010b614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  uVar1 = param_1;
  func_0x000107c3b470(param_1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c3b478(param_1,param_2,uVar1,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10010b690; end: 10010b747; -[SCCameraCaptureFormatSelectionFrameworkConfigurationImpl _deviceConfigForCOFKey:] */

void FUN_10010b690(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c4f558();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5dc0c(lVar1);
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126b7138;
    func_0x000107c610f4(PTR_PTR_1126b7138);
    func_0x000107c4636c();
    func_0x000107c61174(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10010b748; end: 10010b7db; -[SCCircumstanceEngine protoValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_10010b748(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3ade8(param_1,param_2,param_3,6);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x000107c4f558(uVar1,param_2,param_3,param_4,param_5);
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10010b7dc; end: 10010b86f; -[SCCircumstanceEngineConfigProvider protoValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_10010b7dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c3cda0(param_1,param_2,param_3,6,param_5);
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c61174(param_4);
    lVar1 = param_4;
  }
  else {
    lVar1 = param_1;
    func_0x000107c3dd54(param_1);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10010b870; end: 10010b9db; -[SCCircumstanceEngineConfigProvider _valueForConfigKeySync:expectedValueType:featureProvidedSignals:] */

void FUN_10010b870(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  lVar3 = *(long *)(param_1 + 8);
  func_0x000107c43548();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = param_1 + 0x28;
    func_0x000107c61148();
    lVar5 = lVar3;
    func_0x000107c43638(lVar3);
    func_0x000107c61180();
    uVar6 = uVar4;
    func_0x000107c5adfc();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar4);
    if ((uVar6 & 1) == 0) {
      lVar5 = param_1 + 0x30;
      func_0x000107c61148(lVar5);
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      func_0x000107c5c734(uVar7);
      func_0x000107c61180();
      uVar9 = *(undefined8 *)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = (undefined4)*(undefined8 *)(param_1 + 8);
      func_0x000107c4edac();
      uVar8 = param_3;
      FUN_10010f694(param_3,param_4,param_5,lVar5,uVar7,lVar3,uVar9,uVar1,uVar2);
      func_0x000107c61180();
      uVar9 = uVar8;
      func_0x000107c5dc0c();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(lVar5);
      goto LAB_10010b9a0;
    }
  }
  uVar9 = 0;
LAB_10010b9a0:
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 10010b9dc; end: 10010babb; -[SCNetworkConnectivityLogger _createSessionTimerWithInterval:queue:] */

void FUN_10010b9dc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___dispatch_source_type_timer_11034be38;
  func_0x000107c60f84(PTR___dispatch_source_type_timer_11034be38,0,0,param_4);
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0;
    func_0x000107c60f94(0,(long)(param_1 * 1000000000.0));
    func_0x000107c60f8c(puVar1,uVar2,(long)(param_1 * 1000000000.0),0);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    puStack_58 = &UNK_10b25fab4;
    puStack_50 = &UNK_110842e18;
    uStack_48 = param_2;
    func_0x000107c60f88(puVar1,&puStack_68);
    func_0x000107c60f68(puVar1);
    func_0x000107c61174(puVar1);
  }
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10010babc; end: 10010bb0b; -[SCNetworkConnectivityLogger _updateWifiSSID] */

void FUN_10010babc(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  puStack_28 = &UNK_100c72cfc;
  puStack_20 = &UNK_110841f20;
  uStack_18 = param_1;
  func_0x000107c3c1ec(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10010bb0c; end: 10010bc03; -[SCNetworkConnectivityLogger _queryWifiCheckEligibility:] */

/* WARNING: Possible PIC construction at 0x00010010bba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010010bbb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010010bbc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010010bbbc) */
/* WARNING: Removing unreachable block (ram,0x00010010bbac) */
/* WARNING: Removing unreachable block (ram,0x00010010bbcc) */

void FUN_10010bb0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5c618(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c41920();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c4f7c0(uVar2);
  func_0x000107c61180();
  func_0x000107c4317c(uVar1,param_2,param_3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10010bc04; end: 10010bc0f; -[SCNetworkDeps systemLocationServices] */

void FUN_10010bc04(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 10010bc10; end: 10010c03f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010bc10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  FUN_100083b20(&puStack_a0);
  puVar2 = puStack_a0;
  FUN_100083b20(&puStack_a0);
  puVar5 = puStack_a0;
  puVar11 = *(undefined **)(puStack_a0 + _DAT_1130595b8);
  puVar4 = puVar11;
  func_0x000107c61174();
  func_0x000107c61170(puVar5);
  if (puVar11 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar5 != (undefined *)0x0) {
      FUN_100083b20(&puStack_a0);
      puVar4 = puStack_a0;
      puVar12 = *(undefined **)(puStack_a0 + _DAT_1130595c0);
      puVar11 = puVar12;
      func_0x000107c61174(puVar12);
      func_0x000107c61170(puVar4);
      if (puVar12 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126ae720;
        func_0x000107c61168(PTR_PTR_1126ae720);
        pcVar6 = (code *)&UNK_1103c6578;
        func_0x000107c613fc(&UNK_1103c6578,0x20,7);
        *(undefined **)(pcVar6 + 0x10) = puVar5;
        *(undefined **)(pcVar6 + 0x18) = puVar2;
        puStack_80 = &UNK_10148db48;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        uStack_90 = 0x1001215a0;
        puStack_88 = &UNK_1103c6590;
        ppuVar8 = &puStack_a0;
        pcStack_78 = pcVar6;
        func_0x000107c60bc4(ppuVar8);
        pcVar6 = pcStack_78;
        func_0x000107c615f0(puVar5);
        func_0x000107c615f0(puVar2);
        func_0x000107c61574(pcVar6);
        func_0x000107c3e4fc(puVar7);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar8);
        puVar4 = PTR_PTR_1126a71b0;
        func_0x000107c610f8();
        func_0x000107c4654c();
        puVar9 = puVar2;
        goto LAB_10010bff8;
      }
      func_0x000107c615e8(puVar5);
    }
  }
  FUN_100083b20(&puStack_a0);
  puVar5 = puStack_a0;
  puVar9 = *(undefined **)(puStack_a0 + _DAT_113091b70);
  func_0x000107c615f0(puVar9);
  func_0x000107c61170(puVar5);
  FUN_100083b20(&puStack_a0);
  uVar10 = *(undefined8 *)(puStack_a0 + _DAT_1130809c0);
  func_0x000107c615f0(uVar10);
  func_0x000107c61170();
  puVar12 = puStack_a0;
  func_0x0001000ad7c4();
  FUN_1000285a8(0x112da25e0,&UNK_10d946d98);
  puVar5 = &UNK_1103c64d8;
  func_0x000107c613fc(&UNK_1103c64d8,0x38,7);
  *(undefined **)(puVar5 + 0x10) = puVar9;
  *(undefined8 *)(puVar5 + 0x18) = uVar10;
  *(undefined **)(puVar5 + 0x20) = puVar12;
  *(undefined **)(puVar5 + 0x28) = puVar2;
  *(undefined8 *)(puVar5 + 0x30) = uVar1;
  func_0x000107c615f0(puVar2);
  func_0x000107c615f0(puVar9);
  func_0x000107c615f0(uVar10);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  pcVar6 = FUN_100121640;
  FUN_1000823a8(FUN_100121640,puVar5);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar5 = &UNK_1103c6500;
  func_0x000107c613fc(&UNK_1103c6500,0x20,7);
  *(code **)(puVar5 + 0x10) = pcVar6;
  *(undefined **)(puVar5 + 0x18) = puVar2;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = (undefined *)0x1001215e0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x1001215a0;
  puStack_88 = &UNK_1103c6518;
  ppuVar8 = &puStack_a0;
  pcStack_78 = (code *)puVar5;
  func_0x000107c60bc4(ppuVar8);
  pcVar3 = pcStack_78;
  func_0x000107c615f0(puVar2);
  func_0x000107c6157c(pcVar6);
  func_0x000107c61574(pcVar3);
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  puVar11 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_80 = (undefined *)0x10058a5ec;
  puStack_a0 = puVar4;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10058a5ac;
  puStack_88 = &UNK_1103c6540;
  ppuVar8 = &puStack_a0;
  pcStack_78 = pcVar6;
  func_0x000107c60bc4(ppuVar8);
  pcVar3 = pcStack_78;
  func_0x000107c6157c(pcVar6);
  func_0x000107c61574(pcVar3);
  func_0x000107c3e4fc(puVar11);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  puVar4 = PTR_PTR_1126a71b0;
  func_0x000107c610f8();
  func_0x000107c4654c();
  func_0x000107c615e8(uVar10);
  func_0x000107c61170(puVar12);
  func_0x000107c61574(pcVar6);
  puVar5 = puVar2;
LAB_10010bff8:
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar7);
  func_0x000107c615e8(puVar5);
  func_0x000107c615e8(puVar9);
  *param_1 = puVar4;
  return;
}



/* Entry: 10010c040; end: 10010c053;  */

void FUN_10010c040(void)

{
  long unaff_x20;
  
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10010c054; end: 10010c26b;  */

void FUN_10010c054(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  
  ppuVar3 = &puStack_e0;
  ppuVar5 = &puStack_e0;
  FUN_100083b20(&puStack_e0);
  if (puStack_c8 == (undefined *)0x0) {
    FUN_10010c498(&puStack_e0);
    FUN_10009f320(0);
    func_0x000107c610f8();
    puVar7 = (undefined *)0x0;
    FUN_10010c4e0(0,0);
  }
  else {
    func_0x00010148d3d4(&puStack_e0,auStack_88);
    puVar7 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    func_0x00010148d2bc(auStack_88,auStack_b0);
    puVar2 = &UNK_1103c6340;
    func_0x000107c613fc(&UNK_1103c6340,0x40,7);
    func_0x00010148d3d4(auStack_b0,puVar2 + 0x10);
    *(undefined8 *)(puVar2 + 0x38) = param_3;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = &UNK_10148d440;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_10148db34;
    puStack_c8 = &UNK_1103c6358;
    puStack_b8 = puVar2;
    func_0x000107c60bc4(&puStack_e0);
    puVar2 = puStack_b8;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    func_0x00010148d2bc(auStack_88,auStack_b0);
    puVar2 = &UNK_1103c6390;
    func_0x000107c613fc(&UNK_1103c6390,0x38,7);
    func_0x00010148d3d4(auStack_b0,puVar2 + 0x10);
    puStack_c0 = &UNK_10148d538;
    puStack_e0 = puVar1;
    uStack_d8 = 0x42000000;
    puStack_d0 = (undefined *)0x10058a5ac;
    puStack_c8 = &UNK_1103c63a8;
    puStack_b8 = puVar2;
    func_0x000107c60bc4(&puStack_e0);
    func_0x000107c61574(puStack_b8);
    func_0x000107c3e4fc(puVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    uVar6 = 0;
    FUN_10009f320(0);
    func_0x000107c610f8();
    FUN_10010c4e0(puVar7,puVar4,uVar6);
    func_0x0001000834e4(auStack_88);
  }
  *param_1 = puVar7;
  return;
}



/* Entry: 10010c26c; end: 10010c2bb;  */

void FUN_10010c26c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10010c2bc; end: 10010c2c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010c2bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_48;
  
  FUN_100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = lStack_48;
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef84990);
  lVar2 = lVar3;
  func_0x000107c3ebd4();
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(uVar1);
  if ((int)lVar2 == 0) {
    uVar4 = 0;
    ppuVar6 = (undefined **)0x0;
    uVar1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_100083b20(&lStack_48);
    lVar3 = lStack_48;
    uVar7 = *(undefined8 *)(lStack_48 + _DAT_1130809c0);
    func_0x000107c615f0(uVar7);
    func_0x000107c61170(lVar3);
    func_0x000101486bc4(0);
    func_0x000107c613fc();
    func_0x000101485afc();
    FUN_100083b20(&lStack_48);
    lVar3 = 0;
    func_0x000101485ab8();
    func_0x000107c613fc();
    uVar1 = 0;
    FUN_10006a340();
    func_0x000107c613fc();
    FUN_10006a360();
    *(undefined1 *)(lVar3 + 0x20) = 2;
    *(long *)(lVar3 + 0x10) = lStack_48;
    *(undefined8 *)(lVar3 + 0x18) = uVar1;
    uVar4 = 0;
    func_0x000101488634();
    uVar5 = uVar4;
    func_0x000107c610f8();
    func_0x000107c6157c(uVar7);
    func_0x000107c6157c(lVar3);
    uVar1 = uVar7;
    func_0x00010148a408(uVar7,lVar3,uVar5);
    func_0x000107c61574(lVar3);
    func_0x000107c61574(uVar7);
    ppuVar6 = &PTR_DAT_1103c59b8;
  }
  param_1[3] = uVar4;
  param_1[4] = ppuVar6;
  *param_1 = uVar1;
  return;
}



/* Entry: 10010c2c4; end: 10010c46b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010c2c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lStack_48;
  
  FUN_100083b20(&lStack_48);
  lVar3 = lStack_48;
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef84990);
  lVar2 = lVar3;
  func_0x000107c3ebd4();
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(uVar1);
  if ((int)lVar2 == 0) {
    uVar4 = 0;
    ppuVar6 = (undefined **)0x0;
    uVar1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_100083b20(&lStack_48);
    lVar3 = lStack_48;
    uVar7 = *(undefined8 *)(lStack_48 + _DAT_1130809c0);
    func_0x000107c615f0(uVar7);
    func_0x000107c61170(lVar3);
    func_0x000101486bc4(0);
    func_0x000107c613fc();
    func_0x000101485afc();
    FUN_100083b20(&lStack_48);
    lVar3 = 0;
    func_0x000101485ab8();
    func_0x000107c613fc();
    uVar1 = 0;
    FUN_10006a340();
    func_0x000107c613fc();
    FUN_10006a360();
    *(undefined1 *)(lVar3 + 0x20) = 2;
    *(long *)(lVar3 + 0x10) = lStack_48;
    *(undefined8 *)(lVar3 + 0x18) = uVar1;
    uVar4 = 0;
    func_0x000101488634();
    uVar5 = uVar4;
    func_0x000107c610f8();
    func_0x000107c6157c(uVar7);
    func_0x000107c6157c(lVar3);
    uVar1 = uVar7;
    func_0x00010148a408(uVar7,lVar3,uVar5);
    func_0x000107c61574(lVar3);
    func_0x000107c61574(uVar7);
    ppuVar6 = &PTR_DAT_1103c59b8;
  }
  param_1[3] = uVar4;
  param_1[4] = ppuVar6;
  *param_1 = uVar1;
  return;
}



/* Entry: 10010c46c; end: 10010c497;  */

void FUN_10010c46c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10010c498; end: 10010c4df;  */

undefined8 FUN_10010c498(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112da22b8;
  FUN_1000285a8(0x112da22b8,&UNK_10d946d00);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10010c4e0; end: 10010c543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010c4e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130595b8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130595c0) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10010c544; end: 10010c56f;  */

void FUN_10010c544(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10010c570; end: 10010c6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010c570(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  func_0x0001000ad7c4();
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&lStack_68);
  uVar4 = *(undefined8 *)(lStack_68 + _DAT_113091b70);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(lStack_68);
  FUN_100083b20(&uStack_70);
  uVar3 = uStack_70;
  func_0x000107c3f630(uStack_70);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_70);
  FUN_100083b20(&lStack_78);
  uVar1 = *(undefined8 *)(lStack_78 + _DAT_113074f88);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_78);
  puVar2 = PTR_PTR_1126a7078;
  func_0x000107c610f8();
  func_0x000107c47a70();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar4);
  func_0x000107c615e8(uStack_60);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(uStack_58);
  uVar3 = 0;
  FUN_10009eae0(0);
  func_0x000107c610f8();
  FUN_10011ed10(puVar2,uVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 10010c6ec; end: 10010c6fb;  */

void FUN_10010c6ec(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10010c6fc; end: 10010c82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010c6fc(void)

{
  long unaff_x20;
  
  func_0x000107c5f248(*(undefined8 *)(unaff_x20 + _DAT_112daa588),
                      *(undefined8 *)(unaff_x20 + _DAT_112daa590));
  return;
}



/* Entry: 10010c82c; end: 10010c8fb; -[GPBCodedInputStream readMessage:extensionRegistry:] */

void FUN_10010c82c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (99 < *(ulong *)(param_1 + 0x30)) {
    func_0x000107c3ab00(0xffffffffffffff96,0);
  }
  uVar2 = param_1 + 8;
  FUN_100109638();
  if (uVar2 >> 0x1f != 0) {
    func_0x000107c3ab00(0xffffffffffffff9c,0);
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = *(long *)(param_1 + 0x18) + uVar2;
  if (uVar1 < uVar2) {
    func_0x000107c3ab00(0xffffffffffffff9a,0);
  }
  *(ulong *)(param_1 + 0x20) = uVar2;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  func_0x000107c4cd58(param_3);
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x000107c3ab00(0xffffffffffffff99,&PTR____CFConstantStringClassReference_11102f538);
  }
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  *(ulong *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 10010c8fc; end: 10010c997;  */

void FUN_10010c8fc(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  FUN_100109638();
  if (uVar1 >> 0x1f == 0) {
    if (uVar1 == 0) {
      return;
    }
  }
  else {
    func_0x000107c3ab00(0xffffffffffffff9c,0);
  }
  func_0x0001001095dc(param_1,uVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f4();
  func_0x000107c45ae8();
  *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + uVar1;
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c3ab00(0xffffffffffffff98,0);
  }
  return;
}



/* Entry: 10010c998; end: 10010ca23; +[Value descriptor] */

undefined * FUN_10010c998(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fd928 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cf7820,
                        &PTR____CFConstantStringClassReference_110dd6778,&PTR_DAT_113400130,
                        &PTR_DAT_1134001c8,10,0x48,0x1c);
    func_0x000107c5a8b4();
    puRam00000001137fd928 = puVar1;
  }
  return puRam00000001137fd928;
}



/* Entry: 10010ca24; end: 10010cbbf; -[GPBDescriptor setupOneofs:count:firstHasIndex:] */

undefined8 *****
FUN_10010ca24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *****param_4,
             ulong param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  uint uVar8;
  undefined8 *****pppppuVar9;
  int iVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 ****ppppuVar13;
  long unaff_x20;
  long unaff_x21;
  undefined8 ****ppppuVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****pppppuVar16;
  long lVar17;
  long unaff_x27;
  undefined8 *****unaff_x28;
  undefined8 ****ppppuStack_228;
  undefined *puStack_220;
  long lStack_198;
  undefined8 ****ppppuStack_190;
  long lStack_188;
  undefined8 ****ppppuStack_180;
  undefined8 ****ppppuStack_178;
  undefined8 ****ppppuStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar5 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  pppppuVar11 = param_4;
  uStack_140 = param_3;
  lStack_138 = param_1;
  func_0x000107c610f4();
  pppppuVar15 = (undefined8 *****)((ulong)param_4 & 0xffffffff);
  pppppuVar7 = pppppuVar15;
  func_0x000107c45cd4();
  pppppuVar16 = pppppuVar5;
  if ((int)param_4 != 0) {
    unaff_x28 = (undefined8 *****)0x0;
    do {
      lVar17 = *(long *)(lStack_138 + 8);
      param_4 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c610fc();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lVar3 = lVar17;
      func_0x000107c4080c();
      if (lVar3 != 0) {
        unaff_x21 = *plStack_120;
        unaff_x27 = lVar3;
        do {
          unaff_x20 = 0;
          do {
            if (*plStack_120 != unaff_x21) {
              func_0x000107c61128(lVar17);
            }
            if (*(int *)(*(long *)(*(long *)(lStack_128 + unaff_x20 * 8) + 8) + 0x14) ==
                (int)param_5) {
              func_0x000107c3d798(param_4);
            }
            unaff_x20 = unaff_x20 + 1;
          } while (unaff_x27 != unaff_x20);
          unaff_x27 = lVar17;
          func_0x000107c4080c();
        } while (unaff_x27 != 0);
      }
      pppppuVar16 = (undefined8 *****)PTR_PTR_1126e30b0;
      func_0x000107c610f4();
      pppppuVar11 = param_4;
      func_0x000107c478d0();
      pppppuVar7 = pppppuVar16;
      func_0x000107c3d798(pppppuVar5);
      func_0x000107c61170(pppppuVar16);
      pppppuVar16 = param_4;
      func_0x000107c61170();
      unaff_x28 = (undefined8 *****)((long)unaff_x28 + 1);
      param_5 = (ulong)((int)param_5 - 1);
    } while (unaff_x28 != pppppuVar15);
  }
  *(undefined8 ******)(lStack_138 + 0x10) = pppppuVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    pcStack_148 = FUN_10010cbc0;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_220 = PTR_PTR_11270e7f0;
    pppppuVar4 = &ppppuStack_228;
    pppppuVar6 = (undefined8 *****)PTR_s_init_1125d9248;
    pppppuVar9 = pppppuVar7;
    pppppuVar12 = pppppuVar11;
    ppppuStack_228 = pppppuVar16;
    ppppuStack_190 = unaff_x28;
    lStack_188 = unaff_x27;
    ppppuStack_180 = param_4;
    ppppuStack_178 = pppppuVar5;
    ppppuStack_170 = pppppuVar15;
    lStack_168 = unaff_x21;
    lStack_160 = unaff_x20;
    uStack_158 = param_5;
    puStack_150 = &stack0xfffffffffffffff0;
    func_0x000107c61154();
    uVar8 = (uint)pppppuVar9;
    iVar10 = (int)pppppuVar12;
    pppppuVar5 = (undefined8 *****)0x0;
    if (pppppuVar4 != (undefined8 *****)0x0) {
      pppppuVar4[1] = pppppuVar7;
      pppppuVar5 = pppppuVar11;
      func_0x000107c61174();
      pppppuVar4[2] = pppppuVar5;
      pppppuVar5 = pppppuVar11;
      func_0x000107c4080c();
      lVar3 = lRam0000000000000000;
      while (pppppuVar5 != (undefined8 *****)0x0) {
        pppppuVar16 = (undefined8 *****)0x0;
        do {
          if (lRam0000000000000000 != lVar3) {
            func_0x000107c61128(pppppuVar11);
          }
          *(undefined8 ******)(*(long *)((long)pppppuVar16 * 8) + 0x10) = pppppuVar4;
          pppppuVar16 = (undefined8 *****)((long)pppppuVar16 + 1);
        } while (pppppuVar5 != pppppuVar16);
        pppppuVar5 = pppppuVar11;
        func_0x000107c4080c();
      }
      uVar8 = 0xf8378ec;
      pppppuVar5 = (undefined8 *****)0x0;
      iVar10 = 0;
      FUN_100108a50();
      pppppuVar4[3] = pppppuVar5;
      pppppuVar6 = pppppuVar7;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
      return pppppuVar4;
    }
    func_0x000107c60e78();
    iVar1 = *(int *)((long)pppppuVar5[8] + (long)(int)uVar8 * -4);
    if (iVar1 != iVar10 && iVar1 != 0) {
      func_0x000107c433e4();
      if ((pppppuVar6 != (undefined8 *****)0x0) &&
         ((ppppuVar13 = pppppuVar6[1], (*(ushort *)((long)ppppuVar13 + 0x1c) & 0xf02) != 0 ||
          (*(byte *)((long)ppppuVar13 + 0x1e) - 0xd < 4)))) {
        ppppuVar14 = pppppuVar5[8];
        uVar2 = *(uint *)(ppppuVar13 + 3);
        pppppuVar6 = *(undefined8 ******)((long)ppppuVar14 + (ulong)uVar2);
        func_0x000107c61170(pppppuVar6);
        *(undefined8 *)((long)ppppuVar14 + (ulong)uVar2) = 0;
      }
      ppppuVar13 = pppppuVar5[8];
      pppppuVar5 = pppppuVar6;
      if ((int)uVar8 < 0) {
        *(undefined4 *)((long)ppppuVar13 + (ulong)-uVar8 * 4) = 0;
      }
      else {
        *(uint *)((long)ppppuVar13 + (ulong)(uVar8 >> 5) * 4) =
             *(uint *)((long)ppppuVar13 + (ulong)(uVar8 >> 5) * 4) &
             (1 << (ulong)(uVar8 & 0x1f) ^ 0xffffffffU);
      }
    }
    return pppppuVar5;
  }
  return pppppuVar16;
}



/* Entry: 10010cbc0; end: 10010ccff; -[GPBOneofDescriptor initWithName:fields:] */

undefined8 * FUN_10010cbc0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = PTR_PTR_11270e7f0;
  puVar3 = &uStack_e8;
  puVar5 = (undefined8 *)PTR_s_init_1125d9248;
  puVar4 = param_3;
  lVar8 = param_4;
  uStack_e8 = param_1;
  func_0x000107c61154();
  uVar6 = (uint)puVar4;
  iVar7 = (int)lVar8;
  puVar4 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_3;
    lVar8 = param_4;
    func_0x000107c61174();
    puVar3[2] = lVar8;
    lVar8 = param_4;
    func_0x000107c4080c();
    lVar9 = lRam0000000000000000;
    while (lVar8 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          func_0x000107c61128(param_4);
        }
        *(undefined8 **)(*(long *)(lVar10 * 8) + 0x10) = puVar3;
        lVar10 = lVar10 + 1;
      } while (lVar8 != lVar10);
      lVar8 = param_4;
      func_0x000107c4080c();
    }
    uVar6 = 0xf8378ec;
    puVar4 = (undefined8 *)0x0;
    iVar7 = 0;
    FUN_100108a50();
    puVar3[3] = puVar4;
    puVar5 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  func_0x000107c60e78();
  iVar1 = *(int *)(puVar4[8] + (long)(int)uVar6 * -4);
  if (iVar1 != iVar7 && iVar1 != 0) {
    func_0x000107c433e4();
    if ((puVar5 != (undefined8 *)0x0) &&
       ((lVar8 = puVar5[1], (*(ushort *)(lVar8 + 0x1c) & 0xf02) != 0 ||
        (*(byte *)(lVar8 + 0x1e) - 0xd < 4)))) {
      lVar9 = puVar4[8];
      uVar2 = *(uint *)(lVar8 + 0x18);
      puVar5 = *(undefined8 **)(lVar9 + (ulong)uVar2);
      func_0x000107c61170(puVar5);
      *(undefined8 *)(lVar9 + (ulong)uVar2) = 0;
    }
    lVar8 = puVar4[8];
    puVar4 = puVar5;
    if ((int)uVar6 < 0) {
      *(undefined4 *)(lVar8 + (ulong)-uVar6 * 4) = 0;
    }
    else {
      *(uint *)(lVar8 + (ulong)(uVar6 >> 5) * 4) =
           *(uint *)(lVar8 + (ulong)(uVar6 >> 5) * 4) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
    }
  }
  return puVar4;
}



/* Entry: 10010cd00; end: 10010cdaf;  */

void FUN_10010cd00(long param_1,long param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x40) + (long)(int)param_3 * -4);
  if (iVar1 != param_4 && iVar1 != 0) {
    func_0x000107c433e4();
    if ((param_2 != 0) &&
       ((lVar3 = *(long *)(param_2 + 8), (*(ushort *)(lVar3 + 0x1c) & 0xf02) != 0 ||
        (*(byte *)(lVar3 + 0x1e) - 0xd < 4)))) {
      lVar4 = *(long *)(param_1 + 0x40);
      uVar2 = *(uint *)(lVar3 + 0x18);
      func_0x000107c61170(*(undefined8 *)(lVar4 + (ulong)uVar2));
      *(undefined8 *)(lVar4 + (ulong)uVar2) = 0;
    }
    lVar3 = *(long *)(param_1 + 0x40);
    if ((int)param_3 < 0) {
      *(undefined4 *)(lVar3 + (ulong)-param_3 * 4) = 0;
    }
    else {
      *(uint *)(lVar3 + (ulong)(param_3 >> 5) * 4) =
           *(uint *)(lVar3 + (ulong)(param_3 >> 5) * 4) &
           (1 << (ulong)(param_3 & 0x1f) ^ 0xffffffffU);
    }
  }
  return;
}



/* Entry: 10010cdb0; end: 10010ce1f;  */

void FUN_10010cdb0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_100109638();
  if (uVar1 >> 0x1f != 0) {
    func_0x000107c3ab00(0xffffffffffffff9c,0);
  }
  func_0x0001001095dc(param_1,uVar1);
  func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
  func_0x000107c45ae4();
  *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + uVar1;
  return;
}


