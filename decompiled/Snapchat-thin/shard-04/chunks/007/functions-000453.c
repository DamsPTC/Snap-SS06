/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103799660; end: 1037996b3;  */

void FUN_103799660(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  if (lRam0000000112f92608 != -1) {
    func_0x000107c61568(0x112f92608,&UNK_100996768);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)
            (lRam000000011380bb38 + 0x38,*(undefined8 *)(lVar1 + 0x18));
  return;
}



/* Entry: 1037996b4; end: 1037996bb;  */

undefined8 FUN_1037996b4(void)

{
  return 0;
}



/* Entry: 1037996bc; end: 1037996db;  */

void FUN_1037996bc(void)

{
  func_0x000107c61168(&PTR_PTR_112f92428);
  return;
}



/* Entry: 1037996dc; end: 103799717;  */

void FUN_1037996dc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103799718; end: 103799723;  */

void FUN_103799718(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103799724; end: 10379979b;  */

void FUN_103799724(void)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  if (lRam0000000112f92608 != -1) {
    func_0x000107c61568(0x112f92608,&UNK_100996768);
  }
  func_0x000107c61604(lRam000000011380bb38 + 0x10,*(undefined8 *)(unaff_x20 + 0x18));
  if (lRam0000000112f92880 != -1) {
    func_0x000107c61568(0x112f92880,FUN_10379c24c);
  }
  uVar1 = uRam0000000112f92888;
  func_0x000107c4b940(uRam0000000112f92888);
  if (lRam0000000112f92928 != -1) {
    func_0x000107c61568(0x112f92928,FUN_10379c238);
  }
  func_0x000107c61428(0x112f92930,auStack_58,1,0);
  uVar2 = (ulong)puRam0000000112f92930;
  puRam0000000112f92930 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5d278(uVar1);
  if (uVar2 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar5 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10379cf40);
      (*pcVar3)();
    }
    uVar6 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar2 + uVar6 * 8 + 0x20);
        func_0x000107c61174(uVar4);
      }
      else {
        uVar4 = uVar6;
        FUN_10379b46c(uVar6,uVar2);
      }
      uVar6 = uVar6 + 1;
      FUN_10379caf0();
      func_0x000107c61170(uVar4);
    } while (uVar5 != uVar6);
  }
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 10379979c; end: 1037997f3;  */

void FUN_10379979c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_58 [24];
  
  lVar5 = *unaff_x20;
  if (lRam0000000112f92608 != -1) {
    func_0x000107c61568(0x112f92608,&UNK_100996768);
  }
  func_0x000107c61604(lRam000000011380bb38 + 0x10,*(undefined8 *)(lVar5 + 0x18));
  if (lRam0000000112f92880 != -1) {
    func_0x000107c61568(0x112f92880,FUN_10379c24c);
  }
  uVar1 = uRam0000000112f92888;
  func_0x000107c4b940(uRam0000000112f92888);
  if (lRam0000000112f92928 != -1) {
    func_0x000107c61568(0x112f92928,FUN_10379c238);
  }
  func_0x000107c61428(0x112f92930,auStack_58,1,0);
  uVar2 = (ulong)puRam0000000112f92930;
  puRam0000000112f92930 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5d278(uVar1);
  if (uVar2 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar6 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10379cf40);
      (*pcVar3)();
    }
    uVar7 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar2 + uVar7 * 8 + 0x20);
        func_0x000107c61174(uVar4);
      }
      else {
        uVar4 = uVar7;
        FUN_10379b46c(uVar7,uVar2);
      }
      uVar7 = uVar7 + 1;
      FUN_10379caf0();
      func_0x000107c61170(uVar4);
    } while (uVar6 != uVar7);
  }
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1037997f4; end: 1037997fb;  */

undefined8 FUN_1037997f4(void)

{
  return 0;
}



/* Entry: 1037997fc; end: 10379986f;  */

void FUN_1037997fc(void)

{
  func_0x000107c61168(&PTR_PTR_112f924d0);
  return;
}



/* Entry: 103799870; end: 10379989f;  */

void FUN_103799870(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1037998a0; end: 1037998c3;  */

void FUN_1037998a0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037998c4; end: 103799917;  */

void FUN_1037998c4(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  if (lRam0000000112f92608 != -1) {
    func_0x000107c61568(0x112f92608,&UNK_100996768);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)
            (lRam000000011380bb38 + 0x18,*(undefined8 *)(lVar1 + 0x10));
  return;
}



/* Entry: 103799918; end: 10379991f;  */

undefined8 FUN_103799918(void)

{
  return 0;
}



/* Entry: 103799920; end: 103799a67;  */

ulong FUN_103799920(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103799a68);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103799f74(uVar2,uVar4,0x112f926e0,&PTR_PTR_1126ad6f8,0x112f926e8,&UNK_10dc0b730);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103799a64);
      (*pcVar1)();
    }
    FUN_10379a090(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103799a68; end: 103799a83;  */

ulong FUN_103799a68(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103799d34);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x00010379a004(uVar2,uVar4,0x10379a7a8,0x112f926d8,&UNK_10dc0b728);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103799d30);
      (*pcVar1)();
    }
    FUN_10379a2c0(0,uVar2,uVar3 + 0x20,param_4,0x10379a7a8);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103799a84; end: 103799bcb;  */

ulong FUN_103799a84(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103799bcc);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103799f74(uVar2,uVar4,0x112f926c8,&PTR_PTR_1126ded70,0x112f926d0,&UNK_10dc0b720);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103799bc8);
      (*pcVar1)();
    }
    func_0x00010379a1a8(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103799bcc; end: 103799be7;  */

ulong FUN_103799bcc(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103799d34);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x00010379a004(uVar2,uVar4,0x1037a7e98,0x112f926c0,&UNK_10dc0b718);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103799d30);
      (*pcVar1)();
    }
    FUN_10379a2c0(0,uVar2,uVar3 + 0x20,param_4,0x1037a7e98);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103799be8; end: 103799d33;  */

ulong FUN_103799be8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103799d34);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x00010379a004(uVar2,uVar4,param_5,param_6,param_7);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103799d30);
      (*pcVar1)();
    }
    FUN_10379a2c0(0,uVar2,uVar3 + 0x20,param_4,param_5);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103799d34; end: 103799f73;  */

undefined * FUN_103799d34(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103799e58);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f926b8;
    func_0x0001000285a8(0x112f926b8,&UNK_10dc0b710);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110693218);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x48 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 103799f74; end: 10379a08f;  */

undefined *
FUN_103799f74(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    func_0x00010379a450(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 10379a090; end: 10379a2bf;  */

long FUN_10379a090(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10379a1a4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10379a1a8);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10379a4c8(0,0x112f926e0,&PTR_PTR_1126ad6f8);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_10379a4c8(0,0x112f926e0,&PTR_PTR_1126ad6f8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10379a1a0);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 10379a2c0; end: 10379a3c7;  */

long FUN_10379a2c0(long param_1,long param_2,long param_3,ulong param_4,code *param_5)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10379a3c4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10379a3c8);
        (*pcVar3)();
      }
      uVar4 = 0;
      (*param_5)(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      (*param_5)(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10379a3c0);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 10379a3c8; end: 10379a3e3;  */

void FUN_10379a3c8(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f926d8;
  plVar5 = (long *)&UNK_10dc0b728;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*(code *)0x10379a7a8)();
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10379a3e4; end: 10379a4c7;  */

void FUN_10379a3e4(code *param_1,ulong *param_2,long *param_3)

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



/* Entry: 10379a4c8; end: 10379a507;  */

void FUN_10379a4c8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10379a508; end: 10379a68f;  */

char * FUN_10379a508(undefined8 param_1,char *param_2)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 uStack_50;
  char *pcStack_48;
  char *pcStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  pcVar2 = pcVar4;
  func_0x000107c41010();
  func_0x000107c61180();
  pcVar3 = pcVar2;
  func_0x000107c4a02c();
  func_0x000107c61170(pcVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    func_0x000107c41010();
    func_0x000107c61180();
    pcVar2 = pcVar4;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    func_0x000107c61170(pcVar4);
    if (pcVar2 != (char *)0x0) {
      pcVar4 = pcVar2;
      func_0x000107c5faec();
      func_0x000107c61170(pcVar2);
      uVar1 = (ulong)pcVar4 & 0xffffffffffff;
      if (((ulong)param_2 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)param_2 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) goto LAB_10379a660;
      func_0x000107c6142c(param_2);
    }
    pcVar4 = (char *)0x0;
    func_0x000107c60f58();
    func_0x000107c5fb34();
    if (param_2 == (char *)0x0) {
      pcStack_48 = (char *)0x20646165726854;
      pcStack_40 = (char *)0xe700000000000000;
      uStack_50 = 0;
      func_0x000107c612a4(0,&uStack_50);
      puVar5 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                          PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar5);
      pcVar4 = pcStack_48;
      param_2 = pcStack_40;
    }
  }
  else {
    param_2 = (char *)0xeb00000000646165;
    pcVar4 = (char *)0x726854206e69614d;
  }
LAB_10379a660:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    return (char *)(ulong)(*pcVar4 == *param_2);
  }
  return pcVar4;
}



/* Entry: 10379a690; end: 10379a6a3;  */

