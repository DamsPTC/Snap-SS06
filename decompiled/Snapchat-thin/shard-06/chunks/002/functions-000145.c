/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045aed10; end: 1045aed5b;  */

void FUN_1045aed10(int param_1,undefined8 param_2)

{
  func_0x0001000768d0(param_2,0);
  func_0x000100076a80((long)param_1);
  return;
}



/* Entry: 1045aed5c; end: 1045aeea3;  */

void FUN_1045aed5c(int param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar3 = (long)param_1;
  FUN_1045a23d0(param_2);
  FUN_104540d74(": ",2);
  if (param_1 < 0) {
    uVar4 = *unaff_x20;
    uVar1 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar4;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar4 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      func_0x0001014d97ac(uVar4,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar4 + uVar1 + 0x20) = 0x2d;
    *unaff_x20 = uVar4;
    lVar3 = -lVar3;
  }
  func_0x0001045a0584(lVar3);
  uVar4 = *unaff_x20;
  uVar1 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar4,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar4 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar4;
  return;
}



/* Entry: 1045aeea4; end: 1045aeeef;  */

void FUN_1045aeea4(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x20))((long)param_1);
  return;
}



/* Entry: 1045aeef0; end: 1045aef63;  */

void FUN_1045aeef0(long param_1,uint param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar6 = 0;
    pbVar4 = *(byte **)(unaff_x20 + 8);
    uVar1 = ((ulong)param_2 & 0x1fffffff) << 3 | 5;
    do {
      uVar2 = *(undefined4 *)(param_1 + 0x20 + lVar6 * 4);
      pbVar5 = pbVar4;
      uVar7 = uVar1;
      uVar8 = uVar1;
      if (0x7f < param_2 << 3) {
        do {
          pbVar5 = pbVar4 + 1;
          *pbVar4 = (byte)uVar7 | 0x80;
          uVar8 = uVar7 >> 7;
          uVar9 = uVar7 >> 0xe;
          pbVar4 = pbVar5;
          uVar7 = uVar8;
        } while (uVar9 != 0);
      }
      lVar6 = lVar6 + 1;
      *pbVar5 = (byte)uVar8;
      *(undefined4 *)(pbVar5 + 1) = uVar2;
      pbVar4 = pbVar5 + 5;
    } while (lVar6 != lVar3);
    *(byte **)(unaff_x20 + 8) = pbVar4;
  }
  return;
}



/* Entry: 1045aef64; end: 1045aefc3;  */

void FUN_1045aef64(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 8))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 1045aefc4; end: 1045aefd7;  */

void FUN_1045aefc4(void)

{
  FUN_1045aefd8();
  return;
}



/* Entry: 1045aefd8; end: 1045af04b;  */

void FUN_1045aefd8(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar5 = 0;
    pbVar3 = *(byte **)(unaff_x20 + 8);
    uVar1 = ((ulong)param_2 & 0x1fffffff) << 3 | 1;
    do {
      uVar6 = *(undefined8 *)(param_1 + 0x20 + lVar5 * 8);
      pbVar4 = pbVar3;
      uVar7 = uVar1;
      uVar8 = uVar1;
      if (0x7f < param_2 << 3) {
        do {
          pbVar4 = pbVar3 + 1;
          *pbVar3 = (byte)uVar7 | 0x80;
          uVar8 = uVar7 >> 7;
          uVar9 = uVar7 >> 0xe;
          pbVar3 = pbVar4;
          uVar7 = uVar8;
        } while (uVar9 != 0);
      }
      lVar5 = lVar5 + 1;
      *pbVar4 = (byte)uVar8;
      *(undefined8 *)(pbVar4 + 1) = uVar6;
      pbVar3 = pbVar4 + 9;
    } while (lVar5 != lVar2);
    *(byte **)(unaff_x20 + 8) = pbVar3;
  }
  return;
}



/* Entry: 1045af04c; end: 1045af0ab;  */

void FUN_1045af04c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined8 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x10))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 1045af0ac; end: 1045af0bf;  */

void FUN_1045af0ac(void)

{
  FUN_1045af0c0();
  return;
}



/* Entry: 1045af0c0; end: 1045af14f;  */

void FUN_1045af0c0(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar6 = 0;
    pbVar3 = *(byte **)(unaff_x20 + 8);
    uVar7 = (ulong)(uint)(param_2 << 3);
    do {
      uVar1 = *(uint *)(param_1 + 0x20 + lVar6 * 4);
      uVar8 = (ulong)(int)uVar1;
      pbVar4 = pbVar3;
      uVar9 = uVar7;
      uVar10 = uVar7;
      if (0x7f < uVar7) {
        do {
          pbVar4 = pbVar3 + 1;
          *pbVar3 = (byte)uVar10 | 0x80;
          uVar9 = uVar10 >> 7;
          uVar11 = uVar10 >> 0xe;
          pbVar3 = pbVar4;
          uVar10 = uVar9;
        } while (uVar11 != 0);
      }
      pbVar5 = pbVar4 + 1;
      *pbVar4 = (byte)uVar9;
      pbVar3 = pbVar5;
      uVar9 = uVar8;
      if (0x7f < uVar1) {
        do {
          pbVar5 = pbVar3 + 1;
          *pbVar3 = (byte)uVar9 | 0x80;
          uVar8 = uVar9 >> 7;
          uVar10 = uVar9 >> 0xe;
          pbVar3 = pbVar5;
          uVar9 = uVar8;
        } while (uVar10 != 0);
      }
      lVar6 = lVar6 + 1;
      pbVar3 = pbVar5 + 1;
      *pbVar5 = (byte)uVar8;
    } while (lVar6 != lVar2);
    *(byte **)(unaff_x20 + 8) = pbVar3;
  }
  return;
}



/* Entry: 1045af150; end: 1045af1af;  */

void FUN_1045af150(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x18))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 1045af1b0; end: 1045af20f;  */

void FUN_1045af1b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined8 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x20))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 1045af210; end: 1045af223;  */

void FUN_1045af210(void)

{
  FUN_1045af224();
  return;
}



/* Entry: 1045af224; end: 1045af2b3;  */

void FUN_1045af224(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar6 = 0;
    pbVar3 = *(byte **)(unaff_x20 + 8);
    uVar7 = (ulong)(uint)(param_2 << 3);
    do {
      uVar1 = *(uint *)(param_1 + 0x20 + lVar6 * 4);
      uVar8 = (ulong)uVar1;
      pbVar4 = pbVar3;
      uVar9 = uVar7;
      uVar10 = uVar7;
      if (0x7f < uVar7) {
        do {
          pbVar4 = pbVar3 + 1;
          *pbVar3 = (byte)uVar10 | 0x80;
          uVar9 = uVar10 >> 7;
          uVar11 = uVar10 >> 0xe;
          pbVar3 = pbVar4;
          uVar10 = uVar9;
        } while (uVar11 != 0);
      }
      pbVar5 = pbVar4 + 1;
      *pbVar4 = (byte)uVar9;
      pbVar3 = pbVar5;
      uVar9 = uVar8;
      if (0x7f < uVar1) {
        do {
          pbVar5 = pbVar3 + 1;
          *pbVar3 = (byte)uVar9 | 0x80;
          uVar8 = uVar9 >> 7;
          uVar10 = uVar9 >> 0xe;
          pbVar3 = pbVar5;
          uVar9 = uVar8;
        } while (uVar10 != 0);
      }
      lVar6 = lVar6 + 1;
      pbVar3 = pbVar5 + 1;
      *pbVar5 = (byte)uVar8;
    } while (lVar6 != lVar2);
    *(byte **)(unaff_x20 + 8) = pbVar3;
  }
  return;
}



/* Entry: 1045af2b4; end: 1045af313;  */

void FUN_1045af2b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x28))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 1045af314; end: 1045af3a3;  */

void FUN_1045af314(long param_1,int param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar5 = 0;
    pbVar2 = *(byte **)(unaff_x20 + 8);
    uVar6 = (ulong)(uint)(param_2 << 3);
    do {
      uVar7 = *(ulong *)(param_1 + 0x20 + lVar5 * 8);
      pbVar3 = pbVar2;
      uVar8 = uVar6;
      uVar9 = uVar6;
      if (0x7f < uVar6) {
        do {
          pbVar3 = pbVar2 + 1;
          *pbVar2 = (byte)uVar8 | 0x80;
          uVar9 = uVar8 >> 7;
          uVar10 = uVar8 >> 0xe;
          pbVar2 = pbVar3;
          uVar8 = uVar9;
        } while (uVar10 != 0);
      }
      pbVar4 = pbVar3 + 1;
      *pbVar3 = (byte)uVar9;
      pbVar2 = pbVar4;
      uVar8 = uVar7;
      if (0x7f < uVar7) {
        do {
          pbVar4 = pbVar2 + 1;
          *pbVar2 = (byte)uVar8 | 0x80;
          uVar7 = uVar8 >> 7;
          uVar9 = uVar8 >> 0xe;
          pbVar2 = pbVar4;
          uVar8 = uVar7;
        } while (uVar9 != 0);
      }
      lVar5 = lVar5 + 1;
      pbVar2 = pbVar4 + 1;
      *pbVar4 = (byte)uVar7;
    } while (lVar5 != lVar1);
    *(byte **)(unaff_x20 + 8) = pbVar2;
  }
  return;
}