bool FUN_10379a690(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10379a6a4; end: 10379a74f;  */

void FUN_10379a6a4(void)

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



/* Entry: 10379a750; end: 10379a7c7;  */

void FUN_10379a750(void)

{
  long unaff_x20;
  
  func_0x00010379c1c8(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10379a7c8; end: 10379aba7;  */

void FUN_10379a7c8(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x20;
  undefined8 *puVar10;
  undefined1 auStack_68 [24];
  
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x20) = param_1;
  uVar3 = 1;
  func_0x000107c60f6c();
  puVar10 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  if (-1 < param_1) {
    if (param_1 != 0) {
      puVar4 = puVar10;
      func_0x000107c61428(puVar10,auStack_68,0x21,0);
      func_0x00010379a7a8();
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        puVar5 = puVar4;
        func_0x000107c613fc(puVar4,0xa0,7);
        *(undefined1 *)(puVar5 + 2) = 0;
        puVar5[4] = 0;
        puVar5[3] = 0;
        puVar5[6] = 0;
        puVar5[5] = 0;
        puVar5[8] = 0;
        puVar5[7] = 0;
        puVar5[10] = 0;
        puVar5[9] = 0;
        puVar5[0xc] = 0;
        puVar5[0xb] = 0;
        puVar5[0xe] = 0;
        puVar5[0xd] = 0;
        puVar5[0x10] = 0;
        puVar5[0xf] = 0;
        puVar5[0x12] = 0;
        puVar5[0x11] = 0;
        puVar5[0x13] = 0;
        puVar7 = puVar8;
        func_0x000107c61550();
        *puVar10 = puVar8;
        if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
           (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              puVar6 = puVar8;
            }
            func_0x000107c60480(puVar6);
          }
          puVar7 = (undefined *)0x0;
          FUN_103799a68(0,puVar6 + 1,1,puVar8);
          *puVar10 = puVar7;
        }
        uVar9 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar9 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_103799a68(puVar8,uVar1 + 1,1,puVar7);
          uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
        *(undefined8 **)(uVar9 + uVar1 * 8 + 0x20) = puVar5;
        *puVar10 = puVar8;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      func_0x000107c614a8(auStack_68);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10379a950);
  (*pcVar2)();
}



/* Entry: 10379aba8; end: 10379b013;  */

void FUN_10379aba8(ulong param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puStack_188;
  undefined1 auStack_170 [72];
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x00010379a950();
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar4;
  if (uVar9 == 0) {
    func_0x000107c6142c(param_1);
    puStack_188 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar17 = 4;
    puVar7 = puVar4;
    puVar12 = puVar4;
    puStack_188 = puVar4;
    do {
      uVar14 = lVar17 - 4;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10379af94);
          (*pcVar3)();
        }
        uVar13 = *(ulong *)(param_1 + lVar17 * 8);
        func_0x000107c6157c(uVar13);
      }
      else {
        uVar13 = uVar14;
        FUN_10379b630(uVar14,param_1);
      }
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10379af90);
        (*pcVar3)();
      }
      uVar14 = lVar17 - 3;
      bVar2 = *(byte *)(uVar13 + 0x10);
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          func_0x000107c61574(uVar13);
        }
        else {
          lVar15 = *(long *)(uVar13 + 0x68);
          if (lVar15 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10379b008);
            (*pcVar3)();
          }
          uVar10 = *(undefined8 *)(uVar13 + 0x60);
          uVar19 = *(undefined8 *)(uVar13 + 0x78);
          uVar18 = *(undefined8 *)(uVar13 + 0x70);
          uVar21 = *(undefined8 *)(uVar13 + 0x88);
          uVar20 = *(undefined8 *)(uVar13 + 0x80);
          func_0x000107c61434(lVar15);
          puVar6 = puStack_188;
          func_0x000107c61558();
          if (((ulong)puVar6 & 1) == 0) {
            plVar1 = (long *)(puStack_188 + 0x10);
            puStack_188 = (undefined *)0x0;
            func_0x000103799e58(0,*plVar1 + 1,1);
          }
          uVar11 = *(ulong *)(puStack_188 + 0x10);
          if (*(ulong *)(puStack_188 + 0x18) >> 1 <= uVar11) {
            puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puStack_188 + 0x18));
            func_0x000103799e58(puVar6,uVar11 + 1,1,puStack_188);
            puStack_188 = puVar6;
          }
          *(ulong *)(puStack_188 + 0x10) = uVar11 + 1;
          *(undefined8 *)(puStack_188 + uVar11 * 0x30 + 0x20) = uVar10;
          *(long *)(puStack_188 + uVar11 * 0x30 + 0x28) = lVar15;
          *(undefined8 *)(puStack_188 + uVar11 * 0x30 + 0x38) = uVar19;
          *(undefined8 *)(puStack_188 + uVar11 * 0x30 + 0x30) = uVar18;
          *(undefined8 *)(puStack_188 + uVar11 * 0x30 + 0x48) = uVar21;
          *(undefined8 *)(puStack_188 + uVar11 * 0x30 + 0x40) = uVar20;
          func_0x000107c61574(uVar13);
        }
      }
      else {
        if (bVar2 == 2) {
          uVar10 = *(undefined8 *)(uVar13 + 0x18);
          lVar15 = *(long *)(uVar13 + 0x20);
          uStack_d8 = *(undefined8 *)(uVar13 + 0x30);
          uStack_e0 = *(undefined8 *)(uVar13 + 0x28);
          uStack_c8 = *(undefined8 *)(uVar13 + 0x40);
          uStack_d0 = *(undefined8 *)(uVar13 + 0x38);
          uStack_b8 = *(undefined8 *)(uVar13 + 0x50);
          uStack_c0 = *(undefined8 *)(uVar13 + 0x48);
          uStack_b0 = *(undefined8 *)(uVar13 + 0x58);
          uStack_a0 = uStack_e0;
          uStack_98 = uStack_d8;
          uStack_90 = uStack_d0;
          uStack_88 = uStack_c8;
          uStack_80 = uStack_c0;
          uStack_78 = uStack_b8;
          uStack_70 = uStack_b0;
          if (lVar15 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10379b014);
            (*pcVar3)();
          }
          uStack_128 = uVar10;
          lStack_120 = lVar15;
          uStack_118 = uStack_e0;
          uStack_110 = uStack_d8;
          uStack_108 = uStack_d0;
          uStack_100 = uStack_c8;
          uStack_f8 = uStack_c0;
          uStack_f0 = uStack_b8;
          uStack_e8 = uStack_b0;
          func_0x00010379b7c8(&uStack_128,auStack_170);
          puVar6 = puVar7;
          func_0x000107c61558();
          if (((ulong)puVar6 & 1) == 0) {
            puVar6 = (undefined *)0x0;
            FUN_103799d34(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
            puVar7 = puVar6;
          }
          uVar11 = *(ulong *)(puVar7 + 0x10);
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar11) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
            FUN_103799d34(puVar7,uVar11 + 1,1);
          }
          *(ulong *)(puVar7 + 0x10) = uVar11 + 1;
          *(undefined8 *)(puVar7 + uVar11 * 0x48 + 0x20) = uVar10;
          *(long *)(puVar7 + uVar11 * 0x48 + 0x28) = lVar15;
          *(undefined8 *)(puVar7 + uVar11 * 0x48 + 0x60) = uStack_70;
          *(undefined8 *)(puVar7 + uVar11 * 0x48 + 0x48) = uStack_88;
          *(undefined8 *)(puVar7 + uVar11 * 0x48 + 0x40) = uStack_90;
          *(undefined8 *)(puVar7 + uVar11 * 0x48 + 0x58) = uStack_78;
          *(undefined8 *)(puVar7 + uVar11 * 0x48 + 0x50) = uStack_80;
          *(undefined8 *)(puVar7 + uVar11 * 0x48 + 0x38) = uStack_98;
          *(undefined8 *)(puVar7 + uVar11 * 0x48 + 0x30) = uStack_a0;
        }
        else {
          puVar6 = puVar4;
          if (bVar2 == 3) {
            lVar15 = *(long *)(uVar13 + 0x90);
            if (lVar15 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10379b010);
              (*pcVar3)();
            }
            func_0x000107c6157c(lVar15);
            puVar4 = puVar12;
            func_0x000107c61550();
            if ((((int)puVar4 == 0) || ((long)puVar12 < 0)) ||
               (puVar5 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar12 >> 0x3e == 0) {
                puVar4 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar4 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar12) {
                  puVar4 = puVar12;
                }
                func_0x000107c60480(puVar4);
              }
              puVar5 = (undefined *)0x0;
              FUN_103799bcc(0,puVar4 + 1,1,puVar12);
            }
            uVar8 = (ulong)puVar5 & 0xffffffffffffff8;
            uVar11 = *(ulong *)(uVar8 + 0x10);
            lVar16 = uVar11 + 1;
            puVar12 = puVar5;
            if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar11) {
              puVar4 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
              FUN_103799bcc(puVar4,lVar16,1,puVar5);
              puVar12 = puVar4;
LAB_10379af0c:
              uVar8 = (ulong)puVar4 & 0xffffffffffffff8;
            }
          }
          else {
            lVar15 = *(long *)(uVar13 + 0x98);
            if (lVar15 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10379b00c);
              (*pcVar3)();
            }
            func_0x000107c61174();
            puVar5 = puVar4;
            func_0x000107c61550();
            if ((((int)puVar5 == 0) || ((long)puVar4 < 0)) || (((ulong)puVar4 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar4 >> 0x3e == 0) {
                puVar5 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar5 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar4) {
                  puVar5 = puVar4;
                }
                func_0x000107c60480(puVar5);
              }
              puVar6 = (undefined *)0x0;
              FUN_103799a84(0,puVar5 + 1,1,puVar4);
            }
            uVar8 = (ulong)puVar6 & 0xffffffffffffff8;
            uVar11 = *(ulong *)(uVar8 + 0x10);
            lVar16 = uVar11 + 1;
            if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar11) {
              puVar4 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
              FUN_103799a84(puVar4,lVar16,1,puVar6);
              puVar6 = puVar4;
              goto LAB_10379af0c;
            }
          }
          *(long *)(uVar8 + 0x10) = lVar16;
          *(long *)(uVar8 + uVar11 * 8 + 0x20) = lVar15;
          puVar4 = puVar6;
        }
        func_0x000107c61574(uVar13);
      }
      lVar17 = lVar17 + 1;
    } while (uVar14 != uVar9);
    func_0x000107c6142c(param_1);
  }
  lVar17 = 0;
  func_0x0001037a836c();
  func_0x000107c613fc();
  *(undefined **)(lVar17 + 0x10) = puStack_188;
  *(undefined **)(lVar17 + 0x18) = puVar7;
  *(undefined **)(lVar17 + 0x20) = puVar12;
  *(undefined **)(lVar17 + 0x28) = puVar4;
  return;
}



/* Entry: 10379b014; end: 10379b05f;  */

void FUN_10379b014(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10379b060; end: 10379b1d7;  */

undefined1  [16] FUN_10379b060(void)

{
  return ZEXT816(0x110692a78);
}



/* Entry: 10379b1d8; end: 10379b217;  */

void FUN_10379b1d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f92870 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0b844;
  func_0x000107c61520(&UNK_10dc0b844,&UNK_110692b10);
  puRam0000000112f92870 = puVar1;
  return;
}



/* Entry: 10379b218; end: 10379b327;  */

void FUN_10379b218(undefined8 param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [48];
  
  uVar1 = *unaff_x20;
  func_0x00010379c158(param_1,auStack_50);
  func_0x00010379bc48(uVar1,param_1);
  func_0x00010379c194(param_1);
  return;
}



/* Entry: 10379b328; end: 10379b34b;  */

void FUN_10379b328(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_103799a84(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 10379b34c; end: 10379b3c7;  */

void FUN_10379b34c(code *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    (*param_1)(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 10379b3c8; end: 10379b3df;  */

/* WARNING: Removing unreachable block (ram,0x000103799ab8) */
/* WARNING: Removing unreachable block (ram,0x000103799adc) */
/* WARNING: Removing unreachable block (ram,0x000103799ac0) */
/* WARNING: Removing unreachable block (ram,0x000103799bc8) */
/* WARNING: Removing unreachable block (ram,0x000103799acc) */
/* WARNING: Removing unreachable block (ram,0x000103799ad4) */
/* WARNING: Removing unreachable block (ram,0x000103799b38) */
/* WARNING: Removing unreachable block (ram,0x000103799b4c) */
/* WARNING: Removing unreachable block (ram,0x000103799b58) */
/* WARNING: Removing unreachable block (ram,0x000103799b60) */

ulong FUN_10379b3c8(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_103799f74(uVar4,uVar3,0x112f926c8,&PTR_PTR_1126ded70,0x112f926d0,&UNK_10dc0b720);
  if (-1 < (long)uVar4) {
    func_0x00010379a1a8(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103799bc8);
  (*pcVar1)();
}



/* Entry: 10379b3e0; end: 10379b443;  */

void FUN_10379b3e0(ulong param_1,code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  
  if (param_1 >> 0x3e == 0) {
    uVar1 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_1;
    }
    func_0x000107c60480(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010379b420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0,uVar1,0,param_1);
  return;
}



/* Entry: 10379b444; end: 10379b46b;  */

/* WARNING: Removing unreachable block (ram,0x000103799d50) */
/* WARNING: Removing unreachable block (ram,0x000103799d60) */
/* WARNING: Removing unreachable block (ram,0x000103799e54) */
/* WARNING: Removing unreachable block (ram,0x000103799d6c) */
/* WARNING: Removing unreachable block (ram,0x000103799d74) */
/* WARNING: Removing unreachable block (ram,0x000103799e00) */
/* WARNING: Removing unreachable block (ram,0x000103799e0c) */
/* WARNING: Removing unreachable block (ram,0x000103799e10) */
/* WARNING: Removing unreachable block (ram,0x000103799e14) */
/* WARNING: Removing unreachable block (ram,0x000103799e20) */

undefined * FUN_10379b444(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar4) {
    lVar1 = lVar4;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar2 = (undefined *)0x112f926b8;
    func_0x0001000285a8(0x112f926b8,&UNK_10dc0b710);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(long *)(puVar2 + 0x10) = lVar4;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x48) * 2;
  }
  func_0x000107c6140c(puVar2 + 0x20,param_1 + 0x20,lVar4,&UNK_110693218);
  func_0x000107c6142c(param_1);
  return puVar2;
}



/* Entry: 10379b46c; end: 10379b62f;  */

ulong FUN_10379b46c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379b550);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379b554);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ad6f8;
    func_0x000107c61168(PTR_PTR_1126ad6f8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126ad6f8;
    func_0x000107c61168(PTR_PTR_1126ad6f8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x00010379c1f8(0,0x112f926e0,&PTR_PTR_1126ad6f8);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10379b630);
  (*pcVar2)();
}



/* Entry: 10379b630; end: 10379b803;  */

ulong FUN_10379b630(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379b6fc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379b700);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x00010379a7a8();
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar4 = param_1;
    func_0x00010379a7a8();
    uVar5 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x746e456563617254,0xea00000000007972);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10379b7c8);
  (*pcVar2)();
}



/* Entry: 10379b804; end: 10379b9c7;  */

ulong FUN_10379b804(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379b8e8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379b8ec);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ded70;
    func_0x000107c61168(PTR_PTR_1126ded70);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126ded70;
    func_0x000107c61168(PTR_PTR_1126ded70);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x00010379c1f8(0,0x112f926c8,&PTR_PTR_1126ded70);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10379b9c8);
  (*pcVar2)();
}



/* Entry: 10379b9c8; end: 10379bb6f;  */

ulong FUN_10379b9c8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379ba9c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379baa0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001037a7e98(0);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = 0;
    func_0x0001037a7e98(0);
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x527265746e756f43,0xed000064726f6365);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10379bb70);
  (*pcVar2)();
}



/* Entry: 10379bb70; end: 10379c0db;  */

undefined * FUN_10379bb70(undefined *param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10379bc48);
    (*pcVar2)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = param_1;
    if (0 < lVar1) {
      FUN_10379a3c8();
      func_0x000107c613fc();
      puVar3 = param_1;
      func_0x000107c610a4();
      puVar4 = puVar3 + -0x19;
      if (0x1f < (long)puVar3) {
        puVar4 = puVar3 + -0x20;
      }
      *(long *)(param_1 + 0x10) = lVar1;
      *(ulong *)(param_1 + 0x18) = ((long)puVar4 >> 3) << 1 | 1;
      puVar4 = param_1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379bc44);
      (*pcVar2)();
    }
    func_0x00010379a7a8();
    func_0x000107c6140c(puVar4 + 0x20,param_2 + param_3 * 8,lVar1,puVar3);
  }
  return puVar4;
}



/* Entry: 10379c0dc; end: 10379c237;  */

undefined8 FUN_10379c0dc(undefined8 param_1)

{
  (*(code *)(undefined *)0x1037a811c)();
  return param_1;
}



/* Entry: 10379c238; end: 10379c24b;  */

void FUN_10379c238(void)

{
  puRam0000000112f92930 = PTR___swiftEmptyArrayStorage_11034f1c8;
  return;
}



/* Entry: 10379c24c; end: 10379c273;  */

void FUN_10379c24c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puRam0000000112f92888 = puVar1;
  return;
}



/* Entry: 10379c274; end: 10379c283;  */

void FUN_10379c274(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 10379c284; end: 10379c5c3;  */

undefined8 **** FUN_10379c284(long param_1,ulong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  undefined8 ***pppuVar8;
  int iVar9;
  ulong uVar10;
  undefined8 ****unaff_x20;
  int iVar11;
  undefined8 ****ppppuVar12;
  long lVar13;
  uint uVar14;
  byte abStack_7e [4];
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = (uint)(param_2 >> 0x20);
  uVar14 = uVar2 >> 0x1e;
  iVar11 = (int)param_1;
  ppppuVar12 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar2 >> 0x1e < 2) {
    if (uVar14 == 0) {
      uVar10 = param_2 >> 0x30 & 0xff;
    }
    else {
      iVar9 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar9,iVar11)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10379c5b8);
        (*pcVar4)();
      }
      uVar10 = (ulong)(iVar9 - iVar11);
    }
  }
  else {
    if (uVar14 != 2) goto LAB_10379c558;
    uVar10 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10379c2f4);
      (*pcVar4)();
    }
  }
  if (uVar10 != 0) {
    pppuStack_70 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
    pppuVar5 = (undefined8 ***)0x0;
    func_0x000100403514(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
    if (uVar2 >> 0x1e == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (long)iVar11;
      if (uVar14 == 2) {
        lVar13 = *(long *)(param_1 + 0x10);
      }
    }
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10379c5b4);
      (*pcVar4)();
    }
    do {
      pppuVar3 = pppuStack_70;
      if (uVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10379c598);
        (*pcVar4)();
      }
      if (uVar14 == 2) {
        if (lVar13 < *(long *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10379c59c);
          (*pcVar4)();
        }
        if (*(long *)(param_1 + 0x18) <= lVar13) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10379c5a8);
          (*pcVar4)();
        }
        func_0x000107c5ec30();
        if (pppuVar5 == (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10379c5c0);
          (*pcVar4)();
        }
        pppuVar6 = pppuVar5;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar13,(long)pppuVar6)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10379c5b0);
          (*pcVar4)();
        }
LAB_10379c418:
        bVar1 = *(byte *)((long)pppuVar5 + (lVar13 - (long)pppuVar6));
      }
      else {
        if (uVar2 >> 0x1e == 1) {
          if ((lVar13 < iVar11) || (param_1 >> 0x20 <= lVar13)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10379c5a4);
            (*pcVar4)();
          }
          func_0x000107c5ec30();
          if (pppuVar5 == (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10379c5bc);
            (*pcVar4)();
          }
          pppuVar6 = pppuVar5;
          func_0x000107c5ec3c();
          if (SBORROW8(lVar13,(long)pppuVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10379c5ac);
            (*pcVar4)();
          }
          goto LAB_10379c418;
        }
        if ((long)(param_2 >> 0x30 & 0xff) <= lVar13) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10379c5a0);
          (*pcVar4)();
        }
        abStack_7e[0] = (byte)param_1;
        abStack_7e[1] = (char)((ulong)param_1 >> 8);
        abStack_7e[2] = (char)((ulong)param_1 >> 0x10);
        abStack_7e[3] = (char)((ulong)param_1 >> 0x18);
        uStack_7a = (char)((ulong)param_1 >> 0x20);
        uStack_79 = (char)((ulong)param_1 >> 0x28);
        uStack_78 = (char)((ulong)param_1 >> 0x30);
        uStack_77 = (char)((ulong)param_1 >> 0x38);
        uStack_76 = (char)param_2;
        uStack_75 = (char)(param_2 >> 8);
        uStack_74 = (char)(param_2 >> 0x10);
        uStack_73 = (char)(param_2 >> 0x18);
        uStack_72 = (char)(param_2 >> 0x20);
        uStack_71 = (char)(param_2 >> 0x28);
        bVar1 = abStack_7e[lVar13];
      }
      unaff_x20 = (undefined8 ****)(ulong)bVar1;
      lVar7 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      *(undefined **)(lVar7 + 0x38) = PTR___ss5UInt8VN_11034eef8;
      *(undefined **)(lVar7 + 0x40) = PTR___ss5UInt8Vs7CVarArgsWP_11034ef10;
      *(byte *)(lVar7 + 0x20) = bVar1;
      pppuVar5 = (undefined8 ***)0x78323025;
      pppuVar8 = (undefined8 ***)0xe400000000000000;
      func_0x000107c5fb00(0x78323025,0xe400000000000000,lVar7);
      pppuStack_70 = pppuVar3;
      pppuVar6 = (undefined8 ***)pppuVar3[2];
      if ((undefined8 ***)((ulong)pppuVar3[3] >> 1) <= pppuVar6) {
        unaff_x20 = &pppuStack_70;
        func_0x000100403514((undefined8 ***)0x1 < pppuVar3[3],(undefined8 ***)((long)pppuVar6 + 1U),
                            1);
      }
      pppuStack_70[2] = (undefined8 ***)((long)pppuVar6 + 1U);
      pppuStack_70[(long)pppuVar6 * 2 + 4] = pppuVar5;
      pppuStack_70[(long)pppuVar6 * 2 + 5] = pppuVar8;
      lVar13 = lVar13 + 1;
      uVar10 = uVar10 - 1;
      ppppuVar12 = (undefined8 ****)pppuStack_70;
    } while (uVar10 != 0);
  }
LAB_10379c558:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_deallocClassInstance_11034f290)(unaff_x20,0x10,7);
    return unaff_x20;
  }
  return ppppuVar12;
}



/* Entry: 10379c5c4; end: 10379c5d3;  */

void FUN_10379c5c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10379c5d4; end: 10379c963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10379c5d4(ulong param_1,undefined *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  ulong auStack_68 [2];
  char cStack_51;
  
  uVar10 = *unaff_x20;
  if (lRam0000000112f92608 != -1) {
    param_2 = &UNK_100996768;
    func_0x000107c61568(0x112f92608,&UNK_100996768);
  }
  puVar2 = (undefined *)(lRam000000011380bb38 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined *)0x0) {
    auStack_68[0] = auStack_68[0] & 0xffffffffffffff00;
    if (lRam0000000112f92880 != -1) {
      func_0x000107c61568(0x112f92880,FUN_10379c24c);
    }
    uVar9 = uRam0000000112f92888;
    func_0x000107c4b940(uRam0000000112f92888);
    FUN_10379c964(&cStack_51,auStack_68,param_1,uVar10);
    func_0x000107c5d278(uVar9);
    if ((char)auStack_68[0] == '\x01') {
      FUN_10379caf0(param_1);
      return;
    }
    func_0x0001037a954c(0);
    if (cStack_51 != '\0') {
      FUN_1037a8d08();
      return;
    }
    FUN_1037a8f50(7);
    return;
  }
  uVar10 = *(undefined8 *)(puVar2 + _DAT_1130838d0);
  func_0x000107c6157c(uVar10);
  func_0x0001000d224c(auStack_68);
  func_0x000107c61574(uVar10);
  uVar1 = auStack_68[0];
  if (auStack_68[0] == 0) {
    func_0x0001037a954c(0);
    FUN_1037a8f50(8);
    goto LAB_10379c914;
  }
  puVar3 = PTR_PTR_1126e1530;
  func_0x000107c610f8(PTR_PTR_1126e1530);
  func_0x000107c453e4();
  uVar4 = param_1;
  func_0x000107c44c68();
  func_0x000107c61180();
  if (uVar4 == 0) {
LAB_10379c7c4:
    uVar10 = 0;
    uVar9 = 0xe000000000000000;
  }
  else {
    uVar5 = uVar4;
    func_0x000107c52060();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    if (uVar5 == 0) goto LAB_10379c7c4;
    uVar4 = uVar5;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar5);
    uVar5 = uVar4;
    FUN_10379c284(uVar4,param_2);
    func_0x00010006c090(uVar4,param_2);
    uVar6 = 0x112d38270;
    auStack_68[0] = uVar5;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar7 = uVar6;
    func_0x00010011d734();
    uVar10 = 0;
    uVar9 = 0xe000000000000000;
    func_0x000107c5fa80(0,0xe000000000000000,uVar6,uVar7);
    func_0x000107c6142c(uVar5);
  }
  uVar6 = uVar9;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar9);
  func_0x000107c59fbc(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c41214();
  func_0x000107c61180();
  if (param_1 == 0) {
LAB_10379c874:
    func_0x000107c59500(puVar3);
  }
  else {
    uVar4 = param_1;
    func_0x000107c51760();
    func_0x000107c61180();
    if (uVar4 == 0) {
      func_0x000107c61170(param_1);
      goto LAB_10379c874;
    }
    uVar5 = uVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar4);
    uVar4 = uVar5;
    func_0x000107c5ee20(uVar5,uVar6);
    func_0x000107c53718(puVar3);
    func_0x000107c61170(uVar4);
    func_0x00010006c090(uVar5,uVar6);
    func_0x000107c61170(param_1);
  }
  puVar8 = PTR_PTR_1126b86e8;
  func_0x000107c610f8(PTR_PTR_1126b86e8);
  func_0x000107c453e4();
  func_0x000107c59fb8();
  uVar4 = uVar1;
  func_0x000107c61150(uVar1,PTR_s_respondsToSelector__11262c7e0,PTR_s_streamEvent__112674b68);
  if ((uVar4 & 1) == 0) {
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(uVar1);
  }
  else {
    func_0x000107c615f0(uVar1);
    func_0x000107c61174(puVar8);
    func_0x000107c5c124(uVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c615ec(uVar1,2);
    func_0x000107c61170(puVar8);
  }
  func_0x000107c61170(puVar8);
  puVar2 = puVar3;
LAB_10379c914:
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 10379c964; end: 10379caef;  */

void FUN_10379c964(undefined1 *param_1,undefined1 *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (lRam0000000112f92608 != -1) {
    func_0x000107c61568(0x112f92608,&UNK_100996768);
  }
  lVar1 = lRam000000011380bb38 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    if (lRam0000000112f92928 != -1) {
      func_0x000107c61568(0x112f92928,FUN_10379c238);
    }
    func_0x000107c61428(0x112f92930,auStack_48,0,0);
    if (uRam0000000112f92930 >> 0x3e == 0) {
      uVar2 = *(ulong *)((uRam0000000112f92930 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar2 = uRam0000000112f92930 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uRam0000000112f92930) {
        uVar2 = uRam0000000112f92930;
      }
      func_0x000107c60480();
    }
    if ((long)uVar2 < 5) {
      func_0x000107c61428(0x112f92930,auStack_60,0x21,0);
      func_0x00010379b340();
      uVar4 = uRam0000000112f92930 & 0xffffffffffffff8;
      uVar2 = *(ulong *)(uVar4 + 0x10);
      uVar3 = uRam0000000112f92930;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar2) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_103799920(uVar3,uVar2 + 1,1);
        uVar4 = uVar3 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
      *(undefined8 *)(uVar4 + uVar2 * 8 + 0x20) = param_3;
      uRam0000000112f92930 = uVar3;
      func_0x000107c614a8(auStack_60);
      *param_1 = 1;
      func_0x000107c61174(param_3);
      return;
    }
  }
  else {
    func_0x000107c61170();
    *param_2 = 1;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10379caf0; end: 10379cdf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10379caf0(ulong param_1,undefined *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uStack_58;
  
  if (lRam0000000112f92608 != -1) {
    param_2 = &UNK_100996768;
    func_0x000107c61568(0x112f92608,&UNK_100996768);
  }
  puVar2 = (undefined *)(lRam000000011380bb38 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined *)0x0) {
    func_0x0001037a954c();
    FUN_1037a8f50(7);
    return;
  }
  uVar10 = *(undefined8 *)(puVar2 + _DAT_1130838d0);
  func_0x000107c6157c(uVar10);
  func_0x0001000d224c(&uStack_58);
  func_0x000107c61574(uVar10);
  uVar1 = uStack_58;
  if (uStack_58 == 0) {
    func_0x0001037a954c(0);
    FUN_1037a8f50(8);
    goto LAB_10379cdbc;
  }
  puVar3 = PTR_PTR_1126e1530;
  func_0x000107c610f8(PTR_PTR_1126e1530);
  func_0x000107c453e4();
  uVar4 = param_1;
  func_0x000107c44c68();
  func_0x000107c61180();
  if (uVar4 == 0) {
LAB_10379cc6c:
    uVar10 = 0;
    uVar9 = 0xe000000000000000;
  }
  else {
    uVar5 = uVar4;
    func_0x000107c52060();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    if (uVar5 == 0) goto LAB_10379cc6c;
    uVar4 = uVar5;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar5);
    uVar5 = uVar4;
    FUN_10379c284(uVar4,param_2);
    func_0x00010006c090(uVar4,param_2);
    uVar6 = 0x112d38270;
    uStack_58 = uVar5;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar7 = uVar6;
    func_0x00010011d734();
    uVar10 = 0;
    uVar9 = 0xe000000000000000;
    func_0x000107c5fa80(0,0xe000000000000000,uVar6,uVar7);
    func_0x000107c6142c(uVar5);
  }
  uVar6 = uVar9;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar9);
  func_0x000107c59fbc(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c41214();
  func_0x000107c61180();
  if (param_1 == 0) {
LAB_10379cd1c:
    func_0x000107c59500(puVar3);
  }
  else {
    uVar4 = param_1;
    func_0x000107c51760();
    func_0x000107c61180();
    if (uVar4 == 0) {
      func_0x000107c61170(param_1);
      goto LAB_10379cd1c;
    }
    uVar5 = uVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar4);
    uVar4 = uVar5;
    func_0x000107c5ee20(uVar5,uVar6);
    func_0x000107c53718(puVar3);
    func_0x000107c61170(uVar4);
    func_0x00010006c090(uVar5,uVar6);
    func_0x000107c61170(param_1);
  }
  puVar8 = PTR_PTR_1126b86e8;
  func_0x000107c610f8(PTR_PTR_1126b86e8);
  func_0x000107c453e4();
  func_0x000107c59fb8();
  uVar4 = uVar1;
  func_0x000107c61150(uVar1,PTR_s_respondsToSelector__11262c7e0,PTR_s_streamEvent__112674b68);
  if ((uVar4 & 1) == 0) {
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(uVar1);
  }
  else {
    func_0x000107c615f0(uVar1);
    func_0x000107c61174(puVar8);
    func_0x000107c5c124(uVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c615ec(uVar1,2);
    func_0x000107c61170(puVar8);
  }
  func_0x000107c61170(puVar8);
  puVar2 = puVar3;
LAB_10379cdbc:
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 10379cdf4; end: 10379cf3f;  */

void FUN_10379cdf4(void)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  if (lRam0000000112f92880 != -1) {
    func_0x000107c61568(0x112f92880,FUN_10379c24c);
  }
  uVar1 = uRam0000000112f92888;
  func_0x000107c4b940(uRam0000000112f92888);
  if (lRam0000000112f92928 != -1) {
    func_0x000107c61568(0x112f92928,FUN_10379c238);
  }
  func_0x000107c61428(0x112f92930,auStack_58,1,0);
  uVar2 = (ulong)puRam0000000112f92930;
  puRam0000000112f92930 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5d278(uVar1);
  if (uVar2 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar5 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10379cf40);
      (*pcVar3)();
    }
    uVar6 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar2 + uVar6 * 8 + 0x20);
        func_0x000107c61174(uVar4);
      }
      else {
        uVar4 = uVar6;
        FUN_10379b46c(uVar6,uVar2);
      }
      uVar6 = uVar6 + 1;
      FUN_10379caf0();
      func_0x000107c61170(uVar4);
    } while (uVar5 != uVar6);
  }
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 10379cf40; end: 10379cf5f;  */