/* Entry: 1045af3a4; end: 1045af403;  */

void FUN_1045af3a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined8 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x30))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 1045af404; end: 1045af417;  */

void FUN_1045af404(void)

{
  FUN_1045af418();
  return;
}



/* Entry: 1045af418; end: 1045af4af;  */

void FUN_1045af418(long param_1,int param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar5 = 0;
    pbVar2 = *(byte **)(unaff_x20 + 8);
    uVar6 = (ulong)(uint)(param_2 << 3);
    do {
      lVar7 = (long)*(int *)(param_1 + 0x20 + lVar5 * 4);
      pbVar3 = pbVar2;
      uVar9 = uVar6;
      uVar8 = uVar6;
      if (0x7f < uVar6) {
        do {
          pbVar3 = pbVar2 + 1;
          *pbVar2 = (byte)uVar8 | 0x80;
          uVar9 = uVar8 >> 7;
          uVar10 = uVar8 >> 0xe;
          pbVar2 = pbVar3;
          uVar8 = uVar9;
        } while (uVar10 != 0);
      }
      uVar8 = lVar7 << 1 ^ lVar7 >> 0x3f;
      pbVar4 = pbVar3 + 1;
      *pbVar3 = (byte)uVar9;
      pbVar2 = pbVar4;
      uVar9 = uVar8;
      if (0x7f < uVar8) {
        do {
          pbVar4 = pbVar2 + 1;
          *pbVar2 = (byte)uVar9 | 0x80;
          uVar8 = uVar9 >> 7;
          uVar10 = uVar9 >> 0xe;
          pbVar2 = pbVar4;
          uVar9 = uVar8;
        } while (uVar10 != 0);
      }
      lVar5 = lVar5 + 1;
      pbVar2 = pbVar4 + 1;
      *pbVar4 = (byte)uVar8;
    } while (lVar5 != lVar1);
    *(byte **)(unaff_x20 + 8) = pbVar2;
  }
  return;
}



/* Entry: 1045af4b0; end: 1045af50f;  */

void FUN_1045af4b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x38))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 1045af510; end: 1045af523;  */

void FUN_1045af510(void)

{
  FUN_1045af524();
  return;
}



/* Entry: 1045af524; end: 1045af5bb;  */

void FUN_1045af524(long param_1,int param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar5 = 0;
    pbVar2 = *(byte **)(unaff_x20 + 8);
    uVar6 = (ulong)(uint)(param_2 << 3);
    do {
      lVar7 = *(long *)(param_1 + 0x20 + lVar5 * 8);
      pbVar3 = pbVar2;
      uVar9 = uVar6;
      uVar8 = uVar6;
      if (0x7f < uVar6) {
        do {
          pbVar3 = pbVar2 + 1;
          *pbVar2 = (byte)uVar8 | 0x80;
          uVar9 = uVar8 >> 7;
          uVar10 = uVar8 >> 0xe;
          pbVar2 = pbVar3;
          uVar8 = uVar9;
        } while (uVar10 != 0);
      }
      uVar8 = lVar7 << 1 ^ lVar7 >> 0x3f;
      pbVar4 = pbVar3 + 1;
      *pbVar3 = (byte)uVar9;
      pbVar2 = pbVar4;
      uVar9 = uVar8;
      if (0x7f < uVar8) {
        do {
          pbVar4 = pbVar2 + 1;
          *pbVar2 = (byte)uVar9 | 0x80;
          uVar8 = uVar9 >> 7;
          uVar10 = uVar9 >> 0xe;
          pbVar2 = pbVar4;
          uVar9 = uVar8;
        } while (uVar10 != 0);
      }
      lVar5 = lVar5 + 1;
      pbVar2 = pbVar4 + 1;
      *pbVar4 = (byte)uVar8;
    } while (lVar5 != lVar1);
    *(byte **)(unaff_x20 + 8) = pbVar2;
  }
  return;
}



/* Entry: 1045af5bc; end: 1045af61b;  */

void FUN_1045af5bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined8 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x40))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 1045af61c; end: 1045af67b;  */

void FUN_1045af61c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x48))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 1045af67c; end: 1045af6db;  */

void FUN_1045af67c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined8 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x50))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 1045af6dc; end: 1045af74f;  */

void FUN_1045af6dc(long param_1,uint param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar6 = 0;
    pbVar4 = *(byte **)(unaff_x20 + 8);
    uVar1 = ((ulong)param_2 & 0x1fffffff) << 3 | 5;
    do {
      uVar2 = *(undefined4 *)(param_1 + 0x20 + lVar6 * 4);
      pbVar5 = pbVar4;
      uVar7 = uVar1;
      uVar8 = uVar1;
      if (0x7f < param_2 << 3) {
        do {
          pbVar5 = pbVar4 + 1;
          *pbVar4 = (byte)uVar7 | 0x80;
          uVar8 = uVar7 >> 7;
          uVar9 = uVar7 >> 0xe;
          pbVar4 = pbVar5;
          uVar7 = uVar8;
        } while (uVar9 != 0);
      }
      lVar6 = lVar6 + 1;
      *pbVar5 = (byte)uVar8;
      *(undefined4 *)(pbVar5 + 1) = uVar2;
      pbVar4 = pbVar5 + 5;
    } while (lVar6 != lVar3);
    *(byte **)(unaff_x20 + 8) = pbVar4;
  }
  return;
}



/* Entry: 1045af750; end: 1045af7af;  */

void FUN_1045af750(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x58))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 1045af7b0; end: 1045af823;  */

void FUN_1045af7b0(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar5 = 0;
    pbVar3 = *(byte **)(unaff_x20 + 8);
    uVar1 = ((ulong)param_2 & 0x1fffffff) << 3 | 1;
    do {
      uVar6 = *(undefined8 *)(param_1 + 0x20 + lVar5 * 8);
      pbVar4 = pbVar3;
      uVar7 = uVar1;
      uVar8 = uVar1;
      if (0x7f < param_2 << 3) {
        do {
          pbVar4 = pbVar3 + 1;
          *pbVar3 = (byte)uVar7 | 0x80;
          uVar8 = uVar7 >> 7;
          uVar9 = uVar7 >> 0xe;
          pbVar3 = pbVar4;
          uVar7 = uVar8;
        } while (uVar9 != 0);
      }
      lVar5 = lVar5 + 1;
      *pbVar4 = (byte)uVar8;
      *(undefined8 *)(pbVar4 + 1) = uVar6;
      pbVar3 = pbVar4 + 9;
    } while (lVar5 != lVar2);
    *(byte **)(unaff_x20 + 8) = pbVar3;
  }
  return;
}



/* Entry: 1045af824; end: 1045af883;  */

void FUN_1045af824(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined8 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x60))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 1045af884; end: 1045af897;  */

void FUN_1045af884(void)

{
  FUN_1045af898();
  return;
}



/* Entry: 1045af898; end: 1045af903;  */

void FUN_1045af898(long param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar5 = 0;
    pbVar3 = *(byte **)(unaff_x20 + 8);
    uVar6 = (ulong)(uint)(param_2 << 3);
    do {
      bVar1 = *(byte *)(param_1 + 0x20 + lVar5);
      pbVar4 = pbVar3;
      uVar7 = uVar6;
      uVar8 = uVar6;
      if (0x7f < uVar6) {
        do {
          pbVar4 = pbVar3 + 1;
          *pbVar3 = (byte)uVar7 | 0x80;
          uVar8 = uVar7 >> 7;
          uVar9 = uVar7 >> 0xe;
          pbVar3 = pbVar4;
          uVar7 = uVar8;
        } while (uVar9 != 0);
      }
      lVar5 = lVar5 + 1;
      *pbVar4 = (byte)uVar8;
      pbVar4[1] = bVar1;
      pbVar3 = pbVar4 + 2;
    } while (lVar5 != lVar2);
    *(byte **)(unaff_x20 + 8) = pbVar3;
  }
  return;
}



/* Entry: 1045af904; end: 1045af963;  */

void FUN_1045af904(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined1 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined1 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x68))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 1045af964; end: 1045af977;  */

void FUN_1045af964(void)

{
  FUN_1045af978();
  return;
}



/* Entry: 1045af978; end: 1045afa47;  */