void FUN_10379cf40(void)

{
  func_0x000107c61168(&PTR_PTR_112f928d0);
  return;
}



/* Entry: 10379cf60; end: 10379d09b;  */

long FUN_10379cf60(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  func_0x00010379d61c(unaff_x20 + 0x10,auStack_58);
  func_0x0001000a8868(auStack_58,lStack_40);
  lVar1 = lStack_40;
  (**(code **)(lStack_38 + 0x28))(lStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0x21,0);
  FUN_10379d09c(lVar1 + 0x10,0x10379b458,FUN_10379e868,&UNK_1106930f8,FUN_10379e2c4);
  func_0x000107c614a8(auStack_58);
  func_0x000107c61428(lVar1 + 0x18,auStack_58,0x21,0);
  FUN_10379d09c(lVar1 + 0x18,FUN_10379b444,FUN_10379e7b0,&UNK_110693218,FUN_10379dea0);
  func_0x000107c614a8(auStack_58);
  func_0x000107c61428(lVar1 + 0x20,auStack_58,0x21,0);
  FUN_10379d1b0(lVar1 + 0x20);
  func_0x000107c614a8(auStack_58);
  func_0x000107c61428(lVar1 + 0x28,auStack_58,0x21,0);
  FUN_10379d2fc(lVar1 + 0x28);
  func_0x000107c614a8(auStack_58);
  return lVar1;
}



/* Entry: 10379d09c; end: 10379d1af;  */

void FUN_10379d09c(ulong *param_1,code *param_2,code *param_3,undefined8 param_4,code *param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  ulong uStack_58;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    (*param_2)();
  }
  uVar5 = *(ulong *)(uVar3 + 0x10);
  lStack_60 = uVar3 + 0x20;
  uVar1 = uVar5;
  uStack_58 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar4 = (undefined *)(uVar5 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      puVar2 = puVar4;
      func_0x000107c60380(puVar4,param_4);
      *(undefined **)(puVar2 + 0x10) = puVar4;
    }
    puStack_78 = puVar2 + 0x20;
    puStack_70 = puVar4;
    (*param_5)(&puStack_78,auStack_68,&lStack_60,uVar1);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar5 != 0) {
    (*param_3)(0,uVar5,1,&lStack_60);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 10379d1b0; end: 10379d2fb;  */

void FUN_10379d1b0(ulong *param_1)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  ulong uStack_48;
  
  uVar12 = *param_1;
  uVar6 = uVar12;
  func_0x000107c61550();
  if ((((int)uVar6 == 0) || ((long)uVar12 < 0)) || ((uVar12 >> 0x3e & 1) != 0)) {
    func_0x00010379b3d4();
  }
  uVar13 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
  plVar1 = (long *)((uVar12 & 0xffffffffffffff8) + 0x20);
  uVar6 = uVar13;
  plStack_50 = plVar1;
  uStack_48 = uVar13;
  func_0x000107c60574();
  if ((long)uVar6 < (long)uVar13) {
    puVar14 = (undefined *)(uVar13 >> 1);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar13) {
      uVar3 = 0;
      func_0x0001037a7e98(0);
      puVar4 = puVar14;
      func_0x000107c60380(puVar14,uVar3);
      *(undefined **)(puVar4 + 0x10) = puVar14;
    }
    puStack_68 = puVar4 + 0x20;
    puStack_60 = puVar14;
    FUN_10379db08(&puStack_68,auStack_58,&plStack_50,uVar6);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    func_0x000107c61574(puVar4);
  }
  else if ((uVar13 != 0) && (uVar13 != 1)) {
    lVar5 = -1;
    uVar6 = 1;
    plVar7 = plVar1;
    do {
      lVar8 = plVar1[uVar6];
      lVar9 = lVar5;
      plVar10 = plVar7;
      do {
        lVar11 = *plVar10;
        if (*(long *)(lVar11 + 0x28) <= *(long *)(lVar8 + 0x28)) break;
        *plVar10 = lVar8;
        plVar10[1] = lVar11;
        bVar2 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        plVar10 = plVar10 + -1;
      } while (bVar2);
      uVar6 = uVar6 + 1;
      plVar7 = plVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (uVar6 != uVar13);
  }
  *param_1 = uVar12;
  return;
}



/* Entry: 10379d2fc; end: 10379d407;  */

void FUN_10379d2fc(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61550();
  if ((((int)uVar1 == 0) || ((long)uVar4 < 0)) || ((uVar4 >> 0x3e & 1) != 0)) {
    FUN_10379b3c8();
  }
  uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  lStack_50 = (uVar4 & 0xffffffffffffff8) + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      uVar2 = 0;
      FUN_10379fa68(0);
      puVar3 = puVar6;
      func_0x000107c60380(puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_10379d660(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_10379e6bc(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 10379d408; end: 10379d44b;  */

void FUN_10379d408(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10379d44c; end: 10379d5fb;  */

void FUN_10379d44c(undefined8 param_1)

{
  long *unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x00010379d61c(*unaff_x20 + 0x10,auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 8))(param_1,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 10379d5fc; end: 10379d65f;  */

void FUN_10379d5fc(void)

{
  FUN_10379cf60();
  return;
}



/* Entry: 10379d660; end: 10379db07;  */

void FUN_10379d660(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  long unaff_x21;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar18 = param_3[1];
  if (0 < lVar18) {
    lVar11 = 0;
    do {
      lVar3 = lVar11 + 1;
      if (lVar3 < lVar18) {
        lVar3 = *(long *)(*param_3 + lVar3 * 8);
        plVar16 = (long *)(*param_3 + lVar11 * 8);
        plVar21 = plVar16 + 2;
        lVar20 = *plVar16;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar14 = lVar3;
        func_0x000107c5ca68();
        lVar10 = lVar20;
        func_0x000107c5ca68();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar20);
        lVar20 = lVar11 + 2;
        do {
          lVar6 = lVar20;
          lVar3 = lVar18;
          if (lVar18 == lVar6) break;
          lVar3 = plVar21[-1];
          lVar20 = *plVar21;
          func_0x000107c61174();
          func_0x000107c61174();
          lVar4 = lVar20;
          func_0x000107c5ca68();
          lVar5 = lVar3;
          func_0x000107c5ca68();
          func_0x000107c61170(lVar20);
          func_0x000107c61170(lVar3);
          plVar21 = plVar21 + 1;
          lVar20 = lVar6 + 1;
          lVar3 = lVar6;
        } while (lVar14 < lVar10 != lVar5 <= lVar4);
        if (lVar14 < lVar10) {
          if (lVar3 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10379dadc);
            (*pcVar1)();
          }
          if (lVar11 < lVar3) {
            lVar10 = *param_3;
            puVar12 = (undefined8 *)(lVar10 + lVar3 * 8);
            puVar13 = (undefined8 *)(lVar10 + lVar11 * 8);
            lVar14 = lVar3;
            lVar18 = lVar11;
            do {
              puVar12 = puVar12 + -1;
              lVar14 = lVar14 + -1;
              if (lVar18 != lVar14) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10379dafc);
                  (*pcVar1)();
                }
                uVar15 = *puVar13;
                *puVar13 = *puVar12;
                *puVar12 = uVar15;
              }
              lVar18 = lVar18 + 1;
              puVar13 = puVar13 + 1;
            } while (lVar18 < lVar14);
          }
        }
      }
      lVar18 = param_3[1];
      lVar14 = lVar3;
      if (lVar3 < lVar18) {
        if (SBORROW8(lVar3,lVar11)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10379dad8);
          (*pcVar1)();
        }
        if (lVar3 - lVar11 < param_4) {
          if (SCARRY8(lVar11,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10379dae0);
            (*pcVar1)();
          }
          lVar10 = lVar11 + param_4;
          if (lVar18 <= lVar11 + param_4) {
            lVar10 = lVar18;
          }
          if (lVar10 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10379dae4);
            (*pcVar1)();
          }
          if (lVar3 != lVar10) {
            lVar20 = *param_3;
            plVar21 = (long *)(lVar20 + lVar3 * 8 + -8);
            lVar18 = lVar11 - lVar3;
            do {
              lVar6 = *(long *)(lVar20 + lVar3 * 8);
              plVar16 = plVar21;
              lVar14 = lVar18;
              do {
                lVar19 = *plVar16;
                func_0x000107c61174();
                func_0x000107c61174();
                lVar4 = lVar6;
                func_0x000107c5ca68();
                lVar5 = lVar19;
                func_0x000107c5ca68();
                func_0x000107c61170(lVar6);
                func_0x000107c61170(lVar19);
                if (lVar5 <= lVar4) break;
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10379dae8);
                  (*pcVar1)();
                }
                lVar4 = *plVar16;
                lVar6 = plVar16[1];
                *plVar16 = lVar6;
                plVar16[1] = lVar4;
                bVar2 = lVar14 != -1;
                lVar14 = lVar14 + 1;
                plVar16 = plVar16 + -1;
              } while (bVar2);
              lVar3 = lVar3 + 1;
              plVar21 = plVar21 + 1;
              lVar18 = lVar18 + -1;
              lVar14 = lVar10;
            } while (lVar3 != lVar10);
          }
        }
      }
      puVar9 = puStack_58;
      if (lVar14 < lVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10379dacc);
        (*pcVar1)();
      }
      puVar7 = puStack_58;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar17 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar17) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000a91e0(puVar9,uVar17 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar17 + 1;
      *(long *)(puVar9 + uVar17 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar9 + uVar17 * 0x10 + 0x28) = lVar14;
      puStack_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10379db00);
        (*pcVar1)();
      }
      FUN_10379e900(&puStack_58,*param_1,param_3,FUN_10379f058);
      puVar9 = puStack_58;
      if (unaff_x21 != 0) goto LAB_10379da9c;
      lVar18 = param_3[1];
      lVar11 = lVar14;
    } while (lVar14 < lVar18);
  }
  puVar9 = puStack_58;
  lVar18 = *param_1;
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10379db08);
    (*pcVar1)();
  }
  puVar7 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar17 = *(ulong *)(puVar9 + 0x10);
  while (puStack_58 = puVar9, 1 < uVar17) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10379db04);
      (*pcVar1)();
    }
    lVar10 = uVar17 - 1;
    lVar14 = *(long *)(puVar9 + uVar17 * 0x10);
    lVar3 = *(long *)(puVar9 + lVar10 * 0x10 + 0x28);
    FUN_10379f058(lVar11 + lVar14 * 8,lVar11 + *(long *)(puVar9 + lVar10 * 0x10 + 0x20) * 8,
                  lVar11 + lVar3 * 8,lVar18);
    if (unaff_x21 != 0) break;
    if (lVar3 < lVar14) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10379dad0);
      (*pcVar1)();
    }
    puVar7 = puVar9;
    func_0x000107c61558();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar17 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10379dad4);
      (*pcVar1)();
    }
    *(long *)(puVar9 + uVar17 * 0x10) = lVar14;
    *(long *)((long)(puVar9 + uVar17 * 0x10) + 8) = lVar3;
    puStack_58 = puVar9;
    func_0x0001000a97cc(lVar10);
    puVar9 = puStack_58;
    uVar17 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_10379da9c:
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 10379db08; end: 10379de9f;  */

void FUN_10379db08(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  long unaff_x21;
  ulong *puVar22;
  ulong uVar23;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = param_3[1];
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      puVar6 = puStack_58;
      lVar21 = lVar9 + 1;
      if (lVar21 < lVar7) {
        lVar10 = *param_3;
        lVar12 = *(long *)(*(long *)(lVar10 + lVar21 * 8) + 0x28);
        lVar15 = *(long *)(*(long *)(lVar10 + lVar9 * 8) + 0x28);
        lVar16 = lVar9 + 2;
        lVar18 = lVar12;
        do {
          lVar17 = lVar16;
          lVar21 = lVar7;
          if (lVar7 == lVar17) break;
          lVar21 = *(long *)(*(long *)(lVar10 + lVar17 * 8) + 0x28);
          bVar3 = lVar18 <= lVar21;
          lVar16 = lVar17 + 1;
          lVar18 = lVar21;
          lVar21 = lVar17;
        } while (lVar12 < lVar15 != bVar3);
        if (lVar12 < lVar15) {
          if (lVar21 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10379de74);
            (*pcVar2)();
          }
          if (lVar9 < lVar21) {
            puVar8 = (undefined8 *)(lVar10 + lVar21 * 8);
            puVar13 = (undefined8 *)(lVar10 + lVar9 * 8);
            lVar16 = lVar21;
            lVar7 = lVar9;
            do {
              puVar8 = puVar8 + -1;
              lVar16 = lVar16 + -1;
              if (lVar7 != lVar16) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10379de94);
                  (*pcVar2)();
                }
                uVar19 = *puVar13;
                *puVar13 = *puVar8;
                *puVar8 = uVar19;
              }
              lVar7 = lVar7 + 1;
              puVar13 = puVar13 + 1;
            } while (lVar7 < lVar16);
            lVar7 = param_3[1];
          }
        }
      }
      lVar16 = lVar21;
      if (lVar21 < lVar7) {
        if (SBORROW8(lVar21,lVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10379de70);
          (*pcVar2)();
        }
        if (lVar21 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10379de78);
            (*pcVar2)();
          }
          lVar18 = lVar9 + param_4;
          if (lVar7 <= lVar9 + param_4) {
            lVar18 = lVar7;
          }
          if (lVar18 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10379de7c);
            (*pcVar2)();
          }
          if (lVar21 != lVar18) {
            lVar7 = *param_3;
            plVar14 = (long *)(lVar7 + lVar21 * 8 + -8);
            lVar10 = lVar9 - lVar21;
            do {
              lVar12 = *(long *)(lVar7 + lVar21 * 8);
              lVar16 = lVar10;
              plVar20 = plVar14;
              do {
                lVar15 = *plVar20;
                if (*(long *)(lVar15 + 0x28) <= *(long *)(lVar12 + 0x28)) break;
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10379de80);
                  (*pcVar2)();
                }
                *plVar20 = lVar12;
                plVar20[1] = lVar15;
                bVar3 = lVar16 != -1;
                lVar16 = lVar16 + 1;
                plVar20 = plVar20 + -1;
              } while (bVar3);
              lVar21 = lVar21 + 1;
              plVar14 = plVar14 + 1;
              lVar10 = lVar10 + -1;
              lVar16 = lVar18;
            } while (lVar21 != lVar18);
          }
        }
      }
      if (lVar16 < lVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10379de60);
        (*pcVar2)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar23 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar23) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar23 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar23 + 1;
      *(long *)(puVar6 + uVar23 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar6 + uVar23 * 0x10 + 0x28) = lVar16;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10379de98);
        (*pcVar2)();
      }
      FUN_10379e900(&puStack_58,*param_1,param_3,FUN_10379f390);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_10379de30;
      lVar7 = param_3[1];
      lVar9 = lVar16;
    } while (lVar16 < lVar7);
  }
  puVar6 = puStack_58;
  lVar7 = *param_1;
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10379dea0);
    (*pcVar2)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar22 = (ulong *)(puVar6 + 0x10);
  uVar23 = *puVar22;
  while (1 < uVar23) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379de9c);
      (*pcVar2)();
    }
    plVar14 = (long *)(puVar6 + uVar23 * 0x10);
    lVar21 = *plVar14;
    puVar1 = puVar22 + uVar23 * 2;
    uVar11 = puVar1[1];
    FUN_10379f390(lVar9 + lVar21 * 8,lVar9 + *puVar1 * 8,lVar9 + uVar11 * 8,lVar7);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar21) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379de64);
      (*pcVar2)();
    }
    if (*puVar22 <= uVar23 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379de68);
      (*pcVar2)();
    }
    *plVar14 = lVar21;
    plVar14[1] = uVar11;
    uVar11 = *puVar22;
    lVar9 = uVar11 - uVar23;
    if (uVar11 < uVar23) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379de6c);
      (*pcVar2)();
    }
    uVar23 = uVar11 - 1;
    func_0x000107c610b8(puVar1,puVar1 + 2,lVar9 * 0x10);
    *puVar22 = uVar23;
  }
LAB_10379de30:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 10379dea0; end: 10379e2c3;  */

void FUN_10379dea0(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long unaff_x21;
  ulong *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = param_3[1];
  if (0 < lVar9) {
    lVar8 = 0;
    do {
      puVar6 = puStack_58;
      lVar22 = lVar8 + 1;
      if (lVar22 < lVar9) {
        lVar7 = *param_3;
        lVar14 = *(long *)(lVar7 + lVar22 * 0x48 + 0x28);
        lVar22 = lVar7 + lVar8 * 0x48;
        lVar16 = *(long *)(lVar22 + 0x28);
        lVar15 = lVar8 + 2;
        plVar19 = (long *)(lVar22 + 0xb8);
        lVar20 = lVar14;
        do {
          lVar17 = lVar15;
          lVar22 = lVar9;
          if (lVar9 == lVar17) break;
          lVar22 = *plVar19;
          bVar3 = lVar20 <= lVar22;
          lVar15 = lVar17 + 1;
          plVar19 = plVar19 + 9;
          lVar20 = lVar22;
          lVar22 = lVar17;
        } while (lVar14 < lVar16 != bVar3);
        if (lVar14 < lVar16) {
          if (lVar22 < lVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10379e298);
            (*pcVar2)();
          }
          if (lVar8 < lVar22) {
            puVar13 = (undefined8 *)(lVar7 + lVar8 * 0x48);
            lVar15 = lVar22;
            lVar9 = lVar8;
            puVar11 = (undefined8 *)(lVar7 + lVar22 * 0x48);
            do {
              puVar10 = puVar11 + -9;
              lVar15 = lVar15 + -1;
              if (lVar9 != lVar15) {
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10379e2b8);
                  (*pcVar2)();
                }
                uVar28 = puVar13[5];
                uVar25 = puVar13[4];
                uVar34 = puVar13[7];
                uVar31 = puVar13[6];
                uVar21 = puVar13[8];
                uVar35 = puVar13[1];
                uVar32 = *puVar13;
                uVar29 = puVar13[3];
                uVar26 = puVar13[2];
                uVar18 = puVar11[-1];
                uVar36 = puVar11[-4];
                uVar33 = puVar11[-5];
                uVar30 = puVar11[-2];
                uVar27 = puVar11[-3];
                uVar39 = *puVar10;
                uVar38 = puVar11[-6];
                uVar37 = puVar11[-7];
                puVar13[1] = puVar11[-8];
                *puVar13 = uVar39;
                puVar13[3] = uVar38;
                puVar13[2] = uVar37;
                puVar13[5] = uVar36;
                puVar13[4] = uVar33;
                puVar13[7] = uVar30;
                puVar13[6] = uVar27;
                puVar13[8] = uVar18;
                puVar11[-1] = uVar21;
                puVar11[-4] = uVar28;
                puVar11[-5] = uVar25;
                puVar11[-2] = uVar34;
                puVar11[-3] = uVar31;
                puVar11[-8] = uVar35;
                *puVar10 = uVar32;
                puVar11[-6] = uVar29;
                puVar11[-7] = uVar26;
              }
              lVar9 = lVar9 + 1;
              puVar13 = puVar13 + 9;
              puVar11 = puVar10;
            } while (lVar9 < lVar15);
            lVar9 = param_3[1];
          }
        }
      }
      lVar15 = lVar22;
      if (lVar22 < lVar9) {
        if (SBORROW8(lVar22,lVar8)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10379e294);
          (*pcVar2)();
        }
        if (lVar22 - lVar8 < param_4) {
          if (SCARRY8(lVar8,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10379e29c);
            (*pcVar2)();
          }
          lVar20 = lVar8 + param_4;
          if (lVar9 <= lVar8 + param_4) {
            lVar20 = lVar9;
          }
          if (lVar20 < lVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10379e2a0);
            (*pcVar2)();
          }
          if (lVar22 != lVar20) {
            lVar14 = *param_3;
            puVar13 = (undefined8 *)(lVar14 + lVar22 * 0x48);
            lVar9 = lVar8 - lVar22;
            lVar7 = lVar9;
            puVar11 = puVar13;
LAB_10379e070:
            do {
              if ((long)puVar13[5] < (long)puVar13[-4]) {
                if (lVar14 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10379e2a4);
                  (*pcVar2)();
                }
                puVar10 = puVar13 + -9;
                uVar26 = puVar13[5];
                uVar18 = puVar13[4];
                uVar30 = puVar13[7];
                uVar28 = puVar13[6];
                uVar21 = puVar13[8];
                uVar31 = puVar13[1];
                uVar29 = *puVar13;
                uVar27 = puVar13[3];
                uVar25 = puVar13[2];
                puVar13[5] = puVar13[-4];
                puVar13[4] = puVar13[-5];
                puVar13[7] = puVar13[-2];
                puVar13[6] = puVar13[-3];
                puVar13[8] = puVar13[-1];
                puVar13[1] = puVar13[-8];
                *puVar13 = *puVar10;
                puVar13[3] = puVar13[-6];
                puVar13[2] = puVar13[-7];
                puVar13[-1] = uVar21;
                puVar13[-4] = uVar26;
                puVar13[-5] = uVar18;
                puVar13[-2] = uVar30;
                puVar13[-3] = uVar28;
                puVar13[-8] = uVar31;
                *puVar10 = uVar29;
                puVar13[-6] = uVar27;
                puVar13[-7] = uVar25;
                bVar3 = lVar9 != -1;
                lVar9 = lVar9 + 1;
                puVar13 = puVar10;
                if (bVar3) goto LAB_10379e070;
              }
              lVar22 = lVar22 + 1;
              puVar13 = puVar11 + 9;
              lVar9 = lVar7 + -1;
              lVar15 = lVar20;
              lVar7 = lVar9;
              puVar11 = puVar13;
            } while (lVar22 != lVar20);
          }
        }
      }
      if (lVar15 < lVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10379e284);
        (*pcVar2)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar24 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar24) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar24 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar24 + 1;
      *(long *)(puVar6 + uVar24 * 0x10 + 0x20) = lVar8;
      *(long *)(puVar6 + uVar24 * 0x10 + 0x28) = lVar15;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10379e2bc);
        (*pcVar2)();
      }
      FUN_10379eb70(&puStack_58,*param_1,param_3);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_10379e254;
      lVar9 = param_3[1];
      lVar8 = lVar15;
    } while (lVar15 < lVar9);
  }
  puVar6 = puStack_58;
  lVar9 = *param_1;
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10379e2c4);
    (*pcVar2)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar23 = (ulong *)(puVar6 + 0x10);
  uVar24 = *puVar23;
  while (1 < uVar24) {
    lVar8 = *param_3;
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379e2c0);
      (*pcVar2)();
    }
    plVar19 = (long *)(puVar6 + uVar24 * 0x10);
    lVar22 = *plVar19;
    puVar1 = puVar23 + uVar24 * 2;
    uVar12 = puVar1[1];
    FUN_10379f5a8(lVar8 + lVar22 * 0x48,lVar8 + *puVar1 * 0x48,lVar8 + uVar12 * 0x48,lVar9);
    if (unaff_x21 != 0) break;
    if ((long)uVar12 < lVar22) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379e288);
      (*pcVar2)();
    }
    if (*puVar23 <= uVar24 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379e28c);
      (*pcVar2)();
    }
    *plVar19 = lVar22;
    plVar19[1] = uVar12;
    uVar12 = *puVar23;
    lVar8 = uVar12 - uVar24;
    if (uVar12 < uVar24) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379e290);
      (*pcVar2)();
    }
    uVar24 = uVar12 - 1;
    func_0x000107c610b8(puVar1,puVar1 + 2,lVar8 * 0x10);
    *puVar23 = uVar24;
  }
LAB_10379e254:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 10379e2c4; end: 10379e6bb;  */