void FUN_1045af978(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
    lVar11 = 0;
    uVar2 = (param_2 & 0x1fffffff) << 3 | 2;
    do {
      puVar1 = (undefined8 *)(param_1 + 0x20 + lVar11 * 0x10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      pbVar5 = *(byte **)(unaff_x20 + 8);
      pbVar6 = pbVar5;
      uVar7 = uVar2;
      uVar8 = uVar2;
      if (0x7f < (uint)((int)param_2 << 3)) {
        do {
          pbVar6 = pbVar5 + 1;
          *pbVar5 = (byte)uVar8 | 0x80;
          uVar7 = uVar8 >> 7;
          uVar9 = uVar8 >> 0xe;
          pbVar5 = pbVar6;
          uVar8 = uVar7;
        } while (uVar9 != 0);
      }
      lVar11 = lVar11 + 1;
      *pbVar6 = (byte)uVar7;
      *(byte **)(unaff_x20 + 8) = pbVar6 + 1;
      _swift_bridgeObjectRetain(uVar4);
      FUN_10454ede8(uVar3,uVar4);
      _swift_bridgeObjectRelease(uVar4);
    } while (lVar11 != lVar10);
  }
  return;
}



/* Entry: 1045afa48; end: 1045afadf;  */

void FUN_1045afa48(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x21;
  code *pcVar4;
  undefined8 *puVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    pcVar4 = *(code **)(param_4 + 0x70);
    puVar5 = (undefined8 *)(param_1 + 0x28);
    do {
      lVar3 = lVar3 + -1;
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      _swift_bridgeObjectRetain(uVar2);
      (*pcVar4)(uVar1,uVar2,param_2,param_3,param_4);
      _swift_bridgeObjectRelease(uVar2);
      if (unaff_x21 != 0) {
        return;
      }
      puVar5 = puVar5 + 2;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 1045afae0; end: 1045afaf3;  */

void FUN_1045afae0(void)

{
  FUN_1045afaf4();
  return;
}



/* Entry: 1045afaf4; end: 1045afe1b;  */

void FUN_1045afaf4(byte *param_1,undefined1 *param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x20;
  long unaff_x21;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(param_1 + 0x10);
  pbVar7 = param_1;
  if (lVar16 != 0) {
    lVar21 = 0;
    iVar8 = (int)param_2;
    uVar1 = ((ulong)param_2 & 0x1fffffff) << 3 | 2;
    pbVar17 = *(byte **)(unaff_x20 + 8);
    pbVar6 = param_1;
    puVar9 = param_2;
    do {
      pbVar7 = *(byte **)(param_1 + lVar21 * 0x10 + 0x20);
      param_2 = *(undefined1 **)(param_1 + lVar21 * 0x10 + 0x20 + 8);
      uVar15 = uVar1;
      uVar14 = uVar1;
      pbVar18 = pbVar17;
      if (0x7f < (uint)(iVar8 << 3)) {
        do {
          pbVar18 = pbVar17 + 1;
          *pbVar17 = (byte)uVar15 | 0x80;
          uVar14 = uVar15 >> 7;
          uVar11 = uVar15 >> 0xe;
          uVar15 = uVar14;
          pbVar17 = pbVar18;
        } while (uVar11 != 0);
      }
      pbVar12 = pbVar18 + 1;
      *pbVar18 = (byte)uVar14;
      uVar5 = (uint)((ulong)param_2 >> 0x20);
      uVar10 = uVar5 >> 0x1e;
      iVar19 = (int)pbVar7;
      iVar13 = (int)((ulong)pbVar7 >> 0x20);
      if (uVar5 >> 0x1e < 2) {
        if (uVar10 == 0) {
          uVar15 = (ulong)param_2 >> 0x30 & 0xff;
        }
        else {
          if (SBORROW4(iVar13,iVar19)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1045afe08);
            (*pcVar22)();
          }
          uVar15 = (ulong)(iVar13 - iVar19);
        }
joined_r0x0001045afbdc:
        pbVar17 = pbVar12;
        uVar14 = uVar15;
        if (0x7f < uVar15) {
          do {
            pbVar12 = pbVar17 + 1;
            *pbVar17 = (byte)uVar14 | 0x80;
            uVar15 = uVar14 >> 7;
            uVar11 = uVar14 >> 0xe;
            pbVar17 = pbVar12;
            uVar14 = uVar15;
          } while (uVar11 != 0);
        }
        pbVar17 = pbVar12 + 1;
        *pbVar12 = (byte)uVar15;
        pbVar18 = pbVar7;
        if (uVar10 == 2) {
          lVar20 = *(long *)(pbVar7 + 0x10);
          lVar3 = *(long *)(pbVar7 + 0x18);
          func_0x00010006c00c(pbVar7,param_2);
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          pbVar6 = pbVar18;
          if (pbVar18 != (byte *)0x0) {
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar20,(long)pbVar6)) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x1045afe14);
              (*pcVar22)();
            }
            pbVar18 = pbVar18 + (lVar20 - (long)pbVar6);
          }
          pbVar12 = (byte *)(lVar3 - lVar20);
          if (SBORROW8(lVar3,lVar20)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1045afe10);
            (*pcVar22)();
          }
          __s10Foundation13__DataStorageC7_lengthSivg();
          if ((long)pbVar12 <= (long)pbVar6) {
            pbVar6 = pbVar12;
          }
          if (pbVar18 == (byte *)0x0) {
            func_0x00010006c090(pbVar7,param_2);
          }
          else {
            if (pbVar6 != (byte *)0x0) goto LAB_1045afc90;
LAB_1045afd0c:
            func_0x00010006c090(pbVar7,param_2);
          }
        }
        else if (uVar10 == 1) {
          lVar20 = (long)iVar19;
          pbVar12 = (byte *)(((long)pbVar7 >> 0x20) - lVar20);
          if ((long)pbVar7 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1045afe0c);
            (*pcVar22)();
          }
          func_0x00010006c00c(pbVar7,param_2);
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          pbVar6 = pbVar18;
          if (pbVar18 != (byte *)0x0) {
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar20,(long)pbVar6)) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x1045afe18);
              (*pcVar22)();
            }
            pbVar18 = pbVar18 + (lVar20 - (long)pbVar6);
          }
          __s10Foundation13__DataStorageC7_lengthSivg();
          if ((long)pbVar12 <= (long)pbVar6) {
            pbVar6 = pbVar12;
          }
          if ((pbVar18 == (byte *)0x0) || (pbVar6 == (byte *)0x0)) goto LAB_1045afd0c;
LAB_1045afc90:
          param_3 = pbVar6;
          _memmove(pbVar17,pbVar18);
          func_0x00010006c090(pbVar7,param_2);
          pbVar17 = pbVar17 + (long)pbVar6;
        }
        else {
          uStack_76 = SUB81(pbVar7,0);
          uStack_75 = (undefined1)((ulong)pbVar7 >> 8);
          uStack_74 = (undefined1)((ulong)pbVar7 >> 0x10);
          uStack_73 = (undefined1)((ulong)pbVar7 >> 0x18);
          uStack_72 = (undefined1)((ulong)pbVar7 >> 0x20);
          uStack_71 = (undefined1)((ulong)pbVar7 >> 0x28);
          uStack_70 = (undefined1)((ulong)pbVar7 >> 0x30);
          uStack_6f = (undefined1)((ulong)pbVar7 >> 0x38);
          uStack_6e = SUB81(param_2,0);
          uStack_6d = (undefined1)((ulong)param_2 >> 8);
          uStack_6c = (undefined1)((ulong)param_2 >> 0x10);
          uStack_6b = (undefined1)((ulong)param_2 >> 0x18);
          uStack_6a = (undefined1)((ulong)param_2 >> 0x20);
          pbVar18 = (byte *)((ulong)param_2 >> 0x30 & 0xff);
          uStack_69 = (undefined1)((ulong)param_2 >> 0x28);
          pbVar7 = pbVar6;
          param_2 = puVar9;
          if (pbVar18 != (byte *)0x0) {
            param_2 = &uStack_76;
            pbVar7 = pbVar17;
            param_3 = pbVar18;
            _memmove(pbVar17,param_2);
            pbVar17 = pbVar17 + (long)pbVar18;
          }
        }
      }
      else {
        if (uVar10 == 2) {
          uVar15 = *(long *)(pbVar7 + 0x18) - *(long *)(pbVar7 + 0x10);
          if (SBORROW8(*(long *)(pbVar7 + 0x18),*(long *)(pbVar7 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1045afe04);
            (*pcVar22)();
          }
          goto joined_r0x0001045afbdc;
        }
        pbVar18[1] = 0;
        pbVar17 = pbVar18 + 2;
        pbVar7 = pbVar6;
        param_2 = puVar9;
      }
      lVar21 = lVar21 + 1;
      pbVar6 = pbVar7;
      puVar9 = param_2;
    } while (lVar21 != lVar16);
    *(byte **)(unaff_x20 + 8) = pbVar17;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)(pbVar7 + 0x10);
  if (lVar16 != 0) {
    pcVar22 = *(code **)(param_4 + 0x78);
    pbVar7 = pbVar7 + 0x28;
    do {
      uVar2 = *(undefined8 *)(pbVar7 + -8);
      uVar4 = *(undefined8 *)pbVar7;
      func_0x00010006c00c(uVar2,uVar4);
      (*pcVar22)(uVar2,uVar4,param_2,param_3,param_4);
      if (unaff_x21 != 0) {
        func_0x00010006c090(uVar2,uVar4);
        return;
      }
      pbVar7 = pbVar7 + 0x10;
      func_0x00010006c090(uVar2,uVar4);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}



/* Entry: 1045afe1c; end: 1045afed3;  */

void FUN_1045afe1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    pcVar5 = *(code **)(param_4 + 0x78);
    puVar3 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar3[-1];
      uVar2 = *puVar3;
      func_0x00010006c00c(uVar1,uVar2);
      (*pcVar5)(uVar1,uVar2,param_2,param_3,param_4);
      if (unaff_x21 != 0) {
        func_0x00010006c090(uVar1,uVar2);
        return;
      }
      puVar3 = puVar3 + 2;
      func_0x00010006c090(uVar1,uVar2);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 1045afed4; end: 1045afefb;  */

void FUN_1045afed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1045afefc(param_1,param_2,param_5,param_3,param_6,param_4);
  return;
}