void FUN_10379e2c4(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 uVar23;
  long unaff_x21;
  ulong *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = param_3[1];
  if (0 < lVar9) {
    lVar10 = 0;
    do {
      puVar8 = puStack_58;
      lVar22 = lVar10 + 1;
      if (lVar22 < lVar9) {
        lVar11 = *param_3;
        lVar15 = *(long *)(lVar11 + lVar22 * 0x30 + 0x10);
        lVar13 = lVar10 * 0x30;
        lVar18 = *(long *)(lVar11 + lVar13 + 0x10);
        lVar16 = lVar10 + 2;
        plVar20 = (long *)(lVar11 + lVar13 + 0x70);
        lVar17 = lVar15;
        do {
          lVar19 = lVar16;
          lVar22 = lVar9;
          if (lVar9 == lVar19) break;
          lVar22 = *plVar20;
          bVar5 = lVar17 <= lVar22;
          lVar16 = lVar19 + 1;
          plVar20 = plVar20 + 6;
          lVar17 = lVar22;
          lVar22 = lVar19;
        } while (lVar15 < lVar18 != bVar5);
        if (lVar15 < lVar18) {
          if (lVar22 < lVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10379e690);
            (*pcVar4)();
          }
          if (lVar10 < lVar22) {
            lVar17 = lVar22 * 0x30;
            lVar16 = lVar22;
            lVar9 = lVar10;
            do {
              lVar16 = lVar16 + -1;
              if (lVar9 != lVar16) {
                if (lVar11 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10379e6b0);
                  (*pcVar4)();
                }
                puVar14 = (undefined8 *)(lVar11 + lVar13);
                lVar15 = lVar11 + lVar17;
                uVar2 = *puVar14;
                uVar3 = puVar14[1];
                uVar26 = puVar14[3];
                uVar23 = puVar14[2];
                uVar28 = puVar14[5];
                uVar27 = puVar14[4];
                uVar32 = *(undefined8 *)(lVar15 + -0x18);
                uVar31 = *(undefined8 *)(lVar15 + -0x20);
                uVar30 = *(undefined8 *)(lVar15 + -8);
                uVar29 = *(undefined8 *)(lVar15 + -0x10);
                uVar33 = *(undefined8 *)(lVar15 + -0x30);
                puVar14[1] = *(undefined8 *)(lVar15 + -0x28);
                *puVar14 = uVar33;
                puVar14[3] = uVar32;
                puVar14[2] = uVar31;
                puVar14[5] = uVar30;
                puVar14[4] = uVar29;
                *(undefined8 *)(lVar15 + -0x30) = uVar2;
                *(undefined8 *)(lVar15 + -0x28) = uVar3;
                *(undefined8 *)(lVar15 + -0x18) = uVar26;
                *(undefined8 *)(lVar15 + -0x20) = uVar23;
                *(undefined8 *)(lVar15 + -8) = uVar28;
                *(undefined8 *)(lVar15 + -0x10) = uVar27;
              }
              lVar9 = lVar9 + 1;
              lVar17 = lVar17 + -0x30;
              lVar13 = lVar13 + 0x30;
            } while (lVar9 < lVar16);
            lVar9 = param_3[1];
          }
        }
      }
      lVar13 = lVar22;
      if (lVar22 < lVar9) {
        if (SBORROW8(lVar22,lVar10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10379e68c);
          (*pcVar4)();
        }
        if (lVar22 - lVar10 < param_4) {
          if (SCARRY8(lVar10,param_4)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10379e694);
            (*pcVar4)();
          }
          lVar16 = lVar10 + param_4;
          if (lVar9 <= lVar10 + param_4) {
            lVar16 = lVar9;
          }
          if (lVar16 < lVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10379e698);
            (*pcVar4)();
          }
          if (lVar22 != lVar16) {
            lVar9 = *param_3;
            puVar14 = (undefined8 *)(lVar9 + lVar22 * 0x30 + -0x30);
            lVar17 = lVar10 - lVar22;
            do {
              lVar11 = *(long *)(lVar9 + lVar22 * 0x30 + 0x10);
              lVar13 = lVar17;
              puVar21 = puVar14;
              do {
                if ((long)puVar21[2] <= lVar11) break;
                if (lVar9 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10379e69c);
                  (*pcVar4)();
                }
                uVar2 = puVar21[6];
                uVar3 = puVar21[7];
                uVar23 = puVar21[0xb];
                uVar27 = puVar21[10];
                uVar26 = puVar21[9];
                puVar21[7] = puVar21[1];
                puVar21[6] = *puVar21;
                puVar21[9] = puVar21[3];
                puVar21[8] = puVar21[2];
                puVar21[0xb] = puVar21[5];
                puVar21[10] = puVar21[4];
                *puVar21 = uVar2;
                puVar21[1] = uVar3;
                puVar21[2] = lVar11;
                puVar21[4] = uVar27;
                puVar21[3] = uVar26;
                puVar21[5] = uVar23;
                puVar21 = puVar21 + -6;
                bVar5 = lVar13 != -1;
                lVar13 = lVar13 + 1;
              } while (bVar5);
              lVar22 = lVar22 + 1;
              puVar14 = puVar14 + 6;
              lVar17 = lVar17 + -1;
              lVar13 = lVar16;
            } while (lVar22 != lVar16);
          }
        }
      }
      if (lVar13 < lVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10379e67c);
        (*pcVar4)();
      }
      puVar6 = puStack_58;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar25 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar25) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        func_0x0001000a91e0(puVar8,uVar25 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar25 + 1;
      *(long *)(puVar8 + uVar25 * 0x10 + 0x20) = lVar10;
      *(long *)(puVar8 + uVar25 * 0x10 + 0x28) = lVar13;
      puStack_58 = puVar8;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10379e6b4);
        (*pcVar4)();
      }
      FUN_10379ede4(&puStack_58,*param_1,param_3);
      puVar8 = puStack_58;
      if (unaff_x21 != 0) goto LAB_10379e650;
      lVar9 = param_3[1];
      lVar10 = lVar13;
    } while (lVar13 < lVar9);
  }
  puVar8 = puStack_58;
  lVar9 = *param_1;
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10379e6bc);
    (*pcVar4)();
  }
  puVar6 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar6 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar24 = (ulong *)(puVar8 + 0x10);
  uVar25 = *puVar24;
  while (1 < uVar25) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10379e6b8);
      (*pcVar4)();
    }
    plVar20 = (long *)(puVar8 + uVar25 * 0x10);
    lVar22 = *plVar20;
    puVar1 = puVar24 + uVar25 * 2;
    uVar12 = puVar1[1];
    FUN_10379f818(lVar10 + lVar22 * 0x30,lVar10 + *puVar1 * 0x30,lVar10 + uVar12 * 0x30,lVar9);
    if (unaff_x21 != 0) break;
    if ((long)uVar12 < lVar22) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10379e680);
      (*pcVar4)();
    }
    if (*puVar24 <= uVar25 - 2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10379e684);
      (*pcVar4)();
    }
    *plVar20 = lVar22;
    plVar20[1] = uVar12;
    uVar12 = *puVar24;
    lVar10 = uVar12 - uVar25;
    if (uVar12 < uVar25) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10379e688);
      (*pcVar4)();
    }
    uVar25 = uVar12 - 1;
    func_0x000107c610b8(puVar1,puVar1 + 2,lVar10 * 0x10);
    *puVar24 = uVar25;
  }
LAB_10379e650:
  func_0x000107c6142c(puVar8);
  return;
}



/* Entry: 10379e6bc; end: 10379e7af;  */

void FUN_10379e6bc(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  if (param_3 != param_2) {
    lVar8 = *param_4;
    plVar9 = (long *)(lVar8 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      lVar3 = *(long *)(lVar8 + param_3 * 8);
      lVar6 = param_1;
      plVar10 = plVar9;
      do {
        lVar7 = *plVar10;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar4 = lVar3;
        func_0x000107c5ca68();
        lVar5 = lVar7;
        func_0x000107c5ca68();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar7);
        if (lVar5 <= lVar4) break;
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10379e7b0);
          (*pcVar1)();
        }
        lVar4 = *plVar10;
        lVar3 = plVar10[1];
        *plVar10 = lVar3;
        plVar10[1] = lVar4;
        bVar2 = lVar6 != -1;
        lVar6 = lVar6 + 1;
        plVar10 = plVar10 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      plVar9 = plVar9 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 10379e7b0; end: 10379e867;  */

void FUN_10379e7b0(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    puVar4 = (undefined8 *)(lVar3 + param_3 * 0x48);
    param_1 = param_1 - param_3;
    lVar6 = param_1;
    puVar5 = puVar4;
LAB_10379e7f4:
    do {
      if ((long)puVar4[5] < (long)puVar4[-4]) {
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10379e868);
          (*pcVar1)();
        }
        puVar7 = puVar4 + -9;
        uVar11 = puVar4[5];
        uVar9 = puVar4[4];
        uVar15 = puVar4[7];
        uVar13 = puVar4[6];
        uVar8 = puVar4[8];
        uVar16 = puVar4[1];
        uVar14 = *puVar4;
        uVar12 = puVar4[3];
        uVar10 = puVar4[2];
        puVar4[5] = puVar4[-4];
        puVar4[4] = puVar4[-5];
        puVar4[7] = puVar4[-2];
        puVar4[6] = puVar4[-3];
        puVar4[8] = puVar4[-1];
        puVar4[1] = puVar4[-8];
        *puVar4 = *puVar7;
        puVar4[3] = puVar4[-6];
        puVar4[2] = puVar4[-7];
        puVar4[-1] = uVar8;
        puVar4[-4] = uVar11;
        puVar4[-5] = uVar9;
        puVar4[-2] = uVar15;
        puVar4[-3] = uVar13;
        puVar4[-8] = uVar16;
        *puVar7 = uVar14;
        puVar4[-6] = uVar12;
        puVar4[-7] = uVar10;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        puVar4 = puVar7;
        if (bVar2) goto LAB_10379e7f4;
      }
      param_3 = param_3 + 1;
      puVar4 = puVar5 + 9;
      param_1 = lVar6 + -1;
      lVar6 = param_1;
      puVar5 = puVar4;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 10379e868; end: 10379e8ff;  */

void FUN_10379e868(long param_1,long param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_3 != param_2) {
    lVar5 = *param_4;
    puVar6 = (undefined8 *)(lVar5 + param_3 * 0x30 + -0x30);
    param_1 = param_1 - param_3;
    do {
      lVar7 = *(long *)(lVar5 + param_3 * 0x30 + 0x10);
      lVar8 = param_1;
      puVar9 = puVar6;
      do {
        if ((long)puVar9[2] <= lVar7) break;
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10379e900);
          (*pcVar3)();
        }
        uVar1 = puVar9[6];
        uVar2 = puVar9[7];
        uVar10 = puVar9[0xb];
        uVar12 = puVar9[10];
        uVar11 = puVar9[9];
        puVar9[7] = puVar9[1];
        puVar9[6] = *puVar9;
        puVar9[9] = puVar9[3];
        puVar9[8] = puVar9[2];
        puVar9[0xb] = puVar9[5];
        puVar9[10] = puVar9[4];
        *puVar9 = uVar1;
        puVar9[1] = uVar2;
        puVar9[2] = lVar7;
        puVar9[4] = uVar12;
        puVar9[3] = uVar11;
        puVar9[5] = uVar10;
        puVar9 = puVar9 + -6;
        bVar4 = lVar8 != -1;
        lVar8 = lVar8 + 1;
      } while (bVar4);
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 6;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 10379e900; end: 10379eb6f;  */

undefined8 FUN_10379e900(ulong *param_1,undefined8 param_2,long *param_3,code *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_10379e9d8;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10379eb58);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_10379ea3c:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10379eb48);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10379eb50);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10379eb30);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10379eb34);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10379eb3c);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10379eb44);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_10379e9d8:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10379eb38);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10379eb40);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10379eb4c);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10379eb54);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_10379ea3c;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10379eb5c);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10379eb24);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10379eb70);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      (*param_4)(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10379eb28);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10379eb2c);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 10379eb70; end: 10379ede3;  */

undefined8 FUN_10379eb70(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar11 = *param_1;
  if (1 < *(ulong *)(uVar11 + 0x10)) {
    uVar10 = uVar11;
    func_0x000107c61558();
    if ((uVar10 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar11;
    lVar1 = uVar11 + 0x20;
    uVar10 = *(ulong *)(uVar11 + 0x10);
    do {
      uVar13 = uVar10 - 1;
      if (uVar10 < 4) {
        if (uVar10 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar11 + 0x28),*(long *)(uVar11 + 0x20));
          lVar8 = *(long *)(uVar11 + 0x28) - *(long *)(uVar11 + 0x20);
          goto LAB_10379ec48;
        }
        if (uVar10 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10379edc4);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_10379eca8:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10379edb4);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar13 * 0x10);
        lVar8 = *plVar2;
        lVar12 = plVar2[1];
        if (SBORROW8(lVar12,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10379edbc);
          (*pcVar6)();
        }
        uVar14 = uVar13;
        if (lVar12 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar10 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10379ed9c);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10379eda0);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar12 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar12;
        if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10379eda8);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10379edb0);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_10379ec48:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10379eda4);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar11 + uVar10 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10379edac);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10379edb8);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10379edc0);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_10379eca8;
          uVar14 = uVar10 - 2;
          if (lVar5 <= lVar8) {
            uVar14 = uVar13;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar9 = *plVar2;
          lVar12 = plVar2[1];
          if (SBORROW8(lVar12,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10379edc8);
            (*pcVar6)();
          }
          uVar14 = uVar10 - 2;
          if (lVar12 - lVar9 <= lVar8) {
            uVar14 = uVar13;
          }
        }
      }
      uVar13 = uVar14 - 1;
      if (uVar10 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10379ed8c);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar11;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10379ede4);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar13 * 0x10);
      lVar12 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar14 * 0x10);
      lVar9 = plVar3[1];
      FUN_10379f5a8(lVar8 + lVar12 * 0x48,lVar8 + *plVar3 * 0x48,lVar8 + lVar9 * 0x48,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10379ed90);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10379ed94);
        (*pcVar6)();
      }
      *plVar2 = lVar12;
      plVar2[1] = lVar9;
      uVar13 = *(ulong *)(uVar11 + 0x10);
      if (uVar13 <= uVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10379ed98);
        (*pcVar6)();
      }
      uVar10 = uVar13 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar10 - uVar14) * 0x10);
      *(ulong *)(uVar11 + 0x10) = uVar10;
    } while (2 < uVar13);
    *param_1 = uVar11;
  }
  return 1;
}



/* Entry: 10379ede4; end: 10379f057;  */

undefined8 FUN_10379ede4(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar11 = *param_1;
  if (1 < *(ulong *)(uVar11 + 0x10)) {
    uVar10 = uVar11;
    func_0x000107c61558();
    if ((uVar10 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar11;
    lVar1 = uVar11 + 0x20;
    uVar10 = *(ulong *)(uVar11 + 0x10);
    do {
      uVar13 = uVar10 - 1;
      if (uVar10 < 4) {
        if (uVar10 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar11 + 0x28),*(long *)(uVar11 + 0x20));
          lVar8 = *(long *)(uVar11 + 0x28) - *(long *)(uVar11 + 0x20);
          goto LAB_10379eebc;
        }
        if (uVar10 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10379f038);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_10379ef1c:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10379f028);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar13 * 0x10);
        lVar8 = *plVar2;
        lVar12 = plVar2[1];
        if (SBORROW8(lVar12,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10379f030);
          (*pcVar6)();
        }
        uVar14 = uVar13;
        if (lVar12 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar10 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10379f010);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10379f014);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar12 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar12;
        if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10379f01c);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10379f024);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_10379eebc:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10379f018);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar11 + uVar10 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10379f020);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10379f02c);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10379f034);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_10379ef1c;
          uVar14 = uVar10 - 2;
          if (lVar5 <= lVar8) {
            uVar14 = uVar13;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar9 = *plVar2;
          lVar12 = plVar2[1];
          if (SBORROW8(lVar12,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10379f03c);
            (*pcVar6)();
          }
          uVar14 = uVar10 - 2;
          if (lVar12 - lVar9 <= lVar8) {
            uVar14 = uVar13;
          }
        }
      }
      uVar13 = uVar14 - 1;
      if (uVar10 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10379f000);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar11;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10379f058);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar13 * 0x10);
      lVar12 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar14 * 0x10);
      lVar9 = plVar3[1];
      FUN_10379f818(lVar8 + lVar12 * 0x30,lVar8 + *plVar3 * 0x30,lVar8 + lVar9 * 0x30,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10379f004);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10379f008);
        (*pcVar6)();
      }
      *plVar2 = lVar12;
      plVar2[1] = lVar9;
      uVar13 = *(ulong *)(uVar11 + 0x10);
      if (uVar13 <= uVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10379f00c);
        (*pcVar6)();
      }
      uVar10 = uVar13 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar10 - uVar14) * 0x10);
      *(ulong *)(uVar11 + 0x10) = uVar10;
    } while (2 < uVar13);
    *param_1 = uVar11;
  }
  return 1;
}



/* Entry: 10379f058; end: 10379f38f;  */

undefined8 FUN_10379f058(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  lVar8 = (long)param_2 - (long)param_1;
  lVar3 = lVar8 + 7;
  if (-1 < lVar8) {
    lVar3 = lVar8;
  }
  lVar3 = lVar3 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  if (lVar3 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar3 << 3);
    }
    plVar9 = param_4 + lVar3;
    plVar2 = param_1;
    if (7 < lVar8) {
      do {
        if (param_3 <= param_2) break;
        lVar6 = *param_2;
        lVar11 = *param_4;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar3 = lVar6;
        func_0x000107c5ca68();
        lVar8 = lVar11;
        func_0x000107c5ca68();
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar11);
        if (lVar3 < lVar8) {
          plVar7 = param_2 + 1;
          plVar4 = param_4;
          plVar10 = param_2;
        }
        else {
          plVar4 = param_4 + 1;
          plVar10 = param_4;
          plVar7 = param_2;
        }
        param_4 = plVar4;
        if (plVar2 != plVar10) {
          *plVar2 = *plVar10;
        }
        plVar2 = plVar2 + 1;
        param_2 = plVar7;
      } while (param_4 < plVar9);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    plVar7 = param_4 + lVar6;
    plVar2 = param_2;
    plVar9 = plVar7;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        plVar4 = param_2 + -1;
        plVar10 = param_3;
        while( true ) {
          param_3 = plVar10 + -1;
          plVar9 = plVar7 + -1;
          lVar6 = *plVar9;
          lVar11 = *plVar4;
          func_0x000107c61174();
          func_0x000107c61174();
          lVar3 = lVar6;
          func_0x000107c5ca68();
          lVar8 = lVar11;
          func_0x000107c5ca68();
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar11);
          if (lVar3 < lVar8) break;
          if (plVar10 != plVar7) {
            *param_3 = *plVar9;
          }
          plVar2 = param_2;
          plVar7 = plVar9;
          plVar10 = param_3;
          if (plVar9 <= param_4) goto LAB_10379f324;
        }
        if (plVar10 != param_2) {
          *param_3 = *plVar4;
        }
        plVar2 = plVar4;
        plVar9 = plVar7;
      } while ((param_1 < plVar4) && (param_2 = plVar4, param_4 < plVar7));
    }
  }
LAB_10379f324:
  uVar5 = (long)plVar9 - (long)param_4;
  uVar1 = uVar5 + 7;
  if (-1 < (long)uVar5) {
    uVar1 = uVar5;
  }
  if ((plVar2 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar2)) {
    func_0x000107c610b8(plVar2,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 10379f390; end: 10379f5a7;  */

undefined8 FUN_10379f390(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar5;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  if (lVar2 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 3);
    }
    plVar5 = param_4 + lVar2;
    plVar8 = param_1;
    if (7 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        lVar2 = *param_2;
        if (*(long *)(lVar2 + 0x28) < *(long *)(*param_4 + 0x28)) {
          plVar9 = param_4;
          plVar7 = param_2 + 1;
          plVar3 = param_2;
        }
        else {
          lVar2 = *param_4;
          plVar9 = param_4 + 1;
          plVar7 = param_2;
          plVar3 = param_4;
        }
        param_2 = plVar7;
        param_4 = plVar9;
        if (plVar8 != plVar3) {
          *plVar8 = lVar2;
        }
        plVar8 = plVar8 + 1;
      } while (param_4 < plVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    plVar3 = param_4 + lVar6;
    plVar5 = plVar3;
    plVar8 = param_2;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        plVar7 = param_2 + -1;
        plVar9 = param_3;
        while( true ) {
          param_3 = plVar9 + -1;
          plVar5 = plVar3 + -1;
          if (*(long *)(*plVar5 + 0x28) < *(long *)(*plVar7 + 0x28)) break;
          if (plVar9 != plVar3) {
            *param_3 = *plVar5;
          }
          plVar3 = plVar5;
          plVar8 = param_2;
          plVar9 = param_3;
          if (plVar5 <= param_4) goto LAB_10379f54c;
        }
        if (plVar9 != param_2) {
          *param_3 = *plVar7;
        }
        plVar5 = plVar3;
        plVar8 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar3));
    }
  }
LAB_10379f54c:
  uVar4 = (long)plVar5 - (long)param_4;
  uVar1 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((plVar8 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar8)) {
    func_0x000107c610b8(plVar8,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 10379f5a8; end: 10379f817;  */

undefined8
FUN_10379f5a8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x48;
  lVar2 = ((long)param_3 - (long)param_2) / 0x48;
  if (lVar1 < lVar2) {
    if (((param_4 < param_1) || (param_1 + lVar1 * 9 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar1 * 0x48);
    }
    puVar3 = param_4 + lVar1 * 9;
    puVar5 = param_1;
    if (0x47 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        if ((long)param_2[5] < (long)param_4[5]) {
          puVar4 = param_4;
          puVar6 = param_2;
          param_2 = param_2 + 9;
        }
        else {
          puVar4 = param_4 + 9;
          puVar6 = param_4;
        }
        param_4 = puVar4;
        if (puVar5 != puVar6) {
          uVar8 = puVar6[1];
          uVar7 = *puVar6;
          uVar10 = puVar6[3];
          uVar9 = puVar6[2];
          uVar12 = puVar6[5];
          uVar11 = puVar6[4];
          uVar14 = puVar6[7];
          uVar13 = puVar6[6];
          puVar5[8] = puVar6[8];
          puVar5[5] = uVar12;
          puVar5[4] = uVar11;
          puVar5[7] = uVar14;
          puVar5[6] = uVar13;
          puVar5[1] = uVar8;
          *puVar5 = uVar7;
          puVar5[3] = uVar10;
          puVar5[2] = uVar9;
        }
        puVar5 = puVar5 + 9;
      } while (param_4 < puVar3);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar2 * 9 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar2 * 0x48);
    }
    puVar3 = param_4 + lVar2 * 9;
    puVar5 = param_2;
    if ((param_1 < param_2) && (0x47 < (long)param_3 - (long)param_2)) {
      do {
        while (puVar6 = param_3 + -9, (long)puVar3[-4] < (long)param_2[-4]) {
          puVar5 = param_2 + -9;
          if (param_3 != param_2) {
            uVar8 = param_2[-8];
            uVar7 = *puVar5;
            uVar10 = param_2[-6];
            uVar9 = param_2[-7];
            uVar12 = param_2[-4];
            uVar11 = param_2[-5];
            uVar14 = param_2[-2];
            uVar13 = param_2[-3];
            param_3[-1] = param_2[-1];
            param_3[-4] = uVar12;
            param_3[-5] = uVar11;
            param_3[-2] = uVar14;
            param_3[-3] = uVar13;
            param_3[-8] = uVar8;
            *puVar6 = uVar7;
            param_3[-6] = uVar10;
            param_3[-7] = uVar9;
          }
          if ((puVar5 <= param_1) || (param_3 = puVar6, param_2 = puVar5, puVar3 <= param_4))
          goto LAB_10379f7b8;
        }
        puVar4 = puVar3 + -9;
        if (param_3 != puVar3) {
          uVar8 = puVar3[-8];
          uVar7 = *puVar4;
          uVar10 = puVar3[-6];
          uVar9 = puVar3[-7];
          uVar12 = puVar3[-4];
          uVar11 = puVar3[-5];
          uVar14 = puVar3[-2];
          uVar13 = puVar3[-3];
          param_3[-1] = puVar3[-1];
          param_3[-4] = uVar12;
          param_3[-5] = uVar11;
          param_3[-2] = uVar14;
          param_3[-3] = uVar13;
          param_3[-8] = uVar8;
          *puVar6 = uVar7;
          param_3[-6] = uVar10;
          param_3[-7] = uVar9;
        }
        puVar3 = puVar4;
        puVar5 = param_2;
        param_3 = puVar6;
      } while (param_4 < puVar4);
    }
  }
LAB_10379f7b8:
  lVar1 = ((long)puVar3 - (long)param_4) / 0x48;
  if ((puVar5 != param_4) || (param_4 + lVar1 * 9 <= puVar5)) {
    func_0x000107c610b8(puVar5,param_4,lVar1 * 0x48);
  }
  return 1;
}



/* Entry: 10379f818; end: 10379fa67;  */

undefined8
FUN_10379f818(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x30;
  lVar2 = ((long)param_3 - (long)param_2) / 0x30;
  if (lVar1 < lVar2) {
    if (((param_4 < param_1) || (param_1 + lVar1 * 6 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar1 * 0x30);
    }
    puVar3 = param_4 + lVar1 * 6;
    puVar5 = param_1;
    if (0x2f < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        if ((long)param_2[2] < (long)param_4[2]) {
          puVar4 = param_4;
          puVar6 = param_2;
          param_2 = param_2 + 6;
        }
        else {
          puVar4 = param_4 + 6;
          puVar6 = param_4;
        }
        param_4 = puVar4;
        if (puVar5 != puVar6) {
          uVar8 = puVar6[1];
          uVar7 = *puVar6;
          uVar9 = puVar6[2];
          uVar11 = puVar6[5];
          uVar10 = puVar6[4];
          puVar5[3] = puVar6[3];
          puVar5[2] = uVar9;
          puVar5[5] = uVar11;
          puVar5[4] = uVar10;
          puVar5[1] = uVar8;
          *puVar5 = uVar7;
        }
        puVar5 = puVar5 + 6;
      } while (param_4 < puVar3);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar2 * 6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar2 * 0x30);
    }
    puVar3 = param_4 + lVar2 * 6;
    puVar5 = param_2;
    if ((param_1 < param_2) && (0x2f < (long)param_3 - (long)param_2)) {
      do {
        while (puVar6 = param_3 + -6, (long)puVar3[-4] < (long)param_2[-4]) {
          puVar5 = param_2 + -6;
          if (param_3 != param_2) {
            uVar8 = param_2[-5];
            uVar7 = *puVar5;
            uVar9 = param_2[-4];
            uVar11 = param_2[-1];
            uVar10 = param_2[-2];
            param_3[-3] = param_2[-3];
            param_3[-4] = uVar9;
            param_3[-1] = uVar11;
            param_3[-2] = uVar10;
            param_3[-5] = uVar8;
            *puVar6 = uVar7;
          }
          if ((puVar5 <= param_1) || (param_3 = puVar6, param_2 = puVar5, puVar3 <= param_4))
          goto LAB_10379fa04;
        }
        puVar4 = puVar3 + -6;
        if (param_3 != puVar3) {
          uVar8 = puVar3[-5];
          uVar7 = *puVar4;
          uVar9 = puVar3[-4];
          uVar11 = puVar3[-1];
          uVar10 = puVar3[-2];
          param_3[-3] = puVar3[-3];
          param_3[-4] = uVar9;
          param_3[-1] = uVar11;
          param_3[-2] = uVar10;
          param_3[-5] = uVar8;
          *puVar6 = uVar7;
        }
        puVar3 = puVar4;
        puVar5 = param_2;
        param_3 = puVar6;
      } while (param_4 < puVar4);
    }
  }