/* Entry: 1045afefc; end: 1045b0023;  */

void FUN_1045afefc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x21;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(param_4 + -8);
  lVar4 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  lStack_60 = param_5;
  uStack_58 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar6 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  __sSa8endIndexSivg();
  if (lVar4 != 0) {
    lVar4 = 0;
    do {
      __sSayxSicig(lVar6 - extraout_x12,lVar4,param_1,param_4);
      lVar1 = lVar4 + 1;
      if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1045b0024);
        (*pcVar2)();
      }
      (**(code **)(lVar5 + 0x20))(lVar6,lVar6 - extraout_x12,param_4);
      (**(code **)(lStack_60 + 0x80))(lVar6,uStack_70,param_4,uStack_58,uStack_68);
      (**(code **)(lVar5 + 8))(lVar6,param_4);
      if (unaff_x21 != 0) {
        return;
      }
      lVar3 = param_1;
      __sSa8endIndexSivg(param_1,param_4);
      lVar4 = lVar4 + 1;
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 1045b0024; end: 1045b004b;  */

void FUN_1045b0024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1045b004c(param_1,param_2,param_5,param_3,param_6,param_4);
  return;
}



/* Entry: 1045b004c; end: 1045b0173;  */

void FUN_1045b004c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x21;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(param_4 + -8);
  lVar4 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  lStack_60 = param_5;
  uStack_58 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar6 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  __sSa8endIndexSivg();
  if (lVar4 != 0) {
    lVar4 = 0;
    do {
      __sSayxSicig(lVar6 - extraout_x12,lVar4,param_1,param_4);
      lVar1 = lVar4 + 1;
      if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1045b0174);
        (*pcVar2)();
      }
      (**(code **)(lVar5 + 0x20))(lVar6,lVar6 - extraout_x12,param_4);
      (**(code **)(lStack_60 + 0x90))(lVar6,uStack_70,param_4,uStack_58,uStack_68);
      (**(code **)(lVar5 + 8))(lVar6,param_4);
      if (unaff_x21 != 0) {
        return;
      }
      lVar3 = param_1;
      __sSa8endIndexSivg(param_1,param_4);
      lVar4 = lVar4 + 1;
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 1045b0174; end: 1045b018f;  */

void FUN_1045b0174(void)

{
  FUN_1045adfec();
  return;
}



/* Entry: 1045b0190; end: 1045b01d3;  */

void FUN_1045b0190(float param_1)

{
  double dVar1;
  
  __ss6HasherV8_combineyySuF();
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = (double)param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  return;
}



/* Entry: 1045b01d4; end: 1045b024f;  */

void FUN_1045b01d4(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x10))((double)param_1);
  return;
}



/* Entry: 1045b0250; end: 1045b0393;  */

void FUN_1045b0250(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_1045a23d0(param_2);
  FUN_104540d74(": ",2);
  if (param_1 < 0) {
    uVar3 = *unaff_x20;
    uVar1 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar3 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2d;
    *unaff_x20 = uVar3;
    param_1 = -param_1;
  }
  func_0x0001045a0584(param_1);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 1045b0394; end: 1045b047f;  */

void FUN_1045b0394(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    if ((unaff_x20[9] & 1) == 0) {
      func_0x0001045737d0(param_1);
    }
    else {
      if (param_1 < 0) {
        uVar3 = *unaff_x20;
        uVar1 = uVar3;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar2 = uVar3;
        if ((uVar1 & 1) == 0) {
          uVar2 = 0;
          func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
        }
        uVar1 = *(ulong *)(uVar2 + 0x10);
        uVar3 = uVar2;
        if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
          uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
          func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
        }
        *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
        *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2d;
        *unaff_x20 = uVar3;
        param_1 = -param_1;
      }
      func_0x0001045736fc(param_1);
    }
  }
  return;
}



/* Entry: 1045b0480; end: 1045b04d3;  */

void FUN_1045b0480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001045b04a8(param_1,param_2,param_5,param_3,param_6,param_4);
  return;
}



/* Entry: 1045b04d4; end: 1045b050b;  */

void FUN_1045b04d4(undefined8 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  func_0x0001045b2114();
  return;
}



/* Entry: 1045b050c; end: 1045b07c3;  */

void FUN_1045b050c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    uVar5 = *unaff_x20;
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar5,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      fVar8 = *(float *)(param_1 + 0x20);
      if ((((uint)fVar8 ^ 0xffffffff) & 0x7f800000) == 0) {
        if (((uint)fVar8 & 0x7fffff) == 0) {
          if (0.0 <= fVar8) {
            puVar2 = &UNK_10f748a00;
            uVar4 = 10;
          }
          else {
            puVar2 = &UNK_10f7489f4;
            uVar4 = 0xb;
          }
        }
        else {
          puVar2 = &UNK_10f7489ee;
          uVar4 = 5;
        }
        FUN_104540d74(puVar2,uVar4);
      }
      else {
        __sSf16debugDescriptionSSvg();
        func_0x000104540f24();
      }
      if (lVar6 != 1) {
        lVar6 = lVar6 + -1;
        pfVar7 = (float *)(param_1 + 0x24);
        do {
          fVar8 = *pfVar7;
          uVar5 = *unaff_x20;
          uVar1 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar5;
          if ((uVar1 & 1) == 0) {
            uVar3 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar1 = *(ulong *)(uVar3 + 0x10);
          uVar5 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            func_0x0001014d97ac(uVar5,uVar1 + 1,1,uVar3);
          }
          *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          if ((((uint)fVar8 ^ 0xffffffff) & 0x7f800000) == 0) {
            if (((uint)fVar8 & 0x7fffff) == 0) {
              if (0.0 <= fVar8) {
                FUN_104540d74(&UNK_10f748a00,10);
              }
              else {
                FUN_104540d74(&UNK_10f7489f4,0xb);
              }
            }
            else {
              FUN_104540d74(&UNK_10f7489ee,5);
            }
          }
          else {
            __sSf16debugDescriptionSSvg(fVar8);
            func_0x000104540f24();
          }
          lVar6 = lVar6 + -1;
          pfVar7 = pfVar7 + 1;
        } while (lVar6 != 0);
      }
      uVar5 = *unaff_x20;
    }
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar5,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5d;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 1045b07c4; end: 1045b07db;  */

void FUN_1045b07c4(void)

{
  long in_x3;
  
  (**(code **)(in_x3 + 0x98))();
  return;
}



/* Entry: 1045b07dc; end: 1045b0813;  */

void FUN_1045b07dc(undefined8 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  FUN_1045b20b0();
  return;
}



/* Entry: 1045b0814; end: 1045b0acb;  */

void FUN_1045b0814(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar5;
  long lVar6;
  double *pdVar7;
  double dVar8;
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    uVar5 = *unaff_x20;
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar5,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      dVar8 = *(double *)(param_1 + 0x20);
      if ((((ulong)dVar8 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
        if (((ulong)dVar8 & 0xfffffffffffff) == 0) {
          if (0.0 <= dVar8) {
            puVar2 = &UNK_10f748a00;
            uVar4 = 10;
          }
          else {
            puVar2 = &UNK_10f7489f4;
            uVar4 = 0xb;
          }
        }
        else {
          puVar2 = &UNK_10f7489ee;
          uVar4 = 5;
        }
        FUN_104540d74(puVar2,uVar4);
      }
      else {
        __sSd16debugDescriptionSSvg();
        func_0x000104540f24();
      }
      if (lVar6 != 1) {
        lVar6 = lVar6 + -1;
        pdVar7 = (double *)(param_1 + 0x28);
        do {
          dVar8 = *pdVar7;
          uVar5 = *unaff_x20;
          uVar1 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar5;
          if ((uVar1 & 1) == 0) {
            uVar3 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar1 = *(ulong *)(uVar3 + 0x10);
          uVar5 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            func_0x0001014d97ac(uVar5,uVar1 + 1,1,uVar3);
          }
          *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          if ((((ulong)dVar8 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
            if (((ulong)dVar8 & 0xfffffffffffff) == 0) {
              if (0.0 <= dVar8) {
                FUN_104540d74(&UNK_10f748a00,10);
              }
              else {
                FUN_104540d74(&UNK_10f7489f4,0xb);
              }
            }
            else {
              FUN_104540d74(&UNK_10f7489ee,5);
            }
          }
          else {
            __sSd16debugDescriptionSSvg(dVar8);
            func_0x000104540f24();
          }
          lVar6 = lVar6 + -1;
          pdVar7 = pdVar7 + 1;
        } while (lVar6 != 0);
      }
      uVar5 = *unaff_x20;
    }
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar5,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5d;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 1045b0acc; end: 1045b0ae3;  */

void FUN_1045b0acc(void)

{
  long in_x3;
  
  (**(code **)(in_x3 + 0xa0))();
  return;
}



/* Entry: 1045b0ae4; end: 1045b0dd3;  */

void FUN_1045b0ae4(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar5;
  long lVar6;
  int *piVar7;
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    uVar4 = *unaff_x20;
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x5b;
    *unaff_x20 = uVar4;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      lVar5 = (long)*(int *)(param_1 + 0x20);
      if (*(int *)(param_1 + 0x20) < 0) {
        uVar2 = uVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar4;
        if ((uVar2 & 1) == 0) {
          uVar3 = 0;
          func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
        }
        uVar2 = *(ulong *)(uVar3 + 0x10);
        uVar4 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
          uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
        }
        *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
        *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2d;
        *unaff_x20 = uVar4;
        lVar5 = -lVar5;
      }
      func_0x0001045736fc(lVar5);
      lVar6 = lVar6 + -1;
      if (lVar6 != 0) {
        piVar7 = (int *)(param_1 + 0x24);
        do {
          iVar1 = *piVar7;
          lVar5 = (long)iVar1;
          uVar4 = *unaff_x20;
          uVar2 = uVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar4;
          if ((uVar2 & 1) == 0) {
            uVar3 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
          }
          uVar2 = *(ulong *)(uVar3 + 0x10);
          uVar4 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
            uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
          }
          *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
          *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2c;
          *unaff_x20 = uVar4;
          if (iVar1 < 0) {
            uVar2 = uVar4;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar3 = uVar4;
            if ((uVar2 & 1) == 0) {
              uVar3 = 0;
              func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
            }
            uVar2 = *(ulong *)(uVar3 + 0x10);
            uVar4 = uVar3;
            if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
              uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
              func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
            }
            *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
            *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2d;
            *unaff_x20 = uVar4;
            lVar5 = -lVar5;
          }
          func_0x0001045736fc(lVar5);
          lVar6 = lVar6 + -1;
          piVar7 = piVar7 + 1;
        } while (lVar6 != 0);
      }
      uVar4 = *unaff_x20;
    }
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x5d;
    *unaff_x20 = uVar4;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 1045b0dd4; end: 1045b0deb;  */

void FUN_1045b0dd4(void)

{
  long in_x3;
  
  (**(code **)(in_x3 + 0xa8))();
  return;
}



/* Entry: 1045b0dec; end: 1045b12ff;  */

void FUN_1045b0dec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  uVar8 = unaff_x20[9];
  FUN_1045754c0(param_2);
  if ((char)uVar8 == '\x01') {
    if (unaff_x21 != 0) {
      return;
    }
    uVar5 = *unaff_x20;
    uVar8 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar8 & 1) == 0) {
      uVar3 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar8 = *(ulong *)(uVar3 + 0x10);
    uVar6 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar6,uVar8 + 1,1,uVar3);
    }
    *(ulong *)(uVar6 + 0x10) = uVar8 + 1;
    *(undefined1 *)(uVar6 + uVar8 + 0x20) = 0x5b;
    *unaff_x20 = uVar6;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      lVar7 = *(long *)(param_1 + 0x20);
      if (lVar7 < 0) {
        uVar8 = uVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar6;
        if ((uVar8 & 1) == 0) {
          uVar3 = 0;
          func_0x0001014d97ac(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
        }
        uVar8 = *(ulong *)(uVar3 + 0x10);
        uVar5 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          func_0x0001014d97ac(uVar5,uVar8 + 1,1,uVar3);
        }
        *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
        *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x2d;
        *unaff_x20 = uVar5;
        lVar7 = -lVar7;
      }
      func_0x0001045736fc(lVar7);
      lVar9 = lVar9 + -1;
      if (lVar9 != 0) {
        plVar10 = (long *)(param_1 + 0x28);
        do {
          lVar7 = *plVar10;
          uVar5 = *unaff_x20;
          uVar8 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar5;
          if ((uVar8 & 1) == 0) {
            uVar3 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar8 = *(ulong *)(uVar3 + 0x10);
          uVar5 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            func_0x0001014d97ac(uVar5,uVar8 + 1,1,uVar3);
          }
          *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
          *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          if (lVar7 < 0) {
            uVar8 = uVar5;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar3 = uVar5;
            if ((uVar8 & 1) == 0) {
              uVar3 = 0;
              func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
            }
            uVar8 = *(ulong *)(uVar3 + 0x10);
            uVar5 = uVar3;
            if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
              uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
              func_0x0001014d97ac(uVar5,uVar8 + 1,1,uVar3);
            }
            *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
            *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x2d;
            *unaff_x20 = uVar5;
            lVar7 = -lVar7;
          }
          func_0x0001045736fc(lVar7);
          lVar9 = lVar9 + -1;
          plVar10 = plVar10 + 1;
        } while (lVar9 != 0);
      }
      uVar6 = *unaff_x20;
    }
    uVar8 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar6;
    if ((uVar8 & 1) == 0) {
      uVar5 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    }
  }
  else {
    if (unaff_x21 != 0) {
      return;
    }
    uVar5 = *unaff_x20;
    uVar8 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar8 & 1) == 0) {
      uVar3 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar8 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar5,uVar8 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
    *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x5b;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      bVar4 = false;
      plVar10 = (long *)(param_1 + 0x20);
      do {
        lVar7 = *plVar10;
        uVar8 = *(ulong *)(uVar5 + 0x10);
        if (bVar4) {
          uVar3 = uVar8 + 1;
          uVar6 = uVar5;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
            uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            func_0x0001014d97ac(uVar6,uVar3,1,uVar5);
          }
          *(ulong *)(uVar6 + 0x10) = uVar3;
          *(undefined1 *)(uVar6 + uVar8 + 0x20) = 0x2c;
          uVar5 = uVar6;
          uVar8 = uVar3;
        }
        lVar1 = uVar8 + 1;
        uVar3 = uVar5;
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
          uVar3 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
          func_0x0001014d97ac(uVar3,lVar1,1,uVar5);
        }
        *(long *)(uVar3 + 0x10) = lVar1;
        *(undefined1 *)(uVar3 + uVar8 + 0x20) = 0x22;
        *unaff_x20 = uVar3;
        if (lVar7 < 0) {
          lVar2 = uVar8 + 2;
          uVar8 = uVar3;
          if ((long)(*(ulong *)(uVar3 + 0x18) >> 1) < lVar2) {
            uVar8 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            func_0x0001014d97ac(uVar8,lVar2,1,uVar3);
          }
          *(long *)(uVar8 + 0x10) = lVar2;
          *(undefined1 *)(uVar8 + lVar1 + 0x20) = 0x2d;
          *unaff_x20 = uVar8;
          lVar7 = -lVar7;
        }
        func_0x0001045736fc(lVar7);
        uVar5 = *unaff_x20;
        uVar8 = uVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar5;
        if ((uVar8 & 1) == 0) {
          uVar3 = 0;
          func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
        }
        uVar8 = *(ulong *)(uVar3 + 0x10);
        uVar5 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          func_0x0001014d97ac(uVar5,uVar8 + 1,1,uVar3);
        }
        *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
        *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x22;
        *unaff_x20 = uVar5;
        bVar4 = true;
        lVar9 = lVar9 + -1;
        plVar10 = plVar10 + 1;
      } while (lVar9 != 0);
    }
  }
  uVar8 = *(ulong *)(uVar5 + 0x10);
  uVar3 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x0001014d97ac(uVar3,uVar8 + 1,1,uVar5);
  }
  *(ulong *)(uVar3 + 0x10) = uVar8 + 1;
  *(undefined1 *)(uVar3 + uVar8 + 0x20) = 0x5d;
  *unaff_x20 = uVar3;
  *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  return;
}



/* Entry: 1045b1300; end: 1045b1317;  */

void FUN_1045b1300(void)

{
  long in_x3;
  
  (**(code **)(in_x3 + 0xb0))();
  return;
}



/* Entry: 1045b1318; end: 1045b1503;  */