LAB_10379fa04:
  lVar1 = ((long)puVar3 - (long)param_4) / 0x30;
  if ((puVar5 != param_4) || (param_4 + lVar1 * 6 <= puVar5)) {
    func_0x000107c610b8(puVar5,param_4,lVar1 * 0x30);
  }
  return 1;
}



/* Entry: 10379fa68; end: 10379faab;  */

void FUN_10379fa68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f926c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ded70;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f926c8 = puVar1;
  return;
}



/* Entry: 10379faac; end: 10379facb;  */

void FUN_10379faac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 10379facc; end: 10379fb0f;  */

void FUN_10379facc(void)

{
  func_0x000107c61168(&PTR_PTR_112f92a18);
  return;
}



/* Entry: 10379fb10; end: 10379fb1f;  */

void FUN_10379fb10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10379fb20; end: 10379fb3f;  */

void FUN_10379fb20(void)

{
  func_0x000107c61168(&PTR_PTR_112f92ab0);
  return;
}



/* Entry: 10379fb40; end: 10379fb4f;  */

void FUN_10379fb40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10379fb50; end: 10379fb6f;  */

void FUN_10379fb50(void)

{
  func_0x000107c61168(&PTR_PTR_112f92b50);
  return;
}



/* Entry: 10379fb70; end: 10379fcb3;  */

void FUN_10379fb70(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_3;
  uVar5 = param_2;
  func_0x000100f89a68();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar7 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10379fc40);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar7) {
    param_4 = param_4 & 1;
    FUN_1037a0680(lVar7);
    uVar3 = param_3;
    func_0x000100f89a68();
    if (((uint)uVar5 & 1) != (param_4 & 1)) {
      func_0x000107c60624(PTR___ss5Int64VN_11034ee50);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10379fc08);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1037a0098();
    lVar7 = *unaff_x20;
    goto joined_r0x00010379fc54;
  }
  lVar7 = *unaff_x20;
joined_r0x00010379fc54:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
    return;
  }
  lVar6 = lVar7 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar3 & 0x3f);
  *(ulong *)(*(long *)(lVar7 + 0x30) + uVar3 * 8) = param_3;
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10379fcb4);
    (*pcVar2)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  return;
}



/* Entry: 10379fcb4; end: 1037a0097;  */

void FUN_10379fcb4(undefined8 *param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar9 = *unaff_x20;
  uVar2 = param_2;
  uVar4 = param_2;
  func_0x000100f89a68();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10379fd88);
    (*pcVar1)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    param_3 = param_3 & 1;
    func_0x0001037a08f8(lVar6);
    uVar2 = param_2;
    func_0x000100f89a68();
    if (((uint)uVar4 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___ss5Int64VN_11034ee50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10379fd44);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x0001037a0200();
    lVar6 = *unaff_x20;
    goto joined_r0x00010379fd9c;
  }
  lVar6 = *unaff_x20;
joined_r0x00010379fd9c:
  if ((uVar4 & 1) != 0) {
    puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 0x28);
    uVar3 = puVar7[2];
    puVar7[4] = param_1[4];
    uVar10 = *param_1;
    uVar12 = param_1[3];
    uVar11 = param_1[2];
    puVar7[1] = param_1[1];
    *puVar7 = uVar10;
    puVar7[3] = uVar12;
    puVar7[2] = uVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  lVar5 = lVar6 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar6 + 0x30) + uVar2 * 8) = param_2;
  puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 0x28);
  uVar3 = *param_1;
  uVar11 = param_1[3];
  uVar10 = param_1[2];
  puVar7[1] = param_1[1];
  *puVar7 = uVar3;
  puVar7[3] = uVar11;
  puVar7[2] = uVar10;
  puVar7[4] = param_1[4];
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10379fe08);
    (*pcVar1)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  return;
}



/* Entry: 1037a0098; end: 1037a067f;  */

void FUN_1037a0098(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  
  func_0x0001000285a8(0x112f92bd8,&UNK_10dc0b9c8);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_1037a0174;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 0x10);
        uVar4 = *puVar3;
        uVar5 = puVar3[1];
        *(undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 8) =
             *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 8);
        puVar3 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 0x10);
        *puVar3 = uVar4;
        puVar3[1] = uVar5;
        func_0x000107c61434();
        if (uVar8 != 0) break;
LAB_1037a0174:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1037a0200);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1037a01d8;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_1037a01d8:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1037a0680; end: 1037a22a7;  */

void FUN_1037a0680(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  ulong *puVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  
  lVar14 = *unaff_x20;
  lVar1 = *(long *)(lVar14 + 0x18);
  if (*(long *)(lVar14 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112f92bd8;
  func_0x0001000285a8(0x112f92bd8,&UNK_10dc0b9c8);
  lVar7 = lVar14;
  func_0x000107c60490(lVar14,lVar1,param_2,uVar6);
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_1037a08c4:
    func_0x000107c61574(lVar14);
    *unaff_x20 = lVar7;
    return;
  }
  puVar15 = (ulong *)(lVar14 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar18 = uVar18 & *puVar15;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar17 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1037a08f4);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) != 0) {
            uVar18 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
            if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
              *puVar15 = -1L << (uVar18 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar15,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar14 + 0x10) = 0;
          }
          goto LAB_1037a08c4;
        }
        uVar18 = puVar15[lVar17];
        lVar10 = lVar10 + 1;
      } while (uVar18 == 0);
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar17 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar17 << 6;
    uVar16 = *(undefined8 *)(*(long *)(lVar14 + 0x30) + uVar9 * 8);
    puVar2 = (undefined8 *)(*(long *)(lVar14 + 0x38) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
    }
    uVar8 = *(ulong *)(lVar7 + 0x28);
    func_0x000107c60688(uVar8,uVar16);
    uVar13 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar8 = uVar8 & (uVar13 ^ 0xffffffffffffffff);
    uVar11 = uVar8 >> 6;
    uVar9 = -1L << (uVar8 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar13 >> 6;
      do {
        uVar8 = uVar11 + 1;
        if ((uVar8 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1037a08f8);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar8 != uVar9) {
          uVar11 = uVar8;
        }
        bVar4 = (bool)(uVar8 == uVar9 | bVar4);
        uVar8 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar8 == 0xffffffffffffffff);
      uVar8 = ~uVar8;
      uVar9 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    *(undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 8) = uVar16;
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar17;
  } while( true );
}



/* Entry: 1037a22a8; end: 1037a23b3;  */

undefined8 FUN_1037a22a8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x1037a7f0c)(param_2,param_1);
  return param_2;
}



/* Entry: 1037a23b4; end: 1037a23c3;  */

void FUN_1037a23b4(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  return;
}



/* Entry: 1037a23c4; end: 1037a2423; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation init] */

void FUN_1037a23c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCTracingServicesImplementation.TracingServicesImplementation",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037a23f0);
  (*pcVar1)();
}



/* Entry: 1037a2424; end: 1037a250f; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037a2440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037a2460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037a2480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037a24e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037a2484) */
/* WARNING: Removing unreachable block (ram,0x0001037a2464) */
/* WARNING: Removing unreachable block (ram,0x0001037a2444) */
/* WARNING: Removing unreachable block (ram,0x0001037a24e8) */
/* WARNING: Removing unreachable block (ram,0x0001000834e4) */
/* WARNING: Removing unreachable block (ram,0x0001000834fc) */
/* WARNING: Removing unreachable block (ram,0x0001000834f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a2424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f92bf8));
  return;
}



/* Entry: 1037a2510; end: 1037a267f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037a2510(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  plVar2 = (long *)(unaff_x20 + _DAT_112f92bf0);
  func_0x0001000a8868(plVar2,plVar2[3]);
  lVar6 = *plVar2;
  func_0x000107c61428(lVar6 + 0x10,auStack_68,0x21,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c60b24();
  func_0x000107c614a8(auStack_68);
  uVar3 = 0;
  func_0x000107c60f0c();
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1037a267c);
    (*pcVar1)();
  }
  uVar4 = 0xc;
  func_0x000107c60f0c();
  if (-1 < (long)uVar4) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f92bf8);
    puVar5 = &UNK_110692c48;
    func_0x000107c613fc(&UNK_110692c48,0x38,7);
    *(long *)(puVar5 + 0x10) = lVar6;
    *(long *)(puVar5 + 0x18) = param_1;
    *(undefined8 *)(puVar5 + 0x20) = param_2;
    *(ulong *)(puVar5 + 0x28) = uVar3 / 1000;
    *(ulong *)(puVar5 + 0x30) = uVar4 / 1000;
    func_0x000107c6157c(uVar7);
    func_0x000107c61434(param_2);
    func_0x0001048d8ee8(FUN_1037a2744,puVar5);
    func_0x000107c61574(uVar7);
    func_0x000107c61574();
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f92c00);
    func_0x000107c6015c();
    if (((ulong)puVar5 & 1) != 0) {
      func_0x000107c5fb28(param_1,param_2);
      func_0x000106cc5c8c(param_1 + 0x20,uVar7,lVar6);
      func_0x000107c61574(param_1);
    }
    return lVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037a2680);
  (*pcVar1)();
}



/* Entry: 1037a2680; end: 1037a26cb; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation beginAsyncTraceWithoutName] */

undefined8 FUN_1037a2680(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 0x64656d616e6e753c;
  FUN_1037a2510(0x64656d616e6e753c,0xe90000000000003e);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1037a26cc; end: 1037a26d3; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation isTracing] */

undefined8 FUN_1037a26cc(void)

{
  return 1;
}



/* Entry: 1037a26d4; end: 1037a2743;  */

void FUN_1037a26d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = param_2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_6;
  func_0x000107c61434(param_4);
  uVar1 = *param_1;
  func_0x000107c61558(uVar1);
  uVar2 = *param_1;
  FUN_10379fcb4(&uStack_58,param_2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1037a2744; end: 1037a2753;  */

void FUN_1037a2744(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_58 = uVar1;
  func_0x000107c61434(uStack_48);
  uVar2 = *param_1;
  func_0x000107c61558(uVar2);
  uVar3 = *param_1;
  FUN_10379fcb4(&uStack_58,uVar1,uVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 1037a2754; end: 1037a275f; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation beginAsyncTrace:] */

undefined8 FUN_1037a2754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1037a2510(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return param_3;
}



/* Entry: 1037a2760; end: 1037a276b; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation beginAsyncTraceWithNameBlock:] */

long FUN_1037a2760(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  func_0x000107c61174();
  (*pcVar2)(param_3);
  func_0x000107c61180();
  lVar1 = param_3;
  func_0x000107c5faec();
  func_0x000107c61170(param_3);
  FUN_1037a2510(lVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return lVar1;
}



/* Entry: 1037a276c; end: 1037a28cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a276c(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f92bf8);
  func_0x000107c6157c(uVar9);
  func_0x0001048d8e34(&lStack_68);
  func_0x000107c61574(uVar9);
  if ((*(long *)(lStack_68 + 0x10) == 0) ||
     (lVar8 = param_1, func_0x000100f89a68(), (param_2 & 1) == 0)) {
    func_0x000107c6142c(lStack_68);
  }
  else {
    lVar8 = *(long *)(lStack_68 + 0x38) + lVar8 * 0x28;
    uVar9 = *(undefined8 *)(lVar8 + 8);
    uVar2 = *(undefined8 *)(lVar8 + 0x10);
    uVar1 = *(undefined8 *)(lVar8 + 0x18);
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    func_0x000107c61434(uVar2);
    func_0x000107c6142c(lStack_68);
    uVar5 = 0;
    func_0x000107c60f0c();
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1037a28cc);
      (*pcVar4)();
    }
    uVar6 = 0xc;
    func_0x000107c60f0c();
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1037a28d0);
      (*pcVar4)();
    }
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f92c08);
    puVar7 = &UNK_110692c70;
    func_0x000107c613fc(&UNK_110692c70,0x48,7);
    *(long *)(puVar7 + 0x10) = param_1;
    *(undefined8 *)(puVar7 + 0x18) = uVar9;
    *(undefined8 *)(puVar7 + 0x20) = uVar2;
    *(undefined8 *)(puVar7 + 0x28) = uVar1;
    *(ulong *)(puVar7 + 0x30) = uVar5 / 1000;
    *(undefined8 *)(puVar7 + 0x38) = uVar3;
    *(ulong *)(puVar7 + 0x40) = uVar6 / 1000;
    func_0x000107c6157c(uVar10);
    func_0x0001048d8ee8(FUN_1037a40c0,puVar7);
    func_0x000107c61574(uVar10);
    func_0x000107c61574(puVar7);
  }
  return;
}