void FUN_1045b1318(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined4 *puVar6;
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    uVar4 = *unaff_x20;
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x5b;
    *unaff_x20 = uVar4;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 != 0) {
      func_0x0001045736fc(*(undefined4 *)(param_1 + 0x20));
      lVar5 = lVar5 + -1;
      if (lVar5 != 0) {
        puVar6 = (undefined4 *)(param_1 + 0x24);
        do {
          uVar1 = *puVar6;
          uVar4 = *unaff_x20;
          uVar2 = uVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar4;
          if ((uVar2 & 1) == 0) {
            uVar3 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
          }
          uVar2 = *(ulong *)(uVar3 + 0x10);
          uVar4 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
            uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
          }
          *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
          *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2c;
          *unaff_x20 = uVar4;
          func_0x0001045736fc(uVar1);
          lVar5 = lVar5 + -1;
          puVar6 = puVar6 + 1;
        } while (lVar5 != 0);
      }
      uVar4 = *unaff_x20;
    }
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
      uVar3 = uVar4;
    }
    *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar3 + uVar2 + 0x20) = 0x5d;
    *unaff_x20 = uVar3;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 1045b1504; end: 1045b151b;  */

void FUN_1045b1504(void)

{
  long in_x3;
  
  (**(code **)(in_x3 + 0xb8))();
  return;
}



/* Entry: 1045b151c; end: 1045b1993;  */

void FUN_1045b151c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  uVar1 = unaff_x20[9];
  FUN_1045754c0(param_2);
  if ((char)uVar1 == '\x01') {
    if (unaff_x21 != 0) {
      return;
    }
    uVar3 = *unaff_x20;
    uVar1 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar4 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      func_0x0001014d97ac(uVar4,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar4 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar4;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      func_0x0001045736fc(*(undefined8 *)(param_1 + 0x20));
      lVar6 = lVar6 + -1;
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)(param_1 + 0x28);
        do {
          uVar5 = *puVar7;
          uVar3 = *unaff_x20;
          uVar1 = uVar3;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar2 = uVar3;
          if ((uVar1 & 1) == 0) {
            uVar2 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
          }
          uVar1 = *(ulong *)(uVar2 + 0x10);
          uVar3 = uVar2;
          if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
            func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
          }
          *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = uVar3;
          func_0x0001045736fc(uVar5);
          lVar6 = lVar6 + -1;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
      uVar4 = *unaff_x20;
    }
    uVar1 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
  }
  else {
    if (unaff_x21 != 0) {
      return;
    }
    uVar3 = *unaff_x20;
    uVar1 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar3 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar3;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = *(ulong *)(uVar3 + 0x10);
      uVar2 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
        uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        func_0x0001014d97ac(uVar2,uVar1 + 1,1,uVar3);
      }
      *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
      *(undefined1 *)(uVar2 + uVar1 + 0x20) = 0x22;
      *unaff_x20 = uVar2;
      func_0x0001045736fc(uVar5);
      uVar3 = *unaff_x20;
      uVar1 = uVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar2 = uVar3;
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
      }
      uVar1 = *(ulong *)(uVar2 + 0x10);
      uVar3 = uVar2;
      if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
        func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
      }
      *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
      *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x22;
      *unaff_x20 = uVar3;
      lVar6 = lVar6 + -1;
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)(param_1 + 0x28);
        do {
          uVar5 = *puVar7;
          uVar2 = *(ulong *)(uVar3 + 0x10);
          uVar1 = uVar2 + 1;
          uVar4 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
            uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            func_0x0001014d97ac(uVar4,uVar1,1,uVar3);
          }
          *(ulong *)(uVar4 + 0x10) = uVar1;
          *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2c;
          uVar3 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            func_0x0001014d97ac(uVar3,uVar2 + 2,1,uVar4);
          }
          *(ulong *)(uVar3 + 0x10) = uVar2 + 2;
          *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x22;
          *unaff_x20 = uVar3;
          func_0x0001045736fc(uVar5);
          uVar3 = *unaff_x20;
          uVar1 = uVar3;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar2 = uVar3;
          if ((uVar1 & 1) == 0) {
            uVar2 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
          }
          uVar1 = *(ulong *)(uVar2 + 0x10);
          uVar3 = uVar2;
          if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
            func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
          }
          *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x22;
          *unaff_x20 = uVar3;
          lVar6 = lVar6 + -1;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
    }
  }
  uVar1 = *(ulong *)(uVar3 + 0x10);
  uVar2 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x0001014d97ac(uVar2,uVar1 + 1,1,uVar3);
  }
  *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar2 + uVar1 + 0x20) = 0x5d;
  *unaff_x20 = uVar2;
  *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  return;
}



/* Entry: 1045b1994; end: 1045b1a0b;  */

void FUN_1045b1994(void)

{
  long in_x3;
  
  (**(code **)(in_x3 + 0xc0))();
  return;
}



/* Entry: 1045b1a0c; end: 1045b1a63;  */

void FUN_1045b1a0c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt32VF(*puVar2);
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 1045b1a64; end: 1045b1abb;  */

void FUN_1045b1a64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt64VF(*puVar2);
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 1045b1abc; end: 1045b1b13;  */

void FUN_1045b1abc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 != 0) {
    puVar2 = (undefined1 *)(param_1 + 0x20);
    do {
      __ss6HasherV8_combineyys5UInt8VF(*puVar2);
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 1045b1b14; end: 1045b1d4b;  */

void FUN_1045b1b14(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar8;
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    uVar7 = *unaff_x20;
    uVar2 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar7;
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar2 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x0001014d97ac(uVar7,uVar2 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar7 + uVar2 + 0x20) = 0x5b;
    *unaff_x20 = uVar7;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 != 0) {
      if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
        pcVar3 = "false";
        uVar6 = 5;
      }
      else {
        pcVar3 = "true";
        uVar6 = 4;
      }
      FUN_104540d74(pcVar3,uVar6);
      lVar8 = lVar8 + -1;
      if (lVar8 != 0) {
        pcVar3 = (char *)(param_1 + 0x21);
        do {
          cVar1 = *pcVar3;
          uVar7 = *unaff_x20;
          uVar2 = uVar7;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar5 = uVar7;
          if ((uVar2 & 1) == 0) {
            uVar5 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
          }
          uVar2 = *(ulong *)(uVar5 + 0x10);
          uVar7 = uVar5;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
            uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            func_0x0001014d97ac(uVar7,uVar2 + 1,1,uVar5);
          }
          *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
          *(undefined1 *)(uVar7 + uVar2 + 0x20) = 0x2c;
          *unaff_x20 = uVar7;
          if (cVar1 == '\0') {
            uVar6 = 5;
            pcVar4 = "false";
          }
          else {
            uVar6 = 4;
            pcVar4 = "true";
          }
          FUN_104540d74(pcVar4,uVar6);
          pcVar3 = pcVar3 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      uVar7 = *unaff_x20;
    }
    uVar2 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar7;
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar2 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x0001014d97ac(uVar7,uVar2 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar7 + uVar2 + 0x20) = 0x5d;
    *unaff_x20 = uVar7;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 1045b1d4c; end: 1045b1dcf;  */

void FUN_1045b1d4c(void)

{
  long in_x3;
  
  (**(code **)(in_x3 + 0xf8))();
  return;
}



/* Entry: 1045b1dd0; end: 1045b1e07;  */

void FUN_1045b1dd0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    func_0x000104573aac(param_1);
  }
  return;
}



/* Entry: 1045b1e08; end: 1045b1e53;  */

void FUN_1045b1e08(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_1045754c0(param_2);
  if (unaff_x21 == 0) {
    if ((*(byte *)(unaff_x20 + 0x48) & 1) == 0) {
      func_0x000104573b58(param_1);
    }
    else {
      func_0x0001045736fc(param_1);
    }
  }
  return;
}



/* Entry: 1045b1e54; end: 1045b1edf;  */

void FUN_1045b1e54(void)

{
  FUN_1045b050c();
  return;
}



/* Entry: 1045b1ee0; end: 1045b1f9f;  */

void FUN_1045b1ee0(undefined4 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_1045a23d0(param_2);
  FUN_104540d74(": ",2);
  func_0x0001045a0584(param_1);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 1045b1fa0; end: 1045b205f;  */

void FUN_1045b1fa0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_1045a23d0(param_2);
  FUN_104540d74(": ",2);
  func_0x0001045a0584(param_1);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 1045b2060; end: 1045b20af;  */

void FUN_1045b2060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001045b04a8(param_1,param_2,param_5,param_3,param_6,param_4);
  return;
}



/* Entry: 1045b20b0; end: 1045b2177;  */

void FUN_1045b20b0(undefined8 param_1,long param_2)

{
  long lVar1;
  double *pdVar2;
  double dVar3;
  
  lVar1 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 != 0) {
    pdVar2 = (double *)(param_2 + 0x20);
    do {
      dVar3 = 0.0;
      if (*pdVar2 != 0.0) {
        dVar3 = *pdVar2;
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar3);
      lVar1 = lVar1 + -1;
      pdVar2 = pdVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 1045b2178; end: 1045b259b;  */

void FUN_1045b2178(void)

{
  func_0x000100dbb9e8();
  return;
}



/* Entry: 1045b259c; end: 1045b25b7;  */

byte FUN_1045b259c(byte param_1)

{
  if (5 < param_1) {
    param_1 = 6;
  }
  return param_1;
}



/* Entry: 1045b25b8; end: 1045b268b;  */

void FUN_1045b25b8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyys5UInt8VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045b268c; end: 1045b269b;  */

void FUN_1045b268c(undefined1 *param_1)

{
  undefined1 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1045b269c; end: 1045b26db;  */

void FUN_1045b269c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19574;
  _swift_getWitnessTable(&UNK_10dd19574,&UNK_11078ab78);
  puRam0000000113087790 = puVar1;
  return;
}



/* Entry: 1045b26dc; end: 1045b283f;  */

int FUN_1045b26dc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1045b2758;
        goto LAB_1045b273c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1045b273c:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1045b2758:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1045b2840; end: 1045b289b;  */

undefined8 FUN_1045b2840(void)

{
  if (lRam0000000113084b48 != -1) {
    _swift_once(0x113084b48,FUN_10453c544);
  }
  _swift_retain(uRam0000000113813dd0);
  return 0;
}



/* Entry: 1045b289c; end: 1045b292b;  */

void FUN_1045b289c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1045400a4(0);
    _swift_allocObject();
    FUN_10453c584(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x10) = param_1;
  *(undefined8 *)(lVar3 + 0x18) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045b292c; end: 1045b29cf;  */

void FUN_1045b292c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_48;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1045400a4(0);
    _swift_allocObject();
    FUN_10453c584();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_48 = 0;
  uStack_70 = param_1;
  uStack_68 = param_2;
  _swift_beginAccess(lVar2 + 0x20,auStack_88,0x21,0);
  FUN_104540644(&uStack_70,lVar2 + 0x20);
  _swift_endAccess(auStack_88);
  return;
}



/* Entry: 1045b29d0; end: 1045b2a5f;  */

void FUN_1045b29d0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    FUN_1045400a4(0);
    _swift_allocObject();
    FUN_10453c584(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_1045b2ffc();
  return;
}



/* Entry: 1045b2a60; end: 1045b2aab;  */

undefined1  [16] FUN_1045b2a60(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x18));
  return auVar1;
}



/* Entry: 1045b2aac; end: 1045b2b2f;  */

undefined1  [16] FUN_1045b2aac(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar2 = 0x60;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x60,0x3c31);
  }
  *param_1 = lVar2;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar3 + 0x10,lVar2,0,0);
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(lVar2 + 0x50) = uVar1;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = (undefined8 *)(lVar2 + 0x48);
  auVar4._0_8_ = FUN_1045b2b30;
  return auVar4;
}



/* Entry: 1045b2b30; end: 1045b2c3f;  */

void FUN_1045b2b30(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *param_1;
  uVar6 = *(undefined8 *)(lVar4 + 0x48);
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  lVar5 = *(long *)(lVar4 + 0x58);
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045400a4(0);
      _swift_allocObject();
      FUN_10453c584(lVar5,uVar3);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x10,lVar4 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    *(undefined8 *)(lVar5 + 0x18) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045400a4(0);
      _swift_allocObject();
      FUN_10453c584(lVar5,uVar3);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x10,lVar4 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    *(undefined8 *)(lVar5 + 0x18) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045b2c40; end: 1045b2c5f;  */

void FUN_1045b2c40(void)

{
  FUN_10453c000();
  return;
}



/* Entry: 1045b2c60; end: 1045b2cc7;  */

undefined1  [16] FUN_1045b2c60(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = 0x60;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    param_2 = 0x1647;
    _swift_coroFrameAlloc();
  }
  *param_1 = lVar1;
  *(undefined8 *)(lVar1 + 0x58) = unaff_x20;
  lVar2 = lVar1;
  FUN_10453c000();
  *(long *)(lVar1 + 0x48) = lVar2;
  *(undefined8 *)(lVar1 + 0x50) = param_2;
  auVar3._8_8_ = (long *)(lVar1 + 0x48);
  auVar3._0_8_ = FUN_1045b2cc8;
  return auVar3;
}



/* Entry: 1045b2cc8; end: 1045b2dff;  */

void FUN_1045b2cc8(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar4 = (undefined8 *)*param_1;
  uVar6 = puVar4[9];
  uVar1 = puVar4[10];
  lVar5 = puVar4[0xb];
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((uVar2 & 1) == 0) {
      lVar7 = puVar4[0xb];
      uVar3 = 0;
      FUN_1045400a4(0);
      _swift_allocObject();
      FUN_10453c584(lVar5,uVar3);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    *puVar4 = uVar6;
    puVar4[1] = uVar1;
    *(undefined1 *)(puVar4 + 5) = 0;
    _swift_beginAccess(lVar5 + 0x20,puVar4 + 6,0x21,0);
    FUN_104540644(puVar4,lVar5 + 0x20);
    _swift_endAccess(puVar4 + 6);
  }
  else {
    func_0x00010006c00c(uVar6,uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((uVar2 & 1) == 0) {
      lVar7 = puVar4[0xb];
      uVar3 = 0;
      FUN_1045400a4(0);
      _swift_allocObject();
      FUN_10453c584(lVar5,uVar3);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    *puVar4 = uVar6;
    puVar4[1] = uVar1;
    *(undefined1 *)(puVar4 + 5) = 0;
    _swift_beginAccess(lVar5 + 0x20,puVar4 + 6,0x21,0);
    FUN_104540644(puVar4,lVar5 + 0x20);
    _swift_endAccess(puVar4 + 6);
    func_0x00010006c090(puVar4[9],puVar4[10]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(puVar4);
  return;
}



/* Entry: 1045b2e00; end: 1045b2e2b;  */

undefined1  [16] FUN_1045b2e00(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00010006c00c();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1045b2e2c; end: 1045b2e5f;  */

void FUN_1045b2e2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045b2e60; end: 1045b2e9b;  */

undefined8 FUN_1045b2e60(void)

{
  return 0x1045b2e70;
}



/* Entry: 1045b2e9c; end: 1045b2f5b;  */

void FUN_1045b2e9c(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd19730,0x12,&uStack_48,&lStack_40);
  puRam0000000113813df8 = puStack_38;
  lRam0000000113813df0 = lStack_40;
  puRam0000000113813e08 = puStack_28;
  puRam0000000113813e00 = puStack_30;
  puRam0000000113813e18 = puStack_18;
  puRam0000000113813e10 = puStack_20;
  return;
}



/* Entry: 1045b2f5c; end: 1045b2ffb;  */

void FUN_1045b2f5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087798 != -1) {
    _swift_once(0x113087798,FUN_1045b2e9c);
  }
  uVar5 = uRam0000000113813e18;
  uVar4 = uRam0000000113813e10;
  uVar3 = uRam0000000113813e08;
  uVar2 = uRam0000000113813e00;
  uVar1 = uRam0000000113813df8;
  *param_1 = uRam0000000113813df0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045b2ffc; end: 1045b30d3;  */

void FUN_1045b2ffc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  pcVar3 = *(code **)(param_4 + 0x10);
  while ((lVar1 = param_3, lVar2 = param_4, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      _swift_beginAccess(param_1 + 0x10,auStack_58,0x21,0);
      (**(code **)(param_4 + 0x150))(param_1 + 0x10,param_3,param_4);
      _swift_endAccess(auStack_58);
    }
    else if (lVar1 == 2) {
      FUN_1045b30d4(param_2,param_1,param_3,param_4);
    }
  }
  return;
}



/* Entry: 1045b30d4; end: 1045b317b;  */

void FUN_1045b30d4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  undefined1 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = param_2;
  FUN_10453c000();
  uStack_50 = param_1;
  lStack_48 = lVar1;
  (**(code **)(param_4 + 0x168))(&uStack_50,param_3,param_4);
  uStack_80 = uStack_50;
  lStack_78 = lStack_48;
  uStack_58 = 0;
  _swift_beginAccess(param_2 + 0x20,auStack_98,0x21,0);
  FUN_104540644(&uStack_80,param_2 + 0x20);
  _swift_endAccess(auStack_98);
  return;
}



/* Entry: 1045b317c; end: 1045b31e7;  */

void FUN_1045b317c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_1045b31e8(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 1045b31e8; end: 1045b335f;  */

void FUN_1045b31e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long unaff_x21;
  code *pcVar11;
  undefined1 auStack_68 [24];
  
  FUN_10453ce08();
  if (unaff_x21 != 0) {
    return;
  }
  puVar5 = (undefined1 *)(param_1 + 0x10);
  puVar7 = auStack_68;
  _swift_beginAccess(puVar5,puVar7,0,0);
  uVar1 = *(ulong *)(param_1 + 0x10);
  puVar6 = *(undefined1 **)(param_1 + 0x18);
  uVar3 = uVar1 & 0xffffffffffff;
  if (((ulong)puVar6 & 0x2000000000000000) != 0) {
    uVar3 = (ulong)puVar6 >> 0x38 & 0xf;
  }
  if (uVar3 != 0) {
    pcVar11 = *(code **)(param_4 + 0x70);
    _swift_bridgeObjectRetain(puVar6);
    puVar7 = puVar6;
    (*pcVar11)(uVar1,puVar6,1,param_3,param_4);
    _swift_bridgeObjectRelease();
    puVar5 = puVar6;
  }
  FUN_10453c000();
  uVar4 = (uint)((ulong)puVar7 >> 0x20);
  uVar8 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar8 == 0) {
      puVar6 = puVar7;
      func_0x00010006c090();
      uVar3 = (ulong)puVar7 & 0xff000000000000;
      puVar7 = puVar6;
      if (uVar3 == 0) {
        return;
      }
    }
    else {
      puVar6 = puVar5;
      func_0x00010006c090();
      iVar9 = (int)puVar5;
      lVar10 = (long)puVar5 >> 0x20;
      puVar5 = puVar6;
      if (iVar9 == lVar10) {
        return;
      }
    }
  }
  else {
    if (uVar8 != 2) {
      func_0x00010006c090();
      return;
    }
    lVar10 = *(long *)(puVar5 + 0x10);
    lVar2 = *(long *)(puVar5 + 0x18);
    func_0x00010006c090();
    if (lVar10 == lVar2) {
      return;
    }
  }
  FUN_10453c000();
  (**(code **)(param_4 + 0x78))();
  func_0x00010006c090(puVar5,puVar7);
  return;
}



/* Entry: 1045b3360; end: 1045b33db;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1045b3360(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                    ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  
  if ((param_3 != param_6) && (FUN_10453dc68(), (param_6 & 1) == 0)) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)param_2 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_5 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_1;
    pbVar11 = param_2;
    if ((ulong)param_2 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_1 != (byte *)0x0) || (param_2 != (byte *)0xc000000000000000)) ||
          (param_5 >> 0x3e < 3)) || ((uVar17 = 0, param_4 != 0 || (param_5 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar17 = (ulong)(iVar16 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar18 == 0) {
        uVar19 = param_5 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar16 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar16,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_4)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar17 = 0;
      if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar17 < 1) goto code_r0x000100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)param_1;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_1 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_1 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_1 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_1 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_1 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_1 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_1 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_2;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_2 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_2 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_2 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_2 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_2 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_2 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_1 >> 0x20) - (long)unaff_x25);
          if ((long)param_1 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_2;
          if (param_1 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_1 = (byte *)0x0;
          }
          else {
            pbVar11 = param_1;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_1 = param_1 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_1;
            if (param_1 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_1;
              goto code_r0x000100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar21 = *(long *)(param_1 + 0x10);
          unaff_x24 = *(byte **)(param_1 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_1;
          if (param_1 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_1 = param_1 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_1;
          unaff_x25 = param_2;
          if (param_1 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_1;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_2 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,param_4
                            ,param_5);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_5;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar10 = *(byte **)pbVar8;
    param_1 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_2 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_1;
    if (bVar23 < 3) {
      if (bVar23 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          return (byte *)(ulong)((uint)pbVar10 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar23 == 1) {
        if (pbVar11[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar14 = *(byte **)(pbVar11 + 0x10);
        lVar21 = *(long *)pbVar11;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar21,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 == pbVar13) && (param_2 == pbVar14)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar11[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        lVar21 = *(long *)(pbVar11 + 0x18);
        if ((pbVar10 == pbVar13) && (param_1 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar21 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar21);
          func_0x000107c61174();
          pbVar11 = pbVar20;
          func_0x000107c60118();
          func_0x000107c61170(pbVar20);
          func_0x000107c61170(lVar21);
          pbVar20 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar20 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar10,pbVar12,pbVar13,pbVar14,0);
      return pbVar10;
    }
    lVar22 = *(long *)(pbVar8 + 0x20);
    if (bVar23 < 5) {
      if (bVar23 != 3) {
        if (pbVar11[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        if (((pbVar10 == pbVar13) && (param_1 == pbVar14)) &&
           (pbVar10 = param_2, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_2 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar11[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar14 = *(byte **)(pbVar11 + 0x10);
      lVar21 = *(long *)(pbVar11 + 0x20);
      if (param_2 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 != pbVar13) || (param_2 != pbVar14)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar21 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar21 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar23 != 5) {
      if ((((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_2 == (byte *)0x0) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar11 + 0x20);
        lVar21 = *(long *)(pbVar11 + 0x18);
        bVar23 = pbVar11[8] | (byte)lVar21;
        bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
        bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
        bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
        bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
        bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
        bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
        bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
        bVar31 = pbVar11[0x10] | (byte)lVar22;
        bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar39[1] = bVar24;
        auVar39[0] = bVar23;
        auVar39[2] = bVar25;
        auVar39[3] = bVar26;
        auVar39[4] = bVar27;
        auVar39[5] = bVar28;
        auVar39[6] = bVar29;
        auVar39[7] = bVar30;
        auVar39[8] = bVar31;
        auVar39[9] = bVar32;
        auVar39[10] = bVar33;
        auVar39[0xb] = bVar34;
        auVar39[0xc] = bVar35;
        auVar39[0xd] = bVar36;
        auVar39[0xe] = bVar37;
        auVar39[0xf] = bVar38;
        auVar3[1] = bVar24;
        auVar3[0] = bVar23;
        auVar3[2] = bVar25;
        auVar3[3] = bVar26;
        auVar3[4] = bVar27;
        auVar3[5] = bVar28;
        auVar3[6] = bVar29;
        auVar3[7] = bVar30;
        auVar3[8] = bVar31;
        auVar3[9] = bVar32;
        auVar3[10] = bVar33;
        auVar3[0xb] = bVar34;
        auVar3[0xc] = bVar35;
        auVar3[0xd] = bVar36;
        auVar3[0xe] = bVar37;
        auVar3[0xf] = bVar38;
        auVar39 = NEON_ext(auVar39,auVar3,8,1);
        if (CONCAT17(bVar30 | auVar39[7],
                     CONCAT16(bVar29 | auVar39[6],
                              CONCAT15(bVar28 | auVar39[5],
                                       CONCAT14(bVar27 | auVar39[4],
                                                CONCAT13(bVar26 | auVar39[3],
                                                         CONCAT12(bVar25 | auVar39[2],
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && param_2 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar11 + 0x20);
      lVar21 = *(long *)(pbVar11 + 0x18);
      bVar23 = pbVar11[8] | (byte)lVar21;
      bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
      bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
      bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
      bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
      bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
      bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
      bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
      bVar31 = pbVar11[0x10] | (byte)lVar22;
      bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar24;
      auVar1[0] = bVar23;
      auVar1[2] = bVar25;
      auVar1[3] = bVar26;
      auVar1[4] = bVar27;
      auVar1[5] = bVar28;
      auVar1[6] = bVar29;
      auVar1[7] = bVar30;
      auVar1[8] = bVar31;
      auVar1[9] = bVar32;
      auVar1[10] = bVar33;
      auVar1[0xb] = bVar34;
      auVar1[0xc] = bVar35;
      auVar1[0xd] = bVar36;
      auVar1[0xe] = bVar37;
      auVar1[0xf] = bVar38;
      auVar2[1] = bVar24;
      auVar2[0] = bVar23;
      auVar2[2] = bVar25;
      auVar2[3] = bVar26;
      auVar2[4] = bVar27;
      auVar2[5] = bVar28;
      auVar2[6] = bVar29;
      auVar2[7] = bVar30;
      auVar2[8] = bVar31;
      auVar2[9] = bVar32;
      auVar2[10] = bVar33;
      auVar2[0xb] = bVar34;
      auVar2[0xc] = bVar35;
      auVar2[0xd] = bVar36;
      auVar2[0xe] = bVar37;
      auVar2[0xf] = bVar38;
      auVar39 = NEON_ext(auVar1,auVar2,8,1);
      lVar21 = CONCAT17(bVar30 | auVar39[7],
                        CONCAT16(bVar29 | auVar39[6],
                                 CONCAT15(bVar28 | auVar39[5],
                                          CONCAT14(bVar27 | auVar39[4],
                                                   CONCAT13(bVar26 | auVar39[3],
                                                            CONCAT12(bVar25 | auVar39[2],
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_4 = *(long *)(pbVar11 + 8);
    param_5 = *(ulong *)(pbVar11 + 0x10);
    lVar21 = *(long *)pbVar11;
    uVar9 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar10,lVar21,uVar9);
    if (((ulong)pbVar10 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}


